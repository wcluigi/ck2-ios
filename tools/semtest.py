"""Differential test of lift.py instruction semantics: each instruction runs natively (x86) and as
generated C with random registers/flags; results and defined flags must match.

usage: python -I semtest.py      (writes build/semtest/, builds semtest.exe with LLVM, runs it)
"""
import os, random, re, struct, subprocess, sys
HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.normpath(os.path.join(HERE, '..'))
sys.path.insert(0, os.path.join(ROOT, 'recomp'))
import lift  # noqa: E402

LLVM = r'C:\Program Files\LLVM\bin'
OUT = os.path.join(ROOT, 'build', 'semtest')
os.makedirs(OUT, exist_ok=True)

R32 = ['eax', 'ecx', 'edx', 'ebx', 'esi', 'edi']
R16 = ['ax', 'cx', 'dx', 'bx', 'si', 'di']
R8 = ['al', 'cl', 'dl', 'bl', 'ah', 'ch', 'dh', 'bh']
CCS = ['o', 'no', 'b', 'ae', 'e', 'ne', 'be', 'a', 's', 'ns', 'p', 'np', 'l', 'ge', 'le', 'g']
CF, PF, ZF, SF, OF = 1, 4, 0x40, 0x80, 0x800
ALL = CF | PF | ZF | SF | OF

tests = []   # (asm text, defined-flags mask, input constraint)


def add(t, mask=ALL, kind=None):
    tests.append((t, mask, kind))


for op in ('add', 'adc', 'sub', 'sbb', 'and', 'or', 'xor', 'cmp', 'test'):
    add('%s eax, ecx' % op); add('%s cx, dx' % op); add('%s al, ah' % op); add('%s bl, dh' % op)
    add('%s edx, 0x7f' % op); add('%s esi, -3' % op); add('%s al, 0x80' % op)
for op in ('inc', 'dec', 'neg', 'not'):
    add('%s eax' % op); add('%s dx' % op); add('%s bh' % op)
for op in ('shl', 'shr', 'sar', 'rol', 'ror', 'rcl', 'rcr'):
    for dst in ('eax', 'dx', 'bl'):
        add('%s %s, 1' % (op, dst), kind='shift1')
        add('%s %s, 5' % (op, dst), kind='shiftn')
        add('%s %s, cl' % (op, dst), kind='shiftcl')
add('shld eax, edx, 1', kind='shift1'); add('shld eax, edx, 7', kind='shiftn'); add('shld eax, edx, cl', kind='shiftcl')
add('shrd eax, edx, 1', kind='shift1'); add('shrd eax, edx, 7', kind='shiftn'); add('shrd eax, edx, cl', kind='shiftcl')
for t in ('imul eax, ecx', 'imul dx, bx', 'imul eax, ecx, 1000', 'imul esi, edi, -7', 'mul ecx', 'imul ecx', 'mul bx', 'imul bx', 'mul bl', 'imul bl'):
    add(t, CF | OF)
add('div ecx', 0, 'div'); add('idiv ecx', 0, 'idiv'); add('div bx', 0, 'div16'); add('div bl', 0, 'div8')
for op in ('bt', 'bts', 'btr', 'btc'):
    add('%s eax, ecx' % op, CF | ZF); add('%s edx, 13' % op, CF | ZF)
add('bsf eax, ecx', ZF, 'bsf'); add('bsr eax, ecx', ZF, 'bsf')
for cc in CCS:
    add('set%s al' % cc); add('cmov%s eax, ecx' % cc)
for t in ('cdq', 'cwde', 'cbw', 'cwd', 'xchg eax, edx', 'xchg al, bh', 'movzx eax, cl', 'movzx eax, cx', 'movsx eax, cl',
          'movsx edx, bx', 'lea eax, [ecx + edx*4 + 12]', 'bswap esi', 'xadd eax, ecx', 'cmpxchg ecx, edx',
          'lahf', 'sahf', 'stc', 'clc', 'cmc', 'mov ah, 0x5a', 'mov bx, si'):
    add(t)


