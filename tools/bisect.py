"""Find guest functions whose recompiled version breaks the game (PC harness bisect mode).

A function listed in ck2recomp_native.txt runs as the original x86 code together with its whole
call subtree. Finds a minimal set S so that "S native" passes the check (window lit >= LIT%).
usage: python -I bisect.py [--seconds 35] [--lit 30]
"""
import os, re, subprocess, sys, time

HERE = os.path.dirname(os.path.abspath(__file__))
GAME = os.path.normpath(os.path.join(HERE, '..', '..', 'CrazyKart2'))
NATIVE = os.path.join(GAME, 'ck2recomp_native.txt')
LOG = os.path.join(HERE, '..', 'build', 'bisect.log')
args = sys.argv[1:]
SECONDS = int(args[args.index('--seconds') + 1]) if '--seconds' in args else 35
LIT = int(args[args.index('--lit') + 1]) if '--lit' in args else 30

funcs = [int(m, 16) for m in re.findall(r'\{0x([0-9a-f]{8})u, F_', open(os.path.join(HERE, '..', 'out', 'table.c')).read())]
cache = {}


def log(s):
    print(s, flush=True)
    with open(LOG, 'a') as f:
        f.write(time.strftime('%H:%M:%S ') + s + '\n')


def ranges(idx):
    idx = sorted(idx)
    out, k = [], 0
    while k < len(idx):
        j = k
        while j + 1 < len(idx) and idx[j + 1] == idx[j] + 1:
            j += 1
        out.append((funcs[idx[k]], funcs[idx[j]] + 1))
        k = j + 1
    return out


def good(idx):
    key = frozenset(idx)
    if key in cache:
        return cache[key]
    with open(NATIVE, 'w') as f:
        for lo, hi in ranges(idx):
            f.write('%x %x\n' % (lo, hi))
    r = subprocess.run(['powershell', '-NoProfile', '-ExecutionPolicy', 'Bypass', '-File',
                        os.path.join(HERE, 'test_pc.ps1'), '-Seconds', str(SECONDS), '-Kill'],
                       capture_output=True, text=True)
    m = re.search(r'lit=(\d+)%', r.stdout)
    lit = int(m.group(1)) if m else -1
    trap = 'trap' in r.stdout or 'missing' in r.stdout or 'exception' in r.stdout
    ok = lit >= LIT
    cache[key] = ok
    log('%-4s lit=%3d%% native=%d funcs %s%s' % ('GOOD' if ok else 'bad', lit, len(idx),
        ' '.join('%x-%x' % r_ for r_ in ranges(idx)[:6]), ' (trap/exception logged)' if trap else ''))
    return ok


def shrink(S, base):
    """S, base: lists of indices; good(base+S) holds. Return small T within S with good(base+T)."""
    if len(S) <= 1:
        return S
    h = len(S) // 2
    A, B = S[:h], S[h:]
    if good(base + A):
        return shrink(A, base)
    if good(base + B):
        return shrink(B, base)
    TA = shrink(A, base + B)
    TB = shrink(B, base + TA)
    return TA + TB


if __name__ == '__main__':
    log('--- bisect start: %d functions' % len(funcs))
    allidx = list(range(len(funcs)))
    if not good(allidx):
        log('all-native run fails the check; aborting')
        sys.exit(1)
    if good([]):
        log('fully recompiled run already passes')
        sys.exit(0)
    T = shrink(allidx, [])
    log('RESULT: native set needed: ' + ' '.join('%08x' % funcs[i] for i in T))
    os.remove(NATIVE)
