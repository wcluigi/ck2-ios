// Android platform layer: NativeActivity glue, game thread, touch/keys -> Windows-style input, surface for WebGPU.
#include <aaudio/AAudio.h>
#include <android/asset_manager.h>
#include <android/input.h>
#include <android/log.h>
#include <android/native_window.h>
#include <android_native_app_glue.h>
#include <dlfcn.h>
#include <jni.h>
#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <math.h>

int ck_main(const char *game_dir, const char *image_dir, const char *args);
extern int g_screen_hz;
void ui_key(int vk, int down);
void ui_char(unsigned ch);
int utf16_to_gbk(const unsigned short *s, int n, unsigned char *out, int outmax);
typedef unsigned short u16; typedef unsigned char u8; typedef unsigned int u32;
u32 ms_now(void);
void ui_mouse(unsigned msg, int x, int y, unsigned buttons);
void gpu_backbuffer_size(int *w, int *h);
void gpu_wide(int *gw, int *rw, int *ox);
#define LOG(...) __android_log_print(ANDROID_LOG_INFO, "ck2", __VA_ARGS__)

static struct android_app *g_app;
static ANativeWindow *g_window;
// ---- called by the runtime (game thread) -----------------------------------------------------------
static pthread_mutex_t g_winmu = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t g_wincv = PTHREAD_COND_INITIALIZER;
static int g_win_released;
void *plat_native_window(void) { return g_window; }
void plat_window_released(void) {          // the render thread let go of the old window's surface
    pthread_mutex_lock(&g_winmu);
    g_win_released = 1;
    pthread_cond_broadcast(&g_wincv);
    pthread_mutex_unlock(&g_winmu);
}
void plat_client_size(int *w, int *h) {
    *w = g_window ? ANativeWindow_getWidth(g_window) : 0;
    *h = g_window ? ANativeWindow_getHeight(g_window) : 0;
}
void plat_message_box(const char *title, const char *text) { LOG("message box '%s': %s", title, text); }

void input_push(int kind, int a, int b, int c, int d);
#define ev_push input_push
// ---- race chat: the game's Chat button opens a Java text box (GameActivity.openChat); the text comes back here
static void JNICALL native_chat(JNIEnv *env, jclass cls, jstring text) {
    (void)cls;
    jsize n = text ? (*env)->GetStringLength(env, text) : 0;
    const jchar *u = n ? (*env)->GetStringChars(env, text, 0) : 0;
    for (jsize i = 0; i < n && i < 120; i++) ev_push(4, u[i], 0, 0, 0);
    if (u) (*env)->ReleaseStringChars(env, text, u);
    LOG("chat: %d characters typed, Enter", (int)n);
    ev_push(2, 0x0d, 1, 0, 0);              // Enter: send (an empty line just closes the chat line)
    ev_push(2, 0x0d, 0, 0, 0);
}
void plat_open_chat(void) {                 // game thread
    JavaVM *vm = g_app->activity->vm;
    JNIEnv *env;
    if ((*vm)->GetEnv(vm, (void **)&env, JNI_VERSION_1_6) != JNI_OK && (*vm)->AttachCurrentThread(vm, &env, 0) != JNI_OK) return;
    jobject act = g_app->activity->clazz;
    jmethodID m = (*env)->GetMethodID(env, (*env)->GetObjectClass(env, act), "openChat", "()V");
    if (m) (*env)->CallVoidMethod(env, act, m);
    if ((*env)->ExceptionCheck(env)) (*env)->ExceptionClear(env);
}
// ---- web panels (8 Nov 2026): ckweb.exe's job on PC. hle_user32.c reports a CkWebHelpClass window showing a game-folder
// page; GameActivity.webPanel -> WebPanels.java puts a WebView over it. The page's "ready" / "close" come back here.
void web_ready(u32 hwnd);
void web_close(u32 hwnd);
static void JNICALL native_web_ready(JNIEnv *env, jclass cls, jint hwnd) { (void)env; (void)cls; web_ready((u32)hwnd); }
static void JNICALL native_web_close(JNIEnv *env, jclass cls, jint hwnd) { (void)env; (void)cls; web_close((u32)hwnd); }
static void register_natives(struct android_app *app) {
    JNIEnv *env;
    if ((*app->activity->vm)->AttachCurrentThread(app->activity->vm, &env, 0) != JNI_OK) return;
    jclass cls = (*env)->GetObjectClass(env, app->activity->clazz);
    JNINativeMethod m[] = {{"nativeChat", "(Ljava/lang/String;)V", (void *)native_chat},
                           {"nativeWebReady", "(I)V", (void *)native_web_ready},
                           {"nativeWebClose", "(I)V", (void *)native_web_close}};
    if ((*env)->RegisterNatives(env, cls, m, 3) != 0) { (*env)->ExceptionClear(env); LOG("chat / web: RegisterNatives failed"); }
}
void plat_fatal_hook(const char *msg) { __android_log_print(ANDROID_LOG_FATAL, "ck2", "%s", msg); }

