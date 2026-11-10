#include "funcs.h"

void F_0061bfb0(CPU *c) {
  NATIVE_HOOK(0x61bfb0u) REGS; LOADALL;
L_0061bfb0:;
  /* 0061bfb0 lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0061bfb6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bfbb(CPU *c) {
  NATIVE_HOOK(0x61bfbbu) REGS; LOADALL;
L_0061bfbb:;
  /* 0061bfbb lea ecx, [ebp - 0x130] */ ecx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 0061bfc1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bfc6(CPU *c) {
  NATIVE_HOOK(0x61bfc6u) REGS; LOADALL;
  goto L_0061bfc6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bfc6:;
  /* 0061bfc6 mov eax, 0x6599e0 */ { eax = (u32)(0x6599e0u); }
  /* 0061bfcb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bfd0(CPU *c) {
  NATIVE_HOOK(0x61bfd0u) REGS; LOADALL;
L_0061bfd0:;
  /* 0061bfd0 lea ecx, [ebp + 0x30] */ ecx = (u32)((u32)(ebp + 0x30u));
  /* 0061bfd3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bfd8(CPU *c) {
  NATIVE_HOOK(0x61bfd8u) REGS; LOADALL;
L_0061bfd8:;
  /* 0061bfd8 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0061bfdb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bfe0(CPU *c) {
  NATIVE_HOOK(0x61bfe0u) REGS; LOADALL;
  goto L_0061bfe0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bfe0:;
  /* 0061bfe0 mov eax, 0x659b18 */ { eax = (u32)(0x659b18u); }
  /* 0061bfe5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bff0(CPU *c) {
  NATIVE_HOOK(0x61bff0u) REGS; LOADALL;
L_0061bff0:;
  /* 0061bff0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bff3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bff8(CPU *c) {
  NATIVE_HOOK(0x61bff8u) REGS; LOADALL;
L_0061bff8:;
  /* 0061bff8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bffb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c000(CPU *c) {
  NATIVE_HOOK(0x61c000u) REGS; LOADALL;
L_0061c000:;
  /* 0061c000 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061c003 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c008(CPU *c) {
  NATIVE_HOOK(0x61c008u) REGS; LOADALL;
  goto L_0061c008;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c008:;
  /* 0061c008 mov eax, 0x659b4c */ { eax = (u32)(0x659b4cu); }
  /* 0061c00d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c020(CPU *c) {
  NATIVE_HOOK(0x61c020u) REGS; LOADALL;
L_0061c020:;
  /* 0061c020 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c023 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c026 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c02b(CPU *c) {
  NATIVE_HOOK(0x61c02bu) REGS; LOADALL;
L_0061c02b:;
  /* 0061c02b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c02e add ecx, 0x24 */ { u32 a_ = ecx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c031 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c036(CPU *c) {
  NATIVE_HOOK(0x61c036u) REGS; LOADALL;
  goto L_0061c036;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c036:;
  /* 0061c036 mov eax, 0x659c0c */ { eax = (u32)(0x659c0cu); }
  /* 0061c03b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c040(CPU *c) {
  NATIVE_HOOK(0x61c040u) REGS; LOADALL;
L_0061c040:;
  /* 0061c040 lea ecx, [ebp + 0x28] */ ecx = (u32)((u32)(ebp + 0x28u));
  /* 0061c043 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c048(CPU *c) {
  NATIVE_HOOK(0x61c048u) REGS; LOADALL;
L_0061c048:;
  /* 0061c048 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0061c04b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c050(CPU *c) {
  NATIVE_HOOK(0x61c050u) REGS; LOADALL;
  goto L_0061c050;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c050:;
  /* 0061c050 mov eax, 0x659d7c */ { eax = (u32)(0x659d7cu); }
  /* 0061c055 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c060(CPU *c) {
  NATIVE_HOOK(0x61c060u) REGS; LOADALL;
L_0061c060:;
  /* 0061c060 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061c063 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061c068(CPU *c) {
  NATIVE_HOOK(0x61c068u) REGS; LOADALL;
L_0061c068:;
  /* 0061c068 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061c06b add ecx, 0x118 */ { u32 a_ = ecx, b_ = 0x118u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c071 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c076(CPU *c) {
  NATIVE_HOOK(0x61c076u) REGS; LOADALL;
  goto L_0061c076;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c076:;
  /* 0061c076 mov eax, 0x659e14 */ { eax = (u32)(0x659e14u); }
  /* 0061c07b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c080(CPU *c) {
  NATIVE_HOOK(0x61c080u) REGS; LOADALL;
L_0061c080:;
  /* 0061c080 mov eax, dword ptr [0x9b9444] */ { const u32 m_ = (u32)(0x9b9444u); eax = (u32)(M32(m_)); }
  /* 0061c085 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061c088 mov dword ptr [0x9b9444], eax */ { const u32 m_ = (u32)(0x9b9444u); M32(m_) = (u32)(eax); }
  /* 0061c08d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c08e(CPU *c) {
  NATIVE_HOOK(0x61c08eu) REGS; LOADALL;
  goto L_0061c08e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c08e:;
  /* 0061c08e mov eax, 0x659e38 */ { eax = (u32)(0x659e38u); }
  /* 0061c093 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c0a0(CPU *c) {
  NATIVE_HOOK(0x61c0a0u) REGS; LOADALL;
L_0061c0a0:;
  /* 0061c0a0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061c0a3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c0a8(CPU *c) {
  NATIVE_HOOK(0x61c0a8u) REGS; LOADALL;
L_0061c0a8:;
  /* 0061c0a8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061c0ab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c0b0(CPU *c) {
  NATIVE_HOOK(0x61c0b0u) REGS; LOADALL;
L_0061c0b0:;
  /* 0061c0b0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061c0b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c0b8(CPU *c) {
  NATIVE_HOOK(0x61c0b8u) REGS; LOADALL;
L_0061c0b8:;
  /* 0061c0b8 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061c0bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c0c0(CPU *c) {
  NATIVE_HOOK(0x61c0c0u) REGS; LOADALL;
  goto L_0061c0c0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c0c0:;
  /* 0061c0c0 mov eax, 0x659f2c */ { eax = (u32)(0x659f2cu); }
  /* 0061c0c5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c0d0(CPU *c) {
  NATIVE_HOOK(0x61c0d0u) REGS; LOADALL;
L_0061c0d0:;
  /* 0061c0d0 mov eax, dword ptr [0x9b9464] */ { const u32 m_ = (u32)(0x9b9464u); eax = (u32)(M32(m_)); }
  /* 0061c0d5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061c0d8 mov dword ptr [0x9b9464], eax */ { const u32 m_ = (u32)(0x9b9464u); M32(m_) = (u32)(eax); }
  /* 0061c0dd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c0de(CPU *c) {
  NATIVE_HOOK(0x61c0deu) REGS; LOADALL;
L_0061c0de:;
  /* 0061c0de lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0061c0e4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c0e9(CPU *c) {
  NATIVE_HOOK(0x61c0e9u) REGS; LOADALL;
  goto L_0061c0e9;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c0e9:;
  /* 0061c0e9 mov eax, 0x659f7c */ { eax = (u32)(0x659f7cu); }
  /* 0061c0ee jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c100(CPU *c) {
  NATIVE_HOOK(0x61c100u) REGS; LOADALL;
L_0061c100:;
  /* 0061c100 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c103 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c106 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c10b(CPU *c) {
  NATIVE_HOOK(0x61c10bu) REGS; LOADALL;
L_0061c10b:;
  /* 0061c10b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c10e add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c111 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c116(CPU *c) {
  NATIVE_HOOK(0x61c116u) REGS; LOADALL;
  goto L_0061c116;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c116:;
  /* 0061c116 mov eax, 0x659fa8 */ { eax = (u32)(0x659fa8u); }
  /* 0061c11b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c120(CPU *c) {
  NATIVE_HOOK(0x61c120u) REGS; LOADALL;
L_0061c120:;
  /* 0061c120 lea ecx, [ebp + 0x24] */ ecx = (u32)((u32)(ebp + 0x24u));
  /* 0061c123 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c128(CPU *c) {
  NATIVE_HOOK(0x61c128u) REGS; LOADALL;
L_0061c128:;
  /* 0061c128 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0061c12b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c130(CPU *c) {
  NATIVE_HOOK(0x61c130u) REGS; LOADALL;
L_0061c130:;
  /* 0061c130 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061c133 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c138(CPU *c) {
  NATIVE_HOOK(0x61c138u) REGS; LOADALL;
  goto L_0061c138;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c138:;
  /* 0061c138 mov eax, 0x65a0d8 */ { eax = (u32)(0x65a0d8u); }
  /* 0061c13d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c150(CPU *c) {
  NATIVE_HOOK(0x61c150u) REGS; LOADALL;
L_0061c150:;
  /* 0061c150 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c153 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c156 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c15b(CPU *c) {
  NATIVE_HOOK(0x61c15bu) REGS; LOADALL;
L_0061c15b:;
  /* 0061c15b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c15e add ecx, 0x24 */ { u32 a_ = ecx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c161 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c166(CPU *c) {
  NATIVE_HOOK(0x61c166u) REGS; LOADALL;
  goto L_0061c166;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c166:;
  /* 0061c166 mov eax, 0x65a104 */ { eax = (u32)(0x65a104u); }
  /* 0061c16b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c170(CPU *c) {
  NATIVE_HOOK(0x61c170u) REGS; LOADALL;
L_0061c170:;
  /* 0061c170 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c173 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c176 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c17b(CPU *c) {
  NATIVE_HOOK(0x61c17bu) REGS; LOADALL;
L_0061c17b:;
  /* 0061c17b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c17e add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c181 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061c186(CPU *c) {
  NATIVE_HOOK(0x61c186u) REGS; LOADALL;
  goto L_0061c186;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_0061c186:;
  /* 0061c186 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c189 add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c18c jmp 0x519190 */ goto L_00519190;
}

void F_0061c191(CPU *c) {
  NATIVE_HOOK(0x61c191u) REGS; LOADALL;
  goto L_0061c191;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c191:;
  /* 0061c191 mov eax, 0x65a138 */ { eax = (u32)(0x65a138u); }
  /* 0061c196 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c1a0(CPU *c) {
  NATIVE_HOOK(0x61c1a0u) REGS; LOADALL;
L_0061c1a0:;
  /* 0061c1a0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c1a3 add ecx, 0x1c */ { u32 a_ = ecx, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c1a6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c1ab(CPU *c) {
  NATIVE_HOOK(0x61c1abu) REGS; LOADALL;
  goto L_0061c1ab;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c1ab:;
  /* 0061c1ab mov eax, 0x65a1ac */ { eax = (u32)(0x65a1acu); }
  /* 0061c1b0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c1c0(CPU *c) {
  NATIVE_HOOK(0x61c1c0u) REGS; LOADALL;
L_0061c1c0:;
  /* 0061c1c0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c1c3 add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c1c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c1cb(CPU *c) {
  NATIVE_HOOK(0x61c1cbu) REGS; LOADALL;
L_0061c1cb:;
  /* 0061c1cb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c1ce add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c1d1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c1d6(CPU *c) {
  NATIVE_HOOK(0x61c1d6u) REGS; LOADALL;
  goto L_0061c1d6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c1d6:;
  /* 0061c1d6 mov eax, 0x65a1d8 */ { eax = (u32)(0x65a1d8u); }
  /* 0061c1db jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c1e0(CPU *c) {
  NATIVE_HOOK(0x61c1e0u) REGS; LOADALL;
L_0061c1e0:;
  /* 0061c1e0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c1e3 add ecx, 0x24 */ { u32 a_ = ecx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c1e6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c1eb(CPU *c) {
  NATIVE_HOOK(0x61c1ebu) REGS; LOADALL;
L_0061c1eb:;
  /* 0061c1eb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c1ee add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c1f1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c1f6(CPU *c) {
  NATIVE_HOOK(0x61c1f6u) REGS; LOADALL;
  goto L_0061c1f6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c1f6:;
  /* 0061c1f6 mov eax, 0x65a204 */ { eax = (u32)(0x65a204u); }
  /* 0061c1fb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c200(CPU *c) {
  NATIVE_HOOK(0x61c200u) REGS; LOADALL;
L_0061c200:;
  /* 0061c200 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c203 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c206 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c20b(CPU *c) {
  NATIVE_HOOK(0x61c20bu) REGS; LOADALL;
L_0061c20b:;
  /* 0061c20b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c20e add ecx, 0x24 */ { u32 a_ = ecx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c211 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c216(CPU *c) {
  NATIVE_HOOK(0x61c216u) REGS; LOADALL;
L_0061c216:;
  /* 0061c216 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c219 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c21c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c221(CPU *c) {
  NATIVE_HOOK(0x61c221u) REGS; LOADALL;
  goto L_0061c221;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c221:;
  /* 0061c221 mov eax, 0x65a280 */ { eax = (u32)(0x65a280u); }
  /* 0061c226 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c230(CPU *c) {
  NATIVE_HOOK(0x61c230u) REGS; LOADALL;
L_0061c230:;
  /* 0061c230 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061c233 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c234 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c237 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c238 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c23du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c238u); RETCHK(0x61c23du, 0x61c238u); LOADALL;
  /* 0061c23d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c240 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c241(CPU *c) {
  NATIVE_HOOK(0x61c241u) REGS; LOADALL;
  goto L_0061c241;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c241:;
  /* 0061c241 mov eax, 0x65a320 */ { eax = (u32)(0x65a320u); }
  /* 0061c246 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c250(CPU *c) {
  NATIVE_HOOK(0x61c250u) REGS; LOADALL;
L_0061c250:;
  /* 0061c250 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0061c253 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c254 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061c257 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c258 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c25du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c258u); RETCHK(0x61c25du, 0x61c258u); LOADALL;
  /* 0061c25d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c260 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c261(CPU *c) {
  NATIVE_HOOK(0x61c261u) REGS; LOADALL;
  goto L_0061c261;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c261:;
  /* 0061c261 mov eax, 0x65a39c */ { eax = (u32)(0x65a39cu); }
  /* 0061c266 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c270(CPU *c) {
  NATIVE_HOOK(0x61c270u) REGS; LOADALL;
L_0061c270:;
  /* 0061c270 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061c273 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c274 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061c277 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c278 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c27du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c278u); RETCHK(0x61c27du, 0x61c278u); LOADALL;
  /* 0061c27d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c280 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c281(CPU *c) {
  NATIVE_HOOK(0x61c281u) REGS; LOADALL;
  goto L_0061c281;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c281:;
  /* 0061c281 mov eax, 0x65a3f4 */ { eax = (u32)(0x65a3f4u); }
  /* 0061c286 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c290(CPU *c) {
  NATIVE_HOOK(0x61c290u) REGS; LOADALL;
  goto L_0061c290;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c290:;
  /* 0061c290 mov eax, 0x65a58c */ { eax = (u32)(0x65a58cu); }
  /* 0061c295 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c2a0(CPU *c) {
  NATIVE_HOOK(0x61c2a0u) REGS; LOADALL;
L_0061c2a0:;
  /* 0061c2a0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061c2a3 add ecx, 0x18 */ { u32 a_ = ecx, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c2a6 jmp 0x403260 */ SAVEALL; F_00403260(c); return;
}

void F_0061c2ab(CPU *c) {
  NATIVE_HOOK(0x61c2abu) REGS; LOADALL;
  goto L_0061c2ab;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c2ab:;
  /* 0061c2ab mov eax, 0x65a5f8 */ { eax = (u32)(0x65a5f8u); }
  /* 0061c2b0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c2c0(CPU *c) {
  NATIVE_HOOK(0x61c2c0u) REGS; LOADALL;
L_0061c2c0:;
  /* 0061c2c0 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061c2c3 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061c2c8(CPU *c) {
  NATIVE_HOOK(0x61c2c8u) REGS; LOADALL;
L_0061c2c8:;
  /* 0061c2c8 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061c2cb add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c2ce jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061c2d3(CPU *c) {
  NATIVE_HOOK(0x61c2d3u) REGS; LOADALL;
L_0061c2d3:;
  /* 0061c2d3 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061c2d6 add esi, 0xc20 */ { u32 a_ = esi, b_ = 0xc20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c2dc jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061c2e1(CPU *c) {
  NATIVE_HOOK(0x61c2e1u) REGS; LOADALL;
L_0061c2e1:;
  /* 0061c2e1 push 0x401760 */ { u32 v_ = 0x401760u; esp -= 4; M32(esp) = v_; }
  /* 0061c2e6 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0061c2e8 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0061c2ea mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061c2ed add eax, 0xccc */ { u32 a_ = eax, b_ = 0xcccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061c2f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c2f3 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61c2f8u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61c2f3u); RETCHK(0x61c2f8u, 0x61c2f3u); LOADALL;
  /* 0061c2f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c2f9(CPU *c) {
  NATIVE_HOOK(0x61c2f9u) REGS; LOADALL;
L_0061c2f9:;
  /* 0061c2f9 push 0x403260 */ { u32 v_ = 0x403260u; esp -= 4; M32(esp) = v_; }
  /* 0061c2fe push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0061c300 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0061c302 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061c305 add eax, 0xd58 */ { u32 a_ = eax, b_ = 0xd58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061c30a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c30b call 0x5fe890 */ esp -= 4; M32(esp) = 0x61c310u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61c30bu); RETCHK(0x61c310u, 0x61c30bu); LOADALL;
  /* 0061c310 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c311(CPU *c) {
  NATIVE_HOOK(0x61c311u) REGS; LOADALL;
L_0061c311:;
  /* 0061c311 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061c314 add ecx, 0xdec */ { u32 a_ = ecx, b_ = 0xdecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c31a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c31f(CPU *c) {
  NATIVE_HOOK(0x61c31fu) REGS; LOADALL;
L_0061c31f:;
  /* 0061c31f push 0x4017d0 */ { u32 v_ = 0x4017d0u; esp -= 4; M32(esp) = v_; }
  /* 0061c324 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0061c326 push 0x68 */ { u32 v_ = 0x68u; esp -= 4; M32(esp) = v_; }
  /* 0061c328 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061c32b add eax, 0xe08 */ { u32 a_ = eax, b_ = 0xe08u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061c330 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c331 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61c336u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61c331u); RETCHK(0x61c336u, 0x61c331u); LOADALL;
  /* 0061c336 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c337(CPU *c) {
  NATIVE_HOOK(0x61c337u) REGS; LOADALL;
L_0061c337:;
  /* 0061c337 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061c33a add ecx, 0x1150 */ { u32 a_ = ecx, b_ = 0x1150u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c340 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c345(CPU *c) {
  NATIVE_HOOK(0x61c345u) REGS; LOADALL;
L_0061c345:;
  /* 0061c345 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061c348 add esi, 0x1170 */ { u32 a_ = esi, b_ = 0x1170u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c34e jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061c353(CPU *c) {
  NATIVE_HOOK(0x61c353u) REGS; LOADALL;
  goto L_0061c353;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c353:;
  /* 0061c353 mov eax, 0x65a660 */ { eax = (u32)(0x65a660u); }
  /* 0061c358 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c360(CPU *c) {
  NATIVE_HOOK(0x61c360u) REGS; LOADALL;
L_0061c360:;
  /* 0061c360 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061c363 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c364 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061c367 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c368 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c36du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c368u); RETCHK(0x61c36du, 0x61c368u); LOADALL;
  /* 0061c36d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c370 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c371(CPU *c) {
  NATIVE_HOOK(0x61c371u) REGS; LOADALL;
  goto L_0061c371;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c371:;
  /* 0061c371 mov eax, 0x65a6b8 */ { eax = (u32)(0x65a6b8u); }
  /* 0061c376 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c380(CPU *c) {
  NATIVE_HOOK(0x61c380u) REGS; LOADALL;
L_0061c380:;
  /* 0061c380 lea esi, [ebp - 0x3c] */ esi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0061c383 jmp 0x565a80 */ SAVEALL; F_00565a80(c); return;
}

void F_0061c388(CPU *c) {
  NATIVE_HOOK(0x61c388u) REGS; LOADALL;
  goto L_0061c388;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c388:;
  /* 0061c388 mov eax, 0x65a700 */ { eax = (u32)(0x65a700u); }
  /* 0061c38d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c3a0(CPU *c) {
  NATIVE_HOOK(0x61c3a0u) REGS; LOADALL;
L_0061c3a0:;
  /* 0061c3a0 lea esi, [ebp - 0x58] */ esi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0061c3a3 jmp 0x565a80 */ SAVEALL; F_00565a80(c); return;
}

void F_0061c3a8(CPU *c) {
  NATIVE_HOOK(0x61c3a8u) REGS; LOADALL;
L_0061c3a8:;
  /* 0061c3a8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061c3ab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c3b0(CPU *c) {
  NATIVE_HOOK(0x61c3b0u) REGS; LOADALL;
  goto L_0061c3b0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c3b0:;
  /* 0061c3b0 mov eax, 0x65a774 */ { eax = (u32)(0x65a774u); }
  /* 0061c3b5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c3c0(CPU *c) {
  NATIVE_HOOK(0x61c3c0u) REGS; LOADALL;
  goto L_0061c3c0;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061c3c0:;
  /* 0061c3c0 lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0061c3c3 jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061c3c8(CPU *c) {
  NATIVE_HOOK(0x61c3c8u) REGS; LOADALL;
  goto L_0061c3c8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c3c8:;
  /* 0061c3c8 mov eax, 0x65a828 */ { eax = (u32)(0x65a828u); }
  /* 0061c3cd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c3e0(CPU *c) {
  NATIVE_HOOK(0x61c3e0u) REGS; LOADALL;
L_0061c3e0:;
  /* 0061c3e0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061c3e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c3e4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61c3e9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61c3e4u); RETCHK(0x61c3e9u, 0x61c3e4u); LOADALL;
  /* 0061c3e9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061c3ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c3eb(CPU *c) {
  NATIVE_HOOK(0x61c3ebu) REGS; LOADALL;
L_0061c3eb:;
  /* 0061c3eb mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061c3ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c3ef call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61c3f4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61c3efu); RETCHK(0x61c3f4u, 0x61c3efu); LOADALL;
  /* 0061c3f4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061c3f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c3f6(CPU *c) {
  NATIVE_HOOK(0x61c3f6u) REGS; LOADALL;
  goto L_0061c3f6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c3f6:;
  /* 0061c3f6 mov eax, 0x65a854 */ { eax = (u32)(0x65a854u); }
  /* 0061c3fb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c400(CPU *c) {
  NATIVE_HOOK(0x61c400u) REGS; LOADALL;
  goto L_0061c400;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061c400:;
  /* 0061c400 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 0061c403 jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061c408(CPU *c) {
  NATIVE_HOOK(0x61c408u) REGS; LOADALL;
  goto L_0061c408;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c408:;
  /* 0061c408 mov eax, 0x65a878 */ { eax = (u32)(0x65a878u); }
  /* 0061c40d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c420(CPU *c) {
  NATIVE_HOOK(0x61c420u) REGS; LOADALL;
  goto L_0061c420;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061c420:;
  /* 0061c420 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0061c423 jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061c428(CPU *c) {
  NATIVE_HOOK(0x61c428u) REGS; LOADALL;
  goto L_0061c428;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061c428:;
  /* 0061c428 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0061c42b jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061c430(CPU *c) {
  NATIVE_HOOK(0x61c430u) REGS; LOADALL;
  goto L_0061c430;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c430:;
  /* 0061c430 mov eax, 0x65a8a4 */ { eax = (u32)(0x65a8a4u); }
  /* 0061c435 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c440(CPU *c) {
  NATIVE_HOOK(0x61c440u) REGS; LOADALL;
L_0061c440:;
  /* 0061c440 lea ecx, [ebp - 0x49c] */ ecx = (u32)((u32)(ebp + 0xfffffb64u));
  /* 0061c446 jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061c44b(CPU *c) {
  NATIVE_HOOK(0x61c44bu) REGS; LOADALL;
L_0061c44b:;
  /* 0061c44b lea ecx, [ebp - 0x4b4] */ ecx = (u32)((u32)(ebp + 0xfffffb4cu));
  /* 0061c451 jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061c456(CPU *c) {
  NATIVE_HOOK(0x61c456u) REGS; LOADALL;
L_0061c456:;
  /* 0061c456 lea ecx, [ebp - 0x4a8] */ ecx = (u32)((u32)(ebp + 0xfffffb58u));
  /* 0061c45c jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061c461(CPU *c) {
  NATIVE_HOOK(0x61c461u) REGS; LOADALL;
  goto L_0061c461;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c461:;
  /* 0061c461 mov eax, 0x65a9c0 */ { eax = (u32)(0x65a9c0u); }
  /* 0061c466 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c470(CPU *c) {
  NATIVE_HOOK(0x61c470u) REGS; LOADALL;
  goto L_0061c470;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c470:;
  /* 0061c470 mov eax, 0x65abbc */ { eax = (u32)(0x65abbcu); }
  /* 0061c475 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c480(CPU *c) {
  NATIVE_HOOK(0x61c480u) REGS; LOADALL;
L_0061c480:;
  /* 0061c480 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c483 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c486 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c48b(CPU *c) {
  NATIVE_HOOK(0x61c48bu) REGS; LOADALL;
L_0061c48b:;
  /* 0061c48b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c48e add ecx, 0x24 */ { u32 a_ = ecx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c491 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c496(CPU *c) {
  NATIVE_HOOK(0x61c496u) REGS; LOADALL;
L_0061c496:;
  /* 0061c496 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c499 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c49c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c4a1(CPU *c) {
  NATIVE_HOOK(0x61c4a1u) REGS; LOADALL;
L_0061c4a1:;
  /* 0061c4a1 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c4a4 add esi, 0x8c */ { u32 a_ = esi, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c4aa jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061c4af(CPU *c) {
  NATIVE_HOOK(0x61c4afu) REGS; LOADALL;
L_0061c4af:;
  /* 0061c4af mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061c4b2 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061c4b7(CPU *c) {
  NATIVE_HOOK(0x61c4b7u) REGS; LOADALL;
  goto L_0061c4b7;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c4b7:;
  /* 0061c4b7 mov eax, 0x65ad74 */ { eax = (u32)(0x65ad74u); }
  /* 0061c4bc jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c4d0(CPU *c) {
  NATIVE_HOOK(0x61c4d0u) REGS; LOADALL;
L_0061c4d0:;
  /* 0061c4d0 lea ecx, [ebp - 0x1fc] */ ecx = (u32)((u32)(ebp + 0xfffffe04u));
  /* 0061c4d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c4db(CPU *c) {
  NATIVE_HOOK(0x61c4dbu) REGS; LOADALL;
L_0061c4db:;
  /* 0061c4db lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061c4de jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c4e3(CPU *c) {
  NATIVE_HOOK(0x61c4e3u) REGS; LOADALL;
L_0061c4e3:;
  /* 0061c4e3 lea ecx, [ebp - 0x1c4] */ ecx = (u32)((u32)(ebp + 0xfffffe3cu));
  /* 0061c4e9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c4ee(CPU *c) {
  NATIVE_HOOK(0x61c4eeu) REGS; LOADALL;
L_0061c4ee:;
  /* 0061c4ee lea ecx, [ebp - 0x1e0] */ ecx = (u32)((u32)(ebp + 0xfffffe20u));
  /* 0061c4f4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c4f9(CPU *c) {
  NATIVE_HOOK(0x61c4f9u) REGS; LOADALL;
L_0061c4f9:;
  /* 0061c4f9 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061c4fc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c501(CPU *c) {
  NATIVE_HOOK(0x61c501u) REGS; LOADALL;
  goto L_0061c501;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c501:;
  /* 0061c501 mov eax, 0x65adc8 */ { eax = (u32)(0x65adc8u); }
  /* 0061c506 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c510(CPU *c) {
  NATIVE_HOOK(0x61c510u) REGS; LOADALL;
L_0061c510:;
  /* 0061c510 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0061c516 jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061c51b(CPU *c) {
  NATIVE_HOOK(0x61c51bu) REGS; LOADALL;
L_0061c51b:;
  /* 0061c51b lea ecx, [ebp - 0x138] */ ecx = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0061c521 jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061c526(CPU *c) {
  NATIVE_HOOK(0x61c526u) REGS; LOADALL;
L_0061c526:;
  /* 0061c526 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061c529 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c52e(CPU *c) {
  NATIVE_HOOK(0x61c52eu) REGS; LOADALL;
  goto L_0061c52e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c52e:;
  /* 0061c52e mov eax, 0x65ae44 */ { eax = (u32)(0x65ae44u); }
  /* 0061c533 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c540(CPU *c) {
  NATIVE_HOOK(0x61c540u) REGS; LOADALL;
L_0061c540:;
  /* 0061c540 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061c543 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c548(CPU *c) {
  NATIVE_HOOK(0x61c548u) REGS; LOADALL;
L_0061c548:;
  /* 0061c548 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061c54b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c550(CPU *c) {
  NATIVE_HOOK(0x61c550u) REGS; LOADALL;
L_0061c550:;
  /* 0061c550 lea ecx, [ebp - 0x2a4] */ ecx = (u32)((u32)(ebp + 0xfffffd5cu));
  /* 0061c556 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c55b(CPU *c) {
  NATIVE_HOOK(0x61c55bu) REGS; LOADALL;
L_0061c55b:;
  /* 0061c55b lea ecx, [ebp - 0x2a4] */ ecx = (u32)((u32)(ebp + 0xfffffd5cu));
  /* 0061c561 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c566(CPU *c) {
  NATIVE_HOOK(0x61c566u) REGS; LOADALL;
  goto L_0061c566;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c566:;
  /* 0061c566 mov eax, 0x65ae80 */ { eax = (u32)(0x65ae80u); }
  /* 0061c56b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c570(CPU *c) {
  NATIVE_HOOK(0x61c570u) REGS; LOADALL;
  goto L_0061c570;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c570:;
  /* 0061c570 mov eax, 0x65af4c */ { eax = (u32)(0x65af4cu); }
  /* 0061c575 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c580(CPU *c) {
  NATIVE_HOOK(0x61c580u) REGS; LOADALL;
L_0061c580:;
  /* 0061c580 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061c583 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c584 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061c587 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c588 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c58du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c588u); RETCHK(0x61c58du, 0x61c588u); LOADALL;
  /* 0061c58d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c590 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c591(CPU *c) {
  NATIVE_HOOK(0x61c591u) REGS; LOADALL;
  goto L_0061c591;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c591:;
  /* 0061c591 mov eax, 0x65b084 */ { eax = (u32)(0x65b084u); }
  /* 0061c596 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c5a0(CPU *c) {
  NATIVE_HOOK(0x61c5a0u) REGS; LOADALL;
  goto L_0061c5a0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c5a0:;
  /* 0061c5a0 mov eax, 0x65b198 */ { eax = (u32)(0x65b198u); }
  /* 0061c5a5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c5b0(CPU *c) {
  NATIVE_HOOK(0x61c5b0u) REGS; LOADALL;
L_0061c5b0:;
  /* 0061c5b0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c5b3 jmp 0x505270 */ SAVEALL; F_00505270(c); return;
}

void F_0061c5b8(CPU *c) {
  NATIVE_HOOK(0x61c5b8u) REGS; LOADALL;
  goto L_0061c5b8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c5b8:;
  /* 0061c5b8 mov eax, 0x65b1e0 */ { eax = (u32)(0x65b1e0u); }
  /* 0061c5bd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c5d0(CPU *c) {
  NATIVE_HOOK(0x61c5d0u) REGS; LOADALL;
L_0061c5d0:;
  /* 0061c5d0 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 0061c5d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c5d8(CPU *c) {
  NATIVE_HOOK(0x61c5d8u) REGS; LOADALL;
L_0061c5d8:;
  /* 0061c5d8 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0061c5db jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c5e0(CPU *c) {
  NATIVE_HOOK(0x61c5e0u) REGS; LOADALL;
L_0061c5e0:;
  /* 0061c5e0 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 0061c5e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c5e8(CPU *c) {
  NATIVE_HOOK(0x61c5e8u) REGS; LOADALL;
L_0061c5e8:;
  /* 0061c5e8 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0061c5eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c5f0(CPU *c) {
  NATIVE_HOOK(0x61c5f0u) REGS; LOADALL;
L_0061c5f0:;
  /* 0061c5f0 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0061c5f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c5f8(CPU *c) {
  NATIVE_HOOK(0x61c5f8u) REGS; LOADALL;
L_0061c5f8:;
  /* 0061c5f8 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0061c5fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c600(CPU *c) {
  NATIVE_HOOK(0x61c600u) REGS; LOADALL;
L_0061c600:;
  /* 0061c600 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0061c606 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c60b(CPU *c) {
  NATIVE_HOOK(0x61c60bu) REGS; LOADALL;
  goto L_0061c60b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c60b:;
  /* 0061c60b mov eax, 0x65b2e8 */ { eax = (u32)(0x65b2e8u); }
  /* 0061c610 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c620(CPU *c) {
  NATIVE_HOOK(0x61c620u) REGS; LOADALL;
L_0061c620:;
  /* 0061c620 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061c623 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c624 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0061c627 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0061c628 call 0x459c10 */ esp -= 4; M32(esp) = 0x61c62du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x61c628u); RETCHK(0x61c62du, 0x61c628u); LOADALL;
  /* 0061c62d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061c630 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c631(CPU *c) {
  NATIVE_HOOK(0x61c631u) REGS; LOADALL;
  goto L_0061c631;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c631:;
  /* 0061c631 mov eax, 0x65b3ac */ { eax = (u32)(0x65b3acu); }
  /* 0061c636 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c640(CPU *c) {
  NATIVE_HOOK(0x61c640u) REGS; LOADALL;
L_0061c640:;
  /* 0061c640 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c643 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c646 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061c64b(CPU *c) {
  NATIVE_HOOK(0x61c64bu) REGS; LOADALL;
L_0061c64b:;
  /* 0061c64b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c64e add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c651 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061c656(CPU *c) {
  NATIVE_HOOK(0x61c656u) REGS; LOADALL;
L_0061c656:;
  /* 0061c656 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061c659 add ecx, 0x54 */ { u32 a_ = ecx, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061c65c jmp 0x530ae0 */ SAVEALL; F_00530ae0(c); return;
}

void F_0061c661(CPU *c) {
  NATIVE_HOOK(0x61c661u) REGS; LOADALL;
L_0061c661:;
  /* 0061c661 push 0x530b90 */ { u32 v_ = 0x530b90u; esp -= 4; M32(esp) = v_; }
  /* 0061c666 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0061c668 push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 0061c66a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061c66d add eax, 0xe8 */ { u32 a_ = eax, b_ = 0xe8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061c672 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061c673 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61c678u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61c673u); RETCHK(0x61c678u, 0x61c673u); LOADALL;
  /* 0061c678 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061c679(CPU *c) {
  NATIVE_HOOK(0x61c679u) REGS; LOADALL;
L_0061c679:;
  /* 0061c679 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061c67c add esi, 0x3b0 */ { u32 a_ = esi, b_ = 0x3b0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061c682 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061c687(CPU *c) {
  NATIVE_HOOK(0x61c687u) REGS; LOADALL;
  goto L_0061c687;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c687:;
  /* 0061c687 mov eax, 0x65b3f0 */ { eax = (u32)(0x65b3f0u); }
  /* 0061c68c jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c6a0(CPU *c) {
  NATIVE_HOOK(0x61c6a0u) REGS; LOADALL;
L_0061c6a0:;
  /* 0061c6a0 lea ecx, [ebp - 0x25c] */ ecx = (u32)((u32)(ebp + 0xfffffda4u));
  /* 0061c6a6 jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_0061c6ab(CPU *c) {
  NATIVE_HOOK(0x61c6abu) REGS; LOADALL;
  goto L_0061c6ab;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c6ab:;
  /* 0061c6ab mov eax, 0x65b414 */ { eax = (u32)(0x65b414u); }
  /* 0061c6b0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c6c0(CPU *c) {
  NATIVE_HOOK(0x61c6c0u) REGS; LOADALL;
  goto L_0061c6c0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c6c0:;
  /* 0061c6c0 mov eax, 0x65b4e0 */ { eax = (u32)(0x65b4e0u); }
  /* 0061c6c5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c6d0(CPU *c) {
  NATIVE_HOOK(0x61c6d0u) REGS; LOADALL;
L_0061c6d0:;
  /* 0061c6d0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061c6d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c6d8(CPU *c) {
  NATIVE_HOOK(0x61c6d8u) REGS; LOADALL;
L_0061c6d8:;
  /* 0061c6d8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061c6db jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061c6e0(CPU *c) {
  NATIVE_HOOK(0x61c6e0u) REGS; LOADALL;
  goto L_0061c6e0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c6e0:;
  /* 0061c6e0 mov eax, 0x65b554 */ { eax = (u32)(0x65b554u); }
  /* 0061c6e5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061c6f0(CPU *c) {
  NATIVE_HOOK(0x61c6f0u) REGS; LOADALL;
L_0061c6f0:;
  /* 0061c6f0 lea ecx, [ebp + 0x1c] */ ecx = (u32)((u32)(ebp + 0x1cu));
  /* 0061c6f3 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061c6f8(CPU *c) {
  NATIVE_HOOK(0x61c6f8u) REGS; LOADALL;
  goto L_0061c6f8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061c6f8:;
  /* 0061c6f8 mov eax, 0x65b5a4 */ { eax = (u32)(0x65b5a4u); }
  /* 0061c6fd jmp 0x5fee2a */ goto L_005fee2a;
}

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
