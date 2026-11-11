// Movable / resizable race HUD (phone only). The race HUD is drawn as pretransformed (screen-space) 2D draws to
// the back buffer after the 3D scene; a draw whose bounding box centre lies in an element's original rectangle is
// moved and scaled to where the player put that element (HUD layout editor on the login screen).
// Elements: <image dir>/hud_elements.txt (APK asset, shared with the editor); layout: <game>/hud_layout.txt
// ("name x y scale", game pixels, top-left). touch_* entries place the on-screen buttons (touch_ui.c).
// <game>/huddump.txt: log every 2D draw of one race frame (to find element rectangles), then delete the file.
#include "rt.h"
#include "gpu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <sys/stat.h>

int tui_active(void);
int user32_cursor_hidden(void);
extern char g_image_dir[512];

typedef struct { char name[32]; float sx, sy, sw, sh, x, y, s; int moved; } HudElem;
static HudElem g_el[48];
static int g_nel, g_loaded;
float hud_safe_inset;                // screen-edge keep-out in game pixels (iOS notch / Dynamic Island; 0 on Android)
static float g_touch_opacity = 0.6f;

static void load(void) {
    g_loaded = 1;
    char p[600], line[256];
    snprintf(p, sizeof p, "%s/hud_elements.txt", g_image_dir);
    FILE *f = fopen(p, "r");
    if (!f) { rt_log("hud: no %s\n", p); return; }
    while (fgets(line, sizeof line, f) && g_nel < 48) {
        HudElem *e = &g_el[g_nel];
        if (line[0] == '#' || sscanf(line, "%31s %f %f %f %f", e->name, &e->sx, &e->sy, &e->sw, &e->sh) != 5) continue;
        e->x = e->sx; e->y = e->sy; e->s = 1;
        g_nel++;
    }
    fclose(f);
    snprintf(p, sizeof p, "%s/hud_layout.txt", g_game_dir);
    f = fopen(p, "r");
    int moved = 0;
    if (f) {
        while (fgets(line, sizeof line, f)) {
            char name[32]; float x, y, s;
            if (line[0] == '#') continue;
            if (sscanf(line, "touch_opacity %f", &x) == 1) { g_touch_opacity = x < 0 ? 0 : x > 1 ? 1 : x; continue; }   // 0 = invisible, still touchable (the user, 6 Nov)
            if (sscanf(line, "%31s %f %f %f", name, &x, &y, &s) != 4 || s <= 0) continue;
            for (int i = 0; i < g_nel; i++)
                if (!strcmp(g_el[i].name, name)) { g_el[i].x = x; g_el[i].y = y; g_el[i].s = s; g_el[i].moved = 1; moved++; }
        }
        fclose(f);
    }
    rt_log("hud: %d elements, %d placed by the player\n", g_nel, moved);
}
static const HudElem *find(const char *name) {
    if (!g_loaded) load();
    for (int i = 0; i < g_nel; i++) if (!strcmp(g_el[i].name, name)) return &g_el[i];
    return 0;
}
// touch_ui.c: centre and radius of a button (default when the player did not place it), and the opacity
int hud_touch_button(const char *name, float *cx, float *cy, float *r) {
    const HudElem *e = find(name);
    if (!e || !e->moved) return 0;
    *r = e->sw * e->s / 2; *cx = e->x + *r; *cy = e->y + e->sh * e->s / 2;
    return 1;
}
float hud_touch_opacity(void) { if (!g_loaded) load(); return g_touch_opacity; }

static int g_race_frames, g_dumping, g_ndump;
static u32 g_frame_no;
// racing = the speedometer was drawn lately (the cursor is also hidden on the splash screen and the results)
// ... and no big picture in the middle of the screen (the map's welcome banner, 450x224 at 393,276 on the phone;
// the countdown pictures are smaller)
// Times, not frames: the frame rate goes up to 144. Changes are logged (why the controls hid).
static u32 g_speedo_ms, g_banner_ms, g_race_start_ms;
int hud_race_recent(u32 ms) { return g_speedo_ms && ms_now() - g_speedo_ms < ms; }     // touch input gate (touch_ui.c)
int hud_racing(void) {
    u32 now = ms_now();
    int speedo = g_speedo_ms && now - g_speedo_ms < 1000;
    if (!speedo) g_race_start_ms = 0;
    else if (!g_race_start_ms) g_race_start_ms = now;
    // the welcome banner only opens a race; later pictures that size are in-race messages (items, combos)
    int banner = g_banner_ms && now - g_banner_ms < 100 && now - g_race_start_ms < 10000;
    int on = speedo && !banner;
    static int last = -1, nlog;
    if (on != last && nlog < 200) { nlog++; rt_log("hud: touch controls %s (speedometer %s, banner %s)\n", on ? "shown" : "hidden", speedo ? "drawn" : "absent", banner ? "on" : "off"); }
    last = on;
    return on;
}

