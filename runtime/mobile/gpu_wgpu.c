// WebGPU backend (wgpu-native: Vulkan on Android, D3D12/Vulkan on the desktop bench).
// The game renders into an off-screen back buffer at its own resolution; Present scales it onto the surface.
// D3D9 fixed function (transform, lighting, fog, texture stages, alpha test) is one WGSL ubershader driven by uniforms.
#include "gpu.h"
#include <webgpu/webgpu.h>
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SV(s) ((WGPUStringView){(s), WGPU_STRLEN})
struct GpuTex {
    WGPUTexture tex; WGPUTextureView view; int w, h, levels, rt, depth; int cube;
    u32 used_batch;                      // batch that last sampled it (upload must flush first)
};

static WGPUInstance g_inst; static WGPUAdapter g_adapter; static WGPUDevice g_dev; static WGPUQueue g_q; static WGPUSurface g_surf;
static void *g_surf_win;           // the platform window g_surf was made for
static WGPUTextureFormat g_surf_fmt;
static int g_bw, g_bh;                   // real back buffer (wider than the game's when widescreen is on)
static int g_gw, g_ox;                   // the game's width and where it sits in the real back buffer
// Widescreen (login Graphics option, CK_WIDE): the back buffer takes the screen's shape at the game's height, the
// game keeps its 1280x720; 3D gets the extra width (d3d9.c), 2D stays in the middle. 0 = the 16:9 picture.
static int wide_width(int gw, int gh) {
    const char *e = getenv("CK_WIDE");
    if (e && e[0] == '0') return gw;
    void plat_client_size(int *w, int *h);
    int sw, sh;
    plat_client_size(&sw, &sh);
    if (sw <= 0 || sh <= 0) return gw;
    int w = ((int)((double)gh * sw / sh + 0.5)) & ~1;
    return w > gw ? (w < gw * 2 ? w : gw * 2) : gw;
}
void gpu_wide(int *gw, int *rw, int *ox) { *gw = g_gw; *rw = g_bw; *ox = g_ox; }
static GpuTex *g_bb, *g_bbdepth, *g_white;
// Render quality (Settings 100 / 85 / 70 %: options.txt scale= -> CK_SCALE): the back buffer is drawn that much smaller
// and scaled up at present (less GPU memory traffic and shading on phone GPUs). The game keeps its own pixels
// (g_bw x g_bh): draws to the back buffer scale viewport and scissor, and screen-space vertices are converted with the
// logical size (uniform), so nothing else changes.
static float g_rs = 1;
static int bb_w(void) { return (int)(g_bw * g_rs + 0.5f); }
static int bb_h(void) { return (int)(g_bh * g_rs + 0.5f); }
// The scene target (the user, 6 Nov 2026: "without affecting the hud/menu, only the assets"): the race's full-screen
// 3D draws (GDraw.lowres) go to g_scene, render quality x the back buffer, with its own depth. The first draw to the
// back buffer that is not one of them (the HUD, a banner) puts the scene there first, scaled up -- opaque the first
// time in a frame, blended over later (3D effects drawn after the HUD) -- so everything 2D stays full resolution.
static GpuTex *g_scene, *g_scene_depth;
static int g_in_scene, g_scene_pending, g_scene_first = 1, g_scene_clear;
static u32 g_scene_clear_color;
static float g_scene_z = 1;
static WGPURenderPipeline g_comp_opaque, g_comp_over;
static GpuTex *g_target, *g_target_depth;
static WGPUShaderModule g_shader, g_blit_shader;
static WGPUBindGroupLayout g_bgl_u, g_bgl_t, g_bgl_blit;
static WGPUPipelineLayout g_pl, g_pl_blit;
static WGPURenderPipeline g_blit_pipe;
static WGPUSampler g_blit_samp;
static WGPUBuffer g_vb, g_ib, g_ub;
#define VB_SIZE (64u << 20)
#define IB_SIZE (16u << 20)
#define UB_SIZE (16u << 20)
#define USTRIDE 1536u
static u8 *g_vstage, *g_istage, *g_ustage;
static u32 g_voff, g_ioff, g_uoff;
static WGPUCommandEncoder g_enc;
static WGPURenderPassEncoder g_pass;
static GpuTex *g_pass_target, *g_pass_depth;
static u32 g_batch = 1;
static int g_pending_clear; static u32 g_clear_flags, g_clear_color; static float g_clear_z;

