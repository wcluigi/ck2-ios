// PC validation harness: the original exe is loaded by Windows (all DLLs real), its entry stub
// loads this DLL and calls ck_run(), which executes the recompiled guest code instead of the original.
// Guest addresses are host addresses (CK_MEM_IDENTITY); guest stack = the real thread stack.
#include "cpu.h"

#define WINAPI __stdcall
#define IMP __declspec(dllimport)
typedef void *HANDLE;
IMP void *WINAPI VirtualAlloc(void *, u32, u32, u32);
IMP int WINAPI VirtualProtect(void *, u32, u32, u32 *);
IMP void *WINAPI AddVectoredExceptionHandler(u32, long(WINAPI *)(void *));
IMP u32 WINAPI TlsAlloc(void);
IMP void *WINAPI TlsGetValue(u32);
IMP int WINAPI TlsSetValue(u32, void *);
IMP HANDLE WINAPI CreateFileA(const char *, u32, u32, void *, u32, u32, HANDLE);
IMP int WINAPI ReadFile(HANDLE, void *, u32, u32 *, void *);
IMP int WINAPI WriteFile(HANDLE, const void *, u32, u32 *, void *);
IMP void WINAPI ExitProcess(u32);
IMP void *WINAPI GetModuleHandleA(const char *);
IMP void *WINAPI LoadLibraryA(const char *);
IMP void *WINAPI GetProcAddress(void *, const char *);
IMP u32 WINAPI GetCurrentThreadId(void);
IMP int WINAPI MessageBoxA(void *, const char *, const char *, u32);
IMP int __cdecl wsprintfA(char *, const char *, ...);

extern const FnEnt ck_fn_table[];
extern const u32 ck_fn_count, ck_entry, ck_code_ranges[][2], ck_code_range_count;
void native_call_asm(CPU *c, u32 target);
void guest_enter_tramp(void);
void switch_and_run(u32 host_sp, CPU *c, GuestFn f);

int _fltused = 0;
double (*m_sin)(double), (*m_cos)(double), (*m_tan)(double), (*m_atan2)(double, double),
    (*m_pow)(double, double), (*m_fmod)(double, double), (*m_acos)(double), (*m_log)(double), (*m_exp)(double);

void *memset(void *d, int v, size_t n) { u8 *p = d; while (n--) *p++ = (u8)v; return d; }
void *memcpy(void *d, const void *s, size_t n) { u8 *p = d; const u8 *q = s; while (n--) *p++ = *q++; return d; }
void *memmove(void *d, const void *s, size_t n) {
    u8 *p = d; const u8 *q = s;
    if (p < q) while (n--) *p++ = *q++; else { p += n; q += n; while (n--) *--p = *--q; }
    return d;
}

// ---- logging ---------------------------------------------------------------
static HANDLE g_log;
static void logs(const char *s) {
    u32 n = 0, w;
    while (s[n]) n++;
    if (g_log) WriteFile(g_log, s, n, &w, 0);
}
#define LOGF(...) do { char b_[512]; wsprintfA(b_, __VA_ARGS__); logs(b_); } while (0)

static void die(CPU *c, const char *msg) {
    char b[700];
    if (c)
        wsprintfA(b, "%s\r\neax=%08x ecx=%08x edx=%08x ebx=%08x esp=%08x ebp=%08x esi=%08x edi=%08x [esp]=%08x thread=%u\r\n", msg,
                  c->eax, c->ecx, c->edx, c->ebx, c->esp, c->ebp, c->esi, c->edi, c->esp ? M32(c->esp) : 0, GetCurrentThreadId());
    else
        wsprintfA(b, "%s\r\n", msg);
    logs(b);
    MessageBoxA(0, b, "ck2recomp", 0x10);
    ExitProcess(3);
}

