// Small system DLLs: ADVAPI32 WINMM OLE32 OLEAUT32 SHELL32 SHLWAPI IMM32 AVIFIL32 WININET URLMON + SDError / GPK stand-ins.
#include "rt.h"
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#ifndef _WIN32                           // the desktop bench (llvm-mingw) has no BSD sockets: no area pings there
#include <sys/socket.h>
#include <netinet/in.h>
#include <poll.h>
#endif
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

HLE(r0) { return 0; }
HLE(r1) { return 1; }
HLE(rfail) { return 2; }                 // ERROR_FILE_NOT_FOUND / generic failure code
HLE(reg_open) { if (ARG(2)) M32(ARG(2 + (ARG(1) ? 0 : 0))) = 0; return 2; }
HLE(reg_openex) { if (ARG(4)) M32(ARG(4)) = 0; return 2; }
HLE(reg_create) { if (ARG(7)) M32(ARG(7)) = 0x7ff00001; if (ARG(8)) M32(ARG(8)) = 1; return 0; }

// ICMP.DLL (loaded at run time): the game pings every server area once a day (CrazyKart.ini [AreaPings]; a fresh install
// aborted at IcmpCreateFile, 5 Nov 2026). Apps cannot send raw ICMP, so the echo is timed as a TCP connect to the
// login port: one round trip whether it is accepted or refused.
HLE(icmp_create) { return 0x1c3f0001; }
HLE(icmp_send) {        // (handle, IPAddr dest, data, u16 size, options, reply, reply size, timeout ms) -> replies
    u32 dest = ARG(1), data = ARG(2), size = ARG(3) & 0xffff, reply = ARG(5), rsize = ARG(6), timeout = ARG(7);
    if (!reply || rsize < 28) return 0;
#ifdef _WIN32
    (void)dest; (void)data; (void)size; (void)timeout;
    return 0;                                        // desktop bench: every area "timed out"
#else
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0) return 0;
    fcntl(fd, F_SETFL, O_NONBLOCK);
    struct sockaddr_in sa = {0};
    sa.sin_family = AF_INET; sa.sin_port = htons(6910); sa.sin_addr.s_addr = dest;     // IPAddr: network order already
    u64 t0 = us_now();
    int ok = connect(fd, (struct sockaddr *)&sa, sizeof sa) == 0;
    if (!ok && errno == EINPROGRESS) {
        struct pollfd pf = {fd, POLLOUT, 0};
        ok = poll(&pf, 1, (int)(timeout > 5000 ? 5000 : timeout ? timeout : 1000)) == 1;   // connected or refused: answered
    } else if (!ok && errno == ECONNREFUSED) ok = 1;
    u32 rtt = (u32)((us_now() - t0) / 1000);
    close(fd);
    memset(GS(reply), 0, 28);
    M32(reply) = dest;
    M32(reply + 4) = ok ? 0 : 11010;                 // IP_SUCCESS / IP_REQ_TIMED_OUT
    M32(reply + 8) = rtt;
    if (ok && data && rsize >= 28 + size) { memcpy(GS(reply + 28), GS(data), size); *(u16 *)GS(reply + 12) = (u16)size; M32(reply + 16) = reply + 28; }
    return ok ? 1 : 0;
#endif
}

HLE(w_timeGetTime) { return ms_now(); }
HLE(w_timeGetDevCaps) { M32(ARG(0)) = 1; M32(ARG(0) + 4) = 1000000; return 0; }
HLE(w_nodriver) { return 6; }            // MMSYSERR_NODRIVER: no waveOut; FMOD replacement does the sound

