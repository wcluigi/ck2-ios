#include "funcs.h"

void F_0061c710(CPU *c) {
  NATIVE_HOOK(0x61c710u) REGS; LOADALL;
L_0061c710:;
  /* 0061c710 lea ecx, [ebp + 0x1c] */ ecx = (u32)((u32)(ebp + 0x1cu));
  /* 0061c713 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061c718(CPU *c) {
  NATIVE_HOOK(0x61c718u) REGS; LOADALL;
L_0061c718:;
  /* 0061c718 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061c71b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c720(CPU *c) {
  NATIVE_HOOK(0x61c720u) REGS; LOADALL;
L_0061c720:;
  /* 0061c720 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061c723 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c728(CPU *c) {
  NATIVE_HOOK(0x61c728u) REGS; LOADALL;
L_0061c728:;
  /* 0061c728 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061c72b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c730(CPU *c) {
  NATIVE_HOOK(0x61c730u) REGS; LOADALL;
L_0061c730:;
  /* 0061c730 lea ecx, [ebp - 0x5c] */ ecx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 0061c733 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061c738(CPU *c) {
  NATIVE_HOOK(0x61c738u) REGS; LOADALL;
  goto L_0061c738;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c738:;
  /* 0061c738 mov eax, 0x65b72c */ { eax = (u32)(0x65b72cu); }
  /* 0061c73d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c750(CPU *c) {
  NATIVE_HOOK(0x61c750u) REGS; LOADALL;
  goto L_0061c750;
L_0051eb70:;
  /* 0051eb70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051eb71 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051eb73 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051eb76 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051eb78 mov dword ptr [esi], 0x652afc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652afcu); }
  /* 0051eb7e je 0x51eb90 */ if (ZF_) goto L_0051eb90;
  /* 0051eb80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051eb81 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x51eb86u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x51eb81u); RETCHK(0x51eb86u, 0x51eb81u); LOADALL;
  /* 0051eb86 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051eb89 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_0051eb90:;
  /* 0051eb90 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051eb91 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061c750:;
  /* 0061c750 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0061c753 jmp 0x51eb70 */ goto L_0051eb70;
}

void F_0061c758(CPU *c) {
  NATIVE_HOOK(0x61c758u) REGS; LOADALL;
  goto L_0061c758;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c758:;
  /* 0061c758 mov eax, 0x65b7bc */ { eax = (u32)(0x65b7bcu); }
  /* 0061c75d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c770(CPU *c) {
  NATIVE_HOOK(0x61c770u) REGS; LOADALL;
L_0061c770:;
  /* 0061c770 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061c773 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c774 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061c777 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c778 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c77du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c778u); RETCHK(0x61c77du, 0x61c778u); LOADALL;
  /* 0061c77d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c780 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c781(CPU *c) {
  NATIVE_HOOK(0x61c781u) REGS; LOADALL;
L_0061c781:;
  /* 0061c781 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061c784 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c785 mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 0061c788 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c789 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c78eu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c789u); RETCHK(0x61c78eu, 0x61c789u); LOADALL;
  /* 0061c78e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c791 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c792(CPU *c) {
  NATIVE_HOOK(0x61c792u) REGS; LOADALL;
  goto L_0061c792;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c792:;
  /* 0061c792 mov eax, 0x65b874 */ { eax = (u32)(0x65b874u); }
  /* 0061c797 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c7a0(CPU *c) {
  NATIVE_HOOK(0x61c7a0u) REGS; LOADALL;
  goto L_0061c7a0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c7a0:;
  /* 0061c7a0 mov eax, 0x65ba0c */ { eax = (u32)(0x65ba0cu); }
  /* 0061c7a5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c7b0(CPU *c) {
  NATIVE_HOOK(0x61c7b0u) REGS; LOADALL;
  goto L_0061c7b0;
L_004d9460:;
  /* 004d9460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004d9461 mov esi, eax */ { esi = (u32)(eax); }
  /* 004d9463 call 0x529410 */ esp -= 4; M32(esp) = 0x4d9468u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x4d9463u); RETCHK(0x4d9468u, 0x4d9463u); LOADALL;
  /* 004d9468 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004d946b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004d946c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4d9471u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4d946cu); RETCHK(0x4d9471u, 0x4d946cu); LOADALL;
  /* 004d9471 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004d9474 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004d947b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004d947c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061c7b0:;
  /* 0061c7b0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061c7b3 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061c7b6 jmp 0x4d9460 */ goto L_004d9460;
}

void F_0061c7bb(CPU *c) {
  NATIVE_HOOK(0x61c7bbu) REGS; LOADALL;
  goto L_0061c7bb;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_0061c7bb:;
  /* 0061c7bb mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c7be add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c7c1 jmp 0x519190 */ goto L_00519190;
}

