// GDI32 + GDI+ replacement: the game draws its text with GDI+ glyph paths (fill + outline into a small ARGB
// bitmap, then scaled down and read back) and with GDI DrawText into DIB sections. Glyphs come from text.c.
#include "rt.h"
#include "text.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

enum { G_DC = 1, G_BMP, G_FONT, G_BRUSH, G_PATH, G_GRAPHICS, G_FAMILY, G_PEN, G_MATRIX, G_FORMAT, G_IMAGE };
typedef struct { u16 s[128]; int n; float em, x, y; int bold; } PathStr;
typedef struct {
    int kind;
    // DC
    u32 sel_font, sel_bmp, text_color, bk_color, bk_mode, align;
    // bitmap (GDI DIB or GDI+ image): guest memory
    u32 bits, w, h, bpp, stride; int bottom_up;
    // font
    float em; int bold;
    // brush / pen
    u32 argb; float width;
    // path
    PathStr *strs; int nstr;
    // graphics
    u32 image; float m[6];
} GObj;
static GObj *gnew(int kind) { GObj *o = calloc(1, sizeof *o); o->kind = kind; o->m[0] = o->m[3] = 1; return o; }
static u32 gh(GObj *o) { return handle_new(H_OTHER, o); }
static GObj *gof(u32 h) { HObj *o = handle_get(h); return o && o->type == H_OTHER ? o->obj : 0; }
static void gdel(u32 h) {
    HObj *o = handle_get(h);
    if (!o || o->type != H_OTHER) return;
    GObj *g = o->obj;
    free(g->strs);
    free(g);
    handle_free(h);
}
static float argf(CPU *c, int n) { float f; u32 v = ARG(n); memcpy(&f, &v, 4); return f; }

// ---- pixel helpers ----------------------------------------------------------------------------------
// source-over on non-premultiplied BGRA (GDI+ PixelFormat32bppARGB layout in memory)
static void blend(u8 *d, u32 argb, u32 cov) {
    u32 sa = ((argb >> 24) * cov + 127) / 255;
    if (!sa) return;
    u32 da = d[3], oa = sa + da * (255 - sa) / 255;
    u32 sc[3] = {argb & 255, (argb >> 8) & 255, (argb >> 16) & 255};
    for (int k = 0; k < 3; k++) d[k] = (u8)((sc[k] * sa + d[k] * da * (255 - sa) / 255) / (oa ? oa : 1));
    d[3] = (u8)oa;
}

