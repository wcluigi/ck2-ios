r"""The Claude design over every remaining screen and dialog, without hand-placing each one.

design_ui.py lays out the main screens control by control. Everything else (my info, garage, bag, treasure, missions,
rankings, teams, events, SkyGate, lottery, the dialogs ...) keeps the game's layout and gets the design's look:
  * labelled bar buttons: the label lifted onto the design's button for each state (relabel.py), EN and CN
  * panel art (frames, backing images): recoloured into the design's palette -- greys become its blue-black glass
    steps, painted text stays white, red / gold accents stay (the design uses the same accents)
Written under the textures' own names, so every place that uses one picks the new look up.
"""
import io
import os

import numpy as np
from PIL import Image

from design_art import Piece, render, btn, K
from relabel import compose

BUTTONS = {"Button", "CheckBtn", "ButtonEx", "TextButton", "MenuItem"}
PANELS = {"Frame", "AnimFrame", "Image", "Hint"}
DARK = np.array([9, 10, 14], np.float32) / 255           # --bg
MID = np.array([27, 30, 39], np.float32) / 255            # card top (#1b1e27)
LIGHT = np.array([74, 80, 98], np.float32) / 255          # bevel highlights


def recolor(im):
    """The game's grey-black panel art in the design's palette; text and coloured accents kept."""
    a = np.asarray(im.convert("RGBA")).astype(np.float32) / 255
    rgb, al = a[..., :3], a[..., 3:]
    mx, mn = rgb.max(-1, keepdims=True), rgb.min(-1, keepdims=True)
    sat = np.where(mx > 1e-6, (mx - mn) / np.maximum(mx, 1e-6), 0)
    lum = rgb @ np.array([0.299, 0.587, 0.114], np.float32)
    g = np.clip(lum[..., None] * 1.25, 0, 1)
    mapped = np.where(g < 0.35, DARK + (MID - DARK) * (g / 0.35), MID + (LIGHT - MID) * np.clip((g - 0.35) / 0.4, 0, 1))
    keep = np.maximum(np.clip((lum[..., None] - 0.62) / 0.2, 0, 1) * np.clip((0.4 - sat) / 0.2, 0, 1),     # white text
                      np.clip((sat - 0.35) / 0.2, 0, 1) * np.clip((mx - 0.25) / 0.2, 0, 1))              # accents
    out = mapped * (1 - keep) + rgb * keep
    return Image.fromarray((np.concatenate([out, al], -1) * 255).astype(np.uint8), "RGBA")


def _cells(c, tw, th):
    w, h = c.orig[2], c.orig[3]
    return max(1, round((tw / th) / (w / h))) if w and h else 1


def collect(layouts, skip_frames, skip_names, load):
    """-> (buttons {name: (ctrl, texture)}, panels {name: texture}) for the screens not laid out by hand."""
    buttons, panels = {}, {}
    for lay in layouts:
        for _sec, f in lay.screens():
            if f.id in skip_frames:
                continue
            for c in [f] + list(f.descendants()):
                t = c.a.get("TextureName", "")
                if not t or t.lower() in skip_names or not c.orig:
                    continue
                w, h = c.orig[2], c.orig[3]
                if c.tag in BUTTONS and w >= 50 and h >= 14 and w >= 2.0 * h:
                    if t.lower() not in buttons:
                        im = load(t)
                        if im is not None and _cells(c, *im.size) == 4:
                            buttons[t.lower()] = (t, im)
                elif c.tag in PANELS and w >= 120 and h >= 80 and t.lower() not in panels:
                    panels[t.lower()] = t
    return buttons, panels


def run(layouts, game, skip_frames, skip_names):
    """{texture name: (EN image, CN image or None)} for every remaining labelled button and panel."""
    from mobile_ui import find_texture
    from ck2png import decode

    def load(name, base="data"):
        root = game if base == "data" else os.path.join(game, "CN")      # find_texture adds data/GUI/IMAGE
        p = find_texture(root, name)
        if not p:
            return None
        try:
            return Image.open(io.BytesIO(decode(open(p, "rb").read()))).convert("RGBA")
        except Exception:
            return None

    buttons, panels = collect(layouts, skip_frames, {n.lower() for n in skip_names}, load)
    # one batch of design button backgrounds per cell size (2x the game's pixels: crisp after the phone's 1.2x)
    sizes = {}
    for t, im in buttons.values():
        cw, ch = im.size[0] // 4, im.size[1]
        sizes[(cw * 2, ch * 2)] = True
    pieces = []
    for (w, h) in sizes:
        k = f"{w}x{h}"
        pieces += [Piece("n" + k, w, h, btn("", "dark")),
                   Piece("h" + k, w, h, btn("", "dark").replace('class="gbtn dark"', 'class="gbtn dark" style="filter:brightness(1.3)"')),
                   Piece("p" + k, w, h, btn("", "red")),
                   Piece("d" + k, w, h, btn("", "dark").replace('class="gbtn dark"', 'class="gbtn dark" style="filter:grayscale(1) brightness(.55)"'))]
    backs = render(pieces) if pieces else {}
    out = {}
    for t, im in buttons.values():
        cw, ch = im.size[0] // 4, im.size[1]
        k = f"{cw * 2}x{ch * 2}"
        bk = [backs.get(s + k) for s in "nhpd"]
        if any(b is None for b in bk):
            continue
        cn = load(t, "CN/data")
        out[t] = (compose(im, bk), compose(cn, bk) if cn is not None and cn.size == im.size else None)
    for t in panels.values():
        im = load(t)
        if im is None:
            continue
        cn = load(t, "CN/data")
        out[t] = (recolor(im), recolor(cn) if cn is not None else None)
    return out
