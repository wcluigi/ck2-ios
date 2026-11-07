#include "funcs.h"

void F_0061f5a8(CPU *c) {
  NATIVE_HOOK(0x61f5a8u) REGS; LOADALL;
  goto L_0061f5a8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f5a8:;
  /* 0061f5a8 mov eax, 0x6638bc */ { eax = (u32)(0x6638bcu); }
  /* 0061f5ad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f5c0(CPU *c) {
  NATIVE_HOOK(0x61f5c0u) REGS; LOADALL;
L_0061f5c0:;
  /* 0061f5c0 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061f5c3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f5c8(CPU *c) {
  NATIVE_HOOK(0x61f5c8u) REGS; LOADALL;
L_0061f5c8:;
  /* 0061f5c8 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061f5cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f5d0(CPU *c) {
  NATIVE_HOOK(0x61f5d0u) REGS; LOADALL;
L_0061f5d0:;
  /* 0061f5d0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061f5d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f5d8(CPU *c) {
  NATIVE_HOOK(0x61f5d8u) REGS; LOADALL;
  goto L_0061f5d8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f5d8:;
  /* 0061f5d8 mov eax, 0x663914 */ { eax = (u32)(0x663914u); }
  /* 0061f5dd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f5f0(CPU *c) {
  NATIVE_HOOK(0x61f5f0u) REGS; LOADALL;
L_0061f5f0:;
  /* 0061f5f0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f5f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f5f8(CPU *c) {
  NATIVE_HOOK(0x61f5f8u) REGS; LOADALL;
L_0061f5f8:;
  /* 0061f5f8 lea ecx, [ebp - 0x248] */ ecx = (u32)((u32)(ebp + 0xfffffdb8u));
  /* 0061f5fe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f603(CPU *c) {
  NATIVE_HOOK(0x61f603u) REGS; LOADALL;
  goto L_0061f603;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f603:;
  /* 0061f603 mov eax, 0x6639d0 */ { eax = (u32)(0x6639d0u); }
  /* 0061f608 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f610(CPU *c) {
  NATIVE_HOOK(0x61f610u) REGS; LOADALL;
L_0061f610:;
  /* 0061f610 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0061f613 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f618(CPU *c) {
  NATIVE_HOOK(0x61f618u) REGS; LOADALL;
L_0061f618:;
  /* 0061f618 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0061f61b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f620(CPU *c) {
  NATIVE_HOOK(0x61f620u) REGS; LOADALL;
L_0061f620:;
  /* 0061f620 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0061f623 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f628(CPU *c) {
  NATIVE_HOOK(0x61f628u) REGS; LOADALL;
L_0061f628:;
  /* 0061f628 lea ecx, [ebp - 0x5c] */ ecx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 0061f62b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f630(CPU *c) {
  NATIVE_HOOK(0x61f630u) REGS; LOADALL;
L_0061f630:;
  /* 0061f630 lea ecx, [ebp - 0x78] */ ecx = (u32)((u32)(ebp + 0xffffff88u));
  /* 0061f633 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f638(CPU *c) {
  NATIVE_HOOK(0x61f638u) REGS; LOADALL;
L_0061f638:;
  /* 0061f638 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0061f63b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f640(CPU *c) {
  NATIVE_HOOK(0x61f640u) REGS; LOADALL;
L_0061f640:;
  /* 0061f640 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0061f643 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f648(CPU *c) {
  NATIVE_HOOK(0x61f648u) REGS; LOADALL;
L_0061f648:;
  /* 0061f648 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0061f64e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f653(CPU *c) {
  NATIVE_HOOK(0x61f653u) REGS; LOADALL;
  goto L_0061f653;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f653:;
  /* 0061f653 mov eax, 0x663a98 */ { eax = (u32)(0x663a98u); }
  /* 0061f658 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f660(CPU *c) {
  NATIVE_HOOK(0x61f660u) REGS; LOADALL;
L_0061f660:;
  /* 0061f660 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0061f663 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f668(CPU *c) {
  NATIVE_HOOK(0x61f668u) REGS; LOADALL;
  goto L_0061f668;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f668:;
  /* 0061f668 mov eax, 0x663abc */ { eax = (u32)(0x663abcu); }
  /* 0061f66d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f680(CPU *c) {
  NATIVE_HOOK(0x61f680u) REGS; LOADALL;
L_0061f680:;
  /* 0061f680 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f683 jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_0061f688(CPU *c) {
  NATIVE_HOOK(0x61f688u) REGS; LOADALL;
L_0061f688:;
  /* 0061f688 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061f68b add esi, 0x48c */ { u32 a_ = esi, b_ = 0x48cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061f691 jmp 0x417430 */ SAVEALL; F_00417430(c); return;
}

void F_0061f696(CPU *c) {
  NATIVE_HOOK(0x61f696u) REGS; LOADALL;
  goto L_0061f696;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f696:;
  /* 0061f696 mov eax, 0x663ae8 */ { eax = (u32)(0x663ae8u); }
  /* 0061f69b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f6a0(CPU *c) {
  NATIVE_HOOK(0x61f6a0u) REGS; LOADALL;
L_0061f6a0:;
  /* 0061f6a0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061f6a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f6a4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f6a7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f6a8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f6adu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f6a8u); RETCHK(0x61f6adu, 0x61f6a8u); LOADALL;
  /* 0061f6ad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f6b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f6b1(CPU *c) {
  NATIVE_HOOK(0x61f6b1u) REGS; LOADALL;
  goto L_0061f6b1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f6b1:;
  /* 0061f6b1 mov eax, 0x663be0 */ { eax = (u32)(0x663be0u); }
  /* 0061f6b6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f6c0(CPU *c) {
  NATIVE_HOOK(0x61f6c0u) REGS; LOADALL;
L_0061f6c0:;
  /* 0061f6c0 lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0061f6c3 jmp 0x4a6600 */ SAVEALL; F_004a6600(c); return;
}

void F_0061f6c8(CPU *c) {
  NATIVE_HOOK(0x61f6c8u) REGS; LOADALL;
  goto L_0061f6c8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f6c8:;
  /* 0061f6c8 mov eax, 0x663c6c */ { eax = (u32)(0x663c6cu); }
  /* 0061f6cd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f6e0(CPU *c) {
  NATIVE_HOOK(0x61f6e0u) REGS; LOADALL;
L_0061f6e0:;
  /* 0061f6e0 lea esi, [ebp - 0x58] */ esi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0061f6e3 jmp 0x44c990 */ SAVEALL; F_0044c990(c); return;
}

void F_0061f6e8(CPU *c) {
  NATIVE_HOOK(0x61f6e8u) REGS; LOADALL;
  goto L_0061f6e8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f6e8:;
  /* 0061f6e8 mov eax, 0x663cf8 */ { eax = (u32)(0x663cf8u); }
  /* 0061f6ed jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f700(CPU *c) {
  NATIVE_HOOK(0x61f700u) REGS; LOADALL;
L_0061f700:;
  /* 0061f700 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f703 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061f708(CPU *c) {
  NATIVE_HOOK(0x61f708u) REGS; LOADALL;
  goto L_0061f708;
L_0044bc40:;
  /* 0044bc40 mov dword ptr [ecx], 0x646f5c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x646f5cu); }
  /* 0044bc46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061f708:;
  /* 0061f708 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f70b add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061f711 jmp 0x44bc40 */ goto L_0044bc40;
}

void F_0061f716(CPU *c) {
  NATIVE_HOOK(0x61f716u) REGS; LOADALL;
  goto L_0061f716;
L_0044df10:;
  /* 0044df10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0044df11 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0044df14 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0044df16 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0044df18 je 0x44df3d */ if (ZF_) goto L_0044df3d;
  /* 0044df1a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0044df1b mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0044df1e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0044df20 je 0x44df2e */ if (ZF_) goto L_0044df2e;
L_0044df22:;
  /* 0044df22 call 0x44c990 */ esp -= 4; M32(esp) = 0x44df27u; SAVEALL; F_0044c990(c); ABI_CHECK(0x44c990u, 0x44df22u); RETCHK(0x44df27u, 0x44df22u); LOADALL;
  /* 0044df27 add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0044df2a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0044df2c jne 0x44df22 */ if (!ZF_) goto L_0044df22;
L_0044df2e:;
  /* 0044df2e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0044df31 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0044df32 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x44df37u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x44df32u); RETCHK(0x44df37u, 0x44df32u); LOADALL;
  /* 0044df37 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0044df3a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0044df3c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0044df3d:;
  /* 0044df3d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0044df40 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0044df43 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0044df46 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0044df47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061f716:;
  /* 0061f716 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061f719 add ebx, 0x118 */ { u32 a_ = ebx, b_ = 0x118u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061f71f jmp 0x44df10 */ goto L_0044df10;
}

void F_0061f724(CPU *c) {
  NATIVE_HOOK(0x61f724u) REGS; LOADALL;
  goto L_0061f724;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f724:;
  /* 0061f724 mov eax, 0x663d50 */ { eax = (u32)(0x663d50u); }
  /* 0061f729 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f730(CPU *c) {
  NATIVE_HOOK(0x61f730u) REGS; LOADALL;
L_0061f730:;
  /* 0061f730 mov eax, dword ptr [0x9bae50] */ { const u32 m_ = (u32)(0x9bae50u); eax = (u32)(M32(m_)); }
  /* 0061f735 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061f738 mov dword ptr [0x9bae50], eax */ { const u32 m_ = (u32)(0x9bae50u); M32(m_) = (u32)(eax); }
  /* 0061f73d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f73e(CPU *c) {
  NATIVE_HOOK(0x61f73eu) REGS; LOADALL;
  goto L_0061f73e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f73e:;
  /* 0061f73e mov eax, 0x663d74 */ { eax = (u32)(0x663d74u); }
  /* 0061f743 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f750(CPU *c) {
  NATIVE_HOOK(0x61f750u) REGS; LOADALL;
L_0061f750:;
  /* 0061f750 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f753 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_0061f758(CPU *c) {
  NATIVE_HOOK(0x61f758u) REGS; LOADALL;
L_0061f758:;
  /* 0061f758 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f75b add ecx, 0x1cc */ { u32 a_ = ecx, b_ = 0x1ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061f761 jmp 0x527610 */ SAVEALL; F_00527610(c); return;
}

void F_0061f766(CPU *c) {
  NATIVE_HOOK(0x61f766u) REGS; LOADALL;
  goto L_0061f766;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f766:;
  /* 0061f766 mov eax, 0x663dc4 */ { eax = (u32)(0x663dc4u); }
  /* 0061f76b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f770(CPU *c) {
  NATIVE_HOOK(0x61f770u) REGS; LOADALL;
L_0061f770:;
  /* 0061f770 lea esi, [ebp + 0xc] */ esi = (u32)((u32)(ebp + 0xcu));
  /* 0061f773 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061f778(CPU *c) {
  NATIVE_HOOK(0x61f778u) REGS; LOADALL;
  goto L_0061f778;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f778:;
  /* 0061f778 mov eax, 0x663de8 */ { eax = (u32)(0x663de8u); }
  /* 0061f77d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f790(CPU *c) {
  NATIVE_HOOK(0x61f790u) REGS; LOADALL;
L_0061f790:;
  /* 0061f790 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061f793 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f794 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f797 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f798 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f79du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f798u); RETCHK(0x61f79du, 0x61f798u); LOADALL;
  /* 0061f79d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f7a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f7a1(CPU *c) {
  NATIVE_HOOK(0x61f7a1u) REGS; LOADALL;
  goto L_0061f7a1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f7a1:;
  /* 0061f7a1 mov eax, 0x663e40 */ { eax = (u32)(0x663e40u); }
  /* 0061f7a6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f7b0(CPU *c) {
  NATIVE_HOOK(0x61f7b0u) REGS; LOADALL;
L_0061f7b0:;
  /* 0061f7b0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061f7b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f7b4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f7b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f7b8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f7bdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f7b8u); RETCHK(0x61f7bdu, 0x61f7b8u); LOADALL;
  /* 0061f7bd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f7c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f7c1(CPU *c) {
  NATIVE_HOOK(0x61f7c1u) REGS; LOADALL;
  goto L_0061f7c1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f7c1:;
  /* 0061f7c1 mov eax, 0x663ebc */ { eax = (u32)(0x663ebcu); }
  /* 0061f7c6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f7d0(CPU *c) {
  NATIVE_HOOK(0x61f7d0u) REGS; LOADALL;
L_0061f7d0:;
  /* 0061f7d0 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0061f7d3 jmp 0x434300 */ SAVEALL; F_00434300(c); return;
}

void F_0061f7d8(CPU *c) {
  NATIVE_HOOK(0x61f7d8u) REGS; LOADALL;
  goto L_0061f7d8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f7d8:;
  /* 0061f7d8 mov eax, 0x663f48 */ { eax = (u32)(0x663f48u); }
  /* 0061f7dd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f7f0(CPU *c) {
  NATIVE_HOOK(0x61f7f0u) REGS; LOADALL;
L_0061f7f0:;
  /* 0061f7f0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f7f3 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061f7f6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f7fb(CPU *c) {
  NATIVE_HOOK(0x61f7fbu) REGS; LOADALL;
  goto L_0061f7fb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f7fb:;
  /* 0061f7fb mov eax, 0x663f90 */ { eax = (u32)(0x663f90u); }
  /* 0061f800 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f810(CPU *c) {
  NATIVE_HOOK(0x61f810u) REGS; LOADALL;
L_0061f810:;
  /* 0061f810 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061f813 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f818(CPU *c) {
  NATIVE_HOOK(0x61f818u) REGS; LOADALL;
L_0061f818:;
  /* 0061f818 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061f81b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f820(CPU *c) {
  NATIVE_HOOK(0x61f820u) REGS; LOADALL;
  goto L_0061f820;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f820:;
  /* 0061f820 mov eax, 0x663fbc */ { eax = (u32)(0x663fbcu); }
  /* 0061f825 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f830(CPU *c) {
  NATIVE_HOOK(0x61f830u) REGS; LOADALL;
L_0061f830:;
  /* 0061f830 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061f833 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f838(CPU *c) {
  NATIVE_HOOK(0x61f838u) REGS; LOADALL;
L_0061f838:;
  /* 0061f838 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061f83b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f840(CPU *c) {
  NATIVE_HOOK(0x61f840u) REGS; LOADALL;
  goto L_0061f840;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f840:;
  /* 0061f840 mov eax, 0x663fe8 */ { eax = (u32)(0x663fe8u); }
  /* 0061f845 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f850(CPU *c) {
  NATIVE_HOOK(0x61f850u) REGS; LOADALL;
L_0061f850:;
  /* 0061f850 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061f853 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f854 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f857 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f858 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f85du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f858u); RETCHK(0x61f85du, 0x61f858u); LOADALL;
  /* 0061f85d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f860 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f861(CPU *c) {
  NATIVE_HOOK(0x61f861u) REGS; LOADALL;
  goto L_0061f861;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f861:;
  /* 0061f861 mov eax, 0x664064 */ { eax = (u32)(0x664064u); }
  /* 0061f866 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f870(CPU *c) {
  NATIVE_HOOK(0x61f870u) REGS; LOADALL;
L_0061f870:;
  /* 0061f870 lea esi, [ebp - 0x68] */ esi = (u32)((u32)(ebp + 0xffffff98u));
  /* 0061f873 jmp 0x42c910 */ SAVEALL; F_0042c910(c); return;
}

void F_0061f878(CPU *c) {
  NATIVE_HOOK(0x61f878u) REGS; LOADALL;
  goto L_0061f878;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f878:;
  /* 0061f878 mov eax, 0x6640f0 */ { eax = (u32)(0x6640f0u); }
  /* 0061f87d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f890(CPU *c) {
  NATIVE_HOOK(0x61f890u) REGS; LOADALL;
L_0061f890:;
  /* 0061f890 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061f893 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f894 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f897 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f898 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f89du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f898u); RETCHK(0x61f89du, 0x61f898u); LOADALL;
  /* 0061f89d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f8a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f8a1(CPU *c) {
  NATIVE_HOOK(0x61f8a1u) REGS; LOADALL;
  goto L_0061f8a1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f8a1:;
  /* 0061f8a1 mov eax, 0x66416c */ { eax = (u32)(0x66416cu); }
  /* 0061f8a6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f8b0(CPU *c) {
  NATIVE_HOOK(0x61f8b0u) REGS; LOADALL;
L_0061f8b0:;
  /* 0061f8b0 lea esi, [ebp - 0x7c] */ esi = (u32)((u32)(ebp + 0xffffff84u));
  /* 0061f8b3 jmp 0x42a3c0 */ SAVEALL; F_0042a3c0(c); return;
}

void F_0061f8b8(CPU *c) {
  NATIVE_HOOK(0x61f8b8u) REGS; LOADALL;
  goto L_0061f8b8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f8b8:;
  /* 0061f8b8 mov eax, 0x6641f8 */ { eax = (u32)(0x6641f8u); }
  /* 0061f8bd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f8d0(CPU *c) {
  NATIVE_HOOK(0x61f8d0u) REGS; LOADALL;
L_0061f8d0:;
  /* 0061f8d0 lea esi, [ebp - 0x78] */ esi = (u32)((u32)(ebp + 0xffffff88u));
  /* 0061f8d3 jmp 0x42a3c0 */ SAVEALL; F_0042a3c0(c); return;
}

void F_0061f8d8(CPU *c) {
  NATIVE_HOOK(0x61f8d8u) REGS; LOADALL;
L_0061f8d8:;
  /* 0061f8d8 lea ecx, [ebp - 0x294] */ ecx = (u32)((u32)(ebp + 0xfffffd6cu));
  /* 0061f8de jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f8e3(CPU *c) {
  NATIVE_HOOK(0x61f8e3u) REGS; LOADALL;
  goto L_0061f8e3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f8e3:;
  /* 0061f8e3 mov eax, 0x664248 */ { eax = (u32)(0x664248u); }
  /* 0061f8e8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f8f0(CPU *c) {
  NATIVE_HOOK(0x61f8f0u) REGS; LOADALL;
L_0061f8f0:;
  /* 0061f8f0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f8f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f8f8(CPU *c) {
  NATIVE_HOOK(0x61f8f8u) REGS; LOADALL;
L_0061f8f8:;
  /* 0061f8f8 lea ecx, [ebp - 0x284] */ ecx = (u32)((u32)(ebp + 0xfffffd7cu));
  /* 0061f8fe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f903(CPU *c) {
  NATIVE_HOOK(0x61f903u) REGS; LOADALL;
L_0061f903:;
  /* 0061f903 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061f906 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f90b(CPU *c) {
  NATIVE_HOOK(0x61f90bu) REGS; LOADALL;
L_0061f90b:;
  /* 0061f90b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061f90e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f913(CPU *c) {
  NATIVE_HOOK(0x61f913u) REGS; LOADALL;
L_0061f913:;
  /* 0061f913 lea ecx, [ebp - 0x284] */ ecx = (u32)((u32)(ebp + 0xfffffd7cu));
  /* 0061f919 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f91e(CPU *c) {
  NATIVE_HOOK(0x61f91eu) REGS; LOADALL;
  goto L_0061f91e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f91e:;
  /* 0061f91e mov eax, 0x66428c */ { eax = (u32)(0x66428cu); }
  /* 0061f923 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f930(CPU *c) {
  NATIVE_HOOK(0x61f930u) REGS; LOADALL;
  goto L_0061f930;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f930:;
  /* 0061f930 mov eax, 0x664300 */ { eax = (u32)(0x664300u); }
  /* 0061f935 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f940(CPU *c) {
  NATIVE_HOOK(0x61f940u) REGS; LOADALL;
L_0061f940:;
  /* 0061f940 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0061f943 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061f948(CPU *c) {
  NATIVE_HOOK(0x61f948u) REGS; LOADALL;
  goto L_0061f948;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f948:;
  /* 0061f948 mov eax, 0x66438c */ { eax = (u32)(0x66438cu); }
  /* 0061f94d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f960(CPU *c) {
  NATIVE_HOOK(0x61f960u) REGS; LOADALL;
L_0061f960:;
  /* 0061f960 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061f963 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f964 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f967 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f968 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f96du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f968u); RETCHK(0x61f96du, 0x61f968u); LOADALL;
  /* 0061f96d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f970 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f971(CPU *c) {
  NATIVE_HOOK(0x61f971u) REGS; LOADALL;
  goto L_0061f971;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f971:;
  /* 0061f971 mov eax, 0x664408 */ { eax = (u32)(0x664408u); }
  /* 0061f976 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f980(CPU *c) {
  NATIVE_HOOK(0x61f980u) REGS; LOADALL;
L_0061f980:;
  /* 0061f980 lea esi, [ebp - 0x8c] */ esi = (u32)((u32)(ebp + 0xffffff74u));
  /* 0061f986 jmp 0x423450 */ SAVEALL; F_00423450(c); return;
}

void F_0061f98b(CPU *c) {
  NATIVE_HOOK(0x61f98bu) REGS; LOADALL;
  goto L_0061f98b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f98b:;
  /* 0061f98b mov eax, 0x664494 */ { eax = (u32)(0x664494u); }
  /* 0061f990 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f9a0(CPU *c) {
  NATIVE_HOOK(0x61f9a0u) REGS; LOADALL;
  goto L_0061f9a0;
L_0041cdd0:;
  /* 0041cdd0 mov dword ptr [ecx], 0x644184 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x644184u); }
  /* 0041cdd6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061f9a0:;
  /* 0061f9a0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f9a3 jmp 0x41cdd0 */ goto L_0041cdd0;
}

void F_0061f9a8(CPU *c) {
  NATIVE_HOOK(0x61f9a8u) REGS; LOADALL;
  goto L_0061f9a8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f9a8:;
  /* 0061f9a8 mov eax, 0x664548 */ { eax = (u32)(0x664548u); }
  /* 0061f9ad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f9c0(CPU *c) {
  NATIVE_HOOK(0x61f9c0u) REGS; LOADALL;
L_0061f9c0:;
  /* 0061f9c0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f9c3 jmp 0x41cf40 */ SAVEALL; F_0041cf40(c); return;
}

void F_0061f9c8(CPU *c) {
  NATIVE_HOOK(0x61f9c8u) REGS; LOADALL;
  goto L_0061f9c8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f9c8:;
  /* 0061f9c8 mov eax, 0x66456c */ { eax = (u32)(0x66456cu); }
  /* 0061f9cd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f9e0(CPU *c) {
  NATIVE_HOOK(0x61f9e0u) REGS; LOADALL;
L_0061f9e0:;
  /* 0061f9e0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f9e3 jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_0061f9e8(CPU *c) {
  NATIVE_HOOK(0x61f9e8u) REGS; LOADALL;
L_0061f9e8:;
  /* 0061f9e8 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061f9eb add esi, 0x374 */ { u32 a_ = esi, b_ = 0x374u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061f9f1 jmp 0x417430 */ SAVEALL; F_00417430(c); return;
}

void F_0061f9f6(CPU *c) {
  NATIVE_HOOK(0x61f9f6u) REGS; LOADALL;
  goto L_0061f9f6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f9f6:;
  /* 0061f9f6 mov eax, 0x664598 */ { eax = (u32)(0x664598u); }
  /* 0061f9fb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fa00(CPU *c) {
  NATIVE_HOOK(0x61fa00u) REGS; LOADALL;
L_0061fa00:;
  /* 0061fa00 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061fa03 jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_0061fa08(CPU *c) {
  NATIVE_HOOK(0x61fa08u) REGS; LOADALL;
L_0061fa08:;
  /* 0061fa08 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061fa0b add esi, 0x358 */ { u32 a_ = esi, b_ = 0x358u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061fa11 jmp 0x417430 */ SAVEALL; F_00417430(c); return;
}

void F_0061fa16(CPU *c) {
  NATIVE_HOOK(0x61fa16u) REGS; LOADALL;
  goto L_0061fa16;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fa16:;
  /* 0061fa16 mov eax, 0x664624 */ { eax = (u32)(0x664624u); }
  /* 0061fa1b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fa20(CPU *c) {
  NATIVE_HOOK(0x61fa20u) REGS; LOADALL;
L_0061fa20:;
  /* 0061fa20 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061fa23 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fa28(CPU *c) {
  NATIVE_HOOK(0x61fa28u) REGS; LOADALL;
L_0061fa28:;
  /* 0061fa28 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0061fa2e jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061fa33(CPU *c) {
  NATIVE_HOOK(0x61fa33u) REGS; LOADALL;
L_0061fa33:;
  /* 0061fa33 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061fa36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fa3b(CPU *c) {
  NATIVE_HOOK(0x61fa3bu) REGS; LOADALL;
  goto L_0061fa3b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fa3b:;
  /* 0061fa3b mov eax, 0x664658 */ { eax = (u32)(0x664658u); }
  /* 0061fa40 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fa50(CPU *c) {
  NATIVE_HOOK(0x61fa50u) REGS; LOADALL;
L_0061fa50:;
  /* 0061fa50 mov eax, dword ptr [0x9bb268] */ { const u32 m_ = (u32)(0x9bb268u); eax = (u32)(M32(m_)); }
  /* 0061fa55 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061fa58 mov dword ptr [0x9bb268], eax */ { const u32 m_ = (u32)(0x9bb268u); M32(m_) = (u32)(eax); }
  /* 0061fa5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061fa5e(CPU *c) {
  NATIVE_HOOK(0x61fa5eu) REGS; LOADALL;
  goto L_0061fa5e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fa5e:;
  /* 0061fa5e mov eax, 0x66467c */ { eax = (u32)(0x66467cu); }
  /* 0061fa63 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fa70(CPU *c) {
  NATIVE_HOOK(0x61fa70u) REGS; LOADALL;
L_0061fa70:;
  /* 0061fa70 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061fa73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061fa74 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061fa77 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061fa78 call 0x459c10 */ esp -= 4; M32(esp) = 0x61fa7du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61fa78u); RETCHK(0x61fa7du, 0x61fa78u); LOADALL;
  /* 0061fa7d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061fa80 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061fa81(CPU *c) {
  NATIVE_HOOK(0x61fa81u) REGS; LOADALL;
  goto L_0061fa81;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fa81:;
  /* 0061fa81 mov eax, 0x6646d4 */ { eax = (u32)(0x6646d4u); }
  /* 0061fa86 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fa90(CPU *c) {
  NATIVE_HOOK(0x61fa90u) REGS; LOADALL;
L_0061fa90:;
  /* 0061fa90 lea esi, [ebp - 0x90] */ esi = (u32)((u32)(ebp + 0xffffff70u));
  /* 0061fa96 jmp 0x417430 */ SAVEALL; F_00417430(c); return;
}

void F_0061fa9b(CPU *c) {
  NATIVE_HOOK(0x61fa9bu) REGS; LOADALL;
  goto L_0061fa9b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fa9b:;
  /* 0061fa9b mov eax, 0x664760 */ { eax = (u32)(0x664760u); }
  /* 0061faa0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fab0(CPU *c) {
  NATIVE_HOOK(0x61fab0u) REGS; LOADALL;
L_0061fab0:;
  /* 0061fab0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061fab3 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061fab8(CPU *c) {
  NATIVE_HOOK(0x61fab8u) REGS; LOADALL;
L_0061fab8:;
  /* 0061fab8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061fabb add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061fac1 jmp 0x460ce0 */ SAVEALL; F_00460ce0(c); return;
}

void F_0061fac6(CPU *c) {
  NATIVE_HOOK(0x61fac6u) REGS; LOADALL;
L_0061fac6:;
  /* 0061fac6 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061fac9 add esi, 0x1d4 */ { u32 a_ = esi, b_ = 0x1d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061facf jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061fad4(CPU *c) {
  NATIVE_HOOK(0x61fad4u) REGS; LOADALL;
L_0061fad4:;
  /* 0061fad4 push 0x40e970 */ { u32 v_ = 0x40e970u; esp -= 4; M32(esp) = v_; }
  /* 0061fad9 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0061fadb push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 0061fadd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061fae0 add eax, 0x330 */ { u32 a_ = eax, b_ = 0x330u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061fae5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061fae6 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61faebu; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61fae6u); RETCHK(0x61faebu, 0x61fae6u); LOADALL;
  /* 0061faeb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061faec(CPU *c) {
  NATIVE_HOOK(0x61faecu) REGS; LOADALL;
L_0061faec:;
  /* 0061faec mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061faef add ecx, 0x3fc */ { u32 a_ = ecx, b_ = 0x3fcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061faf5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fafa(CPU *c) {
  NATIVE_HOOK(0x61fafau) REGS; LOADALL;
  goto L_0061fafa;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fafa:;
  /* 0061fafa mov eax, 0x6647f4 */ { eax = (u32)(0x6647f4u); }
  /* 0061faff jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fb10(CPU *c) {
  NATIVE_HOOK(0x61fb10u) REGS; LOADALL;
L_0061fb10:;
  /* 0061fb10 mov eax, dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); eax = (u32)(M32(m_)); }
  /* 0061fb16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061fb17 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61fb1cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61fb17u); RETCHK(0x61fb1cu, 0x61fb17u); LOADALL;
  /* 0061fb1c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061fb1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061fb1e(CPU *c) {
  NATIVE_HOOK(0x61fb1eu) REGS; LOADALL;
  goto L_0061fb1e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fb1e:;
  /* 0061fb1e mov eax, 0x664860 */ { eax = (u32)(0x664860u); }
  /* 0061fb23 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fb30(CPU *c) {
  NATIVE_HOOK(0x61fb30u) REGS; LOADALL;
L_0061fb30:;
  /* 0061fb30 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061fb33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061fb34 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061fb37 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061fb38 call 0x459c10 */ esp -= 4; M32(esp) = 0x61fb3du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61fb38u); RETCHK(0x61fb3du, 0x61fb38u); LOADALL;
  /* 0061fb3d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061fb40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061fb41(CPU *c) {
  NATIVE_HOOK(0x61fb41u) REGS; LOADALL;
  goto L_0061fb41;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fb41:;
  /* 0061fb41 mov eax, 0x6648b8 */ { eax = (u32)(0x6648b8u); }
  /* 0061fb46 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fb50(CPU *c) {
  NATIVE_HOOK(0x61fb50u) REGS; LOADALL;
L_0061fb50:;
  /* 0061fb50 lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0061fb56 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fb5b(CPU *c) {
  NATIVE_HOOK(0x61fb5bu) REGS; LOADALL;
L_0061fb5b:;
  /* 0061fb5b lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0061fb61 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fb66(CPU *c) {
  NATIVE_HOOK(0x61fb66u) REGS; LOADALL;
L_0061fb66:;
  /* 0061fb66 lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0061fb6c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fb71(CPU *c) {
  NATIVE_HOOK(0x61fb71u) REGS; LOADALL;
L_0061fb71:;
  /* 0061fb71 lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0061fb77 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fb7c(CPU *c) {
  NATIVE_HOOK(0x61fb7cu) REGS; LOADALL;
  goto L_0061fb7c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fb7c:;
  /* 0061fb7c mov eax, 0x6648f4 */ { eax = (u32)(0x6648f4u); }
  /* 0061fb81 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fb90(CPU *c) {
  NATIVE_HOOK(0x61fb90u) REGS; LOADALL;
L_0061fb90:;
  /* 0061fb90 lea ecx, [ebp + 0x24] */ ecx = (u32)((u32)(ebp + 0x24u));
  /* 0061fb93 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fb98(CPU *c) {
  NATIVE_HOOK(0x61fb98u) REGS; LOADALL;
L_0061fb98:;
  /* 0061fb98 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0061fb9b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fba0(CPU *c) {
  NATIVE_HOOK(0x61fba0u) REGS; LOADALL;
  goto L_0061fba0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fba0:;
  /* 0061fba0 mov eax, 0x664920 */ { eax = (u32)(0x664920u); }
  /* 0061fba5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fbb0(CPU *c) {
  NATIVE_HOOK(0x61fbb0u) REGS; LOADALL;
L_0061fbb0:;
  /* 0061fbb0 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fbb6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fbbb(CPU *c) {
  NATIVE_HOOK(0x61fbbbu) REGS; LOADALL;
L_0061fbbb:;
  /* 0061fbbb lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fbc1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fbc6(CPU *c) {
  NATIVE_HOOK(0x61fbc6u) REGS; LOADALL;
L_0061fbc6:;
  /* 0061fbc6 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fbcc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fbd1(CPU *c) {
  NATIVE_HOOK(0x61fbd1u) REGS; LOADALL;
L_0061fbd1:;
  /* 0061fbd1 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fbd7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fbdc(CPU *c) {
  NATIVE_HOOK(0x61fbdcu) REGS; LOADALL;
L_0061fbdc:;
  /* 0061fbdc lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fbe2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fbe7(CPU *c) {
  NATIVE_HOOK(0x61fbe7u) REGS; LOADALL;
L_0061fbe7:;
  /* 0061fbe7 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fbed jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fbf2(CPU *c) {
  NATIVE_HOOK(0x61fbf2u) REGS; LOADALL;
L_0061fbf2:;
  /* 0061fbf2 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fbf8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fbfd(CPU *c) {
  NATIVE_HOOK(0x61fbfdu) REGS; LOADALL;
L_0061fbfd:;
  /* 0061fbfd lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fc03 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fc08(CPU *c) {
  NATIVE_HOOK(0x61fc08u) REGS; LOADALL;
L_0061fc08:;
  /* 0061fc08 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fc0e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fc13(CPU *c) {
  NATIVE_HOOK(0x61fc13u) REGS; LOADALL;
L_0061fc13:;
  /* 0061fc13 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061fc19 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fc1e(CPU *c) {
  NATIVE_HOOK(0x61fc1eu) REGS; LOADALL;
L_0061fc1e:;
  /* 0061fc1e lea ecx, [ebp - 0xcc] */ ecx = (u32)((u32)(ebp + 0xffffff34u));
  /* 0061fc24 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fc29(CPU *c) {
  NATIVE_HOOK(0x61fc29u) REGS; LOADALL;
  goto L_0061fc29;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fc29:;
  /* 0061fc29 mov eax, 0x664998 */ { eax = (u32)(0x664998u); }
  /* 0061fc2e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fc40(CPU *c) {
  NATIVE_HOOK(0x61fc40u) REGS; LOADALL;
L_0061fc40:;
  /* 0061fc40 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061fc43 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fc48(CPU *c) {
  NATIVE_HOOK(0x61fc48u) REGS; LOADALL;
L_0061fc48:;
  /* 0061fc48 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061fc4b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fc50(CPU *c) {
  NATIVE_HOOK(0x61fc50u) REGS; LOADALL;
L_0061fc50:;
  /* 0061fc50 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061fc53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fc58(CPU *c) {
  NATIVE_HOOK(0x61fc58u) REGS; LOADALL;
  goto L_0061fc58;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fc58:;
  /* 0061fc58 mov eax, 0x6649cc */ { eax = (u32)(0x6649ccu); }
  /* 0061fc5d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fc70(CPU *c) {
  NATIVE_HOOK(0x61fc70u) REGS; LOADALL;
L_0061fc70:;
  /* 0061fc70 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061fc73 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061fc78(CPU *c) {
  NATIVE_HOOK(0x61fc78u) REGS; LOADALL;
L_0061fc78:;
  /* 0061fc78 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061fc7b add ecx, 0xf8 */ { u32 a_ = ecx, b_ = 0xf8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061fc81 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fc86(CPU *c) {
  NATIVE_HOOK(0x61fc86u) REGS; LOADALL;
L_0061fc86:;
  /* 0061fc86 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061fc89 add ecx, 0x114 */ { u32 a_ = ecx, b_ = 0x114u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061fc8f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fc94(CPU *c) {
  NATIVE_HOOK(0x61fc94u) REGS; LOADALL;
L_0061fc94:;
  /* 0061fc94 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061fc97 add ecx, 0x130 */ { u32 a_ = ecx, b_ = 0x130u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061fc9d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fca2(CPU *c) {
  NATIVE_HOOK(0x61fca2u) REGS; LOADALL;
L_0061fca2:;
  /* 0061fca2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061fca5 add ecx, 0x14c */ { u32 a_ = ecx, b_ = 0x14cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061fcab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fcb0(CPU *c) {
  NATIVE_HOOK(0x61fcb0u) REGS; LOADALL;
  goto L_0061fcb0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fcb0:;
  /* 0061fcb0 mov eax, 0x664a10 */ { eax = (u32)(0x664a10u); }
  /* 0061fcb5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fcc0(CPU *c) {
  NATIVE_HOOK(0x61fcc0u) REGS; LOADALL;
L_0061fcc0:;
  /* 0061fcc0 mov eax, dword ptr [0x9bb278] */ { const u32 m_ = (u32)(0x9bb278u); eax = (u32)(M32(m_)); }
  /* 0061fcc5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061fcc8 mov dword ptr [0x9bb278], eax */ { const u32 m_ = (u32)(0x9bb278u); M32(m_) = (u32)(eax); }
  /* 0061fccd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061fcce(CPU *c) {
  NATIVE_HOOK(0x61fcceu) REGS; LOADALL;
  goto L_0061fcce;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fcce:;
  /* 0061fcce mov eax, 0x664a34 */ { eax = (u32)(0x664a34u); }
  /* 0061fcd3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fce0(CPU *c) {
  NATIVE_HOOK(0x61fce0u) REGS; LOADALL;
L_0061fce0:;
  /* 0061fce0 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061fce3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fce8(CPU *c) {
  NATIVE_HOOK(0x61fce8u) REGS; LOADALL;
L_0061fce8:;
  /* 0061fce8 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061fceb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fcf0(CPU *c) {
  NATIVE_HOOK(0x61fcf0u) REGS; LOADALL;
L_0061fcf0:;
  /* 0061fcf0 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061fcf3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fcf8(CPU *c) {
  NATIVE_HOOK(0x61fcf8u) REGS; LOADALL;
L_0061fcf8:;
  /* 0061fcf8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061fcfb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fd00(CPU *c) {
  NATIVE_HOOK(0x61fd00u) REGS; LOADALL;
  goto L_0061fd00;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fd00:;
  /* 0061fd00 mov eax, 0x664a70 */ { eax = (u32)(0x664a70u); }
  /* 0061fd05 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fd10(CPU *c) {
  NATIVE_HOOK(0x61fd10u) REGS; LOADALL;
L_0061fd10:;
  /* 0061fd10 mov eax, dword ptr [0x9bd580] */ { const u32 m_ = (u32)(0x9bd580u); eax = (u32)(M32(m_)); }
  /* 0061fd15 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061fd18 mov dword ptr [0x9bd580], eax */ { const u32 m_ = (u32)(0x9bd580u); M32(m_) = (u32)(eax); }
  /* 0061fd1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061fd1e(CPU *c) {
  NATIVE_HOOK(0x61fd1eu) REGS; LOADALL;
  goto L_0061fd1e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fd1e:;
  /* 0061fd1e mov eax, 0x664adc */ { eax = (u32)(0x664adcu); }
  /* 0061fd23 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fd30(CPU *c) {
  NATIVE_HOOK(0x61fd30u) REGS; LOADALL;
L_0061fd30:;
  /* 0061fd30 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0061fd33 jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061fd38(CPU *c) {
  NATIVE_HOOK(0x61fd38u) REGS; LOADALL;
L_0061fd38:;
  /* 0061fd38 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0061fd3b jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061fd40(CPU *c) {
  NATIVE_HOOK(0x61fd40u) REGS; LOADALL;
  goto L_0061fd40;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fd40:;
  /* 0061fd40 mov eax, 0x664b50 */ { eax = (u32)(0x664b50u); }
  /* 0061fd45 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fd50(CPU *c) {
  NATIVE_HOOK(0x61fd50u) REGS; LOADALL;
  goto L_0061fd50;
L_004fc620:;
  /* 004fc620 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc621 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fc623 add esi, 0x64 */ { u32 a_ = esi, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fc626 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fc628 call 0x4febe0 */ esp -= 4; M32(esp) = 0x4fc62du; SAVEALL; F_004febe0(c); ABI_CHECK(0x4febe0u, 0x4fc628u); RETCHK(0x4fc62du, 0x4fc628u); LOADALL;
  /* 004fc62d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fc62f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc630 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
L_0061fd50:;
  /* 0061fd50 lea eax, [ebp - 0x564] */ eax = (u32)((u32)(ebp + 0xfffffa9cu));
  /* 0061fd56 jmp 0x4fc620 */ goto L_004fc620;
}
