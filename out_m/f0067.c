#include "funcs.h"

void F_0061cf9e(CPU *c) {
  NATIVE_HOOK(0x61cf9eu) REGS; LOADALL;
  goto L_0061cf9e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cf9e:;
  /* 0061cf9e mov eax, 0x65daf0 */ { eax = (u32)(0x65daf0u); }
  /* 0061cfa3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cfb0(CPU *c) {
  NATIVE_HOOK(0x61cfb0u) REGS; LOADALL;
  goto L_0061cfb0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cfb0:;
  /* 0061cfb0 mov eax, 0x65dc28 */ { eax = (u32)(0x65dc28u); }
  /* 0061cfb5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cfc0(CPU *c) {
  NATIVE_HOOK(0x61cfc0u) REGS; LOADALL;
L_0061cfc0:;
  /* 0061cfc0 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0061cfc3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061cfc8(CPU *c) {
  NATIVE_HOOK(0x61cfc8u) REGS; LOADALL;
L_0061cfc8:;
  /* 0061cfc8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061cfcb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061cfd0(CPU *c) {
  NATIVE_HOOK(0x61cfd0u) REGS; LOADALL;
  goto L_0061cfd0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cfd0:;
  /* 0061cfd0 mov eax, 0x65dd68 */ { eax = (u32)(0x65dd68u); }
  /* 0061cfd5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061cfe0(CPU *c) {
  NATIVE_HOOK(0x61cfe0u) REGS; LOADALL;
L_0061cfe0:;
  /* 0061cfe0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061cfe3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061cfe4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061cfe7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061cfe8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61cfedu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61cfe8u); RETCHK(0x61cfedu, 0x61cfe8u); LOADALL;
  /* 0061cfed add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061cff0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061cff1(CPU *c) {
  NATIVE_HOOK(0x61cff1u) REGS; LOADALL;
  goto L_0061cff1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061cff1:;
  /* 0061cff1 mov eax, 0x65de2c */ { eax = (u32)(0x65de2cu); }
  /* 0061cff6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d000(CPU *c) {
  NATIVE_HOOK(0x61d000u) REGS; LOADALL;
L_0061d000:;
  /* 0061d000 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061d003 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d004 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061d007 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061d008 call 0x459c10 */ esp -= 4; M32(esp) = 0x61d00du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61d008u); RETCHK(0x61d00du, 0x61d008u); LOADALL;
  /* 0061d00d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061d010 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d011(CPU *c) {
  NATIVE_HOOK(0x61d011u) REGS; LOADALL;
  goto L_0061d011;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d011:;
  /* 0061d011 mov eax, 0x65de84 */ { eax = (u32)(0x65de84u); }
  /* 0061d016 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d020(CPU *c) {
  NATIVE_HOOK(0x61d020u) REGS; LOADALL;
L_0061d020:;
  /* 0061d020 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061d023 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d028(CPU *c) {
  NATIVE_HOOK(0x61d028u) REGS; LOADALL;
  goto L_0061d028;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d028:;
  /* 0061d028 mov eax, 0x65e078 */ { eax = (u32)(0x65e078u); }
  /* 0061d02d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d040(CPU *c) {
  NATIVE_HOOK(0x61d040u) REGS; LOADALL;
L_0061d040:;
  /* 0061d040 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d043 jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061d048(CPU *c) {
  NATIVE_HOOK(0x61d048u) REGS; LOADALL;
  goto L_0061d048;
L_0045d2d0:;
  /* 0045d2d0 jmp 0x45c060 */ SAVEALL; F_0045c060(c); return;
L_0061d048:;
  /* 0061d048 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061d04b add ebx, 0x48 */ { u32 a_ = ebx, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061d04e jmp 0x45d2d0 */ goto L_0045d2d0;
}

