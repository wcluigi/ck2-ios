// USER32 replacement: windows, classes, message queue, timers, input state. One screen = the device surface.
#include "rt.h"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <time.h>

#define WM_CREATE 1
#define WM_DESTROY 2
#define WM_SIZE 5
#define WM_ACTIVATE 6
#define WM_SETFOCUS 7
#define WM_QUIT 0x12
#define WM_SHOWWINDOW 0x18
#define WM_ACTIVATEAPP 0x1c
#define WM_NCCREATE 0x81
#define WM_KEYDOWN 0x100
#define WM_KEYUP 0x101
#define WM_CHAR 0x102
#define WM_SYSKEYDOWN 0x104
#define WM_TIMER 0x113
#define WM_MOUSEMOVE 0x200

typedef struct { char name[64]; u32 proc, style, extra, inst, cursor, bg; } WClass;
typedef struct {
    int used; u32 hwnd, proc, style, exstyle, parent, id, userdata, inst; int x, y, w, h, visible; char cls[64], title[128];
    struct { char name[32]; u32 val; } props[16]; u32 extra[32]; GThread *thread;
} Win;
static WClass g_cls[64]; static int g_ncls;
#define NWIN 256
static Win g_win[NWIN];
static pthread_mutex_t g_umu = PTHREAD_MUTEX_INITIALIZER;
int g_screen_w = 1280, g_screen_h = 720;     // set by the platform layer
int g_screen_hz = 60;                        // display refresh rate (Android: the panel's highest, from the login screen)
static u32 g_main_hwnd;
u32 user32_main_hwnd(void) { return g_main_hwnd; }
// The render window = the one the game gives Direct3D (CreateDevice hFocusWindow); input goes there.
void user32_set_main_hwnd(u32 hwnd) { if (hwnd) { g_main_hwnd = hwnd; rt_log("main window for input: %08x\n", hwnd); } }

static Win *win_of(u32 h) { u32 i = (h - 0x10010) / 4; return h >= 0x10010 && i < NWIN && g_win[i].used ? &g_win[i] : 0; }

// ---- message queue (one per thread) ---------------------------------------------------------
typedef struct { u32 hwnd, msg, wp, lp, time, x, y; } Msg;
typedef struct MsgQueue { Msg q[1024]; int head, tail; pthread_mutex_t mu; } MsgQueue;
static MsgQueue *mq_of(GThread *t) {
    if (!t->mq) { t->mq = calloc(1, sizeof(MsgQueue)); pthread_mutex_init(&t->mq->mu, 0); }
    return t->mq;
}
static int g_mx, g_my;
static void mq_push(GThread *t, u32 hwnd, u32 msg, u32 wp, u32 lp) {
    MsgQueue *q = mq_of(t);
    pthread_mutex_lock(&q->mu);
    int nt = (q->tail + 1) % 1024;
    if (nt != q->head) { q->q[q->tail] = (Msg){hwnd, msg, wp, lp, ms_now(), (u32)g_mx, (u32)g_my}; q->tail = nt; }
    pthread_mutex_unlock(&q->mu);
}
static int mq_pop(GThread *t, u32 hwnd, u32 lo, u32 hi, int remove, Msg *out) {
    MsgQueue *q = mq_of(t);
    pthread_mutex_lock(&q->mu);
    for (int i = q->head; i != q->tail; i = (i + 1) % 1024) {
        Msg *m = &q->q[i];
        if (hwnd && m->hwnd != hwnd) continue;
        if ((lo || hi) && (m->msg < lo || m->msg > hi)) continue;
        *out = *m;
        if (remove) {          // close the gap
            for (int j = i; j != q->head;) { int p = (j + 1023) % 1024; q->q[j] = q->q[p]; j = p; }
            q->head = (q->head + 1) % 1024;
        }
        pthread_mutex_unlock(&q->mu);
        return 1;
    }
    pthread_mutex_unlock(&q->mu);
    return 0;
}

