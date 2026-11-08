r"""The Claude design (webui/index.html, "CrazyKart Legacy Mobile") applied to the game's own screens on phones.

Used by mobile_ui.py: every control keeps its game behaviour; only its place, size and texture change. Art comes from
design_art.py (the design's CSS drawn by headless Edge), EN + CN. Things the design shows that the game does not have
(wallet chips, room-number search, the 3D hub, a leave-room confirmation) are left out on purpose.

Coordinates are the game's 800x600 design px; a 16:9 phone shows x -133..933 (L..R), 1 design px = 1.2 phone px.
"""
import base64
import io

from design_art import Piece, render, btn, play, chip, tile, panel, back, K

L, R = -133, 933
X0, X1 = L + 6, R - 6            # safe content edges
S = 1.2                           # design px -> phone px
GAME = None                       # game folder (for icons taken from the game's own textures)

PIECES = []                       # Piece list for this run
ASSIGN = []                       # (texture name, piece key)


def css(v):
    """design px -> CSS px inside a piece"""
    return round(v * S / K, 2)


def art(c, key, html, states=1, cn=None, on=None, on_cn=None, name=None, vertical=False, size=None):
    """Give control c a new texture drawn from design markup, sized to its (new) rect."""
    w, h = size or (c.cur[2], c.cur[3])
    name = name or "Mobile\\D\\" + key + ".png"
    if not any(p.key == key for p in PIECES):
        PIECES.append(Piece(key, w * S, h * S, html, states, cn, on, on_cn, vertical))
        ASSIGN.append((name, key))
    c.texnew = name
    return name


def override(name, key, w, h, html, states=4, cn=None):
    """Replace a texture the game picks at run time (by its file name)."""
    PIECES.append(Piece(key, w * S, h * S, html, states, cn))
    ASSIGN.append((name, key))


def put(c, x, y, w=None, h=None):
    """Move (and resize) one control; children follow the move, not the resize."""
    dx, dy = x - c.cur[0], y - c.cur[1]
    for k in c.descendants():
        if k.cur:
            k.cur[0] += dx
            k.cur[1] += dy
    c.cur = [x, y, c.cur[2] if w is None else w, c.cur[3] if h is None else h]


def rect(c, x, y, w, h):
    """Resize a backing image / panel in place; its children stay where they are."""
    c.cur = [x, y, w, h]


def move_group(ctrls, dx, dy):
    for c in ctrls:
        for k in [c] + list(c.descendants()):
            if k.cur:
                k.cur[0] += dx
                k.cur[1] += dy


def ids(frame):
    return {k.id: k for k in [frame] + list(frame.descendants())}