// ---- GDI ----------------------------------------------------------------------------------------------
HLE(g_CreateCompatibleDC) { GObj *d = gnew(G_DC); d->text_color = 0; d->bk_color = 0xffffff; d->bk_mode = 2; return gh(d); }
HLE(g_DeleteDC) { gdel(ARG(0)); return 1; }
HLE(g_DeleteObject) { GObj *o = gof(ARG(0)); if (o && o->kind != G_DC) gdel(ARG(0)); return 1; }
HLE(g_CreateDIBSection) {
    u32 bi = ARG(1);
    s32 w = (s32)M32(bi + 4), h = (s32)M32(bi + 8);
    GObj *o = gnew(G_BMP);
    o->w = (u32)w; o->bottom_up = h > 0; o->h = (u32)(h < 0 ? -h : h); o->bpp = M16(bi + 14);
    o->stride = ((o->w * o->bpp + 31) / 32) * 4;
    o->bits = gcalloc(o->stride * o->h);
    if (ARG(3)) M32(ARG(3)) = o->bits;
    return gh(o);
}
static float font_em(s32 height, int bold) {
    if (height < 0) return (float)-height;
    if (height == 0) return 12;
    float a, d, g;
    text_vmetrics(1, bold, &a, &d, &g);
    return height / (a - d > 0 ? a - d : 1);       // positive = cell height
}
HLE(g_CreateFontA) {
    GObj *o = gnew(G_FONT);
    o->bold = (s32)ARG(4) >= 600;
    o->em = font_em((s32)ARG(0), o->bold);
    return gh(o);
}
HLE(g_CreateSolidBrush) { GObj *o = gnew(G_BRUSH); o->argb = ARG(0); return gh(o); }   // COLORREF 0x00BBGGRR
HLE(g_GetStockObject) { return 0x7e100000 + ARG(0); }
HLE(g_SelectObject) {
    GObj *dc = gof(ARG(0)), *o = gof(ARG(1));
    if (!dc) return 0;
    u32 prev = 0;
    if (o && o->kind == G_FONT) { prev = dc->sel_font; dc->sel_font = ARG(1); }
    else if (o && o->kind == G_BMP) { prev = dc->sel_bmp; dc->sel_bmp = ARG(1); }
    return prev ? prev : 0x7e100000;
}
HLE(g_SetTextColor) { GObj *dc = gof(ARG(0)); u32 p = dc ? dc->text_color : 0; if (dc) dc->text_color = ARG(1); return p; }
HLE(g_SetBkColor) { GObj *dc = gof(ARG(0)); u32 p = dc ? dc->bk_color : 0; if (dc) dc->bk_color = ARG(1); return p; }
HLE(g_SetBkMode) { GObj *dc = gof(ARG(0)); u32 p = dc ? dc->bk_mode : 0; if (dc) dc->bk_mode = ARG(1); return p; }
HLE(g_SetTextAlign) { GObj *dc = gof(ARG(0)); u32 p = dc ? dc->align : 0; if (dc) dc->align = ARG(1); return p; }
HLE(g_ret1) { return 1; }
HLE(g_ret0) { return 0; }
static GObj *dc_font(u32 dc, float *em, int *bold) {
    GObj *d = gof(dc), *f = d ? gof(d->sel_font) : 0;
    *em = f ? f->em : 12; *bold = f ? f->bold : 0;
    return f;
}
HLE(g_GetTextExtentPoint32W) {
    float em; int bold; dc_font(ARG(0), &em, &bold);
    float a, d, g; text_vmetrics(em, bold, &a, &d, &g);
    if (!ARG(3) || ((int)ARG(2) > 0 && !ARG(1))) return 0;
    M32(ARG(3)) = (u32)lroundf(text_width(GW(ARG(1)), (int)ARG(2), em, bold));
    M32(ARG(3) + 4) = (u32)ceilf(a - d);
    return 1;
}
HLE(g_GetTextExtentExPointW) {
    float em; int bold; dc_font(ARG(0), &em, &bold);
    float a, d, g; text_vmetrics(em, bold, &a, &d, &g);
    int n = (int)ARG(2), maxw = (int)ARG(3), fit = 0;
    if (!ARG(6) || (n > 0 && !ARG(1))) return 0;          // Windows fails these instead of faulting (seen in a race)
    const u16 *s = GW(ARG(1));
    float w = 0;
    for (int i = 0; i < n; i++) {
        w += text_advance(s[i], em, bold);
        if (ARG(5)) M32(ARG(5) + 4 * (u32)i) = (u32)lroundf(w);
        if (lroundf(w) <= maxw) fit = i + 1;
    }
    if (ARG(4)) M32(ARG(4)) = (u32)fit;
    M32(ARG(6)) = (u32)lroundf(w); M32(ARG(6) + 4) = (u32)ceilf(a - d);
    return 1;
}
HLE(g_GetTextMetricsA) {
    float em; int bold; dc_font(ARG(0), &em, &bold);
    float a, d, g; text_vmetrics(em, bold, &a, &d, &g);
    u32 t = ARG(1), asc = (u32)ceilf(a), dsc = (u32)ceilf(-d), hgt = asc + dsc;
    memset(HP(t), 0, 56);
    M32(t) = hgt; M32(t + 4) = asc; M32(t + 8) = dsc; M32(t + 12) = hgt > (u32)em ? hgt - (u32)em : 0; M32(t + 16) = (u32)lroundf(g);
    M32(t + 20) = (u32)lroundf(text_advance('x', em, bold)); M32(t + 24) = (u32)lroundf(em); M32(t + 28) = bold ? 700 : 400;
    M32(t + 36) = 96; M32(t + 40) = 96; M8(t + 44) = 32; M8(t + 45) = 255; M8(t + 46) = '?'; M8(t + 47) = ' ';
    M8(t + 51) = 0x26; M8(t + 52) = 134;
    return 1;
}
// draw `cov` (w x h coverage at x0,y0) into a DIB with an RGB colour (alpha untouched, like GDI)
static void dib_blit(GObj *b, const u8 *cov, int cw, int ch, int x0, int y0, u32 colorref, const int *clip) {
    if (!b || !b->bits || (b->bpp != 32 && b->bpp != 24)) return;
    int bypp = (int)b->bpp / 8;
    u32 rgb[3] = {(colorref >> 16) & 255, (colorref >> 8) & 255, colorref & 255};    // B G R
    for (int y = 0; y < ch; y++) {
        int py = y0 + y;
        if (py < 0 || py >= (int)b->h || py < clip[1] || py >= clip[3]) continue;
        u8 *row = (u8 *)HP(b->bits + b->stride * (u32)(b->bottom_up ? (int)b->h - 1 - py : py));
        for (int x = 0; x < cw; x++) {
            int px = x0 + x;
            u32 a = cov[y * cw + x];
            if (!a || px < 0 || px >= (int)b->w || px < clip[0] || px >= clip[2]) continue;
            u8 *p = row + px * bypp;
            for (int k = 0; k < 3; k++) p[k] = (u8)((rgb[k] * a + p[k] * (255 - a)) / 255);
        }
    }
}
// DrawText: lines split on '\n', optional word wrap, horizontal/vertical alignment, DT_CALCRECT
static int draw_text(u32 hdc, const u16 *s, int n, u32 rect, u32 fmt) {
    GObj *dc = gof(hdc);
    float em; int bold; dc_font(hdc, &em, &bold);
    float a, d, g; text_vmetrics(em, bold, &a, &d, &g);
    int lh = (int)ceilf(a - d);
    s32 r[4] = {(s32)M32(rect), (s32)M32(rect + 4), (s32)M32(rect + 8), (s32)M32(rect + 12)};
    int maxw = r[2] - r[0];
    // break into lines
    int starts[256], lens[256], nl = 0, i = 0;
    while (i <= n && nl < 256) {
        int st = i, last_space = -1;
        float w = 0;
        while (i < n && s[i] != '\n') {
            if ((fmt & 0x10) && !(fmt & 0x20)) {
                float cw = text_advance(s[i], em, bold);
                if (w + cw > maxw && i > st) { if (last_space > st) i = last_space + 1; break; }
                w += cw;
                if (s[i] == ' ') last_space = i;
            }
            i++;
        }
        starts[nl] = st; lens[nl] = i - st;
        while (lens[nl] && s[st + lens[nl] - 1] == ' ' && (fmt & 0x10)) lens[nl]--;
        nl++;
        if (i < n && s[i] == '\n') i++;
        else if (i >= n) break;
        if (fmt & 0x20) break;       // single line
    }
    int total_h = lh * nl, widest = 0;
    for (int k = 0; k < nl; k++) { int w = (int)lroundf(text_width(s + starts[k], lens[k], em, bold)); if (w > widest) widest = w; }
    if (fmt & 0x400) {                // DT_CALCRECT
        M32(rect + 8) = (u32)(r[0] + widest);
        M32(rect + 12) = (u32)(r[1] + total_h);
        return total_h;
    }
    GObj *bmp = dc ? gof(dc->sel_bmp) : 0;
    if (!bmp) return total_h;
    int y = r[1];
    if ((fmt & 0x20) && (fmt & 4)) y = r[1] + ((r[3] - r[1]) - lh) / 2;
    else if ((fmt & 0x20) && (fmt & 8)) y = r[3] - lh;
    int clip[4] = {r[0], r[1], r[2], r[3]};
    if (fmt & 0x100) { clip[0] = clip[1] = -100000; clip[2] = clip[3] = 100000; }
    static const float ident[6] = {1, 0, 0, 1, 0, 0};
    for (int k = 0; k < nl; k++, y += lh) {
        int w = (int)ceilf(text_width(s + starts[k], lens[k], em, bold)) + 2;
        int x = r[0];
        if (fmt & 1) x = r[0] + (maxw - w) / 2;
        else if (fmt & 2) x = r[2] - w;
        if (w <= 2) continue;
        u8 *cov = malloc((size_t)w * (size_t)lh);
        text_coverage(cov, w, lh, s + starts[k], lens[k], em, bold, 0, a, ident);
        if (dc->bk_mode == 2) {      // OPAQUE: background box first
            u8 *box = malloc((size_t)w * (size_t)lh);
            memset(box, 255, (size_t)w * (size_t)lh);
            dib_blit(bmp, box, w, lh, x, y, dc->bk_color, clip);
            free(box);
        }
        dib_blit(bmp, cov, w, lh, x, y, dc->text_color, clip);
        free(cov);
    }
    return total_h;
}
HLE(u_DrawTextW) {
    int n = (s32)ARG(2);
    const u16 *s = GW(ARG(1));
    if (n < 0) { n = 0; while (s[n]) n++; }
    return (u32)draw_text(ARG(0), s, n, ARG(3), ARG(4));
}
HLE(u_DrawTextA) {
    u16 tmp[2048];
    int n = (s32)ARG(2);
    int m = gbk_to_utf16((u8 *)HP(ARG(1)), n < 0 ? -1 : n, tmp, 2048);
    return (u32)draw_text(ARG(0), tmp, m < 2048 ? m : 2048, ARG(3), ARG(4));
}
HLE(u_FillRect) {
    GObj *dc = gof(ARG(0));
    GObj *b = dc ? gof(dc->sel_bmp) : 0, *br = gof(ARG(2));
    if (!b) return 1;
    u32 col = br ? br->argb : (ARG(2) == 0x7e100004 ? 0 : 0xffffff);
    s32 r[4] = {(s32)M32(ARG(1)), (s32)M32(ARG(1) + 4), (s32)M32(ARG(1) + 8), (s32)M32(ARG(1) + 12)};
    int w = r[2] - r[0], h = r[3] - r[1];
    if (w <= 0 || h <= 0) return 1;
    u8 *box = malloc((size_t)w * (size_t)h);
    memset(box, 255, (size_t)w * (size_t)h);
    int clip[4] = {-100000, -100000, 100000, 100000};
    dib_blit(b, box, w, h, r[0], r[1], col, clip);
    free(box);
    return 1;
}

