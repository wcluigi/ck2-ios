// Guest heap inside guest memory: 16-byte size classes up to 4 KB from 64 KB spans, larger blocks
// from a page allocator (64 KB granularity, first-fit free list). One lock; the game is mostly single-threaded.
#include "rt.h"
#include <pthread.h>
#include <string.h>

#define HDR 16u                        // header before every block: [0] size, [4] class (0 = large)
#define NCLASS 256                     // 16..4096 in 16-byte steps
#define SPAN (64u << 10)
static pthread_mutex_t mu = PTHREAD_MUTEX_INITIALIZER;
static u32 g_brk = GUEST_HEAP_LO, g_static = GUEST_STATIC_LO;
static u32 freelist[NCLASS + 1];
typedef struct { u32 addr, size; } Span;
static Span g_free[16384];
static int g_nfree;

static u32 pages_locked(u32 size) {
    size = (size + SPAN - 1) & ~(SPAN - 1);
    for (int i = 0; i < g_nfree; i++)
        if (g_free[i].size >= size) {
            u32 a = g_free[i].addr;
            g_free[i].addr += size; g_free[i].size -= size;
            if (!g_free[i].size) g_free[i] = g_free[--g_nfree];
            memset(HP(a), 0, size);
            return a;
        }
    if (g_brk + size > GUEST_HEAP_HI || g_brk + size < g_brk) rt_fatal("guest heap exhausted (%u bytes asked)", size);
    u32 a = g_brk;
    g_brk += size;
    return a;                          // fresh reserve is zero
}
static void pages_free_locked(u32 a, u32 size) {
    for (int i = 0; i < g_nfree; i++) {          // merge with a neighbour when it touches
        if (g_free[i].addr + g_free[i].size == a) { g_free[i].size += size; return; }
        if (a + size == g_free[i].addr) { g_free[i].addr = a; g_free[i].size += size; return; }
    }
    if (g_nfree < (int)(sizeof g_free / sizeof g_free[0])) g_free[g_nfree++] = (Span){a, size};
}

u32 gpages(u32 size) {
    pthread_mutex_lock(&mu);
    u32 a = pages_locked(size);
    pthread_mutex_unlock(&mu);
    return a;
}
void gpages_free(u32 a) { (void)a; }   // VirtualFree: sizes are not tracked for raw pages; leak (rare)

u32 galloc(u32 size) {
    if (!size) size = 1;
    pthread_mutex_lock(&mu);
    u32 p;
    if (size <= 4096) {
        u32 cls = (size + 15) >> 4, bsz = (cls << 4) + HDR;
        if (!freelist[cls]) {          // carve a span into blocks
            u32 s = pages_locked(SPAN);
            for (u32 o = 0; o + bsz <= SPAN; o += bsz) { M32(s + o + 8) = freelist[cls]; freelist[cls] = s + o + HDR; }
        }
        p = freelist[cls];
        freelist[cls] = M32(p - HDR + 8);
        M32(p - HDR) = size; M32(p - HDR + 4) = cls; M32(p - HDR + 12) = 0;
    } else {
        u32 total = size + HDR;
        u32 a = pages_locked(total);
        p = a + HDR;
        M32(a) = size; M32(a + 4) = 0; M32(a + 8) = (total + SPAN - 1) & ~(SPAN - 1); M32(a + 12) = 0;
    }
    pthread_mutex_unlock(&mu);
    return p;
}
u32 gcalloc(u32 size) { u32 p = galloc(size); memset(HP(p), 0, size); return p; }
u32 gmsize(u32 p) { return p ? M32(p - HDR) : 0; }
void gfree(u32 p) {
    if (!p) return;
    if (p < GUEST_HEAP_LO || p >= GUEST_HEAP_HI) { rt_log("free of non-heap pointer %08x ignored\n", p); return; }
    pthread_mutex_lock(&mu);
    if (M32(p - HDR + 12) == 0xf4eef4eeu) {          // already free: Windows heaps shrug this off, so do we
        pthread_mutex_unlock(&mu);
        static int warned;
        if (warned++ < 10) rt_log("double free of %08x ignored\n", p);
        return;
    }
    M32(p - HDR + 12) = 0xf4eef4eeu;
    u32 cls = M32(p - HDR + 4);
    // free-list link in the header, not the block: the game reads freed objects (room buttons' vtables after a
    // list refresh) and Windows' low-fragmentation heap leaves their contents alone
    if (cls) { M32(p - HDR + 8) = freelist[cls]; freelist[cls] = p; }
    else pages_free_locked(p - HDR, M32(p - HDR + 8));
    pthread_mutex_unlock(&mu);
}
u32 grealloc(u32 p, u32 size) {
    if (!p) return galloc(size);
    if (!size) { gfree(p); return 0; }
    u32 old = gmsize(p), cls = M32(p - HDR + 4);
    if (cls && size <= (cls << 4)) { M32(p - HDR) = size; return p; }
    u32 n = galloc(size);
    memcpy(HP(n), HP(p), old < size ? old : size);
    gfree(p);
    return n;
}
u32 gstrdup(const char *s) { u32 n = (u32)strlen(s) + 1, p = galloc(n); memcpy(HP(p), s, n); return p; }
u32 gstatic(u32 size) {
    pthread_mutex_lock(&mu);
    u32 a = g_static;
    g_static += (size + 15) & ~15u;
    if (g_static >= THUNK_BASE) rt_fatal("runtime guest area exhausted");
    pthread_mutex_unlock(&mu);
    return a;
}
