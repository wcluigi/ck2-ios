// ETC2 RGBA8 (EAC alpha + ETC colour) block encoder for the phones' "Compressed textures" option (11 Nov 2026).
// The game's 3D textures come as DXT, which phone GPUs (Mali, Apple) cannot sample, so they were sent as RGBA8 at
// 4 bytes a pixel; ETC2 RGBA8 is 1 byte a pixel. Colour uses the ETC1 individual / differential modes only (always
// valid ETC2), alpha a short EAC search. Fast enough for load time; results are cached on disk by d3d9.c.
#include "rt.h"
#include <string.h>

static const int ETC_TAB[8][2] = {{2, 8}, {5, 17}, {9, 29}, {13, 42}, {18, 60}, {24, 80}, {33, 106}, {47, 183}};
static const int EAC_TAB[16][8] = {
    {-3, -6, -9, -15, 2, 5, 8, 14}, {-3, -7, -10, -13, 2, 6, 9, 12}, {-2, -5, -8, -13, 1, 4, 7, 12}, {-2, -4, -6, -13, 1, 3, 5, 12},
    {-3, -6, -8, -12, 2, 5, 7, 11}, {-3, -7, -9, -11, 2, 6, 8, 10}, {-4, -7, -8, -11, 3, 6, 7, 10}, {-3, -5, -8, -11, 2, 4, 7, 10},
    {-2, -6, -8, -10, 1, 5, 7, 9}, {-2, -5, -8, -10, 1, 4, 7, 9}, {-2, -4, -8, -10, 1, 3, 7, 9}, {-2, -5, -7, -10, 1, 4, 6, 9},
    {-3, -4, -7, -10, 2, 3, 6, 9}, {-1, -2, -3, -10, 0, 1, 2, 9}, {-4, -6, -8, -9, 3, 5, 7, 8}, {-3, -5, -7, -9, 2, 4, 6, 8}};

static int clamp255(int v) { return v < 0 ? 0 : v > 255 ? 255 : v; }

// best table + per-pixel modifier for one half block around base colour b[3]; returns the error, fills idx (0..3)
static int etc_half(const int (*px)[3], const int *which, int n, const int b[3], int *table, int idx[16]) {
    int best = 1 << 30;
    for (int t = 0; t < 8; t++) {
        int err = 0, sel[8];
        for (int i = 0; i < n; i++) {
            const int *p = px[which[i]];
            int be = 1 << 30, bs = 0;
            for (int m = 0; m < 4; m++) {        // ETC index: 0 +a, 1 +b, 2 -a, 3 -b
                int d = (m & 1) ? ETC_TAB[t][1] : ETC_TAB[t][0];
                if (m & 2) d = -d;
                int er = clamp255(b[0] + d) - p[0], eg = clamp255(b[1] + d) - p[1], eb = clamp255(b[2] + d) - p[2];
                int e = er * er + eg * eg + eb * eb;
                if (e < be) { be = e; bs = m; }
            }
            err += be; sel[i] = bs;
            if (err >= best) break;
        }
        if (err < best) { best = err; *table = t; for (int i = 0; i < n; i++) idx[which[i]] = sel[i]; }
    }
    return best;
}

