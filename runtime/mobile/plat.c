// Platform layer: guest memory reservation, logging, Windows path -> host path.
#include "rt.h"
#include <dirent.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#ifdef __ANDROID__
#include <android/log.h>
#include <sys/mman.h>
#elif defined(_WIN32)
#include <windows.h>
#else
#include <sys/mman.h>
#endif

u8 *g_mem;
char g_game_dir[512];
const char *g_fake_dir = "C:\\CrazyKart2";
static char g_cwd[512] = "C:\\CrazyKart2";

#ifdef _WIN32
static LONG WINAPI commit_on_fault(EXCEPTION_POINTERS *ep) {     // desktop bench: lazily commit guest pages
    EXCEPTION_RECORD *er = ep->ExceptionRecord;
    if (er->ExceptionCode != EXCEPTION_ACCESS_VIOLATION) return EXCEPTION_CONTINUE_SEARCH;
    u8 *a = (u8 *)er->ExceptionInformation[1];
    if (a < g_mem + 0x10000 || a >= g_mem + 0x100000000ull) return EXCEPTION_CONTINUE_SEARCH;
    u8 *pg = (u8 *)((uintptr_t)a & ~(uintptr_t)0xffff);
    return VirtualAlloc(pg, 0x10000, MEM_COMMIT, PAGE_READWRITE) ? EXCEPTION_CONTINUE_EXECUTION : EXCEPTION_CONTINUE_SEARCH;
}
#endif

#ifdef _WIN32
static LONG WINAPI crash_filter(EXCEPTION_POINTERS *ep) {
    EXCEPTION_RECORD *er = ep->ExceptionRecord;
    u8 *a = (u8 *)er->ExceptionInformation[1];
    HMODULE m = GetModuleHandleA(0);
    rt_log("CRASH: code %08lx at host rip %p (exe+%llx), access %p%s guest addr %08llx\n", er->ExceptionCode, er->ExceptionAddress,
           (unsigned long long)((u8 *)er->ExceptionAddress - (u8 *)m), a, (a >= g_mem && a < g_mem + 0x100000000ull) ? " =" : " (not guest)",
           (unsigned long long)(a - g_mem));
    void guest_backtrace(void);
    guest_backtrace();
    return EXCEPTION_CONTINUE_SEARCH;
}
#endif

// Heuristic guest backtrace: dwords on the guest stack that point just after a call instruction in the exe.
void guest_backtrace_of(GThread *t);
void guest_backtrace(void) { guest_backtrace_of(cur_thread()); }
void guest_backtrace_of(GThread *t) {
    if (!t) return;
    u32 sp = t->cpu.esp, n = 0;
    rt_log("guest backtrace (esp %08x, eax %08x ecx %08x edx %08x esi %08x edi %08x):\n", sp, t->cpu.eax, t->cpu.ecx, t->cpu.edx, t->cpu.esi, t->cpu.edi);
    for (u32 p = sp; p < t->stack_hi && p < sp + 0x4000 && n < 24; p += 4) {
        u32 v = M32(p);
        if (v < 0x401005 || v >= 0x62e000) continue;
        int call = M8(v - 5) == 0xe8 || (M8(v - 6) == 0xff && (M8(v - 5) & 0x38) == 0x10) || (M8(v - 2) == 0xff && (M8(v - 1) & 0x38) == 0x10) ||
                   (M8(v - 3) == 0xff && (M8(v - 2) & 0x38) == 0x10) || (M8(v - 7) == 0xff && (M8(v - 6) & 0x38) == 0x10);
        if (call) { rt_log("  [%08x] %08x\n", p, v); n++; }
    }
}