u32 di_create_object(CPU *c);
HLE(o_CoCreateInstance) {
    u32 g = ARG(0);
    if (M32(g) == 0x25e609e4u && M16(g + 4) == 0xb259) {     // CLSID_DirectInput8
        M32(ARG(4)) = di_create_object(c);
        return 0;
    }
    rt_log("CoCreateInstance {%08x-%04x-%04x-...} refused\n", M32(g), M16(g + 4), M16(g + 6));
    if (ARG(4)) M32(ARG(4)) = 0;
    return 0x80040154u;                  // REGDB_E_CLASSNOTREG
}
// BSTR: length prefix + UTF-16
HLE(o_SysAllocStringLen) {
    u32 n = ARG(1), b = galloc(4 + 2 * n + 2);
    M32(b) = 2 * n;
    if (ARG(0)) memcpy(HP(b + 4), HP(ARG(0)), 2 * n); else memset(HP(b + 4), 0, 2 * n);
    M16(b + 4 + 2 * n) = 0;
    return b + 4;
}
HLE(o_SysAllocString) { u32 n = 0; if (!ARG(0)) return 0; while (GW(ARG(0))[n]) n++; u32 b = galloc(4 + 2 * n + 2); M32(b) = 2 * n; memcpy(HP(b + 4), HP(ARG(0)), 2 * n + 2); return b + 4; }
HLE(o_SysAllocStringByteLen) { u32 n = ARG(1), b = galloc(4 + n + 2); M32(b) = n; if (ARG(0)) memcpy(HP(b + 4), HP(ARG(0)), n); M16(b + 4 + n) = 0; return b + 4; }
HLE(o_SysFreeString) { if (ARG(0)) gfree(ARG(0) - 4); return 0; }
HLE(o_SysStringLen) { return ARG(0) ? M32(ARG(0) - 4) / 2 : 0; }
HLE(o_SysReAllocString) {
    u32 n = 0; while (ARG(1) && GW(ARG(1))[n]) n++;
    u32 b = galloc(4 + 2 * n + 2); M32(b) = 2 * n; memcpy(HP(b + 4), HP(ARG(1)), 2 * n + 2);
    if (M32(ARG(0))) gfree(M32(ARG(0)) - 4);
    M32(ARG(0)) = b + 4;
    return 1;
}
HLE(s_ShellExecuteA) { rt_log("ShellExecute(%s, %s) refused\n", ARG(1) ? GS(ARG(1)) : "", ARG(2) ? GS(ARG(2)) : ""); return 2; }
HLE(s_PathFileExistsA) { char hp[1024]; host_path(GS(ARG(0)), hp, sizeof hp); struct stat st; return stat(hp, &st) == 0; }
HLE(i_ImmGetContext) { return 0x7e000001; }
HLE(a_fail) { return 0x80004005u; }     // E_FAIL: no AVI playback, the game skips its video
HLE(u_URLDownloadToFileA) { rt_log("URLDownloadToFile(%s) refused\n", GS(ARG(1))); return 0x80004005u; }

// SDErrorInstance(): crash-reporter object. Known methods: +0x14 (this), +0x80 (this, a, b, c, str).
static u32 g_sderr;
HLE(sd_m1) { return 0; }
HLE(sd_m5) { return 0; }
HLE(sd_m44) { for (int i = 1; i <= 5; i++) if (ARG(i)) M32(ARG(i)) = 0; return 0; }   // 5 out params (only a string is used)
static u32 sd_unknown_slot;
HLE(sd_unknown) { rt_fatal("SDError object: unknown method called (return address %08x)", M32(c->esp)); return 0; }
HLE(sd_instance) {
    if (!g_sderr) {
        u32 vt = gstatic(4 * 64);
        for (int i = 0; i < 64; i++) M32(vt + 4 * i) = hle_thunk_fn("SDError::?", sd_unknown, 0);
        M32(vt + 0x14) = hle_thunk_fn("SDError::m14", sd_m1, 1);
        M32(vt + 0x80) = hle_thunk_fn("SDError::m80", sd_m5, 5);
        M32(vt + 0x44) = hle_thunk_fn("SDError::m44", sd_m44, 6);
        M32(vt + 0x40) = hle_thunk_fn("SDError::m40", sd_m1, 8);    // registers the crash callback: ignored
        M32(vt + 0x08) = hle_thunk_fn("SDError::Release", sd_m1, 1);
        g_sderr = gstatic(16);
        M32(g_sderr) = vt;
    }
    (void)sd_unknown_slot;
    return g_sderr;
}

