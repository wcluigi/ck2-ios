#!/usr/bin/env python3
"""Static recompiler: 32-bit x86 PE (the CK2 client) -> C targeting runtime/cpu.h.

usage: python -I lift.py <client.dat> <outdir> [extra_entries.txt]

Guest memory keeps the original layout (image at 0x400000), so every hard-coded address,
vtable and patch cave stays valid. Each guest function becomes `void F_xxxxxxxx(CPU *c)`.
Unknown or unimplemented instructions compile to TRAP() so the build always links;
the runtime reports what is actually hit.
"""
import os, struct, sys, collections
import pefile, capstone
from capstone import x86_const as X

CS = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
CS.detail = True

NORETURN_IMPORTS = {'exit', '_exit', 'abort', '_CxxThrowException', 'ExitProcess', '_amsg_exit', 'longjmp',
                    '__security_error_handler', '?terminate@@YAXXZ', 'ExitThread', '_endthreadex', '_endthread',
                    'RaiseException', 'FatalAppExitA'}
PRIV = {'in', 'out', 'insb', 'insw', 'insd', 'outsb', 'outsw', 'outsd', 'hlt', 'cli', 'sti', 'iretd', 'iret',
        'retf', 'lcall', 'ljmp', 'arpl', 'bound', 'into', 'int1', 'invd', 'clts', 'les', 'lds', 'lss', 'lfs',
        'lgs', 'aaa', 'aas', 'daa', 'das', 'aam', 'aad', 'salc', 'int', 'sldt', 'str', 'lgdt', 'lidt', 'sgdt',
        'sidt', 'wbinvd', 'rdmsr', 'wrmsr', 'icebp', 'ud2', 'ud1', 'ud0', 'sysenter', 'syscall'}
JCC = {X.X86_INS_JO: 'OF_', X.X86_INS_JNO: '!OF_', X.X86_INS_JB: 'CF_', X.X86_INS_JAE: '!CF_',
       X.X86_INS_JE: 'ZF_', X.X86_INS_JNE: '!ZF_', X.X86_INS_JBE: '(CF_|ZF_)', X.X86_INS_JA: '!(CF_|ZF_)',
       X.X86_INS_JS: 'SF_', X.X86_INS_JNS: '!SF_', X.X86_INS_JP: 'PF_', X.X86_INS_JNP: '!PF_',
       X.X86_INS_JL: 'LT_', X.X86_INS_JGE: '!LT_', X.X86_INS_JLE: '(ZF_|LT_)', X.X86_INS_JG: '!(ZF_|LT_)'}
CC_BY_SUFFIX = {'o': 'OF_', 'no': '!OF_', 'b': 'CF_', 'ae': '!CF_', 'e': 'ZF_', 'ne': '!ZF_', 'be': '(CF_|ZF_)',
                'a': '!(CF_|ZF_)', 's': 'SF_', 'ns': '!SF_', 'p': 'PF_', 'np': '!PF_', 'l': 'LT_', 'ge': '!LT_',
                'le': '(ZF_|LT_)', 'g': '!(ZF_|LT_)'}
LOOPS = {X.X86_INS_LOOP, X.X86_INS_LOOPE, X.X86_INS_LOOPNE, X.X86_INS_JECXZ}


class Ins:
    __slots__ = ('a', 'n', 'id', 'mn', 'ops', 'raw', 'txt')


class Image:
    """The exe plus optional DLLs, each mapped at its final guest address.

    mods: [(path, base or None)]; the first is the exe. DLLs are relocated to `base` (the game DLLs
    all want 0x10000000), and their relocation targets give exact code entry points."""

    def __init__(self, mods):
        if isinstance(mods, str):
            mods = [(mods, None)]
        self.secs, self.imports, self.import_rows, self.modules, self.seeds = [], {}, [], [], []
        self.cache = {}
        pes = []
        for k, (path, want) in enumerate(mods):
            pe = pefile.PE(path)
            if want is not None and want != pe.OPTIONAL_HEADER.ImageBase:
                pe.relocate_image(want)
            base = pe.OPTIONAL_HEADER.ImageBase
            entry = base + pe.OPTIONAL_HEADER.AddressOfEntryPoint if pe.OPTIONAL_HEADER.AddressOfEntryPoint else 0
            if k == 0:
                self.base, self.entry = base, entry
            exports = []
            if hasattr(pe, 'DIRECTORY_ENTRY_EXPORT'):
                for s in pe.DIRECTORY_ENTRY_EXPORT.symbols:
                    exports.append((s.name.decode() if s.name else '', s.ordinal, base + s.address))
            self.modules.append({'name': os.path.basename(path), 'base': base, 'size': pe.OPTIONAL_HEADER.SizeOfImage,
                                 'entry': entry, 'exports': exports, 'exe': k == 0})
            # headers too (GetModuleHandle + PE parsing by the game)
            hdr = pe.__data__[:pe.OPTIONAL_HEADER.SizeOfHeaders]
            self.secs.append((base, base + ((len(hdr) + 0xfff) & ~0xfff), bytes(hdr) + b'\0' * (((len(hdr) + 0xfff) & ~0xfff) - len(hdr)), 'HDR', False))
            for s in pe.sections:
                st = base + s.VirtualAddress
                # Windows maps the whole last page; patch caves live in that slack past VirtualSize.
                size = (max(s.Misc_VirtualSize, 1) + 0xfff) & ~0xfff
                d = s.get_data()[:size]
                d += b'\0' * (size - len(d))
                self.secs.append((st, st + size, d, s.Name.rstrip(b'\0').decode(),
                                  bool(s.Characteristics & 0x20000000)))
            if hasattr(pe, 'DIRECTORY_ENTRY_IMPORT'):
                for e in pe.DIRECTORY_ENTRY_IMPORT:
                    for i in e.imports:
                        nm = i.name.decode() if i.name else '#%d' % i.ordinal
                        self.imports[i.address] = i.name.decode() if i.name else '%s#%d' % (e.dll.decode(), i.ordinal)
                        self.import_rows.append((i.address, e.dll.decode(), nm))
            pes.append((pe, base, k))
        for pe, base, k in pes:
            if k == 0:
                continue
            m = self.modules[k]
            if m['entry']:
                self.seeds.append(m['entry'])
            self.seeds += [a for _, _, a in m['exports'] if self.is_code(a)]
            if hasattr(pe, 'DIRECTORY_ENTRY_BASERELOC'):
                for blk in pe.DIRECTORY_ENTRY_BASERELOC:
                    for r in blk.entries:
                        if r.type == 3:
                            v = self.u32(base + r.rva)
                            if v is not None and self.is_code(v):
                                self.seeds.append(v)

    def sec(self, a):
        for s in self.secs:
            if s[0] <= a < s[1]:
                return s
        return None

    def is_code(self, a):
        s = self.sec(a)
        return bool(s and s[4])

    def read(self, a, n):
        s = self.sec(a)
        return s[2][a - s[0]:a - s[0] + n] if s else None

    def u32(self, a):
        b = self.read(a, 4)
        return struct.unpack('<I', b)[0] if b and len(b) == 4 else None

    def decode(self, a):
        if a in self.cache:
            return self.cache[a]
        s = self.sec(a)
        r = None
        if s and s[4]:
            raw = s[2][a - s[0]:a - s[0] + 16]
            ci = next(CS.disasm(raw, a, 1), None)
            if ci is not None:
                r = Ins()
                r.a, r.n, r.id, r.mn, r.raw = ci.address, ci.size, ci.id, ci.mnemonic, bytes(ci.bytes)
                r.txt = (ci.mnemonic + ' ' + ci.op_str).strip()
                ops = []
                for o in ci.operands:
                    if o.type == X.X86_OP_REG:
                        ops.append(('r', ci.reg_name(o.reg), o.size))
                    elif o.type == X.X86_OP_IMM:
                        ops.append(('i', o.imm, o.size))
                    elif o.type == X.X86_OP_MEM:
                        m = o.mem
                        ops.append(('m', ci.reg_name(m.segment) if m.segment else None,
                                    ci.reg_name(m.base) if m.base else None,
                                    ci.reg_name(m.index) if m.index else None, m.scale, m.disp, o.size))
                r.ops = ops
        self.cache[a] = r
        return r


def opbyte(i):
    """First opcode byte after legacy prefixes."""
    for k, b in enumerate(i.raw):
        if b not in (0x66, 0x67, 0xF2, 0xF3, 0xF0, 0x2E, 0x36, 0x3E, 0x26, 0x64, 0x65):
            return k, b
    return None, None


