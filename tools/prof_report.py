"""Symbolise the in-game sampling profiler's output (runtime/mobile/main.c prof_poll).

    python -I tools/prof_report.py <profile.bin> <libck2.so> [top N]

profile.bin format 2: u64 magic "PROF2", u64 libck2.so load base, then raw pcs; profile.maps (next to it) is
/proc/self/maps, used for pcs in other libraries (driver, libc, ...). Old format: u64 offsets into libck2.so.
F_xxxxxxxx = recompiled game code at guest address xxxxxxxx.
"""
import bisect
import collections
import os
import struct
import subprocess
import sys

NM = os.path.join(os.environ["LOCALAPPDATA"], "ck2mobile-tools", "ndk", "android-ndk-r27c", "toolchains", "llvm",
                  "prebuilt", "windows-x86_64", "bin", "llvm-nm.exe")
RATE = 250


def load_maps(path):
    maps = []
    if not os.path.exists(path):
        return maps
    for line in open(path, encoding="utf-8", errors="replace"):
        parts = line.split()
        lo, hi = (int(x, 16) for x in parts[0].split("-"))
        maps.append((lo, hi, os.path.basename(parts[5]) if len(parts) > 5 else "[anon]"))
    maps.sort()
    return maps


def main(prof, so, top=40):
    data = open(prof, "rb").read()
    vals = struct.unpack("<%dQ" % (len(data) // 8), data)
    if vals and vals[0] == 0x32464F5250:
        base, pcs = vals[1], vals[2:]
    else:
        base, pcs = 0, vals
    maps = load_maps(os.path.join(os.path.dirname(prof), os.path.basename(prof).replace(".bin", ".maps")))
    starts = [m[0] for m in maps]
    syms = []
    for line in subprocess.run([NM, "-n", "--defined-only", so], capture_output=True, text=True).stdout.splitlines():
        parts = line.split()
        if len(parts) == 3 and parts[1] in "tTwW":
            syms.append((int(parts[0], 16), parts[2]))
    syms.sort()
    addrs = [a for a, _ in syms]
    text_end = addrs[-1] + 0x10000 if addrs else 0
    hits, libs = collections.Counter(), collections.Counter()
    for pc in pcs:
        o = pc - base if base else pc
        if 0 <= o <= text_end:
            i = bisect.bisect_right(addrs, o) - 1
            hits[syms[i][1] if i >= 0 else "?"] += 1
            libs["libck2.so"] += 1
            continue
        j = bisect.bisect_right(starts, pc) - 1
        lib = maps[j][2] if j >= 0 and maps[j][0] <= pc < maps[j][1] else "?"
        libs[lib] += 1
        hits["<" + lib + ">"] += 1
    n = len(pcs)
    print(f"{n} samples ({n / RATE:.1f} s of the game thread at {RATE} Hz)")
    print("by library:", ", ".join(f"{k} {100 * v / n:.1f}%" for k, v in libs.most_common(8)))
    lifted = sum(v for k, v in hits.items() if k.startswith("F_"))
    print(f"recompiled game code: {100 * lifted / max(n, 1):.1f}%")
    for name, v in hits.most_common(top):
        print(f"{100 * v / n:6.2f}%  {v:6d}  {name}")


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2], int(sys.argv[3]) if len(sys.argv) > 3 else 40)