// ---- GDI+ ----------------------------------------------------------------------------------------------
HLE(p_Startup) { if (ARG(0)) M32(ARG(0)) = 1; return 0; }
HLE(p_ok) { return 0; }
HLE(p_Alloc) { return galloc(ARG(0)); }
HLE(p_Free) { gfree(ARG(0)); return 0; }
HLE(p_Delete) { gdel(ARG(0)); return 0; }
HLE(p_DisposeImage) { gdel(ARG(0)); return 0; }   // pixels may belong to the game (scan0): not freed
HLE(p_CreateBitmapFromScan0) {
    GObj *o = gnew(G_IMAGE);
    o->w = ARG(0); o->h = ARG(1);
    o->stride = ARG(4) && ARG(2) ? ARG(2) : o->w * 4;
    o->bits = ARG(4) ? ARG(4) : gcalloc(o->stride * o->h);
    M32(ARG(5)) = gh(o);
    return 0;
}
HLE(p_GetImageGraphicsContext) { GObj *g = gnew(G_GRAPHICS); g->image = ARG(0); M32(ARG(1)) = gh(g); return 0; }
HLE(p_CreateFontFamilyFromName) {
    GObj *f = gnew(G_FAMILY);
    static int n;
    if (n++ < 8) { u8 b[64]; int k = utf16_to_gbk(GW(ARG(0)), -1, b, 63); b[k < 63 ? k : 63] = 0; rt_log("GDI+ font family '%s'\n", b); }
    M32(ARG(2)) = gh(f);
    return 0;
}
HLE(p_CreatePath) { M32(ARG(1)) = gh(gnew(G_PATH)); return 0; }
HLE(p_CreateSolidFill) { GObj *b = gnew(G_BRUSH); b->argb = ARG(0); M32(ARG(1)) = gh(b); return 0; }
HLE(p_CreatePen2) { GObj *p = gnew(G_PEN); GObj *b = gof(ARG(0)); p->argb = b ? b->argb : 0xff000000u; p->width = argf(c, 1); M32(ARG(3)) = gh(p); return 0; }
HLE(p_CreateStringFormat) { M32(ARG(2)) = gh(gnew(G_FORMAT)); return 0; }
HLE(p_CreateMatrix2) { GObj *m = gnew(G_MATRIX); for (int i = 0; i < 6; i++) m->m[i] = argf(c, i); M32(ARG(6)) = gh(m); return 0; }
HLE(p_SetWorldTransform) { GObj *g = gof(ARG(0)), *m = gof(ARG(1)); if (g && m) memcpy(g->m, m->m, sizeof g->m); return 0; }
// AddPathString(path, string, length, family, style, emSize, layoutRect, format): GDI+ puts the line's top at
// the layout rect's y, so the baseline is y + ascent; a small leading pad like GDI+'s generic format.
HLE(p_AddPathString) {
    GObj *p = gof(ARG(0));
    if (!p) return 2;
    int n = (s32)ARG(2);
    const u16 *s = GW(ARG(1));
    if (n < 0) { n = 0; while (s[n] && n < 127) n++; }
    if (n > 127) n = 127;
    p->strs = realloc(p->strs, sizeof(PathStr) * (size_t)(p->nstr + 1));
    PathStr *ps = &p->strs[p->nstr++];
    memcpy(ps->s, s, 2 * (size_t)n); ps->n = n;
    ps->em = argf(c, 5); ps->bold = ARG(4) & 1;
    float lx = 0, ly = 0;
    if (ARG(6)) { memcpy(&lx, HP(ARG(6)), 4); memcpy(&ly, HP(ARG(6) + 4), 4); }
    float a, d, g; text_vmetrics(ps->em, ps->bold, &a, &d, &g);
    ps->x = lx + ps->em / 6; ps->y = ly + a;
    return 0;
}
static const float IDENT[6] = {1, 0, 0, 1, 0, 0};
HLE(p_GetPathWorldBounds) {
    GObj *p = gof(ARG(0));
    float b[4] = {0, 0, 0, 0}, out[4] = {0, 0, 0, 0};
    int any = 0;
    for (int i = 0; p && i < p->nstr; i++) {
        if (!text_bounds(p->strs[i].s, p->strs[i].n, p->strs[i].em, p->strs[i].bold, p->strs[i].x, p->strs[i].y, IDENT, b)) continue;
        if (!any) memcpy(out, b, sizeof out); else { out[0] = fminf(out[0], b[0]); out[1] = fminf(out[1], b[1]); out[2] = fmaxf(out[2], b[2]); out[3] = fmaxf(out[3], b[3]); }
        any = 1;
    }
    float r[4] = {out[0], out[1], out[2] - out[0], out[3] - out[1]};
    memcpy(HP(ARG(1)), r, 16);
    return 0;
}
static GObj *gfx_image(u32 g, GObj **gr) { GObj *G = gof(g); *gr = G; return G ? gof(G->image) : 0; }
static void path_cov(GObj *p, const float m[6], u8 *cov, int w, int h) {
    memset(cov, 0, (size_t)w * (size_t)h);
    u8 *tmp = malloc((size_t)w * (size_t)h);
    for (int i = 0; p && i < p->nstr; i++) {
        text_coverage(tmp, w, h, p->strs[i].s, p->strs[i].n, p->strs[i].em, p->strs[i].bold, p->strs[i].x, p->strs[i].y, m);
        for (int k = 0; k < w * h; k++) if (tmp[k] > cov[k]) cov[k] = tmp[k];
    }
    free(tmp);
}
static void image_paint(GObj *img, const u8 *cov, u32 argb) {
    for (u32 y = 0; y < img->h; y++) {
        u8 *row = (u8 *)HP(img->bits + img->stride * y);
        for (u32 x = 0; x < img->w; x++) if (cov[y * img->w + x]) blend(row + 4 * x, argb, cov[y * img->w + x]);
    }
}
HLE(p_FillPath) {
    GObj *G, *img = gfx_image(ARG(0), &G), *br = gof(ARG(1)), *p = gof(ARG(2));
    if (!img || !br || !p) return 0;
    u8 *cov = malloc((size_t)img->w * img->h);
    path_cov(p, G->m, cov, (int)img->w, (int)img->h);
    image_paint(img, cov, br->argb);
    free(cov);
    return 0;
}
// Stroke = band of half the pen width on each side of the outline: dilate(cov) - erode(cov).
HLE(p_DrawPath) {
    GObj *G, *img = gfx_image(ARG(0), &G), *pen = gof(ARG(1)), *p = gof(ARG(2));
    if (!img || !pen || !p) return 0;
    int w = (int)img->w, h = (int)img->h;
    u8 *cov = malloc((size_t)w * h), *ring = malloc((size_t)w * h);
    path_cov(p, G->m, cov, w, h);
    float scale = sqrtf(fabsf(G->m[0] * G->m[3] - G->m[1] * G->m[2]));
    float r = pen->width * (scale > 0 ? scale : 1) * 0.5f;
    int ri = (int)ceilf(r);
    for (int y = 0; y < h; y++)
        for (int x = 0; x < w; x++) {
            int mx = 0, mn = 255;
            for (int dy = -ri; dy <= ri; dy++)
                for (int dx = -ri; dx <= ri; dx++) {
                    float dist = sqrtf((float)(dx * dx + dy * dy));
                    if (dist > r + 0.5f) continue;
                    int xx = x + dx, yy = y + dy;
                    int v = (xx < 0 || yy < 0 || xx >= w || yy >= h) ? 0 : cov[yy * w + xx];
                    float wgt = dist <= r - 0.5f ? 1 : r + 0.5f - dist;      // soft edge of the pen
                    int vd = (int)(v * wgt), ve = (int)(255 - (255 - v) * wgt);
                    if (vd > mx) mx = vd;
                    if (ve < mn) mn = ve;
                }
            int band = mx - mn;
            ring[y * w + x] = (u8)(band < 0 ? 0 : band > 255 ? 255 : band);
        }
    image_paint(img, ring, pen->argb);
    free(cov); free(ring);
    return 0;
}
// DrawImageRectRect(graphics, image, dx, dy, dw, dh, sx, sy, sw, sh, unit, attrs, cb, data): bilinear, source-over
HLE(p_DrawImageRectRect) {
    GObj *G, *dst = gfx_image(ARG(0), &G), *src = gof(ARG(1));
    if (!dst || !src || src->kind != G_IMAGE) return 0;
    float dx = argf(c, 2), dy = argf(c, 3), dw = argf(c, 4), dh = argf(c, 5), sx = argf(c, 6), sy = argf(c, 7), sw = argf(c, 8), sh = argf(c, 9);
    // destination rect through the world transform (scale + translate)
    float x0 = dx * G->m[0] + dy * G->m[2] + G->m[4], y0 = dx * G->m[1] + dy * G->m[3] + G->m[5];
    float x1 = (dx + dw) * G->m[0] + (dy + dh) * G->m[2] + G->m[4], y1 = (dx + dw) * G->m[1] + (dy + dh) * G->m[3] + G->m[5];
    if (x1 < x0) { float t = x0; x0 = x1; x1 = t; }
    if (y1 < y0) { float t = y0; y0 = y1; y1 = t; }
    if (x1 - x0 < 1e-3f || y1 - y0 < 1e-3f) return 0;
    for (int y = (int)floorf(y0); y < (int)ceilf(y1); y++) {
        if (y < 0 || y >= (int)dst->h) continue;
        u8 *row = (u8 *)HP(dst->bits + dst->stride * (u32)y);
        for (int x = (int)floorf(x0); x < (int)ceilf(x1); x++) {
            if (x < 0 || x >= (int)dst->w) continue;
            float u = sx + ((x + 0.5f - x0) / (x1 - x0)) * sw - 0.5f, v = sy + ((y + 0.5f - y0) / (y1 - y0)) * sh - 0.5f;
            int iu = (int)floorf(u), iv = (int)floorf(v);
            float fu = u - iu, fv = v - iv, acc[4] = {0, 0, 0, 0};
            for (int k = 0; k < 4; k++) {
                int px = iu + (k & 1), py = iv + (k >> 1);
                if (px < 0) px = 0;
                if (py < 0) py = 0;
                if (px >= (int)src->w) px = (int)src->w - 1;
                if (py >= (int)src->h) py = (int)src->h - 1;
                float wgt = ((k & 1) ? fu : 1 - fu) * ((k >> 1) ? fv : 1 - fv);
                const u8 *p = (const u8 *)HP(src->bits + src->stride * (u32)py + 4 * (u32)px);
                float a = p[3] / 255.f;      // interpolate premultiplied
                acc[0] += p[0] * a * wgt; acc[1] += p[1] * a * wgt; acc[2] += p[2] * a * wgt; acc[3] += a * wgt;
            }
            if (acc[3] <= 0) continue;
            u32 argb = ((u32)(acc[3] * 255 + 0.5f) << 24) | ((u32)(acc[2] / acc[3] + 0.5f) << 16) | ((u32)(acc[1] / acc[3] + 0.5f) << 8) | (u32)(acc[0] / acc[3] + 0.5f);
            blend(row + 4 * x, argb | 0, 255);
        }
    }
    return 0;
}
HLE(p_BitmapLockBits) {
    GObj *b = gof(ARG(0));
    u32 d = ARG(4);
    if (!b) return 2;
    u32 x = 0, y = 0, w = b->w, h = b->h;
    if (ARG(1)) { x = M32(ARG(1)); y = M32(ARG(1) + 4); w = M32(ARG(1) + 8); h = M32(ARG(1) + 12); }
    M32(d) = w; M32(d + 4) = h; M32(d + 8) = b->stride; M32(d + 12) = ARG(3); M32(d + 16) = b->bits + y * b->stride + x * 4; M32(d + 20) = 0;
    return 0;
}

