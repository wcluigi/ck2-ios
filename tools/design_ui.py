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

HAND_LAID = {"GameChannelFrame", "GameRoomFrame", "WaitingRoomFrame", "ShoppingBtnFrame", "ItemShopFrame", "ItemShopFrameCar"}
PIECES = []                       # Piece list for this run
ASSIGN = []                       # (texture name, piece key)


def css(v):
    """design px -> CSS px inside a piece"""
    return round(v * S / K, 2)


def art(c, key, html, states=1, cn=None, on=None, on_cn=None, name=None, vertical=False, size=None, onset=(2,)):
    """Give control c a new texture drawn from design markup, sized to its (new) rect."""
    w, h = size or (c.cur[2], c.cur[3])
    name = name or "Mobile\\D\\" + key + ".png"
    if not any(p.key == key for p in PIECES):
        PIECES.append(Piece(key, w * S, h * S, html, states, cn, on, on_cn, vertical, onset))
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
            f'<svg style="width:min(22px,70%);height:min(22px,70%)" viewBox="0 0 24 24" fill="none" stroke="#fff" stroke-width="2" '
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


# ---------------------------------------------------------------- art shared by many screens and dialogs, by file name
ICO_X = '<path d="M6 6l12 12M18 6L6 18"/>'
ICO_L = '<path d="M15 5l-7 7 7 7"/>'
ICO_R = '<path d="M9 5l7 7-7 7"/>'


def small_btn(label, kind):
    return btn(label, kind).replace('style="', 'style="font-size:12px;', 1)


def shared():
    """Textures the game uses all over (arrows, close, OK / Cancel / Close / Back, the message box frame, the right
    column backing): drawn once in the design, every screen and dialog picks them up."""
    for name, key, w, h, html, cn in [
            ("commonpic\\zjiantouR.png", "g_right", 18, 17, ibtn(ICO_R), None),
            ("commonpic\\zjiantouL.png", "g_left", 18, 17, ibtn(ICO_L), None),
            ("commonpic\\quit.png", "g_quit", 24, 23, ibtn(ICO_X), None),
            ("commonpic\\btnOK.png", "g_ok", 96, 24, small_btn("OK", "gold"), small_btn("确定", "gold")),
            ("commonpic\\zcancel.png", "g_cancel", 96, 24, small_btn("Cancel", "dark"), small_btn("取消", "dark")),
            ("commonpic\\Close.png", "g_close", 96, 24, small_btn("Close", "dark"), small_btn("关闭", "dark")),
            ("commonpic\\zBackBtn.png", "g_back", 159, 32, btn("Back", "dark"), btn("返回", "dark")),
            ("commonpic\\CancelImage.png", "g_cancelbig", 159, 32, btn("Cancel", "dark"), btn("取消", "dark")),
            ("commonpic\\zQuickEnterBtn.png", "g_quick", 159, 32, btn("Quick Join", "red"), btn("快速加入", "red"))]:
        override(name, key, w, h, html, 4, cn)
    # single images: the message box frame (the design's modal: glass, red-gold line on top), column backing, help bg
    for name, key, w, h, html in [
            ("commonpic\\MsgBoxBorder.png", "g_msgbox", 454, 226, layer(
                box(0, 0, 454, 226, "border-radius:12px;background:linear-gradient(180deg,rgba(28,31,42,.97),rgba(10,12,18,.97));"
                    "box-shadow:inset 0 0 0 1px rgba(255,255,255,.16)"),
                box(0, 0, 454, 3, "border-radius:12px 12px 0 0;background:linear-gradient(90deg,transparent,var(--red),"
                    "var(--gold),var(--red),transparent)"))),
            ("commonpic\\nav.png", "g_nav", 163, 600, layer(box(0, 0, 163, 600, GLASS))),
            ("commonpic\\helpbg.png", "g_helpbg", 800, 461, layer(box(0, 0, 800, 461, GLASS + ";background:rgba(10,12,18,.92)")))]:
        override(name, key, w, h, html, 1)


