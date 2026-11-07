#include "funcs.h"

void F_00620458(CPU *c) {
  NATIVE_HOOK(0x620458u) REGS; LOADALL;
L_00620458:;
  /* 00620458 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062045b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620460(CPU *c) {
  NATIVE_HOOK(0x620460u) REGS; LOADALL;
L_00620460:;
  /* 00620460 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620463 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620468(CPU *c) {
  NATIVE_HOOK(0x620468u) REGS; LOADALL;
L_00620468:;
  /* 00620468 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 0062046b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620470(CPU *c) {
  NATIVE_HOOK(0x620470u) REGS; LOADALL;
L_00620470:;
  /* 00620470 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00620473 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620478(CPU *c) {
  NATIVE_HOOK(0x620478u) REGS; LOADALL;
  goto L_00620478;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620478:;
  /* 00620478 mov eax, 0x6662e4 */ { eax = (u32)(0x6662e4u); }
  /* 0062047d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620490(CPU *c) {
  NATIVE_HOOK(0x620490u) REGS; LOADALL;
L_00620490:;
  /* 00620490 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00620493 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_00620498(CPU *c) {
  NATIVE_HOOK(0x620498u) REGS; LOADALL;
L_00620498:;
  /* 00620498 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0062049b add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006204a1 jmp 0x4f0640 */ SAVEALL; F_004f0640(c); return;
}

