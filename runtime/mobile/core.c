// Core services for recompiled code on a 64-bit host: dispatch, guest calls, threads, CPU helpers.
#include "rt.h"
#include <pthread.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

extern const FnEnt ck_fn_table[];
extern const u32 ck_fn_count;

double (*m_sin)(double) = sin, (*m_cos)(double) = cos, (*m_tan)(double) = tan, (*m_atan2)(double, double) = atan2,
    (*m_pow)(double, double) = pow, (*m_fmod)(double, double) = fmod, (*m_acos)(double) = acos, (*m_log)(double) = log,
    (*m_exp)(double) = exp;

// ---- function lookup (recompiled code) ---------------------------------------------
static GuestFn lookup(u32 a) {
    u32 lo = 0, hi = ck_fn_count;
    while (lo < hi) {
        u32 m = (lo + hi) / 2;
        if (ck_fn_table[m].addr < a) lo = m + 1; else hi = m;
    }
    return lo < ck_fn_count && ck_fn_table[lo].addr == a ? ck_fn_table[lo].fn : 0;
}
#define CACHE 4096
static struct { u32 a; GuestFn f; } g_cache[CACHE];
static GuestFn lookup_cached(u32 a) {
    u32 k = (a >> 2) & (CACHE - 1);
    if (g_cache[k].a == a) return g_cache[k].f;
    GuestFn f = lookup(a);
    if (f) { g_cache[k].f = f; g_cache[k].a = a; }    // benign race: worst case another lookup
    return f;
}

// ---- import thunks -----------------------------------------------------------------
typedef struct { const char *dll, *name; HleFn fn; int nargs; u32 calls; } Thunk;
static Thunk g_thunks[THUNK_MAX + 1];
static u32 g_nthunks;
static const HleDef *g_defs[64]; static int g_ndefs[64], g_ndefsets;
static pthread_mutex_t g_thunk_mu = PTHREAD_MUTEX_INITIALIZER;

void hle_add(const HleDef *defs, int n) { g_defs[g_ndefsets] = defs; g_ndefs[g_ndefsets++] = n; }

static int dll_eq(const char *a, const char *b) {   // "KERNEL32.dll" == "kernel32"
    for (;; a++, b++) {
        char x = *a, y = *b;
        if (x >= 'A' && x <= 'Z') x += 32;
        if (y >= 'A' && y <= 'Z') y += 32;
        if (x == '.' && (!y || y == '.')) return 1;
        if (!x && (y == '.' || !y)) return 1;
        if (x != y) return 0;
        if (!x) return 1;
    }
}
static u32 new_thunk(const char *dll, const char *name, HleFn fn, int nargs) {
    pthread_mutex_lock(&g_thunk_mu);
    for (u32 i = 0; i < g_nthunks; i++)
        if (g_thunks[i].fn == fn && fn && g_thunks[i].nargs == nargs && !strcmp(g_thunks[i].name, name) && dll_eq(g_thunks[i].dll, dll)) {
            pthread_mutex_unlock(&g_thunk_mu);
            return THUNK_BASE + 4 * i;
        }
    if (g_nthunks > THUNK_MAX) rt_fatal("too many thunks");
    u32 i = g_nthunks++;
    g_thunks[i].dll = strdup(dll); g_thunks[i].name = strdup(name); g_thunks[i].fn = fn; g_thunks[i].nargs = nargs;
    pthread_mutex_unlock(&g_thunk_mu);
    return THUNK_BASE + 4 * i;
}
u32 hle_thunk(const char *dll, const char *name) {
    for (int s = 0; s < g_ndefsets; s++)
        for (int k = 0; k < g_ndefs[s]; k++)
            if (!strcmp(g_defs[s][k].name, name) && dll_eq(g_defs[s][k].dll, dll)) {
                if (g_defs[s][k].nargs == DATA) return g_defs[s][k].fn(0);   // variable import: slot = its address
                return new_thunk(dll, name, g_defs[s][k].fn, g_defs[s][k].nargs);
            }
    return new_thunk(dll, name, 0, 0);     // unknown: traps with its name when first called
}
u32 hle_thunk_fn(const char *what, HleFn fn, int nargs) { return new_thunk("rt", what, fn, nargs); }

