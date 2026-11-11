// test driver for runtime/mobile/etc2.c: test_etc2 in.rgba out.etc  (in: u32 w, u32 h, then w*h RGBA bytes)
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t u8; typedef uint32_t u32;
void etc2_encode_rgba(const u32 *rgba, int w, int h, u8 *out);
void etc2_encode_quick(const u32 *rgba, int w, int h, u8 *out);
int main(int argc, char **argv) {
    if (argc < 3) return 2;
    FILE *f = fopen(argv[1], "rb"); u32 wh[2];
    if (!f || fread(wh, 4, 2, f) != 2) return 1;
    u32 *px = malloc((size_t)wh[0] * wh[1] * 4);
    if (fread(px, 4, (size_t)wh[0] * wh[1], f) != (size_t)wh[0] * wh[1]) return 1;
    fclose(f);
    size_t nb = (size_t)((wh[0] + 3) / 4) * ((wh[1] + 3) / 4) * 16;
    u8 *out = malloc(nb);
    if (argc > 3) etc2_encode_quick(px, (int)wh[0], (int)wh[1], out); else etc2_encode_rgba(px, (int)wh[0], (int)wh[1], out);   // test_etc2 in out quick
    f = fopen(argv[2], "wb"); fwrite(out, 1, nb, f); fclose(f);
    return 0;
}
