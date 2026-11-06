// MSVCR71 replacement (+ the 6 MSVCP71 std::string members KartRes.dll uses).
#include "rt.h"
#include <ctype.h>
#include <dirent.h>
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

int guest_vsscanf(const char *src, const char *fmt, u32 argp);
void path_cache_forget(const char *hostpath);
const char *cwd_get(void);
int cwd_set(const char *winpath);
#ifdef _WIN32
#define mkdir(p, m) mkdir(p)
#endif

static u32 gret_ptr(const void *hostp) { return hostp ? GA(hostp) : 0; }
static void ret64(CPU *c, u64 v) { c->edx = (u32)(v >> 32); }

// ---- memory ------------------------------------------------------------------------------
HLE(c_malloc) { return galloc(ARG(0)); }
HLE(c_free) { gfree(ARG(0)); return 0; }
HLE(c_calloc) { return gcalloc(ARG(0) * ARG(1)); }
HLE(c_realloc) { return grealloc(ARG(0), ARG(1)); }
HLE(c_memcpy) { memcpy(HP(ARG(0)), HP(ARG(1)), ARG(2)); return ARG(0); }
HLE(c_memmove) { memmove(HP(ARG(0)), HP(ARG(1)), ARG(2)); return ARG(0); }
HLE(c_memset) { memset(HP(ARG(0)), (int)ARG(1), ARG(2)); return ARG(0); }
HLE(c_memchr) { return gret_ptr(memchr(HP(ARG(0)), (int)(ARG(1) & 0xff), ARG(2))); }

// ---- strings ------------------------------------------------------------------------------
HLE(c_strlen) { return (u32)strlen(GS(ARG(0))); }
HLE(c_strcpy) { strcpy(GS(ARG(0)), GS(ARG(1))); return ARG(0); }
HLE(c_strncpy) { strncpy(GS(ARG(0)), GS(ARG(1)), ARG(2)); return ARG(0); }
HLE(c_strcat) { strcat(GS(ARG(0)), GS(ARG(1))); return ARG(0); }
HLE(c_strncat) { strncat(GS(ARG(0)), GS(ARG(1)), ARG(2)); return ARG(0); }
HLE(c_strcmp) { return (u32)strcmp(GS(ARG(0)), GS(ARG(1))); }
HLE(c_strncmp) { return (u32)strncmp(GS(ARG(0)), GS(ARG(1)), ARG(2)); }
HLE(c_stricmp) { return (u32)strcasecmp(GS(ARG(0)), GS(ARG(1))); }
HLE(c_strnicmp) { return (u32)strncasecmp(GS(ARG(0)), GS(ARG(1)), ARG(2)); }
HLE(c_strchr) { return gret_ptr(strchr(GS(ARG(0)), (int)(ARG(1) & 0xff))); }
HLE(c_strrchr) { return gret_ptr(strrchr(GS(ARG(0)), (int)(ARG(1) & 0xff))); }
HLE(c_strstr) { return gret_ptr(strstr(GS(ARG(0)), GS(ARG(1)))); }
HLE(c_strcspn) { return (u32)strcspn(GS(ARG(0)), GS(ARG(1))); }
HLE(c_strdup) { return ARG(0) ? gstrdup(GS(ARG(0))) : 0; }
HLE(c_strlwr) { for (char *p = GS(ARG(0)); *p; p++) if (*p >= 'A' && *p <= 'Z') *p += 32; return ARG(0); }
HLE(c_strtok) {
    GThread *t = cur_thread();
    u32 s = ARG(0) ? ARG(0) : t->strtok_p;
    if (!s) return 0;
    const char *delim = GS(ARG(1));
    while (M8(s) && strchr(delim, M8(s))) s++;
    if (!M8(s)) { t->strtok_p = 0; return 0; }
    u32 e = s;
    while (M8(e) && !strchr(delim, M8(e))) e++;
    if (M8(e)) { M8(e) = 0; t->strtok_p = e + 1; } else t->strtok_p = 0;
    return s;
}
HLE(c_strtol) { char *e; long v = strtol(GS(ARG(0)), &e, (int)ARG(2)); if (ARG(1)) M32(ARG(1)) = GA(e); return (u32)(s32)v; }
HLE(c_strtoul) { char *e; unsigned long v = strtoul(GS(ARG(0)), &e, (int)ARG(2)); if (ARG(1)) M32(ARG(1)) = GA(e); return (u32)v; }
HLE(c_strtoi64) { char *e; long long v = strtoll(GS(ARG(0)), &e, (int)ARG(2)); if (ARG(1)) M32(ARG(1)) = GA(e); ret64(c, (u64)v); return (u32)v; }
HLE(c_strtoui64) { char *e; unsigned long long v = strtoull(GS(ARG(0)), &e, (int)ARG(2)); if (ARG(1)) M32(ARG(1)) = GA(e); ret64(c, v); return (u32)v; }
HLE(c_atoi) { return (u32)atoi(GS(ARG(0))); }
HLE(c_atof) { FPUSH(atof(GS(ARG(0)))); return 0; }
HLE(c_strtod) { char *e; double v = strtod(GS(ARG(0)), &e); if (ARG(1)) M32(ARG(1)) = GA(e); FPUSH(v); return 0; }
static void itoa_any(u64 v, int neg, u32 buf, int radix) {
    char tmp[80]; int n = 0;
    if (radix < 2 || radix > 36) radix = 10;
    do { int d = (int)(v % (u64)radix); tmp[n++] = (char)(d < 10 ? '0' + d : 'a' + d - 10); v /= (u64)radix; } while (v);
    char *o = GS(buf);
    if (neg) *o++ = '-';
    while (n) *o++ = tmp[--n];
    *o = 0;
}
HLE(c_itoa) { s32 v = (s32)ARG(0); int r = (int)ARG(2); itoa_any(r == 10 && v < 0 ? (u64)(-(s64)v) : (u64)(u32)v, r == 10 && v < 0, ARG(1), r); return ARG(1); }
HLE(c_i64toa) { s64 v = (s64)(((u64)ARG(1) << 32) | ARG(0)); int r = (int)ARG(3); itoa_any(r == 10 && v < 0 ? (u64)-v : (u64)v, r == 10 && v < 0, ARG(2), r); return ARG(2); }
HLE(c_wcslen) { u32 n = 0; while (GW(ARG(0))[n]) n++; return n; }
HLE(c_wcschr) { for (u32 p = ARG(0);; p += 2) { if (M16(p) == (u16)ARG(1)) return p; if (!M16(p)) return 0; } }
HLE(c_wcsncpy) {
    u32 d = ARG(0), s = ARG(1), n = ARG(2), i = 0;
    for (; i < n && M16(s + 2 * i); i++) M16(d + 2 * i) = M16(s + 2 * i);
    for (; i < n; i++) M16(d + 2 * i) = 0;
    return d;
}
HLE(c_mbslen) {
    u32 n = 0;
    for (const u8 *p = (u8 *)HP(ARG(0)); *p; p++, n++) if (*p >= 0x81 && *p <= 0xfe && p[1]) p++;
    return n;
}
HLE(c_ismbblead) { u32 ch = ARG(0) & 0xff; return ch >= 0x81 && ch <= 0xfe; }