def game_icon(c):
    """First state cell of a control's own button texture, as a data URI (icon tiles keep the game's art)."""
    from mobile_ui import load_texture
    im, _ = load_texture(GAME, c.tex())
    if im is None:
        return ""
    im = im.convert("RGBA")
    w, h = im.size
    cw, ch = c.orig[2], c.orig[3]
    n = round((w / h) / (cw / ch))                     # cells side by side (4 for a Button strip)
    if n >= 2:
        im = im.crop((0, 0, w // n, h))
    buf = io.BytesIO()
    im.save(buf, "PNG")
    return "data:image/png;base64," + base64.b64encode(buf.getvalue()).decode()


def caps(text, x, y, size=9.5, color="var(--ink3)"):
    """A small uppercase label (the design's .cap) at design px x, y inside a piece."""
    return (f'<span style="position:absolute;left:{css(x)}px;top:{css(y)}px;font:700 {size}px var(--b);color:{color};'
            f'letter-spacing:.08em;text-transform:uppercase;white-space:nowrap">{text}</span>')


def box(x, y, w, h, style):
    return f'<i style="position:absolute;left:{css(x)}px;top:{css(y)}px;width:{css(w)}px;height:{css(h)}px;{style}"></i>'


CARD = "border-radius:8px;background:linear-gradient(180deg,#1b1e27,#0b0c11);box-shadow:inset 0 0 0 1px rgba(255,255,255,.16)"
GLASS = ("border-radius:10px;background:rgba(13,15,21,.66);box-shadow:inset 0 0 0 1px rgba(255,255,255,.09),"
         "inset 0 1px 0 rgba(255,255,255,.08)")


def layer(*parts, extra=""):
    return f'<div style="position:relative;{extra}">' + "".join(parts) + "</div>"


# ---------------------------------------------------------------- the frame every menu screen sits in
CHAT = (X0, 470, 600, 128)        # chat dock: x, y, w, h
CHAT_BAR_H = 34
PLATE = (X1 - 216, 6, 176, 70)    # player box (Level / Score) top-right


def base(f):
    c = ids(f)
    # backgrounds: the design's dark stage with its red / cyan glows
    rect(c["backBG"], L, 0, R - L, 600)
    art(c["backBG"], "bg", '<div style="background:radial-gradient(ellipse 60% 70% at 32% 62%,rgba(255,43,56,.18),'
        'transparent 70%),radial-gradient(ellipse 50% 60% at 85% 20%,rgba(62,224,255,.07),transparent 70%),'
        'radial-gradient(ellipse at 50% 120%,rgba(255,154,23,.12),transparent 60%),#090a0e"></div>')
    c["backBG2"].vis = "0"
    # chat dock bottom-left: a glass panel, lines above the input bar
    x, y, w, h = CHAT
    put(c["ChatBGImage"], x, y, w, h - CHAT_BAR_H - 2)
    art(c["ChatBGImage"], "chatbg", panel(10))
    for i, (n, en, zh) in enumerate([("PublicChBtn", "All", "全部"), ("PrivateChBtn", "PM", "私聊"), ("GuildChBtn", "Team", "车队")]):
        put(c[n], x + 4, y + 5 + i * 29, 38, 26)
        art(c[n], "ch_" + n, chip_small(en), 4, cn=chip_small(zh), on=chip_small(en, True), on_cn=chip_small(zh, True))
    put(c["ChatMarquee"], x + 48, y + 6, w - 74, h - CHAT_BAR_H - 14)
    for i in range(5):
        put(c[f"BugleMsgBgImg{i}"], x + 48, y + 6 + i * 18, w - 74, 18)
        put(c[f"BugleMsgMarquee{i}"], x + 64, y + 6 + i * 18, w - 104, 18)
    put(c["ExpandChatBtn"], x + w - 22, y + 5, 18, 17)
    put(c["ChatScrollBar"], x + w - 20, y + 24, 16, h - CHAT_BAR_H - 34)
    bar = c["ChatBarFrame"]
    by = y + h - CHAT_BAR_H
    rect(bar, x, by, w, CHAT_BAR_H)
    art(bar, "chatbar", panel(8, extra="background:rgba(0,0,0,.55)"))
    put(c["ChatWithEdit"], x + 6, by + 3, 92, 28)
    put(c["SwitchChatChannel"], x + 100, by + 12, 12, 10)
    icons = ["SendMsgBtn", "EmotionBtn", "BugleBtn", "GreenerHelpBtn", "FriendBtn", "OnlinePlayerBtn"]
    ix = x + w - len(icons) * 31 - 2
    put(c["ChatContentEdit"], x + 118, by + 3, ix - (x + 118) - 6, 28)
    for i, n in enumerate(icons):
        put(c[n], ix + i * 31, by + 3, 28, 28)
    # history / quick messages / channel menu / names open above the dock
    for n in ("ChatHistoryFrame", "QuickMsgPromptFrame", "LargeCharFrame"):
        k = c[n]
        move_group([k], x - k.cur[0], (y - 4) - (k.cur[1] + k.cur[3]))
    for n in ("SwitchChatChannelFrm", "SelChatNameFrame"):
        k = c[n]
        move_group([k], x - k.cur[0], (by - 2) - (k.cur[1] + k.cur[3]))
    k = c["SelEmotionFrame"]
    move_group([k], ix + 31 - k.cur[0], (by - 4) - (k.cur[1] + k.cur[3]))
    # player box top-right: the design's player plate behind the game's Level / Score / grade
    mini = c["MiniInfoFrame"]
    px, py, pw, ph = PLATE
    move_group([mini], px + 4 - mini.cur[0], py + 2 - mini.cur[1])
    rect(mini, px, py, pw, ph)
    lv, sc = c["LevelText"].cur, c["txtAccLevel"].cur
    art(mini, "plate", layer(box(0, 0, pw, ph, GLASS + ";border-left:3px solid var(--gold)"),
                             caps("Level", 8, lv[1] - py), caps("Score", 8, sc[1] - py)),
        cn=layer(box(0, 0, pw, ph, GLASS + ";border-left:3px solid var(--gold)"),
                 caps("等级", 8, lv[1] - py), caps("积分", 8, sc[1] - py)))
    # friends / players online: a right drawer
    for n in ("MyFriendFrame", "FriendPanel", "FrmOnlinePlayerMenu"):
        move_group([c[n]], X1 - 796, 0)
    k = c["DtlFrm"]
    move_group([k], (X1 - 196) - k.cur[0], 80 - k.cur[1])


# ---------------------------------------------------------------- lobby (room list)
CHIPS = [("AllRoomChk", "All Rooms", "全部房间"), ("ItemModeChk", "Single Power-Up", "个人道具"),
         ("SpeedModeChk", "Single Speed", "个人竞速"), ("TeamItemModeChk", "Team Power-Up", "组队道具"),
         ("TeamSpeedModeChk", "Team Speed", "组队竞速"), ("BossModeChk", "Boss Battle", "追击模式"),
         ("AccModeChk", "Score Mode", "积分模式")]
TILES = [("QuickBuyCarBtn", "Kart Shop", "赛车商城", "kart"), ("MySpace1Btn", "My Inventory", "我的物品", "garage"),
         ("TreasureBtn", "Treasure", "宝箱", "box"), ("TaskBtn", "Missions", "任务大厅", "missions"),
         ("Ladder", "Ladder", "天梯", "ladder"), ("TeamSpaceBtn", "Race Team", "车队", "team")]
ICON_TILES = ["GamblingBtn", "EventBtn", "btnHelp", "GameModeBtn", "RankInfoBtn", "MarryBtn"]   # the game's own icons
COL = 500                         # right column x


def chip_small(label, on=False):
    return chip(label, on).replace('style="', 'style="font-size:10.4px;letter-spacing:0;', 1)


def room_row():
    """The room list row (RoomButton, 605x71, four states stacked): a dark card, the number plate on the left."""
    def card(border):
        return layer(box(0, 1, 605, 69, CARD + (f";box-shadow:inset 0 0 0 2px {border}" if border else "")),
                     box(1, 2, 80, 67, "border-radius:8px 0 0 8px;background:linear-gradient(180deg,rgba(255,43,56,.30),"
                         "transparent);clip-path:polygon(0 0,100% 0,84% 100%,0 100%)"),
                     box(440, 2, 164, 67, "border-radius:0 8px 8px 0;background:rgba(0,0,0,.35)"))
    return card(None), card("var(--gold)")


def lobby(f):
    c = ids(f)
    # header: Back (to the channel list) as the design's back plate; quit (X) top right
    put(c["GameRoomBackBtn"], X0, 6, 210, 46)
    art(c["GameRoomBackBtn"], "hdr_rooms", back("Rooms"), 4, cn=back("房间列表"))
    put(c["btnCommonBack"], X1 - 30, 10, 30, 30)
    # the list panel: filter chips, the five rows (1:1, the game lays their contents out), paging
    bg = c["GameRoomBG"]
    move_group(bg.kids, X0 - 4 - bg.cur[0], 0)
    rect(bg, X0 - 4, 56, 613, 410)
    art(bg, "roomlist", panel(10))
    cw = (605 - 6 * 4) / 7
    for i, (n, en, zh) in enumerate(CHIPS):
        put(c[n], X0 + i * (cw + 4), 62, cw, 28)
        art(c[n], "chip_" + n, chip_small(en), 4, cn=chip(zh), on=chip_small(en, True), on_cn=chip(zh, True))
    normal, sel = room_row()
    for i in range(5):
        put(c[f"RoomBtn{i}"], X0, 96 + i * 71, 605, 71)
        art(c[f"RoomBtn{i}"], "roomrow", normal, 4, on=sel, vertical=True, size=(605, 71))
    rect(c["AnimPanel"], X0, 96, 605, 355)
    put(c["RoomPageLBtn"], X0 + 220, 448, 18, 17)
    put(c["RoomPageRBtn"], X0 + 365, 448, 18, 17)
    put(c["ServerNameText"], X0 + 248, 448, 112, 16)
    # right column: logo, feature tiles, the game's icon buttons as tiles, Ranked Match + Create Room, QUICK JOIN
    rk = c["rightkuang"]
    rect(rk, COL, 0, X1 - COL, 600)
    art(rk, "none", "<div></div>")
    put(c["logo"], COL, 8, 150, 47)
    c["imgRankShine"].vis = "0"
    tw, th, g = (X1 - COL - 2 * 6) / 3, 70, 6
    allt = [(n, tile(en, icon=ico), tile(zh, icon=ico)) for n, en, zh, ico in TILES]
    allt += [(n, tile("", img=game_icon(c[n])).replace("height:30px", "height:44px"), None) for n in ICON_TILES]
    for i, (n, en, zh) in enumerate(allt):
        put(c[n], COL + (i % 3) * (tw + g), 84 + (i // 3) * (th + g), tw, th)
        art(c[n], "tile_" + n, en, 4, cn=zh)
    hw = (X1 - COL - 6) / 2
    put(c["ShoppingBtn"], COL, 392, hw, 64)
    art(c["ShoppingBtn"], "lb_ranked", btn("Ranked Match", "gold"), 4, cn=btn("排位赛", "gold"))
    put(c["CreateRoomBtn"], COL + hw + 6, 392, hw, 64)
    art(c["CreateRoomBtn"], "lb_create", btn("Create Room", "gold"), 4, cn=btn("创建房间", "gold"))
    put(c["CreateRoomCheckBtn"], *c["CreateRoomBtn"].cur)
    c["CreateRoomCheckBtn"].texnew = c["CreateRoomBtn"].texnew
    put(c["QuickEnterBtn"], COL, 466, X1 - COL, 130)
    art(c["QuickEnterBtn"], "lb_quick", play("QUICK JOIN"), 4, cn=play("快速加入"))
    put(c["btnEvent"], *c["QuickEnterBtn"].cur)
    c["btnEvent"].texnew = c["QuickEnterBtn"].texnew
    put(c["CheckBlog"], X0 + 120, 582)


# ---------------------------------------------------------------- waiting room
SLOTS = [(15, 109, 148, 165), (167, 109, 148, 165), (319, 109, 148, 165), (471, 109, 149, 165),
         (15, 278, 148, 165), (167, 279, 148, 164), (319, 278, 148, 165), (471, 278, 149, 165)]   # in the old art


def room_bg(cn=False):
    """The slot area (615x408): the room info bar with its labels, eight slot cards (old art coords, y - 44)."""
    t = ("房间名称", "比赛模式", "地图难度", "地图类型", "房号") if cn else ("Room Name", "Race Mode", "Map Level", "Map Type", "No.")
    parts = [box(0, 0, 615, 408, GLASS),
             box(4, 3, 607, 58, "border-radius:8px;background:rgba(255,255,255,.04);box-shadow:inset 0 0 0 1px rgba(255,255,255,.09)"),
             box(6, 6, 66, 52, "border-radius:6px;background:linear-gradient(180deg,#ff4d4f,#9a0414)"),
             caps(t[4], 12, 9, 8.5, "#ffe0dc"),
             caps(t[0], 80, 13), caps(t[1], 312, 13), caps(t[2], 80, 41), caps(t[3], 312, 41)]
    for x, y, w, h in SLOTS:
        parts.append(box(x - 2, y - 44 - 2, w + 4, h + 4, CARD))
    return layer(*parts)


def ibtn(path, lit=False):
    """A square icon button of the design (.ibtn), stroke icon; lit = the green 'on' look (.rtog .on)."""
    on = "background:rgba(71,224,106,.25);box-shadow:inset 0 0 0 1px rgba(71,224,106,.6);" if lit else ""
    return (f'<button class="ibtn" style="border-radius:8px;width:100%;height:100%;{on}">'
            f'<svg width="22" height="22" viewBox="0 0 24 24" fill="none" stroke="#fff" stroke-width="2" '
            f'stroke-linecap="round" stroke-linejoin="round" aria-hidden="true">{path}</svg></button>')


ICO_KART = '<path d="M3 15l2-5h9l3 3h3a1 1 0 011 1v1H3z"/><circle cx="7" cy="17" r="2"/><circle cx="17" cy="17" r="2"/>'
ICO_MIC = '<rect x="9" y="3" width="6" height="11" rx="3"/><path d="M5 11a7 7 0 0014 0M12 18v3"/>'
ICO_MICOFF = ICO_MIC + '<path d="M4 4l16 16"/>'
ICO_TR = '<path d="M4 5h8M8 3v2M5 9c1.5 3 4 5 7 6M11 5c-1 4-3 7-7 9"/><path d="M13 21l4-10 4 10M14.5 17h5"/>'


def room(f):
    c = ids(f)
    mx, my, mw, mh = COL, 82, X1 - COL, 230
    for n in ("rightkuang", "rightkuangE"):
        rect(c[n], COL, 0, X1 - COL, 600)
        art(c[n], "room_col", layer(box((mw - 288) / 2, my - 4, 288, mh + 8, CARD)))
    put(c["RacePrepareBackBtn"], X0, 6, 236, 46)
    art(c["RacePrepareBackBtn"], "hdr_room", back("Waiting Room", size=16), 4, cn=back("等待房间"))
    put(c["RaceEventBackBtn"], X0, 6, 236, 46)
    c["RaceEventBackBtn"].texnew = c["RacePrepareBackBtn"].texnew
    for n in ("newlogo", "newlogoE"):
        c[n].vis = "0"                                    # the player box takes the top right
    # the slot area moves as one piece (1:1: the 3D karts and every badge keep their offsets)
    bg = c["WaitingRoomBG01"]
    move_group(bg.kids, (X0 - 4) - bg.cur[0], 12)          # info row 60..117, slots 119..457
    rect(bg, X0 - 4, 56, 615, 408)
    art(bg, "roombg", room_bg(), cn=room_bg(True))
    # right column: the map card (Change Map along its foot), four buttons, three toggles, READY / START
    put(c["MAP!!"], mx + (mw - 280) / 2, my, 280, mh)
    put(c["btnToMapDlg"], mx + (mw - 280) / 2, my + mh - 30, 280, 30)
    art(c["btnToMapDlg"], "rm_map", btn("Change Map", "ghost"), 4, cn=btn("更换地图", "ghost"))
    hw = (X1 - COL - 6) / 2
    for i, (n, en, zh) in enumerate([("RoomSettingBtn", "Room Settings", "房间设置"), ("ChangeTeamBtn", "Switch Teams", "换队"),
                                     ("MySpaceBtn", "My Inventory", "我的物品"), ("WaitRoomGotoShopBtn", "Race Shop", "道具商城")]):
        put(c[n], COL + (i % 2) * (hw + 6), 320 + (i // 2) * 44, hw, 38)
        art(c[n], "rm_" + n, btn(en, "dark"), 4, cn=btn(zh, "dark"))
    sw = (X1 - COL - 2 * 6) / 3
    for i, (n, off, on) in enumerate([("btnToCarDlg", ICO_KART, None), ("btnVoice", ICO_MICOFF, ICO_MIC),
                                      ("btnTranslate", ICO_TR, ICO_TR)]):
        put(c[n], COL + i * (sw + 6), 410, sw, 46)
        art(c[n], "rm_" + n, ibtn(off), 4, on=ibtn(on, True) if on else None)
    gx, gy, gw, gh = COL, 466, X1 - COL, 130
    put(c["GoBtn"], gx, gy, gw, gh)
    for i in ("AdImage", "ReadyTipImage"):
        c[i].vis = "0"
    # READY / START / WAIT: the game sets these by file name
    override("WaitRoom\\zready.png", "go_ready", gw, gh, play("READY"), cn=play("准备"))
    override("WaitRoom\\ZRACINGSTARTBTN.png", "go_start", gw, gh, play("START GAME"), cn=play("开始游戏"))
    override("WaitRoom\\zwait.png", "go_wait", gw, gh, play("WAITING", "for the host"), cn=play("等待中", "等待房主开始"))


def build(gui, game):
    global GAME
    GAME = game
    for _sec, f in gui.screens():
        if f.id == "GameChannelFrame":
            base(f)
        elif f.id == "GameRoomFrame":
            lobby(f)
        elif f.id == "WaitingRoomFrame":
            room(f)


def draw():
    """Render every piece this run asked for: {texture name: (EN image, CN image or None)}."""
    imgs = render(PIECES)
    return {name: (imgs[key], imgs.get(key + "@cn")) for name, key in ASSIGN if key in imgs}