// ---- function lookup ---------------------------------------------------------
static int in_code(u32 a) {
    for (u32 i = 0; i < ck_code_range_count; i++)
        if (a >= ck_code_ranges[i][0] && a < ck_code_ranges[i][1]) return 1;
    return 0;
}
static GuestFn lookup(u32 a) {
    u32 lo = 0, hi = ck_fn_count;
    while (lo < hi) {
        u32 m = (lo + hi) / 2;
        if (ck_fn_table[m].addr < a) lo = m + 1; else hi = m;
    }
    return lo < ck_fn_count && ck_fn_table[lo].addr == a ? ck_fn_table[lo].fn : 0;
}
static void missing(CPU *c, u32 a) {
    char b[96];
    HANDLE h = CreateFileA("ck2recomp_missing.txt", 4 /*FILE_APPEND_DATA*/, 3, 0, 4 /*OPEN_ALWAYS*/, 0x80, 0);
    u32 w;
    wsprintfA(b, "%08x\r\n", a);
    if (h != (HANDLE)-1) WriteFile(h, b, 10, &w, 0);
    wsprintfA(b, "missing guest function %08x (added to ck2recomp_missing.txt, re-run lift)", a);
    die(c, b);
}

// ---- per-thread CPU ------------------------------------------------------------
static u32 g_tls;
#define HOST_STACK (8u << 20)
static u32 real_fcw(void) { u16 w; __asm__ volatile("fnstcw %0" : "=m"(w)); return w; }
static CPU *thread_cpu(void) {
    CPU *c = TlsGetValue(g_tls);
    if (c) return c;
    c = VirtualAlloc(0, sizeof(CPU), 0x3000, 4);
    u8 *hs = VirtualAlloc(0, HOST_STACK, 0x3000, 4);
    if (!c || !hs) die(0, "out of memory for thread state");
    c->host_sp = (u32)(hs + HOST_STACK - 64);
    u32 teb;
    __asm__ volatile("movl %%fs:0x18, %0" : "=r"(teb));
    c->fs_base = teb;
    c->fcw = real_fcw();
    c->fop = c->cop = OP_LOGIC; c->fsz = c->csz = 4;
    TlsSetValue(g_tls, c);
    return c;
}

// ---- API trace (enabled by a file ck2recomp_trace.on in the game folder) -----------------
// Names come from the client's own import table: IAT slot value -> "dll!name".
#define NIMP 1024
static struct { u32 fn; const char *dll, *name; u32 count; } g_imp[NIMP];
static int g_nimp, g_trace;
static u32 g_trace_cb;   // callback address whose every call is logged (first line of the .on file, hex)
static u32 g_shadow;     // bisect mode: executable copy of the image (original code), else 0
extern const u8 *ck_native_map;
static int is_native_fn(u32 a) {
    return ck_native_map && a >= 0x400000 && a < 0xa00000 && ((ck_native_map[(a - 0x400000) >> 3] >> ((a - 0x400000) & 7)) & 1);
}
static void load_import_names(void) {
    u8 *base = (u8 *)0x400000;
    u32 pe = *(u32 *)(base + 0x3c);
    u32 dir = *(u32 *)(base + pe + 0x80);
    for (u32 *d = (u32 *)(base + dir); d[3]; d += 5) {          // IMAGE_IMPORT_DESCRIPTOR
        u32 *names = (u32 *)(base + (d[0] ? d[0] : d[4])), *iat = (u32 *)(base + d[4]);
        for (int k = 0; names[k] && g_nimp < NIMP; k++, g_nimp++) {
            g_imp[g_nimp].fn = iat[k];
            g_imp[g_nimp].dll = (const char *)(base + d[3]);
            g_imp[g_nimp].name = (names[k] & 0x80000000u) ? "#ordinal" : (const char *)(base + names[k] + 2);
        }
    }
}
static void trace_call(CPU *c, u32 t, u32 a0, u32 a1, u32 a2, u32 a3) {
    for (int k = 0; k < g_nimp; k++)
        if (g_imp[k].fn == t) {
            if (++g_imp[k].count <= 30)
                LOGF("[%u] %s!%s(%08x, %08x, %08x, %08x) = %08x\r\n", GetCurrentThreadId(), g_imp[k].dll, g_imp[k].name,
                     a0, a1, a2, a3, c->eax);
            return;
        }
}