// ---- audio out: AAudio float stereo, pulled from the FMOD mixer (hle_fmod.c) ---------------------------
static void (*g_mix)(float *, int);
static AAudioStream *g_astream;
static int g_arate = 48000, g_apaused;
static aaudio_data_callback_result_t audio_cb(AAudioStream *s, void *u, void *data, int32_t frames) {
    (void)s; (void)u;
    g_mix((float *)data, frames);
    return AAUDIO_CALLBACK_RESULT_CONTINUE;
}
static void audio_open(void);
static void *audio_reopen(void *p) { (void)p; if (g_astream) { AAudioStream_close(g_astream); g_astream = 0; } audio_open(); return 0; }
static void audio_err(AAudioStream *s, void *u, aaudio_result_t e) {
    (void)s; (void)u;
    LOG("audio stream error %d, reopening", (int)e);       // e.g. headphones plugged in: the device changed
    pthread_t t;                                          // not from the callback thread itself
    if (!pthread_create(&t, 0, audio_reopen, 0)) pthread_detach(t);
}
static void audio_open(void) {
    AAudioStreamBuilder *b;
    if (AAudio_createStreamBuilder(&b) != AAUDIO_OK) return;
    AAudioStreamBuilder_setFormat(b, AAUDIO_FORMAT_PCM_FLOAT);
    AAudioStreamBuilder_setChannelCount(b, 2);
    AAudioStreamBuilder_setSampleRate(b, 48000);
    AAudioStreamBuilder_setPerformanceMode(b, AAUDIO_PERFORMANCE_MODE_LOW_LATENCY);
    AAudioStreamBuilder_setDataCallback(b, audio_cb, 0);
    AAudioStreamBuilder_setErrorCallback(b, audio_err, 0);
    AAudioStream *s = 0;
    aaudio_result_t r = AAudioStreamBuilder_openStream(b, &s);
    AAudioStreamBuilder_delete(b);
    if (r != AAUDIO_OK || !s) { LOG("audio: open failed %d", (int)r); return; }
    g_arate = AAudioStream_getSampleRate(s);
    g_astream = s;
    if (!g_apaused) AAudioStream_requestStart(s);
}
int plat_audio_start(void (*mix)(float *out, int frames), int *rate) {
    g_mix = mix;
    audio_open();
    *rate = g_arate;            // shortcut: a reopened stream is assumed to keep 48 kHz (AAudio converts if not)
    return g_astream != 0;
}
static void audio_pause(int pause) {
    g_apaused = pause;
    if (!g_astream) return;
    if (pause) AAudioStream_requestPause(g_astream); else AAudioStream_requestStart(g_astream);
}