const char *volatile g_main_last_import;     // stall watchdog: the main thread's latest replacement call
u32 g_main_last_ret;
static GThread *g_main_thread;
static void call_thunk(CPU *c, u32 t) {
    Thunk *k = &g_thunks[(t - THUNK_BASE) >> 2];
    if ((t - THUNK_BASE) >> 2 >= g_nthunks || !k->fn)
        rt_fatal("unimplemented import %s!%s called (return address %08x)", k->dll ? k->dll : "?", k->name ? k->name : "?", M32(c->esp));
    k->calls++;
    if (cur_thread() == g_main_thread) { g_main_last_import = k->name; g_main_last_ret = M32(c->esp); }
    static int trace = -1;
    if (trace < 0) { const char *e = getenv("CK_TRACE"); trace = e ? atoi(e) : 0; }
    if (trace && k->calls <= (u32)trace)
        rt_log("[%u] %s!%s(%08x, %08x, %08x, %08x) ret->%08x\n", M32(cur_thread()->teb + 0x24), k->dll, k->name,
               M32(c->esp + 4), M32(c->esp + 8), M32(c->esp + 12), M32(c->esp + 16), M32(c->esp));
    u32 sv_ebx = c->ebx, sv_esi = c->esi, sv_edi = c->edi, sv_ebp = c->ebp;
    u32 r = k->fn(c);
    if (c->ebx != sv_ebx || c->esi != sv_esi || c->edi != sv_edi || c->ebp != sv_ebp) {
        static int n;
        if (n++ < 20) rt_log("callee-saved register changed by %s!%s (esi %08x->%08x edi %08x->%08x ebx %08x->%08x ebp %08x->%08x)\n", k->dll, k->name,
                             sv_esi, c->esi, sv_edi, c->edi, sv_ebx, c->ebx, sv_ebp, c->ebp);
        c->ebx = sv_ebx; c->esi = sv_esi; c->edi = sv_edi; c->ebp = sv_ebp;    // Windows ABI: replacements never change them
    }
    c->eax = r;
    c->popped = M32(c->esp);
    c->esp += 4 + (k->nargs > 0 ? 4 * k->nargs : 0);
}

void call_ind(CPU *c, u32 t) {
    if (t >= THUNK_BASE) { call_thunk(c, t); return; }
    GuestFn f = lookup_cached(t);
    if (!f) rt_fatal("call to %08x: no recompiled function there (return address %08x)", t, M32(c->esp));
    u32 esp0 = c->esp;
    f(c);
    if (c->esp <= esp0) {        // a callee must at least pop its return address
        static int n;
        if (n++ < 10) rt_log("stack imbalance: %08x returned with esp %08x (entered %08x, return address %08x)\n", t, c->esp, esp0, M32(esp0));
    }
}

// Call guest code from runtime code: push args right to left + a dummy return address, restore esp after.
u32 guest_callv(CPU *c, u32 fn, int nargs, const u32 *args) {
    u32 esp0 = c->esp, ebx = c->ebx, esi = c->esi, edi = c->edi, ebp = c->ebp;
    for (int i = nargs - 1; i >= 0; i--) { c->esp -= 4; M32(c->esp) = args[i]; }
    c->esp -= 4; M32(c->esp) = 0;
    call_ind(c, fn);
    u32 r = c->eax;
    c->esp = esp0; c->ebx = ebx; c->esi = esi; c->edi = edi; c->ebp = ebp;
    return r;
}
u32 guest_call(CPU *c, u32 fn, int nargs, ...) {
    u32 a[16];
    va_list ap;
    va_start(ap, nargs);
    for (int i = 0; i < nargs && i < 16; i++) a[i] = va_arg(ap, u32);
    va_end(ap);
    return guest_callv(c, fn, nargs, a);
}

