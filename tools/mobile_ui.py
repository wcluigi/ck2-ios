r"""Phone UI overlay: the game's own menus re-laid out for a phone, written as the game's own files.

    python -I tools/mobile_ui.py <game folder> [out folder]       default out: mobile_overlay/ next to tools/

Reads <game>/data/config/{GUI,GUILogin,GUIChooseChannel}.xml (KartRes-encoded) and data/GUI/IMAGE, writes
<out>/data/config/*.xml (encoded, only geometry / Visible changed) and <out>/data/GUI/IMAGE/... (upscaled
textures for the controls that grew, in the game's TEA form). On the phone the folder sits at <game>/mobile/
(runtime/mobile/plat.c host_path takes data/... from there first; hud.c turns its lobby remap off when
mobile/data/config/GUI.xml exists). The PC release is never touched.

Canvas: the client draws an 800x600 design centred at H/600; the phone's 1280x720 shows design x -133..933.
Layout follows mobile MOBA conventions (the user, 8 Nov 2026):
  * lobby / room   the list (room rows, player cards) left at 1:1 (the game fills it from the XML rects), a hub
                   on the right: logo, event icons, feature tiles, one big play button (Quick Join, new art;
                   Ready/Start keeps the game's texture) over the player box (Level / Score) bottom-right
  * chat           a dock bottom-left: channel tabs, lines, input, and on its bar send / emoticons / bugle /
                   help / friends / players online; history and quick messages open above it (left drawer)
  * friends        the friend / online list opens as a right drawer
  * shop           category tabs down the left edge, the goods beside them
  * other screens  with the right button column: panel left, column 1.43x (55 px tall buttons on the phone)
  * login / server pick / channel pick enlarged the same way
New textures: Mobile\ChatDock.png and Mobile\PlayerBox.png (TextFrame.png split), the Quick Join button.

    --preview <dir>   also render the phone screens (UI Lab's drawing rules) to <dir>/*.png
"""
import io
import os
import re
import struct
import sys
import zlib

from PIL import Image, ImageFilter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ck2png import decode as png_decode, encode as png_encode   # noqa: E402

L, R = -133, 933                 # design x visible on a 16:9 phone (1280x720)
SCREEN = 1.2                     # design px -> phone px (720 / 600)
CHAT_TOP = 462


# ---------------------------------------------------------------- KartRes cipher (data/config/*.xml)
def kr_decode(data):
    out = bytearray(data)
    n = len(data) // 4
    for i in range(n):
        d = int.from_bytes(data[i * 4:i * 4 + 4], "little") ^ 0xA8B2C5B6
        d = ~(((d << 4) | (d >> 28)) & 0xFFFFFFFF) & 0xFFFFFFFF
        out[i * 4:i * 4 + 4] = d.to_bytes(4, "little")
    for i in range(n * 4, len(data)):
        b = data[i]
        out[i] = ~(((b << 4) | (b >> 4)) & 0xFF) & 0xFF
    return bytes(out)


def kr_encode(data):
    out = bytearray(data)
    n = len(data) // 4
    for i in range(n):
        d = ~int.from_bytes(data[i * 4:i * 4 + 4], "little") & 0xFFFFFFFF
        d = ((d >> 4) | (d << 28)) & 0xFFFFFFFF
        out[i * 4:i * 4 + 4] = (d ^ 0xA8B2C5B6).to_bytes(4, "little")
    for i in range(n * 4, len(data)):
        b = ~data[i] & 0xFF
        out[i] = ((b >> 4) | (b << 4)) & 0xFF
    return bytes(out)


# ---------------------------------------------------------------- layout files (text kept byte-exact)
TAG = re.compile(r'<(/?)(\w+)((?:\s+[\w:]+="[^"]*")*)\s*(/?)>')
GEOM = ("x", "y", "Width", "Height")
BUTTONS = {"Button", "CheckBtn", "ButtonEx", "TextButton", "RoomButton", "MenuItem", "ServerButton"}


class Ctl:
    def __init__(self, tag, attrs, s, e, parent):
        self.tag, self.s, self.e, self.parent, self.kids = tag, s, e, parent, []
        self.a = dict(re.findall(r'([\w:]+)="([^"]*)"', attrs))
        self.id = self.a.get("ID", tag)
        self.orig = tuple(int(float(self.a.get(k, "0"))) for k in GEOM) if "x" in self.a else None
        self.cur = list(self.orig) if self.orig else None
        self.vis = self.a.get("Visible")
        self.vis0 = self.vis
        self.texnew = None

    def descendants(self):
        for k in self.kids:
            yield k
            yield from k.descendants()

    def tex(self):
        return self.texnew or self.a.get("TextureName", "")