void plat_mem_init(void) {
#ifdef _WIN32
    g_mem = VirtualAlloc(0, 0x100000000ull, MEM_RESERVE, PAGE_NOACCESS);
    if (!g_mem) rt_fatal("cannot reserve 4 GB of address space");
    AddVectoredExceptionHandler(1, commit_on_fault);
    SetUnhandledExceptionFilter(crash_filter);
#else
    g_mem = mmap(0, 0x100000000ull, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (g_mem == MAP_FAILED) rt_fatal("cannot reserve 4 GB of address space");
    mprotect(g_mem, 0x10000, PROT_NONE);          // guest NULL page: catch null pointer bugs
#endif
}

// ---- logging -----------------------------------------------------------------------------
static FILE *g_logf;
static pthread_mutex_t g_logmu = PTHREAD_MUTEX_INITIALIZER;
static void vlog(int fatal, const char *fmt, va_list ap) {
    char b[2048];
    vsnprintf(b, sizeof b, fmt, ap);
#ifdef __ANDROID__
    __android_log_print(fatal ? ANDROID_LOG_ERROR : ANDROID_LOG_INFO, "ck2", "%s", b);
#endif
    pthread_mutex_lock(&g_logmu);
    if (!g_logf) {
        char p[600];
        snprintf(p, sizeof p, "%s/ck2mobile.log", g_game_dir[0] ? g_game_dir : ".");
        g_logf = fopen(p, "w");
    }
    if (g_logf) { fputs(b, g_logf); if (b[0] && b[strlen(b) - 1] != '\n') fputc('\n', g_logf); fflush(g_logf); }
#ifndef __ANDROID__
    fputs(b, stderr);
    if (b[0] && b[strlen(b) - 1] != '\n') fputc('\n', stderr);
#endif
    pthread_mutex_unlock(&g_logmu);
}
void rt_log(const char *fmt, ...) { va_list ap; va_start(ap, fmt); vlog(0, fmt, ap); va_end(ap); }
void plat_fatal_hook(const char *msg);
void rt_fatal(const char *fmt, ...) {
    char b[1024];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(b, sizeof b, fmt, ap);
    va_end(ap);
    rt_log("FATAL: %s", b);
    plat_fatal_hook(b);
    abort();
}

// ---- paths -------------------------------------------------------------------------------
// Game data lives under g_game_dir with its original names; lookups ignore case like Windows.
#define PC_N 65536
static struct { char *key, *val; } g_pc[PC_N];              // lowercase relative path -> real relative path
static pthread_mutex_t g_pcmu = PTHREAD_MUTEX_INITIALIZER;
static u32 hash(const char *s) { u32 h = 2166136261u; while (*s) h = (h ^ (u8)*s++) * 16777619u; return h; }
static const char *pc_get(const char *k) {
    for (u32 i = hash(k) & (PC_N - 1), n = 0; g_pc[i].key && n < PC_N; i = (i + 1) & (PC_N - 1), n++)
        if (!strcmp(g_pc[i].key, k)) return g_pc[i].val;
    return 0;
}
static void pc_put(const char *k, const char *v) {
    u32 i = hash(k) & (PC_N - 1);
    for (u32 n = 0; g_pc[i].key && n < PC_N; i = (i + 1) & (PC_N - 1), n++) if (!strcmp(g_pc[i].key, k)) return;
    g_pc[i].key = strdup(k); g_pc[i].val = strdup(v);
}
static void lower(char *s) { for (; *s; s++) if (*s >= 'A' && *s <= 'Z') *s += 32; }

// resolve one directory level: real relative dir + component -> real relative path (or 0)
static int scan_dir(const char *realdir) {
    char abs[1100], key[1100], val[1100];
    snprintf(abs, sizeof abs, "%s/%s", g_game_dir, realdir);
    DIR *d = opendir(abs);
    if (!d) return 0;
    struct dirent *e;
    while ((e = readdir(d))) {
        if (e->d_name[0] == '.' && (!e->d_name[1] || (e->d_name[1] == '.' && !e->d_name[2]))) continue;
        snprintf(val, sizeof val, "%s%s%s", realdir, realdir[0] ? "/" : "", e->d_name);
        strcpy(key, val);
        lower(key);
        pc_put(key, val);
    }
    closedir(d);
    snprintf(key, sizeof key, "%s/\001scanned", realdir);
    lower(key);
    pc_put(key, "1");
    return 1;
}

// winpath: "C:\CrazyKart2\data\x.png", "data\\x.png", ".\\x", "/x" ... ; returns 1 if it maps inside the game dir
int host_path(const char *winpath, char *out, int outsz) {
    char full[1024], rel[1024];
    const char *p = winpath;
    if (((p[0] | 32) >= 'a' && (p[0] | 32) <= 'z') && p[1] == ':' && p[2] != '\\' && p[2] != '/')
        snprintf(full, sizeof full, "%s\\%s", g_cwd, p + 2);       // "C:data\x" = relative to the current dir on C:
    else if (((p[0] | 32) >= 'a' && (p[0] | 32) <= 'z') && p[1] == ':') snprintf(full, sizeof full, "%s", p);
    else if (p[0] == '\\' || p[0] == '/') snprintf(full, sizeof full, "C:%s", p);
    else snprintf(full, sizeof full, "%s\\%s", g_cwd, p);
    for (char *q = full; *q; q++) if (*q == '/') *q = '\\';
    // normalise . and .. and repeated separators
    char *parts[128]; int np = 0;
    char tmp[1024];
    snprintf(tmp, sizeof tmp, "%s", full + 2);
    for (char *tok = strtok(tmp, "\\"); tok; tok = strtok(0, "\\")) {
        if (!strcmp(tok, ".")) continue;
        if (!strcmp(tok, "..")) { if (np) np--; continue; }
        if (np < 128) parts[np++] = tok;
    }
    // must be under the fake install dir (C:\CrazyKart2)
    const char *fd = g_fake_dir + 3;
    if (np == 0 || strcasecmp(parts[0], fd)) { snprintf(out, outsz, "%s/__outside__/%s", g_game_dir, np ? parts[np - 1] : ""); return 0; }
    rel[0] = 0;
    char key[1100];
    pthread_mutex_lock(&g_pcmu);
    for (int i = 1; i < np; i++) {
        char real_parent[1024];
        snprintf(real_parent, sizeof real_parent, "%s", rel);
        snprintf(key, sizeof key, "%s%s%s", rel, rel[0] ? "/" : "", parts[i]);
        lower(key);
        const char *hit = pc_get(key);
        if (!hit) {
            char sk[1100];
            snprintf(sk, sizeof sk, "%s/\001scanned", real_parent);
            lower(sk);
            if (!pc_get(sk)) { scan_dir(real_parent); hit = pc_get(key); }
        }
        if (hit) snprintf(rel, sizeof rel, "%s", hit);
        else {                                   // not existing (yet): keep the name as given
            char t2[1024];
            snprintf(t2, sizeof t2, "%s%s%s", rel, rel[0] ? "/" : "", parts[i]);
            snprintf(rel, sizeof rel, "%s", t2);
        }
    }
    pthread_mutex_unlock(&g_pcmu);
    snprintf(out, outsz, "%s%s%s", g_game_dir, rel[0] ? "/" : "", rel);
    return 1;
}
void path_cache_forget(const char *hostpath) {    // after creating a file/dir: rescan its parent next time
    (void)hostpath;
    pthread_mutex_lock(&g_pcmu);
    for (u32 i = 0; i < PC_N; i++)
        if (g_pc[i].key && strstr(g_pc[i].key, "\001scanned")) { g_pc[i].val[0] = 0; free(g_pc[i].key); g_pc[i].key = strdup("\002"); }
    pthread_mutex_unlock(&g_pcmu);
}
const char *cwd_get(void) { return g_cwd; }
int cwd_set(const char *winpath) {
    char host[1024];
    if (!host_path(winpath, host, sizeof host)) return 0;
    struct stat st;
    if (stat(host, &st) || !S_ISDIR(st.st_mode)) return 0;
    char full[1024];
    const char *p = winpath;
    if (((p[0] | 32) >= 'a' && (p[0] | 32) <= 'z') && p[1] == ':' && p[2] != '\\' && p[2] != '/')
        snprintf(full, sizeof full, "%s\\%s", g_cwd, p + 2);       // "C:data\x" = relative to the current dir on C:
    else if (((p[0] | 32) >= 'a' && (p[0] | 32) <= 'z') && p[1] == ':') snprintf(full, sizeof full, "%s", p);
    else snprintf(full, sizeof full, "%s\\%s", g_cwd, p);
    // normalise "." / ".." / "\\": the game's folder walk (0x52d2c0) does chdir(sub) ... chdir("..") for every folder;
    // appended unresolved, the path passed 1024 chars, chdir failed, and the walk (which ignores the result) listed
    // the same folder again forever -> "out of handles" (5 Nov 2026, a fresh install with the release's folders)
    for (char *q = full; *q; q++) if (*q == '/') *q = '\\';
    char *parts[256], tmp[1024], out[1024], *save = 0;
    int np = 0;
    snprintf(tmp, sizeof tmp, "%s", full + 2);
    for (char *tok = strtok_r(tmp, "\\", &save); tok; tok = strtok_r(0, "\\", &save)) {
        if (!strcmp(tok, ".")) continue;
        if (!strcmp(tok, "..")) { if (np) np--; continue; }
        if (np < 256) parts[np++] = tok;
    }
    int o = snprintf(out, sizeof out, "%c:", full[0]);
    for (int i = 0; i < np && o < (int)sizeof out; i++) o += snprintf(out + o, sizeof out - (size_t)o, "\\%s", parts[i]);
    if (!np) snprintf(out + o, sizeof out - (size_t)o, "\\");
    snprintf(g_cwd, sizeof g_cwd, "%s", out);
    return 1;
}