// ---- calls ---------------------------------------------------------------------
static void native(CPU *c, u32 t) {
    u32 ebx = c->ebx, esi = c->esi, edi = c->edi, ebp = c->ebp;   // a guest callback may clobber the struct copies
    u32 a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    if (g_trace) { a0 = M32(c->esp + 4); a1 = M32(c->esp + 8); a2 = M32(c->esp + 12); a3 = M32(c->esp + 16); }
    c->fretf = 0;
    native_call_asm(c, t);
    c->ebx = ebx; c->esi = esi; c->edi = edi; c->ebp = ebp;
    if (c->fretf) FPUSH(c->fret);
    if (g_trace) trace_call(c, t, a0, a1, a2, a3);
}

void call_ind(CPU *c, u32 t) {
    if (in_code(t)) {
        GuestFn f = lookup(t);
        if (!f) missing(c, t);
        f(c);
        return;
    }
    if (t < 0x10000) {
        char b[64];
        wsprintfA(b, "call to bad address %08x", t);
        die(c, b);
    }
    native(c, t);
}

CPU *guest_enter_c(CPU *c) {
    u32 saved_host = c->host_sp;
    u32 ret_to = M32(c->esp);
    u32 top0 = c->ftop;
    c->enter_fn(c);
    c->ret_to = ret_to;
    c->host_sp = saved_host;
    c->freto = 0;
    if (c->ftop != top0) { c->fret = ST(0); FPOP(); c->freto = 1; }
    return c;
}

typedef struct { u32 code, flags, rec, addr, nparams, info[15]; } EXREC;
typedef struct { u32 r0[39]; u32 Edi, Esi, Ebx, Edx, Ecx, Eax, Ebp, Eip, SegCs, EFlags, Esp, SegSs; } CTX; // Edi at 156
_Static_assert(offsetof(CTX, Edi) == 156 && offsetof(CTX, Esp) == 196, "CONTEXT layout");
typedef struct { EXREC *rec; CTX *ctx; } EXPTRS;

static long WINAPI veh(void *p) {
    EXPTRS *ep = p;
    EXREC *er = ep->rec;
    CTX *x = ep->ctx;
    if (er->code == 0xC0000005 && er->info[0] == 8 && in_code(x->Eip)) {
        GuestFn f = lookup(x->Eip);
        // Bisect mode: listed functions and mid-function targets (jump tables) continue in the shadow copy.
        if (g_shadow && (!f || is_native_fn(x->Eip))) { x->Eip = x->Eip - 0x400000u + g_shadow; return -1; }
        CPU *c = thread_cpu();
        if (!f) { c->esp = x->Esp; missing(c, x->Eip); }
        c->eax = x->Eax; c->ecx = x->Ecx; c->edx = x->Edx; c->ebx = x->Ebx;
        c->esp = x->Esp; c->ebp = x->Ebp; c->esi = x->Esi; c->edi = x->Edi;
        c->df = (x->EFlags >> 10) & 1;
        c->enter_fn = f;
        if (g_trace) {
            static u32 seen[8192]; static int nseen;
            int k = 0;
            while (k < nseen && seen[k] != x->Eip) k++;
            if (k == nseen && nseen < 8192) { seen[nseen++] = x->Eip; LOGF("[%u] callback -> %08x (ret %08x)\r\n", GetCurrentThreadId(), x->Eip, M32(x->Esp)); }
            if (x->Eip == g_trace_cb) LOGF("[%u] cb %08x args %08x %08x %08x %08x\r\n", GetCurrentThreadId(), x->Eip, M32(x->Esp + 4), M32(x->Esp + 8), M32(x->Esp + 12), M32(x->Esp + 16));
        }
        x->Eax = (u32)c;
        x->Eip = (u32)guest_enter_tramp;
        return -1;   // EXCEPTION_CONTINUE_EXECUTION
    }
    if (er->code == 0xC0000005 || er->code == 0xC000001D || er->code == 0xC0000094 || er->code == 0xC00000FD ||
        er->code == 0xC0000096) {
        LOGF("exception %08x at eip=%08x info=%08x,%08x esp=%08x eax=%08x ecx=%08x edx=%08x esi=%08x edi=%08x thread=%u\r\n",
             er->code, x->Eip, er->info[0], er->info[1], x->Esp, x->Eax, x->Ecx, x->Edx, x->Esi, x->Edi, GetCurrentThreadId());
    }
    return 0;
}