// ---- HUD pictures for the layout editor (the user: "use actual game assets on speedometer and other hud") ------
// One race frame's 2D draws are redrawn on the CPU from the game's own textures, each into a transparent picture of
// the element it belongs to (same rule as hud_draw, original positions). Saved as <game>/hudshots/<name>.rgba
// (u32 w, u32 h, then premultiplied RGBA rows, as Android's Bitmap.copyPixelsFromBuffer takes them). Taken once by
// itself in the first race (10 s in) when there are none yet; <game>/hudshot.txt asks for a new one.
u32 *d3d_tex_pixels(const void *gt, int *w, int *h);
static int g_shot;                   // 1: this frame is being captured
static float *g_cv[48];              // per element: premultiplied RGBA floats, element rectangle size (1 px = 1 game px)
typedef struct { const void *gt; u32 *px; int w, h; } ShotTex;
static ShotTex g_stex[256];
static int g_nstex;
static const ShotTex *shot_tex(const void *gt) {
    for (int i = 0; i < g_nstex; i++) if (g_stex[i].gt == gt) return &g_stex[i];
    if (g_nstex >= 256) return 0;
    ShotTex *t = &g_stex[g_nstex++];
    t->gt = gt; t->px = d3d_tex_pixels(gt, &t->w, &t->h);
    return t;
}
static void shot_sample(const ShotTex *t, float u, float v, float out[4]) {      // bilinear, clamped, 0..1 floats
    float x = u * t->w - 0.5f, y = v * t->h - 0.5f;
    int x0 = (int)floorf(x), y0 = (int)floorf(y);
    float fx = x - x0, fy = y - y0;
    out[0] = out[1] = out[2] = out[3] = 0;
    for (int k = 0; k < 4; k++) {
        int xx = x0 + (k & 1), yy = y0 + (k >> 1);
        xx = xx < 0 ? 0 : xx >= t->w ? t->w - 1 : xx;
        yy = yy < 0 ? 0 : yy >= t->h ? t->h - 1 : yy;
        float wgt = ((k & 1) ? fx : 1 - fx) * ((k >> 1) ? fy : 1 - fy);
        u32 p = t->px[yy * t->w + xx];
        for (int c = 0; c < 4; c++) out[c] += wgt * (float)((p >> (8 * c)) & 255) / 255.0f;
    }
}
static void shot_tri(int ei, const ShotTex *t, const GVert *a, const GVert *b, const GVert *c) {
    const HudElem *e = &g_el[ei];
    int W = (int)(e->sw + 0.999f), H = (int)(e->sh + 0.999f);
    float ax = a->pos[0] - e->sx, ay = a->pos[1] - e->sy, bx = b->pos[0] - e->sx, by = b->pos[1] - e->sy;
    float cx = c->pos[0] - e->sx, cy = c->pos[1] - e->sy;
    float area = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);
    if (fabsf(area) < 1e-6f) return;
    int x0 = (int)fmaxf(0, floorf(fminf(ax, fminf(bx, cx)))), x1 = (int)fminf((float)W - 1, ceilf(fmaxf(ax, fmaxf(bx, cx))));
    int y0 = (int)fmaxf(0, floorf(fminf(ay, fminf(by, cy)))), y1 = (int)fminf((float)H - 1, ceilf(fmaxf(ay, fmaxf(by, cy))));
    for (int y = y0; y <= y1; y++)
        for (int x = x0; x <= x1; x++) {
            float px = x + 0.5f, py = y + 0.5f;
            float w0 = ((bx - px) * (cy - py) - (by - py) * (cx - px)) / area;
            float w1 = ((cx - px) * (ay - py) - (cy - py) * (ax - px)) / area;
            float w2 = 1 - w0 - w1;
            if (w0 < -1e-4f || w1 < -1e-4f || w2 < -1e-4f) continue;
            float col[4];
            for (int k = 0; k < 4; k++) {                              // diffuse: D3DCOLOR ARGB -> r g b a
                int sh = k == 3 ? 24 : 16 - 8 * k;
                col[k] = (w0 * ((a->diffuse >> sh) & 255) + w1 * ((b->diffuse >> sh) & 255) + w2 * ((c->diffuse >> sh) & 255)) / 255.0f;
            }
            if (t && t->px) {
                float tc[4];
                shot_sample(t, w0 * a->uv[0][0] + w1 * b->uv[0][0] + w2 * c->uv[0][0], w0 * a->uv[0][1] + w1 * b->uv[0][1] + w2 * c->uv[0][1], tc);
                for (int k = 0; k < 4; k++) col[k] *= tc[k];
            }
            float *d = &g_cv[ei][(y * W + x) * 4], al = col[3];
            for (int k = 0; k < 3; k++) d[k] = d[k] * (1 - al) + col[k] * al;
            d[3] = d[3] * (1 - al) + al;
        }
}
void hud_capture(const GDraw *dr, int textured) {
    if (!g_shot || !dr->nverts || dr->prim < 4) return;
    const GVert *v = dr->verts;
    float x0 = v[0].pos[0], y0 = v[0].pos[1], x1 = x0, y1 = y0;
    for (u32 i = 1; i < dr->nverts; i++) {
        x0 = fminf(x0, v[i].pos[0]); x1 = fmaxf(x1, v[i].pos[0]); y0 = fminf(y0, v[i].pos[1]); y1 = fmaxf(y1, v[i].pos[1]);
    }
    float cx = (x0 + x1) / 2, cy = (y0 + y1) / 2, best = 1e30f;
    int ei = -1;
    for (int i = 0; i < g_nel; i++) {             // as hud_draw: the smallest element whose rectangle holds the centre
        const HudElem *h = &g_el[i];
        if (!strncmp(h->name, "touch_", 6)) continue;
        if (cx < h->sx || cx > h->sx + h->sw || cy < h->sy || cy > h->sy + h->sh) continue;
        if (h->sw * h->sh < best) { best = h->sw * h->sh; ei = i; }
    }
    if (ei < 0 || x1 - x0 > g_el[ei].sw * 2 + 40) return;                   // full-screen effects are no HUD
    if (!g_cv[ei]) g_cv[ei] = calloc((size_t)(g_el[ei].sw + 1) * (g_el[ei].sh + 1) * 4, sizeof(float));
    const ShotTex *t = textured ? shot_tex(dr->st->tex[0]) : 0;
    u32 n = dr->indices ? dr->nindices : dr->nverts;
    for (u32 i = 0; i + 2 < n; ) {
        u32 a, b, c;
        if (dr->prim == 4) { a = i; b = i + 1; c = i + 2; i += 3; }
        else if (dr->prim == 5) { a = i; b = i + 1; c = i + 2; if (i & 1) { u32 tmp = a; a = b; b = tmp; } i++; }
        else { a = 0; b = i + 1; c = i + 2; i++; }
        if (dr->indices) { a = dr->indices[a]; b = dr->indices[b]; c = dr->indices[c]; }
        if (a < dr->nverts && b < dr->nverts && c < dr->nverts) shot_tri(ei, t, &v[a], &v[b], &v[c]);
    }
}
static void shot_save(void) {
    char p[600];
    snprintf(p, sizeof p, "%s/hudshots", g_game_dir);
#ifdef _WIN32
    mkdir(p);                                        // desktop bench (llvm-mingw)
#else
    mkdir(p, 0755);
#endif
    int saved = 0;
    for (int i = 0; i < g_nel; i++) {
        if (!g_cv[i]) continue;
        int W = (int)(g_el[i].sw + 0.999f), H = (int)(g_el[i].sh + 0.999f);
        u8 *out = malloc((size_t)W * H * 4 + 8);
        u32 hdr[2] = {(u32)W, (u32)H};
        memcpy(out, hdr, 8);
        for (int k = 0; k < W * H * 4; k++) { float f = g_cv[i][k]; out[8 + k] = (u8)(f <= 0 ? 0 : f >= 1 ? 255 : f * 255 + 0.5f); }
        snprintf(p, sizeof p, "%s/hudshots/%s.rgba", g_game_dir, g_el[i].name);
        FILE *f = fopen(p, "wb");
        if (f) { fwrite(out, 1, (size_t)W * H * 4 + 8, f); fclose(f); saved++; }
        free(out); free(g_cv[i]); g_cv[i] = 0;
    }
    for (int i = 0; i < g_nstex; i++) free(g_stex[i].px);
    g_nstex = 0;
    rt_log("hud: HUD pictures for the layout editor saved (%d elements)\n", saved);
}
static void shot_frame(void) {       // hud_frame, once per Present
    if (g_shot) { g_shot = 0; shot_save(); }
    if (g_race_frames < 600 || g_frame_no % 120) return;    // a settled race
    char p[600];
    snprintf(p, sizeof p, "%s/hudshot.txt", g_game_dir);
    static int auto_done;
    int ask = access(p, F_OK) == 0;
    if (!ask && auto_done) return;
    if (!ask) {
        auto_done = 1;
        snprintf(p, sizeof p, "%s/hudshots/speedo.rgba", g_game_dir);
        if (access(p, F_OK) == 0) return;            // taken before
    } else unlink(p);
    if (!g_loaded) load();
    g_shot = 1;
}

