#include "funcs.h"

void F_0061e6ae(CPU *c) {
  NATIVE_HOOK(0x61e6aeu) REGS; LOADALL;
L_0061e6ae:;
  /* 0061e6ae lea ecx, [ebp - 0x168] */ ecx = (u32)((u32)(ebp + 0xfffffe98u));
  /* 0061e6b4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e6b9(CPU *c) {
  NATIVE_HOOK(0x61e6b9u) REGS; LOADALL;
  goto L_0061e6b9;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e6b9:;
  /* 0061e6b9 mov eax, 0x6615c0 */ { eax = (u32)(0x6615c0u); }
  /* 0061e6be jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e6d0(CPU *c) {
  NATIVE_HOOK(0x61e6d0u) REGS; LOADALL;
L_0061e6d0:;
  /* 0061e6d0 lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0061e6d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e6db(CPU *c) {
  NATIVE_HOOK(0x61e6dbu) REGS; LOADALL;
L_0061e6db:;
  /* 0061e6db lea ecx, [ebp - 0xb4] */ ecx = (u32)((u32)(ebp + 0xffffff4cu));
  /* 0061e6e1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e6e6(CPU *c) {
  NATIVE_HOOK(0x61e6e6u) REGS; LOADALL;
L_0061e6e6:;
  /* 0061e6e6 lea ecx, [ebp - 0xec] */ ecx = (u32)((u32)(ebp + 0xffffff14u));
  /* 0061e6ec jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e6f1(CPU *c) {
  NATIVE_HOOK(0x61e6f1u) REGS; LOADALL;
L_0061e6f1:;
  /* 0061e6f1 lea ecx, [ebp - 0xd0] */ ecx = (u32)((u32)(ebp + 0xffffff30u));
  /* 0061e6f7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e6fc(CPU *c) {
  NATIVE_HOOK(0x61e6fcu) REGS; LOADALL;
  goto L_0061e6fc;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e6fc:;
  /* 0061e6fc mov eax, 0x6615fc */ { eax = (u32)(0x6615fcu); }
  /* 0061e701 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e710(CPU *c) {
  NATIVE_HOOK(0x61e710u) REGS; LOADALL;
L_0061e710:;
  /* 0061e710 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061e716 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e71b(CPU *c) {
  NATIVE_HOOK(0x61e71bu) REGS; LOADALL;
L_0061e71b:;
  /* 0061e71b lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061e721 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e726(CPU *c) {
  NATIVE_HOOK(0x61e726u) REGS; LOADALL;
L_0061e726:;
  /* 0061e726 lea ecx, [ebp - 0xcc] */ ecx = (u32)((u32)(ebp + 0xffffff34u));
  /* 0061e72c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e731(CPU *c) {
  NATIVE_HOOK(0x61e731u) REGS; LOADALL;
  goto L_0061e731;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e731:;
  /* 0061e731 mov eax, 0x661630 */ { eax = (u32)(0x661630u); }
  /* 0061e736 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e740(CPU *c) {
  NATIVE_HOOK(0x61e740u) REGS; LOADALL;
L_0061e740:;
  /* 0061e740 lea ecx, [ebp - 0xc8] */ ecx = (u32)((u32)(ebp + 0xffffff38u));
  /* 0061e746 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e74b(CPU *c) {
  NATIVE_HOOK(0x61e74bu) REGS; LOADALL;
L_0061e74b:;
  /* 0061e74b lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061e751 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e756(CPU *c) {
  NATIVE_HOOK(0x61e756u) REGS; LOADALL;
  goto L_0061e756;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e756:;
  /* 0061e756 mov eax, 0x66165c */ { eax = (u32)(0x66165cu); }
  /* 0061e75b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e760(CPU *c) {
  NATIVE_HOOK(0x61e760u) REGS; LOADALL;
L_0061e760:;
  /* 0061e760 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e763 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e768(CPU *c) {
  NATIVE_HOOK(0x61e768u) REGS; LOADALL;
L_0061e768:;
  /* 0061e768 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061e76e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e773(CPU *c) {
  NATIVE_HOOK(0x61e773u) REGS; LOADALL;
L_0061e773:;
  /* 0061e773 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061e779 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e77e(CPU *c) {
  NATIVE_HOOK(0x61e77eu) REGS; LOADALL;
L_0061e77e:;
  /* 0061e77e lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061e784 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e789(CPU *c) {
  NATIVE_HOOK(0x61e789u) REGS; LOADALL;
L_0061e789:;
  /* 0061e789 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061e78f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e794(CPU *c) {
  NATIVE_HOOK(0x61e794u) REGS; LOADALL;
L_0061e794:;
  /* 0061e794 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061e79a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e79f(CPU *c) {
  NATIVE_HOOK(0x61e79fu) REGS; LOADALL;
L_0061e79f:;
  /* 0061e79f lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061e7a5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e7aa(CPU *c) {
  NATIVE_HOOK(0x61e7aau) REGS; LOADALL;
  goto L_0061e7aa;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e7aa:;
  /* 0061e7aa mov eax, 0x661700 */ { eax = (u32)(0x661700u); }
  /* 0061e7af jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e7c0(CPU *c) {
  NATIVE_HOOK(0x61e7c0u) REGS; LOADALL;
L_0061e7c0:;
  /* 0061e7c0 lea ecx, [ebp - 0x234] */ ecx = (u32)((u32)(ebp + 0xfffffdccu));
  /* 0061e7c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e7cb(CPU *c) {
  NATIVE_HOOK(0x61e7cbu) REGS; LOADALL;
L_0061e7cb:;
  /* 0061e7cb lea ecx, [ebp - 0x250] */ ecx = (u32)((u32)(ebp + 0xfffffdb0u));
  /* 0061e7d1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e7d6(CPU *c) {
  NATIVE_HOOK(0x61e7d6u) REGS; LOADALL;
  goto L_0061e7d6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e7d6:;
  /* 0061e7d6 mov eax, 0x66172c */ { eax = (u32)(0x66172cu); }
  /* 0061e7db jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e7e0(CPU *c) {
  NATIVE_HOOK(0x61e7e0u) REGS; LOADALL;
  goto L_0061e7e0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e7e0:;
  /* 0061e7e0 mov eax, 0x66182c */ { eax = (u32)(0x66182cu); }
  /* 0061e7e5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e7f0(CPU *c) {
  NATIVE_HOOK(0x61e7f0u) REGS; LOADALL;
L_0061e7f0:;
  /* 0061e7f0 lea eax, [ebp - 0xc0] */ eax = (u32)((u32)(ebp + 0xffffff40u));
  /* 0061e7f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061e7f7 call 0x4a65a0 */ esp -= 4; M32(esp) = 0x61e7fcu; SAVEALL; F_004a65a0(c); ABI_CHECK(0x4a65a0u, 0x61e7f7u); RETCHK(0x61e7fcu, 0x61e7f7u); LOADALL;
  /* 0061e7fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e7fd(CPU *c) {
  NATIVE_HOOK(0x61e7fdu) REGS; LOADALL;
  goto L_0061e7fd;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e7fd:;
  /* 0061e7fd mov eax, 0x6619d0 */ { eax = (u32)(0x6619d0u); }
  /* 0061e802 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e810(CPU *c) {
  NATIVE_HOOK(0x61e810u) REGS; LOADALL;
L_0061e810:;
  /* 0061e810 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e813 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e818(CPU *c) {
  NATIVE_HOOK(0x61e818u) REGS; LOADALL;
L_0061e818:;
  /* 0061e818 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061e81b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e820(CPU *c) {
  NATIVE_HOOK(0x61e820u) REGS; LOADALL;
L_0061e820:;
  /* 0061e820 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0061e826 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e82b(CPU *c) {
  NATIVE_HOOK(0x61e82bu) REGS; LOADALL;
L_0061e82b:;
  /* 0061e82b lea ecx, [ebp - 0x78] */ ecx = (u32)((u32)(ebp + 0xffffff88u));
  /* 0061e82e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e833(CPU *c) {
  NATIVE_HOOK(0x61e833u) REGS; LOADALL;
  goto L_0061e833;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e833:;
  /* 0061e833 mov eax, 0x661a0c */ { eax = (u32)(0x661a0cu); }
  /* 0061e838 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e840(CPU *c) {
  NATIVE_HOOK(0x61e840u) REGS; LOADALL;
L_0061e840:;
  /* 0061e840 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061e843 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e848(CPU *c) {
  NATIVE_HOOK(0x61e848u) REGS; LOADALL;
L_0061e848:;
  /* 0061e848 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061e84b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e850(CPU *c) {
  NATIVE_HOOK(0x61e850u) REGS; LOADALL;
L_0061e850:;
  /* 0061e850 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e853 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e858(CPU *c) {
  NATIVE_HOOK(0x61e858u) REGS; LOADALL;
L_0061e858:;
  /* 0061e858 lea ecx, [ebp - 0x188] */ ecx = (u32)((u32)(ebp + 0xfffffe78u));
  /* 0061e85e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e863(CPU *c) {
  NATIVE_HOOK(0x61e863u) REGS; LOADALL;
  goto L_0061e863;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e863:;
  /* 0061e863 mov eax, 0x661a48 */ { eax = (u32)(0x661a48u); }
  /* 0061e868 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e870(CPU *c) {
  NATIVE_HOOK(0x61e870u) REGS; LOADALL;
L_0061e870:;
  /* 0061e870 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061e873 jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_0061e878(CPU *c) {
  NATIVE_HOOK(0x61e878u) REGS; LOADALL;
  goto L_0061e878;
L_004a7cc0:;
  /* 004a7cc0 jmp 0x4a7e70 */ SAVEALL; F_004a7e70(c); return;
L_0061e878:;
  /* 0061e878 mov ebx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ebx = (u32)(M32(m_)); }
  /* 0061e87b jmp 0x4a7cc0 */ goto L_004a7cc0;
}

