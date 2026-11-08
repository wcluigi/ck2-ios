r"""Re-skin one of the game's labelled button strips in the Claude design without retyping its label.

The game's buttons are 4-state strips (normal | hover | pressed | disabled side by side) with the label painted in:
white bold-italic text, sometimes a coloured icon, on a dark grey (or red, when lit) bevel. relabel() lifts the label
(bright, low-saturation pixels = text; saturated, not-dark pixels = icon) off every cell and lays it on the design's
button for that state, drawn by design_art. Works the same for the CN copy of a texture, so both languages keep their
own words. Buttons without a label (icons only) are better left to the game's own art.
"""
import numpy as np
from PIL import Image


def lift(cell):
    """RGBA cell -> RGBA layer holding only the label (text + icon), alpha from how label-like each pixel is."""
    a = np.asarray(cell.convert("RGBA")).astype(np.float32) / 255.0
    rgb, al = a[..., :3], a[..., 3]
    mx, mn = rgb.max(-1), rgb.min(-1)
    sat = np.where(mx > 1e-6, (mx - mn) / np.maximum(mx, 1e-6), 0)
    lum = rgb @ np.array([0.299, 0.587, 0.114], np.float32)
    text = np.clip((lum - 0.55) / 0.25, 0, 1) * np.clip((0.45 - sat) / 0.25, 0, 1)        # white / light grey glyphs
    icon = np.clip((sat - 0.45) / 0.2, 0, 1) * np.clip((mx - 0.30) / 0.2, 0, 1)           # red / gold / blue icons
    k = np.maximum(text, icon) * al
    out = np.concatenate([rgb, k[..., None]], -1)
    return Image.fromarray((out * 255).astype(np.uint8), "RGBA")


def compose(strip, backs, n=4):
    """strip: the game's texture (n cells side by side); backs: n design backgrounds (PIL, same size each).
    Returns the new strip at the backgrounds' resolution."""
    tw, th = strip.size
    cw = tw // n
    bw, bh = backs[0].size
    out = Image.new("RGBA", (bw * n, bh), (0, 0, 0, 0))
    # the label comes from the normal cell only: lit cells sit on a red bevel that would read as an icon
    lab = lift(strip.crop((0, 0, cw, th))).resize((bw, bh), Image.LANCZOS)
    grey = lab.convert("LA").convert("RGBA")
    grey.putalpha(lab.getchannel("A").point(lambda v: v * 0.55))
    for i in range(n):
        cell = backs[min(i, len(backs) - 1)].copy()
        cell.alpha_composite(grey if i == 3 else lab)
        out.alpha_composite(cell, (i * bw, 0))
    return out
