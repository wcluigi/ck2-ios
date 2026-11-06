#include "funcs.h"

void F_0061df38(CPU *c) {
  NATIVE_HOOK(0x61df38u) REGS; LOADALL;
L_0061df38:;
  /* 0061df38 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061df3b add esi, 0x1cc */ { u32 a_ = esi, b_ = 0x1ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061df41 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061df46(CPU *c) {
  NATIVE_HOOK(0x61df46u) REGS; LOADALL;
L_0061df46:;
  /* 0061df46 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061df49 add ecx, 0x1dc */ { u32 a_ = ecx, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061df4f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061df54(CPU *c) {
  NATIVE_HOOK(0x61df54u) REGS; LOADALL;
L_0061df54:;
  /* 0061df54 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061df57 add esi, 0x1f8 */ { u32 a_ = esi, b_ = 0x1f8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061df5d jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061df62(CPU *c) {
  NATIVE_HOOK(0x61df62u) REGS; LOADALL;
  goto L_0061df62;
L_00508c40:;
  /* 00508c40 jmp 0x403410 */ SAVEALL; F_00403410(c); return;
L_0061df62:;
  /* 0061df62 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061df65 add esi, 0x208 */ { u32 a_ = esi, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061df6b jmp 0x508c40 */ goto L_00508c40;
}

void F_0061df70(CPU *c) {
  NATIVE_HOOK(0x61df70u) REGS; LOADALL;
L_0061df70:;
  /* 0061df70 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061df73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061df78(CPU *c) {
  NATIVE_HOOK(0x61df78u) REGS; LOADALL;
  goto L_0061df78;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061df78:;
  /* 0061df78 mov eax, 0x660a38 */ { eax = (u32)(0x660a38u); }
  /* 0061df7d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061df90(CPU *c) {
  NATIVE_HOOK(0x61df90u) REGS; LOADALL;
L_0061df90:;
  /* 0061df90 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061df93 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_0061df98(CPU *c) {
  NATIVE_HOOK(0x61df98u) REGS; LOADALL;
L_0061df98:;
  /* 0061df98 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061df9b add ecx, 0x1cc */ { u32 a_ = ecx, b_ = 0x1ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061dfa1 jmp 0x5038b0 */ SAVEALL; F_005038b0(c); return;
}

void F_0061dfa6(CPU *c) {
  NATIVE_HOOK(0x61dfa6u) REGS; LOADALL;
  goto L_0061dfa6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dfa6:;
  /* 0061dfa6 mov eax, 0x660b18 */ { eax = (u32)(0x660b18u); }
  /* 0061dfab jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dfb0(CPU *c) {
  NATIVE_HOOK(0x61dfb0u) REGS; LOADALL;
L_0061dfb0:;
  /* 0061dfb0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061dfb3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061dfb8(CPU *c) {
  NATIVE_HOOK(0x61dfb8u) REGS; LOADALL;
L_0061dfb8:;
  /* 0061dfb8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061dfbb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061dfc0(CPU *c) {
  NATIVE_HOOK(0x61dfc0u) REGS; LOADALL;
L_0061dfc0:;
  /* 0061dfc0 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 0061dfc6 jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061dfcb(CPU *c) {
  NATIVE_HOOK(0x61dfcbu) REGS; LOADALL;
L_0061dfcb:;
  /* 0061dfcb mov eax, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); eax = (u32)(M32(m_)); }
  /* 0061dfd1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061dfd2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61dfd7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61dfd2u); RETCHK(0x61dfd7u, 0x61dfd2u); LOADALL;
  /* 0061dfd7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061dfd8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061dfd9(CPU *c) {
  NATIVE_HOOK(0x61dfd9u) REGS; LOADALL;
  goto L_0061dfd9;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dfd9:;
  /* 0061dfd9 mov eax, 0x660b78 */ { eax = (u32)(0x660b78u); }
  /* 0061dfde jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061dff0(CPU *c) {
  NATIVE_HOOK(0x61dff0u) REGS; LOADALL;
  goto L_0061dff0;
L_00500bc0:;
  /* 00500bc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500bc1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00500bc3 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00500bc6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00500bc8 mov dword ptr [esi], 0x65005c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x65005cu); }
  /* 00500bce je 0x500be0 */ if (ZF_) goto L_00500be0;
  /* 00500bd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500bd1 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x500bd6u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x500bd1u); RETCHK(0x500bd6u, 0x500bd1u); LOADALL;
  /* 00500bd6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500bd9 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_00500be0:;
  /* 00500be0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500be1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061dff0:;
  /* 0061dff0 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0061dff3 jmp 0x500bc0 */ goto L_00500bc0;
}

void F_0061dff8(CPU *c) {
  NATIVE_HOOK(0x61dff8u) REGS; LOADALL;
  goto L_0061dff8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061dff8:;
  /* 0061dff8 mov eax, 0x660c08 */ { eax = (u32)(0x660c08u); }
  /* 0061dffd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e010(CPU *c) {
  NATIVE_HOOK(0x61e010u) REGS; LOADALL;
L_0061e010:;
  /* 0061e010 lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0061e016 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e01b(CPU *c) {
  NATIVE_HOOK(0x61e01bu) REGS; LOADALL;
L_0061e01b:;
  /* 0061e01b lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0061e021 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e026(CPU *c) {
  NATIVE_HOOK(0x61e026u) REGS; LOADALL;
L_0061e026:;
  /* 0061e026 lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0061e02c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e031(CPU *c) {
  NATIVE_HOOK(0x61e031u) REGS; LOADALL;
  goto L_0061e031;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e031:;
  /* 0061e031 mov eax, 0x660c3c */ { eax = (u32)(0x660c3cu); }
  /* 0061e036 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e040(CPU *c) {
  NATIVE_HOOK(0x61e040u) REGS; LOADALL;
L_0061e040:;
  /* 0061e040 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061e043 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061e046 je 0x61e05b */ if (ZF_) goto L_0061e05b;
  /* 0061e04c and dword ptr [ebp - 0x10], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0061e050 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e053 add ecx, 0x64 */ { u32 a_ = ecx, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e056 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
L_0061e05b:;
  /* 0061e05b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e05c(CPU *c) {
  NATIVE_HOOK(0x61e05cu) REGS; LOADALL;
  goto L_0061e05c;
L_004b12d0:;
  /* 004b12d0 mov eax, dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004b12d3 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004b12d6 mov dword ptr [edx + ecx - 8], 0x64e81c */ { const u32 m_ = (u32)(edx + ecx + 0xfffffff8u); M32(m_) = (u32)(0x64e81cu); }
  /* 004b12de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061e05c:;
  /* 0061e05c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e05f add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e062 jmp 0x4b12d0 */ goto L_004b12d0;
}

void F_0061e067(CPU *c) {
  NATIVE_HOOK(0x61e067u) REGS; LOADALL;
  goto L_0061e067;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e067:;
  /* 0061e067 mov eax, 0x660c70 */ { eax = (u32)(0x660c70u); }
  /* 0061e06c jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e080(CPU *c) {
  NATIVE_HOOK(0x61e080u) REGS; LOADALL;
  goto L_0061e080;
L_004fc620:;
  /* 004fc620 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc621 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fc623 add esi, 0x64 */ { u32 a_ = esi, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fc626 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fc628 call 0x4febe0 */ esp -= 4; M32(esp) = 0x4fc62du; SAVEALL; F_004febe0(c); ABI_CHECK(0x4febe0u, 0x4fc628u); RETCHK(0x4fc62du, 0x4fc628u); LOADALL;
  /* 004fc62d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fc62f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc630 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
L_0061e080:;
  /* 0061e080 lea eax, [ebp - 0x11c] */ eax = (u32)((u32)(ebp + 0xfffffee4u));
  /* 0061e086 jmp 0x4fc620 */ goto L_004fc620;
}

void F_0061e08b(CPU *c) {
  NATIVE_HOOK(0x61e08bu) REGS; LOADALL;
L_0061e08b:;
  /* 0061e08b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e08e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e093(CPU *c) {
  NATIVE_HOOK(0x61e093u) REGS; LOADALL;
L_0061e093:;
  /* 0061e093 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061e096 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e09b(CPU *c) {
  NATIVE_HOOK(0x61e09bu) REGS; LOADALL;
L_0061e09b:;
  /* 0061e09b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061e09e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e0a3(CPU *c) {
  NATIVE_HOOK(0x61e0a3u) REGS; LOADALL;
L_0061e0a3:;
  /* 0061e0a3 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0061e0a9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e0ae(CPU *c) {
  NATIVE_HOOK(0x61e0aeu) REGS; LOADALL;
L_0061e0ae:;
  /* 0061e0ae mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 0061e0b1 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061e0b4 je 0x61e0c6 */ if (ZF_) goto L_0061e0c6;
  /* 0061e0ba and dword ptr [ebp - 0x68], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0061e0be mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e0c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
L_0061e0c6:;
  /* 0061e0c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e0c7(CPU *c) {
  NATIVE_HOOK(0x61e0c7u) REGS; LOADALL;
  goto L_0061e0c7;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e0c7:;
  /* 0061e0c7 mov eax, 0x660cbc */ { eax = (u32)(0x660cbcu); }
  /* 0061e0cc jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e0e0(CPU *c) {
  NATIVE_HOOK(0x61e0e0u) REGS; LOADALL;
L_0061e0e0:;
  /* 0061e0e0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061e0e3 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061e0e8(CPU *c) {
  NATIVE_HOOK(0x61e0e8u) REGS; LOADALL;
L_0061e0e8:;
  /* 0061e0e8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e0eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e0f0(CPU *c) {
  NATIVE_HOOK(0x61e0f0u) REGS; LOADALL;
L_0061e0f0:;
  /* 0061e0f0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061e0f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e0f8(CPU *c) {
  NATIVE_HOOK(0x61e0f8u) REGS; LOADALL;
L_0061e0f8:;
  /* 0061e0f8 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0061e0fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e100(CPU *c) {
  NATIVE_HOOK(0x61e100u) REGS; LOADALL;
L_0061e100:;
  /* 0061e100 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061e103 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e108(CPU *c) {
  NATIVE_HOOK(0x61e108u) REGS; LOADALL;
L_0061e108:;
  /* 0061e108 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061e10b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e110(CPU *c) {
  NATIVE_HOOK(0x61e110u) REGS; LOADALL;
  goto L_0061e110;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e110:;
  /* 0061e110 mov eax, 0x660d08 */ { eax = (u32)(0x660d08u); }
  /* 0061e115 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e120(CPU *c) {
  NATIVE_HOOK(0x61e120u) REGS; LOADALL;
L_0061e120:;
  /* 0061e120 mov eax, dword ptr [0x9ba9c8] */ { const u32 m_ = (u32)(0x9ba9c8u); eax = (u32)(M32(m_)); }
  /* 0061e125 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061e128 mov dword ptr [0x9ba9c8], eax */ { const u32 m_ = (u32)(0x9ba9c8u); M32(m_) = (u32)(eax); }
  /* 0061e12d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e12e(CPU *c) {
  NATIVE_HOOK(0x61e12eu) REGS; LOADALL;
  goto L_0061e12e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e12e:;
  /* 0061e12e mov eax, 0x660d2c */ { eax = (u32)(0x660d2cu); }
  /* 0061e133 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e140(CPU *c) {
  NATIVE_HOOK(0x61e140u) REGS; LOADALL;
L_0061e140:;
  /* 0061e140 mov eax, dword ptr [0x9ba9dc] */ { const u32 m_ = (u32)(0x9ba9dcu); eax = (u32)(M32(m_)); }
  /* 0061e145 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061e148 mov dword ptr [0x9ba9dc], eax */ { const u32 m_ = (u32)(0x9ba9dcu); M32(m_) = (u32)(eax); }
  /* 0061e14d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e14e(CPU *c) {
  NATIVE_HOOK(0x61e14eu) REGS; LOADALL;
  goto L_0061e14e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e14e:;
  /* 0061e14e mov eax, 0x660d50 */ { eax = (u32)(0x660d50u); }
  /* 0061e153 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e160(CPU *c) {
  NATIVE_HOOK(0x61e160u) REGS; LOADALL;
L_0061e160:;
  /* 0061e160 mov eax, dword ptr [0x9ba9f0] */ { const u32 m_ = (u32)(0x9ba9f0u); eax = (u32)(M32(m_)); }
  /* 0061e165 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061e168 mov dword ptr [0x9ba9f0], eax */ { const u32 m_ = (u32)(0x9ba9f0u); M32(m_) = (u32)(eax); }
  /* 0061e16d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e16e(CPU *c) {
  NATIVE_HOOK(0x61e16eu) REGS; LOADALL;
  goto L_0061e16e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e16e:;
  /* 0061e16e mov eax, 0x660d74 */ { eax = (u32)(0x660d74u); }
  /* 0061e173 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e180(CPU *c) {
  NATIVE_HOOK(0x61e180u) REGS; LOADALL;
L_0061e180:;
  /* 0061e180 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061e183 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e186 jmp 0x548a40 */ SAVEALL; F_00548a40(c); return;
}

void F_0061e18b(CPU *c) {
  NATIVE_HOOK(0x61e18bu) REGS; LOADALL;
L_0061e18b:;
  /* 0061e18b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061e18e add ecx, 0x1dc */ { u32 a_ = ecx, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e194 jmp 0x4eac50 */ SAVEALL; F_004eac50(c); return;
}

void F_0061e199(CPU *c) {
  NATIVE_HOOK(0x61e199u) REGS; LOADALL;
  goto L_0061e199;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e199:;
  /* 0061e199 mov eax, 0x660da0 */ { eax = (u32)(0x660da0u); }
  /* 0061e19e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e1b0(CPU *c) {
  NATIVE_HOOK(0x61e1b0u) REGS; LOADALL;
L_0061e1b0:;
  /* 0061e1b0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061e1b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061e1b4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061e1b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061e1b8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61e1bdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61e1b8u); RETCHK(0x61e1bdu, 0x61e1b8u); LOADALL;
  /* 0061e1bd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061e1c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e1c1(CPU *c) {
  NATIVE_HOOK(0x61e1c1u) REGS; LOADALL;
  goto L_0061e1c1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e1c1:;
  /* 0061e1c1 mov eax, 0x660e24 */ { eax = (u32)(0x660e24u); }
  /* 0061e1c6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e1d0(CPU *c) {
  NATIVE_HOOK(0x61e1d0u) REGS; LOADALL;
L_0061e1d0:;
  /* 0061e1d0 lea esi, [ebp - 0x48] */ esi = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061e1d3 jmp 0x4ea1b0 */ SAVEALL; F_004ea1b0(c); return;
}

void F_0061e1d8(CPU *c) {
  NATIVE_HOOK(0x61e1d8u) REGS; LOADALL;
  goto L_0061e1d8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e1d8:;
  /* 0061e1d8 mov eax, 0x660eb0 */ { eax = (u32)(0x660eb0u); }
  /* 0061e1dd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e1f0(CPU *c) {
  NATIVE_HOOK(0x61e1f0u) REGS; LOADALL;
L_0061e1f0:;
  /* 0061e1f0 lea esi, [ebp - 0x44] */ esi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061e1f3 jmp 0x4ea1b0 */ SAVEALL; F_004ea1b0(c); return;
}

void F_0061e1f8(CPU *c) {
  NATIVE_HOOK(0x61e1f8u) REGS; LOADALL;
  goto L_0061e1f8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e1f8:;
  /* 0061e1f8 mov eax, 0x660ef8 */ { eax = (u32)(0x660ef8u); }
  /* 0061e1fd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e210(CPU *c) {
  NATIVE_HOOK(0x61e210u) REGS; LOADALL;
L_0061e210:;
  /* 0061e210 mov eax, dword ptr [ebp - 0x230] */ { const u32 m_ = (u32)(ebp + 0xfffffdd0u); eax = (u32)(M32(m_)); }
  /* 0061e216 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061e217 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x61e21cu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x61e217u); RETCHK(0x61e21cu, 0x61e217u); LOADALL;
  /* 0061e21c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061e21d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e21e(CPU *c) {
  NATIVE_HOOK(0x61e21eu) REGS; LOADALL;
L_0061e21e:;
  /* 0061e21e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e221 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e226(CPU *c) {
  NATIVE_HOOK(0x61e226u) REGS; LOADALL;
  goto L_0061e226;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e226:;
  /* 0061e226 mov eax, 0x660f24 */ { eax = (u32)(0x660f24u); }
  /* 0061e22b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e230(CPU *c) {
  NATIVE_HOOK(0x61e230u) REGS; LOADALL;
L_0061e230:;
  /* 0061e230 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061e233 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061e234 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061e237 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061e238 call 0x459c10 */ esp -= 4; M32(esp) = 0x61e23du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61e238u); RETCHK(0x61e23du, 0x61e238u); LOADALL;
  /* 0061e23d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061e240 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e241(CPU *c) {
  NATIVE_HOOK(0x61e241u) REGS; LOADALL;
  goto L_0061e241;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e241:;
  /* 0061e241 mov eax, 0x660f7c */ { eax = (u32)(0x660f7cu); }
  /* 0061e246 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e250(CPU *c) {
  NATIVE_HOOK(0x61e250u) REGS; LOADALL;
L_0061e250:;
  /* 0061e250 lea esi, [ebp - 0x88] */ esi = (u32)((u32)(ebp + 0xffffff78u));
  /* 0061e256 jmp 0x4e8c10 */ SAVEALL; F_004e8c10(c); return;
}

void F_0061e25b(CPU *c) {
  NATIVE_HOOK(0x61e25bu) REGS; LOADALL;
  goto L_0061e25b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e25b:;
  /* 0061e25b mov eax, 0x661008 */ { eax = (u32)(0x661008u); }
  /* 0061e260 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e270(CPU *c) {
  NATIVE_HOOK(0x61e270u) REGS; LOADALL;
L_0061e270:;
  /* 0061e270 lea ecx, [ebp - 0xe8] */ ecx = (u32)((u32)(ebp + 0xffffff18u));
  /* 0061e276 jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061e27b(CPU *c) {
  NATIVE_HOOK(0x61e27bu) REGS; LOADALL;
L_0061e27b:;
  /* 0061e27b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e27e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e283(CPU *c) {
  NATIVE_HOOK(0x61e283u) REGS; LOADALL;
L_0061e283:;
  /* 0061e283 lea esi, [ebp - 0xa0] */ esi = (u32)((u32)(ebp + 0xffffff60u));
  /* 0061e289 jmp 0x4e8c10 */ SAVEALL; F_004e8c10(c); return;
}

void F_0061e28e(CPU *c) {
  NATIVE_HOOK(0x61e28eu) REGS; LOADALL;
  goto L_0061e28e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e28e:;
  /* 0061e28e mov eax, 0x66103c */ { eax = (u32)(0x66103cu); }
  /* 0061e293 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e2a0(CPU *c) {
  NATIVE_HOOK(0x61e2a0u) REGS; LOADALL;
L_0061e2a0:;
  /* 0061e2a0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061e2a3 add esi, 0x2e0 */ { u32 a_ = esi, b_ = 0x2e0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061e2a9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061e2ae(CPU *c) {
  NATIVE_HOOK(0x61e2aeu) REGS; LOADALL;
L_0061e2ae:;
  /* 0061e2ae mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061e2b1 add esi, 0x2f4 */ { u32 a_ = esi, b_ = 0x2f4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061e2b7 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061e2bc(CPU *c) {
  NATIVE_HOOK(0x61e2bcu) REGS; LOADALL;
  goto L_0061e2bc;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e2bc:;
  /* 0061e2bc mov eax, 0x661068 */ { eax = (u32)(0x661068u); }
  /* 0061e2c1 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e2d0(CPU *c) {
  NATIVE_HOOK(0x61e2d0u) REGS; LOADALL;
L_0061e2d0:;
  /* 0061e2d0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061e2d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061e2d4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061e2d7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061e2d8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61e2ddu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61e2d8u); RETCHK(0x61e2ddu, 0x61e2d8u); LOADALL;
  /* 0061e2dd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061e2e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e2e1(CPU *c) {
  NATIVE_HOOK(0x61e2e1u) REGS; LOADALL;
  goto L_0061e2e1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e2e1:;
  /* 0061e2e1 mov eax, 0x6610c0 */ { eax = (u32)(0x6610c0u); }
  /* 0061e2e6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e2f0(CPU *c) {
  NATIVE_HOOK(0x61e2f0u) REGS; LOADALL;
L_0061e2f0:;
  /* 0061e2f0 lea esi, [ebp - 0x134] */ esi = (u32)((u32)(ebp + 0xfffffeccu));
  /* 0061e2f6 jmp 0x4d70d0 */ SAVEALL; F_004d70d0(c); return;
}

void F_0061e2fb(CPU *c) {
  NATIVE_HOOK(0x61e2fbu) REGS; LOADALL;
  goto L_0061e2fb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e2fb:;
  /* 0061e2fb mov eax, 0x66114c */ { eax = (u32)(0x66114cu); }
  /* 0061e300 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e310(CPU *c) {
  NATIVE_HOOK(0x61e310u) REGS; LOADALL;
L_0061e310:;
  /* 0061e310 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061e313 add esi, 0xfc */ { u32 a_ = esi, b_ = 0xfcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061e319 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061e31e(CPU *c) {
  NATIVE_HOOK(0x61e31eu) REGS; LOADALL;
  goto L_0061e31e;
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
L_0061e31e:;
  /* 0061e31e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061e321 add eax, 0x160 */ { u32 a_ = eax, b_ = 0x160u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061e326 jmp 0x4d9460 */ goto L_004d9460;
}

void F_0061e32b(CPU *c) {
  NATIVE_HOOK(0x61e32bu) REGS; LOADALL;
L_0061e32b:;
  /* 0061e32b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061e32e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e333(CPU *c) {
  NATIVE_HOOK(0x61e333u) REGS; LOADALL;
L_0061e333:;
  /* 0061e333 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0061e336 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e33b(CPU *c) {
  NATIVE_HOOK(0x61e33bu) REGS; LOADALL;
L_0061e33b:;
  /* 0061e33b mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 0061e33e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e343(CPU *c) {
  NATIVE_HOOK(0x61e343u) REGS; LOADALL;
L_0061e343:;
  /* 0061e343 mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 0061e346 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e34b(CPU *c) {
  NATIVE_HOOK(0x61e34bu) REGS; LOADALL;
L_0061e34b:;
  /* 0061e34b mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 0061e34e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e353(CPU *c) {
  NATIVE_HOOK(0x61e353u) REGS; LOADALL;
L_0061e353:;
  /* 0061e353 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061e356 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e35b(CPU *c) {
  NATIVE_HOOK(0x61e35bu) REGS; LOADALL;
L_0061e35b:;
  /* 0061e35b mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061e35e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e363(CPU *c) {
  NATIVE_HOOK(0x61e363u) REGS; LOADALL;
L_0061e363:;
  /* 0061e363 mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 0061e366 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e36b(CPU *c) {
  NATIVE_HOOK(0x61e36bu) REGS; LOADALL;
L_0061e36b:;
  /* 0061e36b mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0061e36e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e373(CPU *c) {
  NATIVE_HOOK(0x61e373u) REGS; LOADALL;
L_0061e373:;
  /* 0061e373 lea esi, [ebp - 0x154] */ esi = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0061e379 jmp 0x4d70d0 */ SAVEALL; F_004d70d0(c); return;
}

void F_0061e37e(CPU *c) {
  NATIVE_HOOK(0x61e37eu) REGS; LOADALL;
L_0061e37e:;
  /* 0061e37e mov ecx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0061e381 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e386(CPU *c) {
  NATIVE_HOOK(0x61e386u) REGS; LOADALL;
L_0061e386:;
  /* 0061e386 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0061e389 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e38e(CPU *c) {
  NATIVE_HOOK(0x61e38eu) REGS; LOADALL;
L_0061e38e:;
  /* 0061e38e mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 0061e391 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e396(CPU *c) {
  NATIVE_HOOK(0x61e396u) REGS; LOADALL;
L_0061e396:;
  /* 0061e396 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061e399 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e39e(CPU *c) {
  NATIVE_HOOK(0x61e39eu) REGS; LOADALL;
L_0061e39e:;
  /* 0061e39e mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061e3a1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e3a6(CPU *c) {
  NATIVE_HOOK(0x61e3a6u) REGS; LOADALL;
L_0061e3a6:;
  /* 0061e3a6 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 0061e3a9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e3ae(CPU *c) {
  NATIVE_HOOK(0x61e3aeu) REGS; LOADALL;
L_0061e3ae:;
  /* 0061e3ae mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 0061e3b1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e3b6(CPU *c) {
  NATIVE_HOOK(0x61e3b6u) REGS; LOADALL;
L_0061e3b6:;
  /* 0061e3b6 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 0061e3b9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e3be(CPU *c) {
  NATIVE_HOOK(0x61e3beu) REGS; LOADALL;
L_0061e3be:;
  /* 0061e3be mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0061e3c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e3c6(CPU *c) {
  NATIVE_HOOK(0x61e3c6u) REGS; LOADALL;
L_0061e3c6:;
  /* 0061e3c6 lea esi, [ebp - 0x154] */ esi = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0061e3cc jmp 0x4d70d0 */ SAVEALL; F_004d70d0(c); return;
}

void F_0061e3d1(CPU *c) {
  NATIVE_HOOK(0x61e3d1u) REGS; LOADALL;
  goto L_0061e3d1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e3d1:;
  /* 0061e3d1 mov eax, 0x661218 */ { eax = (u32)(0x661218u); }
  /* 0061e3d6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e3e0(CPU *c) {
  NATIVE_HOOK(0x61e3e0u) REGS; LOADALL;
L_0061e3e0:;
  /* 0061e3e0 lea esi, [ebp + 0x14] */ esi = (u32)((u32)(ebp + 0x14u));
  /* 0061e3e3 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061e3e8(CPU *c) {
  NATIVE_HOOK(0x61e3e8u) REGS; LOADALL;
  goto L_0061e3e8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e3e8:;
  /* 0061e3e8 mov eax, 0x66123c */ { eax = (u32)(0x66123cu); }
  /* 0061e3ed jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e400(CPU *c) {
  NATIVE_HOOK(0x61e400u) REGS; LOADALL;
  goto L_0061e400;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e400:;
  /* 0061e400 mov eax, 0x66128c */ { eax = (u32)(0x66128cu); }
  /* 0061e405 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e410(CPU *c) {
  NATIVE_HOOK(0x61e410u) REGS; LOADALL;
L_0061e410:;
  /* 0061e410 lea esi, [ebp - 0x48] */ esi = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061e413 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061e418(CPU *c) {
  NATIVE_HOOK(0x61e418u) REGS; LOADALL;
  goto L_0061e418;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e418:;
  /* 0061e418 mov eax, 0x66133c */ { eax = (u32)(0x66133cu); }
  /* 0061e41d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e430(CPU *c) {
  NATIVE_HOOK(0x61e430u) REGS; LOADALL;
L_0061e430:;
  /* 0061e430 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e433 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e438(CPU *c) {
  NATIVE_HOOK(0x61e438u) REGS; LOADALL;
L_0061e438:;
  /* 0061e438 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061e43b jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061e440(CPU *c) {
  NATIVE_HOOK(0x61e440u) REGS; LOADALL;
  goto L_0061e440;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e440:;
  /* 0061e440 mov eax, 0x661368 */ { eax = (u32)(0x661368u); }
  /* 0061e445 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e450(CPU *c) {
  NATIVE_HOOK(0x61e450u) REGS; LOADALL;
L_0061e450:;
  /* 0061e450 lea ecx, [ebp - 0x174] */ ecx = (u32)((u32)(ebp + 0xfffffe8cu));
  /* 0061e456 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e45b(CPU *c) {
  NATIVE_HOOK(0x61e45bu) REGS; LOADALL;
L_0061e45b:;
  /* 0061e45b lea ecx, [ebp - 0x174] */ ecx = (u32)((u32)(ebp + 0xfffffe8cu));
  /* 0061e461 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e466(CPU *c) {
  NATIVE_HOOK(0x61e466u) REGS; LOADALL;
L_0061e466:;
  /* 0061e466 lea ecx, [ebp - 0x174] */ ecx = (u32)((u32)(ebp + 0xfffffe8cu));
  /* 0061e46c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e471(CPU *c) {
  NATIVE_HOOK(0x61e471u) REGS; LOADALL;
L_0061e471:;
  /* 0061e471 lea ecx, [ebp - 0xc8] */ ecx = (u32)((u32)(ebp + 0xffffff38u));
  /* 0061e477 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e47c(CPU *c) {
  NATIVE_HOOK(0x61e47cu) REGS; LOADALL;
L_0061e47c:;
  /* 0061e47c lea ecx, [ebp - 0x174] */ ecx = (u32)((u32)(ebp + 0xfffffe8cu));
  /* 0061e482 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e487(CPU *c) {
  NATIVE_HOOK(0x61e487u) REGS; LOADALL;
L_0061e487:;
  /* 0061e487 lea ecx, [ebp - 0x2ec] */ ecx = (u32)((u32)(ebp + 0xfffffd14u));
  /* 0061e48d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e492(CPU *c) {
  NATIVE_HOOK(0x61e492u) REGS; LOADALL;
L_0061e492:;
  /* 0061e492 lea ecx, [ebp - 0x298] */ ecx = (u32)((u32)(ebp + 0xfffffd68u));
  /* 0061e498 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e49d(CPU *c) {
  NATIVE_HOOK(0x61e49du) REGS; LOADALL;
L_0061e49d:;
  /* 0061e49d lea ecx, [ebp - 0x2d0] */ ecx = (u32)((u32)(ebp + 0xfffffd30u));
  /* 0061e4a3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e4a8(CPU *c) {
  NATIVE_HOOK(0x61e4a8u) REGS; LOADALL;
L_0061e4a8:;
  /* 0061e4a8 lea ecx, [ebp - 0x308] */ ecx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0061e4ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e4b3(CPU *c) {
  NATIVE_HOOK(0x61e4b3u) REGS; LOADALL;
L_0061e4b3:;
  /* 0061e4b3 lea ecx, [ebp - 0x340] */ ecx = (u32)((u32)(ebp + 0xfffffcc0u));
  /* 0061e4b9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e4be(CPU *c) {
  NATIVE_HOOK(0x61e4beu) REGS; LOADALL;
L_0061e4be:;
  /* 0061e4be lea ecx, [ebp - 0x1d4] */ ecx = (u32)((u32)(ebp + 0xfffffe2cu));
  /* 0061e4c4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e4c9(CPU *c) {
  NATIVE_HOOK(0x61e4c9u) REGS; LOADALL;
L_0061e4c9:;
  /* 0061e4c9 lea ecx, [ebp - 0x19c] */ ecx = (u32)((u32)(ebp + 0xfffffe64u));
  /* 0061e4cf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e4d4(CPU *c) {
  NATIVE_HOOK(0x61e4d4u) REGS; LOADALL;
L_0061e4d4:;
  /* 0061e4d4 lea ecx, [ebp - 0x20c] */ ecx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 0061e4da jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e4df(CPU *c) {
  NATIVE_HOOK(0x61e4dfu) REGS; LOADALL;
L_0061e4df:;
  /* 0061e4df lea ecx, [ebp - 0x2b4] */ ecx = (u32)((u32)(ebp + 0xfffffd4cu));
  /* 0061e4e5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e4ea(CPU *c) {
  NATIVE_HOOK(0x61e4eau) REGS; LOADALL;
L_0061e4ea:;
  /* 0061e4ea lea ecx, [ebp - 0x244] */ ecx = (u32)((u32)(ebp + 0xfffffdbcu));
  /* 0061e4f0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e4f5(CPU *c) {
  NATIVE_HOOK(0x61e4f5u) REGS; LOADALL;
L_0061e4f5:;
  /* 0061e4f5 lea ecx, [ebp - 0x324] */ ecx = (u32)((u32)(ebp + 0xfffffcdcu));
  /* 0061e4fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e500(CPU *c) {
  NATIVE_HOOK(0x61e500u) REGS; LOADALL;
L_0061e500:;
  /* 0061e500 lea ecx, [ebp - 0x27c] */ ecx = (u32)((u32)(ebp + 0xfffffd84u));
  /* 0061e506 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e50b(CPU *c) {
  NATIVE_HOOK(0x61e50bu) REGS; LOADALL;
L_0061e50b:;
  /* 0061e50b lea ecx, [ebp - 0x1b8] */ ecx = (u32)((u32)(ebp + 0xfffffe48u));
  /* 0061e511 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e516(CPU *c) {
  NATIVE_HOOK(0x61e516u) REGS; LOADALL;
L_0061e516:;
  /* 0061e516 lea ecx, [ebp - 0x1f0] */ ecx = (u32)((u32)(ebp + 0xfffffe10u));
  /* 0061e51c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e521(CPU *c) {
  NATIVE_HOOK(0x61e521u) REGS; LOADALL;
L_0061e521:;
  /* 0061e521 lea ecx, [ebp - 0x228] */ ecx = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 0061e527 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e52c(CPU *c) {
  NATIVE_HOOK(0x61e52cu) REGS; LOADALL;
L_0061e52c:;
  /* 0061e52c lea ecx, [ebp - 0x260] */ ecx = (u32)((u32)(ebp + 0xfffffda0u));
  /* 0061e532 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e537(CPU *c) {
  NATIVE_HOOK(0x61e537u) REGS; LOADALL;
L_0061e537:;
  /* 0061e537 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e53a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e53f(CPU *c) {
  NATIVE_HOOK(0x61e53fu) REGS; LOADALL;
  goto L_0061e53f;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e53f:;
  /* 0061e53f mov eax, 0x661460 */ { eax = (u32)(0x661460u); }
  /* 0061e544 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e550(CPU *c) {
  NATIVE_HOOK(0x61e550u) REGS; LOADALL;
L_0061e550:;
  /* 0061e550 lea esi, [ebp + 0xc] */ esi = (u32)((u32)(ebp + 0xcu));
  /* 0061e553 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061e558(CPU *c) {
  NATIVE_HOOK(0x61e558u) REGS; LOADALL;
  goto L_0061e558;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e558:;
  /* 0061e558 mov eax, 0x661484 */ { eax = (u32)(0x661484u); }
  /* 0061e55d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e570(CPU *c) {
  NATIVE_HOOK(0x61e570u) REGS; LOADALL;
L_0061e570:;
  /* 0061e570 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e573 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061e578(CPU *c) {
  NATIVE_HOOK(0x61e578u) REGS; LOADALL;
L_0061e578:;
  /* 0061e578 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e57b add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e581 jmp 0x4f0640 */ SAVEALL; F_004f0640(c); return;
}

void F_0061e586(CPU *c) {
  NATIVE_HOOK(0x61e586u) REGS; LOADALL;
L_0061e586:;
  /* 0061e586 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e589 add ecx, 0xbb78 */ { u32 a_ = ecx, b_ = 0xbb78u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e58f jmp 0x4f4d10 */ SAVEALL; F_004f4d10(c); return;
}

void F_0061e594(CPU *c) {
  NATIVE_HOOK(0x61e594u) REGS; LOADALL;
L_0061e594:;
  /* 0061e594 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e597 add ecx, 0xbc88 */ { u32 a_ = ecx, b_ = 0xbc88u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e59d jmp 0x4f93f0 */ SAVEALL; F_004f93f0(c); return;
}

void F_0061e5a2(CPU *c) {
  NATIVE_HOOK(0x61e5a2u) REGS; LOADALL;
L_0061e5a2:;
  /* 0061e5a2 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061e5a5 add esi, 0xbcc0 */ { u32 a_ = esi, b_ = 0xbcc0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061e5ab jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061e5b0(CPU *c) {
  NATIVE_HOOK(0x61e5b0u) REGS; LOADALL;
L_0061e5b0:;
  /* 0061e5b0 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0061e5b3 add edi, 0xbcd0 */ { u32 a_ = edi, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0061e5b9 jmp 0x4d7240 */ SAVEALL; F_004d7240(c); return;
}

void F_0061e5be(CPU *c) {
  NATIVE_HOOK(0x61e5beu) REGS; LOADALL;
  goto L_0061e5be;
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
L_0061e5be:;
  /* 0061e5be mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061e5c1 add eax, 0xbe4c */ { u32 a_ = eax, b_ = 0xbe4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061e5c6 jmp 0x4b2800 */ goto L_004b2800;
}

void F_0061e5cb(CPU *c) {
  NATIVE_HOOK(0x61e5cbu) REGS; LOADALL;
  goto L_0061e5cb;
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
L_0061e5cb:;
  /* 0061e5cb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061e5ce add eax, 0xbe58 */ { u32 a_ = eax, b_ = 0xbe58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061e5d3 jmp 0x4b2800 */ goto L_004b2800;
}

void F_0061e5d8(CPU *c) {
  NATIVE_HOOK(0x61e5d8u) REGS; LOADALL;
  goto L_0061e5d8;
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
L_0061e5d8:;
  /* 0061e5d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061e5db add eax, 0xc2d0 */ { u32 a_ = eax, b_ = 0xc2d0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061e5e0 jmp 0x4b2800 */ goto L_004b2800;
}

void F_0061e5e5(CPU *c) {
  NATIVE_HOOK(0x61e5e5u) REGS; LOADALL;
  goto L_0061e5e5;
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
L_0061e5e5:;
  /* 0061e5e5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061e5e8 add esi, 0xc5f0 */ { u32 a_ = esi, b_ = 0xc5f0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061e5ee jmp 0x4b19c0 */ goto L_004b19c0;
}

void F_0061e5f3(CPU *c) {
  NATIVE_HOOK(0x61e5f3u) REGS; LOADALL;
L_0061e5f3:;
  /* 0061e5f3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e5f6 add ecx, 0xc6d8 */ { u32 a_ = ecx, b_ = 0xc6d8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e5fc jmp 0x4cc540 */ SAVEALL; F_004cc540(c); return;
}

void F_0061e601(CPU *c) {
  NATIVE_HOOK(0x61e601u) REGS; LOADALL;
L_0061e601:;
  /* 0061e601 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e604 add ecx, 0xcbcc */ { u32 a_ = ecx, b_ = 0xcbccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e60a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e60f(CPU *c) {
  NATIVE_HOOK(0x61e60fu) REGS; LOADALL;
L_0061e60f:;
  /* 0061e60f mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061e612 add ebx, 0xcd60 */ { u32 a_ = ebx, b_ = 0xcd60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061e618 jmp 0x4d0c80 */ SAVEALL; F_004d0c80(c); return;
}

void F_0061e61d(CPU *c) {
  NATIVE_HOOK(0x61e61du) REGS; LOADALL;
L_0061e61d:;
  /* 0061e61d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e620 add ecx, 0xcdc4 */ { u32 a_ = ecx, b_ = 0xcdc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e626 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e62b(CPU *c) {
  NATIVE_HOOK(0x61e62bu) REGS; LOADALL;
L_0061e62b:;
  /* 0061e62b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e62e add ecx, 0xcde0 */ { u32 a_ = ecx, b_ = 0xcde0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e634 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e639(CPU *c) {
  NATIVE_HOOK(0x61e639u) REGS; LOADALL;
L_0061e639:;
  /* 0061e639 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061e63c add esi, 0xce3c */ { u32 a_ = esi, b_ = 0xce3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061e642 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061e647(CPU *c) {
  NATIVE_HOOK(0x61e647u) REGS; LOADALL;
L_0061e647:;
  /* 0061e647 push 0x43ee60 */ { u32 v_ = 0x43ee60u; esp -= 4; M32(esp) = v_; }
  /* 0061e64c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0061e64e push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0061e650 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061e653 add eax, 0xcec8 */ { u32 a_ = eax, b_ = 0xcec8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061e658 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061e659 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61e65eu; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61e659u); RETCHK(0x61e65eu, 0x61e659u); LOADALL;
  /* 0061e65e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e65f(CPU *c) {
  NATIVE_HOOK(0x61e65fu) REGS; LOADALL;
L_0061e65f:;
  /* 0061e65f push 0x403260 */ { u32 v_ = 0x403260u; esp -= 4; M32(esp) = v_; }
  /* 0061e664 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0061e666 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0061e668 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061e66b add eax, 0xd06c */ { u32 a_ = eax, b_ = 0xd06cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061e670 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061e671 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61e676u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61e671u); RETCHK(0x61e676u, 0x61e671u); LOADALL;
  /* 0061e676 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e677(CPU *c) {
  NATIVE_HOOK(0x61e677u) REGS; LOADALL;
L_0061e677:;
  /* 0061e677 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e67a add ecx, 0xd128 */ { u32 a_ = ecx, b_ = 0xd128u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061e680 jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061e685(CPU *c) {
  NATIVE_HOOK(0x61e685u) REGS; LOADALL;
  goto L_0061e685;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e685:;
  /* 0061e685 mov eax, 0x661560 */ { eax = (u32)(0x661560u); }
  /* 0061e68a jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e690(CPU *c) {
  NATIVE_HOOK(0x61e690u) REGS; LOADALL;
L_0061e690:;
  /* 0061e690 lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0061e696 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e69b(CPU *c) {
  NATIVE_HOOK(0x61e69bu) REGS; LOADALL;
L_0061e69b:;
  /* 0061e69b lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0061e6a1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e6a6(CPU *c) {
  NATIVE_HOOK(0x61e6a6u) REGS; LOADALL;
L_0061e6a6:;
  /* 0061e6a6 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e6a9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e6ae(CPU *c) {
  NATIVE_HOOK(0x61e6aeu) REGS; LOADALL;
L_0061e6ae:;
  /* 0061e6ae lea ecx, [ebp - 0x168] */ ecx = (u32)((u32)(ebp + 0xfffffe98u));
  /* 0061e6b4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
