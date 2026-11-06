"""Differential test of lift.py x87 semantics: native FPU (53-bit precision, CW 0x27F) vs generated C.
Stack starts with 3 random values; memory operand is [ebx] (16-byte scratch). Compares TOP, the live
stack, C0-C3, ax and the scratch memory.  usage: python -I semtest_fpu.py
"""
import os, struct, subprocess, sys
HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.normpath(os.path.join(HERE, '..'))
sys.path.insert(0, os.path.join(ROOT, 'recomp'))
import lift  # noqa: E402

LLVM = r'C:\Program Files\LLVM\bin'
OUT = os.path.join(ROOT, 'build', 'semtest')
os.makedirs(OUT, exist_ok=True)

# (asm, memory kind, value range kind)   mem kinds: f32 f64 f80 i16 i32 i64 none ; range: any pos unit small
T = []
for op in ('fadd', 'fsub', 'fsubr', 'fmul', 'fdiv', 'fdivr'):
    T += [(op + ' dword ptr [ebx]', 'f32', 'any'), (op + ' qword ptr [ebx]', 'f64', 'any'),
          (op + ' st(0), st(2)', 'none', 'any'), (op + ' st(2), st(0)', 'none', 'any'), (op + 'p st(1), st(0)', 'none', 'any'),
          (op + 'p st(2), st(0)', 'none', 'any')]
for op in ('fiadd', 'fisub', 'fisubr', 'fimul', 'fidiv', 'fidivr'):
    T += [(op + ' dword ptr [ebx]', 'i32', 'any'), (op + ' word ptr [ebx]', 'i16', 'any')]
T += [('fld dword ptr [ebx]', 'f32', 'any'), ('fld qword ptr [ebx]', 'f64', 'any'), ('fld tbyte ptr [ebx]', 'f80', 'any'),
      ('fld st(2)', 'none', 'any'), ('fild word ptr [ebx]', 'i16', 'any'), ('fild dword ptr [ebx]', 'i32', 'any'),
      ('fild qword ptr [ebx]', 'i64', 'any'), ('fst dword ptr [ebx]', 'none', 'any'), ('fstp dword ptr [ebx]', 'none', 'any'),
      ('fst qword ptr [ebx]', 'none', 'any'), ('fstp qword ptr [ebx]', 'none', 'any'), ('fstp tbyte ptr [ebx]', 'none', 'any'),
      ('fst st(2)', 'none', 'any'), ('fstp st(1)', 'none', 'any'), ('fist word ptr [ebx]', 'none', 'small'),
      ('fist dword ptr [ebx]', 'none', 'any'), ('fistp dword ptr [ebx]', 'none', 'any'), ('fistp qword ptr [ebx]', 'none', 'any'),
      ('fistp word ptr [ebx]', 'none', 'small'), ('fxch st(2)', 'none', 'any'), ('fchs', 'none', 'any'), ('fabs', 'none', 'any'),
      ('fsqrt', 'none', 'pos'), ('fsin', 'none', 'any'), ('fcos', 'none', 'any'), ('fptan', 'none', 'small'),
      ('fpatan', 'none', 'any'), ('fyl2x', 'none', 'pos'), ('f2xm1', 'none', 'unit'), ('fscale', 'none', 'small'),
      ('frndint', 'none', 'any'), ('fprem', 'none', 'any'), ('fsincos', 'none', 'any'), ('ftst', 'none', 'any'),
      ('fxam', 'none', 'any'), ('fld1', 'none', 'any'), ('fldz', 'none', 'any'), ('fldpi', 'none', 'any'),
      ('fldl2e', 'none', 'any'), ('fldln2', 'none', 'any'),
      ('fcom dword ptr [ebx]', 'f32', 'any'), ('fcomp qword ptr [ebx]', 'f64', 'any'), ('fcom st(1)', 'none', 'any'),
      ('fcomp st(2)', 'none', 'any'), ('fcompp', 'none', 'any'), ('fucom st(1)', 'none', 'any'), ('fucomp st(1)', 'none', 'any'),
      ('fucompp', 'none', 'any'), ('ficom dword ptr [ebx]', 'i32', 'any'), ('ficomp word ptr [ebx]', 'i16', 'small'),
      ('fcomi st(0), st(1)', 'none', 'any'), ('fucomip st(0), st(1)', 'none', 'any'),
      ('fnstsw ax', 'none', 'any'), ('fnstcw word ptr [ebx]', 'none', 'any'),
      ('fcom dword ptr [ebx]\nfnstsw ax\ntest ah, 0x41', 'f32', 'any'), ('fcomp st(1)\nfnstsw ax\nsahf', 'none', 'any')]