// ---- runtime services used by generated code --------------------------------------
void rt_trap(CPU *c, u32 addr, const char *why) {
    char b[160];
    wsprintfA(b, "guest trap at %08x: %s", addr, why);
    die(c, b);
}
void rt_throw(CPU *c, u32 addr) {
    char b[120];
    wsprintfA(b, "C++ exception thrown (_CxxThrowException) near %08x - not supported yet", addr);
    die(c, b);
}
void rt_cpuid(u32 *a, u32 *b, u32 *cc, u32 *d) {
    u32 leaf = *a;
    *a = *b = *cc = *d = 0;
    if (leaf == 0) { *a = 1; *b = 0x756e6547; *d = 0x49656e69; *cc = 0x6c65746e; }        // GenuineIntel
    else if (leaf == 1) { *a = 0x633; *d = 1 | (1 << 4) | (1 << 8) | (1 << 15); }        // FPU TSC CX8 CMOV only
    else if (leaf == 0x80000000) *a = 0x80000000;
}
u64 rt_rdtsc(void) { return __builtin_readcyclecounter(); }
void rt_divu(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr) {
    if (!d || hi >= d) rt_trap(c, addr, "divide error");
    __asm__("divl %4" : "=a"(*q), "=d"(*r) : "a"(lo), "d"(hi), "rm"(d));
}
void rt_divs(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr) {
    if (!d) rt_trap(c, addr, "divide by zero");   // quotient overflow faults natively, as on real hardware
    __asm__("idivl %4" : "=a"(*q), "=d"(*r) : "a"(lo), "d"(hi), "rm"(d));
}
static double rnd(const CPU *c, double x, int rc) {
    switch (rc) {
    case 0: return __builtin_rint(x);
    case 1: return __builtin_floor(x);
    case 2: return __builtin_ceil(x);
    default: return __builtin_trunc(x);
    }
}
double rt_frndint(const CPU *c, double x) { return rnd(c, x, (c->fcw >> 10) & 3); }
s64 rt_f2i(const CPU *c, double x, int bits, int truncate) {
    double r = rnd(c, x, truncate ? 3 : (c->fcw >> 10) & 3);
    if (bits == 16) return (r >= -32768.0 && r <= 32767.0) ? (s64)(s32)r : 0x8000;
    if (bits == 32) return (r >= -2147483648.0 && r <= 2147483647.0) ? (s64)(s32)r : (s64)0x80000000u;
    if (!(r >= -9223372036854775808.0 && r < 9223372036854775808.0)) return (s64)0x8000000000000000ull;
    s64 v;
    __asm__ volatile("fldl %1\n\tfistpll %0" : "=m"(v) : "m"(r));
    return v;
}
double rt_ld80(u32 a) {
    u64 m = M64(a);
    u32 se = M16(a + 8), e = se & 0x7fff, s = se >> 15;
    u64 bits;
    if (e == 0 && m == 0) bits = 0;
    else if (e == 0x7fff) bits = 0x7ff0000000000000ull | (m << 1 >> 12);
    else {
        s32 de = (s32)e - 16383 + 1023;
        if (de >= 0x7ff) bits = 0x7ff0000000000000ull;
        else if (de <= 0) bits = 0;
        else bits = ((u64)de << 52) | ((m << 1) >> 12);
    }
    bits |= (u64)s << 63;
    double d;
    memcpy(&d, &bits, 8);
    return d;
}
void rt_st80(u32 a, double v) {
    u64 bits;
    memcpy(&bits, &v, 8);
    u32 s = bits >> 63, e = (bits >> 52) & 0x7ff;
    u64 f = bits & 0xfffffffffffffull, m;
    u32 ee;
    if (e == 0 && f == 0) { ee = 0; m = 0; }
    else if (e == 0x7ff) { ee = 0x7fff; m = 0x8000000000000000ull | (f << 11); }
    else if (e == 0) { ee = 0; m = f << 11; }    // denormal: close enough
    else { ee = e - 1023 + 16383; m = 0x8000000000000000ull | (f << 11); }
    M64(a) = m;
    M16(a + 8) = (u16)(ee | (s << 15));
}
void rt_fldcw(CPU *c) { u16 w = (u16)c->fcw; __asm__ volatile("fldcw %0" : : "m"(w)); }