// ctype: MSVC table layout (_pctype points at entry for EOF + 1)
static u32 g_ctype;
static u32 ctype_table(void) {
    if (g_ctype) return g_ctype;
    u32 t = gstatic(2 * 258);
    for (int ch = 0; ch < 256; ch++) {
        u16 f = 0;
        if (ch < 128) {
            if (isupper(ch)) f |= 0x1 | 0x100;
            if (islower(ch)) f |= 0x2 | 0x100;
            if (isdigit(ch)) f |= 0x4;
            if (isspace(ch)) f |= 0x8;
            if (ispunct(ch)) f |= 0x10;
            if (iscntrl(ch)) f |= 0x20;
            if (ch == ' ') f |= 0x40;
            if (isxdigit(ch)) f |= 0x80;
        }
        M16(t + 2 + 2 * ch) = f;
    }
    return g_ctype = t;
}
static u16 cty(u32 ch) { ctype_table(); return (ch + 1) <= 256 ? M16(g_ctype + 2 * (ch + 1)) : 0; }
HLE(c_pctype_func) { return ctype_table() + 2; }
HLE(c_isalpha) { return cty(ARG(0)) & 0x103; }
HLE(c_isalnum) { return cty(ARG(0)) & 0x107; }
HLE(c_isdigit) { return cty(ARG(0)) & 0x4; }
HLE(c_isspace) { return cty(ARG(0)) & 0x8; }
HLE(c_isupper) { return cty(ARG(0)) & 0x1; }
HLE(c_islower) { return cty(ARG(0)) & 0x2; }
HLE(c_isxdigit) { return cty(ARG(0)) & 0x80; }
HLE(c_tolower) { u32 ch = ARG(0); return ch >= 'A' && ch <= 'Z' ? ch + 32 : ch; }
HLE(c_toupper) { u32 ch = ARG(0); return ch >= 'a' && ch <= 'z' ? ch - 32 : ch; }

// ---- formatted output / input ---------------------------------------------------------------
HLE(c_sprintf) { return (u32)guest_vsnprintf(GS(ARG(0)), 0x7fffffff, GS(ARG(1)), c->esp + 12, 0); }
HLE(c_vsprintf) { return (u32)guest_vsnprintf(GS(ARG(0)), 0x7fffffff, GS(ARG(1)), ARG(2), 0); }
HLE(c_snprintf) {
    int n = guest_vsnprintf(GS(ARG(0)), (int)ARG(1), GS(ARG(2)), c->esp + 16, 0);
    return (u32)(n >= (int)ARG(1) ? -1 : n);       // MSVC: -1 when truncated, no NUL then (we NUL anyway)
}
HLE(c_vsnprintf) { int n = guest_vsnprintf(GS(ARG(0)), (int)ARG(1), GS(ARG(2)), ARG(3), 0); return (u32)(n >= (int)ARG(1) ? -1 : n); }
HLE(c_snwprintf) { int n = guest_vsnprintf((char *)HP(ARG(0)), (int)ARG(1), (char *)HP(ARG(2)), c->esp + 16, 1); return (u32)(n >= (int)ARG(1) ? -1 : n); }
HLE(c_printf) { char b[2048]; int n = guest_vsnprintf(b, sizeof b, GS(ARG(0)), c->esp + 8, 0); rt_log("[game] %s", b); return (u32)n; }
HLE(c_sscanf) { return (u32)guest_vsscanf(GS(ARG(0)), GS(ARG(1)), c->esp + 12); }