class Layout:
    def __init__(self, path, relative=False):
        self.path, self.relative = path, relative
        self.text = kr_decode(open(path, "rb").read()).decode("utf-8", "surrogateescape")
        self.roots, self.all, stack = [], [], []
        for m in TAG.finditer(self.text):
            close, tag, attrs, selfclose = m.groups()
            if close:
                stack.pop()
                continue
            c = Ctl(tag, attrs, m.start(), m.end(), stack[-1] if stack else None)
            (stack[-1].kids if stack else self.roots).append(c)
            self.all.append(c)
            if not selfclose:
                stack.append(c)
        assert not stack, f"unbalanced tags in {path}"

    def screens(self):
        return [(sec, f) for root in self.roots for sec in root.kids for f in sec.kids if f.cur]

    def frame(self, fid):
        return next(f for _s, f in self.screens() if f.id == fid)

    def changed(self):
        return [c for c in self.all if (c.cur and tuple(c.cur) != c.orig) or c.vis != c.vis0 or c.texnew]

    def render(self):
        out, pos = [], 0
        for c in self.all:
            if not ((c.cur and tuple(c.cur) != c.orig) or c.vis != c.vis0 or c.texnew):
                continue
            tag = self.text[c.s:c.e]
            if c.cur:
                for k, v in zip(GEOM, c.cur):
                    tag = re.sub(r'(\s%s=")[^"]*(")' % k, lambda m, v=v: m.group(1) + str(int(round(v))) + m.group(2), tag, count=1)
            if c.vis != c.vis0:
                tag = re.sub(r'(\sVisible=")[^"]*(")', lambda m: m.group(1) + c.vis + m.group(2), tag, count=1)
            if c.texnew:
                if re.search(r'\sTextureName="', tag):
                    tag = re.sub(r'(\sTextureName=")[^"]*(")', lambda m: m.group(1) + c.texnew + m.group(2), tag, count=1)
                else:
                    tag = re.sub(r'(\sWidth=")', ' TextureName="%s"\\1' % c.texnew.replace('\\', '\\\\'), tag, count=1)
            out += [self.text[pos:c.s], tag]
            pos = c.e
        out.append(self.text[pos:])
        return kr_encode("".join(out).encode("utf-8", "surrogateescape"))


# ---------------------------------------------------------------- geometry helpers
SCALED = {}          # texture name (lower) -> largest growth of a control using it (new size / old size)


def note_scale(c, f):
    t = c.tex()
    if t and f > 1.0:
        SCALED[t.lower()] = (t, max(f, SCALED.get(t.lower(), (t, 0))[1]))


def place(c, x, y, w=None, h=None):
    c.cur = [x, y, c.cur[2] if w is None else w, c.cur[3] if h is None else h]
    if c.orig[2] and c.orig[3]:
        note_scale(c, max(c.cur[2] / c.orig[2], c.cur[3] / c.orig[3]))


def shift(c, dx, dy=0, tree=True):
    for k in [c] + (list(c.descendants()) if tree else []):
        if k.cur:
            k.cur[0] += dx
            k.cur[1] += dy


def scale_about(c, ox, oy, nx, ny, s, tree=True, sy=None):
    """Map a control (and its subtree) from origin (ox, oy) to (nx, ny), scaled s (sy vertically)."""
    sy = s if sy is None else sy
    for k in [c] + (list(c.descendants()) if tree else []):
        if k.cur:
            x, y, w, h = k.orig if k.cur == list(k.orig) else k.cur
            place(k, nx + (x - ox) * s, ny + (y - oy) * sy, w * s, h * sy)


# ---------------------------------------------------------------- the phone layout
RAIL_ICONS = ["EmotionBtn", "BugleBtn", "GreenerHelpBtn", "FriendBtn", "OnlinePlayerBtn"]
RAIL_X, RAIL_W, RAIL_Y0, RAIL_STEP = -126, 46, 14, 58
PANEL_DX = -138                   # left panel 11..624 -> -127..486
COL_S = 1.43                      # right button column
COL_X = R - 6 - 163 * COL_S       # 694
COL_Y0, COL_BTN_Y0 = 4, 84        # logo top, first button top
GAP_X0 = 486 + 40                 # icon grid between the panel and the column
CHAT_SX = (R - 6 - (L + 6)) / 800.0


