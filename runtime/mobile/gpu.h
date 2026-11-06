// Backend interface between the Direct3D 9 front-end (d3d9.c) and a GPU implementation (gpu_wgpu.c / gpu_null.c).
// The front-end resolves vertex formats into a canonical vertex and snapshots fixed-function state per draw.
#pragma once
#include "rt.h"

typedef struct GpuTex GpuTex;

// canonical vertex the backend consumes (CPU-expanded from any FVF / declaration)
typedef struct {
    float pos[4];            // xyz (w = 1) or pre-transformed screen xyz + rhw
    float nrm[3];
    u32 diffuse, specular;   // D3DCOLOR (ARGB)
    float uv[4][2];
    float blend[4];          // unused for now (skinning happens on the CPU in RenderWare when no vertex shaders)
} GVert;

typedef struct { float m[16]; } Mat4;   // D3D row-major, row vectors (v * M)

typedef struct {
    u32 type;                // 1 point, 2 spot, 3 directional
    float diffuse[4], specular[4], ambient[4], pos[3], dir[3], range, falloff, att0, att1, att2, theta, phi;
    int enabled;
} GLight;

typedef struct {
    u32 colorop, colorarg1, colorarg2, alphaop, alphaarg1, alphaarg2, texcoordindex, ttflags, colorarg0, alphaarg0, resultarg;
    float bumpenv[4];
} GStage;
typedef struct { u32 addru, addrv, addrw, magf, minf, mipf, border, maxmip, maxaniso; float lodbias; } GSampler;

typedef struct {
    // transforms
    Mat4 world, view, proj, texm[8];
    // lighting
    int lighting, specular_enable, normalize, localviewer, color_vertex;
    u32 ambient;             // D3DRS_AMBIENT
    u32 diffuse_src, specular_src, ambient_src, emissive_src;
    float mat_diffuse[4], mat_ambient[4], mat_specular[4], mat_emissive[4], mat_power;
    GLight lights[8];
    // fog
    int fog_enable, fog_table_mode, fog_vertex_mode, range_fog;
    u32 fog_color;
    float fog_start, fog_end, fog_density;
    // raster
    u32 zenable, zwrite, zfunc, cull, fill, shade;
    u32 alpha_blend, src_blend, dst_blend, blend_op, sep_alpha, src_blend_a, dst_blend_a, blend_op_a;
    u32 alpha_test, alpha_func, alpha_ref;
    u32 color_write, texture_factor;
    u32 stencil_enable, stencil_func, stencil_ref, stencil_mask, stencil_wmask, stencil_fail, stencil_zfail, stencil_pass;
    u32 scissor_enable; int scissor[4];
    float depth_bias, slope_bias;
    // viewport
    u32 vp_x, vp_y, vp_w, vp_h; float vp_minz, vp_maxz;
    // textures
    GStage stage[8];
    GSampler samp[8];
    GpuTex *tex[8];
} GState;

typedef struct {
    u32 prim;                // D3DPRIMITIVETYPE: 1 points 2 lines 3 linestrip 4 trilist 5 tristrip 6 trifan
    const GVert *verts; u32 nverts;
    const u32 *indices; u32 nindices;   // 0 = non-indexed
    int pretransformed;      // XYZRHW
    int lowres;              // the race's full-screen 3D world: drawn at render quality (gpu_wgpu.c scene target)
    int has_normal, has_diffuse, has_specular, ntex;
    const GState *st;
} GDraw;

typedef struct { int w, h, levels, rt, depth; u32 fmt; } GTexDesc;

void gpu_init(void *native_window, int width, int height);
void gpu_resize(int width, int height);
GpuTex *gpu_tex_create(const GTexDesc *d);
void gpu_tex_upload(GpuTex *t, int level, int x, int y, int w, int h, const u32 *rgba, int pitch_px);   // RGBA8 (r in low byte)
void gpu_tex_destroy(GpuTex *t);
void gpu_set_target(GpuTex *color, GpuTex *depth);   // NULL color = back buffer
void gpu_clear(u32 flags, u32 argb, float z, u32 stencil, const int *rects, int nrects);
void gpu_draw(const GDraw *d);
void gpu_present(void);
void gpu_backbuffer_size(int *w, int *h);     // the game's size
// hud.c: a 2D draw / sub-viewport moved with a screen part: p' = (x, y) + (p - (sx, sy)) * s, game coordinates
typedef struct { int on; float sx, sy, x, y, s; } HudXf;
void gpu_wide(int *game_w, int *real_w, int *offset_x);   // widescreen: real back buffer width, game picture offset
int gpu_read_target(GpuTex *t, u32 *rgba_out, int w, int h);   // for GetRenderTargetData; may return 0