// ---------------------------------------------------------------------------------------------------
static const char *WGSL =
"struct Light { dif: vec4f, spe: vec4f, amb: vec4f, pos: vec4f, dir: vec4f, att: vec4f, ang: vec4f };\n"
"struct U { wvp: mat4x4f, wv: mat4x4f, tm0: mat4x4f, tm1: mat4x4f, rt: vec4f, flags: vec4u, mat_d: vec4f, mat_a: vec4f, mat_s: vec4f, mat_e: vec4f,\n"
"  amb: vec4f, fog: vec4f, fogc: vec4f, tf: vec4f, st0: vec4u, st1: vec4u, tc: vec4u, misc: vec4f, lights: array<Light, 8> };\n"
"@group(0) @binding(0) var<uniform> u: U;\n"
"@group(1) @binding(0) var t0: texture_2d<f32>;\n@group(1) @binding(1) var s0: sampler;\n"
"@group(1) @binding(2) var t1: texture_2d<f32>;\n@group(1) @binding(3) var s1: sampler;\n"
"struct VI { @location(0) pos: vec4f, @location(1) nrm: vec3f, @location(2) dif: vec4f, @location(3) spe: vec4f, @location(4) uv0: vec2f,\n"
"  @location(5) uv1: vec2f, @location(6) uv2: vec2f, @location(7) uv3: vec2f };\n"
"struct VO { @builtin(position) pos: vec4f, @location(0) c0: vec4f, @location(1) c1: vec4f, @location(2) tc0: vec4f, @location(3) tc1: vec4f, @location(4) fog: f32 };\n"
"fn uvset(v: VI, i: u32) -> vec2f { switch (i & 3u) { case 1u: { return v.uv1; } case 2u: { return v.uv2; } case 3u: { return v.uv3; } default: { return v.uv0; } } }\n"
"fn texcoord(v: VI, tci: u32, ttf: u32, m: mat4x4f, vpos: vec3f, vn: vec3f) -> vec4f {\n"
"  var c = vec4f(uvset(v, tci), 1.0, 0.0);\n"
"  let gen = tci >> 16u;\n"
"  if (gen == 1u) { c = vec4f(vn, 1.0); } else if (gen == 2u) { c = vec4f(vpos, 1.0); }\n"
"  else if (gen == 3u) { let e = normalize(vpos); c = vec4f(e - 2.0 * dot(e, vn) * vn, 1.0); }\n"
"  if ((ttf & 255u) != 0u) { c = m * c; if ((ttf & 256u) != 0u) { let q = c[(ttf & 255u) - 1u]; if (q != 0.0) { c = c / q; } } }\n"
"  return c;\n"
"}\n"
"fn msrc(sel: u32, mat: vec4f, d: vec4f, s: vec4f, hasd: bool, hass: bool) -> vec4f {\n"
"  if (sel == 1u && hasd) { return d; } if (sel == 2u && hass) { return s; } return mat; }\n"
"@vertex fn vs(v: VI) -> VO {\n"
"  var o: VO;\n"
"  let f = u.flags.x;\n"
"  let hasd = (f & 8u) != 0u; let hass = (f & 16u) != 0u;\n"
"  let vd = select(vec4f(1.0), v.dif.zyxw, hasd);\n"
"  let vsp = select(vec4f(0.0), v.spe.zyxw, hass);\n"
"  var c0 = vd; var c1 = vsp;\n"
"  var vpos = vec3f(0.0); var vn = vec3f(0.0, 0.0, -1.0);\n"
"  if ((f & 1u) != 0u) {\n"
"    let w = select(1.0 / v.pos.w, 1.0, v.pos.w == 0.0);\n"
"    let x = (v.pos.x + 0.5) / u.rt.x * 2.0 - 1.0;\n"
"    let y = 1.0 - (v.pos.y + 0.5) / u.rt.y * 2.0;\n"
"    o.pos = vec4f(x * w, y * w, v.pos.z * w, w);\n"
"    o.fog = select(1.0, vsp.a, (f & 512u) != 0u);\n"
"  } else {\n"
"    o.pos = u.wvp * vec4f(v.pos.xyz, 1.0);\n"
"    vpos = (u.wv * vec4f(v.pos.xyz, 1.0)).xyz;\n"
"    vn = (u.wv * vec4f(v.nrm, 0.0)).xyz;\n"
"    let nl = length(vn); if (nl > 0.0) { vn = vn / nl; }\n"
"    if ((f & 2u) != 0u) {\n"
"      let ms = u.flags.z; let cv = (f & 256u) != 0u;\n"
"      let md = msrc(select(0u, ms & 3u, cv), u.mat_d, vd, vsp, hasd, hass);\n"
"      let msp = msrc(select(0u, (ms >> 2u) & 3u, cv), u.mat_s, vd, vsp, hasd, hass);\n"
"      let ma = msrc(select(0u, (ms >> 4u) & 3u, cv), u.mat_a, vd, vsp, hasd, hass);\n"
"      let me = msrc(select(0u, (ms >> 6u) & 3u, cv), u.mat_e, vd, vsp, hasd, hass);\n"
"      var dif = vec3f(0.0); var amb = vec3f(0.0); var spc = vec3f(0.0);\n"
"      let V = select(vec3f(0.0, 0.0, -1.0), -normalize(vpos), (f & 128u) != 0u);\n"
"      let n = u32(u.misc.y);\n"
"      for (var i = 0u; i < n; i++) {\n"
"        let L = u.lights[i]; let ty = u32(L.pos.w);\n"
"        var ldir: vec3f; var att = 1.0;\n"
"        if (ty == 3u) { ldir = -normalize(L.dir.xyz); }\n"
"        else {\n"
"          let d3 = L.pos.xyz - vpos; let d = length(d3);\n"
"          if (d > L.dir.w) { continue; }\n"
"          ldir = d3 / max(d, 1e-6);\n"
"          att = 1.0 / max(L.att.x + L.att.y * d + L.att.z * d * d, 1e-6);\n"
"          if (ty == 2u) {\n"
"            let rho = dot(-ldir, normalize(L.dir.xyz));\n"
"            if (rho <= L.ang.y) { att = 0.0; } else if (rho < L.ang.x) { att *= pow((rho - L.ang.y) / max(L.ang.x - L.ang.y, 1e-6), L.att.w); }\n"
"          }\n"
"        }\n"
"        let ndl = max(dot(vn, ldir), 0.0);\n"
"        dif += att * ndl * L.dif.rgb;\n"
"        amb += att * L.amb.rgb;\n"
"        if ((f & 32u) != 0u && ndl > 0.0) { let h = normalize(ldir + V); spc += att * pow(max(dot(vn, h), 0.0), u.misc.x) * L.spe.rgb; }\n"
"      }\n"
"      c0 = vec4f(clamp(me.rgb + ma.rgb * (u.amb.rgb + amb) + md.rgb * dif, vec3f(0.0), vec3f(1.0)), md.a);\n"
"      c1 = vec4f(clamp(msp.rgb * spc, vec3f(0.0), vec3f(1.0)), vsp.a);\n"
"    }\n"
"    o.fog = 1.0;\n"
"    if ((f & 512u) != 0u) {\n"
"      let mode = u.flags.y & 255u;\n"
"      let d = select(abs(vpos.z), length(vpos), (f & 1024u) != 0u);\n"
"      if (mode == 3u) { o.fog = clamp((u.fog.y - d) / max(u.fog.y - u.fog.x, 1e-6), 0.0, 1.0); }\n"
"      else if (mode == 1u) { o.fog = exp(-d * u.fog.z); }\n"
"      else if (mode == 2u) { o.fog = exp(-(d * u.fog.z) * (d * u.fog.z)); }\n"
"      else { o.fog = vsp.a; }\n"
"    }\n"
"  }\n"
"  o.c0 = c0; o.c1 = c1;\n"
"  o.tc0 = texcoord(v, u.tc.x, u.tc.z, u.tm0, vpos, vn);\n"
"  o.tc1 = texcoord(v, u.tc.y, u.tc.w, u.tm1, vpos, vn);\n"
"  return o;\n"
"}\n"
"fn arg(a: u32, cur: vec4f, dif: vec4f, spe: vec4f, tex: vec4f) -> vec4f {\n"
"  var r = cur;\n"
"  switch (a & 15u) { case 0u: { r = dif; } case 2u: { r = tex; } case 3u: { r = u.tf; } case 4u: { r = spe; } default: { r = cur; } }\n"
"  if ((a & 32u) != 0u) { r = vec4f(r.a); }\n"
"  if ((a & 16u) != 0u) { r = vec4f(1.0) - r; }\n"
"  return r;\n"
"}\n"
"fn op(o: u32, a1: vec4f, a2: vec4f, a0: vec4f, cur: vec4f, dif: vec4f, tex: vec4f) -> vec4f {\n"
"  let one = vec4f(1.0); let zero = vec4f(0.0);\n"
"  switch (o) {\n"
"    case 2u: { return a1; } case 3u: { return a2; } case 4u: { return a1 * a2; }\n"
"    case 5u: { return clamp(a1 * a2 * 2.0, zero, one); } case 6u: { return clamp(a1 * a2 * 4.0, zero, one); }\n"
"    case 7u: { return clamp(a1 + a2, zero, one); } case 8u: { return clamp(a1 + a2 - 0.5, zero, one); }\n"
"    case 9u: { return clamp((a1 + a2 - 0.5) * 2.0, zero, one); } case 10u: { return clamp(a1 - a2, zero, one); }\n"
"    case 11u: { return clamp(a1 + a2 - a1 * a2, zero, one); } case 12u: { return mix(a2, a1, dif.a); }\n"
"    case 13u: { return mix(a2, a1, tex.a); } case 14u: { return mix(a2, a1, u.tf.a); }\n"
"    case 15u: { return clamp(a1 + a2 * (1.0 - tex.a), zero, one); } case 16u: { return mix(a2, a1, cur.a); }\n"
"    case 18u: { return clamp(vec4f(a1.rgb + a1.a * a2.rgb, a1.a), zero, one); }\n"
"    case 19u: { return clamp(vec4f(a1.rgb * a2.rgb + a1.a, a1.a), zero, one); }\n"
"    case 24u: { return vec4f(clamp(4.0 * dot(a1.rgb - 0.5, a2.rgb - 0.5), 0.0, 1.0)); }\n"
"    case 25u: { return clamp(a0 + a1 * a2, zero, one); } case 26u: { return mix(a2, a1, a0); }\n"
"    default: { return a1; }\n"
"  }\n"
"}\n"
"fn stage(st: vec4u, cur: vec4f, dif: vec4f, spe: vec4f, tex: vec4f) -> vec4f {\n"
"  if (st.x == 1u) { return cur; }\n"
"  let c = op(st.x, arg(st.y & 255u, cur, dif, spe, tex), arg((st.y >> 8u) & 255u, cur, dif, spe, tex), arg((st.y >> 16u) & 255u, cur, dif, spe, tex), cur, dif, tex);\n"
"  var a = cur.a;\n"
"  if (st.z != 1u) { a = op(st.z, arg(st.w & 255u, cur, dif, spe, tex), arg((st.w >> 8u) & 255u, cur, dif, spe, tex), arg((st.w >> 16u) & 255u, cur, dif, spe, tex), cur, dif, tex).a; }\n"
"  return vec4f(c.rgb, a);\n"
"}\n"
"@fragment fn fs(i: VO) -> @location(0) vec4f {\n"
"  let tx0 = textureSample(t0, s0, i.tc0.xy);\n"
"  let tx1 = textureSample(t1, s1, i.tc1.xy);\n"
"  var cur = i.c0;\n"
"  if ((u.flags.x & 1048576u) != 0u) { return vec4f(1.0, 0.0, 1.0, 1.0); }\n"
"  cur = stage(u.st0, cur, i.c0, i.c1, tx0);\n"
"  if (u.st0.x != 1u) { cur = stage(u.st1, cur, i.c0, i.c1, tx1); }\n"
"  let f = u.flags.x;\n"
"  if ((f & 32u) != 0u) { cur = vec4f(clamp(cur.rgb + i.c1.rgb, vec3f(0.0), vec3f(1.0)), cur.a); }\n"
"  if ((f & 512u) != 0u) { cur = vec4f(mix(u.fogc.rgb, cur.rgb, clamp(i.fog, 0.0, 1.0)), cur.a); }\n"
"  let at = u.flags.w;\n"
"  if ((at & 65536u) != 0u) {\n"
"    let a = round(cur.a * 255.0); let r = f32((at >> 8u) & 255u); var ok = true;\n"
"    switch (at & 255u) { case 1u: { ok = false; } case 2u: { ok = a < r; } case 3u: { ok = a == r; } case 4u: { ok = a <= r; }\n"
"      case 5u: { ok = a > r; } case 6u: { ok = a != r; } case 7u: { ok = a >= r; } default: { ok = true; } }\n"
"    if (!ok) { discard; }\n"
"  }\n"
"  return cur;\n"
"}\n"
"@fragment fn fs_fast(i: VO) -> @location(0) vec4f { return textureSample(t0, s0, i.tc0.xy) * i.c0; }\n";   // GPU-cost test only
static int g_fs_fast = -1;         // <game>/gfxtest.txt present: every pipeline uses fs_fast (measures shader cost)

static const char *BLIT_WGSL =
"@group(0) @binding(0) var t: texture_2d<f32>;\n@group(0) @binding(1) var s: sampler;\n"
"struct VO { @builtin(position) p: vec4f, @location(0) uv: vec2f };\n"
"@vertex fn vs(@builtin(vertex_index) i: u32) -> VO { var o: VO; let x = f32((i << 1u) & 2u); let y = f32(i & 2u);\n"
"  o.p = vec4f(x * 2.0 - 1.0, 1.0 - y * 2.0, 0.0, 1.0); o.uv = vec2f(x, y); return o; }\n"
"@fragment fn fs_copy(i: VO) -> @location(0) vec4f { return textureSample(t, s, i.uv); }\n"   // scene -> back buffer
"override GAMMA: f32 = 1.0;\n"      // the game's gamma (UserSetting.bin), applied when the frame goes to the screen
"@fragment fn fs(i: VO) -> @location(0) vec4f { return vec4f(pow(textureSample(t, s, i.uv).rgb, vec3f(GAMMA)), 1.0); }\n";

// ---------------------------------------------------------------------------------------------------
static void on_adapter(WGPURequestAdapterStatus st, WGPUAdapter a, WGPUStringView msg, void *u1, void *u2) {
    (void)u2;
    if (st != WGPURequestAdapterStatus_Success) rt_fatal("WebGPU adapter: %.*s", (int)msg.length, msg.data ? msg.data : "");
    *(WGPUAdapter *)u1 = a;
}
static void on_device(WGPURequestDeviceStatus st, WGPUDevice d, WGPUStringView msg, void *u1, void *u2) {
    (void)u2;
    if (st != WGPURequestDeviceStatus_Success) rt_fatal("WebGPU device: %.*s", (int)msg.length, msg.data ? msg.data : "");
    *(WGPUDevice *)u1 = d;
}
static void on_error(WGPUDevice const *d, WGPUErrorType type, WGPUStringView msg, void *u1, void *u2) {
    (void)d; (void)u1; (void)u2;
    static int n;
    if (n++ < 30) rt_log("WebGPU error %d: %.*s\n", (int)type, (int)msg.length, msg.data ? msg.data : "");
}