// ---- FILE streams: guest FILE structs (32 bytes) mapped to host FILE* -------------------------------
#define NFILES 512
static FILE *g_files[NFILES];
static u32 g_iob;
static u32 iob(void) {
    if (!g_iob) { g_iob = gstatic(32 * NFILES); for (int i = 0; i < NFILES; i++) M32(g_iob + 32 * i + 16) = (u32)i; }
    return g_iob;
}
static FILE *hf(u32 gf) {
    u32 i = (gf - iob()) / 32;
    if (gf < iob() || i >= NFILES) return 0;
    if (i == 1 || i == 2) return stderr;
    return g_files[i];
}
HLE(c_iob_func) { return iob(); }
// memory backing text-mode streams on Android (freed when the game closes the stream)
static struct { FILE *f; char *buf; } g_textbufs[64];
static void text_buf_keep(FILE *f, char *buf) {
    if (!buf) return;
    for (int i = 0; i < 64; i++) if (!g_textbufs[i].f) { g_textbufs[i].f = f; g_textbufs[i].buf = buf; return; }
}
static void text_buf_release(FILE *f) {
    for (int i = 0; i < 64; i++) if (g_textbufs[i].f == f) { free(g_textbufs[i].buf); g_textbufs[i].f = 0; g_textbufs[i].buf = 0; }
}
HLE(c_fopen_impl);
HLE(c_fopen) { u64 t0 = us_now(); u32 r = c_fopen_impl(c); perf_file(GS(ARG(0)), us_now() - t0); return r; }
HLE(c_fopen_impl) {
    char hp[1024];
    host_path(GS(ARG(0)), hp, sizeof hp);
    char mode[16]; snprintf(mode, sizeof mode, "%s", GS(ARG(1)));
    int text = !strchr(mode, 'b');                      // MSVC default (_fmode) is text mode
    if (!strchr(mode, 'b') && !strchr(mode, 't')) strncat(mode, "b", sizeof mode - strlen(mode) - 1);
    for (char *p = mode; *p; p++) if (*p == 't') *p = 'b';
    FILE *f = fopen(hp, mode);
    if (f && text && mode[0] == 'r' && !strchr(mode, '+')) {
        // Windows text-mode read: "\r\n" -> "\n" and Ctrl-Z ends the file (the game's ifstream parsers expect it).
        // shortcut: text-mode writes stay binary (LF only); fine while the game only reads its own text files back.
        // shortcut: files with a NUL byte stay raw. The game opens binary models with "r" and checks their size
        // with fseek/ftell, which MSVC answers in raw bytes (start-up "client does not match" = 11010/11020.dff).
        // Upgrade: per-FILE text flag translating in the read calls, so ftell stays raw for text files too.
        fseek(f, 0, SEEK_END);
        long n = ftell(f);
        fseek(f, 0, SEEK_SET);
        char *buf = n > 0 ? malloc((size_t)n) : 0;
        long o = 0;
        if (buf) {
            int ch, prev = -1;
            while ((ch = fgetc(f)) != EOF) {
                if (ch == 0) { free(buf); buf = 0; rewind(f); break; }     // binary: keep the raw file
                if (ch == 0x1a) break;
                if (prev == '\r' && ch != '\n') buf[o++] = '\r';
                if (ch != '\r') buf[o++] = (char)ch;
                prev = ch;
            }
            if (buf && prev == '\r') buf[o++] = '\r';
        }
        FILE *t = 0;
#if defined(__ANDROID__) || defined(__APPLE__)
        if (buf && o > 0) t = fmemopen(buf, (size_t)o, "rb");      // app processes cannot use tmpfile() there
#else
        if (buf && (t = tmpfile())) { fwrite(buf, 1, (size_t)o, t); rewind(t); free(buf); buf = 0; }
#endif
        if (t) { fclose(f); f = t; text_buf_keep(f, buf); }
        else free(buf);
    }
    if (!f) { static int nfail; if (nfail++ < 40) rt_log("fopen failed: %s (%s) -> %s\n", GS(ARG(0)), mode, hp); return 0; }
    if (strchr(mode, 'w') || strchr(mode, 'a')) path_cache_forget(hp);
    if (getenv("CK_FILELOG")) rt_log("fopen %s %s\n", GS(ARG(0)), mode);
    iob();
    for (int i = 3; i < NFILES; i++) if (!g_files[i]) { g_files[i] = f; return g_iob + 32 * i; }
    fclose(f);
    return 0;
}
HLE(c_fclose) { FILE *f = hf(ARG(0)); u32 i = (ARG(0) - iob()) / 32; if (!f || i < 3) return (u32)-1; fclose(f); text_buf_release(f); g_files[i] = 0; return 0; }
HLE(c_fread) { FILE *f = hf(ARG(3)); return f ? (u32)fread(HP(ARG(0)), ARG(1), ARG(2), f) : 0; }
HLE(c_fwrite) { FILE *f = hf(ARG(3)); return f ? (u32)fwrite(HP(ARG(0)), ARG(1), ARG(2), f) : 0; }
HLE(c_fseek) { FILE *f = hf(ARG(0)); return f ? (u32)fseek(f, (s32)ARG(1), (int)ARG(2)) : (u32)-1; }
HLE(c_ftell) { FILE *f = hf(ARG(0)); return f ? (u32)ftell(f) : (u32)-1; }
HLE(c_fflush) { FILE *f = ARG(0) ? hf(ARG(0)) : 0; if (f) fflush(f); return 0; }
HLE(c_fgetc) { FILE *f = hf(ARG(0)); return f ? (u32)fgetc(f) : (u32)-1; }
HLE(c_fputc) { FILE *f = hf(ARG(1)); return f ? (u32)fputc((int)ARG(0), f) : (u32)-1; }
HLE(c_ungetc) { FILE *f = hf(ARG(1)); return f ? (u32)ungetc((int)ARG(0), f) : (u32)-1; }
HLE(c_fputs) { FILE *f = hf(ARG(1)); return f ? (u32)fputs(GS(ARG(0)), f) : (u32)-1; }
HLE(c_fprintf) {
    char b[4096];
    int n = guest_vsnprintf(b, sizeof b, GS(ARG(1)), c->esp + 12, 0);
    FILE *f = hf(ARG(0));
    if (f) fwrite(b, 1, (size_t)(n < 4096 ? n : 4095), f);
    return (u32)n;
}
HLE(c_fgetpos) { FILE *f = hf(ARG(0)); long p = f ? ftell(f) : -1; M32(ARG(1)) = (u32)p; M32(ARG(1) + 4) = 0; return p < 0; }
HLE(c_fsetpos) { FILE *f = hf(ARG(0)); return f ? (u32)fseek(f, (long)M32(ARG(1)), SEEK_SET) : (u32)-1; }
HLE(c_setvbuf) { return 0; }
HLE(c_remove) { char hp[1024]; host_path(GS(ARG(0)), hp, sizeof hp); int r = unlink(hp); path_cache_forget(hp); return (u32)r; }

