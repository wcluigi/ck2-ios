#include "funcs.h"

void F_006211f0(CPU *c) {
  NATIVE_HOOK(0x6211f0u) REGS; LOADALL;
L_006211f0:;
  /* 006211f0 mov eax, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); eax = (u32)(M32(m_)); }
  /* 006211f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006211f7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6211fcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6211f7u); RETCHK(0x6211fcu, 0x6211f7u); LOADALL;
  /* 006211fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006211fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006211fe(CPU *c) {
  NATIVE_HOOK(0x6211feu) REGS; LOADALL;
L_006211fe:;
  /* 006211fe lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00621201 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621206(CPU *c) {
  NATIVE_HOOK(0x621206u) REGS; LOADALL;
L_00621206:;
  /* 00621206 lea ecx, [ebp - 0xdc] */ ecx = (u32)((u32)(ebp + 0xffffff24u));
  /* 0062120c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621211(CPU *c) {
  NATIVE_HOOK(0x621211u) REGS; LOADALL;
L_00621211:;
  /* 00621211 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 00621217 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062121c(CPU *c) {
  NATIVE_HOOK(0x62121cu) REGS; LOADALL;
  goto L_0062121c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062121c:;
  /* 0062121c mov eax, 0x667e08 */ { eax = (u32)(0x667e08u); }
  /* 00621221 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621230(CPU *c) {
  NATIVE_HOOK(0x621230u) REGS; LOADALL;
L_00621230:;
  /* 00621230 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 00621233 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621238(CPU *c) {
  NATIVE_HOOK(0x621238u) REGS; LOADALL;
L_00621238:;
  /* 00621238 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0062123e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621243(CPU *c) {
  NATIVE_HOOK(0x621243u) REGS; LOADALL;
L_00621243:;
  /* 00621243 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 00621249 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062124e(CPU *c) {
  NATIVE_HOOK(0x62124eu) REGS; LOADALL;
L_0062124e:;
  /* 0062124e lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 00621254 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621259(CPU *c) {
  NATIVE_HOOK(0x621259u) REGS; LOADALL;
L_00621259:;
  /* 00621259 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0062125f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621264(CPU *c) {
  NATIVE_HOOK(0x621264u) REGS; LOADALL;
L_00621264:;
  /* 00621264 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0062126a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062126f(CPU *c) {
  NATIVE_HOOK(0x62126fu) REGS; LOADALL;
L_0062126f:;
  /* 0062126f mov eax, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 00621275 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621276 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62127bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621276u); RETCHK(0x62127bu, 0x621276u); LOADALL;
  /* 0062127b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062127c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062127d(CPU *c) {
  NATIVE_HOOK(0x62127du) REGS; LOADALL;
L_0062127d:;
  /* 0062127d lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 00621283 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621288(CPU *c) {
  NATIVE_HOOK(0x621288u) REGS; LOADALL;
L_00621288:;
  /* 00621288 mov eax, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 0062128e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062128f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x621294u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62128fu); RETCHK(0x621294u, 0x62128fu); LOADALL;
  /* 00621294 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00621295 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00621296(CPU *c) {
  NATIVE_HOOK(0x621296u) REGS; LOADALL;
L_00621296:;
  /* 00621296 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0062129c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006212a1(CPU *c) {
  NATIVE_HOOK(0x6212a1u) REGS; LOADALL;
L_006212a1:;
  /* 006212a1 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 006212a7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006212ac(CPU *c) {
  NATIVE_HOOK(0x6212acu) REGS; LOADALL;
L_006212ac:;
  /* 006212ac mov eax, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 006212b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006212b3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6212b8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6212b3u); RETCHK(0x6212b8u, 0x6212b3u); LOADALL;
  /* 006212b8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006212b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006212ba(CPU *c) {
  NATIVE_HOOK(0x6212bau) REGS; LOADALL;
L_006212ba:;
  /* 006212ba mov eax, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 006212c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006212c1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6212c6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6212c1u); RETCHK(0x6212c6u, 0x6212c1u); LOADALL;
  /* 006212c6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006212c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006212c8(CPU *c) {
  NATIVE_HOOK(0x6212c8u) REGS; LOADALL;
L_006212c8:;
  /* 006212c8 mov eax, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 006212ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006212cf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6212d4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6212cfu); RETCHK(0x6212d4u, 0x6212cfu); LOADALL;
  /* 006212d4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006212d5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006212d6(CPU *c) {
  NATIVE_HOOK(0x6212d6u) REGS; LOADALL;
L_006212d6:;
  /* 006212d6 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 006212dc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006212e1(CPU *c) {
  NATIVE_HOOK(0x6212e1u) REGS; LOADALL;
L_006212e1:;
  /* 006212e1 mov eax, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 006212e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006212e8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6212edu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6212e8u); RETCHK(0x6212edu, 0x6212e8u); LOADALL;
  /* 006212ed pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006212ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006212ef(CPU *c) {
  NATIVE_HOOK(0x6212efu) REGS; LOADALL;
L_006212ef:;
  /* 006212ef mov eax, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 006212f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006212f6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6212fbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6212f6u); RETCHK(0x6212fbu, 0x6212f6u); LOADALL;
  /* 006212fb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006212fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006212fd(CPU *c) {
  NATIVE_HOOK(0x6212fdu) REGS; LOADALL;
  goto L_006212fd;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006212fd:;
  /* 006212fd mov eax, 0x667f70 */ { eax = (u32)(0x667f70u); }
  /* 00621302 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621310(CPU *c) {
  NATIVE_HOOK(0x621310u) REGS; LOADALL;
L_00621310:;
  /* 00621310 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00621313 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621318(CPU *c) {
  NATIVE_HOOK(0x621318u) REGS; LOADALL;
L_00621318:;
  /* 00621318 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0062131b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621320(CPU *c) {
  NATIVE_HOOK(0x621320u) REGS; LOADALL;
  goto L_00621320;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621320:;
  /* 00621320 mov eax, 0x667f9c */ { eax = (u32)(0x667f9cu); }
  /* 00621325 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621330(CPU *c) {
  NATIVE_HOOK(0x621330u) REGS; LOADALL;
L_00621330:;
  /* 00621330 mov eax, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); eax = (u32)(M32(m_)); }
  /* 00621333 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621334 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x621339u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621334u); RETCHK(0x621339u, 0x621334u); LOADALL;
  /* 00621339 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062133a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062133b(CPU *c) {
  NATIVE_HOOK(0x62133bu) REGS; LOADALL;
L_0062133b:;
  /* 0062133b lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0062133e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621343(CPU *c) {
  NATIVE_HOOK(0x621343u) REGS; LOADALL;
  goto L_00621343;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621343:;
  /* 00621343 mov eax, 0x667fc8 */ { eax = (u32)(0x667fc8u); }
  /* 00621348 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621350(CPU *c) {
  NATIVE_HOOK(0x621350u) REGS; LOADALL;
L_00621350:;
  /* 00621350 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00621353 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621358(CPU *c) {
  NATIVE_HOOK(0x621358u) REGS; LOADALL;
L_00621358:;
  /* 00621358 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062135b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621360(CPU *c) {
  NATIVE_HOOK(0x621360u) REGS; LOADALL;
L_00621360:;
  /* 00621360 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00621363 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621368(CPU *c) {
  NATIVE_HOOK(0x621368u) REGS; LOADALL;
L_00621368:;
  /* 00621368 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0062136e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621373(CPU *c) {
  NATIVE_HOOK(0x621373u) REGS; LOADALL;
L_00621373:;
  /* 00621373 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00621376 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062137b(CPU *c) {
  NATIVE_HOOK(0x62137bu) REGS; LOADALL;
L_0062137b:;
  /* 0062137b lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 00621381 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621386(CPU *c) {
  NATIVE_HOOK(0x621386u) REGS; LOADALL;
L_00621386:;
  /* 00621386 lea ecx, [ebp - 0x100] */ ecx = (u32)((u32)(ebp + 0xffffff00u));
  /* 0062138c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621391(CPU *c) {
  NATIVE_HOOK(0x621391u) REGS; LOADALL;
L_00621391:;
  /* 00621391 lea esi, [ebp - 0xd8] */ esi = (u32)((u32)(ebp + 0xffffff28u));
  /* 00621397 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0062139c(CPU *c) {
  NATIVE_HOOK(0x62139cu) REGS; LOADALL;
  goto L_0062139c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062139c:;
  /* 0062139c mov eax, 0x668028 */ { eax = (u32)(0x668028u); }
  /* 006213a1 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006213b0(CPU *c) {
  NATIVE_HOOK(0x6213b0u) REGS; LOADALL;
L_006213b0:;
  /* 006213b0 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 006213b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006213b8(CPU *c) {
  NATIVE_HOOK(0x6213b8u) REGS; LOADALL;
L_006213b8:;
  /* 006213b8 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 006213bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006213c0(CPU *c) {
  NATIVE_HOOK(0x6213c0u) REGS; LOADALL;
  goto L_006213c0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006213c0:;
  /* 006213c0 mov eax, 0x668054 */ { eax = (u32)(0x668054u); }
  /* 006213c5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006213d0(CPU *c) {
  NATIVE_HOOK(0x6213d0u) REGS; LOADALL;
L_006213d0:;
  /* 006213d0 lea ecx, [ebp - 0x138] */ ecx = (u32)((u32)(ebp + 0xfffffec8u));
  /* 006213d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006213db(CPU *c) {
  NATIVE_HOOK(0x6213dbu) REGS; LOADALL;
  goto L_006213db;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006213db:;
  /* 006213db mov eax, 0x668078 */ { eax = (u32)(0x668078u); }
  /* 006213e0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006213f0(CPU *c) {
  NATIVE_HOOK(0x6213f0u) REGS; LOADALL;
L_006213f0:;
  /* 006213f0 lea ecx, [ebp - 0x1e0] */ ecx = (u32)((u32)(ebp + 0xfffffe20u));
  /* 006213f6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006213fb(CPU *c) {
  NATIVE_HOOK(0x6213fbu) REGS; LOADALL;
L_006213fb:;
  /* 006213fb lea ecx, [ebp - 0x244] */ ecx = (u32)((u32)(ebp + 0xfffffdbcu));
  /* 00621401 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621406(CPU *c) {
  NATIVE_HOOK(0x621406u) REGS; LOADALL;
L_00621406:;
  /* 00621406 lea ecx, [ebp - 0x228] */ ecx = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 0062140c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621411(CPU *c) {
  NATIVE_HOOK(0x621411u) REGS; LOADALL;
L_00621411:;
  /* 00621411 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00621414 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621419(CPU *c) {
  NATIVE_HOOK(0x621419u) REGS; LOADALL;
L_00621419:;
  /* 00621419 lea ecx, [ebp - 0x20c] */ ecx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 0062141f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621424(CPU *c) {
  NATIVE_HOOK(0x621424u) REGS; LOADALL;
  goto L_00621424;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621424:;
  /* 00621424 mov eax, 0x6680bc */ { eax = (u32)(0x6680bcu); }
  /* 00621429 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621430(CPU *c) {
  NATIVE_HOOK(0x621430u) REGS; LOADALL;
L_00621430:;
  /* 00621430 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00621433 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621438(CPU *c) {
  NATIVE_HOOK(0x621438u) REGS; LOADALL;
L_00621438:;
  /* 00621438 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062143b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621440(CPU *c) {
  NATIVE_HOOK(0x621440u) REGS; LOADALL;
  goto L_00621440;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_00621440:;
  /* 00621440 lea esi, [ebp - 0x80] */ esi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00621443 jmp 0x519190 */ goto L_00519190;
}

void F_00621448(CPU *c) {
  NATIVE_HOOK(0x621448u) REGS; LOADALL;
L_00621448:;
  /* 00621448 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062144b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621450(CPU *c) {
  NATIVE_HOOK(0x621450u) REGS; LOADALL;
  goto L_00621450;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621450:;
  /* 00621450 mov eax, 0x6680f8 */ { eax = (u32)(0x6680f8u); }
  /* 00621455 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621460(CPU *c) {
  NATIVE_HOOK(0x621460u) REGS; LOADALL;
L_00621460:;
  /* 00621460 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00621463 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621468(CPU *c) {
  NATIVE_HOOK(0x621468u) REGS; LOADALL;
L_00621468:;
  /* 00621468 lea ecx, [ebp - 0x2dc] */ ecx = (u32)((u32)(ebp + 0xfffffd24u));
  /* 0062146e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621473(CPU *c) {
  NATIVE_HOOK(0x621473u) REGS; LOADALL;
  goto L_00621473;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621473:;
  /* 00621473 mov eax, 0x668124 */ { eax = (u32)(0x668124u); }
  /* 00621478 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621480(CPU *c) {
  NATIVE_HOOK(0x621480u) REGS; LOADALL;
L_00621480:;
  /* 00621480 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00621483 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621488(CPU *c) {
  NATIVE_HOOK(0x621488u) REGS; LOADALL;
L_00621488:;
  /* 00621488 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0062148b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621490(CPU *c) {
  NATIVE_HOOK(0x621490u) REGS; LOADALL;
L_00621490:;
  /* 00621490 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00621493 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621498(CPU *c) {
  NATIVE_HOOK(0x621498u) REGS; LOADALL;
  goto L_00621498;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621498:;
  /* 00621498 mov eax, 0x668184 */ { eax = (u32)(0x668184u); }
  /* 0062149d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006214b0(CPU *c) {
  NATIVE_HOOK(0x6214b0u) REGS; LOADALL;
L_006214b0:;
  /* 006214b0 mov ecx, dword ptr [ebp - 0x264] */ { const u32 m_ = (u32)(ebp + 0xfffffd9cu); ecx = (u32)(M32(m_)); }
  /* 006214b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006214bb(CPU *c) {
  NATIVE_HOOK(0x6214bbu) REGS; LOADALL;
L_006214bb:;
  /* 006214bb mov eax, dword ptr [ebp - 0x264] */ { const u32 m_ = (u32)(ebp + 0xfffffd9cu); eax = (u32)(M32(m_)); }
  /* 006214c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006214c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6214c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6214c2u); RETCHK(0x6214c7u, 0x6214c2u); LOADALL;
  /* 006214c7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006214c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006214c9(CPU *c) {
  NATIVE_HOOK(0x6214c9u) REGS; LOADALL;
L_006214c9:;
  /* 006214c9 lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 006214cf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006214d4(CPU *c) {
  NATIVE_HOOK(0x6214d4u) REGS; LOADALL;
L_006214d4:;
  /* 006214d4 mov ecx, dword ptr [ebp - 0x264] */ { const u32 m_ = (u32)(ebp + 0xfffffd9cu); ecx = (u32)(M32(m_)); }
  /* 006214da jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006214df(CPU *c) {
  NATIVE_HOOK(0x6214dfu) REGS; LOADALL;
L_006214df:;
  /* 006214df lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 006214e5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006214ea(CPU *c) {
  NATIVE_HOOK(0x6214eau) REGS; LOADALL;
L_006214ea:;
  /* 006214ea lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 006214f0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006214f5(CPU *c) {
  NATIVE_HOOK(0x6214f5u) REGS; LOADALL;
L_006214f5:;
  /* 006214f5 lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 006214fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621500(CPU *c) {
  NATIVE_HOOK(0x621500u) REGS; LOADALL;
L_00621500:;
  /* 00621500 lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 00621506 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062150b(CPU *c) {
  NATIVE_HOOK(0x62150bu) REGS; LOADALL;
L_0062150b:;
  /* 0062150b lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 00621511 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621516(CPU *c) {
  NATIVE_HOOK(0x621516u) REGS; LOADALL;
L_00621516:;
  /* 00621516 lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 0062151c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621521(CPU *c) {
  NATIVE_HOOK(0x621521u) REGS; LOADALL;
L_00621521:;
  /* 00621521 lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 00621527 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062152c(CPU *c) {
  NATIVE_HOOK(0x62152cu) REGS; LOADALL;
L_0062152c:;
  /* 0062152c lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 00621532 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621537(CPU *c) {
  NATIVE_HOOK(0x621537u) REGS; LOADALL;
L_00621537:;
  /* 00621537 lea ecx, [ebp - 0x280] */ ecx = (u32)((u32)(ebp + 0xfffffd80u));
  /* 0062153d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621542(CPU *c) {
  NATIVE_HOOK(0x621542u) REGS; LOADALL;
L_00621542:;
  /* 00621542 mov eax, dword ptr [ebp - 0x264] */ { const u32 m_ = (u32)(ebp + 0xfffffd9cu); eax = (u32)(M32(m_)); }
  /* 00621548 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621549 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62154eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621549u); RETCHK(0x62154eu, 0x621549u); LOADALL;
  /* 0062154e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062154f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00621550(CPU *c) {
  NATIVE_HOOK(0x621550u) REGS; LOADALL;
  goto L_00621550;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621550:;
  /* 00621550 mov eax, 0x668238 */ { eax = (u32)(0x668238u); }
  /* 00621555 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621560(CPU *c) {
  NATIVE_HOOK(0x621560u) REGS; LOADALL;
L_00621560:;
  /* 00621560 mov eax, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); eax = (u32)(M32(m_)); }
  /* 00621566 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621567 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62156cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621567u); RETCHK(0x62156cu, 0x621567u); LOADALL;
  /* 0062156c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062156d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062156e(CPU *c) {
  NATIVE_HOOK(0x62156eu) REGS; LOADALL;
L_0062156e:;
  /* 0062156e lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621574 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621579(CPU *c) {
  NATIVE_HOOK(0x621579u) REGS; LOADALL;
L_00621579:;
  /* 00621579 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062157f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621584(CPU *c) {
  NATIVE_HOOK(0x621584u) REGS; LOADALL;
L_00621584:;
  /* 00621584 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062158a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062158f(CPU *c) {
  NATIVE_HOOK(0x62158fu) REGS; LOADALL;
L_0062158f:;
  /* 0062158f lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621595 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062159a(CPU *c) {
  NATIVE_HOOK(0x62159au) REGS; LOADALL;
L_0062159a:;
  /* 0062159a lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006215a0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006215a5(CPU *c) {
  NATIVE_HOOK(0x6215a5u) REGS; LOADALL;
L_006215a5:;
  /* 006215a5 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006215ab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006215b0(CPU *c) {
  NATIVE_HOOK(0x6215b0u) REGS; LOADALL;
L_006215b0:;
  /* 006215b0 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006215b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006215bb(CPU *c) {
  NATIVE_HOOK(0x6215bbu) REGS; LOADALL;
L_006215bb:;
  /* 006215bb lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006215c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006215c6(CPU *c) {
  NATIVE_HOOK(0x6215c6u) REGS; LOADALL;
L_006215c6:;
  /* 006215c6 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006215cc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006215d1(CPU *c) {
  NATIVE_HOOK(0x6215d1u) REGS; LOADALL;
L_006215d1:;
  /* 006215d1 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006215d7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006215dc(CPU *c) {
  NATIVE_HOOK(0x6215dcu) REGS; LOADALL;
L_006215dc:;
  /* 006215dc lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006215e2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006215e7(CPU *c) {
  NATIVE_HOOK(0x6215e7u) REGS; LOADALL;
L_006215e7:;
  /* 006215e7 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006215ed jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006215f2(CPU *c) {
  NATIVE_HOOK(0x6215f2u) REGS; LOADALL;
L_006215f2:;
  /* 006215f2 lea ecx, [ebp - 0xd4] */ ecx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 006215f8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006215fd(CPU *c) {
  NATIVE_HOOK(0x6215fdu) REGS; LOADALL;
L_006215fd:;
  /* 006215fd lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621603 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621608(CPU *c) {
  NATIVE_HOOK(0x621608u) REGS; LOADALL;
L_00621608:;
  /* 00621608 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062160e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621613(CPU *c) {
  NATIVE_HOOK(0x621613u) REGS; LOADALL;
L_00621613:;
  /* 00621613 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621619 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062161e(CPU *c) {
  NATIVE_HOOK(0x62161eu) REGS; LOADALL;
L_0062161e:;
  /* 0062161e lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621624 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621629(CPU *c) {
  NATIVE_HOOK(0x621629u) REGS; LOADALL;
L_00621629:;
  /* 00621629 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062162f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621634(CPU *c) {
  NATIVE_HOOK(0x621634u) REGS; LOADALL;
L_00621634:;
  /* 00621634 lea ecx, [ebp - 0xd4] */ ecx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 0062163a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062163f(CPU *c) {
  NATIVE_HOOK(0x62163fu) REGS; LOADALL;
L_0062163f:;
  /* 0062163f lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621645 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062164a(CPU *c) {
  NATIVE_HOOK(0x62164au) REGS; LOADALL;
L_0062164a:;
  /* 0062164a lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621650 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621655(CPU *c) {
  NATIVE_HOOK(0x621655u) REGS; LOADALL;
L_00621655:;
  /* 00621655 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062165b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621660(CPU *c) {
  NATIVE_HOOK(0x621660u) REGS; LOADALL;
L_00621660:;
  /* 00621660 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621666 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062166b(CPU *c) {
  NATIVE_HOOK(0x62166bu) REGS; LOADALL;
L_0062166b:;
  /* 0062166b lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621671 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621676(CPU *c) {
  NATIVE_HOOK(0x621676u) REGS; LOADALL;
L_00621676:;
  /* 00621676 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062167c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621681(CPU *c) {
  NATIVE_HOOK(0x621681u) REGS; LOADALL;
L_00621681:;
  /* 00621681 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621687 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062168c(CPU *c) {
  NATIVE_HOOK(0x62168cu) REGS; LOADALL;
L_0062168c:;
  /* 0062168c lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621692 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621697(CPU *c) {
  NATIVE_HOOK(0x621697u) REGS; LOADALL;
L_00621697:;
  /* 00621697 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062169d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006216a2(CPU *c) {
  NATIVE_HOOK(0x6216a2u) REGS; LOADALL;
L_006216a2:;
  /* 006216a2 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006216a8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006216ad(CPU *c) {
  NATIVE_HOOK(0x6216adu) REGS; LOADALL;
L_006216ad:;
  /* 006216ad lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006216b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006216b8(CPU *c) {
  NATIVE_HOOK(0x6216b8u) REGS; LOADALL;
L_006216b8:;
  /* 006216b8 lea ecx, [ebp - 0xf0] */ ecx = (u32)((u32)(ebp + 0xffffff10u));
  /* 006216be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006216c3(CPU *c) {
  NATIVE_HOOK(0x6216c3u) REGS; LOADALL;
  goto L_006216c3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006216c3:;
  /* 006216c3 mov eax, 0x668358 */ { eax = (u32)(0x668358u); }
  /* 006216c8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006216d0(CPU *c) {
  NATIVE_HOOK(0x6216d0u) REGS; LOADALL;
L_006216d0:;
  /* 006216d0 mov eax, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); eax = (u32)(M32(m_)); }
  /* 006216d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006216d7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6216dcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6216d7u); RETCHK(0x6216dcu, 0x6216d7u); LOADALL;
  /* 006216dc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006216dd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006216de(CPU *c) {
  NATIVE_HOOK(0x6216deu) REGS; LOADALL;
L_006216de:;
  /* 006216de lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006216e4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006216e9(CPU *c) {
  NATIVE_HOOK(0x6216e9u) REGS; LOADALL;
L_006216e9:;
  /* 006216e9 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006216ef jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006216f4(CPU *c) {
  NATIVE_HOOK(0x6216f4u) REGS; LOADALL;
L_006216f4:;
  /* 006216f4 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006216fa jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006216ff(CPU *c) {
  NATIVE_HOOK(0x6216ffu) REGS; LOADALL;
L_006216ff:;
  /* 006216ff lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621705 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062170a(CPU *c) {
  NATIVE_HOOK(0x62170au) REGS; LOADALL;
L_0062170a:;
  /* 0062170a lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621710 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621715(CPU *c) {
  NATIVE_HOOK(0x621715u) REGS; LOADALL;
L_00621715:;
  /* 00621715 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062171b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621720(CPU *c) {
  NATIVE_HOOK(0x621720u) REGS; LOADALL;
L_00621720:;
  /* 00621720 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621726 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062172b(CPU *c) {
  NATIVE_HOOK(0x62172bu) REGS; LOADALL;
L_0062172b:;
  /* 0062172b lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621731 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621736(CPU *c) {
  NATIVE_HOOK(0x621736u) REGS; LOADALL;
L_00621736:;
  /* 00621736 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062173c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621741(CPU *c) {
  NATIVE_HOOK(0x621741u) REGS; LOADALL;
L_00621741:;
  /* 00621741 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621747 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062174c(CPU *c) {
  NATIVE_HOOK(0x62174cu) REGS; LOADALL;
L_0062174c:;
  /* 0062174c lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621752 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621757(CPU *c) {
  NATIVE_HOOK(0x621757u) REGS; LOADALL;
L_00621757:;
  /* 00621757 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062175d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621762(CPU *c) {
  NATIVE_HOOK(0x621762u) REGS; LOADALL;
L_00621762:;
  /* 00621762 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621768 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062176d(CPU *c) {
  NATIVE_HOOK(0x62176du) REGS; LOADALL;
L_0062176d:;
  /* 0062176d lea ecx, [ebp - 0xd0] */ ecx = (u32)((u32)(ebp + 0xffffff30u));
  /* 00621773 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621778(CPU *c) {
  NATIVE_HOOK(0x621778u) REGS; LOADALL;
L_00621778:;
  /* 00621778 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062177e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621783(CPU *c) {
  NATIVE_HOOK(0x621783u) REGS; LOADALL;
L_00621783:;
  /* 00621783 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621789 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062178e(CPU *c) {
  NATIVE_HOOK(0x62178eu) REGS; LOADALL;
L_0062178e:;
  /* 0062178e lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00621794 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621799(CPU *c) {
  NATIVE_HOOK(0x621799u) REGS; LOADALL;
L_00621799:;
  /* 00621799 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0062179f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006217a4(CPU *c) {
  NATIVE_HOOK(0x6217a4u) REGS; LOADALL;
L_006217a4:;
  /* 006217a4 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006217aa jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006217af(CPU *c) {
  NATIVE_HOOK(0x6217afu) REGS; LOADALL;
L_006217af:;
  /* 006217af lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006217b5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006217ba(CPU *c) {
  NATIVE_HOOK(0x6217bau) REGS; LOADALL;
L_006217ba:;
  /* 006217ba lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006217c0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006217c5(CPU *c) {
  NATIVE_HOOK(0x6217c5u) REGS; LOADALL;
L_006217c5:;
  /* 006217c5 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006217cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006217d0(CPU *c) {
  NATIVE_HOOK(0x6217d0u) REGS; LOADALL;
L_006217d0:;
  /* 006217d0 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006217d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006217db(CPU *c) {
  NATIVE_HOOK(0x6217dbu) REGS; LOADALL;
L_006217db:;
  /* 006217db lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006217e1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006217e6(CPU *c) {
  NATIVE_HOOK(0x6217e6u) REGS; LOADALL;
L_006217e6:;
  /* 006217e6 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006217ec jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006217f1(CPU *c) {
  NATIVE_HOOK(0x6217f1u) REGS; LOADALL;
L_006217f1:;
  /* 006217f1 lea ecx, [ebp - 0xec] */ ecx = (u32)((u32)(ebp + 0xffffff14u));
  /* 006217f7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006217fc(CPU *c) {
  NATIVE_HOOK(0x6217fcu) REGS; LOADALL;
  goto L_006217fc;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006217fc:;
  /* 006217fc mov eax, 0x668450 */ { eax = (u32)(0x668450u); }
  /* 00621801 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621810(CPU *c) {
  NATIVE_HOOK(0x621810u) REGS; LOADALL;
L_00621810:;
  /* 00621810 mov eax, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); eax = (u32)(M32(m_)); }
  /* 00621816 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621817 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62181cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621817u); RETCHK(0x62181cu, 0x621817u); LOADALL;
  /* 0062181c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062181d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062181e(CPU *c) {
  NATIVE_HOOK(0x62181eu) REGS; LOADALL;
L_0062181e:;
  /* 0062181e lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00621824 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621829(CPU *c) {
  NATIVE_HOOK(0x621829u) REGS; LOADALL;
L_00621829:;
  /* 00621829 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062182f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621834(CPU *c) {
  NATIVE_HOOK(0x621834u) REGS; LOADALL;
L_00621834:;
  /* 00621834 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062183a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062183f(CPU *c) {
  NATIVE_HOOK(0x62183fu) REGS; LOADALL;
L_0062183f:;
  /* 0062183f lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00621845 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062184a(CPU *c) {
  NATIVE_HOOK(0x62184au) REGS; LOADALL;
L_0062184a:;
  /* 0062184a lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00621850 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621855(CPU *c) {
  NATIVE_HOOK(0x621855u) REGS; LOADALL;
L_00621855:;
  /* 00621855 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062185b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621860(CPU *c) {
  NATIVE_HOOK(0x621860u) REGS; LOADALL;
L_00621860:;
  /* 00621860 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00621866 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062186b(CPU *c) {
  NATIVE_HOOK(0x62186bu) REGS; LOADALL;
L_0062186b:;
  /* 0062186b lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00621871 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621876(CPU *c) {
  NATIVE_HOOK(0x621876u) REGS; LOADALL;
L_00621876:;
  /* 00621876 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062187c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621881(CPU *c) {
  NATIVE_HOOK(0x621881u) REGS; LOADALL;
L_00621881:;
  /* 00621881 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00621887 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062188c(CPU *c) {
  NATIVE_HOOK(0x62188cu) REGS; LOADALL;
L_0062188c:;
  /* 0062188c lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00621892 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621897(CPU *c) {
  NATIVE_HOOK(0x621897u) REGS; LOADALL;
L_00621897:;
  /* 00621897 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0062189d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
