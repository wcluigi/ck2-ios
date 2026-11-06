// printf/scanf for guest varargs (MSVC rules: %I64d, %S = wide in narrow printf, 4-byte slots, doubles 8 bytes).
#include "rt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { char *out; int cap, n; u16 *wout; } Sink;
static void put(Sink *s, int ch) {
    if (s->wout) { if (s->n < s->cap - 1) s->wout[s->n] = (u16)ch; }
    else if (s->n < s->cap - 1) s->out[s->n] = (char)ch;
    s->n++;
}
static void puts_(Sink *s, const char *p, int n) { for (int i = 0; i < n; i++) put(s, (u8)p[i]); }

// fmt is a guest-visible host pointer (narrow) or wide when `wide`; argp walks the guest stack.
static int vformat(Sink *s, const void *fmtp, u32 argp, int wide) {
    const u8 *f8 = fmtp;
    const u16 *f16 = fmtp;
#define FCH(i) (wide ? f16[i] : f8[i])
    int i = 0;
    for (;;) {
        u32 ch = FCH(i);
        if (!ch) break;
        if (ch != '%') { put(s, (int)ch); i++; continue; }
        i++;
        char spec[32]; int sp = 0;
        spec[sp++] = '%';
        while (FCH(i) && strchr("-+ #0", (int)FCH(i))) spec[sp++] = (char)FCH(i++);
        if (FCH(i) == '*') { sp += snprintf(spec + sp, 32 - sp, "%d", (s32)M32(argp)); argp += 4; i++; }
        else while (FCH(i) >= '0' && FCH(i) <= '9') spec[sp++] = (char)FCH(i++);
        if (FCH(i) == '.') {
            spec[sp++] = '.'; i++;
            if (FCH(i) == '*') { sp += snprintf(spec + sp, 32 - sp, "%d", (s32)M32(argp)); argp += 4; i++; }
            else while (FCH(i) >= '0' && FCH(i) <= '9') spec[sp++] = (char)FCH(i++);
        }
        int is64 = 0, isw = -1;
        for (;;) {
            u32 m = FCH(i);
            if (m == 'l') { i++; if (FCH(i) == 'l') { is64 = 1; i++; } else isw = 1; continue; }
            if (m == 'h') { i++; isw = 0; continue; }
            if (m == 'I' && FCH(i + 1) == '6' && FCH(i + 2) == '4') { is64 = 1; i += 3; continue; }
            if (m == 'I' && FCH(i + 1) == '3' && FCH(i + 2) == '2') { i += 3; continue; }
            if (m == 'L' || m == 'w') { if (m == 'w') isw = 1; i++; continue; }
            break;
        }
        u32 conv = FCH(i);
        if (!conv) break;
        i++;
        char buf[512];
        int n = 0;
        spec[sp] = 0;
        switch (conv) {
        case 'd': case 'i': case 'u': case 'x': case 'X': case 'o': {
            if (is64) {
                u64 v = M32(argp) | ((u64)M32(argp + 4) << 32); argp += 8;
                strcat(spec, conv == 'd' || conv == 'i' ? "lld" : conv == 'u' ? "llu" : conv == 'x' ? "llx" : conv == 'X' ? "llX" : "llo");
                n = snprintf(buf, sizeof buf, spec, v);
            } else {
                u32 v = M32(argp); argp += 4;
                if (isw == 0) v = (conv == 'd' || conv == 'i') ? (u32)(s32)(s16)v : (u16)v;
                spec[sp] = (char)conv; spec[sp + 1] = 0;
                n = (conv == 'd' || conv == 'i') ? snprintf(buf, sizeof buf, spec, (s32)v) : snprintf(buf, sizeof buf, spec, v);
            }
            puts_(s, buf, n < (int)sizeof buf ? n : (int)sizeof buf - 1);
            break;
        }
        case 'f': case 'F': case 'e': case 'E': case 'g': case 'G': case 'a': case 'A': {
            double v; memcpy(&v, HP(argp), 8); argp += 8;
            spec[sp] = (char)conv; spec[sp + 1] = 0;
            n = snprintf(buf, sizeof buf, spec, v);
            puts_(s, buf, n < (int)sizeof buf ? n : (int)sizeof buf - 1);
            break;
        }
        case 'c': case 'C': {
            u32 v = M32(argp); argp += 4;
            put(s, (int)(wide ? (u16)v : (u8)v));
            break;
        }
        case 'p': {
            u32 v = M32(argp); argp += 4;
            n = snprintf(buf, sizeof buf, "%08X", v);
            puts_(s, buf, n);
            break;
        }
        case 's': case 'S': {
            u32 v = M32(argp); argp += 4;
            int widearg = (conv == 'S') ^ wide;   // %s matches the format's width, %S the other one
            if (isw == 1) widearg = 1; else if (isw == 0) widearg = 0;
            // width / precision from spec
            int width = 0, prec = -1, left = strchr(spec, '-') != 0;
            const char *q = spec + 1;
            while (*q && strchr("-+ #0", *q)) q++;
            width = atoi(q);
            const char *dot = strchr(spec, '.');
            if (dot) prec = atoi(dot + 1);
            int len = 0;
            if (!v) { const char *nul = "(null)"; v = 0; len = 6; if (prec >= 0 && len > prec) len = prec; if (!left) for (int k = len; k < width; k++) put(s, ' '); puts_(s, nul, len); if (left) for (int k = len; k < width; k++) put(s, ' '); break; }
            if (widearg) { const u16 *w = GW(v); while (w[len] && (prec < 0 || len < prec)) len++; }
            else { const u8 *a = (u8 *)HP(v); while (a[len] && (prec < 0 || len < prec)) len++; }
            if (!left) for (int k = len; k < width; k++) put(s, ' ');
            if (widearg && !wide) {          // wide arg into narrow output: convert to GBK
                u8 tmp[2048]; int m = utf16_to_gbk(GW(v), len, tmp, sizeof tmp);
                puts_(s, (char *)tmp, m < 2048 ? m : 2048);
            } else if (!widearg && wide) {
                u16 tmp[2048]; int m = gbk_to_utf16((u8 *)HP(v), len, tmp, 2048);
                for (int k = 0; k < m && k < 2048; k++) put(s, tmp[k]);
            } else if (widearg) { for (int k = 0; k < len; k++) put(s, GW(v)[k]); }
            else puts_(s, GS(v), len);
            if (left) for (int k = len; k < width; k++) put(s, ' ');
            break;
        }
        case 'n': { u32 v = M32(argp); argp += 4; if (v) M32(v) = (u32)s->n; break; }
        case '%': put(s, '%'); break;
        default: put(s, '%'); put(s, (int)conv); break;
        }
    }
#undef FCH
    return s->n;
}
// returns the full length (like C99 snprintf); output always NUL-terminated when outsz > 0
int guest_vsnprintf(char *out, int outsz, const char *fmt, u32 argp, int wide) {
    Sink s = {out, outsz, 0, wide ? (u16 *)out : 0};
    if (wide) s.cap = outsz;   // in u16 units
    int n = vformat(&s, fmt, argp, wide);
    if (outsz > 0) { if (wide) ((u16 *)out)[n < outsz ? n : outsz - 1] = 0; else out[n < outsz ? n : outsz - 1] = 0; }
    return n;
}