def is_x87(i):
    k, b = opbyte(i)
    if b == 0x9B and k + 1 < len(i.raw) and 0xD8 <= i.raw[k + 1] <= 0xDF:
        return True
    return b is not None and 0xD8 <= b <= 0xDF


class Analyzer:
    def __init__(self, img):
        self.img = img

    def direct_target(self, i):
        if i.ops and i.ops[0][0] == 'i':
            return i.ops[0][1] & 0xffffffff
        return None

    def jump_table(self, i, prev):
        """jmp dword ptr [idx*4 + table] -> list of targets (or None)."""
        if len(i.ops) != 1 or i.ops[0][0] != 'm':
            return None
        _, seg, base, idx, scale, disp, _ = i.ops[0]
        if base or not idx or scale != 4 or seg:
            return None
        table = disp & 0xffffffff
        if not self.img.sec(table):
            return None
        reg, btbl, bound = idx, None, None
        p = prev.get(i.a)
        for _ in range(10):
            if p is None:
                break
            if p.mn == 'movzx' and p.ops[0][0] == 'r' and p.ops[0][1] == reg and p.ops[1][0] == 'm' and p.ops[1][6] == 1 \
                    and p.ops[1][3] is None and p.ops[1][2]:
                btbl, reg = p.ops[1][5] & 0xffffffff, p.ops[1][2]
            elif p.mn == 'cmp' and p.ops[0][0] == 'r' and p.ops[0][1] == reg and p.ops[1][0] == 'i':
                bound = p.ops[1][1] & 0xffffffff
                break
            p = prev.get(p.a)
        if bound is not None and bound < 4096:
            n = bound + 1
            if btbl is not None:
                bs = self.img.read(btbl, n) or b''
                n = (max(bs) + 1) if bs else 0
        else:
            n = 1024
        out = []
        for k in range(n):
            t = self.img.u32(table + 4 * k)
            if t is None or not self.img.is_code(t):
                break
            out.append(t)
        return out or None

    def noreturn_call(self, i):
        o = i.ops[0] if i.ops else None
        if o and o[0] == 'm' and not o[2] and not o[3]:
            return self.img.imports.get(o[5] & 0xffffffff) in NORETURN_IMPORTS
        return False

    def explore(self, entry, entries=None, weak=False):
        """Body of the function at `entry`: dict addr->Ins (None = undecodable -> trap)."""
        img = self.img
        body, prev, calls, tables, tails = {}, {}, set(), {}, set()
        todo = [entry]
        while todo:
            a = todo.pop()
            while a not in body:
                i = img.decode(a)
                body[a] = i
                if i is None:
                    if weak:
                        return None
                    break
                if i.mn in PRIV or i.mn == 'int3':
                    if weak and (i.mn != 'int3' or a == entry):
                        return None
                    break
                if weak and i.raw[:2] == b'\0\0':
                    return None
                nxt = a + i.n
                iid = i.id
                if iid in (X.X86_INS_RET,):
                    break
                if iid == X.X86_INS_JMP:
                    t = self.direct_target(i)
                    if t is not None:
                        if not img.is_code(t):
                            break
                        if entries is not None and t in entries and t != entry:
                            tails.add(t)
                            break
                        prev.setdefault(t, i)
                        a = t
                        continue
                    tb = self.jump_table(i, prev)
                    if tb:
                        tables[a] = tb
                        todo.extend(tb)
                    break
                if iid in JCC or iid in LOOPS:
                    t = self.direct_target(i)
                    if t is not None and img.is_code(t):
                        prev.setdefault(t, i)
                        todo.append(t)
                    prev.setdefault(nxt, i)
                    a = nxt
                    continue
                if iid == X.X86_INS_CALL:
                    t = self.direct_target(i)
                    if t is not None:
                        if t != nxt:
                            if not img.is_code(t):
                                break
                            calls.add(t)
                    elif self.noreturn_call(i):
                        break
                prev.setdefault(nxt, i)
                a = nxt
        return body, calls, tables, tails

    def discover(self, extra):
        img = self.img
        entries = set()
        work = [img.entry] + list(img.seeds) + list(extra)
        known = set()          # instruction starts seen in strong exploration

        def run(work):
            while work:
                e = work.pop()
                if e in entries:
                    continue
                entries.add(e)
                r = self.explore(e)
                body, calls, _, _ = r
                for a, i in body.items():
                    if i is not None:
                        known.add(a)
                for t in calls:
                    if t not in entries:
                        work.append(t)
        run(work)
        # Weak seeds: code addresses stored in data (vtables, callbacks) or used as immediates
        # (e.g. WNDCLASS.lpfnWndProc). Repeat until no new function appears.
        data_cands = set()
        for st, en, d, name, ex in img.secs:
            if ex:
                continue
            for off in range(0, len(d) - 3, 4):
                v = struct.unpack_from('<I', d, off)[0]
                if img.is_code(v):
                    data_cands.add(v)
        scanned, tried, added = set(), set(), 0
        cands = set(data_cands)
        while True:
            for a in list(known - scanned):
                scanned.add(a)
                i = img.decode(a)
                if i.id in (X.X86_INS_CALL, X.X86_INS_JMP) or i.id in JCC:
                    continue
                for o in i.ops:
                    if o[0] == 'i' and o[2] == 4 and img.is_code(o[1] & 0xffffffff):
                        cands.add(o[1] & 0xffffffff)
            new = sorted(cands - tried - entries)
            if not new:
                break
            covered = set()
            for a in known:
                covered.update(range(a + 1, a + img.decode(a).n))
            for v in new:
                tried.add(v)
                if v in entries or (v in covered and v not in known):
                    continue                   # points into the middle of an instruction
                if v not in known and self.explore(v, weak=True) is None:
                    continue
                run([v])
                added += 1
        return entries, added


# ----------------------------------------------------------------------------- codegen
SUBREG = {}
for r32 in ('eax', 'ecx', 'edx', 'ebx'):
    l = r32[1]
    SUBREG[l + 'l'] = (r32, 'l'); SUBREG[l + 'h'] = (r32, 'h'); SUBREG[l + 'x'] = (r32, 'w')
for r32 in ('esp', 'ebp', 'esi', 'edi'):
    SUBREG[r32[1:]] = (r32, 'w')
R32 = {'eax', 'ecx', 'edx', 'ebx', 'esp', 'ebp', 'esi', 'edi'}
MASK = {1: '0xffu', 2: '0xffffu', 4: '0xffffffffu'}
CT = {1: 'u8', 2: 'u16', 4: 'u32'}


class Unsupported(Exception):
    pass


def rreg(n):
    if n in R32:
        return n
    if n in SUBREG:
        r, k = SUBREG[n]
        return {'l': '(%s & 0xffu)' % r, 'h': '((%s >> 8) & 0xffu)' % r, 'w': '(%s & 0xffffu)' % r}[k]
    raise Unsupported('reg ' + n)


def wreg(n, v):
    if n in R32:
        return '%s = (u32)(%s);' % (n, v)
    if n in SUBREG:
        r, k = SUBREG[n]
        if k == 'l':
            return '%s = (%s & 0xffffff00u) | ((u32)(%s) & 0xffu);' % (r, r, v)
        if k == 'h':
            return '%s = (%s & 0xffff00ffu) | (((u32)(%s) & 0xffu) << 8);' % (r, r, v)
        return '%s = (%s & 0xffff0000u) | ((u32)(%s) & 0xffffu);' % (r, r, v)
    raise Unsupported('reg ' + n)


def ea(o):
    _, seg, base, idx, scale, disp, _ = o
    parts = []
    if base:
        if base not in R32:
            raise Unsupported('base ' + base)
        parts.append(base)
    if idx:
        if idx not in R32:
            raise Unsupported('index ' + idx)
        parts.append(idx if scale == 1 else '%s * %du' % (idx, scale))
    if disp or not parts:
        parts.append('0x%xu' % (disp & 0xffffffff))
    if seg == 'fs':
        parts.append('c->fs_base')
    elif seg == 'gs':
        raise Unsupported('gs')
    return '(u32)(' + ' + '.join(parts) + ')'


# Leaf functions too hot for the x87 emulation (profiled on the phone), replaced by C with the same effects:
# guest memory writes in the same order, same registers / FPU stack / flags on return, the ret emulated.
NATIVE_OVERRIDES = {
    0x62D2A0: 'native_rw_matrix_multiply',     # RenderWare _rwcseg: dst = A * B (4x3), 7.8% of a busy room's game thread
    0x5075D0: 'native_gui_find_child',         # GUI control lookup by name (recursive), 16% + 7.5% of the lobby's game thread
}