# ---------------------------------------------------------------- zone / channel pick (GUIChooseChannel.xml)
GROUPS = [("BeginnerChannelBtn", "Practise", "实习频道"), ("NewComerBtn", "Beginner", "新手频道"),
          ("FreeChannelBtn", "Semi-Pro", "进阶频道"), ("ZhongJiChannelBtn", "Pro", "中级频道"),
          ("AdvanceChannelBtn", "Channel VIP", "VIP 频道"), ("VIPChannelBtn", "General", None),
          ("EventChannelBtn", "Tournament", None)]


def vtab(label, on=False):
    """The design's vertical tab (.vtab), red when chosen."""
    return (f'<button class="vtab{" on" if on else ""}" style="justify-content:center;font-size:13px">'
            f'<span>{label}</span></button>')


def channel(ch):
    top = ids(ch.frame("ChooseChannelDesktop"))
    c = dict(top, **ids(top["ChooseChannelFrame"]))          # both pages have a "logo": the group page's here
    for n in ("backbg1", "backbg2"):
        rect(c[n], L, 0, R - L, 600)
        art(c[n], "bg", "")                              # the same dark stage as the lobby (drawn by base())
    for n in ("backbgg1", "backbgg2"):
        c[n].vis = "0"
    # groups: the back plate, a tab rail on the left, the game's help picture in a panel beside it
    put(c["BackBtn"], X0, 6, 220, 46)
    art(c["BackBtn"], "hdr_channels", back("Channels"), 4, cn=back("频道"))
    rk = c["rightkuang1"]
    rect(rk, X0, 60, 200, 7 * 58)
    art(rk, "none", "<div></div>")
    for i, (n, en, zh) in enumerate(GROUPS):
        put(c[n], X0, 60 + i * 58, 200, 52)
        art(c[n], "grp_" + n, vtab(en), 4, cn=vtab(zh) if zh else None, on=vtab(en, True), on_cn=vtab(zh, True) if zh else None)
    put(c["logo"], X1 - 150, 6, 150, 47)
    for k in c.values():
        if k.id.startswith("zBg"):
            k.vis = "0"
    bg = c["ChooseChannelBG"]
    move_group(bg.kids, (X0 + 210) - c["techImg"].cur[0] + 8, 60 - c["techImg"].cur[1] + 8)
    rect(bg, X0 + 210, 60, X1 - (X0 + 210), 536)
    art(bg, "chpanel", panel(10))
    # zones: back plate, the announcements panel left, zone buttons as cards in two columns, ENTER (Quick Join)
    c = dict(top, **ids(top["NewComerFrame"]))
    c["logo"].vis = "0"
    put(c["NewComerBackBtn"], X0, 6, 220, 46)
    art(c["NewComerBackBtn"], "hdr_zones", back("Zones"), 4, cn=back("选择服务器"))
    rk = c["rightkuang2"]
    rect(rk, COL, 0, X1 - COL, 600)
    art(rk, "none", "<div></div>")
    zw, zh_ = (X1 - COL - 8) / 2, 56
    for i in range(11):
        k = c[f"Ser{i + 1}Btn"]
        put(k, COL + (i % 2) * (zw + 8), 60 + (i // 2) * (zh_ + 6), zw, zh_)
        art(k, "zone", layer(box(0, 0, zw, zh_, CARD)), 4, on=layer(box(0, 0, zw, zh_, CARD + ";box-shadow:inset 0 0 0 2px var(--gold)")),
            size=(zw, zh_))
    put(c["SerLBtn"], COL + 120, 438, 22, 21)
    put(c["SerRBtn"], X1 - 142, 438, 22, 21)
    put(c["serverPage"], COL + 150, 436, X1 - COL - 300, 25)
    put(c["QuickEnterBtn"], COL, 466, X1 - COL, 130)
    art(c["QuickEnterBtn"], "ch_enter", play("ENTER"), 4, cn=play("进入"))
    nb = c["NewComerBG"]
    put(nb, X0 - 4, 56, COL - 10 - (X0 - 4), 540)
    art(nb, "zonepanel", panel(10))


# ---------------------------------------------------------------- shop (ShoppingBtnFrame + ItemShopFrame / ItemShopFrameCar)
MENU = [("HotGoodsMenu", "Hot", "推荐商品"), ("CarStoreMenu", "Kart Shop", "XTORM车行"), ("CarDecMenu", "Paint Shop", "赛车装饰"),
        ("ClothShopMenu", "Avatar", "造型屋"), ("ItemShopMenu", "Item Shop", "道具店"), ("MySpaceMenu", "My Inventory", "个人空间"),
        ("PayMenu", "Top-Up", "充值"), ("GiftMenu", "Gift", "礼品"), ("PackageMenu", "Combo Items", "礼包")]
SUBMENU = {"CarStoreMenu": [("BuyCarMenu", "Buy Karts", "购买车辆"), ("CarRetreadMenu", "Repair Kart", "翻新车辆"),
                            ("CarRecycleMenu", "Sell Kart", "回收车辆"), ("CarParkMenu", "Kart Park", "车库")],
           "CarDecMenu": [("CarSuitMenu", "Buy Paint", "购买彩装"), ("CarAfterbodyMenu", "Tail Accessories", "车辆装饰")],
           "GiftMenu": [("GiftSeqMenu", "Accept Gift", "领取礼品"), ("GiftItemMenu", "Gift Box", "礼品仓库")]}
MONEY = [("CountNumber", "Cash", "点券", "var(--ink2)"), ("MoneyNumber", "Gold", "金币", "var(--gold)"),
         ("TokenDepositNumber", "Tickets", "抵用券", "var(--cyan)")]
STAGE = ('background:radial-gradient(ellipse 60% 70% at 32% 62%,rgba(255,43,56,.18),transparent 70%),'
         'radial-gradient(ellipse 50% 60% at 85% 20%,rgba(62,224,255,.07),transparent 70%),#090a0e')
SHOP_X = X0 + 162                 # content left (after the rail)


def money_bar(f, x, y, w, cn=False):
    """The Cash / Gold / Tickets row: labels drawn, the game writes the numbers. Returns its markup (frame coords)."""
    c = ids(f)
    sw = w / 3
    parts = []
    for i, (n, en, zh, col) in enumerate(MONEY):
        sx = x + i * sw
        parts.append(box(sx - f.cur[0] + 2, y - f.cur[1], sw - 4, 26, "border-radius:6px;background:rgba(0,0,0,.45);"
                         "box-shadow:inset 0 0 0 1px rgba(255,255,255,.09)"))
        parts.append(caps(zh if cn else en, sx - f.cur[0] + 10, y - f.cur[1] + 7, 10, col))
        if not cn:
            put(c[n], sx + 70, y + 2, sw - 80, 22)
    return parts


def shop_menu(gui):
    m = ids(gui.frame("ShoppingBtnFrame"))
    root = m["ShoppingBtnFrame"]
    rect(root, L, 0, R - L, 600)
    art(root, "shop_stage", f'<div style="{STAGE}"></div>')            # covers the chat, as the PC shop does
    put(m["btnCommonBack"], X0, 6, 220, 46)
    rect(m["frmCommonBack"], X0, 6, 220, 46)
    art(m["btnCommonBack"], "hdr_shop", back("Shop"), 4, cn=back("商城"))
    put(m["btnBack"], X1 - 30, 10, 30, 30)
    rect(m["frmSmallBtns"], X1 - 30, 10, 30, 30)
    rect(m["BtnsFrame"], X0, 56, 150, 9 * 48)
    m["ShoppingBackMenu"].vis = "0"                      # parked left of the 4:3 screen; the X top right leaves
    for i, (n, en, zh) in enumerate(MENU):
        y = 56 + i * 48
        put(m[n], X0, y, 150, 44)
        art(m[n], "menu_" + n, vtab(en), 6, cn=vtab(zh), on=vtab(en, True), on_cn=vtab(zh, True), vertical=True, onset=(1, 2, 4, 5))
        for j, (sn, sen, szh) in enumerate(SUBMENU.get(n, [])):
            put(m[sn], X0 + 154, y + j * 30, 118, 28)
            art(m[sn], "sub_" + sn, chip(sen), 5, cn=chip(szh), on=chip(sen, True), on_cn=chip(szh, True), vertical=True,
                onset=(1, 2, 4))


def item_shop(gui):
    f = gui.frame("ItemShopFrame")
    c = ids(f)
    rect(f, SHOP_X, 56, X1 - SHOP_X, 542)
    lx, ly = X1 - 363, 64
    move_group([c["ItemList"]], lx - c["ItemList"].cur[0], ly - c["ItemList"].cur[1])
    put(c["ItemListLeftbtn"], lx, ly + 482, 22, 21)
    put(c["ItemListRightbtn"], X1 - 22, ly + 482, 22, 21)
    put(c["ItemPage"], lx + 120, ly + 480, 123, 25)
    mw = lx - 10 - SHOP_X
    m3 = c["ItemModel"]
    dx, dy = SHOP_X + (mw - 447) / 2 - m3.cur[0], 60 - m3.cur[1]
    move_group([m3, c["ImgRecommendedProp"]], dx, dy)
    put(c["ItemTitle"], SHOP_X + 10, 494, mw - 20, 25)
    put(c["ItemUseageText"], SHOP_X + 10, 518, mw - 20, 50)
    c["shopname"].vis = "0"

    def bg(cn):
        p = [box(0, 0, mw, 542, CARD), box(lx - f.cur[0] - 4, 4, 371, 534, GLASS)]
        for j in range(3):
            for i in range(3):
                x, y = lx - f.cur[0] + i * 122, ly - f.cur[1] + j * 158
                p.append(box(x, y, 119, 153, CARD))
                p.append(box(x + 1, y + 127, 117, 25, "border-radius:0 0 8px 8px;background:rgba(0,0,0,.5)"))
        return layer(*p, *money_bar(f, SHOP_X + 6, 572, mw - 12, cn))
    art(f, "shop_items", bg(False), cn=bg(True))


def kart_shop(gui):
    f = gui.frame("ItemShopFrameCar")
    c = ids(f)
    rect(f, SHOP_X, 56, X1 - SHOP_X, 542)
    W = X1 - SHOP_X
    m3 = c["ItemModel"]
    ox, oy = m3.cur[0], m3.cur[1]
    put(m3, SHOP_X + 8, 60, W - 16, 320)
    move_group([c[n] for n in ("ItemTitle", "ItemUseageText", "txtCarHint")], SHOP_X + 8 - ox, 60 - oy)
    for n in ("clockwise", "rotateAuto", "anticlockwise"):
        k = c[n]
        put(k, k.cur[0] + (X1 - 8 - 768), 340 + (k.cur[1] - 345))
    sy = 386                                                   # search row
    move_group([c[n] for n in ("shopsearchbg", "strCategory", "btnChangeCategory", "strPayRange", "btnChangePayRange",
                               "btnSearch", "frmCategory", "frmPayRange")],
               (SHOP_X + 8) - c["shopsearchbg"].cur[0], sy - c["shopsearchbg"].cur[1])
    lst = c["ItemList"]
    lx = SHOP_X + (W - 673) / 2
    move_group([lst, c["txtNoResult"]], lx - lst.cur[0], 418 - lst.cur[1])
    put(c["ItemListLeftbtn"], lx - 28, 476, 22, 21)
    put(c["ItemListRightbtn"], lx + 679, 476, 22, 21)
    c["shopname2"].vis = "0"

    def bg(cn):
        p = [box(0, 0, W, 330, CARD), box(lx - f.cur[0] - 4, 418 - f.cur[1] - 4, 681, 145, GLASS)]
        for i in range(5):
            x = lx - f.cur[0] + i * 134.6
            p.append(box(x + 2, 418 - f.cur[1], 130, 137, CARD))
            p.append(box(x + 3, 418 - f.cur[1] + 110, 128, 26, "border-radius:0 0 8px 8px;background:rgba(0,0,0,.5)"))
        return layer(*p, *money_bar(f, SHOP_X + 6, 572, W - 12, cn))
    art(f, "kshop_items", bg(False), cn=bg(True))


def build(gui, game, ch=None):
    global GAME
    GAME = game
    shared()
    for _sec, f in gui.screens():
        if f.id == "GameChannelFrame":
            base(f)
        elif f.id == "GameRoomFrame":
            lobby(f)
        elif f.id == "WaitingRoomFrame":
            room(f)
    if ch is not None:
        channel(ch)                                       # after base(): it reuses the stage background
    shop_menu(gui)
    item_shop(gui)
    kart_shop(gui)


def draw():
    """Render every piece this run asked for: {texture name: (EN image, CN image or None)}."""
    imgs = render(PIECES)
    return {name: (imgs[key], imgs.get(key + "@cn")) for name, key in ASSIGN if key in imgs}
