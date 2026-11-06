// Guest CPU state + helpers used by the generated code (recomp/out/*.c).
// Platform-neutral: the PC harness (runtime/pc) and the mobile runtime both include this.
#pragma once
#include <stdint.h>
#include <stddef.h>

typedef uint8_t u8; typedef uint16_t u16; typedef uint32_t u32; typedef uint64_t u64;
typedef int8_t s8; typedef int16_t s16; typedef int32_t s32; typedef int64_t s64;

// Flag groups are evaluated lazily from the last flag-setting operation.
// Main group (ZF SF PF OF) and carry group (CF) are separate because inc/dec keep CF.
enum { OP_ADD = 1, OP_SUB, OP_LOGIC, OP_INC, OP_DEC, OP_RES /* OF in a */, OP_RAW /* a = eflags */ };

typedef struct CPU {
    u32 eax, ecx, edx, ebx, esp, ebp, esi, edi;     // 0..28  (asm offsets: keep order)
    u32 fop, fa, fb, fr, fsz, cop, ca, cb, cr, csz;  // 32..68
    u32 df, fs_base;                                 // 72, 76
    u32 host_sp;                                     // 80  asm
    u32 fcw;                                         // 84  asm (x87 control word, low 16 bits)
    u32 fretf;                                       // 88  asm: native call left a value in real ST0
    u32 ret_to;                                      // 92  asm
    double fret;                                     // 96  asm
    u32 freto;                                       // 104 asm: guest callback returns a value in ST0
    u32 ftop, fsw;                                   // 108, 112
    u32 pad0;
    double st[8];                                    // 120
    void (*enter_fn)(struct CPU *);
    u32 lj_val;
    void *sj;          // setjmp records (runtime-owned)
    void *plat;        // platform data
    u32 popped;        // address the last ret popped: a call site whose continuation it is not returns at once
} CPU;

_Static_assert(offsetof(CPU, host_sp) == 80 && offsetof(CPU, fcw) == 84 && offsetof(CPU, fretf) == 88 &&
               offsetof(CPU, ret_to) == 92 && offsetof(CPU, fret) == 96 && offsetof(CPU, freto) == 104,
               "asm offsets");

typedef void (*GuestFn)(CPU *);
typedef struct { u32 addr; GuestFn fn; } FnEnt;

// ---- guest memory --------------------------------------------------------
#ifdef CK_MEM_IDENTITY            // 32-bit PC harness: guest address == host address
#define HP(a) ((u8 *)(uintptr_t)(u32)(a))
#else                             // 64-bit hosts: guest memory lives in a 4 GB reservation
extern u8 *g_mem;
#ifdef CK_LIFTED                  // recompiled code: each function copies the base into a local (REGS), which stays in a
#define HP(a) (mb_ + (u32)(a))    // register; through the global it was reloaded after every guest store (may alias it)
#define MEMBASE_LOCAL ; u8 *const mb_ = g_mem
#else
#define HP(a) (g_mem + (u32)(a))
#endif
#endif
#ifndef MEMBASE_LOCAL
#define MEMBASE_LOCAL
#endif
typedef u16 __attribute__((aligned(1), may_alias)) u16u;
typedef u32 __attribute__((aligned(1), may_alias)) u32u;
typedef u64 __attribute__((aligned(1), may_alias)) u64u;
typedef float __attribute__((aligned(1), may_alias)) f32u;
typedef double __attribute__((aligned(1), may_alias)) f64u;
#define M8(a)  (*(u8 *)HP(a))
#define M16(a) (*(u16u *)HP(a))
#define M32(a) (*(u32u *)HP(a))
#define M64(a) (*(u64u *)HP(a))
#define MF32(a) (*(f32u *)HP(a))
#define MF64(a) (*(f64u *)HP(a))

// ---- registers / flags as function locals ---------------------------------
#define REGS u32 eax, ecx, edx, ebx, esp, ebp, esi, edi, fop, fa, fb, fr, fsz, cop, ca, cb, cr, csz MEMBASE_LOCAL
#define LOADALL do { eax = c->eax; ecx = c->ecx; edx = c->edx; ebx = c->ebx; esp = c->esp; ebp = c->ebp; \
    esi = c->esi; edi = c->edi; fop = c->fop; fa = c->fa; fb = c->fb; fr = c->fr; fsz = c->fsz; \
    cop = c->cop; ca = c->ca; cb = c->cb; cr = c->cr; csz = c->csz; } while (0)