// sscanf: %d %i %u %x %o %f %e %g %s %c %[...] %n with width, *, h/l/ll/I64. Returns fields assigned.
int guest_vsscanf(const char *src, const char *fmt, u32 argp) {
    const char *s = src;
    int assigned = 0;
    for (const char *f = fmt; *f; f++) {
        if (*f == ' ' || *f == '\t' || *f == '\n') { while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r') s++; continue; }
        if (*f != '%') { if (*s != *f) break; s++; continue; }
        f++;
        if (*f == '%') { if (*s != '%') break; s++; continue; }
        int skip = 0, width = 0, sz = 4;
        if (*f == '*') { skip = 1; f++; }
        while (*f >= '0' && *f <= '9') width = width * 10 + (*f++ - '0');
        for (;;) {
            if (*f == 'h') { sz = 2; f++; if (*f == 'h') { sz = 1; f++; } }
            else if (*f == 'l') { f++; if (*f == 'l') { sz = 8; f++; } else sz = 5; }   // 5 = long / double
            else if (*f == 'I' && f[1] == '6' && f[2] == '4') { sz = 8; f += 3; }
            else if (*f == 'L') { sz = 5; f++; }
            else break;
        }
        char conv = *f;
        if (conv != 'c' && conv != '[' && conv != 'n') while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r') s++;
        if (conv == 'n') { if (!skip) { M32(M32(argp)) = (u32)(s - src); argp += 4; } continue; }
        if (!*s) break;
        char tok[512];
        int lim = width ? width : 511;
        if (conv == 'd' || conv == 'i' || conv == 'u' || conv == 'x' || conv == 'X' || conv == 'o') {
            int k = 0;
            if ((*s == '-' || *s == '+') && k < lim) tok[k++] = *s++;
            int base = conv == 'x' || conv == 'X' ? 16 : conv == 'o' ? 8 : 10;
            if (conv == 'i' && s[0] == '0' && (s[1] | 32) == 'x') { base = 16; s += 2; }
            while (k < lim && *s && ((base == 16 && ((*s >= '0' && *s <= '9') || ((*s | 32) >= 'a' && (*s | 32) <= 'f'))) ||
                                     (base == 10 && *s >= '0' && *s <= '9') || (base == 8 && *s >= '0' && *s <= '7')))
                tok[k++] = *s++;
            tok[k] = 0;
            if (!k || (k == 1 && (tok[0] == '-' || tok[0] == '+'))) break;
            if (!skip) {
                u32 dst = M32(argp); argp += 4;
                s64 v = strtoll(tok, 0, base);
                if (sz == 8) { M32(dst) = (u32)v; M32(dst + 4) = (u32)((u64)v >> 32); }
                else if (sz == 2) M16(dst) = (u16)v; else if (sz == 1) M8(dst) = (u8)v; else M32(dst) = (u32)v;
                assigned++;
            }
        } else if (conv == 'f' || conv == 'e' || conv == 'g' || conv == 'E' || conv == 'G') {
            char *end;
            int k = 0;
            while (k < lim && *s && strchr("+-0123456789.eE", *s)) tok[k++] = *s++;
            tok[k] = 0;
            double v = strtod(tok, &end);
            if (end == tok) break;
            if (!skip) {
                u32 dst = M32(argp); argp += 4;
                if (sz == 5 || sz == 8) memcpy(HP(dst), &v, 8); else { float fv = (float)v; memcpy(HP(dst), &fv, 4); }
                assigned++;
            }
        } else if (conv == 's') {
            int k = 0;
            while (k < lim && *s && *s != ' ' && *s != '\t' && *s != '\n' && *s != '\r') tok[k++] = *s++;
            tok[k] = 0;
            if (!skip) { u32 dst = M32(argp); argp += 4; memcpy(HP(dst), tok, (size_t)k + 1); assigned++; }
        } else if (conv == 'c') {
            int k = width ? width : 1;
            if ((int)strlen(s) < k) break;
            if (!skip) { u32 dst = M32(argp); argp += 4; memcpy(HP(dst), s, (size_t)k); assigned++; }
            s += k;
        } else if (conv == '[') {
            f++;
            int neg = 0;
            if (*f == '^') { neg = 1; f++; }
            char set[256] = {0};
            if (*f == ']') { set[']'] = 1; f++; }
            for (; *f && *f != ']'; f++) {
                if (f[1] == '-' && f[2] && f[2] != ']') { for (int ch = (u8)f[0]; ch <= (u8)f[2]; ch++) set[ch] = 1; f += 2; }
                else set[(u8)*f] = 1;
            }
            int k = 0;
            while (k < lim && *s && (set[(u8)*s] != 0) != neg) tok[k++] = *s++;
            tok[k] = 0;
            if (!k) break;
            if (!skip) { u32 dst = M32(argp); argp += 4; memcpy(HP(dst), tok, (size_t)k + 1); assigned++; }
        } else break;
    }
    return assigned;
}