void F_0061e880(CPU *c) {
  NATIVE_HOOK(0x61e880u) REGS; LOADALL;
L_0061e880:;
  /* 0061e880 mov ebx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ebx = (u32)(M32(m_)); }
  /* 0061e883 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061e886 jmp 0x5417b0 */ SAVEALL; F_005417b0(c); return;
}

void F_0061e88b(CPU *c) {
  NATIVE_HOOK(0x61e88bu) REGS; LOADALL;
  goto L_0061e88b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e88b:;
  /* 0061e88b mov eax, 0x661a7c */ { eax = (u32)(0x661a7cu); }
  /* 0061e890 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e8a0(CPU *c) {
  NATIVE_HOOK(0x61e8a0u) REGS; LOADALL;
L_0061e8a0:;
  /* 0061e8a0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e8a3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e8a8(CPU *c) {
  NATIVE_HOOK(0x61e8a8u) REGS; LOADALL;
L_0061e8a8:;
  /* 0061e8a8 lea ecx, [ebp - 0x1a0] */ ecx = (u32)((u32)(ebp + 0xfffffe60u));
  /* 0061e8ae jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061e8b3(CPU *c) {
  NATIVE_HOOK(0x61e8b3u) REGS; LOADALL;
L_0061e8b3:;
  /* 0061e8b3 lea eax, [ebp - 0x150] */ eax = (u32)((u32)(ebp + 0xfffffeb0u));
  /* 0061e8b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061e8ba call 0x4a65a0 */ esp -= 4; M32(esp) = 0x61e8bfu; SAVEALL; F_004a65a0(c); ABI_CHECK(0x4a65a0u, 0x61e8bau); RETCHK(0x61e8bfu, 0x61e8bau); LOADALL;
  /* 0061e8bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061e8c0(CPU *c) {
  NATIVE_HOOK(0x61e8c0u) REGS; LOADALL;
L_0061e8c0:;
  /* 0061e8c0 lea esi, [ebp - 0xa4] */ esi = (u32)((u32)(ebp + 0xffffff5cu));
  /* 0061e8c6 jmp 0x4a6600 */ SAVEALL; F_004a6600(c); return;
}

