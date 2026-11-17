#include "funcs.h"

void F_006229ca(CPU *c) {
  NATIVE_HOOK(0x6229cau) REGS; LOADALL;
  goto L_006229ca;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006229ca:;
  /* 006229ca mov eax, 0x669ac4 */ { eax = (u32)(0x669ac4u); }
  /* 006229cf jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006229e0(CPU *c) {
  NATIVE_HOOK(0x6229e0u) REGS; LOADALL;
L_006229e0:;
  /* 006229e0 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 006229e6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006229eb(CPU *c) {
  NATIVE_HOOK(0x6229ebu) REGS; LOADALL;
L_006229eb:;
  /* 006229eb lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 006229f1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006229f6(CPU *c) {
  NATIVE_HOOK(0x6229f6u) REGS; LOADALL;
L_006229f6:;
  /* 006229f6 lea eax, [ebp - 0xb0] */ eax = (u32)((u32)(ebp + 0xffffff50u));
  /* 006229fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006229fd call 0x45c140 */ esp -= 4; M32(esp) = 0x622a02u; SAVEALL; F_0045c140(c); ABI_CHECK(0x45c140u, 0x6229fdu); RETCHK(0x622a02u, 0x6229fdu); LOADALL;
  /* 00622a02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622a03(CPU *c) {
  NATIVE_HOOK(0x622a03u) REGS; LOADALL;
L_00622a03:;
  /* 00622a03 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622a06 jmp 0x4a6600 */ SAVEALL; F_004a6600(c); return;
}

void F_00622a0b(CPU *c) {
  NATIVE_HOOK(0x622a0bu) REGS; LOADALL;
L_00622a0b:;
  /* 00622a0b lea esi, [ebp - 0x68] */ esi = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622a0e jmp 0x45c1f0 */ SAVEALL; F_0045c1f0(c); return;
}

void F_00622a13(CPU *c) {
  NATIVE_HOOK(0x622a13u) REGS; LOADALL;
L_00622a13:;
  /* 00622a13 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 00622a19 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622a1e(CPU *c) {
  NATIVE_HOOK(0x622a1eu) REGS; LOADALL;
L_00622a1e:;
  /* 00622a1e lea eax, [ebp - 0xb0] */ eax = (u32)((u32)(ebp + 0xffffff50u));
  /* 00622a24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622a25 call 0x45c260 */ esp -= 4; M32(esp) = 0x622a2au; SAVEALL; F_0045c260(c); ABI_CHECK(0x45c260u, 0x622a25u); RETCHK(0x622a2au, 0x622a25u); LOADALL;
  /* 00622a2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622a2b(CPU *c) {
  NATIVE_HOOK(0x622a2bu) REGS; LOADALL;
L_00622a2b:;
  /* 00622a2b lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 00622a2e jmp 0x4a6600 */ SAVEALL; F_004a6600(c); return;
}

void F_00622a33(CPU *c) {
  NATIVE_HOOK(0x622a33u) REGS; LOADALL;
  goto L_00622a33;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622a33:;
  /* 00622a33 mov eax, 0x669b20 */ { eax = (u32)(0x669b20u); }
  /* 00622a38 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622a40(CPU *c) {
  NATIVE_HOOK(0x622a40u) REGS; LOADALL;
L_00622a40:;
  /* 00622a40 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00622a43 jmp 0x4647c0 */ SAVEALL; F_004647c0(c); return;
}