// _findfirst/_findnext (_finddata_t: attrib, 3 x time_t, size, name[260])
typedef struct { char dir[1024], pat[260]; DIR *d; } FF;
static int ff_wild(const char *p, const char *s) {
    for (; *p; p++, s++) {
        if (*p == '*') { while (p[1] == '*') p++; if (!p[1]) return 1; for (; *s; s++) if (ff_wild(p + 1, s)) return 1; return ff_wild(p + 1, s); }
        if (!*s) return !strcmp(p, ".*");
        char a = (char)tolower((u8)*p), b = (char)tolower((u8)*s);
        if (a != '?' && a != b) return 0;
    }
    return !*s;
}
static int ff_next(FF *f, u32 out) {
    struct dirent *e;
    while (f->d && (e = readdir(f->d))) {
        if (strcmp(f->pat, "*.*") && !ff_wild(f->pat, e->d_name)) continue;
        char full[1400];
        snprintf(full, sizeof full, "%s/%s", f->dir, e->d_name);
        struct stat st;
        if (stat(full, &st)) continue;
        M32(out) = S_ISDIR(st.st_mode) ? 0x10 : 0x20;
        M32(out + 4) = M32(out + 8) = M32(out + 12) = (u32)st.st_mtime;
        M32(out + 16) = (u32)st.st_size;
        snprintf(GS(out + 20), 260, "%s", e->d_name);
        return 1;
    }
    return 0;
}
HLE(c_findfirst) {
    char hp[1024];
    host_path(GS(ARG(0)), hp, sizeof hp);
    char *sl = strrchr(hp, '/');
    if (!sl) return (u32)-1;
    FF *f = calloc(1, sizeof *f);
    *sl = 0;
    snprintf(f->dir, sizeof f->dir, "%s", hp);
    snprintf(f->pat, sizeof f->pat, "%s", sl + 1);
    f->d = opendir(f->dir);
    if (!f->d || !ff_next(f, ARG(1))) { if (f->d) closedir(f->d); free(f); return (u32)-1; }
    return handle_new(H_FIND, f);
}
HLE(c_findnext) { HObj *o = handle_get(ARG(0)); return o && o->type == H_FIND && ff_next(o->obj, ARG(1)) ? 0 : (u32)-1; }
HLE(c_findclose) { HObj *o = handle_get(ARG(0)); if (o && o->type == H_FIND) { FF *f = o->obj; if (f->d) closedir(f->d); free(f); handle_free(ARG(0)); } return 0; }
HLE(c_chdir) { return cwd_set(GS(ARG(0))) ? 0 : (u32)-1; }
HLE(c_getcwd) {
    u32 buf = ARG(0), n = ARG(1);
    if (!buf) buf = galloc(n ? n : 260);
    snprintf(GS(buf), n ? n : 260, "%s", cwd_get());
    return buf;
}
HLE(c_mkdir) { char hp[1024]; host_path(GS(ARG(0)), hp, sizeof hp); int r = mkdir(hp, 0755); path_cache_forget(hp); return (u32)r; }

