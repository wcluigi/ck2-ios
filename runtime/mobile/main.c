// Start-up: memory, replacements, image, game DLLs, then the game's own entry point (MSVC CRT start-up).
#include "rt.h"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

extern const u32 ck_entry;
int g_argc;
char g_image_dir[512];                // lifted image + APK assets (hud_elements.txt)
char g_cmdline[1024];
GThread *thread_main_init(void);
void plat_mem_init(void);
void loader_load(const char *dir);
void hle_kernel32_init(void), hle_msvcrt_init(void), hle_user32_init(void), hle_gdi_init(void), hle_misc_init(void),
    hle_ws2_init(void), hle_input_audio_init(void), hle_fmod_init(void), hle_d3d9_init(void);

// Stall watchdog: no frame for 8 s -> log where the main thread is (last replacement call + guest stack), once per stall.
extern volatile u32 g_frames;
extern const char *volatile g_main_last_import;
extern u32 g_main_last_ret;
GThread *thread_main(void);
void guest_backtrace_of(GThread *t);
#if defined(__ANDROID__) && defined(__aarch64__)
// Sampling profiler (the phone's kernel refuses perf events, so simpleperf cannot run): when <game>/profile.txt
// appears (its number = seconds), the main game thread is interrupted 250 times a second and its pc recorded;
// the samples go to <game>/profile.bin as offsets into libck2.so (symbolised on the PC with llvm-nm), then
// profile.txt is removed.
#include <dlfcn.h>
#include <signal.h>
#include <sys/syscall.h>
#include <ucontext.h>
#include <unistd.h>
#define PROF_MAX (1 << 20)
static u64 *g_prof; static const char **g_profimp; static volatile int g_nprof;
static int g_game_tid;
static void prof_sig(int s, siginfo_t *si, void *uc) {
    (void)s; (void)si;
    int n = g_nprof;
    if (g_prof && n < PROF_MAX) { g_prof[n] = ((ucontext_t *)uc)->uc_mcontext.pc; g_profimp[n] = g_main_last_import; g_nprof = n + 1; }
}
// which replacement call the samples fell in (the game thread's latest import; mostly the one it is inside)
static void prof_imports(int n) {
    const char *nm[64]; int cnt[64], k = 0;
    for (int i = 0; i < n; i++) {
        int j = 0;
        while (j < k && nm[j] != g_profimp[i]) j++;
        if (j == k) { if (k == 64) continue; nm[k] = g_profimp[i]; cnt[k++] = 0; }
        cnt[j]++;
    }
    for (int r = 0; r < 12 && k; r++) {
        int b = 0;
        for (int j = 1; j < k; j++) if (cnt[j] > cnt[b]) b = j;
        rt_log("profile: last import %s: %d samples (%.1f%%)\n", nm[b] ? nm[b] : "?", cnt[b], 100.0 * cnt[b] / n);
        nm[b] = nm[--k]; cnt[b] = cnt[k];
    }
}
static void prof_poll(void) {
    char p[600];
    snprintf(p, sizeof p, "%s/profile.txt", g_game_dir);
    FILE *f = fopen(p, "r");
    if (!f) return;
    int secs = 0;
    if (fscanf(f, "%d", &secs) != 1 || secs < 1 || secs > 300) secs = 20;
    fclose(f);
    unlink(p);
    if (!g_prof) { g_prof = malloc(sizeof(u64) * PROF_MAX); g_profimp = malloc(sizeof(char *) * PROF_MAX); }
    g_nprof = 0;
    struct sigaction sa = {0};
    sa.sa_sigaction = prof_sig; sa.sa_flags = SA_SIGINFO | SA_RESTART;
    sigaction(SIGPROF, &sa, 0);
    struct sigevent sev = {0};
    sev.sigev_notify = SIGEV_THREAD_ID; sev.sigev_signo = SIGPROF; sev.sigev_notify_thread_id = g_game_tid;
    timer_t tm;
    if (timer_create(CLOCK_MONOTONIC, &sev, &tm)) { rt_log("profile: timer_create failed\n"); return; }
    struct itimerspec it = {{0, 4000000}, {0, 4000000}};      // 250 Hz: gentle on a racing game
    timer_settime(tm, 0, &it, 0);
    rt_log("profile: sampling the game thread for %d s\n", secs);
    struct timespec ts = {secs, 0};
    nanosleep(&ts, 0);
    timer_delete(tm);
    Dl_info di;
    u64 base = dladdr((void *)prof_sig, &di) ? (u64)(uintptr_t)di.dli_fbase : 0;
    snprintf(p, sizeof p, "%s/profile.bin", g_game_dir);
    f = fopen(p, "wb");
    int n = g_nprof;
    // format 2: u64 magic, u64 libck2 base, then raw pcs; profile.maps = /proc/self/maps (pcs in other libraries)
    if (f) { u64 hdr[2] = {0x32464f5250ull, base}; fwrite(hdr, 8, 2, f); fwrite(g_prof, 8, (size_t)n, f); fclose(f); }
    snprintf(p, sizeof p, "%s/profile.maps", g_game_dir);
    FILE *in = fopen("/proc/self/maps", "r"), *out = fopen(p, "w");
    if (in && out) { char line[512]; while (fgets(line, sizeof line, in)) fputs(line, out); }
    if (in) fclose(in);
    if (out) fclose(out);
    rt_log("profile: %d samples -> profile.bin\n", n);
    prof_imports(n);
}
#else
static void prof_poll(void) {}
#endif

