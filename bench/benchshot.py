"""Run the desktop bench for a few seconds, PrintWindow its own window (never the screen), then close it.

    benchshot.py <out.png> <seconds> ["game args"] [--keep]      --keep: leave it running (prints the pid)
"""
import ctypes
import ctypes.wintypes as wt
import subprocess
import sys
import time

from PIL import Image

ROOT = r"C:\Users\Luigi\Desktop\ckindo\ck2mobile"
u32, g32 = ctypes.windll.user32, ctypes.windll.gdi32
TITLE = "Crazy Kart (Android runtime test bench)"


def shot(out):
    hwnd = u32.FindWindowW(None, TITLE)
    if not hwnd:
        return False
    r = wt.RECT()
    u32.GetClientRect(hwnd, ctypes.byref(r))
    w, h = r.right - r.left, r.bottom - r.top
    hdc = u32.GetDC(hwnd)
    mdc = g32.CreateCompatibleDC(hdc)
    bmp = g32.CreateCompatibleBitmap(hdc, w, h)
    g32.SelectObject(mdc, bmp)
    u32.PrintWindow(hwnd, mdc, 3)                    # PW_CLIENTONLY | PW_RENDERFULLCONTENT
    buf = ctypes.create_string_buffer(w * h * 4)
    bi = (ctypes.c_uint32 * 10)(40, w, (-h) & 0xffffffff, 1 | (32 << 16), 0, 0, 0, 0, 0, 0)
    g32.GetDIBits(mdc, bmp, 0, h, buf, ctypes.byref(bi), 0)
    Image.frombuffer("RGBA", (w, h), buf, "raw", "BGRA", 0, 1).convert("RGB").save(out)
    g32.DeleteObject(bmp); g32.DeleteDC(mdc); u32.ReleaseDC(hwnd, hdc)
    return True


if __name__ == "__main__":
    OUT = sys.argv[1]
    WAIT = float(sys.argv[2]) if len(sys.argv) > 2 else 20
    ARGS = [a for a in sys.argv[3:] if not a.startswith("--")][:1]
    p = subprocess.Popen([ROOT + r"\build\bench\ck2bench.exe", "bench_data", "out_m"] + ARGS, cwd=ROOT,
                         stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        time.sleep(WAIT)
        print("saved" if shot(OUT) else f"no window; exit code {p.poll()}")
    finally:
        if "--keep" in sys.argv:
            print("pid", p.pid)
        else:
            p.kill()
