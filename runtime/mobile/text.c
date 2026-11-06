// Text engine for the GDI / GDI+ replacements: system TrueType fonts via stb_truetype.
// Latin text uses a sans font (Roboto on Android, Arial on the bench), anything it lacks falls back to a CJK font.
#include "rt.h"
#include "text.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STB_TRUETYPE_IMPLEMENTATION
#define STBTT_STATIC
#include "../../third_party/stb/stb_truetype.h"

typedef struct { stbtt_fontinfo info; u8 *data; int ok; } Font;
static Font g_fonts[3];      // 0 regular latin, 1 bold latin, 2 CJK
static int g_loaded;

static u8 *slurp(const char *p) {
    FILE *f = fopen(p, "rb");
    if (!f) return 0;
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    u8 *b = malloc((size_t)n);
    if (fread(b, 1, (size_t)n, f) != (size_t)n) { free(b); b = 0; }
    fclose(f);
    return b;
}
static void load(int slot, const char *const *paths) {
    for (int i = 0; paths[i]; i++) {
        u8 *d = slurp(paths[i]);
        if (!d) continue;
        int off = stbtt_GetFontOffsetForIndex(d, 0);
        if (off >= 0 && stbtt_InitFont(&g_fonts[slot].info, d, off)) {
            g_fonts[slot].data = d; g_fonts[slot].ok = 1;
            rt_log("text: font %d = %s\n", slot, paths[i]);
            return;
        }
        free(d);
    }
    rt_log("text: no font for slot %d\n", slot);
}
static void ensure(void) {
    if (g_loaded) return;
    g_loaded = 1;
    // iOS apps cannot read the system's font files: Roboto ships with the app there (ios/assets, image dir)
    extern char g_image_dir[512];
    char latin[600], latinb[600];
    snprintf(latin, sizeof latin, "%s/latin.ttf", g_image_dir);
    snprintf(latinb, sizeof latinb, "%s/latin_bold.ttf", g_image_dir);
    const char *const reg[] = {"/system/fonts/Roboto-Regular.ttf", "/system/fonts/RobotoStatic-Regular.ttf", "/system/fonts/DroidSans.ttf",
                                      "C:/Windows/Fonts/arial.ttf", "C:/Windows/Fonts/tahoma.ttf", latin, 0};
    const char *const bold[] = {"/system/fonts/DroidSans-Bold.ttf", "/system/fonts/Roboto-Bold.ttf", "C:/Windows/Fonts/arialbd.ttf", latinb, 0};
    // Chinese: the font shipped in the APK first (Noto Sans SC Regular, TrueType outlines, SIL OFL: assets/cjk_sc.ttf +
    // cjk_sc_OFL.txt), so every phone draws it the same -- stb_truetype cannot read the NotoSansCJK OpenType collection
    // most phones carry, and phones without a vendor TrueType CJK font showed other fonts / boxes (6 Nov 2026)
    extern char g_image_dir[512];
    char bundled[600];
    snprintf(bundled, sizeof bundled, "%s/cjk_sc.ttf", g_image_dir);
    const char *const cjk[] = {bundled, "/product/fonts/TransSans_SC.ttf", "/system/fonts/DroidSansFallbackFull.ttf", "/system/fonts/DroidSansFallback.ttf",
                                      "/system/fonts/NotoSansSC-Regular.otf", "/system/fonts/NotoSansCJK-Regular.ttc",
                                      "C:/Windows/Fonts/msyh.ttc", "C:/Windows/Fonts/simsun.ttc", 0};
    load(0, reg);
    load(1, bold);
    load(2, cjk);
    if (!g_fonts[1].ok) g_fonts[1] = g_fonts[0];
}

// font + glyph for a code point (style bit 0 = bold)
static Font *pick(u32 cp, int bold, int *glyph) {
    ensure();
    Font *f = &g_fonts[bold ? 1 : 0];
    int g = f->ok ? stbtt_FindGlyphIndex(&f->info, (int)cp) : 0;
    if (!g && g_fonts[2].ok) { f = &g_fonts[2]; g = stbtt_FindGlyphIndex(&f->info, (int)cp); }
    if (!f->ok) { *glyph = 0; return 0; }
    *glyph = g;
    return f;
}
// scale for an em size in pixels, and the font's ascent/descent in pixels (from the Latin font for stable lines)
void text_vmetrics(float em, int bold, float *ascent, float *descent, float *gap) {
    ensure();
    Font *f = &g_fonts[bold ? 1 : 0];
    if (!f->ok) f = &g_fonts[2];
    if (!f->ok) { *ascent = em * 0.8f; *descent = -em * 0.2f; *gap = 0; return; }
    int a, d, l;
    stbtt_GetFontVMetrics(&f->info, &a, &d, &l);
    float s = stbtt_ScaleForMappingEmToPixels(&f->info, em);
    *ascent = a * s; *descent = d * s; *gap = l * s;
}
float text_advance(u32 cp, float em, int bold) {
    int g;
    Font *f = pick(cp, bold, &g);
    if (!f) return em * 0.5f;
    int adv, lsb;
    stbtt_GetGlyphHMetrics(&f->info, g, &adv, &lsb);
    return adv * stbtt_ScaleForMappingEmToPixels(&f->info, em);
}
float text_width(const u16 *s, int n, float em, int bold) {
    float w = 0;
    for (int i = 0; i < n; i++) w += text_advance(s[i], em, bold);
    return w;
}

