// DINPUT8 (keyboard/mouse from the shared key state) (FMOD Ex lives in hle_fmod.c).
#include "rt.h"
#include <string.h>

void ui_get_mouse(int *x, int *y);
u32 vk_state(int vk);              // from user32: bit 7 = down

// COM helper: guest object = [vtable][refcount][kind]
static u32 com_new(u32 vt, u32 kind) { u32 o = gstatic(16); M32(o) = vt; M32(o + 4) = 1; M32(o + 8) = kind; return o; }
static u32 vtable(int n, HleFn unknown) { u32 vt = gstatic(4 * (u32)n); for (int i = 0; i < n; i++) M32(vt + 4 * i) = hle_thunk_fn("com?", unknown, 0); return vt; }
#define SLOT(vt, i, name, fn, nargs) M32((vt) + 4 * (i)) = hle_thunk_fn(name, fn, nargs)

HLE(com_unknown) { rt_fatal("unimplemented COM method called (return address %08x, this %08x)", M32(c->esp), ARG(0)); return 0; }
HLE(com_addref) { return ++M32(ARG(0) + 4); }
HLE(com_release) { u32 r = M32(ARG(0) + 4); if (r) M32(ARG(0) + 4) = --r; return r; }
HLE(com_ok) { return 0; }
HLE(com_qi) { if (ARG(2)) M32(ARG(2)) = ARG(0); M32(ARG(0) + 4)++; return 0; }

