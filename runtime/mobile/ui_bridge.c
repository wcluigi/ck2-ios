// The phone UI bridge (9 Nov 2026, the user: "go html" -- the Claude design as the real UI). An HTML page (webui/,
// shown full screen over the game by the platform) reads what the game shows and presses the game's own controls by
// name, so every rule stays the game's.
//
//   http://127.0.0.1:6930/ui/...                 the page's files (<image dir>/webui, or $CK_WEBUI on the bench)
//   /api/state?t=TOKEN&n=A,B,...                 {"frame":..,"c":{"A":{"v":1,"t":"text","r":[x,y,w,h]},...}}
//   /api/click?t=TOKEN&n=NAME                    move + press + release on the control's centre (game mouse)
//   /api/char?t=TOKEN&s=TEXT                     WM_CHARs (GBK) to the focused game control
//   /api/key?t=TOKEN&vk=13                       key down + up
// The HTTP thread only queues requests; the game thread (ui_bridge_tick, once a frame) answers them, so the GUI tree
// is never read while the game changes it. TOKEN is random per run (log line "ui: page"), so other apps on the phone
// cannot drive the game.
//
// GUI objects (reverse engineered on the desktop bench, 9 Nov): +0x04 type std::string ("Frame", "TextBox", ...),
// +0x20 name std::string, +0x3c..+0x3f flags (+0x3e visible), +0x44 rect as floats x1,y1,x2,y2 relative to the parent
// (800x600 design px), +0x5c parent, +0x64 children std::list (node +0 next, +8 control); TextBox text std::string +0x180.
// Debug: <game>/uidump.txt -> <game>/uidump_out.txt (the tree with every readable string field).
#include "rt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#ifdef _WIN32
#include <winsock2.h>
typedef int socklen_t;
#define CLOSESOCK closesocket
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define CLOSESOCK close
#endif

#define NROOTS 64
#define PORT 6930
static u32 g_roots[NROOTS];
static int g_nroots;
static char g_token[40];
const char *ui_page_url(void);

void ui_note_root(u32 self) {                   // from native_gui_find_child: every control the game searches under
    for (int i = 0; i < g_nroots; i++) if (g_roots[i] == self) return;
    if (g_nroots < NROOTS) g_roots[g_nroots++] = self;
}

// ---- the GUI tree --------------------------------------------------------------------------------------------------
static u32 str_data(u32 s) { return M32(s + 0x18) >= 16 ? M32(s + 4) : s + 4; }
static int gui_name(u32 ctl, char *out, int n) {
    u32 len = M32(ctl + 0x20 + 0x14);
    if (len >= (u32)n) len = n - 1;
    memcpy(out, HP(str_data(ctl + 0x20)), len);
    out[len] = 0;
    return (int)len;
}
// a VC7.1 std::string at a holding readable text -> its length (copied to out), else -1
static int str_at(u32 a, char *out, int n) {
    u32 len = M32(a + 0x14), cap = M32(a + 0x18);
    if (len > 1000 || cap < 15 || cap < len || cap > 1u << 20) return -1;
    u32 d = cap >= 16 ? M32(a + 4) : a + 4;
    if (cap >= 16 && (d < 0x10000 || d > 0xf0000000u)) return -1;
    int k = 0;
    for (u32 i = 0; i < len && k < n - 1; i++) out[k++] = (char)M8(d + i);
    out[k] = 0;
    return k;
}
static int is_type(u32 ctl, const char *t) {
    char b[24];
    return str_at(ctl + 4, b, sizeof b) > 0 && !strcmp(b, t);
}
static int shown(u32 ctl) {                      // visible itself and every parent
    for (int d = 0; ctl && d < 40; d++, ctl = M32(ctl + 0x5c)) if (!M8(ctl + 0x3e)) return 0;
    return 1;
}
static void abs_rect(u32 ctl, float r[4]) {      // design px, absolute
    float x = 0, y = 0;
    memcpy(r, HP(ctl + 0x44), 16);
    for (u32 p = M32(ctl + 0x5c), d = 0; p && d < 40; p = M32(p + 0x5c), d++) { x += *(float *)HP(p + 0x44); y += *(float *)HP(p + 0x48); }
    r[2] -= r[0]; r[3] -= r[1];
    r[0] += x; r[1] += y;
}
static u32 find_in(u32 ctl, const char *nm, u32 nlen, int depth, u32 *budget, int want_shown) {
    if (depth > 40) return 0;
    u32 head = M32(ctl + 0x64);
    if (!head) return 0;
    for (u32 node = M32(head); node && node != head; node = M32(node)) {
        if (!--*budget) return 0;
        u32 c = M32(node + 8);
        if (!c) continue;
        if (M32(c + 0x34) == nlen && !memcmp(HP(str_data(c + 0x20)), nm, nlen) && (!want_shown || shown(c))) return c;
        u32 r = find_in(c, nm, nlen, depth + 1, budget, want_shown);
        if (r) return r;
    }
    return 0;
}
static u32 find_one(const char *nm) {            // a shown control of that name first, else any
    u32 nlen = (u32)strlen(nm);
    for (int pass = 1; pass >= 0; pass--)
        for (int i = 0; i < g_nroots; i++) {
            u32 budget = 200000, r = find_in(g_roots[i], nm, nlen, 0, &budget, pass);
            if (r) return r;
        }
    return 0;
}
static u32 ui_find(const char *path) {           // "Name" or "Parent/Child" (the room rows share child names)
    char p[160];
    snprintf(p, sizeof p, "%s", path);
    char *slash = strchr(p, '/');
    if (!slash) return find_one(p);
    *slash = 0;
    u32 parent = find_one(p);
    if (!parent) return 0;
    for (char *s = slash + 1; s && *s && parent;) {
        char *e = strchr(s, '/');
        if (e) *e = 0;
        u32 budget = 200000;
        parent = find_in(parent, s, (u32)strlen(s), 0, &budget, 0);
        s = e ? e + 1 : 0;
    }
    return parent;
}