// ---- process / startup ------------------------------------------------------------------------
static u32 v_acmdln, v_adjust_fdiv, v_commode, v_fmode, v_lcactive;
HLE(d_acmdln) { if (!v_acmdln) { v_acmdln = gstatic(4); M32(v_acmdln) = gstrdup(g_cmdline); } return v_acmdln; }
HLE(d_adjust_fdiv) { if (!v_adjust_fdiv) v_adjust_fdiv = gstatic(4); return v_adjust_fdiv; }
HLE(c_p_commode) { if (!v_commode) v_commode = gstatic(4); return v_commode; }
HLE(c_p_fmode) { if (!v_fmode) v_fmode = gstatic(4); return v_fmode; }
HLE(c_nop) { return 0; }
HLE(c_getmainargs) {
    // split g_cmdline into argv (quotes respected)
    char tmp[1024];
    snprintf(tmp, sizeof tmp, "%s", g_cmdline);
    u32 argv = gstatic(4 * 64), argc = 0;
    for (char *p = tmp; *p && argc < 63;) {
        while (*p == ' ') p++;
        if (!*p) break;
        char *s = p;
        if (*p == '"') { s = ++p; while (*p && *p != '"') p++; }
        else while (*p && *p != ' ') p++;
        if (*p) *p++ = 0;
        M32(argv + 4 * argc++) = gstrdup(s);
    }
    M32(argv + 4 * argc) = 0;
    u32 envp = gstatic(8);
    M32(ARG(0)) = argc; M32(ARG(1)) = argv; M32(ARG(2)) = envp;
    return 0;
}
HLE(c_initterm) {
    for (u32 p = ARG(0); p < ARG(1); p += 4) if (M32(p)) guest_call(c, M32(p), 0);
    return 0;
}
HLE(c_onexit) { return ARG(0); }
HLE(c_dllonexit) { return ARG(0); }
HLE(c_exit) { rt_log("exit(%d)\n", (int)ARG(0)); _exit((int)ARG(0)); return 0; }
HLE(c_abort) { rt_fatal("game called abort() from %08x", M32(c->esp)); return 0; }
HLE(c_amsg_exit) { rt_fatal("C runtime error %u (_amsg_exit)", ARG(0)); return 0; }
HLE(c_purecall) { rt_fatal("pure virtual call from %08x", M32(c->esp)); return 0; }
HLE(c_terminate) { rt_fatal("std::terminate from %08x", M32(c->esp)); return 0; }
HLE(c_security) { rt_fatal("security check failure (buffer overrun) from %08x", M32(c->esp)); return 0; }
HLE(c_throw) { rt_throw(c, M32(c->esp)); return 0; }
HLE(c_handler) { rt_fatal("exception handler called (%08x) - structured exceptions are not supported", M32(c->esp)); return 0; }
HLE(c_errno) {
    GThread *t = cur_thread();
    if (!t->crt_block) t->crt_block = gstatic(64);
    return t->crt_block;
}
static pthread_mutex_t g_locks[64];
static pthread_once_t g_locks_once = PTHREAD_ONCE_INIT;
static void locks_init(void) {
    pthread_mutexattr_t a;
    pthread_mutexattr_init(&a);
    pthread_mutexattr_settype(&a, PTHREAD_MUTEX_RECURSIVE);
    for (int i = 0; i < 64; i++) pthread_mutex_init(&g_locks[i], &a);
}
HLE(c_lock) { pthread_once(&g_locks_once, locks_init); pthread_mutex_lock(&g_locks[ARG(0) & 63]); return 0; }
HLE(c_unlock) { pthread_once(&g_locks_once, locks_init); pthread_mutex_unlock(&g_locks[ARG(0) & 63]); return 0; }
HLE(c_lc_codepage) { return 936; }
HLE(c_lc_handle) { static u32 h; if (!h) h = gstatic(32); return h; }
HLE(c_unguarded_readlc) { if (!v_lcactive) v_lcactive = gstatic(4); return v_lcactive; }
HLE(c_crtLCMapStringA) {
    u32 fl = ARG(1), src = ARG(2), dst = ARG(4), dstn = ARG(5);
    int n = (s32)ARG(3);
    if (n < 0) n = (int)strlen(GS(src)) + 1;
    if (!dstn) return (u32)n;
    for (int i = 0; i < n && i < (int)dstn; i++) {
        u8 ch = M8(src + i);
        if ((fl & 0x100) && ch >= 'A' && ch <= 'Z') ch += 32;
        if ((fl & 0x200) && ch >= 'a' && ch <= 'z') ch -= 32;
        M8(dst + i) = ch;
    }
    return (u32)n;
}
HLE(c_setlocale) { static u32 s; if (!s) s = gstrdup("C"); return s; }
HLE(c_localeconv) {
    static u32 l;
    if (!l) { l = gstatic(64); M32(l) = gstrdup("."); M32(l + 4) = gstrdup(""); M32(l + 8) = gstrdup(""); for (int i = 12; i < 40; i += 4) M32(l + i) = gstrdup(""); }
    return l;
}
HLE(c_controlfp) {
    // MSVC control word <-> x87: precision _PC_24 0x20000 / _PC_53 0x10000 / _PC_64 0; rounding 0x300 field
    u32 nw = ARG(0), mask = ARG(1);
    u32 pc = (c->fcw >> 8) & 3, rc = (c->fcw >> 10) & 3;
    u32 cur = (pc == 0 ? 0x20000 : pc == 2 ? 0x10000 : 0) | (rc << 8) | 0x8001f;
    cur = (cur & ~mask) | (nw & mask);
    u32 npc = (cur & 0x30000) == 0x20000 ? 0 : (cur & 0x30000) == 0x10000 ? 2 : 3;
    c->fcw = (c->fcw & ~0xf00u) | (npc << 8) | (((cur >> 8) & 3) << 10);
    return cur;
}
HLE(c_finite) { double v; memcpy(&v, HP(c->esp + 4), 8); return isfinite(v) ? 1 : 0; }
HLE(c_floor) { double v; memcpy(&v, HP(c->esp + 4), 8); FPUSH(floor(v)); return 0; }
HLE(c_pow) { double a, b; memcpy(&a, HP(c->esp + 4), 8); memcpy(&b, HP(c->esp + 12), 8); FPUSH(pow(a, b)); return 0; }
HLE(c_ftol) { s64 v = rt_f2i(c, ST(0), 64, 1); FPOP(); c->edx = (u32)((u64)v >> 32); return (u32)v; }
HLE(c_CIpow) { double y = ST(0); FPOP(); ST(0) = pow(ST(0), y); return 0; }
HLE(c_CIfmod) { double y = ST(0); FPOP(); ST(0) = fmod(ST(0), y); return 0; }
HLE(c_CIacos) { ST(0) = acos(ST(0)); return 0; }
HLE(c_time) { u32 t = (u32)time(0); if (ARG(0)) M32(ARG(0)) = t; return t; }
HLE(c_localtime) {
    static u32 g;
    if (!g) g = gstatic(36);
    time_t t = (time_t)M32(ARG(0));
    struct tm tm;
    localtime_r(&t, &tm);
    s32 v[9] = {tm.tm_sec, tm.tm_min, tm.tm_hour, tm.tm_mday, tm.tm_mon, tm.tm_year, tm.tm_wday, tm.tm_yday, tm.tm_isdst};
    memcpy(HP(g), v, 36);
    return g;
}
HLE(c_srand) { cur_thread()->holdrand = ARG(0); return 0; }
HLE(c_rand) { GThread *t = cur_thread(); t->holdrand = t->holdrand * 214013u + 2531011u; return (t->holdrand >> 16) & 0x7fff; }
// qsort with the guest comparator (insertion sort for small runs, else quicksort; MSVC's is also unstable)
static CPU *qs_c; static u32 qs_cmp, qs_size, qs_tmp;
static int qcmp(u32 a, u32 b) { return (s32)guest_call(qs_c, qs_cmp, 2, a, b); }
static void qswap(u32 a, u32 b) { if (a == b) return; memcpy(HP(qs_tmp), HP(a), qs_size); memcpy(HP(a), HP(b), qs_size); memcpy(HP(b), HP(qs_tmp), qs_size); }
static void qs(u32 base, u32 n) {
    while (n > 8) {
        u32 mid = base + (n / 2) * qs_size, last = base + (n - 1) * qs_size;
        if (qcmp(mid, base) < 0) qswap(mid, base);
        if (qcmp(last, mid) < 0) { qswap(last, mid); if (qcmp(mid, base) < 0) qswap(mid, base); }
        qswap(mid, last - qs_size);
        u32 pivot = last - qs_size, i = base, j = pivot;
        for (;;) {
            do i += qs_size; while (qcmp(i, pivot) < 0);
            do j -= qs_size; while (j > base && qcmp(pivot, j) < 0);
            if (i >= j) break;
            qswap(i, j);
        }
        qswap(i, pivot);
        u32 left = (i - base) / qs_size, right = n - left - 1;
        if (left < right) { qs(base, left); base = i + qs_size; n = right; }
        else { qs(i + qs_size, right); n = left; }
    }
    for (u32 k = 1; k < n; k++)
        for (u32 j = k; j > 0 && qcmp(base + (j - 1) * qs_size, base + j * qs_size) > 0; j--) qswap(base + (j - 1) * qs_size, base + j * qs_size);
}
HLE(c_qsort) {
    static pthread_mutex_t mu = PTHREAD_MUTEX_INITIALIZER;
    pthread_mutex_lock(&mu);
    qs_c = c; qs_cmp = ARG(3); qs_size = ARG(2);
    qs_tmp = galloc(qs_size);
    qs(ARG(0), ARG(1));
    gfree(qs_tmp);
    pthread_mutex_unlock(&mu);
    return 0;
}
HLE(c_beginthreadex) { u32 tid; u32 h = thread_create(ARG(2), ARG(3), ARG(1), (ARG(4) & 4) != 0, &tid); if (ARG(5)) M32(ARG(5)) = tid; return h; }
HLE(c_beginthread) { return thread_create(ARG(0), ARG(2), ARG(1), 0, 0); }
HLE(c_uncaught) { return 0; }
HLE(c_setjmp3) { rt_fatal("_setjmp3 reached through a pointer (not inlined by the recompiler)"); return 0; }
HLE(c_longjmp) { rt_longjmp(c, ARG(0), ARG(1)); return 0; }

