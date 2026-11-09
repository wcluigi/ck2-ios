// Desktop test bench for the Android runtime (same portable runtime, a Win32 window instead of an Android surface).
// Not a PC port: it exists only because this machine cannot run the Android emulator.
#include <windows.h>
#include <stdio.h>
#include <string.h>

int ck_main(const char *game_dir, const char *image_dir, const char *args);
void ui_key(int vk, int down);
void ui_char(unsigned ch);
void ui_mouse(unsigned msg, int x, int y, unsigned buttons);
extern int g_screen_w, g_screen_h;
static HWND g_wnd;
static int g_cw = 1280, g_ch = 720;            // window client size
static int g_gw = 1024, g_gh = 768;            // game back buffer size (for mouse mapping)
void plat_game_size(int w, int h) { g_gw = w; g_gh = h; }

static LRESULT CALLBACK wndproc(HWND h, UINT m, WPARAM wp, LPARAM lp) {
    switch (m) {
    case WM_CLOSE: ExitProcess(0);
    case WM_SIZE: g_cw = LOWORD(lp); g_ch = HIWORD(lp); return 0;
    case WM_KEYDOWN: case WM_SYSKEYDOWN: ui_key((int)wp, 1); return 0;
    case WM_KEYUP: case WM_SYSKEYUP: ui_key((int)wp, 0); return 0;
    case WM_CHAR: ui_char((unsigned)wp); return 0;
    case WM_MOUSEMOVE: case WM_LBUTTONDOWN: case WM_LBUTTONUP: case WM_RBUTTONDOWN: case WM_RBUTTONUP: {
        int x = (short)LOWORD(lp), y = (short)HIWORD(lp);
        ui_mouse(m, x * g_gw / (g_cw ? g_cw : 1), y * g_gh / (g_ch ? g_ch : 1), (unsigned)wp);
        return 0;
    }
    }
    return DefWindowProcA(h, m, wp, lp);
}
void *plat_native_window(void) { return g_wnd; }
void plat_pump_events(void) {
    MSG m;
    while (PeekMessageA(&m, 0, 0, 0, PM_REMOVE)) { TranslateMessage(&m); DispatchMessageA(&m); }
}
void plat_message_box(const char *title, const char *text) { (void)title; (void)text; }
void plat_web_panel(unsigned hwnd, const char *page, int x, int y, int w, int h, int visible) {     // web panels: none on the bench
    (void)hwnd; (void)page; (void)x; (void)y; (void)w; (void)h; (void)visible; }
void plat_fatal_hook(const char *msg) { MessageBoxA(g_wnd, msg, "ck2mobile bench", MB_ICONERROR); }
void plat_client_size(int *w, int *h) { *w = g_cw; *h = g_ch; }

int main(int argc, char **argv) {
    const char *game = argc > 1 ? argv[1] : "bench_data";
    const char *image = argc > 2 ? argv[2] : "out_m";
    const char *args = argc > 3 ? argv[3] : "-u test -password test -ad 127.0.0.1 -port 6910 -wnd 1";
    WNDCLASSA wc = {0};
    wc.lpfnWndProc = wndproc; wc.hInstance = GetModuleHandleA(0); wc.lpszClassName = "ck2bench"; wc.hCursor = LoadCursor(0, IDC_ARROW);
    RegisterClassA(&wc);
    RECT r = {0, 0, g_cw, g_ch};
    AdjustWindowRect(&r, WS_OVERLAPPEDWINDOW, 0);
    g_wnd = CreateWindowA("ck2bench", "Crazy Kart (Android runtime test bench)", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100,
                          r.right - r.left, r.bottom - r.top, 0, 0, wc.hInstance, 0);
    g_screen_w = 1280; g_screen_h = 720;       // what the game sees as the desktop (the phones run 1280x720)
    return ck_main(game, image, args);
}

// shortcut: no audio output on the desktop bench (the mixer still runs); a waveOut back end would add it
int plat_audio_start(void (*mix)(float *out, int frames), int *rate) { (void)mix; (void)rate; return 0; }
int plat_pointer(float *x, float *y) { (void)x; (void)y; return 0; }    // the controller pointer is Android's
void plat_window_released(void) {}         // the bench window never goes away
void plat_open_chat(void) { }                  // the phone text box: none on the bench (type into the window)
