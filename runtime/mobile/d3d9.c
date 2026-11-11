// Direct3D 9 front-end: guest-visible COM objects, state tracking, vertex expansion, texture conversion.
// Rendering goes to the backend in gpu.h. Shaders are reported as unsupported (fixed function only).
#include "gpu.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

u32 user32_main_hwnd(void);
static u32 user32_main_hwnd_(void) { return user32_main_hwnd(); }
#define S_OK 0
#define E_FAIL 0x80004005u
#define E_NOTIMPL 0x80004001u
#define D3DERR_INVALIDCALL 0x8876086cu
#define D3DERR_NOTAVAILABLE 0x8876086au

enum { K_D3D = 1, K_DEV, K_TEX, K_CUBE, K_SURF, K_VB, K_IB, K_DECL, K_SB, K_SWAP, K_QUERY, K_SHADER };
typedef struct Res {
    int kind, used; u32 g;                       // guest COM object
    u32 fmt, w, h, levels, usage, pool;
    u32 mem[6][14], pitch[14], lw[14], lh[14];   // per face/level guest memory
    u32 surf[6][14];                             // surface objects per face/level
    GpuTex *gt;
    int etc;                                     // stored as ETC2 on the GPU (Compressed textures)
    int dirty[6][14];
    // surface
    int parent, level, face, is_backbuffer, is_depth;
    // buffers
    u32 size, fvf;
    // declaration
    u8 decl[64][8]; int ndecl;
    // state block
    GState *sb; u32 *sbrs;
} Res;
#define NRES 16384
static Res g_res[NRES];
static int g_nres_hint = 1;
static Res *res_of(u32 gobj) { if (!gobj) return 0; u32 id = M32(gobj + 8); return id && id < NRES && g_res[id].used ? &g_res[id] : 0; }

// ---- COM plumbing ---------------------------------------------------------------------------
HLE(m_unknown) { rt_fatal("unimplemented Direct3D method (return address %08x, this %08x kind %d)", M32(c->esp), ARG(0), res_of(ARG(0)) ? res_of(ARG(0))->kind : -1); return 0; }
static u32 vt_make(int n) { u32 vt = gstatic(4 * (u32)n); for (int i = 0; i < n; i++) M32(vt + 4 * i) = hle_thunk_fn("d3d9?", m_unknown, 0); return vt; }
#define SLOT(vt, i, fn, nargs) M32((vt) + 4 * (i)) = hle_thunk_fn(#fn, fn, nargs)
static Res *res_new(int kind, u32 vt) {
    for (int k = 0; k < NRES; k++) {
        int i = (g_nres_hint + k) % NRES;
        if (!i || g_res[i].used) continue;
        memset(&g_res[i], 0, sizeof g_res[i]);
        g_res[i].used = 1; g_res[i].kind = kind;
        g_res[i].g = gstatic(16);   // tiny, never reused: guest may keep stale pointers briefly
        M32(g_res[i].g) = vt; M32(g_res[i].g + 4) = 1; M32(g_res[i].g + 8) = (u32)i;
        g_nres_hint = i + 1;
        return &g_res[i];
    }
    rt_fatal("too many Direct3D resources");
    return 0;
}
static void res_free(Res *r) {
    for (int f = 0; f < 6; f++)
        for (int l = 0; l < 14; l++) {
            if (r->mem[f][l] && r->kind != K_SURF) gfree(r->mem[f][l]);
            if (r->surf[f][l]) { Res *s = res_of(r->surf[f][l]); if (s) s->used = 0; }
        }
    if (r->kind == K_SURF && r->parent == 0 && r->mem[0][0]) gfree(r->mem[0][0]);
    if (r->gt && !(r->kind == K_SURF && r->parent)) gpu_tex_destroy(r->gt);
    free(r->sb); free(r->sbrs);
    r->used = 0;
}
static u32 com_release(u32 o) {
    u32 n = M32(o + 4);
    if (n) M32(o + 4) = --n;
    if (!n) { Res *r = res_of(o); if (r && r->kind != K_DEV && r->kind != K_D3D && !r->is_backbuffer && !r->is_depth) res_free(r); }
    return n;
}
// D3D9 device bindings hold a reference: the game releases textures / targets that are still bound
static void bind_ref(u32 *slot, u32 o) {
    if (o) M32(o + 4)++;
    u32 old = *slot;
    *slot = o;
    if (old) com_release(old);
}
HLE(m_AddRef) { return ++M32(ARG(0) + 4); }
HLE(m_Release) { return com_release(ARG(0)); }
HLE(m_QI) { if (ARG(2)) M32(ARG(2)) = ARG(0); M32(ARG(0) + 4)++; return S_OK; }
HLE(m_ok) { return S_OK; }
HLE(m_zero) { return 0; }

// ---- formats ------------------------------------------------------------------------------------
#define FMT_A8R8G8B8 21
#define FMT_X8R8G8B8 22
#define FMT_R5G6B5 23
#define FMT_X1R5G5B5 24
#define FMT_A1R5G5B5 25
#define FMT_A4R4G4B4 26
#define FMT_A8 28
#define FMT_X4R4G4B4 30
#define FMT_A8B8G8R8 32
#define FMT_X8B8G8R8 33
#define FMT_L8 50
#define FMT_A8L8 51
#define FMT_DXT1 0x31545844u
#define FMT_DXT2 0x32545844u
#define FMT_DXT3 0x33545844u
#define FMT_DXT4 0x34545844u
#define FMT_DXT5 0x35545844u
static int is_dxt(u32 f) { return f == FMT_DXT1 || f == FMT_DXT2 || f == FMT_DXT3 || f == FMT_DXT4 || f == FMT_DXT5; }
static int bpp(u32 f) {
    switch (f) {
    case FMT_A8R8G8B8: case FMT_X8R8G8B8: case FMT_A8B8G8R8: case FMT_X8B8G8R8: return 4;
    case FMT_R5G6B5: case FMT_X1R5G5B5: case FMT_A1R5G5B5: case FMT_A4R4G4B4: case FMT_X4R4G4B4: case FMT_A8L8: return 2;
    case FMT_A8: case FMT_L8: return 1;
    default: return 4;
    }
}
static u32 level_pitch(u32 f, u32 w) { return is_dxt(f) ? ((w + 3) / 4) * (f == FMT_DXT1 ? 8 : 16) : w * (u32)bpp(f); }
static u32 level_size(u32 f, u32 w, u32 h) { return is_dxt(f) ? level_pitch(f, w) * ((h + 3) / 4) : level_pitch(f, w) * h; }

static u32 rgba(u32 r, u32 g, u32 b, u32 a) { return r | (g << 8) | (b << 16) | (a << 24); }
static u32 c565(u32 v) { u32 r = (v >> 11) & 31, g = (v >> 5) & 63, b = v & 31; return rgba(r << 3 | r >> 2, g << 2 | g >> 4, b << 3 | b >> 2, 255); }
static void dxt_color_block(const u8 *p, u32 out[16], int dxt1) {
    u32 a = p[0] | p[1] << 8, b = p[2] | p[3] << 8, pal[4];
    pal[0] = c565(a); pal[1] = c565(b);
    u32 ar = pal[0] & 255, ag = (pal[0] >> 8) & 255, ab = (pal[0] >> 16) & 255, br = pal[1] & 255, bg = (pal[1] >> 8) & 255, bb = (pal[1] >> 16) & 255;
    if (a > b || !dxt1) {
        pal[2] = rgba((2 * ar + br) / 3, (2 * ag + bg) / 3, (2 * ab + bb) / 3, 255);
        pal[3] = rgba((ar + 2 * br) / 3, (ag + 2 * bg) / 3, (ab + 2 * bb) / 3, 255);
    } else {
        pal[2] = rgba((ar + br) / 2, (ag + bg) / 2, (ab + bb) / 2, 255);
        pal[3] = 0;
    }
    u32 bits = p[4] | p[5] << 8 | p[6] << 16 | (u32)p[7] << 24;
    for (int i = 0; i < 16; i++) out[i] = pal[(bits >> (2 * i)) & 3];
}
// convert one level from D3D layout (guest memory) to RGBA8 (host buffer, w*h)
static void to_rgba(u32 f, const u8 *src, u32 pitch, u32 w, u32 h, u32 *dst) {
    if (is_dxt(f)) {
        u32 blk[16];
        for (u32 by = 0; by < (h + 3) / 4; by++)
            for (u32 bx = 0; bx < (w + 3) / 4; bx++) {
                const u8 *p = src + by * pitch + bx * (f == FMT_DXT1 ? 8 : 16);
                if (f == FMT_DXT1) dxt_color_block(p, blk, 1);
                else {
                    dxt_color_block(p + 8, blk, 0);
                    if (f == FMT_DXT2 || f == FMT_DXT3) {
                        for (int i = 0; i < 16; i++) { u32 a4 = (p[i / 2] >> ((i & 1) * 4)) & 15; blk[i] = (blk[i] & 0xffffff) | ((a4 * 17) << 24); }
                    } else {
                        u32 a0 = p[0], a1 = p[1], al[8];
                        al[0] = a0; al[1] = a1;
                        if (a0 > a1) for (int i = 1; i < 7; i++) al[i + 1] = ((7 - i) * a0 + i * a1) / 7;
                        else { for (int i = 1; i < 5; i++) al[i + 1] = ((5 - i) * a0 + i * a1) / 5; al[6] = 0; al[7] = 255; }
                        u64 bits = 0;
                        for (int i = 0; i < 6; i++) bits |= (u64)p[2 + i] << (8 * i);
                        for (int i = 0; i < 16; i++) blk[i] = (blk[i] & 0xffffff) | (al[(bits >> (3 * i)) & 7] << 24);
                    }
                }
                for (int y = 0; y < 4; y++)
                    for (int x = 0; x < 4; x++)
                        if (bx * 4 + x < w && by * 4 + y < h) dst[(by * 4 + y) * w + bx * 4 + x] = blk[y * 4 + x];
            }
        return;
    }
    for (u32 y = 0; y < h; y++) {
        const u8 *s = src + y * pitch;
        u32 *d = dst + y * w;
        for (u32 x = 0; x < w; x++) {
            u32 v;
            switch (f) {
            case FMT_A8R8G8B8: v = ((const u32 *)s)[x]; d[x] = rgba((v >> 16) & 255, (v >> 8) & 255, v & 255, v >> 24); break;
            case FMT_X8R8G8B8: v = ((const u32 *)s)[x]; d[x] = rgba((v >> 16) & 255, (v >> 8) & 255, v & 255, 255); break;
            case FMT_A8B8G8R8: d[x] = ((const u32 *)s)[x]; break;
            case FMT_X8B8G8R8: d[x] = ((const u32 *)s)[x] | 0xff000000u; break;
            case FMT_R5G6B5: d[x] = c565(((const u16 *)s)[x]); break;
            case FMT_X1R5G5B5: case FMT_A1R5G5B5: {
                v = ((const u16 *)s)[x];
                u32 r = (v >> 10) & 31, g = (v >> 5) & 31, b = v & 31;
                d[x] = rgba(r << 3 | r >> 2, g << 3 | g >> 2, b << 3 | b >> 2, f == FMT_X1R5G5B5 || (v & 0x8000) ? 255 : 0);
                break;
            }
            case FMT_A4R4G4B4: case FMT_X4R4G4B4:
                v = ((const u16 *)s)[x];
                d[x] = rgba(((v >> 8) & 15) * 17, ((v >> 4) & 15) * 17, (v & 15) * 17, f == FMT_X4R4G4B4 ? 255 : (v >> 12) * 17);
                break;
            case FMT_A8: d[x] = rgba(0, 0, 0, s[x]); break;
            case FMT_L8: d[x] = rgba(s[x], s[x], s[x], 255); break;
            case FMT_A8L8: d[x] = rgba(s[2 * x], s[2 * x], s[2 * x], s[2 * x + 1]); break;
            default: d[x] = 0xffff00ffu; break;
            }
        }
    }
}
// HUD snapshot (hud.c): a texture's level 0 as RGBA (red in the low byte), malloc'd; 0 = unknown / no pixels
u32 *d3d_tex_pixels(const void *gt, int *w, int *h) {
    for (int i = 1; i < NRES; i++) {
        Res *r = &g_res[i];
        if (!r->used || r->kind != K_TEX || r->gt != gt || !r->mem[0][0] || !r->w || !r->h) continue;
        u32 *px = malloc((size_t)r->w * r->h * 4);
        to_rgba(r->fmt, (const u8 *)HP(r->mem[0][0]), r->pitch[0], r->w, r->h, px);
        *w = (int)r->w; *h = (int)r->h;
        return px;
    }
    return 0;
}
// Compressed textures: a level's ETC2 blocks, from <game>/texcache/<hash of the DXT data>.etc when encoded before
// (encoding a map's textures costs seconds on a phone; the game's textures never change between runs)
#define TEXCACHE_MAX (384ull << 20)
static void etc_level(Res *t, int face, int l, const u32 *rgba, u32 w, u32 h) {
    static int cache_ok = -1;
    static u64 cache_bytes;
    char dir[600], p[700];
    snprintf(dir, sizeof dir, "%s/texcache", g_game_dir);
    if (cache_ok < 0) {                          // once: make the folder, add up what it holds
#ifdef _WIN32
        mkdir(dir);
#else
        mkdir(dir, 0755);
#endif
        DIR *dd = opendir(dir);
        struct dirent *e;
        while (dd && (e = readdir(dd))) {
            struct stat st;
            snprintf(p, sizeof p, "%s/%s", dir, e->d_name);
            if (!stat(p, &st) && S_ISREG(st.st_mode)) cache_bytes += (u64)st.st_size;
        }
        if (dd) closedir(dd);
        cache_ok = 1;
    }
    size_t n = (size_t)((w + 3) / 4) * ((h + 3) / 4) * 16;
    u64 k = 1469598103934665603ull ^ ((u64)t->fmt << 32) ^ ((u64)w << 16) ^ h;    // FNV-1a over the DXT level
    const u8 *src = (const u8 *)HP(t->mem[face][l]);
    for (u32 i = 0, sz = level_size(t->fmt, w, h); i < sz; i++) k = (k ^ src[i]) * 1099511628211ull;
    snprintf(p, sizeof p, "%s/%016llx.etc", dir, (unsigned long long)k);
    u8 *blk = malloc(n);
    FILE *f = fopen(p, "rb");
    int got = f && fread(blk, 1, n, f) == n;
    if (f) fclose(f);
    if (!got) {
        etc2_encode_rgba(rgba, (int)w, (int)h, blk);
        // shortcut: the cache stops growing at TEXCACHE_MAX (no eviction); fine while the game's textures fit
        if (cache_bytes + n <= TEXCACHE_MAX && (f = fopen(p, "wb"))) {
            if (fwrite(blk, 1, n, f) == n) cache_bytes += n;
            fclose(f);
        }
    }
    gpu_tex_upload_etc2(t->gt, face * 16 + l, blk, (int)w, (int)h);
    free(blk);
}
static void upload_level(Res *t, int face, int l) {
    if (!t->gt || !t->mem[face][l]) return;
    u32 w = t->lw[l], h = t->lh[l];
    u64 t0 = us_now();
    u32 *tmp = malloc((size_t)w * h * 4);
    to_rgba(t->fmt, (u8 *)HP(t->mem[face][l]), t->pitch[l], w, h, tmp);
    if (t->etc) etc_level(t, face, l, tmp, w, h);
    else gpu_tex_upload(t->gt, face * 16 + l, 0, 0, (int)w, (int)h, tmp, (int)w);
    free(tmp);
    g_perf.up_us += us_now() - t0;
    t->dirty[face][l] = 0;
}

