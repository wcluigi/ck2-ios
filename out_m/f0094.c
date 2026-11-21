#include "funcs.h"

void F_00628210(CPU *c) {
  NATIVE_HOOK(0x628210u) REGS; LOADALL;
  goto L_00628210;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628210:;
  /* 00628210 mov eax, 0x66f524 */ { eax = (u32)(0x66f524u); }
  /* 00628215 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628220(CPU *c) {
  NATIVE_HOOK(0x628220u) REGS; LOADALL;
L_00628220:;
  /* 00628220 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628223 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628228(CPU *c) {
  NATIVE_HOOK(0x628228u) REGS; LOADALL;
L_00628228:;
  /* 00628228 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0062822b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628230(CPU *c) {
  NATIVE_HOOK(0x628230u) REGS; LOADALL;
  goto L_00628230;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628230:;
  /* 00628230 mov eax, 0x66f598 */ { eax = (u32)(0x66f598u); }
  /* 00628235 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628240(CPU *c) {
  NATIVE_HOOK(0x628240u) REGS; LOADALL;
L_00628240:;
  /* 00628240 lea ecx, [ebp - 0x238] */ ecx = (u32)((u32)(ebp + 0xfffffdc8u));
  /* 00628246 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062824b(CPU *c) {
  NATIVE_HOOK(0x62824bu) REGS; LOADALL;
  goto L_0062824b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062824b:;
  /* 0062824b mov eax, 0x66f5e0 */ { eax = (u32)(0x66f5e0u); }
  /* 00628250 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628260(CPU *c) {
  NATIVE_HOOK(0x628260u) REGS; LOADALL;
L_00628260:;
  /* 00628260 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628263 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628268(CPU *c) {
  NATIVE_HOOK(0x628268u) REGS; LOADALL;
L_00628268:;
  /* 00628268 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062826b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628270(CPU *c) {
  NATIVE_HOOK(0x628270u) REGS; LOADALL;
L_00628270:;
  /* 00628270 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628273 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628278(CPU *c) {
  NATIVE_HOOK(0x628278u) REGS; LOADALL;
L_00628278:;
  /* 00628278 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062827b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628280(CPU *c) {
  NATIVE_HOOK(0x628280u) REGS; LOADALL;
  goto L_00628280;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628280:;
  /* 00628280 mov eax, 0x66f664 */ { eax = (u32)(0x66f664u); }
  /* 00628285 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628290(CPU *c) {
  NATIVE_HOOK(0x628290u) REGS; LOADALL;
L_00628290:;
  /* 00628290 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00628293 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628294 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628299u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628294u); RETCHK(0x628299u, 0x628294u); LOADALL;
  /* 00628299 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062829a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062829b(CPU *c) {
  NATIVE_HOOK(0x62829bu) REGS; LOADALL;
  goto L_0062829b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062829b:;
  /* 0062829b mov eax, 0x66f6ac */ { eax = (u32)(0x66f6acu); }
  /* 006282a0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006282b0(CPU *c) {
  NATIVE_HOOK(0x6282b0u) REGS; LOADALL;
L_006282b0:;
  /* 006282b0 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006282b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006282b8(CPU *c) {
  NATIVE_HOOK(0x6282b8u) REGS; LOADALL;
L_006282b8:;
  /* 006282b8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006282bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006282c0(CPU *c) {
  NATIVE_HOOK(0x6282c0u) REGS; LOADALL;
L_006282c0:;
  /* 006282c0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006282c3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006282c8(CPU *c) {
  NATIVE_HOOK(0x6282c8u) REGS; LOADALL;
L_006282c8:;
  /* 006282c8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006282cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006282d0(CPU *c) {
  NATIVE_HOOK(0x6282d0u) REGS; LOADALL;
L_006282d0:;
  /* 006282d0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006282d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006282d8(CPU *c) {
  NATIVE_HOOK(0x6282d8u) REGS; LOADALL;
L_006282d8:;
  /* 006282d8 mov ecx, dword ptr [ebp - 0x2f8] */ { const u32 m_ = (u32)(ebp + 0xfffffd08u); ecx = (u32)(M32(m_)); }
  /* 006282de jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006282e3(CPU *c) {
  NATIVE_HOOK(0x6282e3u) REGS; LOADALL;
L_006282e3:;
  /* 006282e3 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006282e6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006282eb(CPU *c) {
  NATIVE_HOOK(0x6282ebu) REGS; LOADALL;
L_006282eb:;
  /* 006282eb lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006282ee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006282f3(CPU *c) {
  NATIVE_HOOK(0x6282f3u) REGS; LOADALL;
L_006282f3:;
  /* 006282f3 mov ecx, dword ptr [ebp - 0x2fc] */ { const u32 m_ = (u32)(ebp + 0xfffffd04u); ecx = (u32)(M32(m_)); }
  /* 006282f9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006282fe(CPU *c) {
  NATIVE_HOOK(0x6282feu) REGS; LOADALL;
L_006282fe:;
  /* 006282fe mov ecx, dword ptr [ebp - 0x300] */ { const u32 m_ = (u32)(ebp + 0xfffffd00u); ecx = (u32)(M32(m_)); }
  /* 00628304 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628309(CPU *c) {
  NATIVE_HOOK(0x628309u) REGS; LOADALL;
L_00628309:;
  /* 00628309 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062830c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628311(CPU *c) {
  NATIVE_HOOK(0x628311u) REGS; LOADALL;
L_00628311:;
  /* 00628311 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628314 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628319(CPU *c) {
  NATIVE_HOOK(0x628319u) REGS; LOADALL;
  goto L_00628319;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628319:;
  /* 00628319 mov eax, 0x66f728 */ { eax = (u32)(0x66f728u); }
  /* 0062831e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628330(CPU *c) {
  NATIVE_HOOK(0x628330u) REGS; LOADALL;
L_00628330:;
  /* 00628330 lea ecx, [ebp - 0x54c] */ ecx = (u32)((u32)(ebp + 0xfffffab4u));
  /* 00628336 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_0062833b(CPU *c) {
  NATIVE_HOOK(0x62833bu) REGS; LOADALL;
L_0062833b:;
  /* 0062833b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062833e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628343(CPU *c) {
  NATIVE_HOOK(0x628343u) REGS; LOADALL;
L_00628343:;
  /* 00628343 lea ecx, [ebp - 0x568] */ ecx = (u32)((u32)(ebp + 0xfffffa98u));
  /* 00628349 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062834e(CPU *c) {
  NATIVE_HOOK(0x62834eu) REGS; LOADALL;
L_0062834e:;
  /* 0062834e mov ecx, dword ptr [ebp - 0x528] */ { const u32 m_ = (u32)(ebp + 0xfffffad8u); ecx = (u32)(M32(m_)); }
  /* 00628354 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628359(CPU *c) {
  NATIVE_HOOK(0x628359u) REGS; LOADALL;
L_00628359:;
  /* 00628359 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062835c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628361(CPU *c) {
  NATIVE_HOOK(0x628361u) REGS; LOADALL;
L_00628361:;
  /* 00628361 mov ecx, dword ptr [ebp - 0x528] */ { const u32 m_ = (u32)(ebp + 0xfffffad8u); ecx = (u32)(M32(m_)); }
  /* 00628367 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062836c(CPU *c) {
  NATIVE_HOOK(0x62836cu) REGS; LOADALL;
L_0062836c:;
  /* 0062836c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062836f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628374(CPU *c) {
  NATIVE_HOOK(0x628374u) REGS; LOADALL;
L_00628374:;
  /* 00628374 mov ecx, dword ptr [ebp - 0x528] */ { const u32 m_ = (u32)(ebp + 0xfffffad8u); ecx = (u32)(M32(m_)); }
  /* 0062837a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062837f(CPU *c) {
  NATIVE_HOOK(0x62837fu) REGS; LOADALL;
L_0062837f:;
  /* 0062837f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628382 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628387(CPU *c) {
  NATIVE_HOOK(0x628387u) REGS; LOADALL;
L_00628387:;
  /* 00628387 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062838a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062838f(CPU *c) {
  NATIVE_HOOK(0x62838fu) REGS; LOADALL;
L_0062838f:;
  /* 0062838f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628392 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628397(CPU *c) {
  NATIVE_HOOK(0x628397u) REGS; LOADALL;
L_00628397:;
  /* 00628397 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062839a jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_0062839f(CPU *c) {
  NATIVE_HOOK(0x62839fu) REGS; LOADALL;
L_0062839f:;
  /* 0062839f lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 006283a2 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_006283a7(CPU *c) {
  NATIVE_HOOK(0x6283a7u) REGS; LOADALL;
L_006283a7:;
  /* 006283a7 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006283aa jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006283af(CPU *c) {
  NATIVE_HOOK(0x6283afu) REGS; LOADALL;
L_006283af:;
  /* 006283af lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006283b2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006283b7(CPU *c) {
  NATIVE_HOOK(0x6283b7u) REGS; LOADALL;
L_006283b7:;
  /* 006283b7 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006283ba jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006283bf(CPU *c) {
  NATIVE_HOOK(0x6283bfu) REGS; LOADALL;
L_006283bf:;
  /* 006283bf lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006283c2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006283c7(CPU *c) {
  NATIVE_HOOK(0x6283c7u) REGS; LOADALL;
L_006283c7:;
  /* 006283c7 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 006283ca jmp 0x4647c0 */ SAVEALL; F_004647c0(c); return;
}

