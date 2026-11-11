#include "funcs.h"

void F_005073c0(CPU *c) {
  NATIVE_HOOK(0x5073c0u) REGS; LOADALL;
L_005073c0:;
  /* 005073c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005073c1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005073c3 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005073c5 call 0x508150 */ esp -= 4; M32(esp) = 0x5073cau; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x5073c5u); RETCHK(0x5073cau, 0x5073c5u); LOADALL;
  /* 005073ca test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005073cc jne 0x50740c */ if (!ZF_) goto L_0050740c;
  /* 005073ce push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005073d0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005073d2 call 0x508150 */ esp -= 4; M32(esp) = 0x5073d7u; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x5073d2u); RETCHK(0x5073d7u, 0x5073d2u); LOADALL;
  /* 005073d7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005073d9 jne 0x50740c */ if (!ZF_) goto L_0050740c;
  /* 005073db push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005073dd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005073df call 0x508150 */ esp -= 4; M32(esp) = 0x5073e4u; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x5073dfu); RETCHK(0x5073e4u, 0x5073dfu); LOADALL;
  /* 005073e4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005073e6 jne 0x50740c */ if (!ZF_) goto L_0050740c;
  /* 005073e8 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005073ea mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005073ec call 0x508150 */ esp -= 4; M32(esp) = 0x5073f1u; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x5073ecu); RETCHK(0x5073f1u, 0x5073ecu); LOADALL;
  /* 005073f1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005073f3 jne 0x50740c */ if (!ZF_) goto L_0050740c;
  /* 005073f5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005073f7 call 0x507890 */ esp -= 4; M32(esp) = 0x5073fcu; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x5073f7u); RETCHK(0x5073fcu, 0x5073f7u); LOADALL;
  /* 005073fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005073fe je 0x507408 */ if (ZF_) goto L_00507408;
  /* 00507400 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00507402 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00507404 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507405 jmp dword ptr [edx + 0x50] */ { const u32 m_ = (u32)(edx + 0x50u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00507408:;
  /* 00507408 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050740a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050740b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050740c:;
  /* 0050740c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050740e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050740f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507410(CPU *c) {
  NATIVE_HOOK(0x507410u) REGS; LOADALL;
L_00507410:;
  /* 00507410 mov al, byte ptr [ecx + 0x3f] */ { const u32 m_ = (u32)(ecx + 0x3fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00507413 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507420(CPU *c) {
  NATIVE_HOOK(0x507420u) REGS; LOADALL;
L_00507420:;
  /* 00507420 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507421 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507423 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507426 lea edx, [ecx + 0x44] */ edx = (u32)((u32)(ecx + 0x44u));
  /* 00507429 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050742c lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050742f call 0x52cee0 */ esp -= 4; M32(esp) = 0x507434u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50742fu); RETCHK(0x507434u, 0x50742fu); LOADALL;
  /* 00507434 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507436 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507437 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00507440(CPU *c) {
  NATIVE_HOOK(0x507440u) REGS; LOADALL;
L_00507440:;
  /* 00507440 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507441 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507443 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507446 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507447 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507448 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507449 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0050744c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050744e lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 00507451 mov edx, edi */ { edx = (u32)(edi); }
  /* 00507453 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00507456 call 0x52cee0 */ esp -= 4; M32(esp) = 0x50745bu; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x507456u); RETCHK(0x50745bu, 0x507456u); LOADALL;
  /* 0050745b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050745e mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00507460 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 00507462 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507463 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507464 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00507467 call 0x52ce60 */ esp -= 4; M32(esp) = 0x50746cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x507467u); RETCHK(0x50746cu, 0x507467u); LOADALL;
  /* 0050746c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050746d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050746f call dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507475u; SAVEALL; call_ind(c, t_); RETCHK(0x507475u, 0x50746fu); LOADALL; }
  /* 00507475 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507476 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507477 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507478 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050747a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050747b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00507480(CPU *c) {
  NATIVE_HOOK(0x507480u) REGS; LOADALL;
L_00507480:;
  /* 00507480 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507481 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507483 mov edx, dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); edx = (u32)(M32(m_)); }
  /* 00507486 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507489 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0050748b mov ecx, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ecx = (u32)(M32(m_)); }
  /* 0050748e mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00507491 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507492 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005074a0(CPU *c) {
  NATIVE_HOOK(0x5074a0u) REGS; LOADALL;
L_005074a0:;
  /* 005074a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005074a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005074a3 fld dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005074a6 fsub dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005074a9 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005074af fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005074b1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005074b4 je 0x5074be */ if (ZF_) goto L_005074be;
  /* 005074b6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005074b8 fld dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005074bb fsub dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005074be:;
  /* 005074be mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005074c1 fadd dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005074c3 fstp dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005074c6 fld dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); FPUSH((double)MF32(m_)); }
  /* 005074c9 fsub dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005074cc fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005074d2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005074d4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005074d7 je 0x5074e1 */ if (ZF_) goto L_005074e1;
  /* 005074d9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005074db fld dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); FPUSH((double)MF32(m_)); }
  /* 005074de fsub dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005074e1:;
  /* 005074e1 fadd dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005074e4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005074e5 fstp dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005074e8 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 005074ea mov dword ptr [ecx + 0x44], eax */ { const u32 m_ = (u32)(ecx + 0x44u); M32(m_) = (u32)(eax); }
  /* 005074ed mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005074f0 mov dword ptr [ecx + 0x48], eax */ { const u32 m_ = (u32)(ecx + 0x48u); M32(m_) = (u32)(eax); }
  /* 005074f3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005074f5 call dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5074fbu; SAVEALL; call_ind(c, t_); RETCHK(0x5074fbu, 0x5074f5u); LOADALL; }
  /* 005074fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005074fc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00507500(CPU *c) {
  NATIVE_HOOK(0x507500u) REGS; LOADALL;
L_00507500:;
  /* 00507500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507503 fld dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00507506 fsub dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00507509 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050750f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00507511 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507514 je 0x50751e */ if (ZF_) goto L_0050751e;
  /* 00507516 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00507518 fld dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0050751b fsub dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050751e:;
  /* 0050751e fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00507524 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00507527 fadd dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050752a fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050752c fld dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0050752f fsub dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00507532 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00507538 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050753a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050753d je 0x507547 */ if (ZF_) goto L_00507547;
  /* 0050753f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00507541 fld dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); FPUSH((double)MF32(m_)); }
  /* 00507544 fsub dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00507547:;
  /* 00507547 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050754d fadd dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00507550 fstp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00507553 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507554 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00507560(CPU *c) {
  NATIVE_HOOK(0x507560u) REGS; LOADALL;
L_00507560:;
  /* 00507560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507563 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507566 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507567 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00507569 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050756b lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0050756e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050756f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507571 call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507574u; SAVEALL; call_ind(c, t_); RETCHK(0x507574u, 0x507571u); LOADALL; }
  /* 00507574 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507577 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 00507579 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050757b fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050757e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507580 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00507583 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00507586 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00507589 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050758c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050758d fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00507590 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507593u; SAVEALL; call_ind(c, t_); RETCHK(0x507593u, 0x507590u); LOADALL; }
  /* 00507593 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00507596 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00507598 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050759b lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050759e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050759f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005075a1 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005075a4 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 005075a7 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005075aa fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005075ad call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5075b0u; SAVEALL; call_ind(c, t_); RETCHK(0x5075b0u, 0x5075adu); LOADALL; }
  /* 005075b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005075b1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005075b3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005075b4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005075c0(CPU *c) {
  NATIVE_HOOK(0x5075c0u) REGS; LOADALL;
L_005075c0:;
  /* 005075c0 add eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005075c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005075d0(CPU *c) { native_gui_find_child(c); }

void F_00507650(CPU *c) {
  NATIVE_HOOK(0x507650u) REGS; LOADALL;
L_00507650:;
  /* 00507650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507653 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507656 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507657 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507658 mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 0050765b mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 0050765d cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050765f mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00507662 je 0x5076c5 */ if (ZF_) goto L_005076c5;
L_00507664:;
  /* 00507664 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507667 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0050766a call 0x52ce90 */ esp -= 4; M32(esp) = 0x50766fu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x50766au); RETCHK(0x50766fu, 0x50766au); LOADALL;
  /* 0050766f mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00507672 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507675 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00507677 call dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50767au; SAVEALL; call_ind(c, t_); RETCHK(0x50767au, 0x507677u); LOADALL; }
  /* 0050767a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050767c je 0x5076be */ if (ZF_) goto L_005076be;
  /* 0050767e mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00507681 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507684 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00507686 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00507689 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050768a call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50768du; SAVEALL; call_ind(c, t_); RETCHK(0x50768du, 0x50768au); LOADALL; }
  /* 0050768d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050768e lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00507691 call 0x52cf90 */ esp -= 4; M32(esp) = 0x507696u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x507691u); RETCHK(0x507696u, 0x507691u); LOADALL;
  /* 00507696 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00507699 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050769c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050769e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005076a1 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5076a4u; SAVEALL; call_ind(c, t_); RETCHK(0x5076a4u, 0x5076a1u); LOADALL; }
  /* 005076a4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005076a6 je 0x5076bb */ if (ZF_) goto L_005076bb;
  /* 005076a8 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005076ab mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005076ae mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005076b0 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 005076b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005076b4 call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5076b7u; SAVEALL; call_ind(c, t_); RETCHK(0x5076b7u, 0x5076b4u); LOADALL; }
  /* 005076b7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005076b9 jne 0x5076cf */ if (!ZF_) goto L_005076cf;
L_005076bb:;
  /* 005076bb mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
L_005076be:;
  /* 005076be mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 005076c1 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005076c3 jne 0x507664 */ if (!ZF_) goto L_00507664;
L_005076c5:;
  /* 005076c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005076c6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005076c8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005076c9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005076cb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005076cc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005076cf:;
  /* 005076cf mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005076d2 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005076d5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005076d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005076d7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005076d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005076da ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005076e0(CPU *c) {
  NATIVE_HOOK(0x5076e0u) REGS; LOADALL;
L_005076e0:;
  /* 005076e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005076e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005076e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005076e4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005076e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005076e6 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005076e9 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 005076ec mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005076ef cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005076f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005076f2 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005076f4 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 005076f7 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 005076fa je 0x507719 */ if (ZF_) goto L_00507719;
  /* 005076fc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00507700:;
  /* 00507700 cmp dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507702 je 0x50770e */ if (ZF_) goto L_0050770e;
  /* 00507704 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507707 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0050770a cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050770c jne 0x507700 */ if (!ZF_) goto L_00507700;
L_0050770e:;
  /* 0050770e cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507710 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00507713 jne 0x5077ad */ if (!ZF_) goto L_005077ad;
L_00507719:;
  /* 00507719 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0050771b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050771d call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507720u; SAVEALL; call_ind(c, t_); RETCHK(0x507720u, 0x50771du); LOADALL; }
  /* 00507720 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507722 je 0x5077a4 */ if (ZF_) goto L_005077a4;
  /* 00507728 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050772b mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0050772d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050772e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00507730 call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507733u; SAVEALL; call_ind(c, t_); RETCHK(0x507733u, 0x507730u); LOADALL; }
  /* 00507733 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507735 je 0x5077a4 */ if (ZF_) goto L_005077a4;
  /* 00507737 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050773a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050773c mov dword ptr [ebp + 8], edi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edi); }
  /* 0050773f jne 0x507745 */ if (!ZF_) goto L_00507745;
  /* 00507741 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00507743 jmp 0x50774d */ goto L_0050774d;
L_00507745:;
  /* 00507745 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507748 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050774a sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_0050774d:;
  /* 0050774d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050774f je 0x50776a */ if (ZF_) goto L_0050776a;
  /* 00507751 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00507754 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00507756 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00507759 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050775b jae 0x50776a */ if (!CF_) goto L_0050776a;
  /* 0050775d mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507760 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00507762 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00507765 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00507768 jmp 0x50777c */ goto L_0050777c;
L_0050776a:;
  /* 0050776a mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050776d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050776e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050776f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00507772 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00507777 call 0x4d2620 */ esp -= 4; M32(esp) = 0x50777cu; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x507777u); RETCHK(0x50777cu, 0x507777u); LOADALL;
L_0050777c:;
  /* 0050777c mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0050777e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00507780 call dword ptr [edx + 0xbc] */ { const u32 m_ = (u32)(edx + 0xbcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507786u; SAVEALL; call_ind(c, t_); RETCHK(0x507786u, 0x507780u); LOADALL; }
L_00507786:;
  /* 00507786 mov eax, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); eax = (u32)(M32(m_)); }
  /* 00507789 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 0050778b cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050778d je 0x5077a4 */ if (ZF_) goto L_005077a4;
  /* 0050778f nop */ ;
L_00507790:;
  /* 00507790 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00507793 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507796 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00507797 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507798 call 0x5076e0 */ esp -= 4; M32(esp) = 0x50779du; SAVEALL; F_005076e0(c); ABI_CHECK(0x5076e0u, 0x507798u); RETCHK(0x50779du, 0x507798u); LOADALL;
  /* 0050779d mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 0050779f cmp ebx, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005077a2 jne 0x507790 */ if (!ZF_) goto L_00507790;
L_005077a4:;
  /* 005077a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005077a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005077a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005077a7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005077a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005077aa ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005077ad:;
  /* 005077ad mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005077b0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005077b2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005077b3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005077b5 call dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5077b8u; SAVEALL; call_ind(c, t_); RETCHK(0x5077b8u, 0x5077b5u); LOADALL; }
  /* 005077b8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005077ba je 0x5077c7 */ if (ZF_) goto L_005077c7;
  /* 005077bc mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005077be mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005077c0 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5077c3u; SAVEALL; call_ind(c, t_); RETCHK(0x5077c3u, 0x5077c0u); LOADALL; }
  /* 005077c3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005077c5 jne 0x507786 */ if (!ZF_) goto L_00507786;
L_005077c7:;
  /* 005077c7 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005077ca add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005077cd cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005077cf je 0x50782b */ if (ZF_) goto L_0050782b;
L_005077d1:;
  /* 005077d1 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 005077d3 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005077d5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005077d7 je 0x507828 */ if (ZF_) goto L_00507828;
  /* 005077d9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005077e0:;
  /* 005077e0 mov eax, edi */ { eax = (u32)(edi); }
  /* 005077e2 call 0x507890 */ esp -= 4; M32(esp) = 0x5077e7u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x5077e2u); RETCHK(0x5077e7u, 0x5077e2u); LOADALL;
  /* 005077e7 mov edi, eax */ { edi = (u32)(eax); }
  /* 005077e9 cmp edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005077ec je 0x5077f4 */ if (ZF_) goto L_005077f4;
  /* 005077ee test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005077f0 jne 0x5077e0 */ if (!ZF_) goto L_005077e0;
  /* 005077f2 jmp 0x507828 */ goto L_00507828;
L_005077f4:;
  /* 005077f4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005077f6 call dword ptr [eax + 0xc0] */ { const u32 m_ = (u32)(eax + 0xc0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5077fcu; SAVEALL; call_ind(c, t_); RETCHK(0x5077fcu, 0x5077f6u); LOADALL; }
  /* 005077fc mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005077ff lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 00507802 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00507804 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00507807 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0050780a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050780b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050780c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050780d call 0x5fe998 */ esp -= 4; M32(esp) = 0x507812u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x50780du); RETCHK(0x507812u, 0x50780du); LOADALL;
  /* 00507812 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507815 add ecx, -4 */ { u32 a_ = ecx, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00507818 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050781b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050781d mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00507820 je 0x507828 */ if (ZF_) goto L_00507828;
  /* 00507822 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00507824 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507826 jne 0x5077d1 */ if (!ZF_) goto L_005077d1;
L_00507828:;
  /* 00507828 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
L_0050782b:;
  /* 0050782b mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0050782d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050782f call dword ptr [edx + 0xc0] */ { const u32 m_ = (u32)(edx + 0xc0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507835u; SAVEALL; call_ind(c, t_); RETCHK(0x507835u, 0x50782fu); LOADALL; }
  /* 00507835 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507838 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050783b sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050783d sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00507840 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00507843 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507844 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507845 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507846 call 0x5fe998 */ esp -= 4; M32(esp) = 0x50784bu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x507846u); RETCHK(0x50784bu, 0x507846u); LOADALL;
  /* 0050784b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050784e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507851 add eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00507854 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507855 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00507858 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507859 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050785a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050785c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050785d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00507860(CPU *c) {
  NATIVE_HOOK(0x507860u) REGS; LOADALL;
L_00507860:;
  /* 00507860 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507862 je 0x507881 */ if (ZF_) goto L_00507881;
  /* 00507864 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507865 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507866 mov edi, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); edi = (u32)(M32(m_)); }
  /* 00507869 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 0050786b cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050786d je 0x50787f */ if (ZF_) goto L_0050787f;
  /* 0050786f nop */ ;
L_00507870:;
  /* 00507870 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507873 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507874 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x507876u; SAVEALL; call_ind(c, t_); RETCHK(0x507876u, 0x507874u); LOADALL; }
  /* 00507876 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00507878 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050787b cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050787d jne 0x507870 */ if (!ZF_) goto L_00507870;
L_0050787f:;
  /* 0050787f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507880 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00507881:;
  /* 00507881 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507890(CPU *c) {
  NATIVE_HOOK(0x507890u) REGS; LOADALL;
L_00507890:;
  /* 00507890 mov eax, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00507893 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005078a0(CPU *c) {
  NATIVE_HOOK(0x5078a0u) REGS; LOADALL;
L_005078a0:;
  /* 005078a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005078a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005078a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005078a4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005078a5 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005078a7 mov edx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); edx = (u32)(M32(m_)); }
  /* 005078aa test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005078ac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005078ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005078ae je 0x507928 */ if (ZF_) goto L_00507928;
  /* 005078b0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005078b3 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005078b5 je 0x50796f */ if (ZF_) goto L_0050796f;
  /* 005078bb mov ecx, dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); ecx = (u32)(M32(m_)); }
  /* 005078be mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005078c0 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005078c2 je 0x5078e0 */ if (ZF_) goto L_005078e0;
L_005078c4:;
  /* 005078c4 cmp dword ptr [eax + 8], ebx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005078c7 je 0x5078d1 */ if (ZF_) goto L_005078d1;
  /* 005078c9 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005078cb cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005078cd jne 0x5078c4 */ if (!ZF_) goto L_005078c4;
  /* 005078cf jmp 0x5078e0 */ goto L_005078e0;
L_005078d1:;
  /* 005078d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005078d2 lea esi, [edx + 0x60] */ esi = (u32)((u32)(edx + 0x60u));
  /* 005078d5 lea edi, [ebp - 4] */ edi = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005078d8 call 0x467d10 */ esp -= 4; M32(esp) = 0x5078ddu; SAVEALL; F_00467d10(c); ABI_CHECK(0x467d10u, 0x5078d8u); RETCHK(0x5078ddu, 0x5078d8u); LOADALL;
  /* 005078dd mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_005078e0:;
  /* 005078e0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005078e2 je 0x50796f */ if (ZF_) goto L_0050796f;
  /* 005078e8 lea eax, [esi + 0x60] */ eax = (u32)((u32)(esi + 0x60u));
  /* 005078eb mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 005078ee mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005078f1 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005078f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005078f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005078f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005078f7 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005078fa call 0x508af0 */ esp -= 4; M32(esp) = 0x5078ffu; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x5078fau); RETCHK(0x5078ffu, 0x5078fau); LOADALL;
  /* 005078ff mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00507902 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00507907 add edx, 0x60 */ { u32 a_ = edx, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0050790a mov edi, eax */ { edi = (u32)(eax); }
  /* 0050790c call 0x518d90 */ esp -= 4; M32(esp) = 0x507911u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x50790cu); RETCHK(0x507911u, 0x50790cu); LOADALL;
  /* 00507911 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507914 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00507917 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050791a mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
L_0050791c:;
  /* 0050791c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050791d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050791e mov dword ptr [ebx + 0x5c], eax */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(eax); }
  /* 00507921 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507922 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507924 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507925 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00507928:;
  /* 00507928 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050792b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050792d je 0x50791c */ if (ZF_) goto L_0050791c;
  /* 0050792f mov esi, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); esi = (u32)(M32(m_)); }
  /* 00507932 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00507935 add eax, 0x60 */ { u32 a_ = eax, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00507938 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0050793b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050793c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050793d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050793e mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00507941 call 0x508af0 */ esp -= 4; M32(esp) = 0x507946u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x507941u); RETCHK(0x507946u, 0x507941u); LOADALL;
  /* 00507946 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00507949 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0050794e add edx, 0x60 */ { u32 a_ = edx, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00507951 mov edi, eax */ { edi = (u32)(eax); }
  /* 00507953 call 0x518d90 */ esp -= 4; M32(esp) = 0x507958u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x507953u); RETCHK(0x507958u, 0x507953u); LOADALL;
  /* 00507958 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050795b mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0050795e mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00507961 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00507963 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507964 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507965 mov dword ptr [ebx + 0x5c], ecx */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(ecx); }
  /* 00507968 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507969 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050796b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050796c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050796f:;
  /* 0050796f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507970 mov dword ptr [ebx + 0x5c], esi */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(esi); }
  /* 00507973 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507974 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507975 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507977 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507978 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00507980(CPU *c) {
  NATIVE_HOOK(0x507980u) REGS; LOADALL;
L_00507980:;
  /* 00507980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507983 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507986 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507987 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0050798a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050798c mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 0050798f je 0x5079d2 */ if (ZF_) goto L_005079d2;
  /* 00507991 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507992 mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 00507995 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507996 add ebx, 0x60 */ { u32 a_ = ebx, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00507999 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0050799c mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0050799f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005079a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005079a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005079a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005079a5 call 0x508af0 */ esp -= 4; M32(esp) = 0x5079aau; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x5079a5u); RETCHK(0x5079aau, 0x5079a5u); LOADALL;
  /* 005079aa mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005079af mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005079b1 mov edi, eax */ { edi = (u32)(eax); }
  /* 005079b3 call 0x518d90 */ esp -= 4; M32(esp) = 0x5079b8u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x5079b3u); RETCHK(0x5079b8u, 0x5079b3u); LOADALL;
  /* 005079b8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005079bb mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005079be mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 005079c1 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005079c4 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 005079c6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005079c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005079c8 mov dword ptr [ecx + 0x5c], eax */ { const u32 m_ = (u32)(ecx + 0x5cu); M32(m_) = (u32)(eax); }
  /* 005079cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005079cc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005079ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005079cf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005079d2:;
  /* 005079d2 mov dword ptr [ecx + 0x5c], ebx */ { const u32 m_ = (u32)(ecx + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 005079d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005079d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005079d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005079d9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005079e0(CPU *c) {
  NATIVE_HOOK(0x5079e0u) REGS; LOADALL;
L_005079e0:;
  /* 005079e0 mov dword ptr [eax + 0x6c], ecx */ { const u32 m_ = (u32)(eax + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 005079e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005079f0(CPU *c) {
  NATIVE_HOOK(0x5079f0u) REGS; LOADALL;
L_005079f0:;
  /* 005079f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005079f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005079f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005079f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005079f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005079f6 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5079fbu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5079f6u); RETCHK(0x5079fbu, 0x5079f6u); LOADALL;
  /* 005079fb mov esi, eax */ { esi = (u32)(eax); }
  /* 005079fd test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005079ff mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00507a02 jne 0x507a0b */ if (!ZF_) goto L_00507a0b;
  /* 00507a04 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00507a06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507a07 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507a09 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507a0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00507a0b:;
  /* 00507a0b mov eax, esi */ { eax = (u32)(esi); }
  /* 00507a0d call 0x507890 */ esp -= 4; M32(esp) = 0x507a12u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x507a0du); RETCHK(0x507a12u, 0x507a0du); LOADALL;
  /* 00507a12 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507a14 je 0x507a24 */ if (ZF_) goto L_00507a24;
  /* 00507a16 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507a17 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00507a1a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507a1b lea edi, [eax + 0x60] */ edi = (u32)((u32)(eax + 0x60u));
  /* 00507a1e call 0x508aa0 */ esp -= 4; M32(esp) = 0x507a23u; SAVEALL; F_00508aa0(c); ABI_CHECK(0x508aa0u, 0x507a1eu); RETCHK(0x507a23u, 0x507a1eu); LOADALL;
  /* 00507a23 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00507a24:;
  /* 00507a24 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00507a26 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507a28 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507a2bu; SAVEALL; call_ind(c, t_); RETCHK(0x507a2bu, 0x507a28u); LOADALL; }
  /* 00507a2b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00507a2d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00507a2f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507a31 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507a33u; SAVEALL; call_ind(c, t_); RETCHK(0x507a33u, 0x507a31u); LOADALL; }
  /* 00507a33 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00507a35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507a36 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507a38 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507a39 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507a40(CPU *c) {
  NATIVE_HOOK(0x507a40u) REGS; LOADALL;
L_00507a40:;
  /* 00507a40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507a41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507a43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507a44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507a45 call 0x5075d0 */ esp -= 4; M32(esp) = 0x507a4au; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x507a45u); RETCHK(0x507a4au, 0x507a45u); LOADALL;
  /* 00507a4a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507a4c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00507a4f jne 0x507a57 */ if (!ZF_) goto L_00507a57;
  /* 00507a51 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00507a53 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507a55 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507a56 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00507a57:;
  /* 00507a57 call 0x507890 */ esp -= 4; M32(esp) = 0x507a5cu; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x507a57u); RETCHK(0x507a5cu, 0x507a57u); LOADALL;
  /* 00507a5c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507a5e je 0x507a6e */ if (ZF_) goto L_00507a6e;
  /* 00507a60 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507a61 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00507a64 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507a65 lea edi, [eax + 0x60] */ edi = (u32)((u32)(eax + 0x60u));
  /* 00507a68 call 0x508aa0 */ esp -= 4; M32(esp) = 0x507a6du; SAVEALL; F_00508aa0(c); ABI_CHECK(0x508aa0u, 0x507a68u); RETCHK(0x507a6du, 0x507a68u); LOADALL;
  /* 00507a6d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00507a6e:;
  /* 00507a6e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00507a70 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507a72 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507a73 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507a80(CPU *c) {
  NATIVE_HOOK(0x507a80u) REGS; LOADALL;
L_00507a80:;
  /* 00507a80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507a81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507a82 mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 00507a85 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 00507a87 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507a89 je 0x507aab */ if (ZF_) goto L_00507aab;
  /* 00507a8b jmp 0x507a90 */ goto L_00507a90;
L_00507a90:;
  /* 00507a90 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507a93 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00507a95 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507a98u; SAVEALL; call_ind(c, t_); RETCHK(0x507a98u, 0x507a95u); LOADALL; }
  /* 00507a98 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507a9b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507a9d je 0x507aa5 */ if (ZF_) goto L_00507aa5;
  /* 00507a9f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00507aa1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00507aa3 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507aa5u; SAVEALL; call_ind(c, t_); RETCHK(0x507aa5u, 0x507aa3u); LOADALL; }
L_00507aa5:;
  /* 00507aa5 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00507aa7 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507aa9 jne 0x507a90 */ if (!ZF_) goto L_00507a90;
L_00507aab:;
  /* 00507aab lea esi, [ebx + 0x60] */ esi = (u32)((u32)(ebx + 0x60u));
  /* 00507aae call 0x529410 */ esp -= 4; M32(esp) = 0x507ab3u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x507aaeu); RETCHK(0x507ab3u, 0x507aaeu); LOADALL;
  /* 00507ab3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507ab4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507ab5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507ac0(CPU *c) {
  NATIVE_HOOK(0x507ac0u) REGS; LOADALL;
L_00507ac0:;
  /* 00507ac0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507ac1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507ac3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507ac6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00507ac8 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00507acb mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00507ace mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00507ad1 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00507ad4 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 00507ad7 mov ecx, dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00507ada test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507adc mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00507adf mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00507ae2 mov dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x10u); }
  /* 00507ae9 je 0x507af3 */ if (ZF_) goto L_00507af3;
  /* 00507aeb lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00507aee call 0x508540 */ esp -= 4; M32(esp) = 0x507af3u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x507aeeu); RETCHK(0x507af3u, 0x507aeeu); LOADALL;
L_00507af3:;
  /* 00507af3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00507af5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507af7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507af8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507b00(CPU *c) {
  NATIVE_HOOK(0x507b00u) REGS; LOADALL;
L_00507b00:;
  /* 00507b00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507b01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507b03 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507b06 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507b07 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00507b09 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507b0a call 0x508500 */ esp -= 4; M32(esp) = 0x507b0fu; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x507b0au); RETCHK(0x507b0fu, 0x507b0au); LOADALL;
  /* 00507b0f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507b11 jne 0x507b18 */ if (!ZF_) goto L_00507b18;
  /* 00507b13 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507b14 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507b16 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507b17 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00507b18:;
  /* 00507b18 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507b19 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507b1a call 0x518bb0 */ esp -= 4; M32(esp) = 0x507b1fu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x507b1au); RETCHK(0x507b1fu, 0x507b1au); LOADALL;
  /* 00507b1f call 0x5180e0 */ esp -= 4; M32(esp) = 0x507b24u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x507b1fu); RETCHK(0x507b24u, 0x507b1fu); LOADALL;
  /* 00507b24 mov edi, dword ptr [eax + 0x1f4] */ { const u32 m_ = (u32)(eax + 0x1f4u); edi = (u32)(M32(m_)); }
  /* 00507b2a add eax, 0x1dc */ { u32 a_ = eax, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00507b2f cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507b32 lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 00507b35 jb 0x507b3b */ if (CF_) goto L_00507b3b;
  /* 00507b37 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 00507b39 jmp 0x507b3d */ goto L_00507b3d;
L_00507b3b:;
  /* 00507b3b mov esi, edx */ { esi = (u32)(edx); }
L_00507b3d:;
  /* 00507b3d mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00507b40 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00507b42 cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507b45 jb 0x507b49 */ if (CF_) goto L_00507b49;
  /* 00507b47 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
L_00507b49:;
  /* 00507b49 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507b4a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00507b4b lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00507b4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507b4f mov edi, eax */ { edi = (u32)(eax); }
  /* 00507b51 call 0x40cdc0 */ esp -= 4; M32(esp) = 0x507b56u; SAVEALL; F_0040cdc0(c); ABI_CHECK(0x40cdc0u, 0x507b51u); RETCHK(0x507b56u, 0x507b51u); LOADALL;
  /* 00507b56 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00507b59 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00507b5b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507b5d mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 00507b60 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 00507b63 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 00507b66 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00507b69 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00507b6c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507b6d mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 00507b70 mov dword ptr [ebp - 0x1c], 0x11 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x11u); }
  /* 00507b77 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00507b7a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507b7b je 0x507b85 */ if (ZF_) goto L_00507b85;
  /* 00507b7d lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00507b80 call 0x508540 */ esp -= 4; M32(esp) = 0x507b85u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x507b80u); RETCHK(0x507b85u, 0x507b80u); LOADALL;
L_00507b85:;
  /* 00507b85 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00507b87 call 0x507e90 */ esp -= 4; M32(esp) = 0x507b8cu; SAVEALL; F_00507e90(c); ABI_CHECK(0x507e90u, 0x507b87u); RETCHK(0x507b8cu, 0x507b87u); LOADALL;
  /* 00507b8c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00507b8e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507b8f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507b91 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507b92 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507ba0(CPU *c) {
  NATIVE_HOOK(0x507ba0u) REGS; LOADALL;
L_00507ba0:;
  /* 00507ba0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507ba1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507ba3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507ba6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507ba7 call 0x518bb0 */ esp -= 4; M32(esp) = 0x507bacu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x507ba7u); RETCHK(0x507bacu, 0x507ba7u); LOADALL;
  /* 00507bac call 0x5180e0 */ esp -= 4; M32(esp) = 0x507bb1u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x507bacu); RETCHK(0x507bb1u, 0x507bacu); LOADALL;
  /* 00507bb1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507bb4 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00507bb6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00507bb9 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00507bbc lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00507bbf mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00507bc2 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 00507bc9 call 0x5090a0 */ esp -= 4; M32(esp) = 0x507bceu; SAVEALL; F_005090a0(c); ABI_CHECK(0x5090a0u, 0x507bc9u); RETCHK(0x507bceu, 0x507bc9u); LOADALL;
  /* 00507bce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507bcf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507bd1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507bd2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00507be0(CPU *c) {
  NATIVE_HOOK(0x507be0u) REGS; LOADALL;
L_00507be0:;
  /* 00507be0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507be1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507be3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507be4 call 0x518bb0 */ esp -= 4; M32(esp) = 0x507be9u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x507be4u); RETCHK(0x507be9u, 0x507be4u); LOADALL;
  /* 00507be9 call 0x5180e0 */ esp -= 4; M32(esp) = 0x507beeu; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x507be9u); RETCHK(0x507beeu, 0x507be9u); LOADALL;
  /* 00507bee mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00507bf1 mov edi, eax */ { edi = (u32)(eax); }
  /* 00507bf3 call 0x509180 */ esp -= 4; M32(esp) = 0x507bf8u; SAVEALL; F_00509180(c); ABI_CHECK(0x509180u, 0x507bf3u); RETCHK(0x507bf8u, 0x507bf3u); LOADALL;
  /* 00507bf8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507bf9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507bfa ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00507c00(CPU *c) {
  NATIVE_HOOK(0x507c00u) REGS; LOADALL;
L_00507c00:;
  /* 00507c00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507c01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507c03 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507c06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507c07 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00507c09 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00507c0b call dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507c0eu; SAVEALL; call_ind(c, t_); RETCHK(0x507c0eu, 0x507c0bu); LOADALL; }
  /* 00507c0e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507c10 jne 0x507c19 */ if (!ZF_) goto L_00507c19;
  /* 00507c12 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507c13 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507c15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507c16 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00507c19:;
  /* 00507c19 lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 00507c1c lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00507c1f call 0x52cea0 */ esp -= 4; M32(esp) = 0x507c24u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x507c1fu); RETCHK(0x507c24u, 0x507c1fu); LOADALL;
  /* 00507c24 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00507c27 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507c28 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00507c2b call 0x52cf90 */ esp -= 4; M32(esp) = 0x507c30u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x507c2bu); RETCHK(0x507c30u, 0x507c2bu); LOADALL;
  /* 00507c30 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00507c33 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507c36 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507c38 call 0x52cf00 */ esp -= 4; M32(esp) = 0x507c3du; SAVEALL; F_0052cf00(c); ABI_CHECK(0x52cf00u, 0x507c38u); RETCHK(0x507c3du, 0x507c38u); LOADALL;
  /* 00507c3d neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00507c3f sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00507c41 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00507c43 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507c44 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507c46 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507c47 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00507c50(CPU *c) {
  NATIVE_HOOK(0x507c50u) REGS; LOADALL;
L_00507c50:;
  /* 00507c50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507c51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507c53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507c54 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507c55 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00507c58 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00507c5b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507c5d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00507c5f je 0x507ca4 */ if (ZF_) goto L_00507ca4;
  /* 00507c61 cmp dword ptr [edi], 4 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507c64 jne 0x507c7a */ if (!ZF_) goto L_00507c7a;
  /* 00507c66 call 0x5075c0 */ esp -= 4; M32(esp) = 0x507c6bu; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x507c66u); RETCHK(0x507c6bu, 0x507c66u); LOADALL;
  /* 00507c6b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507c6d call 0x5079f0 */ esp -= 4; M32(esp) = 0x507c72u; SAVEALL; F_005079f0(c); ABI_CHECK(0x5079f0u, 0x507c6du); RETCHK(0x507c72u, 0x507c6du); LOADALL;
L_00507c72:;
  /* 00507c72 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507c73 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00507c75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507c76 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507c77 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00507c7a:;
  /* 00507c7a mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 00507c7d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507c7f je 0x507c8c */ if (ZF_) goto L_00507c8c;
  /* 00507c81 mov edx, edi */ { edx = (u32)(edi); }
  /* 00507c83 call 0x51c710 */ esp -= 4; M32(esp) = 0x507c88u; SAVEALL; F_0051c710(c); ABI_CHECK(0x51c710u, 0x507c83u); RETCHK(0x507c88u, 0x507c83u); LOADALL;
  /* 00507c88 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507c8a jne 0x507c72 */ if (!ZF_) goto L_00507c72;
L_00507c8c:;
  /* 00507c8c mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00507c8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507c91 je 0x507ca4 */ if (ZF_) goto L_00507ca4;
  /* 00507c93 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00507c95 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00507c97 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507c98 call dword ptr [eax + 0xcc] */ { const u32 m_ = (u32)(eax + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507c9eu; SAVEALL; call_ind(c, t_); RETCHK(0x507c9eu, 0x507c98u); LOADALL; }
  /* 00507c9e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507c9f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507ca0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507ca1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00507ca4:;
  /* 00507ca4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507ca5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00507ca7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507ca8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507ca9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00507cb0(CPU *c) {
  NATIVE_HOOK(0x507cb0u) REGS; LOADALL;
L_00507cb0:;
  /* 00507cb0 mov eax, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); eax = (u32)(M32(m_)); }
  /* 00507cb3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507cc0(CPU *c) {
  NATIVE_HOOK(0x507cc0u) REGS; LOADALL;
L_00507cc0:;
  /* 00507cc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507cc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507cc3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507cc6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507cc7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00507cc9 cmp ebx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507ccc je 0x507d76 */ if (ZF_) goto L_00507d76;
  /* 00507cd2 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00507cd5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507cd7 mov dword ptr [esi + 0x58], ebx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ebx); }
  /* 00507cda je 0x507d76 */ if (ZF_) goto L_00507d76;
  /* 00507ce0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507ce1 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00507ce4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507ce5 lea edi, [eax + 0x60] */ edi = (u32)((u32)(eax + 0x60u));
  /* 00507ce8 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00507ceb call 0x508aa0 */ esp -= 4; M32(esp) = 0x507cf0u; SAVEALL; F_00508aa0(c); ABI_CHECK(0x508aa0u, 0x507cebu); RETCHK(0x507cf0u, 0x507cebu); LOADALL;
  /* 00507cf0 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00507cf3 mov edi, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); edi = (u32)(M32(m_)); }
  /* 00507cf6 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00507cf8 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00507cfa mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00507cfd mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507d00 call 0x507cb0 */ esp -= 4; M32(esp) = 0x507d05u; SAVEALL; F_00507cb0(c); ABI_CHECK(0x507cb0u, 0x507d00u); RETCHK(0x507d05u, 0x507d00u); LOADALL;
  /* 00507d05 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507d07 jle 0x507d20 */ if ((ZF_|LT_)) goto L_00507d20;
  /* 00507d09 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 00507d0c add ebx, 0x60 */ { u32 a_ = ebx, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00507d0f lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00507d12 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 00507d15 call 0x508a00 */ esp -= 4; M32(esp) = 0x507d1au; SAVEALL; F_00508a00(c); ABI_CHECK(0x508a00u, 0x507d15u); RETCHK(0x507d1au, 0x507d15u); LOADALL;
  /* 00507d1a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507d1b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507d1c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507d1e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507d1f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00507d20:;
  /* 00507d20 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507d23 call 0x507cb0 */ esp -= 4; M32(esp) = 0x507d28u; SAVEALL; F_00507cb0(c); ABI_CHECK(0x507cb0u, 0x507d23u); RETCHK(0x507d28u, 0x507d23u); LOADALL;
  /* 00507d28 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507d2a jle 0x507d48 */ if ((ZF_|LT_)) goto L_00507d48;
  /* 00507d2c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00507d2d mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00507d30 add edx, 0x60 */ { u32 a_ = edx, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00507d33 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00507d34 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00507d37 lea ebx, [ebp - 4] */ ebx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00507d3a mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 00507d3d call 0x508a60 */ esp -= 4; M32(esp) = 0x507d42u; SAVEALL; F_00508a60(c); ABI_CHECK(0x508a60u, 0x507d3du); RETCHK(0x507d42u, 0x507d3du); LOADALL;
  /* 00507d42 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507d43 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507d44 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507d46 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507d47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00507d48:;
  /* 00507d48 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507d4a je 0x507d64 */ if (ZF_) goto L_00507d64;
  /* 00507d4c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00507d50:;
  /* 00507d50 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507d53 call 0x507cb0 */ esp -= 4; M32(esp) = 0x507d58u; SAVEALL; F_00507cb0(c); ABI_CHECK(0x507cb0u, 0x507d53u); RETCHK(0x507d58u, 0x507d53u); LOADALL;
  /* 00507d58 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507d5a jg 0x507d7b */ if (!(ZF_|LT_)) goto L_00507d7b;
  /* 00507d5c mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00507d5e mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00507d60 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507d62 jne 0x507d50 */ if (!ZF_) goto L_00507d50;
L_00507d64:;
  /* 00507d64 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 00507d67 add ebx, 0x60 */ { u32 a_ = ebx, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00507d6a lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00507d6d mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 00507d70 call 0x508a30 */ esp -= 4; M32(esp) = 0x507d75u; SAVEALL; F_00508a30(c); ABI_CHECK(0x508a30u, 0x507d70u); RETCHK(0x507d75u, 0x507d70u); LOADALL;
  /* 00507d75 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00507d76:;
  /* 00507d76 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507d77 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507d79 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507d7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00507d7b:;
  /* 00507d7b mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00507d7e add eax, 0x60 */ { u32 a_ = eax, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00507d81 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00507d82 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507d83 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00507d86 lea ebx, [ebp - 4] */ ebx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00507d89 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 00507d8c call 0x508a60 */ esp -= 4; M32(esp) = 0x507d91u; SAVEALL; F_00508a60(c); ABI_CHECK(0x508a60u, 0x507d8cu); RETCHK(0x507d91u, 0x507d8cu); LOADALL;
  /* 00507d91 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507d92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507d93 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507d95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507d96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507da0(CPU *c) {
  NATIVE_HOOK(0x507da0u) REGS; LOADALL;
L_00507da0:;
  /* 00507da0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507da1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507da3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507da4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507da5 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00507da8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507da9 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00507dab call 0x507650 */ esp -= 4; M32(esp) = 0x507db0u; SAVEALL; F_00507650(c); ABI_CHECK(0x507650u, 0x507dabu); RETCHK(0x507db0u, 0x507dabu); LOADALL;
  /* 00507db0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507db2 je 0x507dc0 */ if (ZF_) goto L_00507dc0;
  /* 00507db4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507db7 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00507db9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507dba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507dbb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00507dbd call dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507dc0u; SAVEALL; call_ind(c, t_); RETCHK(0x507dc0u, 0x507dbdu); LOADALL; }
L_00507dc0:;
  /* 00507dc0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507dc1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507dc2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507dc3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00507dd0(CPU *c) {
  NATIVE_HOOK(0x507dd0u) REGS; LOADALL;
L_00507dd0:;
  /* 00507dd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507dd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507dd3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00507dd5 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 00507dda mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00507de0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507de1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00507de8 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507deb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00507df0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507df1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00507df3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00507df6 mov eax, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 00507dfc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507dfe mov byte ptr [esi + 0x40], 1 */ { const u32 m_ = (u32)(esi + 0x40u); M8(m_) = (u8)(0x1u); }
  /* 00507e02 je 0x507e77 */ if (ZF_) goto L_00507e77;
  /* 00507e04 call 0x5084b0 */ esp -= 4; M32(esp) = 0x507e09u; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x507e04u); RETCHK(0x507e09u, 0x507e04u); LOADALL;
  /* 00507e09 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507e0b je 0x507e77 */ if (ZF_) goto L_00507e77;
  /* 00507e0d mov eax, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 00507e13 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507e15 je 0x507e68 */ if (ZF_) goto L_00507e68;
  /* 00507e17 mov ecx, dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); ecx = (u32)(M32(m_)); }
  /* 00507e1d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507e1f jne 0x507e68 */ if (!ZF_) goto L_00507e68;
  /* 00507e21 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507e22 push 0x650bfc */ { u32 v_ = 0x650bfcu; esp -= 4; M32(esp) = v_; }
  /* 00507e27 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507e2du; SAVEALL; call_ind(c, t_); RETCHK(0x507e2du, 0x507e27u); LOADALL; }
  /* 00507e2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507e2e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00507e31 call 0x403060 */ esp -= 4; M32(esp) = 0x507e36u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x507e31u); RETCHK(0x507e36u, 0x507e31u); LOADALL;
  /* 00507e36 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00507e3d mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00507e40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507e42 je 0x507e56 */ if (ZF_) goto L_00507e56;
  /* 00507e44 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00507e46 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00507e49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507e4a lea ecx, [esi + 0x90] */ ecx = (u32)((u32)(esi + 0x90u));
  /* 00507e50 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507e51 call 0x523190 */ esp -= 4; M32(esp) = 0x507e56u; SAVEALL; F_00523190(c); ABI_CHECK(0x523190u, 0x507e51u); RETCHK(0x507e56u, 0x507e51u); LOADALL;
L_00507e56:;
  /* 00507e56 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00507e59 mov dword ptr [esi + 0x88], 1 */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(0x1u); }
  /* 00507e63 call 0x43ee60 */ esp -= 4; M32(esp) = 0x507e68u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x507e63u); RETCHK(0x507e68u, 0x507e63u); LOADALL;
L_00507e68:;
  /* 00507e68 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507e69 lea eax, [esi + 0x90] */ eax = (u32)((u32)(esi + 0x90u));
  /* 00507e6f call 0x523350 */ esp -= 4; M32(esp) = 0x507e74u; SAVEALL; F_00523350(c); ABI_CHECK(0x523350u, 0x507e6fu); RETCHK(0x507e74u, 0x507e6fu); LOADALL;
  /* 00507e74 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00507e77:;
  /* 00507e77 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00507e7a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00507e81 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00507e84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507e85 call 0x61af31 */ esp -= 4; M32(esp) = 0x507e8au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x507e85u); RETCHK(0x507e8au, 0x507e85u); LOADALL;
  /* 00507e8a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507e8c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507e8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507e90(CPU *c) {
  NATIVE_HOOK(0x507e90u) REGS; LOADALL;
L_00507e90:;
  /* 00507e90 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00507e92 mov eax, dword ptr [edx + 0x88] */ { const u32 m_ = (u32)(edx + 0x88u); eax = (u32)(M32(m_)); }
  /* 00507e98 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507e9a mov byte ptr [edx + 0x40], 0 */ { const u32 m_ = (u32)(edx + 0x40u); M8(m_) = (u8)(0x0u); }
  /* 00507e9e je 0x507ec7 */ if (ZF_) goto L_00507ec7;
  /* 00507ea0 cmp dword ptr [0x7a6d34], edx */ { const u32 m_ = (u32)(0x7a6d34u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00507ea6 jne 0x507eb2 */ if (!ZF_) goto L_00507eb2;
  /* 00507ea8 mov dword ptr [0x7a6d3c], 0 */ { const u32 m_ = (u32)(0x7a6d3cu); M32(m_) = (u32)(0x0u); }
L_00507eb2:;
  /* 00507eb2 lea ecx, [edx + 0x90] */ ecx = (u32)((u32)(edx + 0x90u));
  /* 00507eb8 call 0x523340 */ esp -= 4; M32(esp) = 0x507ebdu; SAVEALL; F_00523340(c); ABI_CHECK(0x523340u, 0x507eb8u); RETCHK(0x507ebdu, 0x507eb8u); LOADALL;
  /* 00507ebd mov dword ptr [edx + 0x88], 0 */ { const u32 m_ = (u32)(edx + 0x88u); M32(m_) = (u32)(0x0u); }
L_00507ec7:;
  /* 00507ec7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00507ed0(CPU *c) {
  NATIVE_HOOK(0x507ed0u) REGS; LOADALL;
L_00507ed0:;
  /* 00507ed0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507ed1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507ed3 call 0x518bb0 */ esp -= 4; M32(esp) = 0x507ed8u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x507ed3u); RETCHK(0x507ed8u, 0x507ed3u); LOADALL;
  /* 00507ed8 call 0x5180e0 */ esp -= 4; M32(esp) = 0x507eddu; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x507ed8u); RETCHK(0x507eddu, 0x507ed8u); LOADALL;
  /* 00507edd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00507edf call 0x508d10 */ esp -= 4; M32(esp) = 0x507ee4u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x507edfu); RETCHK(0x507ee4u, 0x507edfu); LOADALL;
  /* 00507ee4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507ee6 je 0x507ef0 */ if (ZF_) goto L_00507ef0;
  /* 00507ee8 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00507eea mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00507eec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507eed jmp dword ptr [edx + 0x68] */ { const u32 m_ = (u32)(edx + 0x68u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00507ef0:;
  /* 00507ef0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507ef1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00507f00(CPU *c) {
  NATIVE_HOOK(0x507f00u) REGS; LOADALL;
L_00507f00:;
  /* 00507f00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507f01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507f03 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507f06 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507f07 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507f08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507f09 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00507f0c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00507f0e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507f0f call 0x507650 */ esp -= 4; M32(esp) = 0x507f14u; SAVEALL; F_00507650(c); ABI_CHECK(0x507650u, 0x507f0fu); RETCHK(0x507f14u, 0x507f0fu); LOADALL;
  /* 00507f14 mov esi, eax */ { esi = (u32)(eax); }
  /* 00507f16 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507f18 je 0x507f3a */ if (ZF_) goto L_00507f3a;
  /* 00507f1a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00507f1c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507f1e call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507f21u; SAVEALL; call_ind(c, t_); RETCHK(0x507f21u, 0x507f1eu); LOADALL; }
  /* 00507f21 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507f23 je 0x507f6a */ if (ZF_) goto L_00507f6a;
  /* 00507f25 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507f28 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00507f2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507f2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507f2c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507f2e call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507f31u; SAVEALL; call_ind(c, t_); RETCHK(0x507f31u, 0x507f2eu); LOADALL; }
  /* 00507f31 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507f32 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507f33 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507f34 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507f36 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507f37 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00507f3a:;
  /* 00507f3a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507f3d mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 00507f40 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00507f43 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507f45 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 00507f4c mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00507f4f je 0x507f59 */ if (ZF_) goto L_00507f59;
  /* 00507f51 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00507f54 call 0x508540 */ esp -= 4; M32(esp) = 0x507f59u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x507f54u); RETCHK(0x507f59u, 0x507f54u); LOADALL;
L_00507f59:;
  /* 00507f59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507f5a call 0x508500 */ esp -= 4; M32(esp) = 0x507f5fu; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x507f5au); RETCHK(0x507f5fu, 0x507f5au); LOADALL;
  /* 00507f5f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507f61 jne 0x507f6a */ if (!ZF_) goto L_00507f6a;
  /* 00507f63 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00507f65 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00507f67 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507f6au; SAVEALL; call_ind(c, t_); RETCHK(0x507f6au, 0x507f67u); LOADALL; }
L_00507f6a:;
  /* 00507f6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507f6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507f6c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507f6d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507f6f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507f70 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00507f80(CPU *c) {
  NATIVE_HOOK(0x507f80u) REGS; LOADALL;
L_00507f80:;
  /* 00507f80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507f81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507f83 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507f86 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507f87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507f88 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507f89 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00507f8c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00507f8e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507f8f call 0x507650 */ esp -= 4; M32(esp) = 0x507f94u; SAVEALL; F_00507650(c); ABI_CHECK(0x507650u, 0x507f8fu); RETCHK(0x507f94u, 0x507f8fu); LOADALL;
  /* 00507f94 mov esi, eax */ { esi = (u32)(eax); }
  /* 00507f96 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507f98 je 0x507fba */ if (ZF_) goto L_00507fba;
  /* 00507f9a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00507f9c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507f9e call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507fa1u; SAVEALL; call_ind(c, t_); RETCHK(0x507fa1u, 0x507f9eu); LOADALL; }
  /* 00507fa1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507fa3 je 0x507fd9 */ if (ZF_) goto L_00507fd9;
  /* 00507fa5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507fa8 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00507faa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507fab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507fac mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507fae call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507fb1u; SAVEALL; call_ind(c, t_); RETCHK(0x507fb1u, 0x507faeu); LOADALL; }
  /* 00507fb1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507fb2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507fb3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507fb4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507fb6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507fb7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00507fba:;
  /* 00507fba mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507fbd mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 00507fc0 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00507fc3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507fc5 mov dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x1u); }
  /* 00507fcc mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00507fcf je 0x507fd9 */ if (ZF_) goto L_00507fd9;
  /* 00507fd1 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00507fd4 call 0x508540 */ esp -= 4; M32(esp) = 0x507fd9u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x507fd4u); RETCHK(0x507fd9u, 0x507fd4u); LOADALL;
L_00507fd9:;
  /* 00507fd9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507fda pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507fdb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507fdc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507fde pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507fdf ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00507ff0(CPU *c) {
  NATIVE_HOOK(0x507ff0u) REGS; LOADALL;
L_00507ff0:;
  /* 00507ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507ff3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507ff4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507ff5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507ff6 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00507ff9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507ffa mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00507ffc call 0x507650 */ esp -= 4; M32(esp) = 0x508001u; SAVEALL; F_00507650(c); ABI_CHECK(0x507650u, 0x507ffcu); RETCHK(0x508001u, 0x507ffcu); LOADALL;
  /* 00508001 mov esi, eax */ { esi = (u32)(eax); }
  /* 00508003 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508005 je 0x508021 */ if (ZF_) goto L_00508021;
  /* 00508007 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00508009 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050800b call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50800eu; SAVEALL; call_ind(c, t_); RETCHK(0x50800eu, 0x50800bu); LOADALL; }
  /* 0050800e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508010 je 0x508021 */ if (ZF_) goto L_00508021;
  /* 00508012 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508015 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00508017 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508018 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508019 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050801b call dword ptr [edx + 0xb4] */ { const u32 m_ = (u32)(edx + 0xb4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508021u; SAVEALL; call_ind(c, t_); RETCHK(0x508021u, 0x50801bu); LOADALL; }
L_00508021:;
  /* 00508021 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508022 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508023 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508024 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508025 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00508030(CPU *c) {
  NATIVE_HOOK(0x508030u) REGS; LOADALL;
L_00508030:;
  /* 00508030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508033 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508036 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508037 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508038 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508039 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0050803c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050803e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050803f call 0x507650 */ esp -= 4; M32(esp) = 0x508044u; SAVEALL; F_00507650(c); ABI_CHECK(0x507650u, 0x50803fu); RETCHK(0x508044u, 0x50803fu); LOADALL;
  /* 00508044 mov esi, eax */ { esi = (u32)(eax); }
  /* 00508046 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508048 je 0x508071 */ if (ZF_) goto L_00508071;
  /* 0050804a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050804c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050804e call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508051u; SAVEALL; call_ind(c, t_); RETCHK(0x508051u, 0x50804eu); LOADALL; }
  /* 00508051 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508053 je 0x508090 */ if (ZF_) goto L_00508090;
  /* 00508055 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508058 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050805a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050805b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050805c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050805e call dword ptr [edx + 0x74] */ { const u32 m_ = (u32)(edx + 0x74u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508061u; SAVEALL; call_ind(c, t_); RETCHK(0x508061u, 0x50805eu); LOADALL; }
  /* 00508061 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00508063 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00508065 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508068u; SAVEALL; call_ind(c, t_); RETCHK(0x508068u, 0x508065u); LOADALL; }
  /* 00508068 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508069 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050806a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050806b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050806d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050806e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00508071:;
  /* 00508071 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00508074 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508076 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508079 mov dword ptr [ebp - 0x18], 0x15 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x15u); }
  /* 00508080 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00508083 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00508086 je 0x508090 */ if (ZF_) goto L_00508090;
  /* 00508088 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050808b call 0x508540 */ esp -= 4; M32(esp) = 0x508090u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x50808bu); RETCHK(0x508090u, 0x50808bu); LOADALL;
L_00508090:;
  /* 00508090 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508091 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508092 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508093 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508095 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508096 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005080a0(CPU *c) {
  NATIVE_HOOK(0x5080a0u) REGS; LOADALL;
L_005080a0:;
  /* 005080a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005080a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005080a3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005080a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005080a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005080a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005080a9 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005080ac mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005080ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005080af call 0x507650 */ esp -= 4; M32(esp) = 0x5080b4u; SAVEALL; F_00507650(c); ABI_CHECK(0x507650u, 0x5080afu); RETCHK(0x5080b4u, 0x5080afu); LOADALL;
  /* 005080b4 mov esi, eax */ { esi = (u32)(eax); }
  /* 005080b6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005080b8 je 0x5080da */ if (ZF_) goto L_005080da;
  /* 005080ba mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005080bc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005080be call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5080c1u; SAVEALL; call_ind(c, t_); RETCHK(0x5080c1u, 0x5080beu); LOADALL; }
  /* 005080c1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005080c3 je 0x5080f9 */ if (ZF_) goto L_005080f9;
  /* 005080c5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005080c8 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005080ca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005080cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005080cc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005080ce call dword ptr [edx + 0x78] */ { const u32 m_ = (u32)(edx + 0x78u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5080d1u; SAVEALL; call_ind(c, t_); RETCHK(0x5080d1u, 0x5080ceu); LOADALL; }
  /* 005080d1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005080d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005080d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005080d4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005080d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005080d7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005080da:;
  /* 005080da mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005080dd mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 005080e0 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005080e3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005080e5 mov dword ptr [ebp - 0x18], 0x16 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x16u); }
  /* 005080ec mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 005080ef je 0x5080f9 */ if (ZF_) goto L_005080f9;
  /* 005080f1 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005080f4 call 0x508540 */ esp -= 4; M32(esp) = 0x5080f9u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x5080f4u); RETCHK(0x5080f9u, 0x5080f4u); LOADALL;
L_005080f9:;
  /* 005080f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005080fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005080fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005080fc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005080fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005080ff ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00508110(CPU *c) {
  NATIVE_HOOK(0x508110u) REGS; LOADALL;
L_00508110:;
  /* 00508110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508113 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508114 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508115 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508116 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00508119 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050811a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050811c call 0x507650 */ esp -= 4; M32(esp) = 0x508121u; SAVEALL; F_00507650(c); ABI_CHECK(0x507650u, 0x50811cu); RETCHK(0x508121u, 0x50811cu); LOADALL;
  /* 00508121 mov esi, eax */ { esi = (u32)(eax); }
  /* 00508123 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508125 je 0x508141 */ if (ZF_) goto L_00508141;
  /* 00508127 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00508129 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050812b call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50812eu; SAVEALL; call_ind(c, t_); RETCHK(0x50812eu, 0x50812bu); LOADALL; }
  /* 0050812e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508130 je 0x508141 */ if (ZF_) goto L_00508141;
  /* 00508132 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508135 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00508137 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508138 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508139 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050813b call dword ptr [edx + 0xb8] */ { const u32 m_ = (u32)(edx + 0xb8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508141u; SAVEALL; call_ind(c, t_); RETCHK(0x508141u, 0x50813bu); LOADALL; }
L_00508141:;
  /* 00508141 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508142 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508143 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508144 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508145 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00508150(CPU *c) {
  NATIVE_HOOK(0x508150u) REGS; LOADALL;
L_00508150:;
  /* 00508150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508153 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508156 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508157 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00508159 mov al, byte ptr [edi + 0x178] */ { const u32 m_ = (u32)(edi + 0x178u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050815f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508161 je 0x50816c */ if (ZF_) goto L_0050816c;
  /* 00508163 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00508165 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508166 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508168 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508169 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050816c:;
  /* 0050816c lea eax, [edi + 0xec] */ eax = (u32)((u32)(edi + 0xecu));
  /* 00508172 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00508175 lea ecx, [edi + 0x108] */ ecx = (u32)((u32)(edi + 0x108u));
  /* 0050817b lea edx, [edi + 0xb4] */ edx = (u32)((u32)(edi + 0xb4u));
  /* 00508181 lea eax, [edi + 0xd0] */ eax = (u32)((u32)(edi + 0xd0u));
  /* 00508187 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0050818a mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 0050818d mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00508190 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508193 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508194 lea ecx, [edi + 0x140] */ ecx = (u32)((u32)(edi + 0x140u));
  /* 0050819a lea edx, [edi + 0x15c] */ edx = (u32)((u32)(edi + 0x15cu));
  /* 005081a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005081a1 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 005081a4 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 005081a7 mov esi, dword ptr [ebp + eax*4 - 0x1c] */ { const u32 m_ = (u32)(ebp + eax * 4u + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 005081ab mov byte ptr [edi + 0x178], 1 */ { const u32 m_ = (u32)(edi + 0x178u); M8(m_) = (u8)(0x1u); }
  /* 005081b2 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005081b5 xor bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005081b7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005081b9 je 0x50821d */ if (ZF_) goto L_0050821d;
  /* 005081bb call 0x518bb0 */ esp -= 4; M32(esp) = 0x5081c0u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5081bbu); RETCHK(0x5081c0u, 0x5081bbu); LOADALL;
  /* 005081c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005081c1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005081c4 call 0x5180e0 */ esp -= 4; M32(esp) = 0x5081c9u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x5081c4u); RETCHK(0x5081c9u, 0x5081c4u); LOADALL;
  /* 005081c9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005081cb call 0x5075d0 */ esp -= 4; M32(esp) = 0x5081d0u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5081cbu); RETCHK(0x5081d0u, 0x5081cbu); LOADALL;
  /* 005081d0 mov esi, eax */ { esi = (u32)(eax); }
  /* 005081d2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005081d4 je 0x50821d */ if (ZF_) goto L_0050821d;
  /* 005081d6 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005081d8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005081da call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5081ddu; SAVEALL; call_ind(c, t_); RETCHK(0x5081ddu, 0x5081dau); LOADALL; }
  /* 005081dd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005081df je 0x508210 */ if (ZF_) goto L_00508210;
  /* 005081e1 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005081e3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005081e5 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5081e8u; SAVEALL; call_ind(c, t_); RETCHK(0x5081e8u, 0x5081e5u); LOADALL; }
  /* 005081e8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005081ea je 0x508210 */ if (ZF_) goto L_00508210;
  /* 005081ec mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005081ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005081f0 call 0x5179b0 */ esp -= 4; M32(esp) = 0x5081f5u; SAVEALL; F_005179b0(c); ABI_CHECK(0x5179b0u, 0x5081f0u); RETCHK(0x5081f5u, 0x5081f0u); LOADALL;
  /* 005081f5 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005081f7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005081f9 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5081fcu; SAVEALL; call_ind(c, t_); RETCHK(0x5081fcu, 0x5081f9u); LOADALL; }
  /* 005081fc mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005081fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005081ff mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00508201 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508202 mov byte ptr [edi + 0x178], 0 */ { const u32 m_ = (u32)(edi + 0x178u); M8(m_) = (u8)(0x0u); }
  /* 00508209 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050820a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050820c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050820d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00508210:;
  /* 00508210 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508213 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508214 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00508216 call 0x508150 */ esp -= 4; M32(esp) = 0x50821bu; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x508216u); RETCHK(0x50821bu, 0x508216u); LOADALL;
  /* 0050821b mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
L_0050821d:;
  /* 0050821d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050821e mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00508220 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508221 mov byte ptr [edi + 0x178], 0 */ { const u32 m_ = (u32)(edi + 0x178u); M8(m_) = (u8)(0x0u); }
  /* 00508228 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508229 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050822b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050822c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00508230(CPU *c) {
  NATIVE_HOOK(0x508230u) REGS; LOADALL;
L_00508230:;
  /* 00508230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508233 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508236 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508237 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508238 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0050823b lea eax, [edi - 8] */ eax = (u32)((u32)(edi + 0xfffffff8u));
  /* 0050823e cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508241 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00508243 ja 0x5082a9 */ if (!(CF_|ZF_)) goto L_005082a9;
  /* 00508245 movzx eax, byte ptr [eax + 0x5082f4] */ { const u32 m_ = (u32)(eax + 0x5082f4u); eax = (u32)(M8(m_)); }
  /* 0050824c jmp dword ptr [eax*4 + 0x5082d4] */ { const u32 m_ = (u32)(eax * 4u + 0x5082d4u); u32 t_ = M32(m_); switch (t_) { case 0x508253u: goto L_00508253; case 0x508257u: goto L_00508257; case 0x50825bu: goto L_0050825b; case 0x50825fu: goto L_0050825f; case 0x508263u: goto L_00508263; case 0x508267u: goto L_00508267; case 0x508292u: goto L_00508292; case 0x5082a9u: goto L_005082a9; default: SAVEALL; call_ind(c, t_); return; } }
L_00508253:;
  /* 00508253 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00508255 jmp 0x508294 */ goto L_00508294;
L_00508257:;
  /* 00508257 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00508259 jmp 0x508294 */ goto L_00508294;
L_0050825b:;
  /* 0050825b push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0050825d jmp 0x508294 */ goto L_00508294;
L_0050825f:;
  /* 0050825f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00508261 jmp 0x508294 */ goto L_00508294;
L_00508263:;
  /* 00508263 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00508265 jmp 0x508294 */ goto L_00508294;
L_00508267:;
  /* 00508267 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00508269 call dword ptr [0x62e4dc] */ { const u32 m_ = (u32)(0x62e4dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50826fu; SAVEALL; call_ind(c, t_); RETCHK(0x50826fu, 0x508269u); LOADALL; }
  /* 0050826f movsx ecx, ax */ { ecx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 00508272 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508274 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00508276 jns 0x508287 */ if (!SF_) goto L_00508287;
  /* 00508278 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0050827a call 0x508150 */ esp -= 4; M32(esp) = 0x50827fu; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x50827au); RETCHK(0x50827fu, 0x50827au); LOADALL;
  /* 0050827f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508281 jne 0x50829f */ if (!ZF_) goto L_0050829f;
  /* 00508283 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00508285 jmp 0x508294 */ goto L_00508294;
L_00508287:;
  /* 00508287 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00508289 call 0x508150 */ esp -= 4; M32(esp) = 0x50828eu; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x508289u); RETCHK(0x50828eu, 0x508289u); LOADALL;
  /* 0050828e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508290 jne 0x50829f */ if (!ZF_) goto L_0050829f;
L_00508292:;
  /* 00508292 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
L_00508294:;
  /* 00508294 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00508296 call 0x508150 */ esp -= 4; M32(esp) = 0x50829bu; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x508296u); RETCHK(0x50829bu, 0x508296u); LOADALL;
  /* 0050829b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050829d je 0x5082a9 */ if (ZF_) goto L_005082a9;
L_0050829f:;
  /* 0050829f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005082a0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005082a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005082a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005082a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005082a6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005082a9:;
  /* 005082a9 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005082ac mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005082af mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 005082b2 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005082b5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005082b7 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 005082ba mov dword ptr [ebp - 0x18], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x2u); }
  /* 005082c1 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 005082c4 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 005082c7 call 0x508540 */ esp -= 4; M32(esp) = 0x5082ccu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x5082c7u); RETCHK(0x5082ccu, 0x5082c7u); LOADALL;
  /* 005082cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005082cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005082ce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005082d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005082d1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00508320(CPU *c) {
  NATIVE_HOOK(0x508320u) REGS; LOADALL;
L_00508320:;
  /* 00508320 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508321 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508323 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508329 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050832c mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050832f mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00508332 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00508335 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00508338 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0050833b mov dword ptr [ebp - 0x18], 3 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3u); }
  /* 00508342 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00508345 call 0x508540 */ esp -= 4; M32(esp) = 0x50834au; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x508345u); RETCHK(0x50834au, 0x508345u); LOADALL;
  /* 0050834a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050834c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050834d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00508350(CPU *c) {
  NATIVE_HOOK(0x508350u) REGS; LOADALL;
L_00508350:;
  /* 00508350 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508351 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508353 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508359 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050835c mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050835f mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00508362 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00508365 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00508368 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0050836b mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 00508372 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00508375 call 0x508540 */ esp -= 4; M32(esp) = 0x50837au; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x508375u); RETCHK(0x50837au, 0x508375u); LOADALL;
  /* 0050837a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050837c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050837d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00508380(CPU *c) {
  NATIVE_HOOK(0x508380u) REGS; LOADALL;
L_00508380:;
  /* 00508380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508383 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508386 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508389 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050838b mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050838e lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00508391 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508392 mov dword ptr [ebp - 0x18], 0x13 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x13u); }
  /* 00508399 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0050839c call dword ptr [edx + 0xcc] */ { const u32 m_ = (u32)(edx + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5083a2u; SAVEALL; call_ind(c, t_); RETCHK(0x5083a2u, 0x50839cu); LOADALL; }
  /* 005083a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005083a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005083a5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005083b0(CPU *c) {
  NATIVE_HOOK(0x5083b0u) REGS; LOADALL;
L_005083b0:;
  /* 005083b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005083b1 mov esi, dword ptr [ecx + 0x64] */ { const u32 m_ = (u32)(ecx + 0x64u); esi = (u32)(M32(m_)); }
  /* 005083b4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005083b5 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 005083b7 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005083b9 je 0x5083d5 */ if (ZF_) goto L_005083d5;
  /* 005083bb jmp 0x5083c0 */ goto L_005083c0;
L_005083c0:;
  /* 005083c0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005083c3 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005083c6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005083c8 call dword ptr [edx + 0xa8] */ { const u32 m_ = (u32)(edx + 0xa8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5083ceu; SAVEALL; call_ind(c, t_); RETCHK(0x5083ceu, 0x5083c8u); LOADALL; }
  /* 005083ce mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 005083d1 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005083d3 jne 0x5083c0 */ if (!ZF_) goto L_005083c0;
L_005083d5:;
  /* 005083d5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005083d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005083d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005083e0(CPU *c) {
  NATIVE_HOOK(0x5083e0u) REGS; LOADALL;
L_005083e0:;
  /* 005083e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005083e1 mov esi, dword ptr [ecx + 0x64] */ { const u32 m_ = (u32)(ecx + 0x64u); esi = (u32)(M32(m_)); }
  /* 005083e4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005083e5 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 005083e7 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005083e9 je 0x508405 */ if (ZF_) goto L_00508405;
  /* 005083eb jmp 0x5083f0 */ goto L_005083f0;
L_005083f0:;
  /* 005083f0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005083f3 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005083f6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005083f8 call dword ptr [edx + 0xac] */ { const u32 m_ = (u32)(edx + 0xacu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5083feu; SAVEALL; call_ind(c, t_); RETCHK(0x5083feu, 0x5083f8u); LOADALL; }
  /* 005083fe mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00508401 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508403 jne 0x5083f0 */ if (!ZF_) goto L_005083f0;
L_00508405:;
  /* 00508405 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508406 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508407 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508410(CPU *c) {
  NATIVE_HOOK(0x508410u) REGS; LOADALL;
L_00508410:;
  /* 00508410 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508411 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00508413 mov al, byte ptr [ebx + 0x3e] */ { const u32 m_ = (u32)(ebx + 0x3eu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00508416 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508418 je 0x50844f */ if (ZF_) goto L_0050844f;
  /* 0050841a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0050841c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050841d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050841e call dword ptr [eax + 0xd4] */ { const u32 m_ = (u32)(eax + 0xd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508424u; SAVEALL; call_ind(c, t_); RETCHK(0x508424u, 0x50841eu); LOADALL; }
  /* 00508424 mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 00508427 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 00508429 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050842b je 0x508442 */ if (ZF_) goto L_00508442;
  /* 0050842d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00508430:;
  /* 00508430 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00508433 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508435 je 0x50843c */ if (ZF_) goto L_0050843c;
  /* 00508437 call 0x508410 */ esp -= 4; M32(esp) = 0x50843cu; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x508437u); RETCHK(0x50843cu, 0x508437u); LOADALL;
L_0050843c:;
  /* 0050843c mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0050843e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508440 jne 0x508430 */ if (!ZF_) goto L_00508430;
L_00508442:;
  /* 00508442 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00508444 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508445 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508446 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00508448 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508449 jmp dword ptr [edx + 0xc8] */ { const u32 m_ = (u32)(edx + 0xc8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0050844f:;
  /* 0050844f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508450 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508460(CPU *c) {
  NATIVE_HOOK(0x508460u) REGS; LOADALL;
L_00508460:;
  /* 00508460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508461 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00508463 mov al, byte ptr [esi + 0x3e] */ { const u32 m_ = (u32)(esi + 0x3eu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00508466 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508468 je 0x508493 */ if (ZF_) goto L_00508493;
  /* 0050846a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050846c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050846d call dword ptr [eax + 0xd8] */ { const u32 m_ = (u32)(eax + 0xd8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508473u; SAVEALL; call_ind(c, t_); RETCHK(0x508473u, 0x50846du); LOADALL; }
  /* 00508473 mov edi, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); edi = (u32)(M32(m_)); }
  /* 00508476 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 00508478 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050847a je 0x508492 */ if (ZF_) goto L_00508492;
  /* 0050847c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00508480:;
  /* 00508480 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00508483 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508485 je 0x50848c */ if (ZF_) goto L_0050848c;
  /* 00508487 call 0x508460 */ esp -= 4; M32(esp) = 0x50848cu; SAVEALL; F_00508460(c); ABI_CHECK(0x508460u, 0x508487u); RETCHK(0x50848cu, 0x508487u); LOADALL;
L_0050848c:;
  /* 0050848c mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0050848e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508490 jne 0x508480 */ if (!ZF_) goto L_00508480;
L_00508492:;
  /* 00508492 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00508493:;
  /* 00508493 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508494 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005084a0(CPU *c) {
  NATIVE_HOOK(0x5084a0u) REGS; LOADALL;
L_005084a0:;
  /* 005084a0 mov al, byte ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005084a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005084b0(CPU *c) {
  NATIVE_HOOK(0x5084b0u) REGS; LOADALL;
L_005084b0:;
  /* 005084b0 call 0x518bb0 */ esp -= 4; M32(esp) = 0x5084b5u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5084b0u); RETCHK(0x5084b5u, 0x5084b0u); LOADALL;
  /* 005084b5 call 0x5180e0 */ esp -= 4; M32(esp) = 0x5084bau; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x5084b5u); RETCHK(0x5084bau, 0x5084b5u); LOADALL;
  /* 005084ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005084bb call 0x508f50 */ esp -= 4; M32(esp) = 0x5084c0u; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x5084bbu); RETCHK(0x5084c0u, 0x5084bbu); LOADALL;
  /* 005084c0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005084c2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005084c4 je 0x5084e0 */ if (ZF_) goto L_005084e0;
  /* 005084c6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005084c8 mov eax, esi */ { eax = (u32)(esi); }
  /* 005084ca je 0x5084dd */ if (ZF_) goto L_005084dd;
  /* 005084cc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005084d0:;
  /* 005084d0 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005084d2 je 0x5084e0 */ if (ZF_) goto L_005084e0;
  /* 005084d4 call 0x507890 */ esp -= 4; M32(esp) = 0x5084d9u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x5084d4u); RETCHK(0x5084d9u, 0x5084d4u); LOADALL;
  /* 005084d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005084db jne 0x5084d0 */ if (!ZF_) goto L_005084d0;
L_005084dd:;
  /* 005084dd xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005084df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005084e0:;
  /* 005084e0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005084e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005084f0(CPU *c) {
  NATIVE_HOOK(0x5084f0u) REGS; LOADALL;
L_005084f0:;
  /* 005084f0 mov al, byte ptr [eax + 0x3d] */ { const u32 m_ = (u32)(eax + 0x3du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005084f3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508500(CPU *c) {
  NATIVE_HOOK(0x508500u) REGS; LOADALL;
L_00508500:;
  /* 00508500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508503 call 0x518bb0 */ esp -= 4; M32(esp) = 0x508508u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x508503u); RETCHK(0x508508u, 0x508503u); LOADALL;
  /* 00508508 call 0x5180e0 */ esp -= 4; M32(esp) = 0x50850du; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x508508u); RETCHK(0x50850du, 0x508508u); LOADALL;
  /* 0050850d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050850f jne 0x508517 */ if (!ZF_) goto L_00508517;
  /* 00508511 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00508513 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508514 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00508517:;
  /* 00508517 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00508519 call 0x508d10 */ esp -= 4; M32(esp) = 0x50851eu; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x508519u); RETCHK(0x50851eu, 0x508519u); LOADALL;
  /* 0050851e sub eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00508521 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00508523 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00508525 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00508526 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508527 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00508530(CPU *c) {
  NATIVE_HOOK(0x508530u) REGS; LOADALL;
L_00508530:;
  /* 00508530 mov al, byte ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00508533 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508540(CPU *c) {
  NATIVE_HOOK(0x508540u) REGS; LOADALL;
L_00508540:;
  /* 00508540 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508542 jne 0x508547 */ if (!ZF_) goto L_00508547;
  /* 00508544 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00508546 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00508547:;
  /* 00508547 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00508549 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050854a call dword ptr [eax + 0xcc] */ { const u32 m_ = (u32)(eax + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508550u; SAVEALL; call_ind(c, t_); RETCHK(0x508550u, 0x50854au); LOADALL; }
  /* 00508550 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508560(CPU *c) {
  NATIVE_HOOK(0x508560u) REGS; LOADALL;
L_00508560:;
  /* 00508560 mov edx, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); edx = (u32)(M32(m_)); }
  /* 00508566 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508568 jne 0x50856d */ if (!ZF_) goto L_0050856d;
  /* 0050856a xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050856c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050856d:;
  /* 0050856d mov edx, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); edx = (u32)(M32(m_)); }
  /* 00508570 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508571 mov esi, dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); esi = (u32)(M32(m_)); }
  /* 00508574 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508576 ja 0x50857a */ if (!(CF_|ZF_)) goto L_0050857a;
  /* 00508578 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_0050857a:;
  /* 0050857a mov esi, dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); esi = (u32)(M32(m_)); }
  /* 0050857d mov edx, dword ptr [esi + edx*4] */ { const u32 m_ = (u32)(esi + edx * 4u); edx = (u32)(M32(m_)); }
  /* 00508580 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 00508582 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00508584 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00508587 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 0050858a mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050858d mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 00508590 mov esi, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); esi = (u32)(M32(m_)); }
  /* 00508593 mov dword ptr [ecx + 0xc], esi */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(esi); }
  /* 00508596 mov esi, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); esi = (u32)(M32(m_)); }
  /* 00508599 mov dword ptr [ecx + 0x10], esi */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(esi); }
  /* 0050859c mov edx, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0050859f mov dword ptr [ecx + 0x14], edx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(edx); }
  /* 005085a2 mov ecx, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ecx = (u32)(M32(m_)); }
  /* 005085a8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005085aa je 0x5085d1 */ if (ZF_) goto L_005085d1;
  /* 005085ac mov edx, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); edx = (u32)(M32(m_)); }
  /* 005085af mov esi, dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); esi = (u32)(M32(m_)); }
  /* 005085b2 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005085b3 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005085b5 mov dword ptr [eax + 0x7c], edx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(edx); }
  /* 005085b8 ja 0x5085c1 */ if (!(CF_|ZF_)) goto L_005085c1;
  /* 005085ba mov dword ptr [eax + 0x7c], 0 */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(0x0u); }
L_005085c1:;
  /* 005085c1 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005085c2 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 005085c8 jne 0x5085d1 */ if (!ZF_) goto L_005085d1;
  /* 005085ca mov dword ptr [eax + 0x7c], 0 */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(0x0u); }
L_005085d1:;
  /* 005085d1 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005085d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005085d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005085e0(CPU *c) {
  NATIVE_HOOK(0x5085e0u) REGS; LOADALL;
L_005085e0:;
  /* 005085e0 mov ecx, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ecx = (u32)(M32(m_)); }
  /* 005085e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005085e7 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005085e9 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005085eb je 0x508622 */ if (ZF_) goto L_00508622;
  /* 005085ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005085ee mov edi, edi */ { edi = (u32)(edi); }
L_005085f0:;
  /* 005085f0 mov ecx, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ecx = (u32)(M32(m_)); }
  /* 005085f6 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005085f8 je 0x508619 */ if (ZF_) goto L_00508619;
  /* 005085fa mov edx, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); edx = (u32)(M32(m_)); }
  /* 005085fd mov edi, dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); edi = (u32)(M32(m_)); }
  /* 00508600 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00508601 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508603 mov dword ptr [eax + 0x7c], edx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(edx); }
  /* 00508606 ja 0x50860b */ if (!(CF_|ZF_)) goto L_0050860b;
  /* 00508608 mov dword ptr [eax + 0x7c], esi */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(esi); }
L_0050860b:;
  /* 0050860b dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0050860c cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050860e mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 00508614 jne 0x508619 */ if (!ZF_) goto L_00508619;
  /* 00508616 mov dword ptr [eax + 0x7c], esi */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(esi); }
L_00508619:;
  /* 00508619 cmp dword ptr [eax + 0x80], esi */ { const u32 m_ = (u32)(eax + 0x80u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050861f jne 0x5085f0 */ if (!ZF_) goto L_005085f0;
  /* 00508621 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00508622:;
  /* 00508622 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508623 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508630(CPU *c) {
  NATIVE_HOOK(0x508630u) REGS; LOADALL;
L_00508630:;
  /* 00508630 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508631 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508633 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508636 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508637 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0050863a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050863b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050863c mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050863e cmp dword ptr [edi + 0x88], 1 */ { const u32 m_ = (u32)(edi + 0x88u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508645 jne 0x508656 */ if (!ZF_) goto L_00508656;
  /* 00508647 mov eax, dword ptr [edi + 0x90] */ { const u32 m_ = (u32)(edi + 0x90u); eax = (u32)(M32(m_)); }
  /* 0050864d lea ecx, [edi + 0x90] */ ecx = (u32)((u32)(edi + 0x90u));
  /* 00508653 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508654 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508656u; SAVEALL; call_ind(c, t_); RETCHK(0x508656u, 0x508654u); LOADALL; }
L_00508656:;
  /* 00508656 mov eax, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); eax = (u32)(M32(m_)); }
  /* 00508659 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0050865b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050865d je 0x508687 */ if (ZF_) goto L_00508687;
  /* 0050865f nop */ ;
L_00508660:;
  /* 00508660 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00508663 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00508665 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508668u; SAVEALL; call_ind(c, t_); RETCHK(0x508668u, 0x508665u); LOADALL; }
  /* 00508668 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050866a je 0x508680 */ if (ZF_) goto L_00508680;
  /* 0050866c mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050866f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00508671 call 0x5084f0 */ esp -= 4; M32(esp) = 0x508676u; SAVEALL; F_005084f0(c); ABI_CHECK(0x5084f0u, 0x508671u); RETCHK(0x508676u, 0x508671u); LOADALL;
  /* 00508676 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508678 je 0x508680 */ if (ZF_) goto L_00508680;
  /* 0050867a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050867c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050867d call dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508680u; SAVEALL; call_ind(c, t_); RETCHK(0x508680u, 0x50867du); LOADALL; }
L_00508680:;
  /* 00508680 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00508682 cmp esi, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508685 jne 0x508660 */ if (!ZF_) goto L_00508660;
L_00508687:;
  /* 00508687 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050868a mov eax, edi */ { eax = (u32)(edi); }
  /* 0050868c call 0x508560 */ esp -= 4; M32(esp) = 0x508691u; SAVEALL; F_00508560(c); ABI_CHECK(0x508560u, 0x50868cu); RETCHK(0x508691u, 0x50868cu); LOADALL;
  /* 00508691 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508693 je 0x5086b1 */ if (ZF_) goto L_005086b1;
L_00508695:;
  /* 00508695 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00508697 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050869a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050869b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050869d call dword ptr [edx + 0xcc] */ { const u32 m_ = (u32)(edx + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5086a3u; SAVEALL; call_ind(c, t_); RETCHK(0x5086a3u, 0x50869du); LOADALL; }
  /* 005086a3 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005086a6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005086a8 call 0x508560 */ esp -= 4; M32(esp) = 0x5086adu; SAVEALL; F_00508560(c); ABI_CHECK(0x508560u, 0x5086a8u); RETCHK(0x5086adu, 0x5086a8u); LOADALL;
  /* 005086ad test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005086af jne 0x508695 */ if (!ZF_) goto L_00508695;
L_005086b1:;
  /* 005086b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005086b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005086b3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005086b4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005086b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005086b7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005086c0(CPU *c) {
  NATIVE_HOOK(0x5086c0u) REGS; LOADALL;
L_005086c0:;
  /* 005086c0 mov ecx, dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); ecx = (u32)(M32(m_)); }
  /* 005086c6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005086c8 jne 0x5086cd */ if (!ZF_) goto L_005086cd;
  /* 005086ca xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005086cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005086cd:;
  /* 005086cd add eax, 0xd0 */ { u32 a_ = eax, b_ = 0xd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005086d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005086d3 call 0x518bb0 */ esp -= 4; M32(esp) = 0x5086d8u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5086d3u); RETCHK(0x5086d8u, 0x5086d3u); LOADALL;
  /* 005086d8 call 0x5180e0 */ esp -= 4; M32(esp) = 0x5086ddu; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x5086d8u); RETCHK(0x5086ddu, 0x5086d8u); LOADALL;
  /* 005086dd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005086df call 0x5075d0 */ esp -= 4; M32(esp) = 0x5086e4u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5086dfu); RETCHK(0x5086e4u, 0x5086dfu); LOADALL;
  /* 005086e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005086f0(CPU *c) {
  NATIVE_HOOK(0x5086f0u) REGS; LOADALL;
L_005086f0:;
  /* 005086f0 mov ecx, dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); ecx = (u32)(M32(m_)); }
  /* 005086f6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005086f8 jne 0x5086fd */ if (!ZF_) goto L_005086fd;
  /* 005086fa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005086fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005086fd:;
  /* 005086fd add eax, 0xec */ { u32 a_ = eax, b_ = 0xecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00508702 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508703 call 0x518bb0 */ esp -= 4; M32(esp) = 0x508708u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x508703u); RETCHK(0x508708u, 0x508703u); LOADALL;
  /* 00508708 call 0x5180e0 */ esp -= 4; M32(esp) = 0x50870du; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x508708u); RETCHK(0x50870du, 0x508708u); LOADALL;
  /* 0050870d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050870f call 0x5075d0 */ esp -= 4; M32(esp) = 0x508714u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x50870fu); RETCHK(0x508714u, 0x50870fu); LOADALL;
  /* 00508714 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508720(CPU *c) {
  NATIVE_HOOK(0x508720u) REGS; LOADALL;
L_00508720:;
  /* 00508720 mov ecx, dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); ecx = (u32)(M32(m_)); }
  /* 00508726 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508728 jne 0x50872d */ if (!ZF_) goto L_0050872d;
  /* 0050872a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050872c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050872d:;
  /* 0050872d add eax, 0x108 */ { u32 a_ = eax, b_ = 0x108u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00508732 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508733 call 0x518bb0 */ esp -= 4; M32(esp) = 0x508738u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x508733u); RETCHK(0x508738u, 0x508733u); LOADALL;
  /* 00508738 call 0x5180e0 */ esp -= 4; M32(esp) = 0x50873du; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x508738u); RETCHK(0x50873du, 0x508738u); LOADALL;
  /* 0050873d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050873f call 0x5075d0 */ esp -= 4; M32(esp) = 0x508744u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x50873fu); RETCHK(0x508744u, 0x50873fu); LOADALL;
  /* 00508744 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508750(CPU *c) {
  NATIVE_HOOK(0x508750u) REGS; LOADALL;
L_00508750:;
  /* 00508750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508753 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508756 push 0x41f00000 */ { u32 v_ = 0x41f00000u; esp -= 4; M32(esp) = v_; }
  /* 0050875b push 0x41f00000 */ { u32 v_ = 0x41f00000u; esp -= 4; M32(esp) = v_; }
  /* 00508760 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00508763 call 0x52ce60 */ esp -= 4; M32(esp) = 0x508768u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x508763u); RETCHK(0x508768u, 0x508763u); LOADALL;
  /* 00508768 fld dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); FPUSH((double)MF32(m_)); }
  /* 0050876e fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00508771 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00508773 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00508775 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00508778 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050877b fld dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); FPUSH((double)MF32(m_)); }
  /* 00508781 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00508784 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00508787 call 0x52ce60 */ esp -= 4; M32(esp) = 0x50878cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x508787u); RETCHK(0x50878cu, 0x508787u); LOADALL;
  /* 0050878c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050878e lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00508791 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508792 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00508794 mov dword ptr [esi + 0x17c], ebx */ { const u32 m_ = (u32)(esi + 0x17cu); M32(m_) = (u32)(ebx); }
  /* 0050879a call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50879du; SAVEALL; call_ind(c, t_); RETCHK(0x50879du, 0x50879au); LOADALL; }
  /* 0050879d fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 005087a0 fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005087a3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005087a6 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005087a9 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005087af fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005087b3 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005087b6 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005087b9 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005087bf fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005087c2 call 0x52ce60 */ esp -= 4; M32(esp) = 0x5087c7u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x5087c2u); RETCHK(0x5087c7u, 0x5087c2u); LOADALL;
  /* 005087c7 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005087c9 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005087cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005087cd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005087cf call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5087d2u; SAVEALL; call_ind(c, t_); RETCHK(0x5087d2u, 0x5087cfu); LOADALL; }
  /* 005087d2 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005087d4 jne 0x5088ab */ if (!ZF_) goto L_005088ab;
  /* 005087da lea eax, [ebx - 1] */ eax = (u32)((u32)(ebx + 0xffffffffu));
  /* 005087dd cmp eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005087e0 ja 0x50891a */ if (!(CF_|ZF_)) goto L_0050891a;
  /* 005087e6 jmp dword ptr [eax*4 + 0x50892c] */ { const u32 m_ = (u32)(eax * 4u + 0x50892cu); u32 t_ = M32(m_); switch (t_) { case 0x5087edu: goto L_005087ed; case 0x508802u: goto L_00508802; case 0x508817u: goto L_00508817; case 0x508834u: goto L_00508834; case 0x508851u: goto L_00508851; case 0x508865u: goto L_00508865; case 0x508888u: goto L_00508888; default: SAVEALL; call_ind(c, t_); return; } }
L_005087ed:;
  /* 005087ed mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005087f0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005087f2 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005087f5 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005087f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005087f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005087fb call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5087feu; SAVEALL; call_ind(c, t_); RETCHK(0x5087feu, 0x5087fbu); LOADALL; }
  /* 005087fe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508800 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508801 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00508802:;
  /* 00508802 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00508805 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00508808 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0050880b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050880d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050880e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00508810 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508813u; SAVEALL; call_ind(c, t_); RETCHK(0x508813u, 0x508810u); LOADALL; }
  /* 00508813 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508815 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508816 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00508817:;
  /* 00508817 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050881a call 0x40d9d0 */ esp -= 4; M32(esp) = 0x50881fu; SAVEALL; F_0040d9d0(c); ABI_CHECK(0x40d9d0u, 0x50881au); RETCHK(0x50881fu, 0x50881au); LOADALL;
  /* 0050881f fsubr dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00508822 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00508824 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00508827 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508828 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050882b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050882d call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508830u; SAVEALL; call_ind(c, t_); RETCHK(0x508830u, 0x50882du); LOADALL; }
  /* 00508830 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508832 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508833 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00508834:;
  /* 00508834 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00508837 call 0x40d9f0 */ esp -= 4; M32(esp) = 0x50883cu; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x508837u); RETCHK(0x50883cu, 0x508837u); LOADALL;
  /* 0050883c fsubr dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0050883f mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00508841 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00508844 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508845 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00508848 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050884a call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50884du; SAVEALL; call_ind(c, t_); RETCHK(0x50884du, 0x50884au); LOADALL; }
  /* 0050884d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050884f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508850 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00508851:;
  /* 00508851 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00508854 call 0x40d9d0 */ esp -= 4; M32(esp) = 0x508859u; SAVEALL; F_0040d9d0(c); ABI_CHECK(0x40d9d0u, 0x508854u); RETCHK(0x508859u, 0x508854u); LOADALL;
  /* 00508859 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050885f fsubr dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00508862 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
L_00508865:;
  /* 00508865 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00508868 call 0x40d9f0 */ esp -= 4; M32(esp) = 0x50886du; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x508868u); RETCHK(0x50886du, 0x508868u); LOADALL;
  /* 0050886d fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00508873 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00508875 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00508878 fsubr dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0050887b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050887c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050887e fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00508881 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508884u; SAVEALL; call_ind(c, t_); RETCHK(0x508884u, 0x508881u); LOADALL; }
  /* 00508884 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508886 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508887 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00508888:;
  /* 00508888 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050888b call 0x40d9d0 */ esp -= 4; M32(esp) = 0x508890u; SAVEALL; F_0040d9d0(c); ABI_CHECK(0x40d9d0u, 0x50888bu); RETCHK(0x508890u, 0x50888bu); LOADALL;
  /* 00508890 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00508896 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00508898 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0050889b fsubr dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0050889e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050889f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005088a1 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005088a4 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5088a7u; SAVEALL; call_ind(c, t_); RETCHK(0x5088a7u, 0x5088a4u); LOADALL; }
  /* 005088a7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005088a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005088aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005088ab:;
  /* 005088ab mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005088ad lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 005088b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005088b1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005088b3 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5088b6u; SAVEALL; call_ind(c, t_); RETCHK(0x5088b6u, 0x5088b3u); LOADALL; }
  /* 005088b6 lea eax, [ebx - 1] */ eax = (u32)((u32)(ebx + 0xffffffffu));
  /* 005088b9 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005088bc ja 0x50891a */ if (!(CF_|ZF_)) goto L_0050891a;
  /* 005088be jmp dword ptr [eax*4 + 0x508948] */ { const u32 m_ = (u32)(eax * 4u + 0x508948u); u32 t_ = M32(m_); switch (t_) { case 0x5088c5u: goto L_005088c5; case 0x5088e2u: goto L_005088e2; case 0x5088ffu: goto L_005088ff; case 0x508914u: goto L_00508914; default: SAVEALL; call_ind(c, t_); return; } }
L_005088c5:;
  /* 005088c5 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005088c8 call 0x40d9f0 */ esp -= 4; M32(esp) = 0x5088cdu; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x5088c8u); RETCHK(0x5088cdu, 0x5088c8u); LOADALL;
  /* 005088cd fsubr dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005088d0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005088d2 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005088d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005088d6 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005088d9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005088db call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5088deu; SAVEALL; call_ind(c, t_); RETCHK(0x5088deu, 0x5088dbu); LOADALL; }
  /* 005088de mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005088e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005088e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005088e2:;
  /* 005088e2 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005088e5 call 0x40d9d0 */ esp -= 4; M32(esp) = 0x5088eau; SAVEALL; F_0040d9d0(c); ABI_CHECK(0x40d9d0u, 0x5088e5u); RETCHK(0x5088eau, 0x5088e5u); LOADALL;
  /* 005088ea fsubr dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005088ed mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005088ef lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005088f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005088f3 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005088f6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005088f8 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5088fbu; SAVEALL; call_ind(c, t_); RETCHK(0x5088fbu, 0x5088f8u); LOADALL; }
  /* 005088fb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005088fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005088fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005088ff:;
  /* 005088ff mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 00508902 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00508905 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 00508908 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050890a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050890b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050890d call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508910u; SAVEALL; call_ind(c, t_); RETCHK(0x508910u, 0x50890du); LOADALL; }
  /* 00508910 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508912 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508913 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00508914:;
  /* 00508914 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00508917 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_0050891a:;
  /* 0050891a mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050891c lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0050891f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508920 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00508922 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508925u; SAVEALL; call_ind(c, t_); RETCHK(0x508925u, 0x508922u); LOADALL; }
  /* 00508925 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508927 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508928 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508960(CPU *c) {
  NATIVE_HOOK(0x508960u) REGS; LOADALL;
L_00508960:;
  /* 00508960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508963 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00508966 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508968 je 0x5089f9 */ if (ZF_) goto L_005089f9;
  /* 0050896e mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 00508973 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508975 je 0x5089ef */ if (ZF_) goto L_005089ef;
  /* 00508977 cmp dword ptr [eax + 0x10], 1 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050897b je 0x508984 */ if (ZF_) goto L_00508984;
  /* 0050897d mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00508980 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508982 jne 0x5089ef */ if (!ZF_) goto L_005089ef;
L_00508984:;
  /* 00508984 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00508987 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0050898a fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050898c fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00508992 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00508994 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508997 je 0x5089a0 */ if (ZF_) goto L_005089a0;
  /* 00508999 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050899b fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0050899d fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005089a0:;
  /* 005089a0 fisub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 005089a3 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 005089a5 fcomp dword ptr [0x656fe0] */ { const u32 m_ = (u32)(0x656fe0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005089ab fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005089ad test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005089b0 jp 0x5089ef */ if (PF_) goto L_005089ef;
  /* 005089b2 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005089b5 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005089b8 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005089be fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005089c0 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005089c3 je 0x5089cd */ if (ZF_) goto L_005089cd;
  /* 005089c5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005089c7 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005089ca fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005089cd:;
  /* 005089cd fisub dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 005089d0 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 005089d2 fcomp dword ptr [0x656fe0] */ { const u32 m_ = (u32)(0x656fe0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005089d8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005089da test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005089dd jp 0x5089ef */ if (PF_) goto L_005089ef;
  /* 005089df mov dword ptr [edx + 0x84], 1 */ { const u32 m_ = (u32)(edx + 0x84u); M32(m_) = (u32)(0x1u); }
  /* 005089e9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005089eb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005089ec ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_005089ef:;
  /* 005089ef mov dword ptr [edx + 0x84], 2 */ { const u32 m_ = (u32)(edx + 0x84u); M32(m_) = (u32)(0x2u); }
L_005089f9:;
  /* 005089f9 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005089fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005089fc ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00508a00(CPU *c) {
  NATIVE_HOOK(0x508a00u) REGS; LOADALL;
L_00508a00:;
  /* 00508a00 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00508a03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508a04 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00508a06 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00508a09 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508a0a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508a0b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00508a0c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508a0d call 0x508af0 */ esp -= 4; M32(esp) = 0x508a12u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x508a0du); RETCHK(0x508a12u, 0x508a0du); LOADALL;
  /* 00508a12 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00508a17 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00508a19 mov edi, eax */ { edi = (u32)(eax); }
  /* 00508a1b call 0x518d90 */ esp -= 4; M32(esp) = 0x508a20u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x508a1bu); RETCHK(0x508a20u, 0x508a1bu); LOADALL;
  /* 00508a20 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00508a23 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00508a26 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00508a28 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508a29 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508a2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508a30(CPU *c) {
  NATIVE_HOOK(0x508a30u) REGS; LOADALL;
L_00508a30:;
  /* 00508a30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508a31 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00508a34 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00508a37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508a38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508a39 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508a3a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508a3b call 0x508af0 */ esp -= 4; M32(esp) = 0x508a40u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x508a3bu); RETCHK(0x508a40u, 0x508a3bu); LOADALL;
  /* 00508a40 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00508a45 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00508a47 mov edi, eax */ { edi = (u32)(eax); }
  /* 00508a49 call 0x518d90 */ esp -= 4; M32(esp) = 0x508a4eu; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x508a49u); RETCHK(0x508a4eu, 0x508a49u); LOADALL;
  /* 00508a4e mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00508a51 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00508a54 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 00508a56 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508a57 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508a58 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508a60(CPU *c) {
  NATIVE_HOOK(0x508a60u) REGS; LOADALL;
L_00508a60:;
  /* 00508a60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508a61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508a63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508a64 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00508a67 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00508a6a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508a6b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508a6c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508a6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508a6e call 0x508af0 */ esp -= 4; M32(esp) = 0x508a73u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x508a6eu); RETCHK(0x508a73u, 0x508a6eu); LOADALL;
  /* 00508a73 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00508a76 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00508a7b mov edi, eax */ { edi = (u32)(eax); }
  /* 00508a7d call 0x518d90 */ esp -= 4; M32(esp) = 0x508a82u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x508a7du); RETCHK(0x508a82u, 0x508a7du); LOADALL;
  /* 00508a82 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00508a85 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00508a88 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 00508a8a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00508a8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508a8e mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 00508a90 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00508a92 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508a93 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508a94 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00508aa0(CPU *c) {
  NATIVE_HOOK(0x508aa0u) REGS; LOADALL;
L_00508aa0:;
  /* 00508aa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508aa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508aa3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508aa4 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00508aa7 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00508aa9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508aab je 0x508ae9 */ if (ZF_) goto L_00508ae9;
  /* 00508aad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508aae mov edi, edi */ { edi = (u32)(edi); }
L_00508ab0:;
  /* 00508ab0 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00508ab3 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00508ab6 cmp ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508ab8 jne 0x508ae2 */ if (!ZF_) goto L_00508ae2;
  /* 00508aba cmp eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508abd mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00508abf je 0x508ade */ if (ZF_) goto L_00508ade;
  /* 00508ac1 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00508ac4 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00508ac6 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00508ac8 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00508acb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508acc mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00508acf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508ad4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508acfu); RETCHK(0x508ad4u, 0x508acfu); LOADALL;
  /* 00508ad4 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508ad7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508ada dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00508adb mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
L_00508ade:;
  /* 00508ade mov eax, esi */ { eax = (u32)(esi); }
  /* 00508ae0 jmp 0x508ae4 */ goto L_00508ae4;
L_00508ae2:;
  /* 00508ae2 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_00508ae4:;
  /* 00508ae4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508ae6 jne 0x508ab0 */ if (!ZF_) goto L_00508ab0;
  /* 00508ae8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00508ae9:;
  /* 00508ae9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508aea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508aeb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00508af0(CPU *c) {
  NATIVE_HOOK(0x508af0u) REGS; LOADALL;
L_00508af0:;
  /* 00508af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508af3 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00508af5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x508afau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x508af5u); RETCHK(0x508afau, 0x508af5u); LOADALL;
  /* 00508afa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508afd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508aff je 0x508b14 */ if (ZF_) goto L_00508b14;
  /* 00508b01 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00508b04 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00508b07 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00508b09 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00508b0c mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 00508b0f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00508b11 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
L_00508b14:;
  /* 00508b14 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508b15 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00508b20(CPU *c) {
  NATIVE_HOOK(0x508b20u) REGS; LOADALL;
L_00508b20:;
  /* 00508b20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508b21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508b23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00508b25 push 0x61df78 */ { u32 v_ = 0x61df78u; esp -= 4; M32(esp) = v_; }
  /* 00508b2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00508b30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508b31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00508b38 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508b3b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00508b3e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508b3f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508b40 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00508b43 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508b44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508b45 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508b46 call 0x50bb70 */ esp -= 4; M32(esp) = 0x508b4bu; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x508b46u); RETCHK(0x508b4bu, 0x508b46u); LOADALL;
  /* 00508b4b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00508b4d mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00508b50 mov dword ptr [esi], 0x650c58 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650c58u); }
  /* 00508b56 mov dword ptr [esi + 0x1d0], ebx */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(ebx); }
  /* 00508b5c mov dword ptr [esi + 0x1d4], ebx */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(ebx); }
  /* 00508b62 mov dword ptr [esi + 0x1d8], ebx */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(ebx); }
  /* 00508b68 mov dword ptr [esi + 0x1f4], 0xf */ { const u32 m_ = (u32)(esi + 0x1f4u); M32(m_) = (u32)(0xfu); }
  /* 00508b72 mov dword ptr [esi + 0x1f0], ebx */ { const u32 m_ = (u32)(esi + 0x1f0u); M32(m_) = (u32)(ebx); }
  /* 00508b78 mov byte ptr [esi + 0x1e0], bl */ { const u32 m_ = (u32)(esi + 0x1e0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00508b7e mov dword ptr [esi + 0x1fc], ebx */ { const u32 m_ = (u32)(esi + 0x1fcu); M32(m_) = (u32)(ebx); }
  /* 00508b84 mov dword ptr [esi + 0x200], ebx */ { const u32 m_ = (u32)(esi + 0x200u); M32(m_) = (u32)(ebx); }
  /* 00508b8a mov dword ptr [esi + 0x204], ebx */ { const u32 m_ = (u32)(esi + 0x204u); M32(m_) = (u32)(ebx); }
  /* 00508b90 lea edi, [esi + 0x208] */ edi = (u32)((u32)(esi + 0x208u));
  /* 00508b96 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00508b99 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00508b9c mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 00508b9f mov dword ptr [edi + 0x10], ebx */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 00508ba2 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00508ba4 push 0x650d48 */ { u32 v_ = 0x650d48u; esp -= 4; M32(esp) = v_; }
  /* 00508ba9 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00508bac mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00508bb0 call 0x404420 */ esp -= 4; M32(esp) = 0x508bb5u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x508bb0u); RETCHK(0x508bb5u, 0x508bb0u); LOADALL;
  /* 00508bb5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508bb6 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00508bbb lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00508bbe mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00508bc5 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00508bc8 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00508bcb call 0x404420 */ esp -= 4; M32(esp) = 0x508bd0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x508bcbu); RETCHK(0x508bd0u, 0x508bcbu); LOADALL;
  /* 00508bd0 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00508bd3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508bd4 mov eax, edi */ { eax = (u32)(edi); }
  /* 00508bd6 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 00508bda call 0x4033a0 */ esp -= 4; M32(esp) = 0x508bdfu; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x508bdau); RETCHK(0x508bdfu, 0x508bdau); LOADALL;
  /* 00508bdf cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508be3 jb 0x508bf1 */ if (CF_) goto L_00508bf1;
  /* 00508be5 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 00508be8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00508be9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508beeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508be9u); RETCHK(0x508beeu, 0x508be9u); LOADALL;
  /* 00508bee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00508bf1:;
  /* 00508bf1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00508bf4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508bf5 mov eax, esi */ { eax = (u32)(esi); }
  /* 00508bf7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508bf8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508bf9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00508c00 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508c02 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508c03 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00508c10(CPU *c) {
  NATIVE_HOOK(0x508c10u) REGS; LOADALL;
L_00508c10:;
  /* 00508c10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508c11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508c13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508c14 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00508c16 call 0x508c50 */ esp -= 4; M32(esp) = 0x508c1bu; SAVEALL; F_00508c50(c); ABI_CHECK(0x508c50u, 0x508c16u); RETCHK(0x508c1bu, 0x508c16u); LOADALL;
  /* 00508c1b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508c1f je 0x508c2a */ if (ZF_) goto L_00508c2a;
  /* 00508c21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508c22 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508c27u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508c22u); RETCHK(0x508c27u, 0x508c22u); LOADALL;
  /* 00508c27 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00508c2a:;
  /* 00508c2a mov eax, esi */ { eax = (u32)(esi); }
  /* 00508c2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508c2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508c2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00508c50(CPU *c) {
  NATIVE_HOOK(0x508c50u) REGS; LOADALL;
L_00508c50:;
  /* 00508c50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508c51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508c53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508c54 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508c55 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00508c57 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508c58 lea esi, [ebx + 0x208] */ esi = (u32)((u32)(ebx + 0x208u));
  /* 00508c5e mov dword ptr [ebx], 0x650c58 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x650c58u); }
  /* 00508c64 call 0x403410 */ esp -= 4; M32(esp) = 0x508c69u; SAVEALL; F_00403410(c); ABI_CHECK(0x403410u, 0x508c64u); RETCHK(0x508c69u, 0x508c64u); LOADALL;
  /* 00508c69 mov eax, dword ptr [ebx + 0x1fc] */ { const u32 m_ = (u32)(ebx + 0x1fcu); eax = (u32)(M32(m_)); }
  /* 00508c6f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00508c71 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508c73 je 0x508c95 */ if (ZF_) goto L_00508c95;
  /* 00508c75 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00508c78 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508c79 mov edi, dword ptr [ebx + 0x200] */ { const u32 m_ = (u32)(ebx + 0x200u); edi = (u32)(M32(m_)); }
  /* 00508c7f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508c80 call 0x403f60 */ esp -= 4; M32(esp) = 0x508c85u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x508c80u); RETCHK(0x508c85u, 0x508c80u); LOADALL;
  /* 00508c85 mov edx, dword ptr [ebx + 0x1fc] */ { const u32 m_ = (u32)(ebx + 0x1fcu); edx = (u32)(M32(m_)); }
  /* 00508c8b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00508c8c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508c91u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508c8cu); RETCHK(0x508c91u, 0x508c8cu); LOADALL;
  /* 00508c91 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508c94 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00508c95:;
  /* 00508c95 mov dword ptr [ebx + 0x1fc], esi */ { const u32 m_ = (u32)(ebx + 0x1fcu); M32(m_) = (u32)(esi); }
  /* 00508c9b mov dword ptr [ebx + 0x200], esi */ { const u32 m_ = (u32)(ebx + 0x200u); M32(m_) = (u32)(esi); }
  /* 00508ca1 mov dword ptr [ebx + 0x204], esi */ { const u32 m_ = (u32)(ebx + 0x204u); M32(m_) = (u32)(esi); }
  /* 00508ca7 cmp dword ptr [ebx + 0x1f4], 0x10 */ { const u32 m_ = (u32)(ebx + 0x1f4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508cae jb 0x508cbf */ if (CF_) goto L_00508cbf;
  /* 00508cb0 mov eax, dword ptr [ebx + 0x1e0] */ { const u32 m_ = (u32)(ebx + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 00508cb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508cb7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508cbcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508cb7u); RETCHK(0x508cbcu, 0x508cb7u); LOADALL;
  /* 00508cbc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00508cbf:;
  /* 00508cbf mov dword ptr [ebx + 0x1f4], 0xf */ { const u32 m_ = (u32)(ebx + 0x1f4u); M32(m_) = (u32)(0xfu); }
  /* 00508cc9 mov dword ptr [ebx + 0x1f0], esi */ { const u32 m_ = (u32)(ebx + 0x1f0u); M32(m_) = (u32)(esi); }
  /* 00508ccf mov byte ptr [ebx + 0x1e0], 0 */ { const u32 m_ = (u32)(ebx + 0x1e0u); M8(m_) = (u8)(0x0u); }
  /* 00508cd6 mov eax, dword ptr [ebx + 0x1d0] */ { const u32 m_ = (u32)(ebx + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00508cdc cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508cde je 0x508ce9 */ if (ZF_) goto L_00508ce9;
  /* 00508ce0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508ce1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508ce6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508ce1u); RETCHK(0x508ce6u, 0x508ce1u); LOADALL;
  /* 00508ce6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00508ce9:;
  /* 00508ce9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00508ceb mov dword ptr [ebx + 0x1d0], esi */ { const u32 m_ = (u32)(ebx + 0x1d0u); M32(m_) = (u32)(esi); }
  /* 00508cf1 mov dword ptr [ebx + 0x1d4], esi */ { const u32 m_ = (u32)(ebx + 0x1d4u); M32(m_) = (u32)(esi); }
  /* 00508cf7 mov dword ptr [ebx + 0x1d8], esi */ { const u32 m_ = (u32)(ebx + 0x1d8u); M32(m_) = (u32)(esi); }
  /* 00508cfd call 0x50bc50 */ esp -= 4; M32(esp) = 0x508d02u; SAVEALL; F_0050bc50(c); ABI_CHECK(0x50bc50u, 0x508cfdu); RETCHK(0x508d02u, 0x508cfdu); LOADALL;
  /* 00508d02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508d03 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508d04 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508d06 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508d07 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508d10(CPU *c) {
  NATIVE_HOOK(0x508d10u) REGS; LOADALL;
L_00508d10:;
  /* 00508d10 mov eax, dword ptr [ecx + 0x1f0] */ { const u32 m_ = (u32)(ecx + 0x1f0u); eax = (u32)(M32(m_)); }
  /* 00508d16 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508d18 jne 0x508d1d */ if (!ZF_) goto L_00508d1d;
  /* 00508d1a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00508d1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00508d1d:;
  /* 00508d1d lea eax, [ecx + 0x1dc] */ eax = (u32)((u32)(ecx + 0x1dcu));
  /* 00508d23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508d24 call 0x5075d0 */ esp -= 4; M32(esp) = 0x508d29u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x508d24u); RETCHK(0x508d29u, 0x508d24u); LOADALL;
  /* 00508d29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508d30(CPU *c) {
  NATIVE_HOOK(0x508d30u) REGS; LOADALL;
L_00508d30:;
  /* 00508d30 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00508d32 call 0x508d10 */ esp -= 4; M32(esp) = 0x508d37u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x508d32u); RETCHK(0x508d37u, 0x508d32u); LOADALL;
  /* 00508d37 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508d39 je 0x508d79 */ if (ZF_) goto L_00508d79;
  /* 00508d3b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508d3d je 0x508d46 */ if (ZF_) goto L_00508d46;
  /* 00508d3f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00508d41 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00508d43 call dword ptr [edx + 0x4c] */ { const u32 m_ = (u32)(edx + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508d46u; SAVEALL; call_ind(c, t_); RETCHK(0x508d46u, 0x508d43u); LOADALL; }
L_00508d46:;
  /* 00508d46 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508d48 jne 0x508d58 */ if (!ZF_) goto L_00508d58;
  /* 00508d4a lea eax, [edi + 0x1dc] */ eax = (u32)((u32)(edi + 0x1dcu));
  /* 00508d50 call 0x40c920 */ esp -= 4; M32(esp) = 0x508d55u; SAVEALL; F_0040c920(c); ABI_CHECK(0x40c920u, 0x508d50u); RETCHK(0x508d55u, 0x508d50u); LOADALL;
  /* 00508d55 mov eax, esi */ { eax = (u32)(esi); }
  /* 00508d57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00508d58:;
  /* 00508d58 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00508d5a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00508d5c mov eax, esi */ { eax = (u32)(esi); }
  /* 00508d5e call 0x5075c0 */ esp -= 4; M32(esp) = 0x508d63u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x508d5eu); RETCHK(0x508d63u, 0x508d5eu); LOADALL;
  /* 00508d63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508d64 lea ecx, [edi + 0x1dc] */ ecx = (u32)((u32)(edi + 0x1dcu));
  /* 00508d6a call 0x404140 */ esp -= 4; M32(esp) = 0x508d6fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x508d6au); RETCHK(0x508d6fu, 0x508d6au); LOADALL;
  /* 00508d6f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00508d71 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00508d73 call dword ptr [eax + 0xa0] */ { const u32 m_ = (u32)(eax + 0xa0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x508d79u; SAVEALL; call_ind(c, t_); RETCHK(0x508d79u, 0x508d73u); LOADALL; }
L_00508d79:;
  /* 00508d79 mov eax, esi */ { eax = (u32)(esi); }
  /* 00508d7b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508d80(CPU *c) {
  NATIVE_HOOK(0x508d80u) REGS; LOADALL;
L_00508d80:;
  /* 00508d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508d81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508d83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508d84 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00508d86 mov eax, dword ptr [ebx + 0x1fc] */ { const u32 m_ = (u32)(ebx + 0x1fcu); eax = (u32)(M32(m_)); }
  /* 00508d8c add ebx, 0x1f8 */ { u32 a_ = ebx, b_ = 0x1f8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00508d92 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508d93 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00508d95 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508d97 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508d98 je 0x508db2 */ if (ZF_) goto L_00508db2;
  /* 00508d9a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00508d9d mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00508da0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508da1 call 0x403f60 */ esp -= 4; M32(esp) = 0x508da6u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x508da1u); RETCHK(0x508da6u, 0x508da1u); LOADALL;
  /* 00508da6 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00508da9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00508daa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508dafu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508daau); RETCHK(0x508dafu, 0x508daau); LOADALL;
  /* 00508daf add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00508db2:;
  /* 00508db2 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00508db5 mov dword ptr [ebx + 4], esi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(esi); }
  /* 00508db8 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 00508dbb mov dword ptr [ebx + 0xc], esi */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(esi); }
  /* 00508dbe mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00508dc1 cmp esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508dc4 je 0x508de3 */ if (ZF_) goto L_00508de3;
L_00508dc6:;
  /* 00508dc6 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00508dc8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508dca je 0x508dd9 */ if (ZF_) goto L_00508dd9;
  /* 00508dcc call 0x5075c0 */ esp -= 4; M32(esp) = 0x508dd1u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x508dccu); RETCHK(0x508dd1u, 0x508dccu); LOADALL;
  /* 00508dd1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508dd2 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00508dd4 call 0x4030f0 */ esp -= 4; M32(esp) = 0x508dd9u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x508dd4u); RETCHK(0x508dd9u, 0x508dd4u); LOADALL;
L_00508dd9:;
  /* 00508dd9 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508ddc add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00508ddf cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508de1 jne 0x508dc6 */ if (!ZF_) goto L_00508dc6;
L_00508de3:;
  /* 00508de3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508de4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508de5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508de6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508de7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00508df0(CPU *c) {
  NATIVE_HOOK(0x508df0u) REGS; LOADALL;
L_00508df0:;
  /* 00508df0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508df1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508df3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508df4 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00508df7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508df8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508df9 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00508dfb cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508dfd je 0x508e08 */ if (ZF_) goto L_00508e08;
  /* 00508dff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508e00 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508e05u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508e00u); RETCHK(0x508e05u, 0x508e00u); LOADALL;
  /* 00508e05 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00508e08:;
  /* 00508e08 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00508e0b mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00508e0e mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 00508e11 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00508e14 mov ebx, dword ptr [edi + 0x1fc] */ { const u32 m_ = (u32)(edi + 0x1fcu); ebx = (u32)(M32(m_)); }
  /* 00508e1a cmp ebx, dword ptr [edi + 0x200] */ { const u32 m_ = (u32)(edi + 0x200u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508e20 je 0x508e83 */ if (ZF_) goto L_00508e83;
L_00508e22:;
  /* 00508e22 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508e23 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00508e25 call 0x5075d0 */ esp -= 4; M32(esp) = 0x508e2au; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x508e25u); RETCHK(0x508e2au, 0x508e25u); LOADALL;
  /* 00508e2a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508e2c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00508e2f je 0x508e76 */ if (ZF_) goto L_00508e76;
  /* 00508e31 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00508e34 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508e36 jne 0x508e3c */ if (!ZF_) goto L_00508e3c;
  /* 00508e38 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00508e3a jmp 0x508e44 */ goto L_00508e44;
L_00508e3c:;
  /* 00508e3c mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00508e3f sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00508e41 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_00508e44:;
  /* 00508e44 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508e46 je 0x508e61 */ if (ZF_) goto L_00508e61;
  /* 00508e48 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00508e4b sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00508e4d sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00508e50 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508e52 jae 0x508e61 */ if (!CF_) goto L_00508e61;
  /* 00508e54 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00508e57 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00508e59 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00508e5c mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00508e5f jmp 0x508e73 */ goto L_00508e73;
L_00508e61:;
  /* 00508e61 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508e64 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508e65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508e66 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00508e69 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00508e6e call 0x4d2620 */ esp -= 4; M32(esp) = 0x508e73u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x508e6eu); RETCHK(0x508e73u, 0x508e6eu); LOADALL;
L_00508e73:;
  /* 00508e73 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_00508e76:;
  /* 00508e76 mov eax, dword ptr [edi + 0x200] */ { const u32 m_ = (u32)(edi + 0x200u); eax = (u32)(M32(m_)); }
  /* 00508e7c add ebx, 0x1c */ { u32 a_ = ebx, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00508e7f cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508e81 jne 0x508e22 */ if (!ZF_) goto L_00508e22;
L_00508e83:;
  /* 00508e83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508e84 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508e85 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508e87 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508e88 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00508e90(CPU *c) {
  NATIVE_HOOK(0x508e90u) REGS; LOADALL;
L_00508e90:;
  /* 00508e90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508e91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508e93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00508e95 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 00508e9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00508ea0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508ea1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00508ea8 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00508eab mov eax, edx */ { eax = (u32)(edx); }
  /* 00508ead push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508eae mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00508eb5 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 00508ebc mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 00508ec0 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_00508ec3:;
  /* 00508ec3 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00508ec5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00508ec6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00508ec8 jne 0x508ec3 */ if (!ZF_) goto L_00508ec3;
  /* 00508eca sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00508ecc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508ecd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00508ece lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00508ed1 call 0x404420 */ esp -= 4; M32(esp) = 0x508ed6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x508ed1u); RETCHK(0x508ed6u, 0x508ed1u); LOADALL;
  /* 00508ed6 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00508ed9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508eda mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508edd add eax, 0x208 */ { u32 a_ = eax, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00508ee2 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00508ee9 call 0x4033a0 */ esp -= 4; M32(esp) = 0x508eeeu; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x508ee9u); RETCHK(0x508eeeu, 0x508ee9u); LOADALL;
  /* 00508eee cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508ef2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508ef3 jb 0x508f01 */ if (CF_) goto L_00508f01;
  /* 00508ef5 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 00508ef8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00508ef9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508efeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508ef9u); RETCHK(0x508efeu, 0x508ef9u); LOADALL;
  /* 00508efe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00508f01:;
  /* 00508f01 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00508f04 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00508f0b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00508f0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508f0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00508f20(CPU *c) {
  NATIVE_HOOK(0x508f20u) REGS; LOADALL;
L_00508f20:;
  /* 00508f20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508f21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508f23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508f24 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00508f27 add eax, 0x208 */ { u32 a_ = eax, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00508f2c call 0x4033a0 */ esp -= 4; M32(esp) = 0x508f31u; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x508f2cu); RETCHK(0x508f31u, 0x508f2cu); LOADALL;
  /* 00508f31 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508f32 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00508f40(CPU *c) {
  NATIVE_HOOK(0x508f40u) REGS; LOADALL;
L_00508f40:;
  /* 00508f40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508f41 mov esi, eax */ { esi = (u32)(eax); }
  /* 00508f43 add esi, 0x208 */ { u32 a_ = esi, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00508f49 call 0x403870 */ esp -= 4; M32(esp) = 0x508f4eu; SAVEALL; F_00403870(c); ABI_CHECK(0x403870u, 0x508f49u); RETCHK(0x508f4eu, 0x508f49u); LOADALL;
  /* 00508f4e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00508f4f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00508f50(CPU *c) {
  NATIVE_HOOK(0x508f50u) REGS; LOADALL;
L_00508f50:;
  /* 00508f50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00508f51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00508f53 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00508f54 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00508f57 mov ecx, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); ecx = (u32)(M32(m_)); }
  /* 00508f5d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00508f5f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508f61 je 0x508ffc */ if (ZF_) goto L_00508ffc;
  /* 00508f67 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00508f68 lea esi, [edi + 0x208] */ esi = (u32)((u32)(edi + 0x208u));
  /* 00508f6e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00508f6f nop */ ;
L_00508f70:;
  /* 00508f70 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00508f73 add eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00508f76 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00508f78 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 00508f7b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00508f7c cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508f7e ja 0x508f82 */ if (!(CF_|ZF_)) goto L_00508f82;
  /* 00508f80 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00508f82:;
  /* 00508f82 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00508f85 mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 00508f88 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00508f89 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00508f8b call 0x5075d0 */ esp -= 4; M32(esp) = 0x508f90u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x508f8bu); RETCHK(0x508f90u, 0x508f8bu); LOADALL;
  /* 00508f90 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00508f92 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508f94 jne 0x508ff8 */ if (!ZF_) goto L_00508ff8;
  /* 00508f96 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00508f99 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508f9b je 0x508fea */ if (ZF_) goto L_00508fea;
  /* 00508f9d mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00508fa0 lea eax, [ecx + eax - 1] */ eax = (u32)((u32)(ecx + eax + 0xffffffffu));
  /* 00508fa4 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00508fa7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508fa9 ja 0x508fad */ if (!(CF_|ZF_)) goto L_00508fad;
  /* 00508fab sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00508fad:;
  /* 00508fad mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00508fb0 mov edi, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); edi = (u32)(M32(m_)); }
  /* 00508fb3 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00508fb7 jb 0x508fc5 */ if (CF_) goto L_00508fc5;
  /* 00508fb9 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00508fbc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00508fbd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x508fc2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x508fbdu); RETCHK(0x508fc2u, 0x508fbdu); LOADALL;
  /* 00508fc2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00508fc5:;
  /* 00508fc5 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00508fcc mov dword ptr [edi + 0x14], 0 */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 00508fd3 mov byte ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 00508fd7 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00508fda mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00508fdd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00508fde mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00508fe1 jne 0x508fea */ if (!ZF_) goto L_00508fea;
  /* 00508fe3 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
L_00508fea:;
  /* 00508fea mov eax, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); eax = (u32)(M32(m_)); }
  /* 00508ff0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00508ff2 jne 0x508f70 */ if (!ZF_) goto L_00508f70;
L_00508ff8:;
  /* 00508ff8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00508ffa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00508ffb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00508ffc:;
  /* 00508ffc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00508ffd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00508ffe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00509010(CPU *c) {
  NATIVE_HOOK(0x509010u) REGS; LOADALL;
L_00509010:;
  /* 00509010 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509011 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509013 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509014 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00509017 mov eax, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 0050901d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050901f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509020 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509021 jne 0x509027 */ if (!ZF_) goto L_00509027;
  /* 00509023 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00509025 jmp 0x509032 */ goto L_00509032;
L_00509027:;
  /* 00509027 mov edi, dword ptr [ecx + 0x1d4] */ { const u32 m_ = (u32)(ecx + 0x1d4u); edi = (u32)(M32(m_)); }
  /* 0050902d sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0050902f sar edi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
L_00509032:;
  /* 00509032 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00509034 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509036 jle 0x50908c */ if ((ZF_|LT_)) goto L_0050908c;
  /* 00509038 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509039 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00509040:;
  /* 00509040 mov eax, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00509046 mov edx, dword ptr [eax + esi*4] */ { const u32 m_ = (u32)(eax + esi * 4u); edx = (u32)(M32(m_)); }
  /* 00509049 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050904b lea eax, [eax + esi*4] */ eax = (u32)((u32)(eax + esi * 4u));
  /* 0050904e je 0x509086 */ if (ZF_) goto L_00509086;
  /* 00509050 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00509053 fadd dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00509056 fcom dword ptr [edx] */ { const u32 m_ = (u32)(edx); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00509058 fst dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); MF32(m_) = (float)ST(0); }
  /* 0050905b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050905d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509060 jne 0x509084 */ if (!ZF_) goto L_00509084;
  /* 00509062 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00509065 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00509068 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0050906b mov dword ptr [edx + 4], 0 */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00509072 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00509075 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00509077 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509078 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00509079 call dword ptr [eax + 0xb0] */ { const u32 m_ = (u32)(eax + 0xb0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50907fu; SAVEALL; call_ind(c, t_); RETCHK(0x50907fu, 0x509079u); LOADALL; }
  /* 0050907f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00509082 jmp 0x509086 */ goto L_00509086;
L_00509084:;
  /* 00509084 fstp st(0) */ ST(0) = ST(0); FPOP();
L_00509086:;
  /* 00509086 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00509087 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509089 jl 0x509040 */ if (LT_) goto L_00509040;
  /* 0050908b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0050908c:;
  /* 0050908c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050908d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050908e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509090 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509091 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005090a0(CPU *c) {
  NATIVE_HOOK(0x5090a0u) REGS; LOADALL;
L_005090a0:;
  /* 005090a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005090a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005090a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005090a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005090a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005090a6 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005090a8 mov esi, eax */ { esi = (u32)(eax); }
  /* 005090aa call 0x5fe934 */ esp -= 4; M32(esp) = 0x5090afu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5090aau); RETCHK(0x5090afu, 0x5090aau); LOADALL;
  /* 005090af mov edi, eax */ { edi = (u32)(eax); }
  /* 005090b1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005090b3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005090b6 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005090b8 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 005090bb jne 0x5090c6 */ if (!ZF_) goto L_005090c6;
  /* 005090bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005090be or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005090c1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005090c2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005090c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005090c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005090c6:;
  /* 005090c6 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005090c8 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 005090ca mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005090cd mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005090d0 lea esi, [ebx + 0x1cc] */ esi = (u32)((u32)(ebx + 0x1ccu));
  /* 005090d6 mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 005090d9 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005090dc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005090e0:;
  /* 005090e0 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005090e2 jne 0x5090e8 */ if (!ZF_) goto L_005090e8;
  /* 005090e4 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005090e6 jmp 0x5090f0 */ goto L_005090f0;
L_005090e8:;
  /* 005090e8 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005090eb sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005090ed sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_005090f0:;
  /* 005090f0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005090f2 jge 0x509115 */ if (!LT_) goto L_00509115;
  /* 005090f4 mov ecx, dword ptr [ebx + 0x1d0] */ { const u32 m_ = (u32)(ebx + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 005090fa cmp dword ptr [ecx + eax*4], 0 */ { const u32 m_ = (u32)(ecx + eax * 4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005090fe je 0x509103 */ if (ZF_) goto L_00509103;
  /* 00509100 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00509101 jmp 0x5090e0 */ goto L_005090e0;
L_00509103:;
  /* 00509103 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00509106 mov edx, dword ptr [ebx + 0x1d0] */ { const u32 m_ = (u32)(ebx + 0x1d0u); edx = (u32)(M32(m_)); }
  /* 0050910c mov dword ptr [edx + eax*4], edi */ { const u32 m_ = (u32)(edx + eax * 4u); M32(m_) = (u32)(edi); }
  /* 0050910f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509110 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509111 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509113 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509114 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00509115:;
  /* 00509115 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00509118 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050911a jne 0x509120 */ if (!ZF_) goto L_00509120;
  /* 0050911c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0050911e jmp 0x509128 */ goto L_00509128;
L_00509120:;
  /* 00509120 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00509123 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00509125 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_00509128:;
  /* 00509128 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050912a je 0x509145 */ if (ZF_) goto L_00509145;
  /* 0050912c mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050912f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00509131 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00509134 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509136 jae 0x509145 */ if (!CF_) goto L_00509145;
  /* 00509138 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050913b mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 0050913d add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00509140 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00509143 jmp 0x509157 */ goto L_00509157;
L_00509145:;
  /* 00509145 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00509148 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509149 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050914a lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0050914d mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00509152 call 0x4d2620 */ esp -= 4; M32(esp) = 0x509157u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x509152u); RETCHK(0x509157u, 0x509152u); LOADALL;
L_00509157:;
  /* 00509157 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050915a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050915c jne 0x509169 */ if (!ZF_) goto L_00509169;
  /* 0050915e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00509160 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00509163 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509164 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509165 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509167 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509168 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00509169:;
  /* 00509169 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050916c sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050916e sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00509171 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00509174 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509175 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509176 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509178 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509179 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00509180(CPU *c) {
  NATIVE_HOOK(0x509180u) REGS; LOADALL;
L_00509180:;
  /* 00509180 mov ecx, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 00509186 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509187 mov esi, dword ptr [edi + 0x1d0] */ { const u32 m_ = (u32)(edi + 0x1d0u); esi = (u32)(M32(m_)); }
  /* 0050918d cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050918f je 0x5091d2 */ if (ZF_) goto L_005091d2;
L_00509191:;
  /* 00509191 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00509193 cmp edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509196 je 0x5091a1 */ if (ZF_) goto L_005091a1;
  /* 00509198 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050919b cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050919d jne 0x509191 */ if (!ZF_) goto L_00509191;
  /* 0050919f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005091a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005091a1:;
  /* 005091a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005091a2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5091a7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5091a2u); RETCHK(0x5091a7u, 0x5091a2u); LOADALL;
  /* 005091a7 mov ecx, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 005091ad lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005091b0 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005091b2 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005091b5 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005091b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005091b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005091ba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005091bb call 0x5fe998 */ esp -= 4; M32(esp) = 0x5091c0u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x5091bbu); RETCHK(0x5091c0u, 0x5091bbu); LOADALL;
  /* 005091c0 mov eax, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 005091c6 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005091c9 add eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005091cc mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
L_005091d2:;
  /* 005091d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005091d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005091e0(CPU *c) {
  NATIVE_HOOK(0x5091e0u) REGS; LOADALL;
L_005091e0:;
  /* 005091e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005091e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005091e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005091e5 push 0x626238 */ { u32 v_ = 0x626238u; esp -= 4; M32(esp) = v_; }
  /* 005091ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005091f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005091f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005091f8 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005091fb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005091fc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005091fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005091ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509200 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00509202 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00509205 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00509208 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0050920b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050920c lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050920f mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00509212 call 0x508df0 */ esp -= 4; M32(esp) = 0x509217u; SAVEALL; F_00508df0(c); ABI_CHECK(0x508df0u, 0x509212u); RETCHK(0x509217u, 0x509212u); LOADALL;
  /* 00509217 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0050921a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050921b lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050921e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050921f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00509221 call 0x5076e0 */ esp -= 4; M32(esp) = 0x509226u; SAVEALL; F_005076e0(c); ABI_CHECK(0x5076e0u, 0x509221u); RETCHK(0x509226u, 0x509221u); LOADALL;
  /* 00509226 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00509229 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050922a mov eax, edi */ { eax = (u32)(edi); }
  /* 0050922c call 0x508d80 */ esp -= 4; M32(esp) = 0x509231u; SAVEALL; F_00508d80(c); ABI_CHECK(0x508d80u, 0x50922cu); RETCHK(0x509231u, 0x50922cu); LOADALL;
  /* 00509231 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509232 call 0x508f50 */ esp -= 4; M32(esp) = 0x509237u; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x509232u); RETCHK(0x509237u, 0x509232u); LOADALL;
  /* 00509237 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509239 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050923a je 0x509249 */ if (ZF_) goto L_00509249;
  /* 0050923c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050923f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00509241 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509242 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00509244 call dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509247u; SAVEALL; call_ind(c, t_); RETCHK(0x509247u, 0x509244u); LOADALL; }
  /* 00509247 jmp 0x509254 */ goto L_00509254;
L_00509249:;
  /* 00509249 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050924c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050924d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050924f call 0x507da0 */ esp -= 4; M32(esp) = 0x509254u; SAVEALL; F_00507da0(c); ABI_CHECK(0x507da0u, 0x50924fu); RETCHK(0x509254u, 0x50924fu); LOADALL;
L_00509254:;
  /* 00509254 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00509257 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509259 je 0x509264 */ if (ZF_) goto L_00509264;
  /* 0050925b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050925c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x509261u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50925cu); RETCHK(0x509261u, 0x50925cu); LOADALL;
  /* 00509261 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00509264:;
  /* 00509264 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00509267 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509268 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509269 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050926a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00509271 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509273 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509274 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00509280(CPU *c) {
  NATIVE_HOOK(0x509280u) REGS; LOADALL;
L_00509280:;
  /* 00509280 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509281 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509283 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00509286 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509287 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509288 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0050928b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050928d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050928f lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00509292 call 0x52ce80 */ esp -= 4; M32(esp) = 0x509297u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x509292u); RETCHK(0x509297u, 0x509292u); LOADALL;
  /* 00509297 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509298 call 0x508f50 */ esp -= 4; M32(esp) = 0x50929du; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x509298u); RETCHK(0x50929du, 0x509298u); LOADALL;
  /* 0050929d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050929f je 0x5092bc */ if (ZF_) goto L_005092bc;
  /* 005092a1 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005092a3 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005092a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005092a7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005092aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005092ab mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005092ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005092af mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005092b1 call dword ptr [edx + 0x68] */ { const u32 m_ = (u32)(edx + 0x68u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5092b4u; SAVEALL; call_ind(c, t_); RETCHK(0x5092b4u, 0x5092b1u); LOADALL; }
  /* 005092b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005092b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005092b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005092b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005092b9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005092bc:;
  /* 005092bc mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005092bf mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005092c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005092c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005092c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005092c5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005092c7 call 0x507ed0 */ esp -= 4; M32(esp) = 0x5092ccu; SAVEALL; F_00507ed0(c); ABI_CHECK(0x507ed0u, 0x5092c7u); RETCHK(0x5092ccu, 0x5092c7u); LOADALL;
  /* 005092cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005092cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005092ce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005092d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005092d1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005092e0(CPU *c) {
  NATIVE_HOOK(0x5092e0u) REGS; LOADALL;
L_005092e0:;
  /* 005092e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005092e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005092e3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005092e6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005092e7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005092ea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005092eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005092ec mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005092ef push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005092f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005092f1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005092f3 call 0x507da0 */ esp -= 4; M32(esp) = 0x5092f8u; SAVEALL; F_00507da0(c); ABI_CHECK(0x507da0u, 0x5092f3u); RETCHK(0x5092f8u, 0x5092f3u); LOADALL;
  /* 005092f8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005092fa lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005092fd call 0x52ce80 */ esp -= 4; M32(esp) = 0x509302u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x5092fdu); RETCHK(0x509302u, 0x5092fdu); LOADALL;
  /* 00509302 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509303 call 0x508f50 */ esp -= 4; M32(esp) = 0x509308u; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x509303u); RETCHK(0x509308u, 0x509303u); LOADALL;
  /* 00509308 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050930a je 0x509321 */ if (ZF_) goto L_00509321;
  /* 0050930c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050930e lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00509311 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509312 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509313 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00509315 call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509318u; SAVEALL; call_ind(c, t_); RETCHK(0x509318u, 0x509315u); LOADALL; }
  /* 00509318 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509319 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050931a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050931b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050931d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050931e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00509321:;
  /* 00509321 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509322 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509323 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509325 call 0x507f00 */ esp -= 4; M32(esp) = 0x50932au; SAVEALL; F_00507f00(c); ABI_CHECK(0x507f00u, 0x509325u); RETCHK(0x50932au, 0x509325u); LOADALL;
  /* 0050932a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050932b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050932c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050932d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050932f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509330 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00509340(CPU *c) {
  NATIVE_HOOK(0x509340u) REGS; LOADALL;
L_00509340:;
  /* 00509340 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509341 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509343 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00509346 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509347 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509348 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0050934b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050934d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050934f lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00509352 call 0x52ce80 */ esp -= 4; M32(esp) = 0x509357u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x509352u); RETCHK(0x509357u, 0x509352u); LOADALL;
  /* 00509357 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509358 call 0x508f50 */ esp -= 4; M32(esp) = 0x50935du; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x509358u); RETCHK(0x50935du, 0x509358u); LOADALL;
  /* 0050935d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050935f je 0x509378 */ if (ZF_) goto L_00509378;
  /* 00509361 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00509363 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00509366 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509367 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050936a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050936b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050936d call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509370u; SAVEALL; call_ind(c, t_); RETCHK(0x509370u, 0x50936du); LOADALL; }
  /* 00509370 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509371 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509372 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509374 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509375 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00509378:;
  /* 00509378 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050937b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050937c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050937d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050937f call 0x507f80 */ esp -= 4; M32(esp) = 0x509384u; SAVEALL; F_00507f80(c); ABI_CHECK(0x507f80u, 0x50937fu); RETCHK(0x509384u, 0x50937fu); LOADALL;
  /* 00509384 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509385 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509386 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509388 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509389 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00509390(CPU *c) {
  NATIVE_HOOK(0x509390u) REGS; LOADALL;
L_00509390:;
  /* 00509390 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509391 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509393 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509394 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00509396 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509397 call 0x508f50 */ esp -= 4; M32(esp) = 0x50939cu; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x509397u); RETCHK(0x50939cu, 0x509397u); LOADALL;
  /* 0050939c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050939e je 0x5093ac */ if (ZF_) goto L_005093ac;
  /* 005093a0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005093a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005093a3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005093a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005093a6 jmp dword ptr [edx + 0xb4] */ { const u32 m_ = (u32)(edx + 0xb4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005093ac:;
  /* 005093ac mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005093af mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005093b2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005093b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005093b4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005093b6 call 0x507ff0 */ esp -= 4; M32(esp) = 0x5093bbu; SAVEALL; F_00507ff0(c); ABI_CHECK(0x507ff0u, 0x5093b6u); RETCHK(0x5093bbu, 0x5093b6u); LOADALL;
  /* 005093bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005093bc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005093bd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005093c0(CPU *c) {
  NATIVE_HOOK(0x5093c0u) REGS; LOADALL;
L_005093c0:;
  /* 005093c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005093c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005093c3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005093c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005093c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005093c8 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005093cb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005093cd mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005093cf lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005093d2 call 0x52ce80 */ esp -= 4; M32(esp) = 0x5093d7u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x5093d2u); RETCHK(0x5093d7u, 0x5093d2u); LOADALL;
  /* 005093d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005093d8 call 0x508f50 */ esp -= 4; M32(esp) = 0x5093ddu; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x5093d8u); RETCHK(0x5093ddu, 0x5093d8u); LOADALL;
  /* 005093dd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005093df je 0x5093f8 */ if (ZF_) goto L_005093f8;
  /* 005093e1 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005093e3 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005093e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005093e7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005093ea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005093eb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005093ed call dword ptr [edx + 0x74] */ { const u32 m_ = (u32)(edx + 0x74u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5093f0u; SAVEALL; call_ind(c, t_); RETCHK(0x5093f0u, 0x5093edu); LOADALL; }
  /* 005093f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005093f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005093f2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005093f4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005093f5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005093f8:;
  /* 005093f8 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005093fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005093fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005093fd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005093ff call 0x508030 */ esp -= 4; M32(esp) = 0x509404u; SAVEALL; F_00508030(c); ABI_CHECK(0x508030u, 0x5093ffu); RETCHK(0x509404u, 0x5093ffu); LOADALL;
  /* 00509404 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509405 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509406 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509408 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509409 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00509410(CPU *c) {
  NATIVE_HOOK(0x509410u) REGS; LOADALL;
L_00509410:;
  /* 00509410 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509411 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509413 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00509416 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509417 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509418 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0050941b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050941d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050941f lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00509422 call 0x52ce80 */ esp -= 4; M32(esp) = 0x509427u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x509422u); RETCHK(0x509427u, 0x509422u); LOADALL;
  /* 00509427 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509428 call 0x508f50 */ esp -= 4; M32(esp) = 0x50942du; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x509428u); RETCHK(0x50942du, 0x509428u); LOADALL;
  /* 0050942d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050942f je 0x509448 */ if (ZF_) goto L_00509448;
  /* 00509431 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00509433 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00509436 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509437 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050943a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050943b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050943d call dword ptr [edx + 0x78] */ { const u32 m_ = (u32)(edx + 0x78u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509440u; SAVEALL; call_ind(c, t_); RETCHK(0x509440u, 0x50943du); LOADALL; }
  /* 00509440 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509441 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509442 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509444 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509445 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00509448:;
  /* 00509448 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050944b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050944c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050944d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050944f call 0x5080a0 */ esp -= 4; M32(esp) = 0x509454u; SAVEALL; F_005080a0(c); ABI_CHECK(0x5080a0u, 0x50944fu); RETCHK(0x509454u, 0x50944fu); LOADALL;
  /* 00509454 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509455 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509456 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509458 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509459 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00509460(CPU *c) {
  NATIVE_HOOK(0x509460u) REGS; LOADALL;
L_00509460:;
  /* 00509460 mov byte ptr [0x7a6d18], 0 */ { const u32 m_ = (u32)(0x7a6d18u); M8(m_) = (u8)(0x0u); }
  /* 00509467 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00509470(CPU *c) {
  NATIVE_HOOK(0x509470u) REGS; LOADALL;
L_00509470:;
  /* 00509470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509473 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00509476 cmp eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509479 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050947a jne 0x5094a1 */ if (!ZF_) goto L_005094a1;
  /* 0050947c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050947e call 0x4019a0 */ esp -= 4; M32(esp) = 0x509483u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x50947eu); RETCHK(0x509483u, 0x50947eu); LOADALL;
  /* 00509483 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00509486 mov esi, eax */ { esi = (u32)(eax); }
  /* 00509488 call 0x401e10 */ esp -= 4; M32(esp) = 0x50948du; SAVEALL; F_00401e10(c); ABI_CHECK(0x401e10u, 0x509488u); RETCHK(0x50948du, 0x509488u); LOADALL;
  /* 0050948d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050948f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00509491 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00509493 call 0x559eb0 */ esp -= 4; M32(esp) = 0x509498u; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x509493u); RETCHK(0x509498u, 0x509493u); LOADALL;
  /* 00509498 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509499 call dword ptr [0x62e4d8] */ { const u32 m_ = (u32)(0x62e4d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50949fu; SAVEALL; call_ind(c, t_); RETCHK(0x50949fu, 0x509499u); LOADALL; }
  /* 0050949f jmp 0x5094ad */ goto L_005094ad;
L_005094a1:;
  /* 005094a1 cmp eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005094a4 jne 0x5094ad */ if (!ZF_) goto L_005094ad;
  /* 005094a6 mov byte ptr [0x7a6d18], 0 */ { const u32 m_ = (u32)(0x7a6d18u); M8(m_) = (u8)(0x0u); }
L_005094ad:;
  /* 005094ad mov al, byte ptr [0x7a67f4] */ { const u32 m_ = (u32)(0x7a67f4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005094b2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005094b4 je 0x509521 */ if (ZF_) goto L_00509521;
  /* 005094b6 mov eax, dword ptr [0x7a6d2c] */ { const u32 m_ = (u32)(0x7a6d2cu); eax = (u32)(M32(m_)); }
  /* 005094bb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005094bd je 0x5094c6 */ if (ZF_) goto L_005094c6;
  /* 005094bf xor cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005094c1 call 0x51c660 */ esp -= 4; M32(esp) = 0x5094c6u; SAVEALL; F_0051c660(c); ABI_CHECK(0x51c660u, 0x5094c1u); RETCHK(0x5094c6u, 0x5094c1u); LOADALL;
L_005094c6:;
  /* 005094c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005094c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005094c8 call 0x518bb0 */ esp -= 4; M32(esp) = 0x5094cdu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5094c8u); RETCHK(0x5094cdu, 0x5094c8u); LOADALL;
  /* 005094cd mov dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005094d4 mov dword ptr [0x7a81bc], 0xffffffff */ { const u32 m_ = (u32)(0x7a81bcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005094de call 0x550820 */ esp -= 4; M32(esp) = 0x5094e3u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x5094deu); RETCHK(0x5094e3u, 0x5094deu); LOADALL;
  /* 005094e3 mov ebx, 0x2007 */ { ebx = (u32)(0x2007u); }
  /* 005094e8 mov edi, eax */ { edi = (u32)(eax); }
  /* 005094ea call 0x54be60 */ esp -= 4; M32(esp) = 0x5094efu; SAVEALL; F_0054be60(c); ABI_CHECK(0x54be60u, 0x5094eau); RETCHK(0x5094efu, 0x5094eau); LOADALL;
  /* 005094ef mov edi, eax */ { edi = (u32)(eax); }
  /* 005094f1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005094f3 je 0x50951f */ if (ZF_) goto L_0050951f;
  /* 005094f5 mov al, byte ptr [edi + 0xc6e0] */ { const u32 m_ = (u32)(edi + 0xc6e0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005094fb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005094fd jne 0x50950a */ if (!ZF_) goto L_0050950a;
  /* 005094ff lea esi, [edi + 0xc6d8] */ esi = (u32)((u32)(edi + 0xc6d8u));
  /* 00509505 call 0x4cc5c0 */ esp -= 4; M32(esp) = 0x50950au; SAVEALL; F_004cc5c0(c); ABI_CHECK(0x4cc5c0u, 0x509505u); RETCHK(0x50950au, 0x509505u); LOADALL;
L_0050950a:;
  /* 0050950a mov al, byte ptr [edi + 0xce98] */ { const u32 m_ = (u32)(edi + 0xce98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509510 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509512 je 0x50951f */ if (ZF_) goto L_0050951f;
  /* 00509514 mov eax, edi */ { eax = (u32)(edi); }
  /* 00509516 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509517 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00509518 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509519 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050951a jmp 0x4cd790 */ SAVEALL; F_004cd790(c); return;
L_0050951f:;
  /* 0050951f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509520 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00509521:;
  /* 00509521 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509522 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509523 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00509530(CPU *c) {
  NATIVE_HOOK(0x509530u) REGS; LOADALL;
L_00509530:;
  /* 00509530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509533 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509534 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509535 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00509537 call 0x508d10 */ esp -= 4; M32(esp) = 0x50953cu; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x509537u); RETCHK(0x50953cu, 0x509537u); LOADALL;
  /* 0050953c mov esi, eax */ { esi = (u32)(eax); }
  /* 0050953e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509540 je 0x5095f1 */ if (ZF_) goto L_005095f1;
  /* 00509546 call 0x5084b0 */ esp -= 4; M32(esp) = 0x50954bu; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x509546u); RETCHK(0x50954bu, 0x509546u); LOADALL;
  /* 0050954b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050954d je 0x5095f1 */ if (ZF_) goto L_005095f1;
  /* 00509553 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00509556 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00509559 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0050955c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050955e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050955f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00509560 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509561 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509563 call dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509566u; SAVEALL; call_ind(c, t_); RETCHK(0x509566u, 0x509563u); LOADALL; }
  /* 00509566 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509568 jne 0x5095e9 */ if (!ZF_) goto L_005095e9;
  /* 0050956a cmp edi, 0x1b */ { u32 a_ = edi, b_ = 0x1bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050956d jne 0x509605 */ if (!ZF_) goto L_00509605;
  /* 00509573 mov al, byte ptr [0x7a6d18] */ { const u32 m_ = (u32)(0x7a6d18u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509578 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050957a jne 0x5095e9 */ if (!ZF_) goto L_005095e9;
  /* 0050957c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050957e call 0x4019a0 */ esp -= 4; M32(esp) = 0x509583u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x50957eu); RETCHK(0x509583u, 0x50957eu); LOADALL;
  /* 00509583 mov ecx, dword ptr [eax + 0xb18] */ { const u32 m_ = (u32)(eax + 0xb18u); ecx = (u32)(M32(m_)); }
  /* 00509589 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050958c cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050958f jne 0x5095e9 */ if (!ZF_) goto L_005095e9;
  /* 00509591 call 0x550820 */ esp -= 4; M32(esp) = 0x509596u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x509591u); RETCHK(0x509596u, 0x509591u); LOADALL;
  /* 00509596 mov cl, byte ptr [eax + 0xc8] */ { const u32 m_ = (u32)(eax + 0xc8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050959c test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050959e je 0x5095b4 */ if (ZF_) goto L_005095b4;
  /* 005095a0 call 0x550820 */ esp -= 4; M32(esp) = 0x5095a5u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x5095a0u); RETCHK(0x5095a5u, 0x5095a0u); LOADALL;
  /* 005095a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005095a6 mov byte ptr [eax + 0xc8], 0 */ { const u32 m_ = (u32)(eax + 0xc8u); M8(m_) = (u8)(0x0u); }
  /* 005095ad mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005095af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005095b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005095b1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005095b4:;
  /* 005095b4 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 005095b9 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 005095be push 0x509460 */ { u32 v_ = 0x509460u; esp -= 4; M32(esp) = v_; }
  /* 005095c3 push 0x509470 */ { u32 v_ = 0x509470u; esp -= 4; M32(esp) = v_; }
  /* 005095c8 push 0x45 */ { u32 v_ = 0x45u; esp -= 4; M32(esp) = v_; }
  /* 005095ca push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 005095cf mov byte ptr [0x7a6d18], 1 */ { const u32 m_ = (u32)(0x7a6d18u); M8(m_) = (u8)(0x1u); }
  /* 005095d6 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5095dcu; SAVEALL; call_ind(c, t_); RETCHK(0x5095dcu, 0x5095d6u); LOADALL; }
  /* 005095dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005095dd push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005095df push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005095e1 call 0x50b090 */ esp -= 4; M32(esp) = 0x5095e6u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x5095e1u); RETCHK(0x5095e6u, 0x5095e1u); LOADALL;
  /* 005095e6 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005095e9:;
  /* 005095e9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005095ea mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005095ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005095ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005095ee ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005095f1:;
  /* 005095f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005095f2 call 0x508f50 */ esp -= 4; M32(esp) = 0x5095f7u; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x5095f2u); RETCHK(0x5095f7u, 0x5095f2u); LOADALL;
  /* 005095f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005095f9 je 0x509605 */ if (ZF_) goto L_00509605;
  /* 005095fb mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005095fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005095fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005095ff mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00509601 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509602 jmp dword ptr [edx + 0x7c] */ { const u32 m_ = (u32)(edx + 0x7cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00509605:;
  /* 00509605 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509606 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00509608 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509609 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050960a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00509610(CPU *c) {
  NATIVE_HOOK(0x509610u) REGS; LOADALL;
L_00509610:;
  /* 00509610 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509611 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509613 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509614 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509615 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509616 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00509618 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509619 call 0x508f50 */ esp -= 4; M32(esp) = 0x50961eu; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x509619u); RETCHK(0x50961eu, 0x509619u); LOADALL;
  /* 0050961e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509620 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00509623 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00509626 je 0x509638 */ if (ZF_) goto L_00509638;
  /* 00509628 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050962b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050962d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050962e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050962f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509630 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00509632 call dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509638u; SAVEALL; call_ind(c, t_); RETCHK(0x509638u, 0x509632u); LOADALL; }
L_00509638:;
  /* 00509638 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050963a call 0x508d10 */ esp -= 4; M32(esp) = 0x50963fu; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x50963au); RETCHK(0x50963fu, 0x50963au); LOADALL;
  /* 0050963f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509641 je 0x509653 */ if (ZF_) goto L_00509653;
  /* 00509643 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00509646 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00509648 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509649 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050964a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050964b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050964d call dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509653u; SAVEALL; call_ind(c, t_); RETCHK(0x509653u, 0x50964du); LOADALL; }
L_00509653:;
  /* 00509653 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509654 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509655 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00509656 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509657 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00509660(CPU *c) {
  NATIVE_HOOK(0x509660u) REGS; LOADALL;
L_00509660:;
  /* 00509660 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509661 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509663 call 0x508d10 */ esp -= 4; M32(esp) = 0x509668u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x509663u); RETCHK(0x509668u, 0x509663u); LOADALL;
  /* 00509668 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050966a je 0x509677 */ if (ZF_) goto L_00509677;
  /* 0050966c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050966e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00509670 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509671 jmp dword ptr [edx + 0x84] */ { const u32 m_ = (u32)(edx + 0x84u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00509677:;
  /* 00509677 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00509679 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050967a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00509680(CPU *c) {
  NATIVE_HOOK(0x509680u) REGS; LOADALL;
L_00509680:;
  /* 00509680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509683 call 0x508d10 */ esp -= 4; M32(esp) = 0x509688u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x509683u); RETCHK(0x509688u, 0x509683u); LOADALL;
  /* 00509688 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050968a je 0x509697 */ if (ZF_) goto L_00509697;
  /* 0050968c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050968e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00509690 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509691 jmp dword ptr [edx + 0x88] */ { const u32 m_ = (u32)(edx + 0x88u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00509697:;
  /* 00509697 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509698 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005096a0(CPU *c) {
  NATIVE_HOOK(0x5096a0u) REGS; LOADALL;
L_005096a0:;
  /* 005096a0 call 0x508d10 */ esp -= 4; M32(esp) = 0x5096a5u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x5096a0u); RETCHK(0x5096a5u, 0x5096a0u); LOADALL;
  /* 005096a5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005096a7 je 0x5096b3 */ if (ZF_) goto L_005096b3;
  /* 005096a9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005096ab mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005096ad jmp dword ptr [edx + 0x90] */ { const u32 m_ = (u32)(edx + 0x90u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005096b3:;
  /* 005096b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005096c0(CPU *c) {
  NATIVE_HOOK(0x5096c0u) REGS; LOADALL;
L_005096c0:;
  /* 005096c0 call 0x508d10 */ esp -= 4; M32(esp) = 0x5096c5u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x5096c0u); RETCHK(0x5096c5u, 0x5096c0u); LOADALL;
  /* 005096c5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005096c7 je 0x5096d3 */ if (ZF_) goto L_005096d3;
  /* 005096c9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005096cb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005096cd jmp dword ptr [edx + 0x94] */ { const u32 m_ = (u32)(edx + 0x94u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005096d3:;
  /* 005096d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005096e0(CPU *c) {
  NATIVE_HOOK(0x5096e0u) REGS; LOADALL;
L_005096e0:;
  /* 005096e0 call 0x508d10 */ esp -= 4; M32(esp) = 0x5096e5u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x5096e0u); RETCHK(0x5096e5u, 0x5096e0u); LOADALL;
  /* 005096e5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005096e7 je 0x5096f3 */ if (ZF_) goto L_005096f3;
  /* 005096e9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005096eb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005096ed jmp dword ptr [edx + 0x98] */ { const u32 m_ = (u32)(edx + 0x98u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_005096f3:;
  /* 005096f3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00509700(CPU *c) {
  NATIVE_HOOK(0x509700u) REGS; LOADALL;
L_00509700:;
  /* 00509700 jmp 0x50c550 */ SAVEALL; F_0050c550(c); return;
}

void F_00509710(CPU *c) {
  NATIVE_HOOK(0x509710u) REGS; LOADALL;
L_00509710:;
  /* 00509710 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509711 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509713 call 0x508d10 */ esp -= 4; M32(esp) = 0x509718u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x509713u); RETCHK(0x509718u, 0x509713u); LOADALL;
  /* 00509718 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050971a je 0x509727 */ if (ZF_) goto L_00509727;
  /* 0050971c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050971e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00509720 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509721 jmp dword ptr [edx + 0x9c] */ { const u32 m_ = (u32)(edx + 0x9cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00509727:;
  /* 00509727 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509728 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00509730(CPU *c) {
  NATIVE_HOOK(0x509730u) REGS; LOADALL;
L_00509730:;
  /* 00509730 mov al, byte ptr [0x7a67f4] */ { const u32 m_ = (u32)(0x7a67f4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509735 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509737 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509738 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 0050973d mov byte ptr [0x7a6d18], bl */ { const u32 m_ = (u32)(0x7a6d18u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00509743 mov byte ptr [0x7a6d17], bl */ { const u32 m_ = (u32)(0x7a6d17u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00509749 je 0x509770 */ if (ZF_) goto L_00509770;
  /* 0050974b mov eax, dword ptr [0x7a6d2c] */ { const u32 m_ = (u32)(0x7a6d2cu); eax = (u32)(M32(m_)); }
  /* 00509750 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509752 je 0x50975e */ if (ZF_) goto L_0050975e;
  /* 00509754 mov cl, bl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00509756 mov byte ptr [eax + 0x34], bl */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00509759 call 0x51c660 */ esp -= 4; M32(esp) = 0x50975eu; SAVEALL; F_0051c660(c); ABI_CHECK(0x51c660u, 0x509759u); RETCHK(0x50975eu, 0x509759u); LOADALL;
L_0050975e:;
  /* 0050975e call 0x518bb0 */ esp -= 4; M32(esp) = 0x509763u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50975eu); RETCHK(0x509763u, 0x50975eu); LOADALL;
  /* 00509763 mov dword ptr [eax + 8], ebx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00509766 mov dword ptr [0x7a81bc], 0 */ { const u32 m_ = (u32)(0x7a81bcu); M32(m_) = (u32)(0x0u); }
L_00509770:;
  /* 00509770 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00509775 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0050977a push 0x509460 */ { u32 v_ = 0x509460u; esp -= 4; M32(esp) = v_; }
  /* 0050977f push 0x509470 */ { u32 v_ = 0x509470u; esp -= 4; M32(esp) = v_; }
  /* 00509784 push 0x45 */ { u32 v_ = 0x45u; esp -= 4; M32(esp) = v_; }
  /* 00509786 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0050978b call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509791u; SAVEALL; call_ind(c, t_); RETCHK(0x509791u, 0x50978bu); LOADALL; }
  /* 00509791 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509792 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00509794 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00509796 call 0x50b090 */ esp -= 4; M32(esp) = 0x50979bu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x509796u); RETCHK(0x50979bu, 0x509796u); LOADALL;
  /* 0050979b add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050979e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050979f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005097a0(CPU *c) {
  NATIVE_HOOK(0x5097a0u) REGS; LOADALL;
L_005097a0:;
  /* 005097a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005097a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005097a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005097a5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 005097aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005097b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005097b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005097b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005097b9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005097ba push 0x509820 */ { u32 v_ = 0x509820u; esp -= 4; M32(esp) = v_; }
  /* 005097bf sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005097c2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005097c4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 005097c6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005097c9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 005097cc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005097ce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005097cf lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 005097d2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005097d9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005097dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005097dd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005097e0 call 0x404140 */ esp -= 4; M32(esp) = 0x5097e5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5097e0u); RETCHK(0x5097e5u, 0x5097e0u); LOADALL;
  /* 005097e5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005097e8 call 0x405c00 */ esp -= 4; M32(esp) = 0x5097edu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x5097e8u); RETCHK(0x5097edu, 0x5097e8u); LOADALL;
  /* 005097ed mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005097ef call 0x405c80 */ esp -= 4; M32(esp) = 0x5097f4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x5097efu); RETCHK(0x5097f4u, 0x5097efu); LOADALL;
  /* 005097f4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005097f8 jb 0x509806 */ if (CF_) goto L_00509806;
  /* 005097fa mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005097fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005097fe call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x509803u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5097feu); RETCHK(0x509803u, 0x5097feu); LOADALL;
  /* 00509803 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00509806:;
  /* 00509806 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00509809 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050980b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00509812 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00509813 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509815 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509816 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00509820(CPU *c) {
  NATIVE_HOOK(0x509820u) REGS; LOADALL;
L_00509820:;
  /* 00509820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509823 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00509825 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050982a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00509830 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509831 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00509838 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509839 push 0x21c */ { u32 v_ = 0x21cu; esp -= 4; M32(esp) = v_; }
  /* 0050983e call 0x5fe934 */ esp -= 4; M32(esp) = 0x509843u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50983eu); RETCHK(0x509843u, 0x50983eu); LOADALL;
  /* 00509843 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00509846 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00509849 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050984b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00509852 je 0x50986a */ if (ZF_) goto L_0050986a;
  /* 00509854 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00509856 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509857 call 0x508b20 */ esp -= 4; M32(esp) = 0x50985cu; SAVEALL; F_00508b20(c); ABI_CHECK(0x508b20u, 0x509857u); RETCHK(0x50985cu, 0x509857u); LOADALL;
  /* 0050985c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050985f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00509866 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509868 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509869 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050986a:;
  /* 0050986a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050986d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050986f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00509876 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509878 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509879 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00509880(CPU *c) {
  NATIVE_HOOK(0x509880u) REGS; LOADALL;
L_00509880:;
  /* 00509880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509883 mov eax, edx */ { eax = (u32)(edx); }
  /* 00509885 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509886 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 00509889 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00509890:;
  /* 00509890 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509892 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00509893 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509895 jne 0x509890 */ if (!ZF_) goto L_00509890;
  /* 00509897 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050989a sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050989c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050989d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050989e add ecx, 0xb4 */ { u32 a_ = ecx, b_ = 0xb4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005098a4 call 0x404420 */ esp -= 4; M32(esp) = 0x5098a9u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5098a4u); RETCHK(0x5098a9u, 0x5098a4u); LOADALL;
  /* 005098a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005098aa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005098ab ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005098b0(CPU *c) {
  NATIVE_HOOK(0x5098b0u) REGS; LOADALL;
L_005098b0:;
  /* 005098b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005098b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005098b3 mov eax, edx */ { eax = (u32)(edx); }
  /* 005098b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005098b6 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 005098b9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005098c0:;
  /* 005098c0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005098c2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005098c3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005098c5 jne 0x5098c0 */ if (!ZF_) goto L_005098c0;
  /* 005098c7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005098ca sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005098cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005098cd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005098ce add ecx, 0xd0 */ { u32 a_ = ecx, b_ = 0xd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005098d4 call 0x404420 */ esp -= 4; M32(esp) = 0x5098d9u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5098d4u); RETCHK(0x5098d9u, 0x5098d4u); LOADALL;
  /* 005098d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005098da pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005098db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005098e0(CPU *c) {
  NATIVE_HOOK(0x5098e0u) REGS; LOADALL;
L_005098e0:;
  /* 005098e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005098e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005098e3 mov eax, edx */ { eax = (u32)(edx); }
  /* 005098e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005098e6 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 005098e9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005098f0:;
  /* 005098f0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005098f2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005098f3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005098f5 jne 0x5098f0 */ if (!ZF_) goto L_005098f0;
  /* 005098f7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005098fa sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005098fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005098fd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005098fe add ecx, 0xec */ { u32 a_ = ecx, b_ = 0xecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00509904 call 0x404420 */ esp -= 4; M32(esp) = 0x509909u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x509904u); RETCHK(0x509909u, 0x509904u); LOADALL;
  /* 00509909 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050990a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050990b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00509910(CPU *c) {
  NATIVE_HOOK(0x509910u) REGS; LOADALL;
L_00509910:;
  /* 00509910 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509911 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509913 mov eax, edx */ { eax = (u32)(edx); }
  /* 00509915 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509916 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 00509919 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00509920:;
  /* 00509920 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509922 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00509923 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509925 jne 0x509920 */ if (!ZF_) goto L_00509920;
  /* 00509927 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050992a sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050992c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050992d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050992e add ecx, 0x108 */ { u32 a_ = ecx, b_ = 0x108u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00509934 call 0x404420 */ esp -= 4; M32(esp) = 0x509939u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x509934u); RETCHK(0x509939u, 0x509934u); LOADALL;
  /* 00509939 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050993a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050993b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00509940(CPU *c) {
  NATIVE_HOOK(0x509940u) REGS; LOADALL;
L_00509940:;
  /* 00509940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509943 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00509949 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050994b push 0x61df22 */ { u32 v_ = 0x61df22u; esp -= 4; M32(esp) = v_; }
  /* 00509950 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509951 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00509954 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050995b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050995c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050995d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00509960 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00509962 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509964 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509965 jne 0x509971 */ if (!ZF_) goto L_00509971;
  /* 00509967 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50996cu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x509967u); RETCHK(0x50996cu, 0x509967u); LOADALL;
  /* 0050996c call 0x5180e0 */ esp -= 4; M32(esp) = 0x509971u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x50996cu); RETCHK(0x509971u, 0x50996cu); LOADALL;
L_00509971:;
  /* 00509971 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509972 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509973 call 0x50bb70 */ esp -= 4; M32(esp) = 0x509978u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x509973u); RETCHK(0x509978u, 0x509973u); LOADALL;
  /* 00509978 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050997b mov dword ptr [esi], 0x650e48 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650e48u); }
  /* 00509981 mov dword ptr [esi + 0x1e4], 0xf */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(0xfu); }
  /* 0050998b mov dword ptr [esi + 0x1e0], ebx */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(ebx); }
  /* 00509991 mov byte ptr [esi + 0x1d0], bl */ { const u32 m_ = (u32)(esi + 0x1d0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00509997 lea edi, [esi + 0x1e8] */ edi = (u32)((u32)(esi + 0x1e8u));
  /* 0050999d call 0x5275b0 */ esp -= 4; M32(esp) = 0x5099a2u; SAVEALL; F_005275b0(c); ABI_CHECK(0x5275b0u, 0x50999du); RETCHK(0x5099a2u, 0x50999du); LOADALL;
  /* 005099a2 lea edi, [esi + 0x294] */ edi = (u32)((u32)(esi + 0x294u));
  /* 005099a8 call 0x5275b0 */ esp -= 4; M32(esp) = 0x5099adu; SAVEALL; F_005275b0(c); ABI_CHECK(0x5275b0u, 0x5099a8u); RETCHK(0x5099adu, 0x5099a8u); LOADALL;
  /* 005099ad push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005099af push 0x651018 */ { u32 v_ = 0x651018u; esp -= 4; M32(esp) = v_; }
  /* 005099b4 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 005099b7 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 005099bb call 0x404420 */ esp -= 4; M32(esp) = 0x5099c0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5099bbu); RETCHK(0x5099c0u, 0x5099bbu); LOADALL;
  /* 005099c0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005099c3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005099c5 mov byte ptr [esi + 0x34d], al */ { const u32 m_ = (u32)(esi + 0x34du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005099cb mov byte ptr [esi + 0x340], bl */ { const u32 m_ = (u32)(esi + 0x340u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005099d1 mov byte ptr [esi + 0x34c], bl */ { const u32 m_ = (u32)(esi + 0x34cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005099d7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005099d8 mov byte ptr [0x696e28], al */ { const u32 m_ = (u32)(0x696e28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005099dd mov eax, esi */ { eax = (u32)(esi); }
  /* 005099df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005099e0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005099e7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005099e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005099ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005099eb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005099f0(CPU *c) {
  NATIVE_HOOK(0x5099f0u) REGS; LOADALL;
L_005099f0:;
  /* 005099f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005099f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005099f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005099f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005099f6 call 0x509a20 */ esp -= 4; M32(esp) = 0x5099fbu; SAVEALL; F_00509a20(c); ABI_CHECK(0x509a20u, 0x5099f6u); RETCHK(0x5099fbu, 0x5099f6u); LOADALL;
  /* 005099fb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005099ff je 0x509a0a */ if (ZF_) goto L_00509a0a;
  /* 00509a01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509a02 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x509a07u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x509a02u); RETCHK(0x509a07u, 0x509a02u); LOADALL;
  /* 00509a07 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00509a0a:;
  /* 00509a0a mov eax, esi */ { eax = (u32)(esi); }
  /* 00509a0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509a0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509a0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00509a20(CPU *c) {
  NATIVE_HOOK(0x509a20u) REGS; LOADALL;
L_00509a20:;
  /* 00509a20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509a21 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00509a23 lea ecx, [esi + 0x294] */ ecx = (u32)((u32)(esi + 0x294u));
  /* 00509a29 mov dword ptr [esi], 0x650e48 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650e48u); }
  /* 00509a2f mov byte ptr [0x696e28], 0 */ { const u32 m_ = (u32)(0x696e28u); M8(m_) = (u8)(0x0u); }
  /* 00509a36 call 0x527610 */ esp -= 4; M32(esp) = 0x509a3bu; SAVEALL; F_00527610(c); ABI_CHECK(0x527610u, 0x509a36u); RETCHK(0x509a3bu, 0x509a36u); LOADALL;
  /* 00509a3b lea ecx, [esi + 0x1e8] */ ecx = (u32)((u32)(esi + 0x1e8u));
  /* 00509a41 call 0x527610 */ esp -= 4; M32(esp) = 0x509a46u; SAVEALL; F_00527610(c); ABI_CHECK(0x527610u, 0x509a41u); RETCHK(0x509a46u, 0x509a41u); LOADALL;
  /* 00509a46 cmp dword ptr [esi + 0x1e4], 0x10 */ { const u32 m_ = (u32)(esi + 0x1e4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509a4d jb 0x509a5e */ if (CF_) goto L_00509a5e;
  /* 00509a4f mov eax, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00509a55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509a56 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x509a5bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x509a56u); RETCHK(0x509a5bu, 0x509a56u); LOADALL;
  /* 00509a5b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00509a5e:;
  /* 00509a5e mov dword ptr [esi + 0x1e4], 0xf */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(0xfu); }
  /* 00509a68 mov dword ptr [esi + 0x1e0], 0 */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0x0u); }
  /* 00509a72 mov byte ptr [esi + 0x1d0], 0 */ { const u32 m_ = (u32)(esi + 0x1d0u); M8(m_) = (u8)(0x0u); }
  /* 00509a79 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509a7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509a7c jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_00509a90(CPU *c) {
  NATIVE_HOOK(0x509a90u) REGS; LOADALL;
L_00509a90:;
  /* 00509a90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509a91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509a93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00509a95 push 0x621320 */ { u32 v_ = 0x621320u; esp -= 4; M32(esp) = v_; }
  /* 00509a9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00509aa0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509aa1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00509aa8 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00509aab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509aac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509aad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509aae mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00509ab0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00509ab3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509ab5 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00509ab8 je 0x509c0d */ if (ZF_) goto L_00509c0d;
  /* 00509abe mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00509ac0 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509ac3u; SAVEALL; call_ind(c, t_); RETCHK(0x509ac3u, 0x509ac0u); LOADALL; }
  /* 00509ac3 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00509ac8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00509aca call 0x560fd0 */ esp -= 4; M32(esp) = 0x509acfu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x509acau); RETCHK(0x509acfu, 0x509acau); LOADALL;
  /* 00509acf mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00509ad2 fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 00509ad5 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00509ada mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00509adc fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00509adf call 0x560fd0 */ esp -= 4; M32(esp) = 0x509ae4u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x509adfu); RETCHK(0x509ae4u, 0x509adfu); LOADALL;
  /* 00509ae4 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00509ae7 fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 00509aea push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00509aef mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00509af1 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00509af4 call 0x560fd0 */ esp -= 4; M32(esp) = 0x509af9u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x509af4u); RETCHK(0x509af9u, 0x509af4u); LOADALL;
  /* 00509af9 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00509afc fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 00509aff push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00509b04 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00509b06 fadd dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00509b09 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00509b0c call 0x560fd0 */ esp -= 4; M32(esp) = 0x509b11u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x509b0cu); RETCHK(0x509b11u, 0x509b0cu); LOADALL;
  /* 00509b11 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00509b14 fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 00509b17 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509b18 mov eax, 0x6505c8 */ { eax = (u32)(0x6505c8u); }
  /* 00509b1d fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00509b20 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00509b23 call 0x560ed0 */ esp -= 4; M32(esp) = 0x509b28u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x509b23u); RETCHK(0x509b28u, 0x509b23u); LOADALL;
  /* 00509b28 mov esi, eax */ { esi = (u32)(eax); }
  /* 00509b2a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509b2c lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 00509b2f nop */ ;
L_00509b30:;
  /* 00509b30 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509b32 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00509b33 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509b35 jne 0x509b30 */ if (!ZF_) goto L_00509b30;
  /* 00509b37 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00509b39 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509b3a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509b3b lea ecx, [edi + 0x188] */ ecx = (u32)((u32)(edi + 0x188u));
  /* 00509b41 call 0x404420 */ esp -= 4; M32(esp) = 0x509b46u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x509b41u); RETCHK(0x509b46u, 0x509b41u); LOADALL;
  /* 00509b46 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509b47 mov eax, 0x6505bc */ { eax = (u32)(0x6505bcu); }
  /* 00509b4c call 0x560ed0 */ esp -= 4; M32(esp) = 0x509b51u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x509b4cu); RETCHK(0x509b51u, 0x509b4cu); LOADALL;
  /* 00509b51 mov esi, eax */ { esi = (u32)(eax); }
  /* 00509b53 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509b55 lea eax, [ecx + 1] */ eax = (u32)((u32)(ecx + 0x1u));
L_00509b58:;
  /* 00509b58 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509b5a inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00509b5b test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509b5d jne 0x509b58 */ if (!ZF_) goto L_00509b58;
  /* 00509b5f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00509b61 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509b62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509b63 lea ecx, [edi + 0x1a4] */ ecx = (u32)((u32)(edi + 0x1a4u));
  /* 00509b69 call 0x404420 */ esp -= 4; M32(esp) = 0x509b6eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x509b69u); RETCHK(0x509b6eu, 0x509b69u); LOADALL;
  /* 00509b6e mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00509b71 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509b73 je 0x509b81 */ if (ZF_) goto L_00509b81;
  /* 00509b75 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509b76 lea esi, [ebp - 0x24] */ esi = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00509b79 call 0x52d060 */ esp -= 4; M32(esp) = 0x509b7eu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x509b79u); RETCHK(0x509b7eu, 0x509b79u); LOADALL;
  /* 00509b7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00509b81:;
  /* 00509b81 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509b82 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00509b87 call 0x560ed0 */ esp -= 4; M32(esp) = 0x509b8cu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x509b87u); RETCHK(0x509b8cu, 0x509b87u); LOADALL;
  /* 00509b8c mov esi, eax */ { esi = (u32)(eax); }
  /* 00509b8e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509b90 mov dword ptr [ebp - 0x28], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0xfu); }
  /* 00509b97 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 00509b9e mov byte ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)(0x0u); }
  /* 00509ba2 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00509ba5:;
  /* 00509ba5 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509ba7 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00509ba8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509baa jne 0x509ba5 */ if (!ZF_) goto L_00509ba5;
  /* 00509bac sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00509bae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509baf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509bb0 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00509bb3 call 0x404420 */ esp -= 4; M32(esp) = 0x509bb8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x509bb3u); RETCHK(0x509bb8u, 0x509bb3u); LOADALL;
  /* 00509bb8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00509bba push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509bbb mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 00509bc0 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00509bc3 call 0x560ed0 */ esp -= 4; M32(esp) = 0x509bc8u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x509bc3u); RETCHK(0x509bc8u, 0x509bc3u); LOADALL;
  /* 00509bc8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509bc9 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00509bcc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509bcd lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00509bd0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00509bd1 mov eax, edi */ { eax = (u32)(edi); }
  /* 00509bd3 call 0x509ce0 */ esp -= 4; M32(esp) = 0x509bd8u; SAVEALL; F_00509ce0(c); ABI_CHECK(0x509ce0u, 0x509bd3u); RETCHK(0x509bd8u, 0x509bd3u); LOADALL;
  /* 00509bd8 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00509bda neg bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (0u - a_) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 00509bdc sbb bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00509bde mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00509be5 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00509be8 inc bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 00509bea cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509bed jb 0x509bfb */ if (CF_) goto L_00509bfb;
  /* 00509bef mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 00509bf2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509bf3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x509bf8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x509bf3u); RETCHK(0x509bf8u, 0x509bf3u); LOADALL;
  /* 00509bf8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00509bfb:;
  /* 00509bfb test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509bfd mov dword ptr [ebp - 0x28], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0xfu); }
  /* 00509c04 mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 00509c07 mov byte ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)(0x0u); }
  /* 00509c0b je 0x509c22 */ if (ZF_) goto L_00509c22;
L_00509c0d:;
  /* 00509c0d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00509c0f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00509c12 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00509c19 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509c1a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509c1b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00509c1c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509c1e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509c1f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00509c22:;
  /* 00509c22 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00509c25 mov ebx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ebx = (u32)(M32(m_)); }
  /* 00509c28 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509c2a je 0x509cad */ if (ZF_) goto L_00509cad;
L_00509c30:;
  /* 00509c30 mov edx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00509c33 add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00509c36 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00509c39 mov esi, esp */ { esi = (u32)(esp); }
  /* 00509c3b mov eax, edx */ { eax = (u32)(edx); }
  /* 00509c3d mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00509c44 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 00509c4b mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 00509c4e mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 00509c52 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
L_00509c55:;
  /* 00509c55 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509c57 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00509c58 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509c5a jne 0x509c55 */ if (!ZF_) goto L_00509c55;
  /* 00509c5c sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00509c5e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509c5f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00509c60 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509c62 call 0x404420 */ esp -= 4; M32(esp) = 0x509c67u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x509c62u); RETCHK(0x509c67u, 0x509c62u); LOADALL;
  /* 00509c67 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00509c6e call 0x405c00 */ esp -= 4; M32(esp) = 0x509c73u; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x509c6eu); RETCHK(0x509c73u, 0x509c6eu); LOADALL;
  /* 00509c73 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00509c75 call 0x4064e0 */ esp -= 4; M32(esp) = 0x509c7au; SAVEALL; F_004064e0(c); ABI_CHECK(0x4064e0u, 0x509c75u); RETCHK(0x509c7au, 0x509c75u); LOADALL;
  /* 00509c7a mov esi, eax */ { esi = (u32)(eax); }
  /* 00509c7c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509c7e je 0x509ca3 */ if (ZF_) goto L_00509ca3;
  /* 00509c80 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00509c83 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00509c85 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509c86 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509c88 call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509c8bu; SAVEALL; call_ind(c, t_); RETCHK(0x509c8bu, 0x509c88u); LOADALL; }
  /* 00509c8b fild dword ptr [0x7a595c] */ { const u32 m_ = (u32)(0x7a595cu); FPUSH((double)(s32)M32(m_)); }
  /* 00509c91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509c92 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509c94 fmul dword ptr [0x6570fc] */ { const u32 m_ = (u32)(0x6570fcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00509c9a fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00509c9d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509c9e call 0x506f40 */ esp -= 4; M32(esp) = 0x509ca3u; SAVEALL; F_00506f40(c); ABI_CHECK(0x506f40u, 0x509c9eu); RETCHK(0x509ca3u, 0x509c9eu); LOADALL;
L_00509ca3:;
  /* 00509ca3 mov ebx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ebx = (u32)(M32(m_)); }
  /* 00509ca6 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509ca8 jne 0x509c30 */ if (!ZF_) goto L_00509c30;
  /* 00509caa mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
L_00509cad:;
  /* 00509cad mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00509caf mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00509cb1 call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509cb7u; SAVEALL; call_ind(c, t_); RETCHK(0x509cb7u, 0x509cb1u); LOADALL; }
  /* 00509cb7 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00509cb9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00509cbb call dword ptr [eax + 0xf0] */ { const u32 m_ = (u32)(eax + 0xf0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509cc1u; SAVEALL; call_ind(c, t_); RETCHK(0x509cc1u, 0x509cbbu); LOADALL; }
  /* 00509cc1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00509cc4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509cc5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509cc6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00509ccd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00509cce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509cd0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509cd1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00509ce0(CPU *c) {
  NATIVE_HOOK(0x509ce0u) REGS; LOADALL;
L_00509ce0:;
  /* 00509ce0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509ce1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509ce3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509ce4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509ce5 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00509ce7 call 0x518bb0 */ esp -= 4; M32(esp) = 0x509cecu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x509ce7u); RETCHK(0x509cecu, 0x509ce7u); LOADALL;
  /* 00509cec call 0x5180e0 */ esp -= 4; M32(esp) = 0x509cf1u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x509cecu); RETCHK(0x509cf1u, 0x509cecu); LOADALL;
  /* 00509cf1 mov esi, eax */ { esi = (u32)(eax); }
  /* 00509cf3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509cf5 call 0x508d10 */ esp -= 4; M32(esp) = 0x509cfau; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x509cf5u); RETCHK(0x509cfau, 0x509cf5u); LOADALL;
  /* 00509cfa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509cfc je 0x509d15 */ if (ZF_) goto L_00509d15;
  /* 00509cfe push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00509d00 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00509d02 call 0x5075c0 */ esp -= 4; M32(esp) = 0x509d07u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x509d02u); RETCHK(0x509d07u, 0x509d02u); LOADALL;
  /* 00509d07 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509d08 lea ecx, [ebx + 0x1cc] */ ecx = (u32)((u32)(ebx + 0x1ccu));
  /* 00509d0e call 0x404140 */ esp -= 4; M32(esp) = 0x509d13u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x509d0eu); RETCHK(0x509d13u, 0x509d0eu); LOADALL;
  /* 00509d13 jmp 0x509d27 */ goto L_00509d27;
L_00509d15:;
  /* 00509d15 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00509d17 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00509d1c lea ecx, [ebx + 0x1cc] */ ecx = (u32)((u32)(ebx + 0x1ccu));
  /* 00509d22 call 0x404420 */ esp -= 4; M32(esp) = 0x509d27u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x509d22u); RETCHK(0x509d27u, 0x509d22u); LOADALL;
L_00509d27:;
  /* 00509d27 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00509d2a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00509d2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509d2d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00509d30 call 0x50bfc0 */ esp -= 4; M32(esp) = 0x509d35u; SAVEALL; F_0050bfc0(c); ABI_CHECK(0x50bfc0u, 0x509d30u); RETCHK(0x509d35u, 0x509d30u); LOADALL;
  /* 00509d35 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509d37 je 0x509d51 */ if (ZF_) goto L_00509d51;
  /* 00509d39 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00509d3c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509d3d lea edx, [ebx + 0x1e8] */ edx = (u32)((u32)(ebx + 0x1e8u));
  /* 00509d43 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00509d48 call 0x527630 */ esp -= 4; M32(esp) = 0x509d4du; SAVEALL; F_00527630(c); ABI_CHECK(0x527630u, 0x509d48u); RETCHK(0x509d4du, 0x509d48u); LOADALL;
  /* 00509d4d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509d4f jne 0x509d59 */ if (!ZF_) goto L_00509d59;
L_00509d51:;
  /* 00509d51 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509d52 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00509d54 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00509d55 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509d56 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00509d59:;
  /* 00509d59 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00509d5b lea edx, [ebx + 0x294] */ edx = (u32)((u32)(ebx + 0x294u));
  /* 00509d61 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00509d66 mov ecx, 0x651010 */ { ecx = (u32)(0x651010u); }
  /* 00509d6b call 0x527630 */ esp -= 4; M32(esp) = 0x509d70u; SAVEALL; F_00527630(c); ABI_CHECK(0x527630u, 0x509d6bu); RETCHK(0x509d70u, 0x509d6bu); LOADALL;
  /* 00509d70 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00509d72 call 0x5075c0 */ esp -= 4; M32(esp) = 0x509d77u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x509d72u); RETCHK(0x509d77u, 0x509d72u); LOADALL;
  /* 00509d77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509d78 call 0x508f20 */ esp -= 4; M32(esp) = 0x509d7du; SAVEALL; F_00508f20(c); ABI_CHECK(0x508f20u, 0x509d78u); RETCHK(0x509d7du, 0x509d78u); LOADALL;
  /* 00509d7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509d7e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00509d80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00509d81 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509d82 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00509d90(CPU *c) {
  NATIVE_HOOK(0x509d90u) REGS; LOADALL;
L_00509d90:;
  /* 00509d90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509d91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509d93 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509d94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509d95 call 0x518bb0 */ esp -= 4; M32(esp) = 0x509d9au; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x509d95u); RETCHK(0x509d9au, 0x509d95u); LOADALL;
  /* 00509d9a call 0x5180e0 */ esp -= 4; M32(esp) = 0x509d9fu; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x509d9au); RETCHK(0x509d9fu, 0x509d9au); LOADALL;
  /* 00509d9f mov edi, eax */ { edi = (u32)(eax); }
  /* 00509da1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00509da3 call 0x508d10 */ esp -= 4; M32(esp) = 0x509da8u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x509da3u); RETCHK(0x509da8u, 0x509da3u); LOADALL;
  /* 00509da8 mov esi, eax */ { esi = (u32)(eax); }
  /* 00509daa test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509dac je 0x509dca */ if (ZF_) goto L_00509dca;
  /* 00509dae cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509db0 je 0x509dc3 */ if (ZF_) goto L_00509dc3;
  /* 00509db2 call 0x5075c0 */ esp -= 4; M32(esp) = 0x509db7u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x509db2u); RETCHK(0x509db7u, 0x509db2u); LOADALL;
  /* 00509db7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509db8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00509dba call 0x5075d0 */ esp -= 4; M32(esp) = 0x509dbfu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x509dbau); RETCHK(0x509dbfu, 0x509dbau); LOADALL;
  /* 00509dbf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509dc1 je 0x509dca */ if (ZF_) goto L_00509dca;
L_00509dc3:;
  /* 00509dc3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00509dc5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509dc7 call dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509dcau; SAVEALL; call_ind(c, t_); RETCHK(0x509dcau, 0x509dc7u); LOADALL; }
L_00509dca:;
  /* 00509dca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509dcb call 0x508f50 */ esp -= 4; M32(esp) = 0x509dd0u; SAVEALL; F_00508f50(c); ABI_CHECK(0x508f50u, 0x509dcbu); RETCHK(0x509dd0u, 0x509dcbu); LOADALL;
  /* 00509dd0 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00509dd2 jne 0x509ddb */ if (!ZF_) goto L_00509ddb;
  /* 00509dd4 mov eax, edi */ { eax = (u32)(edi); }
  /* 00509dd6 call 0x508f40 */ esp -= 4; M32(esp) = 0x509ddbu; SAVEALL; F_00508f40(c); ABI_CHECK(0x508f40u, 0x509dd6u); RETCHK(0x509ddbu, 0x509dd6u); LOADALL;
L_00509ddb:;
  /* 00509ddb mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00509ddd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00509ddf mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00509de1 call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509de4u; SAVEALL; call_ind(c, t_); RETCHK(0x509de4u, 0x509de1u); LOADALL; }
  /* 00509de4 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00509de6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00509de8 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509debu; SAVEALL; call_ind(c, t_); RETCHK(0x509debu, 0x509de8u); LOADALL; }
  /* 00509deb mov eax, dword ptr [ebx + 0x1e0] */ { const u32 m_ = (u32)(ebx + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 00509df1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509df3 je 0x509e2a */ if (ZF_) goto L_00509e2a;
  /* 00509df5 lea ecx, [ebx + 0x1cc] */ ecx = (u32)((u32)(ebx + 0x1ccu));
  /* 00509dfb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509dfc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00509dfe call 0x5075d0 */ esp -= 4; M32(esp) = 0x509e03u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x509dfeu); RETCHK(0x509e03u, 0x509dfeu); LOADALL;
  /* 00509e03 mov esi, eax */ { esi = (u32)(eax); }
  /* 00509e05 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509e07 je 0x509e21 */ if (ZF_) goto L_00509e21;
  /* 00509e09 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00509e0b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509e0d call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509e10u; SAVEALL; call_ind(c, t_); RETCHK(0x509e10u, 0x509e0du); LOADALL; }
  /* 00509e10 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509e12 je 0x509e2a */ if (ZF_) goto L_00509e2a;
  /* 00509e14 call 0x518bb0 */ esp -= 4; M32(esp) = 0x509e19u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x509e14u); RETCHK(0x509e19u, 0x509e14u); LOADALL;
  /* 00509e19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509e1a call 0x5179b0 */ esp -= 4; M32(esp) = 0x509e1fu; SAVEALL; F_005179b0(c); ABI_CHECK(0x5179b0u, 0x509e1au); RETCHK(0x509e1fu, 0x509e1au); LOADALL;
  /* 00509e1f jmp 0x509e31 */ goto L_00509e31;
L_00509e21:;
  /* 00509e21 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00509e23 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00509e25 call dword ptr [edx + 0x50] */ { const u32 m_ = (u32)(edx + 0x50u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509e28u; SAVEALL; call_ind(c, t_); RETCHK(0x509e28u, 0x509e25u); LOADALL; }
  /* 00509e28 jmp 0x509e31 */ goto L_00509e31;
L_00509e2a:;
  /* 00509e2a mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00509e2c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00509e2e call dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509e31u; SAVEALL; call_ind(c, t_); RETCHK(0x509e31u, 0x509e2eu); LOADALL; }
L_00509e31:;
  /* 00509e31 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509e34 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509e36 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00509e37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509e38 je 0x509e42 */ if (ZF_) goto L_00509e42;
  /* 00509e3a mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00509e3c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00509e3e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00509e40 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509e42u; SAVEALL; call_ind(c, t_); RETCHK(0x509e42u, 0x509e40u); LOADALL; }
L_00509e42:;
  /* 00509e42 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509e43 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00509e50(CPU *c) {
  NATIVE_HOOK(0x509e50u) REGS; LOADALL;
L_00509e50:;
  /* 00509e50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509e51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509e53 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509e54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509e55 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00509e58 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00509e5a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509e5b call 0x507650 */ esp -= 4; M32(esp) = 0x509e60u; SAVEALL; F_00507650(c); ABI_CHECK(0x507650u, 0x509e5bu); RETCHK(0x509e60u, 0x509e5bu); LOADALL;
  /* 00509e60 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00509e62 jne 0x509e84 */ if (!ZF_) goto L_00509e84;
  /* 00509e64 lea ecx, [ebx + 0x344] */ ecx = (u32)((u32)(ebx + 0x344u));
  /* 00509e6a mov eax, esi */ { eax = (u32)(esi); }
  /* 00509e6c mov byte ptr [ebx + 0x34c], 1 */ { const u32 m_ = (u32)(ebx + 0x34cu); M8(m_) = (u8)(0x1u); }
  /* 00509e73 call 0x52ce90 */ esp -= 4; M32(esp) = 0x509e78u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x509e73u); RETCHK(0x509e78u, 0x509e73u); LOADALL;
  /* 00509e78 call 0x559eb0 */ esp -= 4; M32(esp) = 0x509e7du; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x509e78u); RETCHK(0x509e7du, 0x509e78u); LOADALL;
  /* 00509e7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509e7e call dword ptr [0x62e4fc] */ { const u32 m_ = (u32)(0x62e4fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x509e84u; SAVEALL; call_ind(c, t_); RETCHK(0x509e84u, 0x509e7eu); LOADALL; }
L_00509e84:;
  /* 00509e84 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00509e87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509e88 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00509e89 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00509e8b call 0x50c780 */ esp -= 4; M32(esp) = 0x509e90u; SAVEALL; F_0050c780(c); ABI_CHECK(0x50c780u, 0x509e8bu); RETCHK(0x509e90u, 0x509e8bu); LOADALL;
  /* 00509e90 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509e91 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00509e92 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509e93 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00509ea0(CPU *c) {
  NATIVE_HOOK(0x509ea0u) REGS; LOADALL;
L_00509ea0:;
  /* 00509ea0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509ea1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509ea3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00509ea6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509ea7 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00509eaa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509eab mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00509ead mov al, byte ptr [esi + 0x34d] */ { const u32 m_ = (u32)(esi + 0x34du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00509eb3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00509eb5 jmp 0x509fd4 */ goto L_00509fd4;
L_00509fd4:;
  /* 00509fd4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00509fd7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509fd8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00509fd9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00509fdb call 0x507da0 */ esp -= 4; M32(esp) = 0x509fe0u; SAVEALL; F_00507da0(c); ABI_CHECK(0x507da0u, 0x509fdbu); RETCHK(0x509fe0u, 0x509fdbu); LOADALL;
  /* 00509fe0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00509fe1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00509fe2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00509fe4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00509fe5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00509ff0(CPU *c) {
  NATIVE_HOOK(0x509ff0u) REGS; LOADALL;
L_00509ff0:;
  /* 00509ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00509ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00509ff3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00509ff4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00509ff5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00509ff6 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00509ff9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00509ffb lea ecx, [esi + 0x344] */ ecx = (u32)((u32)(esi + 0x344u));
  /* 0050a001 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050a003 mov byte ptr [esi + 0x34c], 0 */ { const u32 m_ = (u32)(esi + 0x34cu); M8(m_) = (u8)(0x0u); }
  /* 0050a00a call 0x52ce90 */ esp -= 4; M32(esp) = 0x50a00fu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x50a00au); RETCHK(0x50a00fu, 0x50a00au); LOADALL;
  /* 0050a00f call 0x559eb0 */ esp -= 4; M32(esp) = 0x50a014u; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x50a00fu); RETCHK(0x50a014u, 0x50a00fu); LOADALL;
  /* 0050a014 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050a016 call dword ptr [0x62e500] */ { const u32 m_ = (u32)(0x62e500u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50a01cu; SAVEALL; call_ind(c, t_); RETCHK(0x50a01cu, 0x50a016u); LOADALL; }
  /* 0050a01c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a01e jne 0x50a026 */ if (!ZF_) goto L_0050a026;
  /* 0050a020 call dword ptr [0x62e4f4] */ { const u32 m_ = (u32)(0x62e4f4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50a026u; SAVEALL; call_ind(c, t_); RETCHK(0x50a026u, 0x50a020u); LOADALL; }
L_0050a026:;
  /* 0050a026 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050a029 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050a02a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a02b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050a02d call 0x507f80 */ esp -= 4; M32(esp) = 0x50a032u; SAVEALL; F_00507f80(c); ABI_CHECK(0x507f80u, 0x50a02du); RETCHK(0x50a032u, 0x50a02du); LOADALL;
  /* 0050a032 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050a033 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050a034 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050a035 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050a036 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050a040(CPU *c) {
  NATIVE_HOOK(0x50a040u) REGS; LOADALL;
L_0050a040:;
  /* 0050a040 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a041 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050a043 mov eax, dword ptr [esi + 0x294] */ { const u32 m_ = (u32)(esi + 0x294u); eax = (u32)(M32(m_)); }
  /* 0050a049 lea ecx, [esi + 0x294] */ ecx = (u32)((u32)(esi + 0x294u));
  /* 0050a04f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050a051 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50a054u; SAVEALL; call_ind(c, t_); RETCHK(0x50a054u, 0x50a051u); LOADALL; }
  /* 0050a054 mov edx, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); edx = (u32)(M32(m_)); }
  /* 0050a05a lea ecx, [esi + 0x1e8] */ ecx = (u32)((u32)(esi + 0x1e8u));
  /* 0050a060 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050a062 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50a065u; SAVEALL; call_ind(c, t_); RETCHK(0x50a065u, 0x50a062u); LOADALL; }
  /* 0050a065 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050a067 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050a068 jmp 0x50c550 */ SAVEALL; F_0050c550(c); return;
}

void F_0050a070(CPU *c) {
  NATIVE_HOOK(0x50a070u) REGS; LOADALL;
L_0050a070:;
  /* 0050a070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050a071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050a073 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050a075 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0050a07a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050a080 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a081 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050a088 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a08b call 0x518bb0 */ esp -= 4; M32(esp) = 0x50a090u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50a08bu); RETCHK(0x50a090u, 0x50a08bu); LOADALL;
  /* 0050a090 call 0x518380 */ esp -= 4; M32(esp) = 0x50a095u; SAVEALL; F_00518380(c); ABI_CHECK(0x518380u, 0x50a090u); RETCHK(0x50a095u, 0x50a090u); LOADALL;
  /* 0050a095 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050a097 mov eax, 0x6427b8 */ { eax = (u32)(0x6427b8u); }
  /* 0050a09c call 0x560ba0 */ esp -= 4; M32(esp) = 0x50a0a1u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x50a09cu); RETCHK(0x50a0a1u, 0x50a09cu); LOADALL;
  /* 0050a0a1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050a0a3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a0a5 je 0x50a198 */ if (ZF_) goto L_0050a198;
  /* 0050a0ab mov eax, 0x651008 */ { eax = (u32)(0x651008u); }
  /* 0050a0b0 call 0x560ba0 */ esp -= 4; M32(esp) = 0x50a0b5u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x50a0b0u); RETCHK(0x50a0b5u, 0x50a0b0u); LOADALL;
  /* 0050a0b5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050a0b7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a0b9 je 0x50a198 */ if (ZF_) goto L_0050a198;
  /* 0050a0bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a0c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050a0c1 mov eax, 0x651000 */ { eax = (u32)(0x651000u); }
  /* 0050a0c6 call 0x560ba0 */ esp -= 4; M32(esp) = 0x50a0cbu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x50a0c6u); RETCHK(0x50a0cbu, 0x50a0c6u); LOADALL;
  /* 0050a0cb mov edi, eax */ { edi = (u32)(eax); }
  /* 0050a0cd test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a0cf je 0x50a142 */ if (ZF_) goto L_0050a142;
L_0050a0d1:;
  /* 0050a0d1 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0050a0d3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050a0d5 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50a0d8u; SAVEALL; call_ind(c, t_); RETCHK(0x50a0d8u, 0x50a0d5u); LOADALL; }
  /* 0050a0d8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a0da je 0x50a11d */ if (ZF_) goto L_0050a11d;
  /* 0050a0dc mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0050a0df push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a0e0 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050a0e5 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50a0eau; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50a0e5u); RETCHK(0x50a0eau, 0x50a0e5u); LOADALL;
  /* 0050a0ea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0050a0f0:;
  /* 0050a0f0 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050a0f2 mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0050a0f4 cmp dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0050a0f6 jne 0x50a114 */ if (!ZF_) goto L_0050a114;
  /* 0050a0f8 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a0fa je 0x50a110 */ if (ZF_) goto L_0050a110;
  /* 0050a0fc mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050a0ff mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0050a101 cmp dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0050a104 jne 0x50a114 */ if (!ZF_) goto L_0050a114;
  /* 0050a106 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050a109 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050a10c test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a10e jne 0x50a0f0 */ if (!ZF_) goto L_0050a0f0;
L_0050a110:;
  /* 0050a110 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050a112 jmp 0x50a119 */ goto L_0050a119;
L_0050a114:;
  /* 0050a114 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0050a116 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_0050a119:;
  /* 0050a119 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a11b je 0x50a131 */ if (ZF_) goto L_0050a131;
L_0050a11d:;
  /* 0050a11d mov eax, 0x651000 */ { eax = (u32)(0x651000u); }
  /* 0050a122 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050a124 call 0x560c00 */ esp -= 4; M32(esp) = 0x50a129u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x50a124u); RETCHK(0x50a129u, 0x50a124u); LOADALL;
  /* 0050a129 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050a12b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a12d jne 0x50a0d1 */ if (!ZF_) goto L_0050a0d1;
  /* 0050a12f jmp 0x50a142 */ goto L_0050a142;
L_0050a131:;
  /* 0050a131 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050a134 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050a136 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0050a13b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050a13c call dword ptr [eax + 0xd0] */ { const u32 m_ = (u32)(eax + 0xd0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50a142u; SAVEALL; call_ind(c, t_); RETCHK(0x50a142u, 0x50a13cu); LOADALL; }
L_0050a142:;
  /* 0050a142 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050a145 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050a146 lea esi, [ebp - 0x28] */ esi = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050a149 call 0x50c2e0 */ esp -= 4; M32(esp) = 0x50a14eu; SAVEALL; F_0050c2e0(c); ABI_CHECK(0x50c2e0u, 0x50a149u); RETCHK(0x50a14eu, 0x50a149u); LOADALL;
  /* 0050a14e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050a151 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a152 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050a159 call 0x5075d0 */ esp -= 4; M32(esp) = 0x50a15eu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x50a159u); RETCHK(0x50a15eu, 0x50a159u); LOADALL;
  /* 0050a15e mov esi, eax */ { esi = (u32)(eax); }
  /* 0050a160 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0050a167 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a16b jb 0x50a179 */ if (CF_) goto L_0050a179;
  /* 0050a16d mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0050a170 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050a171 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a176u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a171u); RETCHK(0x50a176u, 0x50a171u); LOADALL;
  /* 0050a176 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a179:;
  /* 0050a179 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a17b mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0050a182 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0050a189 mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0050a18d je 0x50a196 */ if (ZF_) goto L_0050a196;
  /* 0050a18f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050a191 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050a193 call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50a196u; SAVEALL; call_ind(c, t_); RETCHK(0x50a196u, 0x50a193u); LOADALL; }
L_0050a196:;
  /* 0050a196 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050a197 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0050a198:;
  /* 0050a198 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050a19b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050a1a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050a1a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050a1a5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050a1b0(CPU *c) {
  NATIVE_HOOK(0x50a1b0u) REGS; LOADALL;
L_0050a1b0:;
  /* 0050a1b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050a1b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050a1b3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a1b6 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050a1b9 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0050a1bb sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050a1be push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a1bf jne 0x50a21b */ if (!ZF_) goto L_0050a21b;
  /* 0050a1c1 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050a1c4 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a1c7 nop */ ;
  /* 0050a1c8 nop */ ;
  /* 0050a1c9 cmp eax, 0x1b */ { u32 a_ = eax, b_ = 0x1bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a1cc jne 0x50a21b */ if (!ZF_) goto L_0050a21b;
  /* 0050a1ce mov eax, dword ptr [ecx + 0x1b8] */ { const u32 m_ = (u32)(ecx + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0050a1d4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a1d6 je 0x50a21b */ if (ZF_) goto L_0050a21b;
  /* 0050a1d8 lea eax, [ecx + 0x1a4] */ eax = (u32)((u32)(ecx + 0x1a4u));
  /* 0050a1de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a1df call 0x5075d0 */ esp -= 4; M32(esp) = 0x50a1e4u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x50a1dfu); RETCHK(0x50a1e4u, 0x50a1dfu); LOADALL;
  /* 0050a1e4 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050a1e6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a1e8 je 0x50a21b */ if (ZF_) goto L_0050a21b;
  /* 0050a1ea lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050a1ed mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050a1ef mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0050a1f6 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0050a1f9 call 0x508540 */ esp -= 4; M32(esp) = 0x50a1feu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x50a1f9u); RETCHK(0x50a1feu, 0x50a1f9u); LOADALL;
  /* 0050a1fe lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050a201 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050a203 mov dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x1u); }
  /* 0050a20a mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0050a20d call 0x508540 */ esp -= 4; M32(esp) = 0x50a212u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x50a20du); RETCHK(0x50a212u, 0x50a20du); LOADALL;
  /* 0050a212 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050a214 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050a215 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050a217 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050a218 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050a21b:;
  /* 0050a21b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050a21d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050a21e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050a220 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050a221 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050a230(CPU *c) {
  NATIVE_HOOK(0x50a230u) REGS; LOADALL;
L_0050a230:;
  /* 0050a230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050a231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050a233 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050a239 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050a23b push 0x6202fe */ { u32 v_ = 0x6202feu; esp -= 4; M32(esp) = v_; }
  /* 0050a240 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a241 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050a244 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050a24b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050a24c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a24d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050a250 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a251 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a252 call 0x509940 */ esp -= 4; M32(esp) = 0x50a257u; SAVEALL; F_00509940(c); ABI_CHECK(0x509940u, 0x50a252u); RETCHK(0x50a257u, 0x50a252u); LOADALL;
  /* 0050a257 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050a259 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050a25c mov dword ptr [esi], 0x650d50 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650d50u); }
  /* 0050a262 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0050a267 mov dword ptr [esi + 0x374], eax */ { const u32 m_ = (u32)(esi + 0x374u); M32(m_) = (u32)(eax); }
  /* 0050a26d mov dword ptr [esi + 0x370], ebx */ { const u32 m_ = (u32)(esi + 0x370u); M32(m_) = (u32)(ebx); }
  /* 0050a273 mov byte ptr [esi + 0x360], bl */ { const u32 m_ = (u32)(esi + 0x360u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a279 mov dword ptr [esi + 0x390], eax */ { const u32 m_ = (u32)(esi + 0x390u); M32(m_) = (u32)(eax); }
  /* 0050a27f mov dword ptr [esi + 0x38c], ebx */ { const u32 m_ = (u32)(esi + 0x38cu); M32(m_) = (u32)(ebx); }
  /* 0050a285 mov byte ptr [esi + 0x37c], bl */ { const u32 m_ = (u32)(esi + 0x37cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a28b mov dword ptr [esi + 0x3ac], eax */ { const u32 m_ = (u32)(esi + 0x3acu); M32(m_) = (u32)(eax); }
  /* 0050a291 mov dword ptr [esi + 0x3a8], ebx */ { const u32 m_ = (u32)(esi + 0x3a8u); M32(m_) = (u32)(ebx); }
  /* 0050a297 mov byte ptr [esi + 0x398], bl */ { const u32 m_ = (u32)(esi + 0x398u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a29d mov dword ptr [esi + 0x3c8], eax */ { const u32 m_ = (u32)(esi + 0x3c8u); M32(m_) = (u32)(eax); }
  /* 0050a2a3 mov dword ptr [esi + 0x3c4], ebx */ { const u32 m_ = (u32)(esi + 0x3c4u); M32(m_) = (u32)(ebx); }
  /* 0050a2a9 mov byte ptr [esi + 0x3b4], bl */ { const u32 m_ = (u32)(esi + 0x3b4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a2af mov dword ptr [esi + 0x3e4], eax */ { const u32 m_ = (u32)(esi + 0x3e4u); M32(m_) = (u32)(eax); }
  /* 0050a2b5 mov dword ptr [esi + 0x3e0], ebx */ { const u32 m_ = (u32)(esi + 0x3e0u); M32(m_) = (u32)(ebx); }
  /* 0050a2bb mov byte ptr [esi + 0x3d0], bl */ { const u32 m_ = (u32)(esi + 0x3d0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a2c1 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0050a2c3 push 0x6428bc */ { u32 v_ = 0x6428bcu; esp -= 4; M32(esp) = v_; }
  /* 0050a2c8 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0050a2cb mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 0050a2cf call 0x404420 */ esp -= 4; M32(esp) = 0x50a2d4u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50a2cfu); RETCHK(0x50a2d4u, 0x50a2cfu); LOADALL;
  /* 0050a2d4 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050a2d7 mov dword ptr [esi + 0x350], ebx */ { const u32 m_ = (u32)(esi + 0x350u); M32(m_) = (u32)(ebx); }
  /* 0050a2dd mov dword ptr [esi + 0x354], ebx */ { const u32 m_ = (u32)(esi + 0x354u); M32(m_) = (u32)(ebx); }
  /* 0050a2e3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050a2e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050a2e6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050a2ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050a2ee mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050a2f0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050a2f1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050a300(CPU *c) {
  NATIVE_HOOK(0x50a300u) REGS; LOADALL;
L_0050a300:;
  /* 0050a300 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050a301 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050a303 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a304 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050a306 call 0x50a330 */ esp -= 4; M32(esp) = 0x50a30bu; SAVEALL; F_0050a330(c); ABI_CHECK(0x50a330u, 0x50a306u); RETCHK(0x50a30bu, 0x50a306u); LOADALL;
  /* 0050a30b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a30f je 0x50a31a */ if (ZF_) goto L_0050a31a;
  /* 0050a311 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a312 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a317u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a312u); RETCHK(0x50a317u, 0x50a312u); LOADALL;
  /* 0050a317 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a31a:;
  /* 0050a31a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050a31c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050a31d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050a31e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050a330(CPU *c) {
  NATIVE_HOOK(0x50a330u) REGS; LOADALL;
L_0050a330:;
  /* 0050a330 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050a331 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a332 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050a334 mov dword ptr [esi], 0x650d50 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650d50u); }
  /* 0050a33a cmp dword ptr [esi + 0x3e4], 0x10 */ { const u32 m_ = (u32)(esi + 0x3e4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a341 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050a342 jb 0x50a353 */ if (CF_) goto L_0050a353;
  /* 0050a344 mov eax, dword ptr [esi + 0x3d0] */ { const u32 m_ = (u32)(esi + 0x3d0u); eax = (u32)(M32(m_)); }
  /* 0050a34a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a34b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a350u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a34bu); RETCHK(0x50a350u, 0x50a34bu); LOADALL;
  /* 0050a350 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a353:;
  /* 0050a353 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050a355 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0050a35a mov dword ptr [esi + 0x3e4], edi */ { const u32 m_ = (u32)(esi + 0x3e4u); M32(m_) = (u32)(edi); }
  /* 0050a360 mov dword ptr [esi + 0x3e0], ebx */ { const u32 m_ = (u32)(esi + 0x3e0u); M32(m_) = (u32)(ebx); }
  /* 0050a366 mov byte ptr [esi + 0x3d0], bl */ { const u32 m_ = (u32)(esi + 0x3d0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a36c cmp dword ptr [esi + 0x3c8], 0x10 */ { const u32 m_ = (u32)(esi + 0x3c8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a373 jb 0x50a384 */ if (CF_) goto L_0050a384;
  /* 0050a375 mov ecx, dword ptr [esi + 0x3b4] */ { const u32 m_ = (u32)(esi + 0x3b4u); ecx = (u32)(M32(m_)); }
  /* 0050a37b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050a37c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a381u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a37cu); RETCHK(0x50a381u, 0x50a37cu); LOADALL;
  /* 0050a381 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a384:;
  /* 0050a384 mov dword ptr [esi + 0x3c8], edi */ { const u32 m_ = (u32)(esi + 0x3c8u); M32(m_) = (u32)(edi); }
  /* 0050a38a mov dword ptr [esi + 0x3c4], ebx */ { const u32 m_ = (u32)(esi + 0x3c4u); M32(m_) = (u32)(ebx); }
  /* 0050a390 mov byte ptr [esi + 0x3b4], bl */ { const u32 m_ = (u32)(esi + 0x3b4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a396 cmp dword ptr [esi + 0x3ac], 0x10 */ { const u32 m_ = (u32)(esi + 0x3acu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a39d jb 0x50a3ae */ if (CF_) goto L_0050a3ae;
  /* 0050a39f mov edx, dword ptr [esi + 0x398] */ { const u32 m_ = (u32)(esi + 0x398u); edx = (u32)(M32(m_)); }
  /* 0050a3a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050a3a6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a3abu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a3a6u); RETCHK(0x50a3abu, 0x50a3a6u); LOADALL;
  /* 0050a3ab add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a3ae:;
  /* 0050a3ae mov dword ptr [esi + 0x3ac], edi */ { const u32 m_ = (u32)(esi + 0x3acu); M32(m_) = (u32)(edi); }
  /* 0050a3b4 mov dword ptr [esi + 0x3a8], ebx */ { const u32 m_ = (u32)(esi + 0x3a8u); M32(m_) = (u32)(ebx); }
  /* 0050a3ba mov byte ptr [esi + 0x398], bl */ { const u32 m_ = (u32)(esi + 0x398u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a3c0 cmp dword ptr [esi + 0x390], 0x10 */ { const u32 m_ = (u32)(esi + 0x390u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a3c7 jb 0x50a3d8 */ if (CF_) goto L_0050a3d8;
  /* 0050a3c9 mov eax, dword ptr [esi + 0x37c] */ { const u32 m_ = (u32)(esi + 0x37cu); eax = (u32)(M32(m_)); }
  /* 0050a3cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a3d0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a3d5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a3d0u); RETCHK(0x50a3d5u, 0x50a3d0u); LOADALL;
  /* 0050a3d5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a3d8:;
  /* 0050a3d8 mov dword ptr [esi + 0x390], edi */ { const u32 m_ = (u32)(esi + 0x390u); M32(m_) = (u32)(edi); }
  /* 0050a3de mov dword ptr [esi + 0x38c], ebx */ { const u32 m_ = (u32)(esi + 0x38cu); M32(m_) = (u32)(ebx); }
  /* 0050a3e4 mov byte ptr [esi + 0x37c], bl */ { const u32 m_ = (u32)(esi + 0x37cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a3ea cmp dword ptr [esi + 0x374], 0x10 */ { const u32 m_ = (u32)(esi + 0x374u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a3f1 jb 0x50a402 */ if (CF_) goto L_0050a402;
  /* 0050a3f3 mov ecx, dword ptr [esi + 0x360] */ { const u32 m_ = (u32)(esi + 0x360u); ecx = (u32)(M32(m_)); }
  /* 0050a3f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050a3fa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a3ffu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a3fau); RETCHK(0x50a3ffu, 0x50a3fau); LOADALL;
  /* 0050a3ff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a402:;
  /* 0050a402 mov dword ptr [esi + 0x374], edi */ { const u32 m_ = (u32)(esi + 0x374u); M32(m_) = (u32)(edi); }
  /* 0050a408 mov dword ptr [esi + 0x370], ebx */ { const u32 m_ = (u32)(esi + 0x370u); M32(m_) = (u32)(ebx); }
  /* 0050a40e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050a40f mov byte ptr [esi + 0x360], bl */ { const u32 m_ = (u32)(esi + 0x360u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a415 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050a417 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050a418 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050a419 jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_0050a420(CPU *c) {
  NATIVE_HOOK(0x50a420u) REGS; LOADALL;
L_0050a420:;
  /* 0050a420 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050a421 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050a423 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050a425 push 0x6212fd */ { u32 v_ = 0x6212fdu; esp -= 4; M32(esp) = v_; }
  /* 0050a42a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050a430 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a431 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050a438 sub esp, 0x158 */ { u32 a_ = esp, b_ = 0x158u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a43e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0050a443 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050a444 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050a447 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a448 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0050a44a mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0050a44d cmp dword ptr [edi + 0x5c], esi */ { const u32 m_ = (u32)(edi + 0x5cu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a450 jne 0x50a46b */ if (!ZF_) goto L_0050a46b;
  /* 0050a452 cmp dword ptr [ebp + 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0x28u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a456 jb 0x50a464 */ if (CF_) goto L_0050a464;
  /* 0050a458 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0050a45b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a45c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a461u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a45cu); RETCHK(0x50a461u, 0x50a45cu); LOADALL;
  /* 0050a461 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a464:;
  /* 0050a464 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050a466 jmp 0x50ae83 */ goto L_0050ae83;
L_0050a46b:;
  /* 0050a46b call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50a471u; SAVEALL; call_ind(c, t_); RETCHK(0x50a471u, 0x50a46bu); LOADALL; }
  /* 0050a471 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a472 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0050a478 push 0x650fbc */ { u32 v_ = 0x650fbcu; esp -= 4; M32(esp) = v_; }
  /* 0050a47d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050a47e call 0x5fe9aa */ esp -= 4; M32(esp) = 0x50a483u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x50a47eu); RETCHK(0x50a483u, 0x50a47eu); LOADALL;
  /* 0050a483 lea eax, [ebp - 0x110] */ eax = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0050a489 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a48c mov dword ptr [ebp - 0x13c], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(0xfu); }
  /* 0050a496 mov dword ptr [ebp - 0x140], esi */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); M32(m_) = (u32)(esi); }
  /* 0050a49c mov byte ptr [ebp - 0x150], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); M8(m_) = (u8)(0x0u); }
  /* 0050a4a3 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0050a4a6:;
  /* 0050a4a6 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050a4a8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050a4a9 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a4ab jne 0x50a4a6 */ if (!ZF_) goto L_0050a4a6;
  /* 0050a4ad sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050a4af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a4b0 lea edx, [ebp - 0x110] */ edx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0050a4b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050a4b7 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a4bd call 0x404420 */ esp -= 4; M32(esp) = 0x50a4c2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50a4bdu); RETCHK(0x50a4c2u, 0x50a4bdu); LOADALL;
  /* 0050a4c2 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050a4c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050a4c5 lea eax, [ebp - 0x154] */ eax = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a4cb lea ebx, [edi + 0x35c] */ ebx = (u32)((u32)(edi + 0x35cu));
  /* 0050a4d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a4d2 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050a4d4 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0050a4d8 call 0x404140 */ esp -= 4; M32(esp) = 0x50a4ddu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50a4d8u); RETCHK(0x50a4ddu, 0x50a4d8u); LOADALL;
  /* 0050a4dd mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050a4e1 cmp dword ptr [ebp - 0x13c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a4e8 jb 0x50a4f9 */ if (CF_) goto L_0050a4f9;
  /* 0050a4ea mov ecx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); ecx = (u32)(M32(m_)); }
  /* 0050a4f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050a4f1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a4f6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a4f1u); RETCHK(0x50a4f6u, 0x50a4f1u); LOADALL;
  /* 0050a4f6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a4f9:;
  /* 0050a4f9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050a4fa mov ecx, 0x650fb4 */ { ecx = (u32)(0x650fb4u); }
  /* 0050a4ff lea esi, [ebp - 0x154] */ esi = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a505 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x50a50au; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x50a505u); RETCHK(0x50a50au, 0x50a505u); LOADALL;
  /* 0050a50a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a50d push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050a50f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050a511 lea ecx, [edi + 0x378] */ ecx = (u32)((u32)(edi + 0x378u));
  /* 0050a517 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a518 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0050a51c call 0x404140 */ esp -= 4; M32(esp) = 0x50a521u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50a51cu); RETCHK(0x50a521u, 0x50a51cu); LOADALL;
  /* 0050a521 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050a525 cmp dword ptr [ebp - 0x13c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a52c jb 0x50a53d */ if (CF_) goto L_0050a53d;
  /* 0050a52e mov edx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); edx = (u32)(M32(m_)); }
  /* 0050a534 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050a535 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a53au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a535u); RETCHK(0x50a53au, 0x50a535u); LOADALL;
  /* 0050a53a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a53d:;
  /* 0050a53d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050a53e mov ecx, 0x650fa8 */ { ecx = (u32)(0x650fa8u); }
  /* 0050a543 lea esi, [ebp - 0x154] */ esi = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a549 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x50a54eu; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x50a549u); RETCHK(0x50a54eu, 0x50a549u); LOADALL;
  /* 0050a54e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a551 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050a553 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050a555 lea ecx, [edi + 0x394] */ ecx = (u32)((u32)(edi + 0x394u));
  /* 0050a55b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a55c mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0050a560 call 0x404140 */ esp -= 4; M32(esp) = 0x50a565u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50a560u); RETCHK(0x50a565u, 0x50a560u); LOADALL;
  /* 0050a565 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050a569 cmp dword ptr [ebp - 0x13c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a570 jb 0x50a581 */ if (CF_) goto L_0050a581;
  /* 0050a572 mov eax, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); eax = (u32)(M32(m_)); }
  /* 0050a578 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a579 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a57eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a579u); RETCHK(0x50a57eu, 0x50a579u); LOADALL;
  /* 0050a57e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a581:;
  /* 0050a581 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050a582 mov ecx, 0x650fa0 */ { ecx = (u32)(0x650fa0u); }
  /* 0050a587 lea esi, [ebp - 0x154] */ esi = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a58d call 0x41a9b0 */ esp -= 4; M32(esp) = 0x50a592u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x50a58du); RETCHK(0x50a592u, 0x50a58du); LOADALL;
  /* 0050a592 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a595 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050a597 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050a599 lea ecx, [edi + 0x3b0] */ ecx = (u32)((u32)(edi + 0x3b0u));
  /* 0050a59f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a5a0 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 0050a5a4 call 0x404140 */ esp -= 4; M32(esp) = 0x50a5a9u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50a5a4u); RETCHK(0x50a5a9u, 0x50a5a4u); LOADALL;
  /* 0050a5a9 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050a5ad cmp dword ptr [ebp - 0x13c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a5b4 jb 0x50a5c5 */ if (CF_) goto L_0050a5c5;
  /* 0050a5b6 mov ecx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); ecx = (u32)(M32(m_)); }
  /* 0050a5bc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050a5bd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a5c2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a5bdu); RETCHK(0x50a5c2u, 0x50a5bdu); LOADALL;
  /* 0050a5c2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a5c5:;
  /* 0050a5c5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050a5c6 mov ecx, 0x650f98 */ { ecx = (u32)(0x650f98u); }
  /* 0050a5cb lea esi, [ebp - 0x154] */ esi = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a5d1 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x50a5d6u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x50a5d1u); RETCHK(0x50a5d6u, 0x50a5d1u); LOADALL;
  /* 0050a5d6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a5d9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050a5db push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050a5dd lea ecx, [edi + 0x3cc] */ ecx = (u32)((u32)(edi + 0x3ccu));
  /* 0050a5e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a5e4 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 0050a5e8 call 0x404140 */ esp -= 4; M32(esp) = 0x50a5edu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50a5e8u); RETCHK(0x50a5edu, 0x50a5e8u); LOADALL;
  /* 0050a5ed mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050a5f1 cmp dword ptr [ebp - 0x13c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a5f8 jb 0x50a609 */ if (CF_) goto L_0050a609;
  /* 0050a5fa mov edx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); edx = (u32)(M32(m_)); }
  /* 0050a600 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050a601 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a606u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a601u); RETCHK(0x50a606u, 0x50a601u); LOADALL;
  /* 0050a606 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a609:;
  /* 0050a609 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050a60c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050a60e lea edx, [ebp - 0x164] */ edx = (u32)((u32)(ebp + 0xfffffe9cu));
  /* 0050a614 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050a615 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50a618u; SAVEALL; call_ind(c, t_); RETCHK(0x50a618u, 0x50a615u); LOADALL; }
  /* 0050a618 fld dword ptr [ebp - 0x15c] */ { const u32 m_ = (u32)(ebp + 0xfffffea4u); FPUSH((double)MF32(m_)); }
  /* 0050a61e fsub dword ptr [ebp - 0x164] */ { const u32 m_ = (u32)(ebp + 0xfffffe9cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a624 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050a62a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050a62c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a62f je 0x50a63f */ if (ZF_) goto L_0050a63f;
  /* 0050a631 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050a633 fld dword ptr [ebp - 0x164] */ { const u32 m_ = (u32)(ebp + 0xfffffe9cu); FPUSH((double)MF32(m_)); }
  /* 0050a639 fsub dword ptr [ebp - 0x15c] */ { const u32 m_ = (u32)(ebp + 0xfffffea4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050a63f:;
  /* 0050a63f fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 0050a645 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0050a64b fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 0050a651 fstp dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a657 jmp 0x62d8b1 */ goto L_0062d8b1;
L_0050a65d:;
  /* 0050a65d fsub dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a660 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050a666 fstp dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a66c fld dword ptr [ebp - 0x158] */ { const u32 m_ = (u32)(ebp + 0xfffffea8u); FPUSH((double)MF32(m_)); }
  /* 0050a672 fsub dword ptr [ebp - 0x160] */ { const u32 m_ = (u32)(ebp + 0xfffffea0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a678 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050a67e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050a680 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a683 je 0x50a693 */ if (ZF_) goto L_0050a693;
  /* 0050a685 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050a687 fld dword ptr [ebp - 0x160] */ { const u32 m_ = (u32)(ebp + 0xfffffea0u); FPUSH((double)MF32(m_)); }
  /* 0050a68d fsub dword ptr [ebp - 0x158] */ { const u32 m_ = (u32)(ebp + 0xfffffea8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050a693:;
  /* 0050a693 fmul dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050a699 push 0x650f80 */ { u32 v_ = 0x650f80u; esp -= 4; M32(esp) = v_; }
  /* 0050a69e lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 0050a6a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a6a5 fsub dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a6a8 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 0050a6ab push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050a6ac mov eax, edi */ { eax = (u32)(edi); }
  /* 0050a6ae fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050a6b4 fstp dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a6ba fld dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); FPUSH((double)MF32(m_)); }
  /* 0050a6c0 fadd dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050a6c3 fstp dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a6c9 fld dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); FPUSH((double)MF32(m_)); }
  /* 0050a6cf fadd dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050a6d2 fstp dword ptr [ebp - 0x118] */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a6d8 call 0x509ce0 */ esp -= 4; M32(esp) = 0x50a6ddu; SAVEALL; F_00509ce0(c); ABI_CHECK(0x509ce0u, 0x50a6d8u); RETCHK(0x50a6ddu, 0x50a6d8u); LOADALL;
  /* 0050a6dd mov edx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 0050a6e0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050a6e1 lea esi, [ebp - 0x124] */ esi = (u32)((u32)(ebp + 0xfffffedcu));
  /* 0050a6e7 call 0x52d060 */ esp -= 4; M32(esp) = 0x50a6ecu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x50a6e7u); RETCHK(0x50a6ecu, 0x50a6e7u); LOADALL;
  /* 0050a6ec push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0050a6f1 mov dword ptr [ebp - 0x138], 0x41a00000 */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(0x41a00000u); }
  /* 0050a6fb mov dword ptr [ebp - 0x130], 0x42700000 */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); M32(m_) = (u32)(0x42700000u); }
  /* 0050a705 mov dword ptr [ebp - 0x134], 0x42100000 */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(0x42100000u); }
  /* 0050a70f mov dword ptr [ebp - 0x12c], 0x42980000 */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(0x42980000u); }
  /* 0050a719 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50a71eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50a719u); RETCHK(0x50a71eu, 0x50a719u); LOADALL;
  /* 0050a71e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a721 mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 0050a727 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050a729 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 0050a72d je 0x50a73a */ if (ZF_) goto L_0050a73a;
  /* 0050a72f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050a730 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a731 call 0x50d810 */ esp -= 4; M32(esp) = 0x50a736u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x50a731u); RETCHK(0x50a736u, 0x50a731u); LOADALL;
  /* 0050a736 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050a738 jmp 0x50a73c */ goto L_0050a73c;
L_0050a73a:;
  /* 0050a73a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0050a73c:;
  /* 0050a73c mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050a740 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0050a742 push 0x650f74 */ { u32 v_ = 0x650f74u; esp -= 4; M32(esp) = v_; }
  /* 0050a747 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a74d mov dword ptr [ebp - 0x13c], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(0xfu); }
  /* 0050a757 mov dword ptr [ebp - 0x140], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); M32(m_) = (u32)(0x0u); }
  /* 0050a761 mov byte ptr [ebp - 0x150], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); M8(m_) = (u8)(0x0u); }
  /* 0050a768 call 0x404420 */ esp -= 4; M32(esp) = 0x50a76du; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50a768u); RETCHK(0x50a76du, 0x50a768u); LOADALL;
  /* 0050a76d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050a770 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 0050a774 mov ecx, dword ptr [eax*4 + 0x687f14] */ { const u32 m_ = (u32)(eax * 4u + 0x687f14u); ecx = (u32)(M32(m_)); }
  /* 0050a77b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050a77d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050a77e sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a781 lea ecx, [ebp - 0x138] */ ecx = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0050a787 mov eax, esp */ { eax = (u32)(esp); }
  /* 0050a789 mov dword ptr [ebp - 0x114], esp */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(esp); }
  /* 0050a78f call 0x52cea0 */ esp -= 4; M32(esp) = 0x50a794u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50a78fu); RETCHK(0x50a794u, 0x50a78fu); LOADALL;
  /* 0050a794 lea eax, [ebp - 0x154] */ eax = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a79a call 0x50da30 */ esp -= 4; M32(esp) = 0x50a79fu; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x50a79au); RETCHK(0x50a79fu, 0x50a79au); LOADALL;
  /* 0050a79f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050a7a1 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a7a4 cmp dword ptr [ebp - 0x13c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a7ab jb 0x50a7bc */ if (CF_) goto L_0050a7bc;
  /* 0050a7ad mov edx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); edx = (u32)(M32(m_)); }
  /* 0050a7b3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050a7b4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a7b9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a7b4u); RETCHK(0x50a7b9u, 0x50a7b4u); LOADALL;
  /* 0050a7b9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a7bc:;
  /* 0050a7bc fld dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); FPUSH((double)MF32(m_)); }
  /* 0050a7c2 mov dword ptr [ebp - 0x138], 0x42a00000 */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(0x42a00000u); }
  /* 0050a7cc fsub dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a7d2 fst dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); MF32(m_) = (float)ST(0); }
  /* 0050a7d5 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050a7db fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050a7dd test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a7e0 jne 0x50a7e7 */ if (!ZF_) goto L_0050a7e7;
  /* 0050a7e2 fld dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0050a7e5 jmp 0x50a7f3 */ goto L_0050a7f3;
L_0050a7e7:;
  /* 0050a7e7 fld dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); FPUSH((double)MF32(m_)); }
  /* 0050a7ed fsub dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050a7f3:;
  /* 0050a7f3 fsub dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a7f9 mov dword ptr [ebp - 0x134], 0x42480000 */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(0x42480000u); }
  /* 0050a803 fstp dword ptr [ebp - 0x130] */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a809 fld dword ptr [ebp - 0x118] */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); FPUSH((double)MF32(m_)); }
  /* 0050a80f fsub dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a815 fst dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); MF32(m_) = (float)ST(0); }
  /* 0050a818 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050a81e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050a820 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a823 jne 0x50a82a */ if (!ZF_) goto L_0050a82a;
  /* 0050a825 fld dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0050a828 jmp 0x50a836 */ goto L_0050a836;
L_0050a82a:;
  /* 0050a82a fld dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); FPUSH((double)MF32(m_)); }
  /* 0050a830 fsub dword ptr [ebp - 0x118] */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050a836:;
  /* 0050a836 fsub dword ptr [0x65710c] */ { const u32 m_ = (u32)(0x65710cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a83c push 0x2d4 */ { u32 v_ = 0x2d4u; esp -= 4; M32(esp) = v_; }
  /* 0050a841 fstp dword ptr [ebp - 0x12c] */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a847 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50a84cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50a847u); RETCHK(0x50a84cu, 0x50a847u); LOADALL;
  /* 0050a84c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a84f mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 0050a855 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a857 mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 0050a85b je 0x50a866 */ if (ZF_) goto L_0050a866;
  /* 0050a85d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050a85e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a85f call 0x5221d0 */ esp -= 4; M32(esp) = 0x50a864u; SAVEALL; F_005221d0(c); ABI_CHECK(0x5221d0u, 0x50a85fu); RETCHK(0x50a864u, 0x50a85fu); LOADALL;
  /* 0050a864 jmp 0x50a868 */ goto L_0050a868;
L_0050a866:;
  /* 0050a866 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050a868:;
  /* 0050a868 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a86b push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0050a86d push 0x643204 */ { u32 v_ = 0x643204u; esp -= 4; M32(esp) = v_; }
  /* 0050a872 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a878 mov dword ptr [edi + 0x350], eax */ { const u32 m_ = (u32)(edi + 0x350u); M32(m_) = (u32)(eax); }
  /* 0050a87e mov dword ptr [ebp - 0x13c], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(0xfu); }
  /* 0050a888 mov dword ptr [ebp - 0x140], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); M32(m_) = (u32)(ebx); }
  /* 0050a88e mov byte ptr [ebp - 0x150], bl */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050a894 call 0x404420 */ esp -= 4; M32(esp) = 0x50a899u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50a894u); RETCHK(0x50a899u, 0x50a894u); LOADALL;
  /* 0050a899 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050a89b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050a89d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050a89e sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a8a1 mov byte ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x9u); }
  /* 0050a8a5 lea ecx, [ebp - 0x138] */ ecx = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0050a8ab mov eax, esp */ { eax = (u32)(esp); }
  /* 0050a8ad mov dword ptr [ebp - 0x114], esp */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(esp); }
  /* 0050a8b3 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50a8b8u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50a8b3u); RETCHK(0x50a8b8u, 0x50a8b3u); LOADALL;
  /* 0050a8b8 mov ebx, dword ptr [edi + 0x350] */ { const u32 m_ = (u32)(edi + 0x350u); ebx = (u32)(M32(m_)); }
  /* 0050a8be lea eax, [ebp - 0x154] */ eax = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a8c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a8c5 call 0x5223f0 */ esp -= 4; M32(esp) = 0x50a8cau; SAVEALL; F_005223f0(c); ABI_CHECK(0x5223f0u, 0x50a8c5u); RETCHK(0x50a8cau, 0x50a8c5u); LOADALL;
  /* 0050a8ca mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050a8ce cmp dword ptr [ebp - 0x13c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a8d5 jb 0x50a8e6 */ if (CF_) goto L_0050a8e6;
  /* 0050a8d7 mov ecx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); ecx = (u32)(M32(m_)); }
  /* 0050a8dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050a8de call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a8e3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a8deu); RETCHK(0x50a8e3u, 0x50a8deu); LOADALL;
  /* 0050a8e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a8e6:;
  /* 0050a8e6 mov eax, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); eax = (u32)(M32(m_)); }
  /* 0050a8e9 mov dword ptr [ebp - 0x13c], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(0xfu); }
  /* 0050a8f3 mov dword ptr [ebp - 0x140], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); M32(m_) = (u32)(0x0u); }
  /* 0050a8fd mov byte ptr [ebp - 0x150], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); M8(m_) = (u8)(0x0u); }
  /* 0050a904 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0050a907:;
  /* 0050a907 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050a909 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050a90a test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a90c jne 0x50a907 */ if (!ZF_) goto L_0050a907;
  /* 0050a90e sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050a910 mov edx, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); edx = (u32)(M32(m_)); }
  /* 0050a913 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a914 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050a915 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a91b call 0x404420 */ esp -= 4; M32(esp) = 0x50a920u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50a91bu); RETCHK(0x50a920u, 0x50a91bu); LOADALL;
  /* 0050a920 mov byte ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xau); }
  /* 0050a924 mov esi, dword ptr [edi + 0x350] */ { const u32 m_ = (u32)(edi + 0x350u); esi = (u32)(M32(m_)); }
  /* 0050a92a lea eax, [ebp - 0x154] */ eax = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050a930 call 0x5224b0 */ esp -= 4; M32(esp) = 0x50a935u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x50a930u); RETCHK(0x50a935u, 0x50a930u); LOADALL;
  /* 0050a935 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050a939 cmp dword ptr [ebp - 0x13c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a940 jb 0x50a951 */ if (CF_) goto L_0050a951;
  /* 0050a942 mov eax, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); eax = (u32)(M32(m_)); }
  /* 0050a948 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050a949 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50a94eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50a949u); RETCHK(0x50a94eu, 0x50a949u); LOADALL;
  /* 0050a94e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050a951:;
  /* 0050a951 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050a954 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050a956 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a958 jne 0x50aa3f */ if (!ZF_) goto L_0050aa3f;
  /* 0050a95e fld dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0050a961 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050a967 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050a969 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a96c jne 0x50a973 */ if (!ZF_) goto L_0050a973;
  /* 0050a96e fld dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0050a971 jmp 0x50a97f */ goto L_0050a97f;
L_0050a973:;
  /* 0050a973 fld dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); FPUSH((double)MF32(m_)); }
  /* 0050a979 fsub dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050a97f:;
  /* 0050a97f fsub dword ptr [0x657064] */ { const u32 m_ = (u32)(0x657064u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a985 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050a98b fstp dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a991 fld dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0050a994 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050a99a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050a99c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050a99f jne 0x50a9a6 */ if (!ZF_) goto L_0050a9a6;
  /* 0050a9a1 fld dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0050a9a4 jmp 0x50a9b2 */ goto L_0050a9b2;
L_0050a9a6:;
  /* 0050a9a6 fld dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); FPUSH((double)MF32(m_)); }
  /* 0050a9ac fsub dword ptr [ebp - 0x118] */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050a9b2:;
  /* 0050a9b2 fsub dword ptr [0x656ea0] */ { const u32 m_ = (u32)(0x656ea0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a9b8 push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 0050a9bd fsub dword ptr [0x6570cc] */ { const u32 m_ = (u32)(0x6570ccu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050a9c3 fstp dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a9c9 fld dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); FPUSH((double)MF32(m_)); }
  /* 0050a9cf fadd dword ptr [0x657064] */ { const u32 m_ = (u32)(0x657064u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050a9d5 fstp dword ptr [ebp - 0x130] */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a9db fld dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); FPUSH((double)MF32(m_)); }
  /* 0050a9e1 fadd dword ptr [0x6570cc] */ { const u32 m_ = (u32)(0x6570ccu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050a9e7 fstp dword ptr [ebp - 0x12c] */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050a9ed call 0x5fe934 */ esp -= 4; M32(esp) = 0x50a9f2u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50a9edu); RETCHK(0x50a9f2u, 0x50a9edu); LOADALL;
  /* 0050a9f2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050a9f5 mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 0050a9fb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050a9fd mov byte ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xbu); }
  /* 0050aa01 je 0x50aa0e */ if (ZF_) goto L_0050aa0e;
  /* 0050aa03 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050aa04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050aa05 call 0x505150 */ esp -= 4; M32(esp) = 0x50aa0au; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x50aa05u); RETCHK(0x50aa0au, 0x50aa05u); LOADALL;
  /* 0050aa0a mov esi, eax */ { esi = (u32)(eax); }
  /* 0050aa0c jmp 0x50aa10 */ goto L_0050aa10;
L_0050aa0e:;
  /* 0050aa0e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0050aa10:;
  /* 0050aa10 push 0x650f64 */ { u32 v_ = 0x650f64u; esp -= 4; M32(esp) = v_; }
  /* 0050aa15 lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0050aa1b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050aa1c mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050aa20 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050aa22 lea ebx, [edi + 0x378] */ ebx = (u32)((u32)(edi + 0x378u));
  /* 0050aa28 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050aa29 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050aa2b call dword ptr [edx + 0xe8] */ { const u32 m_ = (u32)(edx + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50aa31u; SAVEALL; call_ind(c, t_); RETCHK(0x50aa31u, 0x50aa2bu); LOADALL; }
  /* 0050aa31 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050aa33 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050aa35 call 0x50c2c0 */ esp -= 4; M32(esp) = 0x50aa3au; SAVEALL; F_0050c2c0(c); ABI_CHECK(0x50c2c0u, 0x50aa35u); RETCHK(0x50aa3au, 0x50aa35u); LOADALL;
  /* 0050aa3a jmp 0x50ae42 */ goto L_0050ae42;
L_0050aa3f:;
  /* 0050aa3f cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050aa42 jne 0x50ac80 */ if (!ZF_) goto L_0050ac80;
  /* 0050aa48 fld dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0050aa4b fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050aa51 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050aa53 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050aa56 jne 0x50aa5d */ if (!ZF_) goto L_0050aa5d;
  /* 0050aa58 fld dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0050aa5b jmp 0x50aa69 */ goto L_0050aa69;
L_0050aa5d:;
  /* 0050aa5d fld dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); FPUSH((double)MF32(m_)); }
  /* 0050aa63 fsub dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050aa69:;
  /* 0050aa69 fsub dword ptr [0x65703c] */ { const u32 m_ = (u32)(0x65703cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050aa6f fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050aa75 fst dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); MF32(m_) = (float)ST(0); }
  /* 0050aa7b fld dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0050aa7e fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050aa84 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050aa86 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050aa89 jne 0x50aa90 */ if (!ZF_) goto L_0050aa90;
  /* 0050aa8b fld dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0050aa8e jmp 0x50aa9c */ goto L_0050aa9c;
L_0050aa90:;
  /* 0050aa90 fld dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); FPUSH((double)MF32(m_)); }
  /* 0050aa96 fsub dword ptr [ebp - 0x118] */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050aa9c:;
  /* 0050aa9c fsub dword ptr [0x656ea0] */ { const u32 m_ = (u32)(0x656ea0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050aaa2 lea edx, [ebp - 0x138] */ edx = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0050aaa8 lea eax, [ebp - 0x148] */ eax = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0050aaae lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 0050aab4 fsub dword ptr [0x6570cc] */ { const u32 m_ = (u32)(0x6570ccu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050aaba fstp dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050aac0 fld dword ptr [0x657064] */ { const u32 m_ = (u32)(0x657064u); FPUSH((double)MF32(m_)); }
  /* 0050aac6 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0050aac8 fstp dword ptr [ebp - 0x130] */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050aace fld dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); FPUSH((double)MF32(m_)); }
  /* 0050aad4 fadd dword ptr [0x6570cc] */ { const u32 m_ = (u32)(0x6570ccu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050aada fstp dword ptr [ebp - 0x12c] */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050aae0 call 0x52cee0 */ esp -= 4; M32(esp) = 0x50aae5u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50aae0u); RETCHK(0x50aae5u, 0x50aae0u); LOADALL;
  /* 0050aae5 fld dword ptr [ebp - 0x130] */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); FPUSH((double)MF32(m_)); }
  /* 0050aaeb push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 0050aaf0 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0050aaf2 fstp dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050aaf8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050aafa fld dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); FPUSH((double)MF32(m_)); }
  /* 0050ab00 fadd dword ptr [0x657064] */ { const u32 m_ = (u32)(0x657064u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ab06 fstp dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ab0c call 0x5fe934 */ esp -= 4; M32(esp) = 0x50ab11u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50ab0cu); RETCHK(0x50ab11u, 0x50ab0cu); LOADALL;
  /* 0050ab11 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ab14 mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 0050ab1a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ab1c mov byte ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xcu); }
  /* 0050ab20 je 0x50ab31 */ if (ZF_) goto L_0050ab31;
  /* 0050ab22 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ab23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ab24 call 0x505150 */ esp -= 4; M32(esp) = 0x50ab29u; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x50ab24u); RETCHK(0x50ab29u, 0x50ab24u); LOADALL;
  /* 0050ab29 mov dword ptr [ebp - 0x128], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(eax); }
  /* 0050ab2f jmp 0x50ab37 */ goto L_0050ab37;
L_0050ab31:;
  /* 0050ab31 mov dword ptr [ebp - 0x128], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(ebx); }
L_0050ab37:;
  /* 0050ab37 mov ecx, dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); ecx = (u32)(M32(m_)); }
  /* 0050ab3d push 0x650f64 */ { u32 v_ = 0x650f64u; esp -= 4; M32(esp) = v_; }
  /* 0050ab42 lea edx, [ebp - 0x138] */ edx = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0050ab48 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050ab49 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050ab4d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050ab4f lea ebx, [edi + 0x378] */ ebx = (u32)((u32)(edi + 0x378u));
  /* 0050ab55 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050ab56 call dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ab5cu; SAVEALL; call_ind(c, t_); RETCHK(0x50ab5cu, 0x50ab56u); LOADALL; }
  /* 0050ab5c push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 0050ab61 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50ab66u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50ab61u); RETCHK(0x50ab66u, 0x50ab61u); LOADALL;
  /* 0050ab66 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ab69 mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 0050ab6f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ab71 mov byte ptr [ebp - 4], 0xd */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xdu); }
  /* 0050ab75 je 0x50ab86 */ if (ZF_) goto L_0050ab86;
  /* 0050ab77 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ab78 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ab79 call 0x505150 */ esp -= 4; M32(esp) = 0x50ab7eu; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x50ab79u); RETCHK(0x50ab7eu, 0x50ab79u); LOADALL;
  /* 0050ab7e mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 0050ab84 jmp 0x50ab90 */ goto L_0050ab90;
L_0050ab86:;
  /* 0050ab86 mov dword ptr [ebp - 0x114], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(0x0u); }
L_0050ab90:;
  /* 0050ab90 push 0x650f50 */ { u32 v_ = 0x650f50u; esp -= 4; M32(esp) = v_; }
  /* 0050ab95 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050ab99 mov ecx, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); ecx = (u32)(M32(m_)); }
  /* 0050ab9f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050aba1 lea edx, [ebp - 0x124] */ edx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 0050aba7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050aba8 lea esi, [edi + 0x394] */ esi = (u32)((u32)(edi + 0x394u));
  /* 0050abae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050abaf call dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50abb5u; SAVEALL; call_ind(c, t_); RETCHK(0x50abb5u, 0x50abafu); LOADALL; }
  /* 0050abb5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050abb7 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050abb9 call 0x50c2c0 */ esp -= 4; M32(esp) = 0x50abbeu; SAVEALL; F_0050c2c0(c); ABI_CHECK(0x50c2c0u, 0x50abb9u); RETCHK(0x50abbeu, 0x50abb9u); LOADALL;
  /* 0050abbe cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050abc2 jb 0x50abc9 */ if (CF_) goto L_0050abc9;
  /* 0050abc4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050abc7 jmp 0x50abcc */ goto L_0050abcc;
L_0050abc9:;
  /* 0050abc9 lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
L_0050abcc:;
  /* 0050abcc mov eax, dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); eax = (u32)(M32(m_)); }
  /* 0050abd2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050abd3 call 0x509910 */ esp -= 4; M32(esp) = 0x50abd8u; SAVEALL; F_00509910(c); ABI_CHECK(0x509910u, 0x50abd3u); RETCHK(0x50abd8u, 0x50abd3u); LOADALL;
  /* 0050abd8 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050abdc jb 0x50abe3 */ if (CF_) goto L_0050abe3;
  /* 0050abde mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050abe1 jmp 0x50abe6 */ goto L_0050abe6;
L_0050abe3:;
  /* 0050abe3 lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
L_0050abe6:;
  /* 0050abe6 mov ecx, dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); ecx = (u32)(M32(m_)); }
  /* 0050abec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050abed call 0x5098b0 */ esp -= 4; M32(esp) = 0x50abf2u; SAVEALL; F_005098b0(c); ABI_CHECK(0x5098b0u, 0x50abedu); RETCHK(0x50abf2u, 0x50abedu); LOADALL;
  /* 0050abf2 cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050abf6 jb 0x50abfd */ if (CF_) goto L_0050abfd;
  /* 0050abf8 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050abfb jmp 0x50ac00 */ goto L_0050ac00;
L_0050abfd:;
  /* 0050abfd lea edx, [ebx + 4] */ edx = (u32)((u32)(ebx + 0x4u));
L_0050ac00:;
  /* 0050ac00 mov eax, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 0050ac06 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ac07 call 0x5098e0 */ esp -= 4; M32(esp) = 0x50ac0cu; SAVEALL; F_005098e0(c); ABI_CHECK(0x5098e0u, 0x50ac07u); RETCHK(0x50ac0cu, 0x50ac07u); LOADALL;
  /* 0050ac0c cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ac10 jb 0x50ac17 */ if (CF_) goto L_0050ac17;
  /* 0050ac12 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050ac15 jmp 0x50ac1a */ goto L_0050ac1a;
L_0050ac17:;
  /* 0050ac17 lea edx, [ebx + 4] */ edx = (u32)((u32)(ebx + 0x4u));
L_0050ac1a:;
  /* 0050ac1a mov ebx, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); ebx = (u32)(M32(m_)); }
  /* 0050ac20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050ac21 call 0x509880 */ esp -= 4; M32(esp) = 0x50ac26u; SAVEALL; F_00509880(c); ABI_CHECK(0x509880u, 0x50ac21u); RETCHK(0x50ac26u, 0x50ac21u); LOADALL;
  /* 0050ac26 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ac2a jb 0x50ac31 */ if (CF_) goto L_0050ac31;
  /* 0050ac2c mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0050ac2f jmp 0x50ac34 */ goto L_0050ac34;
L_0050ac31:;
  /* 0050ac31 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0050ac34:;
  /* 0050ac34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050ac35 lea ecx, [ebp - 0x154] */ ecx = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050ac3b call 0x403060 */ esp -= 4; M32(esp) = 0x50ac40u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x50ac3bu); RETCHK(0x50ac40u, 0x50ac3bu); LOADALL;
  /* 0050ac40 lea eax, [ebp - 0x154] */ eax = (u32)((u32)(ebp + 0xfffffeacu));
  /* 0050ac46 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050ac48 mov byte ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xeu); }
  /* 0050ac4c call 0x50c320 */ esp -= 4; M32(esp) = 0x50ac51u; SAVEALL; F_0050c320(c); ABI_CHECK(0x50c320u, 0x50ac4cu); RETCHK(0x50ac51u, 0x50ac4cu); LOADALL;
  /* 0050ac51 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050ac55 cmp dword ptr [ebp - 0x13c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ac5c jb 0x50ac6d */ if (CF_) goto L_0050ac6d;
  /* 0050ac5e mov ecx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); ecx = (u32)(M32(m_)); }
  /* 0050ac64 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050ac65 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50ac6au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50ac65u); RETCHK(0x50ac6au, 0x50ac65u); LOADALL;
  /* 0050ac6a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050ac6d:;
  /* 0050ac6d mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050ac6f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050ac71 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ac74u; SAVEALL; call_ind(c, t_); RETCHK(0x50ac74u, 0x50ac71u); LOADALL; }
  /* 0050ac74 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50ac79u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50ac74u); RETCHK(0x50ac79u, 0x50ac74u); LOADALL;
  /* 0050ac79 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0050ac7b jmp 0x50ae57 */ goto L_0050ae57;
L_0050ac80:;
  /* 0050ac80 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ac83 jne 0x50ae5d */ if (!ZF_) goto L_0050ae5d;
  /* 0050ac89 fld dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0050ac8c fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050ac92 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050ac94 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050ac97 jne 0x50ac9e */ if (!ZF_) goto L_0050ac9e;
  /* 0050ac99 fld dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0050ac9c jmp 0x50acaa */ goto L_0050acaa;
L_0050ac9e:;
  /* 0050ac9e fld dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); FPUSH((double)MF32(m_)); }
  /* 0050aca4 fsub dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050acaa:;
  /* 0050acaa fsub dword ptr [0x65703c] */ { const u32 m_ = (u32)(0x65703cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050acb0 lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 0050acb6 fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050acbc fst dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); MF32(m_) = (float)ST(0); }
  /* 0050acbf fstp dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050acc5 call 0x40d9f0 */ esp -= 4; M32(esp) = 0x50accau; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x50acc5u); RETCHK(0x50accau, 0x50acc5u); LOADALL;
  /* 0050acca fsub dword ptr [0x656ea0] */ { const u32 m_ = (u32)(0x656ea0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050acd0 lea edx, [ebp - 0x138] */ edx = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0050acd6 lea eax, [ebp - 0x148] */ eax = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0050acdc lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 0050ace2 fsub dword ptr [0x6570cc] */ { const u32 m_ = (u32)(0x6570ccu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050ace8 fstp dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050acee fld dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0050acf1 fadd dword ptr [0x657064] */ { const u32 m_ = (u32)(0x657064u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050acf7 fstp dword ptr [ebp - 0x130] */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050acfd fld dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); FPUSH((double)MF32(m_)); }
  /* 0050ad03 fadd dword ptr [0x6570cc] */ { const u32 m_ = (u32)(0x6570ccu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ad09 fstp dword ptr [ebp - 0x12c] */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ad0f call 0x52cee0 */ esp -= 4; M32(esp) = 0x50ad14u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50ad0fu); RETCHK(0x50ad14u, 0x50ad0fu); LOADALL;
  /* 0050ad14 fld dword ptr [ebp - 0x130] */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); FPUSH((double)MF32(m_)); }
  /* 0050ad1a push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 0050ad1f fadd dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ad22 fst dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); MF32(m_) = (float)ST(0); }
  /* 0050ad28 fadd dword ptr [0x657064] */ { const u32 m_ = (u32)(0x657064u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ad2e fstp dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ad34 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50ad39u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50ad34u); RETCHK(0x50ad39u, 0x50ad34u); LOADALL;
  /* 0050ad39 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ad3c mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 0050ad42 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ad44 mov byte ptr [ebp - 4], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xfu); }
  /* 0050ad48 je 0x50ad53 */ if (ZF_) goto L_0050ad53;
  /* 0050ad4a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ad4b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ad4c call 0x505150 */ esp -= 4; M32(esp) = 0x50ad51u; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x50ad4cu); RETCHK(0x50ad51u, 0x50ad4cu); LOADALL;
  /* 0050ad51 jmp 0x50ad55 */ goto L_0050ad55;
L_0050ad53:;
  /* 0050ad53 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050ad55:;
  /* 0050ad55 push 0x650f64 */ { u32 v_ = 0x650f64u; esp -= 4; M32(esp) = v_; }
  /* 0050ad5a lea ecx, [ebp - 0x138] */ ecx = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0050ad60 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050ad61 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050ad65 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050ad67 lea esi, [edi + 0x3b0] */ esi = (u32)((u32)(edi + 0x3b0u));
  /* 0050ad6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050ad6e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050ad70 mov dword ptr [ebp - 0x128], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(eax); }
  /* 0050ad76 call dword ptr [edx + 0xe8] */ { const u32 m_ = (u32)(edx + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ad7cu; SAVEALL; call_ind(c, t_); RETCHK(0x50ad7cu, 0x50ad76u); LOADALL; }
  /* 0050ad7c push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 0050ad81 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50ad86u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50ad81u); RETCHK(0x50ad86u, 0x50ad81u); LOADALL;
  /* 0050ad86 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ad89 mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 0050ad8f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ad91 mov byte ptr [ebp - 4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x10u); }
  /* 0050ad95 je 0x50ada6 */ if (ZF_) goto L_0050ada6;
  /* 0050ad97 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ad98 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ad99 call 0x505150 */ esp -= 4; M32(esp) = 0x50ad9eu; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x50ad99u); RETCHK(0x50ad9eu, 0x50ad99u); LOADALL;
  /* 0050ad9e mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 0050ada4 jmp 0x50adac */ goto L_0050adac;
L_0050ada6:;
  /* 0050ada6 mov dword ptr [ebp - 0x114], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(ebx); }
L_0050adac:;
  /* 0050adac push 0x650f50 */ { u32 v_ = 0x650f50u; esp -= 4; M32(esp) = v_; }
  /* 0050adb1 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050adb5 mov ecx, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); ecx = (u32)(M32(m_)); }
  /* 0050adbb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050adbd lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 0050adc3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050adc4 lea ebx, [edi + 0x3cc] */ ebx = (u32)((u32)(edi + 0x3ccu));
  /* 0050adca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050adcb call dword ptr [edx + 0xe8] */ { const u32 m_ = (u32)(edx + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50add1u; SAVEALL; call_ind(c, t_); RETCHK(0x50add1u, 0x50adcbu); LOADALL; }
  /* 0050add1 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050add3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050add5 call 0x50c2c0 */ esp -= 4; M32(esp) = 0x50addau; SAVEALL; F_0050c2c0(c); ABI_CHECK(0x50c2c0u, 0x50add5u); RETCHK(0x50addau, 0x50add5u); LOADALL;
  /* 0050adda cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050adde jb 0x50ade5 */ if (CF_) goto L_0050ade5;
  /* 0050ade0 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050ade3 jmp 0x50ade8 */ goto L_0050ade8;
L_0050ade5:;
  /* 0050ade5 lea edx, [ebx + 4] */ edx = (u32)((u32)(ebx + 0x4u));
L_0050ade8:;
  /* 0050ade8 mov ecx, dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); ecx = (u32)(M32(m_)); }
  /* 0050adee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050adef call 0x509910 */ esp -= 4; M32(esp) = 0x50adf4u; SAVEALL; F_00509910(c); ABI_CHECK(0x509910u, 0x50adefu); RETCHK(0x50adf4u, 0x50adefu); LOADALL;
  /* 0050adf4 cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050adf8 jb 0x50adff */ if (CF_) goto L_0050adff;
  /* 0050adfa mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050adfd jmp 0x50ae02 */ goto L_0050ae02;
L_0050adff:;
  /* 0050adff lea edx, [ebx + 4] */ edx = (u32)((u32)(ebx + 0x4u));
L_0050ae02:;
  /* 0050ae02 mov eax, dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); eax = (u32)(M32(m_)); }
  /* 0050ae08 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ae09 call 0x5098b0 */ esp -= 4; M32(esp) = 0x50ae0eu; SAVEALL; F_005098b0(c); ABI_CHECK(0x5098b0u, 0x50ae09u); RETCHK(0x50ae0eu, 0x50ae09u); LOADALL;
  /* 0050ae0e cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ae12 jb 0x50ae19 */ if (CF_) goto L_0050ae19;
  /* 0050ae14 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050ae17 jmp 0x50ae1c */ goto L_0050ae1c;
L_0050ae19:;
  /* 0050ae19 lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
L_0050ae1c:;
  /* 0050ae1c mov ecx, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); ecx = (u32)(M32(m_)); }
  /* 0050ae22 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050ae23 call 0x5098e0 */ esp -= 4; M32(esp) = 0x50ae28u; SAVEALL; F_005098e0(c); ABI_CHECK(0x5098e0u, 0x50ae23u); RETCHK(0x50ae28u, 0x50ae23u); LOADALL;
  /* 0050ae28 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ae2c jb 0x50ae33 */ if (CF_) goto L_0050ae33;
  /* 0050ae2e mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050ae31 jmp 0x50ae36 */ goto L_0050ae36;
L_0050ae33:;
  /* 0050ae33 lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
L_0050ae36:;
  /* 0050ae36 mov esi, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); esi = (u32)(M32(m_)); }
  /* 0050ae3c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050ae3d call 0x509880 */ esp -= 4; M32(esp) = 0x50ae42u; SAVEALL; F_00509880(c); ABI_CHECK(0x509880u, 0x50ae3du); RETCHK(0x50ae42u, 0x50ae3du); LOADALL;
L_0050ae42:;
  /* 0050ae42 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050ae44 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050ae46 call 0x50c320 */ esp -= 4; M32(esp) = 0x50ae4bu; SAVEALL; F_0050c320(c); ABI_CHECK(0x50c320u, 0x50ae46u); RETCHK(0x50ae4bu, 0x50ae46u); LOADALL;
  /* 0050ae4b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050ae4d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050ae4f call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ae52u; SAVEALL; call_ind(c, t_); RETCHK(0x50ae52u, 0x50ae4fu); LOADALL; }
  /* 0050ae52 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50ae57u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50ae52u); RETCHK(0x50ae57u, 0x50ae52u); LOADALL;
L_0050ae57:;
  /* 0050ae57 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ae58 call 0x5179b0 */ esp -= 4; M32(esp) = 0x50ae5du; SAVEALL; F_005179b0(c); ABI_CHECK(0x5179b0u, 0x50ae58u); RETCHK(0x50ae5du, 0x50ae58u); LOADALL;
L_0050ae5d:;
  /* 0050ae5d mov eax, dword ptr [ebp + 0x38] */ { const u32 m_ = (u32)(ebp + 0x38u); eax = (u32)(M32(m_)); }
  /* 0050ae60 mov ecx, dword ptr [ebp + 0x3c] */ { const u32 m_ = (u32)(ebp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0050ae63 mov dword ptr [edi + 0x354], eax */ { const u32 m_ = (u32)(edi + 0x354u); M32(m_) = (u32)(eax); }
  /* 0050ae69 cmp dword ptr [ebp + 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0x28u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ae6d mov dword ptr [edi + 0x358], ecx */ { const u32 m_ = (u32)(edi + 0x358u); M32(m_) = (u32)(ecx); }
  /* 0050ae73 jb 0x50ae81 */ if (CF_) goto L_0050ae81;
  /* 0050ae75 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0050ae78 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050ae79 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50ae7eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50ae79u); RETCHK(0x50ae7eu, 0x50ae79u); LOADALL;
  /* 0050ae7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050ae81:;
  /* 0050ae81 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_0050ae83:;
  /* 0050ae83 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050ae86 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050ae8d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0050ae90 call 0x61af31 */ esp -= 4; M32(esp) = 0x50ae95u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x50ae90u); RETCHK(0x50ae95u, 0x50ae90u); LOADALL;
  /* 0050ae95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050ae96 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050ae97 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050ae99 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050ae9a ret 0x38 */ c->popped = M32(esp); esp += 60u; SAVEALL; return;
L_0062d8b1:;
  /* 0062d8b1 fmul dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0062d8b7 cmp dword ptr [0x6880fc], 0x44160000 */ { const u32 m_ = (u32)(0x6880fcu); u32 a_ = M32(m_), b_ = 0x44160000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d8c1 jne 0x62d8cb */ if (!ZF_) goto L_0062d8cb;
  /* 0062d8c3 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0062d8c5 fld dword ptr [0x62d810] */ { const u32 m_ = (u32)(0x62d810u); FPUSH((double)MF32(m_)); }
L_0062d8cb:;
  /* 0062d8cb jmp 0x50a65d */ goto L_0050a65d;
}

void F_0050aea0(CPU *c) {
  NATIVE_HOOK(0x50aea0u) REGS; LOADALL;
L_0050aea0:;
  /* 0050aea0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050aea1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050aea3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050aea5 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0050aeaa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050aeb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050aeb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050aeb8 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050aebb mov eax, edx */ { eax = (u32)(edx); }
  /* 0050aebd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050aebe mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0050aec5 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0050aecc mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0050aed0 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_0050aed3:;
  /* 0050aed3 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050aed5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050aed6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050aed8 jne 0x50aed3 */ if (!ZF_) goto L_0050aed3;
  /* 0050aeda sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050aedc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050aedd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050aede lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050aee1 call 0x404420 */ esp -= 4; M32(esp) = 0x50aee6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50aee1u); RETCHK(0x50aee6u, 0x50aee1u); LOADALL;
  /* 0050aee6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050aee9 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050aef0 mov esi, dword ptr [ecx + 0x350] */ { const u32 m_ = (u32)(ecx + 0x350u); esi = (u32)(M32(m_)); }
  /* 0050aef6 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050aef9 call 0x5224b0 */ esp -= 4; M32(esp) = 0x50aefeu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x50aef9u); RETCHK(0x50aefeu, 0x50aef9u); LOADALL;
  /* 0050aefe cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050af02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050af03 jb 0x50af11 */ if (CF_) goto L_0050af11;
  /* 0050af05 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0050af08 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050af09 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50af0eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50af09u); RETCHK(0x50af0eu, 0x50af09u); LOADALL;
  /* 0050af0e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050af11:;
  /* 0050af11 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050af14 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050af1b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050af1d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050af1e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050af30(CPU *c) {
  NATIVE_HOOK(0x50af30u) REGS; LOADALL;
L_0050af30:;
  /* 0050af30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050af31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050af33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050af34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050af35 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050af38 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050af3a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0050af3b mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050af3d je 0x50af4b */ if (ZF_) goto L_0050af4b;
  /* 0050af3f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050af40 call 0x50a1b0 */ esp -= 4; M32(esp) = 0x50af45u; SAVEALL; F_0050a1b0(c); ABI_CHECK(0x50a1b0u, 0x50af40u); RETCHK(0x50af45u, 0x50af40u); LOADALL;
  /* 0050af45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050af46 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050af47 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050af48 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050af4b:;
  /* 0050af4b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050af4e call 0x5075c0 */ esp -= 4; M32(esp) = 0x50af53u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x50af4eu); RETCHK(0x50af53u, 0x50af4eu); LOADALL;
  /* 0050af53 cmp dword ptr [ebx + 0x390], 0x10 */ { const u32 m_ = (u32)(ebx + 0x390u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050af5a mov edx, dword ptr [ebx + 0x38c] */ { const u32 m_ = (u32)(ebx + 0x38cu); edx = (u32)(M32(m_)); }
  /* 0050af60 jb 0x50af6a */ if (CF_) goto L_0050af6a;
  /* 0050af62 mov ecx, dword ptr [ebx + 0x37c] */ { const u32 m_ = (u32)(ebx + 0x37cu); ecx = (u32)(M32(m_)); }
  /* 0050af68 jmp 0x50af70 */ goto L_0050af70;
L_0050af6a:;
  /* 0050af6a lea ecx, [ebx + 0x37c] */ ecx = (u32)((u32)(ebx + 0x37cu));
L_0050af70:;
  /* 0050af70 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050af71 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050af72 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0050af75 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050af76 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050af78 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050af7a call 0x405de0 */ esp -= 4; M32(esp) = 0x50af7fu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x50af7au); RETCHK(0x50af7fu, 0x50af7au); LOADALL;
  /* 0050af7f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050af81 jne 0x50afaa */ if (!ZF_) goto L_0050afaa;
  /* 0050af83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050af84 call 0x509d90 */ esp -= 4; M32(esp) = 0x50af89u; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x50af84u); RETCHK(0x50af89u, 0x50af84u); LOADALL;
  /* 0050af89 mov eax, dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); eax = (u32)(M32(m_)); }
  /* 0050af8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050af91 je 0x50af9a */ if (ZF_) goto L_0050af9a;
  /* 0050af93 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050af95 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x50af97u; SAVEALL; call_ind(c, t_); RETCHK(0x50af97u, 0x50af95u); LOADALL; }
  /* 0050af97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050af9a:;
  /* 0050af9a mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050af9c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050af9e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050afa0 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50afa2u; SAVEALL; call_ind(c, t_); RETCHK(0x50afa2u, 0x50afa0u); LOADALL; }
  /* 0050afa2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050afa3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050afa5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050afa6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050afa7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050afaa:;
  /* 0050afaa mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050afad call 0x5075c0 */ esp -= 4; M32(esp) = 0x50afb2u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x50afadu); RETCHK(0x50afb2u, 0x50afadu); LOADALL;
  /* 0050afb2 cmp dword ptr [ebx + 0x3ac], 0x10 */ { const u32 m_ = (u32)(ebx + 0x3acu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050afb9 mov edx, dword ptr [ebx + 0x3a8] */ { const u32 m_ = (u32)(ebx + 0x3a8u); edx = (u32)(M32(m_)); }
  /* 0050afbf jb 0x50afc9 */ if (CF_) goto L_0050afc9;
  /* 0050afc1 mov ecx, dword ptr [ebx + 0x398] */ { const u32 m_ = (u32)(ebx + 0x398u); ecx = (u32)(M32(m_)); }
  /* 0050afc7 jmp 0x50afcf */ goto L_0050afcf;
L_0050afc9:;
  /* 0050afc9 lea ecx, [ebx + 0x398] */ ecx = (u32)((u32)(ebx + 0x398u));
L_0050afcf:;
  /* 0050afcf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050afd0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050afd1 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0050afd4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050afd5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050afd7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050afd9 call 0x405de0 */ esp -= 4; M32(esp) = 0x50afdeu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x50afd9u); RETCHK(0x50afdeu, 0x50afd9u); LOADALL;
  /* 0050afde test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050afe0 jne 0x50b009 */ if (!ZF_) goto L_0050b009;
  /* 0050afe2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050afe3 call 0x509d90 */ esp -= 4; M32(esp) = 0x50afe8u; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x50afe3u); RETCHK(0x50afe8u, 0x50afe3u); LOADALL;
  /* 0050afe8 mov eax, dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); eax = (u32)(M32(m_)); }
  /* 0050afee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050aff0 je 0x50aff9 */ if (ZF_) goto L_0050aff9;
  /* 0050aff2 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0050aff4 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x50aff6u; SAVEALL; call_ind(c, t_); RETCHK(0x50aff6u, 0x50aff4u); LOADALL; }
  /* 0050aff6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050aff9:;
  /* 0050aff9 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050affb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050affd mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050afff call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50b001u; SAVEALL; call_ind(c, t_); RETCHK(0x50b001u, 0x50afffu); LOADALL; }
  /* 0050b001 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b002 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050b004 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050b005 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b006 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050b009:;
  /* 0050b009 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050b00c lea edx, [ebx + 0x3b0] */ edx = (u32)((u32)(ebx + 0x3b0u));
  /* 0050b012 call 0x5075c0 */ esp -= 4; M32(esp) = 0x50b017u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x50b012u); RETCHK(0x50b017u, 0x50b012u); LOADALL;
  /* 0050b017 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050b019 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050b01b call 0x40a560 */ esp -= 4; M32(esp) = 0x50b020u; SAVEALL; F_0040a560(c); ABI_CHECK(0x40a560u, 0x50b01bu); RETCHK(0x50b020u, 0x50b01bu); LOADALL;
  /* 0050b020 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b022 je 0x50b039 */ if (ZF_) goto L_0050b039;
  /* 0050b024 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050b026 call 0x509d90 */ esp -= 4; M32(esp) = 0x50b02bu; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x50b026u); RETCHK(0x50b02bu, 0x50b026u); LOADALL;
  /* 0050b02b mov eax, dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); eax = (u32)(M32(m_)); }
  /* 0050b031 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b033 je 0x50b06c */ if (ZF_) goto L_0050b06c;
  /* 0050b035 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0050b037 jmp 0x50b067 */ goto L_0050b067;
L_0050b039:;
  /* 0050b039 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050b03c lea edx, [ebx + 0x3cc] */ edx = (u32)((u32)(ebx + 0x3ccu));
  /* 0050b042 call 0x5075c0 */ esp -= 4; M32(esp) = 0x50b047u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x50b042u); RETCHK(0x50b047u, 0x50b042u); LOADALL;
  /* 0050b047 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050b049 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050b04b call 0x40a560 */ esp -= 4; M32(esp) = 0x50b050u; SAVEALL; F_0040a560(c); ABI_CHECK(0x40a560u, 0x50b04bu); RETCHK(0x50b050u, 0x50b04bu); LOADALL;
  /* 0050b050 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b052 je 0x50b074 */ if (ZF_) goto L_0050b074;
  /* 0050b054 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050b056 call 0x509d90 */ esp -= 4; M32(esp) = 0x50b05bu; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x50b056u); RETCHK(0x50b05bu, 0x50b056u); LOADALL;
  /* 0050b05b mov eax, dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); eax = (u32)(M32(m_)); }
  /* 0050b061 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b063 je 0x50b06c */ if (ZF_) goto L_0050b06c;
  /* 0050b065 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
L_0050b067:;
  /* 0050b067 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x50b069u; SAVEALL; call_ind(c, t_); RETCHK(0x50b069u, 0x50b067u); LOADALL; }
  /* 0050b069 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b06c:;
  /* 0050b06c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0050b06e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050b070 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050b072 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50b074u; SAVEALL; call_ind(c, t_); RETCHK(0x50b074u, 0x50b072u); LOADALL; }
L_0050b074:;
  /* 0050b074 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b075 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050b077 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050b078 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b079 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050b080(CPU *c) {
  NATIVE_HOOK(0x50b080u) REGS; LOADALL;
L_0050b080:;
  /* 0050b080 mov eax, dword ptr [ecx + 0x358] */ { const u32 m_ = (u32)(ecx + 0x358u); eax = (u32)(M32(m_)); }
  /* 0050b086 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b088 je 0x50b08c */ if (ZF_) goto L_0050b08c;
  /* 0050b08a jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
L_0050b08c:;
  /* 0050b08c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050b090(CPU *c) {
  NATIVE_HOOK(0x50b090u) REGS; LOADALL;
L_0050b090:;
  /* 0050b090 jmp 0x62ddb4 */ goto L_0062ddb4;
L_0050b095:;
  /* 0050b095 push 0x62436b */ { u32 v_ = 0x62436bu; esp -= 4; M32(esp) = v_; }
  /* 0050b09a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050b0a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b0a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050b0a8 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b0ab mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0050b0b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b0b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b0b2 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0050b0b7 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050b0ba call 0x5fe934 */ esp -= 4; M32(esp) = 0x50b0bfu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50b0bau); RETCHK(0x50b0bfu, 0x50b0bau); LOADALL;
  /* 0050b0bf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b0c2 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0050b0c5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b0c7 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050b0ce je 0x50b0dc */ if (ZF_) goto L_0050b0dc;
  /* 0050b0d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050b0d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b0d3 call 0x50a230 */ esp -= 4; M32(esp) = 0x50b0d8u; SAVEALL; F_0050a230(c); ABI_CHECK(0x50a230u, 0x50b0d3u); RETCHK(0x50b0d8u, 0x50b0d3u); LOADALL;
  /* 0050b0d8 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050b0da jmp 0x50b0de */ goto L_0050b0de;
L_0050b0dc:;
  /* 0050b0dc xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0050b0de:;
  /* 0050b0de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b0df lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0050b0e2 push 0x650f40 */ { u32 v_ = 0x650f40u; esp -= 4; M32(esp) = v_; }
  /* 0050b0e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b0e8 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0050b0ef call 0x5fe9aa */ esp -= 4; M32(esp) = 0x50b0f4u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x50b0efu); RETCHK(0x50b0f4u, 0x50b0efu); LOADALL;
  /* 0050b0f4 fild dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); FPUSH((double)(s32)M32(m_)); }
  /* 0050b0f7 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0050b0fa mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0050b0fd mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0050b100 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b103 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b104 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b105 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b106 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b109 fstp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b10d mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050b10f fild dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)(s32)M32(m_)); }
  /* 0050b112 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0050b115 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050b11c mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0050b123 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b127 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0050b12a mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0050b12e lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_0050b131:;
  /* 0050b131 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050b133 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050b134 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b136 jne 0x50b131 */ if (!ZF_) goto L_0050b131;
  /* 0050b138 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050b13a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b13b lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0050b13e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b13f call 0x404420 */ esp -= 4; M32(esp) = 0x50b144u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50b13fu); RETCHK(0x50b144u, 0x50b13fu); LOADALL;
  /* 0050b144 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050b147 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050b14a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b14b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b14c call 0x50a420 */ esp -= 4; M32(esp) = 0x50b151u; SAVEALL; F_0050a420(c); ABI_CHECK(0x50a420u, 0x50b14cu); RETCHK(0x50b151u, 0x50b14cu); LOADALL;
  /* 0050b151 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b154 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b15b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0050b15e mov eax, edi */ { eax = (u32)(edi); }
  /* 0050b160 call 0x61af31 */ esp -= 4; M32(esp) = 0x50b165u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x50b160u); RETCHK(0x50b165u, 0x50b160u); LOADALL;
  /* 0050b165 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050b166 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b167 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b169 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b16a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062ddb4:;
  /* 0062ddb4 cmp dword ptr [0x9c1054], 0 */ { const u32 m_ = (u32)(0x9c1054u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062ddbb je 0x62ddc2 */ if (ZF_) goto L_0062ddc2;
  /* 0062ddbd call 0x62dd84 */ esp -= 4; M32(esp) = 0x62ddc2u; SAVEALL; F_0062dd84(c); ABI_CHECK(0x62dd84u, 0x62ddbdu); RETCHK(0x62ddc2u, 0x62ddbdu); LOADALL;
L_0062ddc2:;
  /* 0062ddc2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062ddc3 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062ddc5 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0062ddc7 jmp 0x50b095 */ goto L_0050b095;
}

void F_0050b170(CPU *c) {
  NATIVE_HOOK(0x50b170u) REGS; LOADALL;
L_0050b170:;
  /* 0050b170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b173 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b175 push 0x62436b */ { u32 v_ = 0x62436bu; esp -= 4; M32(esp) = v_; }
  /* 0050b17a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050b180 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b181 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050b188 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b18b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0050b190 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b191 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b192 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0050b197 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050b19a call 0x5fe934 */ esp -= 4; M32(esp) = 0x50b19fu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50b19au); RETCHK(0x50b19fu, 0x50b19au); LOADALL;
  /* 0050b19f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b1a2 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0050b1a5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b1a7 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050b1ae je 0x50b1be */ if (ZF_) goto L_0050b1be;
  /* 0050b1b0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050b1b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b1b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b1b5 call 0x50a230 */ esp -= 4; M32(esp) = 0x50b1bau; SAVEALL; F_0050a230(c); ABI_CHECK(0x50a230u, 0x50b1b5u); RETCHK(0x50b1bau, 0x50b1b5u); LOADALL;
  /* 0050b1ba mov edi, eax */ { edi = (u32)(eax); }
  /* 0050b1bc jmp 0x50b1c0 */ goto L_0050b1c0;
L_0050b1be:;
  /* 0050b1be xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0050b1c0:;
  /* 0050b1c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b1c1 lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0050b1c4 push 0x650f40 */ { u32 v_ = 0x650f40u; esp -= 4; M32(esp) = v_; }
  /* 0050b1c9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b1ca mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0050b1d1 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x50b1d6u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x50b1d1u); RETCHK(0x50b1d6u, 0x50b1d1u); LOADALL;
  /* 0050b1d6 fild dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); FPUSH((double)(s32)M32(m_)); }
  /* 0050b1d9 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0050b1dc mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0050b1df mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0050b1e2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b1e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b1e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b1e7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b1e8 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b1eb fstp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b1ef mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050b1f1 fild dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); FPUSH((double)(s32)M32(m_)); }
  /* 0050b1f4 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0050b1f7 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050b1fe mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0050b205 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b209 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0050b20c mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0050b210 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_0050b213:;
  /* 0050b213 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050b215 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050b216 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b218 jne 0x50b213 */ if (!ZF_) goto L_0050b213;
  /* 0050b21a sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050b21c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b21d lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0050b220 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b221 call 0x404420 */ esp -= 4; M32(esp) = 0x50b226u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50b221u); RETCHK(0x50b226u, 0x50b221u); LOADALL;
  /* 0050b226 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0050b229 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050b22c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b22d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b22e call 0x50a420 */ esp -= 4; M32(esp) = 0x50b233u; SAVEALL; F_0050a420(c); ABI_CHECK(0x50a420u, 0x50b22eu); RETCHK(0x50b233u, 0x50b22eu); LOADALL;
  /* 0050b233 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b236 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b23d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0050b240 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050b242 call 0x61af31 */ esp -= 4; M32(esp) = 0x50b247u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x50b242u); RETCHK(0x50b247u, 0x50b242u); LOADALL;
  /* 0050b247 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050b248 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b249 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b24b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b24c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050b250(CPU *c) {
  NATIVE_HOOK(0x50b250u) REGS; LOADALL;
L_0050b250:;
  /* 0050b250 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b251 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b253 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b255 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050b25a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050b260 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b261 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050b268 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b269 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b26a push 0x50b350 */ { u32 v_ = 0x50b350u; esp -= 4; M32(esp) = v_; }
  /* 0050b26f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b272 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050b274 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050b276 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050b279 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050b27c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b27e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b27f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0050b282 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050b289 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050b28c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b28d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050b290 call 0x404140 */ esp -= 4; M32(esp) = 0x50b295u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50b290u); RETCHK(0x50b295u, 0x50b290u); LOADALL;
  /* 0050b295 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050b298 call 0x405c00 */ esp -= 4; M32(esp) = 0x50b29du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x50b298u); RETCHK(0x50b29du, 0x50b298u); LOADALL;
  /* 0050b29d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050b29f call 0x405c80 */ esp -= 4; M32(esp) = 0x50b2a4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50b29fu); RETCHK(0x50b2a4u, 0x50b29fu); LOADALL;
  /* 0050b2a4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050b2a8 jb 0x50b2b6 */ if (CF_) goto L_0050b2b6;
  /* 0050b2aa mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050b2ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b2ae call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50b2b3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50b2aeu); RETCHK(0x50b2b3u, 0x50b2aeu); LOADALL;
  /* 0050b2b3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b2b6:;
  /* 0050b2b6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b2b9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050b2bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b2c2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050b2c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b2c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b2c6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0050b2d0(CPU *c) {
  NATIVE_HOOK(0x50b2d0u) REGS; LOADALL;
L_0050b2d0:;
  /* 0050b2d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b2d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b2d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b2d5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050b2da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050b2e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b2e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050b2e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b2e9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b2ea push 0x50b3b0 */ { u32 v_ = 0x50b3b0u; esp -= 4; M32(esp) = v_; }
  /* 0050b2ef sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b2f2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050b2f4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050b2f6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050b2f9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050b2fc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b2fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b2ff lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0050b302 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050b309 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050b30c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b30d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050b310 call 0x404140 */ esp -= 4; M32(esp) = 0x50b315u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50b310u); RETCHK(0x50b315u, 0x50b310u); LOADALL;
  /* 0050b315 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050b318 call 0x405c00 */ esp -= 4; M32(esp) = 0x50b31du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x50b318u); RETCHK(0x50b31du, 0x50b318u); LOADALL;
  /* 0050b31d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050b31f call 0x405c80 */ esp -= 4; M32(esp) = 0x50b324u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50b31fu); RETCHK(0x50b324u, 0x50b31fu); LOADALL;
  /* 0050b324 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050b328 jb 0x50b336 */ if (CF_) goto L_0050b336;
  /* 0050b32a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050b32d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b32e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50b333u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50b32eu); RETCHK(0x50b333u, 0x50b32eu); LOADALL;
  /* 0050b333 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b336:;
  /* 0050b336 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b339 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050b33b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b342 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050b343 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b345 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b346 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0050b350(CPU *c) {
  NATIVE_HOOK(0x50b350u) REGS; LOADALL;
L_0050b350:;
  /* 0050b350 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b351 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b353 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b355 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050b35a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050b360 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b361 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050b368 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b369 push 0x350 */ { u32 v_ = 0x350u; esp -= 4; M32(esp) = v_; }
  /* 0050b36e call 0x5fe934 */ esp -= 4; M32(esp) = 0x50b373u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50b36eu); RETCHK(0x50b373u, 0x50b36eu); LOADALL;
  /* 0050b373 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b376 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050b379 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b37b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050b382 je 0x50b39a */ if (ZF_) goto L_0050b39a;
  /* 0050b384 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050b386 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b387 call 0x509940 */ esp -= 4; M32(esp) = 0x50b38cu; SAVEALL; F_00509940(c); ABI_CHECK(0x509940u, 0x50b387u); RETCHK(0x50b38cu, 0x50b387u); LOADALL;
  /* 0050b38c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b38f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b396 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b398 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b399 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050b39a:;
  /* 0050b39a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b39d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050b39f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b3a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b3a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b3a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050b3b0(CPU *c) {
  NATIVE_HOOK(0x50b3b0u) REGS; LOADALL;
L_0050b3b0:;
  /* 0050b3b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b3b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b3b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b3b5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050b3ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050b3c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b3c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050b3c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b3c9 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0050b3ce call 0x5fe934 */ esp -= 4; M32(esp) = 0x50b3d3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50b3ceu); RETCHK(0x50b3d3u, 0x50b3ceu); LOADALL;
  /* 0050b3d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b3d6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050b3d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b3db mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050b3e2 je 0x50b3fa */ if (ZF_) goto L_0050b3fa;
  /* 0050b3e4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050b3e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b3e7 call 0x50a230 */ esp -= 4; M32(esp) = 0x50b3ecu; SAVEALL; F_0050a230(c); ABI_CHECK(0x50a230u, 0x50b3e7u); RETCHK(0x50b3ecu, 0x50b3e7u); LOADALL;
  /* 0050b3ec mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b3ef mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b3f6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b3f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b3f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050b3fa:;
  /* 0050b3fa mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b3fd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050b3ff mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b406 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b408 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b409 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050b410(CPU *c) {
  NATIVE_HOOK(0x50b410u) REGS; LOADALL;
L_0050b410:;
  /* 0050b410 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b411 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b413 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b414 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0050b417 cmp dword ptr [ebx], 7 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050b41a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b41b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050b41e jne 0x50b445 */ if (!ZF_) goto L_0050b445;
  /* 0050b420 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050b423 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b424 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b425 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b426 call 0x5fb160 */ esp -= 4; M32(esp) = 0x50b42bu; SAVEALL; F_005fb160(c); ABI_CHECK(0x5fb160u, 0x50b426u); RETCHK(0x50b42bu, 0x50b426u); LOADALL;
  /* 0050b42b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b42c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b42d call 0x5fb1a0 */ esp -= 4; M32(esp) = 0x50b432u; SAVEALL; F_005fb1a0(c); ABI_CHECK(0x5fb1a0u, 0x50b42du); RETCHK(0x50b432u, 0x50b42du); LOADALL;
  /* 0050b432 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b435 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050b437 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50b43cu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50b437u); RETCHK(0x50b43cu, 0x50b437u); LOADALL;
  /* 0050b43c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050b43e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b43f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050b441 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50b444u; SAVEALL; call_ind(c, t_); RETCHK(0x50b444u, 0x50b441u); LOADALL; }
  /* 0050b444 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0050b445:;
  /* 0050b445 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b446 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b447 call 0x5fb410 */ esp -= 4; M32(esp) = 0x50b44cu; SAVEALL; F_005fb410(c); ABI_CHECK(0x5fb410u, 0x50b447u); RETCHK(0x50b44cu, 0x50b447u); LOADALL;
  /* 0050b44c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b44f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b450 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050b451 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b452 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050b460(CPU *c) {
  NATIVE_HOOK(0x50b460u) REGS; LOADALL;
L_0050b460:;
  /* 0050b460 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b461 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b463 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050b469 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b46b push 0x61dee4 */ { u32 v_ = 0x61dee4u; esp -= 4; M32(esp) = v_; }
  /* 0050b470 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b471 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050b474 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050b47b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b47c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b47d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050b480 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b481 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b482 call 0x506b60 */ esp -= 4; M32(esp) = 0x50b487u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x50b482u); RETCHK(0x50b487u, 0x50b482u); LOADALL;
  /* 0050b487 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050b489 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050b48c mov dword ptr [esi], 0x651020 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651020u); }
  /* 0050b492 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0050b497 mov dword ptr [esi + 0x19c], eax */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(eax); }
  /* 0050b49d mov dword ptr [esi + 0x198], ebx */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(ebx); }
  /* 0050b4a3 mov byte ptr [esi + 0x188], bl */ { const u32 m_ = (u32)(esi + 0x188u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050b4a9 mov dword ptr [esi + 0x1b8], eax */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(eax); }
  /* 0050b4af mov dword ptr [esi + 0x1b4], ebx */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(ebx); }
  /* 0050b4b5 mov byte ptr [esi + 0x1a4], bl */ { const u32 m_ = (u32)(esi + 0x1a4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050b4bb push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0050b4bd push 0x651128 */ { u32 v_ = 0x651128u; esp -= 4; M32(esp) = v_; }
  /* 0050b4c2 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0050b4c5 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0050b4c9 call 0x404420 */ esp -= 4; M32(esp) = 0x50b4ceu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50b4c9u); RETCHK(0x50b4ceu, 0x50b4c9u); LOADALL;
  /* 0050b4ce mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b4d1 mov dword ptr [esi + 0x180], ebx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(ebx); }
  /* 0050b4d7 mov byte ptr [esi + 0x3c], 1 */ { const u32 m_ = (u32)(esi + 0x3cu); M8(m_) = (u8)(0x1u); }
  /* 0050b4db mov eax, esi */ { eax = (u32)(esi); }
  /* 0050b4dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b4de mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b4e5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050b4e6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b4e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b4e9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050b4f0(CPU *c) {
  NATIVE_HOOK(0x50b4f0u) REGS; LOADALL;
L_0050b4f0:;
  /* 0050b4f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b4f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b4f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b4f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050b4f6 call 0x50b520 */ esp -= 4; M32(esp) = 0x50b4fbu; SAVEALL; F_0050b520(c); ABI_CHECK(0x50b520u, 0x50b4f6u); RETCHK(0x50b4fbu, 0x50b4f6u); LOADALL;
  /* 0050b4fb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b4ff je 0x50b50a */ if (ZF_) goto L_0050b50a;
  /* 0050b501 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b502 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50b507u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50b502u); RETCHK(0x50b507u, 0x50b502u); LOADALL;
  /* 0050b507 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b50a:;
  /* 0050b50a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050b50c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b50d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b50e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050b520(CPU *c) {
  NATIVE_HOOK(0x50b520u) REGS; LOADALL;
L_0050b520:;
  /* 0050b520 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b521 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b522 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050b524 mov dword ptr [esi], 0x651020 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651020u); }
  /* 0050b52a cmp dword ptr [esi + 0x1b8], 0x10 */ { const u32 m_ = (u32)(esi + 0x1b8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050b531 jb 0x50b542 */ if (CF_) goto L_0050b542;
  /* 0050b533 mov eax, dword ptr [esi + 0x1a4] */ { const u32 m_ = (u32)(esi + 0x1a4u); eax = (u32)(M32(m_)); }
  /* 0050b539 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b53a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50b53fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50b53au); RETCHK(0x50b53fu, 0x50b53au); LOADALL;
  /* 0050b53f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b542:;
  /* 0050b542 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050b544 mov dword ptr [esi + 0x1b8], 0xf */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(0xfu); }
  /* 0050b54e mov dword ptr [esi + 0x1b4], ebx */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(ebx); }
  /* 0050b554 mov byte ptr [esi + 0x1a4], bl */ { const u32 m_ = (u32)(esi + 0x1a4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050b55a cmp dword ptr [esi + 0x19c], 0x10 */ { const u32 m_ = (u32)(esi + 0x19cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050b561 jb 0x50b572 */ if (CF_) goto L_0050b572;
  /* 0050b563 mov ecx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 0050b569 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b56a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50b56fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50b56au); RETCHK(0x50b56fu, 0x50b56au); LOADALL;
  /* 0050b56f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b572:;
  /* 0050b572 mov dword ptr [esi + 0x198], ebx */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(ebx); }
  /* 0050b578 mov dword ptr [esi + 0x19c], 0xf */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(0xfu); }
  /* 0050b582 mov byte ptr [esi + 0x188], bl */ { const u32 m_ = (u32)(esi + 0x188u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050b588 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050b58a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b58b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050b58c jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0050b5a0(CPU *c) {
  NATIVE_HOOK(0x50b5a0u) REGS; LOADALL;
L_0050b5a0:;
  /* 0050b5a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b5a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b5a3 sub esp, 0x214 */ { u32 a_ = esp, b_ = 0x214u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b5a9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0050b5ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b5af push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b5b1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050b5b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050b5b7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050b5b9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050b5bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b5bc lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 0050b5bf call 0x404140 */ esp -= 4; M32(esp) = 0x50b5c4u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50b5bfu); RETCHK(0x50b5c4u, 0x50b5bfu); LOADALL;
  /* 0050b5c4 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 0050b5c7 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0050b5ca lea eax, [ebp - 0x214] */ eax = (u32)((u32)(ebp + 0xfffffdecu));
  /* 0050b5d0 call 0x52cee0 */ esp -= 4; M32(esp) = 0x50b5d5u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50b5d0u); RETCHK(0x50b5d5u, 0x50b5d0u); LOADALL;
  /* 0050b5d5 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0050b5da call 0x5b18a0 */ esp -= 4; M32(esp) = 0x50b5dfu; SAVEALL; F_005b18a0(c); ABI_CHECK(0x5b18a0u, 0x50b5dau); RETCHK(0x50b5dfu, 0x50b5dau); LOADALL;
  /* 0050b5df push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b5e0 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0050b5e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b5e7 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x50b5ecu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x50b5e7u); RETCHK(0x50b5ecu, 0x50b5e7u); LOADALL;
  /* 0050b5ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b5ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b5ee push 0x651110 */ { u32 v_ = 0x651110u; esp -= 4; M32(esp) = v_; }
  /* 0050b5f3 lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 0050b5f9 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0050b5fe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b5ff mov byte ptr [ebp - 5], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)(0x0u); }
  /* 0050b603 call 0x5fe928 */ esp -= 4; M32(esp) = 0x50b608u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x50b603u); RETCHK(0x50b608u, 0x50b603u); LOADALL;
  /* 0050b608 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 0050b60a call 0x5fe934 */ esp -= 4; M32(esp) = 0x50b60fu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50b60au); RETCHK(0x50b60fu, 0x50b60au); LOADALL;
  /* 0050b60f add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b612 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b614 je 0x50b61d */ if (ZF_) goto L_0050b61d;
  /* 0050b616 call 0x52c860 */ esp -= 4; M32(esp) = 0x50b61bu; SAVEALL; F_0052c860(c); ABI_CHECK(0x52c860u, 0x50b616u); RETCHK(0x50b61bu, 0x50b616u); LOADALL;
  /* 0050b61b jmp 0x50b61f */ goto L_0050b61f;
L_0050b61d:;
  /* 0050b61d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050b61f:;
  /* 0050b61f lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 0050b625 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050b627 mov dword ptr [edi + 0x180], eax */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(eax); }
  /* 0050b62d call 0x52ca30 */ esp -= 4; M32(esp) = 0x50b632u; SAVEALL; F_0052ca30(c); ABI_CHECK(0x52ca30u, 0x50b62du); RETCHK(0x50b632u, 0x50b62du); LOADALL;
  /* 0050b632 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0050b635 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050b638 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b639 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050b63f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050b641 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b644 je 0x50b64e */ if (ZF_) goto L_0050b64e;
  /* 0050b646 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050b648 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0050b64b fsub dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050b64e:;
  /* 0050b64e fstp dword ptr [ebp - 0x20c] */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b654 fld dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0050b657 fsub dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050b65a fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050b660 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050b662 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b665 je 0x50b66f */ if (ZF_) goto L_0050b66f;
  /* 0050b667 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050b669 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0050b66c fsub dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050b66f:;
  /* 0050b66f mov ecx, dword ptr [ebp - 0x20c] */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); ecx = (u32)(M32(m_)); }
  /* 0050b675 fstp dword ptr [ebp - 0x208] */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b67b mov eax, dword ptr [ebp - 0x208] */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); eax = (u32)(M32(m_)); }
  /* 0050b681 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b682 mov eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050b688 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b689 call 0x52cca0 */ esp -= 4; M32(esp) = 0x50b68eu; SAVEALL; F_0052cca0(c); ABI_CHECK(0x52cca0u, 0x50b689u); RETCHK(0x50b68eu, 0x50b689u); LOADALL;
  /* 0050b68e mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0050b691 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050b694 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050b696 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b697 mov dword ptr [ebp - 0x208], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(eax); }
  /* 0050b69d mov eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050b6a3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b6a4 mov dword ptr [ebp - 0x20c], edx */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); M32(m_) = (u32)(edx); }
  /* 0050b6aa call 0x52cc60 */ esp -= 4; M32(esp) = 0x50b6afu; SAVEALL; F_0052cc60(c); ABI_CHECK(0x52cc60u, 0x50b6aau); RETCHK(0x50b6afu, 0x50b6aau); LOADALL;
  /* 0050b6af mov eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050b6b5 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050b6b8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b6ba je 0x50b6ca */ if (ZF_) goto L_0050b6ca;
  /* 0050b6bc push 0x50b410 */ { u32 v_ = 0x50b410u; esp -= 4; M32(esp) = v_; }
  /* 0050b6c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b6c2 call 0x5fb900 */ esp -= 4; M32(esp) = 0x50b6c7u; SAVEALL; F_005fb900(c); ABI_CHECK(0x5fb900u, 0x50b6c2u); RETCHK(0x50b6c7u, 0x50b6c2u); LOADALL;
  /* 0050b6c7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b6ca:;
  /* 0050b6ca lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0050b6d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b6d1 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x50b6d6u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x50b6d1u); RETCHK(0x50b6d6u, 0x50b6d1u); LOADALL;
  /* 0050b6d6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0050b6d9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b6dc mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050b6de call 0x61af31 */ esp -= 4; M32(esp) = 0x50b6e3u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x50b6deu); RETCHK(0x50b6e3u, 0x50b6deu); LOADALL;
  /* 0050b6e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b6e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b6e6 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0050b6f0(CPU *c) {
  NATIVE_HOOK(0x50b6f0u) REGS; LOADALL;
L_0050b6f0:;
  /* 0050b6f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b6f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b6f3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b6f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b6f7 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050b6f9 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0050b6fb call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50b6feu; SAVEALL; call_ind(c, t_); RETCHK(0x50b6feu, 0x50b6fbu); LOADALL; }
  /* 0050b6fe test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b700 je 0x50b75c */ if (ZF_) goto L_0050b75c;
  /* 0050b702 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b703 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0050b706 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b707 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050b709 call 0x508630 */ esp -= 4; M32(esp) = 0x50b70eu; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x50b709u); RETCHK(0x50b70eu, 0x50b709u); LOADALL;
  /* 0050b70e mov eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050b714 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b716 je 0x50b75b */ if (ZF_) goto L_0050b75b;
  /* 0050b718 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b719 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 0050b71c lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050b71f call 0x52cea0 */ esp -= 4; M32(esp) = 0x50b724u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50b71fu); RETCHK(0x50b724u, 0x50b71fu); LOADALL;
  /* 0050b724 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050b727 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b728 lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050b72b call 0x52cf90 */ esp -= 4; M32(esp) = 0x50b730u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x50b72bu); RETCHK(0x50b730u, 0x50b72bu); LOADALL;
  /* 0050b730 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0050b733 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0050b736 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b739 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050b73b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b73c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050b73f mov eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050b745 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b746 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0050b749 call 0x52cc60 */ esp -= 4; M32(esp) = 0x50b74eu; SAVEALL; F_0052cc60(c); ABI_CHECK(0x52cc60u, 0x50b749u); RETCHK(0x50b74eu, 0x50b749u); LOADALL;
  /* 0050b74e mov ecx, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0050b754 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050b756 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b757 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50b75au; SAVEALL; call_ind(c, t_); RETCHK(0x50b75au, 0x50b757u); LOADALL; }
  /* 0050b75a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0050b75b:;
  /* 0050b75b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0050b75c:;
  /* 0050b75c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050b75d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b75f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b760 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050b770(CPU *c) {
  NATIVE_HOOK(0x50b770u) REGS; LOADALL;
L_0050b770:;
  /* 0050b770 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b771 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b773 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050b775 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 0050b77a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050b780 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b781 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050b788 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b78b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050b78c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050b78e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050b791 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b793 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b794 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b795 jne 0x50b7ac */ if (!ZF_) goto L_0050b7ac;
  /* 0050b797 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050b799 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b79c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b7a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050b7a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b7a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050b7a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b7a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b7a9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050b7ac:;
  /* 0050b7ac mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050b7ae call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50b7b1u; SAVEALL; call_ind(c, t_); RETCHK(0x50b7b1u, 0x50b7aeu); LOADALL; }
  /* 0050b7b1 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 0050b7b6 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050b7b8 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50b7bdu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50b7b8u); RETCHK(0x50b7bdu, 0x50b7b8u); LOADALL;
  /* 0050b7bd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050b7c0 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050b7c3 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 0050b7c8 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050b7ca fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b7cd call 0x560fd0 */ esp -= 4; M32(esp) = 0x50b7d2u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50b7cdu); RETCHK(0x50b7d2u, 0x50b7cdu); LOADALL;
  /* 0050b7d2 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050b7d5 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050b7d8 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0050b7dd mov eax, edi */ { eax = (u32)(edi); }
  /* 0050b7df fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b7e2 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50b7e7u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50b7e2u); RETCHK(0x50b7e7u, 0x50b7e2u); LOADALL;
  /* 0050b7e7 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050b7ea fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050b7ed push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 0050b7f2 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050b7f4 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050b7f7 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b7fa call 0x560fd0 */ esp -= 4; M32(esp) = 0x50b7ffu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50b7fau); RETCHK(0x50b7ffu, 0x50b7fau); LOADALL;
  /* 0050b7ff mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050b802 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050b805 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050b808 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b80a fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050b80d fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050b810 je 0x50b81e */ if (ZF_) goto L_0050b81e;
  /* 0050b812 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b813 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050b816 call 0x52d060 */ esp -= 4; M32(esp) = 0x50b81bu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x50b816u); RETCHK(0x50b81bu, 0x50b816u); LOADALL;
  /* 0050b81b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b81e:;
  /* 0050b81e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b81f mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050b824 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50b829u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50b824u); RETCHK(0x50b829u, 0x50b824u); LOADALL;
  /* 0050b829 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050b82b mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 0050b832 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0050b839 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 0050b83d lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0050b840:;
  /* 0050b840 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050b842 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050b843 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b845 jne 0x50b840 */ if (!ZF_) goto L_0050b840;
  /* 0050b847 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050b849 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b84a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b84b lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050b84e call 0x404420 */ esp -= 4; M32(esp) = 0x50b853u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50b84eu); RETCHK(0x50b853u, 0x50b84eu); LOADALL;
  /* 0050b853 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050b854 mov eax, 0x651104 */ { eax = (u32)(0x651104u); }
  /* 0050b859 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050b860 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50b865u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50b860u); RETCHK(0x50b865u, 0x50b860u); LOADALL;
  /* 0050b865 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b868 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050b86a lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050b86d mov eax, esp */ { eax = (u32)(esp); }
  /* 0050b86f mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 0050b872 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50b877u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50b872u); RETCHK(0x50b877u, 0x50b872u); LOADALL;
  /* 0050b877 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050b87a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b87b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050b87d mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0050b87f call 0x50b5a0 */ esp -= 4; M32(esp) = 0x50b884u; SAVEALL; F_0050b5a0(c); ABI_CHECK(0x50b5a0u, 0x50b87fu); RETCHK(0x50b884u, 0x50b87fu); LOADALL;
  /* 0050b884 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050b886 cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050b88a jb 0x50b898 */ if (CF_) goto L_0050b898;
  /* 0050b88c mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 0050b88f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b890 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50b895u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50b890u); RETCHK(0x50b895u, 0x50b890u); LOADALL;
  /* 0050b895 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b898:;
  /* 0050b898 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050b89b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050b89c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b89d mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0050b89f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050b8a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050b8a7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b8a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b8aa ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050b8b0(CPU *c) {
  NATIVE_HOOK(0x50b8b0u) REGS; LOADALL;
L_0050b8b0:;
  /* 0050b8b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b8b1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050b8b3 mov ecx, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0050b8b9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b8bb je 0x50b8dc */ if (ZF_) goto L_0050b8dc;
  /* 0050b8bd mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050b8bf call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50b8c2u; SAVEALL; call_ind(c, t_); RETCHK(0x50b8c2u, 0x50b8bfu); LOADALL; }
  /* 0050b8c2 mov ecx, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0050b8c8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b8ca je 0x50b8d2 */ if (ZF_) goto L_0050b8d2;
  /* 0050b8cc mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050b8ce push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050b8d0 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50b8d2u; SAVEALL; call_ind(c, t_); RETCHK(0x50b8d2u, 0x50b8d0u); LOADALL; }
L_0050b8d2:;
  /* 0050b8d2 mov dword ptr [esi + 0x180], 0 */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(0x0u); }
L_0050b8dc:;
  /* 0050b8dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b8dd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050b8e0(CPU *c) {
  NATIVE_HOOK(0x50b8e0u) REGS; LOADALL;
L_0050b8e0:;
  /* 0050b8e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b8e1 mov esi, dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); esi = (u32)(M32(m_)); }
  /* 0050b8e7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b8e9 je 0x50b8f0 */ if (ZF_) goto L_0050b8f0;
  /* 0050b8eb call 0x52cb80 */ esp -= 4; M32(esp) = 0x50b8f0u; SAVEALL; F_0052cb80(c); ABI_CHECK(0x52cb80u, 0x50b8ebu); RETCHK(0x50b8f0u, 0x50b8ebu); LOADALL;
L_0050b8f0:;
  /* 0050b8f0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b8f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050b900(CPU *c) {
  NATIVE_HOOK(0x50b900u) REGS; LOADALL;
L_0050b900:;
  /* 0050b900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b903 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b906 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b907 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050b909 mov eax, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050b90f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b911 je 0x50b941 */ if (ZF_) goto L_0050b941;
  /* 0050b913 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050b916 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b918 je 0x50b941 */ if (ZF_) goto L_0050b941;
  /* 0050b91a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050b91c lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050b91f mov dword ptr [ebp - 0x10], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xbu); }
  /* 0050b926 mov dword ptr [ebp - 0xc], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0xffffffffu); }
  /* 0050b92d mov dword ptr [ebp - 8], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x1u); }
  /* 0050b934 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050b937 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b938 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b939 call 0x5fbc30 */ esp -= 4; M32(esp) = 0x50b93eu; SAVEALL; F_005fbc30(c); ABI_CHECK(0x5fbc30u, 0x50b939u); RETCHK(0x50b93eu, 0x50b939u); LOADALL;
  /* 0050b93e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b941:;
  /* 0050b941 mov al, byte ptr [esi + 0x3f] */ { const u32 m_ = (u32)(esi + 0x3fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050b944 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b946 je 0x50b957 */ if (ZF_) goto L_0050b957;
  /* 0050b948 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050b94b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050b94e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b94f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b950 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050b952 call 0x507f00 */ esp -= 4; M32(esp) = 0x50b957u; SAVEALL; F_00507f00(c); ABI_CHECK(0x507f00u, 0x50b952u); RETCHK(0x50b957u, 0x50b952u); LOADALL;
L_0050b957:;
  /* 0050b957 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b958 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b95a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b95b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050b960(CPU *c) {
  NATIVE_HOOK(0x50b960u) REGS; LOADALL;
L_0050b960:;
  /* 0050b960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b963 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b966 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b967 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050b969 mov eax, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050b96f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b971 je 0x50b9a1 */ if (ZF_) goto L_0050b9a1;
  /* 0050b973 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050b976 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050b978 je 0x50b9a1 */ if (ZF_) goto L_0050b9a1;
  /* 0050b97a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050b97c lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050b97f mov dword ptr [ebp - 0x10], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xbu); }
  /* 0050b986 mov dword ptr [ebp - 0xc], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0xffffffffu); }
  /* 0050b98d mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0050b994 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050b997 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b998 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050b999 call 0x5fbc30 */ esp -= 4; M32(esp) = 0x50b99eu; SAVEALL; F_005fbc30(c); ABI_CHECK(0x5fbc30u, 0x50b999u); RETCHK(0x50b99eu, 0x50b999u); LOADALL;
  /* 0050b99e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050b9a1:;
  /* 0050b9a1 mov al, byte ptr [esi + 0x3f] */ { const u32 m_ = (u32)(esi + 0x3fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050b9a4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b9a6 je 0x50b9b7 */ if (ZF_) goto L_0050b9b7;
  /* 0050b9a8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050b9ab mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050b9ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050b9af push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050b9b0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050b9b2 call 0x507f80 */ esp -= 4; M32(esp) = 0x50b9b7u; SAVEALL; F_00507f80(c); ABI_CHECK(0x507f80u, 0x50b9b2u); RETCHK(0x50b9b7u, 0x50b9b2u); LOADALL;
L_0050b9b7:;
  /* 0050b9b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050b9b8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050b9ba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050b9bb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050b9c0(CPU *c) {
  NATIVE_HOOK(0x50b9c0u) REGS; LOADALL;
L_0050b9c0:;
  /* 0050b9c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050b9c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050b9c3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050b9c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050b9c7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050b9c9 fld dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0050b9cc fsub dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050b9cf fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050b9d5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050b9d7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b9da je 0x50b9e4 */ if (ZF_) goto L_0050b9e4;
  /* 0050b9dc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050b9de fld dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0050b9e1 fsub dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050b9e4:;
  /* 0050b9e4 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0050b9ea fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050b9ec fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0050b9ee fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050b9f0 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050b9f3 jnp 0x50ba81 */ if (!PF_) goto L_0050ba81;
  /* 0050b9f9 fld dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0050b9fc fsub dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050b9ff fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050ba05 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050ba07 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050ba0a je 0x50ba14 */ if (ZF_) goto L_0050ba14;
  /* 0050ba0c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050ba0e fld dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0050ba11 fsub dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050ba14:;
  /* 0050ba14 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0050ba1a fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050ba1c fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0050ba1e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050ba20 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050ba23 jnp 0x50ba81 */ if (!PF_) goto L_0050ba81;
  /* 0050ba25 mov eax, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050ba2b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ba2d je 0x50ba81 */ if (ZF_) goto L_0050ba81;
  /* 0050ba2f mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050ba32 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ba34 je 0x50ba81 */ if (ZF_) goto L_0050ba81;
  /* 0050ba36 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050ba38 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ba39 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0050ba3c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050ba3d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050ba3f call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ba42u; SAVEALL; call_ind(c, t_); RETCHK(0x50ba42u, 0x50ba3fu); LOADALL; }
  /* 0050ba42 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0050ba45 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0050ba47 mov dword ptr [ebp - 0x18], 0xa */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xau); }
  /* 0050ba4e mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0050ba55 call 0x61b154 */ esp -= 4; M32(esp) = 0x50ba5au; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50ba55u); RETCHK(0x50ba5au, 0x50ba55u); LOADALL;
  /* 0050ba5a fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0050ba5d mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050ba60 call 0x61b154 */ esp -= 4; M32(esp) = 0x50ba65u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50ba60u); RETCHK(0x50ba65u, 0x50ba60u); LOADALL;
  /* 0050ba65 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0050ba68 mov eax, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050ba6e mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050ba71 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050ba73 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050ba76 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050ba77 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050ba78 call 0x5fbc30 */ esp -= 4; M32(esp) = 0x50ba7du; SAVEALL; F_005fbc30(c); ABI_CHECK(0x5fbc30u, 0x50ba78u); RETCHK(0x50ba7du, 0x50ba78u); LOADALL;
  /* 0050ba7d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ba80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0050ba81:;
  /* 0050ba81 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050ba82 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050ba84 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050ba85 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050ba90(CPU *c) {
  NATIVE_HOOK(0x50ba90u) REGS; LOADALL;
L_0050ba90:;
  /* 0050ba90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050ba91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050ba93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050ba95 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050ba9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050baa0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050baa1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050baa8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050baa9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050baaa push 0x50bb10 */ { u32 v_ = 0x50bb10u; esp -= 4; M32(esp) = v_; }
  /* 0050baaf sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050bab2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050bab4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050bab6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050bab9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050babc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050babe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050babf lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0050bac2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050bac9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050bacc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bacd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050bad0 call 0x404140 */ esp -= 4; M32(esp) = 0x50bad5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50bad0u); RETCHK(0x50bad5u, 0x50bad0u); LOADALL;
  /* 0050bad5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050bad8 call 0x405c00 */ esp -= 4; M32(esp) = 0x50baddu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x50bad8u); RETCHK(0x50baddu, 0x50bad8u); LOADALL;
  /* 0050badd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050badf call 0x405c80 */ esp -= 4; M32(esp) = 0x50bae4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50badfu); RETCHK(0x50bae4u, 0x50badfu); LOADALL;
  /* 0050bae4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bae8 jb 0x50baf6 */ if (CF_) goto L_0050baf6;
  /* 0050baea mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050baed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050baee call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50baf3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50baeeu); RETCHK(0x50baf3u, 0x50baeeu); LOADALL;
  /* 0050baf3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050baf6:;
  /* 0050baf6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050baf9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050bafb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050bb02 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050bb03 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050bb05 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bb06 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0050bb10(CPU *c) {
  NATIVE_HOOK(0x50bb10u) REGS; LOADALL;
L_0050bb10:;
  /* 0050bb10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050bb11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050bb13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050bb15 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050bb1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050bb20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bb21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050bb28 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050bb29 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0050bb2e call 0x5fe934 */ esp -= 4; M32(esp) = 0x50bb33u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50bb2eu); RETCHK(0x50bb33u, 0x50bb2eu); LOADALL;
  /* 0050bb33 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050bb36 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050bb39 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bb3b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050bb42 je 0x50bb5a */ if (ZF_) goto L_0050bb5a;
  /* 0050bb44 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050bb46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bb47 call 0x50b460 */ esp -= 4; M32(esp) = 0x50bb4cu; SAVEALL; F_0050b460(c); ABI_CHECK(0x50b460u, 0x50bb47u); RETCHK(0x50bb4cu, 0x50bb47u); LOADALL;
  /* 0050bb4c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050bb4f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050bb56 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050bb58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bb59 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050bb5a:;
  /* 0050bb5a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050bb5d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050bb5f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050bb66 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050bb68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bb69 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050bb70(CPU *c) {
  NATIVE_HOOK(0x50bb70u) REGS; LOADALL;
L_0050bb70:;
  /* 0050bb70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050bb71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050bb73 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050bb79 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050bb7b push 0x61deb4 */ { u32 v_ = 0x61deb4u; esp -= 4; M32(esp) = v_; }
  /* 0050bb80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bb81 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050bb84 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050bb8b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050bb8c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bb8d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050bb90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bb91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bb92 call 0x506b60 */ esp -= 4; M32(esp) = 0x50bb97u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x50bb92u); RETCHK(0x50bb97u, 0x50bb92u); LOADALL;
  /* 0050bb97 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050bb99 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050bb9c mov dword ptr [esi], 0x651138 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651138u); }
  /* 0050bba2 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0050bba7 mov dword ptr [esi + 0x1a0], eax */ { const u32 m_ = (u32)(esi + 0x1a0u); M32(m_) = (u32)(eax); }
  /* 0050bbad mov dword ptr [esi + 0x19c], ebx */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(ebx); }
  /* 0050bbb3 mov byte ptr [esi + 0x18c], bl */ { const u32 m_ = (u32)(esi + 0x18cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050bbb9 mov dword ptr [esi + 0x1bc], eax */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(eax); }
  /* 0050bbbf mov dword ptr [esi + 0x1b8], ebx */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(ebx); }
  /* 0050bbc5 mov byte ptr [esi + 0x1a8], bl */ { const u32 m_ = (u32)(esi + 0x1a8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050bbcb push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0050bbcd push 0x651000 */ { u32 v_ = 0x651000u; esp -= 4; M32(esp) = v_; }
  /* 0050bbd2 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0050bbd5 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0050bbd9 call 0x404420 */ esp -= 4; M32(esp) = 0x50bbdeu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50bbd9u); RETCHK(0x50bbdeu, 0x50bbd9u); LOADALL;
  /* 0050bbde mov dword ptr [esi + 0x1c8], ebx */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(ebx); }
  /* 0050bbe4 mov dword ptr [esi + 0x1c4], ebx */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(ebx); }
  /* 0050bbea call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50bbf0u; SAVEALL; call_ind(c, t_); RETCHK(0x50bbf0u, 0x50bbeau); LOADALL; }
  /* 0050bbf0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050bbf3 mov dword ptr [esi + 0x180], eax */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(eax); }
  /* 0050bbf9 mov dword ptr [esi + 0x1c0], ebx */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(ebx); }
  /* 0050bbff mov dword ptr [esi + 0x184], 0x2710 */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(0x2710u); }
  /* 0050bc09 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050bc0b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bc0c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050bc13 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050bc14 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050bc16 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bc17 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050bc20(CPU *c) {
  NATIVE_HOOK(0x50bc20u) REGS; LOADALL;
L_0050bc20:;
  /* 0050bc20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050bc21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050bc23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bc24 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050bc26 call 0x50bc50 */ esp -= 4; M32(esp) = 0x50bc2bu; SAVEALL; F_0050bc50(c); ABI_CHECK(0x50bc50u, 0x50bc26u); RETCHK(0x50bc2bu, 0x50bc26u); LOADALL;
  /* 0050bc2b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050bc2f je 0x50bc3a */ if (ZF_) goto L_0050bc3a;
  /* 0050bc31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bc32 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50bc37u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50bc32u); RETCHK(0x50bc37u, 0x50bc32u); LOADALL;
  /* 0050bc37 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050bc3a:;
  /* 0050bc3a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050bc3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bc3d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bc3e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050bc50(CPU *c) {
  NATIVE_HOOK(0x50bc50u) REGS; LOADALL;
L_0050bc50:;
  /* 0050bc50 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050bc51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bc52 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050bc54 mov dword ptr [esi], 0x651138 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651138u); }
  /* 0050bc5a cmp dword ptr [esi + 0x1bc], 0x10 */ { const u32 m_ = (u32)(esi + 0x1bcu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bc61 jb 0x50bc72 */ if (CF_) goto L_0050bc72;
  /* 0050bc63 mov eax, dword ptr [esi + 0x1a8] */ { const u32 m_ = (u32)(esi + 0x1a8u); eax = (u32)(M32(m_)); }
  /* 0050bc69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bc6a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50bc6fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50bc6au); RETCHK(0x50bc6fu, 0x50bc6au); LOADALL;
  /* 0050bc6f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050bc72:;
  /* 0050bc72 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050bc74 mov dword ptr [esi + 0x1bc], 0xf */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(0xfu); }
  /* 0050bc7e mov dword ptr [esi + 0x1b8], ebx */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(ebx); }
  /* 0050bc84 mov byte ptr [esi + 0x1a8], bl */ { const u32 m_ = (u32)(esi + 0x1a8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050bc8a cmp dword ptr [esi + 0x1a0], 0x10 */ { const u32 m_ = (u32)(esi + 0x1a0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bc91 jb 0x50bca2 */ if (CF_) goto L_0050bca2;
  /* 0050bc93 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0050bc99 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050bc9a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50bc9fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50bc9au); RETCHK(0x50bc9fu, 0x50bc9au); LOADALL;
  /* 0050bc9f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050bca2:;
  /* 0050bca2 mov dword ptr [esi + 0x19c], ebx */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(ebx); }
  /* 0050bca8 mov dword ptr [esi + 0x1a0], 0xf */ { const u32 m_ = (u32)(esi + 0x1a0u); M32(m_) = (u32)(0xfu); }
  /* 0050bcb2 mov byte ptr [esi + 0x18c], bl */ { const u32 m_ = (u32)(esi + 0x18cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050bcb8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050bcba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bcbb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050bcbc jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0050bcd0(CPU *c) {
  NATIVE_HOOK(0x50bcd0u) REGS; LOADALL;
L_0050bcd0:;
  /* 0050bcd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050bcd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050bcd3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050bcd6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050bcd7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0050bcda mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050bcdd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bcdf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050bce0 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050bce2 jne 0x50bcee */ if (!ZF_) goto L_0050bcee;
  /* 0050bce4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050bce5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050bce7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050bce8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050bcea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bceb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050bcee:;
  /* 0050bcee cmp dword ptr [ebx], 2 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bcf1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bcf2 jne 0x50bd4b */ if (!ZF_) goto L_0050bd4b;
  /* 0050bcf4 cmp dword ptr [ebx + 8], 8 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bcf8 jne 0x50bd4b */ if (!ZF_) goto L_0050bd4b;
  /* 0050bcfa mov eax, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0050bd00 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bd02 je 0x50bd4b */ if (ZF_) goto L_0050bd4b;
  /* 0050bd04 lea eax, [edi + 0x1a4] */ eax = (u32)((u32)(edi + 0x1a4u));
  /* 0050bd0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bd0b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050bd0d call 0x5075d0 */ esp -= 4; M32(esp) = 0x50bd12u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x50bd0du); RETCHK(0x50bd12u, 0x50bd0du); LOADALL;
  /* 0050bd12 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050bd14 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bd16 je 0x50bd4b */ if (ZF_) goto L_0050bd4b;
  /* 0050bd18 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050bd1b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050bd1d mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0050bd24 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0050bd27 call 0x508540 */ esp -= 4; M32(esp) = 0x50bd2cu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x50bd27u); RETCHK(0x50bd2cu, 0x50bd27u); LOADALL;
  /* 0050bd2c lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050bd2f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050bd31 mov dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x1u); }
  /* 0050bd38 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0050bd3b call 0x508540 */ esp -= 4; M32(esp) = 0x50bd40u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x50bd3bu); RETCHK(0x50bd40u, 0x50bd3bu); LOADALL;
  /* 0050bd40 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bd41 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050bd42 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050bd44 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050bd45 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050bd47 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bd48 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050bd4b:;
  /* 0050bd4b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050bd4c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050bd4e call 0x507c50 */ esp -= 4; M32(esp) = 0x50bd53u; SAVEALL; F_00507c50(c); ABI_CHECK(0x507c50u, 0x50bd4eu); RETCHK(0x50bd53u, 0x50bd4eu); LOADALL;
  /* 0050bd53 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bd54 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050bd55 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050bd56 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050bd58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bd59 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050bd60(CPU *c) {
  NATIVE_HOOK(0x50bd60u) REGS; LOADALL;
L_0050bd60:;
  /* 0050bd60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050bd61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050bd63 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050bd65 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 0050bd6a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050bd70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bd71 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050bd78 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050bd7b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050bd7c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050bd7e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050bd81 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bd83 jne 0x50bd98 */ if (!ZF_) goto L_0050bd98;
  /* 0050bd85 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050bd87 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050bd88 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050bd8b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050bd92 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050bd94 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bd95 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050bd98:;
  /* 0050bd98 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050bd9a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bd9b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050bd9c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50bd9fu; SAVEALL; call_ind(c, t_); RETCHK(0x50bd9fu, 0x50bd9cu); LOADALL; }
  /* 0050bd9f push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 0050bda4 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050bda6 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50bdabu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50bda6u); RETCHK(0x50bdabu, 0x50bda6u); LOADALL;
  /* 0050bdab mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050bdae fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050bdb1 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 0050bdb6 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050bdb8 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050bdbb call 0x560fd0 */ esp -= 4; M32(esp) = 0x50bdc0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50bdbbu); RETCHK(0x50bdc0u, 0x50bdbbu); LOADALL;
  /* 0050bdc0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050bdc3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050bdc6 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0050bdcb mov eax, edi */ { eax = (u32)(edi); }
  /* 0050bdcd fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050bdd0 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50bdd5u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50bdd0u); RETCHK(0x50bdd5u, 0x50bdd0u); LOADALL;
  /* 0050bdd5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050bdd8 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050bddb push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 0050bde0 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050bde2 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050bde5 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050bde8 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50bdedu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50bde8u); RETCHK(0x50bdedu, 0x50bde8u); LOADALL;
  /* 0050bded mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050bdf0 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050bdf3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050bdf4 mov eax, 0x6505c8 */ { eax = (u32)(0x6505c8u); }
  /* 0050bdf9 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050bdfc fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050bdff call 0x560ed0 */ esp -= 4; M32(esp) = 0x50be04u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50bdffu); RETCHK(0x50be04u, 0x50bdffu); LOADALL;
  /* 0050be04 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050be06 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050be08 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0050be0b jmp 0x50be10 */ goto L_0050be10;
L_0050be10:;
  /* 0050be10 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050be12 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050be13 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050be15 jne 0x50be10 */ if (!ZF_) goto L_0050be10;
  /* 0050be17 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050be19 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050be1a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050be1b lea ecx, [ebx + 0x188] */ ecx = (u32)((u32)(ebx + 0x188u));
  /* 0050be21 call 0x404420 */ esp -= 4; M32(esp) = 0x50be26u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50be21u); RETCHK(0x50be26u, 0x50be21u); LOADALL;
  /* 0050be26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050be27 mov eax, 0x6505bc */ { eax = (u32)(0x6505bcu); }
  /* 0050be2c call 0x560ed0 */ esp -= 4; M32(esp) = 0x50be31u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50be2cu); RETCHK(0x50be31u, 0x50be2cu); LOADALL;
  /* 0050be31 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050be33 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0050be36:;
  /* 0050be36 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050be38 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050be39 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050be3b jne 0x50be36 */ if (!ZF_) goto L_0050be36;
  /* 0050be3d sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050be3f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050be40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050be41 lea ecx, [ebx + 0x1a4] */ ecx = (u32)((u32)(ebx + 0x1a4u));
  /* 0050be47 call 0x404420 */ esp -= 4; M32(esp) = 0x50be4cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50be47u); RETCHK(0x50be4cu, 0x50be47u); LOADALL;
  /* 0050be4c mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050be4f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050be51 je 0x50be5f */ if (ZF_) goto L_0050be5f;
  /* 0050be53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050be54 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050be57 call 0x52d060 */ esp -= 4; M32(esp) = 0x50be5cu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x50be57u); RETCHK(0x50be5cu, 0x50be57u); LOADALL;
  /* 0050be5c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050be5f:;
  /* 0050be5f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050be60 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050be65 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50be6au; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50be65u); RETCHK(0x50be6au, 0x50be65u); LOADALL;
  /* 0050be6a mov esi, eax */ { esi = (u32)(eax); }
  /* 0050be6c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050be6e mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 0050be75 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0050be7c mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 0050be80 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_0050be83:;
  /* 0050be83 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050be85 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050be86 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050be88 jne 0x50be83 */ if (!ZF_) goto L_0050be83;
  /* 0050be8a sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050be8c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050be8d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050be8e lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050be91 call 0x404420 */ esp -= 4; M32(esp) = 0x50be96u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50be91u); RETCHK(0x50be96u, 0x50be91u); LOADALL;
  /* 0050be96 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050be97 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 0050be9c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050bea3 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50bea8u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50bea3u); RETCHK(0x50bea8u, 0x50bea3u); LOADALL;
  /* 0050bea8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bea9 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050beac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050bead lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050beb0 call 0x50bfc0 */ esp -= 4; M32(esp) = 0x50beb5u; SAVEALL; F_0050bfc0(c); ABI_CHECK(0x50bfc0u, 0x50beb0u); RETCHK(0x50beb5u, 0x50beb0u); LOADALL;
  /* 0050beb5 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050beb7 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 0050beba neg bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (0u - a_) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 0050bebc sbb bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050bebe inc bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 0050bec0 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bec3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050bec4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bec5 jb 0x50bed3 */ if (CF_) goto L_0050bed3;
  /* 0050bec7 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 0050beca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050becb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50bed0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50becbu); RETCHK(0x50bed0u, 0x50becbu); LOADALL;
  /* 0050bed0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050bed3:;
  /* 0050bed3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050bed6 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050bed8 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050bedb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050bedc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050bee3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050bee5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bee6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050bef0(CPU *c) {
  NATIVE_HOOK(0x50bef0u) REGS; LOADALL;
L_0050bef0:;
  /* 0050bef0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050bef1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050bef3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050bef4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bef5 mov esi, dword ptr [ecx + 0x64] */ { const u32 m_ = (u32)(ecx + 0x64u); esi = (u32)(M32(m_)); }
  /* 0050bef8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050bef9 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 0050befb cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050befd je 0x50bf1c */ if (ZF_) goto L_0050bf1c;
  /* 0050beff mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_0050bf02:;
  /* 0050bf02 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050bf05 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050bf08 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bf0a je 0x50bf15 */ if (ZF_) goto L_0050bf15;
  /* 0050bf0c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050bf0e call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50bf11u; SAVEALL; call_ind(c, t_); RETCHK(0x50bf11u, 0x50bf0eu); LOADALL; }
  /* 0050bf11 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bf13 jne 0x50bf1e */ if (!ZF_) goto L_0050bf1e;
L_0050bf15:;
  /* 0050bf15 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0050bf18 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bf1a jne 0x50bf02 */ if (!ZF_) goto L_0050bf02;
L_0050bf1c:;
  /* 0050bf1c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050bf1e:;
  /* 0050bf1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050bf1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bf20 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050bf21 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050bf22 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}