typedef struct { u32 buf, ebx, esi, edi, ebp, esp; void *hb[5]; } SJ;
#define NSJ 64
u32 rt_setjmp(CPU *c, u32 buf, u32 ebx, u32 esi, u32 edi, u32 ebp, u32 esp, void **hostbuf) {
    SJ *t = c->sj;
    if (!t) t = c->sj = VirtualAlloc(0, sizeof(SJ) * NSJ, 0x3000, 4);
    SJ *s = 0;
    for (int i = 0; i < NSJ && !s; i++) if (t[i].buf == buf) s = &t[i];
    for (int i = 0; i < NSJ && !s; i++) if (!t[i].buf) s = &t[i];
    if (!s) die(c, "setjmp table full");
    s->buf = buf; s->ebx = ebx; s->esi = esi; s->edi = edi; s->ebp = ebp; s->esp = esp;
    *hostbuf = s->hb;
    return 0;
}
void rt_longjmp(CPU *c, u32 buf, u32 val) {
    SJ *t = c->sj;
    for (int i = 0; t && i < NSJ; i++)
        if (t[i].buf == buf) {
            c->ebx = t[i].ebx; c->esi = t[i].esi; c->edi = t[i].edi; c->ebp = t[i].ebp; c->esp = t[i].esp;
            c->lj_val = val ? val : 1;
            __builtin_longjmp(t[i].hb, 1);
        }
    die(c, "longjmp to unknown buffer");
}

// ---- bisect: run listed address ranges as original code --------------------------------
const u8 *ck_native_map;
void ck_native_enter(CPU *c, u32 a) { native(c, a - 0x400000u + g_shadow); }
static u32 hexval(const char **p) {
    u32 v = 0;
    while (**p == ' ' || **p == '	') (*p)++;
    for (;; (*p)++) {
        char ch = **p;
        if (ch >= '0' && ch <= '9') v = v * 16 + (u32)(ch - '0');
        else if ((ch | 32) >= 'a' && (ch | 32) <= 'f') v = v * 16 + (u32)((ch | 32) - 'a' + 10);
        else break;
    }
    return v;
}
static int load_native_list(void) {   // lines "lo hi" (hex, hi exclusive); returns #functions marked
    HANDLE h = CreateFileA("ck2recomp_native.txt", 0x80000000, 1, 0, 3, 0x80, 0);
    if (h == (HANDLE)-1) return 0;
    static char buf[1 << 16];
    u32 n = 0;
    ReadFile(h, buf, sizeof buf - 1, &n, 0);
    buf[n] = 0;
    u8 *map = VirtualAlloc(0, 0x600000 / 8, 0x3000, 4);
    int marked = 0;
    for (const char *p = buf; *p;) {
        if (*p == '#') { while (*p && *p != '\n') p++; continue; }
        u32 lo = hexval(&p), hi = hexval(&p);
        if (hi > lo)
            for (u32 i = 0; i < ck_fn_count; i++) {
                u32 a = ck_fn_table[i].addr;
                if (a >= lo && a < hi && a >= 0x400000 && a < 0xa00000) { map[(a - 0x400000) >> 3] |= 1 << ((a - 0x400000) & 7); marked++; }
            }
        while (*p && *p != '\n') p++;
        if (*p) p++;
    }
    ck_native_map = map;
    return marked;
}