// ---- requests (HTTP thread -> game thread) --------------------------------------------------------------------------
typedef struct { char path[64]; char q[4096]; char *reply; int done; } Req;
static Req *g_req;
static pthread_mutex_t g_mu = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t g_cv = PTHREAD_COND_INITIALIZER;

static int qget(const char *q, const char *key, char *out, int n) {     // ?key=value (url-decoded)
    size_t kl = strlen(key);
    for (const char *p = q; p && *p; p = strchr(p, '&') ? strchr(p, '&') + 1 : 0) {
        if (!strncmp(p, key, kl) && p[kl] == '=') {
            const char *v = p + kl + 1;
            int k = 0;
            for (; *v && *v != '&' && k < n - 1; v++) {
                if (*v == '%' && v[1] && v[2]) { char h[3] = {v[1], v[2], 0}; out[k++] = (char)strtol(h, 0, 16); v += 2; }
                else out[k++] = *v == '+' ? ' ' : *v;
            }
            out[k] = 0;
            return 1;
        }
    }
    return 0;
}

typedef struct { char *b; size_t n, cap; } Buf;
static void put(Buf *o, const char *s, size_t n) {
    if (o->n + n + 1 > o->cap) { o->cap = (o->n + n + 1) * 2; o->b = realloc(o->b, o->cap); }
    memcpy(o->b + o->n, s, n);
    o->n += n;
    o->b[o->n] = 0;
}
static void puts_(Buf *o, const char *s) { put(o, s, strlen(s)); }
static int is_utf8(const u8 *s) {                         // valid UTF-8 with at least one multi-byte character
    int multi = 0;
    while (*s) {
        if (*s < 0x80) { s++; continue; }
        int n = (*s & 0xe0) == 0xc0 ? 1 : (*s & 0xf0) == 0xe0 ? 2 : (*s & 0xf8) == 0xf0 ? 3 : -1;
        if (n < 0) return 0;
        for (int i = 1; i <= n; i++) if ((s[i] & 0xc0) != 0x80) return 0;
        s += n + 1;
        multi = 1;
    }
    return multi;
}
static void put_json_str(Buf *o, const char *s) {          // the game's text (GBK, or UTF-8 names) -> a JSON string
    puts_(o, "\"");
    if (is_utf8((const u8 *)s)) {                            // player names from the server arrive as UTF-8
        for (const u8 *p = (const u8 *)s; *p; p++) {
            char e[8];
            if (*p == '"' || *p == '\\') { e[0] = '\\'; e[1] = (char)*p; put(o, e, 2); }
            else if (*p < 32) { snprintf(e, sizeof e, "\\u%04x", *p); puts_(o, e); }
            else put(o, (const char *)p, 1);
        }
        puts_(o, "\"");
        return;
    }
    for (const u8 *p = (const u8 *)s; *p; p++) {
        char e[8];
        if (*p == '"' || *p == '\\') { e[0] = '\\'; e[1] = (char)*p; put(o, e, 2); }
        else if (*p < 32) { snprintf(e, sizeof e, "\\u%04x", *p); puts_(o, e); }
        else if (*p >= 0x81 && p[1] >= 0x40) {                 // a GBK pair
            u16 u = 0x3f;
            gbk_to_utf16(p, 2, &u, 1);
            p++;
            if (u < 0x800) { e[0] = (char)(0xc0 | u >> 6); e[1] = (char)(0x80 | (u & 63)); put(o, e, 2); }
            else { e[0] = (char)(0xe0 | u >> 12); e[1] = (char)(0x80 | ((u >> 6) & 63)); e[2] = (char)(0x80 | (u & 63)); put(o, e, 3); }
        } else put(o, (const char *)p, 1);
    }
    puts_(o, "\"");
}

