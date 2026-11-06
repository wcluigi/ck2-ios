// KERNEL32 replacement (files, INI, modules, threads, sync, memory, time, text).
#include "rt.h"
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

extern pthread_mutex_t g_sync;
extern pthread_cond_t g_sync_cv;
int thread_done(void *obj, u32 *code);
void thread_resume(u32 h);
void path_cache_forget(const char *hostpath);
const char *cwd_get(void);
int cwd_set(const char *winpath);
#ifdef _WIN32
#define mkdir(p, m) mkdir(p)
#ifndef O_BINARY
#define O_BINARY 0x8000
#endif
#else
#define O_BINARY 0
#endif

#define TRUE_ 1u
#define INVALID 0xffffffffu
#define ERR_FILE_NOT_FOUND 2u
#define ERR_PATH_NOT_FOUND 3u
#define ERR_NO_MORE_FILES 18u
#define ERR_ALREADY_EXISTS 183u
#define ERR_FILE_EXISTS 80u

static int put_str(u32 dst, u32 size, const char *s) {   // returns length written (without NUL)
    if (!dst || !size) return (int)strlen(s);
    u32 n = (u32)strlen(s);
    if (n >= size) n = size - 1;
    memcpy(HP(dst), s, n);
    M8(dst + n) = 0;
    return (int)n;
}
static void unix_to_filetime(time_t t, u32 ft) {
    u64 v = ((u64)t + 11644473600ull) * 10000000ull;
    M32(ft) = (u32)v; M32(ft + 4) = (u32)(v >> 32);
}

// ---- files ---------------------------------------------------------------------------
typedef struct { int fd; char path[600]; } FileObj;
#define STDH_IN 0xfffffff6u
#define STDH_OUT 0xfffffff5u
#define STDH_ERR 0xfffffff4u
static u32 file_open(const char *win, u32 access, u32 disp) {
    char hp[1024];
    host_path(win, hp, sizeof hp);
    int fl = O_BINARY;
    int rd = (access & 0x80000000u) || (access & 1), wr = (access & 0x40000000u) || (access & 2);
    fl |= rd && wr ? O_RDWR : wr ? O_WRONLY : O_RDONLY;
    switch (disp) {
    case 1: fl |= O_CREAT | O_EXCL; break;               // CREATE_NEW
    case 2: fl |= O_CREAT | O_TRUNC; break;              // CREATE_ALWAYS
    case 3: break;                                       // OPEN_EXISTING
    case 4: fl |= O_CREAT; break;                        // OPEN_ALWAYS
    case 5: fl |= O_TRUNC; break;                        // TRUNCATE_EXISTING
    }
    int fd = open(hp, fl, 0644);
    if (fd < 0) {
        static int nfail;
        if (nfail++ < 40) rt_log("CreateFile failed: %s -> %s (errno %d)\n", win, hp, errno);
        set_last_error(errno == EEXIST ? ERR_FILE_EXISTS : errno == ENOENT ? ERR_FILE_NOT_FOUND : 5);
        return INVALID;
    }
    if (fl & O_CREAT) path_cache_forget(hp);
    if (getenv("CK_FILELOG")) rt_log("CreateFile %s\n", win);
    FileObj *f = calloc(1, sizeof *f);
    f->fd = fd;
    snprintf(f->path, sizeof f->path, "%s", hp);
    set_last_error(0);
    return handle_new(H_FILE, f);
}
static FileObj *file_of(u32 h) { HObj *o = handle_get(h); return o && o->type == H_FILE ? o->obj : 0; }