void F_00622a48(CPU *c) {
  NATIVE_HOOK(0x622a48u) REGS; LOADALL;
  goto L_00622a48;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622a48:;
  /* 00622a48 mov eax, 0x669b68 */ { eax = (u32)(0x669b68u); }
  /* 00622a4d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622a60(CPU *c) {
  NATIVE_HOOK(0x622a60u) REGS; LOADALL;
L_00622a60:;
  /* 00622a60 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 00622a63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622a68(CPU *c) {
  NATIVE_HOOK(0x622a68u) REGS; LOADALL;
  goto L_00622a68;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622a68:;
  /* 00622a68 mov eax, 0x669b8c */ { eax = (u32)(0x669b8cu); }
  /* 00622a6d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622a80(CPU *c) {
  NATIVE_HOOK(0x622a80u) REGS; LOADALL;
L_00622a80:;
  /* 00622a80 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00622a83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622a84 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622a89u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622a84u); RETCHK(0x622a89u, 0x622a84u); LOADALL;
  /* 00622a89 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622a8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622a8b(CPU *c) {
  NATIVE_HOOK(0x622a8bu) REGS; LOADALL;
L_00622a8b:;
  /* 00622a8b lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00622a8e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622a93(CPU *c) {
  NATIVE_HOOK(0x622a93u) REGS; LOADALL;
L_00622a93:;
  /* 00622a93 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622a96 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622a9b(CPU *c) {
  NATIVE_HOOK(0x622a9bu) REGS; LOADALL;
L_00622a9b:;
  /* 00622a9b lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622a9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622aa3(CPU *c) {
  NATIVE_HOOK(0x622aa3u) REGS; LOADALL;
L_00622aa3:;
  /* 00622aa3 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622aa6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622aab(CPU *c) {
  NATIVE_HOOK(0x622aabu) REGS; LOADALL;
L_00622aab:;
  /* 00622aab lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622aae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ab3(CPU *c) {
  NATIVE_HOOK(0x622ab3u) REGS; LOADALL;
L_00622ab3:;
  /* 00622ab3 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622ab6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622abb(CPU *c) {
  NATIVE_HOOK(0x622abbu) REGS; LOADALL;
L_00622abb:;
  /* 00622abb lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622abe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ac3(CPU *c) {
  NATIVE_HOOK(0x622ac3u) REGS; LOADALL;
L_00622ac3:;
  /* 00622ac3 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622ac6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622acb(CPU *c) {
  NATIVE_HOOK(0x622acbu) REGS; LOADALL;
L_00622acb:;
  /* 00622acb lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622ace jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ad3(CPU *c) {
  NATIVE_HOOK(0x622ad3u) REGS; LOADALL;
L_00622ad3:;
  /* 00622ad3 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622ad6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622adb(CPU *c) {
  NATIVE_HOOK(0x622adbu) REGS; LOADALL;
L_00622adb:;
  /* 00622adb lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622ade jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ae3(CPU *c) {
  NATIVE_HOOK(0x622ae3u) REGS; LOADALL;
L_00622ae3:;
  /* 00622ae3 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622ae6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622aeb(CPU *c) {
  NATIVE_HOOK(0x622aebu) REGS; LOADALL;
L_00622aeb:;
  /* 00622aeb lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622aee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622af3(CPU *c) {
  NATIVE_HOOK(0x622af3u) REGS; LOADALL;
L_00622af3:;
  /* 00622af3 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622af6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622afb(CPU *c) {
  NATIVE_HOOK(0x622afbu) REGS; LOADALL;
L_00622afb:;
  /* 00622afb lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622afe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622b03(CPU *c) {
  NATIVE_HOOK(0x622b03u) REGS; LOADALL;
L_00622b03:;
  /* 00622b03 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622b06 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622b0b(CPU *c) {
  NATIVE_HOOK(0x622b0bu) REGS; LOADALL;
L_00622b0b:;
  /* 00622b0b lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622b0e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622b13(CPU *c) {
  NATIVE_HOOK(0x622b13u) REGS; LOADALL;
L_00622b13:;
  /* 00622b13 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622b16 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622b1b(CPU *c) {
  NATIVE_HOOK(0x622b1bu) REGS; LOADALL;
L_00622b1b:;
  /* 00622b1b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622b1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622b23(CPU *c) {
  NATIVE_HOOK(0x622b23u) REGS; LOADALL;
  goto L_00622b23;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622b23:;
  /* 00622b23 mov eax, 0x669c48 */ { eax = (u32)(0x669c48u); }
  /* 00622b28 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622b30(CPU *c) {
  NATIVE_HOOK(0x622b30u) REGS; LOADALL;
L_00622b30:;
  /* 00622b30 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00622b33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622b34 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622b39u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622b34u); RETCHK(0x622b39u, 0x622b34u); LOADALL;
  /* 00622b39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622b3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622b3b(CPU *c) {
  NATIVE_HOOK(0x622b3bu) REGS; LOADALL;
L_00622b3b:;
  /* 00622b3b mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00622b3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622b3f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622b44u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622b3fu); RETCHK(0x622b44u, 0x622b3fu); LOADALL;
  /* 00622b44 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622b45 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622b46(CPU *c) {
  NATIVE_HOOK(0x622b46u) REGS; LOADALL;
L_00622b46:;
  /* 00622b46 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00622b49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622b4a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622b4fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622b4au); RETCHK(0x622b4fu, 0x622b4au); LOADALL;
  /* 00622b4f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622b50 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622b51(CPU *c) {
  NATIVE_HOOK(0x622b51u) REGS; LOADALL;
L_00622b51:;
  /* 00622b51 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00622b54 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622b55 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622b5au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622b55u); RETCHK(0x622b5au, 0x622b55u); LOADALL;
  /* 00622b5a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622b5b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622b5c(CPU *c) {
  NATIVE_HOOK(0x622b5cu) REGS; LOADALL;
  goto L_00622b5c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622b5c:;
  /* 00622b5c mov eax, 0x669ca8 */ { eax = (u32)(0x669ca8u); }
  /* 00622b61 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622b61(CPU *c) {
  NATIVE_HOOK(0x622b61u) REGS; LOADALL;
  goto L_00622b61;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622b61:;
  /* 00622b61 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622b70(CPU *c) {
  NATIVE_HOOK(0x622b70u) REGS; LOADALL;
L_00622b70:;
  /* 00622b70 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00622b73 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00622b78(CPU *c) {
  NATIVE_HOOK(0x622b78u) REGS; LOADALL;
  goto L_00622b78;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622b78:;
  /* 00622b78 mov eax, 0x669ccc */ { eax = (u32)(0x669cccu); }
  /* 00622b7d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622b90(CPU *c) {
  NATIVE_HOOK(0x622b90u) REGS; LOADALL;
L_00622b90:;
  /* 00622b90 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00622b93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622b94 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622b99u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622b94u); RETCHK(0x622b99u, 0x622b94u); LOADALL;
  /* 00622b99 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622b9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622b9b(CPU *c) {
  NATIVE_HOOK(0x622b9bu) REGS; LOADALL;
L_00622b9b:;
  /* 00622b9b lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00622b9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ba3(CPU *c) {
  NATIVE_HOOK(0x622ba3u) REGS; LOADALL;
L_00622ba3:;
  /* 00622ba3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622ba6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622bab(CPU *c) {
  NATIVE_HOOK(0x622babu) REGS; LOADALL;
L_00622bab:;
  /* 00622bab lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622bb3(CPU *c) {
  NATIVE_HOOK(0x622bb3u) REGS; LOADALL;
L_00622bb3:;
  /* 00622bb3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bb6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622bbb(CPU *c) {
  NATIVE_HOOK(0x622bbbu) REGS; LOADALL;
L_00622bbb:;
  /* 00622bbb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bbe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622bc3(CPU *c) {
  NATIVE_HOOK(0x622bc3u) REGS; LOADALL;
L_00622bc3:;
  /* 00622bc3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bc6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622bcb(CPU *c) {
  NATIVE_HOOK(0x622bcbu) REGS; LOADALL;
L_00622bcb:;
  /* 00622bcb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622bd3(CPU *c) {
  NATIVE_HOOK(0x622bd3u) REGS; LOADALL;
L_00622bd3:;
  /* 00622bd3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bd6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622bdb(CPU *c) {
  NATIVE_HOOK(0x622bdbu) REGS; LOADALL;
L_00622bdb:;
  /* 00622bdb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bde jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622be3(CPU *c) {
  NATIVE_HOOK(0x622be3u) REGS; LOADALL;
L_00622be3:;
  /* 00622be3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622be6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622beb(CPU *c) {
  NATIVE_HOOK(0x622bebu) REGS; LOADALL;
L_00622beb:;
  /* 00622beb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622bf3(CPU *c) {
  NATIVE_HOOK(0x622bf3u) REGS; LOADALL;
L_00622bf3:;
  /* 00622bf3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bf6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622bfb(CPU *c) {
  NATIVE_HOOK(0x622bfbu) REGS; LOADALL;
L_00622bfb:;
  /* 00622bfb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622bfe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c03(CPU *c) {
  NATIVE_HOOK(0x622c03u) REGS; LOADALL;
L_00622c03:;
  /* 00622c03 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c06 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c0b(CPU *c) {
  NATIVE_HOOK(0x622c0bu) REGS; LOADALL;
L_00622c0b:;
  /* 00622c0b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c0e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c13(CPU *c) {
  NATIVE_HOOK(0x622c13u) REGS; LOADALL;
L_00622c13:;
  /* 00622c13 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c16 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c1b(CPU *c) {
  NATIVE_HOOK(0x622c1bu) REGS; LOADALL;
L_00622c1b:;
  /* 00622c1b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c23(CPU *c) {
  NATIVE_HOOK(0x622c23u) REGS; LOADALL;
L_00622c23:;
  /* 00622c23 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c26 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c2b(CPU *c) {
  NATIVE_HOOK(0x622c2bu) REGS; LOADALL;
L_00622c2b:;
  /* 00622c2b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c2e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c33(CPU *c) {
  NATIVE_HOOK(0x622c33u) REGS; LOADALL;
L_00622c33:;
  /* 00622c33 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c3b(CPU *c) {
  NATIVE_HOOK(0x622c3bu) REGS; LOADALL;
L_00622c3b:;
  /* 00622c3b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c3e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c43(CPU *c) {
  NATIVE_HOOK(0x622c43u) REGS; LOADALL;
L_00622c43:;
  /* 00622c43 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c46 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c4b(CPU *c) {
  NATIVE_HOOK(0x622c4bu) REGS; LOADALL;
L_00622c4b:;
  /* 00622c4b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c4e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c53(CPU *c) {
  NATIVE_HOOK(0x622c53u) REGS; LOADALL;
L_00622c53:;
  /* 00622c53 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c56 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c5b(CPU *c) {
  NATIVE_HOOK(0x622c5bu) REGS; LOADALL;
L_00622c5b:;
  /* 00622c5b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c5e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c63(CPU *c) {
  NATIVE_HOOK(0x622c63u) REGS; LOADALL;
L_00622c63:;
  /* 00622c63 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c66 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c6b(CPU *c) {
  NATIVE_HOOK(0x622c6bu) REGS; LOADALL;
L_00622c6b:;
  /* 00622c6b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c6e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c73(CPU *c) {
  NATIVE_HOOK(0x622c73u) REGS; LOADALL;
L_00622c73:;
  /* 00622c73 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c76 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c7b(CPU *c) {
  NATIVE_HOOK(0x622c7bu) REGS; LOADALL;
L_00622c7b:;
  /* 00622c7b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c7e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c83(CPU *c) {
  NATIVE_HOOK(0x622c83u) REGS; LOADALL;
L_00622c83:;
  /* 00622c83 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c86 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c8b(CPU *c) {
  NATIVE_HOOK(0x622c8bu) REGS; LOADALL;
L_00622c8b:;
  /* 00622c8b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c8e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c93(CPU *c) {
  NATIVE_HOOK(0x622c93u) REGS; LOADALL;
L_00622c93:;
  /* 00622c93 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c96 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622c9b(CPU *c) {
  NATIVE_HOOK(0x622c9bu) REGS; LOADALL;
L_00622c9b:;
  /* 00622c9b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622c9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ca3(CPU *c) {
  NATIVE_HOOK(0x622ca3u) REGS; LOADALL;
L_00622ca3:;
  /* 00622ca3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00622ca6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622cab(CPU *c) {
  NATIVE_HOOK(0x622cabu) REGS; LOADALL;
L_00622cab:;
  /* 00622cab lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00622cae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622cb3(CPU *c) {
  NATIVE_HOOK(0x622cb3u) REGS; LOADALL;
  goto L_00622cb3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622cb3:;
  /* 00622cb3 mov eax, 0x669e08 */ { eax = (u32)(0x669e08u); }
  /* 00622cb8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622cc0(CPU *c) {
  NATIVE_HOOK(0x622cc0u) REGS; LOADALL;
L_00622cc0:;
  /* 00622cc0 mov eax, dword ptr [0x9be144] */ { const u32 m_ = (u32)(0x9be144u); eax = (u32)(M32(m_)); }
  /* 00622cc5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00622cc8 mov dword ptr [0x9be144], eax */ { const u32 m_ = (u32)(0x9be144u); M32(m_) = (u32)(eax); }
  /* 00622ccd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622cce(CPU *c) {
  NATIVE_HOOK(0x622cceu) REGS; LOADALL;
  goto L_00622cce;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622cce:;
  /* 00622cce mov eax, 0x669e2c */ { eax = (u32)(0x669e2cu); }
  /* 00622cd3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622ce0(CPU *c) {
  NATIVE_HOOK(0x622ce0u) REGS; LOADALL;
L_00622ce0:;
  /* 00622ce0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00622ce3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ce8(CPU *c) {
  NATIVE_HOOK(0x622ce8u) REGS; LOADALL;
L_00622ce8:;
  /* 00622ce8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00622ceb jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00622cf0(CPU *c) {
  NATIVE_HOOK(0x622cf0u) REGS; LOADALL;
L_00622cf0:;
  /* 00622cf0 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 00622cf3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622cf4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622cf9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622cf4u); RETCHK(0x622cf9u, 0x622cf4u); LOADALL;
  /* 00622cf9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622cfa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622cfb(CPU *c) {
  NATIVE_HOOK(0x622cfbu) REGS; LOADALL;
  goto L_00622cfb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622cfb:;
  /* 00622cfb mov eax, 0x669e84 */ { eax = (u32)(0x669e84u); }
  /* 00622d00 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622d10(CPU *c) {
  NATIVE_HOOK(0x622d10u) REGS; LOADALL;
L_00622d10:;
  /* 00622d10 lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 00622d13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622d18(CPU *c) {
  NATIVE_HOOK(0x622d18u) REGS; LOADALL;
L_00622d18:;
  /* 00622d18 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00622d1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622d23(CPU *c) {
  NATIVE_HOOK(0x622d23u) REGS; LOADALL;
L_00622d23:;
  /* 00622d23 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 00622d26 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00622d29 je 0x622d3e */ if (ZF_) goto L_00622d3e;
  /* 00622d2f and dword ptr [ebp - 0x4c], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00622d33 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00622d39 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
L_00622d3e:;
  /* 00622d3e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622d3f(CPU *c) {
  NATIVE_HOOK(0x622d3fu) REGS; LOADALL;
L_00622d3f:;
  /* 00622d3f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00622d42 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622d47(CPU *c) {
  NATIVE_HOOK(0x622d47u) REGS; LOADALL;
L_00622d47:;
  /* 00622d47 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00622d4a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622d4f(CPU *c) {
  NATIVE_HOOK(0x622d4fu) REGS; LOADALL;
  goto L_00622d4f;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622d4f:;
  /* 00622d4f mov eax, 0x669efc */ { eax = (u32)(0x669efcu); }
  /* 00622d54 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622d60(CPU *c) {
  NATIVE_HOOK(0x622d60u) REGS; LOADALL;
L_00622d60:;
  /* 00622d60 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00622d66 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622d6b(CPU *c) {
  NATIVE_HOOK(0x622d6bu) REGS; LOADALL;
L_00622d6b:;
  /* 00622d6b lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00622d71 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622d76(CPU *c) {
  NATIVE_HOOK(0x622d76u) REGS; LOADALL;
L_00622d76:;
  /* 00622d76 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00622d7c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622d81(CPU *c) {
  NATIVE_HOOK(0x622d81u) REGS; LOADALL;
L_00622d81:;
  /* 00622d81 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00622d87 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622d8c(CPU *c) {
  NATIVE_HOOK(0x622d8cu) REGS; LOADALL;
L_00622d8c:;
  /* 00622d8c lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00622d92 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622d97(CPU *c) {
  NATIVE_HOOK(0x622d97u) REGS; LOADALL;
L_00622d97:;
  /* 00622d97 lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00622d9d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622da2(CPU *c) {
  NATIVE_HOOK(0x622da2u) REGS; LOADALL;
L_00622da2:;
  /* 00622da2 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00622da8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622dad(CPU *c) {
  NATIVE_HOOK(0x622dadu) REGS; LOADALL;
L_00622dad:;
  /* 00622dad lea ecx, [ebp - 0x268] */ ecx = (u32)((u32)(ebp + 0xfffffd98u));
  /* 00622db3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622db8(CPU *c) {
  NATIVE_HOOK(0x622db8u) REGS; LOADALL;
  goto L_00622db8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622db8:;
  /* 00622db8 mov eax, 0x669f58 */ { eax = (u32)(0x669f58u); }
  /* 00622dbd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622dd0(CPU *c) {
  NATIVE_HOOK(0x622dd0u) REGS; LOADALL;
L_00622dd0:;
  /* 00622dd0 lea ecx, [ebp - 0x278] */ ecx = (u32)((u32)(ebp + 0xfffffd88u));
  /* 00622dd6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ddb(CPU *c) {
  NATIVE_HOOK(0x622ddbu) REGS; LOADALL;
L_00622ddb:;
  /* 00622ddb lea ecx, [ebp - 0x2c4] */ ecx = (u32)((u32)(ebp + 0xfffffd3cu));
  /* 00622de1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622de6(CPU *c) {
  NATIVE_HOOK(0x622de6u) REGS; LOADALL;
L_00622de6:;
  /* 00622de6 lea ecx, [ebp - 0x240] */ ecx = (u32)((u32)(ebp + 0xfffffdc0u));
  /* 00622dec jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622df1(CPU *c) {
  NATIVE_HOOK(0x622df1u) REGS; LOADALL;
L_00622df1:;
  /* 00622df1 lea ecx, [ebp - 0x294] */ ecx = (u32)((u32)(ebp + 0xfffffd6cu));
  /* 00622df7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622dfc(CPU *c) {
  NATIVE_HOOK(0x622dfcu) REGS; LOADALL;
L_00622dfc:;
  /* 00622dfc lea ecx, [ebp - 0x25c] */ ecx = (u32)((u32)(ebp + 0xfffffda4u));
  /* 00622e02 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622e07(CPU *c) {
  NATIVE_HOOK(0x622e07u) REGS; LOADALL;
  goto L_00622e07;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622e07:;
  /* 00622e07 mov eax, 0x669f9c */ { eax = (u32)(0x669f9cu); }
  /* 00622e0c jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622e20(CPU *c) {
  NATIVE_HOOK(0x622e20u) REGS; LOADALL;
L_00622e20:;
  /* 00622e20 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00622e23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622e24 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622e29u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622e24u); RETCHK(0x622e29u, 0x622e24u); LOADALL;
  /* 00622e29 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622e2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622e2b(CPU *c) {
  NATIVE_HOOK(0x622e2bu) REGS; LOADALL;
L_00622e2b:;
  /* 00622e2b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00622e2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622e2f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622e34u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622e2fu); RETCHK(0x622e34u, 0x622e2fu); LOADALL;
  /* 00622e34 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622e35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622e36(CPU *c) {
  NATIVE_HOOK(0x622e36u) REGS; LOADALL;
L_00622e36:;
  /* 00622e36 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00622e39 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622e3a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622e3fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622e3au); RETCHK(0x622e3fu, 0x622e3au); LOADALL;
  /* 00622e3f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622e40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622e41(CPU *c) {
  NATIVE_HOOK(0x622e41u) REGS; LOADALL;
  goto L_00622e41;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622e41:;
  /* 00622e41 mov eax, 0x669fd0 */ { eax = (u32)(0x669fd0u); }
  /* 00622e46 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622e50(CPU *c) {
  NATIVE_HOOK(0x622e50u) REGS; LOADALL;
L_00622e50:;
  /* 00622e50 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00622e53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622e54 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622e59u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622e54u); RETCHK(0x622e59u, 0x622e54u); LOADALL;
  /* 00622e59 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622e5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622e5b(CPU *c) {
  NATIVE_HOOK(0x622e5bu) REGS; LOADALL;
L_00622e5b:;
  /* 00622e5b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00622e5e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622e5f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622e64u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622e5fu); RETCHK(0x622e64u, 0x622e5fu); LOADALL;
  /* 00622e64 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622e65 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622e66(CPU *c) {
  NATIVE_HOOK(0x622e66u) REGS; LOADALL;
  goto L_00622e66;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622e66:;
  /* 00622e66 mov eax, 0x669ffc */ { eax = (u32)(0x669ffcu); }
  /* 00622e6b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622e70(CPU *c) {
  NATIVE_HOOK(0x622e70u) REGS; LOADALL;
L_00622e70:;
  /* 00622e70 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00622e73 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00622e78(CPU *c) {
  NATIVE_HOOK(0x622e78u) REGS; LOADALL;
  goto L_00622e78;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622e78:;
  /* 00622e78 mov eax, 0x66a020 */ { eax = (u32)(0x66a020u); }
  /* 00622e7d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622e90(CPU *c) {
  NATIVE_HOOK(0x622e90u) REGS; LOADALL;
L_00622e90:;
  /* 00622e90 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00622e93 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622e98(CPU *c) {
  NATIVE_HOOK(0x622e98u) REGS; LOADALL;
L_00622e98:;
  /* 00622e98 lea ecx, [ebp - 0x250] */ ecx = (u32)((u32)(ebp + 0xfffffdb0u));
  /* 00622e9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ea3(CPU *c) {
  NATIVE_HOOK(0x622ea3u) REGS; LOADALL;
  goto L_00622ea3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622ea3:;
  /* 00622ea3 mov eax, 0x66a04c */ { eax = (u32)(0x66a04cu); }
  /* 00622ea8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622eb0(CPU *c) {
  NATIVE_HOOK(0x622eb0u) REGS; LOADALL;
L_00622eb0:;
  /* 00622eb0 mov eax, dword ptr [ebp - 0xfc] */ { const u32 m_ = (u32)(ebp + 0xffffff04u); eax = (u32)(M32(m_)); }
  /* 00622eb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622eb7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622ebcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622eb7u); RETCHK(0x622ebcu, 0x622eb7u); LOADALL;
  /* 00622ebc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622ebd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622ebe(CPU *c) {
  NATIVE_HOOK(0x622ebeu) REGS; LOADALL;
L_00622ebe:;
  /* 00622ebe lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622ec4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ec9(CPU *c) {
  NATIVE_HOOK(0x622ec9u) REGS; LOADALL;
L_00622ec9:;
  /* 00622ec9 lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622ecf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ed4(CPU *c) {
  NATIVE_HOOK(0x622ed4u) REGS; LOADALL;
L_00622ed4:;
  /* 00622ed4 lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622eda jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622edf(CPU *c) {
  NATIVE_HOOK(0x622edfu) REGS; LOADALL;
L_00622edf:;
  /* 00622edf lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622ee5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622eea(CPU *c) {
  NATIVE_HOOK(0x622eeau) REGS; LOADALL;
L_00622eea:;
  /* 00622eea lea ecx, [ebp - 0x11c] */ ecx = (u32)((u32)(ebp + 0xfffffee4u));
  /* 00622ef0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ef5(CPU *c) {
  NATIVE_HOOK(0x622ef5u) REGS; LOADALL;
L_00622ef5:;
  /* 00622ef5 lea ecx, [ebp - 0x138] */ ecx = (u32)((u32)(ebp + 0xfffffec8u));
  /* 00622efb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622f00(CPU *c) {
  NATIVE_HOOK(0x622f00u) REGS; LOADALL;
L_00622f00:;
  /* 00622f00 lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622f06 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622f0b(CPU *c) {
  NATIVE_HOOK(0x622f0bu) REGS; LOADALL;
L_00622f0b:;
  /* 00622f0b lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622f11 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622f16(CPU *c) {
  NATIVE_HOOK(0x622f16u) REGS; LOADALL;
L_00622f16:;
  /* 00622f16 lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622f1c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622f21(CPU *c) {
  NATIVE_HOOK(0x622f21u) REGS; LOADALL;
L_00622f21:;
  /* 00622f21 lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622f27 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622f2c(CPU *c) {
  NATIVE_HOOK(0x622f2cu) REGS; LOADALL;
L_00622f2c:;
  /* 00622f2c lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622f32 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622f37(CPU *c) {
  NATIVE_HOOK(0x622f37u) REGS; LOADALL;
L_00622f37:;
  /* 00622f37 lea ecx, [ebp - 0xf4] */ ecx = (u32)((u32)(ebp + 0xffffff0cu));
  /* 00622f3d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622f42(CPU *c) {
  NATIVE_HOOK(0x622f42u) REGS; LOADALL;
L_00622f42:;
  /* 00622f42 lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 00622f45 jmp 0x44c990 */ SAVEALL; F_0044c990(c); return;
}