MEMK = {'none': 0, 'f32': 1, 'f64': 2, 'f80': 3, 'i16': 4, 'i32': 5, 'i64': 6}
RNGK = {'any': 0, 'pos': 1, 'unit': 2, 'small': 3}


def assemble_all(texts):
    src, obj = os.path.join(OUT, 'fpu.s'), os.path.join(OUT, 'fpu.o')
    open(src, 'w').write('.intel_syntax noprefix\n.text\n' + '\n'.join(texts) + '\n')
    subprocess.run([os.path.join(LLVM, 'clang.exe'), '--target=i686-pc-windows-msvc', '-c', src, '-o', obj], check=True)
    d = open(obj, 'rb').read()
    nsec, opt = struct.unpack_from('<H', d, 2)[0], struct.unpack_from('<H', d, 16)[0]
    for k in range(nsec):
        h = 20 + opt + 40 * k
        if d[h:h + 8].rstrip(b'\0') == b'.text':
            size, ptr = struct.unpack_from('<II', d, h + 16)
            return d[ptr:ptr + size]


class Img:
    imports = {}

    def is_code(self, a):
        return False


def to_ins(ci, raw):
    i = lift.Ins()
    i.a, i.n, i.id, i.mn, i.raw, i.txt = ci.address, ci.size, ci.id, ci.mnemonic, raw, ci.mnemonic
    i.ops = []
    for o in ci.operands:
        if o.type == lift.X.X86_OP_REG:
            i.ops.append(('r', ci.reg_name(o.reg), o.size))
        elif o.type == lift.X.X86_OP_IMM:
            i.ops.append(('i', o.imm, o.size))
        else:
            m = o.mem
            i.ops.append(('m', ci.reg_name(m.segment) if m.segment else None, ci.reg_name(m.base) if m.base else None,
                          ci.reg_name(m.index) if m.index else None, m.scale, m.disp, o.size))
    return i


gen = lift.Gen(Img(), set())
# assemble each test separately delimited: each test's lines go into one blob, split by decoding count
blobs = []
for t, _, _ in T:
    blobs.append(t.split('\n'))
flat = [l for b in blobs for l in b]
code = assemble_all(flat)
off = 0
fns, rows = [], []
for k, (t, mk, rk) in enumerate(T):
    raw_all, parts = b'', []
    for _ in blobs[k]:
        ci = next(lift.CS.disasm(code[off:off + 16], 0x1000 + len(raw_all), 1))
        raw = bytes(ci.bytes)
        parts.append(gen.ins(to_ins(ci, raw), {}, {}, set()))
        raw_all += raw
        off += ci.size
    fns.append('static void t%d(CPU *c) { REGS; LOADALL; %s SAVEALL; }' % (k, ' '.join(parts)))
    rows.append('{ t%d, "%s", {%s}, %d, %d, %d }' % (k, t.replace('\n', '; '), ', '.join('0x%02x' % b for b in raw_all), len(raw_all), MEMK[mk], RNGK[rk]))
assert off == len(code)