def col_map(c):
    """The right column's controls: 1.43x; logo pinned to the top, buttons from y 84 on."""
    x, y, w, h = c.orig
    nx = COL_X + (x - 626) * COL_S
    if c.tex().lower().endswith("nav.png") or c.tex().lower().endswith("listbg.png") or h >= 590:
        place(c, COL_X, 0, 163 * COL_S, 600 - 98 * 1.15 - 4)       # the column's backing, above the player box
        return
    if y < 80:                                                    # logo strip / close button row
        place(c, nx, COL_Y0 + (y - 33) * COL_S if y >= 33 else y, w * COL_S, h * COL_S)
        return
    place(c, nx, COL_BTN_Y0 + (y - 86) * COL_S, w * COL_S, h * COL_S)


def channel_screen(f, base=False):
    """A GUI.xml screen with the right button column (lobby, room, create room, my info, ...)."""
    icons = []
    for c in f.kids:
        if not c.cur:
            continue
        x, y, w, h = c.orig
        hidden = c.vis0 == "0"
        if c.id.lower().startswith("rightkuang") or (x >= 610 and w <= 200):
            scale_col(c, icons)
        elif hidden and w >= 700:                                 # full-screen popup layers stay centred
            continue
        elif hidden and x > 100 and x + w < 700:                  # centred dialogs stay centred
            continue
        else:
            shift(c, PANEL_DX)
    grid(icons)


def scale_col(c, icons):
    for k in [c] + list(c.descendants()):
        if not k.cur:
            continue
        x, y, w, h = k.orig
        small_icon = k.tag in BUTTONS and 25 <= w <= 45 and h >= 38 and y >= 330
        if small_icon:
            icons.append(k)
        elif k.id.lower().startswith("adimage") or k.id == "ReadyTipImage":
            k.vis = "0"                                           # the ad slot does not fit above the chat strip
        else:
            col_map(k)
            if k.cur[1] + k.cur[3] > CHAT_TOP and k.cur[3] < 590:
                k.vis = "0"