// timers
typedef struct { int used; u32 hwnd, id, ms, proc, next; GThread *t; } Timer;
static Timer g_timers[64];
static void timers_fire(GThread *t) {
    u32 now = ms_now();
    for (int i = 0; i < 64; i++) {
        Timer *tm = &g_timers[i];
        if (!tm->used || tm->t != t || (s32)(now - tm->next) < 0) continue;
        tm->next = now + (tm->ms ? tm->ms : 1);
        Msg m;
        int pending = 0;
        MsgQueue *q = mq_of(t);
        pthread_mutex_lock(&q->mu);
        for (int k = q->head; k != q->tail; k = (k + 1) % 1024) if (q->q[k].msg == WM_TIMER && q->q[k].wp == tm->id && q->q[k].hwnd == tm->hwnd) pending = 1;
        pthread_mutex_unlock(&q->mu);
        (void)m;
        if (!pending) mq_push(t, tm->hwnd, WM_TIMER, tm->id, tm->proc);
    }
}

// ---- input from the platform layer --------------------------------------------------------------
static u8 g_keys[256];          // bit 7 = down, bit 0 = toggled
static u8 g_async[256];         // pressed since last GetAsyncKeyState
void plat_pump_events(void);
void di_key_event(int vk, int down);
u32 vk_state(int vk) { return g_keys[vk & 255]; }
void ui_key(int vk, int down) {
    vk &= 255;
    di_key_event(vk, down);
    if (down) { if (!(g_keys[vk] & 0x80)) g_keys[vk] ^= 1; g_keys[vk] |= 0x80; g_async[vk] = 1; }
    else g_keys[vk] &= ~0x80;
    if (g_main_hwnd) mq_push(win_of(g_main_hwnd)->thread, g_main_hwnd, down ? WM_KEYDOWN : WM_KEYUP, (u32)vk, down ? 1u : 0xc0000001u);
}
void ui_char(u32 ch) { if (g_main_hwnd) mq_push(win_of(g_main_hwnd)->thread, g_main_hwnd, WM_CHAR, ch, 1); }
void ui_mouse(u32 msg, int x, int y, u32 buttons) {   // client coordinates of the main window
    g_mx = x; g_my = y;
    if (msg == 0x201 || msg == 0x204) g_keys[msg == 0x201 ? 1 : 2] |= 0x80, g_async[msg == 0x201 ? 1 : 2] = 1;
    if (msg == 0x202 || msg == 0x205) g_keys[msg == 0x202 ? 1 : 2] &= ~0x80;
    if (g_main_hwnd) mq_push(win_of(g_main_hwnd)->thread, g_main_hwnd, msg, buttons, ((u32)(y & 0xffff) << 16) | (u32)(x & 0xffff));
}
void ui_get_mouse(int *x, int *y) { *x = g_mx; *y = g_my; }

// ---- classes / windows --------------------------------------------------------------------------
static u32 reg_class(const char *name, u32 proc, u32 style, u32 extra, u32 inst) {
    pthread_mutex_lock(&g_umu);
    WClass *c = 0;
    for (int i = 0; i < g_ncls; i++) if (!strcasecmp(g_cls[i].name, name)) c = &g_cls[i];
    if (!c && g_ncls < 64) c = &g_cls[g_ncls++];
    if (c) { snprintf(c->name, sizeof c->name, "%s", name); c->proc = proc; c->style = style; c->extra = extra; c->inst = inst; }
    pthread_mutex_unlock(&g_umu);
    return c ? 0xc000u + (u32)(c - g_cls) : 0;
}
static const char *atom_or_str(u32 p, char *buf) {
    if (p < 0x10000) { if (p >= 0xc000 && p - 0xc000 < (u32)g_ncls) return g_cls[p - 0xc000].name; snprintf(buf, 16, "#%u", p); return buf; }
    return GS(p);
}
HLE(u_RegisterClassA) { u32 w = ARG(0); char b[16]; return reg_class(atom_or_str(M32(w + 36), b), M32(w + 4), M32(w), M32(w + 12), M32(w + 16)); }
HLE(u_RegisterClassExA) { u32 w = ARG(0); char b[16]; return reg_class(atom_or_str(M32(w + 40), b), M32(w + 8), M32(w + 4), M32(w + 16), M32(w + 20)); }