void F_006283cf(CPU *c) {
  NATIVE_HOOK(0x6283cfu) REGS; LOADALL;
L_006283cf:;
  /* 006283cf lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 006283d2 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_006283d7(CPU *c) {
  NATIVE_HOOK(0x6283d7u) REGS; LOADALL;
L_006283d7:;
  /* 006283d7 lea esi, [ebp - 0xdc] */ esi = (u32)((u32)(ebp + 0xffffff24u));
  /* 006283dd jmp 0x417430 */ SAVEALL; F_00417430(c); return;
}

void F_006283e2(CPU *c) {
  NATIVE_HOOK(0x6283e2u) REGS; LOADALL;
L_006283e2:;
  /* 006283e2 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 006283e5 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_006283ea(CPU *c) {
  NATIVE_HOOK(0x6283eau) REGS; LOADALL;
L_006283ea:;
  /* 006283ea lea esi, [ebp - 0xdc] */ esi = (u32)((u32)(ebp + 0xffffff24u));
  /* 006283f0 jmp 0x417430 */ SAVEALL; F_00417430(c); return;
}

void F_006283f5(CPU *c) {
  NATIVE_HOOK(0x6283f5u) REGS; LOADALL;
L_006283f5:;
  /* 006283f5 lea esi, [ebp - 0x158] */ esi = (u32)((u32)(ebp + 0xfffffea8u));
  /* 006283fb jmp 0x417430 */ SAVEALL; F_00417430(c); return;
}

