#include "funcs.h"

void F_0061ee60(CPU *c) {
  NATIVE_HOOK(0x61ee60u) REGS; LOADALL;
L_0061ee60:;
  /* 0061ee60 lea esi, [ebp - 0x34] */ esi = (u32)((u32)(ebp + 0xffffffccu));
  /* 0061ee63 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061ee68(CPU *c) {
  NATIVE_HOOK(0x61ee68u) REGS; LOADALL;
  goto L_0061ee68;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ee68:;
  /* 0061ee68 mov eax, 0x66271c */ { eax = (u32)(0x66271cu); }
  /* 0061ee6d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ee80(CPU *c) {
  NATIVE_HOOK(0x61ee80u) REGS; LOADALL;
L_0061ee80:;
  /* 0061ee80 lea esi, [ebp - 0x7c] */ esi = (u32)((u32)(ebp + 0xffffff84u));
  /* 0061ee83 jmp 0x48bb00 */ SAVEALL; F_0048bb00(c); return;
}

void F_0061ee88(CPU *c) {
  NATIVE_HOOK(0x61ee88u) REGS; LOADALL;
  goto L_0061ee88;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ee88:;
  /* 0061ee88 mov eax, 0x6627a8 */ { eax = (u32)(0x6627a8u); }
  /* 0061ee8d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eea0(CPU *c) {
  NATIVE_HOOK(0x61eea0u) REGS; LOADALL;
L_0061eea0:;
  /* 0061eea0 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0061eea6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061eeab(CPU *c) {
  NATIVE_HOOK(0x61eeabu) REGS; LOADALL;
L_0061eeab:;
  /* 0061eeab lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061eeb1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061eeb6(CPU *c) {
  NATIVE_HOOK(0x61eeb6u) REGS; LOADALL;
  goto L_0061eeb6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eeb6:;
  /* 0061eeb6 mov eax, 0x6627d4 */ { eax = (u32)(0x6627d4u); }
  /* 0061eebb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eec0(CPU *c) {
  NATIVE_HOOK(0x61eec0u) REGS; LOADALL;
L_0061eec0:;
  /* 0061eec0 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0061eec3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061eec8(CPU *c) {
  NATIVE_HOOK(0x61eec8u) REGS; LOADALL;
L_0061eec8:;
  /* 0061eec8 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061eecb jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061eed0(CPU *c) {
  NATIVE_HOOK(0x61eed0u) REGS; LOADALL;
  goto L_0061eed0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061eed0:;
  /* 0061eed0 mov eax, 0x662824 */ { eax = (u32)(0x662824u); }
  /* 0061eed5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061eee0(CPU *c) {
  NATIVE_HOOK(0x61eee0u) REGS; LOADALL;
L_0061eee0:;
  /* 0061eee0 lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 0061eee6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061eeeb(CPU *c) {
  NATIVE_HOOK(0x61eeebu) REGS; LOADALL;
L_0061eeeb:;
  /* 0061eeeb lea ecx, [ebp - 0xf0] */ ecx = (u32)((u32)(ebp + 0xffffff10u));
  /* 0061eef1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061eef6(CPU *c) {
  NATIVE_HOOK(0x61eef6u) REGS; LOADALL;
L_0061eef6:;
  /* 0061eef6 lea ecx, [ebp - 0xd4] */ ecx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 0061eefc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ef01(CPU *c) {
  NATIVE_HOOK(0x61ef01u) REGS; LOADALL;
  goto L_0061ef01;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ef01:;
  /* 0061ef01 mov eax, 0x662858 */ { eax = (u32)(0x662858u); }
  /* 0061ef06 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ef10(CPU *c) {
  NATIVE_HOOK(0x61ef10u) REGS; LOADALL;
L_0061ef10:;
  /* 0061ef10 lea esi, [ebp - 0x80] */ esi = (u32)((u32)(ebp + 0xffffff80u));
  /* 0061ef13 jmp 0x48bb00 */ SAVEALL; F_0048bb00(c); return;
}

void F_0061ef18(CPU *c) {
  NATIVE_HOOK(0x61ef18u) REGS; LOADALL;
  goto L_0061ef18;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ef18:;
  /* 0061ef18 mov eax, 0x6628c4 */ { eax = (u32)(0x6628c4u); }
  /* 0061ef1d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ef30(CPU *c) {
  NATIVE_HOOK(0x61ef30u) REGS; LOADALL;
L_0061ef30:;
  /* 0061ef30 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0061ef33 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ef38(CPU *c) {
  NATIVE_HOOK(0x61ef38u) REGS; LOADALL;
L_0061ef38:;
  /* 0061ef38 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0061ef3b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ef40(CPU *c) {
  NATIVE_HOOK(0x61ef40u) REGS; LOADALL;
L_0061ef40:;
  /* 0061ef40 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 0061ef43 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ef48(CPU *c) {
  NATIVE_HOOK(0x61ef48u) REGS; LOADALL;
L_0061ef48:;
  /* 0061ef48 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061ef4e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ef53(CPU *c) {
  NATIVE_HOOK(0x61ef53u) REGS; LOADALL;
L_0061ef53:;
  /* 0061ef53 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0061ef56 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ef5b(CPU *c) {
  NATIVE_HOOK(0x61ef5bu) REGS; LOADALL;
L_0061ef5b:;
  /* 0061ef5b lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 0061ef5e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ef63(CPU *c) {
  NATIVE_HOOK(0x61ef63u) REGS; LOADALL;
L_0061ef63:;
  /* 0061ef63 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061ef69 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ef6e(CPU *c) {
  NATIVE_HOOK(0x61ef6eu) REGS; LOADALL;
  goto L_0061ef6e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ef6e:;
  /* 0061ef6e mov eax, 0x662918 */ { eax = (u32)(0x662918u); }
  /* 0061ef73 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ef80(CPU *c) {
  NATIVE_HOOK(0x61ef80u) REGS; LOADALL;
L_0061ef80:;
  /* 0061ef80 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ef83 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061ef88(CPU *c) {
  NATIVE_HOOK(0x61ef88u) REGS; LOADALL;
L_0061ef88:;
  /* 0061ef88 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061ef8b add ebx, 0xd8 */ { u32 a_ = ebx, b_ = 0xd8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061ef91 jmp 0x48c8b0 */ SAVEALL; F_0048c8b0(c); return;
}

void F_0061ef96(CPU *c) {
  NATIVE_HOOK(0x61ef96u) REGS; LOADALL;
  goto L_0061ef96;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ef96:;
  /* 0061ef96 mov eax, 0x6629d4 */ { eax = (u32)(0x6629d4u); }
  /* 0061ef9b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061efa0(CPU *c) {
  NATIVE_HOOK(0x61efa0u) REGS; LOADALL;
L_0061efa0:;
  /* 0061efa0 mov eax, dword ptr [0x9ba9f8] */ { const u32 m_ = (u32)(0x9ba9f8u); eax = (u32)(M32(m_)); }
  /* 0061efa5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061efa8 mov dword ptr [0x9ba9f8], eax */ { const u32 m_ = (u32)(0x9ba9f8u); M32(m_) = (u32)(eax); }
  /* 0061efad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061efae(CPU *c) {
  NATIVE_HOOK(0x61efaeu) REGS; LOADALL;
L_0061efae:;
  /* 0061efae lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061efb1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061efb6(CPU *c) {
  NATIVE_HOOK(0x61efb6u) REGS; LOADALL;
  goto L_0061efb6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061efb6:;
  /* 0061efb6 mov eax, 0x662a74 */ { eax = (u32)(0x662a74u); }
  /* 0061efbb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061efc0(CPU *c) {
  NATIVE_HOOK(0x61efc0u) REGS; LOADALL;
L_0061efc0:;
  /* 0061efc0 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061efc3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061efc8(CPU *c) {
  NATIVE_HOOK(0x61efc8u) REGS; LOADALL;
L_0061efc8:;
  /* 0061efc8 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061efcb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061efd0(CPU *c) {
  NATIVE_HOOK(0x61efd0u) REGS; LOADALL;
L_0061efd0:;
  /* 0061efd0 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061efd3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061efd8(CPU *c) {
  NATIVE_HOOK(0x61efd8u) REGS; LOADALL;
L_0061efd8:;
  /* 0061efd8 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061efdb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061efe0(CPU *c) {
  NATIVE_HOOK(0x61efe0u) REGS; LOADALL;
L_0061efe0:;
  /* 0061efe0 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061efe3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061efe8(CPU *c) {
  NATIVE_HOOK(0x61efe8u) REGS; LOADALL;
L_0061efe8:;
  /* 0061efe8 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061efeb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061eff0(CPU *c) {
  NATIVE_HOOK(0x61eff0u) REGS; LOADALL;
L_0061eff0:;
  /* 0061eff0 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061eff3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061eff8(CPU *c) {
  NATIVE_HOOK(0x61eff8u) REGS; LOADALL;
L_0061eff8:;
  /* 0061eff8 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061effb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f000(CPU *c) {
  NATIVE_HOOK(0x61f000u) REGS; LOADALL;
L_0061f000:;
  /* 0061f000 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f003 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f008(CPU *c) {
  NATIVE_HOOK(0x61f008u) REGS; LOADALL;
L_0061f008:;
  /* 0061f008 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f00b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f010(CPU *c) {
  NATIVE_HOOK(0x61f010u) REGS; LOADALL;
L_0061f010:;
  /* 0061f010 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f013 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f018(CPU *c) {
  NATIVE_HOOK(0x61f018u) REGS; LOADALL;
L_0061f018:;
  /* 0061f018 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f01b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f020(CPU *c) {
  NATIVE_HOOK(0x61f020u) REGS; LOADALL;
L_0061f020:;
  /* 0061f020 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f023 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f028(CPU *c) {
  NATIVE_HOOK(0x61f028u) REGS; LOADALL;
L_0061f028:;
  /* 0061f028 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f02b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f030(CPU *c) {
  NATIVE_HOOK(0x61f030u) REGS; LOADALL;
L_0061f030:;
  /* 0061f030 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f033 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f038(CPU *c) {
  NATIVE_HOOK(0x61f038u) REGS; LOADALL;
L_0061f038:;
  /* 0061f038 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f03b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f040(CPU *c) {
  NATIVE_HOOK(0x61f040u) REGS; LOADALL;
L_0061f040:;
  /* 0061f040 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f043 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f048(CPU *c) {
  NATIVE_HOOK(0x61f048u) REGS; LOADALL;
L_0061f048:;
  /* 0061f048 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f04b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f050(CPU *c) {
  NATIVE_HOOK(0x61f050u) REGS; LOADALL;
L_0061f050:;
  /* 0061f050 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0061f053 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f058(CPU *c) {
  NATIVE_HOOK(0x61f058u) REGS; LOADALL;
  goto L_0061f058;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f058:;
  /* 0061f058 mov eax, 0x662b28 */ { eax = (u32)(0x662b28u); }
  /* 0061f05d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f070(CPU *c) {
  NATIVE_HOOK(0x61f070u) REGS; LOADALL;
L_0061f070:;
  /* 0061f070 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061f073 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f074 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f077 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f078 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f07du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f078u); RETCHK(0x61f07du, 0x61f078u); LOADALL;
  /* 0061f07d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f080 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f081(CPU *c) {
  NATIVE_HOOK(0x61f081u) REGS; LOADALL;
  goto L_0061f081;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f081:;
  /* 0061f081 mov eax, 0x662b80 */ { eax = (u32)(0x662b80u); }
  /* 0061f086 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f090(CPU *c) {
  NATIVE_HOOK(0x61f090u) REGS; LOADALL;
L_0061f090:;
  /* 0061f090 lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 0061f093 jmp 0x442b90 */ SAVEALL; F_00442b90(c); return;
}

void F_0061f098(CPU *c) {
  NATIVE_HOOK(0x61f098u) REGS; LOADALL;
  goto L_0061f098;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f098:;
  /* 0061f098 mov eax, 0x662c0c */ { eax = (u32)(0x662c0cu); }
  /* 0061f09d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f0b0(CPU *c) {
  NATIVE_HOOK(0x61f0b0u) REGS; LOADALL;
L_0061f0b0:;
  /* 0061f0b0 lea ecx, [ebp + 0x28] */ ecx = (u32)((u32)(ebp + 0x28u));
  /* 0061f0b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f0b8(CPU *c) {
  NATIVE_HOOK(0x61f0b8u) REGS; LOADALL;
L_0061f0b8:;
  /* 0061f0b8 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0061f0bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f0c0(CPU *c) {
  NATIVE_HOOK(0x61f0c0u) REGS; LOADALL;
L_0061f0c0:;
  /* 0061f0c0 lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0061f0c3 jmp 0x442b90 */ SAVEALL; F_00442b90(c); return;
}

void F_0061f0c8(CPU *c) {
  NATIVE_HOOK(0x61f0c8u) REGS; LOADALL;
  goto L_0061f0c8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f0c8:;
  /* 0061f0c8 mov eax, 0x662c6c */ { eax = (u32)(0x662c6cu); }
  /* 0061f0cd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f0e0(CPU *c) {
  NATIVE_HOOK(0x61f0e0u) REGS; LOADALL;
  goto L_0061f0e0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f0e0:;
  /* 0061f0e0 mov eax, 0x662d04 */ { eax = (u32)(0x662d04u); }
  /* 0061f0e5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f0f0(CPU *c) {
  NATIVE_HOOK(0x61f0f0u) REGS; LOADALL;
  goto L_0061f0f0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f0f0:;
  /* 0061f0f0 mov eax, 0x662d54 */ { eax = (u32)(0x662d54u); }
  /* 0061f0f5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f100(CPU *c) {
  NATIVE_HOOK(0x61f100u) REGS; LOADALL;
L_0061f100:;
  /* 0061f100 lea ecx, [ebp - 0x2f0] */ ecx = (u32)((u32)(ebp + 0xfffffd10u));
  /* 0061f106 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061f10b(CPU *c) {
  NATIVE_HOOK(0x61f10bu) REGS; LOADALL;
L_0061f10b:;
  /* 0061f10b lea esi, [ebp - 0x300] */ esi = (u32)((u32)(ebp + 0xfffffd00u));
  /* 0061f111 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061f116(CPU *c) {
  NATIVE_HOOK(0x61f116u) REGS; LOADALL;
  goto L_0061f116;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f116:;
  /* 0061f116 mov eax, 0x662d80 */ { eax = (u32)(0x662d80u); }
  /* 0061f11b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f120(CPU *c) {
  NATIVE_HOOK(0x61f120u) REGS; LOADALL;
L_0061f120:;
  /* 0061f120 lea ecx, [ebp - 0x4824] */ ecx = (u32)((u32)(ebp + 0xffffb7dcu));
  /* 0061f126 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061f12b(CPU *c) {
  NATIVE_HOOK(0x61f12bu) REGS; LOADALL;
  goto L_0061f12b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f12b:;
  /* 0061f12b mov eax, 0x662da4 */ { eax = (u32)(0x662da4u); }
  /* 0061f130 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f140(CPU *c) {
  NATIVE_HOOK(0x61f140u) REGS; LOADALL;
L_0061f140:;
  /* 0061f140 lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0061f146 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f14b(CPU *c) {
  NATIVE_HOOK(0x61f14bu) REGS; LOADALL;
  goto L_0061f14b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f14b:;
  /* 0061f14b mov eax, 0x662dec */ { eax = (u32)(0x662decu); }
  /* 0061f150 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f160(CPU *c) {
  NATIVE_HOOK(0x61f160u) REGS; LOADALL;
L_0061f160:;
  /* 0061f160 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061f163 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f168(CPU *c) {
  NATIVE_HOOK(0x61f168u) REGS; LOADALL;
L_0061f168:;
  /* 0061f168 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061f16b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f170(CPU *c) {
  NATIVE_HOOK(0x61f170u) REGS; LOADALL;
L_0061f170:;
  /* 0061f170 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061f173 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f178(CPU *c) {
  NATIVE_HOOK(0x61f178u) REGS; LOADALL;
L_0061f178:;
  /* 0061f178 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f17b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f180(CPU *c) {
  NATIVE_HOOK(0x61f180u) REGS; LOADALL;
  goto L_0061f180;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f180:;
  /* 0061f180 mov eax, 0x662e28 */ { eax = (u32)(0x662e28u); }
  /* 0061f185 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f190(CPU *c) {
  NATIVE_HOOK(0x61f190u) REGS; LOADALL;
L_0061f190:;
  /* 0061f190 lea ecx, [ebp - 0xbc] */ ecx = (u32)((u32)(ebp + 0xffffff44u));
  /* 0061f196 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061f19b(CPU *c) {
  NATIVE_HOOK(0x61f19bu) REGS; LOADALL;
L_0061f19b:;
  /* 0061f19b lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061f1a1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f1a6(CPU *c) {
  NATIVE_HOOK(0x61f1a6u) REGS; LOADALL;
L_0061f1a6:;
  /* 0061f1a6 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061f1ac jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f1b1(CPU *c) {
  NATIVE_HOOK(0x61f1b1u) REGS; LOADALL;
L_0061f1b1:;
  /* 0061f1b1 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061f1b7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f1bc(CPU *c) {
  NATIVE_HOOK(0x61f1bcu) REGS; LOADALL;
L_0061f1bc:;
  /* 0061f1bc lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0061f1c2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f1c7(CPU *c) {
  NATIVE_HOOK(0x61f1c7u) REGS; LOADALL;
  goto L_0061f1c7;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f1c7:;
  /* 0061f1c7 mov eax, 0x662e6c */ { eax = (u32)(0x662e6cu); }
  /* 0061f1cc jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f1e0(CPU *c) {
  NATIVE_HOOK(0x61f1e0u) REGS; LOADALL;
L_0061f1e0:;
  /* 0061f1e0 lea ecx, [ebp - 0x234] */ ecx = (u32)((u32)(ebp + 0xfffffdccu));
  /* 0061f1e6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f1eb(CPU *c) {
  NATIVE_HOOK(0x61f1ebu) REGS; LOADALL;
L_0061f1eb:;
  /* 0061f1eb lea ecx, [ebp - 0x234] */ ecx = (u32)((u32)(ebp + 0xfffffdccu));
  /* 0061f1f1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f1f6(CPU *c) {
  NATIVE_HOOK(0x61f1f6u) REGS; LOADALL;
L_0061f1f6:;
  /* 0061f1f6 lea ecx, [ebp - 0x250] */ ecx = (u32)((u32)(ebp + 0xfffffdb0u));
  /* 0061f1fc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f201(CPU *c) {
  NATIVE_HOOK(0x61f201u) REGS; LOADALL;
  goto L_0061f201;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f201:;
  /* 0061f201 mov eax, 0x662ea0 */ { eax = (u32)(0x662ea0u); }
  /* 0061f206 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f210(CPU *c) {
  NATIVE_HOOK(0x61f210u) REGS; LOADALL;
L_0061f210:;
  /* 0061f210 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f216 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f21b(CPU *c) {
  NATIVE_HOOK(0x61f21bu) REGS; LOADALL;
L_0061f21b:;
  /* 0061f21b lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f221 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f226(CPU *c) {
  NATIVE_HOOK(0x61f226u) REGS; LOADALL;
L_0061f226:;
  /* 0061f226 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f22c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f231(CPU *c) {
  NATIVE_HOOK(0x61f231u) REGS; LOADALL;
L_0061f231:;
  /* 0061f231 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f237 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f23c(CPU *c) {
  NATIVE_HOOK(0x61f23cu) REGS; LOADALL;
L_0061f23c:;
  /* 0061f23c lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f242 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f247(CPU *c) {
  NATIVE_HOOK(0x61f247u) REGS; LOADALL;
L_0061f247:;
  /* 0061f247 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f24d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f252(CPU *c) {
  NATIVE_HOOK(0x61f252u) REGS; LOADALL;
L_0061f252:;
  /* 0061f252 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f258 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f25d(CPU *c) {
  NATIVE_HOOK(0x61f25du) REGS; LOADALL;
L_0061f25d:;
  /* 0061f25d lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f263 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f268(CPU *c) {
  NATIVE_HOOK(0x61f268u) REGS; LOADALL;
L_0061f268:;
  /* 0061f268 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f26b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f270(CPU *c) {
  NATIVE_HOOK(0x61f270u) REGS; LOADALL;
L_0061f270:;
  /* 0061f270 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f276 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f27b(CPU *c) {
  NATIVE_HOOK(0x61f27bu) REGS; LOADALL;
L_0061f27b:;
  /* 0061f27b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f27e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f283(CPU *c) {
  NATIVE_HOOK(0x61f283u) REGS; LOADALL;
L_0061f283:;
  /* 0061f283 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0061f289 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f28e(CPU *c) {
  NATIVE_HOOK(0x61f28eu) REGS; LOADALL;
L_0061f28e:;
  /* 0061f28e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f291 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f296(CPU *c) {
  NATIVE_HOOK(0x61f296u) REGS; LOADALL;
L_0061f296:;
  /* 0061f296 lea ecx, [ebp - 0x164] */ ecx = (u32)((u32)(ebp + 0xfffffe9cu));
  /* 0061f29c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f2a1(CPU *c) {
  NATIVE_HOOK(0x61f2a1u) REGS; LOADALL;
  goto L_0061f2a1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f2a1:;
  /* 0061f2a1 mov eax, 0x662f30 */ { eax = (u32)(0x662f30u); }
  /* 0061f2a6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f2b0(CPU *c) {
  NATIVE_HOOK(0x61f2b0u) REGS; LOADALL;
L_0061f2b0:;
  /* 0061f2b0 mov eax, dword ptr [0x9bae40] */ { const u32 m_ = (u32)(0x9bae40u); eax = (u32)(M32(m_)); }
  /* 0061f2b5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061f2b8 mov dword ptr [0x9bae40], eax */ { const u32 m_ = (u32)(0x9bae40u); M32(m_) = (u32)(eax); }
  /* 0061f2bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f2be(CPU *c) {
  NATIVE_HOOK(0x61f2beu) REGS; LOADALL;
  goto L_0061f2be;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f2be:;
  /* 0061f2be mov eax, 0x662f54 */ { eax = (u32)(0x662f54u); }
  /* 0061f2c3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f2d0(CPU *c) {
  NATIVE_HOOK(0x61f2d0u) REGS; LOADALL;
L_0061f2d0:;
  /* 0061f2d0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061f2d3 add esi, 0x148 */ { u32 a_ = esi, b_ = 0x148u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061f2d9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061f2de(CPU *c) {
  NATIVE_HOOK(0x61f2deu) REGS; LOADALL;
L_0061f2de:;
  /* 0061f2de mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061f2e1 add esi, 0x260 */ { u32 a_ = esi, b_ = 0x260u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061f2e7 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061f2ec(CPU *c) {
  NATIVE_HOOK(0x61f2ecu) REGS; LOADALL;
  goto L_0061f2ec;
L_00480d40:;
  /* 00480d40 jmp 0x4810c0 */ SAVEALL; F_004810c0(c); return;
L_0061f2ec:;
  /* 0061f2ec mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0061f2ef add ebx, 0x370 */ { u32 a_ = ebx, b_ = 0x370u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0061f2f5 jmp 0x480d40 */ goto L_00480d40;
}

void F_0061f2fa(CPU *c) {
  NATIVE_HOOK(0x61f2fau) REGS; LOADALL;
  goto L_0061f2fa;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f2fa:;
  /* 0061f2fa mov eax, 0x662f88 */ { eax = (u32)(0x662f88u); }
  /* 0061f2ff jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f310(CPU *c) {
  NATIVE_HOOK(0x61f310u) REGS; LOADALL;
  goto L_0061f310;
L_00471890:;
  /* 00471890 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00471891 lea ebx, [esi + 0x1d8] */ ebx = (u32)((u32)(esi + 0x1d8u));
  /* 00471897 call 0x480f00 */ esp -= 4; M32(esp) = 0x47189cu; SAVEALL; F_00480f00(c); ABI_CHECK(0x480f00u, 0x471897u); RETCHK(0x47189cu, 0x471897u); LOADALL;
  /* 0047189c mov eax, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004718a2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004718a4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004718a5 je 0x4718b0 */ if (ZF_) goto L_004718b0;
  /* 004718a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004718a8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4718adu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4718a8u); RETCHK(0x4718adu, 0x4718a8u); LOADALL;
  /* 004718ad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004718b0:;
  /* 004718b0 mov dword ptr [esi + 0x1cc], 0 */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(0x0u); }
  /* 004718ba mov dword ptr [esi + 0x1d0], 0 */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(0x0u); }
  /* 004718c4 mov dword ptr [esi + 0x1d4], 0 */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(0x0u); }
  /* 004718ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061f310:;
  /* 0061f310 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061f313 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061f316 jmp 0x471890 */ goto L_00471890;
}

void F_0061f31b(CPU *c) {
  NATIVE_HOOK(0x61f31bu) REGS; LOADALL;
  goto L_0061f31b;
L_00471890:;
  /* 00471890 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00471891 lea ebx, [esi + 0x1d8] */ ebx = (u32)((u32)(esi + 0x1d8u));
  /* 00471897 call 0x480f00 */ esp -= 4; M32(esp) = 0x47189cu; SAVEALL; F_00480f00(c); ABI_CHECK(0x480f00u, 0x471897u); RETCHK(0x47189cu, 0x471897u); LOADALL;
  /* 0047189c mov eax, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004718a2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004718a4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004718a5 je 0x4718b0 */ if (ZF_) goto L_004718b0;
  /* 004718a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004718a8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4718adu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4718a8u); RETCHK(0x4718adu, 0x4718a8u); LOADALL;
  /* 004718ad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004718b0:;
  /* 004718b0 mov dword ptr [esi + 0x1cc], 0 */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(0x0u); }
  /* 004718ba mov dword ptr [esi + 0x1d0], 0 */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(0x0u); }
  /* 004718c4 mov dword ptr [esi + 0x1d4], 0 */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(0x0u); }
  /* 004718ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061f31b:;
  /* 0061f31b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061f31e add esi, 0x2fc */ { u32 a_ = esi, b_ = 0x2fcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061f324 jmp 0x471890 */ goto L_00471890;
}

void F_0061f329(CPU *c) {
  NATIVE_HOOK(0x61f329u) REGS; LOADALL;
  goto L_0061f329;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f329:;
  /* 0061f329 mov eax, 0x662fb4 */ { eax = (u32)(0x662fb4u); }
  /* 0061f32e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f340(CPU *c) {
  NATIVE_HOOK(0x61f340u) REGS; LOADALL;
L_0061f340:;
  /* 0061f340 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061f343 add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061f346 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061f34b(CPU *c) {
  NATIVE_HOOK(0x61f34bu) REGS; LOADALL;
  goto L_0061f34b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f34b:;
  /* 0061f34b mov eax, 0x662fd8 */ { eax = (u32)(0x662fd8u); }
  /* 0061f350 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f360(CPU *c) {
  NATIVE_HOOK(0x61f360u) REGS; LOADALL;
L_0061f360:;
  /* 0061f360 mov eax, dword ptr [ebp - 0x240] */ { const u32 m_ = (u32)(ebp + 0xfffffdc0u); eax = (u32)(M32(m_)); }
  /* 0061f366 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f367 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61f36cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61f367u); RETCHK(0x61f36cu, 0x61f367u); LOADALL;
  /* 0061f36c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061f36d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f36e(CPU *c) {
  NATIVE_HOOK(0x61f36eu) REGS; LOADALL;
L_0061f36e:;
  /* 0061f36e lea ecx, [ebp - 0x23c] */ ecx = (u32)((u32)(ebp + 0xfffffdc4u));
  /* 0061f374 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f379(CPU *c) {
  NATIVE_HOOK(0x61f379u) REGS; LOADALL;
  goto L_0061f379;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f379:;
  /* 0061f379 mov eax, 0x663028 */ { eax = (u32)(0x663028u); }
  /* 0061f37e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f390(CPU *c) {
  NATIVE_HOOK(0x61f390u) REGS; LOADALL;
L_0061f390:;
  /* 0061f390 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f393 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f398(CPU *c) {
  NATIVE_HOOK(0x61f398u) REGS; LOADALL;
L_0061f398:;
  /* 0061f398 lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 0061f39b jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061f3a0(CPU *c) {
  NATIVE_HOOK(0x61f3a0u) REGS; LOADALL;
  goto L_0061f3a0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f3a0:;
  /* 0061f3a0 mov eax, 0x663078 */ { eax = (u32)(0x663078u); }
  /* 0061f3a5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f3b0(CPU *c) {
  NATIVE_HOOK(0x61f3b0u) REGS; LOADALL;
L_0061f3b0:;
  /* 0061f3b0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061f3b3 add esi, 0x148 */ { u32 a_ = esi, b_ = 0x148u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061f3b9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061f3be(CPU *c) {
  NATIVE_HOOK(0x61f3beu) REGS; LOADALL;
  goto L_0061f3be;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f3be:;
  /* 0061f3be mov eax, 0x6630c0 */ { eax = (u32)(0x6630c0u); }
  /* 0061f3c3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f3d0(CPU *c) {
  NATIVE_HOOK(0x61f3d0u) REGS; LOADALL;
L_0061f3d0:;
  /* 0061f3d0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f3d3 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061f3d8(CPU *c) {
  NATIVE_HOOK(0x61f3d8u) REGS; LOADALL;
L_0061f3d8:;
  /* 0061f3d8 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061f3db add esi, 0x1c0 */ { u32 a_ = esi, b_ = 0x1c0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061f3e1 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061f3e6(CPU *c) {
  NATIVE_HOOK(0x61f3e6u) REGS; LOADALL;
  goto L_0061f3e6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f3e6:;
  /* 0061f3e6 mov eax, 0x663160 */ { eax = (u32)(0x663160u); }
  /* 0061f3eb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f3f0(CPU *c) {
  NATIVE_HOOK(0x61f3f0u) REGS; LOADALL;
L_0061f3f0:;
  /* 0061f3f0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061f3f3 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061f3f6 je 0x61f408 */ if (ZF_) goto L_0061f408;
  /* 0061f3fc and dword ptr [ebp - 0x14], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0061f400 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061f403 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
L_0061f408:;
  /* 0061f408 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f409(CPU *c) {
  NATIVE_HOOK(0x61f409u) REGS; LOADALL;
  goto L_0061f409;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f409:;
  /* 0061f409 mov eax, 0x6631cc */ { eax = (u32)(0x6631ccu); }
  /* 0061f40e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f420(CPU *c) {
  NATIVE_HOOK(0x61f420u) REGS; LOADALL;
  goto L_0061f420;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f420:;
  /* 0061f420 mov eax, 0x66321c */ { eax = (u32)(0x66321cu); }
  /* 0061f425 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f430(CPU *c) {
  NATIVE_HOOK(0x61f430u) REGS; LOADALL;
L_0061f430:;
  /* 0061f430 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061f433 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f438(CPU *c) {
  NATIVE_HOOK(0x61f438u) REGS; LOADALL;
L_0061f438:;
  /* 0061f438 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061f43b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f440(CPU *c) {
  NATIVE_HOOK(0x61f440u) REGS; LOADALL;
L_0061f440:;
  /* 0061f440 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061f443 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f448(CPU *c) {
  NATIVE_HOOK(0x61f448u) REGS; LOADALL;
L_0061f448:;
  /* 0061f448 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061f44b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f450(CPU *c) {
  NATIVE_HOOK(0x61f450u) REGS; LOADALL;
L_0061f450:;
  /* 0061f450 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061f453 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f458(CPU *c) {
  NATIVE_HOOK(0x61f458u) REGS; LOADALL;
  goto L_0061f458;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f458:;
  /* 0061f458 mov eax, 0x663260 */ { eax = (u32)(0x663260u); }
  /* 0061f45d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f470(CPU *c) {
  NATIVE_HOOK(0x61f470u) REGS; LOADALL;
L_0061f470:;
  /* 0061f470 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f473 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f478(CPU *c) {
  NATIVE_HOOK(0x61f478u) REGS; LOADALL;
L_0061f478:;
  /* 0061f478 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f47b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f480(CPU *c) {
  NATIVE_HOOK(0x61f480u) REGS; LOADALL;
  goto L_0061f480;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f480:;
  /* 0061f480 mov eax, 0x663340 */ { eax = (u32)(0x663340u); }
  /* 0061f485 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f490(CPU *c) {
  NATIVE_HOOK(0x61f490u) REGS; LOADALL;
L_0061f490:;
  /* 0061f490 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061f493 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f494 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f497 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f498 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f49du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f498u); RETCHK(0x61f49du, 0x61f498u); LOADALL;
  /* 0061f49d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f4a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f4a1(CPU *c) {
  NATIVE_HOOK(0x61f4a1u) REGS; LOADALL;
  goto L_0061f4a1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f4a1:;
  /* 0061f4a1 mov eax, 0x6633e0 */ { eax = (u32)(0x6633e0u); }
  /* 0061f4a6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f4b0(CPU *c) {
  NATIVE_HOOK(0x61f4b0u) REGS; LOADALL;
L_0061f4b0:;
  /* 0061f4b0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061f4b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f4b4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f4b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f4b8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f4bdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f4b8u); RETCHK(0x61f4bdu, 0x61f4b8u); LOADALL;
  /* 0061f4bd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f4c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f4c1(CPU *c) {
  NATIVE_HOOK(0x61f4c1u) REGS; LOADALL;
  goto L_0061f4c1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f4c1:;
  /* 0061f4c1 mov eax, 0x663438 */ { eax = (u32)(0x663438u); }
  /* 0061f4c6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f4d0(CPU *c) {
  NATIVE_HOOK(0x61f4d0u) REGS; LOADALL;
L_0061f4d0:;
  /* 0061f4d0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061f4d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f4d4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061f4d7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f4d8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f4ddu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f4d8u); RETCHK(0x61f4ddu, 0x61f4d8u); LOADALL;
  /* 0061f4dd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f4e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f4e1(CPU *c) {
  NATIVE_HOOK(0x61f4e1u) REGS; LOADALL;
  goto L_0061f4e1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f4e1:;
  /* 0061f4e1 mov eax, 0x663490 */ { eax = (u32)(0x663490u); }
  /* 0061f4e6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f4f0(CPU *c) {
  NATIVE_HOOK(0x61f4f0u) REGS; LOADALL;
L_0061f4f0:;
  /* 0061f4f0 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061f4f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f4f4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f4f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f4f8 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f4fdu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f4f8u); RETCHK(0x61f4fdu, 0x61f4f8u); LOADALL;
  /* 0061f4fd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f500 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f501(CPU *c) {
  NATIVE_HOOK(0x61f501u) REGS; LOADALL;
  goto L_0061f501;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f501:;
  /* 0061f501 mov eax, 0x6634e8 */ { eax = (u32)(0x6634e8u); }
  /* 0061f506 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f510(CPU *c) {
  NATIVE_HOOK(0x61f510u) REGS; LOADALL;
L_0061f510:;
  /* 0061f510 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061f513 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061f514 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061f517 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061f518 call 0x459c10 */ esp -= 4; M32(esp) = 0x61f51du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61f518u); RETCHK(0x61f51du, 0x61f518u); LOADALL;
  /* 0061f51d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061f520 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061f521(CPU *c) {
  NATIVE_HOOK(0x61f521u) REGS; LOADALL;
  goto L_0061f521;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f521:;
  /* 0061f521 mov eax, 0x663540 */ { eax = (u32)(0x663540u); }
  /* 0061f526 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f530(CPU *c) {
  NATIVE_HOOK(0x61f530u) REGS; LOADALL;
L_0061f530:;
  /* 0061f530 lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 0061f533 jmp 0x45c1f0 */ SAVEALL; F_0045c1f0(c); return;
}

void F_0061f538(CPU *c) {
  NATIVE_HOOK(0x61f538u) REGS; LOADALL;
  goto L_0061f538;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f538:;
  /* 0061f538 mov eax, 0x6635cc */ { eax = (u32)(0x6635ccu); }
  /* 0061f53d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f550(CPU *c) {
  NATIVE_HOOK(0x61f550u) REGS; LOADALL;
L_0061f550:;
  /* 0061f550 lea esi, [ebp - 0x58] */ esi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0061f553 jmp 0x4a6600 */ SAVEALL; F_004a6600(c); return;
}

void F_0061f558(CPU *c) {
  NATIVE_HOOK(0x61f558u) REGS; LOADALL;
  goto L_0061f558;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f558:;
  /* 0061f558 mov eax, 0x663658 */ { eax = (u32)(0x663658u); }
  /* 0061f55d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f570(CPU *c) {
  NATIVE_HOOK(0x61f570u) REGS; LOADALL;
  goto L_0061f570;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f570:;
  /* 0061f570 mov eax, 0x663734 */ { eax = (u32)(0x663734u); }
  /* 0061f575 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f580(CPU *c) {
  NATIVE_HOOK(0x61f580u) REGS; LOADALL;
  goto L_0061f580;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061f580:;
  /* 0061f580 mov eax, 0x663784 */ { eax = (u32)(0x663784u); }
  /* 0061f585 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061f590(CPU *c) {
  NATIVE_HOOK(0x61f590u) REGS; LOADALL;
L_0061f590:;
  /* 0061f590 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061f593 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f598(CPU *c) {
  NATIVE_HOOK(0x61f598u) REGS; LOADALL;
L_0061f598:;
  /* 0061f598 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061f59b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061f5a0(CPU *c) {
  NATIVE_HOOK(0x61f5a0u) REGS; LOADALL;
L_0061f5a0:;
  /* 0061f5a0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061f5a3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