static u32 send(CPU *c, u32 hwnd, u32 msg, u32 wp, u32 lp) {
    Win *w = win_of(hwnd);
    if (!w || !w->proc) return 0;
    return guest_call(c, w->proc, 4, hwnd, msg, wp, lp);
}
HLE(u_CreateWindowExA) {
    char b[16];
    const char *cls = atom_or_str(ARG(1), b);
    WClass *k = 0;
    for (int i = 0; i < g_ncls; i++) if (!strcasecmp(g_cls[i].name, cls)) k = &g_cls[i];
    pthread_mutex_lock(&g_umu);
    int i = 0;
    while (i < NWIN && g_win[i].used) i++;
    if (i == NWIN) { pthread_mutex_unlock(&g_umu); return 0; }
    Win *w = &g_win[i];
    memset(w, 0, sizeof *w);
    w->used = 1; w->hwnd = 0x10010 + 4 * (u32)i;
    w->exstyle = ARG(0); w->style = ARG(3);
    w->x = (s32)ARG(4) == (s32)0x80000000 ? 0 : (s32)ARG(4); w->y = (s32)ARG(5) == (s32)0x80000000 ? 0 : (s32)ARG(5);
    w->w = (s32)ARG(6) == (s32)0x80000000 ? g_screen_w : (s32)ARG(6); w->h = (s32)ARG(7) == (s32)0x80000000 ? g_screen_h : (s32)ARG(7);
    w->parent = ARG(8); w->id = ARG(9); w->inst = ARG(10);
    w->proc = k ? k->proc : 0;
    w->thread = cur_thread();
    snprintf(w->cls, sizeof w->cls, "%s", cls);
    snprintf(w->title, sizeof w->title, "%s", ARG(2) ? GS(ARG(2)) : "");
    pthread_mutex_unlock(&g_umu);
    rt_log("CreateWindow '%s' class '%s' %dx%d style %08x -> %08x\n", w->title, w->cls, w->w, w->h, w->style, w->hwnd);
    if (!w->parent && (w->style & 0x10000000u || !g_main_hwnd) && strcasecmp(cls, "ScrollBar")) {
        if (w->w > 320 && w->h > 200) g_main_hwnd = w->hwnd;      // the game's render window
    }
    u32 cs = galloc(48);
    for (int a = 0; a < 12; a++) M32(cs + 4 * a) = 0;
    M32(cs) = ARG(11); M32(cs + 4) = ARG(10); M32(cs + 8) = ARG(9); M32(cs + 12) = ARG(8);
    M32(cs + 16) = (u32)w->h; M32(cs + 20) = (u32)w->w; M32(cs + 24) = (u32)w->y; M32(cs + 28) = (u32)w->x;
    M32(cs + 32) = ARG(3); M32(cs + 36) = ARG(2); M32(cs + 40) = ARG(1); M32(cs + 44) = ARG(0);
    u32 hwnd = w->hwnd;
    send(c, hwnd, WM_NCCREATE, 0, cs);
    send(c, hwnd, WM_CREATE, 0, cs);
    gfree(cs);
    if (win_of(hwnd) && (win_of(hwnd)->style & 0x10000000u)) win_of(hwnd)->visible = 1;
    return hwnd;
}
HLE(u_DefWindowProcA) { return ARG(1) == WM_NCCREATE ? 1 : 0; }
HLE(u_DestroyWindow) { Win *w = win_of(ARG(0)); if (w) { send(c, ARG(0), WM_DESTROY, 0, 0); w->used = 0; if (g_main_hwnd == ARG(0)) g_main_hwnd = 0; } return 1; }
HLE(u_ShowWindow) {
    Win *w = win_of(ARG(0));
    if (!w) return 0;
    int was = w->visible;
    w->visible = ARG(1) != 0;
    if (!was && w->visible) {
        send(c, ARG(0), WM_SHOWWINDOW, 1, 0);
        send(c, ARG(0), WM_ACTIVATEAPP, 1, 0);
        send(c, ARG(0), WM_ACTIVATE, 1, 0);
        send(c, ARG(0), WM_SETFOCUS, 0, 0);
        send(c, ARG(0), WM_SIZE, 0, ((u32)w->h << 16) | (u32)w->w);
    }
    return (u32)was;
}
HLE(u_UpdateWindow) { return 1; }
HLE(u_IsWindow) { return win_of(ARG(0)) != 0; }
HLE(u_IsIconic) { return 0; }
HLE(u_GetClientRect) { Win *w = win_of(ARG(0)); u32 r = ARG(1); M32(r) = 0; M32(r + 4) = 0; M32(r + 8) = w ? (u32)w->w : (u32)g_screen_w; M32(r + 12) = w ? (u32)w->h : (u32)g_screen_h; return 1; }
HLE(u_GetWindowRect) { Win *w = win_of(ARG(0)); u32 r = ARG(1); M32(r) = w ? (u32)w->x : 0; M32(r + 4) = w ? (u32)w->y : 0; M32(r + 8) = w ? (u32)(w->x + w->w) : (u32)g_screen_w; M32(r + 12) = w ? (u32)(w->y + w->h) : (u32)g_screen_h; return 1; }
HLE(u_AdjustWindowRect) { return 1; }          // no borders on a phone: client = window
HLE(u_ClientToScreen) { Win *w = win_of(ARG(0)); if (w) { M32(ARG(1)) += (u32)w->x; M32(ARG(1) + 4) += (u32)w->y; } return 1; }
HLE(u_MapWindowPoints) { return 0; }
HLE(u_MoveWindow) {
    Win *w = win_of(ARG(0));
    if (w) { w->x = (s32)ARG(1); w->y = (s32)ARG(2); w->w = (s32)ARG(3); w->h = (s32)ARG(4); send(c, ARG(0), WM_SIZE, 0, ((u32)w->h << 16) | (u32)w->w); }
    return 1;
}
HLE(u_SetWindowPos) {
    Win *w = win_of(ARG(0));
    u32 fl = ARG(6);
    if (w) {
        if (!(fl & 2)) { w->x = (s32)ARG(2); w->y = (s32)ARG(3); }
        if (!(fl & 1)) { w->w = (s32)ARG(4); w->h = (s32)ARG(5); send(c, ARG(0), WM_SIZE, 0, ((u32)w->h << 16) | (u32)w->w); }
        if (fl & 0x40) w->visible = 1;
        if (fl & 0x80) w->visible = 0;
    }
    return 1;
}
HLE(u_GetWindowLongA) {
    Win *w = win_of(ARG(0));
    s32 i = (s32)ARG(1);
    if (!w) return 0;
    switch (i) {
    case -4: return w->proc;
    case -6: return w->inst;
    case -8: return w->parent;
    case -12: return w->id;
    case -16: return w->style;
    case -20: return w->exstyle;
    case -21: return w->userdata;
    default: return i >= 0 && i / 4 < 32 ? w->extra[i / 4] : 0;
    }
}
HLE(u_SetWindowLongA) {
    Win *w = win_of(ARG(0));
    s32 i = (s32)ARG(1);
    u32 v = ARG(2), old = 0;
    if (!w) return 0;
    switch (i) {
    case -4: old = w->proc; w->proc = v; break;
    case -16: old = w->style; w->style = v; break;
    case -20: old = w->exstyle; w->exstyle = v; break;
    case -21: old = w->userdata; w->userdata = v; break;
    default: if (i >= 0 && i / 4 < 32) { old = w->extra[i / 4]; w->extra[i / 4] = v; }
    }
    return old;
}
HLE(u_SetPropA) {
    Win *w = win_of(ARG(0));
    if (!w) return 0;
    char b[16]; const char *n = atom_or_str(ARG(1), b);
    for (int i = 0; i < 16; i++) if (w->props[i].name[0] && !strcmp(w->props[i].name, n)) { w->props[i].val = ARG(2); return 1; }
    for (int i = 0; i < 16; i++) if (!w->props[i].name[0]) { snprintf(w->props[i].name, 32, "%s", n); w->props[i].val = ARG(2); return 1; }
    return 0;
}
HLE(u_GetPropA) {
    Win *w = win_of(ARG(0));
    if (!w) return 0;
    char b[16]; const char *n = atom_or_str(ARG(1), b);
    for (int i = 0; i < 16; i++) if (!strcmp(w->props[i].name, n)) return w->props[i].val;
    return 0;
}
HLE(u_FindWindowA) {
    char b[16];
    const char *cls = ARG(0) ? atom_or_str(ARG(0), b) : 0, *title = ARG(1) ? GS(ARG(1)) : 0;
    for (int i = 0; i < NWIN; i++)
        if (g_win[i].used && (!cls || !strcasecmp(g_win[i].cls, cls)) && (!title || !strcmp(g_win[i].title, title))) return g_win[i].hwnd;
    return 0;
}
HLE(u_EnumWindows) {
    u32 cb = ARG(0), lp = ARG(1);
    for (int i = 0; i < NWIN; i++)
        if (g_win[i].used && !g_win[i].parent && !guest_call(c, cb, 2, g_win[i].hwnd, lp)) break;
    return 1;
}
HLE(u_GetForegroundWindow) { return g_main_hwnd; }
HLE(u_ret_main) { return g_main_hwnd; }
HLE(u_ret1) { return 1; }
HLE(u_ret0) { return 0; }
HLE(u_GetWindowThreadProcessId) { if (ARG(1)) M32(ARG(1)) = 1234; return 1000; }
HLE(u_GetWindowPlacement) { u32 p = ARG(1); memset(HP(p), 0, 44); M32(p) = 44; M32(p + 8) = 1; return 1; }
HLE(u_GetMenu) { return 0; }