// ---- input (UI thread) --------------------------------------------------------------------------------
static void to_game(float sx, float sy, int *gx, int *gy) {      // undo the letterbox scaling done at present
    int ww = ANativeWindow_getWidth(g_window), wh = ANativeWindow_getHeight(g_window), bw, bh, gw, rw, gox;
    gpu_backbuffer_size(&bw, &bh);
    gpu_wide(&gw, &rw, &gox);                  // widescreen: the real back buffer is rw wide, the game sits at gox
    if (bw <= 0 || bh <= 0) { bw = 1024; bh = 768; }
    if (rw > bw) bw = rw; else gox = 0;
    float scale = (float)ww / bw < (float)wh / bh ? (float)ww / bw : (float)wh / bh;
    float ox = (ww - bw * scale) / 2, oy = (wh - bh * scale) / 2;
    *gx = (int)((sx - ox) / scale) - gox;
    *gy = (int)((sy - oy) / scale);
}
// game client pixels -> fractions of the screen (to_game backwards); the Java side multiplies by its view size
static void to_screen(int gx, int gy, float *fx, float *fy) {
    int ww = g_window ? ANativeWindow_getWidth(g_window) : 0, wh = g_window ? ANativeWindow_getHeight(g_window) : 0, bw, bh, gw, rw, gox;
    if (ww <= 0 || wh <= 0) { *fx = *fy = 0; return; }
    gpu_backbuffer_size(&bw, &bh);
    gpu_wide(&gw, &rw, &gox);
    if (bw <= 0 || bh <= 0) { bw = 1024; bh = 768; }
    if (rw > bw) bw = rw; else gox = 0;
    float scale = (float)ww / bw < (float)wh / bh ? (float)ww / bw : (float)wh / bh;
    float ox = (ww - bw * scale) / 2, oy = (wh - bh * scale) / 2;
    *fx = ((gx + gox) * scale + ox) / ww;
    *fy = (gy * scale + oy) / wh;
}
static u32 g_web_shown[8];                  // web panels on screen (Back goes to the page)
static int web_shown(void) { for (int i = 0; i < 8; i++) if (g_web_shown[i]) return 1; return 0; }
void plat_web_panel(u32 hwnd, const char *page, int x, int y, int w, int h, int visible) {      // game thread
    for (int i = 0; i < 8; i++) if (g_web_shown[i] == hwnd) g_web_shown[i] = 0;
    if (page[0] && visible) for (int i = 0; i < 8; i++) if (!g_web_shown[i]) { g_web_shown[i] = hwnd; break; }
    JavaVM *vm = g_app->activity->vm;
    JNIEnv *env;
    if ((*vm)->GetEnv(vm, (void **)&env, JNI_VERSION_1_6) != JNI_OK && (*vm)->AttachCurrentThread(vm, &env, 0) != JNI_OK) return;
    float x0, y0, x1, y1;
    to_screen(x, y, &x0, &y0);
    to_screen(x + w, y + h, &x1, &y1);
    jobject act = g_app->activity->clazz;
    jmethodID m = (*env)->GetMethodID(env, (*env)->GetObjectClass(env, act), "webPanel", "(ILjava/lang/String;FFFFZ)V");
    jstring js = (*env)->NewStringUTF(env, page);
    if (m && js) (*env)->CallVoidMethod(env, act, m, (jint)hwnd, js, x0, y0, x1 - x0, y1 - y0, (jboolean)(visible != 0));
    if (js) (*env)->DeleteLocalRef(env, js);
    if ((*env)->ExceptionCheck(env)) (*env)->ExceptionClear(env);
    LOG("web panel %08x '%s' %d,%d %dx%d %s", hwnd, page, x, y, w, h, visible ? "shown" : "hidden");
}
// the phone UI page (runtime/mobile/ui_bridge.c): shown full screen while the game is on a screen it draws
void plat_ui_show(const char *url, int visible) {      // game thread
    JavaVM *vm = g_app->activity->vm;
    JNIEnv *env;
    if ((*vm)->GetEnv(vm, (void **)&env, JNI_VERSION_1_6) != JNI_OK && (*vm)->AttachCurrentThread(vm, &env, 0) != JNI_OK) return;
    jobject act = g_app->activity->clazz;
    jmethodID m = (*env)->GetMethodID(env, (*env)->GetObjectClass(env, act), "uiPage", "(Ljava/lang/String;Z)V");
    jstring js = (*env)->NewStringUTF(env, url ? url : "");
    if (m && js) (*env)->CallVoidMethod(env, act, m, js, (jboolean)(visible != 0));
    if (js) (*env)->DeleteLocalRef(env, js);
    if ((*env)->ExceptionCheck(env)) (*env)->ExceptionClear(env);
    LOG("ui page %s", visible ? "shown" : "hidden");
}
static void web_back(void) {                // input thread (attached in register_natives)
    JNIEnv *env;
    if ((*g_app->activity->vm)->GetEnv(g_app->activity->vm, (void **)&env, JNI_VERSION_1_6) != JNI_OK) return;
    jobject act = g_app->activity->clazz;
    jmethodID m = (*env)->GetMethodID(env, (*env)->GetObjectClass(env, act), "webBack", "()V");
    if (m) (*env)->CallVoidMethod(env, act, m);
    if ((*env)->ExceptionCheck(env)) (*env)->ExceptionClear(env);
}
static char g_game_dir_s[512];
void plat_open_chat(void);
// input shared with iOS: runtime/mobile/input.c (event queue, touches, controls, macros, controller pointer)
void input_push(int kind, int a, int b, int c, int d);
void input_controls_load(const char *dir);
int input_code(int code, int down);
void input_sticks(float lx, float ly, float ry);
void input_axis(int axis, float v);
#define ev_push input_push
static int joystick_event(const AInputEvent *e) {      // sticks, triggers, hats
    static const int axes[] = {AMOTION_EVENT_AXIS_X, AMOTION_EVENT_AXIS_Y, AMOTION_EVENT_AXIS_Z, AMOTION_EVENT_AXIS_RZ,
                               AMOTION_EVENT_AXIS_HAT_X, AMOTION_EVENT_AXIS_HAT_Y, AMOTION_EVENT_AXIS_LTRIGGER,
                               AMOTION_EVENT_AXIS_RTRIGGER, AMOTION_EVENT_AXIS_GAS, AMOTION_EVENT_AXIS_BRAKE};
    input_sticks(AMotionEvent_getAxisValue(e, AMOTION_EVENT_AXIS_X, 0), AMotionEvent_getAxisValue(e, AMOTION_EVENT_AXIS_Y, 0),
                 AMotionEvent_getAxisValue(e, AMOTION_EVENT_AXIS_RZ, 0));
    for (int i = 0; i < (int)(sizeof axes / sizeof axes[0]); i++) input_axis(axes[i], AMotionEvent_getAxisValue(e, axes[i], 0));
    return 1;
}