HLE(k_CreateFileA) { u64 t0 = us_now(); u32 r = file_open(GS(ARG(0)), ARG(1), ARG(4)); perf_file(GS(ARG(0)), us_now() - t0); return r; }
HLE(k_CreateFileW) {
    u8 b[600];
    int n = utf16_to_gbk(GW(ARG(0)), -1, b, sizeof b - 1);
    b[n < 599 ? n : 599] = 0;
    return file_open((char *)b, ARG(1), ARG(4));
}
HLE(k_ReadFile) {
    FileObj *f = file_of(ARG(0));
    if (ARG(3)) M32(ARG(3)) = 0;
    if (!f) { set_last_error(6); return 0; }
    u64 t0 = us_now();
    long n = read(f->fd, HP(ARG(1)), ARG(2));
    g_perf.read_us += us_now() - t0;
    if (n < 0) return 0;
    if (ARG(3)) M32(ARG(3)) = (u32)n;
    return TRUE_;
}
HLE(k_WriteFile) {
    u32 h = ARG(0);
    if (h == STDH_OUT || h == STDH_ERR) {
        rt_log("[game] %.*s", (int)ARG(2), GS(ARG(1)));
        if (ARG(3)) M32(ARG(3)) = ARG(2);
        return TRUE_;
    }
    FileObj *f = file_of(h);
    if (ARG(3)) M32(ARG(3)) = 0;
    if (!f) { set_last_error(6); return 0; }
    long n = write(f->fd, HP(ARG(1)), ARG(2));
    if (n < 0) return 0;
    if (ARG(3)) M32(ARG(3)) = (u32)n;
    return TRUE_;
}
HLE(k_SetFilePointer) {
    FileObj *f = file_of(ARG(0));
    if (!f) return INVALID;
    s64 d = (s32)ARG(1);
    if (ARG(2)) d = (s64)(((u64)M32(ARG(2)) << 32) | ARG(1));
    long r = (long)lseek(f->fd, (off_t)d, ARG(3) == 0 ? SEEK_SET : ARG(3) == 1 ? SEEK_CUR : SEEK_END);
    if (r < 0) return INVALID;
    if (ARG(2)) M32(ARG(2)) = 0;
    return (u32)r;
}
HLE(k_GetFileSize) {
    FileObj *f = file_of(ARG(0));
    if (!f) return INVALID;
    struct stat st;
    fstat(f->fd, &st);
    if (ARG(1)) M32(ARG(1)) = 0;
    return (u32)st.st_size;
}
HLE(k_GetFileType) { u32 h = ARG(0); return h == STDH_IN || h == STDH_OUT || h == STDH_ERR ? 2 : file_of(h) ? 1 : 0; }
HLE(k_FlushFileBuffers) { return TRUE_; }
HLE(k_CloseHandle) {
    HObj *o = handle_get(ARG(0));
    if (!o) return TRUE_;
    if (o->type == H_FILE) { close(((FileObj *)o->obj)->fd); free(o->obj); handle_free(ARG(0)); }
    else if (o->type == H_EVENT || o->type == H_SEM || o->type == H_MUTEX) { /* keep: other handles may share */ }
    return TRUE_;
}
HLE(k_DeleteFileA) { char hp[1024]; host_path(GS(ARG(0)), hp, sizeof hp); int r = unlink(hp); path_cache_forget(hp); return r == 0; }
HLE(k_CopyFileA) {
    char a[1024], b[1024];
    host_path(GS(ARG(0)), a, sizeof a); host_path(GS(ARG(1)), b, sizeof b);
    if (ARG(2) && access(b, 0) == 0) { set_last_error(ERR_FILE_EXISTS); return 0; }
    FILE *in = fopen(a, "rb"), *out = in ? fopen(b, "wb") : 0;
    if (!in || !out) { if (in) fclose(in); set_last_error(ERR_FILE_NOT_FOUND); return 0; }
    char buf[65536]; size_t n;
    while ((n = fread(buf, 1, sizeof buf, in)) > 0) fwrite(buf, 1, n, out);
    fclose(in); fclose(out);
    path_cache_forget(b);
    return TRUE_;
}
HLE(k_MoveFileA) {
    char a[1024], b[1024];
    host_path(GS(ARG(0)), a, sizeof a); host_path(GS(ARG(1)), b, sizeof b);
    int r = rename(a, b);
    path_cache_forget(b);
    return r == 0;
}
HLE(k_CreateDirectoryA) {
    char hp[1024]; host_path(GS(ARG(0)), hp, sizeof hp);
    if (mkdir(hp, 0755)) { set_last_error(errno == EEXIST ? ERR_ALREADY_EXISTS : ERR_PATH_NOT_FOUND); return 0; }
    path_cache_forget(hp);
    return TRUE_;
}
HLE(k_RemoveDirectoryA) { char hp[1024]; host_path(GS(ARG(0)), hp, sizeof hp); return rmdir(hp) == 0; }
HLE(k_GetFileAttributesA) {
    char hp[1024];
    host_path(GS(ARG(0)), hp, sizeof hp);
    struct stat st;
    int r = stat(hp, &st);
    if (getenv("CK_FILELOG")) rt_log("GetFileAttributes %s -> %s %s\n", GS(ARG(0)), hp, r ? "missing" : "ok");
    if (r) { set_last_error(ERR_FILE_NOT_FOUND); return INVALID; }
    return S_ISDIR(st.st_mode) ? 0x10 : 0x80;
}
HLE(k_SetFileAttributesA) { return TRUE_; }
HLE(k_GetFullPathNameA) {
    const char *p = GS(ARG(0));
    char full[1024];
    if (p[1] == ':') snprintf(full, sizeof full, "%s", p); else snprintf(full, sizeof full, "%s\\%s", cwd_get(), p);
    int n = put_str(ARG(2), ARG(1), full);
    if (ARG(3)) { char *s = strrchr(GS(ARG(2)), '\\'); M32(ARG(3)) = s ? GA(s + 1) : ARG(2); }
    return (u32)n;
}
HLE(k_GetTempPathA) {
    char d[600], hp[1024];
    snprintf(d, sizeof d, "%s\\temp\\", g_fake_dir);
    host_path(d, hp, sizeof hp);
    mkdir(hp, 0755);
    return (u32)put_str(ARG(1), ARG(0), d);
}
HLE(k_GetCurrentDirectoryA) { return (u32)put_str(ARG(1), ARG(0), cwd_get()); }
HLE(k_SetCurrentDirectoryA) { return (u32)cwd_set(GS(ARG(0))); }
HLE(k_GetDiskFreeSpaceA) {
    if (ARG(1)) M32(ARG(1)) = 8; if (ARG(2)) M32(ARG(2)) = 512;
    if (ARG(3)) M32(ARG(3)) = 0x200000; if (ARG(4)) M32(ARG(4)) = 0x400000;
    return TRUE_;
}
HLE(k_GetDriveTypeA) { return 3; }      // DRIVE_FIXED
HLE(k_GetLogicalDrives) { return 4; }  // C:
HLE(k_OpenFile) {        // OFSTRUCT-based open: read/write by style bits
    u32 style = ARG(2);
    if (style & 0x4000) {       // OF_EXIST
        char hp[1024]; host_path(GS(ARG(0)), hp, sizeof hp);
        return access(hp, 0) == 0 ? 1 : INVALID;
    }
    u32 acc = (style & 3) == 0 ? 0x80000000u : (style & 3) == 1 ? 0x40000000u : 0xc0000000u;
    return file_open(GS(ARG(0)), acc, (style & 0x1000) ? 2 : 3);
}
HLE(k__lclose) { HObj *o = handle_get(ARG(0)); if (o && o->type == H_FILE) { close(((FileObj *)o->obj)->fd); free(o->obj); handle_free(ARG(0)); } return 0; }

// FindFirstFile: list the host directory and filter with the Windows wildcard
typedef struct { char dir[1024]; char pat[260]; DIR *d; } FindObj;
static int wild(const char *p, const char *s) {
    for (; *p; p++, s++) {
        if (*p == '*') { while (p[1] == '*') p++; if (!p[1]) return 1; for (; *s; s++) if (wild(p + 1, s)) return 1; return wild(p + 1, s); }
        if (!*s) return !strcmp(p, ".*") || !strcmp(p, "*");
        char a = *p, b = *s;
        if (a >= 'A' && a <= 'Z') a += 32;
        if (b >= 'A' && b <= 'Z') b += 32;
        if (a != '?' && a != b) return 0;
    }
    return !*s;
}
static int find_next(FindObj *f, u32 fd) {
    struct dirent *e;
    while (f->d && (e = readdir(f->d))) {
        if (!wild(f->pat, e->d_name) && !(strcmp(f->pat, "*.*") == 0)) continue;
        char full[1400];
        snprintf(full, sizeof full, "%s/%s", f->dir, e->d_name);
        struct stat st;
        if (stat(full, &st)) continue;
        memset(HP(fd), 0, 320);
        M32(fd) = S_ISDIR(st.st_mode) ? 0x10 : 0x80;
        unix_to_filetime(st.st_mtime, fd + 4); unix_to_filetime(st.st_mtime, fd + 12); unix_to_filetime(st.st_mtime, fd + 20);
        M32(fd + 32) = (u32)st.st_size;
        snprintf(GS(fd + 44), 260, "%s", e->d_name);
        return 1;
    }
    return 0;
}
HLE(k_FindFirstFileA) {
    char hp[1024];
    host_path(GS(ARG(0)), hp, sizeof hp);
    FindObj *f = calloc(1, sizeof *f);
    char *slash = strrchr(hp, '/');
    if (!slash) { free(f); return INVALID; }
    *slash = 0;
    snprintf(f->dir, sizeof f->dir, "%s", hp);
    snprintf(f->pat, sizeof f->pat, "%s", slash + 1);
    f->d = opendir(f->dir);
    if (!f->d || !find_next(f, ARG(1))) { if (f->d) closedir(f->d); free(f); set_last_error(ERR_FILE_NOT_FOUND); return INVALID; }
    return handle_new(H_FIND, f);
}
HLE(k_FindNextFileA) {
    HObj *o = handle_get(ARG(0));
    if (!o || o->type != H_FIND) return 0;
    if (find_next(o->obj, ARG(1))) return TRUE_;
    set_last_error(ERR_NO_MORE_FILES);
    return 0;
}
HLE(k_FindClose) {
    HObj *o = handle_get(ARG(0));
    if (o && o->type == H_FIND) { FindObj *f = o->obj; if (f->d) closedir(f->d); free(f); handle_free(ARG(0)); }
    return TRUE_;
}