static char *api_state(const char *q) {
    char names[4000], nm[80], txt[1100], tmp[160];
    Buf o = {0};
    puts_(&o, "{\"c\":{");
    if (qget(q, "n", names, sizeof names)) {
        int first = 1;
        for (char *s = names, *e; s && *s; s = e ? e + 1 : 0) {
            e = strchr(s, ',');
            int l = e ? (int)(e - s) : (int)strlen(s);
            if (l <= 0 || l >= (int)sizeof nm) continue;
            memcpy(nm, s, l); nm[l] = 0;
            u32 c = ui_find(nm);
            if (!first) puts_(&o, ",");
            first = 0;
            put_json_str(&o, nm);
            if (!c) { puts_(&o, ":null"); continue; }
            float r[4];
            abs_rect(c, r);
            snprintf(tmp, sizeof tmp, ":{\"v\":%d,\"r\":[%.0f,%.0f,%.0f,%.0f]", shown(c), r[0], r[1], r[2], r[3]);
            puts_(&o, tmp);
            int tx = is_type(c, "TextBox") ? 0x180 : is_type(c, "SwitchTextBox") ? 0x2a8 : 0;   // SwitchTextBox: room names
            if (tx && str_at(c + tx, txt, sizeof txt) >= 0) { puts_(&o, ",\"t\":"); put_json_str(&o, txt); }
            puts_(&o, "}");
        }
    }
    puts_(&o, "}}");
    return o.b;
}

// the screens up now, sorted and joined with '+': the shown Frame-type controls one and two levels under a "Desktop"
// root (GameChannelFrame holds the lobby, the room, the shop, the friend list, popups ...). The page is shown only
// while this matches one of the screens it has drawn.
static void add_frame(u32 x, char names[][64], int *k) {
    if (!x || !M8(x + 0x3e) || *k >= 48 || !(is_type(x, "Frame") || is_type(x, "AnimFrame"))) return;
    gui_name(x, names[*k], 64);
    for (int j = 0; j < *k; j++) if (!strcmp(names[j], names[*k])) return;
    (*k)++;
}
static int frames_now(char *out, int n) {
    char names[48][64];
    int k = 0;
    for (int i = 0; i < g_nroots; i++) {
        u32 root = g_roots[i], head = M32(root + 0x64), budget = 8000;
        if (!head || !is_type(root, "Desktop") || !M8(root + 0x3e)) continue;
        for (u32 node = M32(head); node && node != head && --budget; node = M32(node)) {
            u32 c = M32(node + 8);
            if (!c || !M8(c + 0x3e)) continue;
            add_frame(c, names, &k);
            u32 h2 = M32(c + 0x64);
            if (!h2) continue;
            for (u32 n2 = M32(h2); n2 && n2 != h2 && --budget; n2 = M32(n2)) add_frame(M32(n2 + 8), names, &k);
        }
    }
    for (int a = 0; a < k; a++) for (int b = a + 1; b < k; b++)
        if (strcmp(names[a], names[b]) > 0) { char t[64]; memcpy(t, names[a], 64); memcpy(names[a], names[b], 64); memcpy(names[b], t, 64); }
    int l = 0;
    out[0] = 0;
    for (int a = 0; a < k && l < n - 66; a++) l += snprintf(out + l, n - l, "%s%s", a ? "+" : "", names[a]);
    return l;
}
static char *api_frames(void) {
    char f[3200];
    Buf o = {0};
    frames_now(f, sizeof f);
    puts_(&o, "{\"f\":");
    put_json_str(&o, f);
    puts_(&o, "}");
    return o.b;
}

