// Null GPU backend: accepts everything, draws nothing. Used to bring the game up before the WebGPU backend.
#include "gpu.h"
#include <stdlib.h>

struct GpuTex { int w, h; };
static int g_w, g_h; static u32 g_frames, g_draws;
void gpu_init(void *win, int w, int h) { (void)win; g_w = w; g_h = h; rt_log("gpu_null: %dx%d\n", w, h); }
void gpu_resize(int w, int h) { g_w = w; g_h = h; }
GpuTex *gpu_tex_create(const GTexDesc *d) { GpuTex *t = calloc(1, sizeof *t); t->w = d->w; t->h = d->h; return t; }
void gpu_tex_upload(GpuTex *t, int level, int x, int y, int w, int h, const u32 *rgba, int pitch) { (void)t; (void)level; (void)x; (void)y; (void)w; (void)h; (void)rgba; (void)pitch; }
void gpu_tex_destroy(GpuTex *t) { free(t); }
void gpu_set_target(GpuTex *c, GpuTex *d) { (void)c; (void)d; }
void gpu_clear(u32 f, u32 c, float z, u32 s, const int *r, int n) { (void)f; (void)c; (void)z; (void)s; (void)r; (void)n; }
void gpu_draw(const GDraw *d) { (void)d; g_draws++; }
void gpu_present(void) {
    if (++g_frames % 120 == 1) rt_log("gpu_null: frame %u, %u draws since last report\n", g_frames, g_draws);
    if (g_frames % 120 == 1) g_draws = 0;
}
void gpu_backbuffer_size(int *w, int *h) { *w = g_w; *h = g_h; }
void gpu_wide(int *gw, int *rw, int *ox) { *gw = *rw = g_w; *ox = 0; }
int gpu_read_target(GpuTex *t, u32 *o, int w, int h) { (void)t; (void)o; (void)w; (void)h; return 0; }
int gpu_has_etc2(void) { return 0; }
void gpu_tex_upload_etc2(GpuTex *t, int level, const u8 *blocks, int w, int h) { (void)t; (void)level; (void)blocks; (void)w; (void)h; }
int gpu_geom_on(void) { return 0; }
int gpu_geom_has(u64 key, float bs[4]) { (void)key; (void)bs; return 0; }