// ---- messages --------------------------------------------------------------------------------------
HLE(u_PeekMessageA) {
    GThread *t = cur_thread();
    plat_pump_events();
    timers_fire(t);
    Msg m;
    if (!mq_pop(t, ARG(1), ARG(2), ARG(3), (ARG(4) & 1) != 0, &m)) return 0;
    u32 p = ARG(0);
    M32(p) = m.hwnd; M32(p + 4) = m.msg; M32(p + 8) = m.wp; M32(p + 12) = m.lp; M32(p + 16) = m.time; M32(p + 20) = m.x; M32(p + 24) = m.y;
    return 1;
}
HLE(u_GetMessageA) {
    GThread *t = cur_thread();
    Msg m;
    for (;;) {
        plat_pump_events();
        timers_fire(t);
        if (mq_pop(t, ARG(1), ARG(2), ARG(3), 1, &m)) break;
        struct timespec ts = {0, 2000000};
        nanosleep(&ts, 0);
    }
    u32 p = ARG(0);
    M32(p) = m.hwnd; M32(p + 4) = m.msg; M32(p + 8) = m.wp; M32(p + 12) = m.lp; M32(p + 16) = m.time; M32(p + 20) = m.x; M32(p + 24) = m.y;
    return m.msg != WM_QUIT;
}
HLE(u_WaitMessage) {
    GThread *t = cur_thread();
    Msg m;
    for (int i = 0; i < 50; i++) {
        plat_pump_events();
        timers_fire(t);
        if (mq_pop(t, 0, 0, 0, 0, &m)) break;
        struct timespec ts = {0, 2000000};
        nanosleep(&ts, 0);
    }
    return 1;
}
HLE(u_DispatchMessageA) {
    u32 p = ARG(0), hwnd = M32(p), msg = M32(p + 4), wp = M32(p + 8), lp = M32(p + 12);
    if (msg == WM_TIMER && lp) return guest_call(c, lp, 4, hwnd, msg, wp, ms_now());
    return send(c, hwnd, msg, wp, lp);
}
HLE(u_TranslateMessage) {
    u32 p = ARG(0), msg = M32(p + 4), vk = M32(p + 8);
    if (msg != WM_KEYDOWN) return 0;
    u32 ch = 0;
    int shift = (g_keys[0x10] & 0x80) != 0;
    if (vk >= 'A' && vk <= 'Z') ch = shift ^ (g_keys[0x14] & 1) ? vk : vk + 32;
    else if (vk >= '0' && vk <= '9') ch = vk;
    else if (vk == 0x20 || vk == 0x0d || vk == 0x08 || vk == 0x1b || vk == 0x09) ch = vk;
    if (ch) mq_push(cur_thread(), M32(p), WM_CHAR, ch, M32(p + 12));
    return ch != 0;
}
HLE(u_SendMessageA) { return send(c, ARG(0), ARG(1), ARG(2), ARG(3)); }
HLE(u_PostMessageA) {
    Win *w = win_of(ARG(0));
    mq_push(w ? w->thread : cur_thread(), ARG(0), ARG(1), ARG(2), ARG(3));
    return 1;
}
void user32_post(u32 hwnd, u32 msg, u32 wp, u32 lp) {     // for other replacements (sockets)
    Win *w = win_of(hwnd);
    if (w) mq_push(w->thread, hwnd, msg, wp, lp);
}
HLE(u_PostQuitMessage) { mq_push(cur_thread(), 0, WM_QUIT, ARG(0), 0); return 0; }
HLE(u_SetTimer) {
    u32 hwnd = ARG(0), id = ARG(1);
    for (int i = 0; i < 64; i++)
        if (g_timers[i].used && g_timers[i].hwnd == hwnd && g_timers[i].id == id) { g_timers[i].ms = ARG(2); g_timers[i].proc = ARG(3); return id ? id : 1; }
    for (int i = 0; i < 64; i++)
        if (!g_timers[i].used) {
            g_timers[i] = (Timer){1, hwnd, id ? id : (u32)(i + 1), ARG(2), ARG(3), ms_now() + ARG(2), cur_thread()};
            return g_timers[i].id;
        }
    return 0;
}
HLE(u_KillTimer) {
    for (int i = 0; i < 64; i++) if (g_timers[i].used && g_timers[i].hwnd == ARG(0) && g_timers[i].id == ARG(1)) g_timers[i].used = 0;
    return 1;
}