// the screens the page draws (it says so at load: /api/support?s=GameChannelFrame+GameRoomFrame|...), and whether the
// page is up now -- the platform shows or hides its full-screen web view when this changes (plat_ui_show)
static char g_support[2048];
void plat_ui_show(const char *url, int visible);
static char *api_support(const char *q) {
    qget(q, "s", g_support, sizeof g_support);
    rt_log("ui: page draws %s\n", g_support);
    return strdup("{\"ok\":1}");
}
static void update_visible(void) {
    static int vis = -1;
    char f[3200], *s, *e;
    frames_now(f, sizeof f);
    int want = 0;
    for (s = g_support; *s && !want; s = e ? e + 1 : s + strlen(s)) {
        e = strchr(s, '|');
        size_t l = e ? (size_t)(e - s) : strlen(s);
        if (l && l == strlen(f) && !strncmp(s, f, l)) want = 1;
    }
    if (want != vis) {
        vis = want;
        rt_log("ui: page %s (%s)\n", want ? "shown" : "hidden", f);
        plat_ui_show(ui_page_url(), want);
    }
}

// a press in progress: move, down, up over a few frames (the game's buttons fire on release)
static int g_press_x, g_press_y, g_press_step = -1;
static char *api_click(const char *q) {
    char nm[80];
    if (!qget(q, "n", nm, sizeof nm)) return strdup("{\"ok\":0}");
    u32 c = ui_find(nm);
    if (!c || !shown(c)) return strdup("{\"ok\":0,\"why\":\"not shown\"}");
    float r[4];
    abs_rect(c, r);
    g_press_x = (int)(160 + (r[0] + r[2] / 2) * 1.2f);        // 800x600 design -> the 1280x720 client
    g_press_y = (int)((r[1] + r[3] / 2) * 1.2f);
    g_press_step = 0;
    return strdup("{\"ok\":1}");
}
void ui_char(u32 ch);
void ui_key(int vk, int down);
void ui_mouse(u32 msg, int x, int y, u32 buttons);
static char *api_char(const char *q) {
    char s[600];
    if (!qget(q, "s", s, sizeof s)) return strdup("{\"ok\":0}");
    for (const u8 *p = (const u8 *)s; *p;) {                  // UTF-8 -> unicode -> GBK WM_CHARs (lead byte first)
        u32 u = *p++;
        if (u >= 0xe0 && p[0] && p[1]) { u = (u & 15) << 12 | (p[0] & 63) << 6 | (p[1] & 63); p += 2; }
        else if (u >= 0xc0 && p[0]) { u = (u & 31) << 6 | (p[0] & 63); p++; }
        if (u < 0x80) { ui_char(u); continue; }
        u16 w = (u16)u;
        u8 g[4];
        int k = utf16_to_gbk(&w, 1, g, sizeof g);
        for (int i = 0; i < k; i++) ui_char(g[i]);
    }
    return strdup("{\"ok\":1}");
}
static char *api_key(const char *q) {
    char v[16];
    if (!qget(q, "vk", v, sizeof v)) return strdup("{\"ok\":0}");
    int vk = atoi(v);
    ui_key(vk, 1);
    ui_key(vk, 0);
    return strdup("{\"ok\":1}");
}