// C++: operator new/delete + exception classes (only constructed when the game throws)
HLE(cpp_new) { return galloc(ARG(0)); }
HLE(cpp_delete) { gfree(ARG(0)); return 0; }
static u32 g_exc_vt;
HLE(exc_dtor) { return 0; }
HLE(exc_what) { u32 w = M32(c->ecx + 4); return w ? w : gstrdup("Unknown exception"); }
static u32 exc_vtable(void) {
    if (!g_exc_vt) { g_exc_vt = gstatic(8); M32(g_exc_vt) = hle_thunk_fn("exception::dtor", exc_dtor, 1); M32(g_exc_vt + 4) = hle_thunk_fn("exception::what", exc_what, 0); }
    return g_exc_vt;
}
HLE(exc_ctor0) { M32(c->ecx) = exc_vtable(); M32(c->ecx + 4) = 0; M32(c->ecx + 8) = 0; return c->ecx; }
HLE(exc_ctor_copy) { M32(c->ecx) = exc_vtable(); M32(c->ecx + 4) = M32(ARG(0) + 4); M32(c->ecx + 8) = 0; return c->ecx; }
HLE(exc_ctor_str) { M32(c->ecx) = exc_vtable(); M32(c->ecx + 4) = M32(ARG(0)); M32(c->ecx + 8) = 0; return c->ecx; }
HLE(badcast_ctor_str) { M32(c->ecx) = exc_vtable(); M32(c->ecx + 4) = ARG(0); M32(c->ecx + 8) = 0; return c->ecx; }
HLE(thiscall_nop) { return c->ecx; }