// ---- DirectInput 8 -----------------------------------------------------------------------------
static const u8 vk2dik[256] = {
    [0x08] = 0x0e, [0x09] = 0x0f, [0x0d] = 0x1c, [0x10] = 0x2a, [0x11] = 0x1d, [0x12] = 0x38, [0x13] = 0xc5, [0x14] = 0x3a, [0x1b] = 0x01,
    [0x20] = 0x39, [0x21] = 0xc9, [0x22] = 0xd1, [0x23] = 0xcf, [0x24] = 0xc7, [0x25] = 0xcb, [0x26] = 0xc8, [0x27] = 0xcd, [0x28] = 0xd0,
    [0x2d] = 0xd2, [0x2e] = 0xd3, ['0'] = 0x0b, ['1'] = 0x02, ['2'] = 0x03, ['3'] = 0x04, ['4'] = 0x05, ['5'] = 0x06, ['6'] = 0x07,
    ['7'] = 0x08, ['8'] = 0x09, ['9'] = 0x0a, ['A'] = 0x1e, ['B'] = 0x30, ['C'] = 0x2e, ['D'] = 0x20, ['E'] = 0x12, ['F'] = 0x21,
    ['G'] = 0x22, ['H'] = 0x23, ['I'] = 0x17, ['J'] = 0x24, ['K'] = 0x25, ['L'] = 0x26, ['M'] = 0x32, ['N'] = 0x31, ['O'] = 0x18,
    ['P'] = 0x19, ['Q'] = 0x10, ['R'] = 0x13, ['S'] = 0x1f, ['T'] = 0x14, ['U'] = 0x16, ['V'] = 0x2f, ['W'] = 0x11, ['X'] = 0x2d,
    ['Y'] = 0x15, ['Z'] = 0x2c, [0x70] = 0x3b, [0x71] = 0x3c, [0x72] = 0x3d, [0x73] = 0x3e, [0x74] = 0x3f, [0x75] = 0x40, [0x76] = 0x41,
    [0x77] = 0x42, [0x78] = 0x43, [0x79] = 0x44, [0x7a] = 0x57, [0x7b] = 0x58, [0xa0] = 0x2a, [0xa1] = 0x36, [0xa2] = 0x1d, [0xa3] = 0x9d,
    [0xa4] = 0x38, [0xa5] = 0xb8, [0x60] = 0x52, [0x61] = 0x4f, [0x62] = 0x50, [0x63] = 0x51, [0x64] = 0x4b, [0x65] = 0x4c, [0x66] = 0x4d,
    [0x67] = 0x47, [0x68] = 0x48, [0x69] = 0x49, [0xba] = 0x27, [0xbb] = 0x0d, [0xbc] = 0x33, [0xbd] = 0x0c, [0xbe] = 0x34, [0xbf] = 0x35,
    [0xc0] = 0x29, [0xdb] = 0x1a, [0xdc] = 0x2b, [0xdd] = 0x1b, [0xde] = 0x28,
};
// buffered keyboard events (GetDeviceData) fed by user32's ui_key through di_key_event
static struct { u8 dik, down; u32 t; } g_kev[256];
static int g_kev_head, g_kev_tail;
static u32 g_kseq;
void di_key_event(int vk, int down) {
    u8 d = vk2dik[vk & 255];
    if (!d) return;
    int nt = (g_kev_tail + 1) & 255;
    if (nt == g_kev_head) return;
    g_kev[g_kev_tail].dik = d; g_kev[g_kev_tail].down = (u8)down; g_kev[g_kev_tail].t = ms_now();
    g_kev_tail = nt;
}
HLE(did_GetDeviceState) {
    u32 kind = M32(ARG(0) + 8), n = ARG(1), p = ARG(2);
    memset(HP(p), 0, n);
    if (kind == 1) {           // keyboard: 256 DIK bytes
        for (int vk = 0; vk < 256; vk++) if (vk2dik[vk] && (vk_state(vk) & 0x80) && vk2dik[vk] < n) M8(p + vk2dik[vk]) = 0x80;
    } else if (kind == 2) {    // mouse: relative movement since last call + buttons
        static int lx, ly;
        int x, y;
        ui_get_mouse(&x, &y);
        M32(p) = (u32)(x - lx); M32(p + 4) = (u32)(y - ly); lx = x; ly = y;
        if (n >= 16) { M8(p + 12) = (vk_state(1) & 0x80) ? 0x80 : 0; M8(p + 13) = (vk_state(2) & 0x80) ? 0x80 : 0; }
    }
    return 0;
}
HLE(did_GetDeviceData) {
    u32 kind = M32(ARG(0) + 8), sz = ARG(1), out = ARG(2), inout = ARG(3), flags = ARG(4);
    u32 want = M32(inout), got = 0;
    if (kind == 1) {
        int h = g_kev_head;
        while (h != g_kev_tail && got < want) {
            if (out) {
                u32 o = out + got * sz;
                memset(HP(o), 0, sz);
                M32(o) = g_kev[h].dik; M32(o + 4) = g_kev[h].down ? 0x80 : 0; M32(o + 8) = g_kev[h].t; M32(o + 12) = ++g_kseq;
            }
            got++;
            h = (h + 1) & 255;
        }
        if (!(flags & 1)) g_kev_head = h;         // DIGDD_PEEK keeps them
    }
    M32(inout) = got;
    return 0;
}
static u32 g_didev_vt, g_di_vt;
HLE(di_CreateDevice) {
    u32 g = M32(ARG(1));
    u32 kind = g == 0x6f1d2b61u ? 1 : g == 0x6f1d2b60u ? 2 : 3;
    M32(ARG(2)) = com_new(g_didev_vt, kind);
    return 0;
}
HLE(di_EnumDevices) { return 0; }      // no joysticks
HLE(di_Create) {
    if (!g_di_vt) {
        g_di_vt = vtable(11, com_unknown);
        SLOT(g_di_vt, 0, "DI::QueryInterface", com_qi, 3); SLOT(g_di_vt, 1, "DI::AddRef", com_addref, 1); SLOT(g_di_vt, 2, "DI::Release", com_release, 1);
        SLOT(g_di_vt, 3, "DI::CreateDevice", di_CreateDevice, 4); SLOT(g_di_vt, 4, "DI::EnumDevices", di_EnumDevices, 5);
        SLOT(g_di_vt, 5, "DI::GetDeviceStatus", com_ok, 2);
        g_didev_vt = vtable(32, com_unknown);
        SLOT(g_didev_vt, 0, "DID::QueryInterface", com_qi, 3); SLOT(g_didev_vt, 1, "DID::AddRef", com_addref, 1); SLOT(g_didev_vt, 2, "DID::Release", com_release, 1);
        SLOT(g_didev_vt, 3, "DID::GetCapabilities", com_ok, 2); SLOT(g_didev_vt, 5, "DID::GetProperty", com_ok, 3); SLOT(g_didev_vt, 6, "DID::SetProperty", com_ok, 3);
        SLOT(g_didev_vt, 7, "DID::Acquire", com_ok, 1); SLOT(g_didev_vt, 8, "DID::Unacquire", com_ok, 1);
        SLOT(g_didev_vt, 9, "DID::GetDeviceState", did_GetDeviceState, 3); SLOT(g_didev_vt, 10, "DID::GetDeviceData", did_GetDeviceData, 5);
        SLOT(g_didev_vt, 11, "DID::SetDataFormat", com_ok, 2); SLOT(g_didev_vt, 12, "DID::SetEventNotification", com_ok, 2);
        SLOT(g_didev_vt, 13, "DID::SetCooperativeLevel", com_ok, 3); SLOT(g_didev_vt, 25, "DID::Poll", com_ok, 1);
    }
    M32(ARG(3)) = com_new(g_di_vt, 0);
    return 0;
}
// CoCreateInstance(CLSID_DirectInput8) path: same object; the game then calls Initialize (slot 7)
u32 di_create_object(CPU *c) {
    u32 tmp = gstatic(4);
    u32 sp = c->esp;
    c->esp -= 24;                       // fake arg frame for di_Create: ARG(3) = out pointer
    M32(c->esp + 16) = tmp;
    di_Create(c);
    c->esp = sp;
    M32(g_di_vt + 4 * 7) = hle_thunk_fn("DI::Initialize", com_ok, 3);
    return M32(tmp);
}

static const HleDef defs[] = {
    DEF("dinput8", "DirectInput8Create", di_Create, 5),
};
void hle_input_audio_init(void) { hle_add(defs, (int)(sizeof defs / sizeof defs[0])); }