static WGPUShaderModule shader(const char *src) {
    WGPUShaderSourceWGSL w = WGPU_SHADER_SOURCE_WGSL_INIT;
    w.code = SV(src);
    WGPUShaderModuleDescriptor d = WGPU_SHADER_MODULE_DESCRIPTOR_INIT;
    d.nextInChain = &w.chain;
    return wgpuDeviceCreateShaderModule(g_dev, &d);
}
static GpuTex *tex_new(int w, int h, int levels, int rt, int depth) {
    GpuTex *t = calloc(1, sizeof *t);
    g_perf.texs++;
    t->w = w; t->h = h; t->levels = levels < 1 ? 1 : levels; t->rt = rt; t->depth = depth;
    WGPUTextureDescriptor d = WGPU_TEXTURE_DESCRIPTOR_INIT;
    d.size = (WGPUExtent3D){(u32)w, (u32)h, 1};
    d.mipLevelCount = (u32)t->levels;
    d.format = depth ? WGPUTextureFormat_Depth24Plus : WGPUTextureFormat_RGBA8Unorm;      // no stencil: never used
    d.usage = depth ? WGPUTextureUsage_RenderAttachment
                    : WGPUTextureUsage_TextureBinding | WGPUTextureUsage_CopyDst | (rt ? WGPUTextureUsage_RenderAttachment | WGPUTextureUsage_CopySrc : 0);
    t->tex = wgpuDeviceCreateTexture(g_dev, &d);
    t->view = wgpuTextureCreateView(t->tex, 0);
    return t;
}

static void layouts(void) {
    WGPUBindGroupLayoutEntry ue = WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
    ue.binding = 0; ue.visibility = WGPUShaderStage_Vertex | WGPUShaderStage_Fragment;
    ue.buffer.type = WGPUBufferBindingType_Uniform; ue.buffer.hasDynamicOffset = 1; ue.buffer.minBindingSize = USTRIDE;
    WGPUBindGroupLayoutDescriptor ud = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
    ud.entryCount = 1; ud.entries = &ue;
    g_bgl_u = wgpuDeviceCreateBindGroupLayout(g_dev, &ud);
    WGPUBindGroupLayoutEntry te[4];
    for (int i = 0; i < 4; i++) {
        te[i] = (WGPUBindGroupLayoutEntry)WGPU_BIND_GROUP_LAYOUT_ENTRY_INIT;
        te[i].binding = (u32)i; te[i].visibility = WGPUShaderStage_Fragment;
        if (i & 1) te[i].sampler.type = WGPUSamplerBindingType_Filtering;
        else { te[i].texture.sampleType = WGPUTextureSampleType_Float; te[i].texture.viewDimension = WGPUTextureViewDimension_2D; }
    }
    WGPUBindGroupLayoutDescriptor td = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
    td.entryCount = 4; td.entries = te;
    g_bgl_t = wgpuDeviceCreateBindGroupLayout(g_dev, &td);
    WGPUBindGroupLayout ls[2] = {g_bgl_u, g_bgl_t};
    WGPUPipelineLayoutDescriptor pd = WGPU_PIPELINE_LAYOUT_DESCRIPTOR_INIT;
    pd.bindGroupLayoutCount = 2; pd.bindGroupLayouts = ls;
    g_pl = wgpuDeviceCreatePipelineLayout(g_dev, &pd);
    WGPUBindGroupLayoutDescriptor bd = WGPU_BIND_GROUP_LAYOUT_DESCRIPTOR_INIT;
    bd.entryCount = 2; bd.entries = te;
    g_bgl_blit = wgpuDeviceCreateBindGroupLayout(g_dev, &bd);
    WGPUPipelineLayoutDescriptor bpd = WGPU_PIPELINE_LAYOUT_DESCRIPTOR_INIT;
    bpd.bindGroupLayoutCount = 1; bpd.bindGroupLayouts = &g_bgl_blit;
    g_pl_blit = wgpuDeviceCreatePipelineLayout(g_dev, &bpd);
}
static void configure_surface(void) {
    int w, h;
    void plat_client_size(int *w, int *h);
    plat_client_size(&w, &h);
    if (w < 1 || h < 1) return;
    WGPUSurfaceCapabilities caps = WGPU_SURFACE_CAPABILITIES_INIT;
    wgpuSurfaceGetCapabilities(g_surf, g_adapter, &caps);
    g_surf_fmt = caps.formatCount ? caps.formats[0] : WGPUTextureFormat_BGRA8Unorm;
    for (size_t i = 0; i < caps.formatCount; i++)
        if (caps.formats[i] == WGPUTextureFormat_RGBA8Unorm || caps.formats[i] == WGPUTextureFormat_BGRA8Unorm) { g_surf_fmt = caps.formats[i]; break; }
    WGPUSurfaceConfiguration sc = WGPU_SURFACE_CONFIGURATION_INIT;
    sc.device = g_dev; sc.format = g_surf_fmt; sc.usage = WGPUTextureUsage_RenderAttachment;
    sc.width = (u32)w; sc.height = (u32)h;
    sc.alphaMode = caps.alphaModeCount ? caps.alphaModes[0] : WGPUCompositeAlphaMode_Auto;
    // VSync (login screen option, CK_VSYNC): on = Fifo; off = Mailbox, else Immediate, else Fifo (always supported)
    sc.presentMode = WGPUPresentMode_Fifo;
    const char *vs = getenv("CK_VSYNC");
    if (vs && vs[0] == '0') {
        int mb = 0, im = 0;
        for (size_t i = 0; i < caps.presentModeCount; i++) {
            if (caps.presentModes[i] == WGPUPresentMode_Mailbox) mb = 1;
            if (caps.presentModes[i] == WGPUPresentMode_Immediate) im = 1;
        }
        sc.presentMode = mb ? WGPUPresentMode_Mailbox : im ? WGPUPresentMode_Immediate : WGPUPresentMode_Fifo;
    }
    static int logged;
    if (!logged++) rt_log("gpu_wgpu: present mode %d (vsync %s)\n", (int)sc.presentMode, vs && vs[0] == '0' ? "off" : "on");
    wgpuSurfaceConfigure(g_surf, &sc);
    wgpuSurfaceCapabilitiesFreeMembers(caps);
}
static void blit_pipeline(void) {
    g_blit_shader = shader(BLIT_WGSL);
    WGPUColorTargetState ct = WGPU_COLOR_TARGET_STATE_INIT;
    ct.format = g_surf_fmt; ct.writeMask = WGPUColorWriteMask_All;
    WGPUFragmentState fs = WGPU_FRAGMENT_STATE_INIT;
    fs.module = g_blit_shader; fs.entryPoint = SV("fs"); fs.targetCount = 1; fs.targets = &ct;
    // gamma from the game's settings file (offset 0x1c, float, 0.5..3.0, 1 = neutral; higher = brighter)
    float gamma = 1.0f;
    {
        char p[600]; snprintf(p, sizeof p, "%s/UserSetting.bin", g_game_dir);
        FILE *f = fopen(p, "rb");
        if (f) { if (fseek(f, 0x1c, SEEK_SET) == 0 && fread(&gamma, 4, 1, f) == 1 && !(gamma >= 0.5f && gamma <= 3.0f)) gamma = 1.0f; fclose(f); }
    }
    WGPUConstantEntry ce = WGPU_CONSTANT_ENTRY_INIT;
    ce.key = SV("GAMMA"); ce.value = 1.0 / gamma;
    fs.constantCount = 1; fs.constants = &ce;
    rt_log("gpu_wgpu: gamma %.2f\n", gamma);
    WGPURenderPipelineDescriptor d = WGPU_RENDER_PIPELINE_DESCRIPTOR_INIT;
    d.layout = g_pl_blit;
    d.vertex.module = g_blit_shader; d.vertex.entryPoint = SV("vs");
    d.primitive.topology = WGPUPrimitiveTopology_TriangleStrip;
    d.fragment = &fs;
    g_blit_pipe = wgpuDeviceCreateRenderPipeline(g_dev, &d);
    // scene -> back buffer (RGBA8): opaque copy, and "over" for 3D drawn after the HUD
    WGPUColorTargetState cc = WGPU_COLOR_TARGET_STATE_INIT;
    cc.format = WGPUTextureFormat_RGBA8Unorm; cc.writeMask = WGPUColorWriteMask_All;
    WGPUFragmentState cf = WGPU_FRAGMENT_STATE_INIT;
    cf.module = g_blit_shader; cf.entryPoint = SV("fs_copy"); cf.targetCount = 1; cf.targets = &cc;
    d.fragment = &cf;
    g_comp_opaque = wgpuDeviceCreateRenderPipeline(g_dev, &d);
    WGPUBlendState over;
    over.color = (WGPUBlendComponent){WGPUBlendOperation_Add, WGPUBlendFactor_SrcAlpha, WGPUBlendFactor_OneMinusSrcAlpha};
    over.alpha = (WGPUBlendComponent){WGPUBlendOperation_Add, WGPUBlendFactor_One, WGPUBlendFactor_OneMinusSrcAlpha};
    cc.blend = &over;
    g_comp_over = wgpuDeviceCreateRenderPipeline(g_dev, &d);
    WGPUSamplerDescriptor sd = WGPU_SAMPLER_DESCRIPTOR_INIT;
    sd.magFilter = WGPUFilterMode_Linear; sd.minFilter = WGPUFilterMode_Linear;
    g_blit_samp = wgpuDeviceCreateSampler(g_dev, &sd);
}