// ---- device state -----------------------------------------------------------------------------
static GState g_st;
static u32 g_rs[256], g_tss[8][33], g_ss[8][14];
static u32 g_tex_obj[8];
static u32 g_streams[4], g_stream_off[4], g_stream_stride[4], g_indices, g_decl, g_fvf;
static u32 g_rt_obj, g_ds_obj, g_backbuf, g_depthbuf, g_dev, g_d3d;
static u32 g_pp[14];                         // creation present parameters
static int g_bb_w, g_bb_h;
static GState *g_recording; static u32 *g_recording_rs;
static void mat_ident(Mat4 *m) { memset(m, 0, sizeof *m); m->m[0] = m->m[5] = m->m[10] = m->m[15] = 1; }
static void unpack_color(u32 v, float *f) { f[0] = ((v >> 16) & 255) / 255.f; f[1] = ((v >> 8) & 255) / 255.f; f[2] = (v & 255) / 255.f; f[3] = (v >> 24) / 255.f; }
static float fbits(u32 v) { float f; memcpy(&f, &v, 4); return f; }

static void rs_apply(u32 s, u32 v) {
    if (s < 256) g_rs[s] = v;
    GState *g = &g_st;
    switch (s) {
    case 7: g->zenable = v; break;
    case 8: g->fill = v; break;
    case 9: g->shade = v; break;
    case 14: g->zwrite = v; break;
    case 15: g->alpha_test = v; break;
    case 19: g->src_blend = v; break;
    case 20: g->dst_blend = v; break;
    case 22: g->cull = v; break;
    case 23: g->zfunc = v; break;
    case 24: g->alpha_ref = v & 255; break;
    case 25: g->alpha_func = v; break;
    case 27: g->alpha_blend = v; break;
    case 28: g->fog_enable = (int)v; break;
    case 29: g->specular_enable = (int)v; break;
    case 34: g->fog_color = v; break;
    case 35: g->fog_table_mode = (int)v; break;
    case 36: g->fog_start = fbits(v); break;
    case 37: g->fog_end = fbits(v); break;
    case 38: g->fog_density = fbits(v); break;
    case 48: g->range_fog = (int)v; break;
    case 52: g->stencil_enable = v; break;
    case 53: g->stencil_fail = v; break;
    case 54: g->stencil_zfail = v; break;
    case 55: g->stencil_pass = v; break;
    case 56: g->stencil_func = v; break;
    case 57: g->stencil_ref = v; break;
    case 58: g->stencil_mask = v; break;
    case 59: g->stencil_wmask = v; break;
    case 60: g->texture_factor = v; break;
    case 137: g->lighting = (int)v; break;
    case 139: g->ambient = v; break;
    case 140: g->fog_vertex_mode = (int)v; break;
    case 141: g->color_vertex = (int)v; break;
    case 142: g->localviewer = (int)v; break;
    case 143: g->normalize = (int)v; break;
    case 145: g->diffuse_src = v; break;
    case 146: g->specular_src = v; break;
    case 147: g->ambient_src = v; break;
    case 148: g->emissive_src = v; break;
    case 168: g->color_write = v; break;
    case 171: g->blend_op = v; break;
    case 174: g->scissor_enable = v; break;
    case 175: g->slope_bias = fbits(v); break;
    case 195: g->depth_bias = fbits(v); break;
    case 206: g->sep_alpha = v; break;
    case 207: g->src_blend_a = v; break;
    case 208: g->dst_blend_a = v; break;
    case 209: g->blend_op_a = v; break;
    }
}
static void tss_apply(u32 st, u32 t, u32 v) {
    if (st >= 8 || t > 32) return;
    g_tss[st][t] = v;
    GStage *s = &g_st.stage[st];
    switch (t) {
    case 1: s->colorop = v; break;
    case 2: s->colorarg1 = v; break;
    case 3: s->colorarg2 = v; break;
    case 4: s->alphaop = v; break;
    case 5: s->alphaarg1 = v; break;
    case 6: s->alphaarg2 = v; break;
    case 7: case 8: case 9: case 10: s->bumpenv[t - 7] = fbits(v); break;
    case 11: s->texcoordindex = v; break;
    case 24: s->ttflags = v; break;
    case 26: s->colorarg0 = v; break;
    case 27: s->alphaarg0 = v; break;
    case 28: s->resultarg = v; break;
    }
}
static void ss_apply(u32 sm, u32 t, u32 v) {
    if (sm >= 8 || t > 13) return;
    g_ss[sm][t] = v;
    GSampler *s = &g_st.samp[sm];
    switch (t) {
    case 1: s->addru = v; break;
    case 2: s->addrv = v; break;
    case 3: s->addrw = v; break;
    case 4: s->border = v; break;
    case 5: s->magf = v; break;
    case 6: s->minf = v; break;
    case 7: s->mipf = v; break;
    case 8: s->lodbias = fbits(v); break;
    case 9: s->maxmip = v; break;
    case 10: s->maxaniso = v; break;
    }
}
static void defaults(int autodepth) {
    memset(&g_st, 0, sizeof g_st);
    mat_ident(&g_st.world); mat_ident(&g_st.view); mat_ident(&g_st.proj);
    for (int i = 0; i < 8; i++) mat_ident(&g_st.texm[i]);
    u32 one = 0x3f800000u;
    struct { u32 s, v; } rs[] = {{7, (u32)autodepth}, {8, 3}, {9, 2}, {14, 1}, {15, 0}, {19, 2}, {20, 1}, {22, 3}, {23, 4}, {24, 0}, {25, 8},
                                 {27, 0}, {28, 0}, {29, 0}, {34, 0}, {35, 0}, {36, 0}, {37, one}, {38, one}, {52, 0}, {53, 1}, {54, 1}, {55, 1},
                                 {56, 8}, {57, 0}, {58, 0xffffffffu}, {59, 0xffffffffu}, {60, 0xffffffffu}, {137, 1}, {139, 0}, {140, 0},
                                 {141, 1}, {142, 1}, {143, 0}, {145, 1}, {146, 2}, {147, 0}, {148, 0}, {168, 15}, {171, 1}, {174, 0},
                                 {206, 0}, {207, 2}, {208, 1}, {209, 1}};
    for (size_t i = 0; i < sizeof rs / sizeof rs[0]; i++) rs_apply(rs[i].s, rs[i].v);
    for (u32 s = 0; s < 8; s++) {
        tss_apply(s, 1, s ? 1 : 4); tss_apply(s, 2, 2); tss_apply(s, 3, 1);
        tss_apply(s, 4, s ? 1 : 2); tss_apply(s, 5, 2); tss_apply(s, 6, 1); tss_apply(s, 11, s);
        tss_apply(s, 24, 0); tss_apply(s, 26, 1); tss_apply(s, 27, 1); tss_apply(s, 28, 1);
        ss_apply(s, 1, 1); ss_apply(s, 2, 1); ss_apply(s, 3, 1); ss_apply(s, 5, 1); ss_apply(s, 6, 1); ss_apply(s, 7, 0);
        ss_apply(s, 9, 0); ss_apply(s, 10, 1);
    }
    g_st.mat_diffuse[0] = g_st.mat_diffuse[1] = g_st.mat_diffuse[2] = g_st.mat_diffuse[3] = 1;
}

