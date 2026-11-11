#include "funcs.h"

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

void F_10101920(CPU *c) {
  NATIVE_HOOK(0x10101920u) REGS; LOADALL;
L_10101920:;
  /* 10101920 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10101924 mov dword ptr [ecx + 0x38], eax */ { const u32 m_ = (u32)(ecx + 0x38u); M32(m_) = (u32)(eax); }
  /* 10101927 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10101930(CPU *c) {
  NATIVE_HOOK(0x10101930u) REGS; LOADALL;
L_10101930:;
  /* 10101930 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10101933 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10101935 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101936 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101937 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10101939 mov bl, byte ptr [ecx + 0x25c8] */ { const u32 m_ = (u32)(ecx + 0x25c8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010193f lea esi, [ecx + 0x20be] */ esi = (u32)((u32)(ecx + 0x20beu));
  /* 10101945 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101946 lea esi, [ecx + 0x3c] */ esi = (u32)((u32)(ecx + 0x3cu));
  /* 10101949 movzx ecx, word ptr [ecx + 0x20bc] */ { const u32 m_ = (u32)(ecx + 0x20bcu); ecx = (u32)(M16(m_)); }
  /* 10101950 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101951 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101952 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101953 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101954 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101957u; SAVEALL; call_ind(c, t_); RETCHK(0x10101957u, 0x10101954u); LOADALL; }
  /* 10101957 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101958 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101959 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10101960(CPU *c) {
  NATIVE_HOOK(0x10101960u) REGS; LOADALL;
L_10101960:;
  /* 10101960 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10101964 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10101968 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010196a je 0x1010197d */ if (ZF_) goto L_1010197d;
  /* 1010196c mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10101970 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_10101971:;
  /* 10101971 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 10101973 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 10101975 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10101978 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010197a jne 0x10101971 */ if (!ZF_) goto L_10101971;
  /* 1010197c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_1010197d:;
  /* 1010197d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10101980(CPU *c) {
  NATIVE_HOOK(0x10101980u) REGS; LOADALL;
L_10101980:;
  /* 10101980 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101981 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10101982 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10101986 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101987 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10101989 cmp dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010198c jae 0x10101993 */ if (!CF_) goto L_10101993;
  /* 1010198e call 0x10104fb5 */ esp -= 4; M32(esp) = 0x10101993u; SAVEALL; F_10104fb5(c); ABI_CHECK(0x10104fb5u, 0x1010198eu); RETCHK(0x10101993u, 0x1010198eu); LOADALL;
L_10101993:;
  /* 10101993 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10101996 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 1010199a sub eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010199c cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010199e jae 0x101019a2 */ if (!CF_) goto L_101019a2;
  /* 101019a0 mov edx, eax */ { edx = (u32)(eax); }
L_101019a2:;
  /* 101019a2 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101019a4 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 101019a8 je 0x101019d8 */ if (ZF_) goto L_101019d8;
  /* 101019aa cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101019ac mov ecx, edx */ { ecx = (u32)(edx); }
  /* 101019ae jb 0x101019b2 */ if (CF_) goto L_101019b2;
  /* 101019b0 mov ecx, ebx */ { ecx = (u32)(ebx); }
L_101019b2:;
  /* 101019b2 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101019b6 jb 0x101019bd */ if (CF_) goto L_101019bd;
  /* 101019b8 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 101019bb jmp 0x101019c0 */ goto L_101019c0;
L_101019bd:;
  /* 101019bd lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
L_101019c0:;
  /* 101019c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101019c1 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 101019c5 lea esi, [eax + ebp] */ esi = (u32)((u32)(eax + ebp));
  /* 101019c8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101019ca repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 101019cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101019cd je 0x101019d4 */ if (ZF_) goto L_101019d4;
  /* 101019cf sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 101019d1 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_101019d4:;
  /* 101019d4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101019d6 jne 0x101019ec */ if (!ZF_) goto L_101019ec;
L_101019d8:;
  /* 101019d8 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101019da jae 0x101019e5 */ if (!CF_) goto L_101019e5;
  /* 101019dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101019dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101019de or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101019e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101019e2 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_101019e5:;
  /* 101019e5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101019e7 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101019e9 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
L_101019ec:;
  /* 101019ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101019ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101019ee pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101019ef ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10101a00(CPU *c) {
  NATIVE_HOOK(0x10101a00u) REGS; LOADALL;
L_10101a00:;
  /* 10101a00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101a01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101a02 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10101a06 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10101a09 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10101a0b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101a0d jne 0x10101a16 */ if (!ZF_) goto L_10101a16;
  /* 10101a0f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101a10 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101a12 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101a13 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10101a16:;
  /* 10101a16 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10101a1a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101a1b mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10101a1f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101a20 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 10101a23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101a24 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 10101a28 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101a29 push 0xc9 */ { u32 v_ = 0xc9u; esp -= 4; M32(esp) = v_; }
  /* 10101a2e mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10101a33 mov dword ptr [edi + 0x38], ebx */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(ebx); }
  /* 10101a36 mov byte ptr [esp + 0x20], bl */ { const u32 m_ = (u32)(esp + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101a3a call 0x10104a40 */ esp -= 4; M32(esp) = 0x10101a3fu; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x10101a3au); RETCHK(0x10101a3fu, 0x10101a3au); LOADALL;
  /* 10101a3f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101a41 jge 0x10101a4b */ if (!LT_) goto L_10101a4b;
  /* 10101a43 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101a44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101a45 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101a47 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101a48 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10101a4b:;
  /* 10101a4b mov dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebx); }
  /* 10101a4f add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10101a52 mov word ptr [esp + 0x18], 0xc9 */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)(0xc9u); }
  /* 10101a59 mov byte ptr [esp + 0x1b], bl */ { const u32 m_ = (u32)(esp + 0x1bu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101a5d mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10101a61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101a62 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10101a64 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101a67 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10101a69 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101a6a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101a6b call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101a6eu; SAVEALL; call_ind(c, t_); RETCHK(0x10101a6eu, 0x10101a6bu); LOADALL; }
  /* 10101a6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101a6f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101a70 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101a71 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10101a80(CPU *c) {
  NATIVE_HOOK(0x10101a80u) REGS; LOADALL;
L_10101a80:;
  /* 10101a80 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101a81 mov edi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10101a85 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10101a88 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10101a8a jne 0x10101a92 */ if (!ZF_) goto L_10101a92;
  /* 10101a8c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101a8e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101a8f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10101a92:;
  /* 10101a92 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10101a96 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101a97 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10101a9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101a9c lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 10101a9f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101aa0 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10101aa4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101aa5 push 0xcb */ { u32 v_ = 0xcbu; esp -= 4; M32(esp) = v_; }
  /* 10101aaa mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10101aaf mov byte ptr [esp + 0x1c], 0 */ { const u32 m_ = (u32)(esp + 0x1cu); M8(m_) = (u8)(0x0u); }
  /* 10101ab4 call 0x10104a40 */ esp -= 4; M32(esp) = 0x10101ab9u; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x10101ab4u); RETCHK(0x10101ab9u, 0x10101ab4u); LOADALL;
  /* 10101ab9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10101abb jge 0x10101ac4 */ if (!LT_) goto L_10101ac4;
  /* 10101abd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101abe xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101ac0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101ac1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10101ac4:;
  /* 10101ac4 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10101acc add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10101acf mov word ptr [esp + 0x14], 0xcb */ { const u32 m_ = (u32)(esp + 0x14u); M16(m_) = (u16)(0xcbu); }
  /* 10101ad6 mov byte ptr [esp + 0x17], 0 */ { const u32 m_ = (u32)(esp + 0x17u); M8(m_) = (u8)(0x0u); }
  /* 10101adb mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10101adf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101ae0 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10101ae2 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101ae5 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10101ae7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101ae8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101ae9 call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101aecu; SAVEALL; call_ind(c, t_); RETCHK(0x10101aecu, 0x10101ae9u); LOADALL; }
  /* 10101aec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101aed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101aee ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10101b00(CPU *c) {
  NATIVE_HOOK(0x10101b00u) REGS; LOADALL;
L_10101b00:;
  /* 10101b00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101b01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101b02 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10101b06 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10101b09 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10101b0b jne 0x10101b14 */ if (!ZF_) goto L_10101b14;
  /* 10101b0d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101b0f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101b10 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10101b11 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10101b14:;
  /* 10101b14 mov eax, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); eax = (u32)(M32(m_)); }
  /* 10101b17 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10101b1b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101b1c mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10101b20 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101b21 lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 10101b24 mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10101b28 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101b29 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 10101b2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101b2e push 0xe1 */ { u32 v_ = 0xe1u; esp -= 4; M32(esp) = v_; }
  /* 10101b33 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10101b38 call 0x10104a40 */ esp -= 4; M32(esp) = 0x10101b3du; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x10101b38u); RETCHK(0x10101b3du, 0x10101b38u); LOADALL;
  /* 10101b3d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10101b3f jge 0x10101b49 */ if (!LT_) goto L_10101b49;
  /* 10101b41 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101b42 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101b44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101b45 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10101b46 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10101b49:;
  /* 10101b49 mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 10101b51 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10101b54 mov word ptr [esp + 0x10], 0xe1 */ { const u32 m_ = (u32)(esp + 0x10u); M16(m_) = (u16)(0xe1u); }
  /* 10101b5b mov byte ptr [esp + 0x13], 0 */ { const u32 m_ = (u32)(esp + 0x13u); M8(m_) = (u8)(0x0u); }
  /* 10101b60 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10101b64 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101b65 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10101b67 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101b6a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10101b6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101b6d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101b6e call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101b71u; SAVEALL; call_ind(c, t_); RETCHK(0x10101b71u, 0x10101b6eu); LOADALL; }
  /* 10101b71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101b72 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101b73 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10101b74 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10101b80(CPU *c) {
  NATIVE_HOOK(0x10101b80u) REGS; LOADALL;
L_10101b80:;
  /* 10101b80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10101b81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10101b83 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10101b86 sub esp, 0xf4 */ { u32 a_ = esp, b_ = 0xf4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101b8c mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10101b91 mov dword ptr [esp + 0xf0], eax */ { const u32 m_ = (u32)(esp + 0xf0u); M32(m_) = (u32)(eax); }
  /* 10101b98 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10101b9b mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101b9e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101b9f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10101ba1 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101ba3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101ba4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101ba5 je 0x10101c50 */ if (ZF_) goto L_10101c50;
  /* 10101bab xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101bad mov ecx, 0x39 */ { ecx = (u32)(0x39u); }
  /* 10101bb2 lea edi, [esp + 0x10] */ edi = (u32)((u32)(esp + 0x10u));
  /* 10101bb6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10101bb8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10101bbb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101bbd mov byte ptr [esp + 0x8f], bl */ { const u32 m_ = (u32)(esp + 0x8fu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101bc4 jne 0x10101bcc */ if (!ZF_) goto L_10101bcc;
  /* 10101bc6 mov byte ptr [esp + 0x10], bl */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101bca jmp 0x10101bf1 */ goto L_10101bf1;
L_10101bcc:;
  /* 10101bcc push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10101bd1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101bd2 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10101bd6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101bd7 call 0x101050f0 */ esp -= 4; M32(esp) = 0x10101bdcu; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x10101bd7u); RETCHK(0x10101bdcu, 0x10101bd7u); LOADALL;
  /* 10101bdc mov al, byte ptr [esp + 0x9b] */ { const u32 m_ = (u32)(esp + 0x9bu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101be3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101be6 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10101be8 je 0x10101bf1 */ if (ZF_) goto L_10101bf1;
  /* 10101bea mov byte ptr [esp + 0x8f], bl */ { const u32 m_ = (u32)(esp + 0x8fu); M8(m_) = (u8)((ebx & 0xffu)); }
L_10101bf1:;
  /* 10101bf1 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10101bf4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101bf6 mov byte ptr [esp + 0xf3], bl */ { const u32 m_ = (u32)(esp + 0xf3u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101bfd jne 0x10101c08 */ if (!ZF_) goto L_10101c08;
  /* 10101bff mov byte ptr [esp + 0x90], bl */ { const u32 m_ = (u32)(esp + 0x90u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101c06 jmp 0x10101c2d */ goto L_10101c2d;
L_10101c08:;
  /* 10101c08 push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 10101c0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101c0b lea edx, [esp + 0x98] */ edx = (u32)((u32)(esp + 0x98u));
  /* 10101c12 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101c13 call 0x101050f0 */ esp -= 4; M32(esp) = 0x10101c18u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x10101c13u); RETCHK(0x10101c18u, 0x10101c13u); LOADALL;
  /* 10101c18 mov al, byte ptr [esp + 0xff] */ { const u32 m_ = (u32)(esp + 0xffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101c1f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101c22 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10101c24 je 0x10101c2d */ if (ZF_) goto L_10101c2d;
  /* 10101c26 mov byte ptr [esp + 0xf3], bl */ { const u32 m_ = (u32)(esp + 0xf3u); M8(m_) = (u8)((ebx & 0xffu)); }
L_10101c2d:;
  /* 10101c2d mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10101c30 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10101c33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101c34 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 10101c37 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101c38 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 10101c3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101c3d push 0xcf */ { u32 v_ = 0xcfu; esp -= 4; M32(esp) = v_; }
  /* 10101c42 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10101c47 call 0x10104a40 */ esp -= 4; M32(esp) = 0x10101c4cu; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x10101c47u); RETCHK(0x10101c4cu, 0x10101c47u); LOADALL;
  /* 10101c4c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101c4e jge 0x10101c67 */ if (!LT_) goto L_10101c67;
L_10101c50:;
  /* 10101c50 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101c52 mov ecx, dword ptr [esp + 0xfc] */ { const u32 m_ = (u32)(esp + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 10101c59 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101c5eu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101c59u); RETCHK(0x10101c5eu, 0x10101c59u); LOADALL;
  /* 10101c5e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101c5f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101c60 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101c61 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10101c63 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10101c64 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_10101c67:;
  /* 10101c67 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10101c6a mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 10101c6e add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10101c71 mov word ptr [esp + 0xc], 0xcf */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)(0xcfu); }
  /* 10101c78 mov byte ptr [esp + 0xf], bl */ { const u32 m_ = (u32)(esp + 0xfu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101c7c mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101c80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101c81 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10101c83 mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101c86 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10101c88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101c89 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101c8a call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101c8du; SAVEALL; call_ind(c, t_); RETCHK(0x10101c8du, 0x10101c8au); LOADALL; }
  /* 10101c8d mov ecx, dword ptr [esp + 0xfc] */ { const u32 m_ = (u32)(esp + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 10101c94 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101c99u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101c94u); RETCHK(0x10101c99u, 0x10101c94u); LOADALL;
  /* 10101c99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101c9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101c9b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101c9c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10101c9e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10101c9f ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_10101cb0(CPU *c) {
  NATIVE_HOOK(0x10101cb0u) REGS; LOADALL;
L_10101cb0:;
  /* 10101cb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10101cb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10101cb3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10101cb6 sub esp, 0x8c */ { u32 a_ = esp, b_ = 0x8cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101cbc mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10101cc1 mov dword ptr [esp + 0x88], eax */ { const u32 m_ = (u32)(esp + 0x88u); M32(m_) = (u32)(eax); }
  /* 10101cc8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10101ccb mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101cce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101ccf xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10101cd1 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101cd3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101cd4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101cd5 je 0x10101d40 */ if (ZF_) goto L_10101d40;
  /* 10101cd7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101cd9 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 10101cde lea edi, [esp + 0x10] */ edi = (u32)((u32)(esp + 0x10u));
  /* 10101ce2 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10101ce4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10101ce7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101ce9 mov byte ptr [esp + 0x8f], bl */ { const u32 m_ = (u32)(esp + 0x8fu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101cf0 jne 0x10101cf8 */ if (!ZF_) goto L_10101cf8;
  /* 10101cf2 mov byte ptr [esp + 0x10], bl */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101cf6 jmp 0x10101d1d */ goto L_10101d1d;
L_10101cf8:;
  /* 10101cf8 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10101cfd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101cfe lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10101d02 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101d03 call 0x101050f0 */ esp -= 4; M32(esp) = 0x10101d08u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x10101d03u); RETCHK(0x10101d08u, 0x10101d03u); LOADALL;
  /* 10101d08 mov al, byte ptr [esp + 0x9b] */ { const u32 m_ = (u32)(esp + 0x9bu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101d0f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101d12 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10101d14 je 0x10101d1d */ if (ZF_) goto L_10101d1d;
  /* 10101d16 mov byte ptr [esp + 0x8f], bl */ { const u32 m_ = (u32)(esp + 0x8fu); M8(m_) = (u8)((ebx & 0xffu)); }
L_10101d1d:;
  /* 10101d1d mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10101d20 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10101d23 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101d24 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10101d27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101d28 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10101d2c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101d2d push 0xd5 */ { u32 v_ = 0xd5u; esp -= 4; M32(esp) = v_; }
  /* 10101d32 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10101d37 call 0x10104a40 */ esp -= 4; M32(esp) = 0x10101d3cu; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x10101d37u); RETCHK(0x10101d3cu, 0x10101d37u); LOADALL;
  /* 10101d3c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101d3e jge 0x10101d57 */ if (!LT_) goto L_10101d57;
L_10101d40:;
  /* 10101d40 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101d42 mov ecx, dword ptr [esp + 0x94] */ { const u32 m_ = (u32)(esp + 0x94u); ecx = (u32)(M32(m_)); }
  /* 10101d49 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101d4eu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101d49u); RETCHK(0x10101d4eu, 0x10101d49u); LOADALL;
  /* 10101d4e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101d4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101d50 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101d51 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10101d53 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10101d54 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10101d57:;
  /* 10101d57 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10101d5a mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 10101d5e add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10101d61 mov word ptr [esp + 0xc], 0xd5 */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)(0xd5u); }
  /* 10101d68 mov byte ptr [esp + 0xf], bl */ { const u32 m_ = (u32)(esp + 0xfu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101d6c mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10101d70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101d71 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 10101d73 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101d76 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10101d78 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101d79 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101d7a call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101d7du; SAVEALL; call_ind(c, t_); RETCHK(0x10101d7du, 0x10101d7au); LOADALL; }
  /* 10101d7d mov ecx, dword ptr [esp + 0x94] */ { const u32 m_ = (u32)(esp + 0x94u); ecx = (u32)(M32(m_)); }
  /* 10101d84 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101d89u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101d84u); RETCHK(0x10101d89u, 0x10101d84u); LOADALL;
  /* 10101d89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101d8a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101d8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101d8c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10101d8e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10101d8f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10101da0(CPU *c) {
  NATIVE_HOOK(0x10101da0u) REGS; LOADALL;
L_10101da0:;
  /* 10101da0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10101da1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10101da3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10101da6 sub esp, 0xf4 */ { u32 a_ = esp, b_ = 0xf4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101dac mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10101db1 mov dword ptr [esp + 0xf0], eax */ { const u32 m_ = (u32)(esp + 0xf0u); M32(m_) = (u32)(eax); }
  /* 10101db8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10101dbb mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101dbe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101dbf xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10101dc1 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101dc3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101dc4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101dc5 je 0x10101e70 */ if (ZF_) goto L_10101e70;
  /* 10101dcb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101dcd mov ecx, 0x39 */ { ecx = (u32)(0x39u); }
  /* 10101dd2 lea edi, [esp + 0x10] */ edi = (u32)((u32)(esp + 0x10u));
  /* 10101dd6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10101dd8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10101ddb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101ddd mov byte ptr [esp + 0x8f], bl */ { const u32 m_ = (u32)(esp + 0x8fu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101de4 jne 0x10101dec */ if (!ZF_) goto L_10101dec;
  /* 10101de6 mov byte ptr [esp + 0x10], bl */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101dea jmp 0x10101e11 */ goto L_10101e11;
L_10101dec:;
  /* 10101dec push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10101df1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101df2 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10101df6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101df7 call 0x101050f0 */ esp -= 4; M32(esp) = 0x10101dfcu; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x10101df7u); RETCHK(0x10101dfcu, 0x10101df7u); LOADALL;
  /* 10101dfc mov al, byte ptr [esp + 0x9b] */ { const u32 m_ = (u32)(esp + 0x9bu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101e03 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101e06 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10101e08 je 0x10101e11 */ if (ZF_) goto L_10101e11;
  /* 10101e0a mov byte ptr [esp + 0x8f], bl */ { const u32 m_ = (u32)(esp + 0x8fu); M8(m_) = (u8)((ebx & 0xffu)); }
L_10101e11:;
  /* 10101e11 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10101e14 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101e16 mov byte ptr [esp + 0xf3], bl */ { const u32 m_ = (u32)(esp + 0xf3u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101e1d jne 0x10101e28 */ if (!ZF_) goto L_10101e28;
  /* 10101e1f mov byte ptr [esp + 0x90], bl */ { const u32 m_ = (u32)(esp + 0x90u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101e26 jmp 0x10101e4d */ goto L_10101e4d;
L_10101e28:;
  /* 10101e28 push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 10101e2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101e2b lea edx, [esp + 0x98] */ edx = (u32)((u32)(esp + 0x98u));
  /* 10101e32 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101e33 call 0x101050f0 */ esp -= 4; M32(esp) = 0x10101e38u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x10101e33u); RETCHK(0x10101e38u, 0x10101e33u); LOADALL;
  /* 10101e38 mov al, byte ptr [esp + 0xff] */ { const u32 m_ = (u32)(esp + 0xffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101e3f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101e42 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10101e44 je 0x10101e4d */ if (ZF_) goto L_10101e4d;
  /* 10101e46 mov byte ptr [esp + 0xf3], bl */ { const u32 m_ = (u32)(esp + 0xf3u); M8(m_) = (u8)((ebx & 0xffu)); }
L_10101e4d:;
  /* 10101e4d mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10101e50 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10101e53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101e54 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 10101e57 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101e58 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 10101e5c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101e5d push 0xd7 */ { u32 v_ = 0xd7u; esp -= 4; M32(esp) = v_; }
  /* 10101e62 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10101e67 call 0x10104a40 */ esp -= 4; M32(esp) = 0x10101e6cu; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x10101e67u); RETCHK(0x10101e6cu, 0x10101e67u); LOADALL;
  /* 10101e6c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10101e6e jge 0x10101e87 */ if (!LT_) goto L_10101e87;
L_10101e70:;
  /* 10101e70 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101e72 mov ecx, dword ptr [esp + 0xfc] */ { const u32 m_ = (u32)(esp + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 10101e79 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101e7eu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101e79u); RETCHK(0x10101e7eu, 0x10101e79u); LOADALL;
  /* 10101e7e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101e7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101e80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101e81 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10101e83 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10101e84 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_10101e87:;
  /* 10101e87 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10101e8a mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 10101e8e add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10101e91 mov word ptr [esp + 0xc], 0xd7 */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)(0xd7u); }
  /* 10101e98 mov byte ptr [esp + 0xf], bl */ { const u32 m_ = (u32)(esp + 0xfu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10101e9c mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101ea0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101ea1 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10101ea3 mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101ea6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10101ea8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101ea9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101eaa call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101eadu; SAVEALL; call_ind(c, t_); RETCHK(0x10101eadu, 0x10101eaau); LOADALL; }
  /* 10101ead mov ecx, dword ptr [esp + 0xfc] */ { const u32 m_ = (u32)(esp + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 10101eb4 call 0x1010570f */ esp -= 4; M32(esp) = 0x10101eb9u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101eb4u); RETCHK(0x10101eb9u, 0x10101eb4u); LOADALL;
  /* 10101eb9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101eba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101ebb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101ebc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10101ebe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10101ebf ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_10101ed0(CPU *c) {
  NATIVE_HOOK(0x10101ed0u) REGS; LOADALL;
L_10101ed0:;
  /* 10101ed0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10101ed1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10101ed3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10101ed6 mov eax, 0x2054 */ { eax = (u32)(0x2054u); }
  /* 10101edb call 0x10105720 */ esp -= 4; M32(esp) = 0x10101ee0u; SAVEALL; F_10105720(c); ABI_CHECK(0x10105720u, 0x10101edbu); RETCHK(0x10101ee0u, 0x10101edbu); LOADALL;
  /* 10101ee0 mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10101ee5 mov dword ptr [esp + 0x2050], eax */ { const u32 m_ = (u32)(esp + 0x2050u); M32(m_) = (u32)(eax); }
  /* 10101eec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10101eef mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101ef2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10101ef4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10101ef5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101ef6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101ef7 je 0x10101f94 */ if (ZF_) goto L_10101f94;
  /* 10101efd mov dx, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10101f01 cmp dx, 0x40 */ { u32 a_ = (edx & 0xffffu), b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10101f05 ja 0x10101f94 */ if (!(CF_|ZF_)) goto L_10101f94;
  /* 10101f0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10101f0d test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10101f10 mov ecx, 0x810 */ { ecx = (u32)(0x810u); }
  /* 10101f15 lea edi, [esp + 0x10] */ edi = (u32)((u32)(esp + 0x10u));
  /* 10101f19 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10101f1b stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 10101f1d mov word ptr [esp + 0x10], dx */ { const u32 m_ = (u32)(esp + 0x10u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 10101f22 jbe 0x10101f71 */ if ((CF_|ZF_)) goto L_10101f71;
  /* 10101f24 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10101f27 lea esi, [esp + 0x92] */ esi = (u32)((u32)(esp + 0x92u));
  /* 10101f2e add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10101f31 movzx ebx, dx */ { ebx = (u32)((edx & 0xffffu)); }
L_10101f34:;
  /* 10101f34 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10101f36 mov cl, byte ptr [edi - 1] */ { const u32 m_ = (u32)(edi + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101f39 mov byte ptr [esi - 0x80], cl */ { const u32 m_ = (u32)(esi + 0xffffff80u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10101f3c mov byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x0u); }
  /* 10101f3f jne 0x10101f47 */ if (!ZF_) goto L_10101f47;
  /* 10101f41 mov byte ptr [esi - 0x7f], 0 */ { const u32 m_ = (u32)(esi + 0xffffff81u); M8(m_) = (u8)(0x0u); }
  /* 10101f45 jmp 0x10101f62 */ goto L_10101f62;
L_10101f47:;
  /* 10101f47 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10101f4c lea edx, [esi - 0x7f] */ edx = (u32)((u32)(esi + 0xffffff81u));
  /* 10101f4f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10101f50 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101f51 call 0x101050f0 */ esp -= 4; M32(esp) = 0x10101f56u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x10101f51u); RETCHK(0x10101f56u, 0x10101f51u); LOADALL;
  /* 10101f56 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10101f58 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101f5b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10101f5d je 0x10101f62 */ if (ZF_) goto L_10101f62;
  /* 10101f5f mov byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x0u); }
L_10101f62:;
  /* 10101f62 add edi, 0x82 */ { u32 a_ = edi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10101f68 add esi, 0x81 */ { u32 a_ = esi, b_ = 0x81u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10101f6e dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10101f6f jne 0x10101f34 */ if (!ZF_) goto L_10101f34;
L_10101f71:;
  /* 10101f71 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10101f74 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10101f77 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101f78 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 10101f7b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101f7c lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 10101f80 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10101f81 push 0xdb */ { u32 v_ = 0xdbu; esp -= 4; M32(esp) = v_; }
  /* 10101f86 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10101f8b call 0x10104a40 */ esp -= 4; M32(esp) = 0x10101f90u; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x10101f8bu); RETCHK(0x10101f90u, 0x10101f8bu); LOADALL;
  /* 10101f90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10101f92 jge 0x10101fab */ if (!LT_) goto L_10101fab;
L_10101f94:;
  /* 10101f94 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10101f96 mov ecx, dword ptr [esp + 0x205c] */ { const u32 m_ = (u32)(esp + 0x205cu); ecx = (u32)(M32(m_)); }
  /* 10101f9d call 0x1010570f */ esp -= 4; M32(esp) = 0x10101fa2u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101f9du); RETCHK(0x10101fa2u, 0x10101f9du); LOADALL;
  /* 10101fa2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101fa3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101fa4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101fa5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10101fa7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10101fa8 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_10101fab:;
  /* 10101fab mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10101fae mov dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 10101fb6 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10101fb9 mov word ptr [esp + 0xc], 0xdb */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)(0xdbu); }
  /* 10101fc0 mov byte ptr [esp + 0xf], 0 */ { const u32 m_ = (u32)(esp + 0xfu); M8(m_) = (u8)(0x0u); }
  /* 10101fc5 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101fc9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10101fca mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10101fcc mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10101fcf mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10101fd1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10101fd2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10101fd3 call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10101fd6u; SAVEALL; call_ind(c, t_); RETCHK(0x10101fd6u, 0x10101fd3u); LOADALL; }
  /* 10101fd6 mov ecx, dword ptr [esp + 0x205c] */ { const u32 m_ = (u32)(esp + 0x205cu); ecx = (u32)(M32(m_)); }
  /* 10101fdd call 0x1010570f */ esp -= 4; M32(esp) = 0x10101fe2u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10101fddu); RETCHK(0x10101fe2u, 0x10101fddu); LOADALL;
  /* 10101fe2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10101fe3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10101fe4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10101fe5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10101fe7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10101fe8 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_10101ff0(CPU *c) {
  NATIVE_HOOK(0x10101ff0u) REGS; LOADALL;
L_10101ff0:;
  /* 10101ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10101ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10101ff3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10101ff6 sub esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10101ffc mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10102001 mov dword ptr [esp + 0x90], eax */ { const u32 m_ = (u32)(esp + 0x90u); M32(m_) = (u32)(eax); }
  /* 10102008 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010200b mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010200e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010200f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10102011 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102013 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102014 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102015 je 0x10102087 */ if (ZF_) goto L_10102087;
  /* 10102017 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102019 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 1010201e lea edi, [esp + 0x10] */ edi = (u32)((u32)(esp + 0x10u));
  /* 10102022 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10102024 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 10102026 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10102029 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010202b mov byte ptr [esp + 0x10], 8 */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)(0x8u); }
  /* 10102030 mov byte ptr [esp + 0x91], bl */ { const u32 m_ = (u32)(esp + 0x91u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10102037 jne 0x1010203f */ if (!ZF_) goto L_1010203f;
  /* 10102039 mov byte ptr [esp + 0x12], bl */ { const u32 m_ = (u32)(esp + 0x12u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 1010203d jmp 0x10102064 */ goto L_10102064;
L_1010203f:;
  /* 1010203f push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10102044 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102045 lea ecx, [esp + 0x1a] */ ecx = (u32)((u32)(esp + 0x1au));
  /* 10102049 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010204a call 0x101050f0 */ esp -= 4; M32(esp) = 0x1010204fu; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x1010204au); RETCHK(0x1010204fu, 0x1010204au); LOADALL;
  /* 1010204f mov al, byte ptr [esp + 0x9d] */ { const u32 m_ = (u32)(esp + 0x9du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10102056 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102059 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010205b je 0x10102064 */ if (ZF_) goto L_10102064;
  /* 1010205d mov byte ptr [esp + 0x91], bl */ { const u32 m_ = (u32)(esp + 0x91u); M8(m_) = (u8)((ebx & 0xffu)); }
L_10102064:;
  /* 10102064 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10102067 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 1010206a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010206b lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 1010206e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010206f lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10102073 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102074 push 0xdd */ { u32 v_ = 0xddu; esp -= 4; M32(esp) = v_; }
  /* 10102079 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 1010207e call 0x10104a40 */ esp -= 4; M32(esp) = 0x10102083u; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x1010207eu); RETCHK(0x10102083u, 0x1010207eu); LOADALL;
  /* 10102083 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102085 jge 0x1010209e */ if (!LT_) goto L_1010209e;
L_10102087:;
  /* 10102087 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10102089 mov ecx, dword ptr [esp + 0x9c] */ { const u32 m_ = (u32)(esp + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 10102090 call 0x1010570f */ esp -= 4; M32(esp) = 0x10102095u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10102090u); RETCHK(0x10102095u, 0x10102090u); LOADALL;
  /* 10102095 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102096 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102097 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102098 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1010209a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010209b ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_1010209e:;
  /* 1010209e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101020a1 mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 101020a5 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101020a8 mov word ptr [esp + 0xc], 0xdd */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)(0xddu); }
  /* 101020af mov byte ptr [esp + 0xf], bl */ { const u32 m_ = (u32)(esp + 0xfu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 101020b3 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 101020b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101020b8 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 101020ba mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101020bd mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 101020bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101020c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101020c1 call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101020c4u; SAVEALL; call_ind(c, t_); RETCHK(0x101020c4u, 0x101020c1u); LOADALL; }
  /* 101020c4 mov ecx, dword ptr [esp + 0x9c] */ { const u32 m_ = (u32)(esp + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 101020cb call 0x1010570f */ esp -= 4; M32(esp) = 0x101020d0u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101020cbu); RETCHK(0x101020d0u, 0x101020cbu); LOADALL;
  /* 101020d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101020d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101020d2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101020d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101020d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101020d6 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_101020e0(CPU *c) {
  NATIVE_HOOK(0x101020e0u) REGS; LOADALL;
L_101020e0:;
  /* 101020e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101020e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101020e3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 101020e6 sub esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101020ec mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 101020f1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101020f2 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 101020f5 mov dword ptr [esp + 0x94], eax */ { const u32 m_ = (u32)(esp + 0x94u); M32(m_) = (u32)(eax); }
  /* 101020fc mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 101020ff test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102101 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102102 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102103 je 0x10102143 */ if (ZF_) goto L_10102143;
  /* 10102105 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10102108 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010210a mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 1010210f lea edi, [esp + 0x10] */ edi = (u32)((u32)(esp + 0x10u));
  /* 10102113 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10102115 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10102118 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 1010211a mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010211d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010211e lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 10102121 mov byte ptr [esp + 0x15], al */ { const u32 m_ = (u32)(esp + 0x15u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10102125 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102126 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 1010212a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010212b push 0xdd */ { u32 v_ = 0xddu; esp -= 4; M32(esp) = v_; }
  /* 10102130 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10102135 mov byte ptr [esp + 0x20], 9 */ { const u32 m_ = (u32)(esp + 0x20u); M8(m_) = (u8)(0x9u); }
  /* 1010213a call 0x10104a40 */ esp -= 4; M32(esp) = 0x1010213fu; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x1010213au); RETCHK(0x1010213fu, 0x1010213au); LOADALL;
  /* 1010213f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102141 jge 0x1010215a */ if (!LT_) goto L_1010215a;
L_10102143:;
  /* 10102143 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10102145 mov ecx, dword ptr [esp + 0x9c] */ { const u32 m_ = (u32)(esp + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 1010214c call 0x1010570f */ esp -= 4; M32(esp) = 0x10102151u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x1010214cu); RETCHK(0x10102151u, 0x1010214cu); LOADALL;
  /* 10102151 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102152 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102153 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102154 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10102156 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102157 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_1010215a:;
  /* 1010215a mov dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 10102162 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102165 mov word ptr [esp + 0xc], 0xdd */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)(0xddu); }
  /* 1010216c mov byte ptr [esp + 0xf], 0 */ { const u32 m_ = (u32)(esp + 0xfu); M8(m_) = (u8)(0x0u); }
  /* 10102171 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10102175 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102176 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10102178 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010217b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 1010217d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010217e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010217f call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10102182u; SAVEALL; call_ind(c, t_); RETCHK(0x10102182u, 0x1010217fu); LOADALL; }
  /* 10102182 mov ecx, dword ptr [esp + 0x9c] */ { const u32 m_ = (u32)(esp + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 10102189 call 0x1010570f */ esp -= 4; M32(esp) = 0x1010218eu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10102189u); RETCHK(0x1010218eu, 0x10102189u); LOADALL;
  /* 1010218e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010218f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102190 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10102191 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10102193 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102194 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_101021a0(CPU *c) {
  NATIVE_HOOK(0x101021a0u) REGS; LOADALL;
L_101021a0:;
  /* 101021a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101021a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101021a3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 101021a6 sub esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101021ac mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 101021b1 mov dword ptr [esp + 0x90], eax */ { const u32 m_ = (u32)(esp + 0x90u); M32(m_) = (u32)(eax); }
  /* 101021b8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101021bb mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101021be push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101021bf xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 101021c1 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101021c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101021c4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101021c5 je 0x1010223e */ if (ZF_) goto L_1010223e;
  /* 101021c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101021c9 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 101021ce lea edi, [esp + 0x10] */ edi = (u32)((u32)(esp + 0x10u));
  /* 101021d2 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 101021d4 mov cl, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101021d7 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 101021d9 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 101021dc cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101021de mov byte ptr [esp + 0x10], 0xa */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)(0xau); }
  /* 101021e3 mov byte ptr [esp + 0x11], cl */ { const u32 m_ = (u32)(esp + 0x11u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 101021e7 mov byte ptr [esp + 0x91], bl */ { const u32 m_ = (u32)(esp + 0x91u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 101021ee jne 0x101021f6 */ if (!ZF_) goto L_101021f6;
  /* 101021f0 mov byte ptr [esp + 0x12], bl */ { const u32 m_ = (u32)(esp + 0x12u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 101021f4 jmp 0x1010221b */ goto L_1010221b;
L_101021f6:;
  /* 101021f6 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 101021fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101021fc lea edx, [esp + 0x1a] */ edx = (u32)((u32)(esp + 0x1au));
  /* 10102200 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10102201 call 0x101050f0 */ esp -= 4; M32(esp) = 0x10102206u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x10102201u); RETCHK(0x10102206u, 0x10102201u); LOADALL;
  /* 10102206 mov al, byte ptr [esp + 0x9d] */ { const u32 m_ = (u32)(esp + 0x9du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010220d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102210 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10102212 je 0x1010221b */ if (ZF_) goto L_1010221b;
  /* 10102214 mov byte ptr [esp + 0x91], bl */ { const u32 m_ = (u32)(esp + 0x91u); M8(m_) = (u8)((ebx & 0xffu)); }
L_1010221b:;
  /* 1010221b mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 1010221e mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10102221 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102222 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 10102225 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102226 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 1010222a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010222b push 0xdd */ { u32 v_ = 0xddu; esp -= 4; M32(esp) = v_; }
  /* 10102230 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 10102235 call 0x10104a40 */ esp -= 4; M32(esp) = 0x1010223au; SAVEALL; F_10104a40(c); ABI_CHECK(0x10104a40u, 0x10102235u); RETCHK(0x1010223au, 0x10102235u); LOADALL;
  /* 1010223a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010223c jge 0x10102255 */ if (!LT_) goto L_10102255;
L_1010223e:;
  /* 1010223e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10102240 mov ecx, dword ptr [esp + 0x9c] */ { const u32 m_ = (u32)(esp + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 10102247 call 0x1010570f */ esp -= 4; M32(esp) = 0x1010224cu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10102247u); RETCHK(0x1010224cu, 0x10102247u); LOADALL;
  /* 1010224c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010224d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010224e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010224f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10102251 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10102252 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_10102255:;
  /* 10102255 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102258 mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 1010225c add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010225f mov word ptr [esp + 0xc], 0xdd */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)(0xddu); }
  /* 10102266 mov byte ptr [esp + 0xf], bl */ { const u32 m_ = (u32)(esp + 0xfu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 1010226a mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010226e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010226f mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10102271 mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10102274 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10102276 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102277 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102278 call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010227bu; SAVEALL; call_ind(c, t_); RETCHK(0x1010227bu, 0x10102278u); LOADALL; }
  /* 1010227b mov ecx, dword ptr [esp + 0x9c] */ { const u32 m_ = (u32)(esp + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 10102282 call 0x1010570f */ esp -= 4; M32(esp) = 0x10102287u; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x10102282u); RETCHK(0x10102287u, 0x10102282u); LOADALL;
  /* 10102287 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10102288 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102289 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1010228a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1010228c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010228d ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_10102290(CPU *c) {
  NATIVE_HOOK(0x10102290u) REGS; LOADALL;
L_10102290:;
  /* 10102290 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10102294 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102296 je 0x1010230d */ if (ZF_) goto L_1010230d;
  /* 10102298 mov ax, word ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010229d cmp ax, 0x40 */ { u32 a_ = (eax & 0xffffu), b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101022a1 ja 0x1010230d */ if (!(CF_|ZF_)) goto L_1010230d;
  /* 101022a3 test ax, ax */ { u32 a_ = (eax & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 101022a6 mov word ptr [ecx + 0x20bc], ax */ { const u32 m_ = (u32)(ecx + 0x20bcu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 101022ad jbe 0x1010230d */ if ((CF_|ZF_)) goto L_1010230d;
  /* 101022af push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101022b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101022b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101022b2 lea edi, [edx + 2] */ edi = (u32)((u32)(edx + 0x2u));
  /* 101022b5 lea esi, [ecx + 0xbd] */ esi = (u32)((u32)(ecx + 0xbdu));
  /* 101022bb movzx ebp, ax */ { ebp = (u32)((eax & 0xffffu)); }
  /* 101022be mov edi, edi */ { edi = (u32)(edi); }
L_101022c0:;
  /* 101022c0 mov al, byte ptr [edi - 1] */ { const u32 m_ = (u32)(edi + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101022c3 mov byte ptr [esi - 0x80], al */ { const u32 m_ = (u32)(esi + 0xffffff80u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101022c6 cmp byte ptr [edi - 2], 2 */ { const u32 m_ = (u32)(edi + 0xfffffffeu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101022ca sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 101022cd test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101022cf mov byte ptr [esi - 0x81], cl */ { const u32 m_ = (u32)(esi + 0xffffff7fu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 101022d5 mov byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x0u); }
  /* 101022d8 jne 0x101022e0 */ if (!ZF_) goto L_101022e0;
  /* 101022da mov byte ptr [esi - 0x7f], 0 */ { const u32 m_ = (u32)(esi + 0xffffff81u); M8(m_) = (u8)(0x0u); }
  /* 101022de jmp 0x101022fb */ goto L_101022fb;
L_101022e0:;
  /* 101022e0 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 101022e5 lea edx, [esi - 0x7f] */ edx = (u32)((u32)(esi + 0xffffff81u));
  /* 101022e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101022e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101022ea call 0x101050f0 */ esp -= 4; M32(esp) = 0x101022efu; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x101022eau); RETCHK(0x101022efu, 0x101022eau); LOADALL;
  /* 101022ef mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101022f1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101022f4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101022f6 je 0x101022fb */ if (ZF_) goto L_101022fb;
  /* 101022f8 mov byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x0u); }
L_101022fb:;
  /* 101022fb add edi, 0x82 */ { u32 a_ = edi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10102301 add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10102307 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10102308 jne 0x101022c0 */ if (!ZF_) goto L_101022c0;
  /* 1010230a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010230b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010230c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_1010230d:;
  /* 1010230d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10102310(CPU *c) {
  NATIVE_HOOK(0x10102310u) REGS; LOADALL;
L_10102310:;
  /* 10102310 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10102314 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102316 je 0x10102380 */ if (ZF_) goto L_10102380;
  /* 10102318 mov al, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010231c cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010231e ja 0x10102380 */ if (!(CF_|ZF_)) goto L_10102380;
  /* 10102320 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10102322 mov byte ptr [ecx + 0x25c8], al */ { const u32 m_ = (u32)(ecx + 0x25c8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10102328 jbe 0x10102380 */ if ((CF_|ZF_)) goto L_10102380;
  /* 1010232a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010232b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010232c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010232d lea edi, [edx + 1] */ edi = (u32)((u32)(edx + 0x1u));
  /* 10102330 lea esi, [ecx + 0x213e] */ esi = (u32)((u32)(ecx + 0x213eu));
  /* 10102336 movzx ebp, al */ { ebp = (u32)((eax & 0xffu)); }
  /* 10102339 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10102340:;
  /* 10102340 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102342 mov al, byte ptr [edi - 1] */ { const u32 m_ = (u32)(edi + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10102345 mov byte ptr [esi - 0x80], al */ { const u32 m_ = (u32)(esi + 0xffffff80u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10102348 mov byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x0u); }
  /* 1010234b jne 0x10102353 */ if (!ZF_) goto L_10102353;
  /* 1010234d mov byte ptr [esi - 0x7f], 0 */ { const u32 m_ = (u32)(esi + 0xffffff81u); M8(m_) = (u8)(0x0u); }
  /* 10102351 jmp 0x1010236e */ goto L_1010236e;
L_10102353:;
  /* 10102353 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10102358 lea ecx, [esi - 0x7f] */ ecx = (u32)((u32)(esi + 0xffffff81u));
  /* 1010235b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010235c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010235d call 0x101050f0 */ esp -= 4; M32(esp) = 0x10102362u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x1010235du); RETCHK(0x10102362u, 0x1010235du); LOADALL;
  /* 10102362 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10102364 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10102367 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10102369 je 0x1010236e */ if (ZF_) goto L_1010236e;
  /* 1010236b mov byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x0u); }
L_1010236e:;
  /* 1010236e add edi, 0x81 */ { u32 a_ = edi, b_ = 0x81u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10102374 add esi, 0x81 */ { u32 a_ = esi, b_ = 0x81u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010237a dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010237b jne 0x10102340 */ if (!ZF_) goto L_10102340;
  /* 1010237d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010237e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010237f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10102380:;
  /* 10102380 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10102390(CPU *c) {
  NATIVE_HOOK(0x10102390u) REGS; LOADALL;
L_10102390:;
  /* 10102390 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102391 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10102392 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10102396 mov esi, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); esi = (u32)(M32(m_)); }
  /* 10102399 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010239b mov eax, 0xdeadbeef */ { eax = (u32)(0xdeadbeefu); }
  /* 101023a0 jbe 0x101023cd */ if ((CF_|ZF_)) goto L_101023cd;
  /* 101023a2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 101023a4 shr ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101023a7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101023a8 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101023a9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101023aa mov ebp, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ebp = (u32)(M32(m_)); }
  /* 101023ad sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101023af xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101023b1 lea ebx, [edi + 4] */ ebx = (u32)((u32)(edi + 0x4u));
L_101023b4:;
  /* 101023b4 cmp ebp, 0x10 */ { u32 a_ = ebp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101023b7 jb 0x101023bd */ if (CF_) goto L_101023bd;
  /* 101023b9 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 101023bb jmp 0x101023bf */ goto L_101023bf;
L_101023bd:;
  /* 101023bd mov edi, ebx */ { edi = (u32)(ebx); }
L_101023bf:;
  /* 101023bf movsx edi, byte ptr [edi + edx] */ { const u32 m_ = (u32)(edi + edx); edi = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 101023c3 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 101023c5 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101023c7 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101023c9 jbe 0x101023b4 */ if ((CF_|ZF_)) goto L_101023b4;
  /* 101023cb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101023cc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_101023cd:;
  /* 101023cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101023ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101023cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101023d0(CPU *c) {
  NATIVE_HOOK(0x101023d0u) REGS; LOADALL;
L_101023d0:;
  /* 101023d0 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101023d4 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 101023d8 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101023da mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 101023de je 0x101023f1 */ if (ZF_) goto L_101023f1;
  /* 101023e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_101023e1:;
  /* 101023e1 mov esi, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 101023e4 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101023e7 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101023ea cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101023ec mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 101023ee jne 0x101023e1 */ if (!ZF_) goto L_101023e1;
  /* 101023f0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_101023f1:;
  /* 101023f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10102400(CPU *c) {
  NATIVE_HOOK(0x10102400u) REGS; LOADALL;
L_10102400:;
  /* 10102400 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10102404 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102408 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010240a mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010240e je 0x10102424 */ if (ZF_) goto L_10102424;
  /* 10102410 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_10102411:;
  /* 10102411 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102413 je 0x10102419 */ if (ZF_) goto L_10102419;
  /* 10102415 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10102417 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
L_10102419:;
  /* 10102419 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010241c add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010241f cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102421 jne 0x10102411 */ if (!ZF_) goto L_10102411;
  /* 10102423 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10102424:;
  /* 10102424 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10102430(CPU *c) {
  NATIVE_HOOK(0x10102430u) REGS; LOADALL;
L_10102430:;
  /* 10102430 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10102431 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10102435 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102436 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102438 cmp dword ptr [esi + 0x14], ebp */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010243b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010243c jae 0x10102443 */ if (!CF_) goto L_10102443;
  /* 1010243e call 0x10104fb5 */ esp -= 4; M32(esp) = 0x10102443u; SAVEALL; F_10104fb5(c); ABI_CHECK(0x10104fb5u, 0x1010243eu); RETCHK(0x10102443u, 0x1010243eu); LOADALL;
L_10102443:;
  /* 10102443 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10102446 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 1010244a sub eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010244c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010244e jae 0x10102452 */ if (!CF_) goto L_10102452;
  /* 10102450 mov edi, eax */ { edi = (u32)(eax); }
L_10102452:;
  /* 10102452 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102454 jbe 0x1010249d */ if ((CF_|ZF_)) goto L_1010249d;
  /* 10102456 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10102459 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010245c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010245d lea ebx, [esi + 4] */ ebx = (u32)((u32)(esi + 0x4u));
  /* 10102460 jb 0x10102466 */ if (CF_) goto L_10102466;
  /* 10102462 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 10102464 jmp 0x10102468 */ goto L_10102468;
L_10102466:;
  /* 10102466 mov edx, ebx */ { edx = (u32)(ebx); }
L_10102468:;
  /* 10102468 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010246b jb 0x10102471 */ if (CF_) goto L_10102471;
  /* 1010246d mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 1010246f jmp 0x10102473 */ goto L_10102473;
L_10102471:;
  /* 10102471 mov ecx, ebx */ { ecx = (u32)(ebx); }
L_10102473:;
  /* 10102473 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102475 add edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10102477 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10102478 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1010247a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010247b add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010247d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010247e call 0x10105760 */ esp -= 4; M32(esp) = 0x10102483u; SAVEALL; F_10105760(c); ABI_CHECK(0x10105760u, 0x1010247eu); RETCHK(0x10102483u, 0x1010247eu); LOADALL;
  /* 10102483 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10102486 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10102489 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010248b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010248e cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102491 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 10102494 jb 0x10102498 */ if (CF_) goto L_10102498;
  /* 10102496 mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
L_10102498:;
  /* 10102498 mov byte ptr [ebx + eax], 0 */ { const u32 m_ = (u32)(ebx + eax); M8(m_) = (u8)(0x0u); }
  /* 1010249c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_1010249d:;
  /* 1010249d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010249e mov eax, esi */ { eax = (u32)(esi); }
  /* 101024a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101024a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101024a2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101024b0(CPU *c) {
  NATIVE_HOOK(0x101024b0u) REGS; LOADALL;
L_101024b0:;
  /* 101024b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101024b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101024b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 101024b5 push 0x1010c770 */ { u32 v_ = 0x1010c770u; esp -= 4; M32(esp) = v_; }
  /* 101024ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 101024c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101024c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 101024c8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101024cb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101024ce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101024cf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101024d0 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101024d2 or ebx, 0xf */ { u32 a_ = ebx, b_ = 0xfu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 101024d5 cmp ebx, -2 */ { u32 a_ = ebx, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101024d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101024d9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 101024db mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 101024de mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 101024e1 jbe 0x101024e7 */ if ((CF_|ZF_)) goto L_101024e7;
  /* 101024e3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101024e5 jmp 0x10102509 */ goto L_10102509;
L_101024e7:;
  /* 101024e7 mov edi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edi = (u32)(M32(m_)); }
  /* 101024ea mov eax, 0xaaaaaaab */ { eax = (u32)(0xaaaaaaabu); }
  /* 101024ef mul ebx */ { u64 p_ = (u64)eax * ebx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 101024f1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 101024f3 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101024f5 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 101024f7 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101024f9 jae 0x10102509 */ if (!CF_) goto L_10102509;
  /* 101024fb mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 10102500 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10102502 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102504 ja 0x10102509 */ if (!(CF_|ZF_)) goto L_10102509;
  /* 10102506 lea ebx, [ecx + edi] */ ebx = (u32)((u32)(ecx + edi));
L_10102509:;
  /* 10102509 lea ecx, [ebx + 1] */ ecx = (u32)((u32)(ebx + 0x1u));
  /* 1010250c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010250d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 10102514 call 0x10104f6a */ esp -= 4; M32(esp) = 0x10102519u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x10102514u); RETCHK(0x10102519u, 0x10102514u); LOADALL;
  /* 10102519 mov edx, eax */ { edx = (u32)(eax); }
  /* 1010251b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010251e mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10102521 jmp 0x1010254c */ goto L_1010254c;
L_1010254c:;
  /* 1010254c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010254f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102551 jbe 0x10102577 */ if ((CF_|ZF_)) goto L_10102577;
  /* 10102553 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102557 jb 0x1010255e */ if (CF_) goto L_1010255e;
  /* 10102559 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 1010255c jmp 0x10102561 */ goto L_10102561;
L_1010255e:;
  /* 1010255e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10102561:;
  /* 10102561 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10102563 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102566 mov edi, edx */ { edi = (u32)(edx); }
  /* 10102568 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010256a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1010256c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1010256f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10102571 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 10102574 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
L_10102577:;
  /* 10102577 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010257b jb 0x1010258f */ if (CF_) goto L_1010258f;
  /* 1010257d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10102580 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102581 call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102586u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102581u); RETCHK(0x10102586u, 0x10102581u); LOADALL;
  /* 10102586 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102589 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010258c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010258f:;
  /* 1010258f cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102592 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10102595 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10102598 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 1010259a mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 1010259d mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 101025a0 jb 0x101025a4 */ if (CF_) goto L_101025a4;
  /* 101025a2 mov eax, edx */ { eax = (u32)(edx); }
L_101025a4:;
  /* 101025a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101025a5 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 101025a9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 101025ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101025ad mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101025b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101025b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101025b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101025b8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10102523(CPU *c) {
  NATIVE_HOOK(0x10102523u) REGS; LOADALL;
L_10102523:;
  /* 10102523 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10102526 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10102529 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010252a mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 1010252d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010252e mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 10102532 call 0x10104f6a */ esp -= 4; M32(esp) = 0x10102537u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x10102532u); RETCHK(0x10102537u, 0x10102532u); LOADALL;
  /* 10102537 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010253a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010253d mov eax, 0x10102543 */ { eax = (u32)(0x10102543u); }
  /* 10102542 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10102543(CPU *c) {
  NATIVE_HOOK(0x10102543u) REGS; LOADALL;
L_10102543:;
  /* 10102543 mov ebx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ebx = (u32)(M32(m_)); }
  /* 10102546 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 10102549 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1010254c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010254f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102551 jbe 0x10102577 */ if ((CF_|ZF_)) goto L_10102577;
  /* 10102553 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102557 jb 0x1010255e */ if (CF_) goto L_1010255e;
  /* 10102559 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 1010255c jmp 0x10102561 */ goto L_10102561;
L_1010255e:;
  /* 1010255e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10102561:;
  /* 10102561 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10102563 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10102566 mov edi, edx */ { edi = (u32)(edx); }
  /* 10102568 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010256a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1010256c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1010256f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10102571 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 10102574 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
L_10102577:;
  /* 10102577 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010257b jb 0x1010258f */ if (CF_) goto L_1010258f;
  /* 1010257d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10102580 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10102581 call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102586u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10102581u); RETCHK(0x10102586u, 0x10102581u); LOADALL;
  /* 10102586 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10102589 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1010258c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010258f:;
  /* 1010258f cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102592 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10102595 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10102598 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 1010259a mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 1010259d mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 101025a0 jb 0x101025a4 */ if (CF_) goto L_101025a4;
  /* 101025a2 mov eax, edx */ { eax = (u32)(edx); }
L_101025a4:;
  /* 101025a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101025a5 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 101025a9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 101025ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101025ad mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 101025b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101025b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101025b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101025b8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_101025bb(CPU *c) {
  NATIVE_HOOK(0x101025bbu) REGS; LOADALL;
L_101025bb:;
  /* 101025bb mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 101025be cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101025c2 jb 0x101025d0 */ if (CF_) goto L_101025d0;
  /* 101025c4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 101025c7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 101025c8 call 0x10105a9d */ esp -= 4; M32(esp) = 0x101025cdu; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x101025c8u); RETCHK(0x101025cdu, 0x101025c8u); LOADALL;
  /* 101025cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101025d0:;
  /* 101025d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101025d2 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 101025d9 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 101025e0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101025e2 mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 101025e6 call 0x10105ab6 */ esp -= 4; M32(esp) = 0x101025ebu; SAVEALL; F_10105ab6(c); ABI_CHECK(0x10105ab6u, 0x101025e6u); RETCHK(0x101025ebu, 0x101025e6u); LOADALL;
  /* 101025eb int3 */ TRAP(0x101025ebu, "int3");
}

void F_101025f0(CPU *c) {
  NATIVE_HOOK(0x101025f0u) REGS; LOADALL;
L_101025f0:;
  /* 101025f0 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 101025f2 call 0x10104f6a */ esp -= 4; M32(esp) = 0x101025f7u; SAVEALL; F_10104f6a(c); ABI_CHECK(0x10104f6au, 0x101025f2u); RETCHK(0x101025f7u, 0x101025f2u); LOADALL;
  /* 101025f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101025fa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101025fc je 0x10102600 */ if (ZF_) goto L_10102600;
  /* 101025fe mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
L_10102600:;
  /* 10102600 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 10102603 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10102605 je 0x10102609 */ if (ZF_) goto L_10102609;
  /* 10102607 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_10102609:;
  /* 10102609 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