C = r'''
#define CK_MEM_IDENTITY
#include "cpu.h"
#define WINAPI __stdcall
__declspec(dllimport) void *WINAPI VirtualAlloc(void *, u32, u32, u32);
__declspec(dllimport) void *WINAPI GetStdHandle(u32);
__declspec(dllimport) int WINAPI WriteFile(void *, const void *, u32, u32 *, void *);
__declspec(dllimport) void WINAPI ExitProcess(u32);
__declspec(dllimport) void *WINAPI LoadLibraryA(const char *);
__declspec(dllimport) void *WINAPI GetProcAddress(void *, const char *);
__declspec(dllimport) int __cdecl wsprintfA(char *, const char *, ...);
int _fltused;
void *memset(void *d, int v, size_t n) { u8 *p = d; while (n--) *p++ = (u8)v; return d; }
void *memcpy(void *d, const void *s, size_t n) { u8 *p = d; const u8 *q = s; while (n--) *p++ = *q++; return d; }
void call_ind(CPU *c, u32 t) {}
void rt_trap(CPU *c, u32 a, const char *w) {}
void rt_cpuid(u32 *a, u32 *b, u32 *cc, u32 *d) {}
u64 rt_rdtsc(void) { return 0; }
void rt_divu(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr) {}
void rt_divs(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr) {}
void rt_throw(CPU *c, u32 a) {}
u32 rt_setjmp(CPU *c, u32 b, u32 x, u32 y, u32 z, u32 w, u32 e, void **h) { return 0; }
void rt_longjmp(CPU *c, u32 b, u32 v) {}
void rt_fldcw(CPU *c) {}
double (*m_sin)(double), (*m_cos)(double), (*m_tan)(double), (*m_atan2)(double, double), (*m_pow)(double, double),
    (*m_fmod)(double, double), (*m_acos)(double), (*m_log)(double), (*m_exp)(double);
#include "fpu_rt.inc"

u8 g_mem[32]; u32 g_code, g_saveesp, g_oeax, g_ieax; double g_v[3]; u16 g_cw = 0x27f; u8 g_save[108];
__attribute__((naked)) void run_native(void) {
    __asm__("pushal\n fninit\n fldcw _g_cw\n fldl _g_v+16\n fldl _g_v+8\n fldl _g_v\n"
            "movl $_g_mem, %ebx\n movl _g_ieax, %eax\n calll *_g_code\n movl %eax, _g_oeax\n fnsave _g_save\n fninit\n popal\n ret\n");
}
typedef struct { void (*fn)(CPU *); const char *txt; u8 code[48]; int len; int mem, rng; } T;
''' + '\n'.join(fns) + '\nstatic const T tests[] = {\n' + ',\n'.join(rows) + r'''
};
static u32 rng = 777;
static u32 rndu(void) { rng ^= rng << 13; rng ^= rng >> 17; rng ^= rng << 5; return rng; }
static double frand(int kind) {
    double u = (double)(rndu() & 0xffffff) / 16777216.0;            // [0,1)
    switch (kind) {
    case 1: return u * 1000.0 + 1e-3;
    case 2: return u * 2.0 - 1.0;
    case 3: return (double)(s32)(rndu() % 40) - 20.0 + ((rndu() & 1) ? u : 0);
    default: {
        static const double sp[] = {0.0, 1.0, -1.0, 0.5, -2.5, 3.0, 1e10, -1e-10, 123456.789, 2.5, 3.5, -0.5};
        if ((rndu() & 3) == 0) return sp[rndu() % 12];
        double v = (u - 0.5) * 2000.0;
        if (rndu() & 1) v *= 1e-3;
        return v;
    }
    }
}
static double ld80(const u8 *p) { return rt_ld80((u32)p); }
static int same(double a, double b, int approx) {
    if (a != a && b != b) return 1;
    if (a == b) return 1;
    if (!approx) return 0;
    double d = a - b; if (d < 0) d = -d;
    double m = a < 0 ? -a : a; if (m < 1) m = 1;
    return d <= m * 1e-12;
}
static void out(const char *s) { u32 n = 0, w; while (s[n]) n++; WriteFile(GetStdHandle((u32)-11), s, n, &w, 0); }
static void fmt(char *b, double v) {   // %f-free: print as hex bits
    u64 x; memcpy(&x, &v, 8); wsprintfA(b, "%08x%08x", (u32)(x >> 32), (u32)x);
}
void mainCRTStartup(void) {
    void *crt = LoadLibraryA("msvcrt.dll");
    m_sin = GetProcAddress(crt, "sin"); m_cos = GetProcAddress(crt, "cos"); m_tan = GetProcAddress(crt, "tan");
    m_atan2 = GetProcAddress(crt, "atan2"); m_pow = GetProcAddress(crt, "pow"); m_fmod = GetProcAddress(crt, "fmod");
    m_acos = GetProcAddress(crt, "acos"); m_log = GetProcAddress(crt, "log"); m_exp = GetProcAddress(crt, "exp");
    u8 *buf = VirtualAlloc(0, 4096, 0x3000, 0x40);
    int fails = 0, runs = 0;
    char b[600], h1[20], h2[20];
    for (int k = 0; k < (int)(sizeof tests / sizeof tests[0]); k++) {
        const T *t = &tests[k];
        for (int j = 0; j < t->len; j++) buf[j] = t->code[j];
        buf[t->len] = 0xc3;
        g_code = (u32)buf;
        int tf = 0;
        int approx = t->txt[1] == 's' && (t->txt[2] == 'i' || t->txt[2] == 'q') || t->txt[1] == 'c' && t->txt[2] == 'o' && t->txt[3] == 's' ||
                     t->txt[1] == 'p' || t->txt[1] == 'y' || t->txt[1] == '2' || (t->txt[1] == 's' && t->txt[2] == 'c');
        for (int it = 0; it < 3000 && tf < 3; it++) {
            for (int j = 0; j < 3; j++) g_v[j] = frand(t->rng);
            u8 mem0[32];
            for (int j = 0; j < 32; j++) g_mem[j] = (u8)rndu();
            double mv = frand(t->rng);
            switch (t->mem) {
            case 1: { float f = (float)mv; memcpy(g_mem, &f, 4); break; }
            case 2: memcpy(g_mem, &mv, 8); break;
            case 3: rt_st80((u32)g_mem, mv); break;
            case 4: { s16 v = (s16)(s32)(mv * 10); memcpy(g_mem, &v, 2); break; }
            case 5: { s32 v = (s32)(mv * 1000); memcpy(g_mem, &v, 4); break; }
            case 6: { s64 v = (s64)(s32)(mv * 100000) * 1000; memcpy(g_mem, &v, 8); break; }
            }
            memcpy(mem0, g_mem, 32);
            g_ieax = rndu();
            run_native();
            u8 nmem[32]; memcpy(nmem, g_mem, 32);
            memcpy(g_mem, mem0, 32);
            CPU cc = {0}, *c = &cc;
            c->fcw = 0x27f; c->ftop = 5; c->st[5] = g_v[0]; c->st[6] = g_v[1]; c->st[7] = g_v[2];
            c->ebx = (u32)g_mem; c->eax = g_ieax; c->fop = c->cop = OP_LOGIC; c->fsz = c->csz = 4;
            t->fn(c);
            u16 nsw = *(u16 *)(g_save + 4), ntag = *(u16 *)(g_save + 8);
            u32 ntop = (nsw >> 11) & 7;
            int bad = ntop != (c->ftop & 7) || ((nsw ^ c->fsw) & 0x4500) || g_oeax != c->eax;
            for (int j = 0; j < 8 && !bad; j++) {
                u32 phys = (ntop + j) & 7;
                if (((ntag >> (2 * phys)) & 3) == 3) continue;
                if (!same(ld80(g_save + 28 + 10 * j), c->st[(c->ftop + j) & 7], approx)) bad = 2 + j;
            }
            for (int j = 0; j < 16 && !bad; j++) if (nmem[j] != g_mem[j]) bad = 20;
            runs++;
            if (bad) {
                tf++; fails++;
                fmt(h1, ld80(g_save + 28)); fmt(h2, c->st[c->ftop & 7]);
                wsprintfA(b, "FAIL %-34s why=%d top n%d/c%d sw n%04x/c%04x ax n%08x/c%08x st0 n%s c%s mem n%08x%08x c%08x%08x\r\n",
                          t->txt, bad, ntop, c->ftop & 7, nsw & 0x4700, c->fsw & 0x4700, g_oeax, c->eax, h1, h2,
                          *(u32 *)(nmem + 4), *(u32 *)nmem, *(u32 *)(g_mem + 4), *(u32 *)g_mem);
                out(b);
            }
        }
    }
    wsprintfA(b, "%d runs, %d failures, %d forms\r\n", runs, fails, (int)(sizeof tests / sizeof tests[0]));
    out(b);
    ExitProcess(fails != 0);
}
'''
# runtime helpers shared with the PC harness (f2i, rounding, 80-bit conversions) copied from host.c
host = open(os.path.join(ROOT, 'runtime', 'pc', 'host.c')).read()
a = host.index('static double rnd(const CPU *c, double x, int rc)')
b = host.index('void rt_fldcw(CPU *c)')
open(os.path.join(OUT, 'fpu_rt.inc'), 'w').write(host[a:b])
open(os.path.join(OUT, 'semtest_fpu.c'), 'w').write(C)
open(os.path.join(OUT, 'k32f.def'), 'w').write('LIBRARY kernel32.dll\nEXPORTS\nVirtualAlloc@16\nGetStdHandle@4\nWriteFile@20\nExitProcess@4\nLoadLibraryA@4\nGetProcAddress@8\n')
subprocess.run([os.path.join(LLVM, 'llvm-dlltool.exe'), '-m', 'i386', '-k', '-d', os.path.join(OUT, 'k32f.def'), '-l', os.path.join(OUT, 'k32f.lib')], check=True)
cc = [os.path.join(LLVM, 'clang.exe'), '--target=i686-pc-windows-msvc', '-O1', '-ffreestanding', '-nostdlib', '-msse4.1', '-mfpmath=sse',
      '-mno-stack-arg-probe', '-fno-strict-aliasing', '-fno-math-errno', '-fwrapv', '-w', '-I' + os.path.join(ROOT, 'runtime'), '-I' + OUT,
      '-fuse-ld=lld', os.path.join(OUT, 'semtest_fpu.c'), os.path.join(OUT, 'k32f.lib'), os.path.join(ROOT, 'build', 'pc', 'user32.lib'),
      '-Wl,-subsystem:console,-safeseh:no', '-o', os.path.join(OUT, 'semtest_fpu.exe')]
subprocess.run(cc, check=True)
r = subprocess.run([os.path.join(OUT, 'semtest_fpu.exe')], capture_output=True, text=True)
print(r.stdout[-8000:])