// ---- IDirect3D9 ------------------------------------------------------------------------------------
static void fill_caps(u32 p) {
    memset(HP(p), 0, 308);
    M32(p + 0) = 1;                          // HAL
    M32(p + 8) = 0x20000;                    // D3DCAPS_READ_SCANLINE
    M32(p + 12) = 0x20000000 | 0x40000000;   // CAPS2: CANAUTOGENMIPMAP | DYNAMICTEXTURES
    M32(p + 16) = 0x20;                      // CAPS3 ALPHA_FULLSCREEN_FLIP_OR_DISCARD
    M32(p + 20) = 0x8000000f;                // intervals: immediate + one..four
    M32(p + 28) = 0x10 | 0x20 | 0x40 | 0x80 | 0x200 | 0x400 | 0x800 | 0x2000 | 0x4000 | 0x10000 | 0x80000;   // DevCaps incl. HWTRANSFORMANDLIGHT
    M32(p + 32) = 0x2 | 0x4 | 0x8 | 0x10 | 0x20 | 0x40 | 0x80 | 0x100 | 0x800 | 0x4000 | 0x8000;              // PrimitiveMiscCaps
    M32(p + 36) = 0x1 | 0x10 | 0x80 | 0x100 | 0x2000 | 0x8000 | 0x10000 | 0x100000 | 0x200000 | 0x2000000 | 0x4000000;   // RasterCaps
    M32(p + 40) = 0xff; M32(p + 44) = 0x1fff; M32(p + 48) = 0x1fff; M32(p + 52) = 0xff;
    M32(p + 56) = 0x8 | 0x200 | 0x4000 | 0x80000;   // ShadeCaps
    M32(p + 60) = 0x1 | 0x4 | 0x40 | 0x800 | 0x4000 | 0x10000;     // TextureCaps: PERSPECTIVE POW2? no: ALPHA MIPMAP CUBEMAP PROJECTED
    M32(p + 64) = 0x3030300; M32(p + 68) = 0x3030300; M32(p + 72) = 0x3030300;
    M32(p + 76) = 0x3f; M32(p + 80) = 0x3f; M32(p + 84) = 0x1f;
    M32(p + 88) = 4096; M32(p + 92) = 4096; M32(p + 96) = 256; M32(p + 100) = 8192; M32(p + 104) = 4096; M32(p + 108) = 8;
    float maxw = 1e10f, gb = -1e8f, gbp = 1e8f, ps = 64.f, psmax = 0.f;
    memcpy(HP(p + 112), &maxw, 4); memcpy(HP(p + 116), &gb, 4); memcpy(HP(p + 120), &gb, 4); memcpy(HP(p + 124), &gbp, 4); memcpy(HP(p + 128), &gbp, 4);
    M32(p + 136) = 0x1ff;                    // StencilCaps
    M32(p + 140) = 0x80000 | 8;              // FVFCaps: PSIZE, 8 texcoords
    M32(p + 144) = 0x3ffffff;                // TextureOpCaps
    M32(p + 148) = 8; M32(p + 152) = 4;
    M32(p + 156) = 0x1 | 0x2 | 0x8 | 0x10 | 0x20 | 0x80;   // TEXGEN MATERIALSOURCE7 DIRECTIONALLIGHTS POSITIONALLIGHTS LOCALVIEWER TWEENING?
    M32(p + 160) = 8; M32(p + 164) = 0; M32(p + 168) = 0; M32(p + 172) = 0;
    memcpy(HP(p + 176), &ps, 4);
    M32(p + 180) = 0xfffff; M32(p + 184) = 0xffffff; M32(p + 188) = 16; M32(p + 192) = 255;
    M32(p + 196) = 0xfffe0000u;              // vertex shaders: none
    M32(p + 204) = 0xffff0000u;              // pixel shaders: none
    memcpy(HP(p + 208), &psmax, 4);
    M32(p + 212) = 0x1 | 0x2 | 0x4;
    M32(p + 232) = 1; M32(p + 236) = 0x3ff; M32(p + 240) = 1; M32(p + 244) = 0x3030300;
}
HLE(d3d_GetAdapterCount) { return 1; }
HLE(d3d_GetAdapterIdentifier) {
    u32 p = ARG(3);
    memset(HP(p), 0, 1100);
    snprintf(GS(p), 512, "ck2mobile.dll");
    snprintf(GS(p + 512), 512, "Crazy Kart Mobile WebGPU");
    snprintf(GS(p + 1024), 32, "\\\\.\\DISPLAY1");
    M32(p + 1056) = 0x00010000; M32(p + 1060) = 0x00060010;
    M32(p + 1064) = 0x10de; M32(p + 1068) = 0x0140;
    return S_OK;
}
HLE(d3d_GetAdapterModeCount) { return 1; }
extern int g_screen_w, g_screen_h, g_screen_hz;
HLE(d3d_EnumAdapterModes) { u32 m = ARG(4); M32(m) = (u32)g_screen_w; M32(m + 4) = (u32)g_screen_h; M32(m + 8) = (u32)g_screen_hz; M32(m + 12) = FMT_X8R8G8B8; return ARG(3) ? D3DERR_INVALIDCALL : S_OK; }
HLE(d3d_GetAdapterDisplayMode) { u32 m = ARG(2); M32(m) = (u32)g_screen_w; M32(m + 4) = (u32)g_screen_h; M32(m + 8) = (u32)g_screen_hz; M32(m + 12) = FMT_X8R8G8B8; return S_OK; }
HLE(d3d_CheckDeviceFormat) {
    u32 usage = ARG(4), rtype = ARG(5), f = ARG(6);
    (void)usage; (void)rtype;
    switch (f) {
    case FMT_A8R8G8B8: case FMT_X8R8G8B8: case FMT_R5G6B5: case FMT_X1R5G5B5: case FMT_A1R5G5B5: case FMT_A4R4G4B4: case FMT_A8:
    case FMT_L8: case FMT_A8L8: case FMT_DXT1: case FMT_DXT2: case FMT_DXT3: case FMT_DXT4: case FMT_DXT5: case 75: case 77: case 80: case 71:
        return S_OK;
    }
    return D3DERR_NOTAVAILABLE;
}
HLE(d3d_CheckDeviceMultiSampleType) { if (ARG(6)) M32(ARG(6)) = 1; return ARG(5) ? D3DERR_NOTAVAILABLE : S_OK; }
HLE(d3d_GetDeviceCaps) { fill_caps(ARG(3)); return S_OK; }
HLE(d3d_GetAdapterMonitor) { return 0x7f000001; }

static u32 g_dev_vt, g_tex_vt, g_cube_vt, g_surf_vt, g_vb_vt, g_ib_vt, g_decl_vt, g_sb_vt, g_swap_vt, g_query_vt;
static void build_vtables(void);
static u32 make_surface(int parent, int level, int face, u32 fmt, u32 w, u32 h, u32 usage);
void *plat_native_window(void);
HLE(d3d_CreateDevice) {
    u32 pp = ARG(5);
    for (int i = 0; i < 14; i++) g_pp[i] = M32(pp + 4 * i);
    if (!g_pp[0]) g_pp[0] = (u32)g_screen_w;
    if (!g_pp[1]) g_pp[1] = (u32)g_screen_h;
    M32(pp) = g_pp[0]; M32(pp + 4) = g_pp[1];
    g_bb_w = (int)g_pp[0]; g_bb_h = (int)g_pp[1];
    rt_log("CreateDevice %ux%u fmt %u windowed %u autodepth %u (fmt %u) flags %08x behaviour %08x\n", g_pp[0], g_pp[1], g_pp[2], g_pp[8], g_pp[9], g_pp[10], g_pp[11], ARG(4));
    build_vtables();
    void user32_set_main_hwnd(u32 hwnd);
    user32_set_main_hwnd(g_pp[7] ? g_pp[7] : ARG(3));       // hDeviceWindow, else hFocusWindow
    gpu_init(plat_native_window(), g_bb_w, g_bb_h);
    Res *d = res_new(K_DEV, g_dev_vt);
    g_dev = d->g;
    defaults(g_pp[9] != 0);
    g_st.vp_w = (u32)g_bb_w; g_st.vp_h = (u32)g_bb_h; g_st.vp_maxz = 1;
    g_backbuf = make_surface(0, 0, 0, FMT_X8R8G8B8, (u32)g_bb_w, (u32)g_bb_h, 1);
    res_of(g_backbuf)->is_backbuffer = 1;
    if (g_pp[9]) {
        g_depthbuf = make_surface(0, 0, 0, g_pp[10], (u32)g_bb_w, (u32)g_bb_h, 2);
        res_of(g_depthbuf)->is_depth = 1;
    }
    g_rt_obj = g_backbuf; g_ds_obj = g_depthbuf;
    gpu_set_target(0, g_depthbuf ? res_of(g_depthbuf)->gt : 0);
    // D3D drops the x87 to single precision unless D3DCREATE_FPU_PRESERVE (0x2): the game's physics expects that
    if (!(ARG(4) & 2)) c->fcw &= ~0x300u;
    M32(ARG(6)) = g_dev;
    return S_OK;
}
HLE(d3d_Create9) {
    static u32 vt;
    if (!vt) {
        vt = vt_make(17);
        SLOT(vt, 0, m_QI, 3); SLOT(vt, 1, m_AddRef, 1); SLOT(vt, 2, m_Release, 1); SLOT(vt, 3, m_ok, 2);
        SLOT(vt, 4, d3d_GetAdapterCount, 1); SLOT(vt, 5, d3d_GetAdapterIdentifier, 4); SLOT(vt, 6, d3d_GetAdapterModeCount, 3);
        SLOT(vt, 7, d3d_EnumAdapterModes, 5); SLOT(vt, 8, d3d_GetAdapterDisplayMode, 3); SLOT(vt, 9, m_ok, 6);
        SLOT(vt, 10, d3d_CheckDeviceFormat, 7); SLOT(vt, 11, d3d_CheckDeviceMultiSampleType, 7); SLOT(vt, 12, m_ok, 6);
        SLOT(vt, 13, m_ok, 5); SLOT(vt, 14, d3d_GetDeviceCaps, 4); SLOT(vt, 15, d3d_GetAdapterMonitor, 2); SLOT(vt, 16, d3d_CreateDevice, 7);
    }
    Res *r = res_new(K_D3D, vt);
    g_d3d = r->g;
    return g_d3d;
}

