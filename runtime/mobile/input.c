// Input shared by the phone platforms (android/plat_android.c, ios/plat_ios.m): the event queue the game thread
// drains each frame, touches -> the game's mouse (race controls and the moved lobby / room layout first), keyboard /
// controller bindings + chat macros (<files>/controls.txt from the launcher's Settings), and the controller pointer
// for menus. Key and axis codes are Android's numbering on every platform (iOS translates its own to them).
#include "rt.h"
#include "gpu.h"
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <string.h>

void ui_key(int vk, int down);
void ui_char(unsigned ch);
void ui_mouse(unsigned msg, int x, int y, unsigned buttons);
int utf16_to_gbk(const unsigned short *s, int n, unsigned char *out, int outmax);
void plat_open_chat(void);
extern char g_game_dir[512];
enum { AX_X = 0, AX_Y = 1, AX_Z = 11, AX_RZ = 14, AX_HAT_X = 15, AX_HAT_Y = 16, AX_LT = 17, AX_RT = 18, AX_GAS = 22, AX_BRAKE = 23 };

static pthread_mutex_t g_evmu = PTHREAD_MUTEX_INITIALIZER;
typedef struct { int kind, a, b, c, d; } Ev;     // 1 = mouse (msg, x, y), 2 = key (vk, down), 3 = touch (pointer id, act, x, y)
static Ev g_ev[512];
static int g_evh, g_evt;
static void ev_push(int kind, int a, int b, int c, int d) {
    pthread_mutex_lock(&g_evmu);
    int n = (g_evt + 1) % 512;
    if (n != g_evh) { g_ev[g_evt] = (Ev){kind, a, b, c, d}; g_evt = n; }
    pthread_mutex_unlock(&g_evmu);
}
int tui_touch(int id, int act, int x, int y);
int hud_touch(int id, int act, int *x, int *y);
static int g_mouse_ptr = -1;        // the pointer that drives the mouse (first touch not on a race control)
static void pointer_hide(void);
static void touch_event(int id, int act, int x, int y) {
    if (id != 9) pointer_hide();             // a finger: the controller pointer steps aside (9 = the pointer itself)
    if (tui_touch(id, act, x, y)) return;
    if (hud_touch(id, act, &x, &y)) return;     // lobby / room: drawn moved (hud.c), press what is shown there
    if (act == 0) { if (g_mouse_ptr >= 0) return; g_mouse_ptr = id; ui_mouse(0x200, x, y, 0); ui_mouse(0x201, x, y, 1); return; }
    if (id != g_mouse_ptr) return;
    if (act == 2) ui_mouse(0x200, x, y, 1);
    else { ui_mouse(0x202, x, y, 0); g_mouse_ptr = -1; }
}


static void pointer_frame(void);
static void pointer_button(int code, int down);
static void pointer_hide(void);
void plat_pump_events(void) {
    pointer_frame();                         // controller pointer (menus): the left stick moves it each frame
    pthread_mutex_lock(&g_evmu);
    int pressed = 0;
    while (g_evh != g_evt) {
        Ev e = g_ev[g_evh];
        // a tap's press and release arrive together; the game polls button / key state once per frame,
        // so leave the release for the next pump (the next frame) or the press is never seen
        if (((e.kind == 3 && e.b == 1) || (e.kind == 2 && !e.b)) && pressed) break;
        if ((e.kind == 3 && e.b == 0) || (e.kind == 2 && e.b)) pressed = 1;
        g_evh = (g_evh + 1) % 512;
        if (e.kind == 5) break;             // a frame's pause (a chat macro waits for the chat line to open)
        pthread_mutex_unlock(&g_evmu);
        if (e.kind == 3) touch_event(e.a, e.b, e.c, e.d);
        else if (e.kind == 2) ui_key(e.a, e.b);
        else if (e.kind == 6) pointer_button(e.a, e.b);
        else if (e.kind == 4) {             // a typed character (chat box): the game's window is ANSI -> GBK bytes
            u16 ch = (u16)e.a; u8 gb[4];
            int n = utf16_to_gbk(&ch, 1, gb, sizeof gb);
            for (int i = 0; i < n; i++) ui_char(gb[i]);
        }
        pthread_mutex_lock(&g_evmu);
    }
    pthread_mutex_unlock(&g_evmu);
}