// ---- CPU helper services --------------------------------------------------------------
void rt_trap(CPU *c, u32 addr, const char *why) {
    rt_fatal("guest trap at %08x: %s (esp=%08x [esp]=%08x eax=%08x ecx=%08x)", addr, why, c->esp, M32(c->esp), c->eax, c->ecx);
}
void rt_throw(CPU *c, u32 addr) {
    rt_fatal("C++ exception thrown by the game (_CxxThrowException), return address %08x - not supported", M32(c->esp));
}
void rt_cpuid(u32 *a, u32 *b, u32 *cc, u32 *d) {
    u32 leaf = *a;
    *a = *b = *cc = *d = 0;
    if (leaf == 0) { *a = 1; *b = 0x756e6547; *d = 0x49656e69; *cc = 0x6c65746e; }
    else if (leaf == 1) { *a = 0x633; *d = 1 | (1 << 4) | (1 << 8) | (1 << 15); }   // no MMX/SSE: plain code paths
    else if (leaf == 0x80000000) *a = 0x80000000;
}
u64 rt_rdtsc(void) { return us_now() * 1000; }
void rt_divu(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr) {
    if (!d || hi >= d) rt_trap(c, addr, "divide error");
    u64 n = ((u64)hi << 32) | lo;
    *q = (u32)(n / d); *r = (u32)(n % d);
}
void rt_divs(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr) {
    s64 n = (s64)(((u64)hi << 32) | lo), dd = (s32)d;
    if (!dd) rt_trap(c, addr, "divide by zero");
    if (n == INT64_MIN && dd == -1) rt_trap(c, addr, "divide overflow");
    s64 qq = n / dd;
    if (qq != (s32)qq) rt_trap(c, addr, "divide overflow");
    *q = (u32)qq; *r = (u32)(n % dd);
}
static double rnd(const CPU *c, double x, int rc) {
    switch (rc) {
    case 0: return nearbyint(x);
    case 1: return floor(x);
    case 2: return ceil(x);
    default: return trunc(x);
    }
}
double rt_frndint(const CPU *c, double x) { return rnd(c, x, (c->fcw >> 10) & 3); }
s64 rt_f2i(const CPU *c, double x, int bits, int truncate) {
    double r = rnd(c, x, truncate ? 3 : (c->fcw >> 10) & 3);
    if (bits == 16) return (r >= -32768.0 && r <= 32767.0) ? (s64)r : 0x8000;
    if (bits == 32) return (r >= -2147483648.0 && r <= 2147483647.0) ? (s64)r : (s64)0x80000000u;
    if (!(r >= -9223372036854775808.0 && r < 9223372036854775808.0)) return INT64_MIN;
    return (s64)r;
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
    else if (e == 0) { ee = 0; m = f << 11; }
    else { ee = e - 1023 + 16383; m = 0x8000000000000000ull | (f << 11); }
    M64(a) = m;
    M16(a + 8) = (u16)(ee | (s << 15));
}
void rt_fldcw(CPU *c) {}

typedef struct { u32 buf, ebx, esi, edi, ebp, esp; jmp_buf hb; } SJ;
#define NSJ 64
u32 rt_setjmp(CPU *c, u32 buf, u32 ebx, u32 esi, u32 edi, u32 ebp, u32 esp, void **hostbuf) {
    SJ *t = c->sj;
    if (!t) t = c->sj = calloc(NSJ, sizeof(SJ));
    SJ *s = 0;
    for (int i = 0; i < NSJ && !s; i++) if (t[i].buf == buf) s = &t[i];
    for (int i = 0; i < NSJ && !s; i++) if (!t[i].buf) s = &t[i];
    if (!s) rt_fatal("setjmp table full");
    s->buf = buf; s->ebx = ebx; s->esi = esi; s->edi = edi; s->ebp = ebp; s->esp = esp;
    *hostbuf = &s->hb;
    return 0;
}
void rt_longjmp(CPU *c, u32 buf, u32 val) {
    SJ *t = c->sj;
    for (int i = 0; t && i < NSJ; i++)
        if (t[i].buf == buf) {
            c->ebx = t[i].ebx; c->esi = t[i].esi; c->edi = t[i].edi; c->ebp = t[i].ebp; c->esp = t[i].esp;
            c->lj_val = val ? val : 1;
            longjmp(t[i].hb, 1);
        }
    rt_fatal("longjmp to unknown buffer %08x", buf);
}

// ---- threads ------------------------------------------------------------------------
static __thread GThread *t_cur;
GThread *cur_thread(void) { return t_cur; }
void set_last_error(u32 e) { if (t_cur) t_cur->last_error = e; }

static u32 g_tid = 1000;
static GThread *thread_alloc(u32 stack_size) {
    GThread *t = calloc(1, sizeof *t);
    if (!stack_size) stack_size = 1 << 20;
    t->stack_lo = gpages(stack_size);
    t->stack_hi = t->stack_lo + stack_size;
    t->teb = gstatic(0x1000);
    M32(t->teb + 0x00) = 0xffffffffu;              // SEH chain end
    M32(t->teb + 0x04) = t->stack_hi;
    M32(t->teb + 0x08) = t->stack_lo;
    M32(t->teb + 0x18) = t->teb;
    M32(t->teb + 0x24) = __atomic_add_fetch(&g_tid, 4, __ATOMIC_SEQ_CST);
    CPU *c = &t->cpu;
    c->fs_base = t->teb;
    c->esp = t->stack_hi - 64;
    c->fcw = 0x27f;
    c->fop = c->cop = OP_LOGIC; c->fsz = c->csz = 4;
    c->plat = t;
    return t;
}
GThread *thread_main_init(void) { GThread *t = thread_alloc(4u << 20); t_cur = t; g_main_thread = t; return t; }
GThread *thread_main(void) { return g_main_thread; }

// sync objects: one global lock + condition; good enough for a game's handful of waits
pthread_mutex_t g_sync = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t g_sync_cv = PTHREAD_COND_INITIALIZER;
typedef struct { int done; u32 code; u32 start, arg; GThread *t; int suspended; pthread_t pt; } ThreadObj;