static void dump(void);
void ui_bridge_start(void);
void ui_bridge_tick(void) {                      // game thread, once a frame
    static u32 n;
    if (!n) ui_bridge_start();
    if (g_press_step >= 0) {                     // the press: move (0), down (2), up (5)
        if (g_press_step == 0) ui_mouse(0x200, g_press_x, g_press_y, 0);
        if (g_press_step == 2) ui_mouse(0x201, g_press_x, g_press_y, 1);
        if (g_press_step == 5) { ui_mouse(0x202, g_press_x, g_press_y, 0); g_press_step = -2; }
        g_press_step++;
    }
    pthread_mutex_lock(&g_mu);
    if (g_req && !g_req->done) {
        Req *r = g_req;
        r->reply = !strcmp(r->path, "/api/state") ? api_state(r->q) : !strcmp(r->path, "/api/click") ? api_click(r->q)
                 : !strcmp(r->path, "/api/char") ? api_char(r->q) : !strcmp(r->path, "/api/key") ? api_key(r->q)
                 : !strcmp(r->path, "/api/frames") ? api_frames() : !strcmp(r->path, "/api/support") ? api_support(r->q)
                 : strdup("{\"error\":\"unknown\"}");
        r->done = 1;
        pthread_cond_broadcast(&g_cv);
    }
    pthread_mutex_unlock(&g_mu);
    if (n % 6 == 0) update_visible();            // ~10 times a second
    if (n++ % 60 == 0) dump();
}

// ---- the HTTP side -------------------------------------------------------------------------------------------------
static const char *mime(const char *p) {
    const char *e = strrchr(p, '.');
    if (!e) return "application/octet-stream";
    if (!strcasecmp(e, ".html")) return "text/html; charset=utf-8";
    if (!strcasecmp(e, ".js")) return "text/javascript";
    if (!strcasecmp(e, ".css")) return "text/css";
    if (!strcasecmp(e, ".png")) return "image/png";
    if (!strcasecmp(e, ".webp")) return "image/webp";
    if (!strcasecmp(e, ".json")) return "application/json";
    if (!strcasecmp(e, ".woff2")) return "font/woff2";
    return "application/octet-stream";
}
static void send_all(int fd, const char *b, size_t n) {
    while (n) { int k = (int)send(fd, b, (int)(n > 65536 ? 65536 : n), 0); if (k <= 0) return; b += k; n -= (size_t)k; }
}
static void reply(int fd, int code, const char *type, const char *body, size_t n) {
    char h[300];
    int hl = snprintf(h, sizeof h, "HTTP/1.1 %d %s\r\nContent-Type: %s\r\nContent-Length: %zu\r\nCache-Control: no-store\r\n"
                      "Connection: close\r\n\r\n", code, code == 200 ? "OK" : code == 403 ? "Forbidden" : "Not Found", type, n);
    send_all(fd, h, (size_t)hl);
    send_all(fd, body, n);
}
static void serve_file(int fd, const char *rel) {
    extern char g_image_dir[512];
    char p[900];
    const char *root = getenv("CK_WEBUI");
    if (strstr(rel, "..")) { reply(fd, 403, "text/plain", "no", 2); return; }
    if (!*rel || rel[strlen(rel) - 1] == '/') rel = "index.html";
    // <game>/webui/ first when it has the file (testing a page without a new app: adb push), then the app's own copy
    FILE *f = 0;
    if (!root) { snprintf(p, sizeof p, "%s/webui/%s", g_game_dir, rel); f = fopen(p, "rb"); }
    if (!f) {
        if (root) snprintf(p, sizeof p, "%s/%s", root, rel); else snprintf(p, sizeof p, "%s/webui/%s", g_image_dir, rel);
        f = fopen(p, "rb");
    }
    if (!f) { reply(fd, 404, "text/plain", "not found", 9); return; }
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    char *b = malloc((size_t)n + 1);
    size_t got = fread(b, 1, (size_t)n, f);
    fclose(f);
    reply(fd, 200, mime(p), b, got);
    free(b);
}
static void handle(int fd) {
    char b[4096];
    int n = 0, k;
    while (n < (int)sizeof b - 1 && (k = (int)recv(fd, b + n, sizeof b - 1 - n, 0)) > 0) { n += k; b[n] = 0; if (strstr(b, "\r\n\r\n")) break; }
    if (n <= 0) return;
    char path[2200] = "";
    if (sscanf(b, "GET %2199s", path) != 1) { reply(fd, 404, "text/plain", "no", 2); return; }
    char *q = strchr(path, '?');
    if (q) *q++ = 0; else q = "";
    if (!strncmp(path, "/ui/", 4)) { serve_file(fd, path + 4); return; }
    if (strncmp(path, "/api/", 5)) { reply(fd, 404, "text/plain", "no", 2); return; }
    char t[48];
    if (!qget(q, "t", t, sizeof t) || strcmp(t, g_token)) { reply(fd, 403, "application/json", "{\"error\":\"token\"}", 17); return; }
    Req r = {0};
    snprintf(r.path, sizeof r.path, "%s", path);
    snprintf(r.q, sizeof r.q, "%s", q);
    pthread_mutex_lock(&g_mu);
    while (g_req) pthread_cond_wait(&g_cv, &g_mu);              // one at a time
    g_req = &r;
    while (!r.done) pthread_cond_wait(&g_cv, &g_mu);
    g_req = 0;
    pthread_cond_broadcast(&g_cv);
    pthread_mutex_unlock(&g_mu);
    reply(fd, 200, "application/json", r.reply, strlen(r.reply));
    free(r.reply);
}
static void *server(void *arg) {
    (void)arg;
#ifdef _WIN32
    WSADATA w;
    WSAStartup(0x202, &w);
#endif
    int s = (int)socket(AF_INET, SOCK_STREAM, 0);
    int one = 1;
    setsockopt(s, SOL_SOCKET, SO_REUSEADDR, (const char *)&one, sizeof one);
    struct sockaddr_in a = {0};
    a.sin_family = AF_INET;
    a.sin_port = htons(PORT);
    a.sin_addr.s_addr = htonl(0x7f000001);                      // this device only
    if (bind(s, (struct sockaddr *)&a, sizeof a) || listen(s, 8)) { rt_log("ui: cannot listen on %d\n", PORT); return 0; }
    for (;;) {
        int fd = (int)accept(s, 0, 0);
        if (fd < 0) continue;
        handle(fd);
        CLOSESOCK(fd);
    }
    return 0;
}
const char *ui_page_url(void) {                   // what the platform shows full screen ("" until started)
    static char url[128];
    if (!url[0] && g_token[0]) snprintf(url, sizeof url, "http://127.0.0.1:%d/ui/index.html?t=%s#hub", PORT, g_token);
    return url;
}
void ui_bridge_start(void) {
    static int started;
    if (started++) return;
    u64 seed = us_now() ^ (u64)(uintptr_t)&started;
    for (int i = 0; i < 24; i++) { seed = seed * 6364136223846793005ull + 1442695040888963407ull; g_token[i] = "abcdefghijklmnopqrstuvwxyz0123456789"[(seed >> 33) % 36]; }
    g_token[24] = 0;
    pthread_t t;
    if (!pthread_create(&t, 0, server, 0)) pthread_detach(t);
    rt_log("ui: page %s\n", ui_page_url());
}

