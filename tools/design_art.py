r"""Game textures in the Claude design's style (webui/index.html), drawn by headless Edge from the design's own CSS.

    from design_art import Piece, render
    imgs = render([Piece("quick", 380, 84, btn("QUICK JOIN", "red"), states=4), ...])   # {key: PIL image}

A piece is w x h PHONE pixels (the texture is shown 1:1 on a 1280x720 phone). The design is drawn at its own
scale (stage 440 px tall on a 720 px screen = 1.636), so its fonts and borders look as in the prototype.
states=4 -> the game's Button / CheckBtn strip: normal | hover | pressed (= checked) | disabled, side by side.
Each piece can carry a Chinese label too (cn=...): rendered as key + "@cn" for <game>/CN/data/GUI/IMAGE.
"""
import io
import os
import re
import subprocess
import tempfile

from PIL import Image

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
WEBUI = os.path.join(ROOT, "webui", "index.html")
EDGE = r"C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe"
K = 720 / 440                     # design px -> phone px
STATE_CSS = {                     # the four cells of a game button strip
    0: "",
    1: "filter:brightness(1.14)",
    2: "transform:scale(.96);filter:brightness(1.18)",
    3: "filter:grayscale(1) brightness(.62);opacity:.8",
}


class Piece:
    def __init__(self, key, w, h, html, states=1, cn=None, on=None, on_cn=None, vertical=False, onset=(2,)):
        """html: markup filling a w x h box (design px = phone px / K are applied for you). cn: the same markup
        with the Chinese label. on / on_cn: markup for the checked cell (CheckBtn 'on' look) instead of pressed."""
        self.key, self.w, self.h, self.html, self.states = key, round(w), round(h), html, states
        self.cn, self.on, self.on_cn = cn, on, on_cn if on_cn is not None else on
        self.vertical = vertical          # RoomButton rows, MenuItems: the cells stacked
        self.onset = set(onset)           # cells drawn with the 'on' markup (MenuItem strips: 1, 2, 4, 5)


_css = None
_head = None


def _design():
    global _css, _head
    if _css is None:
        s = open(WEBUI, encoding="utf-8").read()
        _css = re.findall(r"<style>(.*?)</style>", s, re.S)[0]
        _head = "".join(re.findall(r'<link[^>]+fonts\.googleapis[^>]+>', s))
        a = s.find("const dsv=")
        b = s.find("};", s.find("const DICO=", a)) + 2
        _head += "<script>" + s[a:b] + "</script>"
    return _css, _head


def _page(cells):
    css, head = _design()
    body = []
    for x, y, w, h, html, extra in cells:
        body.append(f'<div class="pc" style="left:{x}px;top:{y}px;width:{w}px;height:{h}px;{extra}">{html}</div>')
    return (f"<!doctype html><html><head><meta charset=utf-8>{head}<style>{css}</style><style>"
            "html,body{background:transparent!important;overflow:hidden;margin:0}"
            "*,*::before,*::after{animation:none!important;transition:none!important}"
            ".pc{position:absolute;display:grid;place-items:stretch;overflow:visible}"
            ".pc>*{width:100%!important;height:100%!important;min-height:0!important;box-sizing:border-box;margin:0!important;white-space:nowrap}"
            ".gbtn{padding:0 8px}"
            "</style></head><body>" + "".join(body) + "<script>"
            "document.querySelectorAll('[data-ico]').forEach(e=>e.innerHTML=DICO[e.dataset.ico]||'')"
            "</script></body></html>")


