#include "funcs.h"

void F_005f8490(CPU *c) {
  NATIVE_HOOK(0x5f8490u) REGS; LOADALL;
L_005f8490:;
  /* 005f8490 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8491 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 005f8495 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8497 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8498 jne 0x5f84bd */ if (!ZF_) goto L_005f84bd;
  /* 005f849a push 0x30800 */ { u32 v_ = 0x30800u; esp -= 4; M32(esp) = v_; }
  /* 005f849f push 0x6942b4 */ { u32 v_ = 0x6942b4u; esp -= 4; M32(esp) = v_; }
  /* 005f84a4 call 0x5f1930 */ esp -= 4; M32(esp) = 0x5f84a9u; SAVEALL; F_005f1930(c); ABI_CHECK(0x5f1930u, 0x5f84a4u); RETCHK(0x5f84a9u, 0x5f84a4u); LOADALL;
  /* 005f84a9 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f84ab add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f84ae test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f84b0 jne 0x5f84b5 */ if (!ZF_) goto L_005f84b5;
  /* 005f84b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f84b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f84b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f84b5:;
  /* 005f84b5 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005f84bb jmp 0x5f84c3 */ goto L_005f84c3;
L_005f84bd:;
  /* 005f84bd mov dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1u); }
L_005f84c3:;
  /* 005f84c3 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f84c7 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f84cb add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f84ce mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005f84d1 imul ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f84d6 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f84da lea edx, [ecx + eax + 0x1c] */ edx = (u32)((u32)(ecx + eax + 0x1cu));
  /* 005f84de lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 005f84e1 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f84e4 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f84e7 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005f84e9 mov ecx, dword ptr [0x6942d8] */ { const u32 m_ = (u32)(0x6942d8u); ecx = (u32)(M32(m_)); }
  /* 005f84ef lea eax, [esi + 0x14] */ eax = (u32)((u32)(esi + 0x14u));
  /* 005f84f2 mov dword ptr [esi + 0x18], 0x6942d8 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x6942d8u); }
  /* 005f84f9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f84fb mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f84fd mov edx, dword ptr [0x6942d8] */ { const u32 m_ = (u32)(0x6942d8u); edx = (u32)(M32(m_)); }
  /* 005f8503 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f8506 mov dword ptr [0x6942d8], eax */ { const u32 m_ = (u32)(0x6942d8u); M32(m_) = (u32)(eax); }
  /* 005f850b jbe 0x5f851f */ if ((CF_|ZF_)) goto L_005f851f;
L_005f850d:;
  /* 005f850d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f850e dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f850f call 0x5f8540 */ esp -= 4; M32(esp) = 0x5f8514u; SAVEALL; F_005f8540(c); ABI_CHECK(0x5f8540u, 0x5f850fu); RETCHK(0x5f8514u, 0x5f850fu); LOADALL;
  /* 005f8514 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8517 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8519 je 0x5f8524 */ if (ZF_) goto L_005f8524;
  /* 005f851b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f851d ja 0x5f850d */ if (!(CF_|ZF_)) goto L_005f850d;
L_005f851f:;
  /* 005f851f mov eax, esi */ { eax = (u32)(esi); }
  /* 005f8521 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8522 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8523 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8524:;
  /* 005f8524 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8525 call 0x5f8570 */ esp -= 4; M32(esp) = 0x5f852au; SAVEALL; F_005f8570(c); ABI_CHECK(0x5f8570u, 0x5f8525u); RETCHK(0x5f852au, 0x5f8525u); LOADALL;
  /* 005f852a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f852d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f852f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8530 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8531 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8540(CPU *c) {
  NATIVE_HOOK(0x5f8540u) REGS; LOADALL;
L_005f8540:;
  /* 005f8540 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8541 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8545 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8548 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8549 call 0x5f86b0 */ esp -= 4; M32(esp) = 0x5f854eu; SAVEALL; F_005f86b0(c); ABI_CHECK(0x5f86b0u, 0x5f8549u); RETCHK(0x5f854eu, 0x5f8549u); LOADALL;
  /* 005f854e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8551 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8553 jne 0x5f8557 */ if (!ZF_) goto L_005f8557;
  /* 005f8555 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8556 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8557:;
  /* 005f8557 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f855a lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 005f855d mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 005f855f mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f8562 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005f8564 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8565 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f8568 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f856a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8570(CPU *c) {
  NATIVE_HOOK(0x5f8570u) REGS; LOADALL;
L_005f8570:;
  /* 005f8570 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8571 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8572 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005f8576 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f8579 lea esi, [edi + 0xc] */ esi = (u32)((u32)(edi + 0xcu));
  /* 005f857c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f857e je 0x5f859e */ if (ZF_) goto L_005f859e;
L_005f8580:;
  /* 005f8580 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f8583 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f8585 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8586 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f8588 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f858a mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f858d mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f8590 call 0x5f86f0 */ esp -= 4; M32(esp) = 0x5f8595u; SAVEALL; F_005f86f0(c); ABI_CHECK(0x5f86f0u, 0x5f8590u); RETCHK(0x5f8595u, 0x5f8590u); LOADALL;
  /* 005f8595 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f8597 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f859a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f859c jne 0x5f8580 */ if (!ZF_) goto L_005f8580;
L_005f859e:;
  /* 005f859e mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f85a1 mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f85a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f85a5 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f85a7 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f85aa mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f85ad mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f85b0 call 0x5f85c0 */ esp -= 4; M32(esp) = 0x5f85b5u; SAVEALL; F_005f85c0(c); ABI_CHECK(0x5f85c0u, 0x5f85b0u); RETCHK(0x5f85b5u, 0x5f85b0u); LOADALL;
  /* 005f85b5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f85b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f85b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f85ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f85c0(CPU *c) {
  NATIVE_HOOK(0x5f85c0u) REGS; LOADALL;
L_005f85c0:;
  /* 005f85c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f85c4 test byte ptr [eax], 1 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f85c7 jne 0x5f85d7 */ if (!ZF_) goto L_005f85d7;
  /* 005f85c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f85ca push 0x6942b4 */ { u32 v_ = 0x6942b4u; esp -= 4; M32(esp) = v_; }
  /* 005f85cf call 0x5f1a50 */ esp -= 4; M32(esp) = 0x5f85d4u; SAVEALL; F_005f1a50(c); ABI_CHECK(0x5f1a50u, 0x5f85cfu); RETCHK(0x5f85d4u, 0x5f85cfu); LOADALL;
  /* 005f85d4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f85d7:;
  /* 005f85d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8640(CPU *c) {
  NATIVE_HOOK(0x5f8640u) REGS; LOADALL;
L_005f8640:;
  /* 005f8640 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f8644 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8645 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8646 mov esi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f8649 lea edi, [ecx + 0xc] */ edi = (u32)((u32)(ecx + 0xcu));
  /* 005f864c cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f864e je 0x5f86ab */ if (ZF_) goto L_005f86ab;
  /* 005f8650 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
L_005f8654:;
  /* 005f8654 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8656 jbe 0x5f8661 */ if ((CF_|ZF_)) goto L_005f8661;
  /* 005f8658 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f865b add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f865d cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f865f jb 0x5f866a */ if (CF_) goto L_005f866a;
L_005f8661:;
  /* 005f8661 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005f8663 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8665 jne 0x5f8654 */ if (!ZF_) goto L_005f8654;
  /* 005f8667 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8668 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8669 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f866a:;
  /* 005f866a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f866b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f866c call 0x5f8790 */ esp -= 4; M32(esp) = 0x5f8671u; SAVEALL; F_005f8790(c); ABI_CHECK(0x5f8790u, 0x5f866cu); RETCHK(0x5f8671u, 0x5f866cu); LOADALL;
  /* 005f8671 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8672 call 0x5f87d0 */ esp -= 4; M32(esp) = 0x5f8677u; SAVEALL; F_005f87d0(c); ABI_CHECK(0x5f87d0u, 0x5f8672u); RETCHK(0x5f8677u, 0x5f8672u); LOADALL;
  /* 005f8677 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f867a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f867c je 0x5f86ab */ if (ZF_) goto L_005f86ab;
  /* 005f867e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8681 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005f8683 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f8685 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f8687 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f868a mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f868d mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f868f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8691 jne 0x5f86a2 */ if (!ZF_) goto L_005f86a2;
  /* 005f8693 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005f8695 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f8698 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005f869a mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f869d mov dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(esi); }
  /* 005f869f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f86a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f86a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f86a2:;
  /* 005f86a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f86a3 call 0x5f86f0 */ esp -= 4; M32(esp) = 0x5f86a8u; SAVEALL; F_005f86f0(c); ABI_CHECK(0x5f86f0u, 0x5f86a3u); RETCHK(0x5f86a8u, 0x5f86a3u); LOADALL;
  /* 005f86a8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f86ab:;
  /* 005f86ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f86ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f86ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f86b0(CPU *c) {
  NATIVE_HOOK(0x5f86b0u) REGS; LOADALL;
L_005f86b0:;
  /* 005f86b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f86b1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f86b5 push 0x30800 */ { u32 v_ = 0x30800u; esp -= 4; M32(esp) = v_; }
  /* 005f86ba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f86bb call 0x5f2440 */ esp -= 4; M32(esp) = 0x5f86c0u; SAVEALL; F_005f2440(c); ABI_CHECK(0x5f2440u, 0x5f86bbu); RETCHK(0x5f86c0u, 0x5f86bbu); LOADALL;
  /* 005f86c0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f86c2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f86c5 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f86c7 je 0x5f86e5 */ if (ZF_) goto L_005f86e5;
  /* 005f86c9 lea ecx, [eax + 0x10] */ ecx = (u32)((u32)(eax + 0x10u));
  /* 005f86cc add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f86ce mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f86d1 mov dword ptr [eax + 0xc], esi */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(esi); }
  /* 005f86d4 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f86d7 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f86da mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f86dd mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f86e0 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f86e3 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
L_005f86e5:;
  /* 005f86e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f86e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f86f0(CPU *c) {
  NATIVE_HOOK(0x5f86f0u) REGS; LOADALL;
L_005f86f0:;
  /* 005f86f0 jmp 0x5e02a0 */ SAVEALL; F_005e02a0(c); return;
}