void F_0061d053(CPU *c) {
  NATIVE_HOOK(0x61d053u) REGS; LOADALL;
  goto L_0061d053;
L_0045d360:;
  /* 0045d360 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d361 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0045d364 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045d366 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d368 je 0x45d38d */ if (ZF_) goto L_0045d38d;
  /* 0045d36a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d36b mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045d36e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d370 je 0x45d37e */ if (ZF_) goto L_0045d37e;
L_0045d372:;
  /* 0045d372 call 0x45c1f0 */ esp -= 4; M32(esp) = 0x45d377u; SAVEALL; F_0045c1f0(c); ABI_CHECK(0x45c1f0u, 0x45d372u); RETCHK(0x45d377u, 0x45d372u); LOADALL;
  /* 0045d377 add esi, 0x58 */ { u32 a_ = esi, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d37a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d37c jne 0x45d372 */ if (!ZF_) goto L_0045d372;
L_0045d37e:;
  /* 0045d37e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045d381 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d382 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45d387u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45d382u); RETCHK(0x45d387u, 0x45d382u); LOADALL;
  /* 0045d387 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045d38a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045d38c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0045d38d:;
  /* 0045d38d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0045d390 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045d393 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0045d396 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d397 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061d053:;
  /* 0061d053 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061d056 add ebx, 0x58 */ { u32 a_ = ebx, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061d059 jmp 0x45d360 */ goto L_0045d360;
}

void F_0061d05e(CPU *c) {
  NATIVE_HOOK(0x61d05eu) REGS; LOADALL;
  goto L_0061d05e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d05e:;
  /* 0061d05e mov eax, 0x65e0ac */ { eax = (u32)(0x65e0acu); }
  /* 0061d063 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d070(CPU *c) {
  NATIVE_HOOK(0x61d070u) REGS; LOADALL;
  goto L_0061d070;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d070:;
  /* 0061d070 mov eax, 0x65e178 */ { eax = (u32)(0x65e178u); }
  /* 0061d075 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d080(CPU *c) {
  NATIVE_HOOK(0x61d080u) REGS; LOADALL;
L_0061d080:;
  /* 0061d080 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061d083 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d084 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061d087 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061d088 call 0x459c10 */ esp -= 4; M32(esp) = 0x61d08du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61d088u); RETCHK(0x61d08du, 0x61d088u); LOADALL;
  /* 0061d08d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061d090 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d091(CPU *c) {
  NATIVE_HOOK(0x61d091u) REGS; LOADALL;
  goto L_0061d091;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d091:;
  /* 0061d091 mov eax, 0x65e24c */ { eax = (u32)(0x65e24cu); }
  /* 0061d096 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d0a0(CPU *c) {
  NATIVE_HOOK(0x61d0a0u) REGS; LOADALL;
L_0061d0a0:;
  /* 0061d0a0 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061d0a3 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061d0a8(CPU *c) {
  NATIVE_HOOK(0x61d0a8u) REGS; LOADALL;
  goto L_0061d0a8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d0a8:;
  /* 0061d0a8 mov eax, 0x65e37c */ { eax = (u32)(0x65e37cu); }
  /* 0061d0ad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d0c0(CPU *c) {
  NATIVE_HOOK(0x61d0c0u) REGS; LOADALL;
L_0061d0c0:;
  /* 0061d0c0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061d0c3 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d0c8(CPU *c) {
  NATIVE_HOOK(0x61d0c8u) REGS; LOADALL;
L_0061d0c8:;
  /* 0061d0c8 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061d0cb add esi, 0xcc */ { u32 a_ = esi, b_ = 0xccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d0d1 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061d0d6(CPU *c) {
  NATIVE_HOOK(0x61d0d6u) REGS; LOADALL;
L_0061d0d6:;
  /* 0061d0d6 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061d0d9 add esi, 0xdc */ { u32 a_ = esi, b_ = 0xdcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d0df jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d0e4(CPU *c) {
  NATIVE_HOOK(0x61d0e4u) REGS; LOADALL;
  goto L_0061d0e4;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d0e4:;
  /* 0061d0e4 mov eax, 0x65e464 */ { eax = (u32)(0x65e464u); }
  /* 0061d0e9 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d0f0(CPU *c) {
  NATIVE_HOOK(0x61d0f0u) REGS; LOADALL;
L_0061d0f0:;
  /* 0061d0f0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d0f3 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d0f8(CPU *c) {
  NATIVE_HOOK(0x61d0f8u) REGS; LOADALL;
L_0061d0f8:;
  /* 0061d0f8 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d0fb add esi, 0xcc */ { u32 a_ = esi, b_ = 0xccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d101 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061d106(CPU *c) {
  NATIVE_HOOK(0x61d106u) REGS; LOADALL;
L_0061d106:;
  /* 0061d106 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d109 add esi, 0xdc */ { u32 a_ = esi, b_ = 0xdcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d10f jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d114(CPU *c) {
  NATIVE_HOOK(0x61d114u) REGS; LOADALL;
  goto L_0061d114;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d114:;
  /* 0061d114 mov eax, 0x65e498 */ { eax = (u32)(0x65e498u); }
  /* 0061d119 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d120(CPU *c) {
  NATIVE_HOOK(0x61d120u) REGS; LOADALL;
L_0061d120:;
  /* 0061d120 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061d123 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d128(CPU *c) {
  NATIVE_HOOK(0x61d128u) REGS; LOADALL;
L_0061d128:;
  /* 0061d128 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061d12b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d130(CPU *c) {
  NATIVE_HOOK(0x61d130u) REGS; LOADALL;
  goto L_0061d130;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d130:;
  /* 0061d130 mov eax, 0x65e4e8 */ { eax = (u32)(0x65e4e8u); }
  /* 0061d135 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d140(CPU *c) {
  NATIVE_HOOK(0x61d140u) REGS; LOADALL;
L_0061d140:;
  /* 0061d140 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d143 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d148(CPU *c) {
  NATIVE_HOOK(0x61d148u) REGS; LOADALL;
L_0061d148:;
  /* 0061d148 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d14b add esi, 0x4f0 */ { u32 a_ = esi, b_ = 0x4f0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d151 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d156(CPU *c) {
  NATIVE_HOOK(0x61d156u) REGS; LOADALL;
  goto L_0061d156;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d156:;
  /* 0061d156 mov eax, 0x65e514 */ { eax = (u32)(0x65e514u); }
  /* 0061d15b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d160(CPU *c) {
  NATIVE_HOOK(0x61d160u) REGS; LOADALL;
L_0061d160:;
  /* 0061d160 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d163 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d166 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d16b(CPU *c) {
  NATIVE_HOOK(0x61d16bu) REGS; LOADALL;
  goto L_0061d16b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d16b:;
  /* 0061d16b mov eax, 0x65e588 */ { eax = (u32)(0x65e588u); }
  /* 0061d170 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d180(CPU *c) {
  NATIVE_HOOK(0x61d180u) REGS; LOADALL;
  goto L_0061d180;
L_00436ec0:;
  /* 00436ec0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00436ec1 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00436ec4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00436ec6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00436ec8 je 0x436eed */ if (ZF_) goto L_00436eed;
  /* 00436eca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00436ecb mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00436ece cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00436ed0 je 0x436ede */ if (ZF_) goto L_00436ede;
L_00436ed2:;
  /* 00436ed2 call 0x435330 */ esp -= 4; M32(esp) = 0x436ed7u; SAVEALL; F_00435330(c); ABI_CHECK(0x435330u, 0x436ed2u); RETCHK(0x436ed7u, 0x436ed2u); LOADALL;
  /* 00436ed7 add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00436eda cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00436edc jne 0x436ed2 */ if (!ZF_) goto L_00436ed2;
L_00436ede:;
  /* 00436ede mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00436ee1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00436ee2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x436ee7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x436ee2u); RETCHK(0x436ee7u, 0x436ee2u); LOADALL;
  /* 00436ee7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00436eea xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00436eec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00436eed:;
  /* 00436eed mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00436ef0 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00436ef3 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00436ef6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00436ef7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061d180:;
  /* 0061d180 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061d183 jmp 0x436ec0 */ goto L_00436ec0;
}

void F_0061d188(CPU *c) {
  NATIVE_HOOK(0x61d188u) REGS; LOADALL;
L_0061d188:;
  /* 0061d188 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061d18b add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d18e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d193(CPU *c) {
  NATIVE_HOOK(0x61d193u) REGS; LOADALL;
L_0061d193:;
  /* 0061d193 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d196 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d199 jmp 0x435330 */ SAVEALL; F_00435330(c); return;
}

void F_0061d19e(CPU *c) {
  NATIVE_HOOK(0x61d19eu) REGS; LOADALL;
  goto L_0061d19e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d19e:;
  /* 0061d19e mov eax, 0x65e5e0 */ { eax = (u32)(0x65e5e0u); }
  /* 0061d1a3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d1b0(CPU *c) {
  NATIVE_HOOK(0x61d1b0u) REGS; LOADALL;
L_0061d1b0:;
  /* 0061d1b0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061d1b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d1b4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061d1b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061d1b8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61d1bdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61d1b8u); RETCHK(0x61d1bdu, 0x61d1b8u); LOADALL;
  /* 0061d1bd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061d1c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d1c1(CPU *c) {
  NATIVE_HOOK(0x61d1c1u) REGS; LOADALL;
  goto L_0061d1c1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d1c1:;
  /* 0061d1c1 mov eax, 0x65e638 */ { eax = (u32)(0x65e638u); }
  /* 0061d1c6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d1d0(CPU *c) {
  NATIVE_HOOK(0x61d1d0u) REGS; LOADALL;
L_0061d1d0:;
  /* 0061d1d0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d1d3 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d1d8(CPU *c) {
  NATIVE_HOOK(0x61d1d8u) REGS; LOADALL;
L_0061d1d8:;
  /* 0061d1d8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d1db add ecx, 0x178 */ { u32 a_ = ecx, b_ = 0x178u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d1e1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d1e6(CPU *c) {
  NATIVE_HOOK(0x61d1e6u) REGS; LOADALL;
  goto L_0061d1e6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d1e6:;
  /* 0061d1e6 mov eax, 0x65e6fc */ { eax = (u32)(0x65e6fcu); }
  /* 0061d1eb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d1f0(CPU *c) {
  NATIVE_HOOK(0x61d1f0u) REGS; LOADALL;
L_0061d1f0:;
  /* 0061d1f0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061d1f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d1f4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061d1f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061d1f8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61d1fdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61d1f8u); RETCHK(0x61d1fdu, 0x61d1f8u); LOADALL;
  /* 0061d1fd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061d200 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d201(CPU *c) {
  NATIVE_HOOK(0x61d201u) REGS; LOADALL;
  goto L_0061d201;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d201:;
  /* 0061d201 mov eax, 0x65e754 */ { eax = (u32)(0x65e754u); }
  /* 0061d206 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d210(CPU *c) {
  NATIVE_HOOK(0x61d210u) REGS; LOADALL;
L_0061d210:;
  /* 0061d210 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061d213 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d214 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061d217 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061d218 call 0x459c10 */ esp -= 4; M32(esp) = 0x61d21du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61d218u); RETCHK(0x61d21du, 0x61d218u); LOADALL;
  /* 0061d21d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061d220 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d221(CPU *c) {
  NATIVE_HOOK(0x61d221u) REGS; LOADALL;
  goto L_0061d221;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d221:;
  /* 0061d221 mov eax, 0x65e818 */ { eax = (u32)(0x65e818u); }
  /* 0061d226 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d230(CPU *c) {
  NATIVE_HOOK(0x61d230u) REGS; LOADALL;
  goto L_0061d230;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d230:;
  /* 0061d230 mov eax, 0x65e9e8 */ { eax = (u32)(0x65e9e8u); }
  /* 0061d235 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d240(CPU *c) {
  NATIVE_HOOK(0x61d240u) REGS; LOADALL;
L_0061d240:;
  /* 0061d240 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d243 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d248(CPU *c) {
  NATIVE_HOOK(0x61d248u) REGS; LOADALL;
L_0061d248:;
  /* 0061d248 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d24b add esi, 0x110 */ { u32 a_ = esi, b_ = 0x110u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d251 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d256(CPU *c) {
  NATIVE_HOOK(0x61d256u) REGS; LOADALL;
  goto L_0061d256;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d256:;
  /* 0061d256 mov eax, 0x65ea5c */ { eax = (u32)(0x65ea5cu); }
  /* 0061d25b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d260(CPU *c) {
  NATIVE_HOOK(0x61d260u) REGS; LOADALL;
L_0061d260:;
  /* 0061d260 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061d263 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d264 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061d267 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061d268 call 0x459c10 */ esp -= 4; M32(esp) = 0x61d26du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61d268u); RETCHK(0x61d26du, 0x61d268u); LOADALL;
  /* 0061d26d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061d270 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d271(CPU *c) {
  NATIVE_HOOK(0x61d271u) REGS; LOADALL;
  goto L_0061d271;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d271:;
  /* 0061d271 mov eax, 0x65eab4 */ { eax = (u32)(0x65eab4u); }
  /* 0061d276 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d280(CPU *c) {
  NATIVE_HOOK(0x61d280u) REGS; LOADALL;
L_0061d280:;
  /* 0061d280 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d283 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d288(CPU *c) {
  NATIVE_HOOK(0x61d288u) REGS; LOADALL;
L_0061d288:;
  /* 0061d288 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061d28b add ebx, 0x108 */ { u32 a_ = ebx, b_ = 0x108u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061d291 jmp 0x424580 */ SAVEALL; F_00424580(c); return;
}

void F_0061d296(CPU *c) {
  NATIVE_HOOK(0x61d296u) REGS; LOADALL;
L_0061d296:;
  /* 0061d296 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061d299 add ebx, 0x118 */ { u32 a_ = ebx, b_ = 0x118u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061d29f jmp 0x424580 */ SAVEALL; F_00424580(c); return;
}

void F_0061d2a4(CPU *c) {
  NATIVE_HOOK(0x61d2a4u) REGS; LOADALL;
L_0061d2a4:;
  /* 0061d2a4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061d2a7 add ebx, 0x128 */ { u32 a_ = ebx, b_ = 0x128u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061d2ad jmp 0x424580 */ SAVEALL; F_00424580(c); return;
}

void F_0061d2b2(CPU *c) {
  NATIVE_HOOK(0x61d2b2u) REGS; LOADALL;
  goto L_0061d2b2;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d2b2:;
  /* 0061d2b2 mov eax, 0x65eb38 */ { eax = (u32)(0x65eb38u); }
  /* 0061d2b7 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d2c0(CPU *c) {
  NATIVE_HOOK(0x61d2c0u) REGS; LOADALL;
  goto L_0061d2c0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d2c0:;
  /* 0061d2c0 mov eax, 0x65ebe0 */ { eax = (u32)(0x65ebe0u); }
  /* 0061d2c5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d2d0(CPU *c) {
  NATIVE_HOOK(0x61d2d0u) REGS; LOADALL;
  goto L_0061d2d0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d2d0:;
  /* 0061d2d0 mov eax, 0x65ec88 */ { eax = (u32)(0x65ec88u); }
  /* 0061d2d5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d2e0(CPU *c) {
  NATIVE_HOOK(0x61d2e0u) REGS; LOADALL;
  goto L_0061d2e0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d2e0:;
  /* 0061d2e0 mov eax, 0x65ed5c */ { eax = (u32)(0x65ed5cu); }
  /* 0061d2e5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d2f0(CPU *c) {
  NATIVE_HOOK(0x61d2f0u) REGS; LOADALL;
L_0061d2f0:;
  /* 0061d2f0 lea ecx, [ebp - 0x7c] */ ecx = (u32)((u32)(ebp + 0xffffff84u));
  /* 0061d2f3 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061d2f8(CPU *c) {
  NATIVE_HOOK(0x61d2f8u) REGS; LOADALL;
L_0061d2f8:;
  /* 0061d2f8 lea esi, [ebp - 0x8c] */ esi = (u32)((u32)(ebp + 0xffffff74u));
  /* 0061d2fe jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d303(CPU *c) {
  NATIVE_HOOK(0x61d303u) REGS; LOADALL;
  goto L_0061d303;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d303:;
  /* 0061d303 mov eax, 0x65ed88 */ { eax = (u32)(0x65ed88u); }
  /* 0061d308 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d310(CPU *c) {
  NATIVE_HOOK(0x61d310u) REGS; LOADALL;
L_0061d310:;
  /* 0061d310 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061d313 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d314 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061d317 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061d318 call 0x459c10 */ esp -= 4; M32(esp) = 0x61d31du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61d318u); RETCHK(0x61d31du, 0x61d318u); LOADALL;
  /* 0061d31d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061d320 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d321(CPU *c) {
  NATIVE_HOOK(0x61d321u) REGS; LOADALL;
  goto L_0061d321;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d321:;
  /* 0061d321 mov eax, 0x65eec8 */ { eax = (u32)(0x65eec8u); }
  /* 0061d326 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d330(CPU *c) {
  NATIVE_HOOK(0x61d330u) REGS; LOADALL;
  goto L_0061d330;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d330:;
  /* 0061d330 mov eax, 0x65ef4c */ { eax = (u32)(0x65ef4cu); }
  /* 0061d335 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d340(CPU *c) {
  NATIVE_HOOK(0x61d340u) REGS; LOADALL;
  goto L_0061d340;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d340:;
  /* 0061d340 mov eax, 0x65f018 */ { eax = (u32)(0x65f018u); }
  /* 0061d345 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d350(CPU *c) {
  NATIVE_HOOK(0x61d350u) REGS; LOADALL;
  goto L_0061d350;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d350:;
  /* 0061d350 mov eax, 0x65f0e4 */ { eax = (u32)(0x65f0e4u); }
  /* 0061d355 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d360(CPU *c) {
  NATIVE_HOOK(0x61d360u) REGS; LOADALL;
  goto L_0061d360;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d360:;
  /* 0061d360 mov eax, 0x65f134 */ { eax = (u32)(0x65f134u); }
  /* 0061d365 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d370(CPU *c) {
  NATIVE_HOOK(0x61d370u) REGS; LOADALL;
L_0061d370:;
  /* 0061d370 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061d373 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d378(CPU *c) {
  NATIVE_HOOK(0x61d378u) REGS; LOADALL;
L_0061d378:;
  /* 0061d378 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061d37b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d380(CPU *c) {
  NATIVE_HOOK(0x61d380u) REGS; LOADALL;
L_0061d380:;
  /* 0061d380 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061d383 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d388(CPU *c) {
  NATIVE_HOOK(0x61d388u) REGS; LOADALL;
L_0061d388:;
  /* 0061d388 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061d38b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d390(CPU *c) {
  NATIVE_HOOK(0x61d390u) REGS; LOADALL;
L_0061d390:;
  /* 0061d390 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061d393 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d398(CPU *c) {
  NATIVE_HOOK(0x61d398u) REGS; LOADALL;
  goto L_0061d398;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d398:;
  /* 0061d398 mov eax, 0x65f178 */ { eax = (u32)(0x65f178u); }
  /* 0061d39d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d3b0(CPU *c) {
  NATIVE_HOOK(0x61d3b0u) REGS; LOADALL;
L_0061d3b0:;
  /* 0061d3b0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061d3b3 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d3b8(CPU *c) {
  NATIVE_HOOK(0x61d3b8u) REGS; LOADALL;
L_0061d3b8:;
  /* 0061d3b8 cmp dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061d3bc je 0x61d3d2 */ if (ZF_) goto L_0061d3d2;
  /* 0061d3c2 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061d3c5 add eax, 0xc4 */ { u32 a_ = eax, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061d3ca mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0061d3cd jmp 0x61d3d9 */ goto L_0061d3d9;
L_0061d3d2:;
  /* 0061d3d2 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
L_0061d3d9:;
  /* 0061d3d9 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061d3dc jmp 0x460ce0 */ SAVEALL; F_00460ce0(c); return;
}

void F_0061d3e1(CPU *c) {
  NATIVE_HOOK(0x61d3e1u) REGS; LOADALL;
L_0061d3e1:;
  /* 0061d3e1 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061d3e4 add esi, 0x1d4 */ { u32 a_ = esi, b_ = 0x1d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d3ea jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061d3ef(CPU *c) {
  NATIVE_HOOK(0x61d3efu) REGS; LOADALL;
  goto L_0061d3ef;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d3ef:;
  /* 0061d3ef mov eax, 0x65f1ac */ { eax = (u32)(0x65f1acu); }
  /* 0061d3f4 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d400(CPU *c) {
  NATIVE_HOOK(0x61d400u) REGS; LOADALL;
L_0061d400:;
  /* 0061d400 mov eax, dword ptr [0x9b968c] */ { const u32 m_ = (u32)(0x9b968cu); eax = (u32)(M32(m_)); }
  /* 0061d405 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061d408 mov dword ptr [0x9b968c], eax */ { const u32 m_ = (u32)(0x9b968cu); M32(m_) = (u32)(eax); }
  /* 0061d40d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d40e(CPU *c) {
  NATIVE_HOOK(0x61d40eu) REGS; LOADALL;
  goto L_0061d40e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d40e:;
  /* 0061d40e mov eax, 0x65f1f4 */ { eax = (u32)(0x65f1f4u); }
  /* 0061d413 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d420(CPU *c) {
  NATIVE_HOOK(0x61d420u) REGS; LOADALL;
  goto L_0061d420;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d420:;
  /* 0061d420 mov eax, 0x65f268 */ { eax = (u32)(0x65f268u); }
  /* 0061d425 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d430(CPU *c) {
  NATIVE_HOOK(0x61d430u) REGS; LOADALL;
L_0061d430:;
  /* 0061d430 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061d433 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d438(CPU *c) {
  NATIVE_HOOK(0x61d438u) REGS; LOADALL;
  goto L_0061d438;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d438:;
  /* 0061d438 mov eax, 0x65f448 */ { eax = (u32)(0x65f448u); }
  /* 0061d43d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d450(CPU *c) {
  NATIVE_HOOK(0x61d450u) REGS; LOADALL;
L_0061d450:;
  /* 0061d450 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061d453 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d458(CPU *c) {
  NATIVE_HOOK(0x61d458u) REGS; LOADALL;
L_0061d458:;
  /* 0061d458 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061d45b add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d45e jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d463(CPU *c) {
  NATIVE_HOOK(0x61d463u) REGS; LOADALL;
L_0061d463:;
  /* 0061d463 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061d466 add esi, 0xc20 */ { u32 a_ = esi, b_ = 0xc20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d46c jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d471(CPU *c) {
  NATIVE_HOOK(0x61d471u) REGS; LOADALL;
L_0061d471:;
  /* 0061d471 push 0x401760 */ { u32 v_ = 0x401760u; esp -= 4; M32(esp) = v_; }
  /* 0061d476 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0061d478 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0061d47a mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061d47d add eax, 0xccc */ { u32 a_ = eax, b_ = 0xcccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061d482 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d483 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61d488u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61d483u); RETCHK(0x61d488u, 0x61d483u); LOADALL;
  /* 0061d488 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d489(CPU *c) {
  NATIVE_HOOK(0x61d489u) REGS; LOADALL;
L_0061d489:;
  /* 0061d489 push 0x403260 */ { u32 v_ = 0x403260u; esp -= 4; M32(esp) = v_; }
  /* 0061d48e push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0061d490 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0061d492 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061d495 add eax, 0xd58 */ { u32 a_ = eax, b_ = 0xd58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061d49a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d49b call 0x5fe890 */ esp -= 4; M32(esp) = 0x61d4a0u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61d49bu); RETCHK(0x61d4a0u, 0x61d49bu); LOADALL;
  /* 0061d4a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d4a1(CPU *c) {
  NATIVE_HOOK(0x61d4a1u) REGS; LOADALL;
L_0061d4a1:;
  /* 0061d4a1 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061d4a4 add ecx, 0xdec */ { u32 a_ = ecx, b_ = 0xdecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d4aa jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d4af(CPU *c) {
  NATIVE_HOOK(0x61d4afu) REGS; LOADALL;
  goto L_0061d4af;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d4af:;
  /* 0061d4af mov eax, 0x65f494 */ { eax = (u32)(0x65f494u); }
  /* 0061d4b4 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d4c0(CPU *c) {
  NATIVE_HOOK(0x61d4c0u) REGS; LOADALL;
L_0061d4c0:;
  /* 0061d4c0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061d4c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d4c4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061d4c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061d4c8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61d4cdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61d4c8u); RETCHK(0x61d4cdu, 0x61d4c8u); LOADALL;
  /* 0061d4cd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061d4d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d4d1(CPU *c) {
  NATIVE_HOOK(0x61d4d1u) REGS; LOADALL;
  goto L_0061d4d1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d4d1:;
  /* 0061d4d1 mov eax, 0x65f4ec */ { eax = (u32)(0x65f4ecu); }
  /* 0061d4d6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d4e0(CPU *c) {
  NATIVE_HOOK(0x61d4e0u) REGS; LOADALL;
L_0061d4e0:;
  /* 0061d4e0 lea esi, [ebp - 0x60] */ esi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0061d4e3 jmp 0x5699e0 */ SAVEALL; F_005699e0(c); return;
}

void F_0061d4e8(CPU *c) {
  NATIVE_HOOK(0x61d4e8u) REGS; LOADALL;
  goto L_0061d4e8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d4e8:;
  /* 0061d4e8 mov eax, 0x65f578 */ { eax = (u32)(0x65f578u); }
  /* 0061d4ed jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d500(CPU *c) {
  NATIVE_HOOK(0x61d500u) REGS; LOADALL;
L_0061d500:;
  /* 0061d500 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d503 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d508(CPU *c) {
  NATIVE_HOOK(0x61d508u) REGS; LOADALL;
  goto L_0061d508;
L_00568ad0:;
  /* 00568ad0 mov dword ptr [ecx], 0x656d44 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656d44u); }
  /* 00568ad6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061d508:;
  /* 0061d508 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d50b add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d511 jmp 0x568ad0 */ goto L_00568ad0;
}

void F_0061d516(CPU *c) {
  NATIVE_HOOK(0x61d516u) REGS; LOADALL;
  goto L_0061d516;
L_0056aed0:;
  /* 0056aed0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056aed1 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0056aed4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056aed6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056aed8 je 0x56aefd */ if (ZF_) goto L_0056aefd;
  /* 0056aeda push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056aedb mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0056aede cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056aee0 je 0x56aeee */ if (ZF_) goto L_0056aeee;
L_0056aee2:;
  /* 0056aee2 call 0x5699e0 */ esp -= 4; M32(esp) = 0x56aee7u; SAVEALL; F_005699e0(c); ABI_CHECK(0x5699e0u, 0x56aee2u); RETCHK(0x56aee7u, 0x56aee2u); LOADALL;
  /* 0056aee7 add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056aeea cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056aeec jne 0x56aee2 */ if (!ZF_) goto L_0056aee2;
L_0056aeee:;
  /* 0056aeee mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056aef1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056aef2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56aef7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56aef2u); RETCHK(0x56aef7u, 0x56aef2u); LOADALL;
  /* 0056aef7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056aefa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056aefc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0056aefd:;
  /* 0056aefd mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0056af00 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056af03 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0056af06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056af07 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061d516:;
  /* 0061d516 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061d519 add ebx, 0x140 */ { u32 a_ = ebx, b_ = 0x140u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061d51f jmp 0x56aed0 */ goto L_0056aed0;
}

void F_0061d524(CPU *c) {
  NATIVE_HOOK(0x61d524u) REGS; LOADALL;
  goto L_0061d524;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d524:;
  /* 0061d524 mov eax, 0x65f5d0 */ { eax = (u32)(0x65f5d0u); }
  /* 0061d529 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d530(CPU *c) {
  NATIVE_HOOK(0x61d530u) REGS; LOADALL;
  goto L_0061d530;
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
L_0061d530:;
  /* 0061d530 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0061d533 jmp 0x4ffd40 */ goto L_004ffd40;
}

void F_0061d538(CPU *c) {
  NATIVE_HOOK(0x61d538u) REGS; LOADALL;
  goto L_0061d538;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d538:;
  /* 0061d538 mov eax, 0x65f628 */ { eax = (u32)(0x65f628u); }
  /* 0061d53d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d550(CPU *c) {
  NATIVE_HOOK(0x61d550u) REGS; LOADALL;
L_0061d550:;
  /* 0061d550 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061d553 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061d556 je 0x61d56b */ if (ZF_) goto L_0061d56b;
  /* 0061d55c and dword ptr [ebp - 0x10], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0061d560 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d563 add ecx, 0x54 */ { u32 a_ = ecx, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d566 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
L_0061d56b:;
  /* 0061d56b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d56c(CPU *c) {
  NATIVE_HOOK(0x61d56cu) REGS; LOADALL;
L_0061d56c:;
  /* 0061d56c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d56f add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d572 jmp 0x4d0ea0 */ SAVEALL; F_004d0ea0(c); return;
}

void F_0061d577(CPU *c) {
  NATIVE_HOOK(0x61d577u) REGS; LOADALL;
  goto L_0061d577;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d577:;
  /* 0061d577 mov eax, 0x65f654 */ { eax = (u32)(0x65f654u); }
  /* 0061d57c jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d590(CPU *c) {
  NATIVE_HOOK(0x61d590u) REGS; LOADALL;
  goto L_0061d590;
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
L_0061d590:;
  /* 0061d590 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061d593 jmp 0x4ffd40 */ goto L_004ffd40;
}

void F_0061d598(CPU *c) {
  NATIVE_HOOK(0x61d598u) REGS; LOADALL;
L_0061d598:;
  /* 0061d598 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0061d59b jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061d5a0(CPU *c) {
  NATIVE_HOOK(0x61d5a0u) REGS; LOADALL;
  goto L_0061d5a0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d5a0:;
  /* 0061d5a0 mov eax, 0x65f6b4 */ { eax = (u32)(0x65f6b4u); }
  /* 0061d5a5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d5b0(CPU *c) {
  NATIVE_HOOK(0x61d5b0u) REGS; LOADALL;
L_0061d5b0:;
  /* 0061d5b0 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0061d5b3 jmp 0x561ef0 */ SAVEALL; F_00561ef0(c); return;
}

void F_0061d5b8(CPU *c) {
  NATIVE_HOOK(0x61d5b8u) REGS; LOADALL;
L_0061d5b8:;
  /* 0061d5b8 lea esi, [ebp - 0x64] */ esi = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061d5bb jmp 0x561ef0 */ SAVEALL; F_00561ef0(c); return;
}

void F_0061d5c0(CPU *c) {
  NATIVE_HOOK(0x61d5c0u) REGS; LOADALL;
L_0061d5c0:;
  /* 0061d5c0 lea esi, [ebp - 0x88] */ esi = (u32)((u32)(ebp + 0xffffff78u));
  /* 0061d5c6 jmp 0x561ef0 */ SAVEALL; F_00561ef0(c); return;
}

void F_0061d5cb(CPU *c) {
  NATIVE_HOOK(0x61d5cbu) REGS; LOADALL;
  goto L_0061d5cb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d5cb:;
  /* 0061d5cb mov eax, 0x65f6e8 */ { eax = (u32)(0x65f6e8u); }
  /* 0061d5d0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d5e0(CPU *c) {
  NATIVE_HOOK(0x61d5e0u) REGS; LOADALL;
L_0061d5e0:;
  /* 0061d5e0 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0061d5e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061d5e4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61d5e9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61d5e4u); RETCHK(0x61d5e9u, 0x61d5e4u); LOADALL;
  /* 0061d5e9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061d5ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d5eb(CPU *c) {
  NATIVE_HOOK(0x61d5ebu) REGS; LOADALL;
  goto L_0061d5eb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d5eb:;
  /* 0061d5eb mov eax, 0x65f70c */ { eax = (u32)(0x65f70cu); }
  /* 0061d5f0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d600(CPU *c) {
  NATIVE_HOOK(0x61d600u) REGS; LOADALL;
  goto L_0061d600;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061d600:;
  /* 0061d600 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0061d603 jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061d608(CPU *c) {
  NATIVE_HOOK(0x61d608u) REGS; LOADALL;
  goto L_0061d608;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d608:;
  /* 0061d608 mov eax, 0x65f730 */ { eax = (u32)(0x65f730u); }
  /* 0061d60d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d620(CPU *c) {
  NATIVE_HOOK(0x61d620u) REGS; LOADALL;
L_0061d620:;
  /* 0061d620 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d623 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d626 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d62b(CPU *c) {
  NATIVE_HOOK(0x61d62bu) REGS; LOADALL;
L_0061d62b:;
  /* 0061d62b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d62e add esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d631 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d636(CPU *c) {
  NATIVE_HOOK(0x61d636u) REGS; LOADALL;
L_0061d636:;
  /* 0061d636 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d639 add esi, 0x24 */ { u32 a_ = esi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d63c jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d641(CPU *c) {
  NATIVE_HOOK(0x61d641u) REGS; LOADALL;
L_0061d641:;
  /* 0061d641 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d644 add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d647 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d64c(CPU *c) {
  NATIVE_HOOK(0x61d64cu) REGS; LOADALL;
L_0061d64c:;
  /* 0061d64c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d64f add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d652 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d657(CPU *c) {
  NATIVE_HOOK(0x61d657u) REGS; LOADALL;
L_0061d657:;
  /* 0061d657 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d65a add esi, 0x54 */ { u32 a_ = esi, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d65d jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d662(CPU *c) {
  NATIVE_HOOK(0x61d662u) REGS; LOADALL;
L_0061d662:;
  /* 0061d662 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d665 add esi, 0x64 */ { u32 a_ = esi, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d668 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d66d(CPU *c) {
  NATIVE_HOOK(0x61d66du) REGS; LOADALL;
L_0061d66d:;
  /* 0061d66d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d670 add esi, 0x74 */ { u32 a_ = esi, b_ = 0x74u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d673 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d678(CPU *c) {
  NATIVE_HOOK(0x61d678u) REGS; LOADALL;
L_0061d678:;
  /* 0061d678 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d67b add esi, 0x84 */ { u32 a_ = esi, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d681 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061d686(CPU *c) {
  NATIVE_HOOK(0x61d686u) REGS; LOADALL;
  goto L_0061d686;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d686:;
  /* 0061d686 mov eax, 0x65f980 */ { eax = (u32)(0x65f980u); }
  /* 0061d68b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d690(CPU *c) {
  NATIVE_HOOK(0x61d690u) REGS; LOADALL;
L_0061d690:;
  /* 0061d690 mov eax, dword ptr [0x9b9738] */ { const u32 m_ = (u32)(0x9b9738u); eax = (u32)(M32(m_)); }
  /* 0061d695 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061d698 mov dword ptr [0x9b9738], eax */ { const u32 m_ = (u32)(0x9b9738u); M32(m_) = (u32)(eax); }
  /* 0061d69d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061d69e(CPU *c) {
  NATIVE_HOOK(0x61d69eu) REGS; LOADALL;
  goto L_0061d69e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d69e:;
  /* 0061d69e mov eax, 0x65f9a4 */ { eax = (u32)(0x65f9a4u); }
  /* 0061d6a3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d6b0(CPU *c) {
  NATIVE_HOOK(0x61d6b0u) REGS; LOADALL;
L_0061d6b0:;
  /* 0061d6b0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d6b3 jmp 0x555540 */ SAVEALL; F_00555540(c); return;
}

void F_0061d6b8(CPU *c) {
  NATIVE_HOOK(0x61d6b8u) REGS; LOADALL;
  goto L_0061d6b8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d6b8:;
  /* 0061d6b8 mov eax, 0x65f9c8 */ { eax = (u32)(0x65f9c8u); }
  /* 0061d6bd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d6d0(CPU *c) {
  NATIVE_HOOK(0x61d6d0u) REGS; LOADALL;
L_0061d6d0:;
  /* 0061d6d0 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061d6d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d6d8(CPU *c) {
  NATIVE_HOOK(0x61d6d8u) REGS; LOADALL;
L_0061d6d8:;
  /* 0061d6d8 lea ecx, [ebp - 0x114] */ ecx = (u32)((u32)(ebp + 0xfffffeecu));
  /* 0061d6de jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061d6e3(CPU *c) {
  NATIVE_HOOK(0x61d6e3u) REGS; LOADALL;
L_0061d6e3:;
  /* 0061d6e3 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061d6e6 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061d6eb(CPU *c) {
  NATIVE_HOOK(0x61d6ebu) REGS; LOADALL;
L_0061d6eb:;
  /* 0061d6eb lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 0061d6ee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d6f3(CPU *c) {
  NATIVE_HOOK(0x61d6f3u) REGS; LOADALL;
L_0061d6f3:;
  /* 0061d6f3 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0061d6f9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d6fe(CPU *c) {
  NATIVE_HOOK(0x61d6feu) REGS; LOADALL;
L_0061d6fe:;
  /* 0061d6fe lea ecx, [ebp - 0xcc] */ ecx = (u32)((u32)(ebp + 0xffffff34u));
  /* 0061d704 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d709(CPU *c) {
  NATIVE_HOOK(0x61d709u) REGS; LOADALL;
L_0061d709:;
  /* 0061d709 lea esi, [ebp - 0xb0] */ esi = (u32)((u32)(ebp + 0xffffff50u));
  /* 0061d70f jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061d714(CPU *c) {
  NATIVE_HOOK(0x61d714u) REGS; LOADALL;
  goto L_0061d714;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d714:;
  /* 0061d714 mov eax, 0x65fa40 */ { eax = (u32)(0x65fa40u); }
  /* 0061d719 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d720(CPU *c) {
  NATIVE_HOOK(0x61d720u) REGS; LOADALL;
L_0061d720:;
  /* 0061d720 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061d723 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d728(CPU *c) {
  NATIVE_HOOK(0x61d728u) REGS; LOADALL;
L_0061d728:;
  /* 0061d728 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061d72b add esi, 0xce4 */ { u32 a_ = esi, b_ = 0xce4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d731 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061d736(CPU *c) {
  NATIVE_HOOK(0x61d736u) REGS; LOADALL;
L_0061d736:;
  /* 0061d736 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061d739 add ecx, 0xcfc */ { u32 a_ = ecx, b_ = 0xcfcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d73f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d744(CPU *c) {
  NATIVE_HOOK(0x61d744u) REGS; LOADALL;
L_0061d744:;
  /* 0061d744 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061d747 add ecx, 0xd20 */ { u32 a_ = ecx, b_ = 0xd20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d74d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d752(CPU *c) {
  NATIVE_HOOK(0x61d752u) REGS; LOADALL;
L_0061d752:;
  /* 0061d752 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061d755 add ecx, 0xd3c */ { u32 a_ = ecx, b_ = 0xd3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d75b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d760(CPU *c) {
  NATIVE_HOOK(0x61d760u) REGS; LOADALL;
  goto L_0061d760;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061d760:;
  /* 0061d760 mov eax, 0x65fa84 */ { eax = (u32)(0x65fa84u); }
  /* 0061d765 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061d770(CPU *c) {
  NATIVE_HOOK(0x61d770u) REGS; LOADALL;
L_0061d770:;
  /* 0061d770 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d773 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061d778(CPU *c) {
  NATIVE_HOOK(0x61d778u) REGS; LOADALL;
L_0061d778:;
  /* 0061d778 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061d77b add esi, 0xce4 */ { u32 a_ = esi, b_ = 0xce4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061d781 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061d786(CPU *c) {
  NATIVE_HOOK(0x61d786u) REGS; LOADALL;
L_0061d786:;
  /* 0061d786 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d789 add ecx, 0xcfc */ { u32 a_ = ecx, b_ = 0xcfcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d78f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061d794(CPU *c) {
  NATIVE_HOOK(0x61d794u) REGS; LOADALL;
L_0061d794:;
  /* 0061d794 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061d797 add ecx, 0xd20 */ { u32 a_ = ecx, b_ = 0xd20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061d79d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