static void *watchdog(void *p) {
    (void)p;
    u32 last = 0, still = 0;
    for (;;) {
        struct timespec ts = {1, 0};
        nanosleep(&ts, 0);
        prof_poll();
        u32 f = g_frames;
        if (f != last) { if (still >= 8) rt_log("watchdog: frames again after %u s\n", still); last = f; still = 0; continue; }
        if (!f || ++still != 8) continue;
        const char *imp = g_main_last_import;
        rt_log("watchdog: no frame for 8 s (frame %u); last call %s, returning to %08x\n", f, imp ? imp : "?", g_main_last_ret);
        guest_backtrace_of(thread_main());
    }
    return 0;
}

// game_dir: folder with the game data (data/, KartRes.xml, ...) and image.bin/imports.txt/modules.txt
// args: client arguments, e.g. "-u name -password pass -ad 1.2.3.4 -port 6910 -wnd 0"
int ck_main(const char *game_dir, const char *image_dir, const char *args) {
    snprintf(g_game_dir, sizeof g_game_dir, "%s", game_dir);
    snprintf(g_image_dir, sizeof g_image_dir, "%s", image_dir);
    snprintf(g_cmdline, sizeof g_cmdline, "\"%s\\CrazyKartClient.dat\" %s", g_fake_dir, args);
    rt_log("ck2mobile: game dir %s, args %s\n", game_dir, args);
    plat_mem_init();
    hle_kernel32_init(); hle_msvcrt_init(); hle_user32_init(); hle_gdi_init(); hle_misc_init(); hle_ws2_init();
    hle_input_audio_init(); hle_fmod_init(); hle_d3d9_init();
    GThread *t = thread_main_init();
    loader_load(image_dir);
    module_load("KartRes.dll");          // statically imported by the exe: its DllMain runs first
    CPU *c = &t->cpu;
#if defined(__ANDROID__) && defined(__aarch64__)
    g_game_tid = (int)syscall(SYS_gettid);          // the game's main thread: what the profiler samples
#endif
    pthread_t wd;
    pthread_create(&wd, 0, watchdog, 0);
    rt_log("entering game at %08x\n", ck_entry);
    u32 r = guest_call(c, ck_entry, 0);
    rt_log("game returned %u\n", r);
    return (int)r;
}