// Outline of a string laid out from (x, baseline): appended as contours in pixel space, then transformed by m.
typedef struct { stbtt__point *pts; int npts, cap; int *wc; int nwc, wcap; } Outline;
static void ol_point(Outline *o, float x, float y) {
    if (o->npts == o->cap) { o->cap = o->cap ? o->cap * 2 : 256; o->pts = realloc(o->pts, sizeof *o->pts * (size_t)o->cap); }
    o->pts[o->npts].x = x; o->pts[o->npts].y = y; o->npts++;
}
static void ol_contour(Outline *o, int n) {
    if (o->nwc == o->wcap) { o->wcap = o->wcap ? o->wcap * 2 : 32; o->wc = realloc(o->wc, sizeof *o->wc * (size_t)o->wcap); }
    o->wc[o->nwc++] = n;
}
static void build_outline(Outline *o, const u16 *s, int n, float em, int bold, float x, float base, const float m[6]) {
    for (int i = 0; i < n; i++) {
        int g;
        Font *f = pick(s[i], bold, &g);
        if (!f) continue;
        float sc = stbtt_ScaleForMappingEmToPixels(&f->info, em);
        stbtt_vertex *v;
        int nv = stbtt_GetGlyphShape(&f->info, g, &v);
        if (nv > 0) {
            int *cl, nc;
            stbtt__point *fp = stbtt_FlattenCurves(v, nv, 0.35f / sc, &cl, &nc, 0);
            int k = 0;
            for (int c = 0; c < nc; c++) {
                for (int j = 0; j < cl[c]; j++, k++) {
                    float px = x + fp[k].x * sc, py = base - fp[k].y * sc;      // font y up -> pixels y down
                    ol_point(o, px * m[0] + py * m[2] + m[4], px * m[1] + py * m[3] + m[5]);
                }
                ol_contour(o, cl[c]);
            }
            STBTT_free(fp, 0);
            STBTT_free(cl, 0);
            stbtt_FreeShape(&f->info, v);
        }
        int adv, lsb;
        stbtt_GetGlyphHMetrics(&f->info, g, &adv, &lsb);
        x += adv * sc;
    }
}
// Coverage (0..255) of the string in a w x h buffer.
void text_coverage(u8 *cov, int w, int h, const u16 *s, int n, float em, int bold, float x, float base, const float m[6]) {
    memset(cov, 0, (size_t)w * (size_t)h);
    Outline o = {0};
    build_outline(&o, s, n, em, bold, x, base, m);
    if (o.nwc) {
        stbtt__bitmap bm = {w, h, w, cov};
        stbtt__rasterize(&bm, o.pts, o.wc, o.nwc, 1, 1, 0, 0, 0, 0, 0, 0);
    }
    free(o.pts); free(o.wc);
}
// Ink bounds of the string (transformed): x0 y0 x1 y1. Returns 0 if empty.
int text_bounds(const u16 *s, int n, float em, int bold, float x, float base, const float m[6], float b[4]) {
    Outline o = {0};
    build_outline(&o, s, n, em, bold, x, base, m);
    if (!o.npts) { free(o.pts); free(o.wc); b[0] = b[1] = b[2] = b[3] = 0; return 0; }
    b[0] = b[2] = o.pts[0].x; b[1] = b[3] = o.pts[0].y;
    for (int i = 1; i < o.npts; i++) {
        if (o.pts[i].x < b[0]) b[0] = o.pts[i].x;
        if (o.pts[i].x > b[2]) b[2] = o.pts[i].x;
        if (o.pts[i].y < b[1]) b[1] = o.pts[i].y;
        if (o.pts[i].y > b[3]) b[3] = o.pts[i].y;
    }
    free(o.pts); free(o.wc);
    return 1;
}