// MSVCP71 std::string (VC7.1 layout: 4 alloc, 16 buf / ptr, 4 size, 4 capacity) - just what KartRes.dll needs
#define BS_PTR(s) (M32((s) + 24) < 16 ? (s) + 4 : M32((s) + 4))
static void bs_assign(u32 s, const char *p, u32 n) {
    if (n < 16) { memcpy(HP(s + 4), p, n); M8(s + 4 + n) = 0; M32(s + 24) = 15; }
    else { u32 b = galloc(n + 1); memcpy(HP(b), p, n); M8(b + n) = 0; M32(s + 4) = b; M32(s + 24) = n; }
    M32(s + 20) = n;
}
HLE(bs_ctor_default) { M32(c->ecx + 24) = 15; M32(c->ecx + 20) = 0; M8(c->ecx + 4) = 0; return c->ecx; }
HLE(bs_ctor_cstr) { const char *p = GS(ARG(0)); M32(c->ecx + 24) = 15; bs_assign(c->ecx, p, (u32)strlen(p)); return c->ecx; }
HLE(bs_ctor_copy) { u32 o = ARG(0); char *p = GS(BS_PTR(o)); M32(c->ecx + 24) = 15; bs_assign(c->ecx, p, M32(o + 20)); return c->ecx; }
HLE(bs_dtor) { if (M32(c->ecx + 24) >= 16) gfree(M32(c->ecx + 4)); M32(c->ecx + 24) = 15; M32(c->ecx + 20) = 0; return 0; }
HLE(bs_assign_cstr) {
    char tmp[4096];
    snprintf(tmp, sizeof tmp, "%s", GS(ARG(0)));
    if (M32(c->ecx + 24) >= 16) gfree(M32(c->ecx + 4));
    M32(c->ecx + 24) = 15;
    bs_assign(c->ecx, tmp, (u32)strlen(tmp));
    return c->ecx;
}
HLE(bs_less) { return strcmp(GS(BS_PTR(ARG(0))), GS(BS_PTR(ARG(1)))) < 0; }

