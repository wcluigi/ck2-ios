"""Drive the desktop bench with window messages to its own window only, and capture it (PrintWindow).

    benchdrive.py "<game args>" step step ...
steps: wait:S   click:X,Y   type:TEXT   key:VK   shot:FILE.png      (X,Y in the window's 1280x720 client pixels)
The bench stays running at the end only with the step "keep".
"""
import ctypes
import subprocess
import sys
import time

sys.path.insert(0, r"C:\Users\Luigi\AppData\Local\Temp\claude\e63cfb3a8ccb05f4\3808b33b-c6bd-41fc-8141-415fe975b9b4\scratchpad")
from benchshot import ROOT, TITLE, shot   # noqa: E402

u32 = ctypes.windll.user32
WM_MOUSEMOVE, WM_LBUTTONDOWN, WM_LBUTTONUP, WM_CHAR, WM_KEYDOWN, WM_KEYUP = 0x200, 0x201, 0x202, 0x102, 0x100, 0x101


def hwnd():
    return u32.FindWindowW(None, TITLE)


def lp(x, y):
    return (y << 16) | (x & 0xFFFF)


def main():
    args, steps = sys.argv[1], sys.argv[2:]
    import os
    p = subprocess.Popen([os.environ.get("BENCH_EXE", ROOT + r"\build\bench\ck2bench.exe"), "bench_data", "out_m"] + ([args] if args else []), cwd=ROOT,
                         stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    keep = False
    try:
        run(steps)
        if steps and steps[-1].startswith("serve:"):
            cmd = steps[-1].partition(":")[2]                 # more steps from a file, until "quit"
            while p.poll() is None:
                time.sleep(0.5)
                try:
                    todo = open(cmd).read().split()
                except OSError:
                    continue
                if not todo:
                    continue
                open(cmd, "w").close()
                if todo == ["quit"]:
                    break
                run(todo)
                open(cmd + ".done", "w").write(" ".join(todo))
    finally:
        if keep:
            print("pid", p.pid)
        else:
            p.kill()


def run(steps):
        for st in steps:
            kind, _, val = st.partition(":")
            if kind == "wait":
                time.sleep(float(val))
            elif kind == "click":
                x, y = (int(v) for v in val.split(","))
                h = hwnd()
                u32.PostMessageW(h, WM_MOUSEMOVE, 0, lp(x, y)); time.sleep(0.15)
                u32.PostMessageW(h, WM_LBUTTONDOWN, 1, lp(x, y)); time.sleep(0.12)
                u32.PostMessageW(h, WM_LBUTTONUP, 0, lp(x, y)); time.sleep(0.4)
            elif kind == "type":
                for ch in val:
                    u32.PostMessageW(hwnd(), WM_CHAR, ord(ch), 0); time.sleep(0.06)
            elif kind == "key":
                vk = int(val, 0)
                u32.PostMessageW(hwnd(), WM_KEYDOWN, vk, 0); time.sleep(0.08)
                u32.PostMessageW(hwnd(), WM_KEYUP, vk, 0); time.sleep(0.3)
            elif kind == "shot":
                print(val, "saved" if shot(val) else "no window")
            elif kind == "key":
                pass


if __name__ == "__main__":
    main()