void F_00622f4a(CPU *c) {
  NATIVE_HOOK(0x622f4au) REGS; LOADALL;
  goto L_00622f4a;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622f4a:;
  /* 00622f4a mov eax, 0x66a0d8 */ { eax = (u32)(0x66a0d8u); }
  /* 00622f4f jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622f60(CPU *c) {
  NATIVE_HOOK(0x622f60u) REGS; LOADALL;
L_00622f60:;
  /* 00622f60 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00622f66 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622f6b(CPU *c) {
  NATIVE_HOOK(0x622f6bu) REGS; LOADALL;
L_00622f6b:;
  /* 00622f6b mov eax, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); eax = (u32)(M32(m_)); }
  /* 00622f6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622f6f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622f74u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622f6fu); RETCHK(0x622f74u, 0x622f6fu); LOADALL;
  /* 00622f74 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622f75 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622f76(CPU *c) {
  NATIVE_HOOK(0x622f76u) REGS; LOADALL;
L_00622f76:;
  /* 00622f76 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00622f7c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622f81(CPU *c) {
  NATIVE_HOOK(0x622f81u) REGS; LOADALL;
  goto L_00622f81;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622f81:;
  /* 00622f81 mov eax, 0x66a10c */ { eax = (u32)(0x66a10cu); }
  /* 00622f86 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622f90(CPU *c) {
  NATIVE_HOOK(0x622f90u) REGS; LOADALL;
L_00622f90:;
  /* 00622f90 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00622f93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622f94 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622f99u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622f94u); RETCHK(0x622f99u, 0x622f94u); LOADALL;
  /* 00622f99 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622f9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622f9b(CPU *c) {
  NATIVE_HOOK(0x622f9bu) REGS; LOADALL;
L_00622f9b:;
  /* 00622f9b lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00622f9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622fa3(CPU *c) {
  NATIVE_HOOK(0x622fa3u) REGS; LOADALL;
L_00622fa3:;
  /* 00622fa3 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00622fa6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622fab(CPU *c) {
  NATIVE_HOOK(0x622fabu) REGS; LOADALL;
  goto L_00622fab;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622fab:;
  /* 00622fab mov eax, 0x66a164 */ { eax = (u32)(0x66a164u); }
  /* 00622fb0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622fc0(CPU *c) {
  NATIVE_HOOK(0x622fc0u) REGS; LOADALL;
L_00622fc0:;
  /* 00622fc0 mov eax, dword ptr [ebp - 0x230] */ { const u32 m_ = (u32)(ebp + 0xfffffdd0u); eax = (u32)(M32(m_)); }
  /* 00622fc6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622fc7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622fccu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622fc7u); RETCHK(0x622fccu, 0x622fc7u); LOADALL;
  /* 00622fcc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00622fcd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00622fce(CPU *c) {
  NATIVE_HOOK(0x622fceu) REGS; LOADALL;
L_00622fce:;
  /* 00622fce lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00622fd4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622fd9(CPU *c) {
  NATIVE_HOOK(0x622fd9u) REGS; LOADALL;
  goto L_00622fd9;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622fd9:;
  /* 00622fd9 mov eax, 0x66a190 */ { eax = (u32)(0x66a190u); }
  /* 00622fde jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622ff0(CPU *c) {
  NATIVE_HOOK(0x622ff0u) REGS; LOADALL;
L_00622ff0:;
  /* 00622ff0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00622ff3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622ff8(CPU *c) {
  NATIVE_HOOK(0x622ff8u) REGS; LOADALL;
L_00622ff8:;
  /* 00622ff8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00622ffb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623000(CPU *c) {
  NATIVE_HOOK(0x623000u) REGS; LOADALL;
  goto L_00623000;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623000:;
  /* 00623000 mov eax, 0x66a1bc */ { eax = (u32)(0x66a1bcu); }
  /* 00623005 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623010(CPU *c) {
  NATIVE_HOOK(0x623010u) REGS; LOADALL;
L_00623010:;
  /* 00623010 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00623013 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623014 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623019u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623014u); RETCHK(0x623019u, 0x623014u); LOADALL;
  /* 00623019 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062301a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062301b(CPU *c) {
  NATIVE_HOOK(0x62301bu) REGS; LOADALL;
L_0062301b:;
  /* 0062301b lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0062301e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