def assemble_all(texts):
    """Assemble all instructions in one clang -c run; split by decoding in order."""
    src = os.path.join(OUT, 'insns.s')
    obj = os.path.join(OUT, 'insns.o')
    open(src, 'w').write('.intel_syntax noprefix\n.text\n' + '\n'.join(texts) + '\n')
    subprocess.run([os.path.join(LLVM, 'clang.exe'), '--target=i686-pc-windows-msvc', '-c', src, '-o', obj], check=True)
    d = open(obj, 'rb').read()
    nsec = struct.unpack_from('<H', d, 2)[0]
    opt = struct.unpack_from('<H', d, 16)[0]
    code = b''
    for k in range(nsec):
        h = 20 + opt + 40 * k
        if d[h:h + 8].rstrip(b'\0') == b'.text':
            size, ptr = struct.unpack_from('<II', d, h + 16)
            code = d[ptr:ptr + size]
    out, off = [], 0
    for t in texts:
        ci = next(lift.CS.disasm(code[off:off + 16], 0x1000, 1))
        out.append(bytes(ci.bytes))
        off += ci.size
    assert off == len(code), (off, len(code))
    return out


class Img:      # just enough for Gen
    imports = {}

    def is_code(self, a):
        return False


gen = lift.Gen(Img(), set())
fns, table = [], []
encodings = assemble_all([t[0] for t in tests])
for k, (text, mask, kind) in enumerate(tests):
    raw = encodings[k]
    ci = next(lift.CS.disasm(raw, 0x1000, 1))
    i = lift.Ins()
    i.a, i.n, i.id, i.mn, i.raw, i.txt = 0x1000, ci.size, ci.id, ci.mnemonic, raw, text
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
    code = gen.ins(i, {}, {}, set())
    fns.append('static void t%d(CPU *c) { REGS; LOADALL; %s SAVEALL; }' % (k, code))
    table.append('{ t%d, "%s", {%s}, %d, 0x%x, %d }' % (k, text, ', '.join('0x%02x' % b for b in raw), len(raw), mask,
                 {None: 0, 'shift1': 1, 'shiftn': 2, 'shiftcl': 3, 'div': 4, 'idiv': 5, 'div16': 6, 'div8': 7, 'bsf': 8}[kind]))