// ---- resources ---------------------------------------------------------------------------------------
static int nlevels(u32 w, u32 h) { int n = 1; while (w > 1 || h > 1) { w = w > 1 ? w / 2 : 1; h = h > 1 ? h / 2 : 1; n++; } return n; }
static Res *make_texture(int kind, u32 w, u32 h, u32 levels, u32 usage, u32 fmt, u32 pool) {
    Res *t = res_new(kind, kind == K_CUBE ? g_cube_vt : g_tex_vt);
    if (!levels || (usage & 0x400)) levels = (u32)nlevels(w, h);     // 0 or AUTOGENMIPMAP: full chain (we upload level 0 only for autogen)
    if (levels > 14) levels = 14;
    t->w = w; t->h = h; t->levels = levels; t->usage = usage; t->fmt = fmt; t->pool = pool;
    int faces = kind == K_CUBE ? 6 : 1;
    for (u32 l = 0; l < levels; l++) {
        u32 lw = w >> l ? w >> l : 1, lh = h >> l ? h >> l : 1;
        t->lw[l] = lw; t->lh[l] = lh; t->pitch[l] = level_pitch(fmt, lw);
        if (!(usage & 1))                 // render targets live on the GPU only
            for (int f = 0; f < faces; f++) t->mem[f][l] = gcalloc(level_size(fmt, lw, lh));
    }
    if (pool != 2) {                      // not SYSTEMMEM: has a GPU copy
        GTexDesc d = {(int)w, (int)h, (usage & 0x400) ? 1 : (int)levels, (usage & 1) != 0, 0, fmt};   // AUTOGENMIPMAP: one level on the GPU
        if (kind == K_CUBE) d.levels |= 0x100;
        // Compressed textures: the game's DXT art (whole levels written once) as ETC2; block-sized textures only
        d.etc = t->etc = gpu_has_etc2() && is_dxt(fmt) && kind == K_TEX && !(usage & 0x401) && w >= 4 && h >= 4 && !(w & 3) && !(h & 3);
        t->gt = gpu_tex_create(&d);
    }
    return t;
}
static u32 make_surface(int parent, int level, int face, u32 fmt, u32 w, u32 h, u32 usage) {
    Res *s = res_new(K_SURF, g_surf_vt);
    s->parent = parent; s->level = level; s->face = face; s->fmt = fmt; s->w = w; s->h = h; s->usage = usage;
    if (parent) { Res *p = &g_res[parent]; s->gt = p->gt; s->pitch[0] = p->pitch[level]; s->mem[0][0] = p->mem[face][level]; }
    else {
        s->pitch[0] = level_pitch(fmt, w);
        if (usage == 1 || usage == 2) {
            GTexDesc d = {(int)w, (int)h, 1, usage == 1, usage == 2, fmt};
            s->gt = gpu_tex_create(&d);
        } else s->mem[0][0] = gcalloc(level_size(fmt, w, h));
    }
    return s->g;
}

HLE(dev_CreateTexture) {
    Res *t = make_texture(K_TEX, ARG(1), ARG(2), ARG(3), ARG(4), ARG(5), ARG(6));
    M32(ARG(7)) = t->g;
    return S_OK;
}
HLE(dev_CreateCubeTexture) {
    Res *t = make_texture(K_CUBE, ARG(1), ARG(1), ARG(2), ARG(3), ARG(4), ARG(5));
    M32(ARG(6)) = t->g;
    return S_OK;
}
HLE(dev_CreateVertexBuffer) {
    Res *b = res_new(K_VB, g_vb_vt);
    b->size = ARG(1); b->usage = ARG(2); b->fvf = ARG(3); b->pool = ARG(4);
    b->mem[0][0] = gcalloc(b->size ? b->size : 4);
    M32(ARG(5)) = b->g;
    return S_OK;
}
HLE(dev_CreateIndexBuffer) {
    Res *b = res_new(K_IB, g_ib_vt);
    b->size = ARG(1); b->usage = ARG(2); b->fmt = ARG(3); b->pool = ARG(4);
    b->mem[0][0] = gcalloc(b->size ? b->size : 4);
    M32(ARG(5)) = b->g;
    return S_OK;
}
HLE(dev_CreateRenderTarget) { M32(ARG(7)) = make_surface(0, 0, 0, ARG(3), ARG(1), ARG(2), 1); return S_OK; }
HLE(dev_CreateDepthStencilSurface) { M32(ARG(7)) = make_surface(0, 0, 0, ARG(3), ARG(1), ARG(2), 2); return S_OK; }
HLE(dev_CreateOffscreenPlainSurface) { M32(ARG(5)) = make_surface(0, 0, 0, ARG(3), ARG(1), ARG(2), 0); return S_OK; }

// texture methods (this = ARG(0))
HLE(tex_GetLevelCount) { Res *t = res_of(ARG(0)); return t ? t->levels : 1; }
HLE(tex_GetType) { Res *t = res_of(ARG(0)); return !t ? 3 : t->kind == K_CUBE ? 5 : t->kind == K_SURF ? 1 : t->kind == K_VB ? 6 : t->kind == K_IB ? 7 : 3; }
HLE(tex_GetDevice) { M32(ARG(1)) = g_dev; M32(g_dev + 4)++; return S_OK; }
HLE(tex_GetLevelDesc) {
    Res *t = res_of(ARG(0));
    u32 l = ARG(1), p = ARG(2);
    if (!t || l >= t->levels) return D3DERR_INVALIDCALL;
    M32(p) = t->fmt; M32(p + 4) = 3; M32(p + 8) = t->usage; M32(p + 12) = t->pool; M32(p + 16) = 0; M32(p + 20) = 0;
    M32(p + 24) = t->lw[l]; M32(p + 28) = t->lh[l];
    return S_OK;
}
static u32 tex_surface(Res *t, int face, u32 l) {
    if (!t->surf[face][l]) t->surf[face][l] = make_surface((int)(t - g_res), (int)l, face, t->fmt, t->lw[l], t->lh[l], t->usage & 3);
    M32(t->surf[face][l] + 4)++;
    return t->surf[face][l];
}
HLE(tex_GetSurfaceLevel) { Res *t = res_of(ARG(0)); if (!t || ARG(1) >= t->levels) return D3DERR_INVALIDCALL; M32(ARG(2)) = tex_surface(t, 0, ARG(1)); return S_OK; }
HLE(cube_GetCubeMapSurface) { Res *t = res_of(ARG(0)); if (!t || ARG(2) >= t->levels) return D3DERR_INVALIDCALL; M32(ARG(3)) = tex_surface(t, (int)ARG(1), ARG(2)); return S_OK; }
static u32 lock_ptr(Res *t, int face, u32 l, u32 rect) {
    u32 base = t->mem[face][l];
    if (!base) {     // render target locked: give scratch memory
        t->mem[face][l] = base = gcalloc(level_size(t->fmt, t->lw[l], t->lh[l]));
    }
    if (rect) {
        u32 x = M32(rect), y = M32(rect + 4);
        if (is_dxt(t->fmt)) base += (y / 4) * t->pitch[l] + (x / 4) * (t->fmt == FMT_DXT1 ? 8 : 16);
        else base += y * t->pitch[l] + x * (u32)bpp(t->fmt);
    }
    return base;
}
HLE(tex_LockRect) {
    Res *t = res_of(ARG(0));
    u32 l = ARG(1);
    if (!t || l >= t->levels) return D3DERR_INVALIDCALL;
    M32(ARG(2)) = t->pitch[l]; M32(ARG(2) + 4) = lock_ptr(t, 0, l, ARG(3));
    if (!(ARG(4) & 0x10)) t->dirty[0][l] = 1;    // not READONLY
    return S_OK;
}
HLE(tex_UnlockRect) { Res *t = res_of(ARG(0)); if (t && ARG(1) < t->levels && t->dirty[0][ARG(1)]) upload_level(t, 0, (int)ARG(1)); return S_OK; }
HLE(cube_LockRect) {
    Res *t = res_of(ARG(0));
    u32 f = ARG(1), l = ARG(2);
    if (!t || l >= t->levels || f >= 6) return D3DERR_INVALIDCALL;
    M32(ARG(3)) = t->pitch[l]; M32(ARG(3) + 4) = lock_ptr(t, (int)f, l, ARG(4));
    t->dirty[f][l] = 1;
    return S_OK;
}
HLE(cube_UnlockRect) { Res *t = res_of(ARG(0)); if (t && ARG(1) < 6 && ARG(2) < t->levels) upload_level(t, (int)ARG(1), (int)ARG(2)); return S_OK; }
HLE(tex_GenerateMipSubLevels) { return 0; }

// surface methods
HLE(surf_GetDesc) {
    Res *s = res_of(ARG(0));
    u32 p = ARG(1);
    if (!s) return D3DERR_INVALIDCALL;
    M32(p) = s->fmt; M32(p + 4) = 1; M32(p + 8) = s->usage; M32(p + 12) = s->parent ? g_res[s->parent].pool : 0;
    M32(p + 16) = 0; M32(p + 20) = 0; M32(p + 24) = s->w; M32(p + 28) = s->h;
    return S_OK;
}
HLE(surf_LockRect) {
    Res *s = res_of(ARG(0));
    if (!s) return D3DERR_INVALIDCALL;
    if (s->parent) {
        Res *t = &g_res[s->parent];
        M32(ARG(1)) = t->pitch[s->level]; M32(ARG(1) + 4) = lock_ptr(t, s->face, (u32)s->level, ARG(2));
        t->dirty[s->face][s->level] = 1;
        return S_OK;
    }
    if (!s->mem[0][0]) s->mem[0][0] = gcalloc(level_size(s->fmt, s->w, s->h));
    u32 base = s->mem[0][0];
    if (ARG(2)) base += M32(ARG(2) + 4) * s->pitch[0] + M32(ARG(2)) * (u32)bpp(s->fmt);
    M32(ARG(1)) = s->pitch[0]; M32(ARG(1) + 4) = base;
    return S_OK;
}
HLE(surf_UnlockRect) {
    Res *s = res_of(ARG(0));
    if (s && s->parent) { Res *t = &g_res[s->parent]; if (t->dirty[s->face][s->level]) upload_level(t, s->face, s->level); }
    return S_OK;
}
HLE(surf_GetContainer) { Res *s = res_of(ARG(0)); if (!s || !s->parent) return E_FAIL; M32(ARG(2)) = g_res[s->parent].g; M32(g_res[s->parent].g + 4)++; return S_OK; }
HLE(surf_GetDC) { rt_log("Surface::GetDC unsupported\n"); return E_FAIL; }

// buffers
HLE(buf_Lock) {
    Res *b = res_of(ARG(0));
    if (!b) return D3DERR_INVALIDCALL;
    M32(ARG(3)) = b->mem[0][0] + ARG(1);
    return S_OK;
}
HLE(buf_Unlock) { return S_OK; }
HLE(vb_GetDesc) { Res *b = res_of(ARG(0)); u32 p = ARG(1); M32(p) = 100; M32(p + 4) = 6; M32(p + 8) = b->usage; M32(p + 12) = b->pool; M32(p + 16) = b->size; M32(p + 20) = b->fvf; return S_OK; }
HLE(ib_GetDesc) { Res *b = res_of(ARG(0)); u32 p = ARG(1); M32(p) = b->fmt; M32(p + 4) = 7; M32(p + 8) = b->usage; M32(p + 12) = b->pool; M32(p + 16) = b->size; return S_OK; }

// vertex declarations
HLE(dev_CreateVertexDeclaration) {
    Res *d = res_new(K_DECL, g_decl_vt);
    for (u32 p = ARG(1); d->ndecl < 63; p += 8) {
        memcpy(d->decl[d->ndecl], HP(p), 8);
        if (M16(p) == 0xff) break;
        d->ndecl++;
    }
    M32(ARG(2)) = d->g;
    return S_OK;
}
HLE(decl_GetDeclaration) {
    Res *d = res_of(ARG(0));
    if (ARG(1)) memcpy(HP(ARG(1)), d->decl, (size_t)(d->ndecl + 1) * 8);
    M32(ARG(2)) = (u32)d->ndecl + 1;
    return S_OK;
}

