"""Grow the GPU pipeline list shipped in the APK (android/assets/pipelines_seed.bin) from a phone's own cache.

    python -I tools/pipeline_seed.py [pipelines.bin ...]     (no argument: pulled from the connected phone)

Every pipeline the game first needs mid-race costs ~0.65 s on Mali (the power-up stutter); the phone saves each one
it builds to <game>/pipelines.bin (8-byte keys, gpu_wgpu.c) and builds the list at start. A fresh install has none,
so the APK ships the merged keys of real sessions: play lobby, rooms and races with every item, then run this.
"""
import os
import subprocess
import sys

SEED = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "android", "assets", "pipelines_seed.bin")
PHONE = "/sdcard/Android/data/com.crazykart.legacy/files/game/pipelines.bin"


def valid(k):
    """The key decodes to a real pipeline (gpu_wgpu.c pipe_state; an older-format key made wgpu panic, 5 Nov 2026)."""
    k0, k1 = int.from_bytes(k[:4], "little"), int.from_bytes(k[4:], "little")
    return (1 <= (k0 & 7) <= 5 and (k0 >> 4) & 31 <= 17 and (k0 >> 9) & 31 <= 17 and (k0 >> 14) & 7 <= 5 and (k0 >> 17) & 7 <= 3
            and (k1 >> 2) & 15 <= 8 and (k1 >> 7) & 31 <= 17 and (k1 >> 12) & 31 <= 17 and (k1 >> 17) & 7 <= 5)


def keys(b):
    return [k for k in (b[i:i + 8] for i in range(0, len(b) - len(b) % 8, 8)) if valid(k)]


def main():
    srcs = sys.argv[1:]
    blobs = [open(p, "rb").read() for p in srcs] if srcs else [
        subprocess.run([r"C:\platform-tools\adb.exe", "exec-out", f"cat {PHONE}"], capture_output=True, check=True).stdout]
    have = keys(open(SEED, "rb").read()) if os.path.exists(SEED) else []
    seen, before = set(have), len(have)
    for b in blobs:
        for k in keys(b):
            if k not in seen:
                seen.add(k)
                have.append(k)
    os.makedirs(os.path.dirname(SEED), exist_ok=True)
    open(SEED, "wb").write(b"".join(have))
    print(f"pipelines_seed.bin: {before} -> {len(have)} pipelines")


if __name__ == "__main__":
    main()