void F_00628400(CPU *c) {
  NATIVE_HOOK(0x628400u) REGS; LOADALL;
L_00628400:;
  /* 00628400 lea esi, [ebp - 0x258] */ esi = (u32)((u32)(ebp + 0xfffffda8u));
  /* 00628406 jmp 0x417430 */ SAVEALL; F_00417430(c); return;
}

void F_0062840b(CPU *c) {
  NATIVE_HOOK(0x62840bu) REGS; LOADALL;
L_0062840b:;
  /* 0062840b lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0062840e jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00628413(CPU *c) {
  NATIVE_HOOK(0x628413u) REGS; LOADALL;
  goto L_00628413;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628413:;
  /* 00628413 mov eax, 0x66f810 */ { eax = (u32)(0x66f810u); }
  /* 00628418 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628420(CPU *c) {
  NATIVE_HOOK(0x628420u) REGS; LOADALL;
L_00628420:;
  /* 00628420 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628423 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628428(CPU *c) {
  NATIVE_HOOK(0x628428u) REGS; LOADALL;
L_00628428:;
  /* 00628428 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062842b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628430(CPU *c) {
  NATIVE_HOOK(0x628430u) REGS; LOADALL;
L_00628430:;
  /* 00628430 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00628433 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628438(CPU *c) {
  NATIVE_HOOK(0x628438u) REGS; LOADALL;
L_00628438:;
  /* 00628438 lea ecx, [ebp - 0x420] */ ecx = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0062843e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628443(CPU *c) {
  NATIVE_HOOK(0x628443u) REGS; LOADALL;
L_00628443:;
  /* 00628443 mov eax, dword ptr [ebp - 0x204] */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); eax = (u32)(M32(m_)); }
  /* 00628449 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062844a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62844fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62844au); RETCHK(0x62844fu, 0x62844au); LOADALL;
  /* 0062844f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628450 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628451(CPU *c) {
  NATIVE_HOOK(0x628451u) REGS; LOADALL;
L_00628451:;
  /* 00628451 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628454 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628459(CPU *c) {
  NATIVE_HOOK(0x628459u) REGS; LOADALL;
L_00628459:;
  /* 00628459 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062845c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628461(CPU *c) {
  NATIVE_HOOK(0x628461u) REGS; LOADALL;
L_00628461:;
  /* 00628461 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628464 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628469(CPU *c) {
  NATIVE_HOOK(0x628469u) REGS; LOADALL;
L_00628469:;
  /* 00628469 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062846c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628471(CPU *c) {
  NATIVE_HOOK(0x628471u) REGS; LOADALL;
L_00628471:;
  /* 00628471 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628474 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628479(CPU *c) {
  NATIVE_HOOK(0x628479u) REGS; LOADALL;
L_00628479:;
  /* 00628479 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062847c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628481(CPU *c) {
  NATIVE_HOOK(0x628481u) REGS; LOADALL;
L_00628481:;
  /* 00628481 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628484 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628489(CPU *c) {
  NATIVE_HOOK(0x628489u) REGS; LOADALL;
L_00628489:;
  /* 00628489 lea ecx, [ebp - 0x2b4] */ ecx = (u32)((u32)(ebp + 0xfffffd4cu));
  /* 0062848f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628494(CPU *c) {
  NATIVE_HOOK(0x628494u) REGS; LOADALL;
L_00628494:;
  /* 00628494 mov eax, dword ptr [ebp - 0x204] */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); eax = (u32)(M32(m_)); }
  /* 0062849a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062849b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6284a0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62849bu); RETCHK(0x6284a0u, 0x62849bu); LOADALL;
  /* 006284a0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006284a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006284a2(CPU *c) {
  NATIVE_HOOK(0x6284a2u) REGS; LOADALL;
L_006284a2:;
  /* 006284a2 mov eax, dword ptr [ebp - 0x204] */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); eax = (u32)(M32(m_)); }
  /* 006284a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006284a9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6284aeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6284a9u); RETCHK(0x6284aeu, 0x6284a9u); LOADALL;
  /* 006284ae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006284af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006284b0(CPU *c) {
  NATIVE_HOOK(0x6284b0u) REGS; LOADALL;
L_006284b0:;
  /* 006284b0 lea ecx, [ebp - 0x404] */ ecx = (u32)((u32)(ebp + 0xfffffbfcu));
  /* 006284b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006284bb(CPU *c) {
  NATIVE_HOOK(0x6284bbu) REGS; LOADALL;
L_006284bb:;
  /* 006284bb lea ecx, [ebp - 0x3e8] */ ecx = (u32)((u32)(ebp + 0xfffffc18u));
  /* 006284c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006284c6(CPU *c) {
  NATIVE_HOOK(0x6284c6u) REGS; LOADALL;
L_006284c6:;
  /* 006284c6 lea ecx, [ebp - 0x3b0] */ ecx = (u32)((u32)(ebp + 0xfffffc50u));
  /* 006284cc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006284d1(CPU *c) {
  NATIVE_HOOK(0x6284d1u) REGS; LOADALL;
L_006284d1:;
  /* 006284d1 lea ecx, [ebp - 0x27c] */ ecx = (u32)((u32)(ebp + 0xfffffd84u));
  /* 006284d7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006284dc(CPU *c) {
  NATIVE_HOOK(0x6284dcu) REGS; LOADALL;
L_006284dc:;
  /* 006284dc lea ecx, [ebp - 0x35c] */ ecx = (u32)((u32)(ebp + 0xfffffca4u));
  /* 006284e2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006284e7(CPU *c) {
  NATIVE_HOOK(0x6284e7u) REGS; LOADALL;
L_006284e7:;
  /* 006284e7 lea ecx, [ebp - 0x228] */ ecx = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 006284ed jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006284f2(CPU *c) {
  NATIVE_HOOK(0x6284f2u) REGS; LOADALL;
L_006284f2:;
  /* 006284f2 lea ecx, [ebp - 0x3cc] */ ecx = (u32)((u32)(ebp + 0xfffffc34u));
  /* 006284f8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006284fd(CPU *c) {
  NATIVE_HOOK(0x6284fdu) REGS; LOADALL;
L_006284fd:;
  /* 006284fd lea ecx, [ebp - 0x2ec] */ ecx = (u32)((u32)(ebp + 0xfffffd14u));
  /* 00628503 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628508(CPU *c) {
  NATIVE_HOOK(0x628508u) REGS; LOADALL;
L_00628508:;
  /* 00628508 lea ecx, [ebp - 0x394] */ ecx = (u32)((u32)(ebp + 0xfffffc6cu));
  /* 0062850e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628513(CPU *c) {
  NATIVE_HOOK(0x628513u) REGS; LOADALL;
L_00628513:;
  /* 00628513 lea ecx, [ebp - 0x324] */ ecx = (u32)((u32)(ebp + 0xfffffcdcu));
  /* 00628519 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062851e(CPU *c) {
  NATIVE_HOOK(0x62851eu) REGS; LOADALL;
L_0062851e:;
  /* 0062851e lea ecx, [ebp - 0x244] */ ecx = (u32)((u32)(ebp + 0xfffffdbcu));
  /* 00628524 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628529(CPU *c) {
  NATIVE_HOOK(0x628529u) REGS; LOADALL;
L_00628529:;
  /* 00628529 lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 0062852f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628534(CPU *c) {
  NATIVE_HOOK(0x628534u) REGS; LOADALL;
L_00628534:;
  /* 00628534 lea ecx, [ebp - 0x298] */ ecx = (u32)((u32)(ebp + 0xfffffd68u));
  /* 0062853a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062853f(CPU *c) {
  NATIVE_HOOK(0x62853fu) REGS; LOADALL;
L_0062853f:;
  /* 0062853f lea ecx, [ebp - 0x2d0] */ ecx = (u32)((u32)(ebp + 0xfffffd30u));
  /* 00628545 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062854a(CPU *c) {
  NATIVE_HOOK(0x62854au) REGS; LOADALL;
L_0062854a:;
  /* 0062854a lea ecx, [ebp - 0x308] */ ecx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 00628550 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628555(CPU *c) {
  NATIVE_HOOK(0x628555u) REGS; LOADALL;
L_00628555:;
  /* 00628555 lea ecx, [ebp - 0x340] */ ecx = (u32)((u32)(ebp + 0xfffffcc0u));
  /* 0062855b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628560(CPU *c) {
  NATIVE_HOOK(0x628560u) REGS; LOADALL;
L_00628560:;
  /* 00628560 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628563 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628568(CPU *c) {
  NATIVE_HOOK(0x628568u) REGS; LOADALL;
L_00628568:;
  /* 00628568 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062856b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628570(CPU *c) {
  NATIVE_HOOK(0x628570u) REGS; LOADALL;
L_00628570:;
  /* 00628570 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628573 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628578(CPU *c) {
  NATIVE_HOOK(0x628578u) REGS; LOADALL;
L_00628578:;
  /* 00628578 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062857b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628580(CPU *c) {
  NATIVE_HOOK(0x628580u) REGS; LOADALL;
L_00628580:;
  /* 00628580 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628583 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628588(CPU *c) {
  NATIVE_HOOK(0x628588u) REGS; LOADALL;
L_00628588:;
  /* 00628588 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062858b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628590(CPU *c) {
  NATIVE_HOOK(0x628590u) REGS; LOADALL;
L_00628590:;
  /* 00628590 mov eax, dword ptr [ebp - 0x204] */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); eax = (u32)(M32(m_)); }
  /* 00628596 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628597 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62859cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628597u); RETCHK(0x62859cu, 0x628597u); LOADALL;
  /* 0062859c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062859d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062859e(CPU *c) {
  NATIVE_HOOK(0x62859eu) REGS; LOADALL;
  goto L_0062859e;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_0062859e:;
  /* 0062859e lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006285a1 jmp 0x519190 */ goto L_00519190;
}