// ---- device: state setters ---------------------------------------------------------------------
HLE(dev_SetRenderState) { rs_apply(ARG(1), ARG(2)); return S_OK; }
HLE(dev_GetRenderState) { M32(ARG(2)) = ARG(1) < 256 ? g_rs[ARG(1)] : 0; return S_OK; }
HLE(dev_SetTextureStageState) { tss_apply(ARG(1), ARG(2), ARG(3)); return S_OK; }
HLE(dev_GetTextureStageState) { M32(ARG(3)) = ARG(1) < 8 && ARG(2) <= 32 ? g_tss[ARG(1)][ARG(2)] : 0; return S_OK; }
HLE(dev_SetSamplerState) { ss_apply(ARG(1), ARG(2), ARG(3)); return S_OK; }
HLE(dev_GetSamplerState) { M32(ARG(3)) = ARG(1) < 8 && ARG(2) <= 13 ? g_ss[ARG(1)][ARG(2)] : 0; return S_OK; }
static Mat4 *xf(u32 s) {
    if (s == 2) return &g_st.view;
    if (s == 3) return &g_st.proj;
    if (s >= 16 && s < 24) return &g_st.texm[s - 16];
    if (s == 256) return &g_st.world;
    return 0;
}
HLE(dev_SetTransform) { Mat4 *m = xf(ARG(1)); if (m) memcpy(m->m, HP(ARG(2)), 64); return S_OK; }
HLE(dev_GetTransform) { Mat4 *m = xf(ARG(1)); if (m) memcpy(HP(ARG(2)), m->m, 64); else memset(HP(ARG(2)), 0, 64); return S_OK; }
HLE(dev_MultiplyTransform) {
    Mat4 *m = xf(ARG(1));
    if (!m) return S_OK;
    float b[16], r[16];
    memcpy(b, HP(ARG(2)), 64);
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) { float s = 0; for (int k = 0; k < 4; k++) s += b[i * 4 + k] * m->m[k * 4 + j]; r[i * 4 + j] = s; }
    memcpy(m->m, r, 64);
    return S_OK;
}
HLE(dev_SetViewport) { u32 p = ARG(1); g_st.vp_x = M32(p); g_st.vp_y = M32(p + 4); g_st.vp_w = M32(p + 8); g_st.vp_h = M32(p + 12); g_st.vp_minz = fbits(M32(p + 16)); g_st.vp_maxz = fbits(M32(p + 20)); return S_OK; }
HLE(dev_GetViewport) { u32 p = ARG(1); M32(p) = g_st.vp_x; M32(p + 4) = g_st.vp_y; M32(p + 8) = g_st.vp_w; M32(p + 12) = g_st.vp_h; memcpy(HP(p + 16), &g_st.vp_minz, 4); memcpy(HP(p + 20), &g_st.vp_maxz, 4); return S_OK; }
HLE(dev_SetMaterial) {
    u32 p = ARG(1);
    memcpy(g_st.mat_diffuse, HP(p), 16); memcpy(g_st.mat_ambient, HP(p + 16), 16); memcpy(g_st.mat_specular, HP(p + 32), 16);
    memcpy(g_st.mat_emissive, HP(p + 48), 16); memcpy(&g_st.mat_power, HP(p + 64), 4);
    return S_OK;
}
HLE(dev_GetMaterial) {
    u32 p = ARG(1);
    memcpy(HP(p), g_st.mat_diffuse, 16); memcpy(HP(p + 16), g_st.mat_ambient, 16); memcpy(HP(p + 32), g_st.mat_specular, 16);
    memcpy(HP(p + 48), g_st.mat_emissive, 16); memcpy(HP(p + 64), &g_st.mat_power, 4);
    return S_OK;
}
static u32 g_light_raw[8][26];
HLE(dev_SetLight) {
    u32 i = ARG(1), p = ARG(2);
    if (i >= 8) return S_OK;
    memcpy(g_light_raw[i], HP(p), 104);
    GLight *l = &g_st.lights[i];
    l->type = M32(p);
    memcpy(l->diffuse, HP(p + 4), 16); memcpy(l->specular, HP(p + 20), 16); memcpy(l->ambient, HP(p + 36), 16);
    memcpy(l->pos, HP(p + 52), 12); memcpy(l->dir, HP(p + 64), 12);
    memcpy(&l->range, HP(p + 76), 4); memcpy(&l->falloff, HP(p + 80), 4); memcpy(&l->att0, HP(p + 84), 4);
    memcpy(&l->att1, HP(p + 88), 4); memcpy(&l->att2, HP(p + 92), 4); memcpy(&l->theta, HP(p + 96), 4); memcpy(&l->phi, HP(p + 100), 4);
    return S_OK;
}
HLE(dev_GetLight) { if (ARG(1) < 8) memcpy(HP(ARG(2)), g_light_raw[ARG(1)], 104); return S_OK; }
HLE(dev_LightEnable) { if (ARG(1) < 8) g_st.lights[ARG(1)].enabled = ARG(2) != 0; return S_OK; }
HLE(dev_GetLightEnable) { M32(ARG(2)) = ARG(1) < 8 ? (u32)g_st.lights[ARG(1)].enabled : 0; return S_OK; }
HLE(dev_SetTexture) {
    u32 s = ARG(1), t = ARG(2);
    if (s >= 8) return S_OK;
    bind_ref(&g_tex_obj[s], t);
    Res *r = res_of(t);
    g_st.tex[s] = r ? r->gt : 0;
    return S_OK;
}
HLE(dev_GetTexture) { u32 s = ARG(1); M32(ARG(2)) = s < 8 ? g_tex_obj[s] : 0; if (s < 8 && g_tex_obj[s]) M32(g_tex_obj[s] + 4)++; return S_OK; }
HLE(dev_SetScissorRect) { u32 p = ARG(1); for (int i = 0; i < 4; i++) g_st.scissor[i] = (s32)M32(p + 4 * i); return S_OK; }
HLE(dev_GetScissorRect) { u32 p = ARG(1); for (int i = 0; i < 4; i++) M32(p + 4 * i) = (u32)g_st.scissor[i]; return S_OK; }
HLE(dev_SetFVF) { g_fvf = ARG(1); g_decl = 0; return S_OK; }
HLE(dev_GetFVF) { M32(ARG(1)) = g_fvf; return S_OK; }
HLE(dev_SetVertexDeclaration) { g_decl = ARG(1); return S_OK; }
HLE(dev_GetVertexDeclaration) { M32(ARG(1)) = g_decl; return S_OK; }
HLE(dev_SetStreamSource) { u32 n = ARG(1); if (n < 4) { g_streams[n] = ARG(2); g_stream_off[n] = ARG(3); g_stream_stride[n] = ARG(4); } return S_OK; }
HLE(dev_GetStreamSource) { u32 n = ARG(1); M32(ARG(2)) = n < 4 ? g_streams[n] : 0; M32(ARG(3)) = n < 4 ? g_stream_off[n] : 0; M32(ARG(4)) = n < 4 ? g_stream_stride[n] : 0; return S_OK; }
HLE(dev_SetIndices) { g_indices = ARG(1); return S_OK; }
HLE(dev_GetIndices) { M32(ARG(1)) = g_indices; return S_OK; }
HLE(dev_CreateShader) { M32(ARG(2)) = 0; return D3DERR_INVALIDCALL; }       // caps say no shaders
HLE(dev_SetShader) { return ARG(1) ? D3DERR_INVALIDCALL : S_OK; }
HLE(dev_GetShader) { M32(ARG(1)) = 0; return S_OK; }

// ---- render targets / frame --------------------------------------------------------------------------
HLE(dev_SetRenderTarget) {
    if (ARG(1)) return S_OK;
    u32 s = ARG(2) ? ARG(2) : g_backbuf;
    bind_ref(&g_rt_obj, s);
    Res *r = res_of(s);
    gpu_set_target(r && !r->is_backbuffer ? r->gt : 0, g_ds_obj ? res_of(g_ds_obj)->gt : 0);
    // D3D resets the viewport to the full target
    g_st.vp_x = g_st.vp_y = 0; g_st.vp_w = r ? r->w : (u32)g_bb_w; g_st.vp_h = r ? r->h : (u32)g_bb_h; g_st.vp_minz = 0; g_st.vp_maxz = 1;
    return S_OK;
}
HLE(dev_GetRenderTarget) { M32(ARG(2)) = g_rt_obj; M32(g_rt_obj + 4)++; return S_OK; }
HLE(dev_SetDepthStencilSurface) {
    bind_ref(&g_ds_obj, ARG(1));
    Res *r = res_of(g_rt_obj);
    gpu_set_target(r && !r->is_backbuffer ? r->gt : 0, g_ds_obj ? res_of(g_ds_obj)->gt : 0);
    return S_OK;
}
HLE(dev_GetDepthStencilSurface) { M32(ARG(1)) = g_ds_obj; if (g_ds_obj) M32(g_ds_obj + 4)++; return g_ds_obj ? S_OK : 0x8876086cu; }
HLE(dev_GetBackBuffer) { M32(ARG(4)) = g_backbuf; M32(g_backbuf + 4)++; return S_OK; }
HLE(dev_Clear) {
    int rects[64 * 4], n = 0;
    for (u32 i = 0; i < ARG(1) && i < 64; i++, n++) for (int k = 0; k < 4; k++) rects[i * 4 + k] = (s32)M32(ARG(2) + 16 * i + 4 * k);
    gpu_clear(ARG(3), ARG(4), fbits(ARG(5)), ARG(6), n ? rects : 0, n);
    return S_OK;
}
volatile u32 g_frames;      // stall watchdog (main.c)
int tui_active(void);
void tui_draw(void);
void hud_overlay(void);
int plat_pointer(float *x, float *y);
void tui_draw_pointer(float x, float y);
int hud_overlay_wanted(void);
void hud_draw(GVert *v, u32 n, const void *tex, HudXf *xf);
void hud_capture(const GDraw *d, int textured);
void hud_rect(float x, float y, float w, float h, HudXf *xf);
int hud_race_recent(u32 ms);
void hud_frame(void);
// on-screen race controls (touch_ui.c), drawn on the back buffer; the game's target is restored after
// Slow-frame log in races (cursor hidden): a frame over 60 ms names what was loaded / built during it.
static void perf_frame(void) {
    static u64 last;
    u64 now = us_now(), dt = last ? now - last : 0;
    last = now;
    if (dt > 150000) {
        static int n;
        if (n++ < 200)
            rt_log("slow frame %u ms: files %u (open %u ms, read %u ms) [%s, %s], textures %u (upload %u ms), pipelines %u (%u ms)\n",
                   (u32)(dt / 1000), g_perf.files, (u32)(g_perf.file_us / 1000), (u32)(g_perf.read_us / 1000), g_perf.last[0], g_perf.last[1],
                   g_perf.texs, (u32)(g_perf.up_us / 1000), g_perf.pipes, (u32)(g_perf.pipe_us / 1000));
    }
    // every 600 frames: average frame time and draw calls (what the drawing layer costs)
    static u32 nf, draws, passes; static u64 t0;
    if (!t0) t0 = now;
    nf++; draws += g_perf.draws; passes += g_perf.passes;
    if (nf == 600) {
        rt_log("frames: %.1f fps, %u draws/frame, %.1f render passes/frame\n", 600.0 * 1e6 / (double)(now - t0), draws / 600, passes / 600.0);
        nf = 0; draws = 0; passes = 0; t0 = now;
    }
    memset(&g_perf, 0, sizeof g_perf);
}
static void touch_overlay(void) {
    perf_frame();
    hud_frame();
    int race = tui_active(), chan = hud_overlay_wanted();
    float px, py;
    int ptr = plat_pointer(&px, &py);                       // controller pointer (menus)
    if (!race && !chan && !ptr) return;
    gpu_set_target(0, 0);
    if (race) tui_draw();
    if (chan) hud_overlay();        // lobby / room chat button (hud.c)
    if (ptr) tui_draw_pointer(px, py);
    Res *r = res_of(g_rt_obj);
    gpu_set_target(r && !r->is_backbuffer ? r->gt : 0, g_ds_obj ? res_of(g_ds_obj)->gt : 0);
}
HLE(dev_Present) {
    g_frames++;
    static int watch = -1, n;
    if (watch < 0) { const char *e = getenv("CK_WATCH"); watch = e ? 1 : 0; }
    if (watch && n++ % 30 == 0) {      // debug: loading-screen state machine at 0x9b919c
        float f20, f24, f28; memcpy(&f20, HP(0x9b919c + 0x20), 4); memcpy(&f24, HP(0x9b919c + 0x24), 4); memcpy(&f28, HP(0x9b919c + 0x28), 4);
        rt_log("watch: state %u done %u f20 %f f24 %f f28 %f\n", M32(0x9b919c + 0x1c), M32(0x9b919c + 0x14), f20, f24, f28);
    }
    touch_overlay();
    gpu_present();
    return S_OK;
}
HLE(dev_TestCooperativeLevel) { return S_OK; }
HLE(dev_GetAvailableTextureMem) { return 256u << 20; }
HLE(dev_GetDirect3D) { M32(ARG(1)) = g_d3d; M32(g_d3d + 4)++; return S_OK; }
HLE(dev_GetDeviceCaps) { fill_caps(ARG(1)); return S_OK; }
HLE(dev_GetDisplayMode) { u32 m = ARG(2); M32(m) = (u32)g_screen_w; M32(m + 4) = (u32)g_screen_h; M32(m + 8) = (u32)g_screen_hz; M32(m + 12) = FMT_X8R8G8B8; return S_OK; }
HLE(dev_GetCreationParameters) { u32 p = ARG(1); M32(p) = 0; M32(p + 4) = 1; M32(p + 8) = user32_main_hwnd_(); M32(p + 12) = 0x40; return S_OK; }
HLE(dev_Reset) {
    u32 pp = ARG(1);
    u32 w = M32(pp), h = M32(pp + 4);
    if (w && h) { g_bb_w = (int)w; g_bb_h = (int)h; gpu_resize(g_bb_w, g_bb_h); Res *b = res_of(g_backbuf); b->w = w; b->h = h; }
    M32(pp) = (u32)g_bb_w; M32(pp + 4) = (u32)g_bb_h;
    defaults(M32(pp + 36) != 0);
    g_st.vp_w = (u32)g_bb_w; g_st.vp_h = (u32)g_bb_h; g_st.vp_maxz = 1;
    bind_ref(&g_rt_obj, g_backbuf);
    rt_log("Device Reset %dx%d\n", g_bb_w, g_bb_h);
    return S_OK;
}
HLE(dev_GetRasterStatus) { M32(ARG(2)) = 0; M32(ARG(2) + 4) = 0; return S_OK; }
HLE(dev_GetSwapChain) {
    static u32 sc;
    if (!sc) sc = res_new(K_SWAP, g_swap_vt)->g;
    M32(ARG(2)) = sc;
    return S_OK;
}
HLE(swap_Present) { g_frames++; touch_overlay(); gpu_present(); return S_OK; }
HLE(swap_GetBackBuffer) { M32(ARG(3)) = g_backbuf; M32(g_backbuf + 4)++; return S_OK; }
HLE(swap_GetDisplayMode) { u32 m = ARG(1); M32(m) = (u32)g_screen_w; M32(m + 4) = (u32)g_screen_h; M32(m + 8) = (u32)g_screen_hz; M32(m + 12) = FMT_X8R8G8B8; return S_OK; }
HLE(swap_GetPresentParameters) { for (int i = 0; i < 14; i++) M32(ARG(1) + 4 * i) = g_pp[i]; M32(ARG(1)) = (u32)g_bb_w; M32(ARG(1) + 4) = (u32)g_bb_h; return S_OK; }

