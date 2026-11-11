# tools/test_etc2.py <dir with test_etc2.exe> <images...>: encodes with runtime/mobile/etc2.c (tools/test_etc2.c),
# decodes with the independent texture2ddecoder (pip, test only), asserts PSNR >= 30 dB. Last run 11 Nov: 32-40 dB.
import sys, struct, subprocess, numpy as np, texture2ddecoder as td
from PIL import Image
S = sys.argv[1]
def run(name, rgba):
    h, w = rgba.shape[:2]
    open(f'{S}/t.rgba', 'wb').write(struct.pack('<II', w, h) + rgba.astype(np.uint8).tobytes())
    subprocess.check_call([f'{S}/test_etc2.exe', f'{S}/t.rgba', f'{S}/t.etc'])
    blocks = open(f'{S}/t.etc', 'rb').read()
    W, H = (w + 3) // 4 * 4, (h + 3) // 4 * 4
    dec = np.frombuffer(td.decode_etc2a8(blocks, W, H), np.uint8).reshape(H, W, 4)[:h, :w]   # BGRA
    dec = dec[..., [2, 1, 0, 3]].astype(float)
    src = rgba.astype(float)
    mse_c = ((dec[..., :3] - src[..., :3]) ** 2).mean(); mse_a = ((dec[..., 3] - src[..., 3]) ** 2).mean()
    psnr = lambda m: 99 if m == 0 else 10 * np.log10(255 ** 2 / m)
    print(f'{name:22s} {w}x{h}  colour PSNR {psnr(mse_c):5.1f} dB   alpha PSNR {psnr(mse_a):5.1f} dB   max alpha err {np.abs(dec[...,3]-src[...,3]).max():.0f}')
    return psnr(mse_c), psnr(mse_a)
res = []
for f in sys.argv[2:]:
    res.append(run(f.split('/')[-1], np.array(Image.open(f).convert('RGBA'))))
y, x = np.mgrid[0:64, 0:96]
g = np.stack([x * 255 // 95, y * 255 // 63, (x + y) * 255 // 158, np.full_like(x, 255)], -1)
res.append(run('gradient', g))
cut = g.copy(); cut[..., 3] = np.where((x // 8 + y // 8) % 2, 255, 0)
res.append(run('cutout alpha', cut))
flat = np.zeros((16, 16, 4), int); flat[:] = (200, 30, 90, 128)
res.append(run('flat 50% alpha', flat))
assert all(c >= 30 and a >= 30 for c, a in res), 'quality too low'
print('etc2: OK')
