#include "funcs.h"

void F_0061aed6(CPU *c) {
  NATIVE_HOOK(0x61aed6u) REGS; LOADALL;
L_0061aed6:;
  /* 0061aed6 jmp dword ptr [0x62e42c] */ { SAVEALL; rt_throw(c, 0x62e42cu); }
}

void F_0061aedc(CPU *c) {
  NATIVE_HOOK(0x61aedcu) REGS; LOADALL;
L_0061aedc:;
  /* 0061aedc jmp dword ptr [0x62e430] */ { const u32 m_ = (u32)(0x62e430u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061aee2(CPU *c) {
  NATIVE_HOOK(0x61aee2u) REGS; LOADALL;
L_0061aee2:;
  /* 0061aee2 jmp dword ptr [0x62e434] */ { const u32 m_ = (u32)(0x62e434u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061aee8(CPU *c) {
  NATIVE_HOOK(0x61aee8u) REGS; LOADALL;
L_0061aee8:;
  /* 0061aee8 jmp dword ptr [0x62e438] */ { const u32 m_ = (u32)(0x62e438u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061aeee(CPU *c) {
  NATIVE_HOOK(0x61aeeeu) REGS; LOADALL;
L_0061aeee:;
  /* 0061aeee jmp dword ptr [0x62e43c] */ { const u32 m_ = (u32)(0x62e43cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061aef4(CPU *c) {
  NATIVE_HOOK(0x61aef4u) REGS; LOADALL;
L_0061aef4:;
  /* 0061aef4 jmp dword ptr [0x62e440] */ { const u32 m_ = (u32)(0x62e440u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061aefa(CPU *c) {
  NATIVE_HOOK(0x61aefau) REGS; LOADALL;
L_0061aefa:;
  /* 0061aefa jmp dword ptr [0x62e444] */ { const u32 m_ = (u32)(0x62e444u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af1d(CPU *c) {
  NATIVE_HOOK(0x61af1du) REGS; LOADALL;
L_0061af1d:;
  /* 0061af1d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061af1f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0061af20 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061af21(CPU *c) {
  NATIVE_HOOK(0x61af21u) REGS; LOADALL;
L_0061af21:;
  /* 0061af21 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 0061af24 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0061af28 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0061af2a call dword ptr [0x62e144] */ { const u32 m_ = (u32)(0x62e144u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61af30u; SAVEALL; call_ind(c, t_); RETCHK(0x61af30u, 0x61af2au); LOADALL; }
}

void F_0061af31(CPU *c) {
  NATIVE_HOOK(0x61af31u) REGS; LOADALL;
  goto L_0061af31;
L_0061af00:;
  /* 0061af00 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0061af02 push 0x63e710 */ { u32 v_ = 0x63e710u; esp -= 4; M32(esp) = v_; }
  /* 0061af07 call 0x5fee88 */ esp -= 4; M32(esp) = 0x61af0cu; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x61af07u); RETCHK(0x61af0cu, 0x61af07u); LOADALL;
  /* 0061af0c and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0061af10 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0061af12 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0061af14 call 0x61b14c */ esp -= 4; M32(esp) = 0x61af19u; SAVEALL; F_0061b14c(c); ABI_CHECK(0x61b14cu, 0x61af14u); RETCHK(0x61af19u, 0x61af14u); LOADALL;
  /* 0061af19 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061af1a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061af1b jmp 0x61af24 */ goto L_0061af24;
L_0061af24:;
  /* 0061af24 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0061af28 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0061af2a call dword ptr [0x62e144] */ { const u32 m_ = (u32)(0x62e144u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61af30u; SAVEALL; call_ind(c, t_); RETCHK(0x61af30u, 0x61af2au); LOADALL; }
L_0061af31:;
  /* 0061af31 cmp ecx, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061af37 jne 0x61af3a */ if (!ZF_) goto L_0061af3a;
  /* 0061af39 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061af3a:;
  /* 0061af3a jmp 0x61af00 */ goto L_0061af00;
}

void F_0061af46(CPU *c) {
  NATIVE_HOOK(0x61af46u) REGS; LOADALL;
L_0061af46:;
  /* 0061af46 jmp dword ptr [0x62e44c] */ { const u32 m_ = (u32)(0x62e44cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af4c(CPU *c) {
  NATIVE_HOOK(0x61af4cu) REGS; LOADALL;
L_0061af4c:;
  /* 0061af4c jmp dword ptr [0x62e424] */ { const u32 m_ = (u32)(0x62e424u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af52(CPU *c) {
  NATIVE_HOOK(0x61af52u) REGS; LOADALL;
L_0061af52:;
  /* 0061af52 jmp dword ptr [0x62e420] */ { const u32 m_ = (u32)(0x62e420u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af58(CPU *c) {
  NATIVE_HOOK(0x61af58u) REGS; LOADALL;
L_0061af58:;
  /* 0061af58 jmp dword ptr [0x62e41c] */ { const u32 m_ = (u32)(0x62e41cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af5e(CPU *c) {
  NATIVE_HOOK(0x61af5eu) REGS; LOADALL;
L_0061af5e:;
  /* 0061af5e jmp dword ptr [0x62e418] */ { const u32 m_ = (u32)(0x62e418u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af64(CPU *c) {
  NATIVE_HOOK(0x61af64u) REGS; LOADALL;
L_0061af64:;
  /* 0061af64 jmp dword ptr [0x62e414] */ { const u32 m_ = (u32)(0x62e414u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af6a(CPU *c) {
  NATIVE_HOOK(0x61af6au) REGS; LOADALL;
L_0061af6a:;
  /* 0061af6a jmp dword ptr [0x62e410] */ { const u32 m_ = (u32)(0x62e410u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af76(CPU *c) {
  NATIVE_HOOK(0x61af76u) REGS; LOADALL;
L_0061af76:;
  /* 0061af76 jmp dword ptr [0x62e408] */ { const u32 m_ = (u32)(0x62e408u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af7c(CPU *c) {
  NATIVE_HOOK(0x61af7cu) REGS; LOADALL;
L_0061af7c:;
  /* 0061af7c jmp dword ptr [0x62e404] */ { const u32 m_ = (u32)(0x62e404u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af82(CPU *c) {
  NATIVE_HOOK(0x61af82u) REGS; LOADALL;
L_0061af82:;
  /* 0061af82 jmp dword ptr [0x62e400] */ { const u32 m_ = (u32)(0x62e400u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af88(CPU *c) {
  NATIVE_HOOK(0x61af88u) REGS; LOADALL;
L_0061af88:;
  /* 0061af88 jmp dword ptr [0x62e3fc] */ { const u32 m_ = (u32)(0x62e3fcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061af8e(CPU *c) {
  NATIVE_HOOK(0x61af8eu) REGS; LOADALL;
L_0061af8e:;
  /* 0061af8e jmp dword ptr [0x62e3f8] */ { SAVEALL; rt_longjmp(c, M32(esp + 4), M32(esp + 8)); }
}

void F_0061b0e5(CPU *c) {
  NATIVE_HOOK(0x61b0e5u) REGS; LOADALL;
L_0061b0e5:;
  /* 0061b0e5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0061b0e6 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0061b0e8 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061b0eb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0061b0f0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061b0f2 je 0x61b0fb */ if (ZF_) goto L_0061b0fb;
  /* 0061b0f4 cmp eax, 0xbb40e64e */ { u32 a_ = eax, b_ = 0xbb40e64eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0061b0f9 jne 0x61b149 */ if (!ZF_) goto L_0061b149;
L_0061b0fb:;
  /* 0061b0fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0061b0fc lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0061b0ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061b100 call dword ptr [0x62e150] */ { const u32 m_ = (u32)(0x62e150u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61b106u; SAVEALL; call_ind(c, t_); RETCHK(0x61b106u, 0x61b100u); LOADALL; }
  /* 0061b106 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0061b109 xor esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0061b10c call dword ptr [0x62e14c] */ { const u32 m_ = (u32)(0x62e14cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61b112u; SAVEALL; call_ind(c, t_); RETCHK(0x61b112u, 0x61b10cu); LOADALL; }
  /* 0061b112 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0061b114 call dword ptr [0x62e148] */ { const u32 m_ = (u32)(0x62e148u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61b11au; SAVEALL; call_ind(c, t_); RETCHK(0x61b11au, 0x61b114u); LOADALL; }
  /* 0061b11a xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0061b11c call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61b122u; SAVEALL; call_ind(c, t_); RETCHK(0x61b122u, 0x61b11cu); LOADALL; }
  /* 0061b122 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0061b124 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0061b127 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061b128 call dword ptr [0x62e204] */ { const u32 m_ = (u32)(0x62e204u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x61b12eu; SAVEALL; call_ind(c, t_); RETCHK(0x61b12eu, 0x61b128u); LOADALL; }
  /* 0061b12e mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 0061b131 xor eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061b134 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0061b136 mov dword ptr [0x683988], esi */ { const u32 m_ = (u32)(0x683988u); M32(m_) = (u32)(esi); }
  /* 0061b13c jne 0x61b148 */ if (!ZF_) goto L_0061b148;
  /* 0061b13e mov dword ptr [0x683988], 0xbb40e64e */ { const u32 m_ = (u32)(0x683988u); M32(m_) = (u32)(0xbb40e64eu); }
L_0061b148:;
  /* 0061b148 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0061b149:;
  /* 0061b149 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0061b14a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061b14c(CPU *c) {
  NATIVE_HOOK(0x61b14cu) REGS; LOADALL;
L_0061b14c:;
  /* 0061b14c jmp dword ptr [0x62e3a4] */ { const u32 m_ = (u32)(0x62e3a4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0061b154(CPU *c) {
  NATIVE_HOOK(0x61b154u) REGS; LOADALL;
L_0061b154:;
  /* 0061b154 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0061b155 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0061b157 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0061b15a and esp, 0xfffffff0 */ { u32 a_ = esp, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 0061b15d fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0061b15f fst dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); }
  /* 0061b163 fistp qword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); M64(m_) = (u64)rt_f2i(c, ST(0), 64, 0); FPOP(); }
  /* 0061b167 fild qword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s64)M64(m_)); }
  /* 0061b16b mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0061b16f mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0061b173 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061b175 je 0x61b1b3 */ if (ZF_) goto L_0061b1b3;
L_0061b177:;
  /* 0061b177 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0061b179 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061b17b jns 0x61b19b */ if (!SF_) goto L_0061b19b;
  /* 0061b17d fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0061b180 mov ecx, dword ptr [esp] */ { const u32 m_ = (u32)(esp); ecx = (u32)(M32(m_)); }
  /* 0061b183 xor ecx, 0x80000000 */ { u32 a_ = ecx, b_ = 0x80000000u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0061b189 add ecx, 0x7fffffff */ { u32 a_ = ecx, b_ = 0x7fffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b18f adc eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0061b192 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061b196 adc edx, 0 */ { u32 a_ = edx, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 0061b199 jmp 0x61b1c7 */ goto L_0061b1c7;
L_0061b19b:;
  /* 0061b19b fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0061b19e mov ecx, dword ptr [esp] */ { const u32 m_ = (u32)(esp); ecx = (u32)(M32(m_)); }
  /* 0061b1a1 add ecx, 0x7fffffff */ { u32 a_ = ecx, b_ = 0x7fffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b1a7 sbb eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0061b1aa mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061b1ae sbb edx, 0 */ { u32 a_ = edx, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 0061b1b1 jmp 0x61b1c7 */ goto L_0061b1c7;
L_0061b1b3:;
  /* 0061b1b3 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0061b1b7 test edx, 0x7fffffff */ { u32 a_ = edx, b_ = 0x7fffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0061b1bd jne 0x61b177 */ if (!ZF_) goto L_0061b177;
  /* 0061b1bf fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0061b1c3 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
L_0061b1c7:;
  /* 0061b1c7 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0061b1c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061b1d0(CPU *c) {
  NATIVE_HOOK(0x61b1d0u) REGS; LOADALL;
  goto L_0061b1d0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b1d0:;
  /* 0061b1d0 mov eax, 0x657834 */ { eax = (u32)(0x657834u); }
  /* 0061b1d5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b1da(CPU *c) {
  NATIVE_HOOK(0x61b1dau) REGS; LOADALL;
L_0061b1da:;
  /* 0061b1da lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061b1dd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b1e2(CPU *c) {
  NATIVE_HOOK(0x61b1e2u) REGS; LOADALL;
  goto L_0061b1e2;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b1e2:;
  /* 0061b1e2 mov eax, 0x65787c */ { eax = (u32)(0x65787cu); }
  /* 0061b1e7 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b1ec(CPU *c) {
  NATIVE_HOOK(0x61b1ecu) REGS; LOADALL;
L_0061b1ec:;
  /* 0061b1ec lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0061b1ef jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b1f4(CPU *c) {
  NATIVE_HOOK(0x61b1f4u) REGS; LOADALL;
L_0061b1f4:;
  /* 0061b1f4 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0061b1f7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b1fc(CPU *c) {
  NATIVE_HOOK(0x61b1fcu) REGS; LOADALL;
L_0061b1fc:;
  /* 0061b1fc lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0061b202 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b207(CPU *c) {
  NATIVE_HOOK(0x61b207u) REGS; LOADALL;
  goto L_0061b207;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b207:;
  /* 0061b207 mov eax, 0x65792c */ { eax = (u32)(0x65792cu); }
  /* 0061b20c jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b211(CPU *c) {
  NATIVE_HOOK(0x61b211u) REGS; LOADALL;
  goto L_0061b211;
L_005fe992:;
  /* 005fe992 jmp dword ptr [0x62e3d8] */ { const u32 m_ = (u32)(0x62e3d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b211:;
  /* 0061b211 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b214 jmp 0x5fe992 */ goto L_005fe992;
}

void F_0061b219(CPU *c) {
  NATIVE_HOOK(0x61b219u) REGS; LOADALL;
  goto L_0061b219;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b219:;
  /* 0061b219 mov eax, 0x657950 */ { eax = (u32)(0x657950u); }
  /* 0061b21e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b223(CPU *c) {
  NATIVE_HOOK(0x61b223u) REGS; LOADALL;
L_0061b223:;
  /* 0061b223 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061b226 jmp 0x4ff800 */ SAVEALL; F_004ff800(c); return;
}

void F_0061b22b(CPU *c) {
  NATIVE_HOOK(0x61b22bu) REGS; LOADALL;
L_0061b22b:;
  /* 0061b22b mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061b22e add ecx, 0x18 */ { u32 a_ = ecx, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b231 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b236(CPU *c) {
  NATIVE_HOOK(0x61b236u) REGS; LOADALL;
L_0061b236:;
  /* 0061b236 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0061b239 jmp 0x601eb4 */ SAVEALL; F_00601eb4(c); return;
}

void F_0061b23e(CPU *c) {
  NATIVE_HOOK(0x61b23eu) REGS; LOADALL;
  goto L_0061b23e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b23e:;
  /* 0061b23e mov eax, 0x657984 */ { eax = (u32)(0x657984u); }
  /* 0061b243 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b248(CPU *c) {
  NATIVE_HOOK(0x61b248u) REGS; LOADALL;
L_0061b248:;
  /* 0061b248 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b24b jmp 0x4ff800 */ SAVEALL; F_004ff800(c); return;
}

void F_0061b250(CPU *c) {
  NATIVE_HOOK(0x61b250u) REGS; LOADALL;
  goto L_0061b250;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b250:;
  /* 0061b250 mov eax, 0x6579a8 */ { eax = (u32)(0x6579a8u); }
  /* 0061b255 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b25a(CPU *c) {
  NATIVE_HOOK(0x61b25au) REGS; LOADALL;
L_0061b25a:;
  /* 0061b25a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b25d jmp 0x601eb4 */ SAVEALL; F_00601eb4(c); return;
}

void F_0061b262(CPU *c) {
  NATIVE_HOOK(0x61b262u) REGS; LOADALL;
L_0061b262:;
  /* 0061b262 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b265 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b268 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b26d(CPU *c) {
  NATIVE_HOOK(0x61b26du) REGS; LOADALL;
L_0061b26d:;
  /* 0061b26d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b270 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b273 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b278(CPU *c) {
  NATIVE_HOOK(0x61b278u) REGS; LOADALL;
L_0061b278:;
  /* 0061b278 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b27b add ecx, 0x3c */ { u32 a_ = ecx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b27e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b283(CPU *c) {
  NATIVE_HOOK(0x61b283u) REGS; LOADALL;
L_0061b283:;
  /* 0061b283 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b286 add ecx, 0x58 */ { u32 a_ = ecx, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b289 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b28e(CPU *c) {
  NATIVE_HOOK(0x61b28eu) REGS; LOADALL;
  goto L_0061b28e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b28e:;
  /* 0061b28e mov eax, 0x6579ec */ { eax = (u32)(0x6579ecu); }
  /* 0061b293 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b298(CPU *c) {
  NATIVE_HOOK(0x61b298u) REGS; LOADALL;
L_0061b298:;
  /* 0061b298 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0061b29b jmp 0x601eb4 */ SAVEALL; F_00601eb4(c); return;
}

void F_0061b2a0(CPU *c) {
  NATIVE_HOOK(0x61b2a0u) REGS; LOADALL;
L_0061b2a0:;
  /* 0061b2a0 push dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0061b2a3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61b2a8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61b2a3u); RETCHK(0x61b2a8u, 0x61b2a3u); LOADALL;
  /* 0061b2a8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061b2a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061b2aa(CPU *c) {
  NATIVE_HOOK(0x61b2aau) REGS; LOADALL;
  goto L_0061b2aa;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b2aa:;
  /* 0061b2aa mov eax, 0x657a18 */ { eax = (u32)(0x657a18u); }
  /* 0061b2af jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b2c0(CPU *c) {
  NATIVE_HOOK(0x61b2c0u) REGS; LOADALL;
  goto L_0061b2c0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b2c0:;
  /* 0061b2c0 mov eax, 0x657a68 */ { eax = (u32)(0x657a68u); }
  /* 0061b2c5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b2d0(CPU *c) {
  NATIVE_HOOK(0x61b2d0u) REGS; LOADALL;
L_0061b2d0:;
  /* 0061b2d0 lea esi, [ebp + 8] */ esi = (u32)((u32)(ebp + 0x8u));
  /* 0061b2d3 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061b2d8(CPU *c) {
  NATIVE_HOOK(0x61b2d8u) REGS; LOADALL;
  goto L_0061b2d8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b2d8:;
  /* 0061b2d8 mov eax, 0x657c38 */ { eax = (u32)(0x657c38u); }
  /* 0061b2dd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b2f0(CPU *c) {
  NATIVE_HOOK(0x61b2f0u) REGS; LOADALL;
L_0061b2f0:;
  /* 0061b2f0 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061b2f3 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061b2f8(CPU *c) {
  NATIVE_HOOK(0x61b2f8u) REGS; LOADALL;
  goto L_0061b2f8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b2f8:;
  /* 0061b2f8 mov eax, 0x657cec */ { eax = (u32)(0x657cecu); }
  /* 0061b2fd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b310(CPU *c) {
  NATIVE_HOOK(0x61b310u) REGS; LOADALL;
L_0061b310:;
  /* 0061b310 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061b313 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061b318(CPU *c) {
  NATIVE_HOOK(0x61b318u) REGS; LOADALL;
  goto L_0061b318;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b318:;
  /* 0061b318 mov eax, 0x657d7c */ { eax = (u32)(0x657d7cu); }
  /* 0061b31d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b330(CPU *c) {
  NATIVE_HOOK(0x61b330u) REGS; LOADALL;
  goto L_0061b330;
L_00560520:;
  /* 00560520 mov dword ptr [ecx], 0x6567fc */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6567fcu); }
  /* 00560526 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b330:;
  /* 0061b330 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b333 jmp 0x560520 */ goto L_00560520;
}

void F_0061b338(CPU *c) {
  NATIVE_HOOK(0x61b338u) REGS; LOADALL;
  goto L_0061b338;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b338:;
  /* 0061b338 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061b33b add eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061b33e jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061b343(CPU *c) {
  NATIVE_HOOK(0x61b343u) REGS; LOADALL;
  goto L_0061b343;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b343:;
  /* 0061b343 mov eax, 0x657dcc */ { eax = (u32)(0x657dccu); }
  /* 0061b348 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b350(CPU *c) {
  NATIVE_HOOK(0x61b350u) REGS; LOADALL;
L_0061b350:;
  /* 0061b350 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b353 jmp 0x4eac50 */ SAVEALL; F_004eac50(c); return;
}

void F_0061b358(CPU *c) {
  NATIVE_HOOK(0x61b358u) REGS; LOADALL;
  goto L_0061b358;
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
L_0061b358:;
  /* 0061b358 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061b35b add eax, 0x6c */ { u32 a_ = eax, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061b35e jmp 0x4d9460 */ goto L_004d9460;
}

void F_0061b363(CPU *c) {
  NATIVE_HOOK(0x61b363u) REGS; LOADALL;
  goto L_0061b363;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b363:;
  /* 0061b363 mov eax, 0x657e88 */ { eax = (u32)(0x657e88u); }
  /* 0061b368 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b370(CPU *c) {
  NATIVE_HOOK(0x61b370u) REGS; LOADALL;
  goto L_0061b370;
L_004fc210:;
  /* 004fc210 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fc212 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc213 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fc218u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fc213u); RETCHK(0x4fc218u, 0x4fc213u); LOADALL;
  /* 004fc218 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 004fc219 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b370:;
  /* 0061b370 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0061b373 jmp 0x4fc210 */ goto L_004fc210;
}

void F_0061b378(CPU *c) {
  NATIVE_HOOK(0x61b378u) REGS; LOADALL;
  goto L_0061b378;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b378:;
  /* 0061b378 mov eax, 0x657f84 */ { eax = (u32)(0x657f84u); }
  /* 0061b37d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b390(CPU *c) {
  NATIVE_HOOK(0x61b390u) REGS; LOADALL;
  goto L_0061b390;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b390:;
  /* 0061b390 mov eax, 0x657ff8 */ { eax = (u32)(0x657ff8u); }
  /* 0061b395 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b3a0(CPU *c) {
  NATIVE_HOOK(0x61b3a0u) REGS; LOADALL;
L_0061b3a0:;
  /* 0061b3a0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b3a3 jmp 0x4ff800 */ SAVEALL; F_004ff800(c); return;
}

void F_0061b3a8(CPU *c) {
  NATIVE_HOOK(0x61b3a8u) REGS; LOADALL;
L_0061b3a8:;
  /* 0061b3a8 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0061b3ab jmp 0x601c31 */ SAVEALL; F_00601c31(c); return;
}

void F_0061b3b0(CPU *c) {
  NATIVE_HOOK(0x61b3b0u) REGS; LOADALL;
  goto L_0061b3b0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b3b0:;
  /* 0061b3b0 mov eax, 0x658024 */ { eax = (u32)(0x658024u); }
  /* 0061b3b5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b3c0(CPU *c) {
  NATIVE_HOOK(0x61b3c0u) REGS; LOADALL;
L_0061b3c0:;
  /* 0061b3c0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b3c3 jmp 0x4ff800 */ SAVEALL; F_004ff800(c); return;
}

void F_0061b3c8(CPU *c) {
  NATIVE_HOOK(0x61b3c8u) REGS; LOADALL;
  goto L_0061b3c8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b3c8:;
  /* 0061b3c8 mov eax, 0x658048 */ { eax = (u32)(0x658048u); }
  /* 0061b3cd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b3e0(CPU *c) {
  NATIVE_HOOK(0x61b3e0u) REGS; LOADALL;
L_0061b3e0:;
  /* 0061b3e0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b3e3 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b3e6 jmp 0x601ee0 */ SAVEALL; F_00601ee0(c); return;
}

void F_0061b3eb(CPU *c) {
  NATIVE_HOOK(0x61b3ebu) REGS; LOADALL;
  goto L_0061b3eb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b3eb:;
  /* 0061b3eb mov eax, 0x6580fc */ { eax = (u32)(0x6580fcu); }
  /* 0061b3f0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b400(CPU *c) {
  NATIVE_HOOK(0x61b400u) REGS; LOADALL;
L_0061b400:;
  /* 0061b400 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0061b403 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061b408(CPU *c) {
  NATIVE_HOOK(0x61b408u) REGS; LOADALL;
  goto L_0061b408;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b408:;
  /* 0061b408 mov eax, 0x658168 */ { eax = (u32)(0x658168u); }
  /* 0061b40d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b420(CPU *c) {
  NATIVE_HOOK(0x61b420u) REGS; LOADALL;
L_0061b420:;
  /* 0061b420 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b423 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_0061b428(CPU *c) {
  NATIVE_HOOK(0x61b428u) REGS; LOADALL;
  goto L_0061b428;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b428:;
  /* 0061b428 mov eax, 0x65818c */ { eax = (u32)(0x65818cu); }
  /* 0061b42d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b440(CPU *c) {
  NATIVE_HOOK(0x61b440u) REGS; LOADALL;
L_0061b440:;
  /* 0061b440 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b443 jmp 0x41cf40 */ SAVEALL; F_0041cf40(c); return;
}

void F_0061b448(CPU *c) {
  NATIVE_HOOK(0x61b448u) REGS; LOADALL;
  goto L_0061b448;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b448:;
  /* 0061b448 mov eax, 0x6581b0 */ { eax = (u32)(0x6581b0u); }
  /* 0061b44d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b460(CPU *c) {
  NATIVE_HOOK(0x61b460u) REGS; LOADALL;
  goto L_0061b460;
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
L_0061b460:;
  /* 0061b460 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061b463 jmp 0x4d9460 */ goto L_004d9460;
}

void F_0061b468(CPU *c) {
  NATIVE_HOOK(0x61b468u) REGS; LOADALL;
  goto L_0061b468;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b468:;
  /* 0061b468 mov eax, 0x6581d4 */ { eax = (u32)(0x6581d4u); }
  /* 0061b46d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b480(CPU *c) {
  NATIVE_HOOK(0x61b480u) REGS; LOADALL;
L_0061b480:;
  /* 0061b480 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b483 jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_0061b488(CPU *c) {
  NATIVE_HOOK(0x61b488u) REGS; LOADALL;
L_0061b488:;
  /* 0061b488 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0061b48b add esi, 0x2c */ { u32 a_ = esi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061b48e jmp 0x561ef0 */ SAVEALL; F_00561ef0(c); return;
}

void F_0061b493(CPU *c) {
  NATIVE_HOOK(0x61b493u) REGS; LOADALL;
  goto L_0061b493;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b493:;
  /* 0061b493 mov eax, 0x658200 */ { eax = (u32)(0x658200u); }
  /* 0061b498 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b4a0(CPU *c) {
  NATIVE_HOOK(0x61b4a0u) REGS; LOADALL;
  goto L_0061b4a0;
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
L_0061b4a0:;
  /* 0061b4a0 lea edi, [ebp + 8] */ edi = (u32)((u32)(ebp + 0x8u));
  /* 0061b4a3 jmp 0x54e560 */ goto L_0054e560;
}

void F_0061b4a8(CPU *c) {
  NATIVE_HOOK(0x61b4a8u) REGS; LOADALL;
  goto L_0061b4a8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b4a8:;
  /* 0061b4a8 mov eax, 0x658224 */ { eax = (u32)(0x658224u); }
  /* 0061b4ad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b4c0(CPU *c) {
  NATIVE_HOOK(0x61b4c0u) REGS; LOADALL;
  goto L_0061b4c0;
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
L_0061b4c0:;
  /* 0061b4c0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061b4c3 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061b4c6 jmp 0x4d9460 */ goto L_004d9460;
}

void F_0061b4cb(CPU *c) {
  NATIVE_HOOK(0x61b4cbu) REGS; LOADALL;
  goto L_0061b4cb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b4cb:;
  /* 0061b4cb mov eax, 0x658248 */ { eax = (u32)(0x658248u); }
  /* 0061b4d0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b4e0(CPU *c) {
  NATIVE_HOOK(0x61b4e0u) REGS; LOADALL;
L_0061b4e0:;
  /* 0061b4e0 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0061b4e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061b4e4 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x61b4e9u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x61b4e4u); RETCHK(0x61b4e9u, 0x61b4e4u); LOADALL;
  /* 0061b4e9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061b4ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061b4eb(CPU *c) {
  NATIVE_HOOK(0x61b4ebu) REGS; LOADALL;
  goto L_0061b4eb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b4eb:;
  /* 0061b4eb mov eax, 0x65826c */ { eax = (u32)(0x65826cu); }
  /* 0061b4f0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b500(CPU *c) {
  NATIVE_HOOK(0x61b500u) REGS; LOADALL;
  goto L_0061b500;
L_00527ab0:;
  /* 00527ab0 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00527ab2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00527ab3 call 0x5fe716 */ esp -= 4; M32(esp) = 0x527ab8u; SAVEALL; F_005fe716(c); ABI_CHECK(0x5fe716u, 0x527ab3u); RETCHK(0x527ab8u, 0x527ab3u); LOADALL;
  /* 00527ab8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b500:;
  /* 0061b500 lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0061b503 jmp 0x527ab0 */ goto L_00527ab0;
}

void F_0061b508(CPU *c) {
  NATIVE_HOOK(0x61b508u) REGS; LOADALL;
  goto L_0061b508;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b508:;
  /* 0061b508 mov eax, 0x658290 */ { eax = (u32)(0x658290u); }
  /* 0061b50d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b520(CPU *c) {
  NATIVE_HOOK(0x61b520u) REGS; LOADALL;
  goto L_0061b520;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b520:;
  /* 0061b520 mov eax, 0x658314 */ { eax = (u32)(0x658314u); }
  /* 0061b525 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b530(CPU *c) {
  NATIVE_HOOK(0x61b530u) REGS; LOADALL;
L_0061b530:;
  /* 0061b530 mov eax, dword ptr [0x9b93a4] */ { const u32 m_ = (u32)(0x9b93a4u); eax = (u32)(M32(m_)); }
  /* 0061b535 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061b538 mov dword ptr [0x9b93a4], eax */ { const u32 m_ = (u32)(0x9b93a4u); M32(m_) = (u32)(eax); }
  /* 0061b53d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061b53e(CPU *c) {
  NATIVE_HOOK(0x61b53eu) REGS; LOADALL;
  goto L_0061b53e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b53e:;
  /* 0061b53e mov eax, 0x658338 */ { eax = (u32)(0x658338u); }
  /* 0061b543 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b550(CPU *c) {
  NATIVE_HOOK(0x61b550u) REGS; LOADALL;
L_0061b550:;
  /* 0061b550 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b553 jmp 0x4ff800 */ SAVEALL; F_004ff800(c); return;
}

void F_0061b558(CPU *c) {
  NATIVE_HOOK(0x61b558u) REGS; LOADALL;
  goto L_0061b558;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b558:;
  /* 0061b558 mov eax, 0x65835c */ { eax = (u32)(0x65835cu); }
  /* 0061b55d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b570(CPU *c) {
  NATIVE_HOOK(0x61b570u) REGS; LOADALL;
L_0061b570:;
  /* 0061b570 lea ecx, [ebp - 0x420] */ ecx = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0061b576 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061b57b(CPU *c) {
  NATIVE_HOOK(0x61b57bu) REGS; LOADALL;
  goto L_0061b57b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b57b:;
  /* 0061b57b mov eax, 0x658650 */ { eax = (u32)(0x658650u); }
  /* 0061b580 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b590(CPU *c) {
  NATIVE_HOOK(0x61b590u) REGS; LOADALL;
L_0061b590:;
  /* 0061b590 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b593 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0061b598(CPU *c) {
  NATIVE_HOOK(0x61b598u) REGS; LOADALL;
  goto L_0061b598;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b598:;
  /* 0061b598 mov eax, 0x658890 */ { eax = (u32)(0x658890u); }
  /* 0061b59d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b5b0(CPU *c) {
  NATIVE_HOOK(0x61b5b0u) REGS; LOADALL;
L_0061b5b0:;
  /* 0061b5b0 lea ecx, [ebp - 0xa0] */ ecx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0061b5b6 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061b5bb(CPU *c) {
  NATIVE_HOOK(0x61b5bbu) REGS; LOADALL;
  goto L_0061b5bb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b5bb:;
  /* 0061b5bb mov eax, 0x65898c */ { eax = (u32)(0x65898cu); }
  /* 0061b5c0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b5d0(CPU *c) {
  NATIVE_HOOK(0x61b5d0u) REGS; LOADALL;
  goto L_0061b5d0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b5d0:;
  /* 0061b5d0 mov eax, 0x658a10 */ { eax = (u32)(0x658a10u); }
  /* 0061b5d5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b5e0(CPU *c) {
  NATIVE_HOOK(0x61b5e0u) REGS; LOADALL;
L_0061b5e0:;
  /* 0061b5e0 lea ecx, [ebp - 0x120] */ ecx = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0061b5e6 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0061b5eb(CPU *c) {
  NATIVE_HOOK(0x61b5ebu) REGS; LOADALL;
  goto L_0061b5eb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b5eb:;
  /* 0061b5eb mov eax, 0x658aa0 */ { eax = (u32)(0x658aa0u); }
  /* 0061b5f0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b600(CPU *c) {
  NATIVE_HOOK(0x61b600u) REGS; LOADALL;
L_0061b600:;
  /* 0061b600 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b603 jmp 0x4b12e0 */ SAVEALL; F_004b12e0(c); return;
}

void F_0061b608(CPU *c) {
  NATIVE_HOOK(0x61b608u) REGS; LOADALL;
  goto L_0061b608;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b608:;
  /* 0061b608 mov eax, 0x658ac4 */ { eax = (u32)(0x658ac4u); }
  /* 0061b60d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b620(CPU *c) {
  NATIVE_HOOK(0x61b620u) REGS; LOADALL;
L_0061b620:;
  /* 0061b620 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b623 jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_0061b628(CPU *c) {
  NATIVE_HOOK(0x61b628u) REGS; LOADALL;
L_0061b628:;
  /* 0061b628 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061b62b add esi, 0x2c */ { u32 a_ = esi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061b62e jmp 0x561ef0 */ SAVEALL; F_00561ef0(c); return;
}

void F_0061b633(CPU *c) {
  NATIVE_HOOK(0x61b633u) REGS; LOADALL;
  goto L_0061b633;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b633:;
  /* 0061b633 mov eax, 0x658af0 */ { eax = (u32)(0x658af0u); }
  /* 0061b638 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b640(CPU *c) {
  NATIVE_HOOK(0x61b640u) REGS; LOADALL;
  goto L_0061b640;
L_00560520:;
  /* 00560520 mov dword ptr [ecx], 0x6567fc */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6567fcu); }
  /* 00560526 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b640:;
  /* 0061b640 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b643 jmp 0x560520 */ goto L_00560520;
}

void F_0061b648(CPU *c) {
  NATIVE_HOOK(0x61b648u) REGS; LOADALL;
  goto L_0061b648;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b648:;
  /* 0061b648 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061b64b add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061b64e jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061b653(CPU *c) {
  NATIVE_HOOK(0x61b653u) REGS; LOADALL;
  goto L_0061b653;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b653:;
  /* 0061b653 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061b656 add eax, 0x18 */ { u32 a_ = eax, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061b659 jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061b65e(CPU *c) {
  NATIVE_HOOK(0x61b65eu) REGS; LOADALL;
  goto L_0061b65e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b65e:;
  /* 0061b65e mov eax, 0x658b24 */ { eax = (u32)(0x658b24u); }
  /* 0061b663 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b670(CPU *c) {
  NATIVE_HOOK(0x61b670u) REGS; LOADALL;
  goto L_0061b670;
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
L_0061b670:;
  /* 0061b670 lea edi, [ebp + 0x10] */ edi = (u32)((u32)(ebp + 0x10u));
  /* 0061b673 jmp 0x54e560 */ goto L_0054e560;
}

void F_0061b678(CPU *c) {
  NATIVE_HOOK(0x61b678u) REGS; LOADALL;
  goto L_0061b678;
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
L_0061b678:;
  /* 0061b678 lea edi, [ebp - 0x10] */ edi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0061b67b jmp 0x54e560 */ goto L_0054e560;
}

void F_0061b680(CPU *c) {
  NATIVE_HOOK(0x61b680u) REGS; LOADALL;
  goto L_0061b680;
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
L_0061b680:;
  /* 0061b680 lea edi, [ebp - 0x14] */ edi = (u32)((u32)(ebp + 0xffffffecu));
  /* 0061b683 jmp 0x54e560 */ goto L_0054e560;
}

void F_0061b688(CPU *c) {
  NATIVE_HOOK(0x61b688u) REGS; LOADALL;
  goto L_0061b688;
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
L_0061b688:;
  /* 0061b688 lea edi, [ebp - 0x18] */ edi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0061b68b jmp 0x54e560 */ goto L_0054e560;
}

void F_0061b690(CPU *c) {
  NATIVE_HOOK(0x61b690u) REGS; LOADALL;
  goto L_0061b690;
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
L_0061b690:;
  /* 0061b690 lea edi, [ebp - 0x1c] */ edi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0061b693 jmp 0x54e560 */ goto L_0054e560;
}

void F_0061b698(CPU *c) {
  NATIVE_HOOK(0x61b698u) REGS; LOADALL;
  goto L_0061b698;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b698:;
  /* 0061b698 mov eax, 0x658b68 */ { eax = (u32)(0x658b68u); }
  /* 0061b69d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b6b0(CPU *c) {
  NATIVE_HOOK(0x61b6b0u) REGS; LOADALL;
  goto L_0061b6b0;
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
L_0061b6b0:;
  /* 0061b6b0 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061b6b3 jmp 0x502310 */ goto L_00502310;
}

void F_0061b6b8(CPU *c) {
  NATIVE_HOOK(0x61b6b8u) REGS; LOADALL;
  goto L_0061b6b8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b6b8:;
  /* 0061b6b8 mov eax, 0x658b8c */ { eax = (u32)(0x658b8cu); }
  /* 0061b6bd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b6d0(CPU *c) {
  NATIVE_HOOK(0x61b6d0u) REGS; LOADALL;
L_0061b6d0:;
  /* 0061b6d0 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0061b6d3 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061b6d8(CPU *c) {
  NATIVE_HOOK(0x61b6d8u) REGS; LOADALL;
  goto L_0061b6d8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b6d8:;
  /* 0061b6d8 mov eax, 0x658bd4 */ { eax = (u32)(0x658bd4u); }
  /* 0061b6dd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b6f0(CPU *c) {
  NATIVE_HOOK(0x61b6f0u) REGS; LOADALL;
L_0061b6f0:;
  /* 0061b6f0 mov eax, dword ptr [0x9b9430] */ { const u32 m_ = (u32)(0x9b9430u); eax = (u32)(M32(m_)); }
  /* 0061b6f5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061b6f8 mov dword ptr [0x9b9430], eax */ { const u32 m_ = (u32)(0x9b9430u); M32(m_) = (u32)(eax); }
  /* 0061b6fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061b6fe(CPU *c) {
  NATIVE_HOOK(0x61b6feu) REGS; LOADALL;
  goto L_0061b6fe;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b6fe:;
  /* 0061b6fe mov eax, 0x658bf8 */ { eax = (u32)(0x658bf8u); }
  /* 0061b703 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b710(CPU *c) {
  NATIVE_HOOK(0x61b710u) REGS; LOADALL;
L_0061b710:;
  /* 0061b710 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b713 sub ecx, 0x48 */ { u32 a_ = ecx, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b716 jmp 0x4d0ea0 */ SAVEALL; F_004d0ea0(c); return;
}

void F_0061b71b(CPU *c) {
  NATIVE_HOOK(0x61b71bu) REGS; LOADALL;
  goto L_0061b71b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b71b:;
  /* 0061b71b mov eax, 0x658c40 */ { eax = (u32)(0x658c40u); }
  /* 0061b720 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b730(CPU *c) {
  NATIVE_HOOK(0x61b730u) REGS; LOADALL;
  goto L_0061b730;
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
L_0061b730:;
  /* 0061b730 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061b733 jmp 0x4ffd40 */ goto L_004ffd40;
}

void F_0061b738(CPU *c) {
  NATIVE_HOOK(0x61b738u) REGS; LOADALL;
  goto L_0061b738;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b738:;
  /* 0061b738 mov eax, 0x658c64 */ { eax = (u32)(0x658c64u); }
  /* 0061b73d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b750(CPU *c) {
  NATIVE_HOOK(0x61b750u) REGS; LOADALL;
L_0061b750:;
  /* 0061b750 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061b753 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061b754 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61b759u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61b754u); RETCHK(0x61b759u, 0x61b754u); LOADALL;
  /* 0061b759 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061b75a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061b75b(CPU *c) {
  NATIVE_HOOK(0x61b75bu) REGS; LOADALL;
  goto L_0061b75b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b75b:;
  /* 0061b75b mov eax, 0x658cac */ { eax = (u32)(0x658cacu); }
  /* 0061b760 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b770(CPU *c) {
  NATIVE_HOOK(0x61b770u) REGS; LOADALL;
  goto L_0061b770;
L_005fe992:;
  /* 005fe992 jmp dword ptr [0x62e3d8] */ { const u32 m_ = (u32)(0x62e3d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b770:;
  /* 0061b770 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061b773 jmp 0x5fe992 */ goto L_005fe992;
}

void F_0061b778(CPU *c) {
  NATIVE_HOOK(0x61b778u) REGS; LOADALL;
  goto L_0061b778;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b778:;
  /* 0061b778 mov eax, 0x658cd0 */ { eax = (u32)(0x658cd0u); }
  /* 0061b77d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b790(CPU *c) {
  NATIVE_HOOK(0x61b790u) REGS; LOADALL;
L_0061b790:;
  /* 0061b790 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b793 add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b796 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b79b(CPU *c) {
  NATIVE_HOOK(0x61b79bu) REGS; LOADALL;
  goto L_0061b79b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b79b:;
  /* 0061b79b mov eax, 0x658d3c */ { eax = (u32)(0x658d3cu); }
  /* 0061b7a0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b7b0(CPU *c) {
  NATIVE_HOOK(0x61b7b0u) REGS; LOADALL;
L_0061b7b0:;
  /* 0061b7b0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b7b3 jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_0061b7b8(CPU *c) {
  NATIVE_HOOK(0x61b7b8u) REGS; LOADALL;
  goto L_0061b7b8;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b7b8:;
  /* 0061b7b8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061b7bb add eax, 0x34 */ { u32 a_ = eax, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061b7be jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061b7c3(CPU *c) {
  NATIVE_HOOK(0x61b7c3u) REGS; LOADALL;
  goto L_0061b7c3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b7c3:;
  /* 0061b7c3 mov eax, 0x658d94 */ { eax = (u32)(0x658d94u); }
  /* 0061b7c8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b7d0(CPU *c) {
  NATIVE_HOOK(0x61b7d0u) REGS; LOADALL;
  goto L_0061b7d0;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b7d0:;
  /* 0061b7d0 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0061b7d3 jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061b7d8(CPU *c) {
  NATIVE_HOOK(0x61b7d8u) REGS; LOADALL;
  goto L_0061b7d8;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b7d8:;
  /* 0061b7d8 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0061b7db jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061b7e0(CPU *c) {
  NATIVE_HOOK(0x61b7e0u) REGS; LOADALL;
L_0061b7e0:;
  /* 0061b7e0 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0061b7e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061b7e4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61b7e9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61b7e4u); RETCHK(0x61b7e9u, 0x61b7e4u); LOADALL;
  /* 0061b7e9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061b7ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061b7eb(CPU *c) {
  NATIVE_HOOK(0x61b7ebu) REGS; LOADALL;
  goto L_0061b7eb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b7eb:;
  /* 0061b7eb mov eax, 0x658dc8 */ { eax = (u32)(0x658dc8u); }
  /* 0061b7f0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b800(CPU *c) {
  NATIVE_HOOK(0x61b800u) REGS; LOADALL;
  goto L_0061b800;
L_0041ba50:;
  /* 0041ba50 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0041ba52 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ba57 je 0x41ba60 */ if (ZF_) goto L_0041ba60;
  /* 0041ba59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba5a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41ba5fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41ba5au); RETCHK(0x41ba5fu, 0x41ba5au); LOADALL;
  /* 0041ba5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0041ba60:;
  /* 0041ba60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b800:;
  /* 0061b800 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0061b803 jmp 0x41ba50 */ goto L_0041ba50;
}

void F_0061b808(CPU *c) {
  NATIVE_HOOK(0x61b808u) REGS; LOADALL;
  goto L_0061b808;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b808:;
  /* 0061b808 mov eax, 0x658dec */ { eax = (u32)(0x658decu); }
  /* 0061b80d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b820(CPU *c) {
  NATIVE_HOOK(0x61b820u) REGS; LOADALL;
L_0061b820:;
  /* 0061b820 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b823 jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_0061b828(CPU *c) {
  NATIVE_HOOK(0x61b828u) REGS; LOADALL;
  goto L_0061b828;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b828:;
  /* 0061b828 mov eax, 0x658e10 */ { eax = (u32)(0x658e10u); }
  /* 0061b82d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b840(CPU *c) {
  NATIVE_HOOK(0x61b840u) REGS; LOADALL;
  goto L_0061b840;
L_0055ced0:;
  /* 0055ced0 mov dword ptr [eax], 0x656618 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x656618u); }
  /* 0055ced6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b840:;
  /* 0061b840 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061b843 jmp 0x55ced0 */ goto L_0055ced0;
}

void F_0061b848(CPU *c) {
  NATIVE_HOOK(0x61b848u) REGS; LOADALL;
  goto L_0061b848;
L_0055d730:;
  /* 0055d730 mov dword ptr [ecx], 0x656638 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656638u); }
  /* 0055d736 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b848:;
  /* 0061b848 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b84b add ecx, 0x68 */ { u32 a_ = ecx, b_ = 0x68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b84e jmp 0x55d730 */ goto L_0055d730;
}

void F_0061b853(CPU *c) {
  NATIVE_HOOK(0x61b853u) REGS; LOADALL;
  goto L_0061b853;
L_0055d740:;
  /* 0055d740 mov dword ptr [ecx], 0x65660c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x65660cu); }
  /* 0055d746 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b853:;
  /* 0061b853 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b856 add ecx, 0x84 */ { u32 a_ = ecx, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b85c jmp 0x55d740 */ goto L_0055d740;
}