void F_0061e8cb(CPU *c) {
  NATIVE_HOOK(0x61e8cbu) REGS; LOADALL;
L_0061e8cb:;
  /* 0061e8cb lea esi, [ebp - 0x68] */ esi = (u32)((u32)(ebp + 0xffffff98u));
  /* 0061e8ce jmp 0x4a6600 */ SAVEALL; F_004a6600(c); return;
}

void F_0061e8d3(CPU *c) {
  NATIVE_HOOK(0x61e8d3u) REGS; LOADALL;
  goto L_0061e8d3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e8d3:;
  /* 0061e8d3 mov eax, 0x661ac0 */ { eax = (u32)(0x661ac0u); }
  /* 0061e8d8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e8e0(CPU *c) {
  NATIVE_HOOK(0x61e8e0u) REGS; LOADALL;
L_0061e8e0:;
  /* 0061e8e0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e8e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e8e8(CPU *c) {
  NATIVE_HOOK(0x61e8e8u) REGS; LOADALL;
L_0061e8e8:;
  /* 0061e8e8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e8eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e8f0(CPU *c) {
  NATIVE_HOOK(0x61e8f0u) REGS; LOADALL;
L_0061e8f0:;
  /* 0061e8f0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e8f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e8f8(CPU *c) {
  NATIVE_HOOK(0x61e8f8u) REGS; LOADALL;
L_0061e8f8:;
  /* 0061e8f8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061e8fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e900(CPU *c) {
  NATIVE_HOOK(0x61e900u) REGS; LOADALL;
L_0061e900:;
  /* 0061e900 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e903 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e908(CPU *c) {
  NATIVE_HOOK(0x61e908u) REGS; LOADALL;
L_0061e908:;
  /* 0061e908 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e90b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e910(CPU *c) {
  NATIVE_HOOK(0x61e910u) REGS; LOADALL;
L_0061e910:;
  /* 0061e910 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061e913 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e918(CPU *c) {
  NATIVE_HOOK(0x61e918u) REGS; LOADALL;
L_0061e918:;
  /* 0061e918 lea ecx, [ebp - 0x16c] */ ecx = (u32)((u32)(ebp + 0xfffffe94u));
  /* 0061e91e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e923(CPU *c) {
  NATIVE_HOOK(0x61e923u) REGS; LOADALL;
  goto L_0061e923;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e923:;
  /* 0061e923 mov eax, 0x661b20 */ { eax = (u32)(0x661b20u); }
  /* 0061e928 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e930(CPU *c) {
  NATIVE_HOOK(0x61e930u) REGS; LOADALL;
L_0061e930:;
  /* 0061e930 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0061e936 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e93b(CPU *c) {
  NATIVE_HOOK(0x61e93bu) REGS; LOADALL;
L_0061e93b:;
  /* 0061e93b lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0061e941 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e946(CPU *c) {
  NATIVE_HOOK(0x61e946u) REGS; LOADALL;
L_0061e946:;
  /* 0061e946 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0061e94c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e951(CPU *c) {
  NATIVE_HOOK(0x61e951u) REGS; LOADALL;
L_0061e951:;
  /* 0061e951 lea ecx, [ebp - 0x254] */ ecx = (u32)((u32)(ebp + 0xfffffdacu));
  /* 0061e957 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e95c(CPU *c) {
  NATIVE_HOOK(0x61e95cu) REGS; LOADALL;
  goto L_0061e95c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e95c:;
  /* 0061e95c mov eax, 0x661b80 */ { eax = (u32)(0x661b80u); }
  /* 0061e961 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e970(CPU *c) {
  NATIVE_HOOK(0x61e970u) REGS; LOADALL;
L_0061e970:;
  /* 0061e970 lea ecx, [ebp - 0x23c] */ ecx = (u32)((u32)(ebp + 0xfffffdc4u));
  /* 0061e976 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e97b(CPU *c) {
  NATIVE_HOOK(0x61e97bu) REGS; LOADALL;
  goto L_0061e97b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e97b:;
  /* 0061e97b mov eax, 0x661bd0 */ { eax = (u32)(0x661bd0u); }
  /* 0061e980 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e990(CPU *c) {
  NATIVE_HOOK(0x61e990u) REGS; LOADALL;
L_0061e990:;
  /* 0061e990 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061e996 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e99b(CPU *c) {
  NATIVE_HOOK(0x61e99bu) REGS; LOADALL;
L_0061e99b:;
  /* 0061e99b lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061e9a1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e9a6(CPU *c) {
  NATIVE_HOOK(0x61e9a6u) REGS; LOADALL;
L_0061e9a6:;
  /* 0061e9a6 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061e9ac jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e9b1(CPU *c) {
  NATIVE_HOOK(0x61e9b1u) REGS; LOADALL;
L_0061e9b1:;
  /* 0061e9b1 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061e9b7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e9bc(CPU *c) {
  NATIVE_HOOK(0x61e9bcu) REGS; LOADALL;
L_0061e9bc:;
  /* 0061e9bc lea ecx, [ebp - 0xc8] */ ecx = (u32)((u32)(ebp + 0xffffff38u));
  /* 0061e9c2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e9c7(CPU *c) {
  NATIVE_HOOK(0x61e9c7u) REGS; LOADALL;
  goto L_0061e9c7;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061e9c7:;
  /* 0061e9c7 mov eax, 0x661c14 */ { eax = (u32)(0x661c14u); }
  /* 0061e9cc jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061e9e0(CPU *c) {
  NATIVE_HOOK(0x61e9e0u) REGS; LOADALL;
L_0061e9e0:;
  /* 0061e9e0 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0061e9e6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e9eb(CPU *c) {
  NATIVE_HOOK(0x61e9ebu) REGS; LOADALL;
L_0061e9eb:;
  /* 0061e9eb lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0061e9f1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061e9f6(CPU *c) {
  NATIVE_HOOK(0x61e9f6u) REGS; LOADALL;
L_0061e9f6:;
  /* 0061e9f6 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0061e9fc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea01(CPU *c) {
  NATIVE_HOOK(0x61ea01u) REGS; LOADALL;
L_0061ea01:;
  /* 0061ea01 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0061ea07 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea0c(CPU *c) {
  NATIVE_HOOK(0x61ea0cu) REGS; LOADALL;
L_0061ea0c:;
  /* 0061ea0c lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0061ea12 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea17(CPU *c) {
  NATIVE_HOOK(0x61ea17u) REGS; LOADALL;
L_0061ea17:;
  /* 0061ea17 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0061ea1d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea22(CPU *c) {
  NATIVE_HOOK(0x61ea22u) REGS; LOADALL;
L_0061ea22:;
  /* 0061ea22 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061ea28 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea2d(CPU *c) {
  NATIVE_HOOK(0x61ea2du) REGS; LOADALL;
  goto L_0061ea2d;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ea2d:;
  /* 0061ea2d mov eax, 0x661cac */ { eax = (u32)(0x661cacu); }
  /* 0061ea32 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ea40(CPU *c) {
  NATIVE_HOOK(0x61ea40u) REGS; LOADALL;
L_0061ea40:;
  /* 0061ea40 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061ea46 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea4b(CPU *c) {
  NATIVE_HOOK(0x61ea4bu) REGS; LOADALL;
L_0061ea4b:;
  /* 0061ea4b lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061ea51 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea56(CPU *c) {
  NATIVE_HOOK(0x61ea56u) REGS; LOADALL;
L_0061ea56:;
  /* 0061ea56 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061ea5c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea61(CPU *c) {
  NATIVE_HOOK(0x61ea61u) REGS; LOADALL;
L_0061ea61:;
  /* 0061ea61 lea ecx, [ebp - 0xc8] */ ecx = (u32)((u32)(ebp + 0xffffff38u));
  /* 0061ea67 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea6c(CPU *c) {
  NATIVE_HOOK(0x61ea6cu) REGS; LOADALL;
  goto L_0061ea6c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ea6c:;
  /* 0061ea6c mov eax, 0x661d0c */ { eax = (u32)(0x661d0cu); }
  /* 0061ea71 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ea80(CPU *c) {
  NATIVE_HOOK(0x61ea80u) REGS; LOADALL;
L_0061ea80:;
  /* 0061ea80 lea ecx, [ebp - 0x134] */ ecx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 0061ea86 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea8b(CPU *c) {
  NATIVE_HOOK(0x61ea8bu) REGS; LOADALL;
L_0061ea8b:;
  /* 0061ea8b lea ecx, [ebp - 0x150] */ ecx = (u32)((u32)(ebp + 0xfffffeb0u));
  /* 0061ea91 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ea96(CPU *c) {
  NATIVE_HOOK(0x61ea96u) REGS; LOADALL;
  goto L_0061ea96;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ea96:;
  /* 0061ea96 mov eax, 0x661da4 */ { eax = (u32)(0x661da4u); }
  /* 0061ea9b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eaa0(CPU *c) {
  NATIVE_HOOK(0x61eaa0u) REGS; LOADALL;
L_0061eaa0:;
  /* 0061eaa0 lea esi, [ebp + 0x14] */ esi = (u32)((u32)(ebp + 0x14u));
  /* 0061eaa3 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061eaa8(CPU *c) {
  NATIVE_HOOK(0x61eaa8u) REGS; LOADALL;
  goto L_0061eaa8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eaa8:;
  /* 0061eaa8 mov eax, 0x661e20 */ { eax = (u32)(0x661e20u); }
  /* 0061eaad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eac0(CPU *c) {
  NATIVE_HOOK(0x61eac0u) REGS; LOADALL;
L_0061eac0:;
  /* 0061eac0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061eac3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061eac4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061eac7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061eac8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61eacdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61eac8u); RETCHK(0x61eacdu, 0x61eac8u); LOADALL;
  /* 0061eacd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ead0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ead1(CPU *c) {
  NATIVE_HOOK(0x61ead1u) REGS; LOADALL;
  goto L_0061ead1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ead1:;
  /* 0061ead1 mov eax, 0x661e78 */ { eax = (u32)(0x661e78u); }
  /* 0061ead6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eae0(CPU *c) {
  NATIVE_HOOK(0x61eae0u) REGS; LOADALL;
  goto L_0061eae0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eae0:;
  /* 0061eae0 mov eax, 0x661ec8 */ { eax = (u32)(0x661ec8u); }
  /* 0061eae5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eaf0(CPU *c) {
  NATIVE_HOOK(0x61eaf0u) REGS; LOADALL;
L_0061eaf0:;
  /* 0061eaf0 lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0061eaf3 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061eaf8(CPU *c) {
  NATIVE_HOOK(0x61eaf8u) REGS; LOADALL;
  goto L_0061eaf8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eaf8:;
  /* 0061eaf8 mov eax, 0x661f54 */ { eax = (u32)(0x661f54u); }
  /* 0061eafd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eb10(CPU *c) {
  NATIVE_HOOK(0x61eb10u) REGS; LOADALL;
L_0061eb10:;
  /* 0061eb10 lea esi, [ebp - 0x44] */ esi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061eb13 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061eb18(CPU *c) {
  NATIVE_HOOK(0x61eb18u) REGS; LOADALL;
  goto L_0061eb18;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eb18:;
  /* 0061eb18 mov eax, 0x661fe0 */ { eax = (u32)(0x661fe0u); }
  /* 0061eb1d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eb30(CPU *c) {
  NATIVE_HOOK(0x61eb30u) REGS; LOADALL;
L_0061eb30:;
  /* 0061eb30 lea ecx, [ebp - 0x448] */ ecx = (u32)((u32)(ebp + 0xfffffbb8u));
  /* 0061eb36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061eb3b(CPU *c) {
  NATIVE_HOOK(0x61eb3bu) REGS; LOADALL;
L_0061eb3b:;
  /* 0061eb3b lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 0061eb41 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061eb46(CPU *c) {
  NATIVE_HOOK(0x61eb46u) REGS; LOADALL;
  goto L_0061eb46;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eb46:;
  /* 0061eb46 mov eax, 0x662038 */ { eax = (u32)(0x662038u); }
  /* 0061eb4b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eb50(CPU *c) {
  NATIVE_HOOK(0x61eb50u) REGS; LOADALL;
L_0061eb50:;
  /* 0061eb50 lea ecx, [ebp - 0xec] */ ecx = (u32)((u32)(ebp + 0xffffff14u));
  /* 0061eb56 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061eb5b(CPU *c) {
  NATIVE_HOOK(0x61eb5bu) REGS; LOADALL;
  goto L_0061eb5b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eb5b:;
  /* 0061eb5b mov eax, 0x66205c */ { eax = (u32)(0x66205cu); }
  /* 0061eb60 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eb70(CPU *c) {
  NATIVE_HOOK(0x61eb70u) REGS; LOADALL;
L_0061eb70:;
  /* 0061eb70 lea ecx, [ebp - 0xcc] */ ecx = (u32)((u32)(ebp + 0xffffff34u));
  /* 0061eb76 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061eb7b(CPU *c) {
  NATIVE_HOOK(0x61eb7bu) REGS; LOADALL;
  goto L_0061eb7b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eb7b:;
  /* 0061eb7b mov eax, 0x662080 */ { eax = (u32)(0x662080u); }
  /* 0061eb80 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eb90(CPU *c) {
  NATIVE_HOOK(0x61eb90u) REGS; LOADALL;
L_0061eb90:;
  /* 0061eb90 lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 0061eb96 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061eb9b(CPU *c) {
  NATIVE_HOOK(0x61eb9bu) REGS; LOADALL;
  goto L_0061eb9b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eb9b:;
  /* 0061eb9b mov eax, 0x6620a4 */ { eax = (u32)(0x6620a4u); }
  /* 0061eba0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ebb0(CPU *c) {
  NATIVE_HOOK(0x61ebb0u) REGS; LOADALL;
L_0061ebb0:;
  /* 0061ebb0 lea ecx, [ebp - 0xa8] */ ecx = (u32)((u32)(ebp + 0xffffff58u));
  /* 0061ebb6 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061ebbb(CPU *c) {
  NATIVE_HOOK(0x61ebbbu) REGS; LOADALL;
  goto L_0061ebbb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ebbb:;
  /* 0061ebbb mov eax, 0x662110 */ { eax = (u32)(0x662110u); }
  /* 0061ebc0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ebd0(CPU *c) {
  NATIVE_HOOK(0x61ebd0u) REGS; LOADALL;
L_0061ebd0:;
  /* 0061ebd0 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0061ebd6 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061ebdb(CPU *c) {
  NATIVE_HOOK(0x61ebdbu) REGS; LOADALL;
  goto L_0061ebdb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ebdb:;
  /* 0061ebdb mov eax, 0x662158 */ { eax = (u32)(0x662158u); }
  /* 0061ebe0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ebf0(CPU *c) {
  NATIVE_HOOK(0x61ebf0u) REGS; LOADALL;
L_0061ebf0:;
  /* 0061ebf0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ebf3 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061ebf8(CPU *c) {
  NATIVE_HOOK(0x61ebf8u) REGS; LOADALL;
L_0061ebf8:;
  /* 0061ebf8 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ebfb add esi, 0xe4 */ { u32 a_ = esi, b_ = 0xe4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec01 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061ec06(CPU *c) {
  NATIVE_HOOK(0x61ec06u) REGS; LOADALL;
L_0061ec06:;
  /* 0061ec06 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ec09 add esi, 0x12c */ { u32 a_ = esi, b_ = 0x12cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec0f jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ec14(CPU *c) {
  NATIVE_HOOK(0x61ec14u) REGS; LOADALL;
L_0061ec14:;
  /* 0061ec14 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ec17 add esi, 0x13c */ { u32 a_ = esi, b_ = 0x13cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec1d jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ec22(CPU *c) {
  NATIVE_HOOK(0x61ec22u) REGS; LOADALL;
L_0061ec22:;
  /* 0061ec22 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ec25 add esi, 0x14c */ { u32 a_ = esi, b_ = 0x14cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec2b jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ec30(CPU *c) {
  NATIVE_HOOK(0x61ec30u) REGS; LOADALL;
L_0061ec30:;
  /* 0061ec30 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ec33 add esi, 0x15c */ { u32 a_ = esi, b_ = 0x15cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec39 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ec3e(CPU *c) {
  NATIVE_HOOK(0x61ec3eu) REGS; LOADALL;
L_0061ec3e:;
  /* 0061ec3e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ec41 add esi, 0x16c */ { u32 a_ = esi, b_ = 0x16cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec47 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ec4c(CPU *c) {
  NATIVE_HOOK(0x61ec4cu) REGS; LOADALL;
L_0061ec4c:;
  /* 0061ec4c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ec4f add esi, 0x17c */ { u32 a_ = esi, b_ = 0x17cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec55 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ec5a(CPU *c) {
  NATIVE_HOOK(0x61ec5au) REGS; LOADALL;
L_0061ec5a:;
  /* 0061ec5a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ec5d add esi, 0x18c */ { u32 a_ = esi, b_ = 0x18cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec63 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ec68(CPU *c) {
  NATIVE_HOOK(0x61ec68u) REGS; LOADALL;
L_0061ec68:;
  /* 0061ec68 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ec6b add esi, 0x19c */ { u32 a_ = esi, b_ = 0x19cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec71 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ec76(CPU *c) {
  NATIVE_HOOK(0x61ec76u) REGS; LOADALL;
L_0061ec76:;
  /* 0061ec76 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ec79 add esi, 0x1ac */ { u32 a_ = esi, b_ = 0x1acu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ec7f jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ec84(CPU *c) {
  NATIVE_HOOK(0x61ec84u) REGS; LOADALL;
  goto L_0061ec84;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ec84:;
  /* 0061ec84 mov eax, 0x662238 */ { eax = (u32)(0x662238u); }
  /* 0061ec89 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ec90(CPU *c) {
  NATIVE_HOOK(0x61ec90u) REGS; LOADALL;
L_0061ec90:;
  /* 0061ec90 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061ec93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ec94 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061ec97 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ec98 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ec9du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61ec98u); RETCHK(0x61ec9du, 0x61ec98u); LOADALL;
  /* 0061ec9d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061eca0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061eca1(CPU *c) {
  NATIVE_HOOK(0x61eca1u) REGS; LOADALL;
  goto L_0061eca1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eca1:;
  /* 0061eca1 mov eax, 0x6622d8 */ { eax = (u32)(0x6622d8u); }
  /* 0061eca6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ecb0(CPU *c) {
  NATIVE_HOOK(0x61ecb0u) REGS; LOADALL;
L_0061ecb0:;
  /* 0061ecb0 lea esi, [ebp - 0x58] */ esi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0061ecb3 jmp 0x442b90 */ SAVEALL; F_00442b90(c); return;
}

void F_0061ecb8(CPU *c) {
  NATIVE_HOOK(0x61ecb8u) REGS; LOADALL;
  goto L_0061ecb8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ecb8:;
  /* 0061ecb8 mov eax, 0x662364 */ { eax = (u32)(0x662364u); }
  /* 0061ecbd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ecd0(CPU *c) {
  NATIVE_HOOK(0x61ecd0u) REGS; LOADALL;
L_0061ecd0:;
  /* 0061ecd0 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0061ecd3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ecd8(CPU *c) {
  NATIVE_HOOK(0x61ecd8u) REGS; LOADALL;
L_0061ecd8:;
  /* 0061ecd8 lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 0061ecdb jmp 0x442b90 */ SAVEALL; F_00442b90(c); return;
}

void F_0061ece0(CPU *c) {
  NATIVE_HOOK(0x61ece0u) REGS; LOADALL;
  goto L_0061ece0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ece0:;
  /* 0061ece0 mov eax, 0x6623b4 */ { eax = (u32)(0x6623b4u); }
  /* 0061ece5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ecf0(CPU *c) {
  NATIVE_HOOK(0x61ecf0u) REGS; LOADALL;
L_0061ecf0:;
  /* 0061ecf0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ecf3 add esi, 0xc0 */ { u32 a_ = esi, b_ = 0xc0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ecf9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ecfe(CPU *c) {
  NATIVE_HOOK(0x61ecfeu) REGS; LOADALL;
  goto L_0061ecfe;
L_00492d20:;
  /* 00492d20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00492d21 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00492d24 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00492d26 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00492d28 je 0x492d4d */ if (ZF_) goto L_00492d4d;
  /* 00492d2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00492d2b mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00492d2e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00492d30 je 0x492d3e */ if (ZF_) goto L_00492d3e;
L_00492d32:;
  /* 00492d32 call 0x442b90 */ esp -= 4; M32(esp) = 0x492d37u; SAVEALL; F_00442b90(c); ABI_CHECK(0x442b90u, 0x492d32u); RETCHK(0x492d37u, 0x492d32u); LOADALL;
  /* 00492d37 add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00492d3a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00492d3c jne 0x492d32 */ if (!ZF_) goto L_00492d32;
L_00492d3e:;
  /* 00492d3e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00492d41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00492d42 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x492d47u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x492d42u); RETCHK(0x492d47u, 0x492d42u); LOADALL;
  /* 00492d47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00492d4a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00492d4c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00492d4d:;
  /* 00492d4d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00492d50 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00492d53 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00492d56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00492d57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ecfe:;
  /* 0061ecfe mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061ed01 add ebx, 0xd0 */ { u32 a_ = ebx, b_ = 0xd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061ed07 jmp 0x492d20 */ goto L_00492d20;
}

void F_0061ed0c(CPU *c) {
  NATIVE_HOOK(0x61ed0cu) REGS; LOADALL;
L_0061ed0c:;
  /* 0061ed0c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ed0f add esi, 0xe0 */ { u32 a_ = esi, b_ = 0xe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ed15 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061ed1a(CPU *c) {
  NATIVE_HOOK(0x61ed1au) REGS; LOADALL;
  goto L_0061ed1a;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ed1a:;
  /* 0061ed1a mov eax, 0x6623e8 */ { eax = (u32)(0x6623e8u); }
  /* 0061ed1f jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ed30(CPU *c) {
  NATIVE_HOOK(0x61ed30u) REGS; LOADALL;
L_0061ed30:;
  /* 0061ed30 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ed33 add esi, 0xc0 */ { u32 a_ = esi, b_ = 0xc0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ed39 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061ed3e(CPU *c) {
  NATIVE_HOOK(0x61ed3eu) REGS; LOADALL;
  goto L_0061ed3e;
L_00492d20:;
  /* 00492d20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00492d21 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00492d24 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00492d26 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00492d28 je 0x492d4d */ if (ZF_) goto L_00492d4d;
  /* 00492d2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00492d2b mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00492d2e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00492d30 je 0x492d3e */ if (ZF_) goto L_00492d3e;
L_00492d32:;
  /* 00492d32 call 0x442b90 */ esp -= 4; M32(esp) = 0x492d37u; SAVEALL; F_00442b90(c); ABI_CHECK(0x442b90u, 0x492d32u); RETCHK(0x492d37u, 0x492d32u); LOADALL;
  /* 00492d37 add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00492d3a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00492d3c jne 0x492d32 */ if (!ZF_) goto L_00492d32;
L_00492d3e:;
  /* 00492d3e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00492d41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00492d42 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x492d47u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x492d42u); RETCHK(0x492d47u, 0x492d42u); LOADALL;
  /* 00492d47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00492d4a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00492d4c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00492d4d:;
  /* 00492d4d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00492d50 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00492d53 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00492d56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00492d57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ed3e:;
  /* 0061ed3e mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061ed41 add ebx, 0xd0 */ { u32 a_ = ebx, b_ = 0xd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061ed47 jmp 0x492d20 */ goto L_00492d20;
}

void F_0061ed4c(CPU *c) {
  NATIVE_HOOK(0x61ed4cu) REGS; LOADALL;
  goto L_0061ed4c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ed4c:;
  /* 0061ed4c mov eax, 0x662414 */ { eax = (u32)(0x662414u); }
  /* 0061ed51 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ed60(CPU *c) {
  NATIVE_HOOK(0x61ed60u) REGS; LOADALL;
L_0061ed60:;
  /* 0061ed60 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061ed63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ed64 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061ed67 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ed68 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ed6du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61ed68u); RETCHK(0x61ed6du, 0x61ed68u); LOADALL;
  /* 0061ed6d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ed70 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ed71(CPU *c) {
  NATIVE_HOOK(0x61ed71u) REGS; LOADALL;
  goto L_0061ed71;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ed71:;
  /* 0061ed71 mov eax, 0x66246c */ { eax = (u32)(0x66246cu); }
  /* 0061ed76 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ed80(CPU *c) {
  NATIVE_HOOK(0x61ed80u) REGS; LOADALL;
L_0061ed80:;
  /* 0061ed80 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0061ed83 jmp 0x48f010 */ SAVEALL; F_0048f010(c); return;
}

void F_0061ed88(CPU *c) {
  NATIVE_HOOK(0x61ed88u) REGS; LOADALL;
  goto L_0061ed88;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ed88:;
  /* 0061ed88 mov eax, 0x6624f8 */ { eax = (u32)(0x6624f8u); }
  /* 0061ed8d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eda0(CPU *c) {
  NATIVE_HOOK(0x61eda0u) REGS; LOADALL;
L_0061eda0:;
  /* 0061eda0 lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 0061eda3 jmp 0x48f010 */ SAVEALL; F_0048f010(c); return;
}

void F_0061eda8(CPU *c) {
  NATIVE_HOOK(0x61eda8u) REGS; LOADALL;
  goto L_0061eda8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eda8:;
  /* 0061eda8 mov eax, 0x66251c */ { eax = (u32)(0x66251cu); }
  /* 0061edad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061edc0(CPU *c) {
  NATIVE_HOOK(0x61edc0u) REGS; LOADALL;
L_0061edc0:;
  /* 0061edc0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061edc3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061edc8(CPU *c) {
  NATIVE_HOOK(0x61edc8u) REGS; LOADALL;
L_0061edc8:;
  /* 0061edc8 lea ecx, [ebp - 0xdc] */ ecx = (u32)((u32)(ebp + 0xffffff24u));
  /* 0061edce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061edd3(CPU *c) {
  NATIVE_HOOK(0x61edd3u) REGS; LOADALL;
  goto L_0061edd3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061edd3:;
  /* 0061edd3 mov eax, 0x662548 */ { eax = (u32)(0x662548u); }
  /* 0061edd8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ede0(CPU *c) {
  NATIVE_HOOK(0x61ede0u) REGS; LOADALL;
L_0061ede0:;
  /* 0061ede0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ede3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ede8(CPU *c) {
  NATIVE_HOOK(0x61ede8u) REGS; LOADALL;
L_0061ede8:;
  /* 0061ede8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061edeb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061edf0(CPU *c) {
  NATIVE_HOOK(0x61edf0u) REGS; LOADALL;
  goto L_0061edf0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061edf0:;
  /* 0061edf0 mov eax, 0x6625bc */ { eax = (u32)(0x6625bcu); }
  /* 0061edf5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ee00(CPU *c) {
  NATIVE_HOOK(0x61ee00u) REGS; LOADALL;
L_0061ee00:;
  /* 0061ee00 lea esi, [ebp + 0x14] */ esi = (u32)((u32)(ebp + 0x14u));
  /* 0061ee03 jmp 0x48bb00 */ SAVEALL; F_0048bb00(c); return;
}

void F_0061ee08(CPU *c) {
  NATIVE_HOOK(0x61ee08u) REGS; LOADALL;
  goto L_0061ee08;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ee08:;
  /* 0061ee08 mov eax, 0x6625e0 */ { eax = (u32)(0x6625e0u); }
  /* 0061ee0d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ee20(CPU *c) {
  NATIVE_HOOK(0x61ee20u) REGS; LOADALL;
L_0061ee20:;
  /* 0061ee20 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061ee23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061ee24 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061ee27 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061ee28 call 0x459c10 */ esp -= 4; M32(esp) = 0x61ee2du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61ee28u); RETCHK(0x61ee2du, 0x61ee28u); LOADALL;
  /* 0061ee2d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061ee30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ee31(CPU *c) {
  NATIVE_HOOK(0x61ee31u) REGS; LOADALL;
  goto L_0061ee31;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ee31:;
  /* 0061ee31 mov eax, 0x662638 */ { eax = (u32)(0x662638u); }
  /* 0061ee36 jmp 0x5fee2a */ goto L_005fee2a;
}