class Gen:
    def __init__(self, img, entries):
        self.img, self.entries = img, entries
        self.unimpl = collections.Counter()

    # operand access; memory operands use the precomputed address m_
    def rd(self, o):
        if o[0] == 'r':
            return rreg(o[1])
        if o[0] == 'i':
            return '0x%xu' % (o[1] & int(MASK.get(o[2], '0xffffffffu')[:-1], 16))
        sz = o[6]
        return {1: 'M8(m_)', 2: 'M16(m_)', 4: 'M32(m_)'}.get(sz) or self.bad('memsize %d' % sz)

    def wr(self, o, v):
        if o[0] == 'r':
            return wreg(o[1], v)
        sz = o[6]
        t = {1: 'M8(m_)', 2: 'M16(m_)', 4: 'M32(m_)'}[sz]
        return '%s = (%s)(%s);' % (t, CT[sz], v)

    def bad(self, why):
        raise Unsupported(why)

    def mem_prefix(self, i):
        ms = [o for o in i.ops if o[0] == 'm']
        if len(ms) > 1:
            raise Unsupported('2 mem ops')
        return ('const u32 m_ = %s; ' % ea(ms[0])) if ms else ''

    def cave_returns(self, t):
        """Addresses a callee returns to by rewriting its return slot: `mov dword ptr [esp], imm; ret` (client
        patch caves called from the middle of a function; e.g. 0x41d03a -> cave 0x9c4913 -> back at 0x41d048).
        Walks the callee's own code (not into other functions), bounded."""
        cache = self.__dict__.setdefault('_cave_cache', {})
        if t in cache:
            return cache[t]
        seen, todo, out = set(), [t], set()
        while todo and len(seen) < 200:
            a = todo.pop()
            while a not in seen and len(seen) < 200:
                seen.add(a)
                i = self.img.decode(a)
                if i is None:
                    break
                if (i.id == X.X86_INS_MOV and len(i.ops) == 2 and i.ops[0][0] == 'm' and i.ops[0][2] == 'esp'
                        and not i.ops[0][3] and i.ops[0][5] == 0 and i.ops[1][0] == 'i'):
                    out.add(i.ops[1][1] & 0xffffffff)
                if i.id == X.X86_INS_RET:
                    break
                if i.id == X.X86_INS_JMP or i.id in JCC:
                    tt = self.direct_target_safe(i)
                    if tt is not None and tt not in self.entries:
                        todo.append(tt)
                    if i.id == X.X86_INS_JMP:
                        break
                a += i.n
        cache[t] = out
        return out

    def gen_fn(self, entry, an):
        r = an.explore(entry, self.entries)
        body, calls, tables, tails = r
        if entry in NATIVE_OVERRIDES:      # hot leaf function replaced by hand-written C (runtime/mobile/native_rw.c)
            return 'void F_%08x(CPU *c) { %s(c); }' % (entry, NATIVE_OVERRIDES[entry]), set()
        addrs = sorted(body)
        labels = {entry}
        self.call_alts = {}
        for a in addrs:
            i = body[a]
            if i is not None and i.id == X.X86_INS_CALL:
                t = self.direct_target_safe(i)
                alts = sorted(x for x in self.cave_returns(t) if x in body and x != a + i.n) if t is not None else []
                if alts:
                    self.call_alts[a] = alts
                    labels.update(alts)
        succ_fall = {}
        for a in addrs:
            i = body[a]
            if i is None:
                continue
            t = an.direct_target(i) if (i.id == X.X86_INS_JMP or i.id in JCC or i.id in LOOPS) else None
            if t is not None and t in body:
                labels.add(t)
            for t in tables.get(a, ()):
                labels.add(t)
            if self.falls(i):
                succ_fall[a] = a + i.n
        order = addrs
        for k, a in enumerate(order):
            f = succ_fall.get(a)
            if f is not None and (k + 1 >= len(order) or order[k + 1] != f):
                labels.add(f)
        out = ['void F_%08x(CPU *c) {' % entry, '  NATIVE_HOOK(0x%xu) REGS; LOADALL;' % entry]
        if order[0] != entry:
            out.append('  goto L_%08x;' % entry)
        for k, a in enumerate(order):
            i = body[a]
            if a in labels:
                out.append('L_%08x:;' % a)
            if i is None:
                out.append('  TRAP(0x%xu, "undecodable");' % a)
                continue
            try:
                code = self.ins(i, body, tables, labels)
            except Unsupported as e:
                self.unimpl[i.mn] += 1
                code = 'TRAP(0x%xu, "unimpl %s");' % (a, i.txt.replace('"', "'"))
            out.append('  /* %08x %s */ %s' % (a, i.txt.replace('*/', '* /'), code))
            f = succ_fall.get(a)
            if f is not None and (k + 1 >= len(order) or order[k + 1] != f):
                if f in body:
                    out.append('  goto L_%08x;' % f)
                else:
                    out.append('  TRAP(0x%xu, "fell off");' % f)
        out.append('}')
        return '\n'.join(out), calls | tails

    def falls(self, i):
        if i.mn in PRIV or i.mn == 'int3':
            return False
        if i.id in (X.X86_INS_RET, X.X86_INS_JMP):
            return False
        if i.id == X.X86_INS_CALL and self.direct_target_safe(i) is None:
            o = i.ops[0]
            if o[0] == 'm' and not o[2] and not o[3] and self.img.imports.get(o[5] & 0xffffffff) in NORETURN_IMPORTS:
                return False
        return True

    def direct_target_safe(self, i):
        return i.ops[0][1] & 0xffffffff if i.ops and i.ops[0][0] == 'i' else None

    def goto(self, t, body):
        if t in body:
            return 'goto L_%08x;' % t
        if t in self.entries:
            return 'SAVEALL; F_%08x(c); return;' % t
        return 'TRAP(0x%xu, "bad jump target");' % t

    # ------------------------------------------------------------------ instructions
    def ins(self, i, body, tables, labels):
        if is_x87(i):
            return self.x87(i)
        iid, mn, ops = i.id, i.mn, i.ops
        nxt = i.a + i.n
        k, ob = opbyte(i)
        prefixes = i.raw[:k] if k else b''
        if ob in (0xA4, 0xA5, 0xA6, 0xA7, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF):
            return self.string_op(i, ob, prefixes)
        if mn in PRIV or mn == 'int3':
            return 'TRAP(0x%xu, "%s");' % (i.a, mn)
        pre = self.mem_prefix(i) if iid not in (X.X86_INS_LEA,) else ''
        if iid in (X.X86_INS_NOP, X.X86_INS_WAIT, X.X86_INS_FNOP, X.X86_INS_EMMS, X.X86_INS_FEMMS) or mn.startswith('prefetch'):
            return ';'
        lock = 0xF0 in prefixes

        def blk(s):
            return '{ ' + pre + s + ' }'

        if iid == X.X86_INS_MOV:
            if any(o[0] == 'r' and o[1] not in R32 and o[1] not in SUBREG for o in ops):
                self.bad('segreg mov')
            return blk(self.wr(ops[0], self.rd(ops[1])))
        if iid == X.X86_INS_LEA:
            return wreg(ops[0][1], ea(ops[1]).replace(' + c->fs_base', '')) if ops[0][2] == 4 else self.bad('lea16')
        if iid in (X.X86_INS_MOVZX,):
            return blk(self.wr(ops[0], self.rd(ops[1])))
        if iid == X.X86_INS_MOVSX:
            return blk(self.wr(ops[0], '(u32)sxt(%s, %d) & %s' % (self.rd(ops[1]), ops[1][2] if ops[1][0] == 'r' else ops[1][6], MASK[ops[0][2]])))
        if iid in (X.X86_INS_ADD, X.X86_INS_SUB, X.X86_INS_CMP, X.X86_INS_AND, X.X86_INS_OR, X.X86_INS_XOR,
                   X.X86_INS_TEST, X.X86_INS_ADC, X.X86_INS_SBB):
            return blk(self.alu(i, lock))
        if iid in (X.X86_INS_INC, X.X86_INS_DEC):
            d = ops[0]; sz = self.osz(d); M = MASK[sz]
            op = '+' if iid == X.X86_INS_INC else '-'
            fl = 'OP_INC' if iid == X.X86_INS_INC else 'OP_DEC'
            if lock and d[0] == 'm':
                fn = '__atomic_add_fetch' if op == '+' else '__atomic_sub_fetch'
                return blk('u32 r_ = (u32)%s((%s *)HP(m_), 1, __ATOMIC_SEQ_CST) & %s; SETF(%s, 0, 1, r_, %d);' % (fn, CT[sz], M, fl, sz))
            return blk('u32 a_ = %s; u32 r_ = (a_ %s 1u) & %s; %s SETF(%s, a_, 1, r_, %d);' % (self.rd(d), op, M, self.wr(d, 'r_'), fl, sz))
        if iid == X.X86_INS_NEG:
            d = ops[0]; sz = self.osz(d)
            return blk('u32 a_ = %s; u32 r_ = (0u - a_) & %s; %s SETFC(OP_SUB, 0, a_, r_, %d);' % (self.rd(d), MASK[sz], self.wr(d, 'r_'), sz))
        if iid == X.X86_INS_NOT:
            d = ops[0]; sz = self.osz(d)
            return blk(self.wr(d, '~%s & %s' % (self.rd(d), MASK[sz])))
        if iid == X.X86_INS_PUSH:
            o = ops[0]
            if o[0] == 'r' and o[1] not in R32 and o[1] not in SUBREG:
                self.bad('push segreg')
            sz = self.osz(o)
            if sz == 2:
                return blk('u32 v_ = %s; esp -= 2; M16(esp) = (u16)v_;' % self.rd(o))
            v = self.rd(o) if o[0] != 'i' else '0x%xu' % (o[1] & 0xffffffff)
            return blk('u32 v_ = %s; esp -= 4; M32(esp) = v_;' % v)
        if iid == X.X86_INS_POP:
            o = ops[0]
            if o[0] == 'r' and o[1] not in R32 and o[1] not in SUBREG:
                self.bad('pop segreg')
            if o[0] == 'm':   # address uses esp after the increment
                return '{ u32 v_ = M32(esp); esp += 4; const u32 m_ = %s; M32(m_) = v_; }' % ea(o)
            if self.osz(o) == 2:
                return '{ u32 v_ = M16(esp); esp += 2; %s }' % wreg(o[1], 'v_')
            return '{ u32 v_ = M32(esp); esp += 4; %s }' % wreg(o[1], 'v_')
        if iid == X.X86_INS_PUSHAL:
            return '{ u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }'
        if iid == X.X86_INS_POPAL:
            return '{ edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }'
        if iid in (X.X86_INS_PUSHFD, X.X86_INS_PUSHF):
            return '{ u32 e_ = EFLAGS_; esp -= 4; M32(esp) = e_; }'
        if iid in (X.X86_INS_POPFD, X.X86_INS_POPF):
            return '{ u32 e_ = M32(esp); esp += 4; c->df = (e_ >> 10) & 1; SETRAW(e_); }'
        if iid == X.X86_INS_LAHF:
            return '{ u32 e_ = EFLAGS_; eax = (eax & 0xffff00ffu) | ((e_ & 0xd5u) << 8) | 0x200u; }'
        if iid == X.X86_INS_SAHF:
            return '{ u32 e_ = (EFLAGS_ & ~0xd5u) | ((eax >> 8) & 0xd5u); SETRAW(e_); }'
        if iid == X.X86_INS_LEAVE:
            return 'esp = ebp; ebp = M32(esp); esp += 4;'
        if iid == X.X86_INS_ENTER:
            if ops[1][1] != 0:
                self.bad('enter nested')
            return '{ esp -= 4; M32(esp) = ebp; ebp = esp; esp -= 0x%xu; }' % ops[0][1]
        if iid == X.X86_INS_RET:
            n = ops[0][1] if ops else 0
            return 'c->popped = M32(esp); esp += %du; SAVEALL; return;' % (4 + n)
        if iid == X.X86_INS_CALL:
            return self.call(i, nxt)
        if iid == X.X86_INS_JMP:
            t = self.direct_target_safe(i)
            if t is not None:
                return self.goto(t, body)
            o = ops[0]
            tgt = self.rd(o) if o[0] == 'r' else 'M32(m_)'
            if o[0] == 'm' and not o[2] and not o[3]:
                sp = self.special_import(o[5] & 0xffffffff, tail=True)
                if sp:
                    return sp
            if i.a in tables:
                cases = ' '.join('case 0x%xu: goto L_%08x;' % (t, t) for t in sorted(set(tables[i.a])))
                return '{ %su32 t_ = %s; switch (t_) { %s default: SAVEALL; call_ind(c, t_); return; } }' % (pre, tgt, cases)
            return '{ %su32 t_ = %s; SAVEALL; call_ind(c, t_); return; }' % (pre, tgt)
        if iid in JCC:
            return 'if (%s) %s' % (JCC[iid], self.goto(ops[0][1] & 0xffffffff, body))
        if iid == X.X86_INS_JECXZ:
            return 'if (ecx == 0) %s' % self.goto(ops[0][1] & 0xffffffff, body)
        if iid == X.X86_INS_LOOP:
            return 'if (--ecx != 0) %s' % self.goto(ops[0][1] & 0xffffffff, body)
        if iid == X.X86_INS_LOOPE:
            return 'if (--ecx != 0 && ZF_) %s' % self.goto(ops[0][1] & 0xffffffff, body)
        if iid == X.X86_INS_LOOPNE:
            return 'if (--ecx != 0 && !ZF_) %s' % self.goto(ops[0][1] & 0xffffffff, body)
        if mn.startswith('set') and mn[3:] in CC_BY_SUFFIX or mn in ('setc', 'setnc', 'setz', 'setnz', 'setna', 'setnb'):
            return blk(self.wr(ops[0], '(%s) ? 1u : 0u' % self.cc(mn[3:])))
        if mn.startswith('cmov'):
            return blk('if (%s) { %s }' % (self.cc(mn[4:]), self.wr(ops[0], self.rd(ops[1]))))
        if iid == X.X86_INS_XCHG:
            a, b = ops
            if a[0] == 'm' or b[0] == 'm':
                m, r = (a, b) if a[0] == 'm' else (b, a)
                sz = m[6]
                return blk('u32 o_ = (u32)__atomic_exchange_n((%s *)HP(m_), (%s)%s, __ATOMIC_SEQ_CST); %s' % (CT[sz], CT[sz], self.rd(r), self.wr(r, 'o_')))
            return '{ u32 t_ = %s; %s %s }' % (self.rd(a), self.wr(a, self.rd(b)), self.wr(b, 't_'))
        if iid == X.X86_INS_CMPXCHG:
            d, s = ops; sz = self.osz(d); acc = {1: 'al', 2: 'ax', 4: 'eax'}[sz]
            if d[0] == 'm':
                return blk('%s e_ = (%s)%s; %s a_ = e_; int ok_ = __atomic_compare_exchange_n((%s *)HP(m_), &e_, (%s)%s, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST); '
                           'u32 r_ = ((u32)a_ - (u32)e_) & %s; SETFC(OP_SUB, a_, e_, r_, %d); if (!ok_) { %s }'
                           % (CT[sz], CT[sz], rreg(acc), CT[sz], CT[sz], CT[sz], self.rd(s), MASK[sz], sz, wreg(acc, 'e_')))
            return '{ u32 a_ = %s, d_ = %s; u32 r_ = (a_ - d_) & %s; SETFC(OP_SUB, a_, d_, r_, %d); if (a_ == d_) { %s } else { %s } }' % (
                rreg(acc), self.rd(d), MASK[sz], sz, self.wr(d, self.rd(s)), wreg(acc, 'd_'))
        if iid == X.X86_INS_XADD:
            d, s = ops; sz = self.osz(d)
            if d[0] == 'm':
                return blk('u32 b_ = %s; u32 a_ = (u32)__atomic_fetch_add((%s *)HP(m_), (%s)b_, __ATOMIC_SEQ_CST); u32 r_ = (a_ + b_) & %s; SETFC(OP_ADD, a_, b_, r_, %d); %s'
                           % (self.rd(s), CT[sz], CT[sz], MASK[sz], sz, self.wr(s, 'a_')))
            return '{ u32 a_ = %s, b_ = %s; u32 r_ = (a_ + b_) & %s; SETFC(OP_ADD, a_, b_, r_, %d); %s %s }' % (
                self.rd(d), self.rd(s), MASK[sz], sz, self.wr(s, 'a_'), self.wr(d, 'r_'))
        if iid == X.X86_INS_BSWAP:
            return wreg(ops[0][1], '__builtin_bswap32(%s)' % ops[0][1])
        if iid == X.X86_INS_CDQ:
            return 'edx = (u32)((s32)eax >> 31);'
        if iid == X.X86_INS_CWDE:
            return 'eax = (u32)(s32)(s16)eax;'
        if iid == X.X86_INS_CBW:
            return wreg('ax', '(u16)(s16)(s8)eax')
        if iid == X.X86_INS_CWD:
            return wreg('dx', '(eax & 0x8000u) ? 0xffffu : 0u')
        if iid in (X.X86_INS_IMUL, X.X86_INS_MUL):
            return blk(self.mul(i))
        if iid in (X.X86_INS_DIV, X.X86_INS_IDIV):
            return blk(self.div(i))
        if iid in (X.X86_INS_SHL, X.X86_INS_SAL, X.X86_INS_SHR, X.X86_INS_SAR, X.X86_INS_ROL, X.X86_INS_ROR,
                   X.X86_INS_RCL, X.X86_INS_RCR):
            return blk(self.shift(i))
        if iid in (X.X86_INS_SHLD, X.X86_INS_SHRD):
            d, s = ops[0], ops[1]
            if self.osz(d) != 4:
                self.bad('shld16')
            cnt = '%s & 31u' % (self.rd(ops[2]) if len(ops) > 2 else 'ecx')
            if iid == X.X86_INS_SHLD:
                e = 'u32 r_ = (a_ << n_) | (b_ >> (32u - n_)); u32 cf_ = (a_ >> (32u - n_)) & 1u;'
            else:
                e = 'u32 r_ = (a_ >> n_) | (b_ << (32u - n_)); u32 cf_ = (a_ >> (n_ - 1u)) & 1u;'
            return blk('u32 n_ = %s; if (n_) { u32 a_ = %s, b_ = %s; %s %s SETF(OP_RES, ((r_ ^ a_) >> 31) & 1u, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); }'
                       % (cnt, self.rd(d), self.rd(s), e, self.wr(d, 'r_')))
        if iid in (X.X86_INS_BT, X.X86_INS_BTS, X.X86_INS_BTR, X.X86_INS_BTC):
            d, s = ops; sz = self.osz(d)
            if d[0] == 'm' and s[0] == 'r':
                addr = '(m_ + (u32)(((s32)%s >> 5) * 4))' % self.rd(s)
                bit = '(%s & 31u)' % self.rd(s)
                get = 'M32(%s)' % addr
                put = lambda v: 'M32(%s) = %s;' % (addr, v)
            else:
                bit = '(%s & %du)' % (self.rd(s), sz * 8 - 1)
                get = self.rd(d)
                put = lambda v: self.wr(d, v)
            op = {X.X86_INS_BT: None, X.X86_INS_BTS: 'v_ | (1u << b_)', X.X86_INS_BTR: 'v_ & ~(1u << b_)', X.X86_INS_BTC: 'v_ ^ (1u << b_)'}[iid]
            return blk('u32 b_ = %s; u32 v_ = %s; SETC(OP_RAW, (v_ >> b_) & 1u, 0, 0, 4); %s' % (bit, get, put(op) if op else ''))
        if iid in (X.X86_INS_BSF, X.X86_INS_BSR):
            d, s = ops
            f = '__builtin_ctz(v_)' if iid == X.X86_INS_BSF else '(31 - __builtin_clz(v_))'
            return blk('u32 v_ = %s; SETF(OP_LOGIC, 0, 0, v_, 4); if (v_) { %s }' % (self.rd(s), self.wr(d, f)))
        if iid == X.X86_INS_STC:
            return 'SETC(OP_RAW, 1, 0, 0, 4);'
        if iid == X.X86_INS_CLC:
            return 'SETC(OP_RAW, 0, 0, 0, 4);'
        if iid == X.X86_INS_CMC:
            return '{ u32 f_ = CF_; SETC(OP_RAW, f_ ^ 1u, 0, 0, 4); }'
        if iid == X.X86_INS_CLD:
            return 'c->df = 0;'
        if iid == X.X86_INS_STD:
            return 'c->df = 1;'
        if iid == X.X86_INS_CPUID:
            return 'rt_cpuid(&eax, &ebx, &ecx, &edx);'
        if iid == X.X86_INS_RDTSC:
            return '{ u64 t_ = rt_rdtsc(); eax = (u32)t_; edx = (u32)(t_ >> 32); }'
        if iid == X.X86_INS_XLATB:
            return wreg('al', 'M8(ebx + (eax & 0xffu))')
        self.bad(mn)

    def osz(self, o):
        return o[2] if o[0] in ('r', 'i') else o[6]

    def cc(self, s):
        s = {'c': 'b', 'nc': 'ae', 'z': 'e', 'nz': 'ne', 'na': 'be', 'nb': 'ae', 'nae': 'b', 'nbe': 'a',
             'pe': 'p', 'po': 'np', 'nge': 'l', 'nl': 'ge', 'ng': 'le', 'nle': 'g'}.get(s, s)
        if s not in CC_BY_SUFFIX:
            self.bad('cc ' + s)
        return CC_BY_SUFFIX[s]

    def alu(self, i, lock):
        d, s = i.ops
        sz = self.osz(d); M = MASK[sz]
        a, b = self.rd(d), self.rd(s)
        if s[0] == 'i':
            b = '0x%xu' % (s[1] & int(M[:-1], 16))
        iid = i.id
        wb = iid not in (X.X86_INS_CMP, X.X86_INS_TEST)
        if lock and d[0] == 'm' and iid in (X.X86_INS_ADD, X.X86_INS_SUB, X.X86_INS_AND, X.X86_INS_OR, X.X86_INS_XOR):
            fn = {X.X86_INS_ADD: '__atomic_fetch_add', X.X86_INS_SUB: '__atomic_fetch_sub', X.X86_INS_AND: '__atomic_fetch_and',
                  X.X86_INS_OR: '__atomic_fetch_or', X.X86_INS_XOR: '__atomic_fetch_xor'}[iid]
            load = 'u32 b_ = %s; u32 a_ = (u32)%s((%s *)HP(m_), (%s)b_, __ATOMIC_SEQ_CST);' % (b, fn, CT[sz], CT[sz])
            wb = False
        else:
            load = 'u32 a_ = %s, b_ = %s;' % (a, b)
        if iid == X.X86_INS_ADD:
            body = 'u32 r_ = (a_ + b_) & %s; SETFC(OP_ADD, a_, b_, r_, %d);' % (M, sz)
        elif iid in (X.X86_INS_SUB, X.X86_INS_CMP):
            body = 'u32 r_ = (a_ - b_) & %s; SETFC(OP_SUB, a_, b_, r_, %d);' % (M, sz)
        elif iid in (X.X86_INS_AND, X.X86_INS_TEST):
            body = 'u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, %d);' % sz
        elif iid == X.X86_INS_OR:
            body = 'u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, %d);' % sz
        elif iid == X.X86_INS_XOR:
            body = 'u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, %d);' % sz
        elif iid == X.X86_INS_ADC:
            body = ('u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & %s; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); '
                    'u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(%d)) != 0; SETF(OP_RES, of_, 0, r_, %d); SETC(OP_RAW, co_, 0, 0, %d);' % (M, sz, sz, sz))
        elif iid == X.X86_INS_SBB:
            body = ('u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & %s; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); '
                    'u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(%d)) != 0; SETF(OP_RES, of_, 0, r_, %d); SETC(OP_RAW, co_, 0, 0, %d);' % (M, sz, sz, sz))
        return load + ' ' + body + (' ' + self.wr(d, 'r_') if wb else '')

    def mul(self, i):
        ops = i.ops
        signed = i.id == X.X86_INS_IMUL
        if len(ops) == 1:
            s = ops[0]; sz = self.osz(s); v = self.rd(s)
            if sz == 4:
                if signed:
                    return 's64 p_ = (s64)(s32)eax * (s32)%s; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4);' % v
                return 'u64 p_ = (u64)eax * %s; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4);' % v
            if sz == 2:
                if signed:
                    return 's32 p_ = (s32)(s16)eax * (s16)%s; %s %s u32 of_ = p_ != (s32)(s16)p_; SETF(OP_RES, of_, 0, (u32)p_ & 0xffffu, 2); SETC(OP_RAW, of_, 0, 0, 2);' % (v, wreg('ax', 'p_'), wreg('dx', '(u32)p_ >> 16'))
                return 'u32 p_ = (eax & 0xffffu) * %s; %s %s u32 of_ = (p_ >> 16) != 0; SETF(OP_RES, of_, 0, p_ & 0xffffu, 2); SETC(OP_RAW, of_, 0, 0, 2);' % (v, wreg('ax', 'p_'), wreg('dx', 'p_ >> 16'))
            if signed:
                return 's32 p_ = (s32)(s8)eax * (s8)%s; %s u32 of_ = p_ != (s32)(s8)p_; SETF(OP_RES, of_, 0, (u32)p_ & 0xffu, 1); SETC(OP_RAW, of_, 0, 0, 1);' % (v, wreg('ax', 'p_'))
            return 'u32 p_ = (eax & 0xffu) * %s; %s u32 of_ = (p_ >> 8) != 0; SETF(OP_RES, of_, 0, p_ & 0xffu, 1); SETC(OP_RAW, of_, 0, 0, 1);' % (v, wreg('ax', 'p_'))
        d = ops[0]
        a, b = (self.rd(ops[1]), self.rd(ops[2])) if len(ops) == 3 else (self.rd(d), self.rd(ops[1]))
        sz = self.osz(d)
        if len(ops) == 3 and ops[2][0] == 'i':
            b = '0x%xu' % (ops[2][1] & 0xffffffff)
        if sz == 4:
            return 's64 p_ = (s64)(s32)%s * (s64)(s32)%s; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; %s SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4);' % (a, b, self.wr(d, 'r_'))
        return 's32 p_ = (s32)(s16)%s * (s32)(s16)%s; u32 r_ = (u32)p_ & 0xffffu; u32 of_ = p_ != (s32)(s16)p_; %s SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, of_, 0, 0, 2);' % (a, b, self.wr(d, 'r_'))

    def div(self, i):
        s = i.ops[0]; sz = self.osz(s); v = self.rd(s)
        f = 'rt_divs' if i.id == X.X86_INS_IDIV else 'rt_divu'
        if sz == 4:
            return 'u32 q_, r_; SAVEALL; %s(c, edx, eax, %s, &q_, &r_, 0x%xu); eax = q_; edx = r_;' % (f, v, i.a)
        if sz == 2:
            if i.id == X.X86_INS_IDIV:
                return ('s32 n_ = (s32)(((edx & 0xffffu) << 16) | (eax & 0xffffu)); s32 d_ = (s16)%s; if (!d_ || (n_ / d_) != (s16)(n_ / d_)) TRAP(0x%xu, "div"); '
                        '%s %s' % (v, i.a, wreg('ax', '(u32)(n_ / d_)'), wreg('dx', '(u32)(n_ % d_)')))
            return ('u32 n_ = ((edx & 0xffffu) << 16) | (eax & 0xffffu); u32 d_ = %s; if (!d_ || (n_ / d_) > 0xffffu) TRAP(0x%xu, "div"); %s %s'
                    % (v, i.a, wreg('ax', 'n_ / d_'), wreg('dx', 'n_ % d_')))
        if i.id == X.X86_INS_IDIV:
            return ('s32 n_ = (s16)eax; s32 d_ = (s8)%s; if (!d_ || (n_ / d_) != (s8)(n_ / d_)) TRAP(0x%xu, "div"); %s %s'
                    % (v, i.a, wreg('al', '(u32)(n_ / d_)'), wreg('ah', '(u32)(n_ % d_)')))
        return ('u32 n_ = eax & 0xffffu; u32 d_ = %s; if (!d_ || (n_ / d_) > 0xffu) TRAP(0x%xu, "div"); %s %s'
                % (v, i.a, wreg('al', 'n_ / d_'), wreg('ah', 'n_ % d_')))

    def shift(self, i):
        d = i.ops[0]; sz = self.osz(d); bits = sz * 8; M = MASK[sz]
        cnt = self.rd(i.ops[1]) if len(i.ops) > 1 else '1u'
        if len(i.ops) > 1 and i.ops[1][0] == 'i':
            cnt = '%du' % (i.ops[1][1] & 0xff)
        iid = i.id
        head = 'u32 n_ = (%s) & 31u; if (n_) { u32 a_ = %s; ' % (cnt, self.rd(d))
        if iid in (X.X86_INS_SHL, X.X86_INS_SAL):
            core = ('u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & %s; u32 cf_ = n_ <= %du ? (a_ >> (%du - n_)) & 1u : 0u; '
                    'u32 of_ = ((r_ >> %d) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, %d); SETC(OP_RAW, cf_, 0, 0, %d);' % (M, bits, bits, bits - 1, sz, sz))
        elif iid == X.X86_INS_SHR:
            core = ('u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> %d) & 1u; '
                    'SETF(OP_RES, of_, 0, r_, %d); SETC(OP_RAW, cf_, 0, 0, %d);' % (bits - 1, sz, sz))
        elif iid == X.X86_INS_SAR:
            core = ('s32 s_ = sxt(a_, %d); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & %s; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; '
                    'SETF(OP_RES, 0, 0, r_, %d); SETC(OP_RAW, cf_, 0, 0, %d);' % (sz, M, sz, sz))
        elif iid in (X.X86_INS_ROL, X.X86_INS_ROR):
            rol = iid == X.X86_INS_ROL
            core = ('u32 k_ = n_ %% %du; u32 r_ = k_ ? ((%s) & %s) : a_; u32 cf_ = %s; u32 of_ = %s; '
                    'u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_);'
                    % (bits,
                       '(a_ << k_) | (a_ >> (%du - k_))' % bits if rol else '(a_ >> k_) | (a_ << (%du - k_))' % bits, M,
                       'r_ & 1u' if rol else '(r_ >> %d) & 1u' % (bits - 1),
                       '((r_ >> %d) & 1u) ^ (r_ & 1u)' % (bits - 1) if rol else '((r_ >> %d) ^ (r_ >> %d)) & 1u' % (bits - 1, bits - 2)))
        else:  # rcl / rcr
            rcl = iid == X.X86_INS_RCL
            step = ('u32 hi_ = (r_ >> %d) & 1u; r_ = ((r_ << 1) | cf_) & %s; cf_ = hi_;' % (bits - 1, M) if rcl else
                    'u32 lo_ = r_ & 1u; r_ = (r_ >> 1) | (cf_ << %d); cf_ = lo_;' % (bits - 1))
            of = ('((r_ >> %d) ^ cf_) & 1u' % (bits - 1)) if rcl else 'of0_'
            core = ('u32 r_ = a_, cf_ = CF_; u32 of0_ = ((a_ >> %d) ^ cf_) & 1u; for (u32 j_ = n_ %% %du; j_; j_--) { %s } '
                    'u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | ((%s) << 11); SETRAW(e_);' % (bits - 1, bits + 1, step, of))
        return head + core + ' ' + self.wr(d, 'r_') + ' }'

    def string_op(self, i, ob, prefixes):
        w = 2 if 0x66 in prefixes else 4
        sz = 1 if ob in (0xA4, 0xA6, 0xAA, 0xAC, 0xAE) else w
        rep = 0xF3 in prefixes or 0xF2 in prefixes
        repne = 0xF2 in prefixes
        M = {1: 'M8', 2: 'M16', 4: 'M32'}[sz]
        acc = {1: 'al', 2: 'ax', 4: 'eax'}[sz]
        step = 'u32 st_ = c->df ? (u32)-%d : %du;' % (sz, sz)
        kind = {0xA4: 'movs', 0xA5: 'movs', 0xA6: 'cmps', 0xA7: 'cmps', 0xAA: 'stos', 0xAB: 'stos',
                0xAC: 'lods', 0xAD: 'lods', 0xAE: 'scas', 0xAF: 'scas'}[ob]
        if kind == 'movs':
            one = '%s(edi) = %s(esi); esi += st_; edi += st_;' % (M, M)
        elif kind == 'stos':
            one = '%s(edi) = (%s)%s; edi += st_;' % (M, CT[sz], rreg(acc))
        elif kind == 'lods':
            one = '%s esi += st_;' % wreg(acc, '%s(esi)' % M)
        elif kind == 'cmps':
            one = 'u32 a_ = %s(esi), b_ = %s(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & %s, %d);' % (M, M, MASK[sz], sz)
        else:
            one = 'u32 a_ = %s, b_ = %s(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & %s, %d);' % (rreg(acc), M, MASK[sz], sz)
        if not rep:
            return '{ %s %s }' % (step, one)
        if kind in ('cmps', 'scas'):
            stop = 'if (ZF_) break;' if repne else 'if (!ZF_) break;'
            return '{ %s while (ecx) { %s ecx--; %s } }' % (step, one, stop)
        if kind == 'stos' and sz == 4:
            return '{ %s if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { %s ecx--; } }' % (step, one)
        return '{ %s while (ecx) { %s ecx--; } }' % (step, one)

    # ------------------------------------------------------------------ calls
    def call(self, i, nxt):
        t = self.direct_target_safe(i)
        push = 'esp -= 4; M32(esp) = 0x%xu;' % nxt
        if t is not None:
            if t == nxt:
                return push   # call $+5 ; pop reg  (get EIP)
            # call to an import stub (`jmp [IAT]`): handle like `call [IAT]` so setjmp/_ftol/... stay inline
            ti = self.img.decode(t)
            if ti is not None and ti.id == X.X86_INS_JMP and ti.ops and ti.ops[0][0] == 'm' and not ti.ops[0][2] and not ti.ops[0][3]:
                sp = self.special_import(ti.ops[0][5] & 0xffffffff, tail=False)
                if sp:
                    return sp
            # A callee can leave through another frame's ret: client patches "call" a cave that reuses its return
            # slot as an argument and jumps back into the caller, whose ret then leaves both. Follow the guest.
            if t in self.entries:
                # a cave that returns elsewhere in this function (cave_returns): continue there
                alt = ''.join('if (c->popped == 0x%xu) { LOADALL; goto L_%08x; } ' % (x, x) for x in self.call_alts.get(i.a, ()))
                return '%s SAVEALL; F_%08x(c); ABI_CHECK(0x%xu, 0x%xu); %sRETCHK(0x%xu, 0x%xu); LOADALL;' % (push, t, t, i.a, alt, nxt, i.a)
            return 'TRAP(0x%xu, "call to non-function");' % i.a
        o = i.ops[0]
        if o[0] == 'm' and not o[2] and not o[3]:
            sp = self.special_import(o[5] & 0xffffffff, tail=False)
            if sp:
                return sp
        if o[0] == 'r':
            tgt = self.rd(o)
            return '{ u32 t_ = %s; %s SAVEALL; call_ind(c, t_); RETCHK(0x%xu, 0x%xu); LOADALL; }' % (tgt, push, nxt, i.a)
        return '{ const u32 m_ = %s; u32 t_ = M32(m_); %s SAVEALL; call_ind(c, t_); RETCHK(0x%xu, 0x%xu); LOADALL; }' % (ea(o), push, nxt, i.a)

    def special_import(self, slot, tail):
        name = self.img.imports.get(slot)
        ret = ' c->popped = M32(esp); esp += 4; SAVEALL; return;' if tail else ''
        if name == '_ftol' or name == '_ftol2':
            return '{ s64 v_ = rt_f2i(c, ST(0), 64, 1); FPOP(); eax = (u32)v_; edx = (u32)((u64)v_ >> 32);%s }' % ret
        if name == '_CIpow':
            return '{ double y_ = ST(0); FPOP(); ST(0) = m_pow(ST(0), y_);%s }' % ret
        if name == '_CIfmod':
            return '{ double y_ = ST(0); FPOP(); ST(0) = m_fmod(ST(0), y_);%s }' % ret
        if name in ('_CIacos', '_CIsin', '_CIcos', '_CItan', '_CIlog', '_CIexp', '_CIsqrt'):
            f = {'_CIacos': 'm_acos', '_CIsin': 'm_sin', '_CIcos': 'm_cos', '_CItan': 'm_tan', '_CIlog': 'm_log',
                 '_CIexp': 'm_exp', '_CIsqrt': '__builtin_sqrt'}[name]
            return '{ ST(0) = %s(ST(0));%s }' % (f, ret)
        if name == '_setjmp3' and not tail:
            return ('{ void *hb_; rt_setjmp(c, M32(esp), ebx, esi, edi, ebp, esp, &hb_); '
                    'if (CK_SETJMP(hb_)) { LOADALL; eax = c->lj_val; } else eax = 0; }')
        if name == 'longjmp':
            return '{ SAVEALL; rt_longjmp(c, M32(esp + %d), M32(esp + %d)); }' % ((4, 8) if tail else (0, 4))
        if name == '_CxxThrowException':
            return '{ SAVEALL; rt_throw(c, 0x%xu); }' % slot
        return None

    # ------------------------------------------------------------------ x87
    def x87(self, i):
        raw = i.raw
        k, ob = opbyte(i)
        if ob == 0x9B:
            k += 1; ob = raw[k]
        modrm = raw[k + 1]
        mod, reg, rm = modrm >> 6, (modrm >> 3) & 7, modrm & 7
        a = i.a
        if mod != 3:
            m = [o for o in i.ops if o[0] == 'm']
            if not m:
                self.bad('x87 mem?')
            pre = 'const u32 m_ = %s; ' % ea(m[0])
            return '{ ' + pre + self.x87_mem(ob, reg, a) + ' }'
        return self.x87_reg(ob, reg, rm, a)

    ARITH = {0: '+', 1: '*', 4: '-', 5: 'r-', 6: '/', 7: 'r/'}

    def x87_arith(self, op, dst, src):
        if op in ('+', '*', '-', '/'):
            return '%s = FR(%s %s %s);' % (dst, dst, op, src)
        return '%s = FR(%s %s %s);' % (dst, src, op[1], dst)

    def x87_mem(self, ob, reg, a):
        if ob in (0xD8, 0xDC, 0xDA, 0xDE):
            v = {0xD8: '(double)MF32(m_)', 0xDC: 'MF64(m_)', 0xDA: '(double)(s32)M32(m_)', 0xDE: '(double)(s16)M16(m_)'}[ob]
            if reg in (2, 3):
                return 'c->fsw = fcom_sw(c->fsw, ST(0), %s);%s' % (v, ' FPOP();' if reg == 3 else '')
            return self.x87_arith(self.ARITH[reg], 'ST(0)', v)
        if ob == 0xD9:
            return {0: 'FPUSH((double)MF32(m_));', 2: 'MF32(m_) = (float)ST(0);', 3: 'MF32(m_) = (float)ST(0); FPOP();',
                    5: 'c->fcw = M16(m_); rt_fldcw(c);', 7: 'M16(m_) = (u16)c->fcw;'}.get(reg) or self.bad('d9 mem %d' % reg)
        if ob == 0xDB:
            return {0: 'FPUSH((double)(s32)M32(m_));', 1: 'M32(m_) = (u32)rt_f2i(c, ST(0), 32, 1); FPOP();',
                    2: 'M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0);', 3: 'M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP();',
                    5: 'FPUSH(rt_ld80(m_));', 7: 'rt_st80(m_, ST(0)); FPOP();'}.get(reg) or self.bad('db mem %d' % reg)
        if ob == 0xDD:
            return {0: 'FPUSH(MF64(m_));', 1: 'M64(m_) = (u64)rt_f2i(c, ST(0), 64, 1); FPOP();', 2: 'MF64(m_) = ST(0);',
                    3: 'MF64(m_) = ST(0); FPOP();', 7: 'M16(m_) = (u16)FSW_;'}.get(reg) or self.bad('dd mem %d' % reg)
        if ob == 0xDF:
            return {0: 'FPUSH((double)(s16)M16(m_));', 1: 'M16(m_) = (u16)rt_f2i(c, ST(0), 16, 1); FPOP();',
                    2: 'M16(m_) = (u16)rt_f2i(c, ST(0), 16, 0);', 3: 'M16(m_) = (u16)rt_f2i(c, ST(0), 16, 0); FPOP();',
                    5: 'FPUSH((double)(s64)M64(m_));', 7: 'M64(m_) = (u64)rt_f2i(c, ST(0), 64, 0); FPOP();'}.get(reg) or self.bad('df mem %d' % reg)
        self.bad('x87 mem')

    def x87_reg(self, ob, reg, rm, a):
        si = 'ST(%d)' % rm
        if ob == 0xD8:
            if reg in (2, 3):
                return 'c->fsw = fcom_sw(c->fsw, ST(0), %s);%s' % (si, ' FPOP();' if reg == 3 else '')
            return self.x87_arith({0: '+', 1: '*', 4: '-', 5: 'r-', 6: '/', 7: 'r/'}[reg], 'ST(0)', si)
        if ob in (0xDC, 0xDE):
            pop = ' FPOP();' if ob == 0xDE else ''
            if ob == 0xDE and reg == 3 and rm == 1:
                return 'c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();'
            if reg in (2, 3):
                return 'c->fsw = fcom_sw(c->fsw, ST(0), %s);%s' % (si, ' FPOP();' if reg == 3 else '')
            # DC/DE: dest is ST(i); E0 = st(i)=st0-st(i), E8 = st(i)-st0, F0 = st0/st(i), F8 = st(i)/st0
            op = {0: '+', 1: '*', 4: 'r-', 5: '-', 6: 'r/', 7: '/'}[reg]
            return '{ double s0_ = ST(0); %s%s }' % (self.x87_arith(op, si, 's0_'), pop)
        if ob == 0xD9:
            if reg == 0:
                return '{ double v_ = %s; FPUSH(v_); }' % si
            if reg == 1:
                return '{ double t_ = ST(0); ST(0) = %s; %s = t_; }' % (si, si)
            if reg == 2 and rm == 0:
                return ';'
            op = 0xE0 + ((reg - 4) << 3) + rm if reg >= 4 else None
            m = {0xE0: 'ST(0) = -ST(0);', 0xE1: 'ST(0) = __builtin_fabs(ST(0));',
                 0xE4: 'c->fsw = fcom_sw(c->fsw, ST(0), 0.0);',
                 0xE5: '{ double v_ = ST(0); u32 s_ = c->fsw & ~0x4700u; if (v_ < 0 || (v_ == 0 && __builtin_signbit(v_))) s_ |= 0x200; '
                       'if (v_ != v_) s_ |= 0x100; else if (v_ == 0) s_ |= 0x4000; else if (__builtin_isinf(v_)) s_ |= 0x500; else s_ |= 0x400; c->fsw = s_; }',
                 0xE8: 'FPUSH(1.0);', 0xE9: 'FPUSH(3.321928094887362347870319429489390175864831393);',
                 0xEA: 'FPUSH(1.442695040888963407359924681001892137426645954);', 0xEB: 'FPUSH(3.141592653589793238462643383279502884197169399);',
                 0xEC: 'FPUSH(0.301029995663981195213738894724493026768189881);', 0xED: 'FPUSH(0.693147180559945309417232121458176568075500134);',
                 0xEE: 'FPUSH(0.0);',
                 0xF0: 'ST(0) = m_pow(2.0, ST(0)) - 1.0;',
                 0xF1: '{ double x_ = ST(0); FPOP(); ST(0) = FR(ST(0) * (m_log(x_) * 1.442695040888963407359924681001892137426645954)); }',
                 0xF2: 'ST(0) = m_tan(ST(0)); FPUSH(1.0); c->fsw &= ~0x400u;',
                 0xF3: '{ double x_ = ST(0); FPOP(); ST(0) = m_atan2(ST(0), x_); }',
                 0xF5: 'ST(0) = ST(0) - __builtin_round(ST(0) / ST(1)) * ST(1); c->fsw &= ~0x400u;',
                 0xF6: 'c->ftop = (c->ftop - 1) & 7;', 0xF7: 'c->ftop = (c->ftop + 1) & 7;',
                 0xF8: '{ double q_ = __builtin_trunc(ST(0) / ST(1)); u32 qi_ = (u32)(s64)(q_ < 0 ? -q_ : q_); ST(0) = m_fmod(ST(0), ST(1)); c->fsw = (c->fsw & ~0x4700u) | ((qi_ & 1) << 9) | ((qi_ & 2) << 13) | ((qi_ & 4) << 6); }',
                 0xFA: 'ST(0) = FR(__builtin_sqrt(ST(0)));',
                 0xFB: '{ double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }',
                 0xFC: 'ST(0) = rt_frndint(c, ST(0));',
                 0xFD: 'ST(0) = ST(0) * m_pow(2.0, __builtin_trunc(ST(1)));',
                 0xFE: 'ST(0) = m_sin(ST(0)); c->fsw &= ~0x400u;', 0xFF: 'ST(0) = m_cos(ST(0)); c->fsw &= ~0x400u;'}
            if op in m:
                return m[op]
            self.bad('d9 %02x' % (op or 0))
        if ob == 0xDA:
            if reg == 5 and rm == 1:
                return 'c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();'
            cc = {0: 'CF_', 1: 'ZF_', 2: '(CF_|ZF_)', 3: 'PF_'}.get(reg)
            if cc:
                return 'if (%s) ST(0) = %s;' % (cc, si)
        if ob == 0xDB:
            cc = {0: '!CF_', 1: '!ZF_', 2: '!(CF_|ZF_)', 3: '!PF_'}.get(reg)
            if cc:
                return 'if (%s) ST(0) = %s;' % (cc, si)
            if reg == 4 and rm == 2:
                return 'c->fsw &= 0x7f00u;'
            if reg == 4 and rm == 3:
                return 'c->fcw = 0x37f; rt_fldcw(c); c->fsw = 0; c->ftop = 0;'
            if reg in (5, 6):
                return '{ u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), %s); SETRAW(e_); }' % si
        if ob == 0xDD:
            if reg == 0:
                return ';'
            if reg == 2:
                return '%s = ST(0);' % si
            if reg == 3:
                return '%s = ST(0); FPOP();' % si
            if reg in (4, 5):
                return 'c->fsw = fcom_sw(c->fsw, ST(0), %s);%s' % (si, ' FPOP();' if reg == 5 else '')
        if ob == 0xDF:
            if reg == 4 and rm == 0:
                return 'eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);'
            if reg in (5, 6):
                return '{ u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), %s); SETRAW(e_); FPOP(); }' % si
        self.bad('x87 reg %02x /%d' % (ob, reg))