HLE(dev_UpdateTexture) {
    Res *s = res_of(ARG(1)), *d = res_of(ARG(2));
    if (!s || !d) return D3DERR_INVALIDCALL;
    int faces = s->kind == K_CUBE ? 6 : 1;
    for (int f = 0; f < faces; f++)
        for (u32 l = 0; l < s->levels && l < d->levels; l++)
            if (s->mem[f][l] && d->mem[f][l]) { memcpy(HP(d->mem[f][l]), HP(s->mem[f][l]), level_size(s->fmt, s->lw[l], s->lh[l])); upload_level(d, f, (int)l); }
    return S_OK;
}
HLE(dev_UpdateSurface) {
    Res *s = res_of(ARG(1)), *d = res_of(ARG(3));
    if (!s || !d) return D3DERR_INVALIDCALL;
    u32 sm = s->parent ? g_res[s->parent].mem[s->face][s->level] : s->mem[0][0];
    u32 dm = d->parent ? g_res[d->parent].mem[d->face][d->level] : d->mem[0][0];
    if (sm && dm) memcpy(HP(dm), HP(sm), level_size(s->fmt, s->w, s->h));
    if (d->parent) upload_level(&g_res[d->parent], d->face, d->level);
    return S_OK;
}
HLE(dev_StretchRect) { return S_OK; }      // used for screenshots / effects; not needed to boot
HLE(dev_GetRenderTargetData) {
    Res *s = res_of(ARG(1)), *d = res_of(ARG(2));
    if (!s || !d) return D3DERR_INVALIDCALL;
    return S_OK;
}
HLE(dev_ColorFill) { return S_OK; }

// state blocks: full snapshots (RenderWare caches its own states; these are rare)
HLE(dev_CreateStateBlock) {
    Res *r = res_new(K_SB, g_sb_vt);
    r->sb = malloc(sizeof(GState)); *r->sb = g_st;
    r->sbrs = malloc(sizeof g_rs); memcpy(r->sbrs, g_rs, sizeof g_rs);
    M32(ARG(2)) = r->g;
    return S_OK;
}
HLE(dev_BeginStateBlock) { return S_OK; }
HLE(dev_EndStateBlock) { u32 a[3] = {0, 1, ARG(1)}; (void)a; Res *r = res_new(K_SB, g_sb_vt); r->sb = malloc(sizeof(GState)); *r->sb = g_st; r->sbrs = malloc(sizeof g_rs); memcpy(r->sbrs, g_rs, sizeof g_rs); M32(ARG(1)) = r->g; return S_OK; }
HLE(sb_Capture) { Res *r = res_of(ARG(0)); *r->sb = g_st; memcpy(r->sbrs, g_rs, sizeof g_rs); return S_OK; }
HLE(sb_Apply) { Res *r = res_of(ARG(0)); GpuTex *t[8]; memcpy(t, g_st.tex, sizeof t); g_st = *r->sb; memcpy(g_st.tex, t, sizeof t); memcpy(g_rs, r->sbrs, sizeof g_rs); return S_OK; }
HLE(dev_CreateQuery) { if (!ARG(2)) return ARG(1) == 8 ? S_OK : D3DERR_NOTAVAILABLE; M32(ARG(2)) = res_new(K_QUERY, g_query_vt)->g; return S_OK; }
HLE(q_GetData) { if (ARG(1) && ARG(2) >= 4) M32(ARG(1)) = 1; return S_OK; }
HLE(q_GetDataSize) { return 4; }
HLE(dev_ValidateDevice) { M32(ARG(1)) = 1; return S_OK; }