// ---- keyboards and game controllers (the user, 6 Nov 2026: wireless / wired controllers and keyboards) ---------
// <files>/controls.txt, written by the launcher's Settings > Controls at every Play:
//   bind <code> <vk>          a key / button (Android key code) or a stick, d-pad or trigger direction
//                             (1000 + axis * 2 + (1 if positive)) presses that game key; vk -1 = chat: Enter + the
//                             phone's text box (a controller has no letters)
//   macro <slot> <code> [<code>]   that key, or the two together, types chat macro <slot> (UserSetting.bin 0x58)
// Keys without a binding keep their own meaning (typing in the game's chat).
#define NBIND 96
static struct { int code, vk; } g_bind[NBIND];
static int g_nbind;
static struct { int slot, code[2], n; } g_macro[16];
static int g_nmacro;
static unsigned char g_held[2048];       // codes down now: 1, 2 = it fired a macro (its release does nothing), 3 = pointer
// ---- controller pointer (menus, lobby, rooms, shops; the user, 6 Nov 2026). Outside races the left stick moves an
// on-screen pointer (touch_ui.c tui_draw_pointer), A taps where it points (the same path as a finger, so the moved
// lobby / room layout and popups work), B / Start = Esc, the right stick and LB / RB scroll. In races the controller
// drives (the bindings) and the pointer hides. A finger, or 8 s without the controller, hides it too.
static float g_stick[2], g_rstick;      // left stick x / y, right stick y (UI thread writes, game thread reads)
static float g_px = 640, g_py = 360;    // game pixels
static int g_pvis, g_pdown;
static u32 g_pused;
int tui_active(void);
int hud_touch(int id, int act, int *x, int *y);
static int menu_mode(void) { return !tui_active(); }
static int pointer_code(int c) {
    return c == 96 || c == 97 || c == 108 || c == 102 || c == 103;
}
int plat_pointer(float *x, float *y) { if (!g_pvis) return 0; *x = g_px; *y = g_py; return 1; }
static void pointer_hide(void) { if (!g_pdown) g_pvis = 0; }
static void wheel(int notches) { ui_mouse(0x20a, (int)g_px, (int)g_py, (unsigned)(notches * 120) << 16); }
// game thread: a pointer button (event kind 6)
static void pointer_button(int code, int down) {
    g_pused = ms_now();
    if (code == 96) {
        g_pvis = 1;
        if (down == g_pdown) return;
        g_pdown = down;
        touch_event(9, down ? 0 : 1, (int)g_px, (int)g_py);
    } else if (code == 97 || code == 108) ui_key(0x1b, down);
    else if (down) wheel(code == 102 ? 3 : -3);             // a page up / down
}
// game thread, every frame
static void pointer_frame(void) {
    static u32 last, lastwheel;
    u32 now = ms_now();
    float dt = last ? (now - last) / 1000.0f : 0;
    last = now;
    if (dt > 0.1f) dt = 0.1f;
    if (!menu_mode()) {                                    // a race: the controller drives
        if (g_pdown) { g_pdown = 0; touch_event(9, 1, (int)g_px, (int)g_py); }
        g_pvis = 0;
        return;
    }
    float x = g_stick[0], y = g_stick[1], m = sqrtf(x * x + y * y);
    if (m > 0.18f) {                                       // dead zone; slow for small moves, fast at full tilt
        float k = (m > 1 ? 1 : m - 0.18f) / 0.82f, speed = 260 + 1300 * k * k;
        int gw, rw, ox;
        gpu_wide(&gw, &rw, &ox);
        g_px += x / m * speed * dt; g_py += y / m * speed * dt;
        if (g_px < -ox) g_px = (float)-ox; if (g_px > gw + ox - 1) g_px = (float)(gw + ox - 1);
        if (g_py < 0) g_py = 0; if (g_py > 719) g_py = 719;
        g_pvis = 1; g_pused = now;
        if (g_pdown) touch_event(9, 2, (int)g_px, (int)g_py);
        else { int hx = (int)g_px, hy = (int)g_py; hud_touch(9, 2, &hx, &hy); ui_mouse(0x200, hx, hy, 0); }
    }
    if ((g_rstick > 0.5f || g_rstick < -0.5f) && now - lastwheel > 120) { lastwheel = now; g_pused = now; wheel(g_rstick < 0 ? 1 : -1); }
    if (g_pvis && !g_pdown && now - g_pused > 8000) g_pvis = 0;
}
static signed char g_axis[64];           // each axis: -1, 0, +1
void input_controls_load(const char *dir) {
    char p[600], line[160];
    snprintf(p, sizeof p, "%s/controls.txt", dir);
    FILE *f = fopen(p, "r");
    g_nbind = g_nmacro = 0;
    if (!f) return;
    while (fgets(line, sizeof line, f)) {
        int a, b, c;
        if (sscanf(line, "bind %d %d", &a, &b) == 2 && g_nbind < NBIND && a > 0 && a < 2048) { g_bind[g_nbind].code = a; g_bind[g_nbind++].vk = b; }
        else if (g_nmacro < 16) {
            int n = sscanf(line, "macro %d %d %d", &a, &b, &c);
            if (n >= 2 && a >= 0 && a < 9 && b > 0 && b < 2048 && (n < 3 || (c > 0 && c < 2048))) {
                g_macro[g_nmacro].slot = a; g_macro[g_nmacro].code[0] = b; g_macro[g_nmacro].code[1] = n == 3 ? c : 0;
                g_macro[g_nmacro++].n = n - 1;
            }
        }
    }
    fclose(f);
    rt_log("controls: %d bindings, %d chat macros\n", g_nbind, g_nmacro);
}
// chat macro <slot> from UserSetting.bin: open the chat line, type it, send
static void macro_fire(int slot) {
    char p[600];
    snprintf(p, sizeof p, "%s/UserSetting.bin", g_game_dir);
    FILE *f = fopen(p, "rb");
    if (!f) return;
    unsigned short t[512] = {0};
    int ok = fseek(f, 0x58 + slot * 0x400, SEEK_SET) == 0 && fread(t, 2, 511, f) > 0;
    fclose(f);
    if (!ok || !t[0]) return;
    ev_push(2, 0x0d, 1, 0, 0); ev_push(2, 0x0d, 0, 0, 0);
    ev_push(5, 0, 0, 0, 0); ev_push(5, 0, 0, 0, 0);          // two frames for the chat line to open
    int n = 0;
    for (; n < 120 && t[n]; n++) ev_push(4, t[n], 0, 0, 0);
    ev_push(2, 0x0d, 1, 0, 0); ev_push(2, 0x0d, 0, 0, 0);
    rt_log("controls: chat macro %d (%d characters)\n", slot, n);
}
// a key / button / axis direction went down or up: 1 = it is bound (macro or game key)
int input_code(int code, int down) {
    if (code <= 0 || code >= 2048) return 0;
    if (down) {
        if (g_held[code]) return 1;                                // key repeat
        g_held[code] = 1;
        for (int i = 0; i < g_nmacro; i++) {
            int has = 0, all = 1;
            for (int k = 0; k < g_macro[i].n; k++) { if (g_macro[i].code[k] == code) has = 1; if (!g_held[g_macro[i].code[k]]) all = 0; }
            if (has && all) { g_held[code] = 2; macro_fire(g_macro[i].slot); return 1; }
        }
        if (menu_mode() && pointer_code(code)) { g_held[code] = 3; ev_push(6, code, 1, 0, 0); return 1; }
    } else {
        int was = g_held[code];
        g_held[code] = 0;
        if (was == 2) return 1;
        if (was == 3) { ev_push(6, code, 0, 0, 0); return 1; }        // went down as a pointer button
    }
    int used = 0;
    for (int i = 0; i < g_nbind; i++) {
        if (g_bind[i].code != code) continue;
        used = 1;
        if (g_bind[i].vk >= 0) { ev_push(2, g_bind[i].vk, down, 0, 0); continue; }
        ev_push(2, 0x0d, down, 0, 0);                           // chat: Enter, then the phone's text box
        if (!down) plat_open_chat();
    }
    return used;
}
// sticks, d-pad hats and triggers (platforms: Android axis numbers AX_*): each direction past half way is a "key"
void input_sticks(float lx, float ly, float ry) { g_stick[0] = lx; g_stick[1] = ly; g_rstick = ry; }
void input_axis(int axis, float v) {
    if (axis < 0 || axis >= 64) return;
    int s = v > 0.5f ? 1 : v < -0.5f ? -1 : 0;
    // menus: the sticks move the pointer / scroll; a press the stick made in a race is still released
    if (menu_mode() && (axis == AX_X || axis == AX_Y || axis == AX_Z || axis == AX_RZ) && s) s = 0;
    if (s == g_axis[axis]) return;
    if (g_axis[axis]) input_code(1000 + axis * 2 + (g_axis[axis] > 0), 0);
    g_axis[axis] = (signed char)s;
    if (s) input_code(1000 + axis * 2 + (s > 0), 1);
}

void input_push(int kind, int a, int b, int c, int d) { ev_push(kind, a, b, c, d); }