void gpu_init(void *native_window, int width, int height) {
    g_gw = width; g_bw = wide_width(width, height); g_bh = height; g_ox = (g_bw - g_gw) / 2;
    g_inst = wgpuCreateInstance(0);
    WGPUSurfaceDescriptor sd = WGPU_SURFACE_DESCRIPTOR_INIT;
#ifdef __ANDROID__
    WGPUSurfaceSourceAndroidNativeWindow src = WGPU_SURFACE_SOURCE_ANDROID_NATIVE_WINDOW_INIT;
    src.window = native_window;
#elif defined(__APPLE__)
    WGPUSurfaceSourceMetalLayer src = WGPU_SURFACE_SOURCE_METAL_LAYER_INIT;    // ios/plat_ios.m: the view's CAMetalLayer
    src.layer = native_window;
#else
    WGPUSurfaceSourceWindowsHWND src = WGPU_SURFACE_SOURCE_WINDOWS_HWND_INIT;
    src.hwnd = native_window;
#endif
    sd.nextInChain = &src.chain;
    g_surf = wgpuInstanceCreateSurface(g_inst, &sd);
    g_surf_win = native_window;
    WGPURequestAdapterOptions ao = WGPU_REQUEST_ADAPTER_OPTIONS_INIT;
    ao.compatibleSurface = g_surf; ao.powerPreference = WGPUPowerPreference_HighPerformance;
    WGPURequestAdapterCallbackInfo ac = WGPU_REQUEST_ADAPTER_CALLBACK_INFO_INIT;
    ac.mode = WGPUCallbackMode_AllowProcessEvents; ac.callback = on_adapter; ac.userdata1 = &g_adapter;
    wgpuInstanceRequestAdapter(g_inst, &ao, ac);
    for (int i = 0; i < 1000 && !g_adapter; i++) wgpuInstanceProcessEvents(g_inst);
    if (!g_adapter) rt_fatal("no WebGPU adapter");
    {
        WGPUAdapterInfo ai = WGPU_ADAPTER_INFO_INIT;
        if (wgpuAdapterGetInfo(g_adapter, &ai) == WGPUStatus_Success) {
            rt_log("gpu_wgpu: adapter %.*s, backend %s\n", (int)ai.device.length, ai.device.data ? ai.device.data : "",
                   ai.backendType == WGPUBackendType_Vulkan ? "Vulkan" : ai.backendType == WGPUBackendType_OpenGLES ? "OpenGL ES" : "other");
            wgpuAdapterInfoFreeMembers(ai);
        }
    }
    WGPUDeviceDescriptor dd = WGPU_DEVICE_DESCRIPTOR_INIT;
    dd.uncapturedErrorCallbackInfo.callback = on_error;
    WGPURequestDeviceCallbackInfo dc = WGPU_REQUEST_DEVICE_CALLBACK_INFO_INIT;
    dc.mode = WGPUCallbackMode_AllowProcessEvents; dc.callback = on_device; dc.userdata1 = &g_dev;
    wgpuAdapterRequestDevice(g_adapter, &dd, dc);
    for (int i = 0; i < 1000 && !g_dev; i++) wgpuInstanceProcessEvents(g_inst);
    if (!g_dev) rt_fatal("no WebGPU device");
    g_q = wgpuDeviceGetQueue(g_dev);
    configure_surface();
    layouts();
    g_shader = shader(WGSL);
    blit_pipeline();
    WGPUBufferDescriptor bd = WGPU_BUFFER_DESCRIPTOR_INIT;
    bd.usage = WGPUBufferUsage_Vertex | WGPUBufferUsage_CopyDst; bd.size = VB_SIZE; g_vb = wgpuDeviceCreateBuffer(g_dev, &bd);
    bd.usage = WGPUBufferUsage_Index | WGPUBufferUsage_CopyDst; bd.size = IB_SIZE; g_ib = wgpuDeviceCreateBuffer(g_dev, &bd);
    bd.usage = WGPUBufferUsage_Uniform | WGPUBufferUsage_CopyDst; bd.size = UB_SIZE; g_ub = wgpuDeviceCreateBuffer(g_dev, &bd);
    g_vstage = malloc(VB_SIZE); g_istage = malloc(IB_SIZE); g_ustage = malloc(UB_SIZE);
    { const char *e = getenv("CK_SCALE"); int pc = e ? atoi(e) : 100; g_rs = pc >= 50 && pc < 100 ? pc / 100.0f : 1; }
    g_bb = tex_new(g_bw, g_bh, 1, 1, 0);
    g_white = tex_new(1, 1, 1, 0, 0);
    u32 wpx = 0xffffffffu;
    gpu_tex_upload(g_white, 0, 0, 0, 1, 1, &wpx, 1);
    g_target = 0;
    rt_log("gpu_wgpu: device ready, back buffer %dx%d (game %d wide at x %d), race 3D at %dx%d (render quality %.0f%%), surface format %d\n",
           g_bw, g_bh, g_gw, g_ox, bb_w(), bb_h(), g_rs * 100, (int)g_surf_fmt);
    void *pipe_warm_entry(void *);
    pthread_t wt;
    pthread_attr_t wa;
    pthread_attr_init(&wa);
    pthread_attr_setstacksize(&wa, 16u << 20);      // the full shader's compile overflowed iOS's 512 KB default (app closed at start)
    if (!pthread_create(&wt, &wa, pipe_warm_entry, 0)) pthread_detach(wt);
    pthread_attr_destroy(&wa);
}
void gpu_resize(int w, int h) {
    if (w == g_gw && h == g_bh) return;
    g_gw = w; g_bw = wide_width(w, h); g_bh = h; g_ox = (g_bw - g_gw) / 2;
    g_bb = tex_new(g_bw, g_bh, 1, 1, 0);    // old one leaks: rare (device reset)
}
void gpu_backbuffer_size(int *w, int *h) { *w = g_gw; *h = g_bh; }      // the game's size (touch layout, HUD)

// ---- textures ------------------------------------------------------------------------------------
static void flush(void);
GpuTex *gpu_tex_create(const GTexDesc *d) {
    int levels = d->levels & 0xff;
    if (d->levels & 0x100) {                     // cube maps: not supported yet, give a plain 2D texture
        GpuTex *t = tex_new(d->w, d->h, 1, 0, 0);
        t->cube = 1;
        return t;
    }
    return tex_new(d->w, d->h, d->rt ? 1 : levels, d->rt, d->depth);
}
void gpu_tex_upload(GpuTex *t, int level, int x, int y, int w, int h, const u32 *rgba, int pitch_px) {
    if (!t || t->depth) return;
    int face = level >> 4; level &= 15;
    if (t->cube && (face || level)) return;
    if (level >= t->levels) return;
    if (t->used_batch == g_batch) flush();       // draws recorded with the old contents go first
    WGPUTexelCopyTextureInfo dst = WGPU_TEXEL_COPY_TEXTURE_INFO_INIT;
    dst.texture = t->tex; dst.mipLevel = (u32)level; dst.origin = (WGPUOrigin3D){(u32)x, (u32)y, 0};
    WGPUTexelCopyBufferLayout lay = WGPU_TEXEL_COPY_BUFFER_LAYOUT_INIT;
    lay.bytesPerRow = (u32)pitch_px * 4; lay.rowsPerImage = (u32)h;
    WGPUExtent3D sz = {(u32)w, (u32)h, 1};
    wgpuQueueWriteTexture(g_q, &dst, rgba, (size_t)pitch_px * 4 * (size_t)h, &lay, &sz);
}
void gpu_tex_forget_bindings(GpuTex *t);
void gpu_tex_destroy(GpuTex *t) {
    if (!t) return;
    if (t->used_batch == g_batch) flush();
    gpu_tex_forget_bindings(t);         // a new texture at the same address must not hit this one's cached bind group
    wgpuTextureViewRelease(t->view);
    wgpuTextureDestroy(t->tex);
    wgpuTextureRelease(t->tex);
    free(t);
}