C = r'''
#define CK_MEM_IDENTITY
#include "cpu.h"
#define WINAPI __stdcall
__declspec(dllimport) void *WINAPI VirtualAlloc(void *, u32, u32, u32);
__declspec(dllimport) void *WINAPI GetStdHandle(u32);
__declspec(dllimport) int WINAPI WriteFile(void *, const void *, u32, u32 *, void *);
__declspec(dllimport) void WINAPI ExitProcess(u32);
__declspec(dllimport) int __cdecl wsprintfA(char *, const char *, ...);
int _fltused;
void *memset(void *d, int v, size_t n) { u8 *p = d; while (n--) *p++ = (u8)v; return d; }
void *memcpy(void *d, const void *s, size_t n) { u8 *p = d; const u8 *q = s; while (n--) *p++ = *q++; return d; }
void call_ind(CPU *c, u32 t) {}
void rt_trap(CPU *c, u32 a, const char *w) {}
void rt_cpuid(u32 *a, u32 *b, u32 *cc, u32 *d) {}
u64 rt_rdtsc(void) { return 0; }
void rt_divu(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr) { __asm__("divl %4" : "=a"(*q), "=d"(*r) : "a"(lo), "d"(hi), "rm"(d)); }
void rt_divs(CPU *c, u32 hi, u32 lo, u32 d, u32 *q, u32 *r, u32 addr) { __asm__("idivl %4" : "=a"(*q), "=d"(*r) : "a"(lo), "d"(hi), "rm"(d)); }
s64 rt_f2i(const CPU *c, double x, int bits, int t) { return 0; }
double rt_frndint(const CPU *c, double x) { return x; }
double rt_ld80(u32 a) { return 0; }
void rt_st80(u32 a, double v) {}
void rt_fldcw(CPU *c) {}
void rt_throw(CPU *c, u32 a) {}
u32 rt_setjmp(CPU *c, u32 b, u32 x, u32 y, u32 z, u32 w, u32 e, void **h) { return 0; }
void rt_longjmp(CPU *c, u32 b, u32 v) {}
double (*m_sin)(double), (*m_cos)(double), (*m_tan)(double), (*m_atan2)(double, double), (*m_pow)(double, double),
    (*m_fmod)(double, double), (*m_acos)(double), (*m_log)(double), (*m_exp)(double);

typedef struct { u32 eax, ecx, edx, ebx, esi, edi, ebp, efl; } St;
St g_in, g_out; u32 g_code, g_saveesp;
__attribute__((naked)) void run_native(void) {
    __asm__("pushal\n movl %esp, _g_saveesp\n pushl _g_in+28\n popfl\n"
            "movl _g_in, %eax\n movl _g_in+4, %ecx\n movl _g_in+8, %edx\n movl _g_in+12, %ebx\n"
            "movl _g_in+16, %esi\n movl _g_in+20, %edi\n movl _g_in+24, %ebp\n calll *_g_code\n"
            "movl %eax, _g_out\n movl %ecx, _g_out+4\n movl %edx, _g_out+8\n movl %ebx, _g_out+12\n"
            "movl %esi, _g_out+16\n movl %edi, _g_out+20\n movl %ebp, _g_out+24\n pushfl\n popl _g_out+28\n"
            "movl _g_saveesp, %esp\n popal\n ret\n");
}
typedef struct { void (*fn)(CPU *); const char *txt; u8 code[16]; int len; u32 mask; int kind; } T;
''' + '\n'.join(fns) + '\nstatic const T tests[] = {\n' + ',\n'.join(table) + r'''
};
static u32 rng = 12345;
static u32 rnd(void) { rng ^= rng << 13; rng ^= rng >> 17; rng ^= rng << 5; return rng; }
static u32 pick(void) {
    static const u32 sp[] = {0, 1, 0x7f, 0x80, 0xff, 0x7fff, 0x8000, 0xffff, 0x7fffffff, 0x80000000u, 0xffffffffu, 2, 31, 32};
    u32 r = rnd();
    return (r & 3) == 0 ? sp[rnd() % 14] : rnd();
}
static void out(const char *s) { u32 n = 0, w; while (s[n]) n++; WriteFile(GetStdHandle((u32)-11), s, n, &w, 0); }
void mainCRTStartup(void) {
    u8 *buf = VirtualAlloc(0, 4096, 0x3000, 0x40);
    int fails = 0, runs = 0;
    char b[400];
    for (int k = 0; k < (int)(sizeof tests / sizeof tests[0]); k++) {
        const T *t = &tests[k];
        for (int j = 0; j < t->len; j++) buf[j] = t->code[j];
        buf[t->len] = 0xc3;
        g_code = (u32)buf;
        int tf = 0;
        for (int it = 0; it < 4000 && tf < 3; it++) {
            St in = { pick(), pick(), pick(), pick(), pick(), pick(), 0x1234, 0x202 | (rnd() & 0x8d5) };
            if (t->kind == 3) in.ecx = (in.ecx & ~0xffu) | (rnd() % 40);
            if (t->kind == 4) { if (!in.ecx) in.ecx = 7; in.edx %= in.ecx; }
            if (t->kind == 5) { if (!in.ecx) in.ecx = 7; in.edx = (s32)in.eax < 0 ? 0xffffffffu : 0; if (in.ecx == 0xffffffffu) in.ecx = 3; }
            if (t->kind == 6) { if (!(in.ebx & 0xffff)) in.ebx |= 9; in.edx = (in.edx & ~0xffffu) | ((in.edx & 0xffff) % (in.ebx & 0xffff)); }
            if (t->kind == 7) { if (!(in.ebx & 0xff)) in.ebx |= 9; in.eax = (in.eax & ~0xffffu) | ((in.eax & 0xffff) % ((in.ebx & 0xff) << 8)); }
            g_in = in;
            run_native();
            CPU cc = {0}, *c = &cc;
            c->eax = in.eax; c->ecx = in.ecx; c->edx = in.edx; c->ebx = in.ebx; c->esi = in.esi; c->edi = in.edi; c->ebp = in.ebp;
            c->fop = c->cop = OP_RAW; c->fa = c->ca = in.efl; c->fsz = c->csz = 4;
            t->fn(c);
            u32 fop = c->fop, fa = c->fa, fb = c->fb, fr = c->fr, fsz = c->fsz, cop = c->cop, ca = c->ca, cb = c->cb, cr = c->cr, csz = c->csz;
            u32 efl = CF_ | (PF_ << 2) | (ZF_ << 6) | (SF_ << 7) | (OF_ << 11);
            u32 mask = t->mask;
            u32 cnt = t->kind == 2 ? 5 : t->kind == 3 ? (in.ecx & 31) : 1;
            if (t->kind == 2 || (t->kind == 3 && cnt != 1)) mask &= ~(u32)0x800;
            if (t->kind == 3 && cnt == 0) mask = 0x8d5 & ~0x10u;
            if (t->kind == 8 && !in.ecx) { c->eax = g_out.eax; }   // bsf/bsr dest undefined for 0
            if (t->txt[0] == 's' && t->txt[1] == 'h' && t->txt[3] == 'd' && cnt > 31) mask = 0;
            int bad = c->eax != g_out.eax || c->ecx != g_out.ecx || c->edx != g_out.edx || c->ebx != g_out.ebx ||
                      c->esi != g_out.esi || c->edi != g_out.edi || ((efl ^ g_out.efl) & mask);
            if (t->kind >= 1 && t->kind <= 3) {
                // narrow shifts/rotates by more than the width: CF/OF undefined
                int w = 32;
                for (const char *p = t->txt; *p; p++) if (p[0] == ',' ) break; else if (p[0] == 'd' && p[1] == 'x') w = 16; else if (p[0] == 'b' && p[1] == 'l') w = 8;
                if ((int)cnt > w) bad = c->eax != g_out.eax || c->edx != g_out.edx || c->ebx != g_out.ebx || ((efl ^ g_out.efl) & mask & ~(u32)0x801);
            }
            runs++;
            if (bad) {
                tf++; fails++;
                wsprintfA(b, "FAIL %-26s in eax=%08x ecx=%08x edx=%08x ebx=%08x efl=%03x | native eax=%08x ecx=%08x edx=%08x ebx=%08x efl=%03x | C eax=%08x ecx=%08x edx=%08x ebx=%08x efl=%03x mask=%03x\r\n",
                          t->txt, in.eax, in.ecx, in.edx, in.ebx, in.efl & 0x8d5, g_out.eax, g_out.ecx, g_out.edx, g_out.ebx, g_out.efl & 0x8d5,
                          c->eax, c->ecx, c->edx, c->ebx, efl, mask);
                out(b);
            }
        }
    }
    wsprintfA(b, "%d runs, %d failures, %d instruction forms\r\n", runs, fails, (int)(sizeof tests / sizeof tests[0]));
    out(b);
    ExitProcess(fails != 0);
}
'''
open(os.path.join(OUT, 'semtest.c'), 'w').write(C)
lib = os.path.join(ROOT, 'build', 'pc')
subprocess.run([os.path.join(LLVM, 'llvm-dlltool.exe'), '-m', 'i386', '-k', '-d', os.path.join(OUT, 'k32.def'), '-l', os.path.join(OUT, 'k32.lib')],
               check=False) if False else None
