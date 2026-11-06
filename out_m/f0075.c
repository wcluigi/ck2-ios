#include "funcs.h"

void F_00620b10(CPU *c) {
  NATIVE_HOOK(0x620b10u) REGS; LOADALL;
L_00620b10:;
  /* 00620b10 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00620b13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b18(CPU *c) {
  NATIVE_HOOK(0x620b18u) REGS; LOADALL;
L_00620b18:;
  /* 00620b18 lea ecx, [ebp - 0xc4] */ ecx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 00620b1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b23(CPU *c) {
  NATIVE_HOOK(0x620b23u) REGS; LOADALL;
L_00620b23:;
  /* 00620b23 lea ecx, [ebp - 0xa8] */ ecx = (u32)((u32)(ebp + 0xffffff58u));
  /* 00620b29 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b2e(CPU *c) {
  NATIVE_HOOK(0x620b2eu) REGS; LOADALL;
L_00620b2e:;
  /* 00620b2e lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 00620b34 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b39(CPU *c) {
  NATIVE_HOOK(0x620b39u) REGS; LOADALL;
L_00620b39:;
  /* 00620b39 lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 00620b3f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b44(CPU *c) {
  NATIVE_HOOK(0x620b44u) REGS; LOADALL;
L_00620b44:;
  /* 00620b44 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 00620b4a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b4f(CPU *c) {
  NATIVE_HOOK(0x620b4fu) REGS; LOADALL;
  goto L_00620b4f;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620b4f:;
  /* 00620b4f mov eax, 0x667280 */ { eax = (u32)(0x667280u); }
  /* 00620b54 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620b60(CPU *c) {
  NATIVE_HOOK(0x620b60u) REGS; LOADALL;
L_00620b60:;
  /* 00620b60 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00620b63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b68(CPU *c) {
  NATIVE_HOOK(0x620b68u) REGS; LOADALL;
L_00620b68:;
  /* 00620b68 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620b6b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b70(CPU *c) {
  NATIVE_HOOK(0x620b70u) REGS; LOADALL;
L_00620b70:;
  /* 00620b70 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620b73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b78(CPU *c) {
  NATIVE_HOOK(0x620b78u) REGS; LOADALL;
L_00620b78:;
  /* 00620b78 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620b7b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b80(CPU *c) {
  NATIVE_HOOK(0x620b80u) REGS; LOADALL;
L_00620b80:;
  /* 00620b80 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620b83 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b88(CPU *c) {
  NATIVE_HOOK(0x620b88u) REGS; LOADALL;
L_00620b88:;
  /* 00620b88 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620b8b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b90(CPU *c) {
  NATIVE_HOOK(0x620b90u) REGS; LOADALL;
L_00620b90:;
  /* 00620b90 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620b93 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620b98(CPU *c) {
  NATIVE_HOOK(0x620b98u) REGS; LOADALL;
L_00620b98:;
  /* 00620b98 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620b9b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ba0(CPU *c) {
  NATIVE_HOOK(0x620ba0u) REGS; LOADALL;
L_00620ba0:;
  /* 00620ba0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620ba3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ba8(CPU *c) {
  NATIVE_HOOK(0x620ba8u) REGS; LOADALL;
L_00620ba8:;
  /* 00620ba8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620bab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620bb0(CPU *c) {
  NATIVE_HOOK(0x620bb0u) REGS; LOADALL;
L_00620bb0:;
  /* 00620bb0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620bb3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620bb8(CPU *c) {
  NATIVE_HOOK(0x620bb8u) REGS; LOADALL;
L_00620bb8:;
  /* 00620bb8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620bbb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620bc0(CPU *c) {
  NATIVE_HOOK(0x620bc0u) REGS; LOADALL;
L_00620bc0:;
  /* 00620bc0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620bc3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620bc8(CPU *c) {
  NATIVE_HOOK(0x620bc8u) REGS; LOADALL;
L_00620bc8:;
  /* 00620bc8 lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00620bcb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620bd0(CPU *c) {
  NATIVE_HOOK(0x620bd0u) REGS; LOADALL;
  goto L_00620bd0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620bd0:;
  /* 00620bd0 mov eax, 0x667330 */ { eax = (u32)(0x667330u); }
  /* 00620bd5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620be0(CPU *c) {
  NATIVE_HOOK(0x620be0u) REGS; LOADALL;
L_00620be0:;
  /* 00620be0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00620be3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620be4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00620be7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00620be8 call 0x459c10 */ esp -= 4; M32(esp) = 0x620bedu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x620be8u); RETCHK(0x620bedu, 0x620be8u); LOADALL;
  /* 00620bed add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00620bf0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00620bf1(CPU *c) {
  NATIVE_HOOK(0x620bf1u) REGS; LOADALL;
  goto L_00620bf1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620bf1:;
  /* 00620bf1 mov eax, 0x667388 */ { eax = (u32)(0x667388u); }
  /* 00620bf6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620c00(CPU *c) {
  NATIVE_HOOK(0x620c00u) REGS; LOADALL;
L_00620c00:;
  /* 00620c00 lea esi, [ebp - 0x44] */ esi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00620c03 jmp 0x40b640 */ SAVEALL; F_0040b640(c); return;
}