static int32_t on_input(struct android_app *app, AInputEvent *e) {
    (void)app;
    if (!g_window) return 0;
    if (AInputEvent_getType(e) == AINPUT_EVENT_TYPE_MOTION) {
        if (AInputEvent_getSource(e) & AINPUT_SOURCE_CLASS_JOYSTICK) return joystick_event(e);   // sticks, triggers, hats
        int32_t raw = AMotionEvent_getAction(e);
        int act = raw & AMOTION_EVENT_ACTION_MASK;
        int pi = (raw & AMOTION_EVENT_ACTION_POINTER_INDEX_MASK) >> AMOTION_EVENT_ACTION_POINTER_INDEX_SHIFT;
        int n = (int)AMotionEvent_getPointerCount(e), x, y;
        if (act == AMOTION_EVENT_ACTION_MOVE) {
            for (int i = 0; i < n; i++) {
                to_game(AMotionEvent_getX(e, i), AMotionEvent_getY(e, i), &x, &y);
                ev_push(3, AMotionEvent_getPointerId(e, i), 2, x, y);
            }
            return 1;
        }
        int kind = act == AMOTION_EVENT_ACTION_DOWN || act == AMOTION_EVENT_ACTION_POINTER_DOWN ? 0
                 : act == AMOTION_EVENT_ACTION_UP || act == AMOTION_EVENT_ACTION_POINTER_UP ? 1 : -1;
        if (act == AMOTION_EVENT_ACTION_CANCEL) {           // every pointer ends
            for (int i = 0; i < n; i++) { to_game(AMotionEvent_getX(e, i), AMotionEvent_getY(e, i), &x, &y); ev_push(3, AMotionEvent_getPointerId(e, i), 1, x, y); }
            return 1;
        }
        if (kind < 0) return 1;
        to_game(AMotionEvent_getX(e, pi), AMotionEvent_getY(e, pi), &x, &y);
        ev_push(3, AMotionEvent_getPointerId(e, pi), kind, x, y);
        return 1;
    }
    if (AInputEvent_getType(e) == AINPUT_EVENT_TYPE_KEY) {
        int code = AKeyEvent_getKeyCode(e), down = AKeyEvent_getAction(e) == AKEY_EVENT_ACTION_DOWN;
        if (AKeyEvent_getAction(e) == AKEY_EVENT_ACTION_MULTIPLE) return 0;
        if (code == AKEYCODE_BACK && web_shown()) { if (!down) web_back(); return 1; }   // a web panel: its Esc, not the game's
        if (input_code(code, down)) return 1;                      // Settings > Controls
        int vk = 0;
        if (code == AKEYCODE_BACK) vk = 0x1b;
        else if (code >= AKEYCODE_A && code <= AKEYCODE_Z) vk = 'A' + code - AKEYCODE_A;
        else if (code >= AKEYCODE_0 && code <= AKEYCODE_9) vk = '0' + code - AKEYCODE_0;
        else if (code == AKEYCODE_ENTER) vk = 0x0d;
        else if (code == AKEYCODE_DEL) vk = 0x08;
        else if (code == AKEYCODE_SPACE) vk = 0x20;
        else if (code == AKEYCODE_DPAD_LEFT) vk = 0x25;
        else if (code == AKEYCODE_DPAD_UP) vk = 0x26;
        else if (code == AKEYCODE_DPAD_RIGHT) vk = 0x27;
        else if (code == AKEYCODE_DPAD_DOWN) vk = 0x28;
        else if (code == AKEYCODE_SHIFT_LEFT || code == AKEYCODE_SHIFT_RIGHT) vk = 0x10;     // capitals in chat
        else if (code == AKEYCODE_CTRL_LEFT || code == AKEYCODE_CTRL_RIGHT) vk = 0x11;
        else if (code == AKEYCODE_ESCAPE) vk = 0x1b;
        else if (code == AKEYCODE_TAB) vk = 0x09;
        else if (code >= AKEYCODE_F1 && code <= AKEYCODE_F12) vk = 0x70 + code - AKEYCODE_F1;
        if (vk) { ev_push(2, vk, down, 0, 0); return 1; }
    }
    return 0;
}