void F_0061c7c6(CPU *c) {
  NATIVE_HOOK(0x61c7c6u) REGS; LOADALL;
L_0061c7c6:;
  /* 0061c7c6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c7c9 add ecx, 0x38 */ { u32 a_ = ecx, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c7cc jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061c7d1(CPU *c) {
  NATIVE_HOOK(0x61c7d1u) REGS; LOADALL;
  goto L_0061c7d1;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_0061c7d1:;
  /* 0061c7d1 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c7d4 add esi, 0xcc */ { u32 a_ = esi, b_ = 0xccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c7da jmp 0x519190 */ goto L_00519190;
}

void F_0061c7df(CPU *c) {
  NATIVE_HOOK(0x61c7dfu) REGS; LOADALL;
L_0061c7df:;
  /* 0061c7df mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c7e2 add ecx, 0x10c */ { u32 a_ = ecx, b_ = 0x10cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c7e8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c7ed(CPU *c) {
  NATIVE_HOOK(0x61c7edu) REGS; LOADALL;
L_0061c7ed:;
  /* 0061c7ed mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c7f0 add ecx, 0x138 */ { u32 a_ = ecx, b_ = 0x138u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c7f6 jmp 0x52cd60 */ SAVEALL; F_0052cd60(c); return;
}

void F_0061c7fb(CPU *c) {
  NATIVE_HOOK(0x61c7fbu) REGS; LOADALL;
L_0061c7fb:;
  /* 0061c7fb mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061c7fe add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c801 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061c806(CPU *c) {
  NATIVE_HOOK(0x61c806u) REGS; LOADALL;
L_0061c806:;
  /* 0061c806 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c809 add esi, 0x164 */ { u32 a_ = esi, b_ = 0x164u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c80f jmp 0x516dd0 */ SAVEALL; F_00516dd0(c); return;
}

void F_0061c814(CPU *c) {
  NATIVE_HOOK(0x61c814u) REGS; LOADALL;
  goto L_0061c814;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c814:;
  /* 0061c814 mov eax, 0x65bb40 */ { eax = (u32)(0x65bb40u); }
  /* 0061c819 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c820(CPU *c) {
  NATIVE_HOOK(0x61c820u) REGS; LOADALL;
L_0061c820:;
  /* 0061c820 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061c823 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c824 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061c827 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c828 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c82du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c828u); RETCHK(0x61c82du, 0x61c828u); LOADALL;
  /* 0061c82d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c830 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c831(CPU *c) {
  NATIVE_HOOK(0x61c831u) REGS; LOADALL;
  goto L_0061c831;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c831:;
  /* 0061c831 mov eax, 0x65bc88 */ { eax = (u32)(0x65bc88u); }
  /* 0061c836 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c840(CPU *c) {
  NATIVE_HOOK(0x61c840u) REGS; LOADALL;
L_0061c840:;
  /* 0061c840 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061c843 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c844 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061c847 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c848 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c84du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c848u); RETCHK(0x61c84du, 0x61c848u); LOADALL;
  /* 0061c84d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c850 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c851(CPU *c) {
  NATIVE_HOOK(0x61c851u) REGS; LOADALL;
  goto L_0061c851;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c851:;
  /* 0061c851 mov eax, 0x65bd4c */ { eax = (u32)(0x65bd4cu); }
  /* 0061c856 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c860(CPU *c) {
  NATIVE_HOOK(0x61c860u) REGS; LOADALL;
L_0061c860:;
  /* 0061c860 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c863 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c866 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c86b(CPU *c) {
  NATIVE_HOOK(0x61c86bu) REGS; LOADALL;
L_0061c86b:;
  /* 0061c86b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c86e add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c871 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c876(CPU *c) {
  NATIVE_HOOK(0x61c876u) REGS; LOADALL;
  goto L_0061c876;
L_004d9460:;
  /* 004d9460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004d9461 mov esi, eax */ { esi = (u32)(eax); }
  /* 004d9463 call 0x529410 */ esp -= 4; M32(esp) = 0x4d9468u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x4d9463u); RETCHK(0x4d9468u, 0x4d9463u); LOADALL;
  /* 004d9468 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004d946b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004d946c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4d9471u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4d946cu); RETCHK(0x4d9471u, 0x4d946cu); LOADALL;
  /* 004d9471 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004d9474 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004d947b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004d947c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061c876:;
  /* 0061c876 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061c879 add eax, 0x60 */ { u32 a_ = eax, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061c87c jmp 0x4d9460 */ goto L_004d9460;
}

void F_0061c881(CPU *c) {
  NATIVE_HOOK(0x61c881u) REGS; LOADALL;
  goto L_0061c881;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_0061c881:;
  /* 0061c881 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c884 add esi, 0x70 */ { u32 a_ = esi, b_ = 0x70u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c887 jmp 0x519190 */ goto L_00519190;
}

void F_0061c88c(CPU *c) {
  NATIVE_HOOK(0x61c88cu) REGS; LOADALL;
L_0061c88c:;
  /* 0061c88c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061c88f add eax, 0x90 */ { u32 a_ = eax, b_ = 0x90u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061c894 jmp 0x522fb0 */ SAVEALL; F_00522fb0(c); return;
}

void F_0061c899(CPU *c) {
  NATIVE_HOOK(0x61c899u) REGS; LOADALL;
L_0061c899:;
  /* 0061c899 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c89c add ecx, 0xb4 */ { u32 a_ = ecx, b_ = 0xb4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c8a2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c8a7(CPU *c) {
  NATIVE_HOOK(0x61c8a7u) REGS; LOADALL;
L_0061c8a7:;
  /* 0061c8a7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c8aa add ecx, 0xd0 */ { u32 a_ = ecx, b_ = 0xd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c8b0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c8b5(CPU *c) {
  NATIVE_HOOK(0x61c8b5u) REGS; LOADALL;
L_0061c8b5:;
  /* 0061c8b5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c8b8 add ecx, 0xec */ { u32 a_ = ecx, b_ = 0xecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c8be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c8c3(CPU *c) {
  NATIVE_HOOK(0x61c8c3u) REGS; LOADALL;
L_0061c8c3:;
  /* 0061c8c3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c8c6 add ecx, 0x108 */ { u32 a_ = ecx, b_ = 0x108u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c8cc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c8d1(CPU *c) {
  NATIVE_HOOK(0x61c8d1u) REGS; LOADALL;
L_0061c8d1:;
  /* 0061c8d1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c8d4 add ecx, 0x124 */ { u32 a_ = ecx, b_ = 0x124u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c8da jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c8df(CPU *c) {
  NATIVE_HOOK(0x61c8dfu) REGS; LOADALL;
L_0061c8df:;
  /* 0061c8df mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c8e2 add ecx, 0x140 */ { u32 a_ = ecx, b_ = 0x140u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c8e8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c8ed(CPU *c) {
  NATIVE_HOOK(0x61c8edu) REGS; LOADALL;
L_0061c8ed:;
  /* 0061c8ed mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c8f0 add ecx, 0x15c */ { u32 a_ = ecx, b_ = 0x15cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c8f6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c8fb(CPU *c) {
  NATIVE_HOOK(0x61c8fbu) REGS; LOADALL;
  goto L_0061c8fb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c8fb:;
  /* 0061c8fb mov eax, 0x65bec8 */ { eax = (u32)(0x65bec8u); }
  /* 0061c900 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c910(CPU *c) {
  NATIVE_HOOK(0x61c910u) REGS; LOADALL;
L_0061c910:;
  /* 0061c910 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c913 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061c918(CPU *c) {
  NATIVE_HOOK(0x61c918u) REGS; LOADALL;
L_0061c918:;
  /* 0061c918 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c91b add ecx, 0x180 */ { u32 a_ = ecx, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c921 jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_0061c926(CPU *c) {
  NATIVE_HOOK(0x61c926u) REGS; LOADALL;
L_0061c926:;
  /* 0061c926 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c929 add ecx, 0x188 */ { u32 a_ = ecx, b_ = 0x188u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c92f jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061c934(CPU *c) {
  NATIVE_HOOK(0x61c934u) REGS; LOADALL;
  goto L_0061c934;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c934:;
  /* 0061c934 mov eax, 0x65bf78 */ { eax = (u32)(0x65bf78u); }
  /* 0061c939 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c940(CPU *c) {
  NATIVE_HOOK(0x61c940u) REGS; LOADALL;
L_0061c940:;
  /* 0061c940 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c943 jmp 0x505270 */ SAVEALL; F_00505270(c); return;
}

void F_0061c948(CPU *c) {
  NATIVE_HOOK(0x61c948u) REGS; LOADALL;
L_0061c948:;
  /* 0061c948 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c94b add ecx, 0x2a0 */ { u32 a_ = ecx, b_ = 0x2a0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c951 jmp 0x5038b0 */ SAVEALL; F_005038b0(c); return;
}

void F_0061c956(CPU *c) {
  NATIVE_HOOK(0x61c956u) REGS; LOADALL;
  goto L_0061c956;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c956:;
  /* 0061c956 mov eax, 0x65bfa4 */ { eax = (u32)(0x65bfa4u); }
  /* 0061c95b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c960(CPU *c) {
  NATIVE_HOOK(0x61c960u) REGS; LOADALL;
L_0061c960:;
  /* 0061c960 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c963 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061c968(CPU *c) {
  NATIVE_HOOK(0x61c968u) REGS; LOADALL;
  goto L_0061c968;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c968:;
  /* 0061c968 mov eax, 0x65c034 */ { eax = (u32)(0x65c034u); }
  /* 0061c96d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c980(CPU *c) {
  NATIVE_HOOK(0x61c980u) REGS; LOADALL;
L_0061c980:;
  /* 0061c980 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c983 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0061c988(CPU *c) {
  NATIVE_HOOK(0x61c988u) REGS; LOADALL;
  goto L_0061c988;
L_00502310:;
  /* 00502310 cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502314 jb 0x502322 */ if (CF_) goto L_00502322;
  /* 00502316 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00502319 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050231a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50231fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50231au); RETCHK(0x50231fu, 0x50231au); LOADALL;
  /* 0050231f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502322:;
  /* 00502322 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00502324 mov dword ptr [esi + 0x18], 7 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x7u); }
  /* 0050232b mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0050232e mov word ptr [esi + 4], ax */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00502332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061c988:;
  /* 0061c988 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c98b add esi, 0x180 */ { u32 a_ = esi, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c991 jmp 0x502310 */ goto L_00502310;
}

void F_0061c996(CPU *c) {
  NATIVE_HOOK(0x61c996u) REGS; LOADALL;
L_0061c996:;
  /* 0061c996 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c999 add ecx, 0x224 */ { u32 a_ = ecx, b_ = 0x224u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c99f jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061c9a4(CPU *c) {
  NATIVE_HOOK(0x61c9a4u) REGS; LOADALL;
L_0061c9a4:;
  /* 0061c9a4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c9a7 add ecx, 0x2b8 */ { u32 a_ = ecx, b_ = 0x2b8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c9ad jmp 0x527610 */ SAVEALL; F_00527610(c); return;
}

void F_0061c9b2(CPU *c) {
  NATIVE_HOOK(0x61c9b2u) REGS; LOADALL;
  goto L_0061c9b2;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c9b2:;
  /* 0061c9b2 mov eax, 0x65c070 */ { eax = (u32)(0x65c070u); }
  /* 0061c9b7 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c9c0(CPU *c) {
  NATIVE_HOOK(0x61c9c0u) REGS; LOADALL;
L_0061c9c0:;
  /* 0061c9c0 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0061c9c3 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061c9c8(CPU *c) {
  NATIVE_HOOK(0x61c9c8u) REGS; LOADALL;
  goto L_0061c9c8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c9c8:;
  /* 0061c9c8 mov eax, 0x65c0c8 */ { eax = (u32)(0x65c0c8u); }
  /* 0061c9cd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c9e0(CPU *c) {
  NATIVE_HOOK(0x61c9e0u) REGS; LOADALL;
  goto L_0061c9e0;
L_004ffd40:;
  /* 004ffd40 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004ffd42 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004ffd44 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ffd47 mov eax, dword ptr [edx + eax + 0x28] */ { const u32 m_ = (u32)(edx + eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 004ffd4b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffd4d je 0x4ffd57 */ if (ZF_) goto L_004ffd57;
  /* 004ffd4f lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 004ffd52 jmp 0x601efe */ SAVEALL; F_00601efe(c); return;
L_004ffd57:;
  /* 004ffd57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061c9e0:;
  /* 0061c9e0 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061c9e3 jmp 0x4ffd40 */ goto L_004ffd40;
}

void F_0061c9e8(CPU *c) {
  NATIVE_HOOK(0x61c9e8u) REGS; LOADALL;
L_0061c9e8:;
  /* 0061c9e8 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0061c9eb jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061c9f0(CPU *c) {
  NATIVE_HOOK(0x61c9f0u) REGS; LOADALL;
  goto L_0061c9f0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c9f0:;
  /* 0061c9f0 mov eax, 0x65c14c */ { eax = (u32)(0x65c14cu); }
  /* 0061c9f5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ca00(CPU *c) {
  NATIVE_HOOK(0x61ca00u) REGS; LOADALL;
L_0061ca00:;
  /* 0061ca00 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ca03 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061ca06 jmp 0x548a40 */ SAVEALL; F_00548a40(c); return;
}

void F_0061ca0b(CPU *c) {
  NATIVE_HOOK(0x61ca0bu) REGS; LOADALL;
L_0061ca0b:;
  /* 0061ca0b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ca0e add ecx, 0x1dc */ { u32 a_ = ecx, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061ca14 jmp 0x4eac50 */ SAVEALL; F_004eac50(c); return;
}

void F_0061ca19(CPU *c) {
  NATIVE_HOOK(0x61ca19u) REGS; LOADALL;
  goto L_0061ca19;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ca19:;
  /* 0061ca19 mov eax, 0x65c208 */ { eax = (u32)(0x65c208u); }
  /* 0061ca1e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ca30(CPU *c) {
  NATIVE_HOOK(0x61ca30u) REGS; LOADALL;
L_0061ca30:;
  /* 0061ca30 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061ca33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ca34 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061ca37 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ca38 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ca3du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61ca38u); RETCHK(0x61ca3du, 0x61ca38u); LOADALL;
  /* 0061ca3d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ca40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ca41(CPU *c) {
  NATIVE_HOOK(0x61ca41u) REGS; LOADALL;
  goto L_0061ca41;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ca41:;
  /* 0061ca41 mov eax, 0x65c260 */ { eax = (u32)(0x65c260u); }
  /* 0061ca46 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ca50(CPU *c) {
  NATIVE_HOOK(0x61ca50u) REGS; LOADALL;
  goto L_0061ca50;
L_004ea2d0:;
  /* 004ea2d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ea2d1 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004ea2d4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ea2d6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ea2d8 je 0x4ea2fd */ if (ZF_) goto L_004ea2fd;
  /* 004ea2da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ea2db mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ea2de cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ea2e0 je 0x4ea2ee */ if (ZF_) goto L_004ea2ee;
L_004ea2e2:;
  /* 004ea2e2 call 0x4ea1b0 */ esp -= 4; M32(esp) = 0x4ea2e7u; SAVEALL; F_004ea1b0(c); ABI_CHECK(0x4ea1b0u, 0x4ea2e2u); RETCHK(0x4ea2e7u, 0x4ea2e2u); LOADALL;
  /* 004ea2e7 add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004ea2ea cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ea2ec jne 0x4ea2e2 */ if (!ZF_) goto L_004ea2e2;
L_004ea2ee:;
  /* 004ea2ee mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ea2f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ea2f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4ea2f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4ea2f2u); RETCHK(0x4ea2f7u, 0x4ea2f2u); LOADALL;
  /* 004ea2f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ea2fa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ea2fc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004ea2fd:;
  /* 004ea2fd mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004ea300 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004ea303 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 004ea306 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ea307 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ca50:;
  /* 0061ca50 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061ca53 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061ca56 jmp 0x4ea2d0 */ goto L_004ea2d0;
}

void F_0061ca5b(CPU *c) {
  NATIVE_HOOK(0x61ca5bu) REGS; LOADALL;
  goto L_0061ca5b;
L_004ea2d0:;
  /* 004ea2d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ea2d1 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004ea2d4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ea2d6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ea2d8 je 0x4ea2fd */ if (ZF_) goto L_004ea2fd;
  /* 004ea2da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ea2db mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ea2de cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ea2e0 je 0x4ea2ee */ if (ZF_) goto L_004ea2ee;
L_004ea2e2:;
  /* 004ea2e2 call 0x4ea1b0 */ esp -= 4; M32(esp) = 0x4ea2e7u; SAVEALL; F_004ea1b0(c); ABI_CHECK(0x4ea1b0u, 0x4ea2e2u); RETCHK(0x4ea2e7u, 0x4ea2e2u); LOADALL;
  /* 004ea2e7 add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004ea2ea cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ea2ec jne 0x4ea2e2 */ if (!ZF_) goto L_004ea2e2;
L_004ea2ee:;
  /* 004ea2ee mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ea2f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ea2f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4ea2f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4ea2f2u); RETCHK(0x4ea2f7u, 0x4ea2f2u); LOADALL;
  /* 004ea2f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ea2fa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ea2fc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004ea2fd:;
  /* 004ea2fd mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004ea300 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004ea303 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 004ea306 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ea307 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ca5b:;
  /* 0061ca5b mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061ca5e add ebx, 0x24 */ { u32 a_ = ebx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061ca61 jmp 0x4ea2d0 */ goto L_004ea2d0;
}

void F_0061ca66(CPU *c) {
  NATIVE_HOOK(0x61ca66u) REGS; LOADALL;
  goto L_0061ca66;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ca66:;
  /* 0061ca66 mov eax, 0x65c2b0 */ { eax = (u32)(0x65c2b0u); }
  /* 0061ca6b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ca70(CPU *c) {
  NATIVE_HOOK(0x61ca70u) REGS; LOADALL;
  goto L_0061ca70;
L_004ea2d0:;
  /* 004ea2d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ea2d1 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004ea2d4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ea2d6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ea2d8 je 0x4ea2fd */ if (ZF_) goto L_004ea2fd;
  /* 004ea2da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ea2db mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ea2de cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ea2e0 je 0x4ea2ee */ if (ZF_) goto L_004ea2ee;
L_004ea2e2:;
  /* 004ea2e2 call 0x4ea1b0 */ esp -= 4; M32(esp) = 0x4ea2e7u; SAVEALL; F_004ea1b0(c); ABI_CHECK(0x4ea1b0u, 0x4ea2e2u); RETCHK(0x4ea2e7u, 0x4ea2e2u); LOADALL;
  /* 004ea2e7 add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004ea2ea cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ea2ec jne 0x4ea2e2 */ if (!ZF_) goto L_004ea2e2;
L_004ea2ee:;
  /* 004ea2ee mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ea2f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ea2f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4ea2f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4ea2f2u); RETCHK(0x4ea2f7u, 0x4ea2f2u); LOADALL;
  /* 004ea2f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ea2fa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ea2fc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004ea2fd:;
  /* 004ea2fd mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004ea300 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004ea303 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 004ea306 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ea307 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ca70:;
  /* 0061ca70 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061ca73 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061ca76 jmp 0x4ea2d0 */ goto L_004ea2d0;
}

void F_0061ca7b(CPU *c) {
  NATIVE_HOOK(0x61ca7bu) REGS; LOADALL;
  goto L_0061ca7b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ca7b:;
  /* 0061ca7b mov eax, 0x65c2d4 */ { eax = (u32)(0x65c2d4u); }
  /* 0061ca80 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ca90(CPU *c) {
  NATIVE_HOOK(0x61ca90u) REGS; LOADALL;
L_0061ca90:;
  /* 0061ca90 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061ca93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ca94 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061ca97 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ca98 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ca9du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61ca98u); RETCHK(0x61ca9du, 0x61ca98u); LOADALL;
  /* 0061ca9d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061caa0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061caa1(CPU *c) {
  NATIVE_HOOK(0x61caa1u) REGS; LOADALL;
  goto L_0061caa1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061caa1:;
  /* 0061caa1 mov eax, 0x65c32c */ { eax = (u32)(0x65c32cu); }
  /* 0061caa6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cab0(CPU *c) {
  NATIVE_HOOK(0x61cab0u) REGS; LOADALL;
L_0061cab0:;
  /* 0061cab0 mov eax, dword ptr [0x9b9478] */ { const u32 m_ = (u32)(0x9b9478u); eax = (u32)(M32(m_)); }
  /* 0061cab5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061cab8 mov dword ptr [0x9b9478], eax */ { const u32 m_ = (u32)(0x9b9478u); M32(m_) = (u32)(eax); }
  /* 0061cabd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cabe(CPU *c) {
  NATIVE_HOOK(0x61cabeu) REGS; LOADALL;
  goto L_0061cabe;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cabe:;
  /* 0061cabe mov eax, 0x65c374 */ { eax = (u32)(0x65c374u); }
  /* 0061cac3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cad0(CPU *c) {
  NATIVE_HOOK(0x61cad0u) REGS; LOADALL;
L_0061cad0:;
  /* 0061cad0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061cad3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061cad4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061cad7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061cad8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61caddu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61cad8u); RETCHK(0x61caddu, 0x61cad8u); LOADALL;
  /* 0061cadd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061cae0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cae1(CPU *c) {
  NATIVE_HOOK(0x61cae1u) REGS; LOADALL;
  goto L_0061cae1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cae1:;
  /* 0061cae1 mov eax, 0x65c414 */ { eax = (u32)(0x65c414u); }
  /* 0061cae6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061caf0(CPU *c) {
  NATIVE_HOOK(0x61caf0u) REGS; LOADALL;
L_0061caf0:;
  /* 0061caf0 lea esi, [ebp - 0x44] */ esi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061caf3 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061caf8(CPU *c) {
  NATIVE_HOOK(0x61caf8u) REGS; LOADALL;
  goto L_0061caf8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061caf8:;
  /* 0061caf8 mov eax, 0x65c480 */ { eax = (u32)(0x65c480u); }
  /* 0061cafd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cb10(CPU *c) {
  NATIVE_HOOK(0x61cb10u) REGS; LOADALL;
L_0061cb10:;
  /* 0061cb10 lea esi, [ebp + 0x10] */ esi = (u32)((u32)(ebp + 0x10u));
  /* 0061cb13 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061cb18(CPU *c) {
  NATIVE_HOOK(0x61cb18u) REGS; LOADALL;
  goto L_0061cb18;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cb18:;
  /* 0061cb18 mov eax, 0x65c4a4 */ { eax = (u32)(0x65c4a4u); }
  /* 0061cb1d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cb30(CPU *c) {
  NATIVE_HOOK(0x61cb30u) REGS; LOADALL;
  goto L_0061cb30;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cb30:;
  /* 0061cb30 mov eax, 0x65c560 */ { eax = (u32)(0x65c560u); }
  /* 0061cb35 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cb40(CPU *c) {
  NATIVE_HOOK(0x61cb40u) REGS; LOADALL;
L_0061cb40:;
  /* 0061cb40 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0061cb43 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061cb48(CPU *c) {
  NATIVE_HOOK(0x61cb48u) REGS; LOADALL;
  goto L_0061cb48;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cb48:;
  /* 0061cb48 mov eax, 0x65c584 */ { eax = (u32)(0x65c584u); }
  /* 0061cb4d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cb60(CPU *c) {
  NATIVE_HOOK(0x61cb60u) REGS; LOADALL;
L_0061cb60:;
  /* 0061cb60 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0061cb63 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061cb68(CPU *c) {
  NATIVE_HOOK(0x61cb68u) REGS; LOADALL;
L_0061cb68:;
  /* 0061cb68 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061cb6b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061cb70(CPU *c) {
  NATIVE_HOOK(0x61cb70u) REGS; LOADALL;
L_0061cb70:;
  /* 0061cb70 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061cb73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061cb78(CPU *c) {
  NATIVE_HOOK(0x61cb78u) REGS; LOADALL;
  goto L_0061cb78;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cb78:;
  /* 0061cb78 mov eax, 0x65c5b8 */ { eax = (u32)(0x65c5b8u); }
  /* 0061cb7d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cb90(CPU *c) {
  NATIVE_HOOK(0x61cb90u) REGS; LOADALL;
  goto L_0061cb90;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cb90:;
  /* 0061cb90 mov eax, 0x65c684 */ { eax = (u32)(0x65c684u); }
  /* 0061cb95 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cba0(CPU *c) {
  NATIVE_HOOK(0x61cba0u) REGS; LOADALL;
L_0061cba0:;
  /* 0061cba0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061cba3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061cba4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061cba7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061cba8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61cbadu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61cba8u); RETCHK(0x61cbadu, 0x61cba8u); LOADALL;
  /* 0061cbad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061cbb0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cbb1(CPU *c) {
  NATIVE_HOOK(0x61cbb1u) REGS; LOADALL;
  goto L_0061cbb1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cbb1:;
  /* 0061cbb1 mov eax, 0x65c700 */ { eax = (u32)(0x65c700u); }
  /* 0061cbb6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cbc0(CPU *c) {
  NATIVE_HOOK(0x61cbc0u) REGS; LOADALL;
L_0061cbc0:;
  /* 0061cbc0 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061cbc3 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061cbc6 je 0x61cbdb */ if (ZF_) goto L_0061cbdb;
  /* 0061cbcc and dword ptr [ebp - 0x10], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0061cbd0 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061cbd3 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061cbd6 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
L_0061cbdb:;
  /* 0061cbdb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cbdc(CPU *c) {
  NATIVE_HOOK(0x61cbdcu) REGS; LOADALL;
  goto L_0061cbdc;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cbdc:;
  /* 0061cbdc mov eax, 0x65c7cc */ { eax = (u32)(0x65c7ccu); }
  /* 0061cbe1 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cbf0(CPU *c) {
  NATIVE_HOOK(0x61cbf0u) REGS; LOADALL;
L_0061cbf0:;
  /* 0061cbf0 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061cbf3 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061cbf6 je 0x61cc0b */ if (ZF_) goto L_0061cc0b;
  /* 0061cbfc and dword ptr [ebp - 0x10], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0061cc00 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061cc03 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061cc06 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
L_0061cc0b:;
  /* 0061cc0b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cc0c(CPU *c) {
  NATIVE_HOOK(0x61cc0cu) REGS; LOADALL;
  goto L_0061cc0c;
L_004b12d0:;
  /* 004b12d0 mov eax, dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004b12d3 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004b12d6 mov dword ptr [edx + ecx - 8], 0x64e81c */ { const u32 m_ = (u32)(edx + ecx + 0xfffffff8u); M32(m_) = (u32)(0x64e81cu); }
  /* 004b12de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061cc0c:;
  /* 0061cc0c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061cc0f add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061cc12 jmp 0x4b12d0 */ goto L_004b12d0;
}

void F_0061cc17(CPU *c) {
  NATIVE_HOOK(0x61cc17u) REGS; LOADALL;
  goto L_0061cc17;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cc17:;
  /* 0061cc17 mov eax, 0x65c808 */ { eax = (u32)(0x65c808u); }
  /* 0061cc1c jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cc30(CPU *c) {
  NATIVE_HOOK(0x61cc30u) REGS; LOADALL;
  goto L_0061cc30;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cc30:;
  /* 0061cc30 mov eax, 0x65c8cc */ { eax = (u32)(0x65c8ccu); }
  /* 0061cc35 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cc40(CPU *c) {
  NATIVE_HOOK(0x61cc40u) REGS; LOADALL;
  goto L_0061cc40;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cc40:;
  /* 0061cc40 mov eax, 0x65c974 */ { eax = (u32)(0x65c974u); }
  /* 0061cc45 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cc50(CPU *c) {
  NATIVE_HOOK(0x61cc50u) REGS; LOADALL;
L_0061cc50:;
  /* 0061cc50 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061cc53 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061cc58(CPU *c) {
  NATIVE_HOOK(0x61cc58u) REGS; LOADALL;
L_0061cc58:;
  /* 0061cc58 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061cc5b add esi, 0x1dc */ { u32 a_ = esi, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061cc61 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061cc66(CPU *c) {
  NATIVE_HOOK(0x61cc66u) REGS; LOADALL;
L_0061cc66:;
  /* 0061cc66 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061cc69 add esi, 0x1ec */ { u32 a_ = esi, b_ = 0x1ecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061cc6f jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061cc74(CPU *c) {
  NATIVE_HOOK(0x61cc74u) REGS; LOADALL;
  goto L_0061cc74;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cc74:;
  /* 0061cc74 mov eax, 0x65c9cc */ { eax = (u32)(0x65c9ccu); }
  /* 0061cc79 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cc80(CPU *c) {
  NATIVE_HOOK(0x61cc80u) REGS; LOADALL;
L_0061cc80:;
  /* 0061cc80 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061cc83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061cc84 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061cc87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061cc88 call 0x459c10 */ esp -= 4; M32(esp) = 0x61cc8du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61cc88u); RETCHK(0x61cc8du, 0x61cc88u); LOADALL;
  /* 0061cc8d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061cc90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cc91(CPU *c) {
  NATIVE_HOOK(0x61cc91u) REGS; LOADALL;
  goto L_0061cc91;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cc91:;
  /* 0061cc91 mov eax, 0x65c9f0 */ { eax = (u32)(0x65c9f0u); }
  /* 0061cc96 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cca0(CPU *c) {
  NATIVE_HOOK(0x61cca0u) REGS; LOADALL;
L_0061cca0:;
  /* 0061cca0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061cca3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061cca4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061cca7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061cca8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ccadu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61cca8u); RETCHK(0x61ccadu, 0x61cca8u); LOADALL;
  /* 0061ccad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ccb0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ccb1(CPU *c) {
  NATIVE_HOOK(0x61ccb1u) REGS; LOADALL;
  goto L_0061ccb1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ccb1:;
  /* 0061ccb1 mov eax, 0x65ca48 */ { eax = (u32)(0x65ca48u); }
  /* 0061ccb6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ccc0(CPU *c) {
  NATIVE_HOOK(0x61ccc0u) REGS; LOADALL;
  goto L_0061ccc0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ccc0:;
  /* 0061ccc0 mov eax, 0x65caf0 */ { eax = (u32)(0x65caf0u); }
  /* 0061ccc5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ccd0(CPU *c) {
  NATIVE_HOOK(0x61ccd0u) REGS; LOADALL;
L_0061ccd0:;
  /* 0061ccd0 lea esi, [ebp + 0x10] */ esi = (u32)((u32)(ebp + 0x10u));
  /* 0061ccd3 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061ccd8(CPU *c) {
  NATIVE_HOOK(0x61ccd8u) REGS; LOADALL;
  goto L_0061ccd8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ccd8:;
  /* 0061ccd8 mov eax, 0x65cc10 */ { eax = (u32)(0x65cc10u); }
  /* 0061ccdd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ccf0(CPU *c) {
  NATIVE_HOOK(0x61ccf0u) REGS; LOADALL;
L_0061ccf0:;
  /* 0061ccf0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061ccf3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ccf4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061ccf7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ccf8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ccfdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61ccf8u); RETCHK(0x61ccfdu, 0x61ccf8u); LOADALL;
  /* 0061ccfd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061cd00 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cd01(CPU *c) {
  NATIVE_HOOK(0x61cd01u) REGS; LOADALL;
  goto L_0061cd01;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cd01:;
  /* 0061cd01 mov eax, 0x65ccd4 */ { eax = (u32)(0x65ccd4u); }
  /* 0061cd06 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cd10(CPU *c) {
  NATIVE_HOOK(0x61cd10u) REGS; LOADALL;
  goto L_0061cd10;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cd10:;
  /* 0061cd10 mov eax, 0x65cd24 */ { eax = (u32)(0x65cd24u); }
  /* 0061cd15 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cd20(CPU *c) {
  NATIVE_HOOK(0x61cd20u) REGS; LOADALL;
  goto L_0061cd20;
L_0049c820:;
  /* 0049c820 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c821 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0049c824 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049c826 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c828 je 0x49c84d */ if (ZF_) goto L_0049c84d;
  /* 0049c82a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049c82b mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049c82e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c830 je 0x49c83e */ if (ZF_) goto L_0049c83e;
L_0049c832:;
  /* 0049c832 call 0x5577c0 */ esp -= 4; M32(esp) = 0x49c837u; SAVEALL; F_005577c0(c); ABI_CHECK(0x5577c0u, 0x49c832u); RETCHK(0x49c837u, 0x49c832u); LOADALL;
  /* 0049c837 add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049c83a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c83c jne 0x49c832 */ if (!ZF_) goto L_0049c832;
L_0049c83e:;
  /* 0049c83e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049c841 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c842 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49c847u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49c842u); RETCHK(0x49c847u, 0x49c842u); LOADALL;
  /* 0049c847 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049c84a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049c84c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0049c84d:;
  /* 0049c84d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0049c850 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049c853 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0049c856 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049c857 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061cd20:;
  /* 0061cd20 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061cd23 add ebx, 0xc */ { u32 a_ = ebx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061cd26 jmp 0x49c820 */ goto L_0049c820;
}

void F_0061cd2b(CPU *c) {
  NATIVE_HOOK(0x61cd2bu) REGS; LOADALL;
  goto L_0061cd2b;
L_0049b0c0:;
  /* 0049b0c0 cmp dword ptr [esi + 0x74], 0x10 */ { const u32 m_ = (u32)(esi + 0x74u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b0c4 jb 0x49b0d2 */ if (CF_) goto L_0049b0d2;
  /* 0049b0c6 mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 0049b0c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b0ca call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49b0cfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49b0cau); RETCHK(0x49b0cfu, 0x49b0cau); LOADALL;
  /* 0049b0cf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049b0d2:;
  /* 0049b0d2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049b0d3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049b0d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049b0d6 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0049b0db mov dword ptr [esi + 0x74], edi */ { const u32 m_ = (u32)(esi + 0x74u); M32(m_) = (u32)(edi); }
  /* 0049b0de mov dword ptr [esi + 0x70], ebx */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(ebx); }
  /* 0049b0e1 mov byte ptr [esi + 0x60], bl */ { const u32 m_ = (u32)(esi + 0x60u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b0e4 cmp dword ptr [esi + 0x58], 0x10 */ { const u32 m_ = (u32)(esi + 0x58u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b0e8 jb 0x49b0f6 */ if (CF_) goto L_0049b0f6;
  /* 0049b0ea mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 0049b0ed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b0ee call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49b0f3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49b0eeu); RETCHK(0x49b0f3u, 0x49b0eeu); LOADALL;
  /* 0049b0f3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049b0f6:;
  /* 0049b0f6 mov dword ptr [esi + 0x58], edi */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(edi); }
  /* 0049b0f9 mov dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(ebx); }
  /* 0049b0fc mov byte ptr [esi + 0x44], bl */ { const u32 m_ = (u32)(esi + 0x44u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b0ff cmp dword ptr [esi + 0x3c], 0x10 */ { const u32 m_ = (u32)(esi + 0x3cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b103 jb 0x49b111 */ if (CF_) goto L_0049b111;
  /* 0049b105 mov edx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); edx = (u32)(M32(m_)); }
  /* 0049b108 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049b109 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49b10eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49b109u); RETCHK(0x49b10eu, 0x49b109u); LOADALL;
  /* 0049b10e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049b111:;
  /* 0049b111 mov dword ptr [esi + 0x3c], edi */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(edi); }
  /* 0049b114 mov dword ptr [esi + 0x38], ebx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ebx); }
  /* 0049b117 mov byte ptr [esi + 0x28], bl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b11a cmp dword ptr [esi + 0x20], 0x10 */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b11e jb 0x49b12c */ if (CF_) goto L_0049b12c;
  /* 0049b120 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049b123 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b124 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49b129u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49b124u); RETCHK(0x49b129u, 0x49b124u); LOADALL;
  /* 0049b129 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049b12c:;
  /* 0049b12c mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 0049b12f mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 0049b132 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049b133 mov byte ptr [esi + 0xc], bl */ { const u32 m_ = (u32)(esi + 0xcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b136 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049b137 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061cd2b:;
  /* 0061cd2b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061cd2e add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061cd31 jmp 0x49b0c0 */ goto L_0049b0c0;
}

void F_0061cd36(CPU *c) {
  NATIVE_HOOK(0x61cd36u) REGS; LOADALL;
  goto L_0061cd36;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cd36:;
  /* 0061cd36 mov eax, 0x65cd98 */ { eax = (u32)(0x65cd98u); }
  /* 0061cd3b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cd40(CPU *c) {
  NATIVE_HOOK(0x61cd40u) REGS; LOADALL;
  goto L_0061cd40;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cd40:;
  /* 0061cd40 mov eax, 0x65cee8 */ { eax = (u32)(0x65cee8u); }
  /* 0061cd45 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cd50(CPU *c) {
  NATIVE_HOOK(0x61cd50u) REGS; LOADALL;
  goto L_0061cd50;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cd50:;
  /* 0061cd50 mov eax, 0x65cf90 */ { eax = (u32)(0x65cf90u); }
  /* 0061cd55 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cd60(CPU *c) {
  NATIVE_HOOK(0x61cd60u) REGS; LOADALL;
  goto L_0061cd60;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cd60:;
  /* 0061cd60 mov eax, 0x65d0e0 */ { eax = (u32)(0x65d0e0u); }
  /* 0061cd65 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cd70(CPU *c) {
  NATIVE_HOOK(0x61cd70u) REGS; LOADALL;
  goto L_0061cd70;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cd70:;
  /* 0061cd70 mov eax, 0x65d230 */ { eax = (u32)(0x65d230u); }
  /* 0061cd75 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cd80(CPU *c) {
  NATIVE_HOOK(0x61cd80u) REGS; LOADALL;
L_0061cd80:;
  /* 0061cd80 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061cd83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061cd84 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061cd87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061cd88 call 0x459c10 */ esp -= 4; M32(esp) = 0x61cd8du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61cd88u); RETCHK(0x61cd8du, 0x61cd88u); LOADALL;
  /* 0061cd8d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061cd90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cd91(CPU *c) {
  NATIVE_HOOK(0x61cd91u) REGS; LOADALL;
  goto L_0061cd91;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cd91:;
  /* 0061cd91 mov eax, 0x65d288 */ { eax = (u32)(0x65d288u); }
  /* 0061cd96 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cda0(CPU *c) {
  NATIVE_HOOK(0x61cda0u) REGS; LOADALL;
  goto L_0061cda0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cda0:;
  /* 0061cda0 mov eax, 0x65d354 */ { eax = (u32)(0x65d354u); }
  /* 0061cda5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cdb0(CPU *c) {
  NATIVE_HOOK(0x61cdb0u) REGS; LOADALL;
L_0061cdb0:;
  /* 0061cdb0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061cdb3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061cdb4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061cdb7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061cdb8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61cdbdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61cdb8u); RETCHK(0x61cdbdu, 0x61cdb8u); LOADALL;
  /* 0061cdbd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061cdc0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cdc1(CPU *c) {
  NATIVE_HOOK(0x61cdc1u) REGS; LOADALL;
  goto L_0061cdc1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cdc1:;
  /* 0061cdc1 mov eax, 0x65d3d0 */ { eax = (u32)(0x65d3d0u); }
  /* 0061cdc6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cdd0(CPU *c) {
  NATIVE_HOOK(0x61cdd0u) REGS; LOADALL;
L_0061cdd0:;
  /* 0061cdd0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061cdd3 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061cdd8(CPU *c) {
  NATIVE_HOOK(0x61cdd8u) REGS; LOADALL;
L_0061cdd8:;
  /* 0061cdd8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061cddb add ecx, 0x1c4 */ { u32 a_ = ecx, b_ = 0x1c4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061cde1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061cde6(CPU *c) {
  NATIVE_HOOK(0x61cde6u) REGS; LOADALL;
L_0061cde6:;
  /* 0061cde6 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061cde9 add ebx, 0x1e0 */ { u32 a_ = ebx, b_ = 0x1e0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061cdef jmp 0x490970 */ SAVEALL; F_00490970(c); return;
}

void F_0061cdf4(CPU *c) {
  NATIVE_HOOK(0x61cdf4u) REGS; LOADALL;
L_0061cdf4:;
  /* 0061cdf4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061cdf7 add ecx, 0x1f4 */ { u32 a_ = ecx, b_ = 0x1f4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061cdfd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ce02(CPU *c) {
  NATIVE_HOOK(0x61ce02u) REGS; LOADALL;
L_0061ce02:;
  /* 0061ce02 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ce05 add esi, 0x210 */ { u32 a_ = esi, b_ = 0x210u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ce0b jmp 0x48f010 */ SAVEALL; F_0048f010(c); return;
}

void F_0061ce10(CPU *c) {
  NATIVE_HOOK(0x61ce10u) REGS; LOADALL;
  goto L_0061ce10;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ce10:;
  /* 0061ce10 mov eax, 0x65d45c */ { eax = (u32)(0x65d45cu); }
  /* 0061ce15 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ce20(CPU *c) {
  NATIVE_HOOK(0x61ce20u) REGS; LOADALL;
L_0061ce20:;
  /* 0061ce20 lea esi, [ebp - 0x78] */ esi = (u32)((u32)(ebp + 0xffffff88u));
  /* 0061ce23 jmp 0x48bb00 */ SAVEALL; F_0048bb00(c); return;
}

void F_0061ce28(CPU *c) {
  NATIVE_HOOK(0x61ce28u) REGS; LOADALL;
  goto L_0061ce28;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ce28:;
  /* 0061ce28 mov eax, 0x65d480 */ { eax = (u32)(0x65d480u); }
  /* 0061ce2d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ce40(CPU *c) {
  NATIVE_HOOK(0x61ce40u) REGS; LOADALL;
L_0061ce40:;
  /* 0061ce40 lea esi, [ebp + 0x10] */ esi = (u32)((u32)(ebp + 0x10u));
  /* 0061ce43 jmp 0x48bb00 */ SAVEALL; F_0048bb00(c); return;
}

void F_0061ce48(CPU *c) {
  NATIVE_HOOK(0x61ce48u) REGS; LOADALL;
  goto L_0061ce48;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ce48:;
  /* 0061ce48 mov eax, 0x65d4a4 */ { eax = (u32)(0x65d4a4u); }
  /* 0061ce4d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ce60(CPU *c) {
  NATIVE_HOOK(0x61ce60u) REGS; LOADALL;
L_0061ce60:;
  /* 0061ce60 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061ce63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ce64 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061ce67 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ce68 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ce6du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61ce68u); RETCHK(0x61ce6du, 0x61ce68u); LOADALL;
  /* 0061ce6d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ce70 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ce71(CPU *c) {
  NATIVE_HOOK(0x61ce71u) REGS; LOADALL;
  goto L_0061ce71;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ce71:;
  /* 0061ce71 mov eax, 0x65d544 */ { eax = (u32)(0x65d544u); }
  /* 0061ce76 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ce80(CPU *c) {
  NATIVE_HOOK(0x61ce80u) REGS; LOADALL;
L_0061ce80:;
  /* 0061ce80 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061ce83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ce84 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061ce87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ce88 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ce8du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61ce88u); RETCHK(0x61ce8du, 0x61ce88u); LOADALL;
  /* 0061ce8d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ce90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ce91(CPU *c) {
  NATIVE_HOOK(0x61ce91u) REGS; LOADALL;
  goto L_0061ce91;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ce91:;
  /* 0061ce91 mov eax, 0x65d59c */ { eax = (u32)(0x65d59cu); }
  /* 0061ce96 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cea0(CPU *c) {
  NATIVE_HOOK(0x61cea0u) REGS; LOADALL;
L_0061cea0:;
  /* 0061cea0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061cea3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061cea4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061cea7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061cea8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ceadu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61cea8u); RETCHK(0x61ceadu, 0x61cea8u); LOADALL;
  /* 0061cead add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ceb0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ceb1(CPU *c) {
  NATIVE_HOOK(0x61ceb1u) REGS; LOADALL;
  goto L_0061ceb1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ceb1:;
  /* 0061ceb1 mov eax, 0x65d660 */ { eax = (u32)(0x65d660u); }
  /* 0061ceb6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cec0(CPU *c) {
  NATIVE_HOOK(0x61cec0u) REGS; LOADALL;
L_0061cec0:;
  /* 0061cec0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061cec3 add ecx, 0x35c */ { u32 a_ = ecx, b_ = 0x35cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061cec9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061cece(CPU *c) {
  NATIVE_HOOK(0x61ceceu) REGS; LOADALL;
L_0061cece:;
  /* 0061cece mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ced1 add ecx, 0x378 */ { u32 a_ = ecx, b_ = 0x378u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061ced7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061cedc(CPU *c) {
  NATIVE_HOOK(0x61cedcu) REGS; LOADALL;
  goto L_0061cedc;
L_004866f0:;
  /* 004866f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004866f1 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004866f4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004866f6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004866f8 je 0x48671d */ if (ZF_) goto L_0048671d;
  /* 004866fa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004866fb mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 004866fe cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00486700 je 0x48670e */ if (ZF_) goto L_0048670e;
L_00486702:;
  /* 00486702 call 0x442b90 */ esp -= 4; M32(esp) = 0x486707u; SAVEALL; F_00442b90(c); ABI_CHECK(0x442b90u, 0x486702u); RETCHK(0x486707u, 0x486702u); LOADALL;
  /* 00486707 add esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0048670a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0048670c jne 0x486702 */ if (!ZF_) goto L_00486702;
L_0048670e:;
  /* 0048670e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00486711 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00486712 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x486717u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x486712u); RETCHK(0x486717u, 0x486712u); LOADALL;
  /* 00486717 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0048671a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0048671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0048671d:;
  /* 0048671d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00486720 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00486723 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00486726 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00486727 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061cedc:;
  /* 0061cedc mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061cedf add ebx, 0x3a0 */ { u32 a_ = ebx, b_ = 0x3a0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061cee5 jmp 0x4866f0 */ goto L_004866f0;
}

void F_0061ceea(CPU *c) {
  NATIVE_HOOK(0x61ceeau) REGS; LOADALL;
  goto L_0061ceea;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ceea:;
  /* 0061ceea mov eax, 0x65d6dc */ { eax = (u32)(0x65d6dcu); }
  /* 0061ceef jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cf00(CPU *c) {
  NATIVE_HOOK(0x61cf00u) REGS; LOADALL;
L_0061cf00:;
  /* 0061cf00 lea ecx, [ebp - 0x420] */ ecx = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0061cf06 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061cf0b(CPU *c) {
  NATIVE_HOOK(0x61cf0bu) REGS; LOADALL;
L_0061cf0b:;
  /* 0061cf0b lea esi, [ebp - 0x458] */ esi = (u32)((u32)(ebp + 0xfffffba8u));
  /* 0061cf11 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061cf16(CPU *c) {
  NATIVE_HOOK(0x61cf16u) REGS; LOADALL;
L_0061cf16:;
  /* 0061cf16 lea esi, [ebp - 0x440] */ esi = (u32)((u32)(ebp + 0xfffffbc0u));
  /* 0061cf1c jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061cf21(CPU *c) {
  NATIVE_HOOK(0x61cf21u) REGS; LOADALL;
  goto L_0061cf21;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cf21:;
  /* 0061cf21 mov eax, 0x65da74 */ { eax = (u32)(0x65da74u); }
  /* 0061cf26 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cf30(CPU *c) {
  NATIVE_HOOK(0x61cf30u) REGS; LOADALL;
L_0061cf30:;
  /* 0061cf30 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061cf33 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061cf38(CPU *c) {
  NATIVE_HOOK(0x61cf38u) REGS; LOADALL;
L_0061cf38:;
  /* 0061cf38 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061cf3b add ecx, 0x118 */ { u32 a_ = ecx, b_ = 0x118u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061cf41 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061cf46(CPU *c) {
  NATIVE_HOOK(0x61cf46u) REGS; LOADALL;
L_0061cf46:;
  /* 0061cf46 push 0x43ee60 */ { u32 v_ = 0x43ee60u; esp -= 4; M32(esp) = v_; }
  /* 0061cf4b push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0061cf4d push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0061cf4f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061cf52 add eax, 0x134 */ { u32 a_ = eax, b_ = 0x134u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061cf57 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061cf58 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61cf5du; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61cf58u); RETCHK(0x61cf5du, 0x61cf58u); LOADALL;
  /* 0061cf5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cf5e(CPU *c) {
  NATIVE_HOOK(0x61cf5eu) REGS; LOADALL;
  goto L_0061cf5e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cf5e:;
  /* 0061cf5e mov eax, 0x65daa8 */ { eax = (u32)(0x65daa8u); }
  /* 0061cf63 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cf70(CPU *c) {
  NATIVE_HOOK(0x61cf70u) REGS; LOADALL;
L_0061cf70:;
  /* 0061cf70 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061cf73 add esi, 0x41c */ { u32 a_ = esi, b_ = 0x41cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061cf79 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061cf7e(CPU *c) {
  NATIVE_HOOK(0x61cf7eu) REGS; LOADALL;
  goto L_0061cf7e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cf7e:;
  /* 0061cf7e mov eax, 0x65dacc */ { eax = (u32)(0x65daccu); }
  /* 0061cf83 jmp 0x5fee2a */ goto L_005fee2a;
}