static void *thread_entry(void *p) {
    u32 h = (u32)(uintptr_t)p;
    ThreadObj *o = handle_get(h)->obj;
    t_cur = o->t;
    pthread_mutex_lock(&g_sync);
    while (o->suspended) pthread_cond_wait(&g_sync_cv, &g_sync);
    pthread_mutex_unlock(&g_sync);
    u32 code = guest_call(&o->t->cpu, o->start, 1, o->arg);
    pthread_mutex_lock(&g_sync);
    o->done = 1; o->code = code;
    pthread_cond_broadcast(&g_sync_cv);
    pthread_mutex_unlock(&g_sync);
    return 0;
}
u32 thread_create(u32 start, u32 arg, u32 stack_size, int suspended, u32 *tid) {
    ThreadObj *o = calloc(1, sizeof *o);
    o->t = thread_alloc(stack_size < (256u << 10) ? (256u << 10) : stack_size);
    o->start = start; o->arg = arg; o->suspended = suspended; o->code = 259;
    u32 h = handle_new(H_THREAD, o);
    o->t->handle = h;
    if (tid) *tid = M32(o->t->teb + 0x24);
    pthread_attr_t at;
    pthread_attr_init(&at);
    pthread_attr_setstacksize(&at, 16u << 20);       // host stack: recompiled frames for deep guest call chains
    pthread_attr_setdetachstate(&at, PTHREAD_CREATE_DETACHED);
    if (pthread_create(&o->pt, &at, thread_entry, (void *)(uintptr_t)h)) rt_fatal("pthread_create failed");
    return h;
}
void thread_resume(u32 h) {
    HObj *o = handle_get(h);
    if (!o || o->type != H_THREAD) return;
    pthread_mutex_lock(&g_sync);
    ((ThreadObj *)o->obj)->suspended = 0;
    pthread_cond_broadcast(&g_sync_cv);
    pthread_mutex_unlock(&g_sync);
}
int thread_done(void *obj, u32 *code) { ThreadObj *o = obj; if (code) *code = o->code; return o->done; }

// ---- handles -----------------------------------------------------------------------------
#define NH 8192
static HObj g_h[NH];
static pthread_mutex_t g_hmu = PTHREAD_MUTEX_INITIALIZER;
u32 handle_new(int type, void *obj) {
    pthread_mutex_lock(&g_hmu);
    for (u32 i = 1; i < NH; i++)
        if (g_h[i].type == H_FREE) {
            g_h[i].type = type; g_h[i].obj = obj; g_h[i].aux = 0;
            pthread_mutex_unlock(&g_hmu);
            return 0x1000 + i * 4;
        }
    pthread_mutex_unlock(&g_hmu);
    rt_fatal("out of handles");
    return 0;
}
HObj *handle_get(u32 h) {
    if (h < 0x1000 || (h & 3)) return 0;
    u32 i = (h - 0x1000) / 4;
    return i < NH && g_h[i].type != H_FREE ? &g_h[i] : 0;
}
void handle_free(u32 h) { HObj *o = handle_get(h); if (o) o->type = H_FREE; }

// ---- time / log ------------------------------------------------------------------------
u64 us_now(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000u + ts.tv_nsec / 1000;
}
u32 ms_now(void) { return (u32)(us_now() / 1000); }

#ifdef CK_CHECK_ABI
void abi_stack(CPU *c, u32 target, u32 site, u32 esp_in) {
    static int n;
    if (n++ < 10) rt_log("ABI: call %08x at %08x left esp %08x (should be >= %08x)\n", target, site, c->esp, esp_in + 4);
}
void abi_violation(CPU *c, u32 target, u32 site, u32 ebx, u32 esi, u32 edi, u32 ebp) {
    static u32 seen[256]; static int n;
    for (int i = 0; i < n; i++) if (seen[i] == target) return;
    if (n < 256) seen[n++] = target;
    rt_log("ABI: call %08x at %08x changed regs: ebx %08x->%08x esi %08x->%08x edi %08x->%08x ebp %08x->%08x\n", target, site,
           ebx, c->ebx, esi, c->esi, edi, c->edi, ebp, c->ebp);
}
#endif

PerfFrame g_perf;
void perf_file(const char *name, u64 us) {
    g_perf.files++; g_perf.file_us += us;
    snprintf(g_perf.last[g_perf.files & 1], sizeof g_perf.last[0], "%s", name);
}

// A callee returned somewhere other than this call's continuation (see RETCHK in cpu.h). Logged with the
// guest stack position: the first line of a cascade is the call whose callee left through a foreign ret.
void ret_mismatch(CPU *c, u32 want, u32 site) {
    static int n;
    if (n++ < 60) rt_log("ret: call at %08x expected return to %08x, guest went to %08x (esp %08x)\n", site, want, c->popped, c->esp);
}