// ---- INI files ----------------------------------------------------------------------------
static char *ini_read(const char *file, long *len) {
    char hp[1024], win[600];
    if (!strchr(file, '\\') && !strchr(file, '/')) snprintf(win, sizeof win, "C:\\windows\\%s", file);   // bare name = Windows dir
    else snprintf(win, sizeof win, "%s", file);
    host_path(win, hp, sizeof hp);
    FILE *f = fopen(hp, "rb");
    if (!f) { *len = 0; return 0; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    char *b = malloc(n + 1);
    n = (long)fread(b, 1, n, f);
    b[n] = 0; fclose(f);
    *len = n;
    return b;
}
static void trim(char *s) {
    char *e = s + strlen(s);
    while (e > s && (e[-1] == ' ' || e[-1] == '\t' || e[-1] == '\r')) *--e = 0;
    char *b = s;
    while (*b == ' ' || *b == '\t') b++;
    if (b != s) memmove(s, b, strlen(b) + 1);
}
// returns 1 and copies value if found
static int ini_get(const char *file, const char *sec, const char *key, char *out, int outsz) {
    long n;
    char *b = ini_read(file, &n);
    if (!b) return 0;
    int insec = 0, found = 0;
    for (char *line = strtok(b, "\n"); line; line = strtok(0, "\n")) {
        char l[1024];
        snprintf(l, sizeof l, "%s", line);
        trim(l);
        if (l[0] == '[') { char *e = strchr(l, ']'); if (e) *e = 0; insec = !strcasecmp(l + 1, sec); continue; }
        if (!insec || l[0] == ';') continue;
        char *eq = strchr(l, '=');
        if (!eq) continue;
        *eq = 0;
        trim(l);
        if (!strcasecmp(l, key)) {
            char *v = eq + 1;
            trim(v);
            snprintf(out, outsz, "%s", v);
            found = 1;
            break;
        }
    }
    free(b);
    return found;
}
HLE(k_GetPrivateProfileStringA) {
    u32 sec = ARG(0), key = ARG(1), def = ARG(2), buf = ARG(3), size = ARG(4);
    const char *file = GS(ARG(5));
    if (!size) return 0;
    if (!sec || !key) {       // section / key lists: rarely used; empty list
        M8(buf) = 0; if (size > 1) M8(buf + 1) = 0;
        return 0;
    }
    char v[1024];
    if (!ini_get(file, GS(sec), GS(key), v, sizeof v)) snprintf(v, sizeof v, "%s", def ? GS(def) : "");
    return (u32)put_str(buf, size, v);
}
HLE(k_GetPrivateProfileIntA) {
    char v[64];
    if (!ini_get(GS(ARG(3)), GS(ARG(0)), GS(ARG(1)), v, sizeof v)) return ARG(2);
    return (u32)strtol(v, 0, 10);
}
HLE(k_WritePrivateProfileStringA) {
    const char *sec = GS(ARG(0)), *file = GS(ARG(3));
    const char *key = ARG(1) ? GS(ARG(1)) : 0, *val = ARG(2) ? GS(ARG(2)) : 0;
    long n;
    char *b = ini_read(file, &n);
    size_t cap = (size_t)n + 4096;
    char *out = malloc(cap);
    size_t o = 0;
    int insec = 0, done = 0, sawsec = 0;
    if (b) {
        char *p = b;
        while (*p) {
            char *nl = strchr(p, '\n');
            size_t ll = nl ? (size_t)(nl - p + 1) : strlen(p);
            char l[1024];
            snprintf(l, sizeof l, "%.*s", (int)(ll > 1023 ? 1023 : ll), p);
            char t[1024]; snprintf(t, sizeof t, "%s", l); trim(t);
            if (t[0] == '[') {
                if (insec && !done && key && val) { o += (size_t)snprintf(out + o, cap - o, "%s=%s\r\n", key, val); done = 1; }
                char *e = strchr(t, ']'); if (e) *e = 0;
                insec = !strcasecmp(t + 1, sec);
                if (insec) sawsec = 1;
                if (insec && !key) { p += ll; continue; }         // delete section
            } else if (insec) {
                if (!key) { p += ll; continue; }
                char *eq = strchr(t, '=');
                if (eq) { *eq = 0; trim(t); if (!strcasecmp(t, key)) { if (val && !done) o += (size_t)snprintf(out + o, cap - o, "%s=%s\r\n", key, val); done = 1; p += ll; continue; } }
            }
            memcpy(out + o, p, ll); o += ll;
            p += ll;
        }
        free(b);
    }
    if (key && val && !done) {
        if (!sawsec) o += (size_t)snprintf(out + o, cap - o, "[%s]\r\n", sec);
        o += (size_t)snprintf(out + o, cap - o, "%s=%s\r\n", key, val);
    }
    char hp[1024], win[600];
    if (!strchr(file, '\\') && !strchr(file, '/')) snprintf(win, sizeof win, "C:\\windows\\%s", file); else snprintf(win, sizeof win, "%s", file);
    host_path(win, hp, sizeof hp);
    FILE *f = fopen(hp, "wb");
    if (f) { fwrite(out, 1, o, f); fclose(f); }
    free(out);
    return f != 0;
}

// ---- process / modules ----------------------------------------------------------------------
static u32 g_cmdline_g;
HLE(k_GetCommandLineA) { if (!g_cmdline_g) g_cmdline_g = gstrdup(g_cmdline); return g_cmdline_g; }
HLE(k_GetStartupInfoA) { memset(HP(ARG(0)), 0, 68); M32(ARG(0)) = 68; return 0; }
HLE(k_GetModuleHandleA) { return module_handle(ARG(0) ? GS(ARG(0)) : 0); }
HLE(k_GetModuleFileNameA) { const char *p = module_path(ARG(0)); if (!p) return 0; return (u32)put_str(ARG(1), ARG(2), p); }
HLE(k_GetProcAddress) {
    u32 n = ARG(1);
    char b[32];
    if (n < 0x10000) { snprintf(b, sizeof b, "#%u", n); return module_proc(ARG(0), b); }
    return module_proc(ARG(0), GS(n));
}
HLE(k_LoadLibraryA) { return module_load(GS(ARG(0))); }
HLE(k_FreeLibrary) { return TRUE_; }
HLE(k_DisableThreadLibraryCalls) { return TRUE_; }
HLE(k_GetCurrentProcess) { return 0xffffffffu; }
HLE(k_GetCurrentProcessId) { return 1234; }
HLE(k_GetCurrentThreadId) { return M32(cur_thread()->teb + 0x24); }
HLE(k_GetCurrentThread) { return 0xfffffffeu; }
HLE(k_ExitProcess) { rt_log("ExitProcess(%u)\n", ARG(0)); _exit((int)ARG(0)); return 0; }
HLE(k_TerminateProcess) { rt_log("TerminateProcess(%u)\n", ARG(1)); _exit((int)ARG(1)); return 0; }
HLE(k_CreateProcessA) { rt_log("CreateProcess(%s %s) refused\n", ARG(0) ? GS(ARG(0)) : "", ARG(1) ? GS(ARG(1)) : ""); set_last_error(2); return 0; }
HLE(k_WinExec) { rt_log("WinExec(%s) refused\n", GS(ARG(0))); return 2; }
HLE(k_GetLastError) { return cur_thread()->last_error; }
HLE(k_SetLastError) { cur_thread()->last_error = ARG(0); return 0; }
HLE(k_SetErrorMode) { return 0; }
HLE(k_FormatMessageA) {
    char b[64];
    snprintf(b, sizeof b, "Error %u", ARG(2));
    if (ARG(0) & 0x100) { u32 p = gstrdup(b); M32(ARG(4)) = p; return (u32)strlen(b); }   // ALLOCATE_BUFFER
    return (u32)put_str(ARG(4), ARG(5), b);
}
HLE(k_OutputDebugStringA) { rt_log("[debug] %s", GS(ARG(0))); return 0; }
HLE(k_OutputDebugStringW) { u8 b[512]; int n = utf16_to_gbk(GW(ARG(0)), -1, b, 511); b[n < 511 ? n : 511] = 0; rt_log("[debug] %s", b); return 0; }
HLE(k_RaiseException) { rt_fatal("RaiseException(%08x) from %08x", ARG(0), M32(c->esp)); return 0; }
HLE(k_RtlUnwind) { rt_fatal("RtlUnwind (structured exception unwinding) from %08x - not supported", M32(c->esp)); return 0; }
HLE(k_SetUnhandledExceptionFilter) { return 0; }
HLE(k_UnhandledExceptionFilter) { return 0; }
HLE(k_Beep) { return TRUE_; }
static pthread_mutex_t *cs_get(u32 cs);
// newer static CRTs (game DLLs): fiber-local storage = thread-local storage here; wide start-up variants
static u32 g_tls_next;
HLE(k_FlsAlloc) { u32 i = __atomic_fetch_add(&g_tls_next, 1, __ATOMIC_SEQ_CST); return i < 128 ? i : 0xffffffffu; }
HLE(k_FlsGetValue) { set_last_error(0); return ARG(0) < 128 ? cur_thread()->tls[ARG(0)] : 0; }
HLE(k_FlsSetValue) { if (ARG(0) < 128) cur_thread()->tls[ARG(0)] = ARG(1); return TRUE_; }
HLE(k_GetCommandLineW) {
    static u32 w;
    if (!w) { u16 tmp[1024]; int n = gbk_to_utf16((u8 *)g_cmdline, -1, tmp, 1023); w = galloc(2u * (u32)n + 2); memcpy(HP(w), tmp, 2u * (u32)n); M16(w + 2u * (u32)n) = 0; }
    return w;
}
HLE(k_GetModuleFileNameW) {
    const char *p = module_path(ARG(0));
    if (!p || !ARG(2)) return 0;
    u16 tmp[300]; int n = gbk_to_utf16((const u8 *)p, -1, tmp, 299);
    if ((u32)n >= ARG(2)) n = (int)ARG(2) - 1;
    memcpy(HP(ARG(1)), tmp, 2u * (u32)n); M16(ARG(1) + 2u * (u32)n) = 0;
    return (u32)n;
}
HLE(k_IsValidCodePage) { return 1; }
HLE(k_InitializeCriticalSectionAndSpinCount) { memset(HP(ARG(0)), 0, 24); cs_get(ARG(0)); return TRUE_; }
HLE(k_TryEnterCriticalSection) { return pthread_mutex_trylock(cs_get(ARG(0))) == 0; }
HLE(k_GetVersion) { return (2600u << 16) | (1u << 8) | 5u; }
HLE(k_IsDebuggerPresent) { return 0; }
HLE(k_GetLCID) { return 0x804; }
HLE(k_PassPointer) { return ARG(0); }
HLE(k_GetTimeZoneInformation) { memset(HP(ARG(0)), 0, 172); return 0; }
HLE(k_GetModuleHandleW) { u8 b[260]; if (!ARG(0)) return module_handle(0); int n = utf16_to_gbk(GW(ARG(0)), -1, b, 259); b[n < 259 ? n : 259] = 0; return module_handle((char *)b); }
HLE(k_GetEnvironmentVariableA) { set_last_error(203); if (ARG(1) && ARG(2)) M8(ARG(1)) = 0; return 0; }   // nothing set on the phone
HLE(k_SetEnvironmentVariableA) { return TRUE_; }
HLE(k_GetEnvironmentStrings) { static u32 e; if (!e) e = gstatic(16); return e; }
HLE(k_FreeEnvironmentStrings) { return TRUE_; }
HLE(k_GetStdHandle) { return ARG(0); }
HLE(k_SetStdHandle) { return TRUE_; }
HLE(k_SetHandleCount) { return ARG(0); }
HLE(k_IsBadPtr) { return ARG(0) < 0x10000 ? 1 : 0; }
HLE(k_IsProcessorFeaturePresent) { return 0; }       // no SSE/3DNow: the game takes its plain paths

// ---- time ------------------------------------------------------------------------------------
HLE(k_GetTickCount) { return ms_now(); }
HLE(k_QueryPerformanceCounter) { u64 t = us_now(); M32(ARG(0)) = (u32)t; M32(ARG(0) + 4) = (u32)(t >> 32); return TRUE_; }
HLE(k_QueryPerformanceFrequency) { M32(ARG(0)) = 1000000; M32(ARG(0) + 4) = 0; return TRUE_; }
static void systemtime(u32 p, int local) {
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    time_t t = ts.tv_sec;
    struct tm tm;
    if (local) localtime_r(&t, &tm); else gmtime_r(&t, &tm);
    M16(p) = (u16)(tm.tm_year + 1900); M16(p + 2) = (u16)(tm.tm_mon + 1); M16(p + 4) = (u16)tm.tm_wday;
    M16(p + 6) = (u16)tm.tm_mday; M16(p + 8) = (u16)tm.tm_hour; M16(p + 10) = (u16)tm.tm_min; M16(p + 12) = (u16)tm.tm_sec;
    M16(p + 14) = (u16)(ts.tv_nsec / 1000000);
}
HLE(k_GetLocalTime) { systemtime(ARG(0), 1); return 0; }
HLE(k_GetSystemTime) { systemtime(ARG(0), 0); return 0; }
HLE(k_GetSystemTimeAsFileTime) {
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    u64 v = ((u64)ts.tv_sec + 11644473600ull) * 10000000ull + ts.tv_nsec / 100;
    M32(ARG(0)) = (u32)v; M32(ARG(0) + 4) = (u32)(v >> 32);
    return 0;
}
HLE(k_Sleep) { u32 ms = ARG(0); struct timespec ts = {ms / 1000, (long)(ms % 1000) * 1000000}; if (!ms) sched_yield(); else nanosleep(&ts, 0); return 0; }

// ---- system info --------------------------------------------------------------------------------
HLE(k_GetVersionExA) {
    u32 p = ARG(0);
    M32(p + 4) = 5; M32(p + 8) = 1; M32(p + 12) = 2600; M32(p + 16) = 2;     // Windows XP SP3
    snprintf(GS(p + 20), 128, "Service Pack 3");
    return TRUE_;
}
HLE(k_GetSystemInfo) {
    u32 p = ARG(0);
    memset(HP(p), 0, 36);
    M32(p + 4) = 4096; M32(p + 8) = 0x10000; M32(p + 12) = 0x7ffeffff; M32(p + 16) = 1; M32(p + 20) = 1;
    M32(p + 24) = 586; M32(p + 28) = 0x10000; M16(p + 32) = 6;
    return 0;
}
HLE(k_GetSystemDirectoryA) { return (u32)put_str(ARG(0), ARG(1), "C:\\WINDOWS\\system32"); }

// ---- critical sections, interlocked, sync objects -------------------------------------------------
static pthread_mutex_t *g_cs[65536];
static u32 g_ncs;
static pthread_mutex_t g_csmu = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t *cs_get(u32 cs) {
    u32 id = M32(cs);
    if (id & 0x80000000u) return g_cs[id & 0xffff];
    pthread_mutex_lock(&g_csmu);                     // lazily created (or an uninitialised zero struct)
    id = M32(cs);
    if (!(id & 0x80000000u)) {
        pthread_mutex_t *m = malloc(sizeof *m);
        pthread_mutexattr_t a;
        pthread_mutexattr_init(&a);
        pthread_mutexattr_settype(&a, PTHREAD_MUTEX_RECURSIVE);
        pthread_mutex_init(m, &a);
        id = 0x80000000u | (++g_ncs & 0xffff);
        g_cs[id & 0xffff] = m;
        M32(cs) = id;
    }
    pthread_mutex_unlock(&g_csmu);
    return g_cs[id & 0xffff];
}
HLE(k_InitializeCriticalSection) { memset(HP(ARG(0)), 0, 24); cs_get(ARG(0)); return 0; }
HLE(k_DeleteCriticalSection) { return 0; }
HLE(k_EnterCriticalSection) { pthread_mutex_lock(cs_get(ARG(0))); return 0; }
HLE(k_LeaveCriticalSection) { pthread_mutex_unlock(cs_get(ARG(0))); return 0; }
HLE(k_InterlockedIncrement) { return __atomic_add_fetch((u32 *)HP(ARG(0)), 1, __ATOMIC_SEQ_CST); }
HLE(k_InterlockedDecrement) { return __atomic_sub_fetch((u32 *)HP(ARG(0)), 1, __ATOMIC_SEQ_CST); }
HLE(k_InterlockedExchange) { return __atomic_exchange_n((u32 *)HP(ARG(0)), ARG(1), __ATOMIC_SEQ_CST); }
HLE(k_InterlockedCompareExchange) { u32 e = ARG(2); __atomic_compare_exchange_n((u32 *)HP(ARG(0)), &e, ARG(1), 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST); return e; }

typedef struct { int manual, signaled; } EventObj;
typedef struct { s32 count, max; } SemObj;
HLE(k_CreateEventA) { EventObj *e = calloc(1, sizeof *e); e->manual = ARG(1) != 0; e->signaled = ARG(2) != 0; return handle_new(H_EVENT, e); }
static u32 ev_set(u32 h, int v) {
    HObj *o = handle_get(h);
    if (!o || o->type != H_EVENT) return 0;
    pthread_mutex_lock(&g_sync); ((EventObj *)o->obj)->signaled = v; pthread_cond_broadcast(&g_sync_cv); pthread_mutex_unlock(&g_sync);
    return TRUE_;
}
HLE(k_SetEvent) { return ev_set(ARG(0), 1); }
HLE(k_ResetEvent) { return ev_set(ARG(0), 0); }
HLE(k_CreateSemaphoreA) { SemObj *s = calloc(1, sizeof *s); s->count = (s32)ARG(1); s->max = (s32)ARG(2); return handle_new(H_SEM, s); }
HLE(k_ReleaseSemaphore) {
    HObj *o = handle_get(ARG(0));
    if (!o || o->type != H_SEM) return 0;
    pthread_mutex_lock(&g_sync);
    SemObj *s = o->obj;
    if (ARG(2)) M32(ARG(2)) = (u32)s->count;
    s->count += (s32)ARG(1);
    if (s->count > s->max) s->count = s->max;
    pthread_cond_broadcast(&g_sync_cv);
    pthread_mutex_unlock(&g_sync);
    return TRUE_;
}
static int try_acquire(HObj *o) {     // under g_sync
    switch (o->type) {
    case H_THREAD: return thread_done(o->obj, 0);
    case H_EVENT: { EventObj *e = o->obj; if (!e->signaled) return 0; if (!e->manual) e->signaled = 0; return 1; }
    case H_SEM: { SemObj *s = o->obj; if (s->count <= 0) return 0; s->count--; return 1; }
    default: return 1;
    }
}
u32 wait_handles(u32 n, const u32 *hs, int all, u32 ms) {
    u64 deadline = us_now() + (u64)ms * 1000;
    pthread_mutex_lock(&g_sync);
    for (;;) {
        if (!all) {
            for (u32 i = 0; i < n; i++) { HObj *o = handle_get(hs[i]); if (!o || try_acquire(o)) { pthread_mutex_unlock(&g_sync); return i; } }
        } else {
            int ok = 1;
            for (u32 i = 0; i < n && ok; i++) { HObj *o = handle_get(hs[i]); if (o && o->type == H_THREAD && !thread_done(o->obj, 0)) ok = 0; }
            if (ok) { pthread_mutex_unlock(&g_sync); return 0; }
        }
        if (ms == 0) break;
        if (ms == INVALID) pthread_cond_wait(&g_sync_cv, &g_sync);
        else {
            u64 now = us_now();
            if (now >= deadline) break;
            u64 until = deadline;
            struct timespec ts;
            clock_gettime(CLOCK_REALTIME, &ts);
            u64 add = until - now;
            ts.tv_sec += (time_t)(add / 1000000); ts.tv_nsec += (long)(add % 1000000) * 1000;
            if (ts.tv_nsec >= 1000000000) { ts.tv_sec++; ts.tv_nsec -= 1000000000; }
            pthread_cond_timedwait(&g_sync_cv, &g_sync, &ts);
        }
    }
    pthread_mutex_unlock(&g_sync);
    return 0x102;   // WAIT_TIMEOUT
}
HLE(k_WaitForSingleObject) { u32 h = ARG(0); return wait_handles(1, &h, 0, ARG(1)); }
HLE(k_WaitForMultipleObjects) { return wait_handles(ARG(0), (u32 *)HP(ARG(1)), ARG(2) != 0, ARG(3)); }
HLE(k_SetThreadPriority) { return TRUE_; }
HLE(k_GetOverlappedResult) { return 0; }
HLE(k_ResumeThread) { thread_resume(ARG(0)); return 1; }
HLE(k_GetExitCodeThread) { HObj *o = handle_get(ARG(0)); u32 code = 259; if (o && o->type == H_THREAD) thread_done(o->obj, &code); M32(ARG(1)) = code; return TRUE_; }
HLE(k_CreateThread) { u32 tid; u32 h = thread_create(ARG(2), ARG(3), ARG(1), (ARG(4) & 4) != 0, &tid); if (ARG(5)) M32(ARG(5)) = tid; return h; }

// ---- TLS -------------------------------------------------------------------------------------------
HLE(k_TlsAlloc) { u32 i = __atomic_fetch_add(&g_tls_next, 1, __ATOMIC_SEQ_CST); return i < 128 ? i : INVALID; }
HLE(k_TlsFree) { return TRUE_; }
HLE(k_TlsGetValue) { set_last_error(0); return ARG(0) < 128 ? cur_thread()->tls[ARG(0)] : 0; }
HLE(k_TlsSetValue) { if (ARG(0) < 128) cur_thread()->tls[ARG(0)] = ARG(1); return TRUE_; }

// ---- memory -------------------------------------------------------------------------------------------
HLE(k_HeapCreate) { static u32 n = 0x00900000; return n += 0x10000; }   // all heaps share the guest heap
HLE(k_HeapDestroy) { return TRUE_; }
HLE(k_HeapAlloc) { return (ARG(1) & 8) ? gcalloc(ARG(2)) : galloc(ARG(2)); }
HLE(k_HeapFree) { gfree(ARG(2)); return TRUE_; }
HLE(k_HeapReAlloc) {
    u32 p = ARG(2), n = ARG(3), old = gmsize(p);
    u32 r = grealloc(p, n);
    if ((ARG(1) & 8) && n > old) memset(HP(r + old), 0, n - old);
    return r;
}
HLE(k_HeapSize) { return gmsize(ARG(2)); }
HLE(k_GetProcessHeap) { return 0x00900000; }
HLE(k_GlobalAlloc) { return (ARG(0) & 0x40) ? gcalloc(ARG(1)) : galloc(ARG(1)); }
HLE(k_GlobalFree) { gfree(ARG(0)); return 0; }
HLE(k_GlobalLock) { return ARG(0); }
HLE(k_GlobalUnlock) { return TRUE_; }
HLE(k_GlobalHandle) { return ARG(0); }
HLE(k_LocalFree) { gfree(ARG(0)); return 0; }
HLE(k_VirtualAlloc) {
    u32 a = ARG(0), n = ARG(1);
    if (a) return a;                    // commit inside an earlier reservation: memory is already usable
    return gpages(n);
}
HLE(k_VirtualFree) { return TRUE_; }
HLE(k_VirtualProtect) { if (ARG(3)) M32(ARG(3)) = 4; return TRUE_; }
HLE(k_VirtualQuery) {
    u32 a = ARG(0) & ~0xfffu, p = ARG(1);
    memset(HP(p), 0, 28);
    M32(p) = a; M32(p + 4) = a; M32(p + 8) = 4; M32(p + 12) = 0x1000; M32(p + 16) = 0x1000; M32(p + 20) = 4; M32(p + 24) = 0x20000;
    return 28;
}
HLE(k_CreateFileMappingA) {
    if (ARG(0) != INVALID) return 0;                    // file-backed mappings unused
    u32 mem = gpages(ARG(4) ? ARG(4) : 0x10000);
    return handle_new(H_OTHER, (void *)(uintptr_t)mem);
}
HLE(k_OpenFileMappingA) { set_last_error(2); return 0; }
HLE(k_MapViewOfFile) { HObj *o = handle_get(ARG(0)); return o ? (u32)(uintptr_t)o->obj + ARG(3) : 0; }
HLE(k_UnmapViewOfFile) { return TRUE_; }

// ---- text / locale ------------------------------------------------------------------------------------------
HLE(k_MultiByteToWideChar) {
    u32 cp = ARG(0), src = ARG(2), dst = ARG(4), dstn = ARG(5);
    int n = (s32)ARG(3);
    int withnul = n < 0;
    if (n < 0) n = (int)strlen(GS(src)) + 1;
    int cnt;
    if (cp == 65001) {           // UTF-8
        u16 tmp[4096]; int o = 0; const u8 *s = (u8 *)HP(src);
        for (int i = 0; i < n && o < 4096;) {
            u32 ch = s[i];
            if (ch < 0x80) i++;
            else if ((ch >> 5) == 6 && i + 1 < n) { ch = ((ch & 31) << 6) | (s[i + 1] & 63); i += 2; }
            else if ((ch >> 4) == 14 && i + 2 < n) { ch = ((ch & 15) << 12) | ((s[i + 1] & 63) << 6) | (s[i + 2] & 63); i += 3; }
            else { ch = '?'; i++; }
            tmp[o++] = (u16)ch;
        }
        cnt = o;
        if (dstn) memcpy(HP(dst), tmp, 2 * (u32)(cnt < (int)dstn ? cnt : (int)dstn));
    } else {
        cnt = gbk_to_utf16((u8 *)HP(src), n, dstn ? (u16 *)HP(dst) : 0, (int)dstn);
    }
    (void)withnul;
    if (dstn && cnt > (int)dstn) { set_last_error(122); return 0; }
    return (u32)cnt;
}
HLE(k_WideCharToMultiByte) {
    u32 cp = ARG(0), src = ARG(2), dst = ARG(4), dstn = ARG(5);
    int n = (s32)ARG(3);
    if (n < 0) { n = 0; while (GW(src)[n]) n++; n++; }
    int cnt;
    if (cp == 65001) {
        u8 tmp[8192]; int o = 0; const u16 *s = GW(src);
        for (int i = 0; i < n && o < 8188; i++) {
            u32 ch = s[i];
            if (ch < 0x80) tmp[o++] = (u8)ch;
            else if (ch < 0x800) { tmp[o++] = (u8)(0xc0 | (ch >> 6)); tmp[o++] = (u8)(0x80 | (ch & 63)); }
            else { tmp[o++] = (u8)(0xe0 | (ch >> 12)); tmp[o++] = (u8)(0x80 | ((ch >> 6) & 63)); tmp[o++] = (u8)(0x80 | (ch & 63)); }
        }
        cnt = o;
        if (dstn) memcpy(HP(dst), tmp, (u32)(cnt < (int)dstn ? cnt : (int)dstn));
    } else {
        cnt = utf16_to_gbk(GW(src), n, dstn ? (u8 *)HP(dst) : 0, (int)dstn);
    }
    if (ARG(7)) M32(ARG(7)) = 0;
    if (dstn && cnt > (int)dstn) { set_last_error(122); return 0; }
    return (u32)cnt;
}
HLE(k_GetACP) { return 936; }
HLE(k_GetCPInfo) {
    u32 p = ARG(1);
    memset(HP(p), 0, 20);
    M32(p) = 2; M8(p + 4) = '?'; M8(p + 6) = 0x81; M8(p + 7) = 0xfe;
    return TRUE_;
}
static u32 ctype1(u32 ch) {
    u32 f = 0;
    if (ch >= 'A' && ch <= 'Z') f |= 0x1 | 0x100;
    if (ch >= 'a' && ch <= 'z') f |= 0x2 | 0x100;
    if (ch >= '0' && ch <= '9') f |= 0x4;
    if (ch == ' ' || (ch >= 9 && ch <= 13)) f |= 0x8;
    if (ch == ' ' || ch == '\t') f |= 0x40;
    if (ch < 32 || ch == 127) f |= 0x20;
    if (ch > 32 && ch < 127 && !(f & 0x107)) f |= 0x10;
    if ((ch >= '0' && ch <= '9') || ((ch | 32) >= 'a' && (ch | 32) <= 'f')) f |= 0x80;
    if (ch >= 0x80 && ch != 0xffff) f |= 0x100;
    return f;
}
HLE(k_GetStringTypeA) {
    int n = (s32)ARG(3); if (n < 0) n = (int)strlen(GS(ARG(2))) + 1;
    for (int i = 0; i < n; i++) M16(ARG(4) + 2 * i) = (u16)ctype1(M8(ARG(2) + i));
    return TRUE_;
}
HLE(k_GetStringTypeW) {
    int n = (s32)ARG(2); if (n < 0) { n = 0; while (GW(ARG(1))[n]) n++; n++; }
    for (int i = 0; i < n; i++) M16(ARG(3) + 2 * i) = (u16)ctype1(M16(ARG(1) + 2 * i));
    return TRUE_;
}
HLE(k_LCMapStringA) {
    u32 fl = ARG(1), src = ARG(2), dst = ARG(4), dstn = ARG(5);
    int n = (s32)ARG(3); if (n < 0) n = (int)strlen(GS(src)) + 1;
    if (!dstn) return (u32)n;
    for (int i = 0; i < n && i < (int)dstn; i++) {
        u8 ch = M8(src + i);
        if ((fl & 0x100) && ch >= 'A' && ch <= 'Z') ch += 32;
        if ((fl & 0x200) && ch >= 'a' && ch <= 'z') ch -= 32;
        M8(dst + i) = ch;
    }
    return (u32)n;
}
HLE(k_LCMapStringW) {
    u32 fl = ARG(1), src = ARG(2), dst = ARG(4), dstn = ARG(5);
    int n = (s32)ARG(3); if (n < 0) { n = 0; while (GW(src)[n]) n++; n++; }
    if (!dstn) return (u32)n;
    for (int i = 0; i < n && i < (int)dstn; i++) {
        u16 ch = M16(src + 2 * i);
        if ((fl & 0x100) && ch >= 'A' && ch <= 'Z') ch += 32;
        if ((fl & 0x200) && ch >= 'a' && ch <= 'z') ch -= 32;
        M16(dst + 2 * i) = ch;
    }
    return (u32)n;
}
HLE(k_GetLocaleInfoA) {
    u32 type = ARG(1) & 0xffff;
    const char *v = type == 0x1004 ? "936" : type == 0xb ? "936" : type == 0x59 ? "zh" : type == 0x5a ? "CN" : "0";
    return (u32)put_str(ARG(2), ARG(3), v) + 1;
}
HLE(k_lstrcmpiA) { return (u32)strcasecmp(GS(ARG(0)), GS(ARG(1))); }
HLE(k_lstrlenA) { return ARG(0) ? (u32)strlen(GS(ARG(0))) : 0; }
HLE(k_lstrcpyA) { strcpy(GS(ARG(0)), GS(ARG(1))); return ARG(0); }

#define K(n, f, a) DEF("kernel32", n, f, a)
static const HleDef defs[] = {
    K("CreateFileA", k_CreateFileA, 7), K("CreateFileW", k_CreateFileW, 7), K("ReadFile", k_ReadFile, 5), K("WriteFile", k_WriteFile, 5),
    K("SetFilePointer", k_SetFilePointer, 4), K("GetFileSize", k_GetFileSize, 2), K("GetFileType", k_GetFileType, 1),
    K("FlushFileBuffers", k_FlushFileBuffers, 1), K("CloseHandle", k_CloseHandle, 1), K("DeleteFileA", k_DeleteFileA, 1),
    K("CopyFileA", k_CopyFileA, 3), K("MoveFileA", k_MoveFileA, 2), K("CreateDirectoryA", k_CreateDirectoryA, 2),
    K("RemoveDirectoryA", k_RemoveDirectoryA, 1), K("GetFileAttributesA", k_GetFileAttributesA, 1),
    K("SetFileAttributesA", k_SetFileAttributesA, 2), K("GetFullPathNameA", k_GetFullPathNameA, 4), K("GetTempPathA", k_GetTempPathA, 2),
    K("GetCurrentDirectoryA", k_GetCurrentDirectoryA, 2), K("SetCurrentDirectoryA", k_SetCurrentDirectoryA, 1),
    K("GetDiskFreeSpaceA", k_GetDiskFreeSpaceA, 5), K("GetDriveTypeA", k_GetDriveTypeA, 1), K("GetLogicalDrives", k_GetLogicalDrives, 0),
    K("OpenFile", k_OpenFile, 3), K("_lclose", k__lclose, 1), K("FindFirstFileA", k_FindFirstFileA, 2), K("FindNextFileA", k_FindNextFileA, 2),
    K("FindClose", k_FindClose, 1), K("GetPrivateProfileStringA", k_GetPrivateProfileStringA, 6),
    K("GetPrivateProfileIntA", k_GetPrivateProfileIntA, 4), K("WritePrivateProfileStringA", k_WritePrivateProfileStringA, 4),
    K("GetCommandLineA", k_GetCommandLineA, 0), K("GetStartupInfoA", k_GetStartupInfoA, 1), K("GetModuleHandleA", k_GetModuleHandleA, 1),
    K("GetModuleFileNameA", k_GetModuleFileNameA, 3), K("GetProcAddress", k_GetProcAddress, 2), K("LoadLibraryA", k_LoadLibraryA, 1),
    K("FreeLibrary", k_FreeLibrary, 1), K("DisableThreadLibraryCalls", k_DisableThreadLibraryCalls, 1),
    K("GetCurrentProcess", k_GetCurrentProcess, 0), K("GetCurrentProcessId", k_GetCurrentProcessId, 0),
    K("GetCurrentThreadId", k_GetCurrentThreadId, 0), K("GetCurrentThread", k_GetCurrentThread, 0), K("ExitProcess", k_ExitProcess, 1),
    K("TerminateProcess", k_TerminateProcess, 2), K("CreateProcessA", k_CreateProcessA, 10), K("WinExec", k_WinExec, 2),
    K("GetLastError", k_GetLastError, 0), K("SetLastError", k_SetLastError, 1), K("SetErrorMode", k_SetErrorMode, 1),
    K("FormatMessageA", k_FormatMessageA, 7), K("OutputDebugStringA", k_OutputDebugStringA, 1), K("OutputDebugStringW", k_OutputDebugStringW, 1),
    K("RaiseException", k_RaiseException, 4), K("RtlUnwind", k_RtlUnwind, 4), K("SetUnhandledExceptionFilter", k_SetUnhandledExceptionFilter, 1),
    K("UnhandledExceptionFilter", k_UnhandledExceptionFilter, 1), K("Beep", k_Beep, 2), K("GetEnvironmentStrings", k_GetEnvironmentStrings, 0),
    K("GetEnvironmentStringsW", k_GetEnvironmentStrings, 0), K("FreeEnvironmentStringsA", k_FreeEnvironmentStrings, 1),
    K("FreeEnvironmentStringsW", k_FreeEnvironmentStrings, 1), K("GetStdHandle", k_GetStdHandle, 1), K("SetStdHandle", k_SetStdHandle, 2),
    K("SetHandleCount", k_SetHandleCount, 1), K("IsBadReadPtr", k_IsBadPtr, 2), K("IsBadWritePtr", k_IsBadPtr, 2), K("IsBadCodePtr", k_IsBadPtr, 1),
    K("IsProcessorFeaturePresent", k_IsProcessorFeaturePresent, 1), K("GetTickCount", k_GetTickCount, 0),
    K("QueryPerformanceCounter", k_QueryPerformanceCounter, 1), K("QueryPerformanceFrequency", k_QueryPerformanceFrequency, 1),
    K("GetLocalTime", k_GetLocalTime, 1), K("GetSystemTime", k_GetSystemTime, 1), K("GetSystemTimeAsFileTime", k_GetSystemTimeAsFileTime, 1),
    K("Sleep", k_Sleep, 1), K("GetVersionExA", k_GetVersionExA, 1), K("GetSystemInfo", k_GetSystemInfo, 1),
    K("GetSystemDirectoryA", k_GetSystemDirectoryA, 2), K("InitializeCriticalSection", k_InitializeCriticalSection, 1),
    K("DeleteCriticalSection", k_DeleteCriticalSection, 1), K("EnterCriticalSection", k_EnterCriticalSection, 1),
    K("LeaveCriticalSection", k_LeaveCriticalSection, 1), K("InterlockedIncrement", k_InterlockedIncrement, 1),
    K("InterlockedDecrement", k_InterlockedDecrement, 1), K("InterlockedExchange", k_InterlockedExchange, 2),
    K("InterlockedCompareExchange", k_InterlockedCompareExchange, 3), K("CreateEventA", k_CreateEventA, 4), K("SetEvent", k_SetEvent, 1),
    K("ResetEvent", k_ResetEvent, 1), K("CreateSemaphoreA", k_CreateSemaphoreA, 4), K("ReleaseSemaphore", k_ReleaseSemaphore, 3),
    K("WaitForSingleObject", k_WaitForSingleObject, 2), K("WaitForMultipleObjects", k_WaitForMultipleObjects, 4),
    K("SetThreadPriority", k_SetThreadPriority, 2), K("GetOverlappedResult", k_GetOverlappedResult, 4), K("ResumeThread", k_ResumeThread, 1),
    K("GetExitCodeThread", k_GetExitCodeThread, 2), K("CreateThread", k_CreateThread, 6), K("TlsAlloc", k_TlsAlloc, 0), K("TlsFree", k_TlsFree, 1),
    K("TlsGetValue", k_TlsGetValue, 1), K("TlsSetValue", k_TlsSetValue, 2), K("HeapCreate", k_HeapCreate, 3), K("HeapDestroy", k_HeapDestroy, 1),
    K("HeapAlloc", k_HeapAlloc, 3), K("HeapFree", k_HeapFree, 3), K("HeapReAlloc", k_HeapReAlloc, 4), K("HeapSize", k_HeapSize, 3),
    K("GetProcessHeap", k_GetProcessHeap, 0), K("GlobalAlloc", k_GlobalAlloc, 2), K("GlobalFree", k_GlobalFree, 1), K("GlobalLock", k_GlobalLock, 1),
    K("GlobalUnlock", k_GlobalUnlock, 1), K("GlobalHandle", k_GlobalHandle, 1), K("LocalFree", k_LocalFree, 1), K("VirtualAlloc", k_VirtualAlloc, 4),
    K("VirtualFree", k_VirtualFree, 3), K("VirtualProtect", k_VirtualProtect, 4), K("VirtualQuery", k_VirtualQuery, 3),
    K("CreateFileMappingA", k_CreateFileMappingA, 6), K("OpenFileMappingA", k_OpenFileMappingA, 3), K("MapViewOfFile", k_MapViewOfFile, 5),
    K("UnmapViewOfFile", k_UnmapViewOfFile, 1), K("MultiByteToWideChar", k_MultiByteToWideChar, 6),
    K("WideCharToMultiByte", k_WideCharToMultiByte, 8), K("GetACP", k_GetACP, 0), K("GetOEMCP", k_GetACP, 0), K("GetCPInfo", k_GetCPInfo, 2),
    K("GetStringTypeA", k_GetStringTypeA, 5), K("GetStringTypeW", k_GetStringTypeW, 4), K("LCMapStringA", k_LCMapStringA, 6),
    K("LCMapStringW", k_LCMapStringW, 6), K("GetLocaleInfoA", k_GetLocaleInfoA, 4), K("lstrcmpiA", k_lstrcmpiA, 2), K("lstrlenA", k_lstrlenA, 1),
    K("lstrcpyA", k_lstrcpyA, 2), K("GetEnvironmentVariableA", k_GetEnvironmentVariableA, 3),
    K("SetEnvironmentVariableA", k_SetEnvironmentVariableA, 2),
    K("InitializeCriticalSectionAndSpinCount", k_InitializeCriticalSectionAndSpinCount, 2),
    K("TryEnterCriticalSection", k_TryEnterCriticalSection, 1), K("GetVersion", k_GetVersion, 0), K("IsDebuggerPresent", k_IsDebuggerPresent, 0),
    K("GetUserDefaultLCID", k_GetLCID, 0), K("GetSystemDefaultLCID", k_GetLCID, 0), K("GetThreadLocale", k_GetLCID, 0),
    K("GetSystemDefaultLangID", k_GetLCID, 0), K("GetUserDefaultLangID", k_GetLCID, 0), K("EncodePointer", k_PassPointer, 1),
    K("DecodePointer", k_PassPointer, 1), K("FlsAlloc", k_FlsAlloc, 1), K("FlsGetValue", k_FlsGetValue, 1), K("FlsSetValue", k_FlsSetValue, 2),
    K("FlsFree", k_TlsFree, 1), K("GetStartupInfoW", k_GetStartupInfoA, 1), K("GetCommandLineW", k_GetCommandLineW, 0),
    K("GetModuleFileNameW", k_GetModuleFileNameW, 3), K("IsValidCodePage", k_IsValidCodePage, 1), K("HeapSetInformation", k_IsValidCodePage, 4), K("GetTimeZoneInformation", k_GetTimeZoneInformation, 1), K("GetModuleHandleW", k_GetModuleHandleW, 1),
};
void hle_kernel32_init(void) { hle_add(defs, (int)(sizeof defs / sizeof defs[0])); }