// ---- lobby + room, mobile layout (the user, 5 Nov: "proper UI/UX ... like how mobile should be, keep colors")
// The channel screens (GUI.xml, 800x600, drawn at 1.2x centred: game x = 160 + 1.2 x, y = 1.2 y) are an upper part
// (room list or player cards + the button column, y < 556) over a chat strip (chat lines, input bar, icon row,
// Level / Score). On the phone the upper part fills the height (~1.27x, as one piece, so all that is drawn inside it
// moves with it), the chat strip is a sheet opened from a chat button, the icon row is a rail on the left edge.
// Anything else (Players Online, shops, message boxes) is drawn where the game puts it together with everything
// inside it -- never torn apart. Taps are mapped back to where the game has its controls (hud_touch).
typedef struct { float sx, sy, sw, sh, x, y, s; } Part;
enum { UPPER, CHAT, ICON0 };
#define NICON 5
static const float g_icon_x[NICON] = {880, 947, 1014, 1048, 1082};   // chat bar icons (30x30 at y 678): emoji, sound,
                                                                     // help, friends, Players Online
static Part g_part[ICON0 + NICON];
static u32 g_chan_seen;              // frame the chat strip was last drawn = the lobby / room is up
static int g_sheet;                  // chat sheet open
static float g_btn_x, g_btn_y, g_btn_r;
typedef struct { float x0, y0, x1, y1; } Rect;
static Rect g_pop[16], g_popl[16];   // this frame's / last frame's rectangles of foreign things (popups)
static int g_npop, g_npopl;

