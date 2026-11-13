#include "funcs.h"

void F_1000701b(CPU *c) {
  NATIVE_HOOK(0x1000701bu) REGS; LOADALL;
L_1000701b:;
  /* 1000701b mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1000701e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007022 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10007024 call 0x10007117 */ esp -= 4; M32(esp) = 0x10007029u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007024u); RETCHK(0x10007029u, 0x10007024u); LOADALL;
  /* 10007029 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1000702c(CPU *c) {
  NATIVE_HOOK(0x1000702cu) REGS; LOADALL;
L_1000702c:;
  /* 1000702c jmp dword ptr [0x100080ac] */ { const u32 m_ = (u32)(0x100080acu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007032(CPU *c) {
  NATIVE_HOOK(0x10007032u) REGS; LOADALL;
L_10007032:;
  /* 10007032 jmp dword ptr [0x100080a8] */ { const u32 m_ = (u32)(0x100080a8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007038(CPU *c) {
  NATIVE_HOOK(0x10007038u) REGS; LOADALL;
L_10007038:;
  /* 10007038 jmp dword ptr [0x100080a4] */ { const u32 m_ = (u32)(0x100080a4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000703e(CPU *c) {
  NATIVE_HOOK(0x1000703eu) REGS; LOADALL;
L_1000703e:;
  /* 1000703e jmp dword ptr [0x100080a0] */ { const u32 m_ = (u32)(0x100080a0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007044(CPU *c) {
  NATIVE_HOOK(0x10007044u) REGS; LOADALL;
L_10007044:;
  /* 10007044 jmp dword ptr [0x1000809c] */ { const u32 m_ = (u32)(0x1000809cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000704a(CPU *c) {
  NATIVE_HOOK(0x1000704au) REGS; LOADALL;
L_1000704a:;
  /* 1000704a jmp dword ptr [0x10008098] */ { const u32 m_ = (u32)(0x10008098u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007050(CPU *c) {
  NATIVE_HOOK(0x10007050u) REGS; LOADALL;
L_10007050:;
  /* 10007050 jmp dword ptr [0x10008094] */ { const u32 m_ = (u32)(0x10008094u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007056(CPU *c) {
  NATIVE_HOOK(0x10007056u) REGS; LOADALL;
L_10007056:;
  /* 10007056 jmp dword ptr [0x10008090] */ { const u32 m_ = (u32)(0x10008090u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000705c(CPU *c) {
  NATIVE_HOOK(0x1000705cu) REGS; LOADALL;
L_1000705c:;
  /* 1000705c jmp dword ptr [0x1000808c] */ { const u32 m_ = (u32)(0x1000808cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007062(CPU *c) {
  NATIVE_HOOK(0x10007062u) REGS; LOADALL;
L_10007062:;
  /* 10007062 jmp dword ptr [0x10008088] */ { const u32 m_ = (u32)(0x10008088u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007068(CPU *c) {
  NATIVE_HOOK(0x10007068u) REGS; LOADALL;
L_10007068:;
  /* 10007068 jmp dword ptr [0x10008084] */ { const u32 m_ = (u32)(0x10008084u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000706e(CPU *c) {
  NATIVE_HOOK(0x1000706eu) REGS; LOADALL;
L_1000706e:;
  /* 1000706e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000706f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10007071 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10007074 mov eax, dword ptr [0x1000a110] */ { const u32 m_ = (u32)(0x1000a110u); eax = (u32)(M32(m_)); }
  /* 10007079 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000707b je 0x10007084 */ if (ZF_) goto L_10007084;
  /* 1000707d cmp eax, 0xbb40e64e */ { u32 a_ = eax, b_ = 0xbb40e64eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007082 jne 0x100070d2 */ if (!ZF_) goto L_100070d2;
L_10007084:;
  /* 10007084 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10007085 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10007088 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007089 call dword ptr [0x1000801c] */ { const u32 m_ = (u32)(0x1000801cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000708fu; SAVEALL; call_ind(c, t_); RETCHK(0x1000708fu, 0x10007089u); LOADALL; }
  /* 1000708f mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10007092 xor esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10007095 call dword ptr [0x10008020] */ { const u32 m_ = (u32)(0x10008020u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000709bu; SAVEALL; call_ind(c, t_); RETCHK(0x1000709bu, 0x10007095u); LOADALL; }
  /* 1000709b xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1000709d call dword ptr [0x10008024] */ { const u32 m_ = (u32)(0x10008024u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100070a3u; SAVEALL; call_ind(c, t_); RETCHK(0x100070a3u, 0x1000709du); LOADALL; }
  /* 100070a3 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 100070a5 call dword ptr [0x10008028] */ { const u32 m_ = (u32)(0x10008028u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100070abu; SAVEALL; call_ind(c, t_); RETCHK(0x100070abu, 0x100070a5u); LOADALL; }
  /* 100070ab xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 100070ad lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 100070b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100070b1 call dword ptr [0x1000802c] */ { const u32 m_ = (u32)(0x1000802cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100070b7u; SAVEALL; call_ind(c, t_); RETCHK(0x100070b7u, 0x100070b1u); LOADALL; }
  /* 100070b7 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 100070ba xor eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100070bd xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 100070bf mov dword ptr [0x1000a110], esi */ { const u32 m_ = (u32)(0x1000a110u); M32(m_) = (u32)(esi); }
  /* 100070c5 jne 0x100070d1 */ if (!ZF_) goto L_100070d1;
  /* 100070c7 mov dword ptr [0x1000a110], 0xbb40e64e */ { const u32 m_ = (u32)(0x1000a110u); M32(m_) = (u32)(0xbb40e64eu); }
L_100070d1:;
  /* 100070d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_100070d2:;
  /* 100070d2 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 100070d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100070d4(CPU *c) {
  NATIVE_HOOK(0x100070d4u) REGS; LOADALL;
L_100070d4:;
  /* 100070d4 jmp dword ptr [0x10008080] */ { const u32 m_ = (u32)(0x10008080u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100070dc(CPU *c) {
  NATIVE_HOOK(0x100070dcu) REGS; LOADALL;
L_100070dc:;
  /* 100070dc push 0x10007128 */ { u32 v_ = 0x10007128u; esp -= 4; M32(esp) = v_; }
  /* 100070e1 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100070e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100070e8 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 100070ec mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 100070f0 lea ebp, [esp + 0x10] */ ebp = (u32)((u32)(esp + 0x10u));
  /* 100070f4 sub esp, eax */ { u32 a_ = esp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100070f6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100070f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100070f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100070f9 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 100070fc mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 100070ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007100 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10007103 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 1000710a mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 1000710d lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10007110 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10007116 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007117(CPU *c) {
  NATIVE_HOOK(0x10007117u) REGS; LOADALL;
L_10007117:;
  /* 10007117 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000711a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10007121 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10007122 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10007123 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10007124 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10007125 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10007126 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10007127 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007128(CPU *c) {
  NATIVE_HOOK(0x10007128u) REGS; LOADALL;
L_10007128:;
  /* 10007128 jmp dword ptr [0x1000807c] */ { const u32 m_ = (u32)(0x1000807cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000712e(CPU *c) {
  NATIVE_HOOK(0x1000712eu) REGS; LOADALL;
L_1000712e:;
  /* 1000712e push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 10007130 push 0x10008938 */ { u32 v_ = 0x10008938u; esp -= 4; M32(esp) = v_; }
  /* 10007135 call 0x100070dc */ esp -= 4; M32(esp) = 0x1000713au; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10007135u); RETCHK(0x1000713au, 0x10007135u); LOADALL;
  /* 1000713a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1000713e:;
  /* 1000713e dec dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10007141 js 0x10007151 */ if (SF_) goto L_10007151;
  /* 10007143 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10007146 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10007149 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 1000714c call dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000714fu; SAVEALL; call_ind(c, t_); RETCHK(0x1000714fu, 0x1000714cu); LOADALL; }
  /* 1000714f jmp 0x1000713e */ goto L_1000713e;
L_10007151:;
  /* 10007151 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007155 call 0x10007117 */ esp -= 4; M32(esp) = 0x1000715au; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007155u); RETCHK(0x1000715au, 0x10007155u); LOADALL;
  /* 1000715a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_1000715d(CPU *c) {
  NATIVE_HOOK(0x1000715du) REGS; LOADALL;
L_1000715d:;
  /* 1000715d mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10007160 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10007163 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007166 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007168 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 1000716b mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 1000716e cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007174 je 0x10007186 */ if (ZF_) goto L_10007186;
  /* 10007176 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 1000717d mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 10007180 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007186:;
  /* 10007186 call 0x100072ac */ esp -= 4; M32(esp) = 0x1000718bu; SAVEALL; F_100072ac(c); ABI_CHECK(0x100072acu, 0x10007186u); RETCHK(0x1000718bu, 0x10007186u); LOADALL;
  /* 1000718b int3 */ TRAP(0x1000718bu, "int3");
}

void F_10007181(CPU *c) {
  NATIVE_HOOK(0x10007181u) REGS; LOADALL;
  goto L_10007181;
L_10007151:;
  /* 10007151 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007155 call 0x10007117 */ esp -= 4; M32(esp) = 0x1000715au; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007155u); RETCHK(0x1000715au, 0x10007155u); LOADALL;
  /* 1000715a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10007181:;
  /* 10007181 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10007184 jmp 0x10007151 */ goto L_10007151;
}

void F_1000718c(CPU *c) {
  NATIVE_HOOK(0x1000718cu) REGS; LOADALL;
L_1000718c:;
  /* 1000718c push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 1000718e push 0x10008948 */ { u32 v_ = 0x10008948u; esp -= 4; M32(esp) = v_; }
  /* 10007193 call 0x100070dc */ esp -= 4; M32(esp) = 0x10007198u; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10007193u); RETCHK(0x10007198u, 0x10007193u); LOADALL;
  /* 10007198 and dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000719c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1000719f mov eax, esi */ { eax = (u32)(esi); }
  /* 100071a1 imul eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 100071a5 add dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 100071a8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_100071ac:;
  /* 100071ac dec dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 100071af js 0x100071bc */ if (SF_) goto L_100071bc;
  /* 100071b1 sub dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 100071b4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 100071b7 call dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100071bau; SAVEALL; call_ind(c, t_); RETCHK(0x100071bau, 0x100071b7u); LOADALL; }
  /* 100071ba jmp 0x100071ac */ goto L_100071ac;
L_100071bc:;
  /* 100071bc mov dword ptr [ebp - 0x1c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1u); }
  /* 100071c3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 100071c7 call 0x100071d4 */ esp -= 4; M32(esp) = 0x100071ccu; SAVEALL; F_100071d4(c); ABI_CHECK(0x100071d4u, 0x100071c7u); RETCHK(0x100071ccu, 0x100071c7u); LOADALL;
  /* 100071cc call 0x10007117 */ esp -= 4; M32(esp) = 0x100071d1u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x100071ccu); RETCHK(0x100071d1u, 0x100071ccu); LOADALL;
  /* 100071d1 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_100071d4(CPU *c) {
  NATIVE_HOOK(0x100071d4u) REGS; LOADALL;
L_100071d4:;
  /* 100071d4 cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100071d8 jne 0x100071eb */ if (!ZF_) goto L_100071eb;
  /* 100071da push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100071dd push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100071e0 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100071e3 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100071e6 call 0x1000712e */ esp -= 4; M32(esp) = 0x100071ebu; SAVEALL; F_1000712e(c); ABI_CHECK(0x1000712eu, 0x100071e6u); RETCHK(0x100071ebu, 0x100071e6u); LOADALL;
L_100071eb:;
  /* 100071eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100071ec(CPU *c) {
  NATIVE_HOOK(0x100071ecu) REGS; LOADALL;
L_100071ec:;
  /* 100071ec jmp dword ptr [0x10008078] */ { const u32 m_ = (u32)(0x10008078u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100071f2(CPU *c) {
  NATIVE_HOOK(0x100071f2u) REGS; LOADALL;
L_100071f2:;
  /* 100071f2 jmp dword ptr [0x10008074] */ { const u32 m_ = (u32)(0x10008074u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100071f8(CPU *c) {
  NATIVE_HOOK(0x100071f8u) REGS; LOADALL;
L_100071f8:;
  /* 100071f8 jmp dword ptr [0x10008068] */ { const u32 m_ = (u32)(0x10008068u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100071fe(CPU *c) {
  NATIVE_HOOK(0x100071feu) REGS; LOADALL;
L_100071fe:;
  /* 100071fe push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10007200 push 0x10008958 */ { u32 v_ = 0x10008958u; esp -= 4; M32(esp) = v_; }
  /* 10007205 call 0x100070dc */ esp -= 4; M32(esp) = 0x1000720au; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10007205u); RETCHK(0x1000720au, 0x10007205u); LOADALL;
  /* 1000720a mov dword ptr [ebp - 0x1c], 0x10008ad4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x10008ad4u); }
L_10007211:;
  /* 10007211 cmp dword ptr [ebp - 0x1c], 0x10008ad4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10008ad4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007218 jae 0x1000723c */ if (!CF_) goto L_1000723c;
  /* 1000721a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000721e mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007221 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007223 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10007225 je 0x10007232 */ if (ZF_) goto L_10007232;
  /* 10007227 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10007229u; SAVEALL; call_ind(c, t_); RETCHK(0x10007229u, 0x10007227u); LOADALL; }
  /* 10007229 jmp 0x10007232 */ goto L_10007232;
L_10007232:;
  /* 10007232 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007236 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000723a jmp 0x10007211 */ goto L_10007211;
L_1000723c:;
  /* 1000723c call 0x10007117 */ esp -= 4; M32(esp) = 0x10007241u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x1000723cu); RETCHK(0x10007241u, 0x1000723cu); LOADALL;
  /* 10007241 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000722b(CPU *c) {
  NATIVE_HOOK(0x1000722bu) REGS; LOADALL;
L_1000722b:;
  /* 1000722b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1000722d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1000722e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000722f(CPU *c) {
  NATIVE_HOOK(0x1000722fu) REGS; LOADALL;
  goto L_1000722f;
L_10007211:;
  /* 10007211 cmp dword ptr [ebp - 0x1c], 0x10008ad4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10008ad4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007218 jae 0x1000723c */ if (!CF_) goto L_1000723c;
  /* 1000721a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000721e mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007221 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007223 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10007225 je 0x10007232 */ if (ZF_) goto L_10007232;
  /* 10007227 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10007229u; SAVEALL; call_ind(c, t_); RETCHK(0x10007229u, 0x10007227u); LOADALL; }
  /* 10007229 jmp 0x10007232 */ goto L_10007232;
L_1000722f:;
  /* 1000722f mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_10007232:;
  /* 10007232 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007236 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000723a jmp 0x10007211 */ goto L_10007211;
L_1000723c:;
  /* 1000723c call 0x10007117 */ esp -= 4; M32(esp) = 0x10007241u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x1000723cu); RETCHK(0x10007241u, 0x1000723cu); LOADALL;
  /* 10007241 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007242(CPU *c) {
  NATIVE_HOOK(0x10007242u) REGS; LOADALL;
L_10007242:;
  /* 10007242 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10007244 push 0x10008968 */ { u32 v_ = 0x10008968u; esp -= 4; M32(esp) = v_; }
  /* 10007249 call 0x100070dc */ esp -= 4; M32(esp) = 0x1000724eu; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10007249u); RETCHK(0x1000724eu, 0x10007249u); LOADALL;
  /* 1000724e mov dword ptr [ebp - 0x1c], 0x10008adc */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x10008adcu); }
L_10007255:;
  /* 10007255 cmp dword ptr [ebp - 0x1c], 0x10008adc */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10008adcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000725c jae 0x10007280 */ if (!CF_) goto L_10007280;
  /* 1000725e and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007262 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007265 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007267 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10007269 je 0x10007276 */ if (ZF_) goto L_10007276;
  /* 1000726b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1000726du; SAVEALL; call_ind(c, t_); RETCHK(0x1000726du, 0x1000726bu); LOADALL; }
  /* 1000726d jmp 0x10007276 */ goto L_10007276;
L_10007276:;
  /* 10007276 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000727a add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000727e jmp 0x10007255 */ goto L_10007255;
L_10007280:;
  /* 10007280 call 0x10007117 */ esp -= 4; M32(esp) = 0x10007285u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007280u); RETCHK(0x10007285u, 0x10007280u); LOADALL;
  /* 10007285 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000726f(CPU *c) {
  NATIVE_HOOK(0x1000726fu) REGS; LOADALL;
L_1000726f:;
  /* 1000726f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10007271 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10007272 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007273(CPU *c) {
  NATIVE_HOOK(0x10007273u) REGS; LOADALL;
  goto L_10007273;
L_10007255:;
  /* 10007255 cmp dword ptr [ebp - 0x1c], 0x10008adc */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10008adcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000725c jae 0x10007280 */ if (!CF_) goto L_10007280;
  /* 1000725e and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007262 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007265 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10007267 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10007269 je 0x10007276 */ if (ZF_) goto L_10007276;
  /* 1000726b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1000726du; SAVEALL; call_ind(c, t_); RETCHK(0x1000726du, 0x1000726bu); LOADALL; }
  /* 1000726d jmp 0x10007276 */ goto L_10007276;
L_10007273:;
  /* 10007273 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_10007276:;
  /* 10007276 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000727a add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1000727e jmp 0x10007255 */ goto L_10007255;
L_10007280:;
  /* 10007280 call 0x10007117 */ esp -= 4; M32(esp) = 0x10007285u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007280u); RETCHK(0x10007285u, 0x10007280u); LOADALL;
  /* 10007285 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007286(CPU *c) {
  NATIVE_HOOK(0x10007286u) REGS; LOADALL;
L_10007286:;
  /* 10007286 jmp dword ptr [0x1000805c] */ { const u32 m_ = (u32)(0x1000805cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1000728c(CPU *c) {
  NATIVE_HOOK(0x1000728cu) REGS; LOADALL;
L_1000728c:;
  /* 1000728c cmp dword ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10007291 jne 0x100072a6 */ if (!ZF_) goto L_100072a6;
  /* 10007293 cmp dword ptr [0x1000a148], 0 */ { const u32 m_ = (u32)(0x1000a148u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000729a jne 0x100072a6 */ if (!ZF_) goto L_100072a6;
  /* 1000729c push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 100072a0 call dword ptr [0x10008034] */ { const u32 m_ = (u32)(0x10008034u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100072a6u; SAVEALL; call_ind(c, t_); RETCHK(0x100072a6u, 0x100072a0u); LOADALL; }
L_100072a6:;
  /* 100072a6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100072a8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100072a9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_100072ac(CPU *c) {
  NATIVE_HOOK(0x100072acu) REGS; LOADALL;
L_100072ac:;
  /* 100072ac jmp dword ptr [0x10008058] */ { const u32 m_ = (u32)(0x10008058u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100072c0(CPU *c) {
  NATIVE_HOOK(0x100072c0u) REGS; LOADALL;
L_100072c0:;
  /* 100072c0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 100072c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100072c4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 100072c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100072c8 call 0x10001230 */ esp -= 4; M32(esp) = 0x100072cdu; SAVEALL; F_10001230(c); ABI_CHECK(0x10001230u, 0x100072c8u); RETCHK(0x100072cdu, 0x100072c8u); LOADALL;
  /* 100072cd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100072d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100072d1(CPU *c) {
  NATIVE_HOOK(0x100072d1u) REGS; LOADALL;
  goto L_100072d1;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100072d1:;
  /* 100072d1 mov eax, 0x10008b5c */ { eax = (u32)(0x10008b5cu); }
  /* 100072d6 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100072e0(CPU *c) {
  NATIVE_HOOK(0x100072e0u) REGS; LOADALL;
L_100072e0:;
  /* 100072e0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 100072e3 jmp dword ptr [0x100080c0] */ { const u32 m_ = (u32)(0x100080c0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100072e9(CPU *c) {
  NATIVE_HOOK(0x100072e9u) REGS; LOADALL;
  goto L_100072e9;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100072e9:;
  /* 100072e9 mov eax, 0x10008b04 */ { eax = (u32)(0x10008b04u); }
  /* 100072ee jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007300(CPU *c) {
  NATIVE_HOOK(0x10007300u) REGS; LOADALL;
L_10007300:;
  /* 10007300 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10007303 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007309(CPU *c) {
  NATIVE_HOOK(0x10007309u) REGS; LOADALL;
  goto L_10007309;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007309:;
  /* 10007309 mov eax, 0x10008bd8 */ { eax = (u32)(0x10008bd8u); }
  /* 1000730e jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007320(CPU *c) {
  NATIVE_HOOK(0x10007320u) REGS; LOADALL;
  goto L_10007320;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007320:;
  /* 10007320 mov eax, 0x10008c64 */ { eax = (u32)(0x10008c64u); }
  /* 10007325 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007330(CPU *c) {
  NATIVE_HOOK(0x10007330u) REGS; LOADALL;
L_10007330:;
  /* 10007330 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 10007333 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007339(CPU *c) {
  NATIVE_HOOK(0x10007339u) REGS; LOADALL;
  goto L_10007339;
L_10001340:;
  /* 10001340 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10001343 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007339:;
  /* 10007339 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 1000733c jmp 0x10001340 */ goto L_10001340;
}

void F_10007341(CPU *c) {
  NATIVE_HOOK(0x10007341u) REGS; LOADALL;
  goto L_10007341;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007341:;
  /* 10007341 mov eax, 0x10008c90 */ { eax = (u32)(0x10008c90u); }
  /* 10007346 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007350(CPU *c) {
  NATIVE_HOOK(0x10007350u) REGS; LOADALL;
  goto L_10007350;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007350:;
  /* 10007350 mov eax, 0x10008ce0 */ { eax = (u32)(0x10008ce0u); }
  /* 10007355 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007360(CPU *c) {
  NATIVE_HOOK(0x10007360u) REGS; LOADALL;
L_10007360:;
  /* 10007360 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 10007363 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007369(CPU *c) {
  NATIVE_HOOK(0x10007369u) REGS; LOADALL;
  goto L_10007369;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007369:;
  /* 10007369 mov eax, 0x10008d04 */ { eax = (u32)(0x10008d04u); }
  /* 1000736e jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007380(CPU *c) {
  NATIVE_HOOK(0x10007380u) REGS; LOADALL;
L_10007380:;
  /* 10007380 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007383 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007389(CPU *c) {
  NATIVE_HOOK(0x10007389u) REGS; LOADALL;
  goto L_10007389;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007389:;
  /* 10007389 mov eax, 0x10008d28 */ { eax = (u32)(0x10008d28u); }
  /* 1000738e jmp 0x10006e32 */ goto L_10006e32;
}

void F_100073a0(CPU *c) {
  NATIVE_HOOK(0x100073a0u) REGS; LOADALL;
L_100073a0:;
  /* 100073a0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 100073a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100073a4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 100073a7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100073a8 call 0x10001230 */ esp -= 4; M32(esp) = 0x100073adu; SAVEALL; F_10001230(c); ABI_CHECK(0x10001230u, 0x100073a8u); RETCHK(0x100073adu, 0x100073a8u); LOADALL;
  /* 100073ad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100073b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100073b1(CPU *c) {
  NATIVE_HOOK(0x100073b1u) REGS; LOADALL;
  goto L_100073b1;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100073b1:;
  /* 100073b1 mov eax, 0x10008d80 */ { eax = (u32)(0x10008d80u); }
  /* 100073b6 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100073c0(CPU *c) {
  NATIVE_HOOK(0x100073c0u) REGS; LOADALL;
L_100073c0:;
  /* 100073c0 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 100073c3 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100073c9(CPU *c) {
  NATIVE_HOOK(0x100073c9u) REGS; LOADALL;
L_100073c9:;
  /* 100073c9 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 100073cc jmp dword ptr [0x100080c0] */ { const u32 m_ = (u32)(0x100080c0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_100073d2(CPU *c) {
  NATIVE_HOOK(0x100073d2u) REGS; LOADALL;
  goto L_100073d2;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100073d2:;
  /* 100073d2 mov eax, 0x10008dac */ { eax = (u32)(0x10008dacu); }
  /* 100073d7 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100073e0(CPU *c) {
  NATIVE_HOOK(0x100073e0u) REGS; LOADALL;
L_100073e0:;
  /* 100073e0 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 100073e3 jmp 0x10002610 */ SAVEALL; F_10002610(c); return;
}

void F_100073e8(CPU *c) {
  NATIVE_HOOK(0x100073e8u) REGS; LOADALL;
L_100073e8:;
  /* 100073e8 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 100073eb jmp 0x100026d0 */ SAVEALL; F_100026d0(c); return;
}

void F_100073f0(CPU *c) {
  NATIVE_HOOK(0x100073f0u) REGS; LOADALL;
  goto L_100073f0;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100073f0:;
  /* 100073f0 mov eax, 0x10008dd8 */ { eax = (u32)(0x10008dd8u); }
  /* 100073f5 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007400(CPU *c) {
  NATIVE_HOOK(0x10007400u) REGS; LOADALL;
L_10007400:;
  /* 10007400 lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 10007403 jmp 0x10001670 */ SAVEALL; F_10001670(c); return;
}

void F_10007408(CPU *c) {
  NATIVE_HOOK(0x10007408u) REGS; LOADALL;
L_10007408:;
  /* 10007408 lea ecx, [ebp - 0x7c] */ ecx = (u32)((u32)(ebp + 0xffffff84u));
  /* 1000740b jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10007411(CPU *c) {
  NATIVE_HOOK(0x10007411u) REGS; LOADALL;
  goto L_10007411;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007411:;
  /* 10007411 mov eax, 0x10008e04 */ { eax = (u32)(0x10008e04u); }
  /* 10007416 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007420(CPU *c) {
  NATIVE_HOOK(0x10007420u) REGS; LOADALL;
  goto L_10007420;
L_100033c0:;
  /* 100033c0 mov dword ptr [ecx], 0x100081a0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x100081a0u); }
  /* 100033c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007420:;
  /* 10007420 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007423 jmp 0x100033c0 */ goto L_100033c0;
}

void F_10007428(CPU *c) {
  NATIVE_HOOK(0x10007428u) REGS; LOADALL;
L_10007428:;
  /* 10007428 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000742b add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000742e jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007433(CPU *c) {
  NATIVE_HOOK(0x10007433u) REGS; LOADALL;
L_10007433:;
  /* 10007433 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007436 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10007439 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_1000743e(CPU *c) {
  NATIVE_HOOK(0x1000743eu) REGS; LOADALL;
  goto L_1000743e;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000743e:;
  /* 1000743e mov eax, 0x10008e38 */ { eax = (u32)(0x10008e38u); }
  /* 10007443 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007450(CPU *c) {
  NATIVE_HOOK(0x10007450u) REGS; LOADALL;
  goto L_10007450;
L_100033c0:;
  /* 100033c0 mov dword ptr [ecx], 0x100081a0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x100081a0u); }
  /* 100033c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007450:;
  /* 10007450 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007453 jmp 0x100033c0 */ goto L_100033c0;
}

void F_10007458(CPU *c) {
  NATIVE_HOOK(0x10007458u) REGS; LOADALL;
L_10007458:;
  /* 10007458 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000745b add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000745e jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007463(CPU *c) {
  NATIVE_HOOK(0x10007463u) REGS; LOADALL;
  goto L_10007463;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007463:;
  /* 10007463 mov eax, 0x10008e64 */ { eax = (u32)(0x10008e64u); }
  /* 10007468 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007470(CPU *c) {
  NATIVE_HOOK(0x10007470u) REGS; LOADALL;
  goto L_10007470;
L_100033c0:;
  /* 100033c0 mov dword ptr [ecx], 0x100081a0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x100081a0u); }
  /* 100033c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007470:;
  /* 10007470 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007473 jmp 0x100033c0 */ goto L_100033c0;
}

void F_10007478(CPU *c) {
  NATIVE_HOOK(0x10007478u) REGS; LOADALL;
L_10007478:;
  /* 10007478 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000747b add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000747e jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007483(CPU *c) {
  NATIVE_HOOK(0x10007483u) REGS; LOADALL;
  goto L_10007483;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007483:;
  /* 10007483 mov eax, 0x10008e90 */ { eax = (u32)(0x10008e90u); }
  /* 10007488 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007490(CPU *c) {
  NATIVE_HOOK(0x10007490u) REGS; LOADALL;
L_10007490:;
  /* 10007490 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10007493 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007498(CPU *c) {
  NATIVE_HOOK(0x10007498u) REGS; LOADALL;
  goto L_10007498;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007498:;
  /* 10007498 mov eax, 0x10008f64 */ { eax = (u32)(0x10008f64u); }
  /* 1000749d jmp 0x10006e32 */ goto L_10006e32;
}

void F_100074b0(CPU *c) {
  NATIVE_HOOK(0x100074b0u) REGS; LOADALL;
L_100074b0:;
  /* 100074b0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 100074b3 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_100074b8(CPU *c) {
  NATIVE_HOOK(0x100074b8u) REGS; LOADALL;
L_100074b8:;
  /* 100074b8 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 100074bb add ecx, 0x3c */ { u32 a_ = ecx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 100074be jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_100074c3(CPU *c) {
  NATIVE_HOOK(0x100074c3u) REGS; LOADALL;
  goto L_100074c3;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100074c3:;
  /* 100074c3 mov eax, 0x10008ebc */ { eax = (u32)(0x10008ebcu); }
  /* 100074c8 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100074d0(CPU *c) {
  NATIVE_HOOK(0x100074d0u) REGS; LOADALL;
L_100074d0:;
  /* 100074d0 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 100074d3 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_100074d8(CPU *c) {
  NATIVE_HOOK(0x100074d8u) REGS; LOADALL;
L_100074d8:;
  /* 100074d8 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 100074db jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_100074e0(CPU *c) {
  NATIVE_HOOK(0x100074e0u) REGS; LOADALL;
  goto L_100074e0;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100074e0:;
  /* 100074e0 mov eax, 0x10008ee8 */ { eax = (u32)(0x10008ee8u); }
  /* 100074e5 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100074f0(CPU *c) {
  NATIVE_HOOK(0x100074f0u) REGS; LOADALL;
L_100074f0:;
  /* 100074f0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 100074f3 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_100074f8(CPU *c) {
  NATIVE_HOOK(0x100074f8u) REGS; LOADALL;
  goto L_100074f8;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100074f8:;
  /* 100074f8 mov eax, 0x10008f0c */ { eax = (u32)(0x10008f0cu); }
  /* 100074fd jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007510(CPU *c) {
  NATIVE_HOOK(0x10007510u) REGS; LOADALL;
L_10007510:;
  /* 10007510 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007513 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_10007518(CPU *c) {
  NATIVE_HOOK(0x10007518u) REGS; LOADALL;
L_10007518:;
  /* 10007518 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000751b add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000751e jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007523(CPU *c) {
  NATIVE_HOOK(0x10007523u) REGS; LOADALL;
L_10007523:;
  /* 10007523 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007526 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10007529 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_1000752e(CPU *c) {
  NATIVE_HOOK(0x1000752eu) REGS; LOADALL;
  goto L_1000752e;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000752e:;
  /* 1000752e mov eax, 0x10008f40 */ { eax = (u32)(0x10008f40u); }
  /* 10007533 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007540(CPU *c) {
  NATIVE_HOOK(0x10007540u) REGS; LOADALL;
L_10007540:;
  /* 10007540 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10007543 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_10007548(CPU *c) {
  NATIVE_HOOK(0x10007548u) REGS; LOADALL;
  goto L_10007548;
L_100041e0:;
  /* 100041e0 jmp 0x100038b0 */ SAVEALL; F_100038b0(c); return;
L_10007548:;
  /* 10007548 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1000754b add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000754e jmp 0x100041e0 */ goto L_100041e0;
}

void F_10007553(CPU *c) {
  NATIVE_HOOK(0x10007553u) REGS; LOADALL;
  goto L_10007553;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007553:;
  /* 10007553 mov eax, 0x10008f90 */ { eax = (u32)(0x10008f90u); }
  /* 10007558 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007560(CPU *c) {
  NATIVE_HOOK(0x10007560u) REGS; LOADALL;
L_10007560:;
  /* 10007560 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10007563 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007564 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10007569u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10007564u); RETCHK(0x10007569u, 0x10007564u); LOADALL;
  /* 10007569 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1000756a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000756b(CPU *c) {
  NATIVE_HOOK(0x1000756bu) REGS; LOADALL;
  goto L_1000756b;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000756b:;
  /* 1000756b mov eax, 0x10008fb4 */ { eax = (u32)(0x10008fb4u); }
  /* 10007570 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007580(CPU *c) {
  NATIVE_HOOK(0x10007580u) REGS; LOADALL;
L_10007580:;
  /* 10007580 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 10007583 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007584 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10007589u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10007584u); RETCHK(0x10007589u, 0x10007584u); LOADALL;
  /* 10007589 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1000758a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000758b(CPU *c) {
  NATIVE_HOOK(0x1000758bu) REGS; LOADALL;
  goto L_1000758b;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000758b:;
  /* 1000758b mov eax, 0x10008fd8 */ { eax = (u32)(0x10008fd8u); }
  /* 10007590 jmp 0x10006e32 */ goto L_10006e32;
}

void F_100075a0(CPU *c) {
  NATIVE_HOOK(0x100075a0u) REGS; LOADALL;
L_100075a0:;
  /* 100075a0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075a4 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075a9u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075a4u); RETCHK(0x100075a9u, 0x100075a4u); LOADALL;
  /* 100075a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075ab(CPU *c) {
  NATIVE_HOOK(0x100075abu) REGS; LOADALL;
L_100075ab:;
  /* 100075ab mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075af call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075b4u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075afu); RETCHK(0x100075b4u, 0x100075afu); LOADALL;
  /* 100075b4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075b6(CPU *c) {
  NATIVE_HOOK(0x100075b6u) REGS; LOADALL;
L_100075b6:;
  /* 100075b6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075ba call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075bfu; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075bau); RETCHK(0x100075bfu, 0x100075bau); LOADALL;
  /* 100075bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075c1(CPU *c) {
  NATIVE_HOOK(0x100075c1u) REGS; LOADALL;
L_100075c1:;
  /* 100075c1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075c5 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075cau; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075c5u); RETCHK(0x100075cau, 0x100075c5u); LOADALL;
  /* 100075ca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075cc(CPU *c) {
  NATIVE_HOOK(0x100075ccu) REGS; LOADALL;
L_100075cc:;
  /* 100075cc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100075cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075d0 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075d5u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075d0u); RETCHK(0x100075d5u, 0x100075d0u); LOADALL;
  /* 100075d5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075d7(CPU *c) {
  NATIVE_HOOK(0x100075d7u) REGS; LOADALL;
  goto L_100075d7;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_100075d7:;
  /* 100075d7 mov eax, 0x10009040 */ { eax = (u32)(0x10009040u); }
  /* 100075dc jmp 0x10006e32 */ goto L_10006e32;
}

void F_100075f0(CPU *c) {
  NATIVE_HOOK(0x100075f0u) REGS; LOADALL;
L_100075f0:;
  /* 100075f0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 100075f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100075f4 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100075f9u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100075f4u); RETCHK(0x100075f9u, 0x100075f4u); LOADALL;
  /* 100075f9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100075fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100075fb(CPU *c) {
  NATIVE_HOOK(0x100075fbu) REGS; LOADALL;
L_100075fb:;
  /* 100075fb mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100075fe jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_10007603(CPU *c) {
  NATIVE_HOOK(0x10007603u) REGS; LOADALL;
  goto L_10007603;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007603:;
  /* 10007603 mov eax, 0x1000906c */ { eax = (u32)(0x1000906cu); }
  /* 10007608 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007610(CPU *c) {
  NATIVE_HOOK(0x10007610u) REGS; LOADALL;
L_10007610:;
  /* 10007610 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10007613 jmp 0x10001640 */ SAVEALL; F_10001640(c); return;
}

void F_10007618(CPU *c) {
  NATIVE_HOOK(0x10007618u) REGS; LOADALL;
  goto L_10007618;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10007618:;
  /* 10007618 mov eax, 0x10008ffc */ { eax = (u32)(0x10008ffcu); }
  /* 1000761d jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007630(CPU *c) {
  NATIVE_HOOK(0x10007630u) REGS; LOADALL;
L_10007630:;
  /* 10007630 lea ecx, [ebp - 0xa8] */ ecx = (u32)((u32)(ebp + 0xffffff58u));
  /* 10007636 jmp 0x100038b0 */ SAVEALL; F_100038b0(c); return;
}

void F_1000763b(CPU *c) {
  NATIVE_HOOK(0x1000763bu) REGS; LOADALL;
L_1000763b:;
  /* 1000763b lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 1000763e jmp 0x100038b0 */ SAVEALL; F_100038b0(c); return;
}

void F_10007643(CPU *c) {
  NATIVE_HOOK(0x10007643u) REGS; LOADALL;
L_10007643:;
  /* 10007643 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 10007646 jmp 0x100038b0 */ SAVEALL; F_100038b0(c); return;
}

void F_1000764b(CPU *c) {
  NATIVE_HOOK(0x1000764bu) REGS; LOADALL;
  goto L_1000764b;
L_10006e32:;
  /* 10006e32 jmp dword ptr [0x100080d8] */ { const u32 m_ = (u32)(0x100080d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1000764b:;
  /* 1000764b mov eax, 0x100090a0 */ { eax = (u32)(0x100090a0u); }
  /* 10007650 jmp 0x10006e32 */ goto L_10006e32;
}

void F_10007660(CPU *c) {
  NATIVE_HOOK(0x10007660u) REGS; LOADALL;
L_10007660:;
  /* 10007660 mov ecx, 0x1000a130 */ { ecx = (u32)(0x1000a130u); }
  /* 10007665 call 0x10003380 */ esp -= 4; M32(esp) = 0x1000766au; SAVEALL; F_10003380(c); ABI_CHECK(0x10003380u, 0x10007665u); RETCHK(0x1000766au, 0x10007665u); LOADALL;
  /* 1000766a push 0x10007680 */ { u32 v_ = 0x10007680u; esp -= 4; M32(esp) = v_; }
  /* 1000766f call 0x10006e78 */ esp -= 4; M32(esp) = 0x10007674u; SAVEALL; F_10006e78(c); ABI_CHECK(0x10006e78u, 0x1000766fu); RETCHK(0x10007674u, 0x1000766fu); LOADALL;
  /* 10007674 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10007675 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10007680(CPU *c) {
  NATIVE_HOOK(0x10007680u) REGS; LOADALL;
  goto L_10007680;
L_10003350:;
  /* 10003350 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003351 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10003354 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003355 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 10003358 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1000335a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000335b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000335c lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 10003360 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003361 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003363 call 0x10003130 */ esp -= 4; M32(esp) = 0x10003368u; SAVEALL; F_10003130(c); ABI_CHECK(0x10003130u, 0x10003363u); RETCHK(0x10003368u, 0x10003363u); LOADALL;
  /* 10003368 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1000336b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000336c call 0x10006e46 */ esp -= 4; M32(esp) = 0x10003371u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x1000336cu); RETCHK(0x10003371u, 0x1000336cu); LOADALL;
  /* 10003371 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003374 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10003376 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10003379 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 1000337c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000337d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1000337e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10007680:;
  /* 10007680 mov ecx, 0x1000a130 */ { ecx = (u32)(0x1000a130u); }
  /* 10007685 jmp 0x10003350 */ goto L_10003350;
}

void F_10101000(CPU *c) {
  NATIVE_HOOK(0x10101000u) REGS; LOADALL;
L_10101000:;
  /* 10101000 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10101002 push 0x1010c718 */ { u32 v_ = 0x1010c718u; esp -= 4; M32(esp) = v_; }
  /* 10101007 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1010100d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010100e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10101015 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101016 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101017 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10101019 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 1010101d call 0x10104a00 */ esp -= 4; M32(esp) = 0x10101022u; SAVEALL; F_10104a00(c); ABI_CHECK(0x10104a00u, 0x1010101du); RETCHK(0x10101022u, 0x1010101du); LOADALL;
  /* 10101022 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101024 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10101026 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010102a mov dword ptr [esi + 0x10010], eax */ { const u32 m_ = (u32)(esi + 0x10010u); M32(m_) = (u32)(eax); }
  /* 10101030 mov dword ptr [esi + 0x10014], eax */ { const u32 m_ = (u32)(esi + 0x10014u); M32(m_) = (u32)(eax); }
  /* 10101036 call 0x101047f0 */ esp -= 4; M32(esp) = 0x1010103bu; SAVEALL; F_101047f0(c); ABI_CHECK(0x101047f0u, 0x10101036u); RETCHK(0x1010103bu, 0x10101036u); LOADALL;
  /* 1010103b mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1010103f mov eax, esi */ { eax = (u32)(esi); }
  /* 10101041 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101042 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10101049 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010104c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10101050(CPU *c) {
  NATIVE_HOOK(0x10101050u) REGS; LOADALL;
L_10101050:;
  /* 10101050 jmp 0x10103a60 */ goto L_10103a60;
L_10103a60:;
  /* 10103a60 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10103a66 jmp 0x10104af0 */ goto L_10104af0;
L_10104af0:;
  /* 10104af0 mov dword ptr [ecx], 0x1010d1d0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1010d1d0u); }
  /* 10104af6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10101060(CPU *c) {
  NATIVE_HOOK(0x10101060u) REGS; LOADALL;
L_10101060:;
  /* 10101060 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10101064 mov dword ptr [ecx + 0x10014], eax */ { const u32 m_ = (u32)(ecx + 0x10014u); M32(m_) = (u32)(eax); }
  /* 1010106a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101070(CPU *c) {
  NATIVE_HOOK(0x10101070u) REGS; LOADALL;
L_10101070:;
  /* 10101070 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101076 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010107bu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101076u); RETCHK(0x1010107bu, 0x10101076u); LOADALL;
  /* 1010107b mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010107f mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 10101081 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101083 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101084 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101085 call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101087u; SAVEALL; call_ind(c, t_); RETCHK(0x10101087u, 0x10101085u); LOADALL; }
  /* 10101087 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101090(CPU *c) {
  NATIVE_HOOK(0x10101090u) REGS; LOADALL;
L_10101090:;
  /* 10101090 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101096 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101097 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010109cu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101097u); RETCHK(0x1010109cu, 0x10101097u); LOADALL;
  /* 1010109c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101010a0 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101010a2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101010a4 cmp bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101010a7 sete bl */ { ebx = (ebx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 101010aa inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101010ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101010ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101010ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101010ae call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101010b1u; SAVEALL; call_ind(c, t_); RETCHK(0x101010b1u, 0x101010aeu); LOADALL; }
  /* 101010b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101010b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101170(CPU *c) {
  NATIVE_HOOK(0x10101170u) REGS; LOADALL;
L_10101170:;
  /* 10101170 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101171 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101172 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101173 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10101177 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10101179 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1010117b mov ecx, dword ptr [esi + 0x10014] */ { const u32 m_ = (u32)(esi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101181 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101182 lea ebx, [edi + 4] */ ebx = (u32)((u32)(edi + 0x4u));
  /* 10101185 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101186 call 0x101039c0 */ esp -= 4; M32(esp) = 0x1010118bu; SAVEALL; F_101039c0(c); ABI_CHECK(0x101039c0u, 0x10101186u); RETCHK(0x1010118bu, 0x10101186u); LOADALL;
  /* 1010118b mov ecx, dword ptr [esi + 0x10014] */ { const u32 m_ = (u32)(esi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101191 call 0x10101910 */ esp -= 4; M32(esp) = 0x10101196u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101191u); RETCHK(0x10101196u, 0x10101191u); LOADALL;
  /* 10101196 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101198 add edi, 0x84 */ { u32 a_ = edi, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010119e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010119f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101011a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101011a1 call dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101011a4u; SAVEALL; call_ind(c, t_); RETCHK(0x101011a4u, 0x101011a1u); LOADALL; }
  /* 101011a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101011a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101011a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101011a7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101011b0(CPU *c) {
  NATIVE_HOOK(0x101011b0u) REGS; LOADALL;
L_101011b0:;
  /* 101011b0 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101011b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101011b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101011b8 call 0x10101910 */ esp -= 4; M32(esp) = 0x101011bdu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101011b8u); RETCHK(0x101011bdu, 0x101011b8u); LOADALL;
  /* 101011bd mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101011c1 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101011c3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101011c5 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 101011c8 cmp bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101011cb sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 101011ce push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101011cf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101011d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101011d1 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101011d4u; SAVEALL; call_ind(c, t_); RETCHK(0x101011d4u, 0x101011d1u); LOADALL; }
  /* 101011d4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101011d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101011d6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101011e0(CPU *c) {
  NATIVE_HOOK(0x101011e0u) REGS; LOADALL;
L_101011e0:;
  /* 101011e0 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101011e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101011e7 call 0x10101910 */ esp -= 4; M32(esp) = 0x101011ecu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101011e7u); RETCHK(0x101011ecu, 0x101011e7u); LOADALL;
  /* 101011ec mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101011f0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101011f2 lea esi, [ecx + 0x80] */ esi = (u32)((u32)(ecx + 0x80u));
  /* 101011f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101011f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101011fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101011fb call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101011feu; SAVEALL; call_ind(c, t_); RETCHK(0x101011feu, 0x101011fbu); LOADALL; }
  /* 101011fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101011ff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101210(CPU *c) {
  NATIVE_HOOK(0x10101210u) REGS; LOADALL;
L_10101210:;
  /* 10101210 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101216 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101217 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1010121b cmp byte ptr [esi + 1], 1 */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010121f jne 0x1010123c */ if (!ZF_) goto L_1010123c;
  /* 10101221 call 0x10101910 */ esp -= 4; M32(esp) = 0x10101226u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101221u); RETCHK(0x10101226u, 0x10101221u); LOADALL;
  /* 10101226 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101228 lea edx, [esi + 5] */ edx = (u32)((u32)(esi + 0x5u));
  /* 1010122b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010122c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1010122e mov dl, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101231 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101232 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10101234 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101235 call dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101238u; SAVEALL; call_ind(c, t_); RETCHK(0x10101238u, 0x10101235u); LOADALL; }
  /* 10101238 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101239 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1010123c:;
  /* 1010123c call 0x10101910 */ esp -= 4; M32(esp) = 0x10101241u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x1010123cu); RETCHK(0x10101241u, 0x1010123cu); LOADALL;
  /* 10101241 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101243 lea edx, [esi + 9] */ edx = (u32)((u32)(esi + 0x9u));
  /* 10101246 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101247 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10101249 mov dl, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010124c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010124d mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10101250 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101251 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101252 call dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101255u; SAVEALL; call_ind(c, t_); RETCHK(0x10101255u, 0x10101252u); LOADALL; }
  /* 10101255 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101256 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101260(CPU *c) {
  NATIVE_HOOK(0x10101260u) REGS; LOADALL;
L_10101260:;
  /* 10101260 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101266 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101267 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010126cu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101267u); RETCHK(0x1010126cu, 0x10101267u); LOADALL;
  /* 1010126c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10101270 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10101272 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 10101275 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10101277 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101278 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101279 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010127a call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010127du; SAVEALL; call_ind(c, t_); RETCHK(0x1010127du, 0x1010127au); LOADALL; }
  /* 1010127d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010127e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101290(CPU *c) {
  NATIVE_HOOK(0x10101290u) REGS; LOADALL;
L_10101290:;
  /* 10101290 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101296 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101297 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010129cu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101297u); RETCHK(0x1010129cu, 0x10101297u); LOADALL;
  /* 1010129c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101012a0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101012a2 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 101012a5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 101012a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101012a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101012a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101012aa call dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101012adu; SAVEALL; call_ind(c, t_); RETCHK(0x101012adu, 0x101012aau); LOADALL; }
  /* 101012ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101012ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101012c0(CPU *c) {
  NATIVE_HOOK(0x101012c0u) REGS; LOADALL;
L_101012c0:;
  /* 101012c0 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101012c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101012c7 call 0x10101910 */ esp -= 4; M32(esp) = 0x101012ccu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101012c7u); RETCHK(0x101012ccu, 0x101012c7u); LOADALL;
  /* 101012cc mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101012d0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 101012d2 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 101012d5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 101012d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101012d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101012d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101012da call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101012ddu; SAVEALL; call_ind(c, t_); RETCHK(0x101012ddu, 0x101012dau); LOADALL; }
  /* 101012dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101012de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101012f0(CPU *c) {
  NATIVE_HOOK(0x101012f0u) REGS; LOADALL;
L_101012f0:;
  /* 101012f0 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101012f6 call 0x10101910 */ esp -= 4; M32(esp) = 0x101012fbu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101012f6u); RETCHK(0x101012fbu, 0x101012f6u); LOADALL;
  /* 101012fb mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 101012fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101012fe call dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101301u; SAVEALL; call_ind(c, t_); RETCHK(0x10101301u, 0x101012feu); LOADALL; }
  /* 10101301 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10101310(CPU *c) {
  NATIVE_HOOK(0x10101310u) REGS; LOADALL;
L_10101310:;
  /* 10101310 mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101316 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101317 call 0x10101910 */ esp -= 4; M32(esp) = 0x1010131cu; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101317u); RETCHK(0x1010131cu, 0x10101317u); LOADALL;
  /* 1010131c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10101320 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10101322 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 10101325 movzx ecx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M8(m_)); }
  /* 10101328 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101329 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010132a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010132b call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010132eu; SAVEALL; call_ind(c, t_); RETCHK(0x1010132eu, 0x1010132bu); LOADALL; }
  /* 1010132e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010132f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101340(CPU *c) {
  NATIVE_HOOK(0x10101340u) REGS; LOADALL;
  goto L_10101340;
L_101010c0:;
  /* 101010c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101010c1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101010c5 cmp word ptr [esi + 4], 0x40 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M16(m_), b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101010ca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101010cb mov edi, ecx */ { edi = (u32)(ecx); }
  /* 101010cd ja 0x1010111c */ if (!(CF_|ZF_)) goto L_1010111c;
  /* 101010cf cmp byte ptr [esi + 6], 0xa */ { const u32 m_ = (u32)(esi + 0x6u); u32 a_ = M8(m_), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101010d3 ja 0x1010111c */ if (!(CF_|ZF_)) goto L_1010111c;
  /* 101010d5 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 101010d7 mov ecx, dword ptr [edi + 0x10014] */ { const u32 m_ = (u32)(edi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101010dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101010de call 0x10101920 */ esp -= 4; M32(esp) = 0x101010e3u; SAVEALL; F_10101920(c); ABI_CHECK(0x10101920u, 0x101010deu); RETCHK(0x101010e3u, 0x101010deu); LOADALL;
  /* 101010e3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 101010e5 mov cx, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 101010e9 lea edx, [esi + 7] */ edx = (u32)((u32)(esi + 0x7u));
  /* 101010ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101010ed mov ecx, dword ptr [edi + 0x10014] */ { const u32 m_ = (u32)(edi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101010f3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101010f4 call 0x10102290 */ esp -= 4; M32(esp) = 0x101010f9u; SAVEALL; F_10102290(c); ABI_CHECK(0x10102290u, 0x101010f4u); RETCHK(0x101010f9u, 0x101010f4u); LOADALL;
  /* 101010f9 mov ecx, dword ptr [edi + 0x10014] */ { const u32 m_ = (u32)(edi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101010ff xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101101 mov al, byte ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101104 add esi, 0x2087 */ { u32 a_ = esi, b_ = 0x2087u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010110a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010110b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010110c call 0x10102310 */ esp -= 4; M32(esp) = 0x10101111u; SAVEALL; F_10102310(c); ABI_CHECK(0x10102310u, 0x1010110cu); RETCHK(0x10101111u, 0x1010110cu); LOADALL;
  /* 10101111 mov ecx, dword ptr [edi + 0x10014] */ { const u32 m_ = (u32)(edi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101117 call 0x10101930 */ esp -= 4; M32(esp) = 0x1010111cu; SAVEALL; F_10101930(c); ABI_CHECK(0x10101930u, 0x10101117u); RETCHK(0x1010111cu, 0x10101117u); LOADALL;
L_1010111c:;
  /* 1010111c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010111d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010111e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10101130:;
  /* 10101130 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101131 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10101133 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10101137 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101139 mov ax, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010113c cmp ax, 0x40 */ { u32 a_ = (eax & 0xffffu), b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10101140 ja 0x1010115d */ if (!(CF_|ZF_)) goto L_1010115d;
  /* 10101142 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10101145 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101146 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101147 mov ecx, dword ptr [esi + 0x10014] */ { const u32 m_ = (u32)(esi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 1010114d call 0x101018d0 */ esp -= 4; M32(esp) = 0x10101152u; SAVEALL; F_101018d0(c); ABI_CHECK(0x101018d0u, 0x1010114du); RETCHK(0x10101152u, 0x1010114du); LOADALL;
  /* 10101152 mov ecx, dword ptr [esi + 0x10014] */ { const u32 m_ = (u32)(esi + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101158 call 0x10101930 */ esp -= 4; M32(esp) = 0x1010115du; SAVEALL; F_10101930(c); ABI_CHECK(0x10101930u, 0x10101158u); RETCHK(0x1010115du, 0x10101158u); LOADALL;
L_1010115d:;
  /* 1010115d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010115e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10101340:;
  /* 10101340 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10101344 mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101346 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10101348 jne 0x10101366 */ if (!ZF_) goto L_10101366;
  /* 1010134a mov ecx, dword ptr [ecx + 0x10014] */ { const u32 m_ = (u32)(ecx + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 10101350 call 0x10101910 */ esp -= 4; M32(esp) = 0x10101355u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x10101350u); RETCHK(0x10101355u, 0x10101350u); LOADALL;
  /* 10101355 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10101357 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10101359 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1010135b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1010135d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1010135f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101360 call dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101363u; SAVEALL; call_ind(c, t_); RETCHK(0x10101363u, 0x10101360u); LOADALL; }
L_10101363:;
  /* 10101363 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10101366:;
  /* 10101366 cmp al, 0xb */ { u32 a_ = (eax & 0xffu), b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10101368 jne 0x10101376 */ if (!ZF_) goto L_10101376;
  /* 1010136a add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1010136d mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 10101371 jmp 0x101010c0 */ goto L_101010c0;
L_10101376:;
  /* 10101376 cmp al, 0xc */ { u32 a_ = (eax & 0xffu), b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10101378 jne 0x10101363 */ if (!ZF_) goto L_10101363;
  /* 1010137a add edx, 0x2598 */ { u32 a_ = edx, b_ = 0x2598u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10101380 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 10101384 jmp 0x10101130 */ goto L_10101130;
}

void F_10101390(CPU *c) {
  NATIVE_HOOK(0x10101390u) REGS; LOADALL;
L_10101390:;
  /* 10101390 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10101391 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10101393 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10101396 mov eax, 0x411c */ { eax = (u32)(0x411cu); }
  /* 1010139b call 0x10105720 */ esp -= 4; M32(esp) = 0x101013a0u; SAVEALL; F_10105720(c); ABI_CHECK(0x10105720u, 0x1010139bu); RETCHK(0x101013a0u, 0x1010139bu); LOADALL;
  /* 101013a0 mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 101013a5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101013a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101013a7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101013aa mov dx, word ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 101013ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101013ae mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 101013b2 mov dword ptr [esp + 0x4124], eax */ { const u32 m_ = (u32)(esp + 0x4124u); M32(m_) = (u32)(eax); }
  /* 101013b9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101013bb xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 101013bd cmp dx, bx */ { u32 a_ = (edx & 0xffffu), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101013c0 mov ecx, 0x820 */ { ecx = (u32)(0x820u); }
  /* 101013c5 lea edi, [esp + 0x20a0] */ edi = (u32)((u32)(esp + 0x20a0u));
  /* 101013cc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 101013ce mov ecx, 0x820 */ { ecx = (u32)(0x820u); }
  /* 101013d3 lea edi, [esp + 0x20] */ edi = (u32)((u32)(esp + 0x20u));
  /* 101013d7 mov dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebx); }
  /* 101013db mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 101013df rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 101013e1 jbe 0x10101499 */ if ((CF_|ZF_)) goto L_10101499;
  /* 101013e7 movzx eax, dx */ { eax = (u32)((edx & 0xffffu)); }
  /* 101013ea add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101013ed mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
L_101013f1:;
  /* 101013f1 cmp byte ptr [esi - 2], 1 */ { const u32 m_ = (u32)(esi + 0xfffffffeu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101013f5 jne 0x10101446 */ if (!ZF_) goto L_10101446;
  /* 101013f7 movzx eax, word ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M16(m_)); }
  /* 101013fc mov cl, byte ptr [esi - 1] */ { const u32 m_ = (u32)(esi + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101013ff imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10101405 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101407 lea edi, [esp + eax + 0x20a2] */ edi = (u32)((u32)(esp + eax + 0x20a2u));
  /* 1010140e mov byte ptr [esp + eax + 0x20a1], cl */ { const u32 m_ = (u32)(esp + eax + 0x20a1u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10101415 mov byte ptr [edi + 0x7f], bl */ { const u32 m_ = (u32)(edi + 0x7fu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101418 jne 0x10101427 */ if (!ZF_) goto L_10101427;
  /* 1010141a mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010141e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010141f mov byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101421 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10101425 jmp 0x10101484 */ goto L_10101484;
L_10101427:;
  /* 10101427 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 1010142c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010142d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010142e call 0x101050f0 */ esp -= 4; M32(esp) = 0x10101433u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x1010142eu); RETCHK(0x10101433u, 0x1010142eu); LOADALL;
  /* 10101433 mov al, byte ptr [edi + 0x7f] */ { const u32 m_ = (u32)(edi + 0x7fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101436 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101439 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010143b je 0x10101440 */ if (ZF_) goto L_10101440;
  /* 1010143d mov byte ptr [edi + 0x7f], bl */ { const u32 m_ = (u32)(edi + 0x7fu); M8(m_) = (u8)((ebx & 0xffu)); }
L_10101440:;
  /* 10101440 inc dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10101444 jmp 0x10101484 */ goto L_10101484;
L_10101446:;
  /* 10101446 movzx eax, word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M16(m_)); }
  /* 1010144b mov dl, byte ptr [esi - 1] */ { const u32 m_ = (u32)(esi + 0xffffffffu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010144e imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10101454 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101456 lea edi, [esp + eax + 0x22] */ edi = (u32)((u32)(esp + eax + 0x22u));
  /* 1010145a mov byte ptr [esp + eax + 0x21], dl */ { const u32 m_ = (u32)(esp + eax + 0x21u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1010145e mov byte ptr [edi + 0x7f], bl */ { const u32 m_ = (u32)(edi + 0x7fu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101461 jne 0x10101467 */ if (!ZF_) goto L_10101467;
  /* 10101463 mov byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101465 jmp 0x10101480 */ goto L_10101480;
L_10101467:;
  /* 10101467 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 1010146c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010146d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010146e call 0x101050f0 */ esp -= 4; M32(esp) = 0x10101473u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x1010146eu); RETCHK(0x10101473u, 0x1010146eu); LOADALL;
  /* 10101473 mov al, byte ptr [edi + 0x7f] */ { const u32 m_ = (u32)(edi + 0x7fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101476 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101479 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010147b je 0x10101480 */ if (ZF_) goto L_10101480;
  /* 1010147d mov byte ptr [edi + 0x7f], bl */ { const u32 m_ = (u32)(edi + 0x7fu); M8(m_) = (u8)((ebx & 0xffu)); }
L_10101480:;
  /* 10101480 inc dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10101484:;
  /* 10101484 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10101488 add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010148e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010148f mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 10101493 jne 0x101013f1 */ if (!ZF_) goto L_101013f1;
L_10101499:;
  /* 10101499 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 1010149d mov ecx, dword ptr [eax + 0x10014] */ { const u32 m_ = (u32)(eax + 0x10014u); ecx = (u32)(M32(m_)); }
  /* 101014a3 call 0x10101910 */ esp -= 4; M32(esp) = 0x101014a8u; SAVEALL; F_10101910(c); ABI_CHECK(0x10101910u, 0x101014a3u); RETCHK(0x101014a8u, 0x101014a3u); LOADALL;
  /* 101014a8 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 101014ac mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 101014ae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101014af lea edx, [esp + 0x24] */ edx = (u32)((u32)(esp + 0x24u));
  /* 101014b3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101014b4 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 101014b8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101014b9 lea edx, [esp + 0x20ac] */ edx = (u32)((u32)(esp + 0x20acu));
  /* 101014c0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101014c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101014c2 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101014c5u; SAVEALL; call_ind(c, t_); RETCHK(0x101014c5u, 0x101014c2u); LOADALL; }
  /* 101014c5 mov ecx, dword ptr [esp + 0x4124] */ { const u32 m_ = (u32)(esp + 0x4124u); ecx = (u32)(M32(m_)); }
  /* 101014cc call 0x1010570f */ esp -= 4; M32(esp) = 0x101014d1u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101014ccu); RETCHK(0x101014d1u, 0x101014ccu); LOADALL;
  /* 101014d1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101014d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101014d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101014d4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101014d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101014d7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_101014e0(CPU *c) {
  NATIVE_HOOK(0x101014e0u) REGS; LOADALL;
L_101014e0:;
  /* 101014e0 mov eax, 0x8004 */ { eax = (u32)(0x8004u); }
  /* 101014e5 call 0x10105720 */ esp -= 4; M32(esp) = 0x101014eau; SAVEALL; F_10105720(c); ABI_CHECK(0x10105720u, 0x101014e5u); RETCHK(0x101014eau, 0x101014e5u); LOADALL;
  /* 101014ea mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 101014ef mov dword ptr [esp + 0x8000], eax */ { const u32 m_ = (u32)(esp + 0x8000u); M32(m_) = (u32)(eax); }
  /* 101014f6 mov eax, dword ptr [esp + 0x800c] */ { const u32 m_ = (u32)(esp + 0x800cu); eax = (u32)(M32(m_)); }
  /* 101014fd cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101500 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101501 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10101503 jb 0x101016ea */ if (CF_) goto L_101016ea;
  /* 10101509 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010150a mov esi, dword ptr [esp + 0x8010] */ { const u32 m_ = (u32)(esp + 0x8010u); esi = (u32)(M32(m_)); }
  /* 10101511 movzx edx, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); edx = (u32)(M8(m_)); }
  /* 10101515 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 10101519 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010151a movzx ecx, word ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M16(m_)); }
  /* 1010151d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010151e lea eax, [edx + esi + 4] */ eax = (u32)((u32)(edx + esi + 0x4u));
  /* 10101522 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101523 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101524 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101526 call 0x10104a80 */ esp -= 4; M32(esp) = 0x1010152bu; SAVEALL; F_10104a80(c); ABI_CHECK(0x10104a80u, 0x10101526u); RETCHK(0x1010152bu, 0x10101526u); LOADALL;
  /* 1010152b movzx eax, word ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M16(m_)); }
  /* 1010152e add eax, 0xffffff34 */ { u32 a_ = eax, b_ = 0xffffff34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10101533 cmp eax, 0x18 */ { u32 a_ = eax, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101536 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101537 ja 0x101016ea */ if (!(CF_|ZF_)) goto L_101016ea;
  /* 1010153d movzx edx, byte ptr [eax + 0x10101738] */ { const u32 m_ = (u32)(eax + 0x10101738u); edx = (u32)(M8(m_)); }
  /* 10101544 jmp dword ptr [edx*4 + 0x10101700] */ { const u32 m_ = (u32)(edx * 4u + 0x10101700u); u32 t_ = M32(m_); switch (t_) { case 0x1010154bu: goto L_1010154b; case 0x1010156du: goto L_1010156d; case 0x1010158fu: goto L_1010158f; case 0x101015b1u: goto L_101015b1; case 0x101015d3u: goto L_101015d3; case 0x101015f5u: goto L_101015f5; case 0x10101617u: goto L_10101617; case 0x10101639u: goto L_10101639; case 0x1010165bu: goto L_1010165b; case 0x1010167du: goto L_1010167d; case 0x1010169fu: goto L_1010169f; case 0x101016c1u: goto L_101016c1; case 0x101016deu: goto L_101016de; case 0x101016eau: goto L_101016ea; default: SAVEALL; call_ind(c, t_); return; } }
L_1010154b:;
  /* 1010154b lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 1010154f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101550 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101552 call 0x10101070 */ esp -= 4; M32(esp) = 0x10101557u; SAVEALL; F_10101070(c); ABI_CHECK(0x10101070u, 0x10101552u); RETCHK(0x10101557u, 0x10101552u); LOADALL;
  /* 10101557 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101558 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 1010155f call 0x1010570f */ esp -= 4; M32(esp) = 0x10101564u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x1010155fu); RETCHK(0x10101564u, 0x1010155fu); LOADALL;
  /* 10101564 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010156a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1010156d:;
  /* 1010156d lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10101571 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101572 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101574 call 0x10101090 */ esp -= 4; M32(esp) = 0x10101579u; SAVEALL; F_10101090(c); ABI_CHECK(0x10101090u, 0x10101574u); RETCHK(0x10101579u, 0x10101574u); LOADALL;
  /* 10101579 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010157a mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 10101581 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101586u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101581u); RETCHK(0x10101586u, 0x10101581u); LOADALL;
  /* 10101586 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010158c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1010158f:;
  /* 1010158f lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 10101593 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101594 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101596 call 0x10101170 */ esp -= 4; M32(esp) = 0x1010159bu; SAVEALL; F_10101170(c); ABI_CHECK(0x10101170u, 0x10101596u); RETCHK(0x1010159bu, 0x10101596u); LOADALL;
  /* 1010159b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010159c mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101015a3 call 0x1010570f */ esp -= 4; M32(esp) = 0x101015a8u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101015a3u); RETCHK(0x101015a8u, 0x101015a3u); LOADALL;
  /* 101015a8 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101015ae ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_101015b1:;
  /* 101015b1 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 101015b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101015b6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101015b8 call 0x101011b0 */ esp -= 4; M32(esp) = 0x101015bdu; SAVEALL; F_101011b0(c); ABI_CHECK(0x101011b0u, 0x101015b8u); RETCHK(0x101015bdu, 0x101015b8u); LOADALL;
  /* 101015bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101015be mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101015c5 call 0x1010570f */ esp -= 4; M32(esp) = 0x101015cau; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101015c5u); RETCHK(0x101015cau, 0x101015c5u); LOADALL;
  /* 101015ca add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101015d0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_101015d3:;
  /* 101015d3 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 101015d7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101015d8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101015da call 0x101011e0 */ esp -= 4; M32(esp) = 0x101015dfu; SAVEALL; F_101011e0(c); ABI_CHECK(0x101011e0u, 0x101015dau); RETCHK(0x101015dfu, 0x101015dau); LOADALL;
  /* 101015df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101015e0 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101015e7 call 0x1010570f */ esp -= 4; M32(esp) = 0x101015ecu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101015e7u); RETCHK(0x101015ecu, 0x101015e7u); LOADALL;
  /* 101015ec add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101015f2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_101015f5:;
  /* 101015f5 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 101015f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101015fa mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101015fc call 0x10101390 */ esp -= 4; M32(esp) = 0x10101601u; SAVEALL; F_10101390(c); ABI_CHECK(0x10101390u, 0x101015fcu); RETCHK(0x10101601u, 0x101015fcu); LOADALL;
  /* 10101601 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101602 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 10101609 call 0x1010570f */ esp -= 4; M32(esp) = 0x1010160eu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101609u); RETCHK(0x1010160eu, 0x10101609u); LOADALL;
  /* 1010160e add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101614 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10101617:;
  /* 10101617 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 1010161b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010161c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1010161e call 0x10101210 */ esp -= 4; M32(esp) = 0x10101623u; SAVEALL; F_10101210(c); ABI_CHECK(0x10101210u, 0x1010161eu); RETCHK(0x10101623u, 0x1010161eu); LOADALL;
  /* 10101623 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101624 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 1010162b call 0x1010570f */ esp -= 4; M32(esp) = 0x10101630u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x1010162bu); RETCHK(0x10101630u, 0x1010162bu); LOADALL;
  /* 10101630 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101636 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10101639:;
  /* 10101639 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 1010163d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010163e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101640 call 0x10101260 */ esp -= 4; M32(esp) = 0x10101645u; SAVEALL; F_10101260(c); ABI_CHECK(0x10101260u, 0x10101640u); RETCHK(0x10101645u, 0x10101640u); LOADALL;
  /* 10101645 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101646 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 1010164d call 0x1010570f */ esp -= 4; M32(esp) = 0x10101652u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x1010164du); RETCHK(0x10101652u, 0x1010164du); LOADALL;
  /* 10101652 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101658 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1010165b:;
  /* 1010165b lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 1010165f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101660 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101662 call 0x10101290 */ esp -= 4; M32(esp) = 0x10101667u; SAVEALL; F_10101290(c); ABI_CHECK(0x10101290u, 0x10101662u); RETCHK(0x10101667u, 0x10101662u); LOADALL;
  /* 10101667 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101668 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 1010166f call 0x1010570f */ esp -= 4; M32(esp) = 0x10101674u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x1010166fu); RETCHK(0x10101674u, 0x1010166fu); LOADALL;
  /* 10101674 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010167a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1010167d:;
  /* 1010167d lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10101681 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101682 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101684 call 0x101012c0 */ esp -= 4; M32(esp) = 0x10101689u; SAVEALL; F_101012c0(c); ABI_CHECK(0x101012c0u, 0x10101684u); RETCHK(0x10101689u, 0x10101684u); LOADALL;
  /* 10101689 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010168a mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 10101691 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101696u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101691u); RETCHK(0x10101696u, 0x10101691u); LOADALL;
  /* 10101696 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010169c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1010169f:;
  /* 1010169f lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 101016a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101016a4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101016a6 call 0x10101340 */ esp -= 4; M32(esp) = 0x101016abu; SAVEALL; F_10101340(c); ABI_CHECK(0x10101340u, 0x101016a6u); RETCHK(0x101016abu, 0x101016a6u); LOADALL;
  /* 101016ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101016ac mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101016b3 call 0x1010570f */ esp -= 4; M32(esp) = 0x101016b8u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101016b3u); RETCHK(0x101016b8u, 0x101016b3u); LOADALL;
  /* 101016b8 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101016be ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_101016c1:;
  /* 101016c1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101016c3 call 0x101012f0 */ esp -= 4; M32(esp) = 0x101016c8u; SAVEALL; F_101012f0(c); ABI_CHECK(0x101012f0u, 0x101016c3u); RETCHK(0x101016c8u, 0x101016c3u); LOADALL;
  /* 101016c8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101016c9 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101016d0 call 0x1010570f */ esp -= 4; M32(esp) = 0x101016d5u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101016d0u); RETCHK(0x101016d5u, 0x101016d0u); LOADALL;
  /* 101016d5 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101016db ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_101016de:;
  /* 101016de lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 101016e2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101016e3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101016e5 call 0x10101310 */ esp -= 4; M32(esp) = 0x101016eau; SAVEALL; F_10101310(c); ABI_CHECK(0x10101310u, 0x101016e5u); RETCHK(0x101016eau, 0x101016e5u); LOADALL;
L_101016ea:;
  /* 101016ea mov ecx, dword ptr [esp + 0x8004] */ { const u32 m_ = (u32)(esp + 0x8004u); ecx = (u32)(M32(m_)); }
  /* 101016f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101016f2 call 0x1010570f */ esp -= 4; M32(esp) = 0x101016f7u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101016f2u); RETCHK(0x101016f7u, 0x101016f2u); LOADALL;
  /* 101016f7 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101016fd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1010154b(CPU *c) {
  NATIVE_HOOK(0x1010154bu) REGS; LOADALL;
L_1010154b:;
  /* 1010154b lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 1010154f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101550 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101552 call 0x10101070 */ esp -= 4; M32(esp) = 0x10101557u; SAVEALL; F_10101070(c); ABI_CHECK(0x10101070u, 0x10101552u); RETCHK(0x10101557u, 0x10101552u); LOADALL;
  /* 10101557 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101558 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 1010155f call 0x1010570f */ esp -= 4; M32(esp) = 0x10101564u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x1010155fu); RETCHK(0x10101564u, 0x1010155fu); LOADALL;
  /* 10101564 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010156a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1010156d(CPU *c) {
  NATIVE_HOOK(0x1010156du) REGS; LOADALL;
L_1010156d:;
  /* 1010156d lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10101571 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101572 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101574 call 0x10101090 */ esp -= 4; M32(esp) = 0x10101579u; SAVEALL; F_10101090(c); ABI_CHECK(0x10101090u, 0x10101574u); RETCHK(0x10101579u, 0x10101574u); LOADALL;
  /* 10101579 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010157a mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 10101581 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101586u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101581u); RETCHK(0x10101586u, 0x10101581u); LOADALL;
  /* 10101586 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010158c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1010158f(CPU *c) {
  NATIVE_HOOK(0x1010158fu) REGS; LOADALL;
L_1010158f:;
  /* 1010158f lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 10101593 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101594 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101596 call 0x10101170 */ esp -= 4; M32(esp) = 0x1010159bu; SAVEALL; F_10101170(c); ABI_CHECK(0x10101170u, 0x10101596u); RETCHK(0x1010159bu, 0x10101596u); LOADALL;
  /* 1010159b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010159c mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101015a3 call 0x1010570f */ esp -= 4; M32(esp) = 0x101015a8u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101015a3u); RETCHK(0x101015a8u, 0x101015a3u); LOADALL;
  /* 101015a8 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101015ae ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101015b1(CPU *c) {
  NATIVE_HOOK(0x101015b1u) REGS; LOADALL;
L_101015b1:;
  /* 101015b1 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 101015b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101015b6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101015b8 call 0x101011b0 */ esp -= 4; M32(esp) = 0x101015bdu; SAVEALL; F_101011b0(c); ABI_CHECK(0x101011b0u, 0x101015b8u); RETCHK(0x101015bdu, 0x101015b8u); LOADALL;
  /* 101015bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101015be mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101015c5 call 0x1010570f */ esp -= 4; M32(esp) = 0x101015cau; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101015c5u); RETCHK(0x101015cau, 0x101015c5u); LOADALL;
  /* 101015ca add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101015d0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101015d3(CPU *c) {
  NATIVE_HOOK(0x101015d3u) REGS; LOADALL;
L_101015d3:;
  /* 101015d3 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 101015d7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101015d8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101015da call 0x101011e0 */ esp -= 4; M32(esp) = 0x101015dfu; SAVEALL; F_101011e0(c); ABI_CHECK(0x101011e0u, 0x101015dau); RETCHK(0x101015dfu, 0x101015dau); LOADALL;
  /* 101015df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101015e0 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101015e7 call 0x1010570f */ esp -= 4; M32(esp) = 0x101015ecu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101015e7u); RETCHK(0x101015ecu, 0x101015e7u); LOADALL;
  /* 101015ec add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101015f2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101015f5(CPU *c) {
  NATIVE_HOOK(0x101015f5u) REGS; LOADALL;
L_101015f5:;
  /* 101015f5 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 101015f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101015fa mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101015fc call 0x10101390 */ esp -= 4; M32(esp) = 0x10101601u; SAVEALL; F_10101390(c); ABI_CHECK(0x10101390u, 0x101015fcu); RETCHK(0x10101601u, 0x101015fcu); LOADALL;
  /* 10101601 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101602 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 10101609 call 0x1010570f */ esp -= 4; M32(esp) = 0x1010160eu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101609u); RETCHK(0x1010160eu, 0x10101609u); LOADALL;
  /* 1010160e add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101614 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10101617(CPU *c) {
  NATIVE_HOOK(0x10101617u) REGS; LOADALL;
L_10101617:;
  /* 10101617 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 1010161b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010161c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1010161e call 0x10101210 */ esp -= 4; M32(esp) = 0x10101623u; SAVEALL; F_10101210(c); ABI_CHECK(0x10101210u, 0x1010161eu); RETCHK(0x10101623u, 0x1010161eu); LOADALL;
  /* 10101623 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101624 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 1010162b call 0x1010570f */ esp -= 4; M32(esp) = 0x10101630u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x1010162bu); RETCHK(0x10101630u, 0x1010162bu); LOADALL;
  /* 10101630 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101636 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10101639(CPU *c) {
  NATIVE_HOOK(0x10101639u) REGS; LOADALL;
L_10101639:;
  /* 10101639 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 1010163d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010163e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101640 call 0x10101260 */ esp -= 4; M32(esp) = 0x10101645u; SAVEALL; F_10101260(c); ABI_CHECK(0x10101260u, 0x10101640u); RETCHK(0x10101645u, 0x10101640u); LOADALL;
  /* 10101645 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101646 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 1010164d call 0x1010570f */ esp -= 4; M32(esp) = 0x10101652u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x1010164du); RETCHK(0x10101652u, 0x1010164du); LOADALL;
  /* 10101652 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101658 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1010165b(CPU *c) {
  NATIVE_HOOK(0x1010165bu) REGS; LOADALL;
L_1010165b:;
  /* 1010165b lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 1010165f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101660 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101662 call 0x10101290 */ esp -= 4; M32(esp) = 0x10101667u; SAVEALL; F_10101290(c); ABI_CHECK(0x10101290u, 0x10101662u); RETCHK(0x10101667u, 0x10101662u); LOADALL;
  /* 10101667 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101668 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 1010166f call 0x1010570f */ esp -= 4; M32(esp) = 0x10101674u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x1010166fu); RETCHK(0x10101674u, 0x1010166fu); LOADALL;
  /* 10101674 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010167a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1010167d(CPU *c) {
  NATIVE_HOOK(0x1010167du) REGS; LOADALL;
L_1010167d:;
  /* 1010167d lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10101681 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101682 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10101684 call 0x101012c0 */ esp -= 4; M32(esp) = 0x10101689u; SAVEALL; F_101012c0(c); ABI_CHECK(0x101012c0u, 0x10101684u); RETCHK(0x10101689u, 0x10101684u); LOADALL;
  /* 10101689 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010168a mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 10101691 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101696u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101691u); RETCHK(0x10101696u, 0x10101691u); LOADALL;
  /* 10101696 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010169c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1010169f(CPU *c) {
  NATIVE_HOOK(0x1010169fu) REGS; LOADALL;
L_1010169f:;
  /* 1010169f lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 101016a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101016a4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101016a6 call 0x10101340 */ esp -= 4; M32(esp) = 0x101016abu; SAVEALL; F_10101340(c); ABI_CHECK(0x10101340u, 0x101016a6u); RETCHK(0x101016abu, 0x101016a6u); LOADALL;
  /* 101016ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101016ac mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101016b3 call 0x1010570f */ esp -= 4; M32(esp) = 0x101016b8u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101016b3u); RETCHK(0x101016b8u, 0x101016b3u); LOADALL;
  /* 101016b8 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101016be ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101016c1(CPU *c) {
  NATIVE_HOOK(0x101016c1u) REGS; LOADALL;
L_101016c1:;
  /* 101016c1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101016c3 call 0x101012f0 */ esp -= 4; M32(esp) = 0x101016c8u; SAVEALL; F_101012f0(c); ABI_CHECK(0x101012f0u, 0x101016c3u); RETCHK(0x101016c8u, 0x101016c3u); LOADALL;
  /* 101016c8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101016c9 mov ecx, dword ptr [esp + 0x8000] */ { const u32 m_ = (u32)(esp + 0x8000u); ecx = (u32)(M32(m_)); }
  /* 101016d0 call 0x1010570f */ esp -= 4; M32(esp) = 0x101016d5u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101016d0u); RETCHK(0x101016d5u, 0x101016d0u); LOADALL;
  /* 101016d5 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101016db ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101016de(CPU *c) {
  NATIVE_HOOK(0x101016deu) REGS; LOADALL;
L_101016de:;
  /* 101016de lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 101016e2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101016e3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101016e5 call 0x10101310 */ esp -= 4; M32(esp) = 0x101016eau; SAVEALL; F_10101310(c); ABI_CHECK(0x10101310u, 0x101016e5u); RETCHK(0x101016eau, 0x101016e5u); LOADALL;
  /* 101016ea mov ecx, dword ptr [esp + 0x8004] */ { const u32 m_ = (u32)(esp + 0x8004u); ecx = (u32)(M32(m_)); }
  /* 101016f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101016f2 call 0x1010570f */ esp -= 4; M32(esp) = 0x101016f7u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101016f2u); RETCHK(0x101016f7u, 0x101016f2u); LOADALL;
  /* 101016f7 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101016fd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101016ea(CPU *c) {
  NATIVE_HOOK(0x101016eau) REGS; LOADALL;
L_101016ea:;
  /* 101016ea mov ecx, dword ptr [esp + 0x8004] */ { const u32 m_ = (u32)(esp + 0x8004u); ecx = (u32)(M32(m_)); }
  /* 101016f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101016f2 call 0x1010570f */ esp -= 4; M32(esp) = 0x101016f7u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101016f2u); RETCHK(0x101016f7u, 0x101016f2u); LOADALL;
  /* 101016f7 add esp, 0x8004 */ { u32 a_ = esp, b_ = 0x8004u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101016fd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10101700(CPU *c) {
  NATIVE_HOOK(0x10101700u) REGS; LOADALL;
L_10101700:;
  /* 10101700 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10101701 adc eax, 0x156d1010 */ { u32 a_ = eax, b_ = 0x156d1010u; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10101706 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  TRAP(0x10101708u, "undecodable");
}

void F_10101738(CPU *c) {
  NATIVE_HOOK(0x10101738u) REGS; LOADALL;
L_10101738:;
  /* 10101738 add byte ptr [0xd020d01], cl */ { const u32 m_ = (u32)(0xd020d01u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 1010173e add ecx, dword ptr [0xd050d04] */ { const u32 m_ = (u32)(0xd050d04u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10101744 push es */ TRAP(0x10101744u, "unimpl push es");
  /* 10101745 or eax, 0xd080d07 */ { u32 a_ = eax, b_ = 0xd080d07u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010174a or dword ptr [0xd0b0d0a], ecx */ { const u32 m_ = (u32)(0xd0b0d0au); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10101750 or al, 0xcc */ { u32 a_ = (eax & 0xffu), b_ = 0xccu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101752 int3 */ TRAP(0x10101752u, "int3");
}

void F_10101760(CPU *c) {
  NATIVE_HOOK(0x10101760u) REGS; LOADALL;
L_10101760:;
  /* 10101760 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10101770(CPU *c) {
  NATIVE_HOOK(0x10101770u) REGS; LOADALL;
L_10101770:;
  /* 10101770 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10101772 push 0x1010c73b */ { u32 v_ = 0x1010c73bu; esp -= 4; M32(esp) = v_; }
  /* 10101777 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1010177d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010177e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10101785 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101786 mov eax, dword ptr [0x10120c90] */ { const u32 m_ = (u32)(0x10120c90u); eax = (u32)(M32(m_)); }
  /* 1010178b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010178d jne 0x101017b8 */ if (!ZF_) goto L_101017b8;
  /* 1010178f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10101791 call 0x10104f6a */ esp -= 4; M32(esp) = 0x10101796u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x10101791u); RETCHK(0x10101796u, 0x10101791u); LOADALL;
  /* 10101796 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101799 mov dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(eax); }
  /* 1010179c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010179e mov dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 101017a6 je 0x101017b1 */ if (ZF_) goto L_101017b1;
  /* 101017a8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 101017aa call 0x10104e20 */ esp -= 4; M32(esp) = 0x101017afu; SAVEALL; F_10104e20(c); ABI_CHECK(0x10104e20u, 0x101017aau); RETCHK(0x101017afu, 0x101017aau); LOADALL;
  /* 101017af jmp 0x101017b3 */ goto L_101017b3;
L_101017b1:;
  /* 101017b1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_101017b3:;
  /* 101017b3 mov dword ptr [0x10120c90], eax */ { const u32 m_ = (u32)(0x10120c90u); M32(m_) = (u32)(eax); }
L_101017b8:;
  /* 101017b8 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 101017ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101017bc setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 101017bf mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 101017c1 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101017c5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101017cc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101017cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101017d0(CPU *c) {
  NATIVE_HOOK(0x101017d0u) REGS; LOADALL;
L_101017d0:;
  /* 101017d0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 101017d5 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_101017e0(CPU *c) {
  NATIVE_HOOK(0x101017e0u) REGS; LOADALL;
L_101017e0:;
  /* 101017e0 mov ecx, dword ptr [0x1010d158] */ { const u32 m_ = (u32)(0x1010d158u); ecx = (u32)(M32(m_)); }
  /* 101017e6 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101017ea mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 101017ec mov edx, dword ptr [0x1010d15c] */ { const u32 m_ = (u32)(0x1010d15cu); edx = (u32)(M32(m_)); }
  /* 101017f2 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 101017f5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10101800(CPU *c) {
  NATIVE_HOOK(0x10101800u) REGS; LOADALL;
L_10101800:;
  /* 10101800 mov eax, 0x1010d14c */ { eax = (u32)(0x1010d14cu); }
  /* 10101805 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101810(CPU *c) {
  NATIVE_HOOK(0x10101810u) REGS; LOADALL;
L_10101810:;
  /* 10101810 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10101816 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10101818 push 0x1010c75b */ { u32 v_ = 0x1010c75bu; esp -= 4; M32(esp) = v_; }
  /* 1010181d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010181e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10101825 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101826 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 1010182b call 0x101047f0 */ esp -= 4; M32(esp) = 0x10101830u; SAVEALL; F_101047f0(c); ABI_CHECK(0x101047f0u, 0x1010182bu); RETCHK(0x10101830u, 0x1010182bu); LOADALL;
  /* 10101830 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10101832 je 0x1010183c */ if (ZF_) goto L_1010183c;
  /* 10101834 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10101838 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010183a jne 0x10101850 */ if (!ZF_) goto L_10101850;
L_1010183c:;
  /* 1010183c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1010183e mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10101842 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10101849 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010184a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010184d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10101850:;
  /* 10101850 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10101854 push 0x10018 */ { u32 v_ = 0x10018u; esp -= 4; M32(esp) = v_; }
  /* 10101859 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 1010185c call 0x10104f6a */ esp -= 4; M32(esp) = 0x10101861u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x1010185cu); RETCHK(0x10101861u, 0x1010185cu); LOADALL;
  /* 10101861 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101864 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 10101868 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010186a mov dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 10101872 je 0x1010187d */ if (ZF_) goto L_1010187d;
  /* 10101874 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10101876 call 0x10101000 */ esp -= 4; M32(esp) = 0x1010187bu; SAVEALL; F_10101000(c); ABI_CHECK(0x10101000u, 0x10101876u); RETCHK(0x1010187bu, 0x10101876u); LOADALL;
  /* 1010187b jmp 0x1010187f */ goto L_1010187f;
L_1010187d:;
  /* 1010187d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1010187f:;
  /* 1010187f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101880 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10101882 mov dword ptr [esp + 0x10], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0xffffffffu); }
  /* 1010188a mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010188d call 0x10101060 */ esp -= 4; M32(esp) = 0x10101892u; SAVEALL; F_10101060(c); ABI_CHECK(0x10101060u, 0x1010188du); RETCHK(0x10101892u, 0x1010188du); LOADALL;
  /* 10101892 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10101896 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10101898 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1010189f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101018a0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101018a3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101018b0(CPU *c) {
  NATIVE_HOOK(0x101018b0u) REGS; LOADALL;
L_101018b0:;
  /* 101018b0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 101018b4 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101018b8 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 101018bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101018bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101018be mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101018c1 call 0x101014e0 */ esp -= 4; M32(esp) = 0x101018c6u; SAVEALL; F_101014e0(c); ABI_CHECK(0x101014e0u, 0x101018c1u); RETCHK(0x101018c6u, 0x101018c1u); LOADALL;
  /* 101018c6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_101018d0(CPU *c) {
  NATIVE_HOOK(0x101018d0u) REGS; LOADALL;
L_101018d0:;
  /* 101018d0 mov dx, word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 101018d5 cmp dx, word ptr [ecx + 0x20bc] */ { const u32 m_ = (u32)(ecx + 0x20bcu); u32 a_ = (edx & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101018dc jne 0x101018ff */ if (!ZF_) goto L_101018ff;
  /* 101018de test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 101018e1 jbe 0x101018ff */ if ((CF_|ZF_)) goto L_101018ff;
  /* 101018e3 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 101018e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101018e8 add ecx, 0x3c */ { u32 a_ = ecx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101018eb movzx esi, dx */ { esi = (u32)((edx & 0xffffu)); }
  /* 101018ee mov edi, edi */ { edi = (u32)(edi); }
L_101018f0:;
  /* 101018f0 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101018f2 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 101018f4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101018f5 add ecx, 0x82 */ { u32 a_ = ecx, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101018fb dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101018fc jne 0x101018f0 */ if (!ZF_) goto L_101018f0;
  /* 101018fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_101018ff:;
  /* 101018ff ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10101910(CPU *c) {
  NATIVE_HOOK(0x10101910u) REGS; LOADALL;
L_10101910:;
  /* 10101910 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10101913 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