open(os.path.join(OUT, 'k32.def'), 'w').write('LIBRARY kernel32.dll\nEXPORTS\nVirtualAlloc@16\nGetStdHandle@4\nWriteFile@20\nExitProcess@4\n')
subprocess.run([os.path.join(LLVM, 'llvm-dlltool.exe'), '-m', 'i386', '-k', '-d', os.path.join(OUT, 'k32.def'), '-l', os.path.join(OUT, 'k32.lib')], check=True)
cc = [os.path.join(LLVM, 'clang.exe'), '--target=i686-pc-windows-msvc', '-O1', '-ffreestanding', '-nostdlib', '-msse4.1', '-mfpmath=sse',
      '-mno-stack-arg-probe', '-fno-strict-aliasing', '-fno-math-errno', '-fwrapv', '-w', '-I' + os.path.join(ROOT, 'runtime'),
      '-fuse-ld=lld', os.path.join(OUT, 'semtest.c'), os.path.join(OUT, 'k32.lib'), os.path.join(lib, 'user32.lib'),
      '-Wl,-subsystem:console,-safeseh:no', '-o', os.path.join(OUT, 'semtest.exe')]
subprocess.run(cc, check=True)
r = subprocess.run([os.path.join(OUT, 'semtest.exe')], capture_output=True, text=True)
print(r.stdout[-6000:])