// ---- passes -----------------------------------------------------------------------------------------
static void end_pass(void) {
    if (g_pass) { wgpuRenderPassEncoderEnd(g_pass); wgpuRenderPassEncoderRelease(g_pass); g_pass = 0; }
}
static void begin_scene_pass(void) {
    if (!g_scene || g_scene->w != bb_w() || g_scene->h != bb_h()) {
        g_scene = tex_new(bb_w(), bb_h(), 1, 1, 0);       // old ones leak: only when the size changes (rare)
        g_scene_depth = tex_new(bb_w(), bb_h(), 1, 0, 1);
        g_scene_clear = 3;
    }
    if (!g_enc) g_enc = wgpuDeviceCreateCommandEncoder(g_dev, 0);
    WGPURenderPassColorAttachment ca = WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT;
    ca.view = g_scene->view; ca.storeOp = WGPUStoreOp_Store;
    ca.loadOp = (g_scene_clear & 1) ? WGPULoadOp_Clear : WGPULoadOp_Load;
    u32 cc = g_scene_clear_color;
    ca.clearValue = (WGPUColor){((cc >> 16) & 255) / 255.0, ((cc >> 8) & 255) / 255.0, (cc & 255) / 255.0, (cc >> 24) / 255.0};
    WGPURenderPassDepthStencilAttachment da = WGPU_RENDER_PASS_DEPTH_STENCIL_ATTACHMENT_INIT;
    da.view = g_scene_depth->view;
    da.depthLoadOp = (g_scene_clear & 2) ? WGPULoadOp_Clear : WGPULoadOp_Load;
    da.depthStoreOp = WGPUStoreOp_Store; da.depthClearValue = g_scene_z;
    WGPURenderPassDescriptor pd = WGPU_RENDER_PASS_DESCRIPTOR_INIT;
    pd.colorAttachmentCount = 1; pd.colorAttachments = &ca; pd.depthStencilAttachment = &da;
    g_scene_clear = 0;
    g_perf.passes++;
    g_pass = wgpuCommandEncoderBeginRenderPass(g_enc, &pd);
    g_pass_target = g_scene; g_pass_depth = g_scene_depth;
}
// the scene so far onto the back buffer, scaled up (then the scene starts empty, its depth kept for later 3D)
static void scene_resolve(void) {
    end_pass();
    if (!g_enc) g_enc = wgpuDeviceCreateCommandEncoder(g_dev, 0);
    WGPURenderPassColorAttachment ca = WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT;
    ca.view = g_bb->view; ca.loadOp = WGPULoadOp_Load; ca.storeOp = WGPUStoreOp_Store;
    WGPURenderPassDescriptor pd = WGPU_RENDER_PASS_DESCRIPTOR_INIT;
    pd.colorAttachmentCount = 1; pd.colorAttachments = &ca;
    WGPURenderPassEncoder p = wgpuCommandEncoderBeginRenderPass(g_enc, &pd);
    static WGPUBindGroup bg; static GpuTex *bgtex;
    if (bgtex != g_scene) {
        WGPUBindGroupEntry e[2];
        e[0] = (WGPUBindGroupEntry)WGPU_BIND_GROUP_ENTRY_INIT; e[0].binding = 0; e[0].textureView = g_scene->view;
        e[1] = (WGPUBindGroupEntry)WGPU_BIND_GROUP_ENTRY_INIT; e[1].binding = 1; e[1].sampler = g_blit_samp;
        WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
        d.layout = g_bgl_blit; d.entryCount = 2; d.entries = e;
        bg = wgpuDeviceCreateBindGroup(g_dev, &d);
        bgtex = g_scene;
    }
    wgpuRenderPassEncoderSetPipeline(p, g_scene_first ? g_comp_opaque : g_comp_over);
    wgpuRenderPassEncoderSetBindGroup(p, 0, bg, 0, 0);
    wgpuRenderPassEncoderSetViewport(p, 0, 0, (float)g_bb->w, (float)g_bb->h, 0, 1);
    wgpuRenderPassEncoderDraw(p, 4, 1, 0, 0);
    wgpuRenderPassEncoderEnd(p);
    wgpuRenderPassEncoderRelease(p);
    g_perf.passes++;
    g_scene_pending = 0; g_scene_first = 0;
    g_scene_clear = 1; g_scene_clear_color = 0;            // transparent: only what is drawn later goes over the HUD
}
static void begin_pass(void) {
    if (g_in_scene && !g_target) { begin_scene_pass(); return; }
    GpuTex *ct = g_target ? g_target : g_bb;
    GpuTex *dt = g_target_depth;
    // the back buffer's depth: none set, or the game's own screen-sized depth surface (widescreen: the real back
    // buffer is wider, and a size mismatch below dropped depth testing -- the road vanished under the scenery)
    // (render quality: the back buffer is smaller than the game's depth surface too)
    if (!g_target && (!dt || dt->w != ct->w || dt->h != ct->h)) {
        if (!g_bbdepth || g_bbdepth->w != ct->w || g_bbdepth->h != ct->h) g_bbdepth = tex_new(ct->w, ct->h, 1, 0, 1);
        dt = g_bbdepth;
    }
    if (dt && (dt->w != ct->w || dt->h != ct->h)) dt = 0;
    if (!g_enc) g_enc = wgpuDeviceCreateCommandEncoder(g_dev, 0);
    WGPURenderPassColorAttachment ca = WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT;
    ca.view = ct->view; ca.storeOp = WGPUStoreOp_Store;
    ca.loadOp = (g_pending_clear && (g_clear_flags & 1)) ? WGPULoadOp_Clear : WGPULoadOp_Load;
    u32 cc = g_clear_color;
    ca.clearValue = (WGPUColor){((cc >> 16) & 255) / 255.0, ((cc >> 8) & 255) / 255.0, (cc & 255) / 255.0, (cc >> 24) / 255.0};
    WGPURenderPassDepthStencilAttachment da = WGPU_RENDER_PASS_DEPTH_STENCIL_ATTACHMENT_INIT;
    WGPURenderPassDescriptor pd = WGPU_RENDER_PASS_DESCRIPTOR_INIT;
    pd.colorAttachmentCount = 1; pd.colorAttachments = &ca;
    if (dt) {
        da.view = dt->view;
        da.depthLoadOp = (g_pending_clear && (g_clear_flags & 2)) ? WGPULoadOp_Clear : WGPULoadOp_Load;
        da.depthStoreOp = WGPUStoreOp_Store; da.depthClearValue = g_clear_z;
        pd.depthStencilAttachment = &da;
    }
    g_pending_clear = 0;
    g_perf.passes++;
    g_pass = wgpuCommandEncoderBeginRenderPass(g_enc, &pd);
    g_pass_target = ct; g_pass_depth = dt;
}
void gpu_set_target(GpuTex *color, GpuTex *depth) {
    if (color == g_target && depth == g_target_depth) return;
    end_pass();
    g_target = color; g_target_depth = depth;
}
void gpu_clear(u32 flags, u32 argb, float z, u32 stencil, const int *rects, int nrects) {
    (void)stencil; (void)rects; (void)nrects;     // rect clears are treated as full clears
    end_pass();
    if (!g_target) {                              // a new frame on the back buffer: the scene starts over with it
        g_scene_clear = flags & 3; g_scene_clear_color = argb; g_scene_z = z;
        g_scene_pending = 0; g_scene_first = 1; g_in_scene = 0;
    }
    g_pending_clear = 1; g_clear_flags = flags; g_clear_color = argb; g_clear_z = z;
    begin_pass();
}
static void flush(void) {
    end_pass();
    if (g_voff) wgpuQueueWriteBuffer(g_q, g_vb, 0, g_vstage, g_voff);
    if (g_ioff) wgpuQueueWriteBuffer(g_q, g_ib, 0, g_istage, g_ioff);
    if (g_uoff) wgpuQueueWriteBuffer(g_q, g_ub, 0, g_ustage, g_uoff);
    if (g_enc) {
        WGPUCommandBuffer cb = wgpuCommandEncoderFinish(g_enc, 0);
        wgpuQueueSubmit(g_q, 1, &cb);
        wgpuCommandBufferRelease(cb);
        wgpuCommandEncoderRelease(g_enc);
        g_enc = 0;
    }
    g_voff = g_ioff = g_uoff = 0;
    g_batch++;
}