static const HleDef defs[] = {
    DEF("advapi32", "RegOpenKeyA", reg_open, 3), DEF("advapi32", "RegOpenKeyExA", reg_openex, 5), DEF("advapi32", "RegQueryValueExA", rfail, 6),
    DEF("advapi32", "RegCloseKey", r0, 1), DEF("advapi32", "RegCreateKeyExA", reg_create, 9), DEF("advapi32", "RegSetValueExA", r0, 6),
    DEF("icmp", "IcmpCreateFile", icmp_create, 0), DEF("icmp", "IcmpCloseHandle", r1, 1), DEF("icmp", "IcmpSendEcho", icmp_send, 8),
    DEF("iphlpapi", "IcmpCreateFile", icmp_create, 0), DEF("iphlpapi", "IcmpCloseHandle", r1, 1), DEF("iphlpapi", "IcmpSendEcho", icmp_send, 8),
    DEF("winmm", "timeBeginPeriod", r0, 1), DEF("winmm", "timeEndPeriod", r0, 1), DEF("winmm", "timeGetTime", w_timeGetTime, 0),
    DEF("winmm", "timeGetDevCaps", w_timeGetDevCaps, 2), DEF("winmm", "sndPlaySoundA", r1, 2), DEF("winmm", "waveOutOpen", w_nodriver, 6),
    DEF("winmm", "waveOutClose", w_nodriver, 1), DEF("winmm", "waveOutPause", w_nodriver, 1), DEF("winmm", "waveOutPrepareHeader", w_nodriver, 3),
    DEF("winmm", "waveOutReset", w_nodriver, 1), DEF("winmm", "waveOutRestart", w_nodriver, 1), DEF("winmm", "waveOutUnprepareHeader", w_nodriver, 3),
    DEF("winmm", "waveOutWrite", w_nodriver, 3),
    DEF("ole32", "CoInitialize", r0, 1), DEF("ole32", "CoUninitialize", r0, 0), DEF("ole32", "CoCreateInstance", o_CoCreateInstance, 5),
    DEF("oleaut32", "SysAllocString", o_SysAllocString, 1), DEF("oleaut32", "SysAllocStringLen", o_SysAllocStringLen, 2),
    DEF("oleaut32", "SysAllocStringByteLen", o_SysAllocStringByteLen, 2), DEF("oleaut32", "SysFreeString", o_SysFreeString, 1),
    DEF("oleaut32", "SysStringLen", o_SysStringLen, 1), DEF("oleaut32", "SysReAllocString", o_SysReAllocString, 2), DEF("oleaut32", "VariantClear", r0, 1),
    DEF("shell32", "DragAcceptFiles", r0, 2), DEF("shell32", "DragFinish", r0, 1), DEF("shell32", "DragQueryFileA", r0, 4),
    DEF("shell32", "ShellExecuteA", s_ShellExecuteA, 6), DEF("shlwapi", "PathFileExistsA", s_PathFileExistsA, 1),
    DEF("imm32", "ImmGetContext", i_ImmGetContext, 1), DEF("imm32", "ImmReleaseContext", r1, 2), DEF("imm32", "ImmIsIME", r0, 1),
    DEF("imm32", "ImmSetOpenStatus", r1, 2),
    DEF("avifil32", "AVIFileInit", r0, 0), DEF("avifil32", "AVIFileExit", r0, 0), DEF("avifil32", "AVIStreamOpenFromFileA", a_fail, 6),
    DEF("avifil32", "AVIStreamRelease", r0, 1), DEF("avifil32", "AVIStreamGetFrameOpen", r0, 2), DEF("avifil32", "AVIStreamGetFrame", r0, 2),
    DEF("avifil32", "AVIStreamGetFrameClose", r0, 1), DEF("avifil32", "AVIStreamInfoA", a_fail, 3), DEF("avifil32", "AVIStreamLength", r0, 1),
    DEF("avifil32", "AVIStreamRead", a_fail, 7), DEF("avifil32", "AVIStreamReadFormat", a_fail, 4), DEF("avifil32", "AVIStreamStart", r0, 1),
    DEF("wininet", "DeleteUrlCacheEntry", r1, 1), DEF("urlmon", "URLDownloadToFileA", u_URLDownloadToFileA, 5),
    DEF("SDError", "SDErrorInstance", sd_instance, 0), DEF("GPKitClt", "#1", r0, 2),
};
void hle_misc_init(void) { hle_add(defs, (int)(sizeof defs / sizeof defs[0])); }