// ---- drawing ---------------------------------------------------------------------------------------
typedef struct { int stream, off, type, usage, idx; } Elem;
static int build_layout(Elem *e) {
    int n = 0;
    Res *d = res_of(g_decl);
    if (d) {
        for (int i = 0; i < d->ndecl && n < 32; i++) {
            u8 *p = d->decl[i];
            e[n++] = (Elem){p[0] | p[1] << 8, p[2] | p[3] << 8, p[4], p[6], p[7]};
        }
        return n;
    }
    u32 f = g_fvf;
    int off = 0;
    u32 pos = f & 0x400e;
    if (pos == 0x2) { e[n++] = (Elem){0, off, 2, 0, 0}; off += 12; }
    else if (pos == 0x4) { e[n++] = (Elem){0, off, 3, 9, 0}; off += 16; }
    else if (pos == 0x4002) { e[n++] = (Elem){0, off, 3, 0, 0}; off += 16; }
    else if (pos >= 0x6 && pos <= 0xe) {
        int nb = (int)(pos - 0x4) / 2;      // XYZB1..5: weights (last may be UBYTE4 indices)
        e[n++] = (Elem){0, off, 2, 0, 0}; off += 12;
        if ((f & 0x1000) && nb) { if (nb > 1) e[n++] = (Elem){0, off, nb - 2, 1, 0}; off += 4 * (nb - 1); e[n++] = (Elem){0, off, 5, 2, 0}; off += 4; }
        else { e[n++] = (Elem){0, off, nb - 1, 1, 0}; off += 4 * nb; }
    }
    if (f & 0x10) { e[n++] = (Elem){0, off, 2, 3, 0}; off += 12; }
    if (f & 0x20) off += 4;
    if (f & 0x40) { e[n++] = (Elem){0, off, 4, 10, 0}; off += 4; }
    if (f & 0x80) { e[n++] = (Elem){0, off, 4, 10, 1}; off += 4; }
    int nt = (int)((f >> 8) & 15);
    for (int t = 0; t < nt; t++) {
        int sz = (int)((f >> (16 + 2 * t)) & 3);
        int cnt = sz == 0 ? 2 : sz == 1 ? 3 : sz == 2 ? 4 : 1;
        e[n++] = (Elem){0, off, cnt - 1, 5, t};
        off += 4 * cnt;
    }
    return n;
}
static void read_elem(const u8 *p, int type, float out[4]) {
    out[0] = out[1] = out[2] = 0; out[3] = 1;
    switch (type) {
    case 0: memcpy(out, p, 4); break;
    case 1: memcpy(out, p, 8); break;
    case 2: memcpy(out, p, 12); break;
    case 3: memcpy(out, p, 16); break;
    case 5: for (int i = 0; i < 4; i++) out[i] = p[i]; break;
    case 6: for (int i = 0; i < 2; i++) out[i] = ((const s16 *)p)[i]; break;
    case 7: for (int i = 0; i < 4; i++) out[i] = ((const s16 *)p)[i]; break;
    case 8: for (int i = 0; i < 4; i++) out[i] = p[i] / 255.f; break;
    case 9: for (int i = 0; i < 2; i++) out[i] = ((const s16 *)p)[i] / 32767.f; break;
    case 10: for (int i = 0; i < 4; i++) out[i] = ((const s16 *)p)[i] / 32767.f; break;
    case 11: for (int i = 0; i < 2; i++) out[i] = ((const u16 *)p)[i] / 65535.f; break;
    case 12: for (int i = 0; i < 4; i++) out[i] = ((const u16 *)p)[i] / 65535.f; break;
    case 15: case 16: {
        for (int i = 0; i < (type == 15 ? 2 : 4); i++) {
            u16 h = ((const u16 *)p)[i];
            u32 s = (u32)(h >> 15) << 31, e = (h >> 10) & 31, m = h & 1023, bits;
            if (!e) bits = s | (m ? 0 : 0); else if (e == 31) bits = s | 0x7f800000u | (m << 13); else bits = s | ((e + 112) << 23) | (m << 13);
            memcpy(&out[i], &bits, 4);
        }
        break;
    }
    }
}
static GVert *g_vbuf; static u32 g_vcap;
static u32 *g_ibuf; static u32 g_icap;
static u32 g_frame_draws;
static void draw_common(u32 prim, u32 first_vertex, u32 nverts, const u8 *ib, int idx32, u32 nidx, s32 base, const u8 *up_data, u32 up_stride) {
    Elem e[32];
    int ne = build_layout(e);
    if (nverts > g_vcap) { g_vcap = nverts + 1024; g_vbuf = realloc(g_vbuf, g_vcap * sizeof(GVert)); }
    GDraw d;
    memset(&d, 0, sizeof d);
    const u8 *sbase[4]; u32 sstride[4];
    for (int s = 0; s < 4; s++) {
        Res *b = res_of(g_streams[s]);
        sbase[s] = b ? (const u8 *)HP(b->mem[0][0] + g_stream_off[s]) : 0;
        sstride[s] = g_stream_stride[s];
    }
    if (up_data) { sbase[0] = up_data; sstride[0] = up_stride; }
    for (int k = 0; k < ne; k++) {
        if (e[k].usage == 9) d.pretransformed = 1;
        if (e[k].usage == 3) d.has_normal = 1;
        if (e[k].usage == 10 && e[k].idx == 0) d.has_diffuse = 1;
        if (e[k].usage == 10 && e[k].idx == 1) d.has_specular = 1;
        if (e[k].usage == 5 && e[k].idx + 1 > d.ntex) d.ntex = e[k].idx + 1;
    }
    for (u32 v = 0; v < nverts; v++) {
        GVert *o = &g_vbuf[v];
        memset(o, 0, sizeof *o);
        o->pos[3] = 1; o->diffuse = 0xffffffffu; o->specular = 0;
        for (int k = 0; k < ne; k++) {
            int s = e[k].stream & 3;
            if (!sbase[s]) continue;
            const u8 *p = sbase[s] + (size_t)(first_vertex + v) * sstride[s] + e[k].off;
            float f[4];
            switch (e[k].usage) {
            case 0: case 9:
                if (e[k].type == 2) { memcpy(o->pos, p, 12); break; }           // FLOAT3 (pos[3] is already 1)
                if (e[k].type == 3) { memcpy(o->pos, p, 16); break; }           // FLOAT4 (screen space)
                read_elem(p, e[k].type, f); memcpy(o->pos, f, 16); break;
            case 3: if (e[k].type == 2) { memcpy(o->nrm, p, 12); break; } read_elem(p, e[k].type, f); memcpy(o->nrm, f, 12); break;
            case 10: { u32 col; if (e[k].type == 4) memcpy(&col, p, 4); else { read_elem(p, e[k].type, f); col = ((u32)(f[3] * 255) << 24) | ((u32)(f[0] * 255) << 16) | ((u32)(f[1] * 255) << 8) | (u32)(f[2] * 255); }
                       if (e[k].idx == 0) o->diffuse = col; else o->specular = col; break; }
            case 5: if (e[k].idx < 4) {
                        if (e[k].type == 1) { memcpy(o->uv[e[k].idx], p, 8); break; }     // FLOAT2
                        read_elem(p, e[k].type, f); o->uv[e[k].idx][0] = f[0]; o->uv[e[k].idx][1] = f[1]; } break;
            case 1: read_elem(p, e[k].type, f); memcpy(o->blend, f, 16); break;
            }
        }
    }
    d.prim = prim; d.verts = g_vbuf; d.nverts = nverts;
    if (ib) {
        if (nidx > g_icap) { g_icap = nidx + 4096; g_ibuf = realloc(g_ibuf, g_icap * 4); }
        for (u32 i = 0; i < nidx; i++) {
            s32 x = (s32)(idx32 ? ((const u32 *)ib)[i] : ((const u16 *)ib)[i]) + base - (s32)first_vertex;
            g_ibuf[i] = x < 0 || (u32)x >= nverts ? 0 : (u32)x;
        }
        d.indices = g_ibuf; d.nindices = nidx;
    }
    d.st = &g_st;
    static int dlog = -1, nlog;
    if (dlog < 0) { const char *ev = getenv("CK_DRAWLOG"); dlog = ev ? atoi(ev) : 0; }
    if (nlog < dlog) {
        nlog++;
        char el[512]; int o = 0;
        for (int k = 0; k < ne && o < 480; k++) o += snprintf(el + o, sizeof el - (size_t)o, " s%d/o%d/t%d/u%d/i%d", e[k].stream, e[k].off, e[k].type, e[k].usage, e[k].idx);
        rt_log("draw prim %u nv %u ni %u pre %d decl %08x fvf %08x [%s ] stride %u up %d tex0 %p v0 (%.1f %.1f %.3f %.3f) v1 (%.1f %.1f) v2 (%.1f %.1f) col %08x uv (%.2f %.2f) colorop %u\n",
               prim, nverts, nidx, d.pretransformed, g_decl, g_fvf, el, up_data ? up_stride : g_stream_stride[0], up_data != 0, (void *)g_st.tex[0],
               g_vbuf[0].pos[0], g_vbuf[0].pos[1], g_vbuf[0].pos[2], g_vbuf[0].pos[3], nverts > 1 ? g_vbuf[1].pos[0] : 0, nverts > 1 ? g_vbuf[1].pos[1] : 0,
               nverts > 2 ? g_vbuf[2].pos[0] : 0, nverts > 2 ? g_vbuf[2].pos[1] : 0, g_vbuf[0].diffuse, g_vbuf[0].uv[0][0], g_vbuf[0].uv[0][1], g_st.stage[0].colorop);
    }
    g_frame_draws++;
    Res *rtr = res_of(g_rt_obj);
    int to_bb = !rtr || rtr->is_backbuffer;
    int gw, rw, ox;
    gpu_wide(&gw, &rw, &ox);
    int full = g_st.vp_x == 0 && g_st.vp_y == 0 && (int)g_st.vp_w >= gw && (int)g_st.vp_h >= g_bb_h;
    // render quality: only the race's full-screen 3D world is drawn smaller; HUD, menus and kart previews stay sharp
    d.lowres = to_bb && !d.pretransformed && full && hud_race_recent(2000);
    // screen parts moved / scaled by hud.c (race HUD layout, results board, room layout): the 2D vertices are moved
    // there; a sub-viewport (3D karts on the room's player cards) and the scissor follow the same move
    HudXf xf = {0};
    if (to_bb) {
        if (d.pretransformed) {
            hud_capture(&d, g_st.stage[0].colorop != 1 && g_st.tex[0] != 0);    // HUD editor pictures (before any move)
            hud_draw(g_vbuf, nverts, g_st.tex[0], &xf);
        }
        else if (!full) hud_rect((float)g_st.vp_x, (float)g_st.vp_y, (float)g_st.vp_w, (float)g_st.vp_h, &xf);
    }
    // Widescreen: the back buffer is wider than the game's screen (gpu_wide). Draws that fill the game's viewport
    // get the whole width: 3D through a horizontally narrowed projection (same size on screen, more world at the
    // sides), full-screen 2D stretched; other 2D and partial viewports keep their place, centred.
    // g_st is patched in place and restored after the draw: copying the 2.7 KB state for every back-buffer draw was
    // ~40 % of the game thread in memcpy at 750 draws a frame (5 Nov 2026 profile)
    struct { u32 vp_x, vp_y, vp_w, vp_h; int sc[4]; float p0, p4, p8, p12; } keep;
    int patched = to_bb && (ox > 0 || xf.on);
    GState *ws = &g_st;
    if (patched) {
        keep.vp_x = g_st.vp_x; keep.vp_y = g_st.vp_y; keep.vp_w = g_st.vp_w; keep.vp_h = g_st.vp_h;
        memcpy(keep.sc, g_st.scissor, sizeof keep.sc);
        keep.p0 = g_st.proj.m[0]; keep.p4 = g_st.proj.m[4]; keep.p8 = g_st.proj.m[8]; keep.p12 = g_st.proj.m[12];
        if (xf.on) {
#define XF_X(v) (xf.x + ((float)(v) - xf.sx) * xf.s)
#define XF_Y(v) (xf.y + ((float)(v) - xf.sy) * xf.s)
            if (!full) {
                float vx = XF_X(keep.vp_x) + (float)ox, vy = XF_Y(keep.vp_y);
                ws->vp_x = vx > 0 ? (u32)(vx + 0.5f) : 0; ws->vp_y = vy > 0 ? (u32)(vy + 0.5f) : 0;
                ws->vp_w = (u32)(keep.vp_w * xf.s + 0.5f); ws->vp_h = (u32)(keep.vp_h * xf.s + 0.5f);
            }
            if (ws->scissor_enable) {
                ws->scissor[0] = (int)XF_X(ws->scissor[0]); ws->scissor[2] = (int)XF_X(ws->scissor[2]);
                ws->scissor[1] = (int)XF_Y(ws->scissor[1]); ws->scissor[3] = (int)XF_Y(ws->scissor[3]);
            }
#undef XF_X
#undef XF_Y
        }
        if (full) ws->vp_w = (u32)rw; else if (!xf.on) ws->vp_x += (u32)ox;
        if (ws->scissor_enable) { ws->scissor[0] += ox; ws->scissor[2] += ox; }
        if (d.pretransformed) {
            float x0 = g_vbuf[0].pos[0], x1 = x0;
            for (u32 i = 1; i < nverts; i++) { float x = g_vbuf[i].pos[0]; if (x < x0) x0 = x; if (x > x1) x1 = x; }
            float k = (float)rw / (float)gw;
            if (full && !xf.on && x0 <= 1 && x1 >= gw - 1) for (u32 i = 0; i < nverts; i++) g_vbuf[i].pos[0] *= k;   // full-screen overlay
            else for (u32 i = 0; i < nverts; i++) g_vbuf[i].pos[0] += (float)ox;
        } else if (full) {
            float k = (float)gw / (float)rw;               // column 0 = clip x (row vectors): same pixels per unit
            ws->proj.m[0] *= k; ws->proj.m[4] *= k; ws->proj.m[8] *= k; ws->proj.m[12] *= k;
        }
        d.st = ws;
    }
    gpu_draw(&d);
    if (patched) {
        g_st.vp_x = keep.vp_x; g_st.vp_y = keep.vp_y; g_st.vp_w = keep.vp_w; g_st.vp_h = keep.vp_h;
        memcpy(g_st.scissor, keep.sc, sizeof keep.sc);
        g_st.proj.m[0] = keep.p0; g_st.proj.m[4] = keep.p4; g_st.proj.m[8] = keep.p8; g_st.proj.m[12] = keep.p12;
    }
}
static u32 prim_verts(u32 prim, u32 count) {
    switch (prim) { case 1: return count; case 2: return count * 2; case 3: return count + 1; case 4: return count * 3; default: return count + 2; }
}
HLE(dev_DrawPrimitive) { draw_common(ARG(1), ARG(2), prim_verts(ARG(1), ARG(3)), 0, 0, 0, 0, 0, 0); return S_OK; }
HLE(dev_DrawIndexedPrimitive) {
    Res *ib = res_of(g_indices);
    if (!ib) return D3DERR_INVALIDCALL;
    int i32 = ib->fmt == 102;
    u32 nidx = prim_verts(ARG(1), ARG(6));
    const u8 *ip = (const u8 *)HP(ib->mem[0][0] + ARG(5) * (i32 ? 4 : 2));
    draw_common(ARG(1), (u32)((s32)ARG(2) + (s32)ARG(3)), ARG(4), ip, i32, nidx, (s32)ARG(2), 0, 0);
    return S_OK;
}
HLE(dev_DrawPrimitiveUP) { draw_common(ARG(1), 0, prim_verts(ARG(1), ARG(2)), 0, 0, 0, 0, (const u8 *)HP(ARG(3)), ARG(4)); return S_OK; }
HLE(dev_DrawIndexedPrimitiveUP) {
    u32 nidx = prim_verts(ARG(1), ARG(4));
    draw_common(ARG(1), ARG(2), ARG(3), (const u8 *)HP(ARG(5)), ARG(6) == 102, nidx, 0, (const u8 *)HP(ARG(7)), ARG(8));
    return S_OK;
}
HLE(dev_BeginScene) { return S_OK; }
HLE(dev_EndScene) { return S_OK; }