// ---- pipelines / samplers / bind groups ------------------------------------------------------------------
typedef struct { u32 key[4]; WGPURenderPipeline p; } PipeEnt;
static PipeEnt g_pipes[1024]; static int g_npipes;
// Pipelines cost ~0.6 s each on Mali (the driver compiles the ubershader per pipeline): a power-up's first blend
// state froze the race. Every key built is saved to <game>/pipelines.bin and rebuilt on a thread at the next start.
static pthread_mutex_t g_pipemu = PTHREAD_MUTEX_INITIALIZER;
static WGPURenderPipeline pipe_find(u32 k0, u32 k1) {
    WGPURenderPipeline p = 0;
    pthread_mutex_lock(&g_pipemu);
    for (int i = 0; i < g_npipes; i++) if (g_pipes[i].key[0] == k0 && g_pipes[i].key[1] == k1) { p = g_pipes[i].p; break; }
    pthread_mutex_unlock(&g_pipemu);
    return p;
}
static void pipe_cache_path(char *out, size_t n) { snprintf(out, n, "%s/pipelines.bin", g_game_dir[0] ? g_game_dir : "."); }
static WGPUBlendFactor bf(u32 b) {
    switch (b) {
    case 1: return WGPUBlendFactor_Zero; case 2: return WGPUBlendFactor_One; case 3: return WGPUBlendFactor_Src;
    case 4: return WGPUBlendFactor_OneMinusSrc; case 5: return WGPUBlendFactor_SrcAlpha; case 6: return WGPUBlendFactor_OneMinusSrcAlpha;
    case 7: return WGPUBlendFactor_DstAlpha; case 8: return WGPUBlendFactor_OneMinusDstAlpha; case 9: return WGPUBlendFactor_Dst;
    case 10: return WGPUBlendFactor_OneMinusDst; case 11: return WGPUBlendFactor_SrcAlphaSaturated; case 14: return WGPUBlendFactor_Constant;
    case 15: return WGPUBlendFactor_OneMinusConstant; default: return WGPUBlendFactor_One;
    }
}
static WGPUBlendOperation bop(u32 o) {
    switch (o) { case 2: return WGPUBlendOperation_Subtract; case 3: return WGPUBlendOperation_ReverseSubtract; case 4: return WGPUBlendOperation_Min;
                 case 5: return WGPUBlendOperation_Max; default: return WGPUBlendOperation_Add; }
}
static WGPUCompareFunction cmpf(u32 f) {
    switch (f) { case 1: return WGPUCompareFunction_Never; case 2: return WGPUCompareFunction_Less; case 3: return WGPUCompareFunction_Equal;
                 case 4: return WGPUCompareFunction_LessEqual; case 5: return WGPUCompareFunction_Greater; case 6: return WGPUCompareFunction_NotEqual;
                 case 7: return WGPUCompareFunction_GreaterEqual; default: return WGPUCompareFunction_Always; }
}
static void pipe_keys(const GState *s, WGPUPrimitiveTopology topo, int has_depth, u32 *k0, u32 *k1, u32 *src_out, u32 *dst_out) {
    u32 src = s->src_blend, dst = s->dst_blend;
    if (src == 12) { src = 5; dst = 6; } else if (src == 13) { src = 6; dst = 5; }    // BOTHSRCALPHA / BOTHINVSRCALPHA
    // only what the pipeline uses: blend factors without blending, separate alpha when off and depth details with
    // depth off made distinct keys (= pipelines) for the same pipeline
    int ab = s->alpha_blend != 0, sep = ab && s->sep_alpha, z = s->zenable != 0;
    *k0 = (u32)topo | (ab ? 8u : 0) | ((ab ? src : 0) << 4) | ((ab ? dst : 0) << 9) | ((ab ? s->blend_op : 0) << 14) | (s->cull << 17) |
          ((s->color_write & 15) << 20) | (has_depth ? 1u << 24 : 0) | (g_fs_fast > 0 ? 1u << 25 : 0);
    *k1 = (z ? 1u : 0) | (z && s->zwrite ? 2u : 0) | ((z ? s->zfunc : 0) << 2) | (sep ? 64u : 0) | ((sep ? s->src_blend_a : 0) << 7) |
          ((sep ? s->dst_blend_a : 0) << 12) | ((sep ? s->blend_op_a : 0) << 17);
    *src_out = src; *dst_out = dst;
}
// the state a key stands for (inverse of pipe_keys; every field the descriptor reads is in the key)
static void pipe_state(u32 k0, u32 k1, GState *s, WGPUPrimitiveTopology *topo, int *has_depth) {
    memset(s, 0, sizeof *s);
    *topo = (WGPUPrimitiveTopology)(k0 & 7); s->alpha_blend = (k0 >> 3) & 1; s->src_blend = (k0 >> 4) & 31; s->dst_blend = (k0 >> 9) & 31;
    s->blend_op = (k0 >> 14) & 7; s->cull = (k0 >> 17) & 7; s->color_write = (k0 >> 20) & 15; *has_depth = (k0 >> 24) & 1;
    s->zenable = k1 & 1; s->zwrite = (k1 >> 1) & 1; s->zfunc = (k1 >> 2) & 15; s->sep_alpha = (k1 >> 6) & 1;
    s->src_blend_a = (k1 >> 7) & 31; s->dst_blend_a = (k1 >> 12) & 31; s->blend_op_a = (k1 >> 17) & 7;
}
static WGPURenderPipeline pipe_create(const GState *s, WGPUPrimitiveTopology topo, int has_depth);
static void pipe_add(u32 k0, u32 k1, WGPURenderPipeline p, int save) {
    pthread_mutex_lock(&g_pipemu);
    int have = 0;
    for (int i = 0; i < g_npipes; i++) if (g_pipes[i].key[0] == k0 && g_pipes[i].key[1] == k1) have = 1;
    if (!have && g_npipes < 1024) { g_pipes[g_npipes].key[0] = k0; g_pipes[g_npipes].key[1] = k1; g_pipes[g_npipes].p = p; g_npipes++; }
    pthread_mutex_unlock(&g_pipemu);
    if (have) { wgpuRenderPipelineRelease(p); return; }
    if (save) {
        char path[600]; pipe_cache_path(path, sizeof path);
        FILE *f = fopen(path, "ab");
        if (f) { u32 k[2] = {k0, k1}; fwrite(k, 4, 2, f); fclose(f); }
    }
}
// Two lists: the one shipped in the APK (<image dir>/pipelines_seed.bin: what lobby, rooms and races with items need --
// a fresh install had none and every first power-up stuttered, 5 Nov 2026), then this install's <game>/pipelines.bin.
extern char g_image_dir[512];
static int pipe_warm_file(const char *path) {
    FILE *f = fopen(path, "rb");
    if (!f) return 0;
    u32 k[2]; int n = 0;
    while (fread(k, 4, 2, f) == 2) {
        GState s; WGPUPrimitiveTopology topo; int hd;
        pipe_state(k[0], k[1], &s, &topo, &hd);
        // a key from an older format can decode to nonsense (topology 6 made wgpu panic and closed the game, 5 Nov 2026)
        if (topo < WGPUPrimitiveTopology_PointList || topo > WGPUPrimitiveTopology_TriangleStrip || s.src_blend > 17 || s.dst_blend > 17
            || s.blend_op > 5 || s.cull > 3 || s.zfunc > 8 || s.src_blend_a > 17 || s.dst_blend_a > 17 || s.blend_op_a > 5) continue;
        if (topo == WGPUPrimitiveTopology_TriangleStrip) topo = WGPUPrimitiveTopology_TriangleList;   // older files: strips are lists now
        u32 k0, k1, sr, ds;
        pipe_keys(&s, topo, hd, &k0, &k1, &sr, &ds);       // older files: normalise to today's key
        if (pipe_find(k0, k1)) continue;
        pipe_add(k0, k1, pipe_create(&s, topo, hd), 0);
        n++;
    }
    fclose(f);
    return n;
}
static void *pipe_warm(void *arg) {
    (void)arg;
    u64 t0 = us_now();
    char path[600];
    snprintf(path, sizeof path, "%s/pipelines_seed.bin", g_image_dir);
    int seed = pipe_warm_file(path);
    pipe_cache_path(path, sizeof path);
    int own = pipe_warm_file(path);
    rt_log("gpu: %d shipped + %d saved pipelines built in %u ms\n", seed, own, (u32)((us_now() - t0) / 1000));
    return 0;
}
void *pipe_warm_entry(void *a) { return pipe_warm(a); }
static WGPURenderPipeline pipeline(const GState *s, WGPUPrimitiveTopology topo, int has_depth) {
    u32 k0, k1, src, dst;
    pipe_keys(s, topo, has_depth, &k0, &k1, &src, &dst);
    WGPURenderPipeline p = pipe_find(k0, k1);
    if (p) return p;
    u64 t0 = us_now();
    p = pipe_create(s, topo, has_depth);
    g_perf.pipes++; g_perf.pipe_us += us_now() - t0;
    pipe_add(k0, k1, p, g_fs_fast <= 0);          // test-shader pipelines are not saved
    return pipe_find(k0, k1);
}
static WGPURenderPipeline pipe_create(const GState *s, WGPUPrimitiveTopology topo, int has_depth) {
    u32 k0, k1, src, dst;
    pipe_keys(s, topo, has_depth, &k0, &k1, &src, &dst);
    WGPUVertexAttribute at[8] = {
        {0, WGPUVertexFormat_Float32x4, 0, 0}, {0, WGPUVertexFormat_Float32x3, 16, 1}, {0, WGPUVertexFormat_Unorm8x4, 28, 2},
        {0, WGPUVertexFormat_Unorm8x4, 32, 3}, {0, WGPUVertexFormat_Float32x2, 36, 4}, {0, WGPUVertexFormat_Float32x2, 44, 5},
        {0, WGPUVertexFormat_Float32x2, 52, 6}, {0, WGPUVertexFormat_Float32x2, 60, 7}};
    WGPUVertexBufferLayout vl = WGPU_VERTEX_BUFFER_LAYOUT_INIT;
    vl.arrayStride = sizeof(GVert); vl.stepMode = WGPUVertexStepMode_Vertex; vl.attributeCount = 8; vl.attributes = at;
    WGPUBlendState bs;
    bs.color = (WGPUBlendComponent){bop(s->blend_op), bf(src), bf(dst)};
    bs.alpha = s->sep_alpha ? (WGPUBlendComponent){bop(s->blend_op_a), bf(s->src_blend_a), bf(s->dst_blend_a)} : bs.color;
    // D3D9 ignores the factors of MIN / MAX blending; WebGPU requires them to be One (else a validation error)
    if (bs.color.operation == WGPUBlendOperation_Min || bs.color.operation == WGPUBlendOperation_Max)
        bs.color.srcFactor = bs.color.dstFactor = WGPUBlendFactor_One;
    if (bs.alpha.operation == WGPUBlendOperation_Min || bs.alpha.operation == WGPUBlendOperation_Max)
        bs.alpha.srcFactor = bs.alpha.dstFactor = WGPUBlendFactor_One;
    // colour factors are not valid for the alpha channel in WebGPU's sense; map them to their alpha equivalents
    if (bs.alpha.srcFactor == WGPUBlendFactor_Src) bs.alpha.srcFactor = WGPUBlendFactor_SrcAlpha;
    if (bs.alpha.srcFactor == WGPUBlendFactor_OneMinusSrc) bs.alpha.srcFactor = WGPUBlendFactor_OneMinusSrcAlpha;
    if (bs.alpha.dstFactor == WGPUBlendFactor_Dst) bs.alpha.dstFactor = WGPUBlendFactor_DstAlpha;
    if (bs.alpha.dstFactor == WGPUBlendFactor_OneMinusDst) bs.alpha.dstFactor = WGPUBlendFactor_OneMinusDstAlpha;
    WGPUColorTargetState ct = WGPU_COLOR_TARGET_STATE_INIT;
    ct.format = WGPUTextureFormat_RGBA8Unorm;
    ct.blend = s->alpha_blend ? &bs : 0;
    ct.writeMask = s->color_write & 15;
    WGPUFragmentState fs = WGPU_FRAGMENT_STATE_INIT;
    // g_fs_fast -1 = not checked yet: the warm thread builds before the 1st present, and must get the real shader
    fs.module = g_shader; fs.entryPoint = g_fs_fast > 0 ? SV("fs_fast") : SV("fs"); fs.targetCount = 1; fs.targets = &ct;
    WGPUDepthStencilState ds = WGPU_DEPTH_STENCIL_STATE_INIT;
    ds.format = WGPUTextureFormat_Depth24Plus;
    ds.depthWriteEnabled = (s->zenable && s->zwrite) ? WGPUOptionalBool_True : WGPUOptionalBool_False;
    ds.depthCompare = s->zenable ? cmpf(s->zfunc) : WGPUCompareFunction_Always;
    WGPURenderPipelineDescriptor d = WGPU_RENDER_PIPELINE_DESCRIPTOR_INIT;
    d.layout = g_pl;
    d.vertex.module = g_shader; d.vertex.entryPoint = SV("vs"); d.vertex.bufferCount = 1; d.vertex.buffers = &vl;
    d.primitive.topology = topo;
    if (topo == WGPUPrimitiveTopology_TriangleStrip || topo == WGPUPrimitiveTopology_LineStrip) d.primitive.stripIndexFormat = WGPUIndexFormat_Uint32;
    d.primitive.frontFace = WGPUFrontFace_CW;
    d.primitive.cullMode = s->cull == 3 ? WGPUCullMode_Back : s->cull == 2 ? WGPUCullMode_Front : WGPUCullMode_None;
    d.depthStencil = has_depth ? &ds : 0;
    d.fragment = &fs;
    return wgpuDeviceCreateRenderPipeline(g_dev, &d);
}
typedef struct { u32 key; WGPUSampler s; } SampEnt;
static SampEnt g_samps[256]; static int g_nsamps;
static WGPUAddressMode am(u32 a) { return a == 3 ? WGPUAddressMode_ClampToEdge : a == 2 ? WGPUAddressMode_MirrorRepeat : a == 4 || a == 5 ? WGPUAddressMode_ClampToEdge : WGPUAddressMode_Repeat; }
static WGPUSampler sampler(const GSampler *s) {
    u32 key = s->addru | (s->addrv << 4) | (s->magf << 8) | (s->minf << 12) | (s->mipf << 16);
    for (int i = 0; i < g_nsamps; i++) if (g_samps[i].key == key) return g_samps[i].s;
    WGPUSamplerDescriptor d = WGPU_SAMPLER_DESCRIPTOR_INIT;
    d.addressModeU = am(s->addru); d.addressModeV = am(s->addrv); d.addressModeW = WGPUAddressMode_Repeat;
    d.magFilter = s->magf >= 2 ? WGPUFilterMode_Linear : WGPUFilterMode_Nearest;
    d.minFilter = s->minf >= 2 ? WGPUFilterMode_Linear : WGPUFilterMode_Nearest;
    d.mipmapFilter = s->mipf == 2 ? WGPUMipmapFilterMode_Linear : WGPUMipmapFilterMode_Nearest;
    d.lodMaxClamp = s->mipf ? 32.f : 0.25f;
    WGPUSampler r = wgpuDeviceCreateSampler(g_dev, &d);
    if (g_nsamps < 256) { g_samps[g_nsamps].key = key; g_samps[g_nsamps].s = r; g_nsamps++; }
    return r;
}
#define NBG 4096
static struct { GpuTex *t0, *t1; WGPUSampler s0, s1; WGPUBindGroup bg; } g_bgs[NBG];
static WGPUBindGroup tex_group(GpuTex *t0, WGPUSampler s0, GpuTex *t1, WGPUSampler s1) {
    u32 h = (u32)(((uintptr_t)t0 >> 4) ^ ((uintptr_t)t1 >> 6) ^ ((uintptr_t)s0 >> 3) ^ ((uintptr_t)s1 >> 5)) % NBG;
    if (g_bgs[h].bg && g_bgs[h].t0 == t0 && g_bgs[h].t1 == t1 && g_bgs[h].s0 == s0 && g_bgs[h].s1 == s1) return g_bgs[h].bg;
    WGPUBindGroupEntry e[4];
    for (int i = 0; i < 4; i++) { e[i] = (WGPUBindGroupEntry)WGPU_BIND_GROUP_ENTRY_INIT; e[i].binding = (u32)i; }
    e[0].textureView = t0->view; e[1].sampler = s0; e[2].textureView = t1->view; e[3].sampler = s1;
    WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
    d.layout = g_bgl_t; d.entryCount = 4; d.entries = e;
    if (g_bgs[h].bg) wgpuBindGroupRelease(g_bgs[h].bg);
    g_bgs[h].bg = wgpuDeviceCreateBindGroup(g_dev, &d);
    g_bgs[h].t0 = t0; g_bgs[h].t1 = t1; g_bgs[h].s0 = s0; g_bgs[h].s1 = s1;
    return g_bgs[h].bg;
}
void gpu_tex_forget_bindings(GpuTex *t) {
    for (int i = 0; i < NBG; i++) if (g_bgs[i].bg && (g_bgs[i].t0 == t || g_bgs[i].t1 == t)) { wgpuBindGroupRelease(g_bgs[i].bg); g_bgs[i].bg = 0; }
}
static WGPUBindGroup g_ubg;