#define C(n, f) DEF("msvcr71", n, f, CDECL)
#define T(n, f, a) DEF("msvcr71", n, f, a)
static const HleDef defs[] = {
    C("malloc", c_malloc), C("free", c_free), C("calloc", c_calloc), C("realloc", c_realloc), C("memcpy", c_memcpy), C("memmove", c_memmove),
    C("memset", c_memset), C("memchr", c_memchr), C("strlen", c_strlen), C("strcpy", c_strcpy), C("strncpy", c_strncpy), C("strcat", c_strcat),
    C("strncat", c_strncat), C("strcmp", c_strcmp), C("strncmp", c_strncmp), C("_stricmp", c_stricmp), C("_strnicmp", c_strnicmp),
    C("strchr", c_strchr), C("strrchr", c_strrchr), C("strstr", c_strstr), C("strcspn", c_strcspn), C("_strdup", c_strdup), C("_strlwr", c_strlwr),
    C("strtok", c_strtok), C("strtol", c_strtol), C("strtoul", c_strtoul), C("_strtoi64", c_strtoi64), C("_strtoui64", c_strtoui64),
    C("atoi", c_atoi), C("atof", c_atof), C("strtod", c_strtod), C("_itoa", c_itoa), C("_i64toa", c_i64toa), C("wcslen", c_wcslen),
    C("wcschr", c_wcschr), C("wcsncpy", c_wcsncpy), C("_mbslen", c_mbslen), C("_ismbblead", c_ismbblead), C("__pctype_func", c_pctype_func),
    C("isalpha", c_isalpha), C("isalnum", c_isalnum), C("isdigit", c_isdigit), C("isspace", c_isspace), C("isupper", c_isupper),
    C("islower", c_islower), C("isxdigit", c_isxdigit), C("tolower", c_tolower), C("toupper", c_toupper), C("sprintf", c_sprintf),
    C("vsprintf", c_vsprintf), C("_snprintf", c_snprintf), C("_vsnprintf", c_vsnprintf), C("_snwprintf", c_snwprintf), C("printf", c_printf),
    C("sscanf", c_sscanf), C("__iob_func", c_iob_func), C("fopen", c_fopen), C("fclose", c_fclose), C("fread", c_fread), C("fwrite", c_fwrite),
    C("fseek", c_fseek), C("ftell", c_ftell), C("fflush", c_fflush), C("fgetc", c_fgetc), C("fputc", c_fputc), C("ungetc", c_ungetc),
    C("fputs", c_fputs), C("fprintf", c_fprintf), C("fgetpos", c_fgetpos), C("fsetpos", c_fsetpos), C("setvbuf", c_setvbuf), C("remove", c_remove),
    C("_findfirst", c_findfirst), C("_findnext", c_findnext), C("_findclose", c_findclose), C("_chdir", c_chdir), C("_getcwd", c_getcwd),
    C("_mkdir", c_mkdir), DEF("msvcr71", "_acmdln", d_acmdln, DATA), DEF("msvcr71", "_adjust_fdiv", d_adjust_fdiv, DATA),
    C("__p__commode", c_p_commode), C("__p__fmode", c_p_fmode), C("__set_app_type", c_nop), C("__setusermatherr", c_nop),
    C("__getmainargs", c_getmainargs), C("_initterm", c_initterm), C("_onexit", c_onexit), C("__dllonexit", c_dllonexit), C("atexit", c_onexit),
    C("exit", c_exit), C("_exit", c_exit), C("_c_exit", c_nop), C("_cexit", c_nop), C("abort", c_abort), C("_amsg_exit", c_amsg_exit),
    C("_purecall", c_purecall), C("?terminate@@YAXXZ", c_terminate), C("__security_error_handler", c_security),
    C("_CxxThrowException", c_throw), C("__CxxFrameHandler", c_handler), C("_except_handler3", c_handler), C("_XcptFilter", c_handler),
    C("__CppXcptFilter", c_handler), C("_errno", c_errno), C("_lock", c_lock), C("_unlock", c_unlock), C("___lc_codepage_func", c_lc_codepage),
    C("___lc_handle_func", c_lc_handle), C("___setlc_active_func", c_nop), C("___unguarded_readlc_active_add_func", c_unguarded_readlc),
    C("__crtLCMapStringA", c_crtLCMapStringA), C("setlocale", c_setlocale), C("localeconv", c_localeconv), C("_controlfp", c_controlfp),
    C("_finite", c_finite), C("floor", c_floor), C("pow", c_pow), C("_ftol", c_ftol), C("_CIpow", c_CIpow), C("_CIfmod", c_CIfmod),
    C("_CIacos", c_CIacos), C("time", c_time), C("localtime", c_localtime), C("srand", c_srand), C("rand", c_rand), C("qsort", c_qsort),
    C("_beginthreadex", c_beginthreadex), C("_beginthread", c_beginthread), C("__uncaught_exception", c_uncaught),
    C("_setjmp3", c_setjmp3), C("longjmp", c_longjmp),
    C("??2@YAPAXI@Z", cpp_new), C("??_U@YAPAXI@Z", cpp_new), C("??3@YAXPAX@Z", cpp_delete), C("??_V@YAXPAX@Z", cpp_delete),
    T("??0exception@@QAE@XZ", exc_ctor0, 0), T("??0exception@@QAE@ABV0@@Z", exc_ctor_copy, 1), T("??0exception@@QAE@ABQBD@Z", exc_ctor_str, 1),
    T("??1exception@@UAE@XZ", thiscall_nop, 0), T("??0bad_cast@@QAE@PBD@Z", badcast_ctor_str, 1), T("??0bad_cast@@QAE@ABV0@@Z", exc_ctor_copy, 1),
    T("??1bad_cast@@UAE@XZ", thiscall_nop, 0), T("??1type_info@@UAE@XZ", thiscall_nop, 0),
    DEF("msvcp71", "??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ", bs_ctor_default, 0),
    DEF("msvcp71", "??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z", bs_ctor_cstr, 1),
    DEF("msvcp71", "??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z", bs_ctor_copy, 1),
    DEF("msvcp71", "??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ", bs_dtor, 0),
    DEF("msvcp71", "??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z", bs_assign_cstr, 1),
    DEF("msvcp71", "??$?MDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z", bs_less, CDECL),
};
void hle_msvcrt_init(void) { hle_add(defs, (int)(sizeof defs / sizeof defs[0])); }