static int chan_on(void) { return g_frame_no && g_chan_seen + 1 >= g_frame_no; }
static void chan_layout(void) {
    int gw, rw, ox;
    gpu_wide(&gw, &rw, &ox);
    // both sides: the notch is on the left or the right depending on how the phone is turned
    float L = (float)-ox + 8 + hud_safe_inset, R = (float)(gw + ox) - 8 - hud_safe_inset, rail = 76;
    Part *u = &g_part[UPPER], *c = &g_part[CHAT];
    *u = (Part){150, 0, 980, 556};
    *c = (Part){150, 556, 980, 164};
    float room = R - (L + rail + 8), s = 710 / u->sh;
    if (u->sw * s > room) s = room / u->sw;
    u->s = s; u->x = L + rail + 8 + (room - u->sw * s) / 2; u->y = 5;
    c->s = 1.15f;
    if (c->sw * c->s > R - L) c->s = (R - L) / c->sw;
    c->x = u->x + (u->sw * s - c->sw * c->s) / 2;
    if (c->x < L) c->x = L;
    c->y = 720 - c->sh * c->s - 4;
    g_btn_r = 30; g_btn_x = L + rail / 2; g_btn_y = 12 + g_btn_r;
    for (int i = 0; i < NICON; i++) {
        Part *p = &g_part[ICON0 + i];
        *p = (Part){g_icon_x[i] - 1, 676, 32, 34};
        p->s = 1.8f; p->x = g_btn_x - p->sw * p->s / 2; p->y = 96 + i * 68;
    }
    rt_log("hud: lobby/room layout: upper %.2fx at %.0f, chat sheet %.2fx, rail at %.0f\n", s, u->x, c->s, g_btn_x);
}
static void chan_frame(void) {       // hud_frame
    memcpy(g_popl, g_pop, sizeof g_pop);
    g_npopl = g_npop; g_npop = 0;
    static int was;
    int on = chan_on();
    if (on != was) { if (on) chan_layout(); rt_log("hud: lobby/room layout %s\n", on ? "on" : "off"); was = on; }
}
static int in_rects(const Rect *r, int n, float x0, float y0, float x1, float y1) {
    for (int i = 0; i < n; i++)
        if (x0 >= r[i].x0 - 2 && y0 >= r[i].y0 - 2 && x1 <= r[i].x1 + 2 && y1 <= r[i].y1 + 2) return 1;
    return 0;
}
// the part a rectangle (2D draw bbox or 3D viewport) belongs to; -1 = drawn where the game puts it, -2 = hidden
// (the chat strip while the sheet is closed). Foreign things are remembered as popups (pop = 1, 2D draws only).
static int chan_part(float x0, float y0, float x1, float y1, int pop) {
    if (x1 <= 0 || x0 >= 1280 || y1 <= 0 || y0 >= 720) return -1;              // off screen
    if (in_rects(g_pop, g_npop, x0, y0, x1, y1)) return -1;                     // inside a popup drawn earlier
    if (x1 - x0 >= 1270) return -1;                                             // the moving background
    // (the bottom row's kart pictures, 307x307 at y 268, reach 575: below the strip's top, still the upper part's)
    if (x0 >= 146 && x1 <= 1134 && y0 >= -4 && y0 < 540 && y1 <= 600) return UPPER;
    // the pictures of the player area / room list (737x719 at 172) and the button column (195x719 at 911) reach
    // under the chat strip
    if (y0 > -2 && y0 < 2 && y1 > 716 && y1 < 722 && x0 >= 146 && x1 <= 1134 && x1 - x0 < 760) return UPPER;
    for (int i = 0; i < NICON; i++) {
        const Part *p = &g_part[ICON0 + i];
        if (x0 >= p->sx - 2 && x1 <= p->sx + p->sw + 2 && y0 >= p->sy - 2 && y1 <= p->sy + p->sh + 2) return ICON0 + i;
    }
    if (x0 >= 146 && x1 <= 1134 && y0 >= 552 && y1 <= 724) return g_sheet ? CHAT : -2;
    if (pop && g_npop < 16) g_pop[g_npop++] = (Rect){x0, y0, x1, y1};
    return -1;
}
static void apply(HudXf *xf, const Part *p) { xf->on = 1; xf->sx = p->sx; xf->sy = p->sy; xf->x = p->x; xf->y = p->y; xf->s = p->s; }
// 3D in a sub-viewport (the karts on the player cards): moves with its part
void hud_rect(float x, float y, float w, float h, HudXf *xf) {
    xf->on = 0;
    if (!chan_on()) return;
    int k = chan_part(x, y, x + w, y + h, 0);
    if (k >= 0) apply(xf, &g_part[k]);
}
void plat_open_chat(void);
// a touch (touch_event): 1 = taken here (the chat button); else *x / *y are mapped to where the game has that control
int hud_touch(int id, int act, int *px, int *py) {
    static int btn_ptr = -1;
    if (!chan_on()) { btn_ptr = -1; return 0; }
    float x = (float)*px, y = (float)*py;
    if (id == btn_ptr) { if (act == 1) btn_ptr = -1; return 1; }
    if (act == 0 && (x - g_btn_x) * (x - g_btn_x) + (y - g_btn_y) * (y - g_btn_y) < g_btn_r * g_btn_r * 2) {
        g_sheet = !g_sheet;
        btn_ptr = id;
        return 1;
    }
    if (in_rects(g_popl, g_npopl, x, y, x, y)) return 0;                       // a popup: where the game drew it
    int hit = -1;
    if (g_sheet) {
        const Part *c = &g_part[CHAT];
        if (x >= c->x && x < c->x + c->sw * c->s && y >= c->y && y < c->y + c->sh * c->s) hit = CHAT;
    }
    for (int i = 0; hit < 0 && i < NICON; i++) {
        const Part *p = &g_part[ICON0 + i];
        if (x >= p->x && x < p->x + p->sw * p->s && y >= p->y && y < p->y + p->sh * p->s) hit = ICON0 + i;
    }
    const Part *u = &g_part[UPPER];
    if (hit < 0 && x >= u->x && x < u->x + u->sw * u->s && y >= u->y && y < u->y + u->sh * u->s) hit = UPPER;
    if (hit < 0) { *px = 2; *py = 2; return 0; }        // the background around the parts: nothing to press there
    const Part *p = &g_part[hit];
    *px = (int)(p->sx + (x - p->x) / p->s);
    *py = (int)(p->sy + (y - p->y) / p->s);
    // the chat line (ChatContentEdit, 330..835 x 677..710): the phone keyboard (its text is typed into it + Enter)
    if (hit == CHAT && act == 1 && *px >= 300 && *px <= 840 && *py >= 674 && *py <= 712) plat_open_chat();
    return 0;
}
// at Present (touch_overlay): the chat button
void tui_draw_art(int i, float cx, float cy, float r, int on);
int hud_overlay_wanted(void) { return chan_on(); }
void hud_overlay(void) {
    if (chan_on()) tui_draw_art(8, g_btn_x, g_btn_y, g_btn_r, g_sheet);
}

