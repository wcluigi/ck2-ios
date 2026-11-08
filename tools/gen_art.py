"""New button art in the game's style (red glossy pill, white bold-italic label, dark bevel), as 4-state strips
(normal / hover / pressed / disabled, stacked) the way the client's Button textures are laid out.

Used by mobile_ui.py for the big Quick Join "play" button of the phone lobby.
"""
import os

from PIL import Image, ImageDraw, ImageEnhance, ImageFilter, ImageFont, ImageOps

FONT_EN = ["/usr/share/fonts/truetype/dejavu/DejaVuSans-BoldOblique.ttf", "C:/Windows/Fonts/arialbi.ttf"]
FONT_ZH = ["/usr/share/fonts/opentype/noto/NotoSansCJK-Black.ttc", "/usr/share/fonts/opentype/noto/NotoSansCJK-Bold.ttc",
           "C:/Windows/Fonts/msyhbd.ttc"]


def _font(cands, size):
    for p in cands:
        if os.path.exists(p):
            return ImageFont.truetype(p, size)
    return ImageFont.load_default()


def _vgrad(w, h, top, bot):
    g = Image.new("RGB", (1, h))
    for y in range(h):
        t = y / max(1, h - 1)
        g.putpixel((0, y), tuple(round(top[i] + (bot[i] - top[i]) * t) for i in range(3)))
    return g.resize((w, h))


def big_button(w, h, label, sub="", icon=None, top=(238, 46, 52), bot=(132, 10, 20), edge=(58, 6, 10)):
    """One state cell, w x h px."""
    r = h // 4
    cell = Image.new("RGBA", (w, h), (0, 0, 0, 0))
    mask = Image.new("L", (w, h), 0)
    ImageDraw.Draw(mask).rounded_rectangle((0, 0, w - 1, h - 1), r, fill=255)
    # body
    body = _vgrad(w, h, top, bot).convert("RGBA")
    cell.paste(body, (0, 0), mask)
    d = ImageDraw.Draw(cell)
    # gloss on the upper half
    gloss = Image.new("RGBA", (w, h), (0, 0, 0, 0))
    gm = Image.new("L", (w, h), 0)
    ImageDraw.Draw(gm).rounded_rectangle((4, 3, w - 5, h // 2), r - 2, fill=70)
    gloss.putalpha(gm)
    gloss = Image.composite(Image.new("RGBA", (w, h), (255, 255, 255, 255)), gloss, gm)
    gloss.putalpha(gm)
    cell = Image.alpha_composite(cell, gloss)
    d = ImageDraw.Draw(cell)
    # bevel: dark outer edge, light inner line, darker bottom lip
    d.rounded_rectangle((0, 0, w - 1, h - 1), r, outline=edge + (255,), width=max(2, h // 40))
    d.rounded_rectangle((3, 3, w - 4, h - 4), r - 3, outline=(255, 150, 150, 110), width=1)
    d.line((r, h - 4, w - r, h - 4), fill=(60, 0, 6, 160), width=max(2, h // 30))
    # label
    f1 = _font(FONT_EN, round(h * (0.36 if sub else 0.42)))
    f2 = _font(FONT_ZH, round(h * 0.2))
    tx = w // 2 + (h // 4 if icon is not None else 0)
    ty = h // 2 - (round(h * 0.1) if sub else 0)
    for ox, oy, col in ((3, 3, (40, 0, 4, 200)), (0, 0, (255, 255, 255, 255))):
        d.text((tx + ox, ty + oy), label, font=f1, fill=col, anchor="mm", stroke_width=2 if col[3] == 255 else 0,
               stroke_fill=(90, 4, 10, 255))
    if sub:
        d.text((tx, ty + round(h * 0.3)), sub, font=f2, fill=(255, 226, 120, 255), anchor="mm")
    if icon is not None:
        ih = round(h * 0.55)
        ic = icon.resize((round(icon.width * ih / icon.height), ih), Image.LANCZOS)
        bw = d.textlength(label, font=f1)
        cell.alpha_composite(ic, (max(6, round(tx - bw / 2 - ic.width - h * 0.12)), (h - ih) // 2 - (round(h * 0.06) if sub else 0)))
    return cell


def states(cell):
    """normal / hover / pressed / disabled, stacked vertically."""
    w, h = cell.size
    hover = ImageEnhance.Brightness(cell).enhance(1.15)
    pressed = Image.new("RGBA", (w, h), (0, 0, 0, 0))
    pressed.alpha_composite(ImageEnhance.Brightness(cell).enhance(0.82), (0, 2))
    g = ImageOps.grayscale(cell.convert("RGB")).convert("RGBA")
    g.putalpha(cell.getchannel("A").point(lambda a: a * 0.7))
    out = Image.new("RGBA", (w, h * 4), (0, 0, 0, 0))
    for i, im in enumerate((cell, hover, pressed, g)):
        out.alpha_composite(im, (0, i * h))
    return out


def lightning(size):
    im = Image.new("RGBA", (size, size), (0, 0, 0, 0))
    d = ImageDraw.Draw(im)
    s = size / 24
    pts = [(13, 1), (4, 14), (11, 14), (9, 23), (20, 9), (13, 9), (15, 1)]
    d.polygon([(x * s, y * s) for x, y in pts], fill=(255, 222, 70, 255), outline=(120, 60, 0, 255))
    return im
