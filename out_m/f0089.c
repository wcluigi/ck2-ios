#include "funcs.h"

void F_00626260(CPU *c) {
  NATIVE_HOOK(0x626260u) REGS; LOADALL;
L_00626260:;
  /* 00626260 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00626263 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626262(CPU *c) {
  NATIVE_HOOK(0x626262u) REGS; LOADALL;
L_00626262:;
  /* 00626262 pushfd */ { u32 e_ = EFLAGS_; esp -= 4; M32(esp) = e_; }
  /* 00626263 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626268(CPU *c) {
  NATIVE_HOOK(0x626268u) REGS; LOADALL;
L_00626268:;
  /* 00626268 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062626b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626270(CPU *c) {
  NATIVE_HOOK(0x626270u) REGS; LOADALL;
L_00626270:;
  /* 00626270 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00626273 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626278(CPU *c) {
  NATIVE_HOOK(0x626278u) REGS; LOADALL;
L_00626278:;
  /* 00626278 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062627b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626280(CPU *c) {
  NATIVE_HOOK(0x626280u) REGS; LOADALL;
L_00626280:;
  /* 00626280 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626283 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626288(CPU *c) {
  NATIVE_HOOK(0x626288u) REGS; LOADALL;
L_00626288:;
  /* 00626288 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0062628e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626293(CPU *c) {
  NATIVE_HOOK(0x626293u) REGS; LOADALL;
L_00626293:;
  /* 00626293 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 00626299 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062629e(CPU *c) {
  NATIVE_HOOK(0x62629eu) REGS; LOADALL;
  goto L_0062629e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062629e:;
  /* 0062629e mov eax, 0x66d798 */ { eax = (u32)(0x66d798u); }
  /* 006262a3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006262b0(CPU *c) {
  NATIVE_HOOK(0x6262b0u) REGS; LOADALL;
L_006262b0:;
  /* 006262b0 mov eax, dword ptr [ebp - 0x130] */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); eax = (u32)(M32(m_)); }
  /* 006262b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006262b7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6262bcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6262b7u); RETCHK(0x6262bcu, 0x6262b7u); LOADALL;
  /* 006262bc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006262bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006262be(CPU *c) {
  NATIVE_HOOK(0x6262beu) REGS; LOADALL;
  goto L_006262be;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006262be:;
  /* 006262be mov eax, 0x66d7f8 */ { eax = (u32)(0x66d7f8u); }
  /* 006262c3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006262d0(CPU *c) {
  NATIVE_HOOK(0x6262d0u) REGS; LOADALL;
L_006262d0:;
  /* 006262d0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006262d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006262d8(CPU *c) {
  NATIVE_HOOK(0x6262d8u) REGS; LOADALL;
L_006262d8:;
  /* 006262d8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006262db jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006262e0(CPU *c) {
  NATIVE_HOOK(0x6262e0u) REGS; LOADALL;
L_006262e0:;
  /* 006262e0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006262e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006262e8(CPU *c) {
  NATIVE_HOOK(0x6262e8u) REGS; LOADALL;
L_006262e8:;
  /* 006262e8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006262eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006262f0(CPU *c) {
  NATIVE_HOOK(0x6262f0u) REGS; LOADALL;
  goto L_006262f0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006262f0:;
  /* 006262f0 mov eax, 0x66d834 */ { eax = (u32)(0x66d834u); }
  /* 006262f5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626300(CPU *c) {
  NATIVE_HOOK(0x626300u) REGS; LOADALL;
L_00626300:;
  /* 00626300 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00626303 jmp 0x401760 */ SAVEALL; F_00401760(c); return;
}

