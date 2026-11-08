"""Render menu screens the way the phone shows them (UI Lab's drawing rules, phone canvas design x -133..933).

    python -I tools/preview_ui.py <game folder> <overlay folder or -> <out dir>

With an overlay, layouts and textures are taken from it first (as runtime/mobile/plat.c does on the phone).
Text the game draws at run time (names, chat) and the 3D kart / avatar previews are not drawn.
"""
import io
import os
import re
import sys

from PIL import Image

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ck2png import decode as png_decode          # noqa: E402
from mobile_ui import Layout, BUTTONS, find_texture  # noqa: E402

L, CW, CH = -133, 1067, 600
RUNTIME_HIDDEN = re.compile(r"^(LargeCharFrame|SwitchChatChannelFrm|MyFriendFrame|FriendPanel|FrmOnlinePlayerMenu|"
                            r"FrmFlowerRain|ChatTip\d+Img|SunCard\d*|ChooseTextBg|SelCancelBtn|LButton|RButton|BugleMsgBgImg\d)$")


class Renderer:
    def __init__(self, game, overlay):
        self.game, self.overlay = game, overlay if overlay and overlay != "-" else None
        self.tex, self.lays = {}, {}

    def layout(self, name, relative=False):
        if name not in self.lays:
            p = os.path.join(self.overlay, "data", "config", name) if self.overlay else None
            if not p or not os.path.exists(p):
                p = os.path.join(self.game, "data", "config", name)
            self.lays[name] = Layout(p, relative)
        return self.lays[name]

    def texture(self, name):
        k = name.lower()
        if k not in self.tex:
            p = find_texture(self.overlay, name) if self.overlay else None
            p = p or find_texture(self.game, name)
            im = None
            if p:
                try:
                    im = Image.open(io.BytesIO(png_decode(open(p, "rb").read()))).convert("RGBA")
                except Exception:
                    im = None
            self.tex[k] = im
        return self.tex[k]

    def sprite(self, c, w, h, cells=1):
        t = c.tex()
        im = self.texture(t) if t else None
        if im is None or w <= 0 or h <= 0:
            return None
        tw, th = im.size
        if c.tag in BUTTONS or cells == 4:
            rx, ry = tw / w, th / (h if cells == 1 else h * 4)
            vert = c.tag == "RoomButton" or cells == 4 or ry / rx > 3
            n = 4 if (vert and ry / rx > 3) or (not vert and rx / ry > 3) else 1
            box = (0, 0, tw, th // n) if vert else (0, 0, tw // n, th)
        else:
            u = [float(v) for v in c.a.get("uv", "0,0,0,0").split(",")]
            box = (0, 0, tw, th) if not any(u) or u[2] <= u[0] or u[3] <= u[1] else \
                (round(u[0] * tw), round(u[1] * th), round(u[2] * tw), round(u[3] * th))
            bw, bh = box[2] - box[0], box[3] - box[1]
            if bw and bh:
                if bh / bw > 1.9 * h / w:
                    box = (box[0], box[1], box[2], box[1] + round(bw * h / w))
                elif bw / bh > 1.9 * w / h:
                    box = (box[0], box[1], box[0] + round(bh * w / h), box[3])
        return im.crop(box)

    def draw(self, img, c, k, ox, off=(0, 0), template=False, force=False, extra=()):
        shown = c.vis != "0" and not RUNTIME_HIDDEN.match(c.id)
        if not c.cur or not (force or shown or c.id in extra):
            return
        x, y, w, h = c.cur
        x, y = x + off[0], y + off[1]
        cells = 1
        if template and c.parent and c.parent.parent is None:
            cells, h = 4, h // 4
        sp = self.sprite(c, w, h, cells)
        if sp is not None:
            part = sp.resize((max(1, round(w * k)), max(1, round(h * k))), Image.LANCZOS)
            img.paste(part, (round(ox + x * k), round(y * k)), part)
        if c.tag == "RoomButton":
            for kk in self.layout("RoomButton.xml", True).screens()[0][1].kids:
                if kk.id in ("RoomNameBox", "RoomIDText"):
                    self.draw(img, kk, k, ox, off=(x, y))
        for kk in c.kids:
            self.draw(img, kk, k, ox, off=off, template=template, extra=extra)

    def screen(self, parts, W=1280, extra=()):
        k = W / CW
        img = Image.new("RGBA", (W, round(CH * k)), (0, 0, 0, 255))
        ox = -L * k
        for name, fid in parts:
            lay = self.layout(name)
            f = lay.frame(fid)
            self.draw(img, f, k, ox, force=True, extra=extra)
        return img.convert("RGB")


SCREENS = [
    ("server", [("GUILogin.xml", "ChooseAreaFrame")]),
    ("login", [("GUILogin.xml", "LoginFrame")], ("OnePLoginFrame",)),
    ("channel", [("GUIChooseChannel.xml", "ChooseChannelDesktop")]),
    ("lobby", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "GameRoomFrame")]),
    ("friends", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "GameRoomFrame")], ("MyFriendFrame",)),
    ("createroom", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "CreateRoomFrame")]),
    ("room", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "WaitingRoomFrame")]),
    ("myinfo", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "MyInfoFrame")]),
    ("shop", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "ShoppingBtnFrame"), ("GUI.xml", "ItemShopFrame")]),
    ("kartshop", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "ShoppingBtnFrame"), ("GUI.xml", "ItemShopFrameCar")]),
    ("treasure", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "TreasureFrame")]),
    ("garage", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "CarParkFrame")]),
    ("bag", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "MyBagFrame")]),
    ("missions", [("GUI.xml", "GameChannelFrame"), ("GUI.xml", "RaceDailyTaskFrm")]),
]


def run(game, overlay, out, W=1280):
    os.makedirs(out, exist_ok=True)
    r = Renderer(game, overlay)
    for item in SCREENS:
        key, parts = item[0], item[1]
        extra = item[2] if len(item) > 2 else ()
        skip_popup = {"HalfPriceFrame"}
        for name, fid in parts:
            for c in r.layout(name).frame(fid).descendants():
                if c.id in skip_popup:
                    c.vis = "0"
        r.screen(parts, W, extra).save(os.path.join(out, key + ".png"))
    print("preview:", len(SCREENS), "screens ->", out)


if __name__ == "__main__":
    if len(sys.argv) != 4:
        sys.exit(__doc__)
    run(*sys.argv[1:4])