static const HleDef defs[] = {
    DEF("gdi32", "CreateCompatibleDC", g_CreateCompatibleDC, 1), DEF("gdi32", "DeleteDC", g_DeleteDC, 1), DEF("gdi32", "DeleteObject", g_DeleteObject, 1),
    DEF("gdi32", "CreateDIBSection", g_CreateDIBSection, 6), DEF("gdi32", "CreateFontA", g_CreateFontA, 14),
    DEF("gdi32", "CreateSolidBrush", g_CreateSolidBrush, 1), DEF("gdi32", "GetStockObject", g_GetStockObject, 1),
    DEF("gdi32", "SelectObject", g_SelectObject, 2), DEF("gdi32", "SetTextColor", g_SetTextColor, 2), DEF("gdi32", "SetBkColor", g_SetBkColor, 2),
    DEF("gdi32", "SetBkMode", g_SetBkMode, 2), DEF("gdi32", "SetMapMode", g_ret1, 2), DEF("gdi32", "SetTextAlign", g_SetTextAlign, 2),
    DEF("gdi32", "GetTextExtentPoint32W", g_GetTextExtentPoint32W, 4), DEF("gdi32", "GetTextExtentExPointW", g_GetTextExtentExPointW, 7),
    DEF("gdi32", "GetTextMetricsA", g_GetTextMetricsA, 2),
    DEF("user32", "DrawTextW", u_DrawTextW, 5), DEF("user32", "DrawTextA", u_DrawTextA, 5), DEF("user32", "FillRect", u_FillRect, 3),
    DEF("gdiplus", "GdiplusStartup", p_Startup, 3), DEF("gdiplus", "GdiplusShutdown", p_ok, 1), DEF("gdiplus", "GdipAlloc", p_Alloc, 1),
    DEF("gdiplus", "GdipFree", p_Free, 1), DEF("gdiplus", "GdipCreateBitmapFromScan0", p_CreateBitmapFromScan0, 6),
    DEF("gdiplus", "GdipGetImageGraphicsContext", p_GetImageGraphicsContext, 2),
    DEF("gdiplus", "GdipCreateFontFamilyFromName", p_CreateFontFamilyFromName, 3), DEF("gdiplus", "GdipCreatePath", p_CreatePath, 2),
    DEF("gdiplus", "GdipCreateSolidFill", p_CreateSolidFill, 2), DEF("gdiplus", "GdipCreatePen2", p_CreatePen2, 4),
    DEF("gdiplus", "GdipCreateStringFormat", p_CreateStringFormat, 3), DEF("gdiplus", "GdipCreateMatrix2", p_CreateMatrix2, 7),
    DEF("gdiplus", "GdipAddPathString", p_AddPathString, 8), DEF("gdiplus", "GdipGetPathWorldBounds", p_GetPathWorldBounds, 4),
    DEF("gdiplus", "GdipBitmapLockBits", p_BitmapLockBits, 5), DEF("gdiplus", "GdipBitmapUnlockBits", p_ok, 2),
    DEF("gdiplus", "GdipDeleteBrush", p_Delete, 1), DEF("gdiplus", "GdipDeleteFontFamily", p_Delete, 1), DEF("gdiplus", "GdipDeleteGraphics", p_Delete, 1),
    DEF("gdiplus", "GdipDeleteMatrix", p_Delete, 1), DEF("gdiplus", "GdipDeletePath", p_Delete, 1), DEF("gdiplus", "GdipDeletePen", p_Delete, 1),
    DEF("gdiplus", "GdipDeleteStringFormat", p_Delete, 1), DEF("gdiplus", "GdipDisposeImage", p_DisposeImage, 1),
    DEF("gdiplus", "GdipDrawImageRectRect", p_DrawImageRectRect, 14), DEF("gdiplus", "GdipDrawPath", p_DrawPath, 3), DEF("gdiplus", "GdipFillPath", p_FillPath, 3),
    DEF("gdiplus", "GdipSetPenMode", p_ok, 2), DEF("gdiplus", "GdipSetSmoothingMode", p_ok, 2), DEF("gdiplus", "GdipSetWorldTransform", p_SetWorldTransform, 2),
};
void hle_gdi_init(void) { hle_add(defs, (int)(sizeof defs / sizeof defs[0])); }