// ---- draw ----------------------------------------------------------------------------------------------
static void mat_mul(const float *a, const float *b, float *r) {      // row-vector convention: r = a * b
    float t[16];
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) { float s = 0; for (int k = 0; k < 4; k++) s += a[i * 4 + k] * b[k * 4 + j]; t[i * 4 + j] = s; }
    memcpy(r, t, 64);
}
static void put_mat(u8 *u, int off, const float *m) { memcpy(u + off, m, 64); }    // raw rows = WGSL columns: m * v == v * M
static void put4(u8 *u, int off, float a, float b, float c, float d) { float v[4] = {a, b, c, d}; memcpy(u + off, v, 16); }
static void put4u(u8 *u, int off, u32 a, u32 b, u32 c, u32 d) { u32 v[4] = {a, b, c, d}; memcpy(u + off, v, 16); }
static void col4(u8 *u, int off, u32 argb) { put4(u, off, ((argb >> 16) & 255) / 255.f, ((argb >> 8) & 255) / 255.f, (argb & 255) / 255.f, (argb >> 24) / 255.f); }

void gpu_draw(const GDraw *d) {
    g_perf.draws++;
    const GState *s = d->st;
    u32 nidx = d->nindices;
    u32 prim = d->prim;
    // triangle fans -> lists (WebGPU has no fans); strips -> lists too, so a state needs one pipeline, not two
    // (each costs ~0.6 s to build on Mali). Strip triangle i is (i, i+1, i+2), odd ones flipped, as D3D culls them.
    static u32 *fan; static u32 fancap;
    const u32 *idx = d->indices;
    if (prim == 6 || prim == 5) {
        u32 n = d->indices ? nidx : d->nverts;
        if (n < 3) return;
        u32 need = (n - 2) * 3;
        if (need > fancap) { fancap = need + 1024; fan = realloc(fan, fancap * 4); }
        for (u32 i = 0; i + 2 < n; i++) {
            u32 a = prim == 6 ? 0 : i, b = i + 1, c = i + 2;
            if (prim == 5 && (i & 1)) { u32 t = a; a = b; b = t; }
            fan[i * 3] = idx ? idx[a] : a; fan[i * 3 + 1] = idx ? idx[b] : b; fan[i * 3 + 2] = idx ? idx[c] : c;
        }
        idx = fan; nidx = need; prim = 4;
    }
    WGPUPrimitiveTopology topo = prim == 1 ? WGPUPrimitiveTopology_PointList : prim == 2 ? WGPUPrimitiveTopology_LineList :
                                 prim == 3 ? WGPUPrimitiveTopology_LineStrip : prim == 5 ? WGPUPrimitiveTopology_TriangleStrip :
                                 WGPUPrimitiveTopology_TriangleList;
    u32 vbytes = d->nverts * (u32)sizeof(GVert), ibytes = nidx * 4;
    if (g_voff + vbytes > VB_SIZE || g_ioff + ibytes + 4 > IB_SIZE || g_uoff + USTRIDE > UB_SIZE) flush();
    if (vbytes > VB_SIZE || ibytes > IB_SIZE) return;
    if (!g_target) {                              // back buffer draws: the race's 3D world -> the scene target
        int scene = d->lowres && g_rs < 1;
        if (scene != g_in_scene) {
            end_pass();
            if (g_in_scene && g_scene_pending) scene_resolve();
            g_in_scene = scene;
        }
        if (scene) g_scene_pending = 1;
    }
    if (!g_pass) begin_pass();
    // uniforms
    u8 *u = g_ustage + g_uoff;
    memset(u, 0, USTRIDE);
    float wv[16], wvp[16];
    mat_mul(s->world.m, s->view.m, wv);
    mat_mul(wv, s->proj.m, wvp);
    put_mat(u, 0, wvp); put_mat(u, 64, wv); put_mat(u, 128, s->texm[0].m); put_mat(u, 192, s->texm[1].m);
    GpuTex *ct = g_pass_target;
    float k = ct == g_scene ? g_rs : 1;      // render quality: game pixels -> scene pixels
    put4(u, 256, ct == g_scene ? (float)g_bw : (float)ct->w, ct == g_scene ? (float)g_bh : (float)ct->h, 0, 0);
    u32 fl = (d->pretransformed ? 1u : 0) | (s->lighting && d->has_normal ? 2u : 0) | (d->has_normal ? 4u : 0) | (d->has_diffuse ? 8u : 0) |
             (d->has_specular ? 16u : 0) | (s->specular_enable ? 32u : 0) | (s->normalize ? 64u : 0) | (s->localviewer ? 128u : 0) |
             (s->color_vertex ? 256u : 0) | (s->fog_enable ? 512u : 0) | (s->range_fog ? 1024u : 0);
    static int dbg = -1;
    if (dbg < 0) { const char *e = getenv("CK_GFXDEBUG"); dbg = e ? atoi(e) : 0; }
    if (dbg == 1) fl |= 1u << 20;      // debug: every drawn pixel magenta
    u32 fogmode = s->fog_table_mode ? (u32)s->fog_table_mode : (u32)s->fog_vertex_mode;
    u32 msrc = (s->diffuse_src & 3) | ((s->specular_src & 3) << 2) | ((s->ambient_src & 3) << 4) | ((s->emissive_src & 3) << 6);
    put4u(u, 272, fl, fogmode, msrc, (s->alpha_func & 255) | ((s->alpha_ref & 255) << 8) | (s->alpha_test ? 65536u : 0));
    memcpy(u + 288, s->mat_diffuse, 16); memcpy(u + 304, s->mat_ambient, 16); memcpy(u + 320, s->mat_specular, 16); memcpy(u + 336, s->mat_emissive, 16);
    col4(u, 352, s->ambient);
    put4(u, 368, s->fog_start, s->fog_end, s->fog_density, 0);
    col4(u, 384, s->fog_color);
    col4(u, 400, s->texture_factor);
    for (int st = 0; st < 2; st++) {
        const GStage *g = &s->stage[st];
        put4u(u, 416 + 16 * st, g->colorop, (g->colorarg1 & 255) | ((g->colorarg2 & 255) << 8) | ((g->colorarg0 & 255) << 16),
              g->alphaop, (g->alphaarg1 & 255) | ((g->alphaarg2 & 255) << 8) | ((g->alphaarg0 & 255) << 16));
    }
    put4u(u, 448, s->stage[0].texcoordindex, s->stage[1].texcoordindex, s->stage[0].ttflags, s->stage[1].ttflags);
    int nl = 0;
    if (fl & 2) {
        for (int i = 0; i < 8; i++) {
            const GLight *L = &s->lights[i];
            if (!L->enabled) continue;
            int o = 480 + 112 * nl;
            memcpy(u + o, L->diffuse, 16); memcpy(u + o + 16, L->specular, 16); memcpy(u + o + 32, L->ambient, 16);
            const float *v = s->view.m;      // to view space
            float p[3] = {L->pos[0] * v[0] + L->pos[1] * v[4] + L->pos[2] * v[8] + v[12], L->pos[0] * v[1] + L->pos[1] * v[5] + L->pos[2] * v[9] + v[13],
                          L->pos[0] * v[2] + L->pos[1] * v[6] + L->pos[2] * v[10] + v[14]};
            float dv[3] = {L->dir[0] * v[0] + L->dir[1] * v[4] + L->dir[2] * v[8], L->dir[0] * v[1] + L->dir[1] * v[5] + L->dir[2] * v[9],
                           L->dir[0] * v[2] + L->dir[1] * v[6] + L->dir[2] * v[10]};
            put4(u, o + 48, p[0], p[1], p[2], (float)L->type);
            put4(u, o + 64, dv[0], dv[1], dv[2], L->range > 0 ? L->range : 1e30f);
            put4(u, o + 80, L->att0, L->att1, L->att2, L->falloff);
            put4(u, o + 96, cosf(L->theta * 0.5f), cosf(L->phi * 0.5f), 0, 0);
            nl++;
        }
    }
    put4(u, 464, s->mat_power, (float)nl, 0, 0);
    u32 uoff = g_uoff;
    g_uoff += USTRIDE;
    // geometry
    memcpy(g_vstage + g_voff, d->verts, vbytes);
    u32 voff = g_voff;
    g_voff += vbytes;
    u32 ioff = g_ioff;
    if (idx) { memcpy(g_istage + g_ioff, idx, ibytes); g_ioff += ibytes; }
    // state
    if (!g_ubg) {
        WGPUBindGroupEntry e = WGPU_BIND_GROUP_ENTRY_INIT;
        e.binding = 0; e.buffer = g_ub; e.size = USTRIDE;
        WGPUBindGroupDescriptor bd = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
        bd.layout = g_bgl_u; bd.entryCount = 1; bd.entries = &e;
        g_ubg = wgpuDeviceCreateBindGroup(g_dev, &bd);
    }
    GpuTex *t0 = s->tex[0] && !s->tex[0]->depth ? s->tex[0] : g_white, *t1 = s->tex[1] && !s->tex[1]->depth ? s->tex[1] : g_white;
    if (t0 == ct) t0 = g_white;         // sampling the target being drawn to is invalid in WebGPU
    if (t1 == ct) t1 = g_white;
    t0->used_batch = g_batch; t1->used_batch = g_batch;
    WGPURenderPipeline p = pipeline(s, topo, g_pass_depth != 0);
    wgpuRenderPassEncoderSetPipeline(g_pass, p);
    wgpuRenderPassEncoderSetBindGroup(g_pass, 0, g_ubg, 1, &uoff);
    wgpuRenderPassEncoderSetBindGroup(g_pass, 1, tex_group(t0, sampler(&s->samp[0]), t1, sampler(&s->samp[1])), 0, 0);
    // viewport (clamped to the target)
    float vx = s->vp_x * k, vy = s->vp_y * k, vw = s->vp_w * k, vh = s->vp_h * k;
    if (vx + vw > ct->w) vw = ct->w - vx;
    if (vy + vh > ct->h) vh = ct->h - vy;
    if (vw < 1 || vh < 1) return;
    float z0 = s->vp_minz, z1 = s->vp_maxz;
    if (z1 < z0 || z1 > 1) { z0 = 0; z1 = 1; }
    if (d->pretransformed) wgpuRenderPassEncoderSetViewport(g_pass, 0, 0, (float)ct->w, (float)ct->h, 0, 1);
    else wgpuRenderPassEncoderSetViewport(g_pass, vx, vy, vw, vh, z0, z1);
    if (s->scissor_enable) {
        int x0 = (int)(s->scissor[0] * k), y0 = (int)(s->scissor[1] * k), x1 = (int)(s->scissor[2] * k + 0.999f), y1 = (int)(s->scissor[3] * k + 0.999f);
        if (x0 < 0) x0 = 0; if (y0 < 0) y0 = 0; if (x1 > ct->w) x1 = ct->w; if (y1 > ct->h) y1 = ct->h;
        if (x1 <= x0 || y1 <= y0) return;
        wgpuRenderPassEncoderSetScissorRect(g_pass, (u32)x0, (u32)y0, (u32)(x1 - x0), (u32)(y1 - y0));
    } else wgpuRenderPassEncoderSetScissorRect(g_pass, 0, 0, (u32)ct->w, (u32)ct->h);
    wgpuRenderPassEncoderSetBlendConstant(g_pass, &(WGPUColor){1, 1, 1, 1});   // D3DRS_BLENDFACTOR not tracked yet
    wgpuRenderPassEncoderSetVertexBuffer(g_pass, 0, g_vb, voff, vbytes);
    if (idx) {
        wgpuRenderPassEncoderSetIndexBuffer(g_pass, g_ib, WGPUIndexFormat_Uint32, ioff, ibytes);
        wgpuRenderPassEncoderDrawIndexed(g_pass, nidx, 1, 0, 0, 0);
    } else wgpuRenderPassEncoderDraw(g_pass, d->nverts, 1, 0, 0);
}