void F_00620c08(CPU *c) {
  NATIVE_HOOK(0x620c08u) REGS; LOADALL;
  goto L_00620c08;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620c08:;
  /* 00620c08 mov eax, 0x667414 */ { eax = (u32)(0x667414u); }
  /* 00620c0d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620c20(CPU *c) {
  NATIVE_HOOK(0x620c20u) REGS; LOADALL;
L_00620c20:;
  /* 00620c20 mov eax, dword ptr [ebp - 0x238] */ { const u32 m_ = (u32)(ebp + 0xfffffdc8u); eax = (u32)(M32(m_)); }
  /* 00620c26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620c27 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x620c2cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x620c27u); RETCHK(0x620c2cu, 0x620c27u); LOADALL;
  /* 00620c2c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00620c2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00620c2e(CPU *c) {
  NATIVE_HOOK(0x620c2eu) REGS; LOADALL;
L_00620c2e:;
  /* 00620c2e lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00620c34 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c39(CPU *c) {
  NATIVE_HOOK(0x620c39u) REGS; LOADALL;
L_00620c39:;
  /* 00620c39 mov ecx, dword ptr [ebp - 0x234] */ { const u32 m_ = (u32)(ebp + 0xfffffdccu); ecx = (u32)(M32(m_)); }
  /* 00620c3f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c44(CPU *c) {
  NATIVE_HOOK(0x620c44u) REGS; LOADALL;
L_00620c44:;
  /* 00620c44 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00620c4a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c4f(CPU *c) {
  NATIVE_HOOK(0x620c4fu) REGS; LOADALL;
L_00620c4f:;
  /* 00620c4f lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00620c55 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c5a(CPU *c) {
  NATIVE_HOOK(0x620c5au) REGS; LOADALL;
L_00620c5a:;
  /* 00620c5a lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00620c60 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c65(CPU *c) {
  NATIVE_HOOK(0x620c65u) REGS; LOADALL;
L_00620c65:;
  /* 00620c65 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00620c6b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c70(CPU *c) {
  NATIVE_HOOK(0x620c70u) REGS; LOADALL;
L_00620c70:;
  /* 00620c70 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00620c76 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c7b(CPU *c) {
  NATIVE_HOOK(0x620c7bu) REGS; LOADALL;
L_00620c7b:;
  /* 00620c7b lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00620c81 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c86(CPU *c) {
  NATIVE_HOOK(0x620c86u) REGS; LOADALL;
L_00620c86:;
  /* 00620c86 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00620c8c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c91(CPU *c) {
  NATIVE_HOOK(0x620c91u) REGS; LOADALL;
L_00620c91:;
  /* 00620c91 lea ecx, [ebp - 0x264] */ ecx = (u32)((u32)(ebp + 0xfffffd9cu));
  /* 00620c97 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620c9c(CPU *c) {
  NATIVE_HOOK(0x620c9cu) REGS; LOADALL;
  goto L_00620c9c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620c9c:;
  /* 00620c9c mov eax, 0x6674b0 */ { eax = (u32)(0x6674b0u); }
  /* 00620ca1 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620cb0(CPU *c) {
  NATIVE_HOOK(0x620cb0u) REGS; LOADALL;
L_00620cb0:;
  /* 00620cb0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620cb3 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_00620cb8(CPU *c) {
  NATIVE_HOOK(0x620cb8u) REGS; LOADALL;
  goto L_00620cb8;
L_0040cc20:;
  /* 0040cc20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040cc21 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0040cc24 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040cc26 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040cc28 je 0x40cc4d */ if (ZF_) goto L_0040cc4d;
  /* 0040cc2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040cc2b mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0040cc2e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040cc30 je 0x40cc3e */ if (ZF_) goto L_0040cc3e;
L_0040cc32:;
  /* 0040cc32 call 0x40b640 */ esp -= 4; M32(esp) = 0x40cc37u; SAVEALL; F_0040b640(c); ABI_CHECK(0x40b640u, 0x40cc32u); RETCHK(0x40cc37u, 0x40cc32u); LOADALL;
  /* 0040cc37 add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0040cc3a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040cc3c jne 0x40cc32 */ if (!ZF_) goto L_0040cc32;
L_0040cc3e:;
  /* 0040cc3e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0040cc41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040cc42 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x40cc47u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40cc42u); RETCHK(0x40cc47u, 0x40cc42u); LOADALL;
  /* 0040cc47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040cc4a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040cc4c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0040cc4d:;
  /* 0040cc4d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0040cc50 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0040cc53 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0040cc56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040cc57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620cb8:;
  /* 00620cb8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00620cbb add ebx, 0xd4 */ { u32 a_ = ebx, b_ = 0xd4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00620cc1 jmp 0x40cc20 */ goto L_0040cc20;
}

void F_00620cc6(CPU *c) {
  NATIVE_HOOK(0x620cc6u) REGS; LOADALL;
L_00620cc6:;
  /* 00620cc6 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00620cc9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620cce(CPU *c) {
  NATIVE_HOOK(0x620cceu) REGS; LOADALL;
L_00620cce:;
  /* 00620cce lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00620cd1 jmp 0x40b640 */ SAVEALL; F_0040b640(c); return;
}

void F_00620cd6(CPU *c) {
  NATIVE_HOOK(0x620cd6u) REGS; LOADALL;
L_00620cd6:;
  /* 00620cd6 lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 00620cdc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ce1(CPU *c) {
  NATIVE_HOOK(0x620ce1u) REGS; LOADALL;
L_00620ce1:;
  /* 00620ce1 lea esi, [ebp - 0x8c] */ esi = (u32)((u32)(ebp + 0xffffff74u));
  /* 00620ce7 jmp 0x40b640 */ SAVEALL; F_0040b640(c); return;
}

void F_00620cec(CPU *c) {
  NATIVE_HOOK(0x620cecu) REGS; LOADALL;
L_00620cec:;
  /* 00620cec lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00620cf2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620cf7(CPU *c) {
  NATIVE_HOOK(0x620cf7u) REGS; LOADALL;
L_00620cf7:;
  /* 00620cf7 lea ecx, [ebp - 0x5c] */ ecx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 00620cfa jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620cff(CPU *c) {
  NATIVE_HOOK(0x620cffu) REGS; LOADALL;
L_00620cff:;
  /* 00620cff lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 00620d05 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d0a(CPU *c) {
  NATIVE_HOOK(0x620d0au) REGS; LOADALL;
L_00620d0a:;
  /* 00620d0a lea ecx, [ebp - 0xc4] */ ecx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 00620d10 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d15(CPU *c) {
  NATIVE_HOOK(0x620d15u) REGS; LOADALL;
  goto L_00620d15;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620d15:;
  /* 00620d15 mov eax, 0x667520 */ { eax = (u32)(0x667520u); }
  /* 00620d1a jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620d20(CPU *c) {
  NATIVE_HOOK(0x620d20u) REGS; LOADALL;
L_00620d20:;
  /* 00620d20 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00620d23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620d24 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x620d29u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x620d24u); RETCHK(0x620d29u, 0x620d24u); LOADALL;
  /* 00620d29 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00620d2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00620d2b(CPU *c) {
  NATIVE_HOOK(0x620d2bu) REGS; LOADALL;
L_00620d2b:;
  /* 00620d2b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00620d2e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d33(CPU *c) {
  NATIVE_HOOK(0x620d33u) REGS; LOADALL;
L_00620d33:;
  /* 00620d33 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00620d36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d3b(CPU *c) {
  NATIVE_HOOK(0x620d3bu) REGS; LOADALL;
  goto L_00620d3b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620d3b:;
  /* 00620d3b mov eax, 0x6675a4 */ { eax = (u32)(0x6675a4u); }
  /* 00620d40 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620d50(CPU *c) {
  NATIVE_HOOK(0x620d50u) REGS; LOADALL;
L_00620d50:;
  /* 00620d50 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620d53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d58(CPU *c) {
  NATIVE_HOOK(0x620d58u) REGS; LOADALL;
L_00620d58:;
  /* 00620d58 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620d5b add ecx, 0x2c */ { u32 a_ = ecx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620d5e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d63(CPU *c) {
  NATIVE_HOOK(0x620d63u) REGS; LOADALL;
L_00620d63:;
  /* 00620d63 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620d66 add ecx, 0x48 */ { u32 a_ = ecx, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620d69 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d6e(CPU *c) {
  NATIVE_HOOK(0x620d6eu) REGS; LOADALL;
L_00620d6e:;
  /* 00620d6e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620d71 add ecx, 0x64 */ { u32 a_ = ecx, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620d74 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d79(CPU *c) {
  NATIVE_HOOK(0x620d79u) REGS; LOADALL;
L_00620d79:;
  /* 00620d79 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620d7c add ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620d82 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d87(CPU *c) {
  NATIVE_HOOK(0x620d87u) REGS; LOADALL;
L_00620d87:;
  /* 00620d87 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620d8a add ecx, 0x9c */ { u32 a_ = ecx, b_ = 0x9cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620d90 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620d95(CPU *c) {
  NATIVE_HOOK(0x620d95u) REGS; LOADALL;
L_00620d95:;
  /* 00620d95 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620d98 add ecx, 0xb8 */ { u32 a_ = ecx, b_ = 0xb8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620d9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620da3(CPU *c) {
  NATIVE_HOOK(0x620da3u) REGS; LOADALL;
L_00620da3:;
  /* 00620da3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620da6 add ecx, 0xd4 */ { u32 a_ = ecx, b_ = 0xd4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620dac jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620db1(CPU *c) {
  NATIVE_HOOK(0x620db1u) REGS; LOADALL;
L_00620db1:;
  /* 00620db1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620db4 add ecx, 0xf0 */ { u32 a_ = ecx, b_ = 0xf0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620dba jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620dbf(CPU *c) {
  NATIVE_HOOK(0x620dbfu) REGS; LOADALL;
L_00620dbf:;
  /* 00620dbf mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620dc2 add ecx, 0x10c */ { u32 a_ = ecx, b_ = 0x10cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620dc8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620dcd(CPU *c) {
  NATIVE_HOOK(0x620dcdu) REGS; LOADALL;
L_00620dcd:;
  /* 00620dcd mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00620dd0 add esi, 0x128 */ { u32 a_ = esi, b_ = 0x128u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00620dd6 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620ddb(CPU *c) {
  NATIVE_HOOK(0x620ddbu) REGS; LOADALL;
L_00620ddb:;
  /* 00620ddb mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00620dde add esi, 0x138 */ { u32 a_ = esi, b_ = 0x138u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00620de4 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620de9(CPU *c) {
  NATIVE_HOOK(0x620de9u) REGS; LOADALL;
  goto L_00620de9;
L_0055e690:;
  /* 0055e690 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e691 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e693 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e694 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e695 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055e697 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055e69a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055e69c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e69d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e69e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055e6a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e6a2 call 0x55fac0 */ esp -= 4; M32(esp) = 0x55e6a7u; SAVEALL; F_0055fac0(c); ABI_CHECK(0x55fac0u, 0x55e6a2u); RETCHK(0x55e6a7u, 0x55e6a2u); LOADALL;
  /* 0055e6a7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055e6aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e6ab call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e6b0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e6abu); RETCHK(0x55e6b0u, 0x55e6abu); LOADALL;
  /* 0055e6b0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e6b3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055e6b5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055e6b8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055e6bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e6bc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e6be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e6bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620de9:;
  /* 00620de9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00620dec add eax, 0x148 */ { u32 a_ = eax, b_ = 0x148u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00620df1 jmp 0x55e690 */ goto L_0055e690;
}

void F_00620df6(CPU *c) {
  NATIVE_HOOK(0x620df6u) REGS; LOADALL;
  goto L_00620df6;
L_0055e6c0:;
  /* 0055e6c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e6c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e6c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e6c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e6c5 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055e6c7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055e6ca mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055e6cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e6cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e6ce lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055e6d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e6d2 call 0x55fd70 */ esp -= 4; M32(esp) = 0x55e6d7u; SAVEALL; F_0055fd70(c); ABI_CHECK(0x55fd70u, 0x55e6d2u); RETCHK(0x55e6d7u, 0x55e6d2u); LOADALL;
  /* 0055e6d7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055e6da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e6db call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e6e0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e6dbu); RETCHK(0x55e6e0u, 0x55e6dbu); LOADALL;
  /* 0055e6e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e6e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055e6e5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055e6e8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055e6eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e6ec mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e6ee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e6ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620df6:;
  /* 00620df6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00620df9 add eax, 0x154 */ { u32 a_ = eax, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00620dfe jmp 0x55e6c0 */ goto L_0055e6c0;
}

void F_00620e03(CPU *c) {
  NATIVE_HOOK(0x620e03u) REGS; LOADALL;
L_00620e03:;
  /* 00620e03 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e06 add ecx, 0x160 */ { u32 a_ = ecx, b_ = 0x160u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e0c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e11(CPU *c) {
  NATIVE_HOOK(0x620e11u) REGS; LOADALL;
  goto L_00620e11;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620e11:;
  /* 00620e11 mov eax, 0x6676d0 */ { eax = (u32)(0x6676d0u); }
  /* 00620e16 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620e20(CPU *c) {
  NATIVE_HOOK(0x620e20u) REGS; LOADALL;
L_00620e20:;
  /* 00620e20 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e23 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e28(CPU *c) {
  NATIVE_HOOK(0x620e28u) REGS; LOADALL;
L_00620e28:;
  /* 00620e28 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e2b add ecx, 0x2c */ { u32 a_ = ecx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e2e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e33(CPU *c) {
  NATIVE_HOOK(0x620e33u) REGS; LOADALL;
L_00620e33:;
  /* 00620e33 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e36 add ecx, 0x48 */ { u32 a_ = ecx, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e39 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e3e(CPU *c) {
  NATIVE_HOOK(0x620e3eu) REGS; LOADALL;
L_00620e3e:;
  /* 00620e3e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e41 add ecx, 0x64 */ { u32 a_ = ecx, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e44 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e49(CPU *c) {
  NATIVE_HOOK(0x620e49u) REGS; LOADALL;
L_00620e49:;
  /* 00620e49 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e4c add ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e52 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e57(CPU *c) {
  NATIVE_HOOK(0x620e57u) REGS; LOADALL;
L_00620e57:;
  /* 00620e57 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e5a add ecx, 0x9c */ { u32 a_ = ecx, b_ = 0x9cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e60 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e65(CPU *c) {
  NATIVE_HOOK(0x620e65u) REGS; LOADALL;
L_00620e65:;
  /* 00620e65 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e68 add ecx, 0xb8 */ { u32 a_ = ecx, b_ = 0xb8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e6e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e73(CPU *c) {
  NATIVE_HOOK(0x620e73u) REGS; LOADALL;
L_00620e73:;
  /* 00620e73 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e76 add ecx, 0xd4 */ { u32 a_ = ecx, b_ = 0xd4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e7c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e81(CPU *c) {
  NATIVE_HOOK(0x620e81u) REGS; LOADALL;
L_00620e81:;
  /* 00620e81 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e84 add ecx, 0xf0 */ { u32 a_ = ecx, b_ = 0xf0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e8a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e8f(CPU *c) {
  NATIVE_HOOK(0x620e8fu) REGS; LOADALL;
L_00620e8f:;
  /* 00620e8f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620e92 add ecx, 0x10c */ { u32 a_ = ecx, b_ = 0x10cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620e98 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620e9d(CPU *c) {
  NATIVE_HOOK(0x620e9du) REGS; LOADALL;
L_00620e9d:;
  /* 00620e9d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00620ea0 add esi, 0x128 */ { u32 a_ = esi, b_ = 0x128u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00620ea6 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620eab(CPU *c) {
  NATIVE_HOOK(0x620eabu) REGS; LOADALL;
L_00620eab:;
  /* 00620eab mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00620eae add esi, 0x138 */ { u32 a_ = esi, b_ = 0x138u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00620eb4 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620eb9(CPU *c) {
  NATIVE_HOOK(0x620eb9u) REGS; LOADALL;
  goto L_00620eb9;
L_0055e690:;
  /* 0055e690 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e691 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e693 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e694 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e695 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055e697 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055e69a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055e69c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e69d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e69e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055e6a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e6a2 call 0x55fac0 */ esp -= 4; M32(esp) = 0x55e6a7u; SAVEALL; F_0055fac0(c); ABI_CHECK(0x55fac0u, 0x55e6a2u); RETCHK(0x55e6a7u, 0x55e6a2u); LOADALL;
  /* 0055e6a7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055e6aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e6ab call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e6b0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e6abu); RETCHK(0x55e6b0u, 0x55e6abu); LOADALL;
  /* 0055e6b0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e6b3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055e6b5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055e6b8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055e6bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e6bc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e6be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e6bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620eb9:;
  /* 00620eb9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00620ebc add eax, 0x148 */ { u32 a_ = eax, b_ = 0x148u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00620ec1 jmp 0x55e690 */ goto L_0055e690;
}

void F_00620ec6(CPU *c) {
  NATIVE_HOOK(0x620ec6u) REGS; LOADALL;
  goto L_00620ec6;
L_0055e6c0:;
  /* 0055e6c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e6c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e6c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e6c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e6c5 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055e6c7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055e6ca mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055e6cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e6cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e6ce lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055e6d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e6d2 call 0x55fd70 */ esp -= 4; M32(esp) = 0x55e6d7u; SAVEALL; F_0055fd70(c); ABI_CHECK(0x55fd70u, 0x55e6d2u); RETCHK(0x55e6d7u, 0x55e6d2u); LOADALL;
  /* 0055e6d7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055e6da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e6db call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e6e0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e6dbu); RETCHK(0x55e6e0u, 0x55e6dbu); LOADALL;
  /* 0055e6e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e6e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055e6e5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055e6e8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055e6eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e6ec mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e6ee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e6ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620ec6:;
  /* 00620ec6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00620ec9 add eax, 0x154 */ { u32 a_ = eax, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00620ece jmp 0x55e6c0 */ goto L_0055e6c0;
}

void F_00620ed3(CPU *c) {
  NATIVE_HOOK(0x620ed3u) REGS; LOADALL;
L_00620ed3:;
  /* 00620ed3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620ed6 add ecx, 0x160 */ { u32 a_ = ecx, b_ = 0x160u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620edc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ee1(CPU *c) {
  NATIVE_HOOK(0x620ee1u) REGS; LOADALL;
L_00620ee1:;
  /* 00620ee1 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00620ee4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620ee5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x620eeau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x620ee5u); RETCHK(0x620eeau, 0x620ee5u); LOADALL;
  /* 00620eea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00620eeb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00620eec(CPU *c) {
  NATIVE_HOOK(0x620eecu) REGS; LOADALL;
  goto L_00620eec;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620eec:;
  /* 00620eec mov eax, 0x667770 */ { eax = (u32)(0x667770u); }
  /* 00620ef1 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620f00(CPU *c) {
  NATIVE_HOOK(0x620f00u) REGS; LOADALL;
L_00620f00:;
  /* 00620f00 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620f03 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620f08(CPU *c) {
  NATIVE_HOOK(0x620f08u) REGS; LOADALL;
L_00620f08:;
  /* 00620f08 lea ecx, [ebp - 0x274] */ ecx = (u32)((u32)(ebp + 0xfffffd8cu));
  /* 00620f0e jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_00620f13(CPU *c) {
  NATIVE_HOOK(0x620f13u) REGS; LOADALL;
  goto L_00620f13;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620f13:;
  /* 00620f13 mov eax, 0x66779c */ { eax = (u32)(0x66779cu); }
  /* 00620f18 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620f20(CPU *c) {
  NATIVE_HOOK(0x620f20u) REGS; LOADALL;
  goto L_00620f20;
L_0054e560:;
  /* 0054e560 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e561 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 0054e563 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e565 je 0x54e572 */ if (ZF_) goto L_0054e572;
  /* 0054e567 call 0x54e820 */ esp -= 4; M32(esp) = 0x54e56cu; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54e567u); RETCHK(0x54e56cu, 0x54e567u); LOADALL;
  /* 0054e56c mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_0054e572:;
  /* 0054e572 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e573 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620f20:;
  /* 00620f20 lea edi, [ebp - 0x314] */ edi = (u32)((u32)(ebp + 0xfffffcecu));
  /* 00620f26 jmp 0x54e560 */ goto L_0054e560;
}

void F_00620f2b(CPU *c) {
  NATIVE_HOOK(0x620f2bu) REGS; LOADALL;
  goto L_00620f2b;
L_0054e560:;
  /* 0054e560 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e561 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 0054e563 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e565 je 0x54e572 */ if (ZF_) goto L_0054e572;
  /* 0054e567 call 0x54e820 */ esp -= 4; M32(esp) = 0x54e56cu; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54e567u); RETCHK(0x54e56cu, 0x54e567u); LOADALL;
  /* 0054e56c mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_0054e572:;
  /* 0054e572 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e573 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620f2b:;
  /* 00620f2b lea edi, [ebp - 0x318] */ edi = (u32)((u32)(ebp + 0xfffffce8u));
  /* 00620f31 jmp 0x54e560 */ goto L_0054e560;
}

void F_00620f36(CPU *c) {
  NATIVE_HOOK(0x620f36u) REGS; LOADALL;
  goto L_00620f36;
L_0054e560:;
  /* 0054e560 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e561 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 0054e563 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e565 je 0x54e572 */ if (ZF_) goto L_0054e572;
  /* 0054e567 call 0x54e820 */ esp -= 4; M32(esp) = 0x54e56cu; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54e567u); RETCHK(0x54e56cu, 0x54e567u); LOADALL;
  /* 0054e56c mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_0054e572:;
  /* 0054e572 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e573 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620f36:;
  /* 00620f36 lea edi, [ebp - 0x318] */ edi = (u32)((u32)(ebp + 0xfffffce8u));
  /* 00620f3c jmp 0x54e560 */ goto L_0054e560;
}

void F_00620f41(CPU *c) {
  NATIVE_HOOK(0x620f41u) REGS; LOADALL;
  goto L_00620f41;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620f41:;
  /* 00620f41 mov eax, 0x6677d0 */ { eax = (u32)(0x6677d0u); }
  /* 00620f46 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620f50(CPU *c) {
  NATIVE_HOOK(0x620f50u) REGS; LOADALL;
L_00620f50:;
  /* 00620f50 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00620f53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620f58(CPU *c) {
  NATIVE_HOOK(0x620f58u) REGS; LOADALL;
  goto L_00620f58;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620f58:;
  /* 00620f58 mov eax, 0x667828 */ { eax = (u32)(0x667828u); }
  /* 00620f5d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620f70(CPU *c) {
  NATIVE_HOOK(0x620f70u) REGS; LOADALL;
L_00620f70:;
  /* 00620f70 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00620f73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620f78(CPU *c) {
  NATIVE_HOOK(0x620f78u) REGS; LOADALL;
L_00620f78:;
  /* 00620f78 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620f7b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620f80(CPU *c) {
  NATIVE_HOOK(0x620f80u) REGS; LOADALL;
L_00620f80:;
  /* 00620f80 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620f83 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620f88(CPU *c) {
  NATIVE_HOOK(0x620f88u) REGS; LOADALL;
L_00620f88:;
  /* 00620f88 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620f8b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620f90(CPU *c) {
  NATIVE_HOOK(0x620f90u) REGS; LOADALL;
L_00620f90:;
  /* 00620f90 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620f93 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620f98(CPU *c) {
  NATIVE_HOOK(0x620f98u) REGS; LOADALL;
L_00620f98:;
  /* 00620f98 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620f9b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fa0(CPU *c) {
  NATIVE_HOOK(0x620fa0u) REGS; LOADALL;
L_00620fa0:;
  /* 00620fa0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620fa3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fa8(CPU *c) {
  NATIVE_HOOK(0x620fa8u) REGS; LOADALL;
L_00620fa8:;
  /* 00620fa8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620fab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fb0(CPU *c) {
  NATIVE_HOOK(0x620fb0u) REGS; LOADALL;
L_00620fb0:;
  /* 00620fb0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620fb3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fb8(CPU *c) {
  NATIVE_HOOK(0x620fb8u) REGS; LOADALL;
L_00620fb8:;
  /* 00620fb8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620fbb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fc0(CPU *c) {
  NATIVE_HOOK(0x620fc0u) REGS; LOADALL;
L_00620fc0:;
  /* 00620fc0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620fc3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fc8(CPU *c) {
  NATIVE_HOOK(0x620fc8u) REGS; LOADALL;
L_00620fc8:;
  /* 00620fc8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620fcb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fd0(CPU *c) {
  NATIVE_HOOK(0x620fd0u) REGS; LOADALL;
L_00620fd0:;
  /* 00620fd0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620fd3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fd8(CPU *c) {
  NATIVE_HOOK(0x620fd8u) REGS; LOADALL;
L_00620fd8:;
  /* 00620fd8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620fdb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fe0(CPU *c) {
  NATIVE_HOOK(0x620fe0u) REGS; LOADALL;
L_00620fe0:;
  /* 00620fe0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620fe3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620fe8(CPU *c) {
  NATIVE_HOOK(0x620fe8u) REGS; LOADALL;
L_00620fe8:;
  /* 00620fe8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620feb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ff0(CPU *c) {
  NATIVE_HOOK(0x620ff0u) REGS; LOADALL;
L_00620ff0:;
  /* 00620ff0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620ff3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620ff8(CPU *c) {
  NATIVE_HOOK(0x620ff8u) REGS; LOADALL;
L_00620ff8:;
  /* 00620ff8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620ffb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621000(CPU *c) {
  NATIVE_HOOK(0x621000u) REGS; LOADALL;
L_00621000:;
  /* 00621000 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00621003 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621008(CPU *c) {
  NATIVE_HOOK(0x621008u) REGS; LOADALL;
  goto L_00621008;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621008:;
  /* 00621008 mov eax, 0x667930 */ { eax = (u32)(0x667930u); }
  /* 0062100d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621020(CPU *c) {
  NATIVE_HOOK(0x621020u) REGS; LOADALL;
L_00621020:;
  /* 00621020 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00621023 jmp 0x50e350 */ SAVEALL; F_0050e350(c); return;
}

void F_00621028(CPU *c) {
  NATIVE_HOOK(0x621028u) REGS; LOADALL;
  goto L_00621028;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621028:;
  /* 00621028 mov eax, 0x667978 */ { eax = (u32)(0x667978u); }
  /* 0062102d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621040(CPU *c) {
  NATIVE_HOOK(0x621040u) REGS; LOADALL;
L_00621040:;
  /* 00621040 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00621043 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_00621048(CPU *c) {
  NATIVE_HOOK(0x621048u) REGS; LOADALL;
L_00621048:;
  /* 00621048 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0062104b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062104c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x621051u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62104cu); RETCHK(0x621051u, 0x62104cu); LOADALL;
  /* 00621051 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00621052 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00621053(CPU *c) {
  NATIVE_HOOK(0x621053u) REGS; LOADALL;
L_00621053:;
  /* 00621053 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00621056 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621057 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62105cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621057u); RETCHK(0x62105cu, 0x621057u); LOADALL;
  /* 0062105c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062105d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062105e(CPU *c) {
  NATIVE_HOOK(0x62105eu) REGS; LOADALL;
L_0062105e:;
  /* 0062105e mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00621061 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621062 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x621067u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621062u); RETCHK(0x621067u, 0x621062u); LOADALL;
  /* 00621067 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00621068 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00621069(CPU *c) {
  NATIVE_HOOK(0x621069u) REGS; LOADALL;
L_00621069:;
  /* 00621069 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0062106c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062106d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x621072u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62106du); RETCHK(0x621072u, 0x62106du); LOADALL;
  /* 00621072 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00621073 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00621074(CPU *c) {
  NATIVE_HOOK(0x621074u) REGS; LOADALL;
L_00621074:;
  /* 00621074 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00621077 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621078 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62107du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621078u); RETCHK(0x62107du, 0x621078u); LOADALL;
  /* 0062107d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062107e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062107f(CPU *c) {
  NATIVE_HOOK(0x62107fu) REGS; LOADALL;
  goto L_0062107f;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062107f:;
  /* 0062107f mov eax, 0x667a64 */ { eax = (u32)(0x667a64u); }
  /* 00621084 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621090(CPU *c) {
  NATIVE_HOOK(0x621090u) REGS; LOADALL;
L_00621090:;
  /* 00621090 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00621093 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_00621098(CPU *c) {
  NATIVE_HOOK(0x621098u) REGS; LOADALL;
L_00621098:;
  /* 00621098 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0062109b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062109c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6210a1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62109cu); RETCHK(0x6210a1u, 0x62109cu); LOADALL;
  /* 006210a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006210a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006210a3(CPU *c) {
  NATIVE_HOOK(0x6210a3u) REGS; LOADALL;
L_006210a3:;
  /* 006210a3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006210a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006210a7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6210acu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6210a7u); RETCHK(0x6210acu, 0x6210a7u); LOADALL;
  /* 006210ac pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006210ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006210ae(CPU *c) {
  NATIVE_HOOK(0x6210aeu) REGS; LOADALL;
L_006210ae:;
  /* 006210ae mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 006210b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006210b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6210b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6210b2u); RETCHK(0x6210b7u, 0x6210b2u); LOADALL;
  /* 006210b7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006210b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006210b9(CPU *c) {
  NATIVE_HOOK(0x6210b9u) REGS; LOADALL;
  goto L_006210b9;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006210b9:;
  /* 006210b9 mov eax, 0x667aa0 */ { eax = (u32)(0x667aa0u); }
  /* 006210be jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006210d0(CPU *c) {
  NATIVE_HOOK(0x6210d0u) REGS; LOADALL;
L_006210d0:;
  /* 006210d0 mov eax, dword ptr [0x9be084] */ { const u32 m_ = (u32)(0x9be084u); eax = (u32)(M32(m_)); }
  /* 006210d5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006210d8 mov dword ptr [0x9be084], eax */ { const u32 m_ = (u32)(0x9be084u); M32(m_) = (u32)(eax); }
  /* 006210dd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006210de(CPU *c) {
  NATIVE_HOOK(0x6210deu) REGS; LOADALL;
  goto L_006210de;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006210de:;
  /* 006210de mov eax, 0x667b14 */ { eax = (u32)(0x667b14u); }
  /* 006210e3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006210f0(CPU *c) {
  NATIVE_HOOK(0x6210f0u) REGS; LOADALL;
L_006210f0:;
  /* 006210f0 mov eax, dword ptr [0x9be098] */ { const u32 m_ = (u32)(0x9be098u); eax = (u32)(M32(m_)); }
  /* 006210f5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006210f8 mov dword ptr [0x9be098], eax */ { const u32 m_ = (u32)(0x9be098u); M32(m_) = (u32)(eax); }
  /* 006210fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006210fe(CPU *c) {
  NATIVE_HOOK(0x6210feu) REGS; LOADALL;
  goto L_006210fe;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006210fe:;
  /* 006210fe mov eax, 0x667b38 */ { eax = (u32)(0x667b38u); }
  /* 00621103 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621110(CPU *c) {
  NATIVE_HOOK(0x621110u) REGS; LOADALL;
  goto L_00621110;
L_0052a000:;
  /* 0052a000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a003 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a004 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a005 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052a007 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052a00a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052a00c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a00d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a00e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052a011 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a012 call 0x52b660 */ esp -= 4; M32(esp) = 0x52a017u; SAVEALL; F_0052b660(c); ABI_CHECK(0x52b660u, 0x52a012u); RETCHK(0x52a017u, 0x52a012u); LOADALL;
  /* 0052a017 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052a01a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a01b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52a020u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52a01bu); RETCHK(0x52a020u, 0x52a01bu); LOADALL;
  /* 0052a020 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a023 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052a025 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052a028 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052a02b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a02c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a02e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a02f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00621110:;
  /* 00621110 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00621113 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00621116 jmp 0x52a000 */ goto L_0052a000;
}

void F_0062111b(CPU *c) {
  NATIVE_HOOK(0x62111bu) REGS; LOADALL;
  goto L_0062111b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062111b:;
  /* 0062111b mov eax, 0x667b5c */ { eax = (u32)(0x667b5cu); }
  /* 00621120 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621130(CPU *c) {
  NATIVE_HOOK(0x621130u) REGS; LOADALL;
L_00621130:;
  /* 00621130 mov eax, dword ptr [0x9be0b0] */ { const u32 m_ = (u32)(0x9be0b0u); eax = (u32)(M32(m_)); }
  /* 00621135 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00621138 mov dword ptr [0x9be0b0], eax */ { const u32 m_ = (u32)(0x9be0b0u); M32(m_) = (u32)(eax); }
  /* 0062113d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062113e(CPU *c) {
  NATIVE_HOOK(0x62113eu) REGS; LOADALL;
  goto L_0062113e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062113e:;
  /* 0062113e mov eax, 0x667b80 */ { eax = (u32)(0x667b80u); }
  /* 00621143 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621150(CPU *c) {
  NATIVE_HOOK(0x621150u) REGS; LOADALL;
  goto L_00621150;
L_00529840:;
  /* 00529840 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529841 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529843 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529844 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529845 mov esi, eax */ { esi = (u32)(eax); }
  /* 00529847 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052984a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052984c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052984d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052984e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529851 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529852 call 0x52b2e0 */ esp -= 4; M32(esp) = 0x529857u; SAVEALL; F_0052b2e0(c); ABI_CHECK(0x52b2e0u, 0x529852u); RETCHK(0x529857u, 0x529852u); LOADALL;
  /* 00529857 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052985a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052985b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x529860u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52985bu); RETCHK(0x529860u, 0x52985bu); LOADALL;
  /* 00529860 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00529863 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529865 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00529868 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052986b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052986c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052986e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052986f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00621150:;
  /* 00621150 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00621153 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00621156 jmp 0x529840 */ goto L_00529840;
}

void F_0062115b(CPU *c) {
  NATIVE_HOOK(0x62115bu) REGS; LOADALL;
  goto L_0062115b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062115b:;
  /* 0062115b mov eax, 0x667ba4 */ { eax = (u32)(0x667ba4u); }
  /* 00621160 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621170(CPU *c) {
  NATIVE_HOOK(0x621170u) REGS; LOADALL;
L_00621170:;
  /* 00621170 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00621173 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621174 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x621179u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621174u); RETCHK(0x621179u, 0x621174u); LOADALL;
  /* 00621179 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062117a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062117b(CPU *c) {
  NATIVE_HOOK(0x62117bu) REGS; LOADALL;
L_0062117b:;
  /* 0062117b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062117e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621183(CPU *c) {
  NATIVE_HOOK(0x621183u) REGS; LOADALL;
  goto L_00621183;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621183:;
  /* 00621183 mov eax, 0x667ce4 */ { eax = (u32)(0x667ce4u); }
  /* 00621188 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621190(CPU *c) {
  NATIVE_HOOK(0x621190u) REGS; LOADALL;
L_00621190:;
  /* 00621190 lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 00621193 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621198(CPU *c) {
  NATIVE_HOOK(0x621198u) REGS; LOADALL;
L_00621198:;
  /* 00621198 mov eax, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); eax = (u32)(M32(m_)); }
  /* 0062119e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062119f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6211a4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62119fu); RETCHK(0x6211a4u, 0x62119fu); LOADALL;
  /* 006211a4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006211a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006211a6(CPU *c) {
  NATIVE_HOOK(0x6211a6u) REGS; LOADALL;
L_006211a6:;
  /* 006211a6 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 006211a9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006211ae(CPU *c) {
  NATIVE_HOOK(0x6211aeu) REGS; LOADALL;
L_006211ae:;
  /* 006211ae lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006211b1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006211b6(CPU *c) {
  NATIVE_HOOK(0x6211b6u) REGS; LOADALL;
L_006211b6:;
  /* 006211b6 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006211bc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006211c1(CPU *c) {
  NATIVE_HOOK(0x6211c1u) REGS; LOADALL;
L_006211c1:;
  /* 006211c1 mov eax, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); eax = (u32)(M32(m_)); }
  /* 006211c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006211c8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6211cdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6211c8u); RETCHK(0x6211cdu, 0x6211c8u); LOADALL;
  /* 006211cd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006211ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006211cf(CPU *c) {
  NATIVE_HOOK(0x6211cfu) REGS; LOADALL;
L_006211cf:;
  /* 006211cf mov eax, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); eax = (u32)(M32(m_)); }
  /* 006211d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006211d6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6211dbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6211d6u); RETCHK(0x6211dbu, 0x6211d6u); LOADALL;
  /* 006211db pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006211dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006211dd(CPU *c) {
  NATIVE_HOOK(0x6211ddu) REGS; LOADALL;
L_006211dd:;
  /* 006211dd lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 006211e0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
