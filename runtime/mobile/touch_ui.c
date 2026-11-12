// On-screen race controls: touch buttons that press the game's keyboard keys (UserSetting.bin defaults:
// Up throttle, Down reverse, Left / Right steer, Ctrl item, Space switch item, Shift drift).
// Shown while the game hides its cursor (it does for races: ShowCursor count < 0); drawn over the back buffer at Present.
#include "rt.h"
#include "gpu.h"
#include "text.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ui_key(int vk, int down);
void open_chat(void);
int user32_cursor_hidden(void);
int hud_touch_button(const char *name, float *cx, float *cy, float *r);
float hud_touch_opacity(void);

// icon: 0 the label in game-style italics, 1 left 2 right 3 up 4 down (arrows), 5 pause bars, 6 speech bubble, 7 swap arrows
typedef struct { const char *label; int vk; float fx, fy, fr; int icon; u32 top, bot; } Btn;   // top / bot: body gradient
// position in units of r from the bottom-left (x >= 0) or bottom-right (x < 0) corner
static const Btn g_btn[] = {
    {0, 0x25, 1.35f, 1.35f, 1.0f, 1, 0x2f6fd8, 0x0b2468},        // steer left
    {0, 0x27, 3.75f, 1.35f, 1.0f, 2, 0x2f6fd8, 0x0b2468},        // steer right
    {0, 0x26, -1.35f, 1.35f, 1.0f, 3, 0x3ccf52, 0x0c5a1c},       // throttle
    {0, 0x28, -3.6f, 1.15f, 0.75f, 4, 0xe2443f, 0x6a0c10},       // reverse / brake
    {"DRIFT", 0x10, -1.35f, 3.65f, 0.9f, 0, 0xffa51f, 0x8a4200},
    {"ITEM", 0x11, -3.55f, 3.2f, 0.8f, 0, 0x9a5cf0, 0x3a1470},
    {0, 0x20, -5.55f, 1.15f, 0.6f, 7, 0x27b8cf, 0x0a4656},       // switch item
    {0, 0x1b, 7.94f, 8.93f, 0.45f, 5, 0x2f6fd8, 0x0b2468},       // Escape: the in-race menu (top centre)
    {0, -1, 9.0f, 8.93f, 0.45f, 6, 0x2f6fd8, 0x0b2468},          // chat: Enter + the phone keyboard (art reused by hud.c: keep at 8)
    // "Mobile" touch controls only (launcher Settings > Touch controls, CK_TOUCH=mobile): two switches, tap = on / off
    {"AUTO GAS", -2, 1.0f, 3.1f, 0.5f, 0, 0x3ccf52, 0x0c5a1c},
    {"TAP DRIFT", -3, 2.25f, 3.1f, 0.5f, 0, 0xffa51f, 0x8a4200},
};
#define NB (int)(sizeof g_btn / sizeof g_btn[0])
enum { B_LEFT, B_RIGHT, B_GAS, B_BRAKE, B_DRIFT, B_ITEM, B_SWAP, B_ESC, B_CHAT, B_AUTOGAS, B_TAPDRIFT };
#define NPTR 10
static int g_ptr_btn[NPTR] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
static int g_down[NB];
static GpuTex *g_art[NB];

// ---- "Mobile" controls (12 Nov 2026, the user: phone-style controls as a Settings choice) ----------------------------
// AUTO GAS on: the throttle is held for you all race; holding brake lets go of it, so the kart brakes and then
// reverses (the game's Down key, as on PC), and the throttle comes back when brake is released.
// TAP DRIFT on: a tap of DRIFT while steering holds drift until the steering is let go or turned the other way (or
// DRIFT is tapped again); a tap without steering is an ordinary press. Both switches remembered (<game>/touch_mobile.txt).
// Only presses the game's own keys: the race plays as with the buttons.
static int g_mobile = -1, g_autogas = 1, g_tapdrift = 1;
static int g_latch, g_latch_dir, g_tap_moment, g_prev[NB];
static void mobile_load(void) {
    if (g_mobile >= 0) return;
    const char *e = getenv("CK_TOUCH");
    g_mobile = e && !strcmp(e, "mobile");
    char p[600], line[64];
    snprintf(p, sizeof p, "%s/touch_mobile.txt", g_game_dir);
    FILE *f = fopen(p, "r");
    while (f && fgets(line, sizeof line, f)) {
        if (!strncmp(line, "autogas=", 8)) g_autogas = line[8] != '0';
        if (!strncmp(line, "tapdrift=", 9)) g_tapdrift = line[9] != '0';
    }
    if (f) fclose(f);
}
static void mobile_save(void) {
    char p[600];
    snprintf(p, sizeof p, "%s/touch_mobile.txt", g_game_dir);
    FILE *f = fopen(p, "w");
    if (f) { fprintf(f, "autogas=%d\ntapdrift=%d\n", g_autogas, g_tapdrift); fclose(f); }
}
static int shown_btn(int i) { mobile_load(); return i < B_AUTOGAS || g_mobile; }