// 8-byte ETC colour block for 16 pixels (px[k], k = y*4 + x)
static void etc_block(const int px[16][3], u8 out[8]) {
    u64 best_bits = 0;
    int best_err = 1 << 30;
    for (int flip = 0; flip < 2; flip++) {
        int half[2][8], avg[2][3] = {{0}};
        for (int y = 0, n0 = 0, n1 = 0; y < 4; y++)
            for (int x = 0; x < 4; x++) {
                int second = flip ? y >= 2 : x >= 2, k = y * 4 + x;
                if (second) half[1][n1++] = k; else half[0][n0++] = k;
            }
        for (int h = 0; h < 2; h++)
            for (int c = 0; c < 3; c++) { int s = 0; for (int i = 0; i < 8; i++) s += px[half[h][i]][c]; avg[h][c] = (s + 4) / 8; }
        // differential when the 5-bit colours are close enough, else individual (4 bit each)
        int q5[2][3], diff = 1;
        for (int h = 0; h < 2; h++) for (int c = 0; c < 3; c++) q5[h][c] = (avg[h][c] * 31 + 127) / 255;
        for (int c = 0; c < 3; c++) { int d = q5[1][c] - q5[0][c]; if (d < -4 || d > 3) diff = 0; }
        int base[2][3], q[2][3];
        for (int h = 0; h < 2; h++)
            for (int c = 0; c < 3; c++) {
                if (diff) { q[h][c] = q5[h][c]; base[h][c] = (q[h][c] << 3) | (q[h][c] >> 2); }
                else { q[h][c] = (avg[h][c] * 15 + 127) / 255; base[h][c] = q[h][c] * 17; }
            }
        int idx[16], tab[2];
        int err = etc_half(px, half[0], 8, base[0], &tab[0], idx) + etc_half(px, half[1], 8, base[1], &tab[1], idx);
        if (err >= best_err) continue;
        best_err = err;
        u64 v = 0;
        if (diff) {
            for (int c = 0; c < 3; c++) v |= (u64)((q[0][c] << 3) | ((q[1][c] - q[0][c]) & 7)) << (56 - 8 * c);
        } else {
            for (int c = 0; c < 3; c++) v |= (u64)((q[0][c] << 4) | q[1][c]) << (56 - 8 * c);
        }
        v |= (u64)((tab[0] << 5) | (tab[1] << 2) | (diff << 1) | flip) << 32;
        for (int y = 0; y < 4; y++)
            for (int x = 0; x < 4; x++) {
                int m = idx[y * 4 + x], k = x * 4 + y;            // pixel bits are column-major
                v |= (u64)(m >> 1) << (16 + k);                  // MSB plane
                v |= (u64)(m & 1) << k;                          // LSB plane
            }
        best_bits = v;
    }
    for (int i = 0; i < 8; i++) out[i] = (u8)(best_bits >> (56 - 8 * i));
}

// 8-byte EAC alpha block
static void eac_block(const int a[16], u8 out[8]) {
    int lo = 255, hi = 0;
    for (int i = 0; i < 16; i++) { if (a[i] < lo) lo = a[i]; if (a[i] > hi) hi = a[i]; }
    int best = 1 << 30, bb = lo, bm = 1, bt = 13;
    u8 bi[16];
    if (lo == hi) { memset(bi, 4, 16); best = 0; }        // table 13 has a 0 modifier: exact
    for (int t = 0; t < 16 && best; t++) {
        int span = EAC_TAB[t][7] - EAC_TAB[t][3];
        int m0 = (hi - lo + span / 2) / span;
        for (int mm = m0 - 1; mm <= m0 + 1; mm++) {
            int m = mm < 1 ? 1 : mm > 15 ? 15 : mm;
            int b = clamp255((lo + hi - (EAC_TAB[t][3] + EAC_TAB[t][7]) * m + 1) / 2);
            int err = 0; u8 sel[16];
            for (int i = 0; i < 16 && err < best; i++) {
                int be = 1 << 30, bs = 0;
                for (int j = 0; j < 8; j++) { int e = clamp255(b + EAC_TAB[t][j] * m) - a[i]; e *= e; if (e < be) { be = e; bs = j; } }
                err += be; sel[i] = (u8)bs;
            }
            if (err < best) { best = err; bb = b; bm = m; bt = t; memcpy(bi, sel, 16); }
        }
    }
    u64 v = ((u64)bb << 56) | ((u64)bm << 52) | ((u64)bt << 48);
    for (int y = 0; y < 4; y++)
        for (int x = 0; x < 4; x++) v |= (u64)bi[y * 4 + x] << (45 - 3 * (x * 4 + y));
    for (int i = 0; i < 8; i++) out[i] = (u8)(v >> (56 - 8 * i));
}

// rgba: w*h pixels (red in the low byte). out: ((w+3)/4)*((h+3)/4) 16-byte blocks; edges repeat the last pixel.
void etc2_encode_rgba(const u32 *rgba, int w, int h, u8 *out) {
    for (int by = 0; by < (h + 3) / 4; by++)
        for (int bx = 0; bx < (w + 3) / 4; bx++) {
            int px[16][3], al[16];
            for (int y = 0; y < 4; y++)
                for (int x = 0; x < 4; x++) {
                    int sx = bx * 4 + x, sy = by * 4 + y;
                    if (sx >= w) sx = w - 1;
                    if (sy >= h) sy = h - 1;
                    u32 v = rgba[sy * w + sx];
                    px[y * 4 + x][0] = (int)(v & 255); px[y * 4 + x][1] = (int)((v >> 8) & 255); px[y * 4 + x][2] = (int)((v >> 16) & 255);
                    al[y * 4 + x] = (int)(v >> 24);
                }
            eac_block(al, out);
            etc_block(px, out + 8);
            out += 16;
        }
}