// ---- files: lifted image from APK assets -> internal storage -------------------------------------------
static int extract_asset(AAssetManager *am, const char *name, const char *dir) {
    AAsset *a = AAssetManager_open(am, name, AASSET_MODE_STREAMING);
    if (!a) return 0;
    char p[512];
    snprintf(p, sizeof p, "%s/%s", dir, name);
    struct stat st;                          // already there at the same size: not rewritten (the 10 MB font)
    if (stat(p, &st) == 0 && (long long)st.st_size == (long long)AAsset_getLength64(a)) { AAsset_close(a); return 1; }
    FILE *f = fopen(p, "wb");
    if (!f) { AAsset_close(a); return 0; }
    char buf[65536];
    int n;
    while ((n = AAsset_read(a, buf, sizeof buf)) > 0) fwrite(buf, 1, (size_t)n, f);
    fclose(f);
    AAsset_close(a);
    return 1;
}

static char g_game_dir_s[512], g_image_dir_s[512], g_args[512];
static void *game_thread(void *p) {
    (void)p;
    int r = ck_main(g_game_dir_s, g_image_dir_s, g_args);
    LOG("game exited with %d", r);
    _exit(r);      // not exit(): static teardown races hwui threads (FORTIFY "destroyed mutex" abort)
    return 0;
}
static int g_started;
static void start_game(void) {
    if (g_started) return;
    g_started = 1;
    const char *ext = g_app->activity->externalDataPath, *in = g_app->activity->internalDataPath;
    snprintf(g_game_dir_s, sizeof g_game_dir_s, "%s/game", ext ? ext : in);
    snprintf(g_image_dir_s, sizeof g_image_dir_s, "%s/image", in);
    mkdir(g_image_dir_s, 0755);
    AAssetManager *am = g_app->activity->assetManager;
    if (!extract_asset(am, "image.bin", g_image_dir_s) || !extract_asset(am, "imports.txt", g_image_dir_s) ||
        !extract_asset(am, "modules.txt", g_image_dir_s))
        LOG("could not extract the lifted image from the APK");
    extract_asset(am, "hud_elements.txt", g_image_dir_s);      // HUD layout elements (hud.c)
    extract_asset(am, "cjk_sc.ttf", g_image_dir_s);            // Chinese text on every phone (text.c)
    extract_asset(am, "pipelines_seed.bin", g_image_dir_s);    // GPU pipelines built at start on every install (gpu_wgpu.c)
    {                                                          // the phone UI page (runtime/mobile/ui_bridge.c serves it)
        char wd[600];
        snprintf(wd, sizeof wd, "%s/webui", g_image_dir_s);
        mkdir(wd, 0755);
        if (!extract_asset(am, "webui/index.html", g_image_dir_s)) {   // an APK without the page: drop an older install's copy
            char p[700];
            snprintf(p, sizeof p, "%s/index.html", wd); unlink(p);
            snprintf(p, sizeof p, "%s/bridge.js", wd); unlink(p);
        } else extract_asset(am, "webui/bridge.js", g_image_dir_s);
    }
    // login arguments: written by LoginActivity (one-time pass, deleted once read); game/launch.txt is a test fallback
    snprintf(g_args, sizeof g_args, "-wnd 1");
    char lp[600];
    snprintf(lp, sizeof lp, "%s/launch_args.txt", in);
    FILE *f = fopen(lp, "r");
    if (f) { if (fgets(g_args, sizeof g_args, f)) g_args[strcspn(g_args, "\r\n")] = 0; fclose(f); unlink(lp); LOG("signed in through the login screen"); }
    else {
        snprintf(lp, sizeof lp, "%s/launch.txt", g_game_dir_s);
        f = fopen(lp, "r");
        if (f) { if (fgets(g_args, sizeof g_args, f)) g_args[strcspn(g_args, "\r\n")] = 0; fclose(f); }
    }
    // runtime options from the login screen (vsync=0/1) -> environment read by the GPU layer
    snprintf(lp, sizeof lp, "%s/options.txt", in);
    f = fopen(lp, "r");
    if (f) {
        char line[128];
        while (fgets(line, sizeof line, f)) {
            if (!strncmp(line, "vsync=", 6)) setenv("CK_VSYNC", line[6] == '0' ? "0" : "1", 1);
            if (!strncmp(line, "wide=", 5)) setenv("CK_WIDE", line[5] == '0' ? "0" : "1", 1);
            if (!strncmp(line, "lean=", 5)) setenv("CK_LEAN", line[5] == '1' ? "1" : "0", 1);     // Compact 3D data
            if (!strncmp(line, "etc2=", 5)) setenv("CK_ETC2", line[5] == '1' ? "1" : "0", 1);     // Compressed textures
            if (!strncmp(line, "drawdist=", 9)) { char v[8]; snprintf(v, sizeof v, "%d", atoi(line + 9)); setenv("CK_DRAWDIST", v, 1); }   // Draw distance %
            if (!strncmp(line, "scale=", 6)) { char v[8]; snprintf(v, sizeof v, "%d", atoi(line + 6)); setenv("CK_SCALE", v, 1); }
            if (!strncmp(line, "hz=", 3) && atoi(line + 3) >= 30) g_screen_hz = atoi(line + 3);
        }
        fclose(f);
    }
    input_controls_load(in);                 // keyboards + controllers (Settings > Controls)
    LOG("game dir %s, image dir %s", g_game_dir_s, g_image_dir_s);
    snprintf(lp, sizeof lp, "%s/stderr.txt", g_game_dir_s);       // wgpu panics print only to stderr
    if (freopen(lp, "w", stderr)) setvbuf(stderr, 0, _IONBF, 0);
    pthread_attr_t at;
    pthread_attr_init(&at);
    pthread_attr_setstacksize(&at, 64u << 20);        // recompiled code nests deeply
    pthread_t t;
    pthread_create(&t, &at, game_thread, 0);
}
// Ask Android for the panel's highest refresh rate: apps that don't are kept at 60 Hz (seen on a 144 Hz phone).
// ANativeWindow_setFrameRate is API 30+, looked up at run time (minSdk 26).
static void request_refresh(ANativeWindow *w) {
    typedef int32_t (*SetFR)(ANativeWindow *, float, int8_t);
    void *lib = dlopen("libnativewindow.so", RTLD_NOW);        // not found through RTLD_DEFAULT
    SetFR fn = (SetFR)dlsym(lib ? lib : RTLD_DEFAULT, "ANativeWindow_setFrameRate");
    if (!fn) { void *la = dlopen("libandroid.so", RTLD_NOW); if (la) fn = (SetFR)dlsym(la, "ANativeWindow_setFrameRate"); }
    int r = fn ? fn(w, (float)g_screen_hz, 0) : -1;
    LOG("refresh rate request %d Hz -> %d", g_screen_hz, r);
}
static void on_cmd(struct android_app *app, int32_t cmd) {
    if (cmd == APP_CMD_INIT_WINDOW && app->window) { g_window = app->window; start_game(); request_refresh(app->window); }
    else if (cmd == APP_CMD_TERM_WINDOW) {
        // the window is destroyed once this returns: let the render thread drop its surface first (gpu_wgpu.c
        // follow_window); bounded, as the game may not present while it loads (shortcut: 2 s, then go on regardless)
        pthread_mutex_lock(&g_winmu);
        g_window = 0;
        g_win_released = 0;
        struct timespec dl;
        clock_gettime(CLOCK_REALTIME, &dl);
        dl.tv_sec += 2;
        while (!g_win_released && g_started) if (pthread_cond_timedwait(&g_wincv, &g_winmu, &dl)) break;
        pthread_mutex_unlock(&g_winmu);
        LOG("window lost (render thread %s)", g_win_released ? "released it" : "did not answer in 2 s");
    }
    else if (cmd == APP_CMD_PAUSE) audio_pause(1);         // no game sound from the background
    else if (cmd == APP_CMD_RESUME) audio_pause(0);
}
void android_main(struct android_app *app) {
    g_app = app;
    register_natives(app);
    app->onAppCmd = on_cmd;
    app->onInputEvent = on_input;
    for (;;) {
        int events;
        struct android_poll_source *src;
        while (ALooper_pollOnce(-1, 0, &events, (void **)&src) >= 0) {
            if (src) src->process(app, src);
            if (app->destroyRequested) _exit(0);
        }
    }
}