static const char *const g_names[NB] = {"touch_left", "touch_right", "touch_gas", "touch_brake", "touch_drift", "touch_item", "touch_swap", "touch_esc", "touch_chat",
                                        "touch_autogas", "touch_tapdrift"};
static void geom(int i, float *cx, float *cy, float *r) {
    if (hud_touch_button(g_names[i], cx, cy, r)) return;      // placed by the player (HUD layout editor)
    int bw, bh;
    gpu_backbuffer_size(&bw, &bh);
    float u = bh * 0.105f;
    const Btn *b = &g_btn[i];
    *cx = b->fx >= 0 ? b->fx * u : bw + b->fx * u;
    *cy = bh - b->fy * u;
    *r = b->fr * u;
}
static int hit(float x, float y) {
    int best = -1;
    float bd = 1e30f;
    for (int i = 0; i < NB; i++) {
        if (!shown_btn(i)) continue;
        float cx, cy, r;
        geom(i, &cx, &cy, &r);
        float d = (x - cx) * (x - cx) + (y - cy) * (y - cy);
        if (d < r * r * 1.5f && d < bd) { bd = d; best = i; }     // a little larger than drawn: thumbs are imprecise
    }
    return best;
}
static int tui_input(void);
static void sync_keys(void) {
    int pressed[NB];
    memset(pressed, 0, sizeof pressed);
    for (int p = 0; p < NPTR; p++) if (g_ptr_btn[p] >= 0) pressed[g_ptr_btn[p]] = 1;
    mobile_load();
    int mob = g_mobile && tui_input();
    if (mob) {
        if (pressed[B_AUTOGAS] && !g_prev[B_AUTOGAS]) { g_autogas = !g_autogas; mobile_save(); }
        if (pressed[B_TAPDRIFT] && !g_prev[B_TAPDRIFT]) { g_tapdrift = !g_tapdrift; g_latch = 0; mobile_save(); }
    }
    int steer = pressed[B_LEFT] ? 0x25 : pressed[B_RIGHT] ? 0x27 : 0;
    if (mob && g_tapdrift) {
        if (pressed[B_DRIFT] && !g_prev[B_DRIFT]) {
            if (g_latch) g_latch = 0;                                     // tapped again: drift ends
            else if (steer) { g_latch = 1; g_latch_dir = steer; }         // tapped while steering: drift held
            else g_tap_moment = 1;                                        // no steering: a plain press
        }
        if (!pressed[B_DRIFT]) g_tap_moment = 0;
        if (g_latch && steer != g_latch_dir) g_latch = 0;                 // steering let go / turned the other way
    } else { g_latch = 0; g_tap_moment = 0; }
    memcpy(g_prev, pressed, sizeof g_prev);
    for (int i = 0; i < NB; i++) {
        int want = pressed[i];
        if (mob && g_tapdrift && i == B_DRIFT) want = g_latch || g_tap_moment;
        if (mob && g_autogas && i == B_GAS) want = pressed[B_GAS] || !pressed[B_BRAKE];   // brake held: brake, then reverse
        if (want == g_down[i]) continue;
        g_down[i] = want;
        if (g_btn[i].vk <= -2) continue;                                 // the Mobile switches press no key
        if (g_btn[i].vk >= 0) { ui_key(g_btn[i].vk, want); continue; }
        // CHAT: Enter opens the race chat line (Right Ctrl did not), then the phone's text box; its text comes back
        // as typed characters + Enter (plat_android.c native_chat)
        ui_key(0x0d, want);
        if (!want) open_chat();
    }
}
int hud_racing(void);
int hud_race_recent(u32 ms);
// drawn: in a race, not the splash / loading / welcome banner / results
int tui_active(void) { return user32_cursor_hidden() && hud_racing(); }
// input: stays on through short hides (a held accelerator must not drop); off once the race HUD is gone for 5 s
static int tui_input(void) { return user32_cursor_hidden() && hud_race_recent(5000); }
void tui_release_all(void) {
    for (int p = 0; p < NPTR; p++) g_ptr_btn[p] = -1;
    sync_keys();
}
// once a frame (d3d9.c touch_overlay): AUTO GAS holds the throttle without any touch, and everything is let go once
// the race is over
void tui_frame(void) {
    int any = 0;
    for (int i = 0; i < NB; i++) any |= g_down[i];
    if (tui_input()) sync_keys();
    else if (any) tui_release_all();
}
// act: 0 down, 1 up, 2 move. Returns 1 when the touch belongs to a control (no mouse emulation for it).
int tui_touch(int id, int act, int x, int y) {
    if (!tui_input()) { tui_release_all(); return 0; }
    if (id < 0 || id >= NPTR) return 0;
    int b = hit((float)x, (float)y);
    if (act == 0) { g_ptr_btn[id] = b; sync_keys(); return b >= 0; }
    int had = g_ptr_btn[id];
    if (act == 1) { g_ptr_btn[id] = -1; sync_keys(); return had >= 0; }
    if (had < 0) return 0;
    if (b >= 0 && b != had) { g_ptr_btn[id] = b; sync_keys(); }     // slide between buttons (left <-> right steering)
    return 1;
}