void F_005f8700(CPU *c) {
  NATIVE_HOOK(0x5f8700u) REGS; LOADALL;
L_005f8700:;
  /* 005f8700 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8704 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f8708 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f8709 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f870a mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f870d mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 005f8711 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8712 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8713 lea ebx, [ecx + 0xc] */ ebx = (u32)((u32)(ecx + 0xcu));
L_005f8716:;
  /* 005f8716 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 005f8718 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f871b mov eax, esi */ { eax = (u32)(esi); }
  /* 005f871d sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f871f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8721 sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8724 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8726 jb 0x5f8747 */ if (CF_) goto L_005f8747;
  /* 005f8728 lea edi, [ecx + edx] */ edi = (u32)((u32)(ecx + edx));
  /* 005f872b lea eax, [ebp - 1] */ eax = (u32)((u32)(ebp + 0xffffffffu));
  /* 005f872e not eax */ { eax = (u32)(~eax & 0xffffffffu); }
  /* 005f8730 lea ecx, [edi + ebp + 0x17] */ ecx = (u32)((u32)(edi + ebp + 0x17u));
  /* 005f8734 and ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f8736 sub ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f8739 lea eax, [ebx + ecx] */ eax = (u32)((u32)(ebx + ecx));
  /* 005f873c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f873e ja 0x5f8747 */ if (!(CF_|ZF_)) goto L_005f8747;
  /* 005f8740 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f8743 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8745 jae 0x5f8759 */ if (!CF_) goto L_005f8759;
L_005f8747:;
  /* 005f8747 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f874b mov edx, esi */ { edx = (u32)(esi); }
  /* 005f874d cmp edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8750 jne 0x5f8716 */ if (!ZF_) goto L_005f8716;
L_005f8752:;
  /* 005f8752 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8753 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8754 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f8755 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f8757 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f8758 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8759:;
  /* 005f8759 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f875b je 0x5f8752 */ if (ZF_) goto L_005f8752;
  /* 005f875d mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005f875f mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f8762 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005f8766 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f8768 cmp eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f876b je 0x5f8770 */ if (ZF_) goto L_005f8770;
  /* 005f876d mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
L_005f8770:;
  /* 005f8770 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8773 mov esi, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f8776 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8778 je 0x5f877c */ if (ZF_) goto L_005f877c;
  /* 005f877a mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_005f877c:;
  /* 005f877c mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005f8780 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8781 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8782 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f8783 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f8786 lea eax, [ecx + 0xc] */ eax = (u32)((u32)(ecx + 0xcu));
  /* 005f8789 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f878a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8790(CPU *c) {
  NATIVE_HOOK(0x5f8790u) REGS; LOADALL;
L_005f8790:;
  /* 005f8790 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f8794 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f8798 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8799 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
L_005f879c:;
  /* 005f879c lea esi, [eax + 0xc] */ esi = (u32)((u32)(eax + 0xcu));
  /* 005f879f cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f87a1 mov esi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f87a4 je 0x5f87ae */ if (ZF_) goto L_005f87ae;
  /* 005f87a6 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005f87a8 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f87aa jne 0x5f879c */ if (!ZF_) goto L_005f879c;
  /* 005f87ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f87ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f87ae:;
  /* 005f87ae mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f87b1 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f87b3 je 0x5f87b9 */ if (ZF_) goto L_005f87b9;
  /* 005f87b5 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 005f87b7 mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
L_005f87b9:;
  /* 005f87b9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f87bb mov esi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f87be cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f87c0 je 0x5f87c8 */ if (ZF_) goto L_005f87c8;
  /* 005f87c2 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f87c5 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
L_005f87c8:;
  /* 005f87c8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f87c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f87d0(CPU *c) {
  NATIVE_HOOK(0x5f87d0u) REGS; LOADALL;
L_005f87d0:;
  /* 005f87d0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f87d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f87d5 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f87d8 mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f87db mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005f87dd xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f87df cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f87e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f87e2 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 005f87e5 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005f87e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f87f0(CPU *c) {
  NATIVE_HOOK(0x5f87f0u) REGS; LOADALL;
L_005f87f0:;
  /* 005f87f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f87f1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f87f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f87f6 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f87f9 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f87fc mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f87fe mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f8801 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f8804 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005f8807 call 0x5f1c00 */ esp -= 4; M32(esp) = 0x5f880cu; SAVEALL; F_005f1c00(c); ABI_CHECK(0x5f1c00u, 0x5f8807u); RETCHK(0x5f880cu, 0x5f8807u); LOADALL;
  /* 005f880c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f880d call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f8812u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f880du); RETCHK(0x5f8812u, 0x5f880du); LOADALL;
  /* 005f8812 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8815 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8816 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8820(CPU *c) {
  NATIVE_HOOK(0x5f8820u) REGS; LOADALL;
L_005f8820:;
  /* 005f8820 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f8824 lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 005f8827 mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
  /* 005f882d mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005f8830 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005f8832 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8840(CPU *c) {
  NATIVE_HOOK(0x5f8840u) REGS; LOADALL;
L_005f8840:;
  /* 005f8840 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8844 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8845 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f8849 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f884a lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 005f884d lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 005f8850 mov dword ptr [esi + 0x24], 0 */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 005f8857 mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
  /* 005f885d mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005f885f mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 005f8861 mov dword ptr [esi + 0x24], edx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edx); }
  /* 005f8864 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 005f8866 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8867 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005f886a mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f886c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f886e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f886f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f8870 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f8872 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8880(CPU *c) {
  NATIVE_HOOK(0x5f8880u) REGS; LOADALL;
L_005f8880:;
  /* 005f8880 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8884 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8885 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f8889 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f888a mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f888d lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 005f8890 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8892 je 0x5f88a1 */ if (ZF_) goto L_005f88a1;
L_005f8894:;
  /* 005f8894 lea edi, [ecx - 0x20] */ edi = (u32)((u32)(ecx + 0xffffffe0u));
  /* 005f8897 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8899 je 0x5f88a1 */ if (ZF_) goto L_005f88a1;
  /* 005f889b mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f889d cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f889f jne 0x5f8894 */ if (!ZF_) goto L_005f8894;
L_005f88a1:;
  /* 005f88a1 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f88a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f88a4 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f88a5 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005f88a7 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005f88aa mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f88ad mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005f88af mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f88b2 mov edx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); edx = (u32)(M32(m_)); }
  /* 005f88b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f88b6 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f88b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f88c0(CPU *c) {
  NATIVE_HOOK(0x5f88c0u) REGS; LOADALL;
L_005f88c0:;
  /* 005f88c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f88c4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f88c5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f88c6 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 005f88ca lea ebx, [eax + 4] */ ebx = (u32)((u32)(eax + 0x4u));
  /* 005f88cd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f88ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f88cf push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f88d0 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 005f88d2 mov ecx, dword ptr [esi - 0x20] */ { const u32 m_ = (u32)(esi + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 005f88d5 lea edi, [esi - 0x20] */ edi = (u32)((u32)(esi + 0xffffffe0u));
  /* 005f88d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f88d9 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f88deu; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f88d9u); RETCHK(0x5f88deu, 0x5f88d9u); LOADALL;
  /* 005f88de add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f88e1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f88e3 je 0x5f88ff */ if (ZF_) goto L_005f88ff;
L_005f88e5:;
  /* 005f88e5 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005f88e7 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f88e9 je 0x5f8906 */ if (ZF_) goto L_005f8906;
  /* 005f88eb mov edx, dword ptr [esi - 0x20] */ { const u32 m_ = (u32)(esi + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 005f88ee lea edi, [esi - 0x20] */ edi = (u32)((u32)(esi + 0xffffffe0u));
  /* 005f88f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f88f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f88f3 call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5f88f8u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5f88f3u); RETCHK(0x5f88f8u, 0x5f88f3u); LOADALL;
  /* 005f88f8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f88fb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f88fd jne 0x5f88e5 */ if (!ZF_) goto L_005f88e5;
L_005f88ff:;
  /* 005f88ff mov eax, edi */ { eax = (u32)(edi); }
  /* 005f8901 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8902 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8903 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f8904 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f8905 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8906:;
  /* 005f8906 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8907 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8908 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f8909 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f890b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f890c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8910(CPU *c) {
  NATIVE_HOOK(0x5f8910u) REGS; LOADALL;
L_005f8910:;
  /* 005f8910 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8914 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8915 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f8919 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f891a mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f891d lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 005f8920 mov edi, dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 005f8923 lea eax, [ecx - 0x20] */ eax = (u32)((u32)(ecx + 0xffffffe0u));
  /* 005f8926 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8928 je 0x5f893f */ if (ZF_) goto L_005f893f;
L_005f892a:;
  /* 005f892a mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f892c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f892e je 0x5f893d */ if (ZF_) goto L_005f893d;
  /* 005f8930 mov edi, dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 005f8933 lea eax, [ecx - 0x20] */ eax = (u32)((u32)(ecx + 0xffffffe0u));
  /* 005f8936 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8938 jne 0x5f892a */ if (!ZF_) goto L_005f892a;
  /* 005f893a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f893b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f893c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f893d:;
  /* 005f893d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005f893f:;
  /* 005f893f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8940 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8941 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8950(CPU *c) {
  NATIVE_HOOK(0x5f8950u) REGS; LOADALL;
L_005f8950:;
  /* 005f8950 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8954 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8955 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005f8959 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f895a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f895c cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f895e jg 0x5f8984 */ if (!(ZF_|LT_)) goto L_005f8984;
  /* 005f8960 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8962 je 0x5f8984 */ if (ZF_) goto L_005f8984;
  /* 005f8964 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f8967 lea edi, [eax + 4] */ edi = (u32)((u32)(eax + 0x4u));
  /* 005f896a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f896c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f896e lea eax, [ecx - 0x20] */ eax = (u32)((u32)(ecx + 0xffffffe0u));
  /* 005f8971 jle 0x5f8986 */ if ((ZF_|LT_)) goto L_005f8986;
L_005f8973:;
  /* 005f8973 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f8975 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8977 je 0x5f8984 */ if (ZF_) goto L_005f8984;
  /* 005f8979 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005f897a lea eax, [ecx - 0x20] */ eax = (u32)((u32)(ecx + 0xffffffe0u));
  /* 005f897d cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f897f jl 0x5f8973 */ if (LT_) goto L_005f8973;
  /* 005f8981 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8982 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8983 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8984:;
  /* 005f8984 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005f8986:;
  /* 005f8986 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8987 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8988 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8990(CPU *c) {
  NATIVE_HOOK(0x5f8990u) REGS; LOADALL;
L_005f8990:;
  /* 005f8990 push 0x6942e4 */ { u32 v_ = 0x6942e4u; esp -= 4; M32(esp) = v_; }
  /* 005f8995 call 0x5f7c50 */ esp -= 4; M32(esp) = 0x5f899au; SAVEALL; F_005f7c50(c); ABI_CHECK(0x5f7c50u, 0x5f8995u); RETCHK(0x5f899au, 0x5f8995u); LOADALL;
  /* 005f899a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f899d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f899f jne 0x5f89a2 */ if (!ZF_) goto L_005f89a2;
  /* 005f89a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f89a2:;
  /* 005f89a2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f89a4 push 0x63c774 */ { u32 v_ = 0x63c774u; esp -= 4; M32(esp) = v_; }
  /* 005f89a9 push 0x6942e4 */ { u32 v_ = 0x6942e4u; esp -= 4; M32(esp) = v_; }
  /* 005f89ae call 0x5f7c20 */ esp -= 4; M32(esp) = 0x5f89b3u; SAVEALL; F_005f7c20(c); ABI_CHECK(0x5f7c20u, 0x5f89aeu); RETCHK(0x5f89b3u, 0x5f89aeu); LOADALL;
  /* 005f89b3 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 005f89b5 push 0x67e6b8 */ { u32 v_ = 0x67e6b8u; esp -= 4; M32(esp) = v_; }
  /* 005f89ba push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f89bc push 0x67e618 */ { u32 v_ = 0x67e618u; esp -= 4; M32(esp) = v_; }
  /* 005f89c1 push 0x6942e4 */ { u32 v_ = 0x6942e4u; esp -= 4; M32(esp) = v_; }
  /* 005f89c6 call 0x5f7b00 */ esp -= 4; M32(esp) = 0x5f89cbu; SAVEALL; F_005f7b00(c); ABI_CHECK(0x5f7b00u, 0x5f89c6u); RETCHK(0x5f89cbu, 0x5f89c6u); LOADALL;
  /* 005f89cb add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f89ce mov eax, 0x6942e4 */ { eax = (u32)(0x6942e4u); }
  /* 005f89d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f89e0(CPU *c) {
  NATIVE_HOOK(0x5f89e0u) REGS; LOADALL;
L_005f89e0:;
  /* 005f89e0 push 0x6942e4 */ { u32 v_ = 0x6942e4u; esp -= 4; M32(esp) = v_; }
  /* 005f89e5 call 0x5f7cd0 */ esp -= 4; M32(esp) = 0x5f89eau; SAVEALL; F_005f7cd0(c); ABI_CHECK(0x5f7cd0u, 0x5f89e5u); RETCHK(0x5f89eau, 0x5f89e5u); LOADALL;
  /* 005f89ea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f89ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f89f0(CPU *c) {
  NATIVE_HOOK(0x5f89f0u) REGS; LOADALL;
L_005f89f0:;
  /* 005f89f0 mov eax, dword ptr [0x9c003c] */ { const u32 m_ = (u32)(0x9c003cu); eax = (u32)(M32(m_)); }
  /* 005f89f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f89f6 push 0x30810 */ { u32 v_ = 0x30810u; esp -= 4; M32(esp) = v_; }
  /* 005f89fb push 0x694384 */ { u32 v_ = 0x694384u; esp -= 4; M32(esp) = v_; }
  /* 005f8a00 push 0x694310 */ { u32 v_ = 0x694310u; esp -= 4; M32(esp) = v_; }
  /* 005f8a05 push 0x694328 */ { u32 v_ = 0x694328u; esp -= 4; M32(esp) = v_; }
  /* 005f8a0a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005f8a0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8a0d call 0x5f5ee0 */ esp -= 4; M32(esp) = 0x5f8a12u; SAVEALL; F_005f5ee0(c); ABI_CHECK(0x5f5ee0u, 0x5f8a0du); RETCHK(0x5f8a12u, 0x5f8a0du); LOADALL;
  /* 005f8a12 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f8a14 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8a17 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8a19 jne 0x5f8a1d */ if (!ZF_) goto L_005f8a1d;
  /* 005f8a1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8a1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8a1d:;
  /* 005f8a1d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8a1e call 0x5f8a80 */ esp -= 4; M32(esp) = 0x5f8a23u; SAVEALL; F_005f8a80(c); ABI_CHECK(0x5f8a80u, 0x5f8a1eu); RETCHK(0x5f8a23u, 0x5f8a1eu); LOADALL;
  /* 005f8a23 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 005f8a25 push 0x67e8c0 */ { u32 v_ = 0x67e8c0u; esp -= 4; M32(esp) = v_; }
  /* 005f8a2a push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005f8a2c push 0x67e770 */ { u32 v_ = 0x67e770u; esp -= 4; M32(esp) = v_; }
  /* 005f8a31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8a32 call 0x5f6570 */ esp -= 4; M32(esp) = 0x5f8a37u; SAVEALL; F_005f6570(c); ABI_CHECK(0x5f6570u, 0x5f8a32u); RETCHK(0x5f8a37u, 0x5f8a32u); LOADALL;
  /* 005f8a37 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8a3a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8a3c jne 0x5f8a4b */ if (!ZF_) goto L_005f8a4b;
  /* 005f8a3e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8a3f call 0x5f6130 */ esp -= 4; M32(esp) = 0x5f8a44u; SAVEALL; F_005f6130(c); ABI_CHECK(0x5f6130u, 0x5f8a3fu); RETCHK(0x5f8a44u, 0x5f8a3fu); LOADALL;
  /* 005f8a44 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8a47 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f8a49 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8a4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8a4b:;
  /* 005f8a4b call 0x5f9250 */ esp -= 4; M32(esp) = 0x5f8a50u; SAVEALL; F_005f9250(c); ABI_CHECK(0x5f9250u, 0x5f8a4bu); RETCHK(0x5f8a50u, 0x5f8a4bu); LOADALL;
  /* 005f8a50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8a52 jne 0x5f8a61 */ if (!ZF_) goto L_005f8a61;
  /* 005f8a54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8a55 call 0x5f6130 */ esp -= 4; M32(esp) = 0x5f8a5au; SAVEALL; F_005f6130(c); ABI_CHECK(0x5f6130u, 0x5f8a55u); RETCHK(0x5f8a5au, 0x5f8a55u); LOADALL;
  /* 005f8a5a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8a5d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f8a5f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8a60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8a61:;
  /* 005f8a61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8a62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8a63 call 0x5f6210 */ esp -= 4; M32(esp) = 0x5f8a68u; SAVEALL; F_005f6210(c); ABI_CHECK(0x5f6210u, 0x5f8a63u); RETCHK(0x5f8a68u, 0x5f8a63u); LOADALL;
  /* 005f8a68 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8a6b mov eax, esi */ { eax = (u32)(esi); }
  /* 005f8a6d mov dword ptr [0x69438c], 1 */ { const u32 m_ = (u32)(0x69438cu); M32(m_) = (u32)(0x1u); }
  /* 005f8a77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8a78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8a80(CPU *c) {
  NATIVE_HOOK(0x5f8a80u) REGS; LOADALL;
L_005f8a80:;
  /* 005f8a80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8a81 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8a85 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f8a87 push 0x63c894 */ { u32 v_ = 0x63c894u; esp -= 4; M32(esp) = v_; }
  /* 005f8a8c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8a8d call 0x5f6240 */ esp -= 4; M32(esp) = 0x5f8a92u; SAVEALL; F_005f6240(c); ABI_CHECK(0x5f6240u, 0x5f8a8du); RETCHK(0x5f8a92u, 0x5f8a8du); LOADALL;
  /* 005f8a92 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8a94 mov dword ptr [esi + 0x40], 0x64 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x64u); }
  /* 005f8a9b call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8aa0u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8a9bu); RETCHK(0x5f8aa0u, 0x5f8a9bu); LOADALL;
  /* 005f8aa0 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8aa5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8aa7 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8aa9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8aac test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f8aaf je 0x5f8acc */ if (ZF_) goto L_005f8acc;
  /* 005f8ab1 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8ab3 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8ab8u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8ab3u); RETCHK(0x5f8ab8u, 0x5f8ab3u); LOADALL;
  /* 005f8ab8 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8abd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8abf shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8ac1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8ac4 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f8aca jmp 0x5f8ad1 */ goto L_005f8ad1;
L_005f8acc:;
  /* 005f8acc mov edx, 1 */ { edx = (u32)(0x1u); }
L_005f8ad1:;
  /* 005f8ad1 test edx, 0xffff0000 */ { u32 a_ = edx, b_ = 0xffff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8ad7 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8ad9 je 0x5f8be0 */ if (ZF_) goto L_005f8be0;
  /* 005f8adf call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8ae4u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8adfu); RETCHK(0x5f8ae4u, 0x5f8adfu); LOADALL;
  /* 005f8ae4 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8ae9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8aeb shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8aed add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8af0 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f8af3 je 0x5f8b14 */ if (ZF_) goto L_005f8b14;
  /* 005f8af5 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8af7 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8afcu; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8af7u); RETCHK(0x5f8afcu, 0x5f8af7u); LOADALL;
  /* 005f8afc mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8b01 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8b03 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8b05 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8b08 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f8b0e mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f8b12 jmp 0x5f8b1c */ goto L_005f8b1c;
L_005f8b14:;
  /* 005f8b14 mov dword ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x1u); }
L_005f8b1c:;
  /* 005f8b1c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f8b1e push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8b20 mov ah, byte ptr [esp + 0xf] */ { const u32 m_ = (u32)(esp + 0xfu); eax = (eax & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005f8b24 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8b26 je 0x5f8b86 */ if (ZF_) goto L_005f8b86;
  /* 005f8b28 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8b2du; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8b28u); RETCHK(0x5f8b2du, 0x5f8b28u); LOADALL;
  /* 005f8b2d mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8b32 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8b34 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8b36 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8b39 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f8b3c je 0x5f8b6c */ if (ZF_) goto L_005f8b6c;
  /* 005f8b3e push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8b40 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8b45u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8b40u); RETCHK(0x5f8b45u, 0x5f8b40u); LOADALL;
  /* 005f8b45 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8b4a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8b4c shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8b4e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8b51 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f8b57 sar edx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8b5a movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f8b61 add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8b64 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8b67 jmp 0x5f8cad */ goto L_005f8cad;
L_005f8b6c:;
  /* 005f8b6c mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8b71 sar edx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8b74 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f8b7b add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8b7e add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8b81 jmp 0x5f8cad */ goto L_005f8cad;
L_005f8b86:;
  /* 005f8b86 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8b8bu; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8b86u); RETCHK(0x5f8b8bu, 0x5f8b86u); LOADALL;
  /* 005f8b8b mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8b90 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8b92 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8b94 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8b97 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f8b9a je 0x5f8bc8 */ if (ZF_) goto L_005f8bc8;
  /* 005f8b9c push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8b9e call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8ba3u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8b9eu); RETCHK(0x5f8ba3u, 0x5f8b9eu); LOADALL;
  /* 005f8ba3 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8ba8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8baa shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8bac add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8baf and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f8bb5 sar edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8bb8 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f8bbf dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f8bc0 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8bc3 jmp 0x5f8cad */ goto L_005f8cad;
L_005f8bc8:;
  /* 005f8bc8 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8bcd sar edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8bd0 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f8bd7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f8bd8 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8bdb jmp 0x5f8cad */ goto L_005f8cad;
L_005f8be0:;
  /* 005f8be0 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8be5u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8be0u); RETCHK(0x5f8be5u, 0x5f8be0u); LOADALL;
  /* 005f8be5 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8bea mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8bec shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8bee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8bf1 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f8bf4 je 0x5f8c11 */ if (ZF_) goto L_005f8c11;
  /* 005f8bf6 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8bf8 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8bfdu; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8bf8u); RETCHK(0x5f8bfdu, 0x5f8bf8u); LOADALL;
  /* 005f8bfd mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8c02 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8c04 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8c06 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8c09 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f8c0f jmp 0x5f8c16 */ goto L_005f8c16;
L_005f8c11:;
  /* 005f8c11 mov edx, 1 */ { edx = (u32)(0x1u); }
L_005f8c16:;
  /* 005f8c16 test dh, 0xff */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f8c19 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8c1b je 0x5f8c6f */ if (ZF_) goto L_005f8c6f;
  /* 005f8c1d call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8c22u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8c1du); RETCHK(0x5f8c22u, 0x5f8c1du); LOADALL;
  /* 005f8c22 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8c27 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8c29 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8c2b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8c2e test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f8c31 je 0x5f8c5b */ if (ZF_) goto L_005f8c5b;
  /* 005f8c33 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8c35 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8c3au; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8c35u); RETCHK(0x5f8c3au, 0x5f8c35u); LOADALL;
  /* 005f8c3a mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8c3f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8c41 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8c43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8c46 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f8c4c sar edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8c4f movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f8c56 add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8c59 jmp 0x5f8cad */ goto L_005f8cad;
L_005f8c5b:;
  /* 005f8c5b mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8c60 sar edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8c63 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f8c6a add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f8c6d jmp 0x5f8cad */ goto L_005f8cad;
L_005f8c6f:;
  /* 005f8c6f call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8c74u; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8c6fu); RETCHK(0x5f8c74u, 0x5f8c6fu); LOADALL;
  /* 005f8c74 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8c79 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8c7b shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8c7d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8c80 test dx, dx */ { u32 a_ = (edx & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 005f8c83 je 0x5f8ca0 */ if (ZF_) goto L_005f8ca0;
  /* 005f8c85 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 005f8c87 call 0x5f2420 */ esp -= 4; M32(esp) = 0x5f8c8cu; SAVEALL; F_005f2420(c); ABI_CHECK(0x5f2420u, 0x5f8c87u); RETCHK(0x5f8c8cu, 0x5f8c87u); LOADALL;
  /* 005f8c8c mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 005f8c91 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f8c93 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f8c95 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8c98 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f8c9e jmp 0x5f8ca5 */ goto L_005f8ca5;
L_005f8ca0:;
  /* 005f8ca0 mov edx, 1 */ { edx = (u32)(0x1u); }
L_005f8ca5:;
  /* 005f8ca5 movsx eax, byte ptr [edx + 0x67cd20] */ { const u32 m_ = (u32)(edx + 0x67cd20u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 005f8cac dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_005f8cad:;
  /* 005f8cad mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f8cb0 mov dword ptr [esi + 0x28], 0x5f8d10 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x5f8d10u); }
  /* 005f8cb7 shl eax, 0x1c */ { u32 n_ = (28u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f8cba or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f8cbc mov dword ptr [esi + 0x34], 0x5f8d80 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x5f8d80u); }
  /* 005f8cc3 mov dword ptr [esi + 0x40], ecx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ecx); }
  /* 005f8cc6 mov dword ptr [esi + 0x2c], 0x5f8db0 */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(0x5f8db0u); }
  /* 005f8ccd mov dword ptr [esi + 0x3c], 0x5f8e00 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x5f8e00u); }
  /* 005f8cd4 mov word ptr [esi + 0x44], 4 */ { const u32 m_ = (u32)(esi + 0x44u); M16(m_) = (u16)(0x4u); }
  /* 005f8cda pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8cdb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8ce0(CPU *c) {
  NATIVE_HOOK(0x5f8ce0u) REGS; LOADALL;
L_005f8ce0:;
  /* 005f8ce0 mov eax, dword ptr [0x69438c] */ { const u32 m_ = (u32)(0x69438cu); eax = (u32)(M32(m_)); }
  /* 005f8ce5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8ce7 je 0x5f8cfd */ if (ZF_) goto L_005f8cfd;
  /* 005f8ce9 call 0x5f92a0 */ esp -= 4; M32(esp) = 0x5f8ceeu; SAVEALL; F_005f92a0(c); ABI_CHECK(0x5f92a0u, 0x5f8ce9u); RETCHK(0x5f8ceeu, 0x5f8ce9u); LOADALL;
  /* 005f8cee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8cf0 jne 0x5f8cf3 */ if (!ZF_) goto L_005f8cf3;
  /* 005f8cf2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8cf3:;
  /* 005f8cf3 mov dword ptr [0x69438c], 0 */ { const u32 m_ = (u32)(0x69438cu); M32(m_) = (u32)(0x0u); }
L_005f8cfd:;
  /* 005f8cfd push 0x694328 */ { u32 v_ = 0x694328u; esp -= 4; M32(esp) = v_; }
  /* 005f8d02 call 0x5f6130 */ esp -= 4; M32(esp) = 0x5f8d07u; SAVEALL; F_005f6130(c); ABI_CHECK(0x5f6130u, 0x5f8d02u); RETCHK(0x5f8d07u, 0x5f8d02u); LOADALL;
  /* 005f8d07 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8d0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8d10(CPU *c) {
  NATIVE_HOOK(0x5f8d10u) REGS; LOADALL;
L_005f8d10:;
  /* 005f8d10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f8d11 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005f8d15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8d16 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8d17 lea esi, [ebx + 0x28] */ esi = (u32)((u32)(ebx + 0x28u));
  /* 005f8d1a mov ecx, 0x19 */ { ecx = (u32)(0x19u); }
  /* 005f8d1f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f8d21 mov edi, esi */ { edi = (u32)(esi); }
  /* 005f8d23 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f8d25 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005f8d27 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f8d28 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f8d2b mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005f8d2d call 0x5f7540 */ esp -= 4; M32(esp) = 0x5f8d32u; SAVEALL; F_005f7540(c); ABI_CHECK(0x5f7540u, 0x5f8d2du); RETCHK(0x5f8d32u, 0x5f8d2du); LOADALL;
  /* 005f8d32 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005f8d36 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8d39 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f8d3b mov eax, 0x3f800000 */ { eax = (u32)(0x3f800000u); }
  /* 005f8d40 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 005f8d43 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f8d46 and ecx, 0x18 */ { u32 a_ = ecx, b_ = 0x18u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f8d49 mov eax, 0x3f000000 */ { eax = (u32)(0x3f000000u); }
  /* 005f8d4e mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005f8d51 mov dword ptr [esi + 0x2c], edi */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(edi); }
  /* 005f8d54 mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 005f8d57 mov dword ptr [esi + 0x24], edi */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edi); }
  /* 005f8d5a mov dword ptr [esi + 0x58], edi */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(edi); }
  /* 005f8d5d mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005f8d60 mov dword ptr [esi + 0x5c], edi */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(edi); }
  /* 005f8d63 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005f8d66 mov dword ptr [esi + 0x14], 0x46ac4400 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x46ac4400u); }
  /* 005f8d6d mov dword ptr [esi + 0x4c], 0x461c4000 */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(0x461c4000u); }
  /* 005f8d74 mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 005f8d77 mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 005f8d7a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8d7b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f8d7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8d7e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f8d7f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8d80(CPU *c) {
  NATIVE_HOOK(0x5f8d80u) REGS; LOADALL;
L_005f8d80:;
  /* 005f8d80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8d81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8d82 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005f8d86 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f8d88 lea esi, [edi + 0x28] */ esi = (u32)((u32)(edi + 0x28u));
  /* 005f8d8b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8d8c call 0x5f7640 */ esp -= 4; M32(esp) = 0x5f8d91u; SAVEALL; F_005f7640(c); ABI_CHECK(0x5f7640u, 0x5f8d8cu); RETCHK(0x5f8d91u, 0x5f8d8cu); LOADALL;
  /* 005f8d91 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f8d93 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8d96 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8d98 je 0x5f8da7 */ if (ZF_) goto L_005f8da7;
  /* 005f8d9a mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f8d9d mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f8d9f mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005f8da1 mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005f8da4 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
L_005f8da7:;
  /* 005f8da7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8da8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8da9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8db0(CPU *c) {
  NATIVE_HOOK(0x5f8db0u) REGS; LOADALL;
L_005f8db0:;
  /* 005f8db0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f8db1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005f8db5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8db6 mov al, byte ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f8db9 lea esi, [ebx + 0x28] */ esi = (u32)((u32)(ebx + 0x28u));
  /* 005f8dbc test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f8dbe je 0x5f8def */ if (ZF_) goto L_005f8def;
  /* 005f8dc0 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f8dc3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8dc4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8dc6 mov edi, 2 */ { edi = (u32)(0x2u); }
  /* 005f8dcb je 0x5f8de4 */ if (ZF_) goto L_005f8de4;
  /* 005f8dcd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f8dcf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8dd0 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005f8dd2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8dd3 call 0x5f74b0 */ esp -= 4; M32(esp) = 0x5f8dd8u; SAVEALL; F_005f74b0(c); ABI_CHECK(0x5f74b0u, 0x5f8dd3u); RETCHK(0x5f8dd8u, 0x5f8dd3u); LOADALL;
  /* 005f8dd8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8ddb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8ddd jne 0x5f8de4 */ if (!ZF_) goto L_005f8de4;
  /* 005f8ddf mov edi, 1 */ { edi = (u32)(0x1u); }
L_005f8de4:;
  /* 005f8de4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8de5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8de6 call 0x5f7640 */ esp -= 4; M32(esp) = 0x5f8debu; SAVEALL; F_005f7640(c); ABI_CHECK(0x5f7640u, 0x5f8de6u); RETCHK(0x5f8debu, 0x5f8de6u); LOADALL;
  /* 005f8deb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8dee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005f8def:;
  /* 005f8def mov dword ptr [esi + 0x5c], 0 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x0u); }
  /* 005f8df6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005f8df8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8df9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f8dfa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8e00(CPU *c) {
  NATIVE_HOOK(0x5f8e00u) REGS; LOADALL;
L_005f8e00:;
  /* 005f8e00 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f8e04 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 005f8e0a mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8e0e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8e10(CPU *c) {
  NATIVE_HOOK(0x5f8e10u) REGS; LOADALL;
L_005f8e10:;
  /* 005f8e10 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f8e14 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8e16 je 0x5f8e36 */ if (ZF_) goto L_005f8e36;
  /* 005f8e18 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8e19 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8e1d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f8e1f lea eax, [esi + 0x28] */ eax = (u32)((u32)(esi + 0x28u));
  /* 005f8e22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8e23 call 0x5f7640 */ esp -= 4; M32(esp) = 0x5f8e28u; SAVEALL; F_005f7640(c); ABI_CHECK(0x5f7640u, 0x5f8e23u); RETCHK(0x5f8e28u, 0x5f8e23u); LOADALL;
  /* 005f8e28 mov ecx, dword ptr [0x693f0c] */ { const u32 m_ = (u32)(0x693f0cu); ecx = (u32)(M32(m_)); }
  /* 005f8e2e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8e31 mov dword ptr [esi + 0x54], ecx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(ecx); }
  /* 005f8e34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8e35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f8e36:;
  /* 005f8e36 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f8e3a mov dword ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 005f8e42 add edx, 0x28 */ { u32 a_ = edx, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f8e45 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f8e49 jmp 0x5f7640 */ SAVEALL; F_005f7640(c); return;
}

void F_005f8e50(CPU *c) {
  NATIVE_HOOK(0x5f8e50u) REGS; LOADALL;
L_005f8e50:;
  /* 005f8e50 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8e54 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f8e56 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8e59 cmp dword ptr [eax + 0x50], edx */ { const u32 m_ = (u32)(eax + 0x50u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8e5c je 0x5f8e61 */ if (ZF_) goto L_005f8e61;
  /* 005f8e5e mov dword ptr [eax + 0x50], edx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(edx); }
L_005f8e61:;
  /* 005f8e61 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f8e65 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8e67 je 0x5f8e8a */ if (ZF_) goto L_005f8e8a;
  /* 005f8e69 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8e6a mov esi, dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); esi = (u32)(M32(m_)); }
  /* 005f8e70 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8e72 mov dword ptr [eax + 0x50], ecx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(ecx); }
  /* 005f8e75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8e76 jne 0x5f8e8a */ if (!ZF_) goto L_005f8e8a;
  /* 005f8e78 mov ecx, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005f8e7b mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 005f8e7f mov dword ptr [esp], ecx */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(ecx); }
  /* 005f8e83 fild qword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)(s64)M64(m_)); }
  /* 005f8e87 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
L_005f8e8a:;
  /* 005f8e8a mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f8e8d cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f8e8f je 0x5f8ea2 */ if (ZF_) goto L_005f8ea2;
  /* 005f8e91 mov edx, dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); edx = (u32)(M32(m_)); }
  /* 005f8e94 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f8e95 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f8e97 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 005f8e99 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f8e9a call 0x5f7490 */ esp -= 4; M32(esp) = 0x5f8e9fu; SAVEALL; F_005f7490(c); ABI_CHECK(0x5f7490u, 0x5f8e9au); RETCHK(0x5f8e9fu, 0x5f8e9au); LOADALL;
  /* 005f8e9f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f8ea2:;
  /* 005f8ea2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f8ea5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8eb0(CPU *c) {
  NATIVE_HOOK(0x5f8eb0u) REGS; LOADALL;
L_005f8eb0:;
  /* 005f8eb0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f8eb4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f8eb6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8eba mov dword ptr [eax + 0x78], ecx */ { const u32 m_ = (u32)(eax + 0x78u); M32(m_) = (u32)(ecx); }
  /* 005f8ebd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8ec0(CPU *c) {
  NATIVE_HOOK(0x5f8ec0u) REGS; LOADALL;
L_005f8ec0:;
  /* 005f8ec0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8ec4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f8ec8 mov ecx, dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); ecx = (u32)(M32(m_)); }
  /* 005f8ecb mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f8ecd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8ed0(CPU *c) {
  NATIVE_HOOK(0x5f8ed0u) REGS; LOADALL;
L_005f8ed0:;
  /* 005f8ed0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f8ed4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f8ed6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8eda mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 005f8edd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8ee0(CPU *c) {
  NATIVE_HOOK(0x5f8ee0u) REGS; LOADALL;
L_005f8ee0:;
  /* 005f8ee0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f8ee4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8ee5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8ee9 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f8eeb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8eec mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005f8eee lea eax, [esi + 0x58] */ eax = (u32)((u32)(esi + 0x58u));
  /* 005f8ef1 mov dword ptr [esi + 0x58], edi */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(edi); }
  /* 005f8ef4 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f8ef7 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f8efa mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f8efd mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f8f00 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f8f03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8f05 je 0x5f8f15 */ if (ZF_) goto L_005f8f15;
  /* 005f8f07 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f8f08 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f8f0a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f8f0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8f0d call 0x5f7400 */ esp -= 4; M32(esp) = 0x5f8f12u; SAVEALL; F_005f7400(c); ABI_CHECK(0x5f7400u, 0x5f8f0du); RETCHK(0x5f8f12u, 0x5f8f0du); LOADALL;
  /* 005f8f12 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f8f15:;
  /* 005f8f15 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f8f17 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8f18 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8f19 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8f20(CPU *c) {
  NATIVE_HOOK(0x5f8f20u) REGS; LOADALL;
L_005f8f20:;
  /* 005f8f20 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8f24 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f8f28 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8f29 lea ecx, [eax + 0x58] */ ecx = (u32)((u32)(eax + 0x58u));
  /* 005f8f2c mov esi, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); esi = (u32)(M32(m_)); }
  /* 005f8f2f mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 005f8f31 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f8f34 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f8f37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8f38 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f8f3b mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f8f3e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8f40(CPU *c) {
  NATIVE_HOOK(0x5f8f40u) REGS; LOADALL;
L_005f8f40:;
  /* 005f8f40 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f8f44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8f45 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8f49 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f8f4b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f8f4c mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 005f8f4e lea eax, [esi + 0x64] */ eax = (u32)((u32)(esi + 0x64u));
  /* 005f8f51 mov dword ptr [esi + 0x64], edi */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(edi); }
  /* 005f8f54 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005f8f57 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 005f8f5a mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f8f5d mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f8f60 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f8f63 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8f65 je 0x5f8f75 */ if (ZF_) goto L_005f8f75;
  /* 005f8f67 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f8f68 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f8f6a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f8f6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8f6d call 0x5f7400 */ esp -= 4; M32(esp) = 0x5f8f72u; SAVEALL; F_005f7400(c); ABI_CHECK(0x5f7400u, 0x5f8f6du); RETCHK(0x5f8f72u, 0x5f8f6du); LOADALL;
  /* 005f8f72 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f8f75:;
  /* 005f8f75 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f8f77 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f8f78 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8f79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8f80(CPU *c) {
  NATIVE_HOOK(0x5f8f80u) REGS; LOADALL;
L_005f8f80:;
  /* 005f8f80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f8f84 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f8f88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8f89 lea ecx, [eax + 0x64] */ ecx = (u32)((u32)(eax + 0x64u));
  /* 005f8f8c mov esi, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); esi = (u32)(M32(m_)); }
  /* 005f8f8f mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 005f8f91 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f8f94 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 005f8f97 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8f98 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f8f9b mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005f8f9e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8fa0(CPU *c) {
  NATIVE_HOOK(0x5f8fa0u) REGS; LOADALL;
L_005f8fa0:;
  /* 005f8fa0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f8fa4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8fa5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8fa9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f8fab mov dword ptr [esi + 0x70], eax */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(eax); }
  /* 005f8fae mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f8fb1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8fb3 je 0x5f8fc5 */ if (ZF_) goto L_005f8fc5;
  /* 005f8fb5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f8fb7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f8fb8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f8fba push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005f8fbc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8fbd call 0x5f7460 */ esp -= 4; M32(esp) = 0x5f8fc2u; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x5f8fbdu); RETCHK(0x5f8fc2u, 0x5f8fbdu); LOADALL;
  /* 005f8fc2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f8fc5:;
  /* 005f8fc5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f8fc7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8fc8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f8fd0(CPU *c) {
  NATIVE_HOOK(0x5f8fd0u) REGS; LOADALL;
L_005f8fd0:;
  /* 005f8fd0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f8fd4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f8fd5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f8fd9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f8fdb mov dword ptr [esi + 0x74], eax */ { const u32 m_ = (u32)(esi + 0x74u); M32(m_) = (u32)(eax); }
  /* 005f8fde mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f8fe1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f8fe3 je 0x5f8ff5 */ if (ZF_) goto L_005f8ff5;
  /* 005f8fe5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f8fe7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f8fe8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f8fea push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005f8fec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f8fed call 0x5f7460 */ esp -= 4; M32(esp) = 0x5f8ff2u; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x5f8fedu); RETCHK(0x5f8ff2u, 0x5f8fedu); LOADALL;
  /* 005f8ff2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f8ff5:;
  /* 005f8ff5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f8ff7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f8ff8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9000(CPU *c) {
  NATIVE_HOOK(0x5f9000u) REGS; LOADALL;
L_005f9000:;
  /* 005f9000 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f9004 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9005 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9009 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f900b mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 005f900e mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f9011 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9013 je 0x5f9025 */ if (ZF_) goto L_005f9025;
  /* 005f9015 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f9017 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9018 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f901a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005f901c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f901d call 0x5f7460 */ esp -= 4; M32(esp) = 0x5f9022u; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x5f901du); RETCHK(0x5f9022u, 0x5f901du); LOADALL;
  /* 005f9022 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f9025:;
  /* 005f9025 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9027 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9028 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9030(CPU *c) {
  NATIVE_HOOK(0x5f9030u) REGS; LOADALL;
L_005f9030:;
  /* 005f9030 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9034 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f9038 fld dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 005f903b fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f903d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9040(CPU *c) {
  NATIVE_HOOK(0x5f9040u) REGS; LOADALL;
L_005f9040:;
  /* 005f9040 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f9044 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9045 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9049 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f904b mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 005f904e mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f9051 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9053 je 0x5f9065 */ if (ZF_) goto L_005f9065;
  /* 005f9055 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f9057 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9058 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f905a push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 005f905c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f905d call 0x5f7460 */ esp -= 4; M32(esp) = 0x5f9062u; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x5f905du); RETCHK(0x5f9062u, 0x5f905du); LOADALL;
  /* 005f9062 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f9065:;
  /* 005f9065 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9067 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9068 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9070(CPU *c) {
  NATIVE_HOOK(0x5f9070u) REGS; LOADALL;
L_005f9070:;
  /* 005f9070 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f9074 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9075 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9079 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f907b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f907c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f907d call 0x5f8e10 */ esp -= 4; M32(esp) = 0x5f9082u; SAVEALL; F_005f8e10(c); ABI_CHECK(0x5f8e10u, 0x5f907du); RETCHK(0x5f9082u, 0x5f907du); LOADALL;
  /* 005f9082 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9085 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9087 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9088 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9090(CPU *c) {
  NATIVE_HOOK(0x5f9090u) REGS; LOADALL;
L_005f9090:;
  /* 005f9090 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9094 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f9098 mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005f909b shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f909d and ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f90a0 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f90a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f90b0(CPU *c) {
  NATIVE_HOOK(0x5f90b0u) REGS; LOADALL;
L_005f90b0:;
  /* 005f90b0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f90b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f90b5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f90b9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f90bb mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f90be mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f90c1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f90c3 je 0x5f90d5 */ if (ZF_) goto L_005f90d5;
  /* 005f90c5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f90c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f90c8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f90ca push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 005f90cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f90cd call 0x5f7460 */ esp -= 4; M32(esp) = 0x5f90d2u; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x5f90cdu); RETCHK(0x5f90d2u, 0x5f90cdu); LOADALL;
  /* 005f90d2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f90d5:;
  /* 005f90d5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f90d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f90d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f90e0(CPU *c) {
  NATIVE_HOOK(0x5f90e0u) REGS; LOADALL;
L_005f90e0:;
  /* 005f90e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f90e1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f90e5 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f90e8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f90ea je 0x5f910e */ if (ZF_) goto L_005f910e;
  /* 005f90ec test byte ptr [esi + 0x34], 2 */ { const u32 m_ = (u32)(esi + 0x34u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f90f0 je 0x5f910e */ if (ZF_) goto L_005f910e;
  /* 005f90f2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f90f4 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005f90f6 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 005f90f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f90f9 call 0x5f74b0 */ esp -= 4; M32(esp) = 0x5f90feu; SAVEALL; F_005f74b0(c); ABI_CHECK(0x5f74b0u, 0x5f90f9u); RETCHK(0x5f90feu, 0x5f90f9u); LOADALL;
  /* 005f90fe mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f9102 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9105 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f9108 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f910a mov eax, esi */ { eax = (u32)(esi); }
  /* 005f910c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f910d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f910e:;
  /* 005f910e mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 005f9111 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f9115 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f9118 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f911a mov eax, esi */ { eax = (u32)(esi); }
  /* 005f911c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f911d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9120(CPU *c) {
  NATIVE_HOOK(0x5f9120u) REGS; LOADALL;
L_005f9120:;
  /* 005f9120 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f9124 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9125 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9129 cmp dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f912c mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 005f912f je 0x5f9135 */ if (ZF_) goto L_005f9135;
  /* 005f9131 or al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f9133 jmp 0x5f9137 */ goto L_005f9137;
L_005f9135:;
  /* 005f9135 and al, 0xfb */ { u32 a_ = (eax & 0xffu), b_ = 0xfbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_005f9137:;
  /* 005f9137 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 005f913a mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f913d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f913f je 0x5f9151 */ if (ZF_) goto L_005f9151;
  /* 005f9141 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f9143 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9144 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f9146 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005f9148 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9149 call 0x5f7460 */ esp -= 4; M32(esp) = 0x5f914eu; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x5f9149u); RETCHK(0x5f914eu, 0x5f9149u); LOADALL;
  /* 005f914e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f9151:;
  /* 005f9151 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9153 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9154 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9160(CPU *c) {
  NATIVE_HOOK(0x5f9160u) REGS; LOADALL;
L_005f9160:;
  /* 005f9160 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9164 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f9168 mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005f916b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f916e and ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f9171 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f9173 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9180(CPU *c) {
  NATIVE_HOOK(0x5f9180u) REGS; LOADALL;
L_005f9180:;
  /* 005f9180 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f9184 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9185 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9189 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f918a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f918b call 0x5f8e50 */ esp -= 4; M32(esp) = 0x5f9190u; SAVEALL; F_005f8e50(c); ABI_CHECK(0x5f8e50u, 0x5f918bu); RETCHK(0x5f9190u, 0x5f918bu); LOADALL;
  /* 005f9190 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9193 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9195 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9196 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f91a0(CPU *c) {
  NATIVE_HOOK(0x5f91a0u) REGS; LOADALL;
L_005f91a0:;
  /* 005f91a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f91a4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f91a8 mov ecx, dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); ecx = (u32)(M32(m_)); }
  /* 005f91ab mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f91ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f91b0(CPU *c) {
  NATIVE_HOOK(0x5f91b0u) REGS; LOADALL;
L_005f91b0:;
  /* 005f91b0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f91b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f91b5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f91b9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f91bb mov dword ptr [esi + 0x44], eax */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(eax); }
  /* 005f91be mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f91c1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f91c3 je 0x5f91d5 */ if (ZF_) goto L_005f91d5;
  /* 005f91c5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f91c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f91c8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f91ca push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005f91cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f91cd call 0x5f7460 */ esp -= 4; M32(esp) = 0x5f91d2u; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x5f91cdu); RETCHK(0x5f91d2u, 0x5f91cdu); LOADALL;
  /* 005f91d2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f91d5:;
  /* 005f91d5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f91d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f91d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f91e0(CPU *c) {
  NATIVE_HOOK(0x5f91e0u) REGS; LOADALL;
L_005f91e0:;
  /* 005f91e0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f91e4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f91e8 mov ecx, dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ecx = (u32)(M32(m_)); }
  /* 005f91eb mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f91ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f91f0(CPU *c) {
  NATIVE_HOOK(0x5f91f0u) REGS; LOADALL;
L_005f91f0:;
  /* 005f91f0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f91f4 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 005f91fa mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f91fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9200(CPU *c) {
  NATIVE_HOOK(0x5f9200u) REGS; LOADALL;
L_005f9200:;
  /* 005f9200 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f9204 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9205 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9209 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005f920b mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 005f9211 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f9214 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9216 je 0x5f9228 */ if (ZF_) goto L_005f9228;
  /* 005f9218 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005f921a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f921b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f921d push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 005f921f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9220 call 0x5f7460 */ esp -= 4; M32(esp) = 0x5f9225u; SAVEALL; F_005f7460(c); ABI_CHECK(0x5f7460u, 0x5f9220u); RETCHK(0x5f9225u, 0x5f9220u); LOADALL;
  /* 005f9225 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f9228:;
  /* 005f9228 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f922a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f922b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9230(CPU *c) {
  NATIVE_HOOK(0x5f9230u) REGS; LOADALL;
L_005f9230:;
  /* 005f9230 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9234 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f9238 mov ecx, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); ecx = (u32)(M32(m_)); }
  /* 005f923e mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f9240 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9250(CPU *c) {
  NATIVE_HOOK(0x5f9250u) REGS; LOADALL;
L_005f9250:;
  /* 005f9250 push 0x694390 */ { u32 v_ = 0x694390u; esp -= 4; M32(esp) = v_; }
  /* 005f9255 call 0x5f7c50 */ esp -= 4; M32(esp) = 0x5f925au; SAVEALL; F_005f7c50(c); ABI_CHECK(0x5f7c50u, 0x5f9255u); RETCHK(0x5f925au, 0x5f9255u); LOADALL;
  /* 005f925a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f925d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f925f jne 0x5f9262 */ if (!ZF_) goto L_005f9262;
  /* 005f9261 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f9262:;
  /* 005f9262 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9264 push 0x63c8a4 */ { u32 v_ = 0x63c8a4u; esp -= 4; M32(esp) = v_; }
  /* 005f9269 push 0x694390 */ { u32 v_ = 0x694390u; esp -= 4; M32(esp) = v_; }
  /* 005f926e call 0x5f7c20 */ esp -= 4; M32(esp) = 0x5f9273u; SAVEALL; F_005f7c20(c); ABI_CHECK(0x5f7c20u, 0x5f926eu); RETCHK(0x5f9273u, 0x5f926eu); LOADALL;
  /* 005f9273 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 005f9275 push 0x67eb40 */ { u32 v_ = 0x67eb40u; esp -= 4; M32(esp) = v_; }
  /* 005f927a push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005f927c push 0x67ea28 */ { u32 v_ = 0x67ea28u; esp -= 4; M32(esp) = v_; }
  /* 005f9281 push 0x694390 */ { u32 v_ = 0x694390u; esp -= 4; M32(esp) = v_; }
  /* 005f9286 call 0x5f7b00 */ esp -= 4; M32(esp) = 0x5f928bu; SAVEALL; F_005f7b00(c); ABI_CHECK(0x5f7b00u, 0x5f9286u); RETCHK(0x5f928bu, 0x5f9286u); LOADALL;
  /* 005f928b add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f928e mov eax, 0x694390 */ { eax = (u32)(0x694390u); }
  /* 005f9293 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f92a0(CPU *c) {
  NATIVE_HOOK(0x5f92a0u) REGS; LOADALL;
L_005f92a0:;
  /* 005f92a0 push 0x694390 */ { u32 v_ = 0x694390u; esp -= 4; M32(esp) = v_; }
  /* 005f92a5 call 0x5f7cd0 */ esp -= 4; M32(esp) = 0x5f92aau; SAVEALL; F_005f7cd0(c); ABI_CHECK(0x5f7cd0u, 0x5f92a5u); RETCHK(0x5f92aau, 0x5f92a5u); LOADALL;
  /* 005f92aa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f92ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f92b0(CPU *c) {
  NATIVE_HOOK(0x5f92b0u) REGS; LOADALL;
L_005f92b0:;
  /* 005f92b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f92b4 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f92b8 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f92ba cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f92bc jne 0x5f92cd */ if (!ZF_) goto L_005f92cd;
  /* 005f92be fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 005f92c1 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005f92c4 or ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f92c7 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f92ca mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
L_005f92cd:;
  /* 005f92cd mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f92d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f92e0(CPU *c) {
  NATIVE_HOOK(0x5f92e0u) REGS; LOADALL;
L_005f92e0:;
  /* 005f92e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f92e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f92e2 call 0x619070 */ esp -= 4; M32(esp) = 0x5f92e7u; SAVEALL; F_00619070(c); ABI_CHECK(0x619070u, 0x5f92e2u); RETCHK(0x5f92e7u, 0x5f92e2u); LOADALL;
  /* 005f92e7 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005f92eb mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005f92ef mov esi, eax */ { esi = (u32)(eax); }
  /* 005f92f1 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005f92f3 fstp dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f92f6 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f92f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f92f9 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f92ffu; SAVEALL; call_ind(c, t_); RETCHK(0x5f92ffu, 0x5f92f9u); LOADALL; }
  /* 005f92ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9301 push 0x63c9b8 */ { u32 v_ = 0x63c9b8u; esp -= 4; M32(esp) = v_; }
  /* 005f9306 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9308 call 0x5f6430 */ esp -= 4; M32(esp) = 0x5f930du; SAVEALL; F_005f6430(c); ABI_CHECK(0x5f6430u, 0x5f9308u); RETCHK(0x5f930du, 0x5f9308u); LOADALL;
  /* 005f930d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f930e push 0x5f92b0 */ { u32 v_ = 0x5f92b0u; esp -= 4; M32(esp) = v_; }
  /* 005f9313 call 0x5f5bf0 */ esp -= 4; M32(esp) = 0x5f9318u; SAVEALL; F_005f5bf0(c); ABI_CHECK(0x5f5bf0u, 0x5f9313u); RETCHK(0x5f9318u, 0x5f9313u); LOADALL;
  /* 005f9318 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005f931a add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f931d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f931f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f9321 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9322 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9328u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9328u, 0x5f9322u); LOADALL; }
  /* 005f9328 mov eax, dword ptr [edi + 0x11c] */ { const u32 m_ = (u32)(edi + 0x11cu); eax = (u32)(M32(m_)); }
  /* 005f932e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f932f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9331 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9332 je 0x5f933b */ if (ZF_) goto L_005f933b;
  /* 005f9334 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f9338 mov dword ptr [eax + 0x30], edx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(edx); }
L_005f933b:;
  /* 005f933b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9340(CPU *c) {
  NATIVE_HOOK(0x5f9340u) REGS; LOADALL;
L_005f9340:;
  /* 005f9340 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9344 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f9348 mov dl, byte ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f934b mov dword ptr [eax + 0x3c], ecx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 005f934e test dl, 8 */ { u32 a_ = (edx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f9351 je 0x5f935c */ if (ZF_) goto L_005f935c;
  /* 005f9353 mov eax, dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); eax = (u32)(M32(m_)); }
  /* 005f9359 mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
L_005f935c:;
  /* 005f935c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9360(CPU *c) {
  NATIVE_HOOK(0x5f9360u) REGS; LOADALL;
L_005f9360:;
  /* 005f9360 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9364 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f9368 mov edx, dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); edx = (u32)(M32(m_)); }
  /* 005f936b mov dword ptr [eax + 0x74], ecx */ { const u32 m_ = (u32)(eax + 0x74u); M32(m_) = (u32)(ecx); }
  /* 005f936e or dh, 1 */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f9371 mov dword ptr [eax + 0x78], edx */ { const u32 m_ = (u32)(eax + 0x78u); M32(m_) = (u32)(edx); }
  /* 005f9374 mov dl, byte ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f9377 test dl, 8 */ { u32 a_ = (edx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f937a je 0x5f9385 */ if (ZF_) goto L_005f9385;
  /* 005f937c mov eax, dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); eax = (u32)(M32(m_)); }
  /* 005f9382 mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
L_005f9385:;
  /* 005f9385 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9390(CPU *c) {
  NATIVE_HOOK(0x5f9390u) REGS; LOADALL;
L_005f9390:;
  /* 005f9390 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9394 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 005f9398 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9399 mov eax, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); eax = (u32)(M32(m_)); }
  /* 005f939c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f939d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f939f call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f93a2u; SAVEALL; call_ind(c, t_); RETCHK(0x5f93a2u, 0x5f939fu); LOADALL; }
  /* 005f93a2 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f93a6 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f93ab dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f93ac cmp eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f93af ja 0x5f93d6 */ if (!(CF_|ZF_)) goto L_005f93d6;
  /* 005f93b1 jmp dword ptr [eax*4 + 0x5f93dc] */ { const u32 m_ = (u32)(eax * 4u + 0x5f93dcu); u32 t_ = M32(m_); switch (t_) { case 0x5f93b8u: goto L_005f93b8; case 0x5f93beu: goto L_005f93be; case 0x5f93c4u: goto L_005f93c4; case 0x5f93cau: goto L_005f93ca; case 0x5f93d0u: goto L_005f93d0; case 0x5f93d6u: goto L_005f93d6; default: SAVEALL; call_ind(c, t_); return; } }
L_005f93b8:;
  /* 005f93b8 mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 005f93bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f93be:;
  /* 005f93be mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 005f93c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f93c4:;
  /* 005f93c4 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 005f93c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f93ca:;
  /* 005f93ca mov eax, 5 */ { eax = (u32)(0x5u); }
  /* 005f93cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f93d0:;
  /* 005f93d0 mov eax, 6 */ { eax = (u32)(0x6u); }
  /* 005f93d5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f93d6:;
  /* 005f93d6 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f93db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9400(CPU *c) {
  NATIVE_HOOK(0x5f9400u) REGS; LOADALL;
L_005f9400:;
  /* 005f9400 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9404 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9407 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f9408 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f9409 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f940a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f940b mov edi, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); edi = (u32)(M32(m_)); }
  /* 005f940f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005f9411 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9413 lea esi, [eax + 0x28] */ esi = (u32)((u32)(eax + 0x28u));
  /* 005f9416 jne 0x5f94ae */ if (!ZF_) goto L_005f94ae;
  /* 005f941c mov eax, dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); eax = (u32)(M32(m_)); }
  /* 005f941f lea edi, [esi + 0x74] */ edi = (u32)((u32)(esi + 0x74u));
  /* 005f9422 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9424 je 0x5f9494 */ if (ZF_) goto L_005f9494;
  /* 005f9426 mov ecx, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ecx = (u32)(M32(m_)); }
  /* 005f9429 mov edx, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); edx = (u32)(M32(m_)); }
  /* 005f942f or ch, 2 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f9432 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005f9434 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9435 mov dword ptr [esi + 0x50], ecx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ecx); }
  /* 005f9438 call dword ptr [0x62e0ec] */ { const u32 m_ = (u32)(0x62e0ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f943eu; SAVEALL; call_ind(c, t_); RETCHK(0x5f943eu, 0x5f9438u); LOADALL; }
  /* 005f943e mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 005f9441 and ah, 0xfd */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xfdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005f9444 mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 005f9447 mov al, byte ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f944a test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f944c je 0x5f945d */ if (ZF_) goto L_005f945d;
  /* 005f944e lea ecx, [esi + 0x80] */ ecx = (u32)((u32)(esi + 0x80u));
  /* 005f9454 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9455 call 0x5fa060 */ esp -= 4; M32(esp) = 0x5f945au; SAVEALL; F_005fa060(c); ABI_CHECK(0x5fa060u, 0x5f9455u); RETCHK(0x5f945au, 0x5f9455u); LOADALL;
  /* 005f945a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f945d:;
  /* 005f945d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f945e call 0x5f9db0 */ esp -= 4; M32(esp) = 0x5f9463u; SAVEALL; F_005f9db0(c); ABI_CHECK(0x5f9db0u, 0x5f945eu); RETCHK(0x5f9463u, 0x5f945eu); LOADALL;
  /* 005f9463 mov eax, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); eax = (u32)(M32(m_)); }
  /* 005f9469 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f946c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f946e mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 005f9470 mov dword ptr [esi + 0x78], ebx */ { const u32 m_ = (u32)(esi + 0x78u); M32(m_) = (u32)(ebx); }
  /* 005f9473 mov dword ptr [esi + 0x7c], ebx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 005f9476 je 0x5f9487 */ if (ZF_) goto L_005f9487;
  /* 005f9478 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9479 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f947eu; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f9479u); RETCHK(0x5f947eu, 0x5f9479u); LOADALL;
  /* 005f947e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9481 mov dword ptr [esi + 0xe4], ebx */ { const u32 m_ = (u32)(esi + 0xe4u); M32(m_) = (u32)(ebx); }
L_005f9487:;
  /* 005f9487 mov edx, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); edx = (u32)(M32(m_)); }
  /* 005f948d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f948e call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9494u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9494u, 0x5f948eu); LOADALL; }
L_005f9494:;
  /* 005f9494 mov dword ptr [esi + 0xb8], ebx */ { const u32 m_ = (u32)(esi + 0xb8u); M32(m_) = (u32)(ebx); }
  /* 005f949a mov dword ptr [esi + 0xbc], ebx */ { const u32 m_ = (u32)(esi + 0xbcu); M32(m_) = (u32)(ebx); }
  /* 005f94a0 mov dword ptr [esi + 0xc0], ebx */ { const u32 m_ = (u32)(esi + 0xc0u); M32(m_) = (u32)(ebx); }
  /* 005f94a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f94a7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f94a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f94a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f94aa add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f94ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f94ae:;
  /* 005f94ae test byte ptr [esi + 0x50], 8 */ { const u32 m_ = (u32)(esi + 0x50u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f94b2 je 0x5f951b */ if (ZF_) goto L_005f951b;
  /* 005f94b4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f94b6 mov ax, word ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005f94ba shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f94bd imul eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f94c1 lea ecx, [eax + eax*4] */ ecx = (u32)((u32)(eax + eax * 4u));
  /* 005f94c4 mov eax, 0x10624dd3 */ { eax = (u32)(0x10624dd3u); }
  /* 005f94c9 shl ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f94cc mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f94ce mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f94d1 shr edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005f94d4 mov eax, edx */ { eax = (u32)(edx); }
  /* 005f94d6 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f94d8 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f94da jae 0x5f951b */ if (!CF_) goto L_005f951b;
  /* 005f94dc add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f94de xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f94e0 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x5f94e0u); eax = q_; edx = r_; }
  /* 005f94e2 push 0x3080c */ { u32 v_ = 0x3080cu; esp -= 4; M32(esp) = v_; }
  /* 005f94e7 mov edi, eax */ { edi = (u32)(eax); }
  /* 005f94e9 imul edi, ecx */ { s64 p_ = (s64)(s32)edi * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f94ec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f94ed push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f94ef call 0x5f2450 */ esp -= 4; M32(esp) = 0x5f94f4u; SAVEALL; F_005f2450(c); ABI_CHECK(0x5f2450u, 0x5f94efu); RETCHK(0x5f94f4u, 0x5f94efu); LOADALL;
  /* 005f94f4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f94f7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f94f9 mov dword ptr [esi + 0xe4], eax */ { const u32 m_ = (u32)(esi + 0xe4u); M32(m_) = (u32)(eax); }
  /* 005f94ff je 0x5f976b */ if (ZF_) goto L_005f976b;
  /* 005f9505 mov dword ptr [esi + 0xf0], edi */ { const u32 m_ = (u32)(esi + 0xf0u); M32(m_) = (u32)(edi); }
  /* 005f950b mov edi, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); edi = (u32)(M32(m_)); }
  /* 005f950f mov dword ptr [esi + 0xe8], ebx */ { const u32 m_ = (u32)(esi + 0xe8u); M32(m_) = (u32)(ebx); }
  /* 005f9515 mov dword ptr [esi + 0xec], ebx */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(ebx); }
L_005f951b:;
  /* 005f951b mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f951e mov cl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f9521 add edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f9523 mov byte ptr [esp + 0x28], cl */ { const u32 m_ = (u32)(esp + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005f9527 mov dword ptr [esi + 0xc4], edx */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(edx); }
  /* 005f952d mov ecx, dword ptr [esi + 0xc4] */ { const u32 m_ = (u32)(esi + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 005f9533 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f9536 mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005f953a mov ecx, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ecx = (u32)(M32(m_)); }
  /* 005f953d mov dword ptr [esi + 0xc8], ebx */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(ebx); }
  /* 005f9543 test ch, 4 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f9546 mov eax, 0x88 */ { eax = (u32)(0x88u); }
  /* 005f954b mov byte ptr [esp + 0x34], 0 */ { const u32 m_ = (u32)(esp + 0x34u); M8(m_) = (u8)(0x0u); }
  /* 005f9550 mov byte ptr [esp + 0x35], 0 */ { const u32 m_ = (u32)(esp + 0x35u); M8(m_) = (u8)(0x0u); }
  /* 005f9555 mov dword ptr [esp + 0x2c], ebx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 005f9559 mov dword ptr [esp + 0x30], ebx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ebx); }
  /* 005f955d mov dword ptr [esp + 0x20], 0x63c330 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x63c330u); }
  /* 005f9565 mov byte ptr [esp + 0x29], 2 */ { const u32 m_ = (u32)(esp + 0x29u); M8(m_) = (u8)(0x2u); }
  /* 005f956a mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 005f956e je 0x5f9575 */ if (ZF_) goto L_005f9575;
  /* 005f9570 mov eax, 0x8088 */ { eax = (u32)(0x8088u); }
L_005f9575:;
  /* 005f9575 lea ebp, [esi + 0x74] */ ebp = (u32)((u32)(esi + 0x74u));
  /* 005f9578 lea edx, [esp + 0x1c] */ edx = (u32)((u32)(esp + 0x1cu));
  /* 005f957c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f957d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f957e mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 005f9581 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f9582 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f9583 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9584 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9585 call 0x5f9c30 */ esp -= 4; M32(esp) = 0x5f958au; SAVEALL; F_005f9c30(c); ABI_CHECK(0x5f9c30u, 0x5f9585u); RETCHK(0x5f958au, 0x5f9585u); LOADALL;
  /* 005f958a add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f958d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f958f je 0x5f96d3 */ if (ZF_) goto L_005f96d3;
  /* 005f9595 test byte ptr [esi + 0x50], 8 */ { const u32 m_ = (u32)(esi + 0x50u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f9599 je 0x5f95c6 */ if (ZF_) goto L_005f95c6;
  /* 005f959b mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 005f959f lea ecx, [esi + 0x80] */ ecx = (u32)((u32)(esi + 0x80u));
  /* 005f95a5 lea edx, [esp + 0x1c] */ edx = (u32)((u32)(esp + 0x1cu));
  /* 005f95a9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f95aa shr edi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005f95ac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f95ad push 0x62e78c */ { u32 v_ = 0x62e78cu; esp -= 4; M32(esp) = v_; }
  /* 005f95b2 mov dword ptr [esp + 0x30], edi */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(edi); }
  /* 005f95b6 call 0x5f9e90 */ esp -= 4; M32(esp) = 0x5f95bbu; SAVEALL; F_005f9e90(c); ABI_CHECK(0x5f9e90u, 0x5f95b6u); RETCHK(0x5f95bbu, 0x5f95b6u); LOADALL;
  /* 005f95bb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f95be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f95c0 je 0x5f96ca */ if (ZF_) goto L_005f96ca;
L_005f95c6:;
  /* 005f95c6 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 005f95ca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f95cb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f95cc lea edx, [esp + 0x44] */ edx = (u32)((u32)(esp + 0x44u));
  /* 005f95d0 mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005f95d3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f95d4 lea edx, [esp + 0x20] */ edx = (u32)((u32)(esp + 0x20u));
  /* 005f95d8 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f95da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f95db lea edx, [esp + 0x28] */ edx = (u32)((u32)(esp + 0x28u));
  /* 005f95df push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f95e0 mov edx, dword ptr [esi + 0xc4] */ { const u32 m_ = (u32)(esi + 0xc4u); edx = (u32)(M32(m_)); }
  /* 005f95e6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f95e7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f95e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f95e9 call dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f95ecu; SAVEALL; call_ind(c, t_); RETCHK(0x5f95ecu, 0x5f95e9u); LOADALL; }
  /* 005f95ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f95ee jge 0x5f9606 */ if (!LT_) goto L_005f9606;
L_005f95f0:;
  /* 005f95f0 test byte ptr [esi + 0x50], 8 */ { const u32 m_ = (u32)(esi + 0x50u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f95f4 je 0x5f96ca */ if (ZF_) goto L_005f96ca;
  /* 005f95fa lea eax, [esi + 0x80] */ eax = (u32)((u32)(esi + 0x80u));
  /* 005f9600 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9601 jmp 0x5f96c2 */ goto L_005f96c2;
L_005f9606:;
  /* 005f9606 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 005f960a cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f960c je 0x5f9626 */ if (ZF_) goto L_005f9626;
  /* 005f960e mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f9612 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9614 je 0x5f9626 */ if (ZF_) goto L_005f9626;
  /* 005f9616 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f9618 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f961a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f961d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f961f mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f9621 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f9624 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
L_005f9626:;
  /* 005f9626 mov edi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edi = (u32)(M32(m_)); }
  /* 005f962a cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f962c je 0x5f964a */ if (ZF_) goto L_005f964a;
  /* 005f962e mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005f9632 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9634 je 0x5f964a */ if (ZF_) goto L_005f964a;
  /* 005f9636 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f9638 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f963a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f963d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005f963f mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005f9641 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f9644 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 005f9646 mov edi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edi = (u32)(M32(m_)); }
L_005f964a:;
  /* 005f964a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f964e mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005f9651 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9652 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005f9656 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9658 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f9659 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f965a mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 005f965e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f965f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9660 call dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9663u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9663u, 0x5f9660u); LOADALL; }
  /* 005f9663 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9665 jl 0x5f95f0 */ if (LT_) goto L_005f95f0;
  /* 005f9667 mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005f966a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f966c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f966d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f966e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9670 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9671 call dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9674u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9674u, 0x5f9671u); LOADALL; }
  /* 005f9674 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9676 jl 0x5f96b5 */ if (LT_) goto L_005f96b5;
  /* 005f9678 mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f967c lea edi, [esi + 0xcc] */ edi = (u32)((u32)(esi + 0xccu));
  /* 005f9682 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f9684 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f9685 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9687 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f9688 mov dword ptr [esi + 0xb8], ecx */ { const u32 m_ = (u32)(esi + 0xb8u); M32(m_) = (u32)(ecx); }
  /* 005f968e mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f9691 mov dword ptr [esi + 0xbc], edx */ { const u32 m_ = (u32)(esi + 0xbcu); M32(m_) = (u32)(edx); }
  /* 005f9697 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f969a mov dword ptr [esi + 0xc0], eax */ { const u32 m_ = (u32)(esi + 0xc0u); M32(m_) = (u32)(eax); }
  /* 005f96a0 call 0x5f6930 */ esp -= 4; M32(esp) = 0x5f96a5u; SAVEALL; F_005f6930(c); ABI_CHECK(0x5f6930u, 0x5f96a0u); RETCHK(0x5f96a5u, 0x5f96a0u); LOADALL;
  /* 005f96a5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f96a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f96aa jne 0x5f96f8 */ if (!ZF_) goto L_005f96f8;
  /* 005f96ac mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005f96af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f96b0 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f96b2 call dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f96b5u; SAVEALL; call_ind(c, t_); RETCHK(0x5f96b5u, 0x5f96b2u); LOADALL; }
L_005f96b5:;
  /* 005f96b5 test byte ptr [esi + 0x50], 8 */ { const u32 m_ = (u32)(esi + 0x50u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f96b9 je 0x5f96ca */ if (ZF_) goto L_005f96ca;
  /* 005f96bb lea edx, [esi + 0x80] */ edx = (u32)((u32)(esi + 0x80u));
  /* 005f96c1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
L_005f96c2:;
  /* 005f96c2 call 0x5fa060 */ esp -= 4; M32(esp) = 0x5f96c7u; SAVEALL; F_005fa060(c); ABI_CHECK(0x5fa060u, 0x5f96c2u); RETCHK(0x5f96c7u, 0x5f96c2u); LOADALL;
  /* 005f96c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f96ca:;
  /* 005f96ca push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f96cb call 0x5f9db0 */ esp -= 4; M32(esp) = 0x5f96d0u; SAVEALL; F_005f9db0(c); ABI_CHECK(0x5f9db0u, 0x5f96cbu); RETCHK(0x5f96d0u, 0x5f96cbu); LOADALL;
  /* 005f96d0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f96d3:;
  /* 005f96d3 mov eax, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); eax = (u32)(M32(m_)); }
  /* 005f96d9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f96db je 0x5f976b */ if (ZF_) goto L_005f976b;
  /* 005f96e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f96e2 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f96e7u; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f96e2u); RETCHK(0x5f96e7u, 0x5f96e2u); LOADALL;
  /* 005f96e7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f96ea mov dword ptr [esi + 0xe4], ebx */ { const u32 m_ = (u32)(esi + 0xe4u); M32(m_) = (u32)(ebx); }
  /* 005f96f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f96f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f96f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f96f3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f96f4 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f96f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f96f8:;
  /* 005f96f8 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 005f96fd lea ebx, [esi + 0xd0] */ ebx = (u32)((u32)(esi + 0xd0u));
  /* 005f9703 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 005f9705 push 0x5f9780 */ { u32 v_ = 0x5f9780u; esp -= 4; M32(esp) = v_; }
  /* 005f970a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f970b call 0x5f6990 */ esp -= 4; M32(esp) = 0x5f9710u; SAVEALL; F_005f6990(c); ABI_CHECK(0x5f6990u, 0x5f970bu); RETCHK(0x5f9710u, 0x5f970bu); LOADALL;
  /* 005f9710 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9711 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f9712 call 0x5f69c0 */ esp -= 4; M32(esp) = 0x5f9717u; SAVEALL; F_005f69c0(c); ABI_CHECK(0x5f69c0u, 0x5f9712u); RETCHK(0x5f9717u, 0x5f9712u); LOADALL;
  /* 005f9717 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f971a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f971c jne 0x5f976b */ if (!ZF_) goto L_005f976b;
  /* 005f971e mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005f9720 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9721 call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9727u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9727u, 0x5f9721u); LOADALL; }
  /* 005f9727 mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 005f972a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f972b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f972d call dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9730u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9730u, 0x5f972du); LOADALL; }
  /* 005f9730 test byte ptr [esi + 0x50], 8 */ { const u32 m_ = (u32)(esi + 0x50u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f9734 je 0x5f9745 */ if (ZF_) goto L_005f9745;
  /* 005f9736 lea edx, [esi + 0x80] */ edx = (u32)((u32)(esi + 0x80u));
  /* 005f973c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f973d call 0x5fa060 */ esp -= 4; M32(esp) = 0x5f9742u; SAVEALL; F_005fa060(c); ABI_CHECK(0x5fa060u, 0x5f973du); RETCHK(0x5f9742u, 0x5f973du); LOADALL;
  /* 005f9742 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f9745:;
  /* 005f9745 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f9746 call 0x5f9db0 */ esp -= 4; M32(esp) = 0x5f974bu; SAVEALL; F_005f9db0(c); ABI_CHECK(0x5f9db0u, 0x5f9746u); RETCHK(0x5f974bu, 0x5f9746u); LOADALL;
  /* 005f974b mov eax, dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); eax = (u32)(M32(m_)); }
  /* 005f9751 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9754 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9756 je 0x5f976b */ if (ZF_) goto L_005f976b;
  /* 005f9758 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9759 call 0x5e02a0 */ esp -= 4; M32(esp) = 0x5f975eu; SAVEALL; F_005e02a0(c); ABI_CHECK(0x5e02a0u, 0x5f9759u); RETCHK(0x5f975eu, 0x5f9759u); LOADALL;
  /* 005f975e mov dword ptr [esi + 0xe4], 0 */ { const u32 m_ = (u32)(esi + 0xe4u); M32(m_) = (u32)(0x0u); }
  /* 005f9768 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005f976b:;
  /* 005f976b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f976c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f976d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f976e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f976f add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9772 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9780(CPU *c) {
  NATIVE_HOOK(0x5f9780u) REGS; LOADALL;
L_005f9780:;
  /* 005f9780 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9783 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f9784 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 005f9788 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9789 mov esi, dword ptr [ebp + 0xc4] */ { const u32 m_ = (u32)(ebp + 0xc4u); esi = (u32)(M32(m_)); }
  /* 005f978f mov eax, dword ptr [ebp + 0x50] */ { const u32 m_ = (u32)(ebp + 0x50u); eax = (u32)(M32(m_)); }
  /* 005f9792 shr esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005f9794 test ah, 2 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f9797 mov dword ptr [esp + 0x10], esi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(esi); }
  /* 005f979b jne 0x5f998d */ if (!ZF_) goto L_005f998d;
  /* 005f97a1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f97a2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_005f97a3:;
  /* 005f97a3 mov eax, dword ptr [ebp + 0x74] */ { const u32 m_ = (u32)(ebp + 0x74u); eax = (u32)(M32(m_)); }
  /* 005f97a6 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 005f97aa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f97ab lea edx, [esp + 0x2c] */ edx = (u32)((u32)(esp + 0x2cu));
  /* 005f97af mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f97b1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f97b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f97b3 call dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f97b6u; SAVEALL; call_ind(c, t_); RETCHK(0x5f97b6u, 0x5f97b3u); LOADALL; }
  /* 005f97b6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f97b8 jl 0x5f9977 */ if (LT_) goto L_005f9977;
  /* 005f97be mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f97c2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f97c4 div esi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, esi, &q_, &r_, 0x5f97c4u); eax = q_; edx = r_; }
  /* 005f97c6 mov ecx, dword ptr [ebp + 0xc8] */ { const u32 m_ = (u32)(ebp + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 005f97cc imul eax, esi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f97cf cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f97d1 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f97d5 je 0x5f9977 */ if (ZF_) goto L_005f9977;
L_005f97db:;
  /* 005f97db mov eax, dword ptr [ebp + 0xc0] */ { const u32 m_ = (u32)(ebp + 0xc0u); eax = (u32)(M32(m_)); }
  /* 005f97e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f97e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f97e3 call dword ptr [ebp + 0xb8] */ { const u32 m_ = (u32)(ebp + 0xb8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f97e9u; SAVEALL; call_ind(c, t_); RETCHK(0x5f97e9u, 0x5f97e3u); LOADALL; }
  /* 005f97e9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f97ec mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f97ef lea edx, [esp + 0x20] */ edx = (u32)((u32)(esp + 0x20u));
  /* 005f97f3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f97f5 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 005f97f7 mov ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ebx = (u32)(M32(m_)); }
  /* 005f97fa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f97fb mov eax, dword ptr [ebp + 0x74] */ { const u32 m_ = (u32)(ebp + 0x74u); eax = (u32)(M32(m_)); }
  /* 005f97fe lea edx, [esp + 0x2c] */ edx = (u32)((u32)(esp + 0x2cu));
  /* 005f9802 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9803 lea edx, [esp + 0x3c] */ edx = (u32)((u32)(esp + 0x3cu));
  /* 005f9807 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9809 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f980a lea edx, [esp + 0x20] */ edx = (u32)((u32)(esp + 0x20u));
  /* 005f980e mov dword ptr [esp + 0x2c], edi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edi); }
  /* 005f9812 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9813 mov edx, dword ptr [ebp + 0xc8] */ { const u32 m_ = (u32)(ebp + 0xc8u); edx = (u32)(M32(m_)); }
  /* 005f9819 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f981a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f981b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f981c call dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f981fu; SAVEALL; call_ind(c, t_); RETCHK(0x5f981fu, 0x5f981cu); LOADALL; }
  /* 005f981f mov al, byte ptr [ebp + 0x50] */ { const u32 m_ = (u32)(ebp + 0x50u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f9822 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f9826 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f9828 je 0x5f9908 */ if (ZF_) goto L_005f9908;
  /* 005f982e mov eax, dword ptr [ebp + 0xe4] */ { const u32 m_ = (u32)(ebp + 0xe4u); eax = (u32)(M32(m_)); }
  /* 005f9834 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005f9836 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9838 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005f983a je 0x5f989b */ if (ZF_) goto L_005f989b;
  /* 005f983c mov edi, dword ptr [ebp + 0xe8] */ { const u32 m_ = (u32)(ebp + 0xe8u); edi = (u32)(M32(m_)); }
  /* 005f9842 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f9844 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005f9846 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f9849 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f984b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f984d and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f9850 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f9852 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005f9856 mov eax, dword ptr [ebp + 0xe8] */ { const u32 m_ = (u32)(ebp + 0xe8u); eax = (u32)(M32(m_)); }
  /* 005f985c add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f985e mov dword ptr [ebp + 0xe8], eax */ { const u32 m_ = (u32)(ebp + 0xe8u); M32(m_) = (u32)(eax); }
  /* 005f9864 mov esi, eax */ { esi = (u32)(eax); }
  /* 005f9866 mov eax, dword ptr [ebp + 0xf0] */ { const u32 m_ = (u32)(ebp + 0xf0u); eax = (u32)(M32(m_)); }
  /* 005f986c cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f986e jne 0x5f9883 */ if (!ZF_) goto L_005f9883;
  /* 005f9870 mov dword ptr [ebp + 0xe8], 0 */ { const u32 m_ = (u32)(ebp + 0xe8u); M32(m_) = (u32)(0x0u); }
  /* 005f987a mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 005f987f mov edx, eax */ { edx = (u32)(eax); }
  /* 005f9881 jmp 0x5f9885 */ goto L_005f9885;
L_005f9883:;
  /* 005f9883 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_005f9885:;
  /* 005f9885 mov esi, dword ptr [ebp + 0xe8] */ { const u32 m_ = (u32)(ebp + 0xe8u); esi = (u32)(M32(m_)); }
  /* 005f988b mov eax, dword ptr [ebp + 0xe4] */ { const u32 m_ = (u32)(ebp + 0xe4u); eax = (u32)(M32(m_)); }
  /* 005f9891 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f9893 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9895 je 0x5f98f2 */ if (ZF_) goto L_005f98f2;
  /* 005f9897 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
L_005f989b:;
  /* 005f989b mov eax, dword ptr [ebp + 0x84] */ { const u32 m_ = (u32)(ebp + 0x84u); eax = (u32)(M32(m_)); }
  /* 005f98a1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f98a3 je 0x5f98c9 */ if (ZF_) goto L_005f98c9;
  /* 005f98a5 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f98a7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f98a9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f98ab push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f98ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f98ae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f98af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f98b0 call dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f98b3u; SAVEALL; call_ind(c, t_); RETCHK(0x5f98b3u, 0x5f98b0u); LOADALL; }
  /* 005f98b3 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 005f98b7 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f98bb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f98bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f98bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f98be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f98bf call 0x5f99b0 */ esp -= 4; M32(esp) = 0x5f98c4u; SAVEALL; F_005f99b0(c); ABI_CHECK(0x5f99b0u, 0x5f98bfu); RETCHK(0x5f98c4u, 0x5f98bfu); LOADALL;
  /* 005f98c4 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f98c7 jmp 0x5f991c */ goto L_005f991c;
L_005f98c9:;
  /* 005f98c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f98ca mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f98ce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f98cf lea edx, [ebp + 0x80] */ edx = (u32)((u32)(ebp + 0x80u));
  /* 005f98d5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f98d6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f98d7 call 0x5fa0b0 */ esp -= 4; M32(esp) = 0x5f98dcu; SAVEALL; F_005fa0b0(c); ABI_CHECK(0x5fa0b0u, 0x5f98d7u); RETCHK(0x5f98dcu, 0x5f98d7u); LOADALL;
  /* 005f98dc mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f98e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f98e1 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 005f98e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f98e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f98e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f98e8 call 0x5f99b0 */ esp -= 4; M32(esp) = 0x5f98edu; SAVEALL; F_005f99b0(c); ABI_CHECK(0x5f99b0u, 0x5f98e8u); RETCHK(0x5f98edu, 0x5f98e8u); LOADALL;
  /* 005f98ed add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f98f0 jmp 0x5f991c */ goto L_005f991c;
L_005f98f2:;
  /* 005f98f2 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005f98f6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f98f7 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005f98fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f98fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f98fd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f98fe call 0x5f99b0 */ esp -= 4; M32(esp) = 0x5f9903u; SAVEALL; F_005f99b0(c); ABI_CHECK(0x5f99b0u, 0x5f98feu); RETCHK(0x5f9903u, 0x5f98feu); LOADALL;
  /* 005f9903 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9906 jmp 0x5f991c */ goto L_005f991c;
L_005f9908:;
  /* 005f9908 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005f990a mov esi, edi */ { esi = (u32)(edi); }
  /* 005f990c mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f9910 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005f9913 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f9915 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f9917 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f991a rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_005f991c:;
  /* 005f991c mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 005f9920 mov eax, dword ptr [ebp + 0x74] */ { const u32 m_ = (u32)(ebp + 0x74u); eax = (u32)(M32(m_)); }
  /* 005f9923 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9924 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 005f9928 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f992a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f992b mov edx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edx = (u32)(M32(m_)); }
  /* 005f992f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9930 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005f9934 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9935 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9936 call dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9939u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9939u, 0x5f9936u); LOADALL; }
  /* 005f9939 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f993d mov edx, dword ptr [ebp + 0xc8] */ { const u32 m_ = (u32)(ebp + 0xc8u); edx = (u32)(M32(m_)); }
  /* 005f9943 mov ecx, dword ptr [ebp + 0xc4] */ { const u32 m_ = (u32)(ebp + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 005f9949 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f994b mov eax, edx */ { eax = (u32)(edx); }
  /* 005f994d mov dword ptr [ebp + 0xc8], edx */ { const u32 m_ = (u32)(ebp + 0xc8u); M32(m_) = (u32)(edx); }
  /* 005f9953 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9955 jne 0x5f9961 */ if (!ZF_) goto L_005f9961;
  /* 005f9957 mov dword ptr [ebp + 0xc8], 0 */ { const u32 m_ = (u32)(ebp + 0xc8u); M32(m_) = (u32)(0x0u); }
L_005f9961:;
  /* 005f9961 mov ecx, dword ptr [ebp + 0xc8] */ { const u32 m_ = (u32)(ebp + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 005f9967 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f996b mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 005f996f cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9971 jne 0x5f97db */ if (!ZF_) goto L_005f97db;
L_005f9977:;
  /* 005f9977 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005f9979 call dword ptr [0x62e1b0] */ { const u32 m_ = (u32)(0x62e1b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f997fu; SAVEALL; call_ind(c, t_); RETCHK(0x5f997fu, 0x5f9979u); LOADALL; }
  /* 005f997f mov eax, dword ptr [ebp + 0x50] */ { const u32 m_ = (u32)(ebp + 0x50u); eax = (u32)(M32(m_)); }
  /* 005f9982 test ah, 2 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f9985 je 0x5f97a3 */ if (ZF_) goto L_005f97a3;
  /* 005f998b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f998c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005f998d:;
  /* 005f998d mov edx, dword ptr [ebp + 0xcc] */ { const u32 m_ = (u32)(ebp + 0xccu); edx = (u32)(M32(m_)); }
  /* 005f9993 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9995 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005f9997 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9998 call dword ptr [0x62e1f8] */ { const u32 m_ = (u32)(0x62e1f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f999eu; SAVEALL; call_ind(c, t_); RETCHK(0x5f999eu, 0x5f9998u); LOADALL; }
  /* 005f999e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f999f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f99a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f99a2 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f99a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f99b0(CPU *c) {
  NATIVE_HOOK(0x5f99b0u) REGS; LOADALL;
L_005f99b0:;
  /* 005f99b0 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f99b3 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 005f99b7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f99b8 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f99ba mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005f99bc and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f99bf push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005f99c0 mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 005f99c4 mov ebx, 0 */ { ebx = (u32)(0x0u); }
  /* 005f99c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f99ca mov esi, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); esi = (u32)(M32(m_)); }
  /* 005f99ce mov dword ptr [esp + 0x40], eax */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(eax); }
  /* 005f99d2 mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 005f99d6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f99d7 mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005f99db mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 005f99df jbe 0x5f9aea */ if ((CF_|ZF_)) goto L_005f9aea;
  /* 005f99e5 mov edx, esi */ { edx = (u32)(esi); }
  /* 005f99e7 mov ebx, ebp */ { ebx = (u32)(ebp); }
  /* 005f99e9 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 005f99ec sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f99ee sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005f99f0 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 005f99f2 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f99f4 lea edi, [esi + 6] */ edi = (u32)((u32)(esi + 0x6u));
  /* 005f99f7 mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f99fb mov dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebx); }
  /* 005f99ff mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005f9a03 jmp 0x5f9a09 */ goto L_005f9a09;
L_005f9a05:;
  /* 005f9a05 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
L_005f9a09:;
  /* 005f9a09 movsx eax, word ptr [ecx - 2] */ { const u32 m_ = (u32)(ecx + 0xfffffffeu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9a0d movsx esi, word ptr [edi - 6] */ { const u32 m_ = (u32)(edi + 0xfffffffau); esi = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9a11 movsx edx, word ptr [edx + ecx] */ { const u32 m_ = (u32)(edx + ecx); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9a15 movsx ebx, word ptr [edi - 2] */ { const u32 m_ = (u32)(edi + 0xfffffffeu); ebx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9a19 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f9a1b movsx esi, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9a1e movsx ebp, word ptr [edi] */ { const u32 m_ = (u32)(edi); ebp = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9a21 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f9a23 movsx esi, word ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); esi = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9a27 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f9a29 movsx ebx, word ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9a2d add ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005f9a2f cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9a34 mov dword ptr [esp + 0x30], ebx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ebx); }
  /* 005f9a38 jle 0x5f9a41 */ if ((ZF_|LT_)) goto L_005f9a41;
  /* 005f9a3a mov eax, 0x7fff */ { eax = (u32)(0x7fffu); }
  /* 005f9a3f jmp 0x5f9a4d */ goto L_005f9a4d;
L_005f9a41:;
  /* 005f9a41 cmp eax, 0xffff8001 */ { u32 a_ = eax, b_ = 0xffff8001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9a46 jge 0x5f9a4d */ if (!LT_) goto L_005f9a4d;
  /* 005f9a48 mov eax, 0xffff8001 */ { eax = (u32)(0xffff8001u); }
L_005f9a4d:;
  /* 005f9a4d mov ebp, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ebp = (u32)(M32(m_)); }
  /* 005f9a51 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 005f9a55 cmp edx, 0x7fff */ { u32 a_ = edx, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9a5b mov word ptr [ebp + ebx*2], ax */ { const u32 m_ = (u32)(ebp + ebx * 2u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f9a60 jle 0x5f9a69 */ if ((ZF_|LT_)) goto L_005f9a69;
  /* 005f9a62 mov edx, 0x7fff */ { edx = (u32)(0x7fffu); }
  /* 005f9a67 jmp 0x5f9a76 */ goto L_005f9a76;
L_005f9a69:;
  /* 005f9a69 cmp edx, 0xffff8001 */ { u32 a_ = edx, b_ = 0xffff8001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9a6f jge 0x5f9a76 */ if (!LT_) goto L_005f9a76;
  /* 005f9a71 mov edx, 0xffff8001 */ { edx = (u32)(0xffff8001u); }
L_005f9a76:;
  /* 005f9a76 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005f9a7a cmp esi, 0x7fff */ { u32 a_ = esi, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9a80 mov word ptr [eax + ecx], dx */ { const u32 m_ = (u32)(eax + ecx); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f9a84 jle 0x5f9a8d */ if ((ZF_|LT_)) goto L_005f9a8d;
  /* 005f9a86 mov esi, 0x7fff */ { esi = (u32)(0x7fffu); }
  /* 005f9a8b jmp 0x5f9a9a */ goto L_005f9a9a;
L_005f9a8d:;
  /* 005f9a8d cmp esi, 0xffff8001 */ { u32 a_ = esi, b_ = 0xffff8001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9a93 jge 0x5f9a9a */ if (!LT_) goto L_005f9a9a;
  /* 005f9a95 mov esi, 0xffff8001 */ { esi = (u32)(0xffff8001u); }
L_005f9a9a:;
  /* 005f9a9a mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 005f9a9e mov word ptr [ebp + ebx*2 + 4], si */ { const u32 m_ = (u32)(ebp + ebx * 2u + 0x4u); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 005f9aa3 cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9aa8 jle 0x5f9ab1 */ if ((ZF_|LT_)) goto L_005f9ab1;
  /* 005f9aaa mov eax, 0x7fff */ { eax = (u32)(0x7fffu); }
  /* 005f9aaf jmp 0x5f9abd */ goto L_005f9abd;
L_005f9ab1:;
  /* 005f9ab1 cmp eax, 0xffff8001 */ { u32 a_ = eax, b_ = 0xffff8001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9ab6 jge 0x5f9abd */ if (!LT_) goto L_005f9abd;
  /* 005f9ab8 mov eax, 0xffff8001 */ { eax = (u32)(0xffff8001u); }
L_005f9abd:;
  /* 005f9abd mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005f9ac1 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005f9ac4 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005f9ac7 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 005f9acb mov word ptr [edx + edi], ax */ { const u32 m_ = (u32)(edx + edi); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f9acf mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 005f9ad3 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f9ad6 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9ad8 jb 0x5f9a05 */ if (CF_) goto L_005f9a05;
  /* 005f9ade mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005f9ae2 mov esi, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); esi = (u32)(M32(m_)); }
  /* 005f9ae6 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
L_005f9aea:;
  /* 005f9aea cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9aec jae 0x5f9b26 */ if (!CF_) goto L_005f9b26;
  /* 005f9aee mov edi, ebp */ { edi = (u32)(ebp); }
  /* 005f9af0 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005f9af2 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005f9af4 lea edx, [eax + ebx*2] */ edx = (u32)((u32)(eax + ebx * 2u));
  /* 005f9af7 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_005f9af9:;
  /* 005f9af9 movsx eax, word ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9afd movsx ebx, word ptr [edx] */ { const u32 m_ = (u32)(edx); ebx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 005f9b00 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005f9b02 cmp eax, 0x7fff */ { u32 a_ = eax, b_ = 0x7fffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9b07 jle 0x5f9b10 */ if ((ZF_|LT_)) goto L_005f9b10;
  /* 005f9b09 mov eax, 0x7fff */ { eax = (u32)(0x7fffu); }
  /* 005f9b0e jmp 0x5f9b1c */ goto L_005f9b1c;
L_005f9b10:;
  /* 005f9b10 cmp eax, 0xffff8001 */ { u32 a_ = eax, b_ = 0xffff8001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005f9b15 jge 0x5f9b1c */ if (!LT_) goto L_005f9b1c;
  /* 005f9b17 mov eax, 0xffff8001 */ { eax = (u32)(0xffff8001u); }
L_005f9b1c:;
  /* 005f9b1c mov word ptr [edx + edi], ax */ { const u32 m_ = (u32)(edx + edi); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f9b20 add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005f9b23 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005f9b24 jne 0x5f9af9 */ if (!ZF_) goto L_005f9af9;
L_005f9b26:;
  /* 005f9b26 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f9b27 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9b28 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005f9b29 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f9b2a add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9b2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9b30(CPU *c) {
  NATIVE_HOOK(0x5f9b30u) REGS; LOADALL;
L_005f9b30:;
  /* 005f9b30 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f9b34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9b35 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9b39 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9b3b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9b3c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9b3d call 0x5f92e0 */ esp -= 4; M32(esp) = 0x5f9b42u; SAVEALL; F_005f92e0(c); ABI_CHECK(0x5f92e0u, 0x5f9b3du); RETCHK(0x5f9b42u, 0x5f9b3du); LOADALL;
  /* 005f9b42 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9b45 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9b47 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9b48 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9b50(CPU *c) {
  NATIVE_HOOK(0x5f9b50u) REGS; LOADALL;
L_005f9b50:;
  /* 005f9b50 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9b54 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005f9b58 fld dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); FPUSH((double)MF32(m_)); }
  /* 005f9b5b fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005f9b5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9b60(CPU *c) {
  NATIVE_HOOK(0x5f9b60u) REGS; LOADALL;
L_005f9b60:;
  /* 005f9b60 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f9b64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9b65 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9b69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9b6a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9b6b call 0x5f9340 */ esp -= 4; M32(esp) = 0x5f9b70u; SAVEALL; F_005f9340(c); ABI_CHECK(0x5f9340u, 0x5f9b6bu); RETCHK(0x5f9b70u, 0x5f9b6bu); LOADALL;
  /* 005f9b70 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9b73 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9b75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9b76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9b80(CPU *c) {
  NATIVE_HOOK(0x5f9b80u) REGS; LOADALL;
L_005f9b80:;
  /* 005f9b80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9b84 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f9b88 mov ecx, dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005f9b8b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005f9b8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9b90(CPU *c) {
  NATIVE_HOOK(0x5f9b90u) REGS; LOADALL;
L_005f9b90:;
  /* 005f9b90 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9b94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9b95 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f9b99 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f9b9a lea edi, [eax + 0x44] */ edi = (u32)((u32)(eax + 0x44u));
  /* 005f9b9d mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 005f9ba2 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f9ba4 mov ecx, dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); ecx = (u32)(M32(m_)); }
  /* 005f9ba7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f9ba8 or cl, 0x80 */ { u32 a_ = (ecx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005f9bab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9bac mov dword ptr [eax + 0x78], ecx */ { const u32 m_ = (u32)(eax + 0x78u); M32(m_) = (u32)(ecx); }
  /* 005f9baf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9bb0(CPU *c) {
  NATIVE_HOOK(0x5f9bb0u) REGS; LOADALL;
L_005f9bb0:;
  /* 005f9bb0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9bb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9bb5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f9bb6 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005f9bba lea esi, [eax + 0x44] */ esi = (u32)((u32)(eax + 0x44u));
  /* 005f9bbd mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 005f9bc2 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005f9bc4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f9bc5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9bc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9bd0(CPU *c) {
  NATIVE_HOOK(0x5f9bd0u) REGS; LOADALL;
L_005f9bd0:;
  /* 005f9bd0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f9bd4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9bd5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9bd9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9bdb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9bdc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9bdd call 0x5f9360 */ esp -= 4; M32(esp) = 0x5f9be2u; SAVEALL; F_005f9360(c); ABI_CHECK(0x5f9360u, 0x5f9bddu); RETCHK(0x5f9be2u, 0x5f9bddu); LOADALL;
  /* 005f9be2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9be5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9be7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9be8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9bf0(CPU *c) {
  NATIVE_HOOK(0x5f9bf0u) REGS; LOADALL;
L_005f9bf0:;
  /* 005f9bf0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9bf1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9bf5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9bf6 call 0x5f9390 */ esp -= 4; M32(esp) = 0x5f9bfbu; SAVEALL; F_005f9390(c); ABI_CHECK(0x5f9390u, 0x5f9bf6u); RETCHK(0x5f9bfbu, 0x5f9bf6u); LOADALL;
  /* 005f9bfb mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005f9bff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9c02 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005f9c04 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9c06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9c07 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9c10(CPU *c) {
  NATIVE_HOOK(0x5f9c10u) REGS; LOADALL;
L_005f9c10:;
  /* 005f9c10 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005f9c14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9c15 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9c19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9c1a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9c1b call 0x5f9400 */ esp -= 4; M32(esp) = 0x5f9c20u; SAVEALL; F_005f9400(c); ABI_CHECK(0x5f9400u, 0x5f9c1bu); RETCHK(0x5f9c20u, 0x5f9c1bu); LOADALL;
  /* 005f9c20 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9c23 mov eax, esi */ { eax = (u32)(esi); }
  /* 005f9c25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9c26 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9c30(CPU *c) {
  NATIVE_HOOK(0x5f9c30u) REGS; LOADALL;
L_005f9c30:;
  /* 005f9c30 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9c33 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 005f9c37 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9c39 mov dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(eax); }
  /* 005f9c3d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f9c3e mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005f9c42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9c43 mov esi, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); esi = (u32)(M32(m_)); }
  /* 005f9c47 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f9c4b mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005f9c4f mov ebx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ebx = (u32)(M32(m_)); }
  /* 005f9c53 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005f9c59 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005f9c60 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005f9c67 mov word ptr [esp + 0x18], ax */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f9c6c movzx dx, byte ptr [ecx + 0xd] */ { const u32 m_ = (u32)(ecx + 0xdu); edx = (edx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005f9c71 movzx ax, byte ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005f9c76 mov word ptr [esp + 0xa], dx */ { const u32 m_ = (u32)(esp + 0xau); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f9c7b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005f9c7d mov word ptr [esp + 0x16], ax */ { const u32 m_ = (u32)(esp + 0x16u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f9c82 mov dword ptr [esp + 0xc], edx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(edx); }
  /* 005f9c86 shr ax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (eax & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); eax = (eax & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 005f9c8a imul eax, dword ptr [esp + 0xa] */ { const u32 m_ = (u32)(esp + 0xau); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f9c8f mov word ptr [esp + 0x14], ax */ { const u32 m_ = (u32)(esp + 0x14u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005f9c94 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005f9c98 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9c9d mov word ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)(0x1u); }
  /* 005f9ca4 imul eax, edx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f9ca7 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005f9cab mov eax, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); eax = (u32)(M32(m_)); }
  /* 005f9caf test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9cb1 mov word ptr [esp + 0x18], 0x12 */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)(0x12u); }
  /* 005f9cb8 je 0x5f9cbf */ if (ZF_) goto L_005f9cbf;
  /* 005f9cba or eax, 0x20010 */ { u32 a_ = eax, b_ = 0x20010u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005f9cbf:;
  /* 005f9cbf mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f9cc2 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 005f9cc6 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 005f9cca mov dword ptr [esp + 0x1c], 0x24 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x24u); }
  /* 005f9cd2 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005f9cd4 mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005f9cd8 mov dword ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 005f9ce0 mov dword ptr [esp + 0x2c], edx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edx); }
  /* 005f9ce4 mov eax, 0x62e79c */ { eax = (u32)(0x62e79cu); }
  /* 005f9ce9 jne 0x5f9cf0 */ if (!ZF_) goto L_005f9cf0;
  /* 005f9ceb mov eax, 0x63cf60 */ { eax = (u32)(0x63cf60u); }
L_005f9cf0:;
  /* 005f9cf0 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005f9cf3 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9cf5 mov dword ptr [esp + 0x34], edx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edx); }
  /* 005f9cf9 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 005f9cfc mov dword ptr [esp + 0x30], ecx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ecx); }
  /* 005f9d00 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005f9d03 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 005f9d07 mov dword ptr [esp + 0x3c], edx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(edx); }
  /* 005f9d0b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9d0d lea edx, [esp + 0x20] */ edx = (u32)((u32)(esp + 0x20u));
  /* 005f9d11 mov dword ptr [esp + 0x3c], ecx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 005f9d15 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9d17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9d18 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9d19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9d1a call dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9d1du; SAVEALL; call_ind(c, t_); RETCHK(0x5f9d1du, 0x5f9d1au); LOADALL; }
  /* 005f9d1d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9d1f jl 0x5f9d47 */ if (LT_) goto L_005f9d47;
  /* 005f9d21 mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 005f9d25 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9d26 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005f9d27 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9d28 call 0x5f9d50 */ esp -= 4; M32(esp) = 0x5f9d2du; SAVEALL; F_005f9d50(c); ABI_CHECK(0x5f9d50u, 0x5f9d28u); RETCHK(0x5f9d2du, 0x5f9d28u); LOADALL;
  /* 005f9d2d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9d30 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9d32 je 0x5f9d3f */ if (ZF_) goto L_005f9d3f;
  /* 005f9d34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9d35 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f9d3a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f9d3b add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9d3e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f9d3f:;
  /* 005f9d3f mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005f9d41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9d42 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005f9d44 call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9d47u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9d47u, 0x5f9d44u); LOADALL; }
L_005f9d47:;
  /* 005f9d47 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9d48 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9d4a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005f9d4b add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9d4e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9d50(CPU *c) {
  NATIVE_HOOK(0x5f9d50u) REGS; LOADALL;
L_005f9d50:;
  /* 005f9d50 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f9d54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9d55 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9d59 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9d5b je 0x5f9d75 */ if (ZF_) goto L_005f9d75;
  /* 005f9d5d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f9d5f lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 005f9d62 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9d63 push 0x62e7bc */ { u32 v_ = 0x62e7bcu; esp -= 4; M32(esp) = v_; }
  /* 005f9d68 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9d6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9d6b call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9d6du; SAVEALL; call_ind(c, t_); RETCHK(0x5f9d6du, 0x5f9d6bu); LOADALL; }
  /* 005f9d6d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9d6f jge 0x5f9d75 */ if (!LT_) goto L_005f9d75;
  /* 005f9d71 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9d73 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9d74 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f9d75:;
  /* 005f9d75 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005f9d79 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9d7b je 0x5f9da2 */ if (ZF_) goto L_005f9da2;
  /* 005f9d7d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f9d7f lea edx, [esi + 8] */ edx = (u32)((u32)(esi + 0x8u));
  /* 005f9d82 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9d83 push 0x62e7ac */ { u32 v_ = 0x62e7acu; esp -= 4; M32(esp) = v_; }
  /* 005f9d88 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9d8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9d8b call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9d8du; SAVEALL; call_ind(c, t_); RETCHK(0x5f9d8du, 0x5f9d8bu); LOADALL; }
  /* 005f9d8d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9d8f jge 0x5f9da2 */ if (!LT_) goto L_005f9da2;
  /* 005f9d91 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 005f9d94 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9d96 je 0x5f9d9e */ if (ZF_) goto L_005f9d9e;
  /* 005f9d98 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f9d9a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9d9b call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9d9eu; SAVEALL; call_ind(c, t_); RETCHK(0x5f9d9eu, 0x5f9d9bu); LOADALL; }
L_005f9d9e:;
  /* 005f9d9e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9da0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9da1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f9da2:;
  /* 005f9da2 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f9da7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9da8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9db0(CPU *c) {
  NATIVE_HOOK(0x5f9db0u) REGS; LOADALL;
L_005f9db0:;
  /* 005f9db0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9db1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005f9db5 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f9db8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9dba je 0x5f9dc2 */ if (ZF_) goto L_005f9dc2;
  /* 005f9dbc mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9dbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9dbf call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9dc2u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9dc2u, 0x5f9dbfu); LOADALL; }
L_005f9dc2:;
  /* 005f9dc2 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9dc5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9dc7 je 0x5f9dcf */ if (ZF_) goto L_005f9dcf;
  /* 005f9dc9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f9dcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9dcc call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9dcfu; SAVEALL; call_ind(c, t_); RETCHK(0x5f9dcfu, 0x5f9dccu); LOADALL; }
L_005f9dcf:;
  /* 005f9dcf mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f9dd1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9dd2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9dd4 je 0x5f9ddc */ if (ZF_) goto L_005f9ddc;
  /* 005f9dd6 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9dd8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9dd9 call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9ddcu; SAVEALL; call_ind(c, t_); RETCHK(0x5f9ddcu, 0x5f9dd9u); LOADALL; }
L_005f9ddc:;
  /* 005f9ddc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9de0(CPU *c) {
  NATIVE_HOOK(0x5f9de0u) REGS; LOADALL;
L_005f9de0:;
  /* 005f9de0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9de4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9de5 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005f9de9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f9dea mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005f9dee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9def mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005f9df5 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005f9dfc mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005f9e03 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005f9e05 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9e07 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9e08 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9e09 call dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9e0cu; SAVEALL; call_ind(c, t_); RETCHK(0x5f9e0cu, 0x5f9e09u); LOADALL; }
  /* 005f9e0c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9e0e jl 0x5f9e3b */ if (LT_) goto L_005f9e3b;
  /* 005f9e10 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005f9e13 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005f9e16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9e18 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9e1a setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005f9e1d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f9e1f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9e21 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005f9e24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9e25 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9e26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9e27 call 0x5f9d50 */ esp -= 4; M32(esp) = 0x5f9e2cu; SAVEALL; F_005f9d50(c); ABI_CHECK(0x5f9d50u, 0x5f9e27u); RETCHK(0x5f9e2cu, 0x5f9e27u); LOADALL;
  /* 005f9e2c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9e2f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9e31 je 0x5f9e3b */ if (ZF_) goto L_005f9e3b;
  /* 005f9e33 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f9e34 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005f9e39 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9e3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f9e3b:;
  /* 005f9e3b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005f9e3c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9e3e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9e3f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9e40(CPU *c) {
  NATIVE_HOOK(0x5f9e40u) REGS; LOADALL;
L_005f9e40:;
  /* 005f9e40 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9e41 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005f9e45 lea edx, [esp] */ edx = (u32)((u32)(esp));
  /* 005f9e49 mov dword ptr [esp], 0 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x0u); }
  /* 005f9e51 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9e52 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005f9e54 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9e55 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9e57 call dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9e5au; SAVEALL; call_ind(c, t_); RETCHK(0x5f9e5au, 0x5f9e57u); LOADALL; }
  /* 005f9e5a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9e5c jl 0x5f9e67 */ if (LT_) goto L_005f9e67;
  /* 005f9e5e mov eax, dword ptr [esp] */ { const u32 m_ = (u32)(esp); eax = (u32)(M32(m_)); }
  /* 005f9e62 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9e65 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f9e66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f9e67:;
  /* 005f9e67 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9e69 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005f9e6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9e70(CPU *c) {
  NATIVE_HOOK(0x5f9e70u) REGS; LOADALL;
L_005f9e70:;
  /* 005f9e70 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005f9e74 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 005f9e7a mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005f9e81 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005f9e90(CPU *c) {
  NATIVE_HOOK(0x5f9e90u) REGS; LOADALL;
L_005f9e90:;
  /* 005f9e90 sub esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9e93 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9e94 mov esi, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); esi = (u32)(M32(m_)); }
  /* 005f9e98 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9e99 call 0x5f9e70 */ esp -= 4; M32(esp) = 0x5f9e9eu; SAVEALL; F_005f9e70(c); ABI_CHECK(0x5f9e70u, 0x5f9e99u); RETCHK(0x5f9e9eu, 0x5f9e99u); LOADALL;
  /* 005f9e9e lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 005f9ea1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9ea3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9ea4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9ea6 call 0x5facc0 */ esp -= 4; M32(esp) = 0x5f9eabu; SAVEALL; F_005facc0(c); ABI_CHECK(0x5facc0u, 0x5f9ea6u); RETCHK(0x5f9eabu, 0x5f9ea6u); LOADALL;
  /* 005f9eab lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 005f9eae push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9eb0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005f9eb1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9eb3 call 0x5facc0 */ esp -= 4; M32(esp) = 0x5f9eb8u; SAVEALL; F_005facc0(c); ABI_CHECK(0x5facc0u, 0x5f9eb3u); RETCHK(0x5f9eb8u, 0x5f9eb3u); LOADALL;
  /* 005f9eb8 mov edx, dword ptr [esp + 0x80] */ { const u32 m_ = (u32)(esp + 0x80u); edx = (u32)(M32(m_)); }
  /* 005f9ebf add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9ec2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005f9ec3 push 0x63cbe8 */ { u32 v_ = 0x63cbe8u; esp -= 4; M32(esp) = v_; }
  /* 005f9ec8 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005f9eca push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9ecc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005f9ecd call dword ptr [0x62e73c] */ { const u32 m_ = (u32)(0x62e73cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9ed3u; SAVEALL; call_ind(c, t_); RETCHK(0x5f9ed3u, 0x5f9ecdu); LOADALL; }
  /* 005f9ed3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9ed5 jge 0x5f9ede */ if (!LT_) goto L_005f9ede;
  /* 005f9ed7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9ed9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005f9eda add esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005f9edd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005f9ede:;
  /* 005f9ede mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f9ee0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f9ee1 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 005f9ee4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005f9ee6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005f9ee7 push 0x63cc08 */ { u32 v_ = 0x63cc08u; esp -= 4; M32(esp) = v_; }
  /* 005f9eec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005f9eed call dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5f9eefu; SAVEALL; call_ind(c, t_); RETCHK(0x5f9eefu, 0x5f9eedu); LOADALL; }
  /* 005f9eef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005f9ef1 jge 0x5f9ef9 */ if (!LT_) goto L_005f9ef9;
  /* 005f9ef3 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_005f9ef9:;
  /* 005f9ef9 mov eax, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); eax = (u32)(M32(m_)); }
  /* 005f9efd xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005f9eff mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005f9f03 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 005f9f08 movzx cx, byte ptr [eax + 0xd] */ { const u32 m_ = (u32)(eax + 0xdu); ecx = (ecx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005f9f0d mov dword ptr [esp + 0xc], edx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(edx); }
  /* 005f9f11 mov word ptr [esp + 0xa], cx */ { const u32 m_ = (u32)(esp + 0xau); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 005f9f16 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 005f9f1a xor cx, cx */ { u32 a_ = (ecx & 0xffffu), b_ = (ecx & 0xffffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 2); ecx = (ecx & 0xffff0000u) | ((u32)(r_) & 0xffffu); }
  /* 005f9f1d mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 005f9f21 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005f9f23 mov word ptr [esp + 0x1c], dx */ { const u32 m_ = (u32)(esp + 0x1cu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005f9f28 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005f9f2a mov al, byte ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005f9f2d mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 005f9f31 mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005f9f33 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005f9f38 mov word ptr [esp + 0x1a], cx */ { const u32 m_ = (u32)(esp + 0x1au); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 005f9f3d mov word ptr [esp + 0xc], di */ { const u32 m_ = (u32)(esp + 0xcu); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 005f9f42 shr cx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (ecx & 0xffffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 15) & 1u; SETF(OP_RES, of_, 0, r_, 2); SETC(OP_RAW, cf_, 0, 0, 2); ecx = (ecx & 0xffff0000u) | ((u32)(r_) & 0xffffu); } }
  /* 005f9f46 imul ecx, dword ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f9f4b mov word ptr [esp + 0x18], cx */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 005f9f50 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005f9f54 and ecx, 0xffff */ { u32 a_ = ecx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005f9f5a mov dword ptr [esp + 0x40], edi */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(edi); }
  /* 005f9f5e imul ecx, edx */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005f9f61 mov edx, dword ptr [0x63cc58] */ { const u32 m_ = (u32)(0x63cc58u); edx = (u32)(M32(m_)); }
  /* 005f9f67 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005f9f6b mov dword ptr [esp + 0x20], edx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(edx); }
  /* 005f9f6f mov edx, dword ptr [0x63cc5c] */ { const u32 m_ = (u32)(0x63cc5cu); edx = (u32)(M32(m_)); }
  /* 005f9f75 mov dword ptr [esp + 0x24], edx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(edx); }
  /* 005f9f79 mov edx, dword ptr [0x63cc60] */ { const u32 m_ = (u32)(0x63cc60u); edx = (u32)(M32(m_)); }
  /* 005f9f7f mov dword ptr [esp + 0x28], edx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edx); }
  /* 005f9f83 mov edx, dword ptr [0x63cc64] */ { const u32 m_ = (u32)(0x63cc64u); edx = (u32)(M32(m_)); }
  /* 005f9f89 mov dword ptr [esp + 0x2c], edx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edx); }
  /* 005f9f8d mov edx, dword ptr [0x63cc48] */ { const u32 m_ = (u32)(0x63cc48u); edx = (u32)(M32(m_)); }
  /* 005f9f93 mov dword ptr [esp + 0x30], edx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(edx); }
  /* 005f9f97 mov edx, dword ptr [0x63cc4c] */ { const u32 m_ = (u32)(0x63cc4cu); edx = (u32)(M32(m_)); }
  /* 005f9f9d mov dword ptr [esp + 0x34], edx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edx); }
  /* 005f9fa1 mov edx, dword ptr [0x63cc50] */ { const u32 m_ = (u32)(0x63cc50u); edx = (u32)(M32(m_)); }
  /* 005f9fa7 mov dword ptr [esp + 0x38], edx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(edx); }
  /* 005f9fab mov edx, dword ptr [0x63cc54] */ { const u32 m_ = (u32)(0x63cc54u); edx = (u32)(M32(m_)); }
  /* 005f9fb1 mov dword ptr [esp + 0x3c], edx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(edx); }
  /* 005f9fb5 mov edx, dword ptr [0x63cc38] */ { const u32 m_ = (u32)(0x63cc38u); edx = (u32)(M32(m_)); }
  /* 005f9fbb mov dword ptr [esp + 0x4c], edx */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(edx); }
  /* 005f9fbf mov edx, dword ptr [0x63cc3c] */ { const u32 m_ = (u32)(0x63cc3cu); edx = (u32)(M32(m_)); }
  /* 005f9fc5 mov ecx, 0x12 */ { ecx = (u32)(0x12u); }
  /* 005f9fca mov dword ptr [esp + 0x50], edx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(edx); }
  /* 005f9fce mov edx, dword ptr [0x63cc40] */ { const u32 m_ = (u32)(0x63cc40u); edx = (u32)(M32(m_)); }
  /* 005f9fd4 mov word ptr [esp + 0x1c], cx */ { const u32 m_ = (u32)(esp + 0x1cu); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 005f9fd9 mov dword ptr [esp + 0x60], ecx */ { const u32 m_ = (u32)(esp + 0x60u); M32(m_) = (u32)(ecx); }
  /* 005f9fdd lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 005f9fe1 shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005f9fe4 mov dword ptr [esp + 0x54], edx */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(edx); }
  /* 005f9fe8 mov edx, dword ptr [0x63cc44] */ { const u32 m_ = (u32)(0x63cc44u); edx = (u32)(M32(m_)); }
  /* 005f9fee mov dword ptr [esp + 0x64], ecx */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)(ecx); }
  /* 005f9ff2 mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005f9ff6 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005f9ff8 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 005f9ffc mov dword ptr [esp + 0x58], edx */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(edx); }
  /* 005fa000 mov dword ptr [esp + 0x44], 0 */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(0x0u); }
  /* 005fa008 mov dword ptr [esp + 0x5c], 0 */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(0x0u); }
  /* 005fa010 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005fa012 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fa013 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fa015 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa016 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fa019u; SAVEALL; call_ind(c, t_); RETCHK(0x5fa019u, 0x5fa016u); LOADALL; }
  /* 005fa019 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa01b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fa01c jge 0x5fa02e */ if (!LT_) goto L_005fa02e;
  /* 005fa01e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa01f call 0x5fa060 */ esp -= 4; M32(esp) = 0x5fa024u; SAVEALL; F_005fa060(c); ABI_CHECK(0x5fa060u, 0x5fa01fu); RETCHK(0x5fa024u, 0x5fa01fu); LOADALL;
  /* 005fa024 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa027 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fa029 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa02a add esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa02d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa02e:;
  /* 005fa02e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fa030 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 005fa034 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fa036 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fa037 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005fa039 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fa03b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa03c call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fa03fu; SAVEALL; call_ind(c, t_); RETCHK(0x5fa03fu, 0x5fa03cu); LOADALL; }
  /* 005fa03f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa041 jge 0x5fa053 */ if (!LT_) goto L_005fa053;
  /* 005fa043 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa044 call 0x5fa060 */ esp -= 4; M32(esp) = 0x5fa049u; SAVEALL; F_005fa060(c); ABI_CHECK(0x5fa060u, 0x5fa044u); RETCHK(0x5fa049u, 0x5fa044u); LOADALL;
  /* 005fa049 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa04c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fa04e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa04f add esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa052 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa053:;
  /* 005fa053 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fa055 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa056 add esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa059 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa060(CPU *c) {
  NATIVE_HOOK(0x5fa060u) REGS; LOADALL;
L_005fa060:;
  /* 005fa060 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa061 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fa065 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa068 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa06a je 0x5fa072 */ if (ZF_) goto L_005fa072;
  /* 005fa06c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa06e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa06f call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fa072u; SAVEALL; call_ind(c, t_); RETCHK(0x5fa072u, 0x5fa06fu); LOADALL; }
L_005fa072:;
  /* 005fa072 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fa074 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa076 je 0x5fa08d */ if (ZF_) goto L_005fa08d;
  /* 005fa078 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fa07b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa07d jne 0x5fa085 */ if (!ZF_) goto L_005fa085;
  /* 005fa07f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005fa081 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa082 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fa085u; SAVEALL; call_ind(c, t_); RETCHK(0x5fa085u, 0x5fa082u); LOADALL; }
L_005fa085:;
  /* 005fa085 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005fa087 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa088 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa08a call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fa08du; SAVEALL; call_ind(c, t_); RETCHK(0x5fa08du, 0x5fa08au); LOADALL; }
L_005fa08d:;
  /* 005fa08d lea edx, [esi + 8] */ edx = (u32)((u32)(esi + 0x8u));
  /* 005fa090 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fa091 call 0x5fad30 */ esp -= 4; M32(esp) = 0x5fa096u; SAVEALL; F_005fad30(c); ABI_CHECK(0x5fad30u, 0x5fa091u); RETCHK(0x5fa096u, 0x5fa091u); LOADALL;
  /* 005fa096 lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 005fa099 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa09a call 0x5fad30 */ esp -= 4; M32(esp) = 0x5fa09fu; SAVEALL; F_005fad30(c); ABI_CHECK(0x5fad30u, 0x5fa09au); RETCHK(0x5fa09fu, 0x5fa09au); LOADALL;
  /* 005fa09f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa0a0 call 0x5f9e70 */ esp -= 4; M32(esp) = 0x5fa0a5u; SAVEALL; F_005f9e70(c); ABI_CHECK(0x5f9e70u, 0x5fa0a0u); RETCHK(0x5fa0a5u, 0x5fa0a0u); LOADALL;
  /* 005fa0a5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa0a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa0a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa0b0(CPU *c) {
  NATIVE_HOOK(0x5fa0b0u) REGS; LOADALL;
L_005fa0b0:;
  /* 005fa0b0 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa0b3 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fa0b7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fa0b8 mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 005fa0bc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa0bd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa0be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fa0bf mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 005fa0c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fa0c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa0c5 lea esi, [edi + 8] */ esi = (u32)((u32)(edi + 0x8u));
  /* 005fa0c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa0c9 call 0x5fad10 */ esp -= 4; M32(esp) = 0x5fa0ceu; SAVEALL; F_005fad10(c); ABI_CHECK(0x5fad10u, 0x5fa0c9u); RETCHK(0x5fa0ceu, 0x5fa0c9u); LOADALL;
  /* 005fa0ce mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005fa0d0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa0d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fa0d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa0d5 call dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fa0d8u; SAVEALL; call_ind(c, t_); RETCHK(0x5fa0d8u, 0x5fa0d5u); LOADALL; }
  /* 005fa0d8 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005fa0da xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005fa0dc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa0dd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa0de mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005fa0e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa0e1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa0e2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005fa0e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa0e5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa0e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa0e7 call dword ptr [edx + 0x54] */ { const u32 m_ = (u32)(edx + 0x54u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fa0eau; SAVEALL; call_ind(c, t_); RETCHK(0x5fa0eau, 0x5fa0e7u); LOADALL; }
  /* 005fa0ea push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa0eb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa0ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa0ee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa0ef jge 0x5fa103 */ if (!LT_) goto L_005fa103;
  /* 005fa0f1 call 0x5fad10 */ esp -= 4; M32(esp) = 0x5fa0f6u; SAVEALL; F_005fad10(c); ABI_CHECK(0x5fad10u, 0x5fa0f1u); RETCHK(0x5fa0f6u, 0x5fa0f1u); LOADALL;
  /* 005fa0f6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa0f9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fa0fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fa0fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa0fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fa0fe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fa0ff add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa102 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa103:;
  /* 005fa103 call 0x5fad10 */ esp -= 4; M32(esp) = 0x5fa108u; SAVEALL; F_005fad10(c); ABI_CHECK(0x5fad10u, 0x5fa103u); RETCHK(0x5fa108u, 0x5fa103u); LOADALL;
  /* 005fa108 mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005fa10c lea esi, [edi + 0x20] */ esi = (u32)((u32)(edi + 0x20u));
  /* 005fa10f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fa110 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa111 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa112 call 0x5fad10 */ esp -= 4; M32(esp) = 0x5fa117u; SAVEALL; F_005fad10(c); ABI_CHECK(0x5fad10u, 0x5fa112u); RETCHK(0x5fa117u, 0x5fa112u); LOADALL;
  /* 005fa117 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005fa119 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa11c lea edx, [esp + 0x2c] */ edx = (u32)((u32)(esp + 0x2cu));
  /* 005fa120 mov dword ptr [esp + 0x10], esi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(esi); }
  /* 005fa124 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fa125 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 005fa129 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fa12a mov dword ptr [esp + 0x1c], ebp */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005fa12e mov dword ptr [esp + 0x28], ebp */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebp); }
  /* 005fa132 mov dword ptr [esp + 0x2c], ebp */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebp); }
  /* 005fa136 mov dword ptr [esp + 0x20], ebp */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebp); }
  /* 005fa13a mov dword ptr [esp + 0x24], ebp */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebp); }
  /* 005fa13e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa141 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005fa143 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa144 call dword ptr [ecx + 0x58] */ { const u32 m_ = (u32)(ecx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fa147u; SAVEALL; call_ind(c, t_); RETCHK(0x5fa147u, 0x5fa144u); LOADALL; }
  /* 005fa147 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa149 jge 0x5fa160 */ if (!LT_) goto L_005fa160;
  /* 005fa14b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa14c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005fa14d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa14e call 0x5fad10 */ esp -= 4; M32(esp) = 0x5fa153u; SAVEALL; F_005fad10(c); ABI_CHECK(0x5fad10u, 0x5fa14eu); RETCHK(0x5fa153u, 0x5fa14eu); LOADALL;
  /* 005fa153 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa156 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fa158 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fa159 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa15a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fa15b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fa15c add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa15f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa160:;
  /* 005fa160 mov eax, edi */ { eax = (u32)(edi); }
  /* 005fa162 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fa163 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa164 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fa165 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fa166 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa169 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa170(CPU *c) {
  NATIVE_HOOK(0x5fa170u) REGS; LOADALL;
L_005fa170:;
  /* 005fa170 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa174 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa178 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa17a mov edx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); edx = (u32)(M32(m_)); }
  /* 005fa17d je 0x5fa184 */ if (ZF_) goto L_005fa184;
  /* 005fa17f or dh, 2 */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005fa182 jmp 0x5fa187 */ goto L_005fa187;
L_005fa184:;
  /* 005fa184 and dh, 0xfd */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = 0xfdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
L_005fa187:;
  /* 005fa187 mov dword ptr [eax + 0x28], edx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(edx); }
  /* 005fa18a or dh, 1 */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005fa18d mov dword ptr [eax + 0x28], edx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(edx); }
  /* 005fa190 mov edx, dword ptr [eax + 0x94] */ { const u32 m_ = (u32)(eax + 0x94u); edx = (u32)(M32(m_)); }
  /* 005fa196 test byte ptr [edx + 0x50], 8 */ { const u32 m_ = (u32)(edx + 0x50u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fa19a je 0x5fa1af */ if (ZF_) goto L_005fa1af;
  /* 005fa19c mov eax, dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); eax = (u32)(M32(m_)); }
  /* 005fa1a2 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005fa1a6 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 005fa1aa jmp 0x619850 */ SAVEALL; F_00619850(c); return;
L_005fa1af:;
  /* 005fa1af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa1b0(CPU *c) {
  NATIVE_HOOK(0x5fa1b0u) REGS; LOADALL;
L_005fa1b0:;
  /* 005fa1b0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fa1b4 mov eax, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); eax = (u32)(M32(m_)); }
  /* 005fa1b7 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fa1ba je 0x5fa1c3 */ if (ZF_) goto L_005fa1c3;
  /* 005fa1bc shr eax, 9 */ { u32 n_ = (9u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fa1bf and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fa1c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa1c3:;
  /* 005fa1c3 mov eax, dword ptr [ecx + 0x94] */ { const u32 m_ = (u32)(ecx + 0x94u); eax = (u32)(M32(m_)); }
  /* 005fa1c9 mov dl, byte ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fa1cc mov eax, dword ptr [ecx + 0x84] */ { const u32 m_ = (u32)(ecx + 0x84u); eax = (u32)(M32(m_)); }
  /* 005fa1d2 test dl, 8 */ { u32 a_ = (edx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fa1d5 je 0x5fa209 */ if (ZF_) goto L_005fa209;
  /* 005fa1d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa1d9 je 0x5fa223 */ if (ZF_) goto L_005fa223;
  /* 005fa1db mov ecx, dword ptr [ecx + 0x11c] */ { const u32 m_ = (u32)(ecx + 0x11cu); ecx = (u32)(M32(m_)); }
  /* 005fa1e1 mov eax, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); eax = (u32)(M32(m_)); }
  /* 005fa1e4 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fa1e7 je 0x5fa1fa */ if (ZF_) goto L_005fa1fa;
  /* 005fa1e9 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fa1ec je 0x5fa1fa */ if (ZF_) goto L_005fa1fa;
  /* 005fa1ee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fa1f0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fa1f2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa1f4 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005fa1f7 mov eax, edx */ { eax = (u32)(edx); }
  /* 005fa1f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa1fa:;
  /* 005fa1fa mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005fa1ff xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fa201 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa203 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005fa206 mov eax, edx */ { eax = (u32)(edx); }
  /* 005fa208 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa209:;
  /* 005fa209 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa20b je 0x5fa223 */ if (ZF_) goto L_005fa223;
  /* 005fa20d add ecx, 0xdc */ { u32 a_ = ecx, b_ = 0xdcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fa213 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fa214 call 0x5f9e40 */ esp -= 4; M32(esp) = 0x5fa219u; SAVEALL; F_005f9e40(c); ABI_CHECK(0x5f9e40u, 0x5fa214u); RETCHK(0x5fa219u, 0x5fa214u); LOADALL;
  /* 005fa219 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa21c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fa21e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005fa220 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fa222 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa223:;
  /* 005fa223 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fa225 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa230(CPU *c) {
  NATIVE_HOOK(0x5fa230u) REGS; LOADALL;
L_005fa230:;
  /* 005fa230 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fa234 mov eax, dword ptr [ecx + 0x94] */ { const u32 m_ = (u32)(ecx + 0x94u); eax = (u32)(M32(m_)); }
  /* 005fa23a test byte ptr [eax + 0x50], 8 */ { const u32 m_ = (u32)(eax + 0x50u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fa23e je 0x5fa25b */ if (ZF_) goto L_005fa25b;
  /* 005fa240 mov ecx, dword ptr [ecx + 0x11c] */ { const u32 m_ = (u32)(ecx + 0x11cu); ecx = (u32)(M32(m_)); }
  /* 005fa246 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fa24a mov dword ptr [ecx + 0x88], 0 */ { const u32 m_ = (u32)(ecx + 0x88u); M32(m_) = (u32)(0x0u); }
  /* 005fa254 mov dword ptr [ecx + 0x8c], edx */ { const u32 m_ = (u32)(ecx + 0x8cu); M32(m_) = (u32)(edx); }
  /* 005fa25a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa25b:;
  /* 005fa25b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa25c mov esi, dword ptr [ecx + 0x84] */ { const u32 m_ = (u32)(ecx + 0x84u); esi = (u32)(M32(m_)); }
  /* 005fa262 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fa264 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fa266 mov al, byte ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fa269 mov dl, byte ptr [esi + 0x39] */ { const u32 m_ = (u32)(esi + 0x39u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fa26c shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005fa26f imul eax, edx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005fa272 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fa276 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa277 imul eax, edx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005fa27a mov dword ptr [ecx + 0x8c], eax */ { const u32 m_ = (u32)(ecx + 0x8cu); M32(m_) = (u32)(eax); }
  /* 005fa280 mov dword ptr [ecx + 0x90], eax */ { const u32 m_ = (u32)(ecx + 0x90u); M32(m_) = (u32)(eax); }
  /* 005fa286 mov eax, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); eax = (u32)(M32(m_)); }
  /* 005fa289 mov dword ptr [ecx + 0x88], edx */ { const u32 m_ = (u32)(ecx + 0x88u); M32(m_) = (u32)(edx); }
  /* 005fa28f or ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005fa292 mov dword ptr [ecx + 0x28], eax */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(eax); }
  /* 005fa295 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa2a0(CPU *c) {
  NATIVE_HOOK(0x5fa2a0u) REGS; LOADALL;
L_005fa2a0:;
  /* 005fa2a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa2a4 mov ecx, 8 */ { ecx = (u32)(0x8u); }
  /* 005fa2a9 mov edx, dword ptr [eax + 0x94] */ { const u32 m_ = (u32)(eax + 0x94u); edx = (u32)(M32(m_)); }
  /* 005fa2af test byte ptr [edx + 0x50], cl */ { const u32 m_ = (u32)(edx + 0x50u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fa2b2 je 0x5fa2d1 */ if (ZF_) goto L_005fa2d1;
  /* 005fa2b4 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005fa2b8 mov eax, dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); eax = (u32)(M32(m_)); }
  /* 005fa2be test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa2c0 je 0x5fa2c9 */ if (ZF_) goto L_005fa2c9;
  /* 005fa2c2 or dword ptr [eax + 0xcc], ecx */ { const u32 m_ = (u32)(eax + 0xccu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fa2c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa2c9:;
  /* 005fa2c9 and dword ptr [eax + 0xcc], 0xfffffff7 */ { const u32 m_ = (u32)(eax + 0xccu); u32 a_ = M32(m_), b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fa2d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa2d1:;
  /* 005fa2d1 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa2d5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa2d7 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa2da je 0x5fa2e3 */ if (ZF_) goto L_005fa2e3;
  /* 005fa2dc or ch, 8 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005fa2df mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa2e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa2e3:;
  /* 005fa2e3 and ch, 0xf7 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0xf7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005fa2e6 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa2e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa2f0(CPU *c) {
  NATIVE_HOOK(0x5fa2f0u) REGS; LOADALL;
L_005fa2f0:;
  /* 005fa2f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fa2f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa2f2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fa2f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fa2f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa2f8 call 0x5fa1b0 */ esp -= 4; M32(esp) = 0x5fa2fdu; SAVEALL; F_005fa1b0(c); ABI_CHECK(0x5fa1b0u, 0x5fa2f8u); RETCHK(0x5fa2fdu, 0x5fa2f8u); LOADALL;
  /* 005fa2fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa300 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa302 je 0x5fa30f */ if (ZF_) goto L_005fa30f;
  /* 005fa304 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fa306 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa307 call 0x5fa170 */ esp -= 4; M32(esp) = 0x5fa30cu; SAVEALL; F_005fa170(c); ABI_CHECK(0x5fa170u, 0x5fa307u); RETCHK(0x5fa30cu, 0x5fa307u); LOADALL;
  /* 005fa30c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fa30f:;
  /* 005fa30f mov eax, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); eax = (u32)(M32(m_)); }
  /* 005fa315 mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 005fa319 mov edi, dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); edi = (u32)(M32(m_)); }
  /* 005fa31c shr edi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005fa31f and edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005fa322 je 0x5fa33d */ if (ZF_) goto L_005fa33d;
  /* 005fa324 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fa326 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa328 je 0x5fa32d */ if (ZF_) goto L_005fa32d;
  /* 005fa32a mov eax, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); eax = (u32)(M32(m_)); }
L_005fa32d:;
  /* 005fa32d mov ecx, dword ptr [esi + 0x11c] */ { const u32 m_ = (u32)(esi + 0x11cu); ecx = (u32)(M32(m_)); }
  /* 005fa333 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa334 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fa335 call 0x6198a0 */ esp -= 4; M32(esp) = 0x5fa33au; SAVEALL; F_006198a0(c); ABI_CHECK(0x6198a0u, 0x5fa335u); RETCHK(0x5fa33au, 0x5fa335u); LOADALL;
  /* 005fa33a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fa33d:;
  /* 005fa33d mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 005fa343 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa345 je 0x5fa35a */ if (ZF_) goto L_005fa35a;
  /* 005fa347 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa349 jne 0x5fa35a */ if (!ZF_) goto L_005fa35a;
  /* 005fa34b lea edx, [esi + 0xdc] */ edx = (u32)((u32)(esi + 0xdcu));
  /* 005fa351 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fa352 call 0x5f9db0 */ esp -= 4; M32(esp) = 0x5fa357u; SAVEALL; F_005f9db0(c); ABI_CHECK(0x5f9db0u, 0x5fa352u); RETCHK(0x5fa357u, 0x5fa352u); LOADALL;
  /* 005fa357 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fa35a:;
  /* 005fa35a mov eax, 0x3f800000 */ { eax = (u32)(0x3f800000u); }
  /* 005fa35f mov dword ptr [esi + 0x84], 0 */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(0x0u); }
  /* 005fa369 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa36b mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 005fa36e mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 005fa371 je 0x5fa3aa */ if (ZF_) goto L_005fa3aa;
  /* 005fa373 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa375 jne 0x5fa398 */ if (!ZF_) goto L_005fa398;
  /* 005fa377 mov edx, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); edx = (u32)(M32(m_)); }
  /* 005fa37d lea eax, [esi + 0xdc] */ eax = (u32)((u32)(esi + 0xdcu));
  /* 005fa383 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa384 lea ecx, [ebx + 0x5c] */ ecx = (u32)((u32)(ebx + 0x5cu));
  /* 005fa387 mov eax, dword ptr [edx + 0x54] */ { const u32 m_ = (u32)(edx + 0x54u); eax = (u32)(M32(m_)); }
  /* 005fa38a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fa38b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fa38c call 0x5f9de0 */ esp -= 4; M32(esp) = 0x5fa391u; SAVEALL; F_005f9de0(c); ABI_CHECK(0x5f9de0u, 0x5fa38cu); RETCHK(0x5fa391u, 0x5fa38cu); LOADALL;
  /* 005fa391 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa394 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fa396 je 0x5fa3aa */ if (ZF_) goto L_005fa3aa;
L_005fa398:;
  /* 005fa398 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa39b mov dword ptr [esi + 0x84], ebx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(ebx); }
  /* 005fa3a1 and ecx, 0xffffffdf */ { u32 a_ = ecx, b_ = 0xffffffdfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa3a4 or ch, 0x10 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005fa3a7 mov dword ptr [esi + 0x28], ecx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ecx); }
L_005fa3aa:;
  /* 005fa3aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fa3ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa3ac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fa3ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa3b0(CPU *c) {
  NATIVE_HOOK(0x5fa3b0u) REGS; LOADALL;
L_005fa3b0:;
  /* 005fa3b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa3b1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fa3b5 mov eax, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); eax = (u32)(M32(m_)); }
  /* 005fa3bb test byte ptr [eax + 0x50], 8 */ { const u32 m_ = (u32)(eax + 0x50u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fa3bf je 0x5fa3e4 */ if (ZF_) goto L_005fa3e4;
  /* 005fa3c1 mov eax, dword ptr [esi + 0x11c] */ { const u32 m_ = (u32)(esi + 0x11cu); eax = (u32)(M32(m_)); }
  /* 005fa3c7 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa3cb mov dword ptr [eax + 0x40], ecx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(ecx); }
  /* 005fa3ce mov esi, dword ptr [esi + 0x11c] */ { const u32 m_ = (u32)(esi + 0x11cu); esi = (u32)(M32(m_)); }
  /* 005fa3d4 mov eax, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); eax = (u32)(M32(m_)); }
  /* 005fa3da or al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fa3dc mov dword ptr [esi + 0xcc], eax */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(eax); }
  /* 005fa3e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa3e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa3e4:;
  /* 005fa3e4 test byte ptr [eax + 0x50], 7 */ { const u32 m_ = (u32)(eax + 0x50u); u32 a_ = M8(m_), b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fa3e8 je 0x5fa402 */ if (ZF_) goto L_005fa402;
  /* 005fa3ea mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fa3ee push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fa3ef call 0x5f2330 */ esp -= 4; M32(esp) = 0x5fa3f4u; SAVEALL; F_005f2330(c); ABI_CHECK(0x5f2330u, 0x5fa3efu); RETCHK(0x5fa3f4u, 0x5fa3efu); LOADALL;
  /* 005fa3f4 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 005fa3f7 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005fa3fa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa3fd or al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fa3ff mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
L_005fa402:;
  /* 005fa402 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa403 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa410(CPU *c) {
  NATIVE_HOOK(0x5fa410u) REGS; LOADALL;
L_005fa410:;
  /* 005fa410 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fa414 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 005fa41a mov eax, dword ptr [ecx + 0x94] */ { const u32 m_ = (u32)(ecx + 0x94u); eax = (u32)(M32(m_)); }
  /* 005fa420 test byte ptr [eax + 0x50], 8 */ { const u32 m_ = (u32)(eax + 0x50u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fa424 je 0x5fa432 */ if (ZF_) goto L_005fa432;
  /* 005fa426 mov eax, dword ptr [ecx + 0x11c] */ { const u32 m_ = (u32)(ecx + 0x11cu); eax = (u32)(M32(m_)); }
  /* 005fa42c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005fa42e fld dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); FPUSH((double)MF32(m_)); }
  /* 005fa431 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fa432:;
  /* 005fa432 test byte ptr [eax + 0x50], 7 */ { const u32 m_ = (u32)(eax + 0x50u); u32 a_ = M8(m_), b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fa436 je 0x5fa458 */ if (ZF_) goto L_005fa458;
  /* 005fa438 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005fa43a fild dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); FPUSH((double)(s32)M32(m_)); }
  /* 005fa43d sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa440 fmul dword ptr [0x63c9a4] */ { const u32 m_ = (u32)(0x63c9a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fa446 fstp qword ptr [esp] */ { const u32 m_ = (u32)(esp); MF64(m_) = ST(0); FPOP(); }
  /* 005fa449 push 0x40240000 */ { u32 v_ = 0x40240000u; esp -= 4; M32(esp) = v_; }
  /* 005fa44e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fa450 call 0x5fedb0 */ esp -= 4; M32(esp) = 0x5fa455u; SAVEALL; F_005fedb0(c); ABI_CHECK(0x5fedb0u, 0x5fa450u); RETCHK(0x5fa455u, 0x5fa450u); LOADALL;
  /* 005fa455 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fa458:;
  /* 005fa458 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa460(CPU *c) {
  NATIVE_HOOK(0x5fa460u) REGS; LOADALL;
L_005fa460:;
  /* 005fa460 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa464 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa468 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fa46a fchs */ ST(0) = -ST(0);
  /* 005fa46c fstp dword ptr [eax + 0xc0] */ { const u32 m_ = (u32)(eax + 0xc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa472 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fa475 mov dword ptr [eax + 0xc4], edx */ { const u32 m_ = (u32)(eax + 0xc4u); M32(m_) = (u32)(edx); }
  /* 005fa47b mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa47e mov dword ptr [eax + 0xc8], ecx */ { const u32 m_ = (u32)(eax + 0xc8u); M32(m_) = (u32)(ecx); }
  /* 005fa484 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa487 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa48a mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa48d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa490(CPU *c) {
  NATIVE_HOOK(0x5fa490u) REGS; LOADALL;
L_005fa490:;
  /* 005fa490 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa494 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa498 fld dword ptr [eax + 0xc0] */ { const u32 m_ = (u32)(eax + 0xc0u); FPUSH((double)MF32(m_)); }
  /* 005fa49e fchs */ ST(0) = -ST(0);
  /* 005fa4a0 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa4a2 mov edx, dword ptr [eax + 0xc4] */ { const u32 m_ = (u32)(eax + 0xc4u); edx = (u32)(M32(m_)); }
  /* 005fa4a8 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fa4ab mov edx, dword ptr [eax + 0xc8] */ { const u32 m_ = (u32)(eax + 0xc8u); edx = (u32)(M32(m_)); }
  /* 005fa4b1 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005fa4b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa4c0(CPU *c) {
  NATIVE_HOOK(0x5fa4c0u) REGS; LOADALL;
L_005fa4c0:;
  /* 005fa4c0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fa4c4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa4c6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa4ca mov dword ptr [eax + 0xb8], ecx */ { const u32 m_ = (u32)(eax + 0xb8u); M32(m_) = (u32)(ecx); }
  /* 005fa4d0 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa4d3 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa4d6 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa4d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa4e0(CPU *c) {
  NATIVE_HOOK(0x5fa4e0u) REGS; LOADALL;
L_005fa4e0:;
  /* 005fa4e0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa4e4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fa4e8 mov ecx, dword ptr [eax + 0xb8] */ { const u32 m_ = (u32)(eax + 0xb8u); ecx = (u32)(M32(m_)); }
  /* 005fa4ee mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fa4f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa500(CPU *c) {
  NATIVE_HOOK(0x5fa500u) REGS; LOADALL;
L_005fa500:;
  /* 005fa500 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fa504 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa506 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa50a mov dword ptr [eax + 0xbc], ecx */ { const u32 m_ = (u32)(eax + 0xbcu); M32(m_) = (u32)(ecx); }
  /* 005fa510 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa513 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa516 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa519 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa520(CPU *c) {
  NATIVE_HOOK(0x5fa520u) REGS; LOADALL;
L_005fa520:;
  /* 005fa520 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa524 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fa528 mov ecx, dword ptr [eax + 0xbc] */ { const u32 m_ = (u32)(eax + 0xbcu); ecx = (u32)(M32(m_)); }
  /* 005fa52e mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fa530 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa540(CPU *c) {
  NATIVE_HOOK(0x5fa540u) REGS; LOADALL;
L_005fa540:;
  /* 005fa540 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fa544 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa546 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fa547 call 0x5f2330 */ esp -= 4; M32(esp) = 0x5fa54cu; SAVEALL; F_005f2330(c); ABI_CHECK(0x5f2330u, 0x5fa547u); RETCHK(0x5fa54cu, 0x5fa547u); LOADALL;
  /* 005fa54c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa550 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa553 mov dword ptr [ecx + 0xcc], eax */ { const u32 m_ = (u32)(ecx + 0xccu); M32(m_) = (u32)(eax); }
  /* 005fa559 mov eax, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); eax = (u32)(M32(m_)); }
  /* 005fa55c or al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fa55e mov dword ptr [ecx + 0x28], eax */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(eax); }
  /* 005fa561 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005fa563 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa570(CPU *c) {
  NATIVE_HOOK(0x5fa570u) REGS; LOADALL;
L_005fa570:;
  /* 005fa570 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa571 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fa575 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa578 fild dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); FPUSH((double)(s32)M32(m_)); }
  /* 005fa57e fmul dword ptr [0x63c9a4] */ { const u32 m_ = (u32)(0x63c9a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fa584 fstp qword ptr [esp] */ { const u32 m_ = (u32)(esp); MF64(m_) = ST(0); FPOP(); }
  /* 005fa587 push 0x40240000 */ { u32 v_ = 0x40240000u; esp -= 4; M32(esp) = v_; }
  /* 005fa58c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fa58e call 0x5fedb0 */ esp -= 4; M32(esp) = 0x5fa593u; SAVEALL; F_005fedb0(c); ABI_CHECK(0x5fedb0u, 0x5fa58eu); RETCHK(0x5fa593u, 0x5fa58eu); LOADALL;
  /* 005fa593 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005fa597 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa59a fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa59c mov eax, esi */ { eax = (u32)(esi); }
  /* 005fa59e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa59f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa5a0(CPU *c) {
  NATIVE_HOOK(0x5fa5a0u) REGS; LOADALL;
L_005fa5a0:;
  /* 005fa5a0 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa5a3 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005fa5a7 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 005fa5a9 fmul dword ptr [0x656dd4] */ { const u32 m_ = (u32)(0x656dd4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fa5af fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa5b3 fnstcw word ptr [esp + 2] */ { const u32 m_ = (u32)(esp + 0x2u); M16(m_) = (u16)c->fcw; }
  /* 005fa5b7 fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005fa5bb mov ax, word ptr [esp + 2] */ { const u32 m_ = (u32)(esp + 0x2u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005fa5c0 or ah, 0xc */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0xcu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 005fa5c3 mov word ptr [esp + 0x18], ax */ { const u32 m_ = (u32)(esp + 0x18u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005fa5c8 fldcw word ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005fa5cc fistp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 005fa5d0 fldcw word ptr [esp + 2] */ { const u32 m_ = (u32)(esp + 0x2u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 005fa5d4 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fa5d8 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa5dc mov dword ptr [eax + 0x118], ecx */ { const u32 m_ = (u32)(eax + 0x118u); M32(m_) = (u32)(ecx); }
  /* 005fa5e2 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa5e5 or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa5e8 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa5eb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fa5ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa5f0(CPU *c) {
  NATIVE_HOOK(0x5fa5f0u) REGS; LOADALL;
L_005fa5f0:;
  /* 005fa5f0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa5f4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa5f8 fild dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); FPUSH((double)(s32)M32(m_)); }
  /* 005fa5fe fmul dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005fa604 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa606 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa610(CPU *c) {
  NATIVE_HOOK(0x5fa610u) REGS; LOADALL;
L_005fa610:;
  /* 005fa610 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa614 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa618 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fa61a fchs */ ST(0) = -ST(0);
  /* 005fa61c fstp dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa622 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fa625 mov dword ptr [eax + 0xec], edx */ { const u32 m_ = (u32)(eax + 0xecu); M32(m_) = (u32)(edx); }
  /* 005fa62b mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa62e mov dword ptr [eax + 0xf0], ecx */ { const u32 m_ = (u32)(eax + 0xf0u); M32(m_) = (u32)(ecx); }
  /* 005fa634 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa637 or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa63a mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa63d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa640(CPU *c) {
  NATIVE_HOOK(0x5fa640u) REGS; LOADALL;
L_005fa640:;
  /* 005fa640 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa644 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa648 fld dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); FPUSH((double)MF32(m_)); }
  /* 005fa64e fchs */ ST(0) = -ST(0);
  /* 005fa650 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa652 mov edx, dword ptr [eax + 0xec] */ { const u32 m_ = (u32)(eax + 0xecu); edx = (u32)(M32(m_)); }
  /* 005fa658 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fa65b mov edx, dword ptr [eax + 0xf0] */ { const u32 m_ = (u32)(eax + 0xf0u); edx = (u32)(M32(m_)); }
  /* 005fa661 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005fa664 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa670(CPU *c) {
  NATIVE_HOOK(0x5fa670u) REGS; LOADALL;
L_005fa670:;
  /* 005fa670 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa674 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa678 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fa67a fchs */ ST(0) = -ST(0);
  /* 005fa67c fstp dword ptr [eax + 0xf4] */ { const u32 m_ = (u32)(eax + 0xf4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa682 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fa685 mov dword ptr [eax + 0xf8], edx */ { const u32 m_ = (u32)(eax + 0xf8u); M32(m_) = (u32)(edx); }
  /* 005fa68b mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa68e mov dword ptr [eax + 0xfc], ecx */ { const u32 m_ = (u32)(eax + 0xfcu); M32(m_) = (u32)(ecx); }
  /* 005fa694 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa697 or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa69a mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa69d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa6a0(CPU *c) {
  NATIVE_HOOK(0x5fa6a0u) REGS; LOADALL;
L_005fa6a0:;
  /* 005fa6a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa6a4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa6a8 fld dword ptr [eax + 0xf4] */ { const u32 m_ = (u32)(eax + 0xf4u); FPUSH((double)MF32(m_)); }
  /* 005fa6ae fchs */ ST(0) = -ST(0);
  /* 005fa6b0 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa6b2 mov edx, dword ptr [eax + 0xf8] */ { const u32 m_ = (u32)(eax + 0xf8u); edx = (u32)(M32(m_)); }
  /* 005fa6b8 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fa6bb mov edx, dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); edx = (u32)(M32(m_)); }
  /* 005fa6c1 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005fa6c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa6d0(CPU *c) {
  NATIVE_HOOK(0x5fa6d0u) REGS; LOADALL;
L_005fa6d0:;
  /* 005fa6d0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa6d4 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa6d8 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 005fa6db fchs */ ST(0) = -ST(0);
  /* 005fa6dd fstp dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa6e3 mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 005fa6e6 mov dword ptr [eax + 0x110], edx */ { const u32 m_ = (u32)(eax + 0x110u); M32(m_) = (u32)(edx); }
  /* 005fa6ec mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 005fa6ef mov dword ptr [eax + 0x114], edx */ { const u32 m_ = (u32)(eax + 0x114u); M32(m_) = (u32)(edx); }
  /* 005fa6f5 fld dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005fa6f8 fchs */ ST(0) = -ST(0);
  /* 005fa6fa fstp dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa700 mov edx, dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); edx = (u32)(M32(m_)); }
  /* 005fa703 mov dword ptr [eax + 0x104], edx */ { const u32 m_ = (u32)(eax + 0x104u); M32(m_) = (u32)(edx); }
  /* 005fa709 mov ecx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa70c mov dword ptr [eax + 0x108], ecx */ { const u32 m_ = (u32)(eax + 0x108u); M32(m_) = (u32)(ecx); }
  /* 005fa712 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa715 or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa718 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa71b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa720(CPU *c) {
  NATIVE_HOOK(0x5fa720u) REGS; LOADALL;
L_005fa720:;
  /* 005fa720 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa724 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa728 fld dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); FPUSH((double)MF32(m_)); }
  /* 005fa72e fchs */ ST(0) = -ST(0);
  /* 005fa730 fstp dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa733 mov edx, dword ptr [eax + 0x110] */ { const u32 m_ = (u32)(eax + 0x110u); edx = (u32)(M32(m_)); }
  /* 005fa739 mov dword ptr [ecx + 0x14], edx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(edx); }
  /* 005fa73c mov edx, dword ptr [eax + 0x114] */ { const u32 m_ = (u32)(eax + 0x114u); edx = (u32)(M32(m_)); }
  /* 005fa742 mov dword ptr [ecx + 0x18], edx */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(edx); }
  /* 005fa745 fld dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); FPUSH((double)MF32(m_)); }
  /* 005fa74b fchs */ ST(0) = -ST(0);
  /* 005fa74d fstp dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa750 mov edx, dword ptr [eax + 0x104] */ { const u32 m_ = (u32)(eax + 0x104u); edx = (u32)(M32(m_)); }
  /* 005fa756 mov dword ptr [ecx + 0x24], edx */ { const u32 m_ = (u32)(ecx + 0x24u); M32(m_) = (u32)(edx); }
  /* 005fa759 mov edx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); edx = (u32)(M32(m_)); }
  /* 005fa75f mov dword ptr [ecx + 0x28], edx */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(edx); }
  /* 005fa762 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa770(CPU *c) {
  NATIVE_HOOK(0x5fa770u) REGS; LOADALL;
L_005fa770:;
  /* 005fa770 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa774 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa778 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fa77a fchs */ ST(0) = -ST(0);
  /* 005fa77c fstp dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa782 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fa785 mov dword ptr [eax + 0x104], edx */ { const u32 m_ = (u32)(eax + 0x104u); M32(m_) = (u32)(edx); }
  /* 005fa78b mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa78e mov dword ptr [eax + 0x108], ecx */ { const u32 m_ = (u32)(eax + 0x108u); M32(m_) = (u32)(ecx); }
  /* 005fa794 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa797 or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa79a mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa79d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa7a0(CPU *c) {
  NATIVE_HOOK(0x5fa7a0u) REGS; LOADALL;
L_005fa7a0:;
  /* 005fa7a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa7a4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa7a8 fld dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); FPUSH((double)MF32(m_)); }
  /* 005fa7ae fchs */ ST(0) = -ST(0);
  /* 005fa7b0 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa7b2 mov edx, dword ptr [eax + 0x104] */ { const u32 m_ = (u32)(eax + 0x104u); edx = (u32)(M32(m_)); }
  /* 005fa7b8 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fa7bb mov edx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); edx = (u32)(M32(m_)); }
  /* 005fa7c1 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005fa7c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa7d0(CPU *c) {
  NATIVE_HOOK(0x5fa7d0u) REGS; LOADALL;
L_005fa7d0:;
  /* 005fa7d0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa7d4 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa7d8 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fa7da fchs */ ST(0) = -ST(0);
  /* 005fa7dc fstp dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa7e2 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fa7e5 mov dword ptr [eax + 0x110], edx */ { const u32 m_ = (u32)(eax + 0x110u); M32(m_) = (u32)(edx); }
  /* 005fa7eb mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa7ee mov dword ptr [eax + 0x114], ecx */ { const u32 m_ = (u32)(eax + 0x114u); M32(m_) = (u32)(ecx); }
  /* 005fa7f4 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa7f7 or ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa7fa mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa7fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa800(CPU *c) {
  NATIVE_HOOK(0x5fa800u) REGS; LOADALL;
L_005fa800:;
  /* 005fa800 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa804 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa808 fld dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); FPUSH((double)MF32(m_)); }
  /* 005fa80e fchs */ ST(0) = -ST(0);
  /* 005fa810 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa812 mov edx, dword ptr [eax + 0x110] */ { const u32 m_ = (u32)(eax + 0x110u); edx = (u32)(M32(m_)); }
  /* 005fa818 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fa81b mov edx, dword ptr [eax + 0x114] */ { const u32 m_ = (u32)(eax + 0x114u); edx = (u32)(M32(m_)); }
  /* 005fa821 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005fa824 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa830(CPU *c) {
  NATIVE_HOOK(0x5fa830u) REGS; LOADALL;
L_005fa830:;
  /* 005fa830 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fa834 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa836 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa83a mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005fa83d mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa840 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa843 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa846 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa850(CPU *c) {
  NATIVE_HOOK(0x5fa850u) REGS; LOADALL;
L_005fa850:;
  /* 005fa850 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa854 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fa858 mov ecx, dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); ecx = (u32)(M32(m_)); }
  /* 005fa85b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fa85d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa860(CPU *c) {
  NATIVE_HOOK(0x5fa860u) REGS; LOADALL;
L_005fa860:;
  /* 005fa860 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fa864 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa866 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa86a mov dword ptr [eax + 0x74], ecx */ { const u32 m_ = (u32)(eax + 0x74u); M32(m_) = (u32)(ecx); }
  /* 005fa86d mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa870 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa873 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa876 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa880(CPU *c) {
  NATIVE_HOOK(0x5fa880u) REGS; LOADALL;
L_005fa880:;
  /* 005fa880 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa884 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fa888 mov ecx, dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); ecx = (u32)(M32(m_)); }
  /* 005fa88b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fa88d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa890(CPU *c) {
  NATIVE_HOOK(0x5fa890u) REGS; LOADALL;
L_005fa890:;
  /* 005fa890 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fa894 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa896 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa89a mov dword ptr [eax + 0x78], ecx */ { const u32 m_ = (u32)(eax + 0x78u); M32(m_) = (u32)(ecx); }
  /* 005fa89d mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa8a0 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa8a3 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa8a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa8b0(CPU *c) {
  NATIVE_HOOK(0x5fa8b0u) REGS; LOADALL;
L_005fa8b0:;
  /* 005fa8b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa8b4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa8b8 fld dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); FPUSH((double)MF32(m_)); }
  /* 005fa8bb fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa8bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa8c0(CPU *c) {
  NATIVE_HOOK(0x5fa8c0u) REGS; LOADALL;
L_005fa8c0:;
  /* 005fa8c0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fa8c4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa8c6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa8ca mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 005fa8cd mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa8d0 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa8d3 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa8d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa8e0(CPU *c) {
  NATIVE_HOOK(0x5fa8e0u) REGS; LOADALL;
L_005fa8e0:;
  /* 005fa8e0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa8e4 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fa8e8 mov ecx, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); ecx = (u32)(M32(m_)); }
  /* 005fa8eb mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fa8ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa8f0(CPU *c) {
  NATIVE_HOOK(0x5fa8f0u) REGS; LOADALL;
L_005fa8f0:;
  /* 005fa8f0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fa8f4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fa8f6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa8fa mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 005fa900 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa903 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa906 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa909 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa910(CPU *c) {
  NATIVE_HOOK(0x5fa910u) REGS; LOADALL;
L_005fa910:;
  /* 005fa910 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa914 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa918 fld dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); FPUSH((double)MF32(m_)); }
  /* 005fa91e fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa920 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa930(CPU *c) {
  NATIVE_HOOK(0x5fa930u) REGS; LOADALL;
L_005fa930:;
  /* 005fa930 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa934 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa935 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005fa939 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fa93a lea edi, [eax + 0x40] */ edi = (u32)((u32)(eax + 0x40u));
  /* 005fa93d mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 005fa942 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005fa944 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa947 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fa948 or ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa94b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa94c mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa94f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa950(CPU *c) {
  NATIVE_HOOK(0x5fa950u) REGS; LOADALL;
L_005fa950:;
  /* 005fa950 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa954 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fa955 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fa956 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005fa95a lea esi, [eax + 0x40] */ esi = (u32)((u32)(eax + 0x40u));
  /* 005fa95d mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 005fa962 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005fa964 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fa965 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fa966 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa970(CPU *c) {
  NATIVE_HOOK(0x5fa970u) REGS; LOADALL;
L_005fa970:;
  /* 005fa970 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa974 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa978 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fa97a fchs */ ST(0) = -ST(0);
  /* 005fa97c fstp dword ptr [eax + 0xa0] */ { const u32 m_ = (u32)(eax + 0xa0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa982 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fa985 mov dword ptr [eax + 0xa4], edx */ { const u32 m_ = (u32)(eax + 0xa4u); M32(m_) = (u32)(edx); }
  /* 005fa98b mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa98e mov dword ptr [eax + 0xa8], ecx */ { const u32 m_ = (u32)(eax + 0xa8u); M32(m_) = (u32)(ecx); }
  /* 005fa994 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa997 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa99a mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa99d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa9a0(CPU *c) {
  NATIVE_HOOK(0x5fa9a0u) REGS; LOADALL;
L_005fa9a0:;
  /* 005fa9a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa9a4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa9a8 fld dword ptr [eax + 0xa0] */ { const u32 m_ = (u32)(eax + 0xa0u); FPUSH((double)MF32(m_)); }
  /* 005fa9ae fchs */ ST(0) = -ST(0);
  /* 005fa9b0 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa9b2 mov edx, dword ptr [eax + 0xa4] */ { const u32 m_ = (u32)(eax + 0xa4u); edx = (u32)(M32(m_)); }
  /* 005fa9b8 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fa9bb mov edx, dword ptr [eax + 0xa8] */ { const u32 m_ = (u32)(eax + 0xa8u); edx = (u32)(M32(m_)); }
  /* 005fa9c1 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005fa9c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fa9d0(CPU *c) {
  NATIVE_HOOK(0x5fa9d0u) REGS; LOADALL;
L_005fa9d0:;
  /* 005fa9d0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fa9d4 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fa9d8 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005fa9da fchs */ ST(0) = -ST(0);
  /* 005fa9dc fstp dword ptr [eax + 0xac] */ { const u32 m_ = (u32)(eax + 0xacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fa9e2 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005fa9e5 mov dword ptr [eax + 0xb0], edx */ { const u32 m_ = (u32)(eax + 0xb0u); M32(m_) = (u32)(edx); }
  /* 005fa9eb mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fa9ee mov dword ptr [eax + 0xb4], ecx */ { const u32 m_ = (u32)(eax + 0xb4u); M32(m_) = (u32)(ecx); }
  /* 005fa9f4 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fa9f7 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fa9fa mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fa9fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005faa00(CPU *c) {
  NATIVE_HOOK(0x5faa00u) REGS; LOADALL;
L_005faa00:;
  /* 005faa00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005faa04 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005faa08 fld dword ptr [eax + 0xac] */ { const u32 m_ = (u32)(eax + 0xacu); FPUSH((double)MF32(m_)); }
  /* 005faa0e fchs */ ST(0) = -ST(0);
  /* 005faa10 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005faa12 mov edx, dword ptr [eax + 0xb0] */ { const u32 m_ = (u32)(eax + 0xb0u); edx = (u32)(M32(m_)); }
  /* 005faa18 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005faa1b mov edx, dword ptr [eax + 0xb4] */ { const u32 m_ = (u32)(eax + 0xb4u); edx = (u32)(M32(m_)); }
  /* 005faa21 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005faa24 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005faa30(CPU *c) {
  NATIVE_HOOK(0x5faa30u) REGS; LOADALL;
L_005faa30:;
  /* 005faa30 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005faa34 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005faa36 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005faa3c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005faa3e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005faa41 jp 0x5faa5d */ if (PF_) goto L_005faa5d;
  /* 005faa43 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005faa47 fld dword ptr [0x656f50] */ { const u32 m_ = (u32)(0x656f50u); FPUSH((double)MF32(m_)); }
  /* 005faa4d mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005faa50 fstp dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005faa56 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005faa59 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005faa5c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005faa5d:;
  /* 005faa5d mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005faa61 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005faa63 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005faa66 fstp dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005faa6c or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005faa6f mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005faa72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005faa80(CPU *c) {
  NATIVE_HOOK(0x5faa80u) REGS; LOADALL;
L_005faa80:;
  /* 005faa80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005faa84 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005faa88 fld dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); FPUSH((double)MF32(m_)); }
  /* 005faa8e fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005faa90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005faaa0(CPU *c) {
  NATIVE_HOOK(0x5faaa0u) REGS; LOADALL;
L_005faaa0:;
  /* 005faaa0 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005faaa4 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005faaa8 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005faaaa fmul dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005faab0 fsubr dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005faab2 fstp dword ptr [eax + 0xd0] */ { const u32 m_ = (u32)(eax + 0xd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005faab8 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005faaba mov dword ptr [eax + 0xd4], ecx */ { const u32 m_ = (u32)(eax + 0xd4u); M32(m_) = (u32)(ecx); }
  /* 005faac0 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005faac3 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005faac6 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005faac9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005faad0(CPU *c) {
  NATIVE_HOOK(0x5faad0u) REGS; LOADALL;
L_005faad0:;
  /* 005faad0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005faad4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005faad8 fld dword ptr [eax + 0xd4] */ { const u32 m_ = (u32)(eax + 0xd4u); FPUSH((double)MF32(m_)); }
  /* 005faade fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005faae0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005faaf0(CPU *c) {
  NATIVE_HOOK(0x5faaf0u) REGS; LOADALL;
L_005faaf0:;
  /* 005faaf0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005faaf4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005faaf6 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005faafa mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 005faafd mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fab00 or ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fab03 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fab06 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fab10(CPU *c) {
  NATIVE_HOOK(0x5fab10u) REGS; LOADALL;
L_005fab10:;
  /* 005fab10 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fab14 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fab18 fld dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 005fab1b fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fab1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fab20(CPU *c) {
  NATIVE_HOOK(0x5fab20u) REGS; LOADALL;
L_005fab20:;
  /* 005fab20 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fab24 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fab26 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fab2a mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 005fab2d mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fab30 or ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fab33 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fab36 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fab40(CPU *c) {
  NATIVE_HOOK(0x5fab40u) REGS; LOADALL;
L_005fab40:;
  /* 005fab40 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fab44 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fab48 fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 005fab4b fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005fab4d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fab50(CPU *c) {
  NATIVE_HOOK(0x5fab50u) REGS; LOADALL;
L_005fab50:;
  /* 005fab50 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fab54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fab55 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fab59 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fab5b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fab5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fab5d call 0x5fa170 */ esp -= 4; M32(esp) = 0x5fab62u; SAVEALL; F_005fa170(c); ABI_CHECK(0x5fa170u, 0x5fab5du); RETCHK(0x5fab62u, 0x5fab5du); LOADALL;
  /* 005fab62 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fab65 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fab67 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fab68 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fab70(CPU *c) {
  NATIVE_HOOK(0x5fab70u) REGS; LOADALL;
L_005fab70:;
  /* 005fab70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fab71 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fab75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fab76 call 0x5fa1b0 */ esp -= 4; M32(esp) = 0x5fab7bu; SAVEALL; F_005fa1b0(c); ABI_CHECK(0x5fa1b0u, 0x5fab76u); RETCHK(0x5fab7bu, 0x5fab76u); LOADALL;
  /* 005fab7b mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fab7f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fab82 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005fab84 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fab86 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fab87 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fab90(CPU *c) {
  NATIVE_HOOK(0x5fab90u) REGS; LOADALL;
L_005fab90:;
  /* 005fab90 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fab94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fab95 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fab99 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fab9b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fab9c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fab9d call 0x5fa230 */ esp -= 4; M32(esp) = 0x5faba2u; SAVEALL; F_005fa230(c); ABI_CHECK(0x5fa230u, 0x5fab9du); RETCHK(0x5faba2u, 0x5fab9du); LOADALL;
  /* 005faba2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005faba5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005faba7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005faba8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fabb0(CPU *c) {
  NATIVE_HOOK(0x5fabb0u) REGS; LOADALL;
L_005fabb0:;
  /* 005fabb0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fabb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fabb5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fabb9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fabbb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fabbc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fabbd call 0x5fa2a0 */ esp -= 4; M32(esp) = 0x5fabc2u; SAVEALL; F_005fa2a0(c); ABI_CHECK(0x5fa2a0u, 0x5fabbdu); RETCHK(0x5fabc2u, 0x5fabbdu); LOADALL;
  /* 005fabc2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fabc5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fabc7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fabc8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fabd0(CPU *c) {
  NATIVE_HOOK(0x5fabd0u) REGS; LOADALL;
L_005fabd0:;
  /* 005fabd0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fabd4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005fabd6 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fabd9 and ecx, 0x800 */ { u32 a_ = ecx, b_ = 0x800u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fabdf cmp ecx, 0x800 */ { u32 a_ = ecx, b_ = 0x800u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fabe5 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fabe9 sete dl */ { edx = (edx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 005fabec mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005fabee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fabf0(CPU *c) {
  NATIVE_HOOK(0x5fabf0u) REGS; LOADALL;
L_005fabf0:;
  /* 005fabf0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fabf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fabf5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fabf9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fabfa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fabfb call 0x5fa2f0 */ esp -= 4; M32(esp) = 0x5fac00u; SAVEALL; F_005fa2f0(c); ABI_CHECK(0x5fa2f0u, 0x5fabfbu); RETCHK(0x5fac00u, 0x5fabfbu); LOADALL;
  /* 005fac00 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fac03 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fac05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fac06 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fac10(CPU *c) {
  NATIVE_HOOK(0x5fac10u) REGS; LOADALL;
L_005fac10:;
  /* 005fac10 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fac14 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fac18 mov ecx, dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); ecx = (u32)(M32(m_)); }
  /* 005fac1e mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fac20 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fac30(CPU *c) {
  NATIVE_HOOK(0x5fac30u) REGS; LOADALL;
L_005fac30:;
  /* 005fac30 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fac34 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fac36 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fac3a mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 005fac3d mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005fac40 or cl, 0x80 */ { u32 a_ = (ecx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005fac43 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005fac46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fac50(CPU *c) {
  NATIVE_HOOK(0x5fac50u) REGS; LOADALL;
L_005fac50:;
  /* 005fac50 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fac54 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fac58 mov ecx, dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); ecx = (u32)(M32(m_)); }
  /* 005fac5e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fac60 je 0x5fac6f */ if (ZF_) goto L_005fac6f;
  /* 005fac62 mov ecx, dword ptr [ecx + 0x54] */ { const u32 m_ = (u32)(ecx + 0x54u); ecx = (u32)(M32(m_)); }
  /* 005fac65 not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 005fac67 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005fac69 and ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fac6c mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fac6e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fac6f:;
  /* 005fac6f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fac71 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005fac73 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fac80(CPU *c) {
  NATIVE_HOOK(0x5fac80u) REGS; LOADALL;
L_005fac80:;
  /* 005fac80 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fac84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fac85 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fac89 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fac8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fac8c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fac8d call 0x5fa3b0 */ esp -= 4; M32(esp) = 0x5fac92u; SAVEALL; F_005fa3b0(c); ABI_CHECK(0x5fa3b0u, 0x5fac8du); RETCHK(0x5fac92u, 0x5fac8du); LOADALL;
  /* 005fac92 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fac95 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fac97 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fac98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005faca0(CPU *c) {
  NATIVE_HOOK(0x5faca0u) REGS; LOADALL;
L_005faca0:;
  /* 005faca0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005faca1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005faca5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005faca6 call 0x5fa410 */ esp -= 4; M32(esp) = 0x5facabu; SAVEALL; F_005fa410(c); ABI_CHECK(0x5fa410u, 0x5faca6u); RETCHK(0x5facabu, 0x5faca6u); LOADALL;
  /* 005facab mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005facaf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005facb2 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005facb4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005facb6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005facb7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005facc0(CPU *c) {
  NATIVE_HOOK(0x5facc0u) REGS; LOADALL;
L_005facc0:;
  /* 005facc0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005facc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005facc5 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005facc9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005faccb jne 0x5facd0 */ if (!ZF_) goto L_005facd0;
  /* 005faccd lea eax, [esi + 0x18] */ eax = (u32)((u32)(esi + 0x18u));
L_005facd0:;
  /* 005facd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005facd1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005facd5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005facd6 call 0x5fae30 */ esp -= 4; M32(esp) = 0x5facdbu; SAVEALL; F_005fae30(c); ABI_CHECK(0x5fae30u, 0x5facd6u); RETCHK(0x5facdbu, 0x5facd6u); LOADALL;
  /* 005facdb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005facde test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005face0 je 0x5fad05 */ if (ZF_) goto L_005fad05;
  /* 005face2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005face4 mov dword ptr [eax + 0xc], 0 */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 005faceb mov dword ptr [eax + 0x10], esi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(esi); }
  /* 005facee mov dword ptr [eax], 0x67f3d8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x67f3d8u); }
  /* 005facf4 je 0x5facfe */ if (ZF_) goto L_005facfe;
  /* 005facf6 lea ecx, [eax + 0x18] */ ecx = (u32)((u32)(eax + 0x18u));
  /* 005facf9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005facfa mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005facfd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005facfe:;
  /* 005facfe mov dword ptr [eax + 0x14], 0 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x0u); }
L_005fad05:;
  /* 005fad05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fad06 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fad10(CPU *c) {
  NATIVE_HOOK(0x5fad10u) REGS; LOADALL;
L_005fad10:;
  /* 005fad10 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fad14 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fad18 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005fad1c mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005fad1f mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 005fad22 mov dword ptr [eax + 0xc], 0 */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 005fad29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fad30(CPU *c) {
  NATIVE_HOOK(0x5fad30u) REGS; LOADALL;
L_005fad30:;
  /* 005fad30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fad31 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005fad35 cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fad39 jne 0x5fad4e */ if (!ZF_) goto L_005fad4e;
  /* 005fad3b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fad3d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005fad3f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fad40 call 0x5fad10 */ esp -= 4; M32(esp) = 0x5fad45u; SAVEALL; F_005fad10(c); ABI_CHECK(0x5fad10u, 0x5fad40u); RETCHK(0x5fad45u, 0x5fad40u); LOADALL;
  /* 005fad45 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fad46 call 0x5fad60 */ esp -= 4; M32(esp) = 0x5fad4bu; SAVEALL; F_005fad60(c); ABI_CHECK(0x5fad60u, 0x5fad46u); RETCHK(0x5fad4bu, 0x5fad46u); LOADALL;
  /* 005fad4b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005fad4e:;
  /* 005fad4e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fad4f call 0x5faeb0 */ esp -= 4; M32(esp) = 0x5fad54u; SAVEALL; F_005faeb0(c); ABI_CHECK(0x5faeb0u, 0x5fad4fu); RETCHK(0x5fad54u, 0x5fad4fu); LOADALL;
  /* 005fad54 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fad55 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005fad60(CPU *c) {
  NATIVE_HOOK(0x5fad60u) REGS; LOADALL;
L_005fad60:;
  /* 005fad60 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fad64 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fad66 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005fad69 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005fad6c mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005fad6f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005fad71 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fad80(CPU *c) {
  NATIVE_HOOK(0x5fad80u) REGS; LOADALL;
L_005fad80:;
  /* 005fad80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fad81 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005fad85 push 0x63cbd8 */ { u32 v_ = 0x63cbd8u; esp -= 4; M32(esp) = v_; }
  /* 005fad8a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fad8b call 0x5f1b30 */ esp -= 4; M32(esp) = 0x5fad90u; SAVEALL; F_005f1b30(c); ABI_CHECK(0x5f1b30u, 0x5fad8bu); RETCHK(0x5fad90u, 0x5fad8bu); LOADALL;
  /* 005fad90 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fad93 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fad95 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fad99 jne 0x5fadad */ if (!ZF_) goto L_005fadad;
  /* 005fad9b mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fad9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fada0 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005fada2 call 0x5fae90 */ esp -= 4; M32(esp) = 0x5fada7u; SAVEALL; F_005fae90(c); ABI_CHECK(0x5fae90u, 0x5fada2u); RETCHK(0x5fada7u, 0x5fada2u); LOADALL;
  /* 005fada7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fada9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fadaa ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005fadad:;
  /* 005fadad mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fadb1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fadb2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fadb3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fadb4 call 0x5faef0 */ esp -= 4; M32(esp) = 0x5fadb9u; SAVEALL; F_005faef0(c); ABI_CHECK(0x5faef0u, 0x5fadb4u); RETCHK(0x5fadb9u, 0x5fadb4u); LOADALL;
  /* 005fadb9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fadba ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005fadc0(CPU *c) {
  NATIVE_HOOK(0x5fadc0u) REGS; LOADALL;
L_005fadc0:;
  /* 005fadc0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fadc4 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fadc8 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fadcb jbe 0x5fadd5 */ if ((CF_|ZF_)) goto L_005fadd5;
  /* 005fadcd mov eax, 0x80070057 */ { eax = (u32)(0x80070057u); }
  /* 005fadd2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005fadd5:;
  /* 005fadd5 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005fadd8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fadda ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005fade0(CPU *c) {
  NATIVE_HOOK(0x5fade0u) REGS; LOADALL;
L_005fade0:;
  /* 005fade0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005fade4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fade6 je 0x5fadf6 */ if (ZF_) goto L_005fadf6;
  /* 005fade8 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005fadec mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fadef mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 005fadf1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fadf3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005fadf6:;
  /* 005fadf6 mov eax, 0x80004003 */ { eax = (u32)(0x80004003u); }
  /* 005fadfb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}