def grid(icons):
    icons.sort(key=lambda k: (k.orig[1], k.orig[0]))
    for i, k in enumerate(icons):
        cx, cy = GAP_X0 + (i % 2) * 64, 92 + (i // 2) * 72
        w, h = k.orig[2] * 1.35, k.orig[3] * 1.35
        place(k, cx + (58 - w) / 2, cy, w, h)


def base_frame(f):
    """GameChannelFrame: backgrounds, the chat strip across the width, the rail."""
    for c in f.kids:
        if not c.cur:
            continue
        x, y, w, h = c.orig
        if c.id == "backBG2":
            place(c, L + 4, y, R - L - 8, h)
        elif c.id in ("ChatFrame", "ChatBarFrame", "SwitchChatChannelFrm", "QuickMsgPromptFrame", "ChatHistoryFrame",
                      "SelChatNameFrame"):
            chat_stretch(c)
        elif c.id in ("MyFriendFrame", "FriendPanel", "FrmOnlinePlayerMenu"):
            shift(c, (L + RAIL_W + 14) - 451)                     # friend list opens beside the rail
        elif c.id == "SelEmotionFrame":
            shift(c, (L + RAIL_W + 14) - x, 10 - y)
    for i, cid in enumerate(RAIL_ICONS):
        k = next(k for k in f.descendants() if k.id == cid)
        place(k, RAIL_X, RAIL_Y0 + i * RAIL_STEP, RAIL_W, RAIL_W)


def chat_stretch(c):
    for k in [c] + list(c.descendants()):
        if not k.cur or k.id in RAIL_ICONS:
            continue
        x, y, w, h = k.orig
        if w >= 120:                                              # bars, text lines, menus: stretch
            place(k, L + 6 + x * CHAT_SX, y, w * CHAT_SX, h)
        else:                                                     # icons and small buttons keep their size
            cx = L + 6 + (x + w / 2) * CHAT_SX
            place(k, cx - w / 2, y, w, h)


def login(lay):
    f = lay.frame("LoginFrame")
    bar = next(k for k in f.kids if k.id == "OnePLoginFrame")
    s = 1.3
    for k in [bar] + list(bar.descendants()):
        if not k.cur:
            continue
        x, y, w, h = k.orig
        if y > 600:                                               # parked off screen by the designers
            continue
        nx = L + 6 + x * CHAT_SX
        place(k, nx, 596 - (596 - y) * s, w * CHAT_SX if w > 200 else w * s, h * s)
    for fr in (f, lay.frame("ChooseAreaFrame")):
        for k in fr.kids:
            if k.id == "LoginBg" and k.cur:                       # the 4:3 photo covers the phone's width (cropped, not stretched)
                place(k, L, -110, R - L, 800)
    a = lay.frame("ChooseAreaFrame")
    for k in a.kids:
        if not k.cur:
            continue
        x, y, w, h = k.orig
        if k.id in ("ggpic", "ggpic2", "LoginMaskImg"):
            k.vis = "0"                                           # the enlarged server list needs its place
        elif k.id == "ChooseBG" or k.id.startswith("Area") or k.id in ("exit", "zhuce", "PageSumText"):
            place(k, L + 8 + (x - 9) * s, 596 - (596 - y) * s, w * s, h * s)
        elif k.id == "LoginLogo":
            shift(k, 70, 0, tree=False)


def choose_channel(lay):
    f = lay.frame("ChooseChannelDesktop")
    for k in f.descendants():
        if not k.cur:
            continue
        x, y, w, h = k.orig
        if k.id.startswith("backbg"):
            continue
        if x >= 610 and w <= 200:
            if h >= 590:
                place(k, COL_X, 0, 176 * COL_S, 600)
            else:
                place(k, COL_X + (x - 624) * COL_S, COL_BTN_Y0 - 20 + (y - 70) * COL_S, w * COL_S, h * COL_S)
                if k.cur[1] + k.cur[3] > 596:
                    k.vis = "0"
        elif k.tag in ("Frame", "AnimFrame", "Image", "ImageUV") and w >= 600:
            if k.id in ("ChooseChannelBG", "NewComerBG"):
                shift(k, PANEL_DX, 0, tree=False)
        elif x < 610:
            shift(k, PANEL_DX, 0, tree=False)


# ---------------------------------------------------------------- MOBA-style hub (mobile MOBA conventions)
# Lobby / room: the list (room rows, player cards) on the left at 1:1 -- the game fills those rows from their XML
# rectangles, so they move but never resize; on the right a hub: logo, a row of event icons, feature tiles and one
# big play button (Quick Join / Ready) bottom-right, over the player box. Chat is a dock bottom-left with its
# channel tabs and the social buttons (emoticons, bugle, help, friends, players online) on its bar; the chat
# history and quick-message panels open above it as a left drawer, the friend list as a right drawer.
HUB_X = 505                       # right zone x0 (lists end at ~491)
HUB_R = R - 6
TILE_W, TILE_H = 205, 41          # 159x32 buttons at 1.29
PLAY = (HUB_X, 336, HUB_R - HUB_X, 116)
DOCK_X = L + 4                    # chat dock
PLAYER_BOX = (699, 466, 1.3)
LIST_DX = (L + 6) - 11            # 11 -> -127
NEW_ART = {}                      # texture name -> PIL image (4-state strip) to write


def tiles(ctrls, y0=142, cols=2):
    gap = (HUB_R - HUB_X - cols * TILE_W) / max(1, cols - 1)
    for i, k in enumerate(ctrls):
        place(k, HUB_X + (i % cols) * (TILE_W + gap), y0 + (i // cols) * (TILE_H + 7), TILE_W, TILE_H)


def event_icons(ctrls, y=78):
    n = len(ctrls)
    step = (HUB_R - HUB_X) / max(1, n)
    for i, k in enumerate(sorted(ctrls, key=lambda k: (k.orig[1], k.orig[0]))):
        w, h = k.orig[2] * 1.15, k.orig[3] * 1.15
        place(k, HUB_X + i * step + (step - w) / 2, y, w, h)


def hub_logo(k):
    place(k, HUB_X + (HUB_R - HUB_X - 208) / 2, 6, 208, 66)


def big_play(k, label, sub, game=None):
    x, y, w, h = PLAY
    place(k, x, y, w, h)
    t = k.tex()
    if t:
        try:
            import gen_art
            cell = gen_art.big_button(round(w * SCREEN), round(h * SCREEN), label, sub, icon=gen_art.lightning(64))
            NEW_ART[t] = gen_art.states(cell)
        except Exception as e:                      # art is optional: the old texture just stretches
            print("  play button art:", e)


def hub_backing(k):
    """The column's nav.png backing becomes the hub's panel (behind logo, icons, tiles)."""
    place(k, HUB_X - 8, 0, HUB_R - HUB_X + 14, 600 - 98 * 1.15 - 4)        # ends above the player box


def base_moba(f):
    for c in f.kids:
        if not c.cur:
            continue
        x, y, w, h = c.orig
        if c.id == "backBG2":
            place(c, L + 4, y, R - L - 8, h)
        elif c.id == "ChatFrame":
            for k in [c] + list(c.descendants()):
                if k.cur:
                    shift(k, DOCK_X - 2 - 0, 0, tree=False)
            bg = next(k for k in c.kids if k.id == "ChatBGImage")
            bg.texnew = "Mobile\\ChatDock.png"                  # TextFrame.png's chat part, 3-sliced to the dock
            place(bg, DOCK_X, bg.orig[1], 690, bg.orig[3])
            mini = next(k for k in c.kids if k.id == "MiniInfoFrame")
            ps = 1.15                                            # TextFrame.png's Level / Score box, bottom-right
            bx, by = HUB_R - 201 * ps, 598 - 98 * ps
            for k in list(mini.descendants()):
                kx, ky, kw, kh = k.orig
                place(k, bx + (kx - 596) * ps, by + (ky - 464) * ps, kw * ps, kh * ps)
            mini.texnew = "Mobile\\PlayerBox.png"
            place(mini, bx, by, 201 * ps, 98 * ps)
            NEW_ART["Mobile\\ChatDock.png"] = ("chatdock", 690, 98)
            NEW_ART["Mobile\\PlayerBox.png"] = ("playerbox", 201 * ps, 98 * ps)
            dtl = next(k for k in c.kids if k.id == "DtlFrm")
            for k in [dtl] + list(dtl.descendants()):
                kx, ky, kw, kh = k.orig
                place(k, kx + (HUB_R - 196 - 596), ky + 120, kw, kh)
        elif c.id == "ChatBarFrame":
            for k in [c] + list(c.descendants()):
                if k.cur:
                    kx, ky, kw, kh = k.orig
                    place(k, kx + DOCK_X - 2, ky, kw, kh)
            place(c, DOCK_X, 558, 690, 40)
            bar = {k.id: k for k in c.kids}
            place(bar["ChatContentEdit"], DOCK_X + 140, 564, 270, 28)
            for i, cid in enumerate(["SendMsgBtn", "EmotionBtn", "BugleBtn", "GreenerHelpBtn", "FriendBtn", "OnlinePlayerBtn"]):
                place(bar[cid], DOCK_X + 420 + i * 44, 559, 38, 38)
        elif c.id in ("ChatHistoryFrame", "QuickMsgPromptFrame"):
            shift(c, DOCK_X - x, 458 - (y + h))                     # left drawer above the dock
        elif c.id in ("SwitchChatChannelFrm", "SelChatNameFrame"):
            shift(c, DOCK_X - 3 - x + 4, 0)
        elif c.id in ("MyFriendFrame", "FriendPanel", "FrmOnlinePlayerMenu"):
            shift(c, HUB_R - 796)                                   # right drawer
        elif c.id == "SelEmotionFrame":
            shift(c, DOCK_X + 420 + 44 - x, 556 - (y + h))


def moba_lobby(f):
    icons, col = [], {}
    for c in f.kids:
        if not c.cur:
            continue
        if c.id in ("GameRoomBG", "AnimPanel"):
            shift(c, LIST_DX)
        elif c.id == "rightkuang":
            hub_backing(c)
            for k in c.descendants():
                col[k.id] = k
                if k.tag in BUTTONS and 25 <= k.orig[2] <= 45 and k.orig[3] >= 38:
                    icons.append(k)
        elif c.id == "frmShieldGameRoom":
            for k in c.descendants():
                if k.id == "CreateRoomCheckBtn":
                    pass                                            # placed with the Create Room tile below
        elif c.id == "CheckBlog":
            shift(c, LIST_DX)
    hub_logo(col["logo"])
    event_icons(icons)
    tiles([col[i] for i in ("ShoppingBtn", "QuickBuyCarBtn", "TreasureBtn", "MySpace1Btn", "TaskBtn", "CreateRoomBtn",
                            "GameRoomBackBtn")])
    big_play(col["QuickEnterBtn"], "QUICK JOIN", "快速加入")
    place(col["btnEvent"], *PLAY)
    place(col["btnCommonBack"], HUB_R - 30, 6, 28, 27)
    shield = next(k for k in f.descendants() if k.id == "CreateRoomCheckBtn")
    ct = col["CreateRoomBtn"]
    place(shield, *ct.cur)


def moba_room(f):
    col = {}
    for c in f.kids:
        if not c.cur:
            continue
        if c.id in ("WaitingRoomBG01", "FrmFlowerRain"):
            shift(c, LIST_DX)
        elif c.id in ("rightkuang", "rightkuangE"):
            hub_backing(c)
            for k in c.descendants():
                col[k.id] = k
    for i in ("newlogo", "newlogoE"):
        hub_logo(col[i])
    tiles([col[i] for i in ("ChangeTeamBtn", "RoomSettingBtn", "MySpaceBtn", "WaitRoomGotoShopBtn", "RacePrepareBackBtn")], y0=82)
    tiles([col["RaceEventBackBtn"]], y0=82)
    small = [col[i] for i in ("btnToMapDlg", "btnToCarDlg", "btnVoice", "btnTranslate")]
    sw = (HUB_R - HUB_X - 3 * 6) / 4
    for i, k in enumerate(small):
        place(k, HUB_X + i * (sw + 6), 236, sw, sw * 24 / 68)
    x, y, w, h = PLAY                                               # Ready / Start: drawn by the game, keep 5:1
    place(col["GoBtn"], x, y + 14, w, w / 5)
    for i in ("AdImage", "ReadyTipImage"):
        col[i].vis = "0"


SHOP_CONTENT = ("ItemShopFrame", "ItemShopFrameCar", "ItemShopPresentFrame", "CashFrame")


def shop(gui):
    """Shopping mall: category tabs down the left edge, the goods beside them (MOBA shop)."""
    menu = gui.frame("ShoppingBtnFrame")
    for k in menu.descendants():
        if not k.cur:
            continue
        if k.id == "btnBack":
            place(k, HUB_R - 26, 6, 26, 25)
        elif k.orig[0] < 230:
            shift(k, L + 6, 0, tree=False)
    for fid in SHOP_CONTENT:
        fr = gui.frame(fid)
        dx = (L + 6 + 213 + 6) - 58
        for k in [fr] + list(fr.descendants()):
            if k.cur:
                shift(k, dx, 0, tree=False)


def build(game):
    cfg = os.path.join(game, "data", "config")
    gui = Layout(os.path.join(cfg, "GUI.xml"))
    import design_ui
    for _sec, f in gui.screens():
        if f.id in ("GameChannelFrame", "GameRoomFrame", "WaitingRoomFrame"):
            continue                                  # the Claude design (design_ui.py)
        elif any(k.id.lower().startswith("rightkuang") and k.orig and abs(k.orig[0] - 626) <= 4 for k in f.kids):
            channel_screen(f)
    log = Layout(os.path.join(cfg, "GUILogin.xml"))
    login(log)
    ch = Layout(os.path.join(cfg, "GUIChooseChannel.xml"))
    design_ui.build(gui, game, ch)
    return {"GUI.xml": gui, "GUILogin.xml": log, "GUIChooseChannel.xml": ch}


# ---------------------------------------------------------------- textures
def find_texture(game, name):
    p = os.path.join(game, "data", "GUI", "IMAGE")
    parts = name.replace("\\", "/").split("/")
    for part in parts:
        if not os.path.isdir(p):
            return None
        m = [e for e in os.listdir(p) if e.lower() == part.lower()]
        if not m:
            return None
        p = os.path.join(p, m[0])
    return p if os.path.isfile(p) else None


def load_texture(game, name):
    p = find_texture(game, name)
    if not p:
        return None, None
    data = png_decode(open(p, "rb").read())
    return Image.open(io.BytesIO(data)), os.path.relpath(p, os.path.join(game, "data", "GUI", "IMAGE"))


def upscale(im, f):
    """Lanczos to f (rounded to whole pixels per state cell), then a light sharpen against the softening."""
    w, h = im.size
    nw, nh = max(1, round(w * f)), max(1, round(h * f))
    mode = im.mode
    src = im.convert("RGBA")
    big = src.resize((nw, nh), Image.LANCZOS)
    r, g, b, a = big.split()
    rgb = Image.merge("RGB", (r, g, b)).filter(ImageFilter.UnsharpMask(radius=1.2, percent=70, threshold=2))
    out = Image.merge("RGBA", (*rgb.split(), a))
    return out if mode == "RGBA" else out.convert("RGBA")


def recipe(game, kind, w, h):
    tf, _ = load_texture(game, "GameChannel\\TextFrame.png")
    tf = tf.convert("RGBA")
    W, H = round(w * SCREEN), round(h * SCREEN)
    if kind == "playerbox":
        return upscale(tf.crop((597, 0, 800, 98)), W / 203)
    chat = tf.crop((0, 0, 597, 98)).resize((round(597 * H / 98), H), Image.LANCZOS)
    e = round(24 * H / 98)                             # 3-slice: rounded ends kept, the middle stretched
    out = Image.new("RGBA", (W, H), (0, 0, 0, 0))
    out.paste(chat.crop((0, 0, e, H)), (0, 0))
    out.paste(chat.crop((e, 0, chat.width - e, H)).resize((W - 2 * e, H), Image.LANCZOS), (e, 0))
    out.paste(chat.crop((chat.width - e, 0, chat.width, H)), (W - e, 0))
    return out


def write_textures(game, out):
    n = 0
    for _k, (name, f) in sorted(SCALED.items()):
        need = f * SCREEN                       # texture px per design px of the original control, on the phone
        if need < 1.15:
            continue
        im, rel = load_texture(game, name)
        if im is None:
            print("  missing texture", name)
            continue
        big = upscale(im, min(need, 3.0))
        dst = os.path.join(out, "data", "GUI", "IMAGE", rel)
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        buf = io.BytesIO()
        big.save(buf, "PNG", optimize=True)
        open(dst, "wb").write(png_encode(buf.getvalue()))
        n += 1
    import design_ui
    import design_generic
    art = design_ui.draw()                             # the Claude design's art (EN, and CN for CN/data/...)
    cfg = os.path.join(game, "data", "config")
    lays = [Layout(os.path.join(cfg, n)) for n in ("GUI.xml", "Dialogs.xml")]
    for name, pair in design_generic.run(lays, game, design_ui.HAND_LAID, list(art)).items():
        art.setdefault(name, pair)                     # every other screen and dialog: relabelled / recoloured
    for name, (en, cn) in art.items():
        p = find_texture(game, name)
        rel = os.path.relpath(p, os.path.join(game, "data", "GUI", "IMAGE")).replace(os.sep, "/") if p else name.replace("\\", "/")
        for base, im in (("data", en), ("CN/data", cn)):
            if im is None:
                continue
            dst = os.path.join(out, base, "GUI", "IMAGE", rel)
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            buf = io.BytesIO()
            im.save(buf, "PNG", optimize=True)
            open(dst, "wb").write(png_encode(buf.getvalue()))
            n += 1
    for name, im in NEW_ART.items():                 # newly drawn art replaces the upscale
        if isinstance(im, tuple):
            im = recipe(game, *im)
        p = find_texture(game, name)
        rel = os.path.relpath(p, os.path.join(game, "data", "GUI", "IMAGE")) if p else name.replace("\\", "/")
        dst = os.path.join(out, "data", "GUI", "IMAGE", rel)
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        buf = io.BytesIO()
        im.save(buf, "PNG", optimize=True)
        open(dst, "wb").write(png_encode(buf.getvalue()))
        n += 1
    return n


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    if not args:
        sys.exit(__doc__)
    game = args[0]
    out = args[1] if len(args) > 1 else os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "mobile_overlay")
    lays = build(game)
    os.makedirs(os.path.join(out, "data", "config"), exist_ok=True)
    for name, lay in lays.items():
        open(os.path.join(out, "data", "config", name), "wb").write(lay.render())
        print(f"{name}: {len(lay.changed())} controls moved / resized")
    print(f"textures: {write_textures(game, out)} upscaled")
    if "--preview" in sys.argv:
        import preview_ui
        preview_ui.run(game, out, sys.argv[sys.argv.index("--preview") + 1])


if __name__ == "__main__":
    main()