void hud_frame(void) {             // once per Present
    g_frame_no++;
    if (g_dumping) { g_dumping = 0; rt_log("hud: dump end (%d draws)\n", g_ndump); }
    g_race_frames = tui_active() ? g_race_frames + 1 : 0;
    if (g_frame_no % 120 == 0) {   // any screen: race, results, room
        char p[600]; snprintf(p, sizeof p, "%s/huddump.txt", g_game_dir);
        if (access(p, F_OK) == 0) {
            unlink(p);
            g_dumping = 1; g_ndump = 0;
            rt_log("hud: dump of frame %u, lobby/room %d (2D draws to the back buffer: bbox, verts, texture, first colour)\n", g_frame_no, chan_on());
        }
    }
    chan_frame();
    shot_frame();
}

// pretransformed draw about to go to the back buffer: move / scale it with its element (races only)
void hud_draw(GVert *v, u32 n, const void *tex, HudXf *xf) {
    xf->on = 0;
    if (!n) return;
    if (!g_loaded) load();
    float x0 = v[0].pos[0], y0 = v[0].pos[1], x1 = x0, y1 = y0;
    for (u32 i = 1; i < n; i++) {
        float x = v[i].pos[0], y = v[i].pos[1];
        if (x < x0) x0 = x; if (x > x1) x1 = x; if (y < y0) y0 = y; if (y > y1) y1 = y;
    }
    if (g_dumping && g_ndump < 2000) {
        g_ndump++;
        rt_log("hud: %4.0f %4.0f %4.0f %4.0f  nv %u tex %p col %08x\n", x0, y0, x1, y1, n, tex, v[0].diffuse);
    }
    float cx = (x0 + x1) / 2, cy = (y0 + y1) / 2, best = 1e30f;
    float w = x1 - x0, h = y1 - y0;
    // Race results board (RacingGUIHigh RankAnimFrame, RankKuang.png 751x352 at 264,99; the user: centred, 20 %
    // bigger). Found by its size each frame (it slides in), then it and everything drawn inside it (rows, names,
    // the logo poking out) move together. The board is drawn before its contents.
    static float rk_x, rk_y, rk_w, rk_h;
    static u32 rk_frame;
    if (w > 735 && w < 770 && h > 335 && h < 370) {
        static int nl; if (nl++ < 3) rt_log("hud: results board at %.0f %.0f %.0fx%.0f\n", x0, y0, w, h);
        rk_x = x0; rk_y = y0; rk_w = w; rk_h = h; rk_frame = g_frame_no;
    }
    if (rk_frame == g_frame_no && cx > rk_x - 40 && cx < rk_x + rk_w + 40 && cy > rk_y - 40 && cy < rk_y + rk_h) {
        const float s = 1.2f, tx = 640 - rk_w * s / 2, ty = 360 - rk_h * s / 2;
        for (u32 i = 0; i < n; i++) {
            v[i].pos[0] = tx + (v[i].pos[0] - rk_x) * s;
            v[i].pos[1] = ty + (v[i].pos[1] - rk_y) * s;
        }
        return;
    }
    // phone UI overlay (plat.c: <image dir>/mobile/data/config/GUI.xml): the menus are laid out for the phone by the
    // game's own XML, so the lobby / room remap below stays off
    static int phone_ui = -1;
    if (phone_ui < 0) {
        char p[700];
        const char *ov = plat_overlay_root();
        snprintf(p, sizeof p, "%s/data/config/GUI.xml", ov ? ov : "");
        phone_ui = ov && access(p, F_OK) == 0;
        rt_log("hud: phone UI layouts %s\n", phone_ui ? "present: lobby/room remap off" : "absent");
    }
    // the lobby / room: the chat strip (959x39 at 159,557) is drawn on both -> their layout from the next frame
    if (!phone_ui && x0 > 156 && x0 < 162 && y0 > 554 && y0 < 560 && w > 954 && w < 964 && h > 34 && h < 44) g_chan_seen = g_frame_no;
    if (chan_on()) {
        int k = chan_part(x0, y0, x1, y1, 1);
        if (k == -2) { for (u32 i = 1; i < n; i++) v[i] = v[0]; return; }      // the chat strip, sheet closed
        if (k < 0) return;
        const Part *p = &g_part[k];
        apply(xf, p);
        for (u32 i = 0; i < n; i++) {
            v[i].pos[0] = p->x + (v[i].pos[0] - p->sx) * p->s;
            v[i].pos[1] = p->y + (v[i].pos[1] - p->sy) * p->s;
        }
        return;
    }
    if (!user32_cursor_hidden()) return;
    // banner-shaped only: full-screen effects (ink, flash, fog) are not banners
    if (w >= 400 && w <= 560 && h >= 180 && h <= 300 && cx > 426 && cx < 853 && cy > 240 && cy < 480) {
        g_banner_ms = ms_now();
        static int nb; if (nb++ < 20) rt_log("hud: banner-sized draw %.0f %.0f %.0f %.0f\n", x0, y0, x1, y1);
    }
    const HudElem *e = 0;
    // The minimap picture (1040,99 209x206 on the phone) is wider than its editor rectangle, and the player star /
    // racer markers are separate small draws on top of it: one at the map's left edge has its centre outside the
    // rectangle and stayed at the old place (11 Nov 2026, the user). Everything drawn inside this frame's minimap
    // picture moves with the minimap.
    static float mm[4];
    static u32 mm_frame;
    static const HudElem *mm_el;
    for (int i = 0; i < g_nel; i++) {             // smallest element whose original rectangle holds the centre
        const HudElem *h = &g_el[i];
        if (h->name[0] == 't' && !strncmp(h->name, "touch_", 6)) continue;
        if (cx < h->sx || cx > h->sx + h->sw || cy < h->sy || cy > h->sy + h->sh) continue;
        if (h->sw * h->sh < best) { best = h->sw * h->sh; e = h; }
    }
    // no other element claims it (time, laps keep theirs) and it lies on this frame's minimap picture: a map marker
    if (!e && mm_frame == g_frame_no && mm_el && w < mm[2] - mm[0] && cx >= mm[0] && cx <= mm[2] && cy >= mm[1] && cy <= mm[3]) e = mm_el;
    if (e && !strcmp(e->name, "speedo")) g_speedo_ms = ms_now();
    if (e && !strcmp(e->name, "minimap") && w > 120 && h > 120) {     // the minimap picture itself
        mm[0] = x0; mm[1] = y0; mm[2] = x1; mm[3] = y1; mm_frame = g_frame_no; mm_el = e;
    }
    if (!e || !e->moved) return;
    for (u32 i = 0; i < n; i++) {
        v[i].pos[0] = e->x + (v[i].pos[0] - e->sx) * e->s;
        v[i].pos[1] = e->y + (v[i].pos[1] - e->sy) * e->s;
    }
}
