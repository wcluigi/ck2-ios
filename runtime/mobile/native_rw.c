// Native replacements for hot recompiled leaf functions (recomp/lift.py NATIVE_OVERRIDES). Each one reproduces the
// guest function's effects exactly: arguments read from the guest stack, guest memory written in the same order,
// callee-saved registers / FPU stack / EFLAGS as the original leaves them, and its ret (c->popped, esp).
#include "rt.h"
#include <string.h>
#pragma clang fp contract(off)          // no fused multiply-add: round like the x87 code did

static inline float rf(u32 a) { float f; u32 v = M32(a); __builtin_memcpy(&f, &v, 4); return f; }
static inline void wf(u32 a, float f) { u32 v; __builtin_memcpy(&v, &f, 4); M32(a) = v; }

// 0x62d2a0, cdecl (dst, a, b): RenderWare 4x3 matrix product dst = a * b. Rows right (+0), up (+0x10), at (+0x20)
// are a's row times b's 3x3; pos (+0x30) also adds b's pos. Saves/restores eax, ebx, ecx; the x87 stack is balanced.
// The x87 code ran in single precision (the client sets the FPU to 24-bit), so float arithmetic matches.
void native_rw_matrix_multiply(CPU *c) {
    u32 dst = M32(c->esp + 4), a = M32(c->esp + 8), b = M32(c->esp + 12);
    for (u32 r = 0; r < 0x40; r += 0x10) {
        float x = rf(a + r), y = rf(a + r + 4), z = rf(a + r + 8);       // read before the row is written
        for (u32 k = 0; k < 12; k += 4) {
            float v = rf(b + k) * x + rf(b + 0x10 + k) * y + rf(b + 0x20 + k) * z;
            if (r == 0x30) v += rf(b + 0x30 + k);
            wf(dst + r + k, v);
        }
    }
    c->popped = M32(c->esp);           // ret
    c->esp += 4;
}

// 0x5075d0, thiscall (this = GUI control in ecx, const std::string *name), ret 4: find a descendant control by
// name, depth first. Children: std::list at [this+0x64] (node: +0 next, +8 control); a control's name is the
// std::string at +0x20 (VC7.1 layout: +4 buffer or pointer when capacity [+0x18] >= 16, +0x14 length). Equal =
// same length and bytes (0x405de0 compare). Empty name -> 0. 16% (+7.5% in the compare) of the lobby's game thread.
static u32 str_data(u32 s) { return M32(s + 0x18) >= 16 ? M32(s + 4) : s + 4; }
static u32 gui_find(u32 self, const u8 *nm, u32 nlen, int depth, u32 *budget) {
    if (depth > 64) return 0;
    u32 head = M32(self + 0x64);
    for (u32 node = M32(head); node != head; node = M32(node)) {
        if (!--*budget) return 0;              // a corrupted list must not hang the game
        u32 child = M32(node + 8);
        if (!child) continue;
        u32 cs = child + 0x20;
        if (M32(cs + 0x14) == nlen && !memcmp(HP(str_data(cs)), nm, nlen)) return child;
        u32 r = gui_find(child, nm, nlen, depth + 1, budget);
        if (r) return r;
    }
    return 0;
}
void ui_note_root(u32 self);
void native_gui_find_child(CPU *c) {
    u32 self = c->ecx, name = M32(c->esp + 4), nlen = M32(name + 0x14), budget = 1u << 20;
    ui_note_root(self);                // the phone UI bridge walks the same tree (ui_bridge.c)
    c->eax = nlen ? gui_find(self, HP(str_data(name)), nlen, 0, &budget) : 0;
    static int nmiss;                  // a control the game asks for and the layout does not have (data vs client)
    if (!c->eax && nlen && nlen < 64 && nmiss < 40) {
        nmiss++;
        rt_log("gui: no control '%.*s' (looked up from %08x)\n", (int)nlen, (const char *)HP(str_data(name)), M32(c->esp));
    }
    c->popped = M32(c->esp);           // ret 4
    c->esp += 8;
}