def write_image(img, outdir):
    """Data the runtime loader needs: section bytes at final addresses, import slots, modules."""
    with open(os.path.join(outdir, 'image.bin'), 'wb') as f:
        f.write(b'CKIMG1\0\0' + struct.pack('<I', len(img.secs)))
        for st, en, d, name, ex in img.secs:
            d = d.rstrip(b'\0')
            f.write(struct.pack('<II', st, len(d)) + d)
    with open(os.path.join(outdir, 'imports.txt'), 'w') as f:
        for slot, dll, name in img.import_rows:
            f.write('%08x %s %s\n' % (slot, dll, name))
    with open(os.path.join(outdir, 'modules.txt'), 'w') as f:
        for m in img.modules:
            f.write('module %s %08x %08x %08x %d\n' % (m['name'], m['base'], m['size'], m['entry'], m['exe']))
            for name, ordinal, a in m['exports']:
                f.write('export %d %08x %s\n' % (ordinal, a, name or '-'))


def main():
    args = sys.argv[1:]
    dlls = []
    while '--dll' in args:            # --dll path@0xBASE
        k = args.index('--dll')
        p, b = args[k + 1].rsplit('@', 1)
        dlls.append((p, int(b, 16)))
        del args[k:k + 2]
    exe, outdir = args[0], args[1]
    extra = []
    if len(args) > 2 and os.path.exists(args[2]):
        extra = [int(l.split()[0], 16) for l in open(args[2]) if l.strip() and not l.startswith('#')]
    img = Image([(exe, None)] + dlls)
    os.makedirs(outdir, exist_ok=True)
    write_image(img, outdir)
    an = Analyzer(img)
    entries, weak = an.discover(extra)
    print('functions: %d (%d from data/immediates)' % (len(entries), weak), flush=True)
    gen = Gen(img, entries)
    os.makedirs(outdir, exist_ok=True)
    ents = sorted(entries)
    with open(os.path.join(outdir, 'funcs.h'), 'w') as f:
        f.write('#pragma once\n#define CK_LIFTED 1\n#include "cpu.h"\n')     # CK_LIFTED: guest memory base in a local (cpu.h)
        for e in ents:
            f.write('void F_%08x(CPU *c);\n' % e)
        for name in sorted(set(NATIVE_OVERRIDES.values())):
            f.write('void %s(CPU *c);\n' % name)
    per = 150
    nfiles = 0
    total_lines = 0
    for k in range(0, len(ents), per):
        chunk = ents[k:k + per]
        parts = ['#include "funcs.h"\n']
        for e in chunk:
            code, _ = gen.gen_fn(e, an)
            total_lines += code.count('\n')
            parts.append(code + '\n')
        with open(os.path.join(outdir, 'f%04d.c' % nfiles), 'w') as f:
            f.write('\n'.join(parts))
        nfiles += 1
    with open(os.path.join(outdir, 'table.c'), 'w') as f:
        f.write('#include "funcs.h"\nconst FnEnt ck_fn_table[] = {\n')
        for e in ents:
            f.write('  {0x%08xu, F_%08x},\n' % (e, e))
        f.write('};\nconst u32 ck_fn_count = %d;\nconst u32 ck_entry = 0x%08xu;\n' % (len(ents), img.entry))
        codes = [(s[0], s[1]) for s in img.secs if s[4]]
        f.write('const u32 ck_code_ranges[][2] = {%s};\nconst u32 ck_code_range_count = %d;\n' % (
            ', '.join('{0x%xu, 0x%xu}' % r for r in codes), len(codes)))
    print('files: %d, lines: %d' % (nfiles, total_lines))
    print('unimplemented (static sites): ' + ', '.join('%s:%d' % kv for kv in gen.unimpl.most_common(60)))


if __name__ == '__main__':
    main()