#define SAVEALL do { c->eax = eax; c->ecx = ecx; c->edx = edx; c->ebx = ebx; c->esp = esp; c->ebp = ebp; \
    c->esi = esi; c->edi = edi; c->fop = fop; c->fa = fa; c->fb = fb; c->fr = fr; c->fsz = fsz; \
    c->cop = cop; c->ca = ca; c->cb = cb; c->cr = cr; c->csz = csz; } while (0)

#define SIGNB(sz) (1u << ((sz) * 8 - 1))
static inline u32 f_cf(u32 op, u32 a, u32 b, u32 r, u32 sz) {
    (void)sz; return op == OP_ADD ? r < a : op == OP_SUB ? a < b : op == OP_RAW ? (a & 1) : 0;
}
static inline u32 f_zf(u32 op, u32 a, u32 b, u32 r, u32 sz) {
    (void)sz; return op == OP_RAW ? (a >> 6) & 1 : op == OP_SUB ? a == b : r == 0;
}
static inline u32 f_sf(u32 op, u32 a, u32 b, u32 r, u32 sz) {
    (void)b; return op == OP_RAW ? (a >> 7) & 1 : (r & SIGNB(sz)) != 0;
}
static inline u32 f_of(u32 op, u32 a, u32 b, u32 r, u32 sz) {
    switch (op) {
    case OP_ADD: return (((a ^ r) & (b ^ r)) & SIGNB(sz)) != 0;
    case OP_SUB: return (((a ^ b) & (a ^ r)) & SIGNB(sz)) != 0;
    case OP_INC: return r == SIGNB(sz);
    case OP_DEC: return r == SIGNB(sz) - 1;
    case OP_RES: return a & 1;
    case OP_RAW: return (a >> 11) & 1;
    default: return 0;
    }
}
static inline u32 f_pf(u32 op, u32 a, u32 b, u32 r, u32 sz) {
    (void)b; (void)sz; return op == OP_RAW ? (a >> 2) & 1 : !__builtin_parity(r & 0xff);
}
static inline s32 sxt(u32 v, u32 sz) { return sz == 4 ? (s32)v : sz == 2 ? (s32)(s16)v : (s32)(s8)v; }
static inline u32 f_lt(u32 op, u32 a, u32 b, u32 r, u32 sz) {
    if (op == OP_SUB) return sxt(a, sz) < sxt(b, sz);
    if (op == OP_LOGIC) return f_sf(op, a, b, r, sz);
    return f_sf(op, a, b, r, sz) != f_of(op, a, b, r, sz);
}
#define FG fop, fa, fb, fr, fsz
#define CG cop, ca, cb, cr, csz
#define CF_ f_cf(CG)
#define ZF_ f_zf(FG)
#define SF_ f_sf(FG)
#define OF_ f_of(FG)
#define PF_ f_pf(FG)
#define LT_ f_lt(FG)
#define SETF(op, a, b, r, sz) do { fop = (op); fa = (a); fb = (b); fr = (r); fsz = (sz); } while (0)
#define SETC(op, a, b, r, sz) do { cop = (op); ca = (a); cb = (b); cr = (r); csz = (sz); } while (0)
#define SETFC(op, a, b, r, sz) do { SETF(op, a, b, r, sz); SETC(op, a, b, r, sz); } while (0)
#define EFLAGS_ (CF_ | 2u | (PF_ << 2) | (ZF_ << 6) | (SF_ << 7) | (c->df << 10) | (OF_ << 11))
#define SETRAW(e) do { u32 eraw_ = (e); SETF(OP_RAW, eraw_, 0, 0, 4); SETC(OP_RAW, eraw_, 0, 0, 4); } while (0)