void F_006285a6(CPU *c) {
  NATIVE_HOOK(0x6285a6u) REGS; LOADALL;
L_006285a6:;
  /* 006285a6 mov eax, dword ptr [ebp - 0x204] */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); eax = (u32)(M32(m_)); }
  /* 006285ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006285ad call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6285b2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6285adu); RETCHK(0x6285b2u, 0x6285adu); LOADALL;
  /* 006285b2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006285b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006285b4(CPU *c) {
  NATIVE_HOOK(0x6285b4u) REGS; LOADALL;
L_006285b4:;
  /* 006285b4 lea ecx, [ebp - 0x378] */ ecx = (u32)((u32)(ebp + 0xfffffc88u));
  /* 006285ba jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006285bf(CPU *c) {
  NATIVE_HOOK(0x6285bfu) REGS; LOADALL;
L_006285bf:;
  /* 006285bf lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006285c2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006285c7(CPU *c) {
  NATIVE_HOOK(0x6285c7u) REGS; LOADALL;
L_006285c7:;
  /* 006285c7 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006285ca jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006285cf(CPU *c) {
  NATIVE_HOOK(0x6285cfu) REGS; LOADALL;
L_006285cf:;
  /* 006285cf mov eax, dword ptr [ebp - 0x204] */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); eax = (u32)(M32(m_)); }
  /* 006285d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006285d6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6285dbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6285d6u); RETCHK(0x6285dbu, 0x6285d6u); LOADALL;
  /* 006285db pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006285dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006285dd(CPU *c) {
  NATIVE_HOOK(0x6285ddu) REGS; LOADALL;
L_006285dd:;
  /* 006285dd mov eax, dword ptr [ebp - 0x204] */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); eax = (u32)(M32(m_)); }
  /* 006285e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006285e4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6285e9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6285e4u); RETCHK(0x6285e9u, 0x6285e4u); LOADALL;
  /* 006285e9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006285ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006285eb(CPU *c) {
  NATIVE_HOOK(0x6285ebu) REGS; LOADALL;
L_006285eb:;
  /* 006285eb mov eax, dword ptr [ebp - 0x204] */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); eax = (u32)(M32(m_)); }
  /* 006285f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006285f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6285f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6285f2u); RETCHK(0x6285f7u, 0x6285f2u); LOADALL;
  /* 006285f7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006285f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006285f9(CPU *c) {
  NATIVE_HOOK(0x6285f9u) REGS; LOADALL;
L_006285f9:;
  /* 006285f9 mov eax, dword ptr [ebp - 0x204] */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); eax = (u32)(M32(m_)); }
  /* 006285ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628600 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628605u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628600u); RETCHK(0x628605u, 0x628600u); LOADALL;
  /* 00628605 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628606 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628607(CPU *c) {
  NATIVE_HOOK(0x628607u) REGS; LOADALL;
L_00628607:;
  /* 00628607 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062860a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062860f(CPU *c) {
  NATIVE_HOOK(0x62860fu) REGS; LOADALL;
L_0062860f:;
  /* 0062860f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628612 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628617(CPU *c) {
  NATIVE_HOOK(0x628617u) REGS; LOADALL;
L_00628617:;
  /* 00628617 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062861a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062861f(CPU *c) {
  NATIVE_HOOK(0x62861fu) REGS; LOADALL;
L_0062861f:;
  /* 0062861f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628622 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628627(CPU *c) {
  NATIVE_HOOK(0x628627u) REGS; LOADALL;
L_00628627:;
  /* 00628627 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062862a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062862f(CPU *c) {
  NATIVE_HOOK(0x62862fu) REGS; LOADALL;
  goto L_0062862f;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062862f:;
  /* 0062862f mov eax, 0x66f9d0 */ { eax = (u32)(0x66f9d0u); }
  /* 00628634 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628640(CPU *c) {
  NATIVE_HOOK(0x628640u) REGS; LOADALL;
L_00628640:;
  /* 00628640 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00628643 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628644 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628649u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628644u); RETCHK(0x628649u, 0x628644u); LOADALL;
  /* 00628649 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062864a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062864b(CPU *c) {
  NATIVE_HOOK(0x62864bu) REGS; LOADALL;
L_0062864b:;
  /* 0062864b mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0062864e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062864f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628654u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62864fu); RETCHK(0x628654u, 0x62864fu); LOADALL;
  /* 00628654 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628655 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628656(CPU *c) {
  NATIVE_HOOK(0x628656u) REGS; LOADALL;
L_00628656:;
  /* 00628656 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00628659 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062865a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62865fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62865au); RETCHK(0x62865fu, 0x62865au); LOADALL;
  /* 0062865f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628660 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628661(CPU *c) {
  NATIVE_HOOK(0x628661u) REGS; LOADALL;
L_00628661:;
  /* 00628661 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00628664 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628665 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62866au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628665u); RETCHK(0x62866au, 0x628665u); LOADALL;
  /* 0062866a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062866b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062866c(CPU *c) {
  NATIVE_HOOK(0x62866cu) REGS; LOADALL;
L_0062866c:;
  /* 0062866c mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0062866f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628670 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628675u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628670u); RETCHK(0x628675u, 0x628670u); LOADALL;
  /* 00628675 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628676 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628677(CPU *c) {
  NATIVE_HOOK(0x628677u) REGS; LOADALL;
L_00628677:;
  /* 00628677 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0062867a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062867b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628680u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62867bu); RETCHK(0x628680u, 0x62867bu); LOADALL;
  /* 00628680 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628681 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628682(CPU *c) {
  NATIVE_HOOK(0x628682u) REGS; LOADALL;
L_00628682:;
  /* 00628682 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00628685 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628686 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62868bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628686u); RETCHK(0x62868bu, 0x628686u); LOADALL;
  /* 0062868b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062868c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062868d(CPU *c) {
  NATIVE_HOOK(0x62868du) REGS; LOADALL;
L_0062868d:;
  /* 0062868d mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00628690 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628691 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628696u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628691u); RETCHK(0x628696u, 0x628691u); LOADALL;
  /* 00628696 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628697 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628698(CPU *c) {
  NATIVE_HOOK(0x628698u) REGS; LOADALL;
L_00628698:;
  /* 00628698 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0062869b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062869c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6286a1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62869cu); RETCHK(0x6286a1u, 0x62869cu); LOADALL;
  /* 006286a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006286a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006286a3(CPU *c) {
  NATIVE_HOOK(0x6286a3u) REGS; LOADALL;
L_006286a3:;
  /* 006286a3 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006286a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006286a7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6286acu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6286a7u); RETCHK(0x6286acu, 0x6286a7u); LOADALL;
  /* 006286ac pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006286ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006286ae(CPU *c) {
  NATIVE_HOOK(0x6286aeu) REGS; LOADALL;
L_006286ae:;
  /* 006286ae mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006286b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006286b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6286b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6286b2u); RETCHK(0x6286b7u, 0x6286b2u); LOADALL;
  /* 006286b7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006286b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006286b9(CPU *c) {
  NATIVE_HOOK(0x6286b9u) REGS; LOADALL;
L_006286b9:;
  /* 006286b9 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006286bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006286bd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6286c2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6286bdu); RETCHK(0x6286c2u, 0x6286bdu); LOADALL;
  /* 006286c2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006286c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006286c4(CPU *c) {
  NATIVE_HOOK(0x6286c4u) REGS; LOADALL;
L_006286c4:;
  /* 006286c4 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006286c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006286c8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6286cdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6286c8u); RETCHK(0x6286cdu, 0x6286c8u); LOADALL;
  /* 006286cd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006286ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006286cf(CPU *c) {
  NATIVE_HOOK(0x6286cfu) REGS; LOADALL;
L_006286cf:;
  /* 006286cf mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006286d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006286d3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6286d8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6286d3u); RETCHK(0x6286d8u, 0x6286d3u); LOADALL;
  /* 006286d8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006286d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006286da(CPU *c) {
  NATIVE_HOOK(0x6286dau) REGS; LOADALL;
L_006286da:;
  /* 006286da mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006286dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006286de call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6286e3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6286deu); RETCHK(0x6286e3u, 0x6286deu); LOADALL;
  /* 006286e3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006286e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006286e5(CPU *c) {
  NATIVE_HOOK(0x6286e5u) REGS; LOADALL;
L_006286e5:;
  /* 006286e5 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006286e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006286e9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6286eeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6286e9u); RETCHK(0x6286eeu, 0x6286e9u); LOADALL;
  /* 006286ee pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006286ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006286f0(CPU *c) {
  NATIVE_HOOK(0x6286f0u) REGS; LOADALL;
L_006286f0:;
  /* 006286f0 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006286f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006286f4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6286f9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6286f4u); RETCHK(0x6286f9u, 0x6286f4u); LOADALL;
  /* 006286f9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006286fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006286fb(CPU *c) {
  NATIVE_HOOK(0x6286fbu) REGS; LOADALL;
L_006286fb:;
  /* 006286fb mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006286fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006286ff call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628704u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6286ffu); RETCHK(0x628704u, 0x6286ffu); LOADALL;
  /* 00628704 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628705 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628706(CPU *c) {
  NATIVE_HOOK(0x628706u) REGS; LOADALL;
L_00628706:;
  /* 00628706 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00628709 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062870a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62870fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62870au); RETCHK(0x62870fu, 0x62870au); LOADALL;
  /* 0062870f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628710 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628711(CPU *c) {
  NATIVE_HOOK(0x628711u) REGS; LOADALL;
L_00628711:;
  /* 00628711 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00628714 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628715 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62871au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628715u); RETCHK(0x62871au, 0x628715u); LOADALL;
  /* 0062871a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062871b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062871c(CPU *c) {
  NATIVE_HOOK(0x62871cu) REGS; LOADALL;
L_0062871c:;
  /* 0062871c mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0062871f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628720 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628725u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628720u); RETCHK(0x628725u, 0x628720u); LOADALL;
  /* 00628725 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628726 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628727(CPU *c) {
  NATIVE_HOOK(0x628727u) REGS; LOADALL;
L_00628727:;
  /* 00628727 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0062872a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062872b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628730u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62872bu); RETCHK(0x628730u, 0x62872bu); LOADALL;
  /* 00628730 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628731 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628732(CPU *c) {
  NATIVE_HOOK(0x628732u) REGS; LOADALL;
L_00628732:;
  /* 00628732 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00628735 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628736 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62873bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628736u); RETCHK(0x62873bu, 0x628736u); LOADALL;
  /* 0062873b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062873c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062873d(CPU *c) {
  NATIVE_HOOK(0x62873du) REGS; LOADALL;
L_0062873d:;
  /* 0062873d mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00628740 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628741 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628746u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628741u); RETCHK(0x628746u, 0x628741u); LOADALL;
  /* 00628746 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628747 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628748(CPU *c) {
  NATIVE_HOOK(0x628748u) REGS; LOADALL;
  goto L_00628748;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628748:;
  /* 00628748 mov eax, 0x66fab0 */ { eax = (u32)(0x66fab0u); }
  /* 0062874d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628760(CPU *c) {
  NATIVE_HOOK(0x628760u) REGS; LOADALL;
L_00628760:;
  /* 00628760 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628763 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628768(CPU *c) {
  NATIVE_HOOK(0x628768u) REGS; LOADALL;
L_00628768:;
  /* 00628768 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062876b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628770(CPU *c) {
  NATIVE_HOOK(0x628770u) REGS; LOADALL;
L_00628770:;
  /* 00628770 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628773 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628778(CPU *c) {
  NATIVE_HOOK(0x628778u) REGS; LOADALL;
  goto L_00628778;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628778:;
  /* 00628778 mov eax, 0x66fb08 */ { eax = (u32)(0x66fb08u); }
  /* 0062877d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628790(CPU *c) {
  NATIVE_HOOK(0x628790u) REGS; LOADALL;
L_00628790:;
  /* 00628790 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00628793 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628798(CPU *c) {
  NATIVE_HOOK(0x628798u) REGS; LOADALL;
L_00628798:;
  /* 00628798 lea ecx, [ebp - 0xa8] */ ecx = (u32)((u32)(ebp + 0xffffff58u));
  /* 0062879e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006287a3(CPU *c) {
  NATIVE_HOOK(0x6287a3u) REGS; LOADALL;
L_006287a3:;
  /* 006287a3 lea ecx, [ebp - 0x134] */ ecx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 006287a9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006287ae(CPU *c) {
  NATIVE_HOOK(0x6287aeu) REGS; LOADALL;
L_006287ae:;
  /* 006287ae lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 006287b4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006287b9(CPU *c) {
  NATIVE_HOOK(0x6287b9u) REGS; LOADALL;
L_006287b9:;
  /* 006287b9 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 006287bc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006287c1(CPU *c) {
  NATIVE_HOOK(0x6287c1u) REGS; LOADALL;
L_006287c1:;
  /* 006287c1 lea ecx, [ebp - 0xc4] */ ecx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 006287c7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006287cc(CPU *c) {
  NATIVE_HOOK(0x6287ccu) REGS; LOADALL;
L_006287cc:;
  /* 006287cc lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 006287cf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006287d4(CPU *c) {
  NATIVE_HOOK(0x6287d4u) REGS; LOADALL;
L_006287d4:;
  /* 006287d4 mov eax, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); eax = (u32)(M32(m_)); }
  /* 006287da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006287db call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6287e0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6287dbu); RETCHK(0x6287e0u, 0x6287dbu); LOADALL;
  /* 006287e0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006287e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006287e2(CPU *c) {
  NATIVE_HOOK(0x6287e2u) REGS; LOADALL;
L_006287e2:;
  /* 006287e2 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 006287e8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006287ed(CPU *c) {
  NATIVE_HOOK(0x6287edu) REGS; LOADALL;
L_006287ed:;
  /* 006287ed lea ecx, [ebp - 0x118] */ ecx = (u32)((u32)(ebp + 0xfffffee8u));
  /* 006287f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006287f8(CPU *c) {
  NATIVE_HOOK(0x6287f8u) REGS; LOADALL;
L_006287f8:;
  /* 006287f8 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 006287fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628800(CPU *c) {
  NATIVE_HOOK(0x628800u) REGS; LOADALL;
L_00628800:;
  /* 00628800 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00628803 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628808(CPU *c) {
  NATIVE_HOOK(0x628808u) REGS; LOADALL;
L_00628808:;
  /* 00628808 mov ecx, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); ecx = (u32)(M32(m_)); }
  /* 0062880e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628813(CPU *c) {
  NATIVE_HOOK(0x628813u) REGS; LOADALL;
L_00628813:;
  /* 00628813 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00628816 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062881b(CPU *c) {
  NATIVE_HOOK(0x62881bu) REGS; LOADALL;
L_0062881b:;
  /* 0062881b mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0062881e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628823(CPU *c) {
  NATIVE_HOOK(0x628823u) REGS; LOADALL;
L_00628823:;
  /* 00628823 lea ecx, [ebp - 0x150] */ ecx = (u32)((u32)(ebp + 0xfffffeb0u));
  /* 00628829 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