def render(pieces):
    """{key: RGBA image} (+ key@cn for pieces with a Chinese label)."""
    jobs = []                                          # (key, cell index, html, design w, design h, extra css)
    for p in pieces:
        for lang, html, on in (("", p.html, p.on), ("@cn", p.cn, p.on_cn)):
            if html is None:
                continue
            for s in range(p.states):
                checked = on is not None and s in p.onset
                css = STATE_CSS.get(s, "") if p.states == 4 else (STATE_CSS[3] if s == 3 else "")
                jobs.append((p.key + lang, s, on if checked else html, p.w / K, p.h / K, "" if checked else css))
    # shelf-pack the cells on one page (CSS px)
    G = 36                                             # gap: glows and shadows must not reach the next cell
    W, x, y, row, cells, where = 1600, G, G, 0, [], []
    for key, s, html, w, h, extra in jobs:
        if x + w + G > W:
            x, y, row = G, y + row + G, 0
        cells.append((x, y, w, h, html, extra))
        where.append((key, s, x, y, w, h))
        x += w + G
        row = max(row, h)
    H = y + row + G
    tmp = tempfile.mkdtemp(prefix="ckart_")
    page = os.path.join(tmp, "p.html")
    shot = os.path.join(tmp, "p.png")
    open(page, "w", encoding="utf-8").write(_page(cells))
    subprocess.run([EDGE, "--headless=new", "--disable-gpu", "--hide-scrollbars", "--default-background-color=00000000",
                    f"--force-device-scale-factor={K}", f"--user-data-dir={os.path.join(tmp, 'prof')}",
                    f"--window-size={W},{int(H) + 2}", "--virtual-time-budget=8000", f"--screenshot={shot}",
                    "file:///" + page.replace("\\", "/")], check=False, capture_output=True, timeout=120)
    sheet = Image.open(shot).convert("RGBA")
    vert = {p.key + l for p in pieces if p.vertical for l in ("", "@cn")}
    out, parts = {}, {}
    for key, s, x, y, w, h in where:
        box = (round(x * K), round(y * K), round(x * K) + round(w * K), round(y * K) + round(h * K))
        parts.setdefault(key, {})[s] = sheet.crop(box)
    for key, cellmap in parts.items():
        n = len(cellmap)
        cw, ch = cellmap[0].size
        v = key in vert
        strip = Image.new("RGBA", (cw, ch * n) if v else (cw * n, ch), (0, 0, 0, 0))
        for s, im in cellmap.items():
            strip.alpha_composite(im.resize((cw, ch)) if im.size != (cw, ch) else im, (0, s * ch) if v else (s * cw, 0))
        out[key] = strip
    return out


# ---------------------------------------------------------------- markup in the design's vocabulary
def btn(label, kind="red", sub=None, icon=None, size=None):
    """.gbtn red | gold | dark | ghost | green; optional small second line and a DICO icon."""
    fs = f"font-size:{size}px;" if size else ""
    ic = f'<span class="di" data-ico="{icon}" style="width:26px;height:24px"></span>' if icon else ""
    if sub:
        return (f'<button class="gbtn {kind}" style="flex-direction:column;gap:0;{fs}">{ic}<span>{label}</span>'
                f'<small style="font:700 10px var(--b);letter-spacing:.06em;opacity:.85">{sub}</small></button>')
    return f'<button class="gbtn {kind}" style="{fs}">{ic}<span>{label}</span></button>'


def play(label, sub=None):
    """The design's big PLAY / START GAME block (.play)."""
    s = f"<small>{sub}</small>" if sub else ""
    return f'<button class="play" style="animation:none"><span class="in"><b>{label}</b>{s}</span></button>'


def chip(label, on=False):
    return f'<span class="chip{" on" if on else ""}" style="justify-content:center;padding:0 6px"><span>{label}</span></span>'


def tile(label, icon=None, img=None):
    """A dock tile: icon over a label, flat glass."""
    ic = f'<span class="di" data-ico="{icon}"></span>' if icon else (f'<img src="{img}" style="height:30px">' if img else "")
    return (f'<button class="glass" style="display:flex;flex-direction:column;align-items:center;justify-content:center;'
            f'gap:3px;border-radius:9px;color:#fff">{ic}<span style="font:700 11px var(--b);letter-spacing:.03em;'
            f'white-space:nowrap">{label}</span></button>')


def panel(radius=10, cut=False, extra=""):
    return f'<div class="glass{" cut" if cut else ""}" style="border-radius:{radius}px;{extra}"></div>'


def back(title, sub=None, size=19):
    """Header: red edge, chevron, display title (the subtitle line is left empty for the game's own text)."""
    return ('<div class="back" style="transform:none;justify-content:flex-start">'
            '<svg width="20" height="20" viewBox="0 0 24 24" fill="none" stroke="#fff" stroke-width="3" '
            'stroke-linecap="round" stroke-linejoin="round" aria-hidden="true"><path d="M15 5l-7 7 7 7"/></svg>'
            f'<span><span class="disp" style="font-size:{size}px">{title}</span>'
            + (f"<small>{sub}</small>" if sub else "") + "</span></div>")