// ---- input / cursor --------------------------------------------------------------------------------
HLE(u_GetAsyncKeyState) { u32 vk = ARG(0) & 255; u32 r = (g_keys[vk] & 0x80 ? 0x8000u : 0) | g_async[vk]; g_async[vk] = 0; return r; }
HLE(u_GetKeyState) { u32 vk = ARG(0) & 255; return (g_keys[vk] & 0x80 ? 0xff80u : 0) | (g_keys[vk] & 1); }
HLE(u_GetCursorPos) { M32(ARG(0)) = (u32)g_mx; M32(ARG(0) + 4) = (u32)g_my; return 1; }
// Windows' display counter: the game hides the cursor with `while (ShowCursor(FALSE) >= 0);` before a race
static s32 g_cursor_count;
HLE(u_ShowCursor) { return (u32)(ARG(0) ? ++g_cursor_count : --g_cursor_count); }
int user32_cursor_hidden(void) { return g_cursor_count < 0; }      // races: the touch controls show
HLE(u_LoadRes) { return 0x7000 + (ARG(1) & 0xfff); }
HLE(u_GetSystemMetrics) {
    switch (ARG(0)) {
    case 0: case 16: return (u32)g_screen_w;
    case 1: case 17: return (u32)g_screen_h;
    case 4: return 0;
    case 32: case 33: return 0;
    default: return 0;
    }
}
HLE(u_SystemParametersInfoA) {
    if (ARG(0) == 0x30 && ARG(2)) { M32(ARG(2)) = 0; M32(ARG(2) + 4) = 0; M32(ARG(2) + 8) = (u32)g_screen_w; M32(ARG(2) + 12) = (u32)g_screen_h; }
    return 1;
}
HLE(u_EnumDisplaySettingsA) {
    u32 mode = ARG(1), dm = ARG(2);
    if (mode != 0xffffffffu && mode != 0xfffffffeu && mode > 0) return 0;
    memset(HP(dm + 32), 0, 124);       // keep dmDeviceName untouched? clear the rest
    M16(dm + 36) = 156; M32(dm + 40) = 0x5c0000;
    M32(dm + 104) = 32; M32(dm + 108) = (u32)g_screen_w; M32(dm + 112) = (u32)g_screen_h;
    M32(dm + 120) = (u32)g_screen_hz;         // the client's frame limiter caps at this with [Option] VSync=1
    return 1;
}
HLE(u_MessageBoxA) {
    rt_log("MessageBox '%s': %s\n", ARG(2) ? GS(ARG(2)) : "", ARG(1) ? GS(ARG(1)) : "");
    void plat_message_box(const char *title, const char *text);
    plat_message_box(ARG(2) ? GS(ARG(2)) : "", ARG(1) ? GS(ARG(1)) : "");
    return 1;
}
HLE(u_CharUpperA) {
    u32 p = ARG(0);
    if (p < 0x10000) return p >= 'a' && p <= 'z' ? p - 32 : p;
    for (char *s = GS(p); *s; s++) if (*s >= 'a' && *s <= 'z') *s -= 32;
    return p;
}
HLE(u_LoadStringA) { if (ARG(3)) M8(ARG(2)) = 0; return 0; }
HLE(u_GetKeyNameTextA) { return 0; }
HLE(u_GetClipboardData) { return 0; }