// ---- reverse-engineering dump ----------------------------------------------------------------------------------------
static void dump_tree(FILE *f, u32 ctl, int depth, u32 *budget) {
    if (depth > 40 || !--*budget) return;
    char nm[80], ty[40], s[310];
    gui_name(ctl, nm, sizeof nm);
    if (str_at(ctl + 4, ty, sizeof ty) < 0) ty[0] = 0;
    float r[4];
    memcpy(r, HP(ctl + 0x44), 16);
    fprintf(f, "%*s%08x %s [%s] vis=%d rect=%.0f,%.0f,%.0f,%.0f\n", depth * 2, "", ctl, nm, ty, M8(ctl + 0x3e), r[0], r[1], r[2], r[3]);
    for (u32 o = 0x60; o < 0x600; o += 4)
        if (str_at(ctl + o, s, sizeof s) > 0) fprintf(f, "%*s  +%03x \"%s\"\n", depth * 2, "", o, s);
    u32 head = M32(ctl + 0x64);
    if (!head) return;
    for (u32 node = M32(head); node && node != head && *budget; node = M32(node)) {
        u32 child = M32(node + 8);
        if (child) dump_tree(f, child, depth + 1, budget);
    }
}
static void dump(void) {
    char p[600];
    snprintf(p, sizeof p, "%s/uidump.txt", g_game_dir);
    if (access(p, F_OK)) return;
    unlink(p);
    snprintf(p, sizeof p, "%s/uidump_out.txt", g_game_dir);
    FILE *f = fopen(p, "w");
    if (!f) return;
    for (int i = 0; i < g_nroots; i++) {
        u32 budget = 20000;
        fprintf(f, "=== root %d\n", i);
        dump_tree(f, g_roots[i], 0, &budget);
    }
    fclose(f);
    rt_log("ui: tree dumped (%d roots)\n", g_nroots);
}