// ---- x87 ------------------------------------------------------------------
#define ST(i) c->st[(c->ftop + (i)) & 7]
#define FPUSH(v) do { double fpush_v_ = (v); c->ftop = (c->ftop - 1) & 7; c->st[c->ftop] = fpush_v_; } while (0)
#define FPOP() (c->ftop = (c->ftop + 1) & 7)
// D3D9 drops the FPU to 24-bit precision; honour the precision-control field so physics matches PC.
static inline double frnd(const CPU *c, double x) { return (c->fcw & 0x300) == 0 ? (double)(float)x : x; }
#define FR(x) frnd(c, (x))
static inline u32 fcom_sw(u32 sw, double a, double b) {
    sw &= ~0x4500u;
    if (a != a || b != b) return sw | 0x4500;
    if (a < b) return sw | 0x0100;
    if (a == b) return sw | 0x4000;
    return sw;
}
static inline u32 fcomi_fl(double a, double b) {   // ZF PF CF as eflags bits
    if (a != a || b != b) return 0x45;
    if (a < b) return 0x01;
    if (a == b) return 0x40;
    return 0;
}
#define FSW_ ((c->fsw & ~0x3800u) | ((c->ftop & 7) << 11))

// ---- runtime services (provided per platform) -------------------------------
void call_ind(CPU *c, u32 target);               // [esp] already holds the guest return address
void rt_trap(CPU *c, u32 addr, const char *why);  // does not return
void rt_cpuid(u32 *a, u32 *b, u32 *cc, u32 *d);
u64 rt_rdtsc(void);
void rt_divu(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr);
void rt_divs(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr);
s64 rt_f2i(const CPU *c, double x, int bits, int truncate);
double rt_frndint(const CPU *c, double x);
double rt_ld80(u32 a);
void rt_st80(u32 a, double v);
void rt_fldcw(CPU *c);
void rt_throw(CPU *c, u32 addr);                 // _CxxThrowException
u32 rt_setjmp(CPU *c, u32 buf, u32 ebx, u32 esi, u32 edi, u32 ebp, u32 esp, void **hostbuf);
void rt_longjmp(CPU *c, u32 buf, u32 val);
extern double (*m_sin)(double), (*m_cos)(double), (*m_tan)(double), (*m_atan2)(double, double),
    (*m_pow)(double, double), (*m_fmod)(double, double), (*m_acos)(double), (*m_log)(double), (*m_exp)(double);
// Bisect support (PC only): functions listed in ck2recomp_native.txt run as the original x86 code.
#ifdef CK_HYBRID
extern const u8 *ck_native_map;
void ck_native_enter(CPU *c, u32 a);
#define NATIVE_HOOK(a) if (ck_native_map && ((ck_native_map[((a) - 0x400000u) >> 3] >> (((a) - 0x400000u) & 7)) & 1)) { ck_native_enter(c, (a)); return; }
#else
#define NATIVE_HOOK(a)
#endif
// setjmp used for the game's own _setjmp3/longjmp
#ifdef CK_MEM_IDENTITY
#define CK_SETJMP(hb) __builtin_setjmp(hb)
#else
#include <setjmp.h>
#define CK_SETJMP(hb) setjmp(*(jmp_buf *)(hb))
#endif
// after a call: did the callee return here? If its ret popped another address the guest left this frame too
// (client patches "call" a cave that jumps back into the caller); follow it by returning. ret_mismatch logs it.
void ret_mismatch(CPU *c, u32 want, u32 site);
#define RETCHK(want, site) do { if (__builtin_expect(c->popped != (want), 0)) { ret_mismatch(c, (want), (site)); return; } } while (0)
// debug: report callees that do not preserve ebx/esi/edi/ebp (build with -DCK_CHECK_ABI)
#ifdef CK_CHECK_ABI
void abi_violation(CPU *c, u32 target, u32 site, u32 ebx, u32 esi, u32 edi, u32 ebp);
void abi_stack(CPU *c, u32 target, u32 site, u32 esp_in);
#define ABI_CHECK(t, s) do { if (c->esp < esp + 4) abi_stack(c, (t), (s), esp); if (c->ebx != ebx || c->esi != esi || c->edi != edi || c->ebp != ebp) abi_violation(c, (t), (s), ebx, esi, edi, ebp); } while (0)
#else
#define ABI_CHECK(t, s)
#endif
#define TRAP(a, why) do { SAVEALL; rt_trap(c, (a), (why)); } while (0)