// ---- drawing --------------------------------------------------------------------------------------
static u32 alpha(u32 argb, float k) { float a = (argb >> 24) * k; if (a > 255) a = 255; return (argb & 0xffffffu) | ((u32)a << 24); }
static GVert g_v[2048];
static int g_nv;
static void vert(float x, float y, u32 argb, float u, float v) {
    if (g_nv >= 2048) return;
    GVert *p = &g_v[g_nv++];
    memset(p, 0, sizeof *p);
    int gw, rw, ox;
    gpu_wide(&gw, &rw, &ox);                       // widescreen: the game picture sits ox pixels in
    p->pos[0] = x + (float)ox; p->pos[1] = y; p->pos[2] = 0; p->pos[3] = 1;
    p->diffuse = argb; p->uv[0][0] = u; p->uv[0][1] = v;
}
static void state_for(GState *s, GpuTex *tex) {
    int bw, bh;
    gpu_backbuffer_size(&bw, &bh);
    memset(s, 0, sizeof *s);
    float id[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
    memcpy(s->world.m, id, sizeof id); memcpy(s->view.m, id, sizeof id); memcpy(s->proj.m, id, sizeof id);
    for (int i = 0; i < 8; i++) memcpy(s->texm[i].m, id, sizeof id);
    s->zfunc = 8; s->cull = 1; s->fill = 3; s->shade = 2;
    s->alpha_blend = 1; s->src_blend = 5; s->dst_blend = 6; s->blend_op = 1; s->color_write = 0xf;
    int gw, rw, ox;
    gpu_wide(&gw, &rw, &ox);
    s->vp_w = (u32)rw; s->vp_h = (u32)bh; s->vp_maxz = 1;
    s->stage[0].colorop = 4; s->stage[0].colorarg1 = 2; s->stage[0].colorarg2 = 0;      // texture x diffuse
    s->stage[0].alphaop = 4; s->stage[0].alphaarg1 = 2; s->stage[0].alphaarg2 = 0;
    s->stage[1].colorop = 1; s->stage[1].alphaop = 1;
    for (int i = 0; i < 8; i++) { s->samp[i].addru = s->samp[i].addrv = s->samp[i].addrw = 3; s->samp[i].magf = s->samp[i].minf = 2; }
    s->mat_diffuse[0] = s->mat_diffuse[1] = s->mat_diffuse[2] = s->mat_diffuse[3] = 1;
    s->tex[0] = tex;
}
static void flush_verts(GpuTex *tex) {
    if (!g_nv) return;
    GState s;
    state_for(&s, tex);
    GDraw d = {0};
    d.prim = 4; d.verts = g_v; d.nverts = (u32)g_nv; d.pretransformed = 1; d.has_diffuse = 1; d.ntex = 1; d.st = &s;
    gpu_draw(&d);
    g_nv = 0;
}
// ---- button art ----------------------------------------------------------------------------------
// The game ships no touch-button art (PC game), so each button is painted once on the CPU in the game's look:
// chrome ring, glossy coloured body, bold white symbol / italic label with a dark outline.
#define ART 160
static float clampf(float v, float lo, float hi) { return v < lo ? lo : v > hi ? hi : v; }
static float seg_dist(float px, float py, float ax, float ay, float bx, float by) {
    float dx = bx - ax, dy = by - ay, t = clampf(((px - ax) * dx + (py - ay) * dy) / (dx * dx + dy * dy), 0, 1);
    float ex = px - ax - t * dx, ey = py - ay - t * dy;
    return sqrtf(ex * ex + ey * ey);
}
// signed distance to a polygon (x, y pairs), negative inside
static float poly_sd(const float *p, int n, float x, float y) {
    float d = 1e9f;
    int in = 0;
    for (int i = 0, j = n - 1; i < n; j = i++) {
        float xi = p[2 * i], yi = p[2 * i + 1], xj = p[2 * j], yj = p[2 * j + 1];
        if ((yi > y) != (yj > y) && x < (xj - xi) * (y - yi) / (yj - yi) + xi) in = !in;
        d = fminf(d, seg_dist(x, y, xi, yi, xj, yj));
    }
    return in ? -d : d;
}
static float box_sd(float x, float y, float x0, float y0, float x1, float y1) {
    const float p[8] = {x0, y0, x1, y0, x1, y1, x0, y1};
    return poly_sd(p, 4, x, y);
}
// the symbol as a signed distance in icon units (the body is about -1.6..1.6); "- k" rounds the corners
static float icon_sd(int icon, float x, float y) {
    switch (icon) {
    case 1: { const float p[] = {-0.54f, 0, 0.46f, -0.6f, 0.46f, 0.6f}; return poly_sd(p, 3, x, y) - 0.07f; }
    case 2: { const float p[] = {0.54f, 0, -0.46f, 0.6f, -0.46f, -0.6f}; return poly_sd(p, 3, x, y) - 0.07f; }
    case 3: case 4: {
        if (icon == 4) y = -y;
        const float h[] = {0, -0.68f, 0.6f, -0.02f, -0.6f, -0.02f};
        return fminf(poly_sd(h, 3, x, y), box_sd(x, y, -0.22f, -0.1f, 0.22f, 0.6f)) - 0.05f;
    }
    case 5: return fminf(box_sd(x, y, -0.42f, -0.52f, -0.13f, 0.52f), box_sd(x, y, 0.13f, -0.52f, 0.42f, 0.52f)) - 0.05f;
    case 6: {                                       // speech bubble: ellipse + tail
        float ex = x / 0.7f, ey = (y + 0.1f) / 0.5f, e = (sqrtf(ex * ex + ey * ey) - 1) * 0.5f;
        const float t[] = {-0.38f, 0.2f, 0.0f, 0.3f, -0.55f, 0.7f};
        return fminf(e, poly_sd(t, 3, x, y));
    }
    case 7: {                                       // swap: arrow right on top, arrow left below
        float y1 = y + 0.27f, y2 = y - 0.27f;
        const float h1[] = {0.06f, -0.3f, 0.62f, 0, 0.06f, 0.3f}, h2[] = {-0.06f, -0.3f, -0.62f, 0, -0.06f, 0.3f};
        float a = fminf(box_sd(x, y1, -0.58f, -0.1f, 0.1f, 0.1f), poly_sd(h1, 3, x, y1));
        float b = fminf(box_sd(x, y2, -0.1f, -0.1f, 0.58f, 0.1f), poly_sd(h2, 3, x, y2));
        return fminf(a, b) - 0.03f;
    }
    }
    return 1e9f;
}
static u32 lerp_rgb(u32 a, u32 b, float t) {
    t = clampf(t, 0, 1);
    u32 r = 0;
    for (int k = 0; k < 24; k += 8) {
        float ca = (float)((a >> k) & 255), cb = (float)((b >> k) & 255);
        r |= (u32)(ca + (cb - ca) * t + 0.5f) << k;
    }
    return r;
}
static void over(float *acc, u32 rgb, float a) {     // premultiplied "over"
    if (a <= 0) return;
    for (int k = 0; k < 3; k++) acc[k] = acc[k] * (1 - a) + (float)((rgb >> (16 - 8 * k)) & 255) / 255.0f * a;
    acc[3] = acc[3] * (1 - a) + a;
}
// the player's own picture for a button (launcher HUD editor > Choose from gallery): <game>/touch_icons/<name>.rgba,
// <u32 w><u32 h> then ART x ART straight-alpha RGBA8 (red low), already cut round with its ring
static GpuTex *own_art(int i) {
    char p[600];
    snprintf(p, sizeof p, "%s/touch_icons/%s.rgba", g_game_dir, g_names[i]);
    FILE *f = fopen(p, "rb");
    if (!f) return 0;
    u32 wh[2], *px = malloc(ART * ART * 4);
    GpuTex *t = 0;
    if (px && fread(wh, 4, 2, f) == 2 && wh[0] == ART && wh[1] == ART && fread(px, 4, ART * ART, f) == ART * ART) {
        GTexDesc td = {ART, ART, 1, 0, 0, 21};
        t = gpu_tex_create(&td);
        gpu_tex_upload(t, 0, 0, 0, ART, ART, px, ART);
    }
    free(px);
    fclose(f);
    return t;
}
static GpuTex *button_art(int i) {
    if (g_art[i]) return g_art[i];
    if ((g_art[i] = own_art(i))) return g_art[i];
    const Btn *b = &g_btn[i];
    const float c0 = ART / 2.0f, R = c0 - 1, rb = R * 0.86f, u = rb * 0.62f;
    u8 *cov = 0, *dil = 0;
    float ty0 = c0, ty1 = c0;
    if (b->label) {                                  // italic bold label + a dilated copy for its outline
        u16 s[16];
        int n = 0;
        while (b->label[n] && n < 15) { s[n] = (u8)b->label[n]; n++; }
        const float m[6] = {1, 0, -0.2f, 1, 0, 0};   // lean like the game's race text (LAPS, 1ST)
        float em = R * 0.5f, bb[4];
        text_bounds(s, n, em, 1, 0, 0, m, bb);
        if (bb[2] - bb[0] > R * 1.12f) { em *= R * 1.12f / (bb[2] - bb[0]); text_bounds(s, n, em, 1, 0, 0, m, bb); }
        cov = calloc(ART * ART, 1); dil = calloc(ART * ART, 1);
        float ox = c0 - (bb[0] + bb[2]) / 2, oy = c0 - (bb[1] + bb[3]) / 2;
        text_coverage(cov, ART, ART, s, n, em, 1, ox, oy, m);
        ty0 = bb[1] + oy; ty1 = bb[3] + oy;
        const int o = 4;
        for (int y = 0; y < ART; y++)
            for (int x = 0; x < ART; x++) {
                int mx = 0;
                for (int dy = -o; dy <= o; dy++)
                    for (int dx = -o; dx <= o; dx++) {
                        int xx = x + dx, yy = y + dy;
                        if (dx * dx + dy * dy <= o * o + 1 && xx >= 0 && yy >= 0 && xx < ART && yy < ART && cov[yy * ART + xx] > mx) mx = cov[yy * ART + xx];
                    }
                dil[y * ART + x] = (u8)mx;
            }
    }
    u32 *px = malloc(ART * ART * 4);
    for (int y = 0; y < ART; y++)
        for (int x = 0; x < ART; x++) {
            float dx = x + 0.5f - c0, dy = y + 0.5f - c0, d = sqrtf(dx * dx + dy * dy);
            float acc[4] = {0, 0, 0, 0};
            over(acc, lerp_rgb(0xf4f7fc, 0x58627a, (dy + R) / (2 * R)), clampf(R - d + 0.5f, 0, 1));          // chrome ring
            float body = clampf(rb - d + 0.5f, 0, 1);
            u32 col = lerp_rgb(b->top, b->bot, (dy + rb) / (2 * rb));
            col = lerp_rgb(col, 0x000000, 0.4f * clampf((d - rb * 0.72f) / (rb * 0.28f), 0, 1));            // rim shade
            over(acc, col, body);
            float gx = dx / (rb * 0.74f), gy = (dy + rb * 0.46f) / (rb * 0.42f), q = gx * gx + gy * gy;    // gloss
            over(acc, 0xffffff, body * clampf((1 - q) * 6, 0, 1) * 0.42f * clampf(1 - (dy + rb * 0.88f) / (rb * 0.84f), 0, 1));
            if (b->label) {
                int k = y * ART + x;
                over(acc, 0x0a1022, dil[k] / 255.0f * 0.9f);
                over(acc, lerp_rgb(0xffffff, 0xffd23c, (y - ty0) / (ty1 - ty0 + 1)), cov[k] / 255.0f);
            } else {
                float sd = icon_sd(b->icon, dx / u, dy / u) * u;
                over(acc, 0x0a1022, clampf(u * 0.11f - sd + 0.5f, 0, 1) * 0.9f);
                over(acc, lerp_rgb(0xffffff, 0xd6e0f0, (dy + u) / (2 * u)), clampf(-sd + 0.5f, 0, 1));
            }
            u32 a = (u32)(acc[3] * 255 + 0.5f), rgb = 0;
            if (acc[3] > 0)
                for (int k = 0; k < 3; k++) rgb |= (u32)clampf(acc[k] / acc[3] * 255 + 0.5f, 0, 255) << (8 * k);     // RGBA8, red low
            px[y * ART + x] = a << 24 | rgb;
        }
    GTexDesc td = {ART, ART, 1, 0, 0, 21};
    g_art[i] = gpu_tex_create(&td);
    gpu_tex_upload(g_art[i], 0, 0, 0, ART, ART, px, ART);
    free(px); free(cov); free(dil);
    return g_art[i];
}
// one button picture (hud.c: the lobby / room chat button); on = pressed look
void tui_draw_art(int i, float cx, float cy, float r, int on) {
    GpuTex *t = button_art(i);
    if (on) r *= 0.92f;
    u32 c = on ? 0xffffffffu : 0xffdedede;
    vert(cx - r, cy - r, c, 0, 0); vert(cx + r, cy - r, c, 1, 0); vert(cx + r, cy + r, c, 1, 1);
    vert(cx - r, cy - r, c, 0, 0); vert(cx + r, cy + r, c, 1, 1); vert(cx - r, cy + r, c, 0, 1);
    flush_verts(t);
}
// the controller pointer (plat_android.c): a yellow ring with a navy outline, the launcher's colours
static void ring(float cx, float cy, float r, u32 c) {
    const int n = 24;
    for (int k = 0; k < n; k++) {
        float a0 = 6.2831853f * k / n, a1 = 6.2831853f * (k + 1) / n;
        vert(cx, cy, c, 0, 0); vert(cx + r * cosf(a0), cy + r * sinf(a0), c, 0, 0); vert(cx + r * cosf(a1), cy + r * sinf(a1), c, 0, 0);
    }
}
void tui_draw_pointer(float x, float y) {
    ring(x, y, 14, 0xd00e1f5cu); ring(x, y, 11.5f, 0xfff5c21bu); ring(x, y, 7, 0xb00e1f5cu); ring(x, y, 3, 0xfff5c21bu);
    flush_verts(0);
}
// Called at Present with the back buffer as the target.
void tui_draw(void) {
    if (!tui_active()) return;
    float a = clampf(hud_touch_opacity() / 0.6f * 0.8f, 0, 1);     // the editor's opacity; 0.6 (default) = 80 %
    for (int i = 0; i < NB; i++) {
        if (!shown_btn(i)) continue;
        float cx, cy, r;
        geom(i, &cx, &cy, &r);
        GpuTex *t = button_art(i);
        if (g_down[i]) r *= 0.92f;                   // pressed: a little smaller, brighter, more solid
        u32 c = (u32)(a * (g_down[i] ? 255 : 225)) << 24 | (g_down[i] ? 0xffffffu : 0xdedede);
        if (i >= B_AUTOGAS) {                        // Mobile switches: lit = on, dark = off
            int on = i == B_AUTOGAS ? g_autogas : g_tapdrift;
            c = on ? ((u32)(a * 255) << 24 | 0xffffffu) : ((u32)(a * 170) << 24 | 0x555555u);
        }
        vert(cx - r, cy - r, c, 0, 0); vert(cx + r, cy - r, c, 1, 0); vert(cx + r, cy + r, c, 1, 1);
        vert(cx - r, cy - r, c, 0, 0); vert(cx + r, cy + r, c, 1, 1); vert(cx - r, cy + r, c, 0, 1);
        flush_verts(t);
    }
}