#define U(n, f, a) DEF("user32", n, f, a)
static const HleDef defs[] = {
    U("RegisterClassA", u_RegisterClassA, 1), U("RegisterClassExA", u_RegisterClassExA, 1), U("CreateWindowExA", u_CreateWindowExA, 12),
    U("DefWindowProcA", u_DefWindowProcA, 4), U("DestroyWindow", u_DestroyWindow, 1), U("ShowWindow", u_ShowWindow, 2),
    U("UpdateWindow", u_UpdateWindow, 1), U("IsWindow", u_IsWindow, 1), U("IsIconic", u_IsIconic, 1), U("GetClientRect", u_GetClientRect, 2),
    U("GetWindowRect", u_GetWindowRect, 2), U("AdjustWindowRect", u_AdjustWindowRect, 3), U("AdjustWindowRectEx", u_AdjustWindowRect, 4),
    U("ClientToScreen", u_ClientToScreen, 2), U("MapWindowPoints", u_MapWindowPoints, 4), U("MoveWindow", u_MoveWindow, 6),
    U("SetWindowPos", u_SetWindowPos, 7), U("GetWindowLongA", u_GetWindowLongA, 2), U("SetWindowLongA", u_SetWindowLongA, 3),
    U("SetPropA", u_SetPropA, 3), U("GetPropA", u_GetPropA, 2), U("FindWindowA", u_FindWindowA, 2), U("EnumWindows", u_EnumWindows, 2),
    U("GetForegroundWindow", u_GetForegroundWindow, 0), U("SetForegroundWindow", u_ret1, 1), U("SetActiveWindow", u_ret_main, 1),
    U("BringWindowToTop", u_ret1, 1), U("CloseWindow", u_ret1, 1), U("AttachThreadInput", u_ret1, 3),
    U("GetWindowThreadProcessId", u_GetWindowThreadProcessId, 2), U("GetWindowPlacement", u_GetWindowPlacement, 2), U("GetMenu", u_GetMenu, 1),
    U("PeekMessageA", u_PeekMessageA, 5), U("GetMessageA", u_GetMessageA, 4), U("WaitMessage", u_WaitMessage, 0),
    U("DispatchMessageA", u_DispatchMessageA, 1), U("TranslateMessage", u_TranslateMessage, 1), U("SendMessageA", u_SendMessageA, 4),
    U("PostMessageA", u_PostMessageA, 4), U("PostQuitMessage", u_PostQuitMessage, 1), U("SetTimer", u_SetTimer, 4), U("KillTimer", u_KillTimer, 2),
    U("GetAsyncKeyState", u_GetAsyncKeyState, 1), U("GetKeyState", u_GetKeyState, 1), U("GetCursorPos", u_GetCursorPos, 1),
    U("SetCursorPos", u_ret1, 2), U("ShowCursor", u_ShowCursor, 1), U("ClipCursor", u_ret1, 1), U("SetCapture", u_ret0, 1),
    U("ReleaseCapture", u_ret1, 0), U("GetCapture", u_ret0, 0), U("LoadCursorA", u_LoadRes, 2), U("LoadCursorFromFileA", u_LoadRes, 1),
    U("LoadIconA", u_LoadRes, 2), U("GetSystemMetrics", u_GetSystemMetrics, 1), U("SystemParametersInfoA", u_SystemParametersInfoA, 4),
    U("EnumDisplaySettingsA", u_EnumDisplaySettingsA, 3), U("ChangeDisplaySettingsA", u_ret0, 2), U("MessageBoxA", u_MessageBoxA, 4),
    U("CharUpperA", u_CharUpperA, 1), U("LoadStringA", u_LoadStringA, 4), U("ActivateKeyboardLayout", u_ret1, 2),
    U("GetKeyboardLayout", u_ret1, 1), U("LoadKeyboardLayoutA", u_ret1, 2), U("UnloadKeyboardLayout", u_ret1, 1),
    U("GetKeyNameTextA", u_GetKeyNameTextA, 3), U("SetWindowsHookExA", u_ret1, 4), U("UnhookWindowsHookEx", u_ret1, 1),
    U("CallNextHookEx", u_ret0, 4), U("OpenClipboard", u_ret0, 1), U("CloseClipboard", u_ret1, 0), U("EmptyClipboard", u_ret1, 0),
    U("GetClipboardData", u_GetClipboardData, 1), U("SetClipboardData", u_ret0, 2),
};
void hle_user32_init(void) { hle_add(defs, (int)(sizeof defs / sizeof defs[0])); }