static void build_vtables(void) {
    if (g_dev_vt) return;
    u32 v = g_dev_vt = vt_make(119);
    SLOT(v, 0, m_QI, 3); SLOT(v, 1, m_AddRef, 1); SLOT(v, 2, m_Release, 1); SLOT(v, 3, dev_TestCooperativeLevel, 1);
    SLOT(v, 4, dev_GetAvailableTextureMem, 1); SLOT(v, 5, m_ok, 1); SLOT(v, 6, dev_GetDirect3D, 2); SLOT(v, 7, dev_GetDeviceCaps, 2);
    SLOT(v, 8, dev_GetDisplayMode, 3); SLOT(v, 9, dev_GetCreationParameters, 2); SLOT(v, 10, m_ok, 4); SLOT(v, 11, m_ok, 4);
    SLOT(v, 12, m_zero, 2); SLOT(v, 14, dev_GetSwapChain, 3); SLOT(v, 15, m_ok, 1); SLOT(v, 16, dev_Reset, 2); SLOT(v, 17, dev_Present, 5);
    SLOT(v, 18, dev_GetBackBuffer, 5); SLOT(v, 19, dev_GetRasterStatus, 3); SLOT(v, 20, m_ok, 2); SLOT(v, 21, m_ok, 4); SLOT(v, 22, m_ok, 3);
    SLOT(v, 23, dev_CreateTexture, 9); SLOT(v, 25, dev_CreateCubeTexture, 8); SLOT(v, 26, dev_CreateVertexBuffer, 7);
    SLOT(v, 27, dev_CreateIndexBuffer, 7); SLOT(v, 28, dev_CreateRenderTarget, 9); SLOT(v, 29, dev_CreateDepthStencilSurface, 9);
    SLOT(v, 30, dev_UpdateSurface, 5); SLOT(v, 31, dev_UpdateTexture, 3); SLOT(v, 32, dev_GetRenderTargetData, 3);
    SLOT(v, 34, dev_StretchRect, 6); SLOT(v, 35, dev_ColorFill, 4); SLOT(v, 36, dev_CreateOffscreenPlainSurface, 7);
    SLOT(v, 37, dev_SetRenderTarget, 3); SLOT(v, 38, dev_GetRenderTarget, 3); SLOT(v, 39, dev_SetDepthStencilSurface, 2);
    SLOT(v, 40, dev_GetDepthStencilSurface, 2); SLOT(v, 41, dev_BeginScene, 1); SLOT(v, 42, dev_EndScene, 1); SLOT(v, 43, dev_Clear, 7);
    SLOT(v, 44, dev_SetTransform, 3); SLOT(v, 45, dev_GetTransform, 3); SLOT(v, 46, dev_MultiplyTransform, 3); SLOT(v, 47, dev_SetViewport, 2);
    SLOT(v, 48, dev_GetViewport, 2); SLOT(v, 49, dev_SetMaterial, 2); SLOT(v, 50, dev_GetMaterial, 2); SLOT(v, 51, dev_SetLight, 3);
    SLOT(v, 52, dev_GetLight, 3); SLOT(v, 53, dev_LightEnable, 3); SLOT(v, 54, dev_GetLightEnable, 3); SLOT(v, 55, m_ok, 3); SLOT(v, 56, m_ok, 3);
    SLOT(v, 57, dev_SetRenderState, 3); SLOT(v, 58, dev_GetRenderState, 3); SLOT(v, 59, dev_CreateStateBlock, 3); SLOT(v, 60, dev_BeginStateBlock, 1);
    SLOT(v, 61, dev_EndStateBlock, 2); SLOT(v, 62, m_ok, 2); SLOT(v, 63, m_ok, 2); SLOT(v, 64, dev_GetTexture, 3); SLOT(v, 65, dev_SetTexture, 3);
    SLOT(v, 66, dev_GetTextureStageState, 4); SLOT(v, 67, dev_SetTextureStageState, 4); SLOT(v, 68, dev_GetSamplerState, 4);
    SLOT(v, 69, dev_SetSamplerState, 4); SLOT(v, 70, dev_ValidateDevice, 2); SLOT(v, 71, m_ok, 3); SLOT(v, 72, m_ok, 3); SLOT(v, 73, m_ok, 2);
    SLOT(v, 74, m_ok, 2); SLOT(v, 75, dev_SetScissorRect, 2); SLOT(v, 76, dev_GetScissorRect, 2); SLOT(v, 77, m_ok, 2); SLOT(v, 78, m_zero, 1);
    SLOT(v, 79, m_ok, 2); SLOT(v, 80, m_zero, 1); SLOT(v, 81, dev_DrawPrimitive, 4); SLOT(v, 82, dev_DrawIndexedPrimitive, 7);
    SLOT(v, 83, dev_DrawPrimitiveUP, 5); SLOT(v, 84, dev_DrawIndexedPrimitiveUP, 9); SLOT(v, 86, dev_CreateVertexDeclaration, 3);
    SLOT(v, 87, dev_SetVertexDeclaration, 2); SLOT(v, 88, dev_GetVertexDeclaration, 2); SLOT(v, 89, dev_SetFVF, 2); SLOT(v, 90, dev_GetFVF, 2);
    SLOT(v, 91, dev_CreateShader, 3); SLOT(v, 92, dev_SetShader, 2); SLOT(v, 93, dev_GetShader, 2);
    for (int i = 94; i <= 99; i++) SLOT(v, i, m_ok, 4);
    SLOT(v, 100, dev_SetStreamSource, 5); SLOT(v, 101, dev_GetStreamSource, 5); SLOT(v, 102, m_ok, 3); SLOT(v, 103, m_ok, 3);
    SLOT(v, 104, dev_SetIndices, 2); SLOT(v, 105, dev_GetIndices, 2); SLOT(v, 106, dev_CreateShader, 3); SLOT(v, 107, dev_SetShader, 2);
    SLOT(v, 108, dev_GetShader, 2);
    for (int i = 109; i <= 114; i++) SLOT(v, i, m_ok, 4);
    SLOT(v, 118, dev_CreateQuery, 3);

    // resource base 0..10: QI AddRef Release GetDevice SetPrivateData GetPrivateData FreePrivateData SetPriority GetPriority PreLoad GetType
#define RESBASE(t) do { SLOT(t, 0, m_QI, 3); SLOT(t, 1, m_AddRef, 1); SLOT(t, 2, m_Release, 1); SLOT(t, 3, tex_GetDevice, 2); \
        SLOT(t, 4, m_ok, 5); SLOT(t, 5, m_ok, 4); SLOT(t, 6, m_ok, 2); SLOT(t, 7, m_zero, 2); SLOT(t, 8, m_zero, 1); SLOT(t, 9, m_ok, 1); SLOT(t, 10, tex_GetType, 1); } while (0)
    u32 t = g_tex_vt = vt_make(22);
    RESBASE(t);
    SLOT(t, 11, m_zero, 2); SLOT(t, 12, m_zero, 1); SLOT(t, 13, tex_GetLevelCount, 1); SLOT(t, 14, m_ok, 2); SLOT(t, 15, m_zero, 1);
    SLOT(t, 16, tex_GenerateMipSubLevels, 1); SLOT(t, 17, tex_GetLevelDesc, 3); SLOT(t, 18, tex_GetSurfaceLevel, 3); SLOT(t, 19, tex_LockRect, 5);
    SLOT(t, 20, tex_UnlockRect, 2); SLOT(t, 21, m_ok, 2);
    u32 cb = g_cube_vt = vt_make(22);
    RESBASE(cb);
    SLOT(cb, 11, m_zero, 2); SLOT(cb, 12, m_zero, 1); SLOT(cb, 13, tex_GetLevelCount, 1); SLOT(cb, 14, m_ok, 2); SLOT(cb, 15, m_zero, 1);
    SLOT(cb, 16, tex_GenerateMipSubLevels, 1); SLOT(cb, 17, tex_GetLevelDesc, 3); SLOT(cb, 18, cube_GetCubeMapSurface, 4); SLOT(cb, 19, cube_LockRect, 6);
    SLOT(cb, 20, cube_UnlockRect, 3); SLOT(cb, 21, m_ok, 3);
    u32 s = g_surf_vt = vt_make(17);
    RESBASE(s);
    SLOT(s, 11, surf_GetContainer, 3); SLOT(s, 12, surf_GetDesc, 2); SLOT(s, 13, surf_LockRect, 4); SLOT(s, 14, surf_UnlockRect, 1);
    SLOT(s, 15, surf_GetDC, 2); SLOT(s, 16, m_ok, 2);
    u32 vb = g_vb_vt = vt_make(14);
    RESBASE(vb);
    SLOT(vb, 11, buf_Lock, 5); SLOT(vb, 12, buf_Unlock, 1); SLOT(vb, 13, vb_GetDesc, 2);
    u32 ib = g_ib_vt = vt_make(14);
    RESBASE(ib);
    SLOT(ib, 11, buf_Lock, 5); SLOT(ib, 12, buf_Unlock, 1); SLOT(ib, 13, ib_GetDesc, 2);
    u32 dc = g_decl_vt = vt_make(5);
    SLOT(dc, 0, m_QI, 3); SLOT(dc, 1, m_AddRef, 1); SLOT(dc, 2, m_Release, 1); SLOT(dc, 3, tex_GetDevice, 2); SLOT(dc, 4, decl_GetDeclaration, 3);
    u32 sb = g_sb_vt = vt_make(6);
    SLOT(sb, 0, m_QI, 3); SLOT(sb, 1, m_AddRef, 1); SLOT(sb, 2, m_Release, 1); SLOT(sb, 3, tex_GetDevice, 2); SLOT(sb, 4, sb_Capture, 1); SLOT(sb, 5, sb_Apply, 1);
    u32 sw = g_swap_vt = vt_make(10);
    SLOT(sw, 0, m_QI, 3); SLOT(sw, 1, m_AddRef, 1); SLOT(sw, 2, m_Release, 1); SLOT(sw, 3, swap_Present, 6); SLOT(sw, 4, m_ok, 2);
    SLOT(sw, 5, swap_GetBackBuffer, 4); SLOT(sw, 6, dev_GetRasterStatus, 2); SLOT(sw, 7, swap_GetDisplayMode, 2); SLOT(sw, 8, tex_GetDevice, 2);
    SLOT(sw, 9, swap_GetPresentParameters, 2);
    u32 q = g_query_vt = vt_make(8);
    SLOT(q, 0, m_QI, 3); SLOT(q, 1, m_AddRef, 1); SLOT(q, 2, m_Release, 1); SLOT(q, 3, tex_GetDevice, 2); SLOT(q, 4, m_zero, 1);
    SLOT(q, 5, q_GetDataSize, 1); SLOT(q, 6, m_ok, 2); SLOT(q, 7, q_GetData, 4);
}

static const HleDef defs[] = { DEF("d3d9", "Direct3DCreate9", d3d_Create9, 1) };
void hle_d3d9_init(void) { hle_add(defs, 1); }