void F_006204a6(CPU *c) {
  NATIVE_HOOK(0x6204a6u) REGS; LOADALL;
L_006204a6:;
  /* 006204a6 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 006204a9 add ecx, 0xbb78 */ { u32 a_ = ecx, b_ = 0xbb78u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006204af jmp 0x4f4d10 */ SAVEALL; F_004f4d10(c); return;
}

void F_006204b4(CPU *c) {
  NATIVE_HOOK(0x6204b4u) REGS; LOADALL;
L_006204b4:;
  /* 006204b4 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 006204b7 add ecx, 0xbc88 */ { u32 a_ = ecx, b_ = 0xbc88u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006204bd jmp 0x4f93f0 */ SAVEALL; F_004f93f0(c); return;
}

void F_006204c2(CPU *c) {
  NATIVE_HOOK(0x6204c2u) REGS; LOADALL;
L_006204c2:;
  /* 006204c2 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 006204c5 add esi, 0xbcc0 */ { u32 a_ = esi, b_ = 0xbcc0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 006204cb jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_006204d0(CPU *c) {
  NATIVE_HOOK(0x6204d0u) REGS; LOADALL;
L_006204d0:;
  /* 006204d0 mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 006204d3 add edi, 0xbcd0 */ { u32 a_ = edi, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 006204d9 jmp 0x4d7240 */ SAVEALL; F_004d7240(c); return;
}

void F_006204de(CPU *c) {
  NATIVE_HOOK(0x6204deu) REGS; LOADALL;
  goto L_006204de;
L_004b2800:;
  /* 004b2800 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004b2801 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004b2803 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b2804 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004b2805 mov esi, eax */ { esi = (u32)(eax); }
  /* 004b2807 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004b280a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004b280c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004b280d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b280e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004b2811 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004b2812 call 0x4d2820 */ esp -= 4; M32(esp) = 0x4b2817u; SAVEALL; F_004d2820(c); ABI_CHECK(0x4d2820u, 0x4b2812u); RETCHK(0x4b2817u, 0x4b2812u); LOADALL;
  /* 004b2817 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004b281a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b281b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4b2820u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4b281bu); RETCHK(0x4b2820u, 0x4b281bu); LOADALL;
  /* 004b2820 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004b2823 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004b2825 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004b2828 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 004b282b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004b282c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004b282e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004b282f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006204de:;
  /* 006204de mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 006204e1 add eax, 0xbe4c */ { u32 a_ = eax, b_ = 0xbe4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006204e6 jmp 0x4b2800 */ goto L_004b2800;
}

void F_006204eb(CPU *c) {
  NATIVE_HOOK(0x6204ebu) REGS; LOADALL;
  goto L_006204eb;
L_004b2800:;
  /* 004b2800 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004b2801 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004b2803 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b2804 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004b2805 mov esi, eax */ { esi = (u32)(eax); }
  /* 004b2807 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004b280a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004b280c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004b280d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b280e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004b2811 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004b2812 call 0x4d2820 */ esp -= 4; M32(esp) = 0x4b2817u; SAVEALL; F_004d2820(c); ABI_CHECK(0x4d2820u, 0x4b2812u); RETCHK(0x4b2817u, 0x4b2812u); LOADALL;
  /* 004b2817 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004b281a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b281b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4b2820u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4b281bu); RETCHK(0x4b2820u, 0x4b281bu); LOADALL;
  /* 004b2820 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004b2823 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004b2825 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004b2828 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 004b282b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004b282c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004b282e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004b282f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006204eb:;
  /* 006204eb mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 006204ee add eax, 0xbe58 */ { u32 a_ = eax, b_ = 0xbe58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 006204f3 jmp 0x4b2800 */ goto L_004b2800;
}

void F_006204f8(CPU *c) {
  NATIVE_HOOK(0x6204f8u) REGS; LOADALL;
  goto L_006204f8;
L_004b2800:;
  /* 004b2800 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004b2801 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004b2803 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b2804 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004b2805 mov esi, eax */ { esi = (u32)(eax); }
  /* 004b2807 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004b280a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004b280c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004b280d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b280e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004b2811 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004b2812 call 0x4d2820 */ esp -= 4; M32(esp) = 0x4b2817u; SAVEALL; F_004d2820(c); ABI_CHECK(0x4d2820u, 0x4b2812u); RETCHK(0x4b2817u, 0x4b2812u); LOADALL;
  /* 004b2817 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004b281a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b281b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4b2820u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4b281bu); RETCHK(0x4b2820u, 0x4b281bu); LOADALL;
  /* 004b2820 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004b2823 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004b2825 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004b2828 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 004b282b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004b282c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004b282e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004b282f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006204f8:;
  /* 006204f8 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 006204fb add eax, 0xc2d0 */ { u32 a_ = eax, b_ = 0xc2d0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00620500 jmp 0x4b2800 */ goto L_004b2800;
}

void F_00620505(CPU *c) {
  NATIVE_HOOK(0x620505u) REGS; LOADALL;
  goto L_00620505;
L_004b19c0:;
  /* 004b19c0 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 004b19c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004b19c5 je 0x4b19d7 */ if (ZF_) goto L_004b19d7;
  /* 004b19c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004b19c8 call 0x5ab020 */ esp -= 4; M32(esp) = 0x4b19cdu; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x4b19c8u); RETCHK(0x4b19cdu, 0x4b19c8u); LOADALL;
  /* 004b19cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004b19d0 mov dword ptr [esi + 0x28], 0 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x0u); }
L_004b19d7:;
  /* 004b19d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620505:;
  /* 00620505 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00620508 add esi, 0xc5f0 */ { u32 a_ = esi, b_ = 0xc5f0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0062050e jmp 0x4b19c0 */ goto L_004b19c0;
}

void F_00620513(CPU *c) {
  NATIVE_HOOK(0x620513u) REGS; LOADALL;
L_00620513:;
  /* 00620513 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00620516 add ecx, 0xc6d8 */ { u32 a_ = ecx, b_ = 0xc6d8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0062051c jmp 0x4cc540 */ SAVEALL; F_004cc540(c); return;
}

void F_00620521(CPU *c) {
  NATIVE_HOOK(0x620521u) REGS; LOADALL;
L_00620521:;
  /* 00620521 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00620524 add ecx, 0xcbcc */ { u32 a_ = ecx, b_ = 0xcbccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0062052a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062052f(CPU *c) {
  NATIVE_HOOK(0x62052fu) REGS; LOADALL;
L_0062052f:;
  /* 0062052f mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
  /* 00620532 add ebx, 0xcd60 */ { u32 a_ = ebx, b_ = 0xcd60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00620538 jmp 0x4d0c80 */ SAVEALL; F_004d0c80(c); return;
}

void F_0062053d(CPU *c) {
  NATIVE_HOOK(0x62053du) REGS; LOADALL;
L_0062053d:;
  /* 0062053d mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00620540 add ecx, 0xcdc4 */ { u32 a_ = ecx, b_ = 0xcdc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620546 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062054b(CPU *c) {
  NATIVE_HOOK(0x62054bu) REGS; LOADALL;
L_0062054b:;
  /* 0062054b mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0062054e add ecx, 0xcde0 */ { u32 a_ = ecx, b_ = 0xcde0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620554 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620559(CPU *c) {
  NATIVE_HOOK(0x620559u) REGS; LOADALL;
L_00620559:;
  /* 00620559 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 0062055c add esi, 0xce3c */ { u32 a_ = esi, b_ = 0xce3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00620562 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620567(CPU *c) {
  NATIVE_HOOK(0x620567u) REGS; LOADALL;
L_00620567:;
  /* 00620567 push 0x43ee60 */ { u32 v_ = 0x43ee60u; esp -= 4; M32(esp) = v_; }
  /* 0062056c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0062056e push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 00620570 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00620573 add eax, 0xcec8 */ { u32 a_ = eax, b_ = 0xcec8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00620578 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620579 call 0x5fe890 */ esp -= 4; M32(esp) = 0x62057eu; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x620579u); RETCHK(0x62057eu, 0x620579u); LOADALL;
  /* 0062057e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062057f(CPU *c) {
  NATIVE_HOOK(0x62057fu) REGS; LOADALL;
  goto L_0062057f;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062057f:;
  /* 0062057f mov eax, 0x666388 */ { eax = (u32)(0x666388u); }
  /* 00620584 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620590(CPU *c) {
  NATIVE_HOOK(0x620590u) REGS; LOADALL;
L_00620590:;
  /* 00620590 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620593 jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_00620598(CPU *c) {
  NATIVE_HOOK(0x620598u) REGS; LOADALL;
  goto L_00620598;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620598:;
  /* 00620598 mov eax, 0x6663fc */ { eax = (u32)(0x6663fcu); }
  /* 0062059d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006205b0(CPU *c) {
  NATIVE_HOOK(0x6205b0u) REGS; LOADALL;
L_006205b0:;
  /* 006205b0 lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 006205b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006205bb(CPU *c) {
  NATIVE_HOOK(0x6205bbu) REGS; LOADALL;
  goto L_006205bb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006205bb:;
  /* 006205bb mov eax, 0x666444 */ { eax = (u32)(0x666444u); }
  /* 006205c0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006205d0(CPU *c) {
  NATIVE_HOOK(0x6205d0u) REGS; LOADALL;
L_006205d0:;
  /* 006205d0 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006205d3 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_006205d8(CPU *c) {
  NATIVE_HOOK(0x6205d8u) REGS; LOADALL;
  goto L_006205d8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006205d8:;
  /* 006205d8 mov eax, 0x6664b8 */ { eax = (u32)(0x6664b8u); }
  /* 006205dd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006205f0(CPU *c) {
  NATIVE_HOOK(0x6205f0u) REGS; LOADALL;
L_006205f0:;
  /* 006205f0 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006205f3 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_006205f8(CPU *c) {
  NATIVE_HOOK(0x6205f8u) REGS; LOADALL;
  goto L_006205f8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006205f8:;
  /* 006205f8 mov eax, 0x6664dc */ { eax = (u32)(0x6664dcu); }
  /* 006205fd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620610(CPU *c) {
  NATIVE_HOOK(0x620610u) REGS; LOADALL;
L_00620610:;
  /* 00620610 lea ecx, [ebp - 0xd4] */ ecx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 00620616 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062061b(CPU *c) {
  NATIVE_HOOK(0x62061bu) REGS; LOADALL;
L_0062061b:;
  /* 0062061b lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 00620621 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620626(CPU *c) {
  NATIVE_HOOK(0x620626u) REGS; LOADALL;
L_00620626:;
  /* 00620626 lea ecx, [ebp - 0x10c] */ ecx = (u32)((u32)(ebp + 0xfffffef4u));
  /* 0062062c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620631(CPU *c) {
  NATIVE_HOOK(0x620631u) REGS; LOADALL;
L_00620631:;
  /* 00620631 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00620634 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620639(CPU *c) {
  NATIVE_HOOK(0x620639u) REGS; LOADALL;
L_00620639:;
  /* 00620639 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0062063f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620644(CPU *c) {
  NATIVE_HOOK(0x620644u) REGS; LOADALL;
L_00620644:;
  /* 00620644 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00620647 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062064c(CPU *c) {
  NATIVE_HOOK(0x62064cu) REGS; LOADALL;
L_0062064c:;
  /* 0062064c lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 00620652 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620657(CPU *c) {
  NATIVE_HOOK(0x620657u) REGS; LOADALL;
L_00620657:;
  /* 00620657 lea ecx, [ebp - 0xf0] */ ecx = (u32)((u32)(ebp + 0xffffff10u));
  /* 0062065d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620662(CPU *c) {
  NATIVE_HOOK(0x620662u) REGS; LOADALL;
L_00620662:;
  /* 00620662 lea ecx, [ebp - 0x128] */ ecx = (u32)((u32)(ebp + 0xfffffed8u));
  /* 00620668 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062066d(CPU *c) {
  NATIVE_HOOK(0x62066du) REGS; LOADALL;
L_0062066d:;
  /* 0062066d lea ecx, [ebp - 0x160] */ ecx = (u32)((u32)(ebp + 0xfffffea0u));
  /* 00620673 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620678(CPU *c) {
  NATIVE_HOOK(0x620678u) REGS; LOADALL;
L_00620678:;
  /* 00620678 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062067b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620680(CPU *c) {
  NATIVE_HOOK(0x620680u) REGS; LOADALL;
L_00620680:;
  /* 00620680 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620683 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620688(CPU *c) {
  NATIVE_HOOK(0x620688u) REGS; LOADALL;
L_00620688:;
  /* 00620688 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062068b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620690(CPU *c) {
  NATIVE_HOOK(0x620690u) REGS; LOADALL;
  goto L_00620690;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620690:;
  /* 00620690 mov eax, 0x666560 */ { eax = (u32)(0x666560u); }
  /* 00620695 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006206a0(CPU *c) {
  NATIVE_HOOK(0x6206a0u) REGS; LOADALL;
L_006206a0:;
  /* 006206a0 lea ecx, [ebp - 0x114] */ ecx = (u32)((u32)(ebp + 0xfffffeecu));
  /* 006206a6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006206ab(CPU *c) {
  NATIVE_HOOK(0x6206abu) REGS; LOADALL;
L_006206ab:;
  /* 006206ab lea ecx, [ebp - 0x168] */ ecx = (u32)((u32)(ebp + 0xfffffe98u));
  /* 006206b1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006206b6(CPU *c) {
  NATIVE_HOOK(0x6206b6u) REGS; LOADALL;
L_006206b6:;
  /* 006206b6 lea ecx, [ebp - 0x130] */ ecx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 006206bc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006206c1(CPU *c) {
  NATIVE_HOOK(0x6206c1u) REGS; LOADALL;
L_006206c1:;
  /* 006206c1 lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 006206c7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006206cc(CPU *c) {
  NATIVE_HOOK(0x6206ccu) REGS; LOADALL;
L_006206cc:;
  /* 006206cc lea ecx, [ebp - 0x184] */ ecx = (u32)((u32)(ebp + 0xfffffe7cu));
  /* 006206d2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006206d7(CPU *c) {
  NATIVE_HOOK(0x6206d7u) REGS; LOADALL;
L_006206d7:;
  /* 006206d7 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006206dd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006206e2(CPU *c) {
  NATIVE_HOOK(0x6206e2u) REGS; LOADALL;
L_006206e2:;
  /* 006206e2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006206e5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006206ea(CPU *c) {
  NATIVE_HOOK(0x6206eau) REGS; LOADALL;
L_006206ea:;
  /* 006206ea lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006206ed jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006206f2(CPU *c) {
  NATIVE_HOOK(0x6206f2u) REGS; LOADALL;
L_006206f2:;
  /* 006206f2 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006206f5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006206fa(CPU *c) {
  NATIVE_HOOK(0x6206fau) REGS; LOADALL;
L_006206fa:;
  /* 006206fa lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00620700 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620705(CPU *c) {
  NATIVE_HOOK(0x620705u) REGS; LOADALL;
L_00620705:;
  /* 00620705 lea ecx, [ebp - 0xc8] */ ecx = (u32)((u32)(ebp + 0xffffff38u));
  /* 0062070b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620710(CPU *c) {
  NATIVE_HOOK(0x620710u) REGS; LOADALL;
  goto L_00620710;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620710:;
  /* 00620710 mov eax, 0x6665d8 */ { eax = (u32)(0x6665d8u); }
  /* 00620715 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620720(CPU *c) {
  NATIVE_HOOK(0x620720u) REGS; LOADALL;
L_00620720:;
  /* 00620720 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 00620723 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620728(CPU *c) {
  NATIVE_HOOK(0x620728u) REGS; LOADALL;
L_00620728:;
  /* 00620728 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062072b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620730(CPU *c) {
  NATIVE_HOOK(0x620730u) REGS; LOADALL;
L_00620730:;
  /* 00620730 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620733 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620738(CPU *c) {
  NATIVE_HOOK(0x620738u) REGS; LOADALL;
  goto L_00620738;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620738:;
  /* 00620738 mov eax, 0x666630 */ { eax = (u32)(0x666630u); }
  /* 0062073d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620750(CPU *c) {
  NATIVE_HOOK(0x620750u) REGS; LOADALL;
  goto L_00620750;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620750:;
  /* 00620750 mov eax, 0x666914 */ { eax = (u32)(0x666914u); }
  /* 00620755 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620760(CPU *c) {
  NATIVE_HOOK(0x620760u) REGS; LOADALL;
L_00620760:;
  /* 00620760 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00620763 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620764 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00620767 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00620768 call 0x459c10 */ esp -= 4; M32(esp) = 0x62076du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x620768u); RETCHK(0x62076du, 0x620768u); LOADALL;
  /* 0062076d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00620770 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00620771(CPU *c) {
  NATIVE_HOOK(0x620771u) REGS; LOADALL;
  goto L_00620771;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620771:;
  /* 00620771 mov eax, 0x66696c */ { eax = (u32)(0x66696cu); }
  /* 00620776 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620780(CPU *c) {
  NATIVE_HOOK(0x620780u) REGS; LOADALL;
L_00620780:;
  /* 00620780 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00620783 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620788(CPU *c) {
  NATIVE_HOOK(0x620788u) REGS; LOADALL;
L_00620788:;
  /* 00620788 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062078b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620790(CPU *c) {
  NATIVE_HOOK(0x620790u) REGS; LOADALL;
L_00620790:;
  /* 00620790 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00620793 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620798(CPU *c) {
  NATIVE_HOOK(0x620798u) REGS; LOADALL;
L_00620798:;
  /* 00620798 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062079b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006207a0(CPU *c) {
  NATIVE_HOOK(0x6207a0u) REGS; LOADALL;
L_006207a0:;
  /* 006207a0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006207a3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006207a8(CPU *c) {
  NATIVE_HOOK(0x6207a8u) REGS; LOADALL;
  goto L_006207a8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006207a8:;
  /* 006207a8 mov eax, 0x6669b0 */ { eax = (u32)(0x6669b0u); }
  /* 006207ad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006207c0(CPU *c) {
  NATIVE_HOOK(0x6207c0u) REGS; LOADALL;
L_006207c0:;
  /* 006207c0 mov eax, dword ptr [0x9bda4c] */ { const u32 m_ = (u32)(0x9bda4cu); eax = (u32)(M32(m_)); }
  /* 006207c5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006207c8 mov dword ptr [0x9bda4c], eax */ { const u32 m_ = (u32)(0x9bda4cu); M32(m_) = (u32)(eax); }
  /* 006207cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006207ce(CPU *c) {
  NATIVE_HOOK(0x6207ceu) REGS; LOADALL;
  goto L_006207ce;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006207ce:;
  /* 006207ce mov eax, 0x6669d4 */ { eax = (u32)(0x6669d4u); }
  /* 006207d3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006207e0(CPU *c) {
  NATIVE_HOOK(0x6207e0u) REGS; LOADALL;
L_006207e0:;
  /* 006207e0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 006207e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006207e4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 006207e7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006207e8 call 0x459c10 */ esp -= 4; M32(esp) = 0x6207edu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x6207e8u); RETCHK(0x6207edu, 0x6207e8u); LOADALL;
  /* 006207ed add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006207f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006207f1(CPU *c) {
  NATIVE_HOOK(0x6207f1u) REGS; LOADALL;
  goto L_006207f1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006207f1:;
  /* 006207f1 mov eax, 0x666b14 */ { eax = (u32)(0x666b14u); }
  /* 006207f6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620800(CPU *c) {
  NATIVE_HOOK(0x620800u) REGS; LOADALL;
L_00620800:;
  /* 00620800 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00620803 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620804 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00620807 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00620808 call 0x459c10 */ esp -= 4; M32(esp) = 0x62080du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x620808u); RETCHK(0x62080du, 0x620808u); LOADALL;
  /* 0062080d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00620810 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00620811(CPU *c) {
  NATIVE_HOOK(0x620811u) REGS; LOADALL;
  goto L_00620811;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620811:;
  /* 00620811 mov eax, 0x666b6c */ { eax = (u32)(0x666b6cu); }
  /* 00620816 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620820(CPU *c) {
  NATIVE_HOOK(0x620820u) REGS; LOADALL;
L_00620820:;
  /* 00620820 lea esi, [ebp + 0x10] */ esi = (u32)((u32)(ebp + 0x10u));
  /* 00620823 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_00620828(CPU *c) {
  NATIVE_HOOK(0x620828u) REGS; LOADALL;
  goto L_00620828;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620828:;
  /* 00620828 mov eax, 0x666bb4 */ { eax = (u32)(0x666bb4u); }
  /* 0062082d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620840(CPU *c) {
  NATIVE_HOOK(0x620840u) REGS; LOADALL;
L_00620840:;
  /* 00620840 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00620843 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620844 call 0x45c260 */ esp -= 4; M32(esp) = 0x620849u; SAVEALL; F_0045c260(c); ABI_CHECK(0x45c260u, 0x620844u); RETCHK(0x620849u, 0x620844u); LOADALL;
  /* 00620849 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062084a(CPU *c) {
  NATIVE_HOOK(0x62084au) REGS; LOADALL;
  goto L_0062084a;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062084a:;
  /* 0062084a mov eax, 0x666c0c */ { eax = (u32)(0x666c0cu); }
  /* 0062084f jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620860(CPU *c) {
  NATIVE_HOOK(0x620860u) REGS; LOADALL;
L_00620860:;
  /* 00620860 lea esi, [ebp - 0x60] */ esi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00620863 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_00620868(CPU *c) {
  NATIVE_HOOK(0x620868u) REGS; LOADALL;
L_00620868:;
  /* 00620868 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0062086b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062086c call 0x45c260 */ esp -= 4; M32(esp) = 0x620871u; SAVEALL; F_0045c260(c); ABI_CHECK(0x45c260u, 0x62086cu); RETCHK(0x620871u, 0x62086cu); LOADALL;
  /* 00620871 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00620872(CPU *c) {
  NATIVE_HOOK(0x620872u) REGS; LOADALL;
L_00620872:;
  /* 00620872 lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00620875 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0062087a(CPU *c) {
  NATIVE_HOOK(0x62087au) REGS; LOADALL;
L_0062087a:;
  /* 0062087a lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0062087d jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_00620882(CPU *c) {
  NATIVE_HOOK(0x620882u) REGS; LOADALL;
  goto L_00620882;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620882:;
  /* 00620882 mov eax, 0x666c48 */ { eax = (u32)(0x666c48u); }
  /* 00620887 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620890(CPU *c) {
  NATIVE_HOOK(0x620890u) REGS; LOADALL;
L_00620890:;
  /* 00620890 lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00620893 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_00620898(CPU *c) {
  NATIVE_HOOK(0x620898u) REGS; LOADALL;
L_00620898:;
  /* 00620898 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0062089b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062089c call 0x45c140 */ esp -= 4; M32(esp) = 0x6208a1u; SAVEALL; F_0045c140(c); ABI_CHECK(0x45c140u, 0x62089cu); RETCHK(0x6208a1u, 0x62089cu); LOADALL;
  /* 006208a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006208a2(CPU *c) {
  NATIVE_HOOK(0x6208a2u) REGS; LOADALL;
L_006208a2:;
  /* 006208a2 lea esi, [ebp - 0x60] */ esi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 006208a5 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_006208aa(CPU *c) {
  NATIVE_HOOK(0x6208aau) REGS; LOADALL;
L_006208aa:;
  /* 006208aa lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 006208ad jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_006208b2(CPU *c) {
  NATIVE_HOOK(0x6208b2u) REGS; LOADALL;
  goto L_006208b2;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006208b2:;
  /* 006208b2 mov eax, 0x666c84 */ { eax = (u32)(0x666c84u); }
  /* 006208b7 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006208c0(CPU *c) {
  NATIVE_HOOK(0x6208c0u) REGS; LOADALL;
L_006208c0:;
  /* 006208c0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006208c3 jmp 0x45bec0 */ SAVEALL; F_0045bec0(c); return;
}

void F_006208c8(CPU *c) {
  NATIVE_HOOK(0x6208c8u) REGS; LOADALL;
L_006208c8:;
  /* 006208c8 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 006208cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006208d0(CPU *c) {
  NATIVE_HOOK(0x6208d0u) REGS; LOADALL;
  goto L_006208d0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006208d0:;
  /* 006208d0 mov eax, 0x666cb0 */ { eax = (u32)(0x666cb0u); }
  /* 006208d5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006208e0(CPU *c) {
  NATIVE_HOOK(0x6208e0u) REGS; LOADALL;
L_006208e0:;
  /* 006208e0 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006208e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006208e4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6208e9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6208e4u); RETCHK(0x6208e9u, 0x6208e4u); LOADALL;
  /* 006208e9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006208ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006208eb(CPU *c) {
  NATIVE_HOOK(0x6208ebu) REGS; LOADALL;
L_006208eb:;
  /* 006208eb mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006208ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006208ef call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6208f4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6208efu); RETCHK(0x6208f4u, 0x6208efu); LOADALL;
  /* 006208f4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006208f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006208f6(CPU *c) {
  NATIVE_HOOK(0x6208f6u) REGS; LOADALL;
  goto L_006208f6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006208f6:;
  /* 006208f6 mov eax, 0x666e14 */ { eax = (u32)(0x666e14u); }
  /* 006208fb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620900(CPU *c) {
  NATIVE_HOOK(0x620900u) REGS; LOADALL;
L_00620900:;
  /* 00620900 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620903 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620908(CPU *c) {
  NATIVE_HOOK(0x620908u) REGS; LOADALL;
L_00620908:;
  /* 00620908 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062090b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620910(CPU *c) {
  NATIVE_HOOK(0x620910u) REGS; LOADALL;
L_00620910:;
  /* 00620910 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 00620913 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620918(CPU *c) {
  NATIVE_HOOK(0x620918u) REGS; LOADALL;
L_00620918:;
  /* 00620918 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 0062091b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620920(CPU *c) {
  NATIVE_HOOK(0x620920u) REGS; LOADALL;
  goto L_00620920;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620920:;
  /* 00620920 mov eax, 0x666e50 */ { eax = (u32)(0x666e50u); }
  /* 00620925 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620930(CPU *c) {
  NATIVE_HOOK(0x620930u) REGS; LOADALL;
L_00620930:;
  /* 00620930 mov eax, dword ptr [0x9bdcdc] */ { const u32 m_ = (u32)(0x9bdcdcu); eax = (u32)(M32(m_)); }
  /* 00620935 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00620938 mov dword ptr [0x9bdcdc], eax */ { const u32 m_ = (u32)(0x9bdcdcu); M32(m_) = (u32)(eax); }
  /* 0062093d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062093e(CPU *c) {
  NATIVE_HOOK(0x62093eu) REGS; LOADALL;
L_0062093e:;
  /* 0062093e lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00620941 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620946(CPU *c) {
  NATIVE_HOOK(0x620946u) REGS; LOADALL;
L_00620946:;
  /* 00620946 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00620949 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062094e(CPU *c) {
  NATIVE_HOOK(0x62094eu) REGS; LOADALL;
  goto L_0062094e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062094e:;
  /* 0062094e mov eax, 0x666e84 */ { eax = (u32)(0x666e84u); }
  /* 00620953 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620960(CPU *c) {
  NATIVE_HOOK(0x620960u) REGS; LOADALL;
L_00620960:;
  /* 00620960 mov eax, dword ptr [0x9be070] */ { const u32 m_ = (u32)(0x9be070u); eax = (u32)(M32(m_)); }
  /* 00620965 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00620968 mov dword ptr [0x9be070], eax */ { const u32 m_ = (u32)(0x9be070u); M32(m_) = (u32)(eax); }
  /* 0062096d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062096e(CPU *c) {
  NATIVE_HOOK(0x62096eu) REGS; LOADALL;
  goto L_0062096e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062096e:;
  /* 0062096e mov eax, 0x666ea8 */ { eax = (u32)(0x666ea8u); }
  /* 00620973 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620980(CPU *c) {
  NATIVE_HOOK(0x620980u) REGS; LOADALL;
L_00620980:;
  /* 00620980 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00620983 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620984 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00620987 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00620988 call 0x459c10 */ esp -= 4; M32(esp) = 0x62098du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x620988u); RETCHK(0x62098du, 0x620988u); LOADALL;
  /* 0062098d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00620990 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00620991(CPU *c) {
  NATIVE_HOOK(0x620991u) REGS; LOADALL;
  goto L_00620991;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620991:;
  /* 00620991 mov eax, 0x666f00 */ { eax = (u32)(0x666f00u); }
  /* 00620996 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006209a0(CPU *c) {
  NATIVE_HOOK(0x6209a0u) REGS; LOADALL;
L_006209a0:;
  /* 006209a0 lea esi, [ebp - 0x44] */ esi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006209a3 jmp 0x435330 */ SAVEALL; F_00435330(c); return;
}

void F_006209a8(CPU *c) {
  NATIVE_HOOK(0x6209a8u) REGS; LOADALL;
  goto L_006209a8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006209a8:;
  /* 006209a8 mov eax, 0x666f8c */ { eax = (u32)(0x666f8cu); }
  /* 006209ad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006209c0(CPU *c) {
  NATIVE_HOOK(0x6209c0u) REGS; LOADALL;
L_006209c0:;
  /* 006209c0 lea ecx, [ebp - 0x5c] */ ecx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 006209c3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006209c8(CPU *c) {
  NATIVE_HOOK(0x6209c8u) REGS; LOADALL;
L_006209c8:;
  /* 006209c8 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 006209ce jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_006209d3(CPU *c) {
  NATIVE_HOOK(0x6209d3u) REGS; LOADALL;
L_006209d3:;
  /* 006209d3 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 006209d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006209db(CPU *c) {
  NATIVE_HOOK(0x6209dbu) REGS; LOADALL;
L_006209db:;
  /* 006209db lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006209de jmp 0x435330 */ SAVEALL; F_00435330(c); return;
}

void F_006209e3(CPU *c) {
  NATIVE_HOOK(0x6209e3u) REGS; LOADALL;
  goto L_006209e3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006209e3:;
  /* 006209e3 mov eax, 0x667018 */ { eax = (u32)(0x667018u); }
  /* 006209e8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006209f0(CPU *c) {
  NATIVE_HOOK(0x6209f0u) REGS; LOADALL;
L_006209f0:;
  /* 006209f0 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 006209f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006209f4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6209f9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6209f4u); RETCHK(0x6209f9u, 0x6209f4u); LOADALL;
  /* 006209f9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006209fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006209fb(CPU *c) {
  NATIVE_HOOK(0x6209fbu) REGS; LOADALL;
L_006209fb:;
  /* 006209fb mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 006209fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006209ff call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x620a04u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6209ffu); RETCHK(0x620a04u, 0x6209ffu); LOADALL;
  /* 00620a04 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00620a05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00620a06(CPU *c) {
  NATIVE_HOOK(0x620a06u) REGS; LOADALL;
  goto L_00620a06;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620a06:;
  /* 00620a06 mov eax, 0x667094 */ { eax = (u32)(0x667094u); }
  /* 00620a0b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620a10(CPU *c) {
  NATIVE_HOOK(0x620a10u) REGS; LOADALL;
L_00620a10:;
  /* 00620a10 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00620a13 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620a18(CPU *c) {
  NATIVE_HOOK(0x620a18u) REGS; LOADALL;
L_00620a18:;
  /* 00620a18 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620a1b jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620a20(CPU *c) {
  NATIVE_HOOK(0x620a20u) REGS; LOADALL;
L_00620a20:;
  /* 00620a20 lea esi, [ebp - 0x3c] */ esi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00620a23 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620a28(CPU *c) {
  NATIVE_HOOK(0x620a28u) REGS; LOADALL;
  goto L_00620a28;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620a28:;
  /* 00620a28 mov eax, 0x66713c */ { eax = (u32)(0x66713cu); }
  /* 00620a2d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620a40(CPU *c) {
  NATIVE_HOOK(0x620a40u) REGS; LOADALL;
L_00620a40:;
  /* 00620a40 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a43 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a48(CPU *c) {
  NATIVE_HOOK(0x620a48u) REGS; LOADALL;
L_00620a48:;
  /* 00620a48 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a4b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a50(CPU *c) {
  NATIVE_HOOK(0x620a50u) REGS; LOADALL;
L_00620a50:;
  /* 00620a50 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a58(CPU *c) {
  NATIVE_HOOK(0x620a58u) REGS; LOADALL;
L_00620a58:;
  /* 00620a58 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a5b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a60(CPU *c) {
  NATIVE_HOOK(0x620a60u) REGS; LOADALL;
L_00620a60:;
  /* 00620a60 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a68(CPU *c) {
  NATIVE_HOOK(0x620a68u) REGS; LOADALL;
L_00620a68:;
  /* 00620a68 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a6b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a70(CPU *c) {
  NATIVE_HOOK(0x620a70u) REGS; LOADALL;
L_00620a70:;
  /* 00620a70 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a78(CPU *c) {
  NATIVE_HOOK(0x620a78u) REGS; LOADALL;
L_00620a78:;
  /* 00620a78 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a7b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a80(CPU *c) {
  NATIVE_HOOK(0x620a80u) REGS; LOADALL;
L_00620a80:;
  /* 00620a80 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a83 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a88(CPU *c) {
  NATIVE_HOOK(0x620a88u) REGS; LOADALL;
L_00620a88:;
  /* 00620a88 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a8b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a90(CPU *c) {
  NATIVE_HOOK(0x620a90u) REGS; LOADALL;
L_00620a90:;
  /* 00620a90 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a93 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620a98(CPU *c) {
  NATIVE_HOOK(0x620a98u) REGS; LOADALL;
L_00620a98:;
  /* 00620a98 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620a9b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620aa0(CPU *c) {
  NATIVE_HOOK(0x620aa0u) REGS; LOADALL;
L_00620aa0:;
  /* 00620aa0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620aa3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620aa8(CPU *c) {
  NATIVE_HOOK(0x620aa8u) REGS; LOADALL;
L_00620aa8:;
  /* 00620aa8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620aab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ab0(CPU *c) {
  NATIVE_HOOK(0x620ab0u) REGS; LOADALL;
L_00620ab0:;
  /* 00620ab0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620ab3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ab8(CPU *c) {
  NATIVE_HOOK(0x620ab8u) REGS; LOADALL;
L_00620ab8:;
  /* 00620ab8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620abb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ac0(CPU *c) {
  NATIVE_HOOK(0x620ac0u) REGS; LOADALL;
L_00620ac0:;
  /* 00620ac0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620ac3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ac8(CPU *c) {
  NATIVE_HOOK(0x620ac8u) REGS; LOADALL;
L_00620ac8:;
  /* 00620ac8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620acb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ad0(CPU *c) {
  NATIVE_HOOK(0x620ad0u) REGS; LOADALL;
L_00620ad0:;
  /* 00620ad0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620ad3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ad8(CPU *c) {
  NATIVE_HOOK(0x620ad8u) REGS; LOADALL;
L_00620ad8:;
  /* 00620ad8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620adb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ae0(CPU *c) {
  NATIVE_HOOK(0x620ae0u) REGS; LOADALL;
L_00620ae0:;
  /* 00620ae0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620ae3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ae8(CPU *c) {
  NATIVE_HOOK(0x620ae8u) REGS; LOADALL;
L_00620ae8:;
  /* 00620ae8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620aeb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620af0(CPU *c) {
  NATIVE_HOOK(0x620af0u) REGS; LOADALL;
L_00620af0:;
  /* 00620af0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620af3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620af8(CPU *c) {
  NATIVE_HOOK(0x620af8u) REGS; LOADALL;
L_00620af8:;
  /* 00620af8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620afb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b00(CPU *c) {
  NATIVE_HOOK(0x620b00u) REGS; LOADALL;
L_00620b00:;
  /* 00620b00 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620b03 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b08(CPU *c) {
  NATIVE_HOOK(0x620b08u) REGS; LOADALL;
L_00620b08:;
  /* 00620b08 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620b0b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b10(CPU *c) {
  NATIVE_HOOK(0x620b10u) REGS; LOADALL;
L_00620b10:;
  /* 00620b10 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620b13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