// ---- entry -------------------------------------------------------------------------
static void protect_code(void) {
    for (u32 i = 0; i < ck_code_range_count; i++) {
        u32 a = ck_code_ranges[i][0] & ~0xfffu, e = (ck_code_ranges[i][1] + 0xfff) & ~0xfffu, old;
        if (!VirtualProtect((void *)a, e - a, 4 /*PAGE_READWRITE*/, &old)) LOGF("VirtualProtect %08x failed\r\n", a);
    }
}

__declspec(dllexport) void ck_run(void) {
    g_log = CreateFileA("ck2recomp.log", 0x40000000, 1, 0, 2, 0x80, 0);
    LOGF("ck2recomp: %u functions, entry %08x\r\n", ck_fn_count, ck_entry);
    void *crt = GetModuleHandleA("msvcr71.dll");
    if (!crt) crt = LoadLibraryA("msvcr71.dll");
    m_sin = GetProcAddress(crt, "sin"); m_cos = GetProcAddress(crt, "cos"); m_tan = GetProcAddress(crt, "tan");
    m_atan2 = GetProcAddress(crt, "atan2"); m_pow = GetProcAddress(crt, "pow"); m_fmod = GetProcAddress(crt, "fmod");
    m_acos = GetProcAddress(crt, "acos"); m_log = GetProcAddress(crt, "log"); m_exp = GetProcAddress(crt, "exp");
    // cwebpage.dll calls OleInitialize in its DllMain; loaded later (with DirectInput threads alive)
    // it can deadlock on the loader lock. Load it now while this is the only thread.
    LoadLibraryA("cwebpage.dll");
    g_tls = TlsAlloc();
    CPU *c = thread_cpu();
    u32 gesp = ((u32)__builtin_frame_address(0) - 0x400) & ~15u;
    c->esp = gesp - 4;
    M32(c->esp) = 0;                     // the CRT entry never returns
    GuestFn entry = lookup(ck_entry);
    if (!entry) die(c, "entry function missing");
    HANDLE tf = CreateFileA("ck2recomp_trace.on", 0x80000000, 1, 0, 3, 0x80, 0);
    if (tf != (HANDLE)-1) {
        char tb[32] = {0}; u32 tn = 0;
        ReadFile(tf, tb, sizeof tb - 1, &tn, 0);
        const char *tp = tb;
        g_trace_cb = hexval(&tp);
        load_import_names(); g_trace = 1; LOGF("API trace on (%d imports), callback watch %08x\r\n", g_nimp, g_trace_cb);
    }
    int nat = load_native_list();
    if (nat) {
        // Original code runs from an executable copy of the image, so relative branches stay inside the
        // copy while absolute code addresses (vtables, callbacks, jump tables) still fault into the VEH.
        u8 *s = VirtualAlloc(0, 0x600000, 0x3000, 0x40);
        if (!s) die(c, "no memory for shadow image");
        for (u32 i = 0; i < ck_code_range_count; i++)
            memcpy(s + (ck_code_ranges[i][0] - 0x400000), (void *)ck_code_ranges[i][0], ck_code_ranges[i][1] - ck_code_ranges[i][0]);
        g_shadow = (u32)s;
        LOGF("bisect mode: %d functions run as original code from shadow copy %08x\r\n", nat, g_shadow);
    }
    protect_code();
    AddVectoredExceptionHandler(1, veh);
    switch_and_run(c->host_sp, c, entry);
    LOGF("guest entry returned eax=%08x\r\n", c->eax);
    ExitProcess(c->eax);
}