void F_00626308(CPU *c) {
  NATIVE_HOOK(0x626308u) REGS; LOADALL;
L_00626308:;
  /* 00626308 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062630b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626310(CPU *c) {
  NATIVE_HOOK(0x626310u) REGS; LOADALL;
L_00626310:;
  /* 00626310 mov eax, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); eax = (u32)(M32(m_)); }
  /* 00626313 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626314 mov ecx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ecx = (u32)(M32(m_)); }
  /* 00626317 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00626318 call 0x459c10 */ esp -= 4; M32(esp) = 0x62631du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x626318u); RETCHK(0x62631du, 0x626318u); LOADALL;
  /* 0062631d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00626320 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626321(CPU *c) {
  NATIVE_HOOK(0x626321u) REGS; LOADALL;
  goto L_00626321;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626321:;
  /* 00626321 mov eax, 0x66d868 */ { eax = (u32)(0x66d868u); }
  /* 00626326 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626330(CPU *c) {
  NATIVE_HOOK(0x626330u) REGS; LOADALL;
L_00626330:;
  /* 00626330 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626333 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626338(CPU *c) {
  NATIVE_HOOK(0x626338u) REGS; LOADALL;
L_00626338:;
  /* 00626338 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062633b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626340(CPU *c) {
  NATIVE_HOOK(0x626340u) REGS; LOADALL;
  goto L_00626340;
L_00413160:;
  /* 00413160 jmp 0x41a000 */ SAVEALL; F_0041a000(c); return;
L_00626340:;
  /* 00626340 lea edi, [ebp - 0x4dc] */ edi = (u32)((u32)(ebp + 0xfffffb24u));
  /* 00626346 jmp 0x413160 */ goto L_00413160;
}