// The platform window can go away (app switched away / screen locked) and come back as a new window: the surface
// made for the old one then shows nothing (black screen after unlock). Follow the platform's current window.
void *plat_native_window(void);
void plat_window_released(void);
static WGPUSurface make_surface(void *native_window) {
    WGPUSurfaceDescriptor sd = WGPU_SURFACE_DESCRIPTOR_INIT;
#ifdef __ANDROID__
    WGPUSurfaceSourceAndroidNativeWindow src = WGPU_SURFACE_SOURCE_ANDROID_NATIVE_WINDOW_INIT;
    src.window = native_window;
#elif defined(__APPLE__)
    WGPUSurfaceSourceMetalLayer src = WGPU_SURFACE_SOURCE_METAL_LAYER_INIT;    // ios/plat_ios.m: the view's CAMetalLayer
    src.layer = native_window;
#else
    WGPUSurfaceSourceWindowsHWND src = WGPU_SURFACE_SOURCE_WINDOWS_HWND_INIT;
    src.hwnd = native_window;
#endif
    sd.nextInChain = &src.chain;
    return wgpuInstanceCreateSurface(g_inst, &sd);
}
static int follow_window(void) {
    void *w = plat_native_window();
    if (w == g_surf_win && g_surf) return 1;
    flush();
    if (g_surf) { wgpuSurfaceUnconfigure(g_surf); wgpuSurfaceRelease(g_surf); g_surf = 0; }
    g_surf_win = 0;
    if (!w) { plat_window_released(); return 0; }       // in the background: keep running, show nothing
    g_surf = make_surface(w);
    g_surf_win = w;
    configure_surface();
    rt_log("gpu_wgpu: new window surface\n");
    return 1;
}
void gpu_present(void) {
    static u32 nchk;
    if (nchk++ % 240 == 0) {        // GPU-cost test switch, checked live: <game>/gfxtest.txt = simple fragment shader
        char p[600]; snprintf(p, sizeof p, "%s/gfxtest.txt", g_game_dir);
        FILE *tf = fopen(p, "r");
        int on = tf != 0;
        if (tf) fclose(tf);
        if (on != g_fs_fast) { g_fs_fast = on; rt_log("gpu: GPU-cost test %s\n", on ? "ON (simple fragment shader)" : "off"); }
    }
    end_pass();
    if (g_scene_pending) scene_resolve();          // a frame that ended on 3D
    g_in_scene = 0;
    if (!follow_window()) return;
    // scale the game's back buffer onto the surface, keeping its aspect ratio
    WGPUSurfaceTexture st = WGPU_SURFACE_TEXTURE_INIT;
    wgpuSurfaceGetCurrentTexture(g_surf, &st);
    if (st.status != WGPUSurfaceGetCurrentTextureStatus_SuccessOptimal && st.status != WGPUSurfaceGetCurrentTextureStatus_SuccessSuboptimal) {
        flush();
        configure_surface();
        return;
    }
    WGPUTextureView sv = wgpuTextureCreateView(st.texture, 0);
    if (!g_enc) g_enc = wgpuDeviceCreateCommandEncoder(g_dev, 0);
    WGPURenderPassColorAttachment ca = WGPU_RENDER_PASS_COLOR_ATTACHMENT_INIT;
    ca.view = sv; ca.loadOp = WGPULoadOp_Clear; ca.storeOp = WGPUStoreOp_Store; ca.clearValue = (WGPUColor){0, 0, 0, 1};
    WGPURenderPassDescriptor pd = WGPU_RENDER_PASS_DESCRIPTOR_INIT;
    pd.colorAttachmentCount = 1; pd.colorAttachments = &ca;
    WGPURenderPassEncoder p = wgpuCommandEncoderBeginRenderPass(g_enc, &pd);
    static WGPUBindGroup bg; static GpuTex *bgtex;
    if (bgtex != g_bb) {
        WGPUBindGroupEntry e[2];
        e[0] = (WGPUBindGroupEntry)WGPU_BIND_GROUP_ENTRY_INIT; e[0].binding = 0; e[0].textureView = g_bb->view;
        e[1] = (WGPUBindGroupEntry)WGPU_BIND_GROUP_ENTRY_INIT; e[1].binding = 1; e[1].sampler = g_blit_samp;
        WGPUBindGroupDescriptor d = WGPU_BIND_GROUP_DESCRIPTOR_INIT;
        d.layout = g_bgl_blit; d.entryCount = 2; d.entries = e;
        bg = wgpuDeviceCreateBindGroup(g_dev, &d);
        bgtex = g_bb;
    }
    u32 sw = wgpuTextureGetWidth(st.texture), sh = wgpuTextureGetHeight(st.texture);
    float scale = fminf((float)sw / g_bw, (float)sh / g_bh);
    float w = g_bw * scale, h = g_bh * scale;
    wgpuRenderPassEncoderSetPipeline(p, g_blit_pipe);
    wgpuRenderPassEncoderSetBindGroup(p, 0, bg, 0, 0);
    wgpuRenderPassEncoderSetViewport(p, (sw - w) / 2, (sh - h) / 2, w, h, 0, 1);
    wgpuRenderPassEncoderDraw(p, 4, 1, 0, 0);
    wgpuRenderPassEncoderEnd(p);
    wgpuRenderPassEncoderRelease(p);
    flush();
    wgpuSurfacePresent(g_surf);
    wgpuTextureViewRelease(sv);
    wgpuTextureRelease(st.texture);
}
int gpu_read_target(GpuTex *t, u32 *o, int w, int h) { (void)t; (void)o; (void)w; (void)h; return 0; }
void gpu_screen_rect(float *x, float *y, float *w, float *h);   // for touch mapping (platform layer)