void F_0062634b(CPU *c) {
  NATIVE_HOOK(0x62634bu) REGS; LOADALL;
L_0062634b:;
  /* 0062634b lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062634e jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_00626353(CPU *c) {
  NATIVE_HOOK(0x626353u) REGS; LOADALL;
L_00626353:;
  /* 00626353 mov eax, dword ptr [ebp - 0x4e0] */ { const u32 m_ = (u32)(ebp + 0xfffffb20u); eax = (u32)(M32(m_)); }
  /* 00626359 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062635a mov ecx, dword ptr [ebp - 0x4c8] */ { const u32 m_ = (u32)(ebp + 0xfffffb38u); ecx = (u32)(M32(m_)); }
  /* 00626360 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00626361 call 0x459c10 */ esp -= 4; M32(esp) = 0x626366u; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x626361u); RETCHK(0x626366u, 0x626361u); LOADALL;
  /* 00626366 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00626369 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062636a(CPU *c) {
  NATIVE_HOOK(0x62636au) REGS; LOADALL;
L_0062636a:;
  /* 0062636a lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0062636d jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_00626372(CPU *c) {
  NATIVE_HOOK(0x626372u) REGS; LOADALL;
L_00626372:;
  /* 00626372 mov eax, dword ptr [ebp - 0x4c8] */ { const u32 m_ = (u32)(ebp + 0xfffffb38u); eax = (u32)(M32(m_)); }
  /* 00626378 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626379 mov ecx, dword ptr [ebp - 0x4b0] */ { const u32 m_ = (u32)(ebp + 0xfffffb50u); ecx = (u32)(M32(m_)); }
  /* 0062637f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00626380 call 0x459c10 */ esp -= 4; M32(esp) = 0x626385u; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x626380u); RETCHK(0x626385u, 0x626380u); LOADALL;
  /* 00626385 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00626388 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626389(CPU *c) {
  NATIVE_HOOK(0x626389u) REGS; LOADALL;
L_00626389:;
  /* 00626389 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062638c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626391(CPU *c) {
  NATIVE_HOOK(0x626391u) REGS; LOADALL;
L_00626391:;
  /* 00626391 mov eax, dword ptr [ebp - 0x4b0] */ { const u32 m_ = (u32)(ebp + 0xfffffb50u); eax = (u32)(M32(m_)); }
  /* 00626397 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626398 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62639du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626398u); RETCHK(0x62639du, 0x626398u); LOADALL;
  /* 0062639d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062639e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062639f(CPU *c) {
  NATIVE_HOOK(0x62639fu) REGS; LOADALL;
  goto L_0062639f;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062639f:;
  /* 0062639f mov eax, 0x66d8d0 */ { eax = (u32)(0x66d8d0u); }
  /* 006263a4 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006263b0(CPU *c) {
  NATIVE_HOOK(0x6263b0u) REGS; LOADALL;
L_006263b0:;
  /* 006263b0 mov eax, dword ptr [ebp - 0x2e0] */ { const u32 m_ = (u32)(ebp + 0xfffffd20u); eax = (u32)(M32(m_)); }
  /* 006263b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006263b7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6263bcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6263b7u); RETCHK(0x6263bcu, 0x6263b7u); LOADALL;
  /* 006263bc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006263bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006263be(CPU *c) {
  NATIVE_HOOK(0x6263beu) REGS; LOADALL;
L_006263be:;
  /* 006263be lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006263c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006263c6(CPU *c) {
  NATIVE_HOOK(0x6263c6u) REGS; LOADALL;
L_006263c6:;
  /* 006263c6 mov eax, dword ptr [ebp - 0x2e0] */ { const u32 m_ = (u32)(ebp + 0xfffffd20u); eax = (u32)(M32(m_)); }
  /* 006263cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006263cd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6263d2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6263cdu); RETCHK(0x6263d2u, 0x6263cdu); LOADALL;
  /* 006263d2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006263d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006263d4(CPU *c) {
  NATIVE_HOOK(0x6263d4u) REGS; LOADALL;
L_006263d4:;
  /* 006263d4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006263d7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006263dc(CPU *c) {
  NATIVE_HOOK(0x6263dcu) REGS; LOADALL;
L_006263dc:;
  /* 006263dc lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006263df jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006263e4(CPU *c) {
  NATIVE_HOOK(0x6263e4u) REGS; LOADALL;
L_006263e4:;
  /* 006263e4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006263e7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006263ec(CPU *c) {
  NATIVE_HOOK(0x6263ecu) REGS; LOADALL;
L_006263ec:;
  /* 006263ec lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006263ef jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006263f4(CPU *c) {
  NATIVE_HOOK(0x6263f4u) REGS; LOADALL;
L_006263f4:;
  /* 006263f4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006263f7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006263fc(CPU *c) {
  NATIVE_HOOK(0x6263fcu) REGS; LOADALL;
L_006263fc:;
  /* 006263fc lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006263ff jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626404(CPU *c) {
  NATIVE_HOOK(0x626404u) REGS; LOADALL;
L_00626404:;
  /* 00626404 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626407 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062640c(CPU *c) {
  NATIVE_HOOK(0x62640cu) REGS; LOADALL;
L_0062640c:;
  /* 0062640c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062640f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626414(CPU *c) {
  NATIVE_HOOK(0x626414u) REGS; LOADALL;
L_00626414:;
  /* 00626414 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626417 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062641c(CPU *c) {
  NATIVE_HOOK(0x62641cu) REGS; LOADALL;
L_0062641c:;
  /* 0062641c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062641f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626424(CPU *c) {
  NATIVE_HOOK(0x626424u) REGS; LOADALL;
L_00626424:;
  /* 00626424 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626427 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062642c(CPU *c) {
  NATIVE_HOOK(0x62642cu) REGS; LOADALL;
L_0062642c:;
  /* 0062642c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062642f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626434(CPU *c) {
  NATIVE_HOOK(0x626434u) REGS; LOADALL;
L_00626434:;
  /* 00626434 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626437 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062643c(CPU *c) {
  NATIVE_HOOK(0x62643cu) REGS; LOADALL;
L_0062643c:;
  /* 0062643c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062643f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626444(CPU *c) {
  NATIVE_HOOK(0x626444u) REGS; LOADALL;
L_00626444:;
  /* 00626444 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626447 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062644c(CPU *c) {
  NATIVE_HOOK(0x62644cu) REGS; LOADALL;
L_0062644c:;
  /* 0062644c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062644f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626454(CPU *c) {
  NATIVE_HOOK(0x626454u) REGS; LOADALL;
L_00626454:;
  /* 00626454 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626457 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062645c(CPU *c) {
  NATIVE_HOOK(0x62645cu) REGS; LOADALL;
L_0062645c:;
  /* 0062645c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062645f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626464(CPU *c) {
  NATIVE_HOOK(0x626464u) REGS; LOADALL;
L_00626464:;
  /* 00626464 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626467 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062646c(CPU *c) {
  NATIVE_HOOK(0x62646cu) REGS; LOADALL;
L_0062646c:;
  /* 0062646c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062646f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626474(CPU *c) {
  NATIVE_HOOK(0x626474u) REGS; LOADALL;
L_00626474:;
  /* 00626474 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626477 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062647c(CPU *c) {
  NATIVE_HOOK(0x62647cu) REGS; LOADALL;
L_0062647c:;
  /* 0062647c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062647f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626484(CPU *c) {
  NATIVE_HOOK(0x626484u) REGS; LOADALL;
L_00626484:;
  /* 00626484 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626487 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062648c(CPU *c) {
  NATIVE_HOOK(0x62648cu) REGS; LOADALL;
L_0062648c:;
  /* 0062648c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062648f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626494(CPU *c) {
  NATIVE_HOOK(0x626494u) REGS; LOADALL;
L_00626494:;
  /* 00626494 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626497 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062649c(CPU *c) {
  NATIVE_HOOK(0x62649cu) REGS; LOADALL;
L_0062649c:;
  /* 0062649c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062649f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264a4(CPU *c) {
  NATIVE_HOOK(0x6264a4u) REGS; LOADALL;
L_006264a4:;
  /* 006264a4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264a7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264ac(CPU *c) {
  NATIVE_HOOK(0x6264acu) REGS; LOADALL;
L_006264ac:;
  /* 006264ac lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264af jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264b4(CPU *c) {
  NATIVE_HOOK(0x6264b4u) REGS; LOADALL;
L_006264b4:;
  /* 006264b4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264b7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264bc(CPU *c) {
  NATIVE_HOOK(0x6264bcu) REGS; LOADALL;
L_006264bc:;
  /* 006264bc lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264bf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264c4(CPU *c) {
  NATIVE_HOOK(0x6264c4u) REGS; LOADALL;
L_006264c4:;
  /* 006264c4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264c7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264cc(CPU *c) {
  NATIVE_HOOK(0x6264ccu) REGS; LOADALL;
L_006264cc:;
  /* 006264cc lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264cf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264d4(CPU *c) {
  NATIVE_HOOK(0x6264d4u) REGS; LOADALL;
L_006264d4:;
  /* 006264d4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264d7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264dc(CPU *c) {
  NATIVE_HOOK(0x6264dcu) REGS; LOADALL;
L_006264dc:;
  /* 006264dc lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264df jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264e4(CPU *c) {
  NATIVE_HOOK(0x6264e4u) REGS; LOADALL;
L_006264e4:;
  /* 006264e4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264e7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264ec(CPU *c) {
  NATIVE_HOOK(0x6264ecu) REGS; LOADALL;
L_006264ec:;
  /* 006264ec lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264ef jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264f4(CPU *c) {
  NATIVE_HOOK(0x6264f4u) REGS; LOADALL;
L_006264f4:;
  /* 006264f4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264f7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006264fc(CPU *c) {
  NATIVE_HOOK(0x6264fcu) REGS; LOADALL;
L_006264fc:;
  /* 006264fc lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006264ff jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626504(CPU *c) {
  NATIVE_HOOK(0x626504u) REGS; LOADALL;
L_00626504:;
  /* 00626504 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626507 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062650c(CPU *c) {
  NATIVE_HOOK(0x62650cu) REGS; LOADALL;
L_0062650c:;
  /* 0062650c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062650f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626514(CPU *c) {
  NATIVE_HOOK(0x626514u) REGS; LOADALL;
L_00626514:;
  /* 00626514 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626517 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062651c(CPU *c) {
  NATIVE_HOOK(0x62651cu) REGS; LOADALL;
L_0062651c:;
  /* 0062651c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062651f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626524(CPU *c) {
  NATIVE_HOOK(0x626524u) REGS; LOADALL;
L_00626524:;
  /* 00626524 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626527 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062652c(CPU *c) {
  NATIVE_HOOK(0x62652cu) REGS; LOADALL;
L_0062652c:;
  /* 0062652c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062652f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626534(CPU *c) {
  NATIVE_HOOK(0x626534u) REGS; LOADALL;
L_00626534:;
  /* 00626534 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626537 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062653c(CPU *c) {
  NATIVE_HOOK(0x62653cu) REGS; LOADALL;
L_0062653c:;
  /* 0062653c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062653f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626544(CPU *c) {
  NATIVE_HOOK(0x626544u) REGS; LOADALL;
L_00626544:;
  /* 00626544 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626547 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062654c(CPU *c) {
  NATIVE_HOOK(0x62654cu) REGS; LOADALL;
L_0062654c:;
  /* 0062654c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062654f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626554(CPU *c) {
  NATIVE_HOOK(0x626554u) REGS; LOADALL;
L_00626554:;
  /* 00626554 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626557 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062655c(CPU *c) {
  NATIVE_HOOK(0x62655cu) REGS; LOADALL;
L_0062655c:;
  /* 0062655c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062655f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626564(CPU *c) {
  NATIVE_HOOK(0x626564u) REGS; LOADALL;
L_00626564:;
  /* 00626564 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626567 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062656c(CPU *c) {
  NATIVE_HOOK(0x62656cu) REGS; LOADALL;
L_0062656c:;
  /* 0062656c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062656f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626574(CPU *c) {
  NATIVE_HOOK(0x626574u) REGS; LOADALL;
L_00626574:;
  /* 00626574 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626577 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626577(CPU *c) {
  NATIVE_HOOK(0x626577u) REGS; LOADALL;
L_00626577:;
  /* 00626577 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062657c(CPU *c) {
  NATIVE_HOOK(0x62657cu) REGS; LOADALL;
L_0062657c:;
  /* 0062657c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062657f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626584(CPU *c) {
  NATIVE_HOOK(0x626584u) REGS; LOADALL;
L_00626584:;
  /* 00626584 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626587 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062658c(CPU *c) {
  NATIVE_HOOK(0x62658cu) REGS; LOADALL;
L_0062658c:;
  /* 0062658c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062658f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626594(CPU *c) {
  NATIVE_HOOK(0x626594u) REGS; LOADALL;
L_00626594:;
  /* 00626594 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626597 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062659c(CPU *c) {
  NATIVE_HOOK(0x62659cu) REGS; LOADALL;
L_0062659c:;
  /* 0062659c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062659f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265a4(CPU *c) {
  NATIVE_HOOK(0x6265a4u) REGS; LOADALL;
L_006265a4:;
  /* 006265a4 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006265a7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265ac(CPU *c) {
  NATIVE_HOOK(0x6265acu) REGS; LOADALL;
L_006265ac:;
  /* 006265ac lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 006265b2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265b7(CPU *c) {
  NATIVE_HOOK(0x6265b7u) REGS; LOADALL;
L_006265b7:;
  /* 006265b7 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 006265bd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265c2(CPU *c) {
  NATIVE_HOOK(0x6265c2u) REGS; LOADALL;
L_006265c2:;
  /* 006265c2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006265c5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265ca(CPU *c) {
  NATIVE_HOOK(0x6265cau) REGS; LOADALL;
L_006265ca:;
  /* 006265ca lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006265cd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265d2(CPU *c) {
  NATIVE_HOOK(0x6265d2u) REGS; LOADALL;
L_006265d2:;
  /* 006265d2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006265d5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265da(CPU *c) {
  NATIVE_HOOK(0x6265dau) REGS; LOADALL;
L_006265da:;
  /* 006265da lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006265dd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265e2(CPU *c) {
  NATIVE_HOOK(0x6265e2u) REGS; LOADALL;
L_006265e2:;
  /* 006265e2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006265e5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265ea(CPU *c) {
  NATIVE_HOOK(0x6265eau) REGS; LOADALL;
L_006265ea:;
  /* 006265ea lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006265ed jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265f2(CPU *c) {
  NATIVE_HOOK(0x6265f2u) REGS; LOADALL;
L_006265f2:;
  /* 006265f2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006265f5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006265fa(CPU *c) {
  NATIVE_HOOK(0x6265fau) REGS; LOADALL;
L_006265fa:;
  /* 006265fa lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006265fd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626602(CPU *c) {
  NATIVE_HOOK(0x626602u) REGS; LOADALL;
L_00626602:;
  /* 00626602 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626605 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062660a(CPU *c) {
  NATIVE_HOOK(0x62660au) REGS; LOADALL;
L_0062660a:;
  /* 0062660a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062660d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626612(CPU *c) {
  NATIVE_HOOK(0x626612u) REGS; LOADALL;
L_00626612:;
  /* 00626612 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626615 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062661a(CPU *c) {
  NATIVE_HOOK(0x62661au) REGS; LOADALL;
L_0062661a:;
  /* 0062661a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062661d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626622(CPU *c) {
  NATIVE_HOOK(0x626622u) REGS; LOADALL;
L_00626622:;
  /* 00626622 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626625 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062662a(CPU *c) {
  NATIVE_HOOK(0x62662au) REGS; LOADALL;
L_0062662a:;
  /* 0062662a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062662d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626632(CPU *c) {
  NATIVE_HOOK(0x626632u) REGS; LOADALL;
L_00626632:;
  /* 00626632 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626635 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062663a(CPU *c) {
  NATIVE_HOOK(0x62663au) REGS; LOADALL;
L_0062663a:;
  /* 0062663a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062663d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626642(CPU *c) {
  NATIVE_HOOK(0x626642u) REGS; LOADALL;
L_00626642:;
  /* 00626642 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626645 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062664a(CPU *c) {
  NATIVE_HOOK(0x62664au) REGS; LOADALL;
L_0062664a:;
  /* 0062664a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062664d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626652(CPU *c) {
  NATIVE_HOOK(0x626652u) REGS; LOADALL;
L_00626652:;
  /* 00626652 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626655 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062665a(CPU *c) {
  NATIVE_HOOK(0x62665au) REGS; LOADALL;
L_0062665a:;
  /* 0062665a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062665d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626662(CPU *c) {
  NATIVE_HOOK(0x626662u) REGS; LOADALL;
L_00626662:;
  /* 00626662 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626665 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062666a(CPU *c) {
  NATIVE_HOOK(0x62666au) REGS; LOADALL;
L_0062666a:;
  /* 0062666a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062666d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626672(CPU *c) {
  NATIVE_HOOK(0x626672u) REGS; LOADALL;
L_00626672:;
  /* 00626672 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626675 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062667a(CPU *c) {
  NATIVE_HOOK(0x62667au) REGS; LOADALL;
L_0062667a:;
  /* 0062667a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062667d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626682(CPU *c) {
  NATIVE_HOOK(0x626682u) REGS; LOADALL;
L_00626682:;
  /* 00626682 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626685 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062668a(CPU *c) {
  NATIVE_HOOK(0x62668au) REGS; LOADALL;
L_0062668a:;
  /* 0062668a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062668d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626692(CPU *c) {
  NATIVE_HOOK(0x626692u) REGS; LOADALL;
L_00626692:;
  /* 00626692 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626695 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062669a(CPU *c) {
  NATIVE_HOOK(0x62669au) REGS; LOADALL;
L_0062669a:;
  /* 0062669a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062669d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266a2(CPU *c) {
  NATIVE_HOOK(0x6266a2u) REGS; LOADALL;
L_006266a2:;
  /* 006266a2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006266a5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266aa(CPU *c) {
  NATIVE_HOOK(0x6266aau) REGS; LOADALL;
L_006266aa:;
  /* 006266aa lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006266ad jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266b2(CPU *c) {
  NATIVE_HOOK(0x6266b2u) REGS; LOADALL;
L_006266b2:;
  /* 006266b2 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006266b5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266ba(CPU *c) {
  NATIVE_HOOK(0x6266bau) REGS; LOADALL;
L_006266ba:;
  /* 006266ba mov eax, dword ptr [ebp - 0x2e0] */ { const u32 m_ = (u32)(ebp + 0xfffffd20u); eax = (u32)(M32(m_)); }
  /* 006266c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006266c1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6266c6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6266c1u); RETCHK(0x6266c6u, 0x6266c1u); LOADALL;
  /* 006266c6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006266c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006266c8(CPU *c) {
  NATIVE_HOOK(0x6266c8u) REGS; LOADALL;
L_006266c8:;
  /* 006266c8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006266cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266d0(CPU *c) {
  NATIVE_HOOK(0x6266d0u) REGS; LOADALL;
L_006266d0:;
  /* 006266d0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006266d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266d8(CPU *c) {
  NATIVE_HOOK(0x6266d8u) REGS; LOADALL;
L_006266d8:;
  /* 006266d8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006266db jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266e0(CPU *c) {
  NATIVE_HOOK(0x6266e0u) REGS; LOADALL;
L_006266e0:;
  /* 006266e0 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006266e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266e8(CPU *c) {
  NATIVE_HOOK(0x6266e8u) REGS; LOADALL;
L_006266e8:;
  /* 006266e8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006266eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266f0(CPU *c) {
  NATIVE_HOOK(0x6266f0u) REGS; LOADALL;
L_006266f0:;
  /* 006266f0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006266f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006266f8(CPU *c) {
  NATIVE_HOOK(0x6266f8u) REGS; LOADALL;
L_006266f8:;
  /* 006266f8 lea ecx, [ebp - 0x300] */ ecx = (u32)((u32)(ebp + 0xfffffd00u));
  /* 006266fe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626703(CPU *c) {
  NATIVE_HOOK(0x626703u) REGS; LOADALL;
L_00626703:;
  /* 00626703 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626706 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062670b(CPU *c) {
  NATIVE_HOOK(0x62670bu) REGS; LOADALL;
L_0062670b:;
  /* 0062670b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062670e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626713(CPU *c) {
  NATIVE_HOOK(0x626713u) REGS; LOADALL;
L_00626713:;
  /* 00626713 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626716 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062671b(CPU *c) {
  NATIVE_HOOK(0x62671bu) REGS; LOADALL;
L_0062671b:;
  /* 0062671b lea ecx, [ebp - 0x300] */ ecx = (u32)((u32)(ebp + 0xfffffd00u));
  /* 00626721 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626726(CPU *c) {
  NATIVE_HOOK(0x626726u) REGS; LOADALL;
L_00626726:;
  /* 00626726 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626729 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062672e(CPU *c) {
  NATIVE_HOOK(0x62672eu) REGS; LOADALL;
L_0062672e:;
  /* 0062672e lea ecx, [ebp - 0xd4] */ ecx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 00626734 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626739(CPU *c) {
  NATIVE_HOOK(0x626739u) REGS; LOADALL;
L_00626739:;
  /* 00626739 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0062673c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626741(CPU *c) {
  NATIVE_HOOK(0x626741u) REGS; LOADALL;
L_00626741:;
  /* 00626741 mov eax, dword ptr [ebp - 0x2e0] */ { const u32 m_ = (u32)(ebp + 0xfffffd20u); eax = (u32)(M32(m_)); }
  /* 00626747 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626748 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62674du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626748u); RETCHK(0x62674du, 0x626748u); LOADALL;
  /* 0062674d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062674e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062674f(CPU *c) {
  NATIVE_HOOK(0x62674fu) REGS; LOADALL;
L_0062674f:;
  /* 0062674f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626752 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626757(CPU *c) {
  NATIVE_HOOK(0x626757u) REGS; LOADALL;
L_00626757:;
  /* 00626757 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062675a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062675f(CPU *c) {
  NATIVE_HOOK(0x62675fu) REGS; LOADALL;
L_0062675f:;
  /* 0062675f lea ecx, [ebp - 0x300] */ ecx = (u32)((u32)(ebp + 0xfffffd00u));
  /* 00626765 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062676a(CPU *c) {
  NATIVE_HOOK(0x62676au) REGS; LOADALL;
  goto L_0062676a;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062676a:;
  /* 0062676a mov eax, 0x66dc80 */ { eax = (u32)(0x66dc80u); }
  /* 0062676f jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626780(CPU *c) {
  NATIVE_HOOK(0x626780u) REGS; LOADALL;
L_00626780:;
  /* 00626780 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00626783 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626788(CPU *c) {
  NATIVE_HOOK(0x626788u) REGS; LOADALL;
L_00626788:;
  /* 00626788 lea ecx, [ebp - 0xb4] */ ecx = (u32)((u32)(ebp + 0xffffff4cu));
  /* 0062678e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626793(CPU *c) {
  NATIVE_HOOK(0x626793u) REGS; LOADALL;
L_00626793:;
  /* 00626793 lea ecx, [ebp - 0x7c] */ ecx = (u32)((u32)(ebp + 0xffffff84u));
  /* 00626796 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062679b(CPU *c) {
  NATIVE_HOOK(0x62679bu) REGS; LOADALL;
L_0062679b:;
  /* 0062679b lea ecx, [ebp - 0xec] */ ecx = (u32)((u32)(ebp + 0xffffff14u));
  /* 006267a1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
