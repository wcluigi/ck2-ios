#include "funcs.h"

void F_004ee460(CPU *c) {
  NATIVE_HOOK(0x4ee460u) REGS; LOADALL;
L_004ee460:;
  /* 004ee460 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ee461 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ee463 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004ee466 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee467 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ee468 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ee46b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee46c add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004ee46f lea ecx, [edi + 0x30] */ ecx = (u32)((u32)(edi + 0x30u));
  /* 004ee472 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ee473 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ee474 lea esi, [edi + 0x20] */ esi = (u32)((u32)(edi + 0x20u));
  /* 004ee477 call 0x5aaba0 */ esp -= 4; M32(esp) = 0x4ee47cu; SAVEALL; F_005aaba0(c); ABI_CHECK(0x5aaba0u, 0x4ee477u); RETCHK(0x4ee47cu, 0x4ee477u); LOADALL;
  /* 004ee47c mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004ee47f fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004ee481 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee482 fsub dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ee484 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee485 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee487 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004ee48a fsub dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ee48d fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee490 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004ee493 fsub dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ee496 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee499 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ee49eu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ee499u); RETCHK(0x4ee49eu, 0x4ee499u); LOADALL;
  /* 004ee49e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ee4a0 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004ee4a3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ee4a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee4a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee4a6 call 0x5aac00 */ esp -= 4; M32(esp) = 0x4ee4abu; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4ee4a6u); RETCHK(0x4ee4abu, 0x4ee4a6u); LOADALL;
  /* 004ee4ab mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004ee4ae fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004ee4b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ee4b1 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004ee4b4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ee4b5 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ee4bb fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004ee4be fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004ee4c0 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee4c3 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004ee4c5 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee4c8 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ee4ca fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee4cc fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee4ce fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004ee4d0 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee4d3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ee4d5 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee4d8 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004ee4da fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee4dd fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004ee4df fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee4e1 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ee4e3 fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee4e6 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ee4ebu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ee4e6u); RETCHK(0x4ee4ebu, 0x4ee4e6u); LOADALL;
  /* 004ee4eb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ee4ed fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004ee4f0 lea eax, [edi + 0x10] */ eax = (u32)((u32)(edi + 0x10u));
  /* 004ee4f3 fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee4f6 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004ee4f9 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee4fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee4fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee4fe fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ee500 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee502 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 004ee504 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee507 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 004ee509 fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee50c fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ee50e fstp dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee511 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 004ee513 fmul dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee516 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 004ee518 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ee51b fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ee51d fstp dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee520 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ee525u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ee520u); RETCHK(0x4ee525u, 0x4ee520u); LOADALL;
  /* 004ee525 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ee527 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ee528 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4ee52du; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4ee528u); RETCHK(0x4ee52du, 0x4ee528u); LOADALL;
  /* 004ee52d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ee530 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee531 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4ee536u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4ee531u); RETCHK(0x4ee536u, 0x4ee531u); LOADALL;
  /* 004ee536 add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee539 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ee53a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ee53b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee53c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee540(CPU *c) {
  NATIVE_HOOK(0x4ee540u) REGS; LOADALL;
L_004ee540:;
  /* 004ee540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ee541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ee543 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ee545 push 0x656e88 */ { u32 v_ = 0x656e88u; esp -= 4; M32(esp) = v_; }
  /* 004ee54a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 004ee54f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ee555 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee556 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ee55d sub esp, 0x80 */ { u32 a_ = esp, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee563 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ee564 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee565 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ee566 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 004ee569 mov eax, dword ptr [ebp + 0x28] */ { const u32 m_ = (u32)(ebp + 0x28u); eax = (u32)(M32(m_)); }
  /* 004ee56c wait */ ;
  /* 004ee56d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004ee574 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004ee57a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004ee57c fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004ee582 fdiv dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004ee588 fst dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); }
  /* 004ee58b fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 004ee58e fst dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); }
  /* 004ee591 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ee594 mov dword ptr [ebp - 0x90], edx */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(edx); }
  /* 004ee59a mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 004ee59d mov dword ptr [ebp - 0x8c], edx */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(edx); }
  /* 004ee5a3 fst dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); MF32(m_) = (float)ST(0); }
  /* 004ee5a9 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004ee5ab fstp dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee5b1 mov dword ptr [ebp - 0x80], eax */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(eax); }
  /* 004ee5b4 mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 004ee5b7 mov dword ptr [ebp - 0x7c], edx */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(edx); }
  /* 004ee5ba mov edx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edx = (u32)(M32(m_)); }
  /* 004ee5bd mov dword ptr [ebp - 0x78], edx */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(edx); }
  /* 004ee5c0 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004ee5c3 mov dword ptr [ebp - 0x74], edx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(edx); }
  /* 004ee5c6 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 004ee5c9 mov dword ptr [ebp - 0x70], edx */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(edx); }
  /* 004ee5cc fst dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); MF32(m_) = (float)ST(0); }
  /* 004ee5cf fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004ee5d1 fstp dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee5d4 mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 004ee5d7 mov edx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edx = (u32)(M32(m_)); }
  /* 004ee5da mov dword ptr [ebp - 0x60], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(edx); }
  /* 004ee5dd mov edx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edx = (u32)(M32(m_)); }
  /* 004ee5e0 mov dword ptr [ebp - 0x5c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edx); }
  /* 004ee5e3 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ee5e6 mov dword ptr [ebp - 0x58], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(edx); }
  /* 004ee5e9 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004ee5ec mov dword ptr [ebp - 0x54], edx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(edx); }
  /* 004ee5ef fst dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); }
  /* 004ee5f2 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004ee5f4 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee5f7 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 004ee5fa mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 004ee5fd mov dword ptr [ebp - 0x44], edx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(edx); }
  /* 004ee600 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 004ee603 mov dword ptr [ebp - 0x40], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edx); }
  /* 004ee606 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004ee609 mov dword ptr [ebp - 0x3c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edx); }
  /* 004ee60c mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004ee60f mov dword ptr [ebp - 0x38], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edx); }
  /* 004ee612 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee615 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee618 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 004ee61b mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 004ee61e mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 004ee621 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 004ee624 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 004ee627 mov eax, dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004ee62a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee62b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ee62d call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee630u; SAVEALL; call_ind(c, t_); RETCHK(0x4ee630u, 0x4ee62du); LOADALL; }
  /* 004ee630 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ee632 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 004ee634 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004ee63a call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee63du; SAVEALL; call_ind(c, t_); RETCHK(0x4ee63du, 0x4ee63au); LOADALL; }
  /* 004ee63d push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 004ee63f push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 004ee641 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004ee647 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee64au; SAVEALL; call_ind(c, t_); RETCHK(0x4ee64au, 0x4ee647u); LOADALL; }
  /* 004ee64a push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004ee64c push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 004ee64e mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004ee653 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee656u; SAVEALL; call_ind(c, t_); RETCHK(0x4ee656u, 0x4ee653u); LOADALL; }
  /* 004ee656 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ee658 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 004ee65a mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004ee660 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee663u; SAVEALL; call_ind(c, t_); RETCHK(0x4ee663u, 0x4ee660u); LOADALL; }
  /* 004ee663 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ee665 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004ee667 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004ee66d call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee670u; SAVEALL; call_ind(c, t_); RETCHK(0x4ee670u, 0x4ee66du); LOADALL; }
  /* 004ee670 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ee672 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004ee674 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004ee679 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee67cu; SAVEALL; call_ind(c, t_); RETCHK(0x4ee67cu, 0x4ee679u); LOADALL; }
  /* 004ee67c push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004ee67e lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 004ee684 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ee685 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004ee687 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004ee68d call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee690u; SAVEALL; call_ind(c, t_); RETCHK(0x4ee690u, 0x4ee68du); LOADALL; }
  /* 004ee690 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee693 wait */ ;
  /* 004ee694 jmp 0x4ee69f */ goto L_004ee69f;
L_004ee69f:;
  /* 004ee69f mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004ee6a6 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004ee6a9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ee6b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ee6b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ee6b2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ee6b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ee6b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee6b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee696(CPU *c) {
  NATIVE_HOOK(0x4ee696u) REGS; LOADALL;
L_004ee696:;
  /* 004ee696 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004ee69b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee69c(CPU *c) {
  NATIVE_HOOK(0x4ee69cu) REGS; LOADALL;
L_004ee69c:;
  /* 004ee69c mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 004ee69f mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004ee6a6 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004ee6a9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ee6b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ee6b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ee6b2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ee6b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ee6b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee6b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee6c0(CPU *c) {
  NATIVE_HOOK(0x4ee6c0u) REGS; LOADALL;
L_004ee6c0:;
  /* 004ee6c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ee6c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ee6c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ee6c5 push 0x656e78 */ { u32 v_ = 0x656e78u; esp -= 4; M32(esp) = v_; }
  /* 004ee6ca push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 004ee6cf mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ee6d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee6d6 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ee6dd sub esp, 0x80 */ { u32 a_ = esp, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee6e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ee6e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee6e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ee6e6 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 004ee6e9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ee6ec wait */ ;
  /* 004ee6ed mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004ee6f4 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004ee6fa mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 004ee6fc fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004ee702 fdiv dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004ee708 fst dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); }
  /* 004ee70b fld dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 004ee70e fst dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); }
  /* 004ee711 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004ee713 mov dword ptr [ebp - 0x90], esi */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(esi); }
  /* 004ee719 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004ee71c mov dword ptr [ebp - 0x8c], esi */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(esi); }
  /* 004ee722 fst dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); MF32(m_) = (float)ST(0); }
  /* 004ee728 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004ee72a fstp dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee730 mov dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ecx); }
  /* 004ee733 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004ee736 mov dword ptr [ebp - 0x7c], esi */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(esi); }
  /* 004ee739 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004ee73c mov dword ptr [ebp - 0x78], esi */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(esi); }
  /* 004ee73f mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 004ee742 mov dword ptr [ebp - 0x74], esi */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(esi); }
  /* 004ee745 mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 004ee748 mov dword ptr [ebp - 0x70], esi */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(esi); }
  /* 004ee74b fst dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); MF32(m_) = (float)ST(0); }
  /* 004ee74e fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004ee750 fstp dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee753 mov dword ptr [ebp - 0x64], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(ecx); }
  /* 004ee756 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 004ee759 mov dword ptr [ebp - 0x60], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(esi); }
  /* 004ee75c mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004ee75f mov dword ptr [ebp - 0x5c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(esi); }
  /* 004ee762 mov esi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); esi = (u32)(M32(m_)); }
  /* 004ee765 mov dword ptr [ebp - 0x58], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(esi); }
  /* 004ee768 mov esi, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); esi = (u32)(M32(m_)); }
  /* 004ee76b mov dword ptr [ebp - 0x54], esi */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(esi); }
  /* 004ee76e fst dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); }
  /* 004ee771 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004ee773 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee776 mov dword ptr [ebp - 0x48], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ecx); }
  /* 004ee779 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004ee77c mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 004ee77f mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 004ee782 mov dword ptr [ebp - 0x40], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esi); }
  /* 004ee785 mov esi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); esi = (u32)(M32(m_)); }
  /* 004ee788 mov dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(esi); }
  /* 004ee78b mov eax, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004ee78e mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 004ee791 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee794 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee797 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 004ee79a mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004ee79d mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 004ee7a0 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004ee7a3 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 004ee7a6 mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004ee7a9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ee7aa push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ee7ac call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee7afu; SAVEALL; call_ind(c, t_); RETCHK(0x4ee7afu, 0x4ee7acu); LOADALL; }
  /* 004ee7af push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ee7b1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 004ee7b3 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004ee7b9 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee7bcu; SAVEALL; call_ind(c, t_); RETCHK(0x4ee7bcu, 0x4ee7b9u); LOADALL; }
  /* 004ee7bc push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 004ee7be push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 004ee7c0 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004ee7c5 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee7c8u; SAVEALL; call_ind(c, t_); RETCHK(0x4ee7c8u, 0x4ee7c5u); LOADALL; }
  /* 004ee7c8 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004ee7ca push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 004ee7cc mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004ee7d2 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee7d5u; SAVEALL; call_ind(c, t_); RETCHK(0x4ee7d5u, 0x4ee7d2u); LOADALL; }
  /* 004ee7d5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ee7d7 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 004ee7d9 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004ee7df call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee7e2u; SAVEALL; call_ind(c, t_); RETCHK(0x4ee7e2u, 0x4ee7dfu); LOADALL; }
  /* 004ee7e2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ee7e4 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004ee7e6 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004ee7eb call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee7eeu; SAVEALL; call_ind(c, t_); RETCHK(0x4ee7eeu, 0x4ee7ebu); LOADALL; }
  /* 004ee7ee push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ee7f0 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004ee7f2 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004ee7f8 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee7fbu; SAVEALL; call_ind(c, t_); RETCHK(0x4ee7fbu, 0x4ee7f8u); LOADALL; }
  /* 004ee7fb push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004ee7fd lea edx, [ebp - 0x90] */ edx = (u32)((u32)(ebp + 0xffffff70u));
  /* 004ee803 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ee804 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004ee806 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004ee80b call dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ee80eu; SAVEALL; call_ind(c, t_); RETCHK(0x4ee80eu, 0x4ee80bu); LOADALL; }
  /* 004ee80e add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee811 wait */ ;
  /* 004ee812 jmp 0x4ee81d */ goto L_004ee81d;
L_004ee81d:;
  /* 004ee81d mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004ee824 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004ee827 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ee82e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ee82f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ee830 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ee831 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ee833 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee834 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee814(CPU *c) {
  NATIVE_HOOK(0x4ee814u) REGS; LOADALL;
L_004ee814:;
  /* 004ee814 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004ee819 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee81a(CPU *c) {
  NATIVE_HOOK(0x4ee81au) REGS; LOADALL;
L_004ee81a:;
  /* 004ee81a mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 004ee81d mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004ee824 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004ee827 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ee82e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ee82f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ee830 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ee831 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ee833 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee834 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee840(CPU *c) {
  NATIVE_HOOK(0x4ee840u) REGS; LOADALL;
L_004ee840:;
  /* 004ee840 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee841 call 0x5ab060 */ esp -= 4; M32(esp) = 0x4ee846u; SAVEALL; F_005ab060(c); ABI_CHECK(0x5ab060u, 0x4ee841u); RETCHK(0x4ee846u, 0x4ee841u); LOADALL;
  /* 004ee846 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee849 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ee84b je 0x4ee85a */ if (ZF_) goto L_004ee85a;
  /* 004ee84d call 0x4ee860 */ esp -= 4; M32(esp) = 0x4ee852u; SAVEALL; F_004ee860(c); ABI_CHECK(0x4ee860u, 0x4ee84du); RETCHK(0x4ee852u, 0x4ee84du); LOADALL;
  /* 004ee852 call 0x5ab110 */ esp -= 4; M32(esp) = 0x4ee857u; SAVEALL; F_005ab110(c); ABI_CHECK(0x5ab110u, 0x4ee852u); RETCHK(0x4ee857u, 0x4ee852u); LOADALL;
  /* 004ee857 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004ee859 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004ee85a:;
  /* 004ee85a xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004ee85c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee860(CPU *c) {
  NATIVE_HOOK(0x4ee860u) REGS; LOADALL;
L_004ee860:;
  /* 004ee860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ee861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ee863 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee866 call 0x5aaef0 */ esp -= 4; M32(esp) = 0x4ee86bu; SAVEALL; F_005aaef0(c); ABI_CHECK(0x5aaef0u, 0x4ee866u); RETCHK(0x4ee86bu, 0x4ee866u); LOADALL;
  /* 004ee86b mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004ee86e cmp dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ee871 jne 0x4ee88c */ if (!ZF_) goto L_004ee88c;
  /* 004ee873 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 004ee876 cmp edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ee879 jne 0x4ee88c */ if (!ZF_) goto L_004ee88c;
  /* 004ee87b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ee87d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ee87f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee880 call 0x5aafb0 */ esp -= 4; M32(esp) = 0x4ee885u; SAVEALL; F_005aafb0(c); ABI_CHECK(0x5aafb0u, 0x4ee880u); RETCHK(0x4ee885u, 0x4ee880u); LOADALL;
  /* 004ee885 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee888 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ee88a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee88b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004ee88c:;
  /* 004ee88c mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 004ee88f mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 004ee892 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ee895 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ee896 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee897 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 004ee89e mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 004ee8a5 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004ee8a8 call 0x5aaf10 */ esp -= 4; M32(esp) = 0x4ee8adu; SAVEALL; F_005aaf10(c); ABI_CHECK(0x5aaf10u, 0x4ee8a8u); RETCHK(0x4ee8adu, 0x4ee8a8u); LOADALL;
  /* 004ee8ad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee8b0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ee8b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee8b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee8c0(CPU *c) {
  NATIVE_HOOK(0x4ee8c0u) REGS; LOADALL;
L_004ee8c0:;
  /* 004ee8c0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004ee8c2 mov dword ptr [eax], 0x64efb4 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64efb4u); }
  /* 004ee8c8 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004ee8cb mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004ee8ce mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004ee8d1 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004ee8d4 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004ee8d7 mov dword ptr [eax + 0x18], 1 */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(0x1u); }
  /* 004ee8de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee8e0(CPU *c) {
  NATIVE_HOOK(0x4ee8e0u) REGS; LOADALL;
L_004ee8e0:;
  /* 004ee8e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ee8e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ee8e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee8e4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ee8e6 call 0x4ee910 */ esp -= 4; M32(esp) = 0x4ee8ebu; SAVEALL; F_004ee910(c); ABI_CHECK(0x4ee910u, 0x4ee8e6u); RETCHK(0x4ee8ebu, 0x4ee8e6u); LOADALL;
  /* 004ee8eb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ee8ef je 0x4ee8fa */ if (ZF_) goto L_004ee8fa;
  /* 004ee8f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee8f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4ee8f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4ee8f2u); RETCHK(0x4ee8f7u, 0x4ee8f2u); LOADALL;
  /* 004ee8f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004ee8fa:;
  /* 004ee8fa mov eax, esi */ { eax = (u32)(esi); }
  /* 004ee8fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ee8fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee8fe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004ee910(CPU *c) {
  NATIVE_HOOK(0x4ee910u) REGS; LOADALL;
L_004ee910:;
  /* 004ee910 mov dword ptr [ecx], 0x64efb4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64efb4u); }
  /* 004ee916 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee920(CPU *c) {
  NATIVE_HOOK(0x4ee920u) REGS; LOADALL;
L_004ee920:;
  /* 004ee920 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ee923 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004ee925 add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ee928 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004ee92a mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ee92d mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 004ee930 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ee933 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004ee936 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ee939 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ee93a call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4ee93fu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4ee93au); RETCHK(0x4ee93fu, 0x4ee93au); LOADALL;
  /* 004ee93f mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ee942 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ee945 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee946 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4ee94bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4ee946u); RETCHK(0x4ee94bu, 0x4ee946u); LOADALL;
  /* 004ee94b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee94e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee950(CPU *c) {
  NATIVE_HOOK(0x4ee950u) REGS; LOADALL;
L_004ee950:;
  /* 004ee950 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ee951 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ee952 mov edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ee955 mov esi, edx */ { esi = (u32)(edx); }
  /* 004ee957 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004ee95c rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004ee95e mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ee961 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ee964 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ee965 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4ee96au; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4ee965u); RETCHK(0x4ee96au, 0x4ee965u); LOADALL;
  /* 004ee96a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee96d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ee96e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ee96f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ee970(CPU *c) {
  NATIVE_HOOK(0x4ee970u) REGS; LOADALL;
L_004ee970:;
  /* 004ee970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ee971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ee973 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004ee976 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 004ee979 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ee97c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee97d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ee980 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004ee983 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee984 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004ee987 call 0x57ad10 */ esp -= 4; M32(esp) = 0x4ee98cu; SAVEALL; F_0057ad10(c); ABI_CHECK(0x57ad10u, 0x4ee987u); RETCHK(0x4ee98cu, 0x4ee987u); LOADALL;
  /* 004ee98c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee98f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee990 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004ee9a0(CPU *c) {
  NATIVE_HOOK(0x4ee9a0u) REGS; LOADALL;
L_004ee9a0:;
  /* 004ee9a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ee9a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ee9a3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee9a6 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004ee9a9 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004ee9af fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004ee9b1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ee9b4 jp 0x4ee9cd */ if (PF_) goto L_004ee9cd;
  /* 004ee9b6 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ee9b9 mov edx, dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); edx = (u32)(M32(m_)); }
  /* 004ee9bc mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 004ee9bf mov eax, dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); eax = (u32)(M32(m_)); }
  /* 004ee9c2 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004ee9c5 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004ee9c8 fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004ee9cb jmp 0x4ee9d0 */ goto L_004ee9d0;
L_004ee9cd:;
  /* 004ee9cd fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
L_004ee9d0:;
  /* 004ee9d0 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004ee9d3 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ee9d6 fptan */ ST(0) = m_tan(ST(0)); FPUSH(1.0); c->fsw &= ~0x400u;
  /* 004ee9d8 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004ee9db push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ee9dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ee9dd fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ee9df fst dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); }
  /* 004ee9e2 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004ee9e4 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ee9e7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ee9e9 call 0x5afe00 */ esp -= 4; M32(esp) = 0x4ee9eeu; SAVEALL; F_005afe00(c); ABI_CHECK(0x5afe00u, 0x4ee9e9u); RETCHK(0x4ee9eeu, 0x4ee9e9u); LOADALL;
  /* 004ee9ee add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ee9f1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ee9f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ee9f4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004eea00(CPU *c) {
  NATIVE_HOOK(0x4eea00u) REGS; LOADALL;
L_004eea00:;
  /* 004eea00 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004eea03 fld dword ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); FPUSH((double)MF32(m_)); }
  /* 004eea06 fld1 */ FPUSH(1.0);
  /* 004eea08 fpatan */ { double x_ = ST(0); FPOP(); ST(0) = m_atan2(ST(0), x_); }
  /* 004eea0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004eea10(CPU *c) {
  NATIVE_HOOK(0x4eea10u) REGS; LOADALL;
L_004eea10:;
  /* 004eea10 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004eea11 lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 004eea14 call 0x5469f0 */ esp -= 4; M32(esp) = 0x4eea19u; SAVEALL; F_005469f0(c); ABI_CHECK(0x5469f0u, 0x4eea14u); RETCHK(0x4eea19u, 0x4eea14u); LOADALL;
  /* 004eea19 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004eea1b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004eea1c je 0x4eea28 */ if (ZF_) goto L_004eea28;
  /* 004eea1e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eea1f call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4eea24u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4eea1fu); RETCHK(0x4eea24u, 0x4eea1fu); LOADALL;
  /* 004eea24 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eea27 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004eea28:;
  /* 004eea28 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004eea2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004eea30(CPU *c) {
  NATIVE_HOOK(0x4eea30u) REGS; LOADALL;
L_004eea30:;
  /* 004eea30 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004eea31 call 0x4ee8c0 */ esp -= 4; M32(esp) = 0x4eea36u; SAVEALL; F_004ee8c0(c); ABI_CHECK(0x4ee8c0u, 0x4eea31u); RETCHK(0x4eea36u, 0x4eea31u); LOADALL;
  /* 004eea36 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004eea38 mov dword ptr [eax], 0x64efc8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64efc8u); }
  /* 004eea3e mov dword ptr [eax + 0x84], ecx */ { const u32 m_ = (u32)(eax + 0x84u); M32(m_) = (u32)(ecx); }
  /* 004eea44 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 004eea47 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 004eea4a mov dword ptr [eax + 0x88], ecx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(ecx); }
  /* 004eea50 mov dword ptr [eax + 0xa0], ecx */ { const u32 m_ = (u32)(eax + 0xa0u); M32(m_) = (u32)(ecx); }
  /* 004eea56 mov dword ptr [eax + 0xa4], ecx */ { const u32 m_ = (u32)(eax + 0xa4u); M32(m_) = (u32)(ecx); }
  /* 004eea5c mov dword ptr [eax + 0x24], 1 */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(0x1u); }
  /* 004eea63 mov edx, 0x3f800000 */ { edx = (u32)(0x3f800000u); }
  /* 004eea68 mov dword ptr [eax + 0x28], edx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(edx); }
  /* 004eea6b mov dword ptr [eax + 0x94], edx */ { const u32 m_ = (u32)(eax + 0x94u); M32(m_) = (u32)(edx); }
  /* 004eea71 mov dword ptr [eax + 0x98], edx */ { const u32 m_ = (u32)(eax + 0x98u); M32(m_) = (u32)(edx); }
  /* 004eea77 mov dword ptr [eax + 0xb0], 1 */ { const u32 m_ = (u32)(eax + 0xb0u); M32(m_) = (u32)(0x1u); }
  /* 004eea81 mov dword ptr [eax + 0x8c], ecx */ { const u32 m_ = (u32)(eax + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 004eea87 mov dword ptr [eax + 0x90], ecx */ { const u32 m_ = (u32)(eax + 0x90u); M32(m_) = (u32)(ecx); }
  /* 004eea8d mov edi, dword ptr [0x63f7e4] */ { const u32 m_ = (u32)(0x63f7e4u); edi = (u32)(M32(m_)); }
  /* 004eea93 lea edx, [eax + 0x30] */ edx = (u32)((u32)(eax + 0x30u));
  /* 004eea96 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 004eea98 mov edi, dword ptr [0x63f7e8] */ { const u32 m_ = (u32)(0x63f7e8u); edi = (u32)(M32(m_)); }
  /* 004eea9e mov dword ptr [edx + 4], edi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(edi); }
  /* 004eeaa1 mov edi, dword ptr [0x63f7ec] */ { const u32 m_ = (u32)(0x63f7ecu); edi = (u32)(M32(m_)); }
  /* 004eeaa7 mov dword ptr [edx + 8], edi */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(edi); }
  /* 004eeaaa mov edi, dword ptr [0x63f7e4] */ { const u32 m_ = (u32)(0x63f7e4u); edi = (u32)(M32(m_)); }
  /* 004eeab0 lea edx, [eax + 0x3c] */ edx = (u32)((u32)(eax + 0x3cu));
  /* 004eeab3 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 004eeab5 mov edi, dword ptr [0x63f7e8] */ { const u32 m_ = (u32)(0x63f7e8u); edi = (u32)(M32(m_)); }
  /* 004eeabb mov dword ptr [edx + 4], edi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(edi); }
  /* 004eeabe mov edi, dword ptr [0x63f7ec] */ { const u32 m_ = (u32)(0x63f7ecu); edi = (u32)(M32(m_)); }
  /* 004eeac4 mov dword ptr [edx + 8], edi */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(edi); }
  /* 004eeac7 mov edx, 0xc0000000 */ { edx = (u32)(0xc0000000u); }
  /* 004eeacc mov dword ptr [eax + 0x48], ecx */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(ecx); }
  /* 004eeacf mov dword ptr [eax + 0x54], ecx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(ecx); }
  /* 004eead2 mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 004eead5 mov dword ptr [eax + 0x58], ecx */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(ecx); }
  /* 004eead8 mov dword ptr [eax + 0x50], edx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(edx); }
  /* 004eeadb mov dword ptr [eax + 0x5c], edx */ { const u32 m_ = (u32)(eax + 0x5cu); M32(m_) = (u32)(edx); }
  /* 004eeade mov dword ptr [eax + 0x64], 0xbf800000 */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(0xbf800000u); }
  /* 004eeae5 mov dword ptr [eax + 0x60], ecx */ { const u32 m_ = (u32)(eax + 0x60u); M32(m_) = (u32)(ecx); }
  /* 004eeae8 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 004eeaeb mov dword ptr [eax + 0x80], 0x80000000 */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(0x80000000u); }
  /* 004eeaf5 mov dword ptr [eax + 0xa8], ecx */ { const u32 m_ = (u32)(eax + 0xa8u); M32(m_) = (u32)(ecx); }
  /* 004eeafb mov dword ptr [eax + 0xac], 1 */ { const u32 m_ = (u32)(eax + 0xacu); M32(m_) = (u32)(0x1u); }
  /* 004eeb05 mov dword ptr [eax + 0xbc], ecx */ { const u32 m_ = (u32)(eax + 0xbcu); M32(m_) = (u32)(ecx); }
  /* 004eeb0b mov dword ptr [eax + 0xb4], ecx */ { const u32 m_ = (u32)(eax + 0xb4u); M32(m_) = (u32)(ecx); }
  /* 004eeb11 mov byte ptr [eax + 0x9c], 0x40 */ { const u32 m_ = (u32)(eax + 0x9cu); M8(m_) = (u8)(0x40u); }
  /* 004eeb18 mov dword ptr [eax + 0xc0], ecx */ { const u32 m_ = (u32)(eax + 0xc0u); M32(m_) = (u32)(ecx); }
  /* 004eeb1e mov dword ptr [eax + 0x120], ecx */ { const u32 m_ = (u32)(eax + 0x120u); M32(m_) = (u32)(ecx); }
  /* 004eeb24 mov dword ptr [eax + 0x12c], 0x3e4ccccd */ { const u32 m_ = (u32)(eax + 0x12cu); M32(m_) = (u32)(0x3e4ccccdu); }
  /* 004eeb2e mov dword ptr [eax + 0x128], ecx */ { const u32 m_ = (u32)(eax + 0x128u); M32(m_) = (u32)(ecx); }
  /* 004eeb34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004eeb35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004eeb40(CPU *c) {
  NATIVE_HOOK(0x4eeb40u) REGS; LOADALL;
L_004eeb40:;
  /* 004eeb40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004eeb41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004eeb43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eeb44 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004eeb46 call 0x4eeb70 */ esp -= 4; M32(esp) = 0x4eeb4bu; SAVEALL; F_004eeb70(c); ABI_CHECK(0x4eeb70u, 0x4eeb46u); RETCHK(0x4eeb4bu, 0x4eeb46u); LOADALL;
  /* 004eeb4b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004eeb4f je 0x4eeb5a */ if (ZF_) goto L_004eeb5a;
  /* 004eeb51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eeb52 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4eeb57u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4eeb52u); RETCHK(0x4eeb57u, 0x4eeb52u); LOADALL;
  /* 004eeb57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004eeb5a:;
  /* 004eeb5a mov eax, esi */ { eax = (u32)(esi); }
  /* 004eeb5c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eeb5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eeb5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004eeb70(CPU *c) {
  NATIVE_HOOK(0x4eeb70u) REGS; LOADALL;
L_004eeb70:;
  /* 004eeb70 mov dword ptr [ecx], 0x64efc8 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64efc8u); }
  /* 004eeb76 jmp 0x4ee910 */ SAVEALL; F_004ee910(c); return;
}

void F_004eeb80(CPU *c) {
  NATIVE_HOOK(0x4eeb80u) REGS; LOADALL;
L_004eeb80:;
  /* 004eeb80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004eeb81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004eeb83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004eeb84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eeb85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004eeb86 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004eeb89 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004eeb8b mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 004eeb8e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004eeb90 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004eeb92 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004eeb95 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004eeb97 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eeb98 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004eeb9b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004eeb9c mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 004eeba1 call 0x558ad0 */ esp -= 4; M32(esp) = 0x4eeba6u; SAVEALL; F_00558ad0(c); ABI_CHECK(0x558ad0u, 0x4eeba1u); RETCHK(0x4eeba6u, 0x4eeba1u); LOADALL;
  /* 004eeba6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004eeba8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eebab cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eebad mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 004eebb0 je 0x4eec37 */ if (ZF_) goto L_004eec37;
  /* 004eebb6 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004eebb9 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004eebbc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eebbd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004eebbf call 0x4ee970 */ esp -= 4; M32(esp) = 0x4eebc4u; SAVEALL; F_004ee970(c); ABI_CHECK(0x4ee970u, 0x4eebbfu); RETCHK(0x4eebc4u, 0x4eebbfu); LOADALL;
  /* 004eebc4 mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 004eebc7 mov dword ptr [esi + 0x14], 1 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 004eebce mov eax, dword ptr [edx + 0x60] */ { const u32 m_ = (u32)(edx + 0x60u); eax = (u32)(M32(m_)); }
  /* 004eebd1 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 004eebd4 test byte ptr [edi], 4 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004eebd7 je 0x4eec01 */ if (ZF_) goto L_004eec01;
  /* 004eebd9 cmp dword ptr [eax + 0x14], 0x20 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eebdd mov ecx, 5 */ { ecx = (u32)(0x5u); }
  /* 004eebe2 jne 0x4eebe9 */ if (!ZF_) goto L_004eebe9;
  /* 004eebe4 mov ecx, 0x505 */ { ecx = (u32)(0x505u); }
L_004eebe9:;
  /* 004eebe9 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 004eebec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eebed mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004eebf0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004eebf1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eebf2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004eebf3 call 0x5ab230 */ esp -= 4; M32(esp) = 0x4eebf8u; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x4eebf3u); RETCHK(0x4eebf8u, 0x4eebf3u); LOADALL;
  /* 004eebf8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eebfb mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
L_004eec01:;
  /* 004eec01 test byte ptr [edi], 8 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004eec04 je 0x4eec5c */ if (ZF_) goto L_004eec5c;
  /* 004eec06 mov eax, dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); eax = (u32)(M32(m_)); }
  /* 004eec0c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eec0e jne 0x4eec26 */ if (!ZF_) goto L_004eec26;
  /* 004eec10 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004eec13 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004eec16 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 004eec19 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 004eec1b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004eec1c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eec1d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004eec1e call 0x5ab230 */ esp -= 4; M32(esp) = 0x4eec23u; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x4eec1eu); RETCHK(0x4eec23u, 0x4eec1eu); LOADALL;
  /* 004eec23 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004eec26:;
  /* 004eec26 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eec28 mov dword ptr [esi + 0xa0], eax */ { const u32 m_ = (u32)(esi + 0xa0u); M32(m_) = (u32)(eax); }
  /* 004eec2e jne 0x4eec40 */ if (!ZF_) goto L_004eec40;
  /* 004eec30 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004eec32 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004eec34 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4eec37u; SAVEALL; call_ind(c, t_); RETCHK(0x4eec37u, 0x4eec34u); LOADALL; }
L_004eec37:;
  /* 004eec37 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004eec38 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eec39 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004eec3b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004eec3c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eec3d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004eec40:;
  /* 004eec40 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004eec41 mov dword ptr [esi + 0x94], ebx */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(ebx); }
  /* 004eec47 mov dword ptr [esi + 0x8c], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(0x3f800000u); }
  /* 004eec51 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eec52 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004eec57 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004eec58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eec59 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004eec5c:;
  /* 004eec5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004eec5d mov dword ptr [esi + 0x8c], ebx */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(ebx); }
  /* 004eec63 mov dword ptr [esi + 0x94], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(0x3f800000u); }
  /* 004eec6d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eec6e mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004eec73 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004eec74 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eec75 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004eec80(CPU *c) {
  NATIVE_HOOK(0x4eec80u) REGS; LOADALL;
L_004eec80:;
  /* 004eec80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004eec81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004eec82 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004eec84 mov eax, dword ptr [edi + 0x88] */ { const u32 m_ = (u32)(edi + 0x88u); eax = (u32)(M32(m_)); }
  /* 004eec8a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004eec8c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eec8e je 0x4eec9e */ if (ZF_) goto L_004eec9e;
  /* 004eec90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eec91 call 0x5ab020 */ esp -= 4; M32(esp) = 0x4eec96u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x4eec91u); RETCHK(0x4eec96u, 0x4eec91u); LOADALL;
  /* 004eec96 mov dword ptr [edi + 0x88], ebx */ { const u32 m_ = (u32)(edi + 0x88u); M32(m_) = (u32)(ebx); }
  /* 004eec9c jmp 0x4eecae */ goto L_004eecae;
L_004eec9e:;
  /* 004eec9e mov eax, dword ptr [edi + 0xa0] */ { const u32 m_ = (u32)(edi + 0xa0u); eax = (u32)(M32(m_)); }
  /* 004eeca4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eeca6 je 0x4eecb1 */ if (ZF_) goto L_004eecb1;
  /* 004eeca8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eeca9 call 0x5ab020 */ esp -= 4; M32(esp) = 0x4eecaeu; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x4eeca9u); RETCHK(0x4eecaeu, 0x4eeca9u); LOADALL;
L_004eecae:;
  /* 004eecae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004eecb1:;
  /* 004eecb1 mov eax, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004eecb7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eecb9 mov dword ptr [edi + 0xa0], ebx */ { const u32 m_ = (u32)(edi + 0xa0u); M32(m_) = (u32)(ebx); }
  /* 004eecbf je 0x4eed12 */ if (ZF_) goto L_004eed12;
  /* 004eecc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eecc2 call 0x57ad70 */ esp -= 4; M32(esp) = 0x4eecc7u; SAVEALL; F_0057ad70(c); ABI_CHECK(0x57ad70u, 0x4eecc2u); RETCHK(0x4eecc7u, 0x4eecc2u); LOADALL;
  /* 004eecc7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eecca cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eeccc je 0x4eecde */ if (ZF_) goto L_004eecde;
  /* 004eecce mov ecx, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004eecd4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eecd5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eecd6 call 0x57ad40 */ esp -= 4; M32(esp) = 0x4eecdbu; SAVEALL; F_0057ad40(c); ABI_CHECK(0x57ad40u, 0x4eecd6u); RETCHK(0x4eecdbu, 0x4eecd6u); LOADALL;
  /* 004eecdb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004eecde:;
  /* 004eecde mov edx, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); edx = (u32)(M32(m_)); }
  /* 004eece4 mov dword ptr [edx + 0x60], ebx */ { const u32 m_ = (u32)(edx + 0x60u); M32(m_) = (u32)(ebx); }
  /* 004eece7 mov eax, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004eeced mov dword ptr [eax + 0x64], ebx */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(ebx); }
  /* 004eecf0 mov ecx, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004eecf6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004eecf7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eecf8 call 0x5b49f0 */ esp -= 4; M32(esp) = 0x4eecfdu; SAVEALL; F_005b49f0(c); ABI_CHECK(0x5b49f0u, 0x4eecf8u); RETCHK(0x4eecfdu, 0x4eecf8u); LOADALL;
  /* 004eecfd mov edx, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); edx = (u32)(M32(m_)); }
  /* 004eed03 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004eed04 call 0x5afe70 */ esp -= 4; M32(esp) = 0x4eed09u; SAVEALL; F_005afe70(c); ABI_CHECK(0x5afe70u, 0x4eed04u); RETCHK(0x4eed09u, 0x4eed04u); LOADALL;
  /* 004eed09 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eed0c mov dword ptr [edi + 0x84], ebx */ { const u32 m_ = (u32)(edi + 0x84u); M32(m_) = (u32)(ebx); }
L_004eed12:;
  /* 004eed12 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004eed15 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eed17 je 0x4eed40 */ if (ZF_) goto L_004eed40;
  /* 004eed19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eed1a call 0x57ad70 */ esp -= 4; M32(esp) = 0x4eed1fu; SAVEALL; F_0057ad70(c); ABI_CHECK(0x57ad70u, 0x4eed1au); RETCHK(0x4eed1fu, 0x4eed1au); LOADALL;
  /* 004eed1f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eed22 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004eed24 je 0x4eed33 */ if (ZF_) goto L_004eed33;
  /* 004eed26 mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004eed29 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eed2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eed2b call 0x57ad40 */ esp -= 4; M32(esp) = 0x4eed30u; SAVEALL; F_0057ad40(c); ABI_CHECK(0x57ad40u, 0x4eed2bu); RETCHK(0x4eed30u, 0x4eed2bu); LOADALL;
  /* 004eed30 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004eed33:;
  /* 004eed33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eed34 mov esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); esi = (u32)(M32(m_)); }
  /* 004eed37 call 0x5589e0 */ esp -= 4; M32(esp) = 0x4eed3cu; SAVEALL; F_005589e0(c); ABI_CHECK(0x5589e0u, 0x4eed37u); RETCHK(0x4eed3cu, 0x4eed37u); LOADALL;
  /* 004eed3c mov dword ptr [edi + 0x1c], ebx */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 004eed3f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004eed40:;
  /* 004eed40 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004eed43 mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 004eed46 mov dword ptr [edi + 0xa8], ebx */ { const u32 m_ = (u32)(edi + 0xa8u); M32(m_) = (u32)(ebx); }
  /* 004eed4c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004eed4d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004eed4e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004eed50(CPU *c) {
  NATIVE_HOOK(0x4eed50u) REGS; LOADALL;
L_004eed50:;
  /* 004eed50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004eed51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004eed53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eed54 mov esi, eax */ { esi = (u32)(eax); }
  /* 004eed56 mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 004eed59 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004eed5b je 0x4eed62 */ if (ZF_) goto L_004eed62;
  /* 004eed5d call 0x4eee20 */ esp -= 4; M32(esp) = 0x4eed62u; SAVEALL; F_004eee20(c); ABI_CHECK(0x4eee20u, 0x4eed5du); RETCHK(0x4eed62u, 0x4eed5du); LOADALL;
L_004eed62:;
  /* 004eed62 fld dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); FPUSH((double)MF32(m_)); }
  /* 004eed68 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004eed6b fdiv dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004eed6e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004eed71 mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 004eed74 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004eed77 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004eed7a mov dword ptr [esi + 0x68], ecx */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(ecx); }
  /* 004eed7d fstp dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eed80 je 0x4eee14 */ if (ZF_) goto L_004eee14;
  /* 004eed86 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004eed87 jne 0x4eee1b */ if (!ZF_) goto L_004eee1b;
  /* 004eed8d mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 004eed90 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004eed91 mov dword ptr [esi + 0x70], edx */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(edx); }
  /* 004eed94 lea edi, [esi + 0x74] */ edi = (u32)((u32)(esi + 0x74u));
L_004eed97:;
  /* 004eed97 call 0x5e71d0 */ esp -= 4; M32(esp) = 0x4eed9cu; SAVEALL; F_005e71d0(c); ABI_CHECK(0x5e71d0u, 0x4eed97u); RETCHK(0x4eed9cu, 0x4eed97u); LOADALL;
  /* 004eed9c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004eed9e mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004eeda1 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 004eeda4 jge 0x4eedac */ if (!LT_) goto L_004eedac;
  /* 004eeda6 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_004eedac:;
  /* 004eedac fmul dword ptr [0x656fec] */ { const u32 m_ = (u32)(0x656fecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eedb2 fsub dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004eedb8 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eedba call 0x5e71d0 */ esp -= 4; M32(esp) = 0x4eedbfu; SAVEALL; F_005e71d0(c); ABI_CHECK(0x5e71d0u, 0x4eedbau); RETCHK(0x4eedbfu, 0x4eedbau); LOADALL;
  /* 004eedbf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004eedc1 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004eedc4 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 004eedc7 jge 0x4eedcf */ if (!LT_) goto L_004eedcf;
  /* 004eedc9 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_004eedcf:;
  /* 004eedcf fmul dword ptr [0x656fec] */ { const u32 m_ = (u32)(0x656fecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eedd5 fsub dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004eeddb fst dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); MF32(m_) = (float)ST(0); }
  /* 004eedde fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 004eede0 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004eede2 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004eede4 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004eede6 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 004eede8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004eedea fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004eedf0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004eedf2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004eedf4 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004eedf7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004eedf9 jnp 0x4eed97 */ if (!PF_) goto L_004eed97;
  /* 004eedfb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004eedfc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004eedfd call 0x5aaaa0 */ esp -= 4; M32(esp) = 0x4eee02u; SAVEALL; F_005aaaa0(c); ABI_CHECK(0x5aaaa0u, 0x4eedfdu); RETCHK(0x4eee02u, 0x4eedfdu); LOADALL;
  /* 004eee02 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004eee04 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eee07 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004eee08 mov dword ptr [esi + 0x60], 0x4eeef0 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x4eeef0u); }
  /* 004eee0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eee10 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eee11 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004eee14:;
  /* 004eee14 mov dword ptr [esi + 0x60], 0x4eee40 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x4eee40u); }
L_004eee1b:;
  /* 004eee1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eee1c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eee1d ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004eee20(CPU *c) {
  NATIVE_HOOK(0x4eee20u) REGS; LOADALL;
L_004eee20:;
  /* 004eee20 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004eee23 push 0x63f7f0 */ { u32 v_ = 0x63f7f0u; esp -= 4; M32(esp) = v_; }
  /* 004eee28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eee29 call 0x5afb90 */ esp -= 4; M32(esp) = 0x4eee2eu; SAVEALL; F_005afb90(c); ABI_CHECK(0x5afb90u, 0x4eee29u); RETCHK(0x4eee2eu, 0x4eee29u); LOADALL;
  /* 004eee2e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eee31 mov dword ptr [esi + 0x60], 0 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x0u); }
  /* 004eee38 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004eee40(CPU *c) {
  NATIVE_HOOK(0x4eee40u) REGS; LOADALL;
L_004eee40:;
  /* 004eee40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004eee41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004eee43 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eee46 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eee47 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004eee49 call 0x5e71d0 */ esp -= 4; M32(esp) = 0x4eee4eu; SAVEALL; F_005e71d0(c); ABI_CHECK(0x5e71d0u, 0x4eee49u); RETCHK(0x4eee4eu, 0x4eee49u); LOADALL;
  /* 004eee4e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004eee50 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004eee53 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 004eee56 jge 0x4eee5e */ if (!LT_) goto L_004eee5e;
  /* 004eee58 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_004eee5e:;
  /* 004eee5e fmul dword ptr [0x656fec] */ { const u32 m_ = (u32)(0x656fecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eee64 fsub dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004eee6a fmul dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eee6d fmul dword ptr [0x656dac] */ { const u32 m_ = (u32)(0x656dacu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eee73 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eee76 call 0x5e71d0 */ esp -= 4; M32(esp) = 0x4eee7bu; SAVEALL; F_005e71d0(c); ABI_CHECK(0x5e71d0u, 0x4eee76u); RETCHK(0x4eee7bu, 0x4eee76u); LOADALL;
  /* 004eee7b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004eee7d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004eee80 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 004eee83 jge 0x4eee8b */ if (!LT_) goto L_004eee8b;
  /* 004eee85 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_004eee8b:;
  /* 004eee8b fmul dword ptr [0x656fec] */ { const u32 m_ = (u32)(0x656fecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eee91 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004eee94 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004eee97 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eee98 fsub dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004eee9e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eee9f fmul dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eeea2 fmul dword ptr [0x656dac] */ { const u32 m_ = (u32)(0x656dacu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eeea8 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eeeab call 0x5afb90 */ esp -= 4; M32(esp) = 0x4eeeb0u; SAVEALL; F_005afb90(c); ABI_CHECK(0x5afb90u, 0x4eeeabu); RETCHK(0x4eeeb0u, 0x4eeeabu); LOADALL;
  /* 004eeeb0 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004eeeb3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eeeb6 fmul dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eeeb9 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004eeebf fmul dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eeec2 fstp dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eeec5 fld dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); FPUSH((double)MF32(m_)); }
  /* 004eeec8 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004eeecb fst dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); MF32(m_) = (float)ST(0); }
  /* 004eeece fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004eeed4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004eeed6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004eeed9 jp 0x4eeee0 */ if (PF_) goto L_004eeee0;
  /* 004eeedb call 0x4eee20 */ esp -= 4; M32(esp) = 0x4eeee0u; SAVEALL; F_004eee20(c); ABI_CHECK(0x4eee20u, 0x4eeedbu); RETCHK(0x4eeee0u, 0x4eeedbu); LOADALL;
L_004eeee0:;
  /* 004eeee0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eeee1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004eeee3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eeee4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004eeef0(CPU *c) {
  NATIVE_HOOK(0x4eeef0u) REGS; LOADALL;
L_004eeef0:;
  /* 004eeef0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004eeef1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004eeef3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eeef6 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004eeef9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eeefa mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004eeefc fmul dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eeeff mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004eef02 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004eef05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eef06 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004eef0c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eef0d fmul dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eef10 fst dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); MF32(m_) = (float)ST(0); }
  /* 004eef13 fld dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); FPUSH((double)MF32(m_)); }
  /* 004eef16 fdiv dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004eef19 fmul dword ptr [0x656fe8] */ { const u32 m_ = (u32)(0x656fe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eef1f fcos */ ST(0) = m_cos(ST(0)); c->fsw &= ~0x400u;
  /* 004eef21 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 004eef23 fmul dword ptr [0x656dc8] */ { const u32 m_ = (u32)(0x656dc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eef29 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004eef2b fmul dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eef2e fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eef31 fmul dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eef34 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eef37 call 0x5afb90 */ esp -= 4; M32(esp) = 0x4eef3cu; SAVEALL; F_005afb90(c); ABI_CHECK(0x5afb90u, 0x4eef37u); RETCHK(0x4eef3cu, 0x4eef37u); LOADALL;
  /* 004eef3c fld dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); FPUSH((double)MF32(m_)); }
  /* 004eef3f fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004eef42 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eef45 fst dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); MF32(m_) = (float)ST(0); }
  /* 004eef48 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004eef4e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004eef50 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004eef53 jp 0x4eef5a */ if (PF_) goto L_004eef5a;
  /* 004eef55 call 0x4eee20 */ esp -= 4; M32(esp) = 0x4eef5au; SAVEALL; F_004eee20(c); ABI_CHECK(0x4eee20u, 0x4eef55u); RETCHK(0x4eef5au, 0x4eef55u); LOADALL;
L_004eef5a:;
  /* 004eef5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eef5b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004eef5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eef5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004eef70(CPU *c) {
  NATIVE_HOOK(0x4eef70u) REGS; LOADALL;
L_004eef70:;
  /* 004eef70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004eef71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004eef73 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004eef76 mov dword ptr [eax + 0x128], ecx */ { const u32 m_ = (u32)(eax + 0x128u); M32(m_) = (u32)(ecx); }
  /* 004eef7c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004eef7f mov dword ptr [eax + 0x120], edx */ { const u32 m_ = (u32)(eax + 0x120u); M32(m_) = (u32)(edx); }
  /* 004eef85 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004eef88 mov dword ptr [eax + 0x130], ecx */ { const u32 m_ = (u32)(eax + 0x130u); M32(m_) = (u32)(ecx); }
  /* 004eef8e mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004eef90 mov dword ptr [eax + 0x11c], edx */ { const u32 m_ = (u32)(eax + 0x11cu); M32(m_) = (u32)(edx); }
  /* 004eef96 mov dword ptr [eax + 0x134], ecx */ { const u32 m_ = (u32)(eax + 0x134u); M32(m_) = (u32)(ecx); }
  /* 004eef9c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eef9d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004eefa0(CPU *c) {
  NATIVE_HOOK(0x4eefa0u) REGS; LOADALL;
L_004eefa0:;
  /* 004eefa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004eefa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004eefa3 sub esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eefa6 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004eefa9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004eefaa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eefab mov esi, eax */ { esi = (u32)(eax); }
  /* 004eefad fmul dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eefb0 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004eefb3 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004eefb6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004eefb8 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eefbb fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004eefbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eefbf fmul dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eefc2 lea ebx, [esi + 0x10] */ ebx = (u32)((u32)(esi + 0x10u));
  /* 004eefc5 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004eefc8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004eefc9 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eefcc fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004eefcf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eefd0 fmul dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eefd3 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eefd6 call 0x5aefe0 */ esp -= 4; M32(esp) = 0x4eefdbu; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x4eefd6u); RETCHK(0x4eefdbu, 0x4eefd6u); LOADALL;
  /* 004eefdb lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004eefde push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004eefdf lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004eefe2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eefe3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004eefe5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eefe6 call 0x5aac00 */ esp -= 4; M32(esp) = 0x4eefebu; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4eefe6u); RETCHK(0x4eefebu, 0x4eefe6u); LOADALL;
  /* 004eefeb fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004eefee add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eeff1 fchs */ ST(0) = -ST(0);
  /* 004eeff3 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004eeff5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eeff6 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eeff9 lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004eeffc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eeffd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004eeffe call 0x5aefe0 */ esp -= 4; M32(esp) = 0x4ef003u; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x4eeffeu); RETCHK(0x4ef003u, 0x4eeffeu); LOADALL;
  /* 004ef003 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004ef006 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef007 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004ef00a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef00b mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004ef00d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef00e call 0x5aac00 */ esp -= 4; M32(esp) = 0x4ef013u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4ef00eu); RETCHK(0x4ef013u, 0x4ef00eu); LOADALL;
  /* 004ef013 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004ef016 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef019 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef01c add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef01f fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef022 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004ef025 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ef028 fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef02b fstp dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef02e fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004ef031 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ef034 fadd dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef037 fstp dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef03a fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 004ef03c fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef042 fld dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004ef045 fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef04b fld dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); FPUSH((double)MF32(m_)); }
  /* 004ef04e fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef054 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef057 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004ef059 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef05c fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef05f fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef062 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004ef065 fadd dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef068 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef06b fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004ef06e lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 004ef071 fsub dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef074 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef077 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004ef079 fsub dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef07c fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef07f fsub dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef082 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef085 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef088 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004ef08b lea ebx, [esi + 0x10] */ ebx = (u32)((u32)(esi + 0x10u));
  /* 004ef08e call 0x546b80 */ esp -= 4; M32(esp) = 0x4ef093u; SAVEALL; F_00546b80(c); ABI_CHECK(0x546b80u, 0x4ef08eu); RETCHK(0x4ef093u, 0x4ef08eu); LOADALL;
  /* 004ef093 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ef095 je 0x4ef0a0 */ if (ZF_) goto L_004ef0a0;
  /* 004ef097 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ef098 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4ef09du; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4ef098u); RETCHK(0x4ef09du, 0x4ef098u); LOADALL;
  /* 004ef09d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004ef0a0:;
  /* 004ef0a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ef0a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ef0a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ef0a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ef0a5 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004ef0b0(CPU *c) {
  NATIVE_HOOK(0x4ef0b0u) REGS; LOADALL;
L_004ef0b0:;
  /* 004ef0b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ef0b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ef0b3 sub esp, 0x11c */ { u32 a_ = esp, b_ = 0x11cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef0b9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ef0ba mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004ef0bc mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004ef0bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ef0c1 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 004ef0c4 je 0x4ef9cf */ if (ZF_) goto L_004ef9cf;
  /* 004ef0ca mov eax, dword ptr [ebx + 0x60] */ { const u32 m_ = (u32)(ebx + 0x60u); eax = (u32)(M32(m_)); }
  /* 004ef0cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ef0cf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ef0d0 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ef0d3 je 0x4ef0d8 */ if (ZF_) goto L_004ef0d8;
  /* 004ef0d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ef0d6 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x4ef0d8u; SAVEALL; call_ind(c, t_); RETCHK(0x4ef0d8u, 0x4ef0d6u); LOADALL; }
L_004ef0d8:;
  /* 004ef0d8 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004ef0db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ef0dc mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 004ef0df add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004ef0e2 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ef0e5 mov dword ptr [ebp - 0x64], esi */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(esi); }
  /* 004ef0e8 jne 0x4ef6a4 */ if (!ZF_) goto L_004ef6a4;
  /* 004ef0ee mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 004ef0f1 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004ef0f4 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef0f7 mov dword ptr [ebp - 0x4c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0x3f800000u); }
  /* 004ef0fe mov dword ptr [ebp - 0x50], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x0u); }
  /* 004ef105 mov dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x0u); }
  /* 004ef10c or edx, 0x20003 */ { u32 a_ = edx, b_ = 0x20003u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004ef112 mov dword ptr [ebp - 0x38], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x3f800000u); }
  /* 004ef119 mov dword ptr [ebp - 0x60], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(0x3f800000u); }
  /* 004ef120 mov dword ptr [ebp - 0x58], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0x0u); }
  /* 004ef127 mov dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x0u); }
  /* 004ef12e mov dword ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x0u); }
  /* 004ef135 mov dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x0u); }
  /* 004ef13c mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 004ef143 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 004ef14a mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 004ef151 mov dword ptr [ebp - 0x54], edx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(edx); }
  /* 004ef154 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004ef156 mov dword ptr [ebp - 0x50], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ecx); }
  /* 004ef159 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004ef15c fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef162 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef165 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ef168 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004ef16b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef16c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004ef16e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef16f mov dword ptr [ebp - 0x48], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(edx); }
  /* 004ef172 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ef177u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ef172u); RETCHK(0x4ef177u, 0x4ef172u); LOADALL;
  /* 004ef177 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef179 fld dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 004ef17c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef17f fsub dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef182 fld dword ptr [ebx + 0x40] */ { const u32 m_ = (u32)(ebx + 0x40u); FPUSH((double)MF32(m_)); }
  /* 004ef185 fsub dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef188 fld dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); FPUSH((double)MF32(m_)); }
  /* 004ef18b fsub dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef18e fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef191 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004ef193 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef196 fadd dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef199 fstp dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef19c fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef19f fadd dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef1a2 fstp dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef1a5 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004ef1a8 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef1ab fadd dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef1ae fstp dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef1b1 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004ef1b4 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef1ba fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004ef1bd fsub dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef1c0 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004ef1c3 fsub dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef1c6 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef1c9 fld dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); FPUSH((double)MF32(m_)); }
  /* 004ef1cc fsub dword ptr [ebx + 0x50] */ { const u32 m_ = (u32)(ebx + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef1cf fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef1d2 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004ef1d5 fmul dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef1d8 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004ef1da fmul dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef1dd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004ef1df fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004ef1e2 fmul dword ptr [ebx + 0x50] */ { const u32 m_ = (u32)(ebx + 0x50u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef1e5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004ef1e7 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004ef1ed fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004ef1ef test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ef1f2 jp 0x4ef1fe */ if (PF_) goto L_004ef1fe;
  /* 004ef1f4 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004ef1f6 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef1fc fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
L_004ef1fe:;
  /* 004ef1fe fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004ef200 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ef203 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef204 fadd dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef207 fst dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); MF32(m_) = (float)ST(0); }
  /* 004ef20a fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004ef20d fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004ef20f fadd dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef212 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 004ef215 fstp dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef218 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004ef21b fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004ef21d fadd dword ptr [ebx + 0x50] */ { const u32 m_ = (u32)(ebx + 0x50u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef220 fst dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); MF32(m_) = (float)ST(0); }
  /* 004ef223 fstp dword ptr [ebx + 0x50] */ { const u32 m_ = (u32)(ebx + 0x50u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef226 fld dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004ef229 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004ef22b fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef22e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef230 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef232 fld dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 004ef235 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef238 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef23b fld dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 004ef23e fsub dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef241 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef244 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4ef249u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4ef244u); RETCHK(0x4ef249u, 0x4ef244u); LOADALL;
  /* 004ef249 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef24c mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004ef24f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef252 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ef254 je 0x4ef289 */ if (ZF_) goto L_004ef289;
  /* 004ef256 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004ef259 fcomp dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004ef25f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004ef261 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ef264 jne 0x4ef289 */ if (!ZF_) goto L_004ef289;
  /* 004ef266 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ef268 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef269 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ef26c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef26d mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004ef26f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef270 call 0x5aac00 */ esp -= 4; M32(esp) = 0x4ef275u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4ef270u); RETCHK(0x4ef275u, 0x4ef270u); LOADALL;
  /* 004ef275 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ef278 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef279 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 004ef27c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef27d call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ef282u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ef27du); RETCHK(0x4ef282u, 0x4ef27du); LOADALL;
  /* 004ef282 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef284 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef287 jmp 0x4ef2bb */ goto L_004ef2bb;
L_004ef289:;
  /* 004ef289 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ef28c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004ef28f fmul dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef292 lea eax, [ecx + 0x20] */ eax = (u32)((u32)(ecx + 0x20u));
  /* 004ef295 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef298 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004ef29b fmul dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef29e fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef2a1 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004ef2a4 fmul dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef2a7 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef2aa mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004ef2ac mov dword ptr [ebp - 0x40], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edx); }
  /* 004ef2af mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ef2b2 mov dword ptr [ebp - 0x3c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ecx); }
  /* 004ef2b5 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ef2b8 mov dword ptr [ebp - 0x38], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edx); }
L_004ef2bb:;
  /* 004ef2bb fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 004ef2be lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 004ef2c1 fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef2c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef2c5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004ef2c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef2c8 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 004ef2cb fmul dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef2ce fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef2d0 fstp dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef2d3 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 004ef2d6 fmul dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef2d9 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 004ef2dc fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef2df fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef2e1 fstp dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef2e4 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004ef2e7 fmul dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef2ea fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004ef2ed fmul dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef2f0 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef2f2 fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef2f5 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ef2fau; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ef2f5u); RETCHK(0x4ef2fau, 0x4ef2f5u); LOADALL;
  /* 004ef2fa fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef2fc fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004ef2ff lea edx, [ebp - 0x50] */ edx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004ef302 fmul dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef305 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef306 mov eax, edx */ { eax = (u32)(edx); }
  /* 004ef308 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef309 fld dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); FPUSH((double)MF32(m_)); }
  /* 004ef30c fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef30f fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef311 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef314 fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 004ef317 fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef31a fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004ef31d fmul dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef320 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef322 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef325 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004ef328 fmul dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef32b fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004ef32e fmul dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef331 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef333 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef336 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ef33bu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ef336u); RETCHK(0x4ef33bu, 0x4ef336u); LOADALL;
  /* 004ef33b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef33d mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004ef33f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef340 lea eax, [ebx + 0x48] */ eax = (u32)((u32)(ebx + 0x48u));
  /* 004ef343 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef344 lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004ef347 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef348 call 0x5aac00 */ esp -= 4; M32(esp) = 0x4ef34du; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4ef348u); RETCHK(0x4ef34du, 0x4ef348u); LOADALL;
  /* 004ef34d fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 004ef350 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ef352 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef355 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef358 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 004ef35b fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef35e fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef361 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 004ef364 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef367 lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 004ef36a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef36b fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef36e call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4ef373u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4ef36eu); RETCHK(0x4ef373u, 0x4ef36eu); LOADALL;
  /* 004ef373 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ef376 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef377 lea edx, [ebp - 0x11c] */ edx = (u32)((u32)(ebp + 0xfffffee4u));
  /* 004ef37d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef37e call 0x5af080 */ esp -= 4; M32(esp) = 0x4ef383u; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x4ef37eu); RETCHK(0x4ef383u, 0x4ef37eu); LOADALL;
  /* 004ef383 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004ef385 lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 004ef388 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef389 lea ecx, [ebp - 0x11c] */ ecx = (u32)((u32)(ebp + 0xfffffee4u));
  /* 004ef38f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef390 call 0x5af5b0 */ esp -= 4; M32(esp) = 0x4ef395u; SAVEALL; F_005af5b0(c); ABI_CHECK(0x5af5b0u, 0x4ef390u); RETCHK(0x4ef395u, 0x4ef390u); LOADALL;
  /* 004ef395 lea edx, [ebp - 0xdc] */ edx = (u32)((u32)(ebp + 0xffffff24u));
  /* 004ef39b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef39c lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 004ef39f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef3a0 lea ecx, [ebp - 0xc4] */ ecx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 004ef3a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef3a7 lea edx, [ebp - 0x11c] */ edx = (u32)((u32)(ebp + 0xfffffee4u));
  /* 004ef3ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef3ae call 0x5af730 */ esp -= 4; M32(esp) = 0x4ef3b3u; SAVEALL; F_005af730(c); ABI_CHECK(0x5af730u, 0x4ef3aeu); RETCHK(0x4ef3b3u, 0x4ef3aeu); LOADALL;
  /* 004ef3b3 fld dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 004ef3b6 fsub dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef3b9 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef3bc fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef3bf fmul dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef3c5 fadd dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef3c8 fst dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); MF32(m_) = (float)ST(0); }
  /* 004ef3cb fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef3ce fcom dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004ef3d4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004ef3d6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ef3d9 jne 0x4ef3e5 */ if (!ZF_) goto L_004ef3e5;
  /* 004ef3db fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef3dd fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004ef3e3 jmp 0x4ef3fa */ goto L_004ef3fa;
L_004ef3e5:;
  /* 004ef3e5 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004ef3eb fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004ef3ed test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ef3f0 jp 0x4ef3fa */ if (PF_) goto L_004ef3fa;
  /* 004ef3f2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef3f4 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
L_004ef3fa:;
  /* 004ef3fa fmul dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef3fd mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 004ef400 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ef402 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004ef404 fmul dword ptr [0x656e60] */ { const u32 m_ = (u32)(0x656e60u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef40a fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef40d je 0x4ef615 */ if (ZF_) goto L_004ef615;
  /* 004ef413 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 004ef416 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef419 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004ef41e lea edi, [ebp - 0xb8] */ edi = (u32)((u32)(ebp + 0xffffff48u));
  /* 004ef424 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004ef426 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef427 lea ecx, [ebp - 0xc4] */ ecx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 004ef42d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef42e lea edx, [ebp - 0xb8] */ edx = (u32)((u32)(ebp + 0xffffff48u));
  /* 004ef434 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef435 call 0x5aefe0 */ esp -= 4; M32(esp) = 0x4ef43au; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x4ef435u); RETCHK(0x4ef43au, 0x4ef435u); LOADALL;
  /* 004ef43a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004ef43d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004ef43f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef440 lea eax, [ebx + 0x30] */ eax = (u32)((u32)(ebx + 0x30u));
  /* 004ef443 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef444 lea ecx, [ebp - 0x88] */ ecx = (u32)((u32)(ebp + 0xffffff78u));
  /* 004ef44a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef44b call 0x5aac00 */ esp -= 4; M32(esp) = 0x4ef450u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4ef44bu); RETCHK(0x4ef450u, 0x4ef44bu); LOADALL;
  /* 004ef450 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004ef452 fld dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); FPUSH((double)MF32(m_)); }
  /* 004ef458 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef45b mov esi, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); esi = (u32)(M32(m_)); }
  /* 004ef45e mov ebx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004ef461 push 0x4019999a */ { u32 v_ = 0x4019999au; esp -= 4; M32(esp) = v_; }
  /* 004ef466 fstp dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef46c fld dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); FPUSH((double)MF32(m_)); }
  /* 004ef472 mov edx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); edx = (u32)(M32(m_)); }
  /* 004ef478 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef47b mov dword ptr [ebp - 0x74], edx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(edx); }
  /* 004ef47e lea edx, [ebp - 0xd0] */ edx = (u32)((u32)(ebp + 0xffffff30u));
  /* 004ef484 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef485 fstp dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef48b fld dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); FPUSH((double)MF32(m_)); }
  /* 004ef48e fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef491 mov eax, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); eax = (u32)(M32(m_)); }
  /* 004ef497 mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 004ef49a lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004ef49d fstp dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef4a0 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004ef4a3 mov ecx, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); ecx = (u32)(M32(m_)); }
  /* 004ef4a6 fchs */ ST(0) = -ST(0);
  /* 004ef4a8 mov dword ptr [ebp - 0x6c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ecx); }
  /* 004ef4ab fld dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); FPUSH((double)MF32(m_)); }
  /* 004ef4b1 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004ef4b3 fadd dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef4b9 fstp dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef4bf fld dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); FPUSH((double)MF32(m_)); }
  /* 004ef4c5 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004ef4c7 fadd dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef4cd fstp dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef4d3 fld dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); FPUSH((double)MF32(m_)); }
  /* 004ef4d9 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004ef4db fadd dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef4de fstp dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef4e1 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef4e3 fld dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); FPUSH((double)MF32(m_)); }
  /* 004ef4e9 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef4eb fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef4ee fld dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); FPUSH((double)MF32(m_)); }
  /* 004ef4f4 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef4f7 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef4fa fld dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); FPUSH((double)MF32(m_)); }
  /* 004ef4fd fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef500 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef503 call 0x4052b0 */ esp -= 4; M32(esp) = 0x4ef508u; SAVEALL; F_004052b0(c); ABI_CHECK(0x4052b0u, 0x4ef503u); RETCHK(0x4ef508u, 0x4ef503u); LOADALL;
  /* 004ef508 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004ef50a mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef50d mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef510 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 004ef513 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 004ef516 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004ef519 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004ef51c mov eax, esi */ { eax = (u32)(esi); }
  /* 004ef51e fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef520 mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
  /* 004ef523 fst dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); }
  /* 004ef525 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004ef528 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef52b fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef52e fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004ef531 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef534 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef537 fld dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); FPUSH((double)MF32(m_)); }
  /* 004ef53a mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ef53d fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004ef53f fstp dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef542 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ef545 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef547 fld dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); FPUSH((double)MF32(m_)); }
  /* 004ef54a fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef54d fstp dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef550 fld dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); FPUSH((double)MF32(m_)); }
  /* 004ef553 fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef556 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef559 fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef55c mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef55f add eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004ef562 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef563 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef564 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ef569u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ef564u); RETCHK(0x4ef569u, 0x4ef564u); LOADALL;
  /* 004ef569 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef56b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef56e fld dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); FPUSH((double)MF32(m_)); }
  /* 004ef574 fmul dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef577 fld dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); FPUSH((double)MF32(m_)); }
  /* 004ef57d fmul dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef580 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef582 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef584 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef587 fld dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); FPUSH((double)MF32(m_)); }
  /* 004ef58d fmul dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef590 fld dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); FPUSH((double)MF32(m_)); }
  /* 004ef596 fmul dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef599 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef59b fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef59e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef5a1 fld dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); FPUSH((double)MF32(m_)); }
  /* 004ef5a7 fmul dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef5aa fld dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); FPUSH((double)MF32(m_)); }
  /* 004ef5b0 fmul dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef5b3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef5b5 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef5b8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef5bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef5bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef5bd call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ef5c2u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ef5bdu); RETCHK(0x4ef5c2u, 0x4ef5bdu); LOADALL;
  /* 004ef5c2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef5c4 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef5c7 fld dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004ef5ca fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef5cd fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004ef5d0 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef5d3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef5d5 fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef5d8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef5db fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004ef5de fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef5e0 fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 004ef5e3 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef5e6 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef5e8 fstp dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef5eb mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef5ee fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 004ef5f1 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef5f4 fld dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004ef5f7 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef5f9 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004ef5fb fstp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef5fe mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 004ef601 lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
  /* 004ef604 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef605 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef606 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ef60bu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ef606u); RETCHK(0x4ef60bu, 0x4ef606u); LOADALL;
  /* 004ef60b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef60d mov ebx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ebx = (u32)(M32(m_)); }
  /* 004ef610 add esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef613 jmp 0x4ef683 */ goto L_004ef683;
L_004ef615:;
  /* 004ef615 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ef618 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef61b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef61c lea edx, [ebp - 0xc4] */ edx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 004ef622 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef623 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef624 call 0x5aefe0 */ esp -= 4; M32(esp) = 0x4ef629u; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x4ef624u); RETCHK(0x4ef629u, 0x4ef624u); LOADALL;
  /* 004ef629 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004ef62b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef62c lea eax, [ebx + 0x30] */ eax = (u32)((u32)(ebx + 0x30u));
  /* 004ef62f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef630 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ef631 call 0x5aac00 */ esp -= 4; M32(esp) = 0x4ef636u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4ef631u); RETCHK(0x4ef636u, 0x4ef631u); LOADALL;
  /* 004ef636 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004ef638 fld dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004ef63b add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef63e fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef640 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef642 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ef644 fld dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); FPUSH((double)MF32(m_)); }
  /* 004ef647 fadd dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef64a fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef64d mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004ef64f fld dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 004ef652 fadd dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef655 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef658 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004ef65b mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ef65e fchs */ ST(0) = -ST(0);
  /* 004ef660 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004ef662 fmul dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef665 fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef667 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef669 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef66c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004ef66e fmul dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef671 fadd dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef674 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef677 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ef67a fmul dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef67d fadd dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef680 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_004ef683:;
  /* 004ef683 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ef686 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef687 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4ef68cu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4ef687u); RETCHK(0x4ef68cu, 0x4ef687u); LOADALL;
  /* 004ef68c mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef68f mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ef692 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef693 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4ef698u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4ef693u); RETCHK(0x4ef698u, 0x4ef693u); LOADALL;
  /* 004ef698 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef69b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ef69c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ef69d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ef69e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ef6a0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ef6a1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004ef6a4:;
  /* 004ef6a4 cmp eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ef6a7 jne 0x4ef846 */ if (!ZF_) goto L_004ef846;
  /* 004ef6ad mov eax, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004ef6b3 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 004ef6b6 mov eax, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); eax = (u32)(M32(m_)); }
  /* 004ef6bb mov ecx, dword ptr [eax + edx*4 + 4] */ { const u32 m_ = (u32)(eax + edx * 4u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ef6bf mov ecx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004ef6c2 lea eax, [eax + edx*4] */ eax = (u32)((u32)(eax + edx * 4u));
  /* 004ef6c5 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef6c8 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef6cb mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 004ef6ce fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004ef6d1 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 004ef6d4 fadd dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef6d7 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004ef6da mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 004ef6df fcomp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004ef6e2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004ef6e4 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ef6e7 jne 0x4ef708 */ if (!ZF_) goto L_004ef708;
  /* 004ef6e9 mov eax, edx */ { eax = (u32)(edx); }
  /* 004ef6eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef6ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef6ed call 0x5e8970 */ esp -= 4; M32(esp) = 0x4ef6f2u; SAVEALL; F_005e8970(c); ABI_CHECK(0x5e8970u, 0x4ef6edu); RETCHK(0x4ef6f2u, 0x4ef6edu); LOADALL;
  /* 004ef6f2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef6f5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004ef6f7 mov dword ptr [ebx + 0xac], esi */ { const u32 m_ = (u32)(ebx + 0xacu); M32(m_) = (u32)(esi); }
  /* 004ef6fd mov dword ptr [ebx + 0x10], edi */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(edi); }
  /* 004ef700 mov dword ptr [ebx + 0xbc], edi */ { const u32 m_ = (u32)(ebx + 0xbcu); M32(m_) = (u32)(edi); }
  /* 004ef706 jmp 0x4ef723 */ goto L_004ef723;
L_004ef708:;
  /* 004ef708 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ef709 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef70a call 0x5e8790 */ esp -= 4; M32(esp) = 0x4ef70fu; SAVEALL; F_005e8790(c); ABI_CHECK(0x5e8790u, 0x4ef70au); RETCHK(0x4ef70fu, 0x4ef70au); LOADALL;
  /* 004ef70f fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004ef712 fsub dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef715 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef718 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004ef71a fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004ef71d fstp dword ptr [ebx + 0xbc] */ { const u32 m_ = (u32)(ebx + 0xbcu); MF32(m_) = (float)ST(0); FPOP(); }
L_004ef723:;
  /* 004ef723 mov eax, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004ef729 mov edx, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); edx = (u32)(M32(m_)); }
  /* 004ef72f lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 004ef732 mov eax, dword ptr [edx + ecx*4 + 4] */ { const u32 m_ = (u32)(edx + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef736 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef737 call 0x5eebd0 */ esp -= 4; M32(esp) = 0x4ef73cu; SAVEALL; F_005eebd0(c); ABI_CHECK(0x5eebd0u, 0x4ef737u); RETCHK(0x4ef73cu, 0x4ef737u); LOADALL;
  /* 004ef73c mov eax, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004ef742 mov edx, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); edx = (u32)(M32(m_)); }
  /* 004ef748 lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 004ef74b mov eax, dword ptr [edx + ecx*4 + 4] */ { const u32 m_ = (u32)(edx + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef74f mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ef752 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef755 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004ef757 call 0x4ee950 */ esp -= 4; M32(esp) = 0x4ef75cu; SAVEALL; F_004ee950(c); ABI_CHECK(0x4ee950u, 0x4ef757u); RETCHK(0x4ef75cu, 0x4ef757u); LOADALL;
  /* 004ef75c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004ef75f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ef761 je 0x4ef77b */ if (ZF_) goto L_004ef77b;
  /* 004ef763 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004ef765 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ef767 je 0x4ef77b */ if (ZF_) goto L_004ef77b;
  /* 004ef769 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ef76c mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef76f push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004ef771 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef772 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef773 call 0x5ac330 */ esp -= 4; M32(esp) = 0x4ef778u; SAVEALL; F_005ac330(c); ABI_CHECK(0x5ac330u, 0x4ef773u); RETCHK(0x4ef778u, 0x4ef773u); LOADALL;
  /* 004ef778 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004ef77b:;
  /* 004ef77b cmp dword ptr [ebx + 0xb4], edi */ { const u32 m_ = (u32)(ebx + 0xb4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ef781 je 0x4ef9cd */ if (ZF_) goto L_004ef9cd;
  /* 004ef787 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004ef78a mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef78d fdiv dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004ef790 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef796 fadd dword ptr [ebx + 0xc0] */ { const u32 m_ = (u32)(ebx + 0xc0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef79c fst dword ptr [ebx + 0xc0] */ { const u32 m_ = (u32)(ebx + 0xc0u); MF32(m_) = (float)ST(0); }
  /* 004ef7a2 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef7a5 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef7a8 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef7ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef7ac call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4ef7b1u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4ef7acu); RETCHK(0x4ef7b1u, 0x4ef7acu); LOADALL;
  /* 004ef7b1 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ef7b4 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef7b7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef7b8 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4ef7bdu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4ef7b8u); RETCHK(0x4ef7bdu, 0x4ef7b8u); LOADALL;
  /* 004ef7bd mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef7c0 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef7c3 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004ef7c6 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004ef7c8 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 004ef7cb mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef7ce mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 004ef7d1 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef7d4 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004ef7d7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef7d8 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004ef7da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef7db mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004ef7de mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 004ef7e5 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4ef7eau; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4ef7e5u); RETCHK(0x4ef7eau, 0x4ef7e5u); LOADALL;
  /* 004ef7ea fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004ef7ec fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004ef7ef add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef7f2 fmul dword ptr [ebx + 0xc4] */ { const u32 m_ = (u32)(ebx + 0xc4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef7f8 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004ef7fb fmul dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef801 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004ef803 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004ef806 fmul dword ptr [ebx + 0xcc] */ { const u32 m_ = (u32)(ebx + 0xccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef80c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004ef80e fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004ef814 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004ef816 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ef819 jp 0x4ef837 */ if (PF_) goto L_004ef837;
  /* 004ef81b fcom dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004ef821 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004ef823 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ef826 jne 0x4ef837 */ if (!ZF_) goto L_004ef837;
  /* 004ef828 mov dword ptr [ebx + 0xac], esi */ { const u32 m_ = (u32)(ebx + 0xacu); M32(m_) = (u32)(esi); }
  /* 004ef82e mov dword ptr [ebx + 0x10], edi */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(edi); }
  /* 004ef831 mov dword ptr [ebx + 0xbc], edi */ { const u32 m_ = (u32)(ebx + 0xbcu); M32(m_) = (u32)(edi); }
L_004ef837:;
  /* 004ef837 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ef838 fstp dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef83e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ef83f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ef840 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ef842 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ef843 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004ef846:;
  /* 004ef846 cmp eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ef84b jne 0x4ef8b3 */ if (!ZF_) goto L_004ef8b3;
  /* 004ef84d mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef850 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004ef853 lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 004ef856 mov ecx, 0x63f7e4 */ { ecx = (u32)(0x63f7e4u); }
  /* 004ef85b call 0x5469f0 */ esp -= 4; M32(esp) = 0x4ef860u; SAVEALL; F_005469f0(c); ABI_CHECK(0x5469f0u, 0x4ef85bu); RETCHK(0x4ef860u, 0x4ef85bu); LOADALL;
  /* 004ef860 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ef862 je 0x4ef86d */ if (ZF_) goto L_004ef86d;
  /* 004ef864 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ef865 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4ef86au; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4ef865u); RETCHK(0x4ef86au, 0x4ef865u); LOADALL;
  /* 004ef86a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004ef86d:;
  /* 004ef86d mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004ef870 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 004ef872 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef873 lea edx, [ebx + 0x30] */ edx = (u32)((u32)(ebx + 0x30u));
  /* 004ef876 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef877 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004ef87a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef87b call 0x5aac00 */ esp -= 4; M32(esp) = 0x4ef880u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4ef87bu); RETCHK(0x4ef880u, 0x4ef87bu); LOADALL;
  /* 004ef880 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004ef883 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004ef885 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef888 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef88b lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004ef88e mov edx, ebx */ { edx = (u32)(ebx); }
  /* 004ef890 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef893 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004ef896 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef899 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef89c fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004ef89f fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef8a2 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef8a5 call 0x4efa10 */ esp -= 4; M32(esp) = 0x4ef8aau; SAVEALL; F_004efa10(c); ABI_CHECK(0x4efa10u, 0x4ef8a5u); RETCHK(0x4ef8aau, 0x4ef8a5u); LOADALL;
  /* 004ef8aa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ef8ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ef8ac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ef8ad mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ef8af pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ef8b0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004ef8b3:;
  /* 004ef8b3 cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ef8b8 jne 0x4ef971 */ if (!ZF_) goto L_004ef971;
  /* 004ef8be lea ecx, [ebx + 0xd0] */ ecx = (u32)((u32)(ebx + 0xd0u));
  /* 004ef8c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef8c5 lea edx, [ebx + 0x30] */ edx = (u32)((u32)(ebx + 0x30u));
  /* 004ef8c8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef8c9 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ef8cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef8cd call 0x5aac00 */ esp -= 4; M32(esp) = 0x4ef8d2u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4ef8cdu); RETCHK(0x4ef8d2u, 0x4ef8cdu); LOADALL;
  /* 004ef8d2 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004ef8d5 fadd dword ptr [ebx + 0x100] */ { const u32 m_ = (u32)(ebx + 0x100u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef8db mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef8de fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004ef8e1 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004ef8e3 fadd dword ptr [ebx + 0x104] */ { const u32 m_ = (u32)(ebx + 0x104u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef8e9 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ef8ec fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004ef8ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef8f0 fadd dword ptr [ebx + 0x108] */ { const u32 m_ = (u32)(ebx + 0x108u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef8f6 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef8f9 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004ef8fb fchs */ ST(0) = -ST(0);
  /* 004ef8fd fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef900 fchs */ ST(0) = -ST(0);
  /* 004ef902 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef905 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004ef908 fchs */ ST(0) = -ST(0);
  /* 004ef90a fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef90d mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef910 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef911 call 0x5ac1f0 */ esp -= 4; M32(esp) = 0x4ef916u; SAVEALL; F_005ac1f0(c); ABI_CHECK(0x5ac1f0u, 0x4ef911u); RETCHK(0x4ef916u, 0x4ef911u); LOADALL;
  /* 004ef916 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004ef919 fmul dword ptr [ebx + 0x11c] */ { const u32 m_ = (u32)(ebx + 0x11cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef91f mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef922 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef925 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef928 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004ef92a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef92b lea ecx, [ebx + 0x110] */ ecx = (u32)((u32)(ebx + 0x110u));
  /* 004ef931 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef934 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef935 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef936 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x4ef93bu; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x4ef936u); RETCHK(0x4ef93bu, 0x4ef936u); LOADALL;
  /* 004ef93b fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004ef93e mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef941 fchs */ ST(0) = -ST(0);
  /* 004ef943 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef946 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004ef948 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004ef94b lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ef94e fchs */ ST(0) = -ST(0);
  /* 004ef950 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef951 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef954 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004ef957 fchs */ ST(0) = -ST(0);
  /* 004ef959 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef95c mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ef95f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef960 call 0x5ac1f0 */ esp -= 4; M32(esp) = 0x4ef965u; SAVEALL; F_005ac1f0(c); ABI_CHECK(0x5ac1f0u, 0x4ef960u); RETCHK(0x4ef965u, 0x4ef960u); LOADALL;
  /* 004ef965 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ef968 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ef969 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ef96a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ef96b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ef96d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ef96e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004ef971:;
  /* 004ef971 cmp eax, 0x200 */ { u32 a_ = eax, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ef976 jne 0x4ef9cd */ if (!ZF_) goto L_004ef9cd;
  /* 004ef978 mov eax, dword ptr [ebx + 0x128] */ { const u32 m_ = (u32)(ebx + 0x128u); eax = (u32)(M32(m_)); }
  /* 004ef97e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ef980 je 0x4ef9cd */ if (ZF_) goto L_004ef9cd;
  /* 004ef982 fld dword ptr [ebx + 0x12c] */ { const u32 m_ = (u32)(ebx + 0x12cu); FPUSH((double)MF32(m_)); }
  /* 004ef988 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef989 fmul dword ptr [ebx + 0x120] */ { const u32 m_ = (u32)(ebx + 0x120u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef98f mov ecx, dword ptr [ebx + 0x130] */ { const u32 m_ = (u32)(ebx + 0x130u); ecx = (u32)(M32(m_)); }
  /* 004ef995 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004ef997 fchs */ ST(0) = -ST(0);
  /* 004ef999 fst dword ptr [ebx + 0x124] */ { const u32 m_ = (u32)(ebx + 0x124u); MF32(m_) = (float)ST(0); }
  /* 004ef99f fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef9a2 fadd dword ptr [ebx + 0x11c] */ { const u32 m_ = (u32)(ebx + 0x11cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef9a8 fst dword ptr [ebx + 0x11c] */ { const u32 m_ = (u32)(ebx + 0x11cu); MF32(m_) = (float)ST(0); }
  /* 004ef9ae fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004ef9b1 fadd dword ptr [ebx + 0x120] */ { const u32 m_ = (u32)(ebx + 0x120u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004ef9b7 fst dword ptr [ebx + 0x120] */ { const u32 m_ = (u32)(ebx + 0x120u); MF32(m_) = (float)ST(0); }
  /* 004ef9bd fchs */ ST(0) = -ST(0);
  /* 004ef9bf fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004ef9c2 push 0x41a00000 */ { u32 v_ = 0x41a00000u; esp -= 4; M32(esp) = v_; }
  /* 004ef9c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ef9c8 call 0x4eefa0 */ esp -= 4; M32(esp) = 0x4ef9cdu; SAVEALL; F_004eefa0(c); ABI_CHECK(0x4eefa0u, 0x4ef9c8u); RETCHK(0x4ef9cdu, 0x4ef9c8u); LOADALL;
L_004ef9cd:;
  /* 004ef9cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ef9ce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004ef9cf:;
  /* 004ef9cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ef9d0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ef9d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ef9d3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004ef9e0(CPU *c) {
  NATIVE_HOOK(0x4ef9e0u) REGS; LOADALL;
L_004ef9e0:;
  /* 004ef9e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ef9e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ef9e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ef9e4 lea eax, [ecx + 0x30] */ eax = (u32)((u32)(ecx + 0x30u));
  /* 004ef9e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef9e8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ef9eb mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef9ee mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004ef9f0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef9f1 lea ebx, [ecx + 0x48] */ ebx = (u32)((u32)(ecx + 0x48u));
  /* 004ef9f4 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ef9f7 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ef9fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ef9fb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ef9fc call 0x4ee460 */ esp -= 4; M32(esp) = 0x4efa01u; SAVEALL; F_004ee460(c); ABI_CHECK(0x4ee460u, 0x4ef9fcu); RETCHK(0x4efa01u, 0x4ef9fcu); LOADALL;
  /* 004efa01 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efa04 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004efa05 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004efa06 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004efa10(CPU *c) {
  NATIVE_HOOK(0x4efa10u) REGS; LOADALL;
L_004efa10:;
  /* 004efa10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004efa11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004efa13 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efa16 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004efa19 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004efa1b fsub dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004efa1e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004efa1f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004efa20 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004efa23 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004efa26 fsub dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004efa29 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004efa2c fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004efa2f lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004efa32 fsub dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004efa35 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004efa38 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004efa3b mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004efa3e lea ebx, [esi + 0x10] */ ebx = (u32)((u32)(esi + 0x10u));
  /* 004efa41 call 0x546b80 */ esp -= 4; M32(esp) = 0x4efa46u; SAVEALL; F_00546b80(c); ABI_CHECK(0x546b80u, 0x4efa41u); RETCHK(0x4efa46u, 0x4efa41u); LOADALL;
  /* 004efa46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efa48 je 0x4efa53 */ if (ZF_) goto L_004efa53;
  /* 004efa4a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004efa4b call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4efa50u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4efa4bu); RETCHK(0x4efa50u, 0x4efa4bu); LOADALL;
  /* 004efa50 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004efa53:;
  /* 004efa53 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004efa54 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004efa55 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004efa57 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004efa58 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004efa60(CPU *c) {
  NATIVE_HOOK(0x4efa60u) REGS; LOADALL;
L_004efa60:;
  /* 004efa60 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efa62 je 0x4efb1e */ if (ZF_) goto L_004efb1e;
  /* 004efa68 mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004efa6e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efa70 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004efa73 je 0x4efad8 */ if (ZF_) goto L_004efad8;
  /* 004efa75 mov edx, dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); edx = (u32)(M32(m_)); }
  /* 004efa7b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efa7c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efa7d call 0x5afbc0 */ esp -= 4; M32(esp) = 0x4efa82u; SAVEALL; F_005afbc0(c); ABI_CHECK(0x5afbc0u, 0x4efa7du); RETCHK(0x4efa82u, 0x4efa7du); LOADALL;
  /* 004efa82 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004efa85 mov ecx, dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004efa8b mov edx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); edx = (u32)(M32(m_)); }
  /* 004efa91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004efa92 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efa93 call 0x5afc90 */ esp -= 4; M32(esp) = 0x4efa98u; SAVEALL; F_005afc90(c); ABI_CHECK(0x5afc90u, 0x4efa93u); RETCHK(0x4efa98u, 0x4efa93u); LOADALL;
  /* 004efa98 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004efa9b mov edx, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); edx = (u32)(M32(m_)); }
  /* 004efaa1 mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004efaa7 mov dword ptr [ecx + 0x88], edx */ { const u32 m_ = (u32)(ecx + 0x88u); M32(m_) = (u32)(edx); }
  /* 004efaad mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004efab0 mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004efab6 add eax, 0x68 */ { u32 a_ = eax, b_ = 0x68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004efab9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efaba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004efabb call 0x5afe00 */ esp -= 4; M32(esp) = 0x4efac0u; SAVEALL; F_005afe00(c); ABI_CHECK(0x5afe00u, 0x4efabbu); RETCHK(0x4efac0u, 0x4efabbu); LOADALL;
  /* 004efac0 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004efac3 mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004efac9 add edx, 0x78 */ { u32 a_ = edx, b_ = 0x78u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004efacc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efacd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004eface call 0x5afb90 */ esp -= 4; M32(esp) = 0x4efad3u; SAVEALL; F_005afb90(c); ABI_CHECK(0x5afb90u, 0x4efaceu); RETCHK(0x4efad3u, 0x4efaceu); LOADALL;
  /* 004efad3 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efad6 jmp 0x4efaeb */ goto L_004efaeb;
L_004efad8:;
  /* 004efad8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004efad9 call 0x5b0d70 */ esp -= 4; M32(esp) = 0x4efadeu; SAVEALL; F_005b0d70(c); ABI_CHECK(0x5b0d70u, 0x4efad9u); RETCHK(0x4efadeu, 0x4efad9u); LOADALL;
  /* 004efade add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efae1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efae3 mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 004efae9 je 0x4efb1b */ if (ZF_) goto L_004efb1b;
L_004efaeb:;
  /* 004efaeb mov eax, dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); eax = (u32)(M32(m_)); }
  /* 004efaf1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efaf3 je 0x4efb1b */ if (ZF_) goto L_004efb1b;
  /* 004efaf5 mov edx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); edx = (u32)(M32(m_)); }
  /* 004efafb mov dword ptr [edx + 0x60], eax */ { const u32 m_ = (u32)(edx + 0x60u); M32(m_) = (u32)(eax); }
  /* 004efafe mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004efb04 push 0x63f7f0 */ { u32 v_ = 0x63f7f0u; esp -= 4; M32(esp) = v_; }
  /* 004efb09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efb0a mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004efb0d call 0x5afb90 */ esp -= 4; M32(esp) = 0x4efb12u; SAVEALL; F_005afb90(c); ABI_CHECK(0x5afb90u, 0x4efb0du); RETCHK(0x4efb12u, 0x4efb0du); LOADALL;
  /* 004efb12 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efb15 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004efb1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004efb1b:;
  /* 004efb1b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004efb1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004efb1e:;
  /* 004efb1e mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004efb21 mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004efb27 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004efb2a mov edx, dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); edx = (u32)(M32(m_)); }
  /* 004efb30 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efb31 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efb32 call 0x5afbc0 */ esp -= 4; M32(esp) = 0x4efb37u; SAVEALL; F_005afbc0(c); ABI_CHECK(0x5afbc0u, 0x4efb32u); RETCHK(0x4efb37u, 0x4efb32u); LOADALL;
  /* 004efb37 mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004efb3d mov ecx, dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004efb43 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004efb46 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004efb47 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efb48 call 0x5afc90 */ esp -= 4; M32(esp) = 0x4efb4du; SAVEALL; F_005afc90(c); ABI_CHECK(0x5afc90u, 0x4efb48u); RETCHK(0x4efb4du, 0x4efb48u); LOADALL;
  /* 004efb4d mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004efb53 mov edx, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); edx = (u32)(M32(m_)); }
  /* 004efb59 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004efb5c mov dword ptr [ecx + 0x88], edx */ { const u32 m_ = (u32)(ecx + 0x88u); M32(m_) = (u32)(edx); }
  /* 004efb62 mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004efb68 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004efb6b add eax, 0x68 */ { u32 a_ = eax, b_ = 0x68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004efb6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efb6f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004efb70 call 0x5afe00 */ esp -= 4; M32(esp) = 0x4efb75u; SAVEALL; F_005afe00(c); ABI_CHECK(0x5afe00u, 0x4efb70u); RETCHK(0x4efb75u, 0x4efb70u); LOADALL;
  /* 004efb75 mov edx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); edx = (u32)(M32(m_)); }
  /* 004efb7b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004efb7e add edx, 0x78 */ { u32 a_ = edx, b_ = 0x78u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004efb81 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efb82 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efb83 call 0x5afb90 */ esp -= 4; M32(esp) = 0x4efb88u; SAVEALL; F_005afb90(c); ABI_CHECK(0x5afb90u, 0x4efb83u); RETCHK(0x4efb88u, 0x4efb83u); LOADALL;
  /* 004efb88 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efb8b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004efb90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004efba0(CPU *c) {
  NATIVE_HOOK(0x4efba0u) REGS; LOADALL;
L_004efba0:;
  /* 004efba0 mov edx, dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); edx = (u32)(M32(m_)); }
  /* 004efba6 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efba8 je 0x4efc0c */ if (ZF_) goto L_004efc0c;
  /* 004efbaa mov ecx, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); ecx = (u32)(M32(m_)); }
  /* 004efbb0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efbb2 je 0x4efc0c */ if (ZF_) goto L_004efc0c;
  /* 004efbb4 mov edx, dword ptr [edx + 0x60] */ { const u32 m_ = (u32)(edx + 0x60u); edx = (u32)(M32(m_)); }
  /* 004efbb7 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004efbbd mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 004efbbf mov ecx, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); ecx = (u32)(M32(m_)); }
  /* 004efbc2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efbc3 fild dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 004efbc6 movzx edx, byte ptr [eax + 0x9c] */ { const u32 m_ = (u32)(eax + 0x9cu); edx = (u32)(M8(m_)); }
  /* 004efbcd shl edx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004efbd0 or edx, 0xffffff */ { u32 a_ = edx, b_ = 0xffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004efbd6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efbd7 mov edx, dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); edx = (u32)(M32(m_)); }
  /* 004efbdd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efbde mov edx, dword ptr [eax + 0x94] */ { const u32 m_ = (u32)(eax + 0x94u); edx = (u32)(M32(m_)); }
  /* 004efbe4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efbe5 mov edx, dword ptr [eax + 0x90] */ { const u32 m_ = (u32)(eax + 0x90u); edx = (u32)(M32(m_)); }
  /* 004efbeb mov eax, dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004efbf1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efbf2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efbf3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efbf6 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004efbfa fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 004efbfd fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004efc00 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efc02 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efc04 call 0x4ee540 */ esp -= 4; M32(esp) = 0x4efc09u; SAVEALL; F_004ee540(c); ABI_CHECK(0x4ee540u, 0x4efc04u); RETCHK(0x4efc09u, 0x4efc04u); LOADALL;
  /* 004efc09 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004efc0c:;
  /* 004efc0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004efc10(CPU *c) {
  NATIVE_HOOK(0x4efc10u) REGS; LOADALL;
L_004efc10:;
  /* 004efc10 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004efc15 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004efc17 mov eax, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); eax = (u32)(M32(m_)); }
  /* 004efc1a mov ecx, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004efc20 fild dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 004efc23 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efc25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004efc26 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004efc2b push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004efc30 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efc32 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efc34 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efc37 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004efc3b fild dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 004efc3e fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004efc41 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efc43 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efc45 call 0x4ee540 */ esp -= 4; M32(esp) = 0x4efc4au; SAVEALL; F_004ee540(c); ABI_CHECK(0x4ee540u, 0x4efc45u); RETCHK(0x4efc4au, 0x4efc45u); LOADALL;
  /* 004efc4a add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efc4d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004efc50(CPU *c) {
  NATIVE_HOOK(0x4efc50u) REGS; LOADALL;
L_004efc50:;
  /* 004efc50 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004efc51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004efc52 mov esi, eax */ { esi = (u32)(eax); }
  /* 004efc54 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efc56 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004efc58 jle 0x4efcbc */ if ((ZF_|LT_)) goto L_004efcbc;
  /* 004efc5a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efc5c je 0x4efcbc */ if (ZF_) goto L_004efcbc;
  /* 004efc5e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efc60 je 0x4efcbc */ if (ZF_) goto L_004efcbc;
  /* 004efc62 mov eax, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); eax = (u32)(M32(m_)); }
  /* 004efc67 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efc69 jne 0x4efcb4 */ if (!ZF_) goto L_004efcb4;
  /* 004efc6b lea eax, [esi + esi*2] */ eax = (u32)((u32)(esi + esi * 2u));
  /* 004efc6e shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004efc71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efc72 call 0x5fea94 */ esp -= 4; M32(esp) = 0x4efc77u; SAVEALL; F_005fea94(c); ABI_CHECK(0x5fea94u, 0x4efc72u); RETCHK(0x4efc77u, 0x4efc72u); LOADALL;
  /* 004efc77 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efc7a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efc7c mov dword ptr [0x7a6c98], eax */ { const u32 m_ = (u32)(0x7a6c98u); M32(m_) = (u32)(eax); }
  /* 004efc81 je 0x4efcbc */ if (ZF_) goto L_004efcbc;
  /* 004efc83 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efc85 mov dword ptr [0x7a6c9c], esi */ { const u32 m_ = (u32)(0x7a6c9cu); M32(m_) = (u32)(esi); }
  /* 004efc8b jle 0x4efcb4 */ if ((ZF_|LT_)) goto L_004efcb4;
  /* 004efc8d add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004efc90 lea edx, [ebx + 4] */ edx = (u32)((u32)(ebx + 0x4u));
L_004efc93:;
  /* 004efc93 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 004efc95 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004efc98 mov ebx, dword ptr [ecx + edi] */ { const u32 m_ = (u32)(ecx + edi); ebx = (u32)(M32(m_)); }
  /* 004efc9b add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004efc9d mov dword ptr [eax - 8], ebx */ { const u32 m_ = (u32)(eax + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 004efca0 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 004efca3 mov dword ptr [eax - 4], ebx */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004efca6 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004efca9 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004efcab add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004efcae add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004efcb1 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004efcb2 jne 0x4efc93 */ if (!ZF_) goto L_004efc93;
L_004efcb4:;
  /* 004efcb4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004efcb5 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004efcba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004efcbb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004efcbc:;
  /* 004efcbc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004efcbd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004efcbf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004efcc0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004efcd0(CPU *c) {
  NATIVE_HOOK(0x4efcd0u) REGS; LOADALL;
L_004efcd0:;
  /* 004efcd0 mov eax, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); eax = (u32)(M32(m_)); }
  /* 004efcd5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efcd7 je 0x4efcf6 */ if (ZF_) goto L_004efcf6;
  /* 004efcd9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efcda call 0x5fe99e */ esp -= 4; M32(esp) = 0x4efcdfu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4efcdau); RETCHK(0x4efcdfu, 0x4efcdau); LOADALL;
  /* 004efcdf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efce2 mov dword ptr [0x7a6c98], 0 */ { const u32 m_ = (u32)(0x7a6c98u); M32(m_) = (u32)(0x0u); }
  /* 004efcec mov dword ptr [0x7a6c9c], 0 */ { const u32 m_ = (u32)(0x7a6c9cu); M32(m_) = (u32)(0x0u); }
L_004efcf6:;
  /* 004efcf6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004efd00(CPU *c) {
  NATIVE_HOOK(0x4efd00u) REGS; LOADALL;
L_004efd00:;
  /* 004efd00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004efd01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004efd03 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efd06 mov eax, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); eax = (u32)(M32(m_)); }
  /* 004efd0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efd0d je 0x4efe50 */ if (ZF_) goto L_004efe50;
  /* 004efd13 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004efd15 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004efd1c jl 0x4efe50 */ if (LT_) goto L_004efe50;
  /* 004efd22 cmp ebx, dword ptr [0x7a6c9c] */ { const u32 m_ = (u32)(0x7a6c9cu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004efd28 jge 0x4efe50 */ if (!LT_) goto L_004efe50;
  /* 004efd2e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004efd2f lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004efd32 lea edi, [ebx + ebx*2] */ edi = (u32)((u32)(ebx + ebx * 2u));
  /* 004efd35 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004efd36 shl edi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 004efd39 mov edx, dword ptr [edi + eax] */ { const u32 m_ = (u32)(edi + eax); edx = (u32)(M32(m_)); }
  /* 004efd3c push 0x545180 */ { u32 v_ = 0x545180u; esp -= 4; M32(esp) = v_; }
  /* 004efd41 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efd42 call 0x577de0 */ esp -= 4; M32(esp) = 0x4efd47u; SAVEALL; F_00577de0(c); ABI_CHECK(0x577de0u, 0x4efd42u); RETCHK(0x4efd47u, 0x4efd42u); LOADALL;
  /* 004efd47 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004efd4a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004efd4c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efd4f cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004efd51 je 0x4efe49 */ if (ZF_) goto L_004efe49;
  /* 004efd57 mov dword ptr [esi + 0xac], eax */ { const u32 m_ = (u32)(esi + 0xacu); M32(m_) = (u32)(eax); }
  /* 004efd5d mov dword ptr [esi + 0xb4], eax */ { const u32 m_ = (u32)(esi + 0xb4u); M32(m_) = (u32)(eax); }
  /* 004efd63 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004efd66 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 004efd6b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efd6c mov dword ptr [esi + 0x10], 0x40 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x40u); }
  /* 004efd73 call 0x5afbc0 */ esp -= 4; M32(esp) = 0x4efd78u; SAVEALL; F_005afbc0(c); ABI_CHECK(0x5afbc0u, 0x4efd73u); RETCHK(0x4efd78u, 0x4efd73u); LOADALL;
  /* 004efd78 fld dword ptr [0x656fe4] */ { const u32 m_ = (u32)(0x656fe4u); FPUSH((double)MF32(m_)); }
  /* 004efd7e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004efd81 fcomp dword ptr [ecx + 0x84] */ { const u32 m_ = (u32)(ecx + 0x84u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004efd87 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efd8a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004efd8c test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004efd8f jp 0x4efd9a */ if (PF_) goto L_004efd9a;
  /* 004efd91 mov dword ptr [ebp - 8], 0x457a0000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x457a0000u); }
  /* 004efd98 jmp 0x4efda3 */ goto L_004efda3;
L_004efd9a:;
  /* 004efd9a mov ecx, dword ptr [ecx + 0x84] */ { const u32 m_ = (u32)(ecx + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004efda0 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
L_004efda3:;
  /* 004efda3 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004efda6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004efda9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efdaa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efdab call 0x5afc90 */ esp -= 4; M32(esp) = 0x4efdb0u; SAVEALL; F_005afc90(c); ABI_CHECK(0x5afc90u, 0x4efdabu); RETCHK(0x4efdb0u, 0x4efdabu); LOADALL;
  /* 004efdb0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004efdb3 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004efdb6 add ecx, 0x68 */ { u32 a_ = ecx, b_ = 0x68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004efdb9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004efdba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efdbb call 0x5afe00 */ esp -= 4; M32(esp) = 0x4efdc0u; SAVEALL; F_005afe00(c); ABI_CHECK(0x5afe00u, 0x4efdbbu); RETCHK(0x4efdc0u, 0x4efdbbu); LOADALL;
  /* 004efdc0 mov eax, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); eax = (u32)(M32(m_)); }
  /* 004efdc5 mov dword ptr [esi + 0xa8], ebx */ { const u32 m_ = (u32)(esi + 0xa8u); M32(m_) = (u32)(ebx); }
  /* 004efdcb mov ecx, dword ptr [edi + eax + 4] */ { const u32 m_ = (u32)(edi + eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004efdcf mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 004efdd2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efdd4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004efdd5 call 0x5e8970 */ esp -= 4; M32(esp) = 0x4efddau; SAVEALL; F_005e8970(c); ABI_CHECK(0x5e8970u, 0x4efdd5u); RETCHK(0x4efddau, 0x4efdd5u); LOADALL;
  /* 004efdda mov eax, dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004efde0 mov ecx, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); ecx = (u32)(M32(m_)); }
  /* 004efde6 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 004efde9 mov edx, dword ptr [ecx + eax*4 + 4] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x4u); edx = (u32)(M32(m_)); }
  /* 004efded mov eax, dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004efdf0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efdf2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efdf3 call 0x5e8790 */ esp -= 4; M32(esp) = 0x4efdf8u; SAVEALL; F_005e8790(c); ABI_CHECK(0x5e8790u, 0x4efdf3u); RETCHK(0x4efdf8u, 0x4efdf3u); LOADALL;
  /* 004efdf8 mov eax, dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004efdfe mov edx, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); edx = (u32)(M32(m_)); }
  /* 004efe04 lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 004efe07 mov eax, dword ptr [edx + ecx*4 + 4] */ { const u32 m_ = (u32)(edx + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 004efe0b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004efe0c call 0x5eebd0 */ esp -= 4; M32(esp) = 0x4efe11u; SAVEALL; F_005eebd0(c); ABI_CHECK(0x5eebd0u, 0x4efe0cu); RETCHK(0x4efe11u, 0x4efe0cu); LOADALL;
  /* 004efe11 mov eax, dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004efe17 mov edx, dword ptr [0x7a6c98] */ { const u32 m_ = (u32)(0x7a6c98u); edx = (u32)(M32(m_)); }
  /* 004efe1d lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 004efe20 lea eax, [edx + ecx*4] */ eax = (u32)((u32)(edx + ecx * 4u));
  /* 004efe23 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004efe26 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 004efe29 mov dword ptr [esi + 0xbc], edx */ { const u32 m_ = (u32)(esi + 0xbcu); M32(m_) = (u32)(edx); }
  /* 004efe2f mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004efe32 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004efe35 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efe38 mov eax, esi */ { eax = (u32)(esi); }
  /* 004efe3a call 0x4ee950 */ esp -= 4; M32(esp) = 0x4efe3fu; SAVEALL; F_004ee950(c); ABI_CHECK(0x4ee950u, 0x4efe3au); RETCHK(0x4efe3fu, 0x4efe3au); LOADALL;
  /* 004efe3f mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004efe44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004efe45 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004efe47 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004efe48 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004efe49:;
  /* 004efe49 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004efe4b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004efe4c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004efe4e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004efe4f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004efe50:;
  /* 004efe50 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004efe52 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004efe54 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004efe55 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004efe60(CPU *c) {
  NATIVE_HOOK(0x4efe60u) REGS; LOADALL;
L_004efe60:;
  /* 004efe60 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004efe65 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004efe67 mov eax, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); eax = (u32)(M32(m_)); }
  /* 004efe6a mov ecx, dword ptr [edx + 0xa0] */ { const u32 m_ = (u32)(edx + 0xa0u); ecx = (u32)(M32(m_)); }
  /* 004efe70 fild dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 004efe73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004efe74 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004efe76 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004efe7b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efe7d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efe7f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004efe84 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efe87 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004efe8b fild dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 004efe8e fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004efe91 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efe93 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004efe95 call 0x4ee540 */ esp -= 4; M32(esp) = 0x4efe9au; SAVEALL; F_004ee540(c); ABI_CHECK(0x4ee540u, 0x4efe95u); RETCHK(0x4efe9au, 0x4efe95u); LOADALL;
  /* 004efe9a add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004efe9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004efea0(CPU *c) {
  NATIVE_HOOK(0x4efea0u) REGS; LOADALL;
L_004efea0:;
  /* 004efea0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004efea1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004efea3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004efea4 call 0x4ee8c0 */ esp -= 4; M32(esp) = 0x4efea9u; SAVEALL; F_004ee8c0(c); ABI_CHECK(0x4ee8c0u, 0x4efea4u); RETCHK(0x4efea9u, 0x4efea4u); LOADALL;
  /* 004efea9 mov esi, dword ptr [0x63f800] */ { const u32 m_ = (u32)(0x63f800u); esi = (u32)(M32(m_)); }
  /* 004efeaf mov dword ptr [eax + 0x3c], edx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(edx); }
  /* 004efeb2 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004efeb5 mov dword ptr [eax + 0x40], edx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(edx); }
  /* 004efeb8 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004efebb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004efebd mov dword ptr [eax + 0x44], edx */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(edx); }
  /* 004efec0 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004efec3 mov dword ptr [eax + 0x48], edx */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(edx); }
  /* 004efec6 mov edx, dword ptr [0x63f7fc] */ { const u32 m_ = (u32)(0x63f7fcu); edx = (u32)(M32(m_)); }
  /* 004efecc mov dword ptr [eax + 0x78], esi */ { const u32 m_ = (u32)(eax + 0x78u); M32(m_) = (u32)(esi); }
  /* 004efecf mov dword ptr [eax + 0x80], esi */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(esi); }
  /* 004efed5 mov dword ptr [eax + 0x88], esi */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(esi); }
  /* 004efedb mov dword ptr [eax + 0x1c], 1 */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0x1u); }
  /* 004efee2 mov dword ptr [eax], 0x64efdc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64efdcu); }
  /* 004efee8 mov dword ptr [eax + 0x50], ecx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(ecx); }
  /* 004efeeb mov dword ptr [eax + 0x54], ecx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(ecx); }
  /* 004efeee mov dword ptr [eax + 0x58], ecx */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(ecx); }
  /* 004efef1 mov dword ptr [eax + 0x70], 0x7f7fffff */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004efef8 mov dword ptr [eax + 0x74], edx */ { const u32 m_ = (u32)(eax + 0x74u); M32(m_) = (u32)(edx); }
  /* 004efefb mov dword ptr [eax + 0x7c], edx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(edx); }
  /* 004efefe mov dword ptr [eax + 0x84], edx */ { const u32 m_ = (u32)(eax + 0x84u); M32(m_) = (u32)(edx); }
  /* 004eff04 mov dword ptr [eax + 0x5c], ecx */ { const u32 m_ = (u32)(eax + 0x5cu); M32(m_) = (u32)(ecx); }
  /* 004eff07 mov dword ptr [eax + 0x60], ecx */ { const u32 m_ = (u32)(eax + 0x60u); M32(m_) = (u32)(ecx); }
  /* 004eff0a mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 004eff0d mov dword ptr [eax + 0x64], ecx */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(ecx); }
  /* 004eff10 mov byte ptr [eax + 0x8c], cl */ { const u32 m_ = (u32)(eax + 0x8cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004eff16 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 004eff19 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eff1a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eff1b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004eff20(CPU *c) {
  NATIVE_HOOK(0x4eff20u) REGS; LOADALL;
L_004eff20:;
  /* 004eff20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004eff21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004eff23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eff24 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004eff26 call 0x4eff50 */ esp -= 4; M32(esp) = 0x4eff2bu; SAVEALL; F_004eff50(c); ABI_CHECK(0x4eff50u, 0x4eff26u); RETCHK(0x4eff2bu, 0x4eff26u); LOADALL;
  /* 004eff2b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004eff2f je 0x4eff3a */ if (ZF_) goto L_004eff3a;
  /* 004eff31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004eff32 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4eff37u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4eff32u); RETCHK(0x4eff37u, 0x4eff32u); LOADALL;
  /* 004eff37 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004eff3a:;
  /* 004eff3a mov eax, esi */ { eax = (u32)(esi); }
  /* 004eff3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004eff3d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eff3e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004eff50(CPU *c) {
  NATIVE_HOOK(0x4eff50u) REGS; LOADALL;
L_004eff50:;
  /* 004eff50 mov dword ptr [ecx], 0x64efdc */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64efdcu); }
  /* 004eff56 jmp 0x4ee0c0 */ SAVEALL; F_004ee0c0(c); return;
}

void F_004eff60(CPU *c) {
  NATIVE_HOOK(0x4eff60u) REGS; LOADALL;
L_004eff60:;
  /* 004eff60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004eff61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004eff63 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eff66 fld dword ptr [0x7a7fd0] */ { const u32 m_ = (u32)(0x7a7fd0u); FPUSH((double)MF32(m_)); }
  /* 004eff6c mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004eff6f fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eff72 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004eff75 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004eff76 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004eff77 fptan */ ST(0) = m_tan(ST(0)); FPUSH(1.0); c->fsw &= ~0x400u;
  /* 004eff79 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004eff7b fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eff7e fild dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); FPUSH((double)(s32)M32(m_)); }
  /* 004eff81 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004eff84 fidiv dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 004eff87 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004eff8a call 0x5afe00 */ esp -= 4; M32(esp) = 0x4eff8fu; SAVEALL; F_005afe00(c); ABI_CHECK(0x5afe00u, 0x4eff8au); RETCHK(0x4eff8fu, 0x4eff8au); LOADALL;
  /* 004eff8f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004eff92 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004eff94 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004eff95 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004effa0(CPU *c) {
  NATIVE_HOOK(0x4effa0u) REGS; LOADALL;
L_004effa0:;
  /* 004effa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004effa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004effa3 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004effa6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004effa9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004effab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004effac mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004effae je 0x4effbc */ if (ZF_) goto L_004effbc;
  /* 004effb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004effb1 call 0x5ab540 */ esp -= 4; M32(esp) = 0x4effb6u; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x4effb1u); RETCHK(0x4effb6u, 0x4effb1u); LOADALL;
  /* 004effb6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004effb9 mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
L_004effbc:;
  /* 004effbc mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 004effbf test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004effc1 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 004effc4 mov byte ptr [esi + 0x8c], al */ { const u32 m_ = (u32)(esi + 0x8cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004effca mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004effcd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004effcf mov byte ptr [esi + 0x8d], 0 */ { const u32 m_ = (u32)(esi + 0x8du); M8(m_) = (u8)(0x0u); }
  /* 004effd6 mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 004effd9 je 0x4f0021 */ if (ZF_) goto L_004f0021;
  /* 004effdb fild dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 004effde mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004effe1 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 004effe4 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 004effe7 mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 004effea fstp dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004effed fild dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 004efff0 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 004efff3 mov edx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); edx = (u32)(M32(m_)); }
  /* 004efff6 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 004efff9 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 004efffc fstp dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004effff mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f0002 mov eax, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f0005 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f0008 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f000a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f000c lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004f000f mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 004f0012 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0013 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f0015 call 0x4ee000 */ esp -= 4; M32(esp) = 0x4f001au; SAVEALL; F_004ee000(c); ABI_CHECK(0x4ee000u, 0x4f0015u); RETCHK(0x4f001au, 0x4f0015u); LOADALL;
  /* 004f001a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f001b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f001d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f001e ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_004f0021:;
  /* 004f0021 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f0023 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f0024 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f0026 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f0027 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_004f0001(CPU *c) {
  NATIVE_HOOK(0x4f0001u) REGS; LOADALL;
L_004f0001:;
  /* 004f0001 cld */ c->df = 0;
  /* 004f0002 mov eax, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f0005 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f0008 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f000a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f000c lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004f000f mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 004f0012 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0013 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f0015 call 0x4ee000 */ esp -= 4; M32(esp) = 0x4f001au; SAVEALL; F_004ee000(c); ABI_CHECK(0x4ee000u, 0x4f0015u); RETCHK(0x4f001au, 0x4f0015u); LOADALL;
  /* 004f001a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f001b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f001d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f001e ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_004f0004(CPU *c) {
  NATIVE_HOOK(0x4f0004u) REGS; LOADALL;
L_004f0004:;
  /* 004f0004 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 004f0005 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f0008 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f000a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f000c lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004f000f mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 004f0012 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0013 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f0015 call 0x4ee000 */ esp -= 4; M32(esp) = 0x4f001au; SAVEALL; F_004ee000(c); ABI_CHECK(0x4ee000u, 0x4f0015u); RETCHK(0x4f001au, 0x4f0015u); LOADALL;
  /* 004f001a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f001b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f001d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f001e ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_004f0030(CPU *c) {
  NATIVE_HOOK(0x4f0030u) REGS; LOADALL;
L_004f0030:;
  /* 004f0030 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f0031 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f0033 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 004f0036 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0038 je 0x4f004a */ if (ZF_) goto L_004f004a;
  /* 004f003a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f003b call 0x5ab020 */ esp -= 4; M32(esp) = 0x4f0040u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x4f003bu); RETCHK(0x4f0040u, 0x4f003bu); LOADALL;
  /* 004f0040 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0043 mov dword ptr [esi + 0x4c], 0 */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(0x0u); }
L_004f004a:;
  /* 004f004a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f004c call 0x4ee0d0 */ esp -= 4; M32(esp) = 0x4f0051u; SAVEALL; F_004ee0d0(c); ABI_CHECK(0x4ee0d0u, 0x4f004cu); RETCHK(0x4f0051u, 0x4f004cu); LOADALL;
  /* 004f0051 mov dword ptr [esi + 0x50], 0 */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 004f0058 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f0059 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f0060(CPU *c) {
  NATIVE_HOOK(0x4f0060u) REGS; LOADALL;
L_004f0060:;
  /* 004f0060 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f0061 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f0063 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0066 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f0067 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f0068 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f006a mov ecx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ecx = (u32)(M32(m_)); }
  /* 004f006d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f006f test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f0072 je 0x4f00a7 */ if (ZF_) goto L_004f00a7;
  /* 004f0074 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f0077 fmul dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f007d fadd dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f0080 fst dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); MF32(m_) = (float)ST(0); }
  /* 004f0083 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f0089 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f008b test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f008e jp 0x4f0093 */ if (PF_) goto L_004f0093;
  /* 004f0090 mov dword ptr [esi + 0x7c], ebx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(ebx); }
L_004f0093:;
  /* 004f0093 fild dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)(s32)M32(m_)); }
  /* 004f0096 fcom dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f0099 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f009b test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f009e jp 0x4f00a5 */ if (PF_) goto L_004f00a5;
  /* 004f00a0 fstp dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f00a3 jmp 0x4f00a7 */ goto L_004f00a7;
L_004f00a5:;
  /* 004f00a5 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f00a7:;
  /* 004f00a7 test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00aa je 0x4f00ee */ if (ZF_) goto L_004f00ee;
  /* 004f00ac fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f00af fmul dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f00b5 fadd dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f00bb fst dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); MF32(m_) = (float)ST(0); }
  /* 004f00c1 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f00c7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f00c9 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00cc jp 0x4f00d4 */ if (PF_) goto L_004f00d4;
  /* 004f00ce mov dword ptr [esi + 0x80], ebx */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(ebx); }
L_004f00d4:;
  /* 004f00d4 fild dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)(s32)M32(m_)); }
  /* 004f00d7 fcom dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f00dd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f00df test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00e2 jp 0x4f00ec */ if (PF_) goto L_004f00ec;
  /* 004f00e4 fstp dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f00ea jmp 0x4f00ee */ goto L_004f00ee;
L_004f00ec:;
  /* 004f00ec fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f00ee:;
  /* 004f00ee cmp dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f00f1 je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f00f7 test cl, 3 */ { u32 a_ = (ecx & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00fa je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f00fc fld dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); FPUSH((double)MF32(m_)); }
  /* 004f00ff fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f0105 fsubr dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f0108 call 0x61b154 */ esp -= 4; M32(esp) = 0x4f010du; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f0108u); RETCHK(0x4f010du, 0x4f0108u); LOADALL;
  /* 004f010d fld dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); FPUSH((double)MF32(m_)); }
  /* 004f0113 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f0119 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f011c fsubr dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f011f call 0x61b154 */ esp -= 4; M32(esp) = 0x4f0124u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f011fu); RETCHK(0x4f0124u, 0x4f011fu); LOADALL;
  /* 004f0124 fld dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); FPUSH((double)MF32(m_)); }
  /* 004f0127 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f012a call 0x61b154 */ esp -= 4; M32(esp) = 0x4f012fu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f012au); RETCHK(0x4f012fu, 0x4f012au); LOADALL;
  /* 004f012f fld dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); FPUSH((double)MF32(m_)); }
  /* 004f0135 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f0138 call 0x61b154 */ esp -= 4; M32(esp) = 0x4f013du; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f0138u); RETCHK(0x4f013du, 0x4f0138u); LOADALL;
  /* 004f013d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f0140 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0142 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f0145 je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f0147 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004f014a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f014c je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f014e mov eax, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f0151 mov ecx, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); ecx = (u32)(M32(m_)); }
  /* 004f0154 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f0157 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0158 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0159 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f015a call 0x5ab1d0 */ esp -= 4; M32(esp) = 0x4f015fu; SAVEALL; F_005ab1d0(c); ABI_CHECK(0x5ab1d0u, 0x4f015au); RETCHK(0x4f015fu, 0x4f015au); LOADALL;
  /* 004f015f mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004f0162 mov ecx, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f0165 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f0168 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0169 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f016c mov eax, dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f016f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0170 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0171 call 0x5ab1d0 */ esp -= 4; M32(esp) = 0x4f0176u; SAVEALL; F_005ab1d0(c); ABI_CHECK(0x5ab1d0u, 0x4f0171u); RETCHK(0x4f0176u, 0x4f0171u); LOADALL;
  /* 004f0176 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0179:;
  /* 004f0179 cmp dword ptr [esi + 0x54], 4 */ { const u32 m_ = (u32)(esi + 0x54u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f017d jne 0x4f01a6 */ if (!ZF_) goto L_004f01a6;
  /* 004f017f fld dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); FPUSH((double)MF32(m_)); }
  /* 004f0182 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f0185 fst dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); MF32(m_) = (float)ST(0); }
  /* 004f0188 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f018e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f0190 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f0193 jp 0x4f01a6 */ if (PF_) goto L_004f01a6;
  /* 004f0195 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 004f019a mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 004f019f mov eax, esi */ { eax = (u32)(esi); }
  /* 004f01a1 call 0x4f0300 */ esp -= 4; M32(esp) = 0x4f01a6u; SAVEALL; F_004f0300(c); ABI_CHECK(0x4f0300u, 0x4f01a1u); RETCHK(0x4f01a6u, 0x4f01a1u); LOADALL;
L_004f01a6:;
  /* 004f01a6 cmp byte ptr [esi + 0x8d], bl */ { const u32 m_ = (u32)(esi + 0x8du); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004f01ac jne 0x4f01b7 */ if (!ZF_) goto L_004f01b7;
  /* 004f01ae fld dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); FPUSH((double)MF32(m_)); }
  /* 004f01b1 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f01b4 fstp dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f01b7:;
  /* 004f01b7 fld dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); FPUSH((double)MF32(m_)); }
  /* 004f01ba fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f01c0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f01c2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f01c5 jp 0x4f0217 */ if (PF_) goto L_004f0217;
  /* 004f01c7 cmp dword ptr [esi + 0x58], ebx */ { const u32 m_ = (u32)(esi + 0x58u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f01ca jne 0x4f01ea */ if (!ZF_) goto L_004f01ea;
  /* 004f01cc fild dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)(s32)M32(m_)); }
  /* 004f01cf mov ecx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f01d2 mov dword ptr [esi + 0x54], 4 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x4u); }
  /* 004f01d9 mov dword ptr [esi + 0x6c], ecx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 004f01dc fstp dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f01df fild dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)(s32)M32(m_)); }
  /* 004f01e2 fstp dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f01e8 jmp 0x4f020a */ goto L_004f020a;
L_004f01ea:;
  /* 004f01ea mov edx, dword ptr [0x63f7fc] */ { const u32 m_ = (u32)(0x63f7fcu); edx = (u32)(M32(m_)); }
  /* 004f01f0 mov eax, dword ptr [0x63f800] */ { const u32 m_ = (u32)(0x63f800u); eax = (u32)(M32(m_)); }
  /* 004f01f5 mov dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(ebx); }
  /* 004f01f8 mov dword ptr [esi + 0x7c], edx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(edx); }
  /* 004f01fb mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f0201 mov dword ptr [esi + 0x5c], ebx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 004f0204 mov dword ptr [esi + 0x60], ebx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ebx); }
  /* 004f0207 mov dword ptr [esi + 0x64], ebx */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(ebx); }
L_004f020a:;
  /* 004f020a mov ecx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ecx = (u32)(M32(m_)); }
  /* 004f020d mov dword ptr [esi + 0x58], ecx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ecx); }
  /* 004f0210 mov dword ptr [esi + 0x70], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(0x7f7fffffu); }
L_004f0217:;
  /* 004f0217 cmp dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f021a je 0x4f0237 */ if (ZF_) goto L_004f0237;
  /* 004f021c mov edx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 004f021f mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f0222 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004f0225 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 004f0228 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f022b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f022c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f022d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f022f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f0232 call 0x4ee110 */ esp -= 4; M32(esp) = 0x4f0237u; SAVEALL; F_004ee110(c); ABI_CHECK(0x4ee110u, 0x4f0232u); RETCHK(0x4f0237u, 0x4f0232u); LOADALL;
L_004f0237:;
  /* 004f0237 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f0238 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f0239 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f023b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f023c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f006e(CPU *c) {
  NATIVE_HOOK(0x4f006eu) REGS; LOADALL;
  goto L_004f006e;
L_004f005a:;
  /* 004f005a int3 */ TRAP(0x4f005au, "int3");
L_004f005c:;
  /* 004f005c int3 */ TRAP(0x4f005cu, "int3");
L_004f006e:;
  /* 004f006e fcomi st(6) */ { u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), ST(6)); SETRAW(e_); }
  /* 004f0070 rol dword ptr [ecx], 0x74 */ { const u32 m_ = (u32)(ecx); u32 n_ = (116u) & 31u; if (n_) { u32 a_ = M32(m_); u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ << k_) | (a_ >> (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = r_ & 1u; u32 of_ = ((r_ >> 31) & 1u) ^ (r_ & 1u); u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); M32(m_) = (u32)(r_); } }
  /* 004f0073 xor ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f0075 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f0076 or al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f0078 mov es, word ptr [eax + eax + 0x46d80000] */ TRAP(0x4f0078u, "unimpl mov es, word ptr [eax + eax + 0x46d80000]");
  /* 004f007f jl 0x4f005a */ if (LT_) goto L_004f005a;
  /* 004f0081 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f0082 jl 0x4f005c */ if (LT_) goto L_004f005c;
  /* 004f0084 sbb eax, 0x656d88 */ { u32 a_ = eax, b_ = 0x656d88u; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 004f0089 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f008b test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f008e jp 0x4f0093 */ if (PF_) goto L_004f0093;
  /* 004f0090 mov dword ptr [esi + 0x7c], ebx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(ebx); }
L_004f0093:;
  /* 004f0093 fild dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)(s32)M32(m_)); }
  /* 004f0096 fcom dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f0099 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f009b test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f009e jp 0x4f00a5 */ if (PF_) goto L_004f00a5;
  /* 004f00a0 fstp dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f00a3 jmp 0x4f00a7 */ goto L_004f00a7;
L_004f00a5:;
  /* 004f00a5 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f00a7:;
  /* 004f00a7 test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00aa je 0x4f00ee */ if (ZF_) goto L_004f00ee;
  /* 004f00ac fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f00af fmul dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f00b5 fadd dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f00bb fst dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); MF32(m_) = (float)ST(0); }
  /* 004f00c1 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f00c7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f00c9 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00cc jp 0x4f00d4 */ if (PF_) goto L_004f00d4;
  /* 004f00ce mov dword ptr [esi + 0x80], ebx */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(ebx); }
L_004f00d4:;
  /* 004f00d4 fild dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)(s32)M32(m_)); }
  /* 004f00d7 fcom dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f00dd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f00df test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00e2 jp 0x4f00ec */ if (PF_) goto L_004f00ec;
  /* 004f00e4 fstp dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f00ea jmp 0x4f00ee */ goto L_004f00ee;
L_004f00ec:;
  /* 004f00ec fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f00ee:;
  /* 004f00ee cmp dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f00f1 je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f00f7 test cl, 3 */ { u32 a_ = (ecx & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00fa je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f00fc fld dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); FPUSH((double)MF32(m_)); }
  /* 004f00ff fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f0105 fsubr dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f0108 call 0x61b154 */ esp -= 4; M32(esp) = 0x4f010du; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f0108u); RETCHK(0x4f010du, 0x4f0108u); LOADALL;
  /* 004f010d fld dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); FPUSH((double)MF32(m_)); }
  /* 004f0113 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f0119 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f011c fsubr dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f011f call 0x61b154 */ esp -= 4; M32(esp) = 0x4f0124u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f011fu); RETCHK(0x4f0124u, 0x4f011fu); LOADALL;
  /* 004f0124 fld dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); FPUSH((double)MF32(m_)); }
  /* 004f0127 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f012a call 0x61b154 */ esp -= 4; M32(esp) = 0x4f012fu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f012au); RETCHK(0x4f012fu, 0x4f012au); LOADALL;
  /* 004f012f fld dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); FPUSH((double)MF32(m_)); }
  /* 004f0135 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f0138 call 0x61b154 */ esp -= 4; M32(esp) = 0x4f013du; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f0138u); RETCHK(0x4f013du, 0x4f0138u); LOADALL;
  /* 004f013d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f0140 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0142 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f0145 je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f0147 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004f014a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f014c je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f014e mov eax, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f0151 mov ecx, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); ecx = (u32)(M32(m_)); }
  /* 004f0154 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f0157 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0158 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0159 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f015a call 0x5ab1d0 */ esp -= 4; M32(esp) = 0x4f015fu; SAVEALL; F_005ab1d0(c); ABI_CHECK(0x5ab1d0u, 0x4f015au); RETCHK(0x4f015fu, 0x4f015au); LOADALL;
  /* 004f015f mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004f0162 mov ecx, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f0165 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f0168 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0169 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f016c mov eax, dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f016f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0170 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0171 call 0x5ab1d0 */ esp -= 4; M32(esp) = 0x4f0176u; SAVEALL; F_005ab1d0(c); ABI_CHECK(0x5ab1d0u, 0x4f0171u); RETCHK(0x4f0176u, 0x4f0171u); LOADALL;
  /* 004f0176 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0179:;
  /* 004f0179 cmp dword ptr [esi + 0x54], 4 */ { const u32 m_ = (u32)(esi + 0x54u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f017d jne 0x4f01a6 */ if (!ZF_) goto L_004f01a6;
  /* 004f017f fld dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); FPUSH((double)MF32(m_)); }
  /* 004f0182 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f0185 fst dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); MF32(m_) = (float)ST(0); }
  /* 004f0188 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f018e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f0190 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f0193 jp 0x4f01a6 */ if (PF_) goto L_004f01a6;
  /* 004f0195 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 004f019a mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 004f019f mov eax, esi */ { eax = (u32)(esi); }
  /* 004f01a1 call 0x4f0300 */ esp -= 4; M32(esp) = 0x4f01a6u; SAVEALL; F_004f0300(c); ABI_CHECK(0x4f0300u, 0x4f01a1u); RETCHK(0x4f01a6u, 0x4f01a1u); LOADALL;
L_004f01a6:;
  /* 004f01a6 cmp byte ptr [esi + 0x8d], bl */ { const u32 m_ = (u32)(esi + 0x8du); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004f01ac jne 0x4f01b7 */ if (!ZF_) goto L_004f01b7;
  /* 004f01ae fld dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); FPUSH((double)MF32(m_)); }
  /* 004f01b1 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f01b4 fstp dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f01b7:;
  /* 004f01b7 fld dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); FPUSH((double)MF32(m_)); }
  /* 004f01ba fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f01c0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f01c2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f01c5 jp 0x4f0217 */ if (PF_) goto L_004f0217;
  /* 004f01c7 cmp dword ptr [esi + 0x58], ebx */ { const u32 m_ = (u32)(esi + 0x58u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f01ca jne 0x4f01ea */ if (!ZF_) goto L_004f01ea;
  /* 004f01cc fild dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)(s32)M32(m_)); }
  /* 004f01cf mov ecx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f01d2 mov dword ptr [esi + 0x54], 4 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x4u); }
  /* 004f01d9 mov dword ptr [esi + 0x6c], ecx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 004f01dc fstp dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f01df fild dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)(s32)M32(m_)); }
  /* 004f01e2 fstp dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f01e8 jmp 0x4f020a */ goto L_004f020a;
L_004f01ea:;
  /* 004f01ea mov edx, dword ptr [0x63f7fc] */ { const u32 m_ = (u32)(0x63f7fcu); edx = (u32)(M32(m_)); }
  /* 004f01f0 mov eax, dword ptr [0x63f800] */ { const u32 m_ = (u32)(0x63f800u); eax = (u32)(M32(m_)); }
  /* 004f01f5 mov dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(ebx); }
  /* 004f01f8 mov dword ptr [esi + 0x7c], edx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(edx); }
  /* 004f01fb mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f0201 mov dword ptr [esi + 0x5c], ebx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 004f0204 mov dword ptr [esi + 0x60], ebx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ebx); }
  /* 004f0207 mov dword ptr [esi + 0x64], ebx */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(ebx); }
L_004f020a:;
  /* 004f020a mov ecx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ecx = (u32)(M32(m_)); }
  /* 004f020d mov dword ptr [esi + 0x58], ecx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ecx); }
  /* 004f0210 mov dword ptr [esi + 0x70], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(0x7f7fffffu); }
L_004f0217:;
  /* 004f0217 cmp dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f021a je 0x4f0237 */ if (ZF_) goto L_004f0237;
  /* 004f021c mov edx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 004f021f mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f0222 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004f0225 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 004f0228 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f022b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f022c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f022d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f022f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f0232 call 0x4ee110 */ esp -= 4; M32(esp) = 0x4f0237u; SAVEALL; F_004ee110(c); ABI_CHECK(0x4ee110u, 0x4f0232u); RETCHK(0x4f0237u, 0x4f0232u); LOADALL;
L_004f0237:;
  /* 004f0237 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f0238 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f0239 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f023b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f023c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f0080(CPU *c) {
  NATIVE_HOOK(0x4f0080u) REGS; LOADALL;
L_004f0080:;
  /* 004f0080 fst dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); MF32(m_) = (float)ST(0); }
  /* 004f0083 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f0089 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f008b test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f008e jp 0x4f0093 */ if (PF_) goto L_004f0093;
  /* 004f0090 mov dword ptr [esi + 0x7c], ebx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(ebx); }
L_004f0093:;
  /* 004f0093 fild dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)(s32)M32(m_)); }
  /* 004f0096 fcom dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f0099 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f009b test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f009e jp 0x4f00a5 */ if (PF_) goto L_004f00a5;
  /* 004f00a0 fstp dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f00a3 jmp 0x4f00a7 */ goto L_004f00a7;
L_004f00a5:;
  /* 004f00a5 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f00a7:;
  /* 004f00a7 test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00aa je 0x4f00ee */ if (ZF_) goto L_004f00ee;
  /* 004f00ac fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f00af fmul dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f00b5 fadd dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f00bb fst dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); MF32(m_) = (float)ST(0); }
  /* 004f00c1 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f00c7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f00c9 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00cc jp 0x4f00d4 */ if (PF_) goto L_004f00d4;
  /* 004f00ce mov dword ptr [esi + 0x80], ebx */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(ebx); }
L_004f00d4:;
  /* 004f00d4 fild dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)(s32)M32(m_)); }
  /* 004f00d7 fcom dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f00dd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f00df test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00e2 jp 0x4f00ec */ if (PF_) goto L_004f00ec;
  /* 004f00e4 fstp dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f00ea jmp 0x4f00ee */ goto L_004f00ee;
L_004f00ec:;
  /* 004f00ec fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f00ee:;
  /* 004f00ee cmp dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f00f1 je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f00f7 test cl, 3 */ { u32 a_ = (ecx & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f00fa je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f00fc fld dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); FPUSH((double)MF32(m_)); }
  /* 004f00ff fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f0105 fsubr dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f0108 call 0x61b154 */ esp -= 4; M32(esp) = 0x4f010du; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f0108u); RETCHK(0x4f010du, 0x4f0108u); LOADALL;
  /* 004f010d fld dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); FPUSH((double)MF32(m_)); }
  /* 004f0113 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f0119 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f011c fsubr dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f011f call 0x61b154 */ esp -= 4; M32(esp) = 0x4f0124u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f011fu); RETCHK(0x4f0124u, 0x4f011fu); LOADALL;
  /* 004f0124 fld dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); FPUSH((double)MF32(m_)); }
  /* 004f0127 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f012a call 0x61b154 */ esp -= 4; M32(esp) = 0x4f012fu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f012au); RETCHK(0x4f012fu, 0x4f012au); LOADALL;
  /* 004f012f fld dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); FPUSH((double)MF32(m_)); }
  /* 004f0135 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f0138 call 0x61b154 */ esp -= 4; M32(esp) = 0x4f013du; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f0138u); RETCHK(0x4f013du, 0x4f0138u); LOADALL;
  /* 004f013d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f0140 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0142 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f0145 je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f0147 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004f014a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f014c je 0x4f0179 */ if (ZF_) goto L_004f0179;
  /* 004f014e mov eax, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f0151 mov ecx, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); ecx = (u32)(M32(m_)); }
  /* 004f0154 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f0157 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0158 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0159 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f015a call 0x5ab1d0 */ esp -= 4; M32(esp) = 0x4f015fu; SAVEALL; F_005ab1d0(c); ABI_CHECK(0x5ab1d0u, 0x4f015au); RETCHK(0x4f015fu, 0x4f015au); LOADALL;
  /* 004f015f mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004f0162 mov ecx, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f0165 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f0168 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0169 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f016c mov eax, dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f016f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0170 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0171 call 0x5ab1d0 */ esp -= 4; M32(esp) = 0x4f0176u; SAVEALL; F_005ab1d0(c); ABI_CHECK(0x5ab1d0u, 0x4f0171u); RETCHK(0x4f0176u, 0x4f0171u); LOADALL;
  /* 004f0176 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0179:;
  /* 004f0179 cmp dword ptr [esi + 0x54], 4 */ { const u32 m_ = (u32)(esi + 0x54u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f017d jne 0x4f01a6 */ if (!ZF_) goto L_004f01a6;
  /* 004f017f fld dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); FPUSH((double)MF32(m_)); }
  /* 004f0182 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f0185 fst dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); MF32(m_) = (float)ST(0); }
  /* 004f0188 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f018e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f0190 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f0193 jp 0x4f01a6 */ if (PF_) goto L_004f01a6;
  /* 004f0195 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 004f019a mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 004f019f mov eax, esi */ { eax = (u32)(esi); }
  /* 004f01a1 call 0x4f0300 */ esp -= 4; M32(esp) = 0x4f01a6u; SAVEALL; F_004f0300(c); ABI_CHECK(0x4f0300u, 0x4f01a1u); RETCHK(0x4f01a6u, 0x4f01a1u); LOADALL;
L_004f01a6:;
  /* 004f01a6 cmp byte ptr [esi + 0x8d], bl */ { const u32 m_ = (u32)(esi + 0x8du); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004f01ac jne 0x4f01b7 */ if (!ZF_) goto L_004f01b7;
  /* 004f01ae fld dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); FPUSH((double)MF32(m_)); }
  /* 004f01b1 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f01b4 fstp dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f01b7:;
  /* 004f01b7 fld dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); FPUSH((double)MF32(m_)); }
  /* 004f01ba fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f01c0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f01c2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f01c5 jp 0x4f0217 */ if (PF_) goto L_004f0217;
  /* 004f01c7 cmp dword ptr [esi + 0x58], ebx */ { const u32 m_ = (u32)(esi + 0x58u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f01ca jne 0x4f01ea */ if (!ZF_) goto L_004f01ea;
  /* 004f01cc fild dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)(s32)M32(m_)); }
  /* 004f01cf mov ecx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f01d2 mov dword ptr [esi + 0x54], 4 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x4u); }
  /* 004f01d9 mov dword ptr [esi + 0x6c], ecx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 004f01dc fstp dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f01df fild dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)(s32)M32(m_)); }
  /* 004f01e2 fstp dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f01e8 jmp 0x4f020a */ goto L_004f020a;
L_004f01ea:;
  /* 004f01ea mov edx, dword ptr [0x63f7fc] */ { const u32 m_ = (u32)(0x63f7fcu); edx = (u32)(M32(m_)); }
  /* 004f01f0 mov eax, dword ptr [0x63f800] */ { const u32 m_ = (u32)(0x63f800u); eax = (u32)(M32(m_)); }
  /* 004f01f5 mov dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(ebx); }
  /* 004f01f8 mov dword ptr [esi + 0x7c], edx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(edx); }
  /* 004f01fb mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f0201 mov dword ptr [esi + 0x5c], ebx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 004f0204 mov dword ptr [esi + 0x60], ebx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ebx); }
  /* 004f0207 mov dword ptr [esi + 0x64], ebx */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(ebx); }
L_004f020a:;
  /* 004f020a mov ecx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ecx = (u32)(M32(m_)); }
  /* 004f020d mov dword ptr [esi + 0x58], ecx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ecx); }
  /* 004f0210 mov dword ptr [esi + 0x70], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(0x7f7fffffu); }
L_004f0217:;
  /* 004f0217 cmp dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f021a je 0x4f0237 */ if (ZF_) goto L_004f0237;
  /* 004f021c mov edx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 004f021f mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f0222 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004f0225 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 004f0228 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f022b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f022c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f022d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f022f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f0232 call 0x4ee110 */ esp -= 4; M32(esp) = 0x4f0237u; SAVEALL; F_004ee110(c); ABI_CHECK(0x4ee110u, 0x4f0232u); RETCHK(0x4f0237u, 0x4f0232u); LOADALL;
L_004f0237:;
  /* 004f0237 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f0238 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f0239 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f023b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f023c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f0240(CPU *c) {
  NATIVE_HOOK(0x4f0240u) REGS; LOADALL;
L_004f0240:;
  /* 004f0240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f0241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f0243 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0246 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 004f0249 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f024b je 0x4f0280 */ if (ZF_) goto L_004f0280;
  /* 004f024d cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0250 je 0x4f02e0 */ if (ZF_) goto L_004f02e0;
  /* 004f0256 fld dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); FPUSH((double)MF32(m_)); }
  /* 004f025c fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f0262 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f0264 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f0267 je 0x4f02f9 */ if (ZF_) goto L_004f02f9;
  /* 004f026d fld dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); FPUSH((double)MF32(m_)); }
  /* 004f0273 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f0279 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f027b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f027e je 0x4f02f9 */ if (ZF_) goto L_004f02f9;
L_004f0280:;
  /* 004f0280 fild dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)(s32)M32(m_)); }
  /* 004f0283 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f0286 mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 004f0289 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f028c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f028e fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f0290 fsub dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f0293 mov dword ptr [esi + 0x5c], edx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(edx); }
  /* 004f0296 mov dword ptr [esi + 0x60], ecx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ecx); }
  /* 004f0299 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f029c fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 004f029e fstp dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f02a1 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004f02a4 fdivr st(1) */ ST(0) = FR(ST(1) / ST(0));
  /* 004f02a6 fst dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); MF32(m_) = (float)ST(0); }
  /* 004f02ac fild dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)(s32)M32(m_)); }
  /* 004f02af fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f02b1 fdiv st(2) */ ST(0) = FR(ST(0) / ST(2));
  /* 004f02b3 fstp dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f02b9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f02bb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f02bd je 0x4f02f3 */ if (ZF_) goto L_004f02f3;
  /* 004f02bf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f02c1 je 0x4f02ec */ if (ZF_) goto L_004f02ec;
  /* 004f02c3 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004f02c6 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 004f02c9 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f02cb mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 004f02ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f02cf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f02d1 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f02d4u; SAVEALL; call_ind(c, t_); RETCHK(0x4f02d4u, 0x4f02d1u); LOADALL; }
  /* 004f02d4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f02d7 mov dword ptr [esi + 0x64], ecx */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(ecx); }
  /* 004f02da mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f02dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f02dd ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004f02e0:;
  /* 004f02e0 mov eax, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f02e3 mov dword ptr [esi + 0x6c], eax */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(eax); }
  /* 004f02e6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f02e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f02e9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004f02ec:;
  /* 004f02ec mov eax, esi */ { eax = (u32)(esi); }
  /* 004f02ee call 0x4ee950 */ esp -= 4; M32(esp) = 0x4f02f3u; SAVEALL; F_004ee950(c); ABI_CHECK(0x4ee950u, 0x4f02eeu); RETCHK(0x4f02f3u, 0x4f02eeu); LOADALL;
L_004f02f3:;
  /* 004f02f3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f02f6 mov dword ptr [esi + 0x64], ecx */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(ecx); }
L_004f02f9:;
  /* 004f02f9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f02fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f02fc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004f0300(CPU *c) {
  NATIVE_HOOK(0x4f0300u) REGS; LOADALL;
L_004f0300:;
  /* 004f0300 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f0301 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f0303 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004f0309 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f030c fdiv dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004f030f mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 004f0312 mov dword ptr [eax + 0x54], edx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(edx); }
  /* 004f0315 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f0317 fmul dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f031a fchs */ ST(0) = -ST(0);
  /* 004f031c fstp dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0322 fmul dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f0328 fchs */ ST(0) = -ST(0);
  /* 004f032a fstp dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0330 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f0331 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f0340(CPU *c) {
  NATIVE_HOOK(0x4f0340u) REGS; LOADALL;
L_004f0340:;
  /* 004f0340 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f0341 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f0343 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0346 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004f034b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f034d mov edx, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); edx = (u32)(M32(m_)); }
  /* 004f0350 fild dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 004f0353 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0356 fild dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); FPUSH((double)(s32)M32(m_)); }
  /* 004f0359 fmul dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f035c fidiv dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 004f035f fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0362 fild dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); FPUSH((double)(s32)M32(m_)); }
  /* 004f0365 fmul dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f036b fidiv dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 004f036e fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0371 fld dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); FPUSH((double)MF32(m_)); }
  /* 004f0374 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f037a fsubr dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f037d fst dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); }
  /* 004f0380 fadd dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f0383 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0386 fld dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); FPUSH((double)MF32(m_)); }
  /* 004f038c fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f0392 fsubr dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f0395 fst dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); }
  /* 004f0398 fadd dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f039e fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f03a1 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f03a4 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f03aa fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f03ac test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f03af jp 0x4f03b8 */ if (PF_) goto L_004f03b8;
  /* 004f03b1 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
L_004f03b8:;
  /* 004f03b8 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f03bb fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f03be fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f03c0 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f03c3 jne 0x4f03cb */ if (!ZF_) goto L_004f03cb;
  /* 004f03c5 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f03c8 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_004f03cb:;
  /* 004f03cb mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f03ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f03d0 jne 0x4f0418 */ if (!ZF_) goto L_004f0418;
  /* 004f03d2 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f03d5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f03d7 je 0x4f0418 */ if (ZF_) goto L_004f0418;
  /* 004f03d9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f03da mov edi, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); edi = (u32)(M32(m_)); }
  /* 004f03dd mov al, byte ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f03e3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f03e5 je 0x4f03ee */ if (ZF_) goto L_004f03ee;
  /* 004f03e7 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f03e9 call 0x5450c0 */ esp -= 4; M32(esp) = 0x4f03eeu; SAVEALL; F_005450c0(c); ABI_CHECK(0x5450c0u, 0x4f03e9u); RETCHK(0x4f03eeu, 0x4f03e9u); LOADALL;
L_004f03ee:;
  /* 004f03ee mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f03f1 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004f03f4 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f03f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f03f8 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f03fa push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f03ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0401 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0403 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f0408 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0409 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004f040c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f040d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f040e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f040f call 0x4ee540 */ esp -= 4; M32(esp) = 0x4f0414u; SAVEALL; F_004ee540(c); ABI_CHECK(0x4ee540u, 0x4f040fu); RETCHK(0x4f0414u, 0x4f040fu); LOADALL;
  /* 004f0414 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0417 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004f0418:;
  /* 004f0418 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f041b fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f041e fst dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); }
  /* 004f0421 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004f0424 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f0427 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f042a fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f042d fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f0430 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0433 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f0436 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f0439 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f043c fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f0442 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f0444 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f0447 jp 0x4f0450 */ if (PF_) goto L_004f0450;
  /* 004f0449 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
L_004f0450:;
  /* 004f0450 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f0453 fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f0456 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f0458 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f045b jne 0x4f0463 */ if (!ZF_) goto L_004f0463;
  /* 004f045d mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 004f0460 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
L_004f0463:;
  /* 004f0463 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 004f0466 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f0469 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004f046c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f046d mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f0470 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0472 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f0477 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f047c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f047e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0480 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0481 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004f0484 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0485 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0486 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0487 call 0x4ee540 */ esp -= 4; M32(esp) = 0x4f048cu; SAVEALL; F_004ee540(c); ABI_CHECK(0x4ee540u, 0x4f0487u); RETCHK(0x4f048cu, 0x4f0487u); LOADALL;
  /* 004f048c add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f048f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f0491 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f0492 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f04a0(CPU *c) {
  NATIVE_HOOK(0x4f04a0u) REGS; LOADALL;
L_004f04a0:;
  /* 004f04a0 cmp ecx, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f04a3 jne 0x4f04d2 */ if (!ZF_) goto L_004f04d2;
  /* 004f04a5 mov edx, dword ptr [0x63f7fc] */ { const u32 m_ = (u32)(0x63f7fcu); edx = (u32)(M32(m_)); }
  /* 004f04ab xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f04ad mov dword ptr [eax + 0x7c], edx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(edx); }
  /* 004f04b0 mov edx, dword ptr [0x63f800] */ { const u32 m_ = (u32)(0x63f800u); edx = (u32)(M32(m_)); }
  /* 004f04b6 mov dword ptr [eax + 0x54], ecx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(ecx); }
  /* 004f04b9 mov dword ptr [eax + 0x58], ecx */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(ecx); }
  /* 004f04bc mov dword ptr [eax + 0x80], edx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(edx); }
  /* 004f04c2 mov dword ptr [eax + 0x5c], ecx */ { const u32 m_ = (u32)(eax + 0x5cu); M32(m_) = (u32)(ecx); }
  /* 004f04c5 mov dword ptr [eax + 0x60], ecx */ { const u32 m_ = (u32)(eax + 0x60u); M32(m_) = (u32)(ecx); }
  /* 004f04c8 mov dword ptr [eax + 0x64], ecx */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(ecx); }
  /* 004f04cb mov dword ptr [eax + 0x70], 0x7f7fffff */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(0x7f7fffffu); }
L_004f04d2:;
  /* 004f04d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f04e0(CPU *c) {
  NATIVE_HOOK(0x4f04e0u) REGS; LOADALL;
L_004f04e0:;
  /* 004f04e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f04e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f04e3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f04e9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f04eb push 0x61ca19 */ { u32 v_ = 0x61ca19u; esp -= 4; M32(esp) = v_; }
  /* 004f04f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f04f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f04f8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f04f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f04fa mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f04fd lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004f0500 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0501 mov dword ptr [esi], 0x64effc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64effcu); }
  /* 004f0507 call 0x548920 */ esp -= 4; M32(esp) = 0x4f050cu; SAVEALL; F_00548920(c); ABI_CHECK(0x548920u, 0x4f0507u); RETCHK(0x4f050cu, 0x4f0507u); LOADALL;
  /* 004f050c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f050e lea eax, [esi + 0x1dc] */ eax = (u32)((u32)(esi + 0x1dcu));
  /* 004f0514 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004f0517 call 0x4eabd0 */ esp -= 4; M32(esp) = 0x4f051cu; SAVEALL; F_004eabd0(c); ABI_CHECK(0x4eabd0u, 0x4f0517u); RETCHK(0x4f051cu, 0x4f0517u); LOADALL;
  /* 004f051c push 0x4f05f0 */ { u32 v_ = 0x4f05f0u; esp -= 4; M32(esp) = v_; }
  /* 004f0521 push 0x4f05c0 */ { u32 v_ = 0x4f05c0u; esp -= 4; M32(esp) = v_; }
  /* 004f0526 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f052b push 0x170 */ { u32 v_ = 0x170u; esp -= 4; M32(esp) = v_; }
  /* 004f0530 lea ecx, [esi + 0x22c] */ ecx = (u32)((u32)(esi + 0x22cu));
  /* 004f0536 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0537 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004f053b call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x4f0540u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x4f053bu); RETCHK(0x4f0540u, 0x4f053bu); LOADALL;
  /* 004f0540 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f0543 mov byte ptr [esi + 0xbab0], bl */ { const u32 m_ = (u32)(esi + 0xbab0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f0549 mov dword ptr [esi + 0x228], ebx */ { const u32 m_ = (u32)(esi + 0x228u); M32(m_) = (u32)(ebx); }
  /* 004f054f mov dword ptr [esi + 0xba9c], ebx */ { const u32 m_ = (u32)(esi + 0xba9cu); M32(m_) = (u32)(ebx); }
  /* 004f0555 mov dword ptr [esi + 0xbaa0], ebx */ { const u32 m_ = (u32)(esi + 0xbaa0u); M32(m_) = (u32)(ebx); }
  /* 004f055b mov byte ptr [esi + 0xbaa8], bl */ { const u32 m_ = (u32)(esi + 0xbaa8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f0561 mov byte ptr [esi + 0xba3c], bl */ { const u32 m_ = (u32)(esi + 0xba3cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f0567 mov dword ptr [esi + 0xba2c], 0xffffffff */ { const u32 m_ = (u32)(esi + 0xba2cu); M32(m_) = (u32)(0xffffffffu); }
  /* 004f0571 mov dword ptr [esi + 0xbaa4], 0x44480000 */ { const u32 m_ = (u32)(esi + 0xbaa4u); M32(m_) = (u32)(0x44480000u); }
  /* 004f057b mov eax, esi */ { eax = (u32)(esi); }
  /* 004f057d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f057e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f0585 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f0586 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f0588 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f0589 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f0590(CPU *c) {
  NATIVE_HOOK(0x4f0590u) REGS; LOADALL;
L_004f0590:;
  /* 004f0590 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f0591 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f0593 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f0594 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f0596 call 0x4f0640 */ esp -= 4; M32(esp) = 0x4f059bu; SAVEALL; F_004f0640(c); ABI_CHECK(0x4f0640u, 0x4f0596u); RETCHK(0x4f059bu, 0x4f0596u); LOADALL;
  /* 004f059b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f059f je 0x4f05aa */ if (ZF_) goto L_004f05aa;
  /* 004f05a1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f05a2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f05a7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f05a2u); RETCHK(0x4f05a7u, 0x4f05a2u); LOADALL;
  /* 004f05a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f05aa:;
  /* 004f05aa mov eax, esi */ { eax = (u32)(esi); }
  /* 004f05ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f05ad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f05ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f05c0(CPU *c) {
  NATIVE_HOOK(0x4f05c0u) REGS; LOADALL;
L_004f05c0:;
  /* 004f05c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f05c1 push 0x4f0610 */ { u32 v_ = 0x4f0610u; esp -= 4; M32(esp) = v_; }
  /* 004f05c6 push 0x4f1280 */ { u32 v_ = 0x4f1280u; esp -= 4; M32(esp) = v_; }
  /* 004f05cb push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004f05cd mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f05cf push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 004f05d1 lea eax, [esi + 0x104] */ eax = (u32)((u32)(esi + 0x104u));
  /* 004f05d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f05d8 call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x4f05ddu; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x4f05d8u); RETCHK(0x4f05ddu, 0x4f05d8u); LOADALL;
  /* 004f05dd mov eax, esi */ { eax = (u32)(esi); }
  /* 004f05df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f05e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f05f0(CPU *c) {
  NATIVE_HOOK(0x4f05f0u) REGS; LOADALL;
L_004f05f0:;
  /* 004f05f0 push 0x4f0610 */ { u32 v_ = 0x4f0610u; esp -= 4; M32(esp) = v_; }
  /* 004f05f5 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004f05f7 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 004f05f9 add ecx, 0x104 */ { u32 a_ = ecx, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f05ff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0600 call 0x5fe890 */ esp -= 4; M32(esp) = 0x4f0605u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x4f0600u); RETCHK(0x4f0605u, 0x4f0600u); LOADALL;
  /* 004f0605 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f0610(CPU *c) {
  NATIVE_HOOK(0x4f0610u) REGS; LOADALL;
L_004f0610:;
  /* 004f0610 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f0611 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f0613 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0614 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f0615 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f0617 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f061a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f061c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f061d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f061e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004f0621 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0622 call 0x4f12f0 */ esp -= 4; M32(esp) = 0x4f0627u; SAVEALL; F_004f12f0(c); ABI_CHECK(0x4f12f0u, 0x4f0622u); RETCHK(0x4f0627u, 0x4f0622u); LOADALL;
  /* 004f0627 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f062a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f062b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f0630u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f062bu); RETCHK(0x4f0630u, 0x4f062bu); LOADALL;
  /* 004f0630 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0633 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f0635 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f0638 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f063b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f063c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f063e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f063f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f0640(CPU *c) {
  NATIVE_HOOK(0x4f0640u) REGS; LOADALL;
L_004f0640:;
  /* 004f0640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f0641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f0643 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0645 push 0x61e199 */ { u32 v_ = 0x61e199u; esp -= 4; M32(esp) = v_; }
  /* 004f064a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f0650 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0651 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f0658 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0659 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f065a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f065c mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 004f065f mov dword ptr [esi], 0x64effc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64effcu); }
  /* 004f0665 push 0x4f05f0 */ { u32 v_ = 0x4f05f0u; esp -= 4; M32(esp) = v_; }
  /* 004f066a push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f066f push 0x170 */ { u32 v_ = 0x170u; esp -= 4; M32(esp) = v_; }
  /* 004f0674 lea eax, [esi + 0x22c] */ eax = (u32)((u32)(esi + 0x22cu));
  /* 004f067a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f067b mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 004f0682 call 0x5fe890 */ esp -= 4; M32(esp) = 0x4f0687u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x4f0682u); RETCHK(0x4f0687u, 0x4f0682u); LOADALL;
  /* 004f0687 lea ecx, [esi + 0x1dc] */ ecx = (u32)((u32)(esi + 0x1dcu));
  /* 004f068d call 0x4eac50 */ esp -= 4; M32(esp) = 0x4f0692u; SAVEALL; F_004eac50(c); ABI_CHECK(0x4eac50u, 0x4f068du); RETCHK(0x4f0692u, 0x4f068du); LOADALL;
  /* 004f0692 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 004f0695 call 0x548a40 */ esp -= 4; M32(esp) = 0x4f069au; SAVEALL; F_00548a40(c); ABI_CHECK(0x548a40u, 0x4f0695u); RETCHK(0x4f069au, 0x4f0695u); LOADALL;
  /* 004f069a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f069d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f069e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f06a5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f06a7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f06a8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f06b0(CPU *c) {
  NATIVE_HOOK(0x4f06b0u) REGS; LOADALL;
L_004f06b0:;
  /* 004f06b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f06b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f06b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f06b4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f06b6 mov byte ptr [edx + 0xbab0], 0 */ { const u32 m_ = (u32)(edx + 0xbab0u); M8(m_) = (u8)(0x0u); }
  /* 004f06bd mov dword ptr [edx + 0xba2c], esi */ { const u32 m_ = (u32)(edx + 0xba2cu); M32(m_) = (u32)(esi); }
  /* 004f06c3 lea edi, [edx + 0xba3c] */ edi = (u32)((u32)(edx + 0xba3cu));
  /* 004f06c9 mov ecx, 0x18 */ { ecx = (u32)(0x18u); }
  /* 004f06ce rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004f06d0 lea ecx, [edx + 0xba30] */ ecx = (u32)((u32)(edx + 0xba30u));
  /* 004f06d6 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004f06d8 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f06db mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f06de mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f06e1 mov dword ptr [edx + 0xbaac], eax */ { const u32 m_ = (u32)(edx + 0xbaacu); M32(m_) = (u32)(eax); }
  /* 004f06e7 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f06ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f06eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f06ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f06ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f06ee call 0x4f07b0 */ esp -= 4; M32(esp) = 0x4f06f3u; SAVEALL; F_004f07b0(c); ABI_CHECK(0x4f07b0u, 0x4f06eeu); RETCHK(0x4f06f3u, 0x4f06eeu); LOADALL;
  /* 004f06f3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f06f4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f06f5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004f0700(CPU *c) {
  NATIVE_HOOK(0x4f0700u) REGS; LOADALL;
L_004f0700:;
  /* 004f0700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f0701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f0703 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f0706 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f0707 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f070a lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 004f070d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f070e call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0711u; SAVEALL; call_ind(c, t_); RETCHK(0x4f0711u, 0x4f070eu); LOADALL; }
  /* 004f0711 mov edx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); edx = (u32)(M32(m_)); }
  /* 004f0717 lea ecx, [esi + 0x1dc] */ ecx = (u32)((u32)(esi + 0x1dcu));
  /* 004f071d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f071e call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0721u; SAVEALL; call_ind(c, t_); RETCHK(0x4f0721u, 0x4f071eu); LOADALL; }
  /* 004f0721 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f0722 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f0723 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f0730(CPU *c) {
  NATIVE_HOOK(0x4f0730u) REGS; LOADALL;
L_004f0730:;
  /* 004f0730 mov eax, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 004f0736 lea ecx, [edi + 0x1dc] */ ecx = (u32)((u32)(edi + 0x1dcu));
  /* 004f073c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f073d call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0740u; SAVEALL; call_ind(c, t_); RETCHK(0x4f0740u, 0x4f073du); LOADALL; }
  /* 004f0740 mov eax, dword ptr [edi + 0xbaa0] */ { const u32 m_ = (u32)(edi + 0xbaa0u); eax = (u32)(M32(m_)); }
  /* 004f0746 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f0748 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f074a je 0x4f075b */ if (ZF_) goto L_004f075b;
  /* 004f074c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f074d call 0x57e8e0 */ esp -= 4; M32(esp) = 0x4f0752u; SAVEALL; F_0057e8e0(c); ABI_CHECK(0x57e8e0u, 0x4f074du); RETCHK(0x4f0752u, 0x4f074du); LOADALL;
  /* 004f0752 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0755 mov dword ptr [edi + 0xbaa0], esi */ { const u32 m_ = (u32)(edi + 0xbaa0u); M32(m_) = (u32)(esi); }
L_004f075b:;
  /* 004f075b mov eax, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); eax = (u32)(M32(m_)); }
  /* 004f0761 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0763 je 0x4f0774 */ if (ZF_) goto L_004f0774;
  /* 004f0765 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0766 call 0x57e8e0 */ esp -= 4; M32(esp) = 0x4f076bu; SAVEALL; F_0057e8e0(c); ABI_CHECK(0x57e8e0u, 0x4f0766u); RETCHK(0x4f076bu, 0x4f0766u); LOADALL;
  /* 004f076b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f076e mov dword ptr [edi + 0x228], esi */ { const u32 m_ = (u32)(edi + 0x228u); M32(m_) = (u32)(esi); }
L_004f0774:;
  /* 004f0774 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f0777 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 004f077a call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f077du; SAVEALL; call_ind(c, t_); RETCHK(0x4f077du, 0x4f077au); LOADALL; }
  /* 004f077d mov eax, dword ptr [edi + 0xba2c] */ { const u32 m_ = (u32)(edi + 0xba2cu); eax = (u32)(M32(m_)); }
  /* 004f0783 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0786 je 0x4f079a */ if (ZF_) goto L_004f079a;
  /* 004f0788 imul eax, eax, 0x170 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x170u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f078e lea esi, [eax + edi + 0x22c] */ esi = (u32)((u32)(eax + edi + 0x22cu));
  /* 004f0795 call 0x5550f0 */ esp -= 4; M32(esp) = 0x4f079au; SAVEALL; F_005550f0(c); ABI_CHECK(0x5550f0u, 0x4f0795u); RETCHK(0x4f079au, 0x4f0795u); LOADALL;
L_004f079a:;
  /* 004f079a mov dword ptr [edi + 0xba2c], 0xffffffff */ { const u32 m_ = (u32)(edi + 0xba2cu); M32(m_) = (u32)(0xffffffffu); }
  /* 004f07a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f07a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f07b0(CPU *c) {
  NATIVE_HOOK(0x4f07b0u) REGS; LOADALL;
L_004f07b0:;
  /* 004f07b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f07b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f07b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f07b5 push 0x62139c */ { u32 v_ = 0x62139cu; esp -= 4; M32(esp) = v_; }
  /* 004f07ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f07c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f07c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f07c8 sub esp, 0xf4 */ { u32 a_ = esp, b_ = 0xf4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f07ce mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004f07d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f07d4 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f07d7 call 0x518bb0 */ esp -= 4; M32(esp) = 0x4f07dcu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x4f07d7u); RETCHK(0x4f07dcu, 0x4f07d7u); LOADALL;
  /* 004f07dc call 0x518350 */ esp -= 4; M32(esp) = 0x4f07e1u; SAVEALL; F_00518350(c); ABI_CHECK(0x518350u, 0x4f07dcu); RETCHK(0x4f07e1u, 0x4f07dcu); LOADALL;
  /* 004f07e1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f07e3 mov eax, 0x64f338 */ { eax = (u32)(0x64f338u); }
  /* 004f07e8 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f07edu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f07e8u); RETCHK(0x4f07edu, 0x4f07e8u); LOADALL;
  /* 004f07ed mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f07ef test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f07f1 jne 0x4f07fa */ if (!ZF_) goto L_004f07fa;
  /* 004f07f3 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f07f5 jmp 0x4f1267 */ goto L_004f1267;
L_004f07fa:;
  /* 004f07fa mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f07fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f07fd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f07fe mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f0800 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0803u; SAVEALL; call_ind(c, t_); RETCHK(0x4f0803u, 0x4f0800u); LOADALL; }
  /* 004f0803 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f0805 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 004f080a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f080c mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004f080f mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 004f0812 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 004f0816 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004f0819 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 004f081b push 0x64f328 */ { u32 v_ = 0x64f328u; esp -= 4; M32(esp) = v_; }
  /* 004f0820 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f0823 mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 004f0826 mov dword ptr [ebp - 0x50], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edi); }
  /* 004f0829 mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 004f082d call 0x404420 */ esp -= 4; M32(esp) = 0x4f0832u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4f082du); RETCHK(0x4f0832u, 0x4f082du); LOADALL;
  /* 004f0832 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004f0836 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 004f0838 push 0x64f320 */ { u32 v_ = 0x64f320u; esp -= 4; M32(esp) = v_; }
  /* 004f083d lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004f0840 mov dword ptr [ebp - 0x68], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0xfu); }
  /* 004f0847 mov dword ptr [ebp - 0x6c], edi */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(edi); }
  /* 004f084a mov byte ptr [ebp - 0x7c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M8(m_) = (u8)(0x0u); }
  /* 004f084e call 0x404420 */ esp -= 4; M32(esp) = 0x4f0853u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4f084eu); RETCHK(0x4f0853u, 0x4f084eu); LOADALL;
  /* 004f0853 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f0854 mov eax, 0x64f30c */ { eax = (u32)(0x64f30cu); }
  /* 004f0859 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004f085d call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0862u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f085du); RETCHK(0x4f0862u, 0x4f085du); LOADALL;
  /* 004f0862 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f0864 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
L_004f0867:;
  /* 004f0867 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f0869 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f086a test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f086c jne 0x4f0867 */ if (!ZF_) goto L_004f0867;
  /* 004f086e sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f0870 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0871 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004f0874 call 0x40d260 */ esp -= 4; M32(esp) = 0x4f0879u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x4f0874u); RETCHK(0x4f0879u, 0x4f0874u); LOADALL;
  /* 004f0879 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 004f087b push 0x64f320 */ { u32 v_ = 0x64f320u; esp -= 4; M32(esp) = v_; }
  /* 004f0880 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 004f0886 mov dword ptr [ebp - 0x84], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(0xfu); }
  /* 004f0890 mov dword ptr [ebp - 0x88], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(0x0u); }
  /* 004f089a mov byte ptr [ebp - 0x98], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M8(m_) = (u8)(0x0u); }
  /* 004f08a1 call 0x404420 */ esp -= 4; M32(esp) = 0x4f08a6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4f08a1u); RETCHK(0x4f08a6u, 0x4f08a1u); LOADALL;
  /* 004f08a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f08a7 mov eax, 0x64f2f4 */ { eax = (u32)(0x64f2f4u); }
  /* 004f08ac mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 004f08b0 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f08b5u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f08b0u); RETCHK(0x4f08b5u, 0x4f08b0u); LOADALL;
  /* 004f08b5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f08b7 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 004f08ba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_004f08c0:;
  /* 004f08c0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f08c2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f08c3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f08c5 jne 0x4f08c0 */ if (!ZF_) goto L_004f08c0;
  /* 004f08c7 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f08c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f08ca lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 004f08d0 call 0x40d260 */ esp -= 4; M32(esp) = 0x4f08d5u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x4f08d0u); RETCHK(0x4f08d5u, 0x4f08d0u); LOADALL;
  /* 004f08d5 cmp dword ptr [ebp - 0x84], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f08dc mov ecx, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); ecx = (u32)(M32(m_)); }
  /* 004f08e2 jae 0x4f08ea */ if (!CF_) goto L_004f08ea;
  /* 004f08e4 lea ecx, [ebp - 0x98] */ ecx = (u32)((u32)(ebp + 0xffffff68u));
L_004f08ea:;
  /* 004f08ea mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f08ed lea edx, [esi + 0x22c] */ edx = (u32)((u32)(esi + 0x22cu));
  /* 004f08f3 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f08f8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f08f9 call 0x554910 */ esp -= 4; M32(esp) = 0x4f08feu; SAVEALL; F_00554910(c); ABI_CHECK(0x554910u, 0x4f08f9u); RETCHK(0x4f08feu, 0x4f08f9u); LOADALL;
  /* 004f08fe mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f0901 mov eax, edi */ { eax = (u32)(edi); }
  /* 004f0903 imul eax, eax, 0x170 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x170u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f0909 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f090b lea esi, [eax + 0x22c] */ esi = (u32)((u32)(eax + 0x22cu));
  /* 004f0911 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f0914 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f0916 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0919 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f091b jne 0x4f0928 */ if (!ZF_) goto L_004f0928;
  /* 004f091d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f091e push 0x64f288 */ { u32 v_ = 0x64f288u; esp -= 4; M32(esp) = v_; }
  /* 004f0923 jmp 0x4f1059 */ goto L_004f1059;
L_004f0928:;
  /* 004f0928 cmp dword ptr [ebp - 0x68], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f092c mov eax, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); eax = (u32)(M32(m_)); }
  /* 004f092f jae 0x4f0934 */ if (!CF_) goto L_004f0934;
  /* 004f0931 lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
L_004f0934:;
  /* 004f0934 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0935 call 0x554cf0 */ esp -= 4; M32(esp) = 0x4f093au; SAVEALL; F_00554cf0(c); ABI_CHECK(0x554cf0u, 0x4f0935u); RETCHK(0x4f093au, 0x4f0935u); LOADALL;
  /* 004f093a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f093d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f093f jne 0x4f094c */ if (!ZF_) goto L_004f094c;
  /* 004f0941 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f0942 push 0x64f230 */ { u32 v_ = 0x64f230u; esp -= 4; M32(esp) = v_; }
  /* 004f0947 jmp 0x4f1059 */ goto L_004f1059;
L_004f094c:;
  /* 004f094c mov eax, 0x64f224 */ { eax = (u32)(0x64f224u); }
  /* 004f0951 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f0953 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f0958u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f0953u); RETCHK(0x4f0958u, 0x4f0953u); LOADALL;
  /* 004f0958 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f095a mov dword ptr [ebp - 0xdc], eax */ { const u32 m_ = (u32)(ebp + 0xffffff24u); M32(m_) = (u32)(eax); }
  /* 004f0960 je 0x4f11e2 */ if (ZF_) goto L_004f11e2;
  /* 004f0966 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004f0969 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f096b jmp 0x4f0970 */ goto L_004f0970;
L_004f0970:;
  /* 004f0970 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004f0972 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f0974 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0977u; SAVEALL; call_ind(c, t_); RETCHK(0x4f0977u, 0x4f0974u); LOADALL; }
  /* 004f0977 push 0x645584 */ { u32 v_ = 0x645584u; esp -= 4; M32(esp) = v_; }
  /* 004f097c lea edi, [ebp - 0xe0] */ edi = (u32)((u32)(ebp + 0xffffff20u));
  /* 004f0982 call 0x560f30 */ esp -= 4; M32(esp) = 0x4f0987u; SAVEALL; F_00560f30(c); ABI_CHECK(0x560f30u, 0x4f0982u); RETCHK(0x4f0987u, 0x4f0982u); LOADALL;
  /* 004f0987 mov eax, dword ptr [esi + 0x230] */ { const u32 m_ = (u32)(esi + 0x230u); eax = (u32)(M32(m_)); }
  /* 004f098d mov edx, dword ptr [esi + 0x234] */ { const u32 m_ = (u32)(esi + 0x234u); edx = (u32)(M32(m_)); }
  /* 004f0993 imul eax, eax, 0x3e8 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x3e8u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f0999 mov ecx, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); ecx = (u32)(M32(m_)); }
  /* 004f099f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f09a1 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f09a3 je 0x4f09c2 */ if (ZF_) goto L_004f09c2;
  /* 004f09a5 mov eax, 0x64f224 */ { eax = (u32)(0x64f224u); }
  /* 004f09aa mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f09ac call 0x560c00 */ esp -= 4; M32(esp) = 0x4f09b1u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x4f09acu); RETCHK(0x4f09b1u, 0x4f09acu); LOADALL;
  /* 004f09b1 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f09b3 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f09b5 jne 0x4f0970 */ if (!ZF_) goto L_004f0970;
  /* 004f09b7 mov dword ptr [ebp - 0xdc], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff24u); M32(m_) = (u32)(ebx); }
  /* 004f09bd jmp 0x4f11e2 */ goto L_004f11e2;
L_004f09c2:;
  /* 004f09c2 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 004f09c4 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f09c6 push 0x64f320 */ { u32 v_ = 0x64f320u; esp -= 4; M32(esp) = v_; }
  /* 004f09cb lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f09ce mov dword ptr [ebp - 0xdc], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff24u); M32(m_) = (u32)(ebx); }
  /* 004f09d4 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 004f09db mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004f09de mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 004f09e2 call 0x404420 */ esp -= 4; M32(esp) = 0x4f09e7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4f09e2u); RETCHK(0x4f09e7u, 0x4f09e2u); LOADALL;
  /* 004f09e7 mov eax, 0x64f21c */ { eax = (u32)(0x64f21cu); }
  /* 004f09ec mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f09ee mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 004f09f2 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f09f7u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f09f2u); RETCHK(0x4f09f7u, 0x4f09f2u); LOADALL;
  /* 004f09f7 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f09f9 je 0x4f0a3b */ if (ZF_) goto L_004f0a3b;
  /* 004f09fb mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f09fd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f09ff call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0a02u; SAVEALL; call_ind(c, t_); RETCHK(0x4f0a02u, 0x4f09ffu); LOADALL; }
  /* 004f0a02 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0a03 mov eax, 0x64f210 */ { eax = (u32)(0x64f210u); }
  /* 004f0a08 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0a0du; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0a08u); RETCHK(0x4f0a0du, 0x4f0a08u); LOADALL;
  /* 004f0a0d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0a0f je 0x4f0a3b */ if (ZF_) goto L_004f0a3b;
  /* 004f0a11 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f0a14 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0a15 call 0x40c8f0 */ esp -= 4; M32(esp) = 0x4f0a1au; SAVEALL; F_0040c8f0(c); ABI_CHECK(0x40c8f0u, 0x4f0a15u); RETCHK(0x4f0a1au, 0x4f0a15u); LOADALL;
  /* 004f0a1a mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 004f0a1d mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 004f0a22 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0a24 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004f0a27 jae 0x4f0a2c */ if (!CF_) goto L_004f0a2c;
  /* 004f0a29 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
L_004f0a2c:;
  /* 004f0a2c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f0a2f add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f0a32 call 0x5495c0 */ esp -= 4; M32(esp) = 0x4f0a37u; SAVEALL; F_005495c0(c); ABI_CHECK(0x5495c0u, 0x4f0a32u); RETCHK(0x4f0a37u, 0x4f0a32u); LOADALL;
  /* 004f0a37 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f0a39 jmp 0x4f0a40 */ goto L_004f0a40;
L_004f0a3b:;
  /* 004f0a3b mov edi, 0x10 */ { edi = (u32)(0x10u); }
L_004f0a40:;
  /* 004f0a40 mov eax, 0x64f200 */ { eax = (u32)(0x64f200u); }
  /* 004f0a45 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f0a47 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f0a4cu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f0a47u); RETCHK(0x4f0a4cu, 0x4f0a47u); LOADALL;
  /* 004f0a4c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0a4e je 0x4f0b60 */ if (ZF_) goto L_004f0b60;
  /* 004f0a54 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f0a56 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f0a58 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0a5bu; SAVEALL; call_ind(c, t_); RETCHK(0x4f0a5bu, 0x4f0a58u); LOADALL; }
  /* 004f0a5b mov edi, eax */ { edi = (u32)(eax); }
  /* 004f0a5d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f0a5e mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004f0a63 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0a68u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0a63u); RETCHK(0x4f0a68u, 0x4f0a63u); LOADALL;
  /* 004f0a68 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f0a6a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0a6c je 0x4f0ab1 */ if (ZF_) goto L_004f0ab1;
  /* 004f0a6e push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0a70 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0a72 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f0a75 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0a76 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f0a79 call 0x404140 */ esp -= 4; M32(esp) = 0x4f0a7eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f0a79u); RETCHK(0x4f0a7eu, 0x4f0a79u); LOADALL;
  /* 004f0a7e lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f0a81 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0a82 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f0a84 call 0x40c8f0 */ esp -= 4; M32(esp) = 0x4f0a89u; SAVEALL; F_0040c8f0(c); ABI_CHECK(0x40c8f0u, 0x4f0a84u); RETCHK(0x4f0a89u, 0x4f0a84u); LOADALL;
  /* 004f0a89 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0a8d mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004f0a90 jae 0x4f0a95 */ if (!CF_) goto L_004f0a95;
  /* 004f0a92 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
L_004f0a95:;
  /* 004f0a95 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f0a98 push 0x4f */ { u32 v_ = 0x4fu; esp -= 4; M32(esp) = v_; }
  /* 004f0a9a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0a9b lea edx, [esi + 0xec] */ edx = (u32)((u32)(esi + 0xecu));
  /* 004f0aa1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0aa2 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4f0aa7u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4f0aa2u); RETCHK(0x4f0aa7u, 0x4f0aa2u); LOADALL;
  /* 004f0aa7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0aaa mov byte ptr [esi + 0x13b], 0 */ { const u32 m_ = (u32)(esi + 0x13bu); M8(m_) = (u8)(0x0u); }
L_004f0ab1:;
  /* 004f0ab1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f0ab2 mov eax, 0x64f1ec */ { eax = (u32)(0x64f1ecu); }
  /* 004f0ab7 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0abcu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0ab7u); RETCHK(0x4f0abcu, 0x4f0ab7u); LOADALL;
  /* 004f0abc mov esi, eax */ { esi = (u32)(eax); }
  /* 004f0abe test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0ac0 je 0x4f0b05 */ if (ZF_) goto L_004f0b05;
  /* 004f0ac2 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0ac4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0ac6 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f0ac9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0aca lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f0acd call 0x404140 */ esp -= 4; M32(esp) = 0x4f0ad2u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f0acdu); RETCHK(0x4f0ad2u, 0x4f0acdu); LOADALL;
  /* 004f0ad2 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f0ad5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0ad6 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f0ad8 call 0x40c8f0 */ esp -= 4; M32(esp) = 0x4f0addu; SAVEALL; F_0040c8f0(c); ABI_CHECK(0x40c8f0u, 0x4f0ad8u); RETCHK(0x4f0addu, 0x4f0ad8u); LOADALL;
  /* 004f0add cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0ae1 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004f0ae4 jae 0x4f0ae9 */ if (!CF_) goto L_004f0ae9;
  /* 004f0ae6 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
L_004f0ae9:;
  /* 004f0ae9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f0aec push 0x4f */ { u32 v_ = 0x4fu; esp -= 4; M32(esp) = v_; }
  /* 004f0aee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0aef lea edx, [esi + 0x13c] */ edx = (u32)((u32)(esi + 0x13cu));
  /* 004f0af5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0af6 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4f0afbu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4f0af6u); RETCHK(0x4f0afbu, 0x4f0af6u); LOADALL;
  /* 004f0afb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0afe mov byte ptr [esi + 0x18b], 0 */ { const u32 m_ = (u32)(esi + 0x18bu); M8(m_) = (u8)(0x0u); }
L_004f0b05:;
  /* 004f0b05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f0b06 mov eax, 0x64f1e0 */ { eax = (u32)(0x64f1e0u); }
  /* 004f0b0b call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0b10u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0b0bu); RETCHK(0x4f0b10u, 0x4f0b0bu); LOADALL;
  /* 004f0b10 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f0b12 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0b14 je 0x4f0b59 */ if (ZF_) goto L_004f0b59;
  /* 004f0b16 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0b18 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0b1a lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f0b1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0b1e lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f0b21 call 0x404140 */ esp -= 4; M32(esp) = 0x4f0b26u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f0b21u); RETCHK(0x4f0b26u, 0x4f0b21u); LOADALL;
  /* 004f0b26 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f0b29 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0b2a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f0b2c call 0x40c8f0 */ esp -= 4; M32(esp) = 0x4f0b31u; SAVEALL; F_0040c8f0(c); ABI_CHECK(0x40c8f0u, 0x4f0b2cu); RETCHK(0x4f0b31u, 0x4f0b2cu); LOADALL;
  /* 004f0b31 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0b35 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004f0b38 jae 0x4f0b3d */ if (!CF_) goto L_004f0b3d;
  /* 004f0b3a lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
L_004f0b3d:;
  /* 004f0b3d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f0b40 push 0x4f */ { u32 v_ = 0x4fu; esp -= 4; M32(esp) = v_; }
  /* 004f0b42 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0b43 lea edx, [esi + 0x18c] */ edx = (u32)((u32)(esi + 0x18cu));
  /* 004f0b49 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0b4a call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4f0b4fu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4f0b4au); RETCHK(0x4f0b4fu, 0x4f0b4au); LOADALL;
  /* 004f0b4f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0b52 mov byte ptr [esi + 0x1db], 0 */ { const u32 m_ = (u32)(esi + 0x1dbu); M8(m_) = (u8)(0x0u); }
L_004f0b59:;
  /* 004f0b59 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f0b5b mov edi, 0x10 */ { edi = (u32)(0x10u); }
L_004f0b60:;
  /* 004f0b60 mov eax, 0x64f1dc */ { eax = (u32)(0x64f1dcu); }
  /* 004f0b65 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f0b67 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f0b6cu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f0b67u); RETCHK(0x4f0b6cu, 0x4f0b67u); LOADALL;
  /* 004f0b6c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0b6e jne 0x4f0c0c */ if (!ZF_) goto L_004f0c0c;
  /* 004f0b74 cmp dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0b77 jb 0x4f0b85 */ if (CF_) goto L_004f0b85;
  /* 004f0b79 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004f0b7c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0b7d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f0b82u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f0b7du); RETCHK(0x4f0b82u, 0x4f0b7du); LOADALL;
  /* 004f0b82 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0b85:;
  /* 004f0b85 cmp dword ptr [ebp - 0x84], edi */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0b8b mov ebx, 0xf */ { ebx = (u32)(0xfu); }
  /* 004f0b90 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 004f0b93 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004f0b96 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 004f0b9a jb 0x4f0bab */ if (CF_) goto L_004f0bab;
  /* 004f0b9c mov ecx, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); ecx = (u32)(M32(m_)); }
  /* 004f0ba2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0ba3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f0ba8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f0ba3u); RETCHK(0x4f0ba8u, 0x4f0ba3u); LOADALL;
  /* 004f0ba8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0bab:;
  /* 004f0bab cmp dword ptr [ebp - 0x68], edi */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0bae mov dword ptr [ebp - 0x84], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(ebx); }
  /* 004f0bb4 mov dword ptr [ebp - 0x88], esi */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(esi); }
  /* 004f0bba mov byte ptr [ebp - 0x98], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M8(m_) = (u8)(0x0u); }
  /* 004f0bc1 jb 0x4f0bcf */ if (CF_) goto L_004f0bcf;
  /* 004f0bc3 mov edx, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); edx = (u32)(M32(m_)); }
  /* 004f0bc6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0bc7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f0bccu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f0bc7u); RETCHK(0x4f0bccu, 0x4f0bc7u); LOADALL;
  /* 004f0bcc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0bcf:;
  /* 004f0bcf cmp dword ptr [ebp - 0x4c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0bd2 mov dword ptr [ebp - 0x68], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ebx); }
  /* 004f0bd5 mov dword ptr [ebp - 0x6c], esi */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(esi); }
  /* 004f0bd8 mov byte ptr [ebp - 0x7c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M8(m_) = (u8)(0x0u); }
  /* 004f0bdc jb 0x4f0bea */ if (CF_) goto L_004f0bea;
  /* 004f0bde mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 004f0be1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0be2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f0be7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f0be2u); RETCHK(0x4f0be7u, 0x4f0be2u); LOADALL;
  /* 004f0be7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0bea:;
  /* 004f0bea cmp dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0bed mov dword ptr [ebp - 0x4c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ebx); }
  /* 004f0bf0 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 004f0bf3 mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 004f0bf7 jb 0x4f0c05 */ if (CF_) goto L_004f0c05;
  /* 004f0bf9 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 004f0bfc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0bfd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f0c02u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f0bfdu); RETCHK(0x4f0c02u, 0x4f0bfdu); LOADALL;
  /* 004f0c02 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0c05:;
  /* 004f0c05 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f0c07 jmp 0x4f1265 */ goto L_004f1265;
L_004f0c0c:;
  /* 004f0c0c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f0c0e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f0c10 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0c13u; SAVEALL; call_ind(c, t_); RETCHK(0x4f0c13u, 0x4f0c10u); LOADALL; }
  /* 004f0c13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0c15 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f0c17 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0c19 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f0c1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0c1d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f0c20 call 0x404140 */ esp -= 4; M32(esp) = 0x4f0c25u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f0c20u); RETCHK(0x4f0c25u, 0x4f0c20u); LOADALL;
  /* 004f0c25 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f0c26 mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004f0c2b call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0c30u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0c2bu); RETCHK(0x4f0c30u, 0x4f0c2bu); LOADALL;
  /* 004f0c30 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f0c32 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f0c34 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
L_004f0c37:;
  /* 004f0c37 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f0c39 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f0c3a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f0c3c jne 0x4f0c37 */ if (!ZF_) goto L_004f0c37;
  /* 004f0c3e sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f0c40 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0c41 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f0c43 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f0c46 call 0x40d260 */ esp -= 4; M32(esp) = 0x4f0c4bu; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x4f0c46u); RETCHK(0x4f0c4bu, 0x4f0c46u); LOADALL;
  /* 004f0c4b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f0c4c mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004f0c51 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0c56u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0c51u); RETCHK(0x4f0c56u, 0x4f0c51u); LOADALL;
  /* 004f0c56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0c57 lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 004f0c5d call 0x403060 */ esp -= 4; M32(esp) = 0x4f0c62u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x4f0c5du); RETCHK(0x4f0c62u, 0x4f0c5du); LOADALL;
  /* 004f0c62 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f0c64 lea ecx, [ebp + 0xf] */ ecx = (u32)((u32)(ebp + 0xfu));
  /* 004f0c67 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0c68 lea edx, [ebp - 0xb8] */ edx = (u32)((u32)(ebp + 0xffffff48u));
  /* 004f0c6e mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 004f0c72 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0c73 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f0c75 mov byte ptr [ebp + 0xf], 0x5c */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x5cu); }
  /* 004f0c79 call 0x40a4a0 */ esp -= 4; M32(esp) = 0x4f0c7eu; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x4f0c79u); RETCHK(0x4f0c7eu, 0x4f0c79u); LOADALL;
  /* 004f0c7e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0c80 jl 0x4f0cb3 */ if (LT_) goto L_004f0cb3;
  /* 004f0c82 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0c84 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 004f0c87 lea esi, [ebp - 0x100] */ esi = (u32)((u32)(ebp + 0xffffff00u));
  /* 004f0c8d lea edx, [ebp - 0xb8] */ edx = (u32)((u32)(ebp + 0xffffff48u));
  /* 004f0c93 call 0x40c990 */ esp -= 4; M32(esp) = 0x4f0c98u; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x4f0c93u); RETCHK(0x4f0c98u, 0x4f0c93u); LOADALL;
  /* 004f0c98 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0c9a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0c9c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0c9d lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 004f0ca3 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 004f0ca7 call 0x404140 */ esp -= 4; M32(esp) = 0x4f0cacu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f0ca7u); RETCHK(0x4f0cacu, 0x4f0ca7u); LOADALL;
  /* 004f0cac mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f0cae call 0x43ee60 */ esp -= 4; M32(esp) = 0x4f0cb3u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4f0caeu); RETCHK(0x4f0cb3u, 0x4f0caeu); LOADALL;
L_004f0cb3:;
  /* 004f0cb3 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f0cb6 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f0cb8 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0cbb mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f0cbe jae 0x4f0cc3 */ if (!CF_) goto L_004f0cc3;
  /* 004f0cc0 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004f0cc3:;
  /* 004f0cc3 push 0x64f1d8 */ { u32 v_ = 0x64f1d8u; esp -= 4; M32(esp) = v_; }
  /* 004f0cc8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0cc9 call 0x5fea9a */ esp -= 4; M32(esp) = 0x4f0cceu; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x4f0cc9u); RETCHK(0x4f0cceu, 0x4f0cc9u); LOADALL;
  /* 004f0cce mov esi, eax */ { esi = (u32)(eax); }
  /* 004f0cd0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0cd3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0cd5 je 0x4f0cf6 */ if (ZF_) goto L_004f0cf6;
  /* 004f0cd7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0cd9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0cdb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f0cdc call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4f0ce1u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4f0cdcu); RETCHK(0x4f0ce1u, 0x4f0cdcu); LOADALL;
  /* 004f0ce1 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004f0ce3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0ce5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f0ce6 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4f0cebu; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4f0ce6u); RETCHK(0x4f0cebu, 0x4f0ce6u); LOADALL;
  /* 004f0ceb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f0cec call 0x5feaa6 */ esp -= 4; M32(esp) = 0x4f0cf1u; SAVEALL; F_005feaa6(c); ABI_CHECK(0x5feaa6u, 0x4f0cecu); RETCHK(0x4f0cf1u, 0x4f0cecu); LOADALL;
  /* 004f0cf1 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0cf4 mov edi, eax */ { edi = (u32)(eax); }
L_004f0cf6:;
  /* 004f0cf6 mov dword ptr [ebp - 0xc0], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff40u); M32(m_) = (u32)(0xfu); }
  /* 004f0d00 mov dword ptr [ebp - 0xc4], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff3cu); M32(m_) = (u32)(0x0u); }
  /* 004f0d0a mov byte ptr [ebp - 0xd4], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff2cu); M8(m_) = (u8)(0x0u); }
  /* 004f0d11 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0d13 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0d15 lea eax, [ebp - 0xb8] */ eax = (u32)((u32)(ebp + 0xffffff48u));
  /* 004f0d1b mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 004f0d1f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0d20 lea ecx, [ebp - 0xd8] */ ecx = (u32)((u32)(ebp + 0xffffff28u));
  /* 004f0d26 mov dword ptr [ebp - 0xbc], edi */ { const u32 m_ = (u32)(ebp + 0xffffff44u); M32(m_) = (u32)(edi); }
  /* 004f0d2c call 0x404140 */ esp -= 4; M32(esp) = 0x4f0d31u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f0d2cu); RETCHK(0x4f0d31u, 0x4f0d2cu); LOADALL;
  /* 004f0d31 call 0x41b490 */ esp -= 4; M32(esp) = 0x4f0d36u; SAVEALL; F_0041b490(c); ABI_CHECK(0x41b490u, 0x4f0d31u); RETCHK(0x4f0d36u, 0x4f0d31u); LOADALL;
  /* 004f0d36 lea edi, [ebp - 0xd8] */ edi = (u32)((u32)(ebp + 0xffffff28u));
  /* 004f0d3c call 0x41b7b0 */ esp -= 4; M32(esp) = 0x4f0d41u; SAVEALL; F_0041b7b0(c); ABI_CHECK(0x41b7b0u, 0x4f0d3cu); RETCHK(0x4f0d41u, 0x4f0d3cu); LOADALL;
  /* 004f0d41 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f0d43 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f0d46 jne 0x4f0d4f */ if (!ZF_) goto L_004f0d4f;
  /* 004f0d48 mov byte ptr [edi + 0xbab0], 1 */ { const u32 m_ = (u32)(edi + 0xbab0u); M8(m_) = (u8)(0x1u); }
L_004f0d4f:;
  /* 004f0d4f mov eax, dword ptr [ebp - 0xc0] */ { const u32 m_ = (u32)(ebp + 0xffffff40u); eax = (u32)(M32(m_)); }
  /* 004f0d55 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 004f0d5a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0d5c jb 0x4f0d6d */ if (CF_) goto L_004f0d6d;
  /* 004f0d5e mov ecx, dword ptr [ebp - 0xd4] */ { const u32 m_ = (u32)(ebp + 0xffffff2cu); ecx = (u32)(M32(m_)); }
  /* 004f0d64 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0d65 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f0d6au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f0d65u); RETCHK(0x4f0d6au, 0x4f0d65u); LOADALL;
  /* 004f0d6a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0d6d:;
  /* 004f0d6d mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 004f0d71 cmp dword ptr [ebp - 0xa0], esi */ { const u32 m_ = (u32)(ebp + 0xffffff60u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0d77 mov dword ptr [ebp - 0xc0], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff40u); M32(m_) = (u32)(0xfu); }
  /* 004f0d81 mov dword ptr [ebp - 0xc4], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff3cu); M32(m_) = (u32)(0x0u); }
  /* 004f0d8b mov byte ptr [ebp - 0xd4], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff2cu); M8(m_) = (u8)(0x0u); }
  /* 004f0d92 jb 0x4f0da3 */ if (CF_) goto L_004f0da3;
  /* 004f0d94 mov edx, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); edx = (u32)(M32(m_)); }
  /* 004f0d9a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0d9b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f0da0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f0d9bu); RETCHK(0x4f0da0u, 0x4f0d9bu); LOADALL;
  /* 004f0da0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f0da3:;
  /* 004f0da3 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f0da6 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f0da9 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 004f0dac push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0dae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0daf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f0db1 mov dword ptr [ebp - 0xe4], esi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(esi); }
  /* 004f0db7 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0dbau; SAVEALL; call_ind(c, t_); RETCHK(0x4f0dbau, 0x4f0db7u); LOADALL; }
  /* 004f0dba cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f0dbe mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f0dc1 jae 0x4f0dc6 */ if (!CF_) goto L_004f0dc6;
  /* 004f0dc3 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004f0dc6:;
  /* 004f0dc6 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f0dc8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0dc9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f0dcb call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0dceu; SAVEALL; call_ind(c, t_); RETCHK(0x4f0dceu, 0x4f0dcbu); LOADALL; }
  /* 004f0dce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0dd0 jne 0x4f0de3 */ if (!ZF_) goto L_004f0de3;
  /* 004f0dd2 mov eax, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); eax = (u32)(M32(m_)); }
  /* 004f0dd8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0dd9 push 0x64f180 */ { u32 v_ = 0x64f180u; esp -= 4; M32(esp) = v_; }
  /* 004f0dde jmp 0x4f1059 */ goto L_004f1059;
L_004f0de3:;
  /* 004f0de3 push 0x64f174 */ { u32 v_ = 0x64f174u; esp -= 4; M32(esp) = v_; }
  /* 004f0de8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0dea call 0x561000 */ esp -= 4; M32(esp) = 0x4f0defu; SAVEALL; F_00561000(c); ABI_CHECK(0x561000u, 0x4f0deau); RETCHK(0x4f0defu, 0x4f0deau); LOADALL;
  /* 004f0def movzx ecx, al */ { ecx = (u32)((eax & 0xffu)); }
  /* 004f0df2 push 0x64f168 */ { u32 v_ = 0x64f168u; esp -= 4; M32(esp) = v_; }
  /* 004f0df7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0df9 mov dword ptr [edi + 0x50], ecx */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(ecx); }
  /* 004f0dfc call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0e01u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0dfcu); RETCHK(0x4f0e01u, 0x4f0dfcu); LOADALL;
  /* 004f0e01 mov dword ptr [edi + 0x54], eax */ { const u32 m_ = (u32)(edi + 0x54u); M32(m_) = (u32)(eax); }
  /* 004f0e04 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f0e05 mov eax, 0x64f15c */ { eax = (u32)(0x64f15cu); }
  /* 004f0e0a call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0e0fu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0e0au); RETCHK(0x4f0e0fu, 0x4f0e0au); LOADALL;
  /* 004f0e0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f0e10 call 0x5fea82 */ esp -= 4; M32(esp) = 0x4f0e15u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x4f0e10u); RETCHK(0x4f0e15u, 0x4f0e10u); LOADALL;
  /* 004f0e15 fstp dword ptr [edi + 0x58] */ { const u32 m_ = (u32)(edi + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0e18 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f0e1b push 0x64f14c */ { u32 v_ = 0x64f14cu; esp -= 4; M32(esp) = v_; }
  /* 004f0e20 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0e22 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0e27u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0e22u); RETCHK(0x4f0e27u, 0x4f0e22u); LOADALL;
  /* 004f0e27 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f0e2a fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 004f0e2d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f0e2e mov eax, 0x64f140 */ { eax = (u32)(0x64f140u); }
  /* 004f0e33 fstp dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0e36 mov byte ptr [edi + 0xbaa8], 0 */ { const u32 m_ = (u32)(edi + 0xbaa8u); M8(m_) = (u8)(0x0u); }
  /* 004f0e3d call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0e42u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0e3du); RETCHK(0x4f0e42u, 0x4f0e3du); LOADALL;
  /* 004f0e42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0e44 je 0x4f0e58 */ if (ZF_) goto L_004f0e58;
  /* 004f0e46 push 0x64f140 */ { u32 v_ = 0x64f140u; esp -= 4; M32(esp) = v_; }
  /* 004f0e4b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0e4d call 0x561000 */ esp -= 4; M32(esp) = 0x4f0e52u; SAVEALL; F_00561000(c); ABI_CHECK(0x561000u, 0x4f0e4du); RETCHK(0x4f0e52u, 0x4f0e4du); LOADALL;
  /* 004f0e52 mov byte ptr [edi + 0xbaa8], al */ { const u32 m_ = (u32)(edi + 0xbaa8u); M8(m_) = (u8)((eax & 0xffu)); }
L_004f0e58:;
  /* 004f0e58 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f0e59 mov eax, 0x64f138 */ { eax = (u32)(0x64f138u); }
  /* 004f0e5e call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0e63u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0e5eu); RETCHK(0x4f0e63u, 0x4f0e5eu); LOADALL;
  /* 004f0e63 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0e65 je 0x4f0ea3 */ if (ZF_) goto L_004f0ea3;
  /* 004f0e67 mov edi, 0x64f134 */ { edi = (u32)(0x64f134u); }
  /* 004f0e6c mov esi, eax */ { esi = (u32)(eax); }
  /* 004f0e6e mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 004f0e73 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f0e75 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 004f0e77 jne 0x4f0e84 */ if (!ZF_) goto L_004f0e84;
  /* 004f0e79 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f0e7c mov dword ptr [eax + 0xbaac], edx */ { const u32 m_ = (u32)(eax + 0xbaacu); M32(m_) = (u32)(edx); }
  /* 004f0e82 jmp 0x4f0ea3 */ goto L_004f0ea3;
L_004f0e84:;
  /* 004f0e84 mov edi, 0x64f12c */ { edi = (u32)(0x64f12cu); }
  /* 004f0e89 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f0e8b mov ecx, 5 */ { ecx = (u32)(0x5u); }
  /* 004f0e90 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f0e92 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 004f0e94 jne 0x4f0ea3 */ if (!ZF_) goto L_004f0ea3;
  /* 004f0e96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f0e99 mov dword ptr [eax + 0xbaac], 1 */ { const u32 m_ = (u32)(eax + 0xbaacu); M32(m_) = (u32)(0x1u); }
L_004f0ea3:;
  /* 004f0ea3 push 0x64f11c */ { u32 v_ = 0x64f11cu; esp -= 4; M32(esp) = v_; }
  /* 004f0ea8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0eaa call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0eafu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0eaau); RETCHK(0x4f0eafu, 0x4f0eaau); LOADALL;
  /* 004f0eaf mov byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f0eb2 push 0x64f10c */ { u32 v_ = 0x64f10cu; esp -= 4; M32(esp) = v_; }
  /* 004f0eb7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0eb9 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0ebeu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0eb9u); RETCHK(0x4f0ebeu, 0x4f0eb9u); LOADALL;
  /* 004f0ebe mov byte ptr [ebp + 0xe], al */ { const u32 m_ = (u32)(ebp + 0xeu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f0ec1 push 0x64f0fc */ { u32 v_ = 0x64f0fcu; esp -= 4; M32(esp) = v_; }
  /* 004f0ec6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0ec8 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0ecdu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0ec8u); RETCHK(0x4f0ecdu, 0x4f0ec8u); LOADALL;
  /* 004f0ecd mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f0ed0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f0ed2 mov ch, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (ecx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 004f0ed5 movzx edx, al */ { edx = (u32)((eax & 0xffu)); }
  /* 004f0ed8 movzx eax, byte ptr [ebp + 0xe] */ { const u32 m_ = (u32)(ebp + 0xeu); eax = (u32)(M8(m_)); }
  /* 004f0edc or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f0ede shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004f0ee1 or ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f0ee3 push 0x64f0f4 */ { u32 v_ = 0x64f0f4u; esp -= 4; M32(esp) = v_; }
  /* 004f0ee8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0eea mov dword ptr [esi + 0x60], ecx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ecx); }
  /* 004f0eed call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0ef2u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0eedu); RETCHK(0x4f0ef2u, 0x4f0eedu); LOADALL;
  /* 004f0ef2 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f0ef5 push 0x64f0e8 */ { u32 v_ = 0x64f0e8u; esp -= 4; M32(esp) = v_; }
  /* 004f0efa fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 004f0efd mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0eff fstp dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0f02 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0f07u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0f02u); RETCHK(0x4f0f07u, 0x4f0f02u); LOADALL;
  /* 004f0f07 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f0f0a fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 004f0f0d push 0x64f0d8 */ { u32 v_ = 0x64f0d8u; esp -= 4; M32(esp) = v_; }
  /* 004f0f12 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0f14 fstp dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f0f17 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0f1cu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0f17u); RETCHK(0x4f0f1cu, 0x4f0f17u); LOADALL;
  /* 004f0f1c mov dword ptr [esi + 0xba30], eax */ { const u32 m_ = (u32)(esi + 0xba30u); M32(m_) = (u32)(eax); }
  /* 004f0f22 push 0x64f0c4 */ { u32 v_ = 0x64f0c4u; esp -= 4; M32(esp) = v_; }
  /* 004f0f27 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0f29 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0f2eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0f29u); RETCHK(0x4f0f2eu, 0x4f0f29u); LOADALL;
  /* 004f0f2e mov dword ptr [esi + 0xba34], eax */ { const u32 m_ = (u32)(esi + 0xba34u); M32(m_) = (u32)(eax); }
  /* 004f0f34 push 0x64f0b0 */ { u32 v_ = 0x64f0b0u; esp -= 4; M32(esp) = v_; }
  /* 004f0f39 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f0f3b call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f0f40u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f0f3bu); RETCHK(0x4f0f40u, 0x4f0f3bu); LOADALL;
  /* 004f0f40 mov ecx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ecx = (u32)(M32(m_)); }
  /* 004f0f43 mov dword ptr [esi + 0xba38], eax */ { const u32 m_ = (u32)(esi + 0xba38u); M32(m_) = (u32)(eax); }
  /* 004f0f49 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f0f4e and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f0f51 mov dword ptr [ebp - 0xac], eax */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M32(m_) = (u32)(eax); }
  /* 004f0f57 mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 004f0f5d mov dword ptr [ebp - 0xa8], 2 */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M32(m_) = (u32)(0x2u); }
  /* 004f0f67 mov dword ptr [ebp - 0xa4], 3 */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(0x3u); }
  /* 004f0f71 mov edx, dword ptr [ebp + ecx*4 - 0xac] */ { const u32 m_ = (u32)(ebp + ecx * 4u + 0xffffff54u); edx = (u32)(M32(m_)); }
  /* 004f0f78 mov ecx, dword ptr [ebp - 0xdc] */ { const u32 m_ = (u32)(ebp + 0xffffff24u); ecx = (u32)(M32(m_)); }
  /* 004f0f7e mov eax, 0x64f0a0 */ { eax = (u32)(0x64f0a0u); }
  /* 004f0f83 mov dword ptr [esi + 0x54], edx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(edx); }
  /* 004f0f86 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f0f8bu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f0f86u); RETCHK(0x4f0f8bu, 0x4f0f86u); LOADALL;
  /* 004f0f8b mov edi, eax */ { edi = (u32)(eax); }
  /* 004f0f8d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f0f8f jne 0x4f0fc3 */ if (!ZF_) goto L_004f0fc3;
  /* 004f0f91 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f0f94 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4f0f99u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4f0f94u); RETCHK(0x4f0f99u, 0x4f0f94u); LOADALL;
  /* 004f0f99 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 004f0f9f call 0x43ee60 */ esp -= 4; M32(esp) = 0x4f0fa4u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4f0f9fu); RETCHK(0x4f0fa4u, 0x4f0f9fu); LOADALL;
  /* 004f0fa4 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004f0fa7 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4f0facu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4f0fa7u); RETCHK(0x4f0facu, 0x4f0fa7u); LOADALL;
  /* 004f0fac lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f0faf call 0x43ee60 */ esp -= 4; M32(esp) = 0x4f0fb4u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4f0fafu); RETCHK(0x4f0fb4u, 0x4f0fafu); LOADALL;
  /* 004f0fb4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f0fb7 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4f0fbcu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4f0fb7u); RETCHK(0x4f0fbcu, 0x4f0fb7u); LOADALL;
  /* 004f0fbc xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f0fbe jmp 0x4f1265 */ goto L_004f1265;
L_004f0fc3:;
  /* 004f0fc3 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f0fc5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f0fc7 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f0fcau; SAVEALL; call_ind(c, t_); RETCHK(0x4f0fcau, 0x4f0fc7u); LOADALL; }
  /* 004f0fca push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f0fcc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f0fce lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f0fd1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f0fd2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f0fd5 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f0fd7 call 0x404140 */ esp -= 4; M32(esp) = 0x4f0fdcu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f0fd7u); RETCHK(0x4f0fdcu, 0x4f0fd7u); LOADALL;
  /* 004f0fdc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f0fdd mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004f0fe2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f0fe7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f0fe2u); RETCHK(0x4f0fe7u, 0x4f0fe2u); LOADALL;
  /* 004f0fe7 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f0fea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f0feb call 0x40c8f0 */ esp -= 4; M32(esp) = 0x4f0ff0u; SAVEALL; F_0040c8f0(c); ABI_CHECK(0x40c8f0u, 0x4f0febu); RETCHK(0x4f0ff0u, 0x4f0febu); LOADALL;
  /* 004f0ff0 mov eax, 0x64326c */ { eax = (u32)(0x64326cu); }
  /* 004f0ff5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f0ff7 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f0ffcu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f0ff7u); RETCHK(0x4f0ffcu, 0x4f0ff7u); LOADALL;
  /* 004f0ffc mov edi, eax */ { edi = (u32)(eax); }
  /* 004f0ffe test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1000 je 0x4f1032 */ if (ZF_) goto L_004f1032;
L_004f1002:;
  /* 004f1002 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f1004 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f1006 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f1009u; SAVEALL; call_ind(c, t_); RETCHK(0x4f1009u, 0x4f1006u); LOADALL; }
  /* 004f1009 push 0x645584 */ { u32 v_ = 0x645584u; esp -= 4; M32(esp) = v_; }
  /* 004f100e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f1010 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4f1015u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4f1010u); RETCHK(0x4f1015u, 0x4f1010u); LOADALL;
  /* 004f1015 cmp dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1018 je 0x4f1023 */ if (ZF_) goto L_004f1023;
  /* 004f101a mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 004f101d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f101f jne 0x4f1002 */ if (!ZF_) goto L_004f1002;
  /* 004f1021 jmp 0x4f1032 */ goto L_004f1032;
L_004f1023:;
  /* 004f1023 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f1024 mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004f1029 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f102eu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f1029u); RETCHK(0x4f102eu, 0x4f1029u); LOADALL;
  /* 004f102e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1030 jne 0x4f103e */ if (!ZF_) goto L_004f103e;
L_004f1032:;
  /* 004f1032 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1036 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f1039 jae 0x4f103e */ if (!CF_) goto L_004f103e;
  /* 004f103b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004f103e:;
  /* 004f103e call 0x545190 */ esp -= 4; M32(esp) = 0x4f1043u; SAVEALL; F_00545190(c); ABI_CHECK(0x545190u, 0x4f103eu); RETCHK(0x4f1043u, 0x4f103eu); LOADALL;
  /* 004f1043 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1045 mov dword ptr [esi + 0x228], eax */ { const u32 m_ = (u32)(esi + 0x228u); M32(m_) = (u32)(eax); }
  /* 004f104b jne 0x4f1095 */ if (!ZF_) goto L_004f1095;
  /* 004f104d mov ecx, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); ecx = (u32)(M32(m_)); }
  /* 004f1053 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f1054 push 0x64f048 */ { u32 v_ = 0x64f048u; esp -= 4; M32(esp) = v_; }
L_004f1059:;
  /* 004f1059 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 004f105e call 0x541010 */ esp -= 4; M32(esp) = 0x4f1063u; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x4f105eu); RETCHK(0x4f1063u, 0x4f105eu); LOADALL;
  /* 004f1063 mov esi, dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); esi = (u32)(M32(m_)); }
  /* 004f1069 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f106c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f106e push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004f1070 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004f1075 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x4f1077u; SAVEALL; call_ind(c, t_); RETCHK(0x4f1077u, 0x4f1075u); LOADALL; }
  /* 004f1077 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 004f1079 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004f107e mov edi, eax */ { edi = (u32)(eax); }
  /* 004f1080 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x4f1082u; SAVEALL; call_ind(c, t_); RETCHK(0x4f1082u, 0x4f1080u); LOADALL; }
  /* 004f1082 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f1084 mov edx, eax */ { edx = (u32)(eax); }
  /* 004f1086 call 0x559160 */ esp -= 4; M32(esp) = 0x4f108bu; SAVEALL; F_00559160(c); ABI_CHECK(0x559160u, 0x4f1086u); RETCHK(0x4f108bu, 0x4f1086u); LOADALL;
  /* 004f108b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f108e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1090 call 0x5fea88 */ esp -= 4; M32(esp) = 0x4f1095u; SAVEALL; F_005fea88(c); ABI_CHECK(0x5fea88u, 0x4f1090u); RETCHK(0x4f1095u, 0x4f1090u); LOADALL;
L_004f1095:;
  /* 004f1095 mov ebx, dword ptr [ebp - 0xdc] */ { const u32 m_ = (u32)(ebp + 0xffffff24u); ebx = (u32)(M32(m_)); }
  /* 004f109b mov eax, 0x64f044 */ { eax = (u32)(0x64f044u); }
  /* 004f10a0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f10a2 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f10a7u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f10a2u); RETCHK(0x4f10a7u, 0x4f10a2u); LOADALL;
  /* 004f10a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f10a9 je 0x4f10d6 */ if (ZF_) goto L_004f10d6;
  /* 004f10ab mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f10ad mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f10af call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f10b2u; SAVEALL; call_ind(c, t_); RETCHK(0x4f10b2u, 0x4f10afu); LOADALL; }
  /* 004f10b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f10b3 mov eax, 0x64f038 */ { eax = (u32)(0x64f038u); }
  /* 004f10b8 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f10bdu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f10b8u); RETCHK(0x4f10bdu, 0x4f10b8u); LOADALL;
  /* 004f10bd push 0x60 */ { u32 v_ = 0x60u; esp -= 4; M32(esp) = v_; }
  /* 004f10bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f10c0 lea eax, [esi + 0xba3c] */ eax = (u32)((u32)(esi + 0xba3cu));
  /* 004f10c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f10c7 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4f10ccu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4f10c7u); RETCHK(0x4f10ccu, 0x4f10c7u); LOADALL;
  /* 004f10cc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f10cf mov byte ptr [esi + 0xba9b], 0 */ { const u32 m_ = (u32)(esi + 0xba9bu); M8(m_) = (u8)(0x0u); }
L_004f10d6:;
  /* 004f10d6 mov eax, dword ptr [esi + 0xba9c] */ { const u32 m_ = (u32)(esi + 0xba9cu); eax = (u32)(M32(m_)); }
  /* 004f10dc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f10de je 0x4f114e */ if (ZF_) goto L_004f114e;
  /* 004f10e0 mov eax, 0x64f030 */ { eax = (u32)(0x64f030u); }
  /* 004f10e5 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f10e7 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f10ecu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f10e7u); RETCHK(0x4f10ecu, 0x4f10e7u); LOADALL;
  /* 004f10ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f10ee je 0x4f114e */ if (ZF_) goto L_004f114e;
  /* 004f10f0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f10f2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f10f4 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f10f7u; SAVEALL; call_ind(c, t_); RETCHK(0x4f10f7u, 0x4f10f4u); LOADALL; }
  /* 004f10f7 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f10f9 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f10fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f10fd lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f1100 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1101 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f1104 call 0x404140 */ esp -= 4; M32(esp) = 0x4f1109u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f1104u); RETCHK(0x4f1109u, 0x4f1104u); LOADALL;
  /* 004f1109 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f110a mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004f110f call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f1114u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f110fu); RETCHK(0x4f1114u, 0x4f110fu); LOADALL;
  /* 004f1114 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f1117 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f1118 call 0x40c8f0 */ esp -= 4; M32(esp) = 0x4f111du; SAVEALL; F_0040c8f0(c); ABI_CHECK(0x40c8f0u, 0x4f1118u); RETCHK(0x4f111du, 0x4f1118u); LOADALL;
  /* 004f111d cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1121 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f1124 jae 0x4f1129 */ if (!CF_) goto L_004f1129;
  /* 004f1126 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004f1129:;
  /* 004f1129 call 0x545190 */ esp -= 4; M32(esp) = 0x4f112eu; SAVEALL; F_00545190(c); ABI_CHECK(0x545190u, 0x4f1129u); RETCHK(0x4f112eu, 0x4f1129u); LOADALL;
  /* 004f112e mov dword ptr [esi + 0xbaa0], eax */ { const u32 m_ = (u32)(esi + 0xbaa0u); M32(m_) = (u32)(eax); }
  /* 004f1134 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f1135 mov eax, 0x64f0f4 */ { eax = (u32)(0x64f0f4u); }
  /* 004f113a call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f113fu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f113au); RETCHK(0x4f113fu, 0x4f113au); LOADALL;
  /* 004f113f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1140 call 0x5fea82 */ esp -= 4; M32(esp) = 0x4f1145u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x4f1140u); RETCHK(0x4f1145u, 0x4f1140u); LOADALL;
  /* 004f1145 fstp dword ptr [esi + 0xbaa4] */ { const u32 m_ = (u32)(esi + 0xbaa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f114b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f114e:;
  /* 004f114e mov eax, 0x64f020 */ { eax = (u32)(0x64f020u); }
  /* 004f1153 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f1155 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f115au; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f1155u); RETCHK(0x4f115au, 0x4f1155u); LOADALL;
  /* 004f115a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f115c je 0x4f11c5 */ if (ZF_) goto L_004f11c5;
  /* 004f115e mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f1160 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f1162 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f1165u; SAVEALL; call_ind(c, t_); RETCHK(0x4f1165u, 0x4f1162u); LOADALL; }
  /* 004f1165 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f1167 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f1169 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f116b lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f116e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f116f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f1172 call 0x404140 */ esp -= 4; M32(esp) = 0x4f1177u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f1172u); RETCHK(0x4f1177u, 0x4f1172u); LOADALL;
  /* 004f1177 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f1178 mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004f117d call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f1182u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f117du); RETCHK(0x4f1182u, 0x4f117du); LOADALL;
  /* 004f1182 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f1185 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f1186 call 0x40c8f0 */ esp -= 4; M32(esp) = 0x4f118bu; SAVEALL; F_0040c8f0(c); ABI_CHECK(0x40c8f0u, 0x4f1186u); RETCHK(0x4f118bu, 0x4f1186u); LOADALL;
  /* 004f118b push 0x64f000 */ { u32 v_ = 0x64f000u; esp -= 4; M32(esp) = v_; }
  /* 004f1190 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4f1195u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4f1190u); RETCHK(0x4f1195u, 0x4f1190u); LOADALL;
  /* 004f1195 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 004f1198 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f119b mov edx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); edx = (u32)(M32(m_)); }
  /* 004f11a1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f11a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f11a5 lea edi, [esi + 0x1dc] */ edi = (u32)((u32)(esi + 0x1dcu));
  /* 004f11ab push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f11ac mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f11ae call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f11b1u; SAVEALL; call_ind(c, t_); RETCHK(0x4f11b1u, 0x4f11aeu); LOADALL; }
  /* 004f11b1 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f11b5 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f11b8 jae 0x4f11bd */ if (!CF_) goto L_004f11bd;
  /* 004f11ba lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004f11bd:;
  /* 004f11bd mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f11bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f11c0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f11c2 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f11c5u; SAVEALL; call_ind(c, t_); RETCHK(0x4f11c5u, 0x4f11c2u); LOADALL; }
L_004f11c5:;
  /* 004f11c5 mov eax, dword ptr [ebp - 0xe4] */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); eax = (u32)(M32(m_)); }
  /* 004f11cb call 0x5492f0 */ esp -= 4; M32(esp) = 0x4f11d0u; SAVEALL; F_005492f0(c); ABI_CHECK(0x5492f0u, 0x4f11cbu); RETCHK(0x4f11d0u, 0x4f11cbu); LOADALL;
  /* 004f11d0 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f11d4 jb 0x4f11e2 */ if (CF_) goto L_004f11e2;
  /* 004f11d6 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004f11d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f11da call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f11dfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f11dau); RETCHK(0x4f11dfu, 0x4f11dau); LOADALL;
  /* 004f11df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f11e2:;
  /* 004f11e2 mov eax, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); eax = (u32)(M32(m_)); }
  /* 004f11e8 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 004f11ed cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f11ef jb 0x4f1200 */ if (CF_) goto L_004f1200;
  /* 004f11f1 mov ecx, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); ecx = (u32)(M32(m_)); }
  /* 004f11f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f11f8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f11fdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f11f8u); RETCHK(0x4f11fdu, 0x4f11f8u); LOADALL;
  /* 004f11fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f1200:;
  /* 004f1200 mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 004f1203 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f1205 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1207 mov ebx, 0xf */ { ebx = (u32)(0xfu); }
  /* 004f120c mov dword ptr [ebp - 0x84], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(ebx); }
  /* 004f1212 mov dword ptr [ebp - 0x88], edi */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(edi); }
  /* 004f1218 mov byte ptr [ebp - 0x98], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M8(m_) = (u8)(0x0u); }
  /* 004f121f jb 0x4f122d */ if (CF_) goto L_004f122d;
  /* 004f1221 mov edx, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); edx = (u32)(M32(m_)); }
  /* 004f1224 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f1225 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f122au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f1225u); RETCHK(0x4f122au, 0x4f1225u); LOADALL;
  /* 004f122a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f122d:;
  /* 004f122d cmp dword ptr [ebp - 0x4c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1230 mov dword ptr [ebp - 0x68], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ebx); }
  /* 004f1233 mov dword ptr [ebp - 0x6c], edi */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(edi); }
  /* 004f1236 mov byte ptr [ebp - 0x7c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M8(m_) = (u8)(0x0u); }
  /* 004f123a jb 0x4f1248 */ if (CF_) goto L_004f1248;
  /* 004f123c mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 004f123f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1240 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f1245u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f1240u); RETCHK(0x4f1245u, 0x4f1240u); LOADALL;
  /* 004f1245 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f1248:;
  /* 004f1248 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f124b mov dword ptr [ebp - 0x4c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ebx); }
  /* 004f124e mov dword ptr [ebp - 0x50], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edi); }
  /* 004f1251 mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 004f1255 jb 0x4f1263 */ if (CF_) goto L_004f1263;
  /* 004f1257 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 004f125a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f125b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f1260u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f125bu); RETCHK(0x4f1260u, 0x4f125bu); LOADALL;
  /* 004f1260 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f1263:;
  /* 004f1263 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_004f1265:;
  /* 004f1265 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1266 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004f1267:;
  /* 004f1267 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f126a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f1271 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004f1274 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1275 call 0x61af31 */ esp -= 4; M32(esp) = 0x4f127au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4f1275u); RETCHK(0x4f127au, 0x4f1275u); LOADALL;
  /* 004f127a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f127c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f127d ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f1280(CPU *c) {
  NATIVE_HOOK(0x4f1280u) REGS; LOADALL;
L_004f1280:;
  /* 004f1280 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1281 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f1283 call 0x53d4e0 */ esp -= 4; M32(esp) = 0x4f1288u; SAVEALL; F_0053d4e0(c); ABI_CHECK(0x53d4e0u, 0x4f1283u); RETCHK(0x4f1288u, 0x4f1283u); LOADALL;
  /* 004f1288 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f128b mov byte ptr [eax + 0x15], 1 */ { const u32 m_ = (u32)(eax + 0x15u); M8(m_) = (u8)(0x1u); }
  /* 004f128f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f1292 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f1295 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f1298 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 004f129a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f129d mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f12a0 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004f12a7 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f12a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f12aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f12b0(CPU *c) {
  NATIVE_HOOK(0x4f12b0u) REGS; LOADALL;
L_004f12b0:;
  /* 004f12b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f12b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f12b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f12b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f12b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f12b6 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f12b9 mov al, byte ptr [edi + 0x15] */ { const u32 m_ = (u32)(edi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f12bc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f12be mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f12c0 mov esi, edi */ { esi = (u32)(edi); }
  /* 004f12c2 jne 0x4f12e3 */ if (!ZF_) goto L_004f12e3;
L_004f12c4:;
  /* 004f12c4 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f12c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f12c8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f12ca call 0x4f12b0 */ esp -= 4; M32(esp) = 0x4f12cfu; SAVEALL; F_004f12b0(c); ABI_CHECK(0x4f12b0u, 0x4f12cau); RETCHK(0x4f12cfu, 0x4f12cau); LOADALL;
  /* 004f12cf mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 004f12d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f12d2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f12d7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f12d2u); RETCHK(0x4f12d7u, 0x4f12d2u); LOADALL;
  /* 004f12d7 mov al, byte ptr [esi + 0x15] */ { const u32 m_ = (u32)(esi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f12da add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f12dd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f12df mov edi, esi */ { edi = (u32)(esi); }
  /* 004f12e1 je 0x4f12c4 */ if (ZF_) goto L_004f12c4;
L_004f12e3:;
  /* 004f12e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f12e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f12e5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f12e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f12e7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f12f0(CPU *c) {
  NATIVE_HOOK(0x4f12f0u) REGS; LOADALL;
L_004f12f0:;
  /* 004f12f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f12f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f12f3 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f12f6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f12f9 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f12fb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f12fc mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 004f12ff jne 0x4f1337 */ if (!ZF_) goto L_004f1337;
  /* 004f1301 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1303 jne 0x4f1337 */ if (!ZF_) goto L_004f1337;
  /* 004f1305 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f1308 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1309 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f130b call 0x4f12b0 */ esp -= 4; M32(esp) = 0x4f1310u; SAVEALL; F_004f12b0(c); ABI_CHECK(0x4f12b0u, 0x4f130bu); RETCHK(0x4f1310u, 0x4f130bu); LOADALL;
  /* 004f1310 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f1313 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f1316 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f1319 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004f1320 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 004f1322 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f1325 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f1328 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f132b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f132d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f1330 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004f1332 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1333 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1334 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004f1337:;
  /* 004f1337 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1339 je 0x4f135d */ if (ZF_) goto L_004f135d;
  /* 004f133b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f133c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f1340:;
  /* 004f1340 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 004f1343 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f1345 call 0x53d420 */ esp -= 4; M32(esp) = 0x4f134au; SAVEALL; F_0053d420(c); ABI_CHECK(0x53d420u, 0x4f1345u); RETCHK(0x4f134au, 0x4f1345u); LOADALL;
  /* 004f134a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f134b lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 004f134e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f134f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1350 call 0x55fe30 */ esp -= 4; M32(esp) = 0x4f1355u; SAVEALL; F_0055fe30(c); ABI_CHECK(0x55fe30u, 0x4f1350u); RETCHK(0x4f1355u, 0x4f1350u); LOADALL;
  /* 004f1355 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f1358 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f135a jne 0x4f1340 */ if (!ZF_) goto L_004f1340;
  /* 004f135c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004f135d:;
  /* 004f135d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f1360 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004f1362 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004f1364 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1365 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1366 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004f1370(CPU *c) {
  NATIVE_HOOK(0x4f1370u) REGS; LOADALL;
L_004f1370:;
  /* 004f1370 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f1372 mov dl, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f1375 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f1377 jne 0x4f138b */ if (!ZF_) goto L_004f138b;
  /* 004f1379 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f1380:;
  /* 004f1380 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004f1382 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f1384 mov dl, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f1387 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f1389 je 0x4f1380 */ if (ZF_) goto L_004f1380;
L_004f138b:;
  /* 004f138b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f1390(CPU *c) {
  NATIVE_HOOK(0x4f1390u) REGS; LOADALL;
L_004f1390:;
  /* 004f1390 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1391 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f1393 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f1398u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f1393u); RETCHK(0x4f1398u, 0x4f1393u); LOADALL;
  /* 004f1398 mov dword ptr [esi], 0x64f344 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f344u); }
  /* 004f139e mov dword ptr [esi + 0x40], 0x122dee40 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x122dee40u); }
  /* 004f13a5 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f13a7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f13a8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f13b0(CPU *c) {
  NATIVE_HOOK(0x4f13b0u) REGS; LOADALL;
L_004f13b0:;
  /* 004f13b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f13b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f13b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f13b4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f13b6 call 0x4f13e0 */ esp -= 4; M32(esp) = 0x4f13bbu; SAVEALL; F_004f13e0(c); ABI_CHECK(0x4f13e0u, 0x4f13b6u); RETCHK(0x4f13bbu, 0x4f13b6u); LOADALL;
  /* 004f13bb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f13bf je 0x4f13ca */ if (ZF_) goto L_004f13ca;
  /* 004f13c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f13c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f13c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f13c2u); RETCHK(0x4f13c7u, 0x4f13c2u); LOADALL;
  /* 004f13c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f13ca:;
  /* 004f13ca mov eax, esi */ { eax = (u32)(esi); }
  /* 004f13cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f13cd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f13ce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f13e0(CPU *c) {
  NATIVE_HOOK(0x4f13e0u) REGS; LOADALL;
L_004f13e0:;
  /* 004f13e0 mov dword ptr [ecx], 0x64f344 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f344u); }
  /* 004f13e6 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f13f0(CPU *c) {
  NATIVE_HOOK(0x4f13f0u) REGS; LOADALL;
L_004f13f0:;
  /* 004f13f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f13f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f13f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f13f4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f13f6 push 0x122dee41 */ { u32 v_ = 0x122dee41u; esp -= 4; M32(esp) = v_; }
  /* 004f13fb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f13fd call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f1402u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f13fdu); RETCHK(0x4f1402u, 0x4f13fdu); LOADALL;
  /* 004f1402 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1403 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f1408u; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f1403u); RETCHK(0x4f1408u, 0x4f1403u); LOADALL;
  /* 004f1408 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f140a mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f140d je 0x4f1424 */ if (ZF_) goto L_004f1424;
  /* 004f140f call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f1414u; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f140fu); RETCHK(0x4f1414u, 0x4f140fu); LOADALL;
  /* 004f1414 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f1417 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1418 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f141a call 0x4f4240 */ esp -= 4; M32(esp) = 0x4f141fu; SAVEALL; F_004f4240(c); ABI_CHECK(0x4f4240u, 0x4f141au); RETCHK(0x4f141fu, 0x4f141au); LOADALL;
  /* 004f141f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1420 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1421 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f1424:;
  /* 004f1424 mov dword ptr [esi + 0x3c], 0xb */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f142b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f142d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f142e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f142f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f1440(CPU *c) {
  NATIVE_HOOK(0x4f1440u) REGS; LOADALL;
L_004f1440:;
  /* 004f1440 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f1441 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f1443 sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f1446 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f1447 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f1449 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f144c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f144d fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1450 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f1451 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 004f1454 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1457 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f145a fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f145d fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1460 mov dword ptr [ebx + 0x58], eax */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(eax); }
  /* 004f1463 mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f1466 cmp eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1469 fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f146c ja 0x4f198e */ if (!(CF_|ZF_)) goto L_004f198e;
  /* 004f1472 movzx ecx, byte ptr [eax + 0x4f19b0] */ { const u32 m_ = (u32)(eax + 0x4f19b0u); ecx = (u32)(M8(m_)); }
  /* 004f1479 jmp dword ptr [ecx*4 + 0x4f199c] */ { const u32 m_ = (u32)(ecx * 4u + 0x4f199cu); u32 t_ = M32(m_); switch (t_) { case 0x4f1480u: goto L_004f1480; case 0x4f14a0u: goto L_004f14a0; case 0x4f1884u: goto L_004f1884; case 0x4f1910u: goto L_004f1910; case 0x4f198eu: goto L_004f198e; default: SAVEALL; call_ind(c, t_); return; } }
L_004f1480:;
  /* 004f1480 mov edx, dword ptr [ebx + 0x78] */ { const u32 m_ = (u32)(ebx + 0x78u); edx = (u32)(M32(m_)); }
  /* 004f1483 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f1484 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4f1489u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4f1484u); RETCHK(0x4f1489u, 0x4f1484u); LOADALL;
  /* 004f1489 mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f148c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f148f add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f1492 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f1497 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f1499 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f149b jmp 0x4f1976 */ goto L_004f1976;
L_004f14a0:;
  /* 004f14a0 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f14a3 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f14a9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f14ab test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f14ae jp 0x4f1848 */ if (PF_) goto L_004f1848;
  /* 004f14b4 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f14b9u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f14b4u); RETCHK(0x4f14b9u, 0x4f14b4u); LOADALL;
  /* 004f14b9 lea edi, [ebx + 0x2c] */ edi = (u32)((u32)(ebx + 0x2cu));
  /* 004f14bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f14bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f14be mov edx, 0x12e487a */ { edx = (u32)(0x12e487au); }
  /* 004f14c3 call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f14c8u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f14c3u); RETCHK(0x4f14c8u, 0x4f14c3u); LOADALL;
  /* 004f14c8 mov edx, edi */ { edx = (u32)(edi); }
  /* 004f14ca mov ecx, 0x64f3c0 */ { ecx = (u32)(0x64f3c0u); }
  /* 004f14cf call 0x4afa80 */ esp -= 4; M32(esp) = 0x4f14d4u; SAVEALL; F_004afa80(c); ABI_CHECK(0x4afa80u, 0x4f14cfu); RETCHK(0x4f14d4u, 0x4f14cfu); LOADALL;
  /* 004f14d4 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f14d6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f14d8 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f14dbu; SAVEALL; call_ind(c, t_); RETCHK(0x4f14dbu, 0x4f14d8u); LOADALL; }
  /* 004f14db push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f14dd push 0x122dee40 */ { u32 v_ = 0x122dee40u; esp -= 4; M32(esp) = v_; }
  /* 004f14e2 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f14e7u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f14e2u); RETCHK(0x4f14e7u, 0x4f14e2u); LOADALL;
  /* 004f14e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f14e8 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f14edu; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f14e8u); RETCHK(0x4f14edu, 0x4f14e8u); LOADALL;
  /* 004f14ed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f14ef mov dword ptr [ebx + 0x5c], eax */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f14f2 je 0x4f1836 */ if (ZF_) goto L_004f1836;
  /* 004f14f8 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004f14fa call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f14ffu; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f14fau); RETCHK(0x4f14ffu, 0x4f14fau); LOADALL;
  /* 004f14ff mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f1502 mov eax, dword ptr [0x7a6ca4] */ { const u32 m_ = (u32)(0x7a6ca4u); eax = (u32)(M32(m_)); }
  /* 004f1507 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f1509 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f150a call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f150du; SAVEALL; call_ind(c, t_); RETCHK(0x4f150du, 0x4f150au); LOADALL; }
  /* 004f150d mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f150f mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f1512 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f1514 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f1517 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f151a mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f151d push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f151f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1521 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f1524 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f1529u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f1524u); RETCHK(0x4f1529u, 0x4f1524u); LOADALL;
  /* 004f1529 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f152a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f152c mov eax, 0x122dee40 */ { eax = (u32)(0x122dee40u); }
  /* 004f1531 call 0x4fb850 */ esp -= 4; M32(esp) = 0x4f1536u; SAVEALL; F_004fb850(c); ABI_CHECK(0x4fb850u, 0x4f1531u); RETCHK(0x4f1536u, 0x4f1531u); LOADALL;
  /* 004f1536 mov edi, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); edi = (u32)(M32(m_)); }
  /* 004f1539 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f153c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f153e call 0x544a10 */ esp -= 4; M32(esp) = 0x4f1543u; SAVEALL; F_00544a10(c); ABI_CHECK(0x544a10u, 0x4f153eu); RETCHK(0x4f1543u, 0x4f153eu); LOADALL;
  /* 004f1543 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f1546 fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004f1549 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 004f154c mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f154f fmul dword ptr [0x63f904] */ { const u32 m_ = (u32)(0x63f904u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1555 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f1558 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f155a fstp dword ptr [ebx + 0x90] */ { const u32 m_ = (u32)(ebx + 0x90u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1560 mov dword ptr [ebx + 0xa0], 0x41400000 */ { const u32 m_ = (u32)(ebx + 0xa0u); M32(m_) = (u32)(0x41400000u); }
  /* 004f156a mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 004f156d mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004f1570 lea edi, [ebp - 0x50] */ edi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004f1573 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f1576 jmp 0x4f1580 */ goto L_004f1580;
L_004f1578:;
  /* 004f1578 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f157b mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f157e mov edi, edi */ { edi = (u32)(edi); }
L_004f1580:;
  /* 004f1580 fld dword ptr [ecx + 0x64f380] */ { const u32 m_ = (u32)(ecx + 0x64f380u); FPUSH((double)MF32(m_)); }
  /* 004f1586 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f1587 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1589 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f158a fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f158c fld dword ptr [ecx + 0x64f380] */ { const u32 m_ = (u32)(ecx + 0x64f380u); FPUSH((double)MF32(m_)); }
  /* 004f1592 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1595 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1598 fld dword ptr [ecx + 0x64f380] */ { const u32 m_ = (u32)(ecx + 0x64f380u); FPUSH((double)MF32(m_)); }
  /* 004f159e fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f15a1 fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f15a4 fld dword ptr [ecx + 0x64f384] */ { const u32 m_ = (u32)(ecx + 0x64f384u); FPUSH((double)MF32(m_)); }
  /* 004f15aa fmul dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f15ad fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f15af fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f15b1 fld dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f15b4 fmul dword ptr [ecx + 0x64f384] */ { const u32 m_ = (u32)(ecx + 0x64f384u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f15ba fadd dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f15bd fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f15c0 fld dword ptr [ecx + 0x64f384] */ { const u32 m_ = (u32)(ecx + 0x64f384u); FPUSH((double)MF32(m_)); }
  /* 004f15c6 fmul dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f15c9 fadd dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f15cc fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f15cf call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f15d4u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f15cfu); RETCHK(0x4f15d4u, 0x4f15cfu); LOADALL;
  /* 004f15d4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f15d6 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f15d9 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 004f15db mov ecx, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); ecx = (u32)(M32(m_)); }
  /* 004f15e1 fmul dword ptr [ebx + 0x90] */ { const u32 m_ = (u32)(ebx + 0x90u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f15e7 mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f15ed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f15ee lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f15f1 fst dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); }
  /* 004f15f3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f15f5 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f15f8 fmul dword ptr [ebx + 0x90] */ { const u32 m_ = (u32)(ebx + 0x90u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f15fe fst dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); }
  /* 004f1601 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f1604 fmul dword ptr [ebx + 0x90] */ { const u32 m_ = (u32)(ebx + 0x90u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f160a fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 004f160d fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1610 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f1612 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1614 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1616 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1619 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f161c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f161f fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1622 mov eax, 0x63f82c */ { eax = (u32)(0x63f82cu); }
  /* 004f1627 fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f162a call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f162fu; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f162au); RETCHK(0x4f162fu, 0x4f162au); LOADALL;
  /* 004f162f fcom dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f1635 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f1638 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f163a test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f163d jp 0x4f165a */ if (PF_) goto L_004f165a;
  /* 004f163f fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f1642 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f1645 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f1647 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f1648 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f164b cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f164e fstp dword ptr [edi - 8] */ { const u32 m_ = (u32)(edi + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1651 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f1654 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f1656 jge 0x4f1678 */ if (!LT_) goto L_004f1678;
  /* 004f1658 jmp 0x4f165c */ goto L_004f165c;
L_004f165a:;
  /* 004f165a fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f165c:;
  /* 004f165c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f165f add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f1662 cmp eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1665 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f1668 jb 0x4f1578 */ if (CF_) goto L_004f1578;
  /* 004f166e cmp dword ptr [ebp + 0xc], 3 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1672 jl 0x4f17f2 */ if (LT_) goto L_004f17f2;
L_004f1678:;
  /* 004f1678 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f167b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f167c lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 004f167f lea esi, [ebp - 0x44] */ esi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 004f1682 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004f1685 call 0x547cf0 */ esp -= 4; M32(esp) = 0x4f168au; SAVEALL; F_00547cf0(c); ABI_CHECK(0x547cf0u, 0x4f1685u); RETCHK(0x4f168au, 0x4f1685u); LOADALL;
  /* 004f168a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f168d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f168f je 0x4f17f2 */ if (ZF_) goto L_004f17f2;
  /* 004f1695 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f1698 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f169e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f16a0 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f16a3 jp 0x4f16ad */ if (PF_) goto L_004f16ad;
  /* 004f16a5 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f16a8 fchs */ ST(0) = -ST(0);
  /* 004f16aa fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f16ad:;
  /* 004f16ad lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f16b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f16b1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f16b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f16b4 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f16b9u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f16b4u); RETCHK(0x4f16b9u, 0x4f16b4u); LOADALL;
  /* 004f16b9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f16bb mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f16be lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f16c1 call 0x4eea10 */ esp -= 4; M32(esp) = 0x4f16c6u; SAVEALL; F_004eea10(c); ABI_CHECK(0x4eea10u, 0x4f16c1u); RETCHK(0x4f16c6u, 0x4f16c1u); LOADALL;
  /* 004f16c6 fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 004f16c9 fadd dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f16cc mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f16cf fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004f16d2 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f16d4 fadd dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f16d7 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004f16da fadd dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f16dd fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f16e0 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 004f16e3 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 004f16e5 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f16e8 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 004f16eb fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 004f16ed fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f16f0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f16f2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f16f4 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 004f16f7 fadd dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f16fa fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f16fd fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 004f1700 fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1706 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1708 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 004f170b mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f170e fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1714 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1717 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 004f171a mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f171d fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1723 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f1726 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1729 mov edx, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); edx = (u32)(M32(m_)); }
  /* 004f172f mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f1732 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f1733 mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f1739 call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f173eu; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f1739u); RETCHK(0x4f173eu, 0x4f1739u); LOADALL;
  /* 004f173e fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f1744 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f1747 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f1749 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f174c jp 0x4f1778 */ if (PF_) goto L_004f1778;
  /* 004f174e mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f1751 fchs */ ST(0) = -ST(0);
  /* 004f1753 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004f1756 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f1758 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f175a fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f175c mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f175f fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f1762 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f1764 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1767 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f176a mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f176d fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1770 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1773 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1776 jmp 0x4f177a */ goto L_004f177a;
L_004f1778:;
  /* 004f1778 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f177a:;
  /* 004f177a mov edx, dword ptr [0x7a6cd4] */ { const u32 m_ = (u32)(0x7a6cd4u); edx = (u32)(M32(m_)); }
  /* 004f1780 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f1783 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1784 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f1787 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f178a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f178b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f178c push 0x7a6cac */ { u32 v_ = 0x7a6cacu; esp -= 4; M32(esp) = v_; }
  /* 004f1791 call 0x545680 */ esp -= 4; M32(esp) = 0x4f1796u; SAVEALL; F_00545680(c); ABI_CHECK(0x545680u, 0x4f1791u); RETCHK(0x4f1796u, 0x4f1791u); LOADALL;
  /* 004f1796 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004f1799 fchs */ ST(0) = -ST(0);
  /* 004f179b mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f179e fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004f17a1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f17a4 fchs */ ST(0) = -ST(0);
  /* 004f17a6 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f17a9 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004f17ac fchs */ ST(0) = -ST(0);
  /* 004f17ae fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f17b1 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f17b4 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f17b6 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004f17b8 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f17bb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f17bd fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004f17c0 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f17c3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f17c5 fchs */ ST(0) = -ST(0);
  /* 004f17c7 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 004f17ca fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f17cd fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 004f17cf fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f17d2 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f17d5 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f17d8 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 004f17da fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f17dd fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f17df fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f17e1 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f17e4 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f17e7 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f17ea fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f17ed call 0x4afa60 */ esp -= 4; M32(esp) = 0x4f17f2u; SAVEALL; F_004afa60(c); ABI_CHECK(0x4afa60u, 0x4f17edu); RETCHK(0x4f17f2u, 0x4f17edu); LOADALL;
L_004f17f2:;
  /* 004f17f2 mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f17f5 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f17f7 lea eax, [ebx + 0x84] */ eax = (u32)((u32)(ebx + 0x84u));
  /* 004f17fd mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004f17ff mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f1802 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f1805 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f1808 mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f180b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f180e add edx, 0x20 */ { u32 a_ = edx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f1811 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 004f1813 lea eax, [ebx + 0x94] */ eax = (u32)((u32)(ebx + 0x94u));
  /* 004f1819 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004f181b mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f181e mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f1821 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f1824 mov dword ptr [ebx + 0x3c], 5 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x5u); }
  /* 004f182b mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 004f182e mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f1831 jmp 0x4f1976 */ goto L_004f1976;
L_004f1836:;
  /* 004f1836 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1837 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1838 mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f183f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f1841 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1842 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f1844 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1845 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f1848:;
  /* 004f1848 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f184b mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f184e fmul dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1851 fadd dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1854 fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1857 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f185a fmul dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f185d fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f185f fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1861 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f1864 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f1867 fmul dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f186a fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f186d fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1870 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f1873 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f1876 fmul dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1879 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f187c fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f187f jmp 0x4f1976 */ goto L_004f1976;
L_004f1884:;
  /* 004f1884 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f1887 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f188a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f188c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f188d call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f1890u; SAVEALL; call_ind(c, t_); RETCHK(0x4f1890u, 0x4f188du); LOADALL; }
  /* 004f1890 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f1893 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1895 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 004f189c mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f189f jle 0x4f1904 */ if ((ZF_|LT_)) goto L_004f1904;
  /* 004f18a1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f18a4 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f18a7 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f18a9 lea esi, [ebx + 0x84] */ esi = (u32)((u32)(ebx + 0x84u));
  /* 004f18af mov edi, eax */ { edi = (u32)(eax); }
L_004f18b1:;
  /* 004f18b1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f18b4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f18b5 sub edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f18b8 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f18bb call 0x5480f0 */ esp -= 4; M32(esp) = 0x4f18c0u; SAVEALL; F_005480f0(c); ABI_CHECK(0x5480f0u, 0x4f18bbu); RETCHK(0x4f18c0u, 0x4f18bbu); LOADALL;
  /* 004f18c0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f18c2 jne 0x4f18d7 */ if (!ZF_) goto L_004f18d7;
  /* 004f18c4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f18c7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f18c9 jg 0x4f18b1 */ if (!(ZF_|LT_)) goto L_004f18b1;
  /* 004f18cb mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f18ce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f18cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f18d0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f18d1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f18d3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f18d4 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f18d7:;
  /* 004f18d7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f18da mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f18df shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f18e1 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004f18e4 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f18e7 add ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f18ea mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f18ec lea eax, [ebx + 0x2c] */ eax = (u32)((u32)(ebx + 0x2cu));
  /* 004f18ef mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004f18f1 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f18f4 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f18f7 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f18fa mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004f18fc mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f18ff mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f1901 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f1904u; SAVEALL; call_ind(c, t_); RETCHK(0x4f1904u, 0x4f1901u); LOADALL; }
L_004f1904:;
  /* 004f1904 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f1907 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1908 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1909 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f190a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f190c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f190d ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f1910:;
  /* 004f1910 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f1913 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f1916 fmul dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1919 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f191a fadd dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f191d fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1920 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f1923 fmul dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1926 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1928 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f192a mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f192d fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f1930 fmul dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1933 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1936 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1939 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f193c fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f193f fmul dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1942 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1945 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1948 mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f194b fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f194e fmul dword ptr [0x657114] */ { const u32 m_ = (u32)(0x657114u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1954 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1957 call 0x5467e0 */ esp -= 4; M32(esp) = 0x4f195cu; SAVEALL; F_005467e0(c); ABI_CHECK(0x5467e0u, 0x4f1957u); RETCHK(0x4f195cu, 0x4f1957u); LOADALL;
  /* 004f195c fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f195f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f1962 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f1968 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f196a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f196d jp 0x4f1976 */ if (PF_) goto L_004f1976;
  /* 004f196f mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f1976:;
  /* 004f1976 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f1979 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f197c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f197d call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f1982u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f197du); RETCHK(0x4f1982u, 0x4f197du); LOADALL;
  /* 004f1982 mov ecx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f1985 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f1986 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f198bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f1986u); RETCHK(0x4f198bu, 0x4f1986u); LOADALL;
  /* 004f198b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f198e:;
  /* 004f198e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f198f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1990 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f1992 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1993 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f1995 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1996 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f19c0(CPU *c) {
  NATIVE_HOOK(0x4f19c0u) REGS; LOADALL;
L_004f19c0:;
  /* 004f19c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f19c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f19c3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f19c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f19c7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f19c9 mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004f19cc mov eax, 9 */ { eax = (u32)(0x9u); }
  /* 004f19d1 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f19d3 je 0x4f1a9b */ if (ZF_) goto L_004f1a9b;
  /* 004f19d9 mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 004f19dc mov eax, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f19df mov dword ptr [esi + 0x58], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0x3f800000u); }
  /* 004f19e6 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f19e8 fsub dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f19eb fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f19ee fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f19f1 fsub dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f19f4 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f19f7 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f19fa mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 004f1a01 fsub dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1a04 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1a07 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f1a0a fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1a0d fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f1a10 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1a13 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f1a15 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f1a1b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f1a1d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f1a20 jne 0x4f1a33 */ if (!ZF_) goto L_004f1a33;
  /* 004f1a22 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f1a25 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1a26 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f1a28 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f1a29 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f1a2eu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f1a29u); RETCHK(0x4f1a2eu, 0x4f1a29u); LOADALL;
  /* 004f1a2e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f1a30 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f1a33:;
  /* 004f1a33 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f1a36 lea edx, [ebp - 0xc] */ edx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f1a39 fadd dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1a3f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f1a40 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f1a42 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1a43 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1a46 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f1a4bu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f1a46u); RETCHK(0x4f1a4bu, 0x4f1a46u); LOADALL;
  /* 004f1a4b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f1a4d mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f1a52 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f1a55 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f1a58 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1a5a fmul dword ptr [0x657124] */ { const u32 m_ = (u32)(0x657124u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1a60 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1a63 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f1a66 fmul dword ptr [0x657124] */ { const u32 m_ = (u32)(0x657124u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1a6c fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1a6f fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f1a72 fmul dword ptr [0x657124] */ { const u32 m_ = (u32)(0x657124u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1a78 fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1a7b je 0x4f1a94 */ if (ZF_) goto L_004f1a94;
  /* 004f1a7d mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f1a80 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1a82 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f1a87 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1a89 push 0x64f374 */ { u32 v_ = 0x64f374u; esp -= 4; M32(esp) = v_; }
  /* 004f1a8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1a8f call 0x531340 */ esp -= 4; M32(esp) = 0x4f1a94u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f1a8fu); RETCHK(0x4f1a94u, 0x4f1a8fu); LOADALL;
L_004f1a94:;
  /* 004f1a94 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f1a96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1a97 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f1a99 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1a9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004f1a9b:;
  /* 004f1a9b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f1a9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1a9e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f1aa0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1aa1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f1ab0(CPU *c) {
  NATIVE_HOOK(0x4f1ab0u) REGS; LOADALL;
L_004f1ab0:;
  /* 004f1ab0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1ab1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f1ab2 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f1ab4 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f1ab9u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f1ab4u); RETCHK(0x4f1ab9u, 0x4f1ab4u); LOADALL;
  /* 004f1ab9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f1abb lea edi, [esi + 0x90] */ edi = (u32)((u32)(esi + 0x90u));
  /* 004f1ac1 mov dword ptr [esi], 0x64f3d8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f3d8u); }
  /* 004f1ac7 mov dword ptr [esi + 0x40], 0x12002780 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x12002780u); }
  /* 004f1ace mov ecx, 0x28 */ { ecx = (u32)(0x28u); }
  /* 004f1ad3 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004f1ad5 mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f1adb mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f1ae1 mov dword ptr [esi + 0x8c], eax */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(eax); }
  /* 004f1ae7 mov byte ptr [esi + 0x88], al */ { const u32 m_ = (u32)(esi + 0x88u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f1aed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1aee mov byte ptr [esi + 0x50], 1 */ { const u32 m_ = (u32)(esi + 0x50u); M8(m_) = (u8)(0x1u); }
  /* 004f1af2 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f1af4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1af5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f1b00(CPU *c) {
  NATIVE_HOOK(0x4f1b00u) REGS; LOADALL;
L_004f1b00:;
  /* 004f1b00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f1b01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f1b03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1b04 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f1b06 call 0x4f1b30 */ esp -= 4; M32(esp) = 0x4f1b0bu; SAVEALL; F_004f1b30(c); ABI_CHECK(0x4f1b30u, 0x4f1b06u); RETCHK(0x4f1b0bu, 0x4f1b06u); LOADALL;
  /* 004f1b0b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f1b0f je 0x4f1b1a */ if (ZF_) goto L_004f1b1a;
  /* 004f1b11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1b12 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f1b17u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f1b12u); RETCHK(0x4f1b17u, 0x4f1b12u); LOADALL;
  /* 004f1b17 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f1b1a:;
  /* 004f1b1a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f1b1c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1b1d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1b1e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f1b30(CPU *c) {
  NATIVE_HOOK(0x4f1b30u) REGS; LOADALL;
L_004f1b30:;
  /* 004f1b30 mov dword ptr [ecx], 0x64f3d8 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f3d8u); }
  /* 004f1b36 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f1b40(CPU *c) {
  NATIVE_HOOK(0x4f1b40u) REGS; LOADALL;
L_004f1b40:;
  /* 004f1b40 mov dword ptr [ecx + 0x54], 0x3fcccccd */ { const u32 m_ = (u32)(ecx + 0x54u); M32(m_) = (u32)(0x3fcccccdu); }
  /* 004f1b47 mov dword ptr [ecx + 0x3c], 0 */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 004f1b4e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f1b50 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f1b60(CPU *c) {
  NATIVE_HOOK(0x4f1b60u) REGS; LOADALL;
L_004f1b60:;
  /* 004f1b60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f1b61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f1b63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1b64 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f1b66 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f1b67 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f1b6a mov dword ptr [esi + 0x3c], 2 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x2u); }
  /* 004f1b71 mov eax, dword ptr [edi + 0x58] */ { const u32 m_ = (u32)(edi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004f1b74 mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f1b7a call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f1b7fu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f1b7au); RETCHK(0x4f1b7fu, 0x4f1b7au); LOADALL;
  /* 004f1b7f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1b81 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1b83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1b84 mov edx, 0x12002782 */ { edx = (u32)(0x12002782u); }
  /* 004f1b89 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f1b8eu; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f1b89u); RETCHK(0x4f1b8eu, 0x4f1b89u); LOADALL;
  /* 004f1b8e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1b90 mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f1b96 je 0x4f1bca */ if (ZF_) goto L_004f1bca;
  /* 004f1b98 mov dword ptr [eax + 0x38], 0 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x0u); }
  /* 004f1b9f mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f1ba4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1ba6 je 0x4f1bc2 */ if (ZF_) goto L_004f1bc2;
  /* 004f1ba8 mov edx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f1bab push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1bad push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f1bb2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1bb4 push 0x64f42c */ { u32 v_ = 0x64f42cu; esp -= 4; M32(esp) = v_; }
  /* 004f1bb9 add edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f1bbc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1bbd call 0x531340 */ esp -= 4; M32(esp) = 0x4f1bc2u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f1bbdu); RETCHK(0x4f1bc2u, 0x4f1bbdu); LOADALL;
L_004f1bc2:;
  /* 004f1bc2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1bc3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f1bc5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1bc6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1bc7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f1bca:;
  /* 004f1bca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1bcb mov dword ptr [esi + 0x3c], 0xb */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f1bd2 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f1bd4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1bd5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1bd6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f1be0(CPU *c) {
  NATIVE_HOOK(0x4f1be0u) REGS; LOADALL;
L_004f1be0:;
  /* 004f1be0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f1be1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f1be3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f1be6 mov edx, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); edx = (u32)(M32(m_)); }
  /* 004f1be9 mov dword ptr [ecx + 0x84], edx */ { const u32 m_ = (u32)(ecx + 0x84u); M32(m_) = (u32)(edx); }
  /* 004f1bef mov dword ptr [ecx + 0x80], 0 */ { const u32 m_ = (u32)(ecx + 0x80u); M32(m_) = (u32)(0x0u); }
  /* 004f1bf9 mov dl, byte ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f1bfc mov byte ptr [ecx + 0x88], dl */ { const u32 m_ = (u32)(ecx + 0x88u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 004f1c02 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f1c05 mov dword ptr [ecx + 0x98], edx */ { const u32 m_ = (u32)(ecx + 0x98u); M32(m_) = (u32)(edx); }
  /* 004f1c0b mov edx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); edx = (u32)(M32(m_)); }
  /* 004f1c0e mov dword ptr [ecx + 0x90], edx */ { const u32 m_ = (u32)(ecx + 0x90u); M32(m_) = (u32)(edx); }
  /* 004f1c14 mov edx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f1c17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1c18 mov dword ptr [ecx + 0x94], edx */ { const u32 m_ = (u32)(ecx + 0x94u); M32(m_) = (u32)(edx); }
  /* 004f1c1e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f1c1f lea edx, [ecx + 0x130] */ edx = (u32)((u32)(ecx + 0x130u));
  /* 004f1c25 add eax, 0x4c */ { u32 a_ = eax, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f1c28 mov esi, 3 */ { esi = (u32)(0x3u); }
  /* 004f1c2d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f1c30:;
  /* 004f1c30 mov edi, dword ptr [eax - 0x10] */ { const u32 m_ = (u32)(eax + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 004f1c33 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f1c36 sub edx, 0x28 */ { u32 a_ = edx, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f1c39 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f1c3a mov dword ptr [edx + 8], edi */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(edi); }
  /* 004f1c3d mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 004f1c3f mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 004f1c41 mov edi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f1c44 mov dword ptr [edx + 4], edi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(edi); }
  /* 004f1c47 jne 0x4f1c30 */ if (!ZF_) goto L_004f1c30;
  /* 004f1c49 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1c4a mov dword ptr [ecx + 0x3c], 5 */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0x5u); }
  /* 004f1c51 mov dword ptr [ecx + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(ecx + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f1c58 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f1c5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1c5b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1c5c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f1c60(CPU *c) {
  NATIVE_HOOK(0x4f1c60u) REGS; LOADALL;
L_004f1c60:;
  /* 004f1c60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f1c61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f1c63 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f1c66 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f1c67 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f1c69 fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f1c6c mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f1c6f fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1c72 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f1c74 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f1c77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1c78 fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1c7b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f1c7c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004f1c7f mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 004f1c82 je 0x4f20b6 */ if (ZF_) goto L_004f20b6;
  /* 004f1c88 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f1c8b je 0x4f1f53 */ if (ZF_) goto L_004f1f53;
  /* 004f1c91 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f1c94 jne 0x4f215b */ if (!ZF_) goto L_004f215b;
  /* 004f1c9a lea esi, [ebx + 0x130] */ esi = (u32)((u32)(ebx + 0x130u));
  /* 004f1ca0 mov dword ptr [ebp + 0x14], 4 */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(0x4u); }
L_004f1ca7:;
  /* 004f1ca7 mov ecx, dword ptr [esi - 0x28] */ { const u32 m_ = (u32)(esi + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 004f1caa sub esi, 0x28 */ { u32 a_ = esi, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f1cad test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1caf je 0x4f1e6b */ if (ZF_) goto L_004f1e6b;
  /* 004f1cb5 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004f1cb8 lea eax, [ecx + 0x30] */ eax = (u32)((u32)(ecx + 0x30u));
  /* 004f1cbb fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1cc1 fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004f1cc4 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1cca fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 004f1ccd mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f1cd0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1cd2 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1cd8 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1cdb fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f1cdd fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1cdf fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1ce2 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1ce5 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1ce8 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f1ceb fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f1cee fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1cf1 je 0x4f1dc3 */ if (ZF_) goto L_004f1dc3;
  /* 004f1cf7 mov ecx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f1cfa add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f1cfd mov edx, eax */ { edx = (u32)(eax); }
  /* 004f1cff mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 004f1d01 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 004f1d03 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 004f1d06 mov dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edi); }
  /* 004f1d09 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f1d0c mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f1d0f mov ebx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); ebx = (u32)(M32(m_)); }
  /* 004f1d15 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f1d18 fld dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f1d1b fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1d1d fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1d20 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f1d23 fld dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 004f1d26 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f1d29 fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1d2c fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1d2f mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f1d32 fld dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 004f1d35 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 004f1d3c fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1d3f lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f1d42 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1d45 mov edi, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f1d48 lea ebx, [edi + 0x10] */ ebx = (u32)((u32)(edi + 0x10u));
  /* 004f1d4b call 0x546b80 */ esp -= 4; M32(esp) = 0x4f1d50u; SAVEALL; F_00546b80(c); ABI_CHECK(0x546b80u, 0x4f1d4bu); RETCHK(0x4f1d50u, 0x4f1d4bu); LOADALL;
  /* 004f1d50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1d52 je 0x4f1d5d */ if (ZF_) goto L_004f1d5d;
  /* 004f1d54 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f1d55 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f1d5au; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f1d55u); RETCHK(0x4f1d5au, 0x4f1d55u); LOADALL;
  /* 004f1d5a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f1d5d:;
  /* 004f1d5d mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f1d60 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1d62 jne 0x4f1da0 */ if (!ZF_) goto L_004f1da0;
  /* 004f1d64 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f1d67 cmp dword ptr [eax + 0x24], 0xf */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = M32(m_), b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1d6b jle 0x4f1da0 */ if ((ZF_|LT_)) goto L_004f1da0;
  /* 004f1d6d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f1d6f mov ecx, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); ecx = (u32)(M32(m_)); }
  /* 004f1d75 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f1d78 add edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f1d7b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1d7d mov dword ptr [esi + 0x18], 1 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x1u); }
  /* 004f1d84 je 0x4f1d9b */ if (ZF_) goto L_004f1d9b;
  /* 004f1d86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1d87 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f1d8c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1d8e push 0x64f414 */ { u32 v_ = 0x64f414u; esp -= 4; M32(esp) = v_; }
  /* 004f1d93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f1d94 call 0x531340 */ esp -= 4; M32(esp) = 0x4f1d99u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f1d94u); RETCHK(0x4f1d99u, 0x4f1d94u); LOADALL;
  /* 004f1d99 jmp 0x4f1d9d */ goto L_004f1d9d;
L_004f1d9b:;
  /* 004f1d9b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f1d9d:;
  /* 004f1d9d mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
L_004f1da0:;
  /* 004f1da0 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f1da3 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f1da6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1da8 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 004f1dab jne 0x4f1dc3 */ if (!ZF_) goto L_004f1dc3;
  /* 004f1dad mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f1db4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f1db6 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 004f1dbd dec dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_004f1dc3:;
  /* 004f1dc3 mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 004f1dc6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1dc8 je 0x4f1e17 */ if (ZF_) goto L_004f1e17;
  /* 004f1dca mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f1dcd mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004f1dd0 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f1dd3 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f1dd6 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f1dd8 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 004f1ddb mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f1dde mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f1de1 mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f1de4 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f1de7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1de8 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f1dedu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f1de8u); RETCHK(0x4f1dedu, 0x4f1de8u); LOADALL;
  /* 004f1ded mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f1df0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f1df1 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f1df6u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f1df1u); RETCHK(0x4f1df6u, 0x4f1df1u); LOADALL;
  /* 004f1df6 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f1df9 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f1dfc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f1dff test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1e01 jne 0x4f1e17 */ if (!ZF_) goto L_004f1e17;
  /* 004f1e03 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f1e0a mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 004f1e11 dec dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_004f1e17:;
  /* 004f1e17 mov edi, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edi = (u32)(M32(m_)); }
  /* 004f1e1a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1e1c je 0x4f1e6b */ if (ZF_) goto L_004f1e6b;
  /* 004f1e1e mov edx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f1e21 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f1e24 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004f1e27 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f1e2a mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004f1e2c mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f1e2f mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f1e32 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f1e35 mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f1e38 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f1e3b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f1e3c call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f1e41u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f1e3cu); RETCHK(0x4f1e41u, 0x4f1e3cu); LOADALL;
  /* 004f1e41 mov edx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f1e44 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f1e45 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f1e4au; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f1e45u); RETCHK(0x4f1e4au, 0x4f1e45u); LOADALL;
  /* 004f1e4a mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f1e4d mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f1e50 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f1e53 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1e55 jne 0x4f1e6b */ if (!ZF_) goto L_004f1e6b;
  /* 004f1e57 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f1e5e mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 004f1e65 dec dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_004f1e6b:;
  /* 004f1e6b dec dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f1e6e jne 0x4f1ca7 */ if (!ZF_) goto L_004f1ca7;
  /* 004f1e74 mov edi, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); edi = (u32)(M32(m_)); }
  /* 004f1e7a mov eax, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 004f1e7d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1e7f je 0x4f1f32 */ if (ZF_) goto L_004f1f32;
  /* 004f1e85 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f1e88 fcomp dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f1e8e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f1e90 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f1e93 jne 0x4f1f05 */ if (!ZF_) goto L_004f1f05;
  /* 004f1e95 mov esi, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); esi = (u32)(M32(m_)); }
  /* 004f1e9b test esi, 0xff000000 */ { u32 a_ = esi, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1ea1 je 0x4f1ef2 */ if (ZF_) goto L_004f1ef2;
  /* 004f1ea3 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f1ea6 fmul dword ptr [0x65700c] */ { const u32 m_ = (u32)(0x65700cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f1eac call 0x61b154 */ esp -= 4; M32(esp) = 0x4f1eb1u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f1eacu); RETCHK(0x4f1eb1u, 0x4f1eacu); LOADALL;
  /* 004f1eb1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1eb3 jne 0x4f1eba */ if (!ZF_) goto L_004f1eba;
  /* 004f1eb5 mov eax, 1 */ { eax = (u32)(0x1u); }
L_004f1eba:;
  /* 004f1eba mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f1ebc shr ecx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004f1ebf cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f1ec1 jb 0x4f1eda */ if (CF_) goto L_004f1eda;
  /* 004f1ec3 shl eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f1ec6 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f1ec8 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f1ecb mov dword ptr [edi + 0x80], esi */ { const u32 m_ = (u32)(edi + 0x80u); M32(m_) = (u32)(esi); }
  /* 004f1ed1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1ed2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1ed3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1ed4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f1ed6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1ed7 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f1eda:;
  /* 004f1eda mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f1edd and esi, 0xffffff */ { u32 a_ = esi, b_ = 0xffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f1ee3 mov dword ptr [edi + 0x80], esi */ { const u32 m_ = (u32)(edi + 0x80u); M32(m_) = (u32)(esi); }
  /* 004f1ee9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1eea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1eeb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1eec mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f1eee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1eef ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f1ef2:;
  /* 004f1ef2 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f1ef5 mov dword ptr [edi + 0x7c], 0 */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(0x0u); }
  /* 004f1efc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1efd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1efe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1eff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f1f01 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1f02 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f1f05:;
  /* 004f1f05 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f1f08 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1f0b fst dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); MF32(m_) = (float)ST(0); }
  /* 004f1f0e fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f1f14 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f1f16 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f1f19 jp 0x4f215b */ if (PF_) goto L_004f215b;
  /* 004f1f1f mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f1f22 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1f23 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1f24 mov dword ptr [ebx + 0x58], 0x7f7fffff */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f1f2b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1f2c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f1f2e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1f2f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f1f32:;
  /* 004f1f32 mov eax, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f1f38 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1f3a jg 0x4f215b */ if (!(ZF_|LT_)) goto L_004f215b;
  /* 004f1f40 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f1f43 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f1f44 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f1f45 mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f1f4c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f1f4d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f1f4f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f1f50 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f1f53:;
  /* 004f1f53 mov dword ptr [ebx + 0x3c], 8 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x8u); }
  /* 004f1f5a mov dword ptr [ebx + 0x8c], ecx */ { const u32 m_ = (u32)(ebx + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 004f1f60 lea edi, [ebx + 0x13c] */ edi = (u32)((u32)(ebx + 0x13cu));
  /* 004f1f66 mov dword ptr [ebp + 8], 4 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x4u); }
  /* 004f1f6d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f1f70:;
  /* 004f1f70 mov esi, dword ptr [edi - 0x34] */ { const u32 m_ = (u32)(edi + 0xffffffccu); esi = (u32)(M32(m_)); }
  /* 004f1f73 sub edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f1f76 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1f78 je 0x4f206f */ if (ZF_) goto L_004f206f;
  /* 004f1f7e add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f1f81 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f1f86u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f1f81u); RETCHK(0x4f1f86u, 0x4f1f81u); LOADALL;
  /* 004f1f86 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1f88 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f1f8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f1f8b mov edx, 0x12002780 */ { edx = (u32)(0x12002780u); }
  /* 004f1f90 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f1f95u; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f1f90u); RETCHK(0x4f1f95u, 0x4f1f90u); LOADALL;
  /* 004f1f95 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1f97 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 004f1f99 je 0x4f2046 */ if (ZF_) goto L_004f2046;
  /* 004f1f9f mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f1fa2 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f1fa5 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f1fa7 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f1fa9 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 004f1fab mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f1fae mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f1fb1 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f1fb4 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f1fb7 mov ebx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); ebx = (u32)(M32(m_)); }
  /* 004f1fbd mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f1fc0 fld dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f1fc3 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004f1fc5 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1fc7 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1fca mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f1fcd fld dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 004f1fd0 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1fd3 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1fd6 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f1fd9 fld dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); FPUSH((double)MF32(m_)); }
  /* 004f1fdc mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 004f1fe3 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f1fe6 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f1fe9 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 004f1fec lea ebx, [esi + 0x10] */ ebx = (u32)((u32)(esi + 0x10u));
  /* 004f1fef lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f1ff2 call 0x546b80 */ esp -= 4; M32(esp) = 0x4f1ff7u; SAVEALL; F_00546b80(c); ABI_CHECK(0x546b80u, 0x4f1ff2u); RETCHK(0x4f1ff7u, 0x4f1ff2u); LOADALL;
  /* 004f1ff7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f1ff9 je 0x4f2004 */ if (ZF_) goto L_004f2004;
  /* 004f1ffb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f1ffc call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f2001u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f1ffcu); RETCHK(0x4f2001u, 0x4f1ffcu); LOADALL;
  /* 004f2001 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f2004:;
  /* 004f2004 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f2006 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f2009 mov dword ptr [edx + 0x38], 0 */ { const u32 m_ = (u32)(edx + 0x38u); M32(m_) = (u32)(0x0u); }
  /* 004f2010 inc dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f2016 mov edx, dword ptr [edi - 0xc] */ { const u32 m_ = (u32)(edi + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 004f2019 mov ecx, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); ecx = (u32)(M32(m_)); }
  /* 004f201f mov eax, dword ptr [edi - 8] */ { const u32 m_ = (u32)(edi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f2022 add edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f2025 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2027 je 0x4f203e */ if (ZF_) goto L_004f203e;
  /* 004f2029 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f202a push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f202f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2031 push 0x64f420 */ { u32 v_ = 0x64f420u; esp -= 4; M32(esp) = v_; }
  /* 004f2036 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2037 call 0x531340 */ esp -= 4; M32(esp) = 0x4f203cu; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f2037u); RETCHK(0x4f203cu, 0x4f2037u); LOADALL;
  /* 004f203c jmp 0x4f2040 */ goto L_004f2040;
L_004f203e:;
  /* 004f203e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f2040:;
  /* 004f2040 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 004f2043 mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
L_004f2046:;
  /* 004f2046 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f2049 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f204b jle 0x4f206f */ if ((ZF_|LT_)) goto L_004f206f;
  /* 004f204d mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_004f2050:;
  /* 004f2050 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004f2053 mov esi, dword ptr [edx + ecx*4 - 4] */ { const u32 m_ = (u32)(edx + ecx * 4u + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f2057 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f2058 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f205a jne 0x4f206b */ if (!ZF_) goto L_004f206b;
  /* 004f205c mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 004f205f mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 004f2064 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f2066 or esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f2068 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
L_004f206b:;
  /* 004f206b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f206d jg 0x4f2050 */ if (!(ZF_|LT_)) goto L_004f2050;
L_004f206f:;
  /* 004f206f dec dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f2072 jne 0x4f1f70 */ if (!ZF_) goto L_004f1f70;
  /* 004f2078 mov al, byte ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f207e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2080 je 0x4f215b */ if (ZF_) goto L_004f215b;
  /* 004f2086 mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f208c mov dword ptr [eax + 0x7c], 1 */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(0x1u); }
  /* 004f2093 mov ecx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004f2099 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f209c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f209d mov dword ptr [ecx + 0x80], 0xc0000000 */ { const u32 m_ = (u32)(ecx + 0x80u); M32(m_) = (u32)(0xc0000000u); }
  /* 004f20a7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f20a8 mov dword ptr [ebx + 0x58], 0x3e4ccccd */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(0x3e4ccccdu); }
  /* 004f20af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f20b0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f20b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f20b3 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f20b6:;
  /* 004f20b6 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f20bc cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f20be je 0x4f215b */ if (ZF_) goto L_004f215b;
  /* 004f20c4 cmp dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f20c7 jne 0x4f20f0 */ if (!ZF_) goto L_004f20f0;
  /* 004f20c9 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f20d0 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f20d3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f20d4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f20d5 mov dword ptr [ebx + 0x80], ecx */ { const u32 m_ = (u32)(ebx + 0x80u); M32(m_) = (u32)(ecx); }
  /* 004f20db mov dword ptr [ebx + 0x3c], 5 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x5u); }
  /* 004f20e2 mov byte ptr [ebx + 0x88], 0 */ { const u32 m_ = (u32)(ebx + 0x88u); M8(m_) = (u8)(0x0u); }
  /* 004f20e9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f20ea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f20ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f20ed ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f20f0:;
  /* 004f20f0 mov edx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); edx = (u32)(M32(m_)); }
  /* 004f20f6 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f20f9 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f20fc mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f20ff add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f2102 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f2105 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f210a mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 004f210d mov dword ptr [ebp + 0x14], edi */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(edi); }
  /* 004f2110 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f2112 mov edx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); edx = (u32)(M32(m_)); }
  /* 004f2118 mov edx, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f211b push 0x43340000 */ { u32 v_ = 0x43340000u; esp -= 4; M32(esp) = v_; }
  /* 004f2120 call 0x5467e0 */ esp -= 4; M32(esp) = 0x4f2125u; SAVEALL; F_005467e0(c); ABI_CHECK(0x5467e0u, 0x4f2120u); RETCHK(0x4f2125u, 0x4f2120u); LOADALL;
  /* 004f2125 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f2128 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f212b fld dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 004f212e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2131 fmul dword ptr [0x63f930] */ { const u32 m_ = (u32)(0x63f930u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2137 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f213a fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f213d fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f2140 fmul dword ptr [0x63f930] */ { const u32 m_ = (u32)(0x63f930u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2146 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2149 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f214c fld dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004f214f fmul dword ptr [0x63f930] */ { const u32 m_ = (u32)(0x63f930u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2155 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2158 fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f215b:;
  /* 004f215b mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f215e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f215f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2160 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2161 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2163 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2164 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f2170(CPU *c) {
  NATIVE_HOOK(0x4f2170u) REGS; LOADALL;
L_004f2170:;
  /* 004f2170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2173 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2176 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f2177 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2178 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f217a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f217b lea esi, [ebx + 0x130] */ esi = (u32)((u32)(ebx + 0x130u));
  /* 004f2181 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 004f2188 jmp 0x4f2190 */ goto L_004f2190;
L_004f2190:;
  /* 004f2190 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f2193 mov eax, dword ptr [esi - 0x20] */ { const u32 m_ = (u32)(esi + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 004f2196 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f2199 sub esi, 0x28 */ { u32 a_ = esi, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f219c cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f219e jne 0x4f22cd */ if (!ZF_) goto L_004f22cd;
  /* 004f21a4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f21a6 fld dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004f21a9 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f21af fld dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004f21b2 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f21b8 fld dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); FPUSH((double)MF32(m_)); }
  /* 004f21bb fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f21c1 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f21c4 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f21c6 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f21c9 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f21cc fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f21cf fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f21d2 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f21d5 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f21d8 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f21db call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f21e0u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f21dbu); RETCHK(0x4f21e0u, 0x4f21dbu); LOADALL;
  /* 004f21e0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f21e2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f21e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f21e5 mov edx, 0x12002781 */ { edx = (u32)(0x12002781u); }
  /* 004f21ea call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f21efu; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f21eau); RETCHK(0x4f21efu, 0x4f21eau); LOADALL;
  /* 004f21ef mov edi, eax */ { edi = (u32)(eax); }
  /* 004f21f1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f21f3 mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
  /* 004f21f6 je 0x4f226a */ if (ZF_) goto L_004f226a;
  /* 004f21f8 mov edx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f21fb mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f21fe mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f2201 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f2204 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004f2206 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f2209 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f220c mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f220f mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f2212 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f2215 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2216 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f221bu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f2216u); RETCHK(0x4f221bu, 0x4f2216u); LOADALL;
  /* 004f221b mov edx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f221e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f221f call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f2224u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f221fu); RETCHK(0x4f2224u, 0x4f221fu); LOADALL;
  /* 004f2224 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f2227 mov ecx, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); ecx = (u32)(M32(m_)); }
  /* 004f222d mov dword ptr [eax + 0x38], 0 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x0u); }
  /* 004f2234 mov edx, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); edx = (u32)(M32(m_)); }
  /* 004f223a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f223d inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f223e mov dword ptr [ebx + 0x8c], edx */ { const u32 m_ = (u32)(ebx + 0x8cu); M32(m_) = (u32)(edx); }
  /* 004f2244 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f2246 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f2249 add edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f224c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f224e je 0x4f2265 */ if (ZF_) goto L_004f2265;
  /* 004f2250 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2251 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f2256 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2258 push 0x64f408 */ { u32 v_ = 0x64f408u; esp -= 4; M32(esp) = v_; }
  /* 004f225d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f225e call 0x531340 */ esp -= 4; M32(esp) = 0x4f2263u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f225eu); RETCHK(0x4f2263u, 0x4f225eu); LOADALL;
  /* 004f2263 jmp 0x4f2267 */ goto L_004f2267;
L_004f2265:;
  /* 004f2265 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f2267:;
  /* 004f2267 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
L_004f226a:;
  /* 004f226a call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f226fu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f226au); RETCHK(0x4f226fu, 0x4f226au); LOADALL;
  /* 004f226f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2271 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2273 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2274 mov edx, 0x12002783 */ { edx = (u32)(0x12002783u); }
  /* 004f2279 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f227eu; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f2279u); RETCHK(0x4f227eu, 0x4f2279u); LOADALL;
  /* 004f227e mov edi, eax */ { edi = (u32)(eax); }
  /* 004f2280 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2282 mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 004f2285 je 0x4f22cd */ if (ZF_) goto L_004f22cd;
  /* 004f2287 mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f228a mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 004f228d mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f2290 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f2293 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f2295 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004f2298 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f229b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f229e mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f22a1 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f22a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f22a5 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f22aau; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f22a5u); RETCHK(0x4f22aau, 0x4f22a5u); LOADALL;
  /* 004f22aa mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f22ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f22ae call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f22b3u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f22aeu); RETCHK(0x4f22b3u, 0x4f22aeu); LOADALL;
  /* 004f22b3 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 004f22b6 mov dword ptr [edx + 0x38], 0 */ { const u32 m_ = (u32)(edx + 0x38u); M32(m_) = (u32)(0x0u); }
  /* 004f22bd mov eax, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f22c3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f22c6 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f22c7 mov dword ptr [ebx + 0x8c], eax */ { const u32 m_ = (u32)(ebx + 0x8cu); M32(m_) = (u32)(eax); }
L_004f22cd:;
  /* 004f22cd dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f22d0 jne 0x4f2190 */ if (!ZF_) goto L_004f2190;
  /* 004f22d6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f22d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f22d8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f22d9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f22db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f22dc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f22e0(CPU *c) {
  NATIVE_HOOK(0x4f22e0u) REGS; LOADALL;
L_004f22e0:;
  /* 004f22e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f22e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f22e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f22e4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f22e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f22e6 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f22e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f22e9 lea edi, [ebx + 0x14c] */ edi = (u32)((u32)(ebx + 0x14cu));
  /* 004f22ef mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
L_004f22f6:;
  /* 004f22f6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f22f9 mov ecx, dword ptr [edi - 0x3c] */ { const u32 m_ = (u32)(edi + 0xffffffc4u); ecx = (u32)(M32(m_)); }
  /* 004f22fc sub edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f22ff cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f2301 jne 0x4f23c8 */ if (!ZF_) goto L_004f23c8;
  /* 004f2307 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 004f2309 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f230b je 0x4f231b */ if (ZF_) goto L_004f231b;
  /* 004f230d mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f2312 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2314 je 0x4f231b */ if (ZF_) goto L_004f231b;
  /* 004f2316 call 0x531380 */ esp -= 4; M32(esp) = 0x4f231bu; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f2316u); RETCHK(0x4f231bu, 0x4f2316u); LOADALL;
L_004f231b:;
  /* 004f231b mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f231e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2320 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
  /* 004f2326 je 0x4f2336 */ if (ZF_) goto L_004f2336;
  /* 004f2328 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f232d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f232f je 0x4f2336 */ if (ZF_) goto L_004f2336;
  /* 004f2331 call 0x531380 */ esp -= 4; M32(esp) = 0x4f2336u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f2331u); RETCHK(0x4f2336u, 0x4f2331u); LOADALL;
L_004f2336:;
  /* 004f2336 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f2339 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f233b mov dword ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004f2342 je 0x4f2352 */ if (ZF_) goto L_004f2352;
  /* 004f2344 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f2349 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f234b je 0x4f2352 */ if (ZF_) goto L_004f2352;
  /* 004f234d call 0x531380 */ esp -= 4; M32(esp) = 0x4f2352u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f234du); RETCHK(0x4f2352u, 0x4f234du); LOADALL;
L_004f2352:;
  /* 004f2352 mov eax, dword ptr [edi - 0x10] */ { const u32 m_ = (u32)(edi + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f2355 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2357 mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004f235e mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 004f2363 je 0x4f2376 */ if (ZF_) goto L_004f2376;
  /* 004f2365 mov dword ptr [eax + 0x38], edx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(edx); }
  /* 004f2368 mov eax, dword ptr [edi - 0x10] */ { const u32 m_ = (u32)(edi + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f236b call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f2370u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f236bu); RETCHK(0x4f2370u, 0x4f236bu); LOADALL;
  /* 004f2370 dec dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_004f2376:;
  /* 004f2376 mov eax, dword ptr [edi - 0xc] */ { const u32 m_ = (u32)(edi + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f2379 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f237b je 0x4f238e */ if (ZF_) goto L_004f238e;
  /* 004f237d mov dword ptr [eax + 0x38], edx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(edx); }
  /* 004f2380 mov eax, dword ptr [edi - 0xc] */ { const u32 m_ = (u32)(edi + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f2383 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f2388u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f2383u); RETCHK(0x4f2388u, 0x4f2383u); LOADALL;
  /* 004f2388 dec dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_004f238e:;
  /* 004f238e mov eax, dword ptr [edi - 8] */ { const u32 m_ = (u32)(edi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f2391 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2393 je 0x4f23a6 */ if (ZF_) goto L_004f23a6;
  /* 004f2395 mov dword ptr [eax + 0x38], edx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(edx); }
  /* 004f2398 mov eax, dword ptr [edi - 8] */ { const u32 m_ = (u32)(edi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f239b call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f23a0u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f239bu); RETCHK(0x4f23a0u, 0x4f239bu); LOADALL;
  /* 004f23a0 dec dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_004f23a6:;
  /* 004f23a6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f23a8 lea edx, [edi - 0x1c] */ edx = (u32)((u32)(edi + 0xffffffe4u));
  /* 004f23ab mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 004f23ad mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f23b0 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f23b3 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004f23b6 mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004f23b9 mov dword ptr [edx + 0x14], ecx */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004f23bc mov dword ptr [edx + 0x18], ecx */ { const u32 m_ = (u32)(edx + 0x18u); M32(m_) = (u32)(ecx); }
  /* 004f23bf mov dword ptr [edx + 0x1c], ecx */ { const u32 m_ = (u32)(edx + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 004f23c2 mov dword ptr [edx + 0x20], ecx */ { const u32 m_ = (u32)(edx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 004f23c5 mov dword ptr [edx + 0x24], ecx */ { const u32 m_ = (u32)(edx + 0x24u); M32(m_) = (u32)(ecx); }
L_004f23c8:;
  /* 004f23c8 dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f23cb jne 0x4f22f6 */ if (!ZF_) goto L_004f22f6;
  /* 004f23d1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f23d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f23d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f23d4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f23d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f23d7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f23e0(CPU *c) {
  NATIVE_HOOK(0x4f23e0u) REGS; LOADALL;
L_004f23e0:;
  /* 004f23e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f23e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f23e3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f23e6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f23e7 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004f23e9 mov eax, dword ptr [edx + 0x84] */ { const u32 m_ = (u32)(edx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f23ef xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f23f1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f23f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f23f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f23f5 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004f23f8 je 0x4f2403 */ if (ZF_) goto L_004f2403;
  /* 004f23fa mov dword ptr [eax + 0x7c], ebx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 004f23fd mov dword ptr [edx + 0x84], ebx */ { const u32 m_ = (u32)(edx + 0x84u); M32(m_) = (u32)(ebx); }
L_004f2403:;
  /* 004f2403 mov eax, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f2409 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f240b je 0x4f2425 */ if (ZF_) goto L_004f2425;
  /* 004f240d mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f2414 mov eax, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f241a call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f241fu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f241au); RETCHK(0x4f241fu, 0x4f241au); LOADALL;
  /* 004f241f mov dword ptr [edx + 0x80], ebx */ { const u32 m_ = (u32)(edx + 0x80u); M32(m_) = (u32)(ebx); }
L_004f2425:;
  /* 004f2425 lea edi, [edx + 0x150] */ edi = (u32)((u32)(edx + 0x150u));
  /* 004f242b mov dword ptr [ebp - 8], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x4u); }
L_004f2432:;
  /* 004f2432 mov esi, dword ptr [edi - 0x2c] */ { const u32 m_ = (u32)(edi + 0xffffffd4u); esi = (u32)(M32(m_)); }
  /* 004f2435 sub edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f2438 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f243a je 0x4f244c */ if (ZF_) goto L_004f244c;
  /* 004f243c cmp dword ptr [0x7a6cd8], ebx */ { const u32 m_ = (u32)(0x7a6cd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f2442 je 0x4f244c */ if (ZF_) goto L_004f244c;
  /* 004f2444 call 0x531380 */ esp -= 4; M32(esp) = 0x4f2449u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f2444u); RETCHK(0x4f2449u, 0x4f2444u); LOADALL;
  /* 004f2449 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_004f244c:;
  /* 004f244c mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 004f244e cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f2450 mov dword ptr [edi - 4], ebx */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004f2453 je 0x4f2465 */ if (ZF_) goto L_004f2465;
  /* 004f2455 cmp dword ptr [0x7a6cd8], ebx */ { const u32 m_ = (u32)(0x7a6cd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f245b je 0x4f2465 */ if (ZF_) goto L_004f2465;
  /* 004f245d call 0x531380 */ esp -= 4; M32(esp) = 0x4f2462u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f245du); RETCHK(0x4f2462u, 0x4f245du); LOADALL;
  /* 004f2462 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_004f2465:;
  /* 004f2465 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f2468 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f246a mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 004f246c je 0x4f247e */ if (ZF_) goto L_004f247e;
  /* 004f246e cmp dword ptr [0x7a6cd8], ebx */ { const u32 m_ = (u32)(0x7a6cd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f2474 je 0x4f247e */ if (ZF_) goto L_004f247e;
  /* 004f2476 call 0x531380 */ esp -= 4; M32(esp) = 0x4f247bu; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f2476u); RETCHK(0x4f247bu, 0x4f2476u); LOADALL;
  /* 004f247b mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_004f247e:;
  /* 004f247e mov eax, dword ptr [edi - 0x14] */ { const u32 m_ = (u32)(edi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f2481 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f2483 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004f2486 mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 004f248b je 0x4f2498 */ if (ZF_) goto L_004f2498;
  /* 004f248d mov dword ptr [eax + 0x38], esi */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(esi); }
  /* 004f2490 mov eax, dword ptr [edi - 0x14] */ { const u32 m_ = (u32)(edi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f2493 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f2498u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f2493u); RETCHK(0x4f2498u, 0x4f2493u); LOADALL;
L_004f2498:;
  /* 004f2498 mov eax, dword ptr [edi - 0x10] */ { const u32 m_ = (u32)(edi + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f249b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f249d je 0x4f24aa */ if (ZF_) goto L_004f24aa;
  /* 004f249f mov dword ptr [eax + 0x38], esi */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(esi); }
  /* 004f24a2 mov eax, dword ptr [edi - 0x10] */ { const u32 m_ = (u32)(edi + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f24a5 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f24aau; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f24a5u); RETCHK(0x4f24aau, 0x4f24a5u); LOADALL;
L_004f24aa:;
  /* 004f24aa mov eax, dword ptr [edi - 0xc] */ { const u32 m_ = (u32)(edi + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f24ad cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f24af je 0x4f24bc */ if (ZF_) goto L_004f24bc;
  /* 004f24b1 mov dword ptr [eax + 0x38], esi */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(esi); }
  /* 004f24b4 mov eax, dword ptr [edi - 0xc] */ { const u32 m_ = (u32)(edi + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f24b7 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f24bcu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f24b7u); RETCHK(0x4f24bcu, 0x4f24b7u); LOADALL;
L_004f24bc:;
  /* 004f24bc dec dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f24bf jne 0x4f2432 */ if (!ZF_) goto L_004f2432;
  /* 004f24c5 mov dword ptr [edx + 0x8c], ebx */ { const u32 m_ = (u32)(edx + 0x8cu); M32(m_) = (u32)(ebx); }
  /* 004f24cb mov ecx, 0x28 */ { ecx = (u32)(0x28u); }
  /* 004f24d0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f24d2 lea edi, [edx + 0x90] */ edi = (u32)((u32)(edx + 0x90u));
  /* 004f24d8 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004f24da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f24db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f24dc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f24dd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f24df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f24e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f24f0(CPU *c) {
  NATIVE_HOOK(0x4f24f0u) REGS; LOADALL;
L_004f24f0:;
  /* 004f24f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f24f1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f24f3 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f24f8u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f24f3u); RETCHK(0x4f24f8u, 0x4f24f3u); LOADALL;
  /* 004f24f8 lea ecx, [esi + 0x8c] */ ecx = (u32)((u32)(esi + 0x8cu));
  /* 004f24fe mov dword ptr [esi], 0x64f438 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f438u); }
  /* 004f2504 mov dword ptr [esi + 0x40], 0x11f0e540 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x11f0e540u); }
  /* 004f250b mov byte ptr [esi + 0x50], 1 */ { const u32 m_ = (u32)(esi + 0x50u); M8(m_) = (u8)(0x1u); }
  /* 004f250f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f2511 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004f2513 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f2516 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f2518 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2519 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f2520(CPU *c) {
  NATIVE_HOOK(0x4f2520u) REGS; LOADALL;
L_004f2520:;
  /* 004f2520 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2521 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2523 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2524 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f2526 call 0x4f2550 */ esp -= 4; M32(esp) = 0x4f252bu; SAVEALL; F_004f2550(c); ABI_CHECK(0x4f2550u, 0x4f2526u); RETCHK(0x4f252bu, 0x4f2526u); LOADALL;
  /* 004f252b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f252f je 0x4f253a */ if (ZF_) goto L_004f253a;
  /* 004f2531 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2532 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f2537u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f2532u); RETCHK(0x4f2537u, 0x4f2532u); LOADALL;
  /* 004f2537 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f253a:;
  /* 004f253a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f253c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f253d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f253e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f2550(CPU *c) {
  NATIVE_HOOK(0x4f2550u) REGS; LOADALL;
L_004f2550:;
  /* 004f2550 mov dword ptr [ecx], 0x64f438 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f438u); }
  /* 004f2556 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f2560(CPU *c) {
  NATIVE_HOOK(0x4f2560u) REGS; LOADALL;
L_004f2560:;
  /* 004f2560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2563 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2564 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2566 push 0x11f0e541 */ { u32 v_ = 0x11f0e541u; esp -= 4; M32(esp) = v_; }
  /* 004f256b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f256d call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f2572u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f256du); RETCHK(0x4f2572u, 0x4f256du); LOADALL;
  /* 004f2572 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2573 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f2578u; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f2573u); RETCHK(0x4f2578u, 0x4f2573u); LOADALL;
  /* 004f2578 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f257a mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f257d je 0x4f2594 */ if (ZF_) goto L_004f2594;
  /* 004f257f call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f2584u; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f257fu); RETCHK(0x4f2584u, 0x4f257fu); LOADALL;
  /* 004f2584 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f2587 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2588 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f258a call 0x4f4240 */ esp -= 4; M32(esp) = 0x4f258fu; SAVEALL; F_004f4240(c); ABI_CHECK(0x4f4240u, 0x4f258au); RETCHK(0x4f258fu, 0x4f258au); LOADALL;
  /* 004f258f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2590 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2591 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f2594:;
  /* 004f2594 mov dword ptr [esi + 0x3c], 0xb */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f259b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f259d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f259e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f259f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f25b0(CPU *c) {
  NATIVE_HOOK(0x4f25b0u) REGS; LOADALL;
L_004f25b0:;
  /* 004f25b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f25b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f25b3 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f25b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f25b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f25b8 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f25bb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f25bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f25bd mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004f25bf call 0x4f42a0 */ esp -= 4; M32(esp) = 0x4f25c4u; SAVEALL; F_004f42a0(c); ABI_CHECK(0x4f42a0u, 0x4f25bfu); RETCHK(0x4f25c4u, 0x4f25bfu); LOADALL;
  /* 004f25c4 mov ecx, dword ptr [0x7a6cd4] */ { const u32 m_ = (u32)(0x7a6cd4u); ecx = (u32)(M32(m_)); }
  /* 004f25ca lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004f25cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f25ce mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f25d1 lea ebx, [edi + 0x2c] */ ebx = (u32)((u32)(edi + 0x2cu));
  /* 004f25d4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f25d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f25d6 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f25d9 push 0x7a6cac */ { u32 v_ = 0x7a6cacu; esp -= 4; M32(esp) = v_; }
  /* 004f25de call 0x545680 */ esp -= 4; M32(esp) = 0x4f25e3u; SAVEALL; F_00545680(c); ABI_CHECK(0x545680u, 0x4f25deu); RETCHK(0x4f25e3u, 0x4f25deu); LOADALL;
  /* 004f25e3 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f25e5 mov eax, dword ptr [edi + 0x70] */ { const u32 m_ = (u32)(edi + 0x70u); eax = (u32)(M32(m_)); }
  /* 004f25e8 fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 004f25eb lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f25ee fadd dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f25f1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f25f2 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f25f5 fld dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f25f8 fadd dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f25fb fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f25fe fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004f2601 fadd dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2604 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f2606 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2607 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f260a call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f260fu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f260au); RETCHK(0x4f260fu, 0x4f260au); LOADALL;
  /* 004f260f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f2611 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f2614 mov edx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 004f2617 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f2618 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4f261du; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4f2618u); RETCHK(0x4f261du, 0x4f2618u); LOADALL;
  /* 004f261d fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 004f261f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f2622 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f2624 fadd dword ptr [0x656ff4] */ { const u32 m_ = (u32)(0x656ff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f262a lea eax, [edi + 0x80] */ eax = (u32)((u32)(edi + 0x80u));
  /* 004f2630 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2631 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 004f2634 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f2635 fmul dword ptr [0x657120] */ { const u32 m_ = (u32)(0x657120u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f263b mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f263e fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f2641 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2642 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f2644 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f2646 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f264b sar esi, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 004f264e fadd dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2651 fstp dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2654 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f2657 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f2659 fadd dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f265c fstp dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f265f fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2662 fadd dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2665 fstp dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2668 mov dl, byte ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f266b mov ecx, dword ptr [esi*4 + 0x7a6cac] */ { const u32 m_ = (u32)(esi * 4u + 0x7a6cacu); ecx = (u32)(M32(m_)); }
  /* 004f2672 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f2673 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2674 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2675 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f2677 call 0x545af0 */ esp -= 4; M32(esp) = 0x4f267cu; SAVEALL; F_00545af0(c); ABI_CHECK(0x545af0u, 0x4f2677u); RETCHK(0x4f267cu, 0x4f2677u); LOADALL;
  /* 004f267c fld dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); FPUSH((double)MF32(m_)); }
  /* 004f2682 lea ecx, [edi + 0x80] */ ecx = (u32)((u32)(edi + 0x80u));
  /* 004f2688 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f268b mov dword ptr [edi + 0x84], 0 */ { const u32 m_ = (u32)(edi + 0x84u); M32(m_) = (u32)(0x0u); }
  /* 004f2695 fld dword ptr [edi + 0x88] */ { const u32 m_ = (u32)(edi + 0x88u); FPUSH((double)MF32(m_)); }
  /* 004f269b fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f269d fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004f269f fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f26a1 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004f26a3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f26a5 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f26ab fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f26ad fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f26af test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f26b2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f26b4 jne 0x4f26c2 */ if (!ZF_) goto L_004f26c2;
  /* 004f26b6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f26b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f26b8 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f26bdu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f26b8u); RETCHK(0x4f26bdu, 0x4f26b8u); LOADALL;
  /* 004f26bd fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f26bf add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f26c2:;
  /* 004f26c2 mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f26c8 push 0x40400000 */ { u32 v_ = 0x40400000u; esp -= 4; M32(esp) = v_; }
  /* 004f26cd xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f26cf mov eax, 0x63f840 */ { eax = (u32)(0x63f840u); }
  /* 004f26d4 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f26d6 call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f26dbu; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f26d6u); RETCHK(0x4f26dbu, 0x4f26d6u); LOADALL;
  /* 004f26db fcom dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f26e1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f26e4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f26e6 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f26e9 jp 0x4f26f3 */ if (PF_) goto L_004f26f3;
  /* 004f26eb fld dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f26ee fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f26f0 fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f26f3:;
  /* 004f26f3 mov ecx, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); ecx = (u32)(M32(m_)); }
  /* 004f26f9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f26fb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f26fd mov edx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f2700 mov dword ptr [edi + 0x58], 0x40000000 */ { const u32 m_ = (u32)(edi + 0x58u); M32(m_) = (u32)(0x40000000u); }
  /* 004f2707 je 0x4f2721 */ if (ZF_) goto L_004f2721;
  /* 004f2709 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 004f270c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f270d push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f2712 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2714 push 0x64f3cc */ { u32 v_ = 0x64f3ccu; esp -= 4; M32(esp) = v_; }
  /* 004f2719 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f271a call 0x531340 */ esp -= 4; M32(esp) = 0x4f271fu; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f271au); RETCHK(0x4f271fu, 0x4f271au); LOADALL;
  /* 004f271f jmp 0x4f2723 */ goto L_004f2723;
L_004f2721:;
  /* 004f2721 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f2723:;
  /* 004f2723 mov dword ptr [edi + 0x7c], eax */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f2726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f2729 lea ecx, [edi + 0x94] */ ecx = (u32)((u32)(edi + 0x94u));
  /* 004f272f add eax, 0x64 */ { u32 a_ = eax, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f2732 mov edx, 2 */ { edx = (u32)(0x2u); }
L_004f2737:;
  /* 004f2737 mov esi, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f273a sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f273d sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f2740 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f2741 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 004f2743 jne 0x4f2737 */ if (!ZF_) goto L_004f2737;
  /* 004f2745 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2746 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2747 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f2749 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f274a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f274c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f274d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f2750(CPU *c) {
  NATIVE_HOOK(0x4f2750u) REGS; LOADALL;
L_004f2750:;
  /* 004f2750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2753 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2756 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f2757 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2758 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f2759 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f275c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f275d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f275f call 0x4f3d20 */ esp -= 4; M32(esp) = 0x4f2764u; SAVEALL; F_004f3d20(c); ABI_CHECK(0x4f3d20u, 0x4f275fu); RETCHK(0x4f2764u, 0x4f275fu); LOADALL;
  /* 004f2764 mov eax, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); eax = (u32)(M32(m_)); }
  /* 004f2767 fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 004f276a fadd dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f276d fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2770 fld dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f2773 fadd dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2776 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2779 fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004f277c fadd dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f277f lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f2782 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2783 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f2785 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2788 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2789 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f278eu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f2789u); RETCHK(0x4f278eu, 0x4f2789u); LOADALL;
  /* 004f278e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f2790 mov edx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 004f2793 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f2794 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4f2799u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4f2794u); RETCHK(0x4f2799u, 0x4f2794u); LOADALL;
  /* 004f2799 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 004f279b mov ecx, dword ptr [0x7a6cd4] */ { const u32 m_ = (u32)(0x7a6cd4u); ecx = (u32)(M32(m_)); }
  /* 004f27a1 lea edi, [esi + 0x20] */ edi = (u32)((u32)(esi + 0x20u));
  /* 004f27a4 fadd dword ptr [0x656ff4] */ { const u32 m_ = (u32)(0x656ff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f27aa lea ebx, [esi + 0x80] */ ebx = (u32)((u32)(esi + 0x80u));
  /* 004f27b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f27b1 fmul dword ptr [0x657120] */ { const u32 m_ = (u32)(0x657120u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f27b7 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f27ba lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f27bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f27be fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f27c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f27c1 lea eax, [esi + 0x2c] */ eax = (u32)((u32)(esi + 0x2cu));
  /* 004f27c4 push 0x7a6cac */ { u32 v_ = 0x7a6cacu; esp -= 4; M32(esp) = v_; }
  /* 004f27c9 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f27cb fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f27cd fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f27d0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f27d2 fadd dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f27d5 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f27d8 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f27db fadd dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f27de fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f27e1 call 0x545680 */ esp -= 4; M32(esp) = 0x4f27e6u; SAVEALL; F_00545680(c); ABI_CHECK(0x545680u, 0x4f27e1u); RETCHK(0x4f27e6u, 0x4f27e1u); LOADALL;
  /* 004f27e6 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 004f27e8 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f27eb fld dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); FPUSH((double)MF32(m_)); }
  /* 004f27f1 mov dword ptr [esi + 0x84], 0 */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(0x0u); }
  /* 004f27fb fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f27fd fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004f27ff fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f2801 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004f2803 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f2805 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f280b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f280d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f280f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2812 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f2814 jne 0x4f2822 */ if (!ZF_) goto L_004f2822;
  /* 004f2816 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f2817 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f2818 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f281du; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f2818u); RETCHK(0x4f281du, 0x4f2818u); LOADALL;
  /* 004f281d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f281f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f2822:;
  /* 004f2822 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f2827 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2829 mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f282c mov dword ptr [esi + 0x58], 0x40000000 */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0x40000000u); }
  /* 004f2833 je 0x4f284a */ if (ZF_) goto L_004f284a;
  /* 004f2835 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f2836 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f283b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f283d push 0x64f3cc */ { u32 v_ = 0x64f3ccu; esp -= 4; M32(esp) = v_; }
  /* 004f2842 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2843 call 0x531340 */ esp -= 4; M32(esp) = 0x4f2848u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f2843u); RETCHK(0x4f2848u, 0x4f2843u); LOADALL;
  /* 004f2848 jmp 0x4f284c */ goto L_004f284c;
L_004f284a:;
  /* 004f284a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f284c:;
  /* 004f284c mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f284f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f2852 lea ecx, [esi + 0x94] */ ecx = (u32)((u32)(esi + 0x94u));
  /* 004f2858 add eax, 0x64 */ { u32 a_ = eax, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f285b mov edx, 2 */ { edx = (u32)(0x2u); }
L_004f2860:;
  /* 004f2860 mov esi, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f2863 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f2866 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f2869 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f286a mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 004f286c jne 0x4f2860 */ if (!ZF_) goto L_004f2860;
  /* 004f286e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f286f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2870 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f2872 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2873 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2875 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2876 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f2880(CPU *c) {
  NATIVE_HOOK(0x4f2880u) REGS; LOADALL;
L_004f2880:;
  /* 004f2880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2883 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2886 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f2887 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f2889 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f288c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f288d fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2890 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f2891 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2894 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f2897 fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f289a fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f289d mov dword ptr [ebx + 0x58], eax */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(eax); }
  /* 004f28a0 mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f28a3 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f28a6 fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f28a9 ja 0x4f2a20 */ if (!(CF_|ZF_)) goto L_004f2a20;
  /* 004f28af jmp dword ptr [eax*4 + 0x4f2c48] */ { const u32 m_ = (u32)(eax * 4u + 0x4f2c48u); u32 t_ = M32(m_); switch (t_) { case 0x4f28b6u: goto L_004f28b6; case 0x4f28d6u: goto L_004f28d6; case 0x4f2a20u: goto L_004f2a20; case 0x4f2a2bu: goto L_004f2a2b; case 0x4f2bdbu: goto L_004f2bdb; default: SAVEALL; call_ind(c, t_); return; } }
L_004f28b6:;
  /* 004f28b6 mov ecx, dword ptr [ebx + 0x78] */ { const u32 m_ = (u32)(ebx + 0x78u); ecx = (u32)(M32(m_)); }
  /* 004f28b9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f28ba call 0x5abd50 */ esp -= 4; M32(esp) = 0x4f28bfu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4f28bau); RETCHK(0x4f28bfu, 0x4f28bau); LOADALL;
  /* 004f28bf mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f28c2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f28c5 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f28c8 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f28cd mov esi, eax */ { esi = (u32)(eax); }
  /* 004f28cf rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f28d1 jmp 0x4f2bb8 */ goto L_004f2bb8;
L_004f28d6:;
  /* 004f28d6 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f28d9 fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f28df fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f28e1 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f28e4 jp 0x4f2b81 */ if (PF_) goto L_004f2b81;
  /* 004f28ea mov esi, dword ptr [ebx + 0x7c] */ { const u32 m_ = (u32)(ebx + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f28ed test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f28ef je 0x4f28ff */ if (ZF_) goto L_004f28ff;
  /* 004f28f1 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f28f6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f28f8 je 0x4f28ff */ if (ZF_) goto L_004f28ff;
  /* 004f28fa call 0x531380 */ esp -= 4; M32(esp) = 0x4f28ffu; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f28fau); RETCHK(0x4f28ffu, 0x4f28fau); LOADALL;
L_004f28ff:;
  /* 004f28ff mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004f2901 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f2903 mov dword ptr [ebx + 0x7c], 0 */ { const u32 m_ = (u32)(ebx + 0x7cu); M32(m_) = (u32)(0x0u); }
  /* 004f290a call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f290du; SAVEALL; call_ind(c, t_); RETCHK(0x4f290du, 0x4f290au); LOADALL; }
  /* 004f290d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f290f push 0x11f0e540 */ { u32 v_ = 0x11f0e540u; esp -= 4; M32(esp) = v_; }
  /* 004f2914 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f2919u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f2914u); RETCHK(0x4f2919u, 0x4f2914u); LOADALL;
  /* 004f2919 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f291a call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f291fu; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f291au); RETCHK(0x4f291fu, 0x4f291au); LOADALL;
  /* 004f291f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2921 mov dword ptr [ebx + 0x5c], eax */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f2924 je 0x4f2a19 */ if (ZF_) goto L_004f2a19;
  /* 004f292a mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004f292c call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f2931u; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f292cu); RETCHK(0x4f2931u, 0x4f292cu); LOADALL;
  /* 004f2931 mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f2934 lea edi, [ebx + 0x80] */ edi = (u32)((u32)(ebx + 0x80u));
  /* 004f293a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f293c call 0x4afa60 */ esp -= 4; M32(esp) = 0x4f2941u; SAVEALL; F_004afa60(c); ABI_CHECK(0x4afa60u, 0x4f293cu); RETCHK(0x4f2941u, 0x4f293cu); LOADALL;
  /* 004f2941 mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f2944 push 0x43340000 */ { u32 v_ = 0x43340000u; esp -= 4; M32(esp) = v_; }
  /* 004f2949 call 0x5467e0 */ esp -= 4; M32(esp) = 0x4f294eu; SAVEALL; F_005467e0(c); ABI_CHECK(0x5467e0u, 0x4f2949u); RETCHK(0x4f294eu, 0x4f2949u); LOADALL;
  /* 004f294e mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f2951 mov edx, dword ptr [0x7a6ca4] */ { const u32 m_ = (u32)(0x7a6ca4u); edx = (u32)(M32(m_)); }
  /* 004f2957 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f2959 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f295c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f295d call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f2960u; SAVEALL; call_ind(c, t_); RETCHK(0x4f2960u, 0x4f295du); LOADALL; }
  /* 004f2960 mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f2963 lea eax, [ebx + 0x2c] */ eax = (u32)((u32)(ebx + 0x2cu));
  /* 004f2966 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f2968 mov dword ptr [ebx + 0x3c], 5 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x5u); }
  /* 004f296f mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f2971 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f2974 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f2977 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f297a mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f297d mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f2980 lea esi, [ebx + 0x20] */ esi = (u32)((u32)(ebx + 0x20u));
  /* 004f2983 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2984 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f2987 mov dword ptr [ebx + 0x24], 0 */ { const u32 m_ = (u32)(ebx + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 004f298e call 0x5aa970 */ esp -= 4; M32(esp) = 0x4f2993u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4f298eu); RETCHK(0x4f2993u, 0x4f298eu); LOADALL;
  /* 004f2993 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f2995 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2997 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f299a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f299c fst dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); }
  /* 004f299e fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f29a0 fmul dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f29a6 fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f29a9 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f29ab fmul dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f29b1 fstp dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f29b4 fmul dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f29ba fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f29bc fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f29be mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f29c1 fld dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f29c4 fmul dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f29ca fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f29cd fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f29d0 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f29d3 fld dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004f29d6 fmul dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f29dc fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f29df fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f29e2 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f29e5 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f29e8 fchs */ ST(0) = -ST(0);
  /* 004f29ea fst dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); }
  /* 004f29ed fchs */ ST(0) = -ST(0);
  /* 004f29ef fld dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 004f29f2 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f29f8 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004f29fa fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f29fd fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2a00 mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f2a03 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f2a04 mov edx, 0x64f474 */ { edx = (u32)(0x64f474u); }
  /* 004f2a09 call 0x4d9d90 */ esp -= 4; M32(esp) = 0x4f2a0eu; SAVEALL; F_004d9d90(c); ABI_CHECK(0x4d9d90u, 0x4f2a09u); RETCHK(0x4f2a0eu, 0x4f2a09u); LOADALL;
  /* 004f2a0e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2a11 mov dword ptr [ebx + 0x7c], eax */ { const u32 m_ = (u32)(ebx + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f2a14 jmp 0x4f2bb8 */ goto L_004f2bb8;
L_004f2a19:;
  /* 004f2a19 mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f2a20:;
  /* 004f2a20 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2a21 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2a22 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f2a24 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2a25 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2a27 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2a28 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f2a2b:;
  /* 004f2a2b fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f2a2e fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f2a34 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f2a36 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2a39 jp 0x4f2b81 */ if (PF_) goto L_004f2b81;
  /* 004f2a3f mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f2a42 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f2a44 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f2a47u; SAVEALL; call_ind(c, t_); RETCHK(0x4f2a47u, 0x4f2a44u); LOADALL; }
  /* 004f2a47 mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f2a4a lea ecx, [ebx + 0x2c] */ ecx = (u32)((u32)(ebx + 0x2cu));
  /* 004f2a4d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f2a4f mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004f2a51 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f2a54 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f2a57 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f2a5a mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f2a5d call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f2a62u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f2a5du); RETCHK(0x4f2a62u, 0x4f2a5du); LOADALL;
  /* 004f2a62 mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f2a65 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f2a66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2a67 mov edx, 0x12e487a */ { edx = (u32)(0x12e487au); }
  /* 004f2a6c call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f2a71u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f2a6cu); RETCHK(0x4f2a71u, 0x4f2a6cu); LOADALL;
  /* 004f2a71 mov esi, dword ptr [ebx + 0x7c] */ { const u32 m_ = (u32)(ebx + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f2a74 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2a76 je 0x4f2a86 */ if (ZF_) goto L_004f2a86;
  /* 004f2a78 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f2a7d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2a7f je 0x4f2a86 */ if (ZF_) goto L_004f2a86;
  /* 004f2a81 call 0x531380 */ esp -= 4; M32(esp) = 0x4f2a86u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f2a81u); RETCHK(0x4f2a86u, 0x4f2a81u); LOADALL;
L_004f2a86:;
  /* 004f2a86 mov dword ptr [ebx + 0x7c], 0 */ { const u32 m_ = (u32)(ebx + 0x7cu); M32(m_) = (u32)(0x0u); }
  /* 004f2a8d call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f2a92u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f2a8du); RETCHK(0x4f2a92u, 0x4f2a8du); LOADALL;
  /* 004f2a92 mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f2a95 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2a96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2a97 mov edx, 0x11f0e540 */ { edx = (u32)(0x11f0e540u); }
  /* 004f2a9c call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f2aa1u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f2a9cu); RETCHK(0x4f2aa1u, 0x4f2a9cu); LOADALL;
  /* 004f2aa1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2aa3 je 0x4f2b78 */ if (ZF_) goto L_004f2b78;
  /* 004f2aa9 mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f2aac mov ecx, 0x64f468 */ { ecx = (u32)(0x64f468u); }
  /* 004f2ab1 call 0x4afa80 */ esp -= 4; M32(esp) = 0x4f2ab6u; SAVEALL; F_004afa80(c); ABI_CHECK(0x4afa80u, 0x4f2ab1u); RETCHK(0x4f2ab6u, 0x4f2ab1u); LOADALL;
  /* 004f2ab6 mov edx, dword ptr [ebx + 0x6c] */ { const u32 m_ = (u32)(ebx + 0x6cu); edx = (u32)(M32(m_)); }
  /* 004f2ab9 mov dword ptr [edx + 0xc], 0x41f00000 */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(0x41f00000u); }
  /* 004f2ac0 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f2ac3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2ac4 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f2ac9u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f2ac4u); RETCHK(0x4f2ac9u, 0x4f2ac4u); LOADALL;
  /* 004f2ac9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2acc mov dword ptr [ebx + 0x58], 0x3f800000 */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(0x3f800000u); }
  /* 004f2ad3 mov dword ptr [ebx + 0x3c], 8 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x8u); }
  /* 004f2ada lea esi, [ebx + 0x94] */ esi = (u32)((u32)(ebx + 0x94u));
  /* 004f2ae0 mov edi, 2 */ { edi = (u32)(0x2u); }
L_004f2ae5:;
  /* 004f2ae5 mov eax, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f2ae8 sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f2aeb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2aed je 0x4f2b6f */ if (ZF_) goto L_004f2b6f;
  /* 004f2af3 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f2af6 mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f2af9 fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f2afc fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2afe add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f2b01 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2b04 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f2b07 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2b0a fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2b0d fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f2b10 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2b13 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f2b16 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2b17 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2b1a call 0x5aa970 */ esp -= 4; M32(esp) = 0x4f2b1fu; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4f2b1au); RETCHK(0x4f2b1fu, 0x4f2b1au); LOADALL;
  /* 004f2b1f fcom dword ptr [0x656ff4] */ { const u32 m_ = (u32)(0x656ff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f2b25 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2b28 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f2b2a test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2b2d jp 0x4f2b6d */ if (PF_) goto L_004f2b6d;
  /* 004f2b2f fmul dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2b35 call 0x61b154 */ esp -= 4; M32(esp) = 0x4f2b3au; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f2b35u); RETCHK(0x4f2b3au, 0x4f2b35u); LOADALL;
  /* 004f2b3a mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f2b3d fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 004f2b40 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f2b42 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2b44 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2b46 fmul dword ptr [0x656ef4] */ { const u32 m_ = (u32)(0x656ef4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2b4c fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f2b52 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2b55 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f2b58 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f2b5b fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2b61 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f2b62 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2b63 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2b66 call 0x4eed50 */ esp -= 4; M32(esp) = 0x4f2b6bu; SAVEALL; F_004eed50(c); ABI_CHECK(0x4eed50u, 0x4f2b66u); RETCHK(0x4f2b6bu, 0x4f2b66u); LOADALL;
  /* 004f2b6b jmp 0x4f2b6f */ goto L_004f2b6f;
L_004f2b6d:;
  /* 004f2b6d fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f2b6f:;
  /* 004f2b6f dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f2b70 jne 0x4f2ae5 */ if (!ZF_) goto L_004f2ae5;
  /* 004f2b76 jmp 0x4f2bb8 */ goto L_004f2bb8;
L_004f2b78:;
  /* 004f2b78 mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f2b7f jmp 0x4f2bb8 */ goto L_004f2bb8;
L_004f2b81:;
  /* 004f2b81 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f2b84 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f2b87 fmul dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2b8a fadd dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2b8d fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2b90 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f2b93 fmul dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2b96 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2b98 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2b9a mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f2b9d fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f2ba0 fmul dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2ba3 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2ba6 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2ba9 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f2bac fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f2baf fmul dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2bb2 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2bb5 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f2bb8:;
  /* 004f2bb8 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f2bbb add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f2bbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2bbf call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f2bc4u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f2bbfu); RETCHK(0x4f2bc4u, 0x4f2bbfu); LOADALL;
  /* 004f2bc4 mov ecx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f2bc7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2bc8 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f2bcdu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f2bc8u); RETCHK(0x4f2bcdu, 0x4f2bc8u); LOADALL;
  /* 004f2bcd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2bd0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2bd1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2bd2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f2bd4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2bd5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2bd7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2bd8 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f2bdb:;
  /* 004f2bdb mov edx, dword ptr [ebx + 0x60] */ { const u32 m_ = (u32)(ebx + 0x60u); edx = (u32)(M32(m_)); }
  /* 004f2bde push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f2bdf call 0x577800 */ esp -= 4; M32(esp) = 0x4f2be4u; SAVEALL; F_00577800(c); ABI_CHECK(0x577800u, 0x4f2bdfu); RETCHK(0x4f2be4u, 0x4f2bdfu); LOADALL;
  /* 004f2be4 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f2be6 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f2be9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2bec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2bee mov dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004f2bf5 mov edx, eax */ { edx = (u32)(eax); }
  /* 004f2bf7 jle 0x4f2c24 */ if ((ZF_|LT_)) goto L_004f2c24;
  /* 004f2bf9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f2bfc shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f2bff add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f2c01 mov esi, eax */ { esi = (u32)(eax); }
L_004f2c03:;
  /* 004f2c03 sub esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f2c06 mov eax, edi */ { eax = (u32)(edi); }
  /* 004f2c08 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f2c0a dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f2c0b call 0x547e90 */ esp -= 4; M32(esp) = 0x4f2c10u; SAVEALL; F_00547e90(c); ABI_CHECK(0x547e90u, 0x4f2c0bu); RETCHK(0x4f2c10u, 0x4f2c0bu); LOADALL;
  /* 004f2c10 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2c12 je 0x4f2c20 */ if (ZF_) goto L_004f2c20;
  /* 004f2c14 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f2c16 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f2c1b shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f2c1d or dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_004f2c20:;
  /* 004f2c20 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2c22 jg 0x4f2c03 */ if (!(ZF_|LT_)) goto L_004f2c03;
L_004f2c24:;
  /* 004f2c24 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f2c27 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f2c2d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f2c2f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2c32 jp 0x4f2c3b */ if (PF_) goto L_004f2c3b;
  /* 004f2c34 mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f2c3b:;
  /* 004f2c3b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f2c3e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2c3f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2c40 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2c41 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2c43 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2c44 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f2c70(CPU *c) {
  NATIVE_HOOK(0x4f2c70u) REGS; LOADALL;
L_004f2c70:;
  /* 004f2c70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2c71 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f2c73 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f2c78u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f2c73u); RETCHK(0x4f2c78u, 0x4f2c73u); LOADALL;
  /* 004f2c78 mov dword ptr [esi], 0x64f480 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f480u); }
  /* 004f2c7e mov dword ptr [esi + 0x40], 0x124c72c0 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x124c72c0u); }
  /* 004f2c85 mov dword ptr [esi + 0x80], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(0x3f800000u); }
  /* 004f2c8f mov eax, esi */ { eax = (u32)(esi); }
  /* 004f2c91 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2c92 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f2ca0(CPU *c) {
  NATIVE_HOOK(0x4f2ca0u) REGS; LOADALL;
L_004f2ca0:;
  /* 004f2ca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2ca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2ca3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2ca4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f2ca6 call 0x4f2cd0 */ esp -= 4; M32(esp) = 0x4f2cabu; SAVEALL; F_004f2cd0(c); ABI_CHECK(0x4f2cd0u, 0x4f2ca6u); RETCHK(0x4f2cabu, 0x4f2ca6u); LOADALL;
  /* 004f2cab test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2caf je 0x4f2cba */ if (ZF_) goto L_004f2cba;
  /* 004f2cb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2cb2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f2cb7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f2cb2u); RETCHK(0x4f2cb7u, 0x4f2cb2u); LOADALL;
  /* 004f2cb7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f2cba:;
  /* 004f2cba mov eax, esi */ { eax = (u32)(esi); }
  /* 004f2cbc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2cbd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2cbe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f2cd0(CPU *c) {
  NATIVE_HOOK(0x4f2cd0u) REGS; LOADALL;
L_004f2cd0:;
  /* 004f2cd0 mov dword ptr [ecx], 0x64f480 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f480u); }
  /* 004f2cd6 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f2ce0(CPU *c) {
  NATIVE_HOOK(0x4f2ce0u) REGS; LOADALL;
L_004f2ce0:;
  /* 004f2ce0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2ce1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2ce3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2ce4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2ce6 push 0x124c72c1 */ { u32 v_ = 0x124c72c1u; esp -= 4; M32(esp) = v_; }
  /* 004f2ceb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f2ced call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f2cf2u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f2cedu); RETCHK(0x4f2cf2u, 0x4f2cedu); LOADALL;
  /* 004f2cf2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2cf3 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f2cf8u; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f2cf3u); RETCHK(0x4f2cf8u, 0x4f2cf3u); LOADALL;
  /* 004f2cf8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2cfa mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f2cfd je 0x4f2d14 */ if (ZF_) goto L_004f2d14;
  /* 004f2cff call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f2d04u; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f2cffu); RETCHK(0x4f2d04u, 0x4f2cffu); LOADALL;
  /* 004f2d04 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f2d07 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2d08 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f2d0a call 0x4f4240 */ esp -= 4; M32(esp) = 0x4f2d0fu; SAVEALL; F_004f4240(c); ABI_CHECK(0x4f4240u, 0x4f2d0au); RETCHK(0x4f2d0fu, 0x4f2d0au); LOADALL;
  /* 004f2d0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2d10 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2d11 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f2d14:;
  /* 004f2d14 mov dword ptr [esi + 0x3c], 0xb */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f2d1b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f2d1d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2d1e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2d1f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f2d30(CPU *c) {
  NATIVE_HOOK(0x4f2d30u) REGS; LOADALL;
L_004f2d30:;
  /* 004f2d30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2d31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2d33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2d34 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f2d35 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f2d38 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f2d39 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f2d3b call 0x4f42a0 */ esp -= 4; M32(esp) = 0x4f2d40u; SAVEALL; F_004f42a0(c); ABI_CHECK(0x4f42a0u, 0x4f2d3bu); RETCHK(0x4f2d40u, 0x4f2d3bu); LOADALL;
  /* 004f2d40 push 0x40c00000 */ { u32 v_ = 0x40c00000u; esp -= 4; M32(esp) = v_; }
  /* 004f2d45 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f2d47 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f2d49 mov dword ptr [esi + 0x58], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0x3f800000u); }
  /* 004f2d50 call 0x4f43a0 */ esp -= 4; M32(esp) = 0x4f2d55u; SAVEALL; F_004f43a0(c); ABI_CHECK(0x4f43a0u, 0x4f2d50u); RETCHK(0x4f2d55u, 0x4f2d50u); LOADALL;
  /* 004f2d55 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f2d5a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2d5c mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f2d5f je 0x4f2d82 */ if (ZF_) goto L_004f2d82;
  /* 004f2d61 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 004f2d64 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2d65 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f2d6a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2d6c push 0x64f3cc */ { u32 v_ = 0x64f3ccu; esp -= 4; M32(esp) = v_; }
  /* 004f2d71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2d72 call 0x531340 */ esp -= 4; M32(esp) = 0x4f2d77u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f2d72u); RETCHK(0x4f2d77u, 0x4f2d72u); LOADALL;
  /* 004f2d77 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f2d7a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2d7b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f2d7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2d7e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2d7f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f2d82:;
  /* 004f2d82 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f2d84 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f2d87 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2d88 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f2d8a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2d8b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2d8c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f2d90(CPU *c) {
  NATIVE_HOOK(0x4f2d90u) REGS; LOADALL;
L_004f2d90:;
  /* 004f2d90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2d91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2d93 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2d96 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f2d97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2d98 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f2d99 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f2d9c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f2d9d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f2d9f call 0x4f42a0 */ esp -= 4; M32(esp) = 0x4f2da4u; SAVEALL; F_004f42a0(c); ABI_CHECK(0x4f42a0u, 0x4f2d9fu); RETCHK(0x4f2da4u, 0x4f2d9fu); LOADALL;
  /* 004f2da4 mov dword ptr [esi + 0x58], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0x3f800000u); }
  /* 004f2dab lea eax, [esi + 0x2c] */ eax = (u32)((u32)(esi + 0x2cu));
  /* 004f2dae lea ecx, [edi + 0x28] */ ecx = (u32)((u32)(edi + 0x28u));
  /* 004f2db1 mov ebx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (u32)(M32(m_)); }
  /* 004f2db3 mov edx, eax */ { edx = (u32)(eax); }
  /* 004f2db5 mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 004f2db7 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 004f2dba mov dword ptr [edx + 4], ebx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004f2dbd mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f2dc0 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f2dc3 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f2dc5 mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f2dc8 mov dword ptr [esi + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f2dcf fsub dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2dd1 fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f2dd4 mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f2dd7 fsub dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2dda mov ecx, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); ecx = (u32)(M32(m_)); }
  /* 004f2de0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2de2 fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 004f2de5 fsub dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2de8 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2deb fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f2ded fmul dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2df0 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f2df2 fmul dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2df5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f2df7 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f2dfa fmul dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2dfd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f2dff fchs */ ST(0) = -ST(0);
  /* 004f2e01 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 004f2e04 fmul dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2e07 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 004f2e09 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2e0c fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f2e0f fmul dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2e12 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 004f2e14 fstp st(2) */ ST(2) = ST(0); FPOP();
  /* 004f2e16 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f2e18 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f2e1b fmul dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2e1e lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 004f2e21 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2e24 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f2e27 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2e29 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f2e2b fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2e2e fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2e31 je 0x4f2e54 */ if (ZF_) goto L_004f2e54;
  /* 004f2e33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2e34 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f2e39 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2e3b push 0x64f3cc */ { u32 v_ = 0x64f3ccu; esp -= 4; M32(esp) = v_; }
  /* 004f2e40 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2e41 call 0x531340 */ esp -= 4; M32(esp) = 0x4f2e46u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f2e41u); RETCHK(0x4f2e46u, 0x4f2e41u); LOADALL;
  /* 004f2e46 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2e47 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f2e4a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2e4b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f2e4d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2e4e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2e50 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2e51 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f2e54:;
  /* 004f2e54 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f2e56 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2e57 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f2e5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2e5b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f2e5d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2e5e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2e60 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2e61 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f2e70(CPU *c) {
  NATIVE_HOOK(0x4f2e70u) REGS; LOADALL;
L_004f2e70:;
  /* 004f2e70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f2e71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f2e73 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2e76 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f2e77 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f2e79 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f2e7c mov ecx, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004f2e7f fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2e82 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f2e83 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f2e84 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004f2e87 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2e8a mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f2e8d fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f2e90 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2e93 mov dword ptr [ebx + 0x58], eax */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(eax); }
  /* 004f2e96 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004f2e98 and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f2e9d sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f2ea0 fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2ea3 je 0x4f31ce */ if (ZF_) goto L_004f31ce;
  /* 004f2ea9 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f2eac je 0x4f2fa1 */ if (ZF_) goto L_004f2fa1;
  /* 004f2eb2 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f2eb5 jne 0x4f3178 */ if (!ZF_) goto L_004f3178;
  /* 004f2ebb and ecx, 0xffff0000 */ { u32 a_ = ecx, b_ = 0xffff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f2ec1 cmp ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f2ec7 jne 0x4f2f39 */ if (!ZF_) goto L_004f2f39;
  /* 004f2ec9 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f2ecc mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f2ecf fmul dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f2ed5 fsubr dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f2ed8 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2edb mov ecx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f2ede add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f2ee1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2ee2 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f2ee7u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f2ee2u); RETCHK(0x4f2ee7u, 0x4f2ee2u); LOADALL;
  /* 004f2ee7 mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f2eea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f2eeb call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f2ef0u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f2eebu); RETCHK(0x4f2ef0u, 0x4f2eebu); LOADALL;
  /* 004f2ef0 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f2ef3 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2ef6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2ef9 fst dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); MF32(m_) = (float)ST(0); }
  /* 004f2efc fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f2f02 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f2f04 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2f07 jp 0x4f2f39 */ if (PF_) goto L_004f2f39;
  /* 004f2f09 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f2f0c fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f2f0f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f2f11 fadd dword ptr [0x65711c] */ { const u32 m_ = (u32)(0x65711cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f2f17 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2f1a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f2f1c call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f2f1fu; SAVEALL; call_ind(c, t_); RETCHK(0x4f2f1fu, 0x4f2f1cu); LOADALL; }
  /* 004f2f1f mov ebx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ebx = (u32)(M32(m_)); }
  /* 004f2f22 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f2f25 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2f26 fsub dword ptr [0x65711c] */ { const u32 m_ = (u32)(0x65711cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f2f2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2f2d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f2f2f fstp dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f2f32 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2f33 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2f35 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2f36 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f2f39:;
  /* 004f2f39 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f2f3c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f2f3f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f2f41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2f42 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f2f45u; SAVEALL; call_ind(c, t_); RETCHK(0x4f2f45u, 0x4f2f42u); LOADALL; }
  /* 004f2f45 mov ecx, dword ptr [ebx + 0x60] */ { const u32 m_ = (u32)(ebx + 0x60u); ecx = (u32)(M32(m_)); }
  /* 004f2f48 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f2f49 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f2f4b call 0x577800 */ esp -= 4; M32(esp) = 0x4f2f50u; SAVEALL; F_00577800(c); ABI_CHECK(0x577800u, 0x4f2f4bu); RETCHK(0x4f2f50u, 0x4f2f4bu); LOADALL;
  /* 004f2f50 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f2f52 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f2f55 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f2f58 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2f5a mov edx, eax */ { edx = (u32)(eax); }
  /* 004f2f5c jle 0x4f2f96 */ if ((ZF_|LT_)) goto L_004f2f96;
  /* 004f2f5e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f2f61 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f2f64 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f2f66 mov ecx, eax */ { ecx = (u32)(eax); }
L_004f2f68:;
  /* 004f2f68 sub ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f2f6b mov eax, esi */ { eax = (u32)(esi); }
  /* 004f2f6d dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f2f6e call 0x547e90 */ esp -= 4; M32(esp) = 0x4f2f73u; SAVEALL; F_00547e90(c); ABI_CHECK(0x547e90u, 0x4f2f6eu); RETCHK(0x4f2f73u, 0x4f2f6eu); LOADALL;
  /* 004f2f73 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2f75 jne 0x4f2f86 */ if (!ZF_) goto L_004f2f86;
  /* 004f2f77 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2f79 jg 0x4f2f68 */ if (!(ZF_|LT_)) goto L_004f2f68;
  /* 004f2f7b mov eax, edi */ { eax = (u32)(edi); }
  /* 004f2f7d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2f7e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2f7f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2f80 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2f82 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2f83 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f2f86:;
  /* 004f2f86 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f2f88 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004f2f8a mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 004f2f8f shl edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 004f2f91 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f2f93 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f2f96u; SAVEALL; call_ind(c, t_); RETCHK(0x4f2f96u, 0x4f2f93u); LOADALL; }
L_004f2f96:;
  /* 004f2f96 mov eax, edi */ { eax = (u32)(edi); }
  /* 004f2f98 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f2f99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f2f9a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f2f9b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f2f9d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f2f9e ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f2fa1:;
  /* 004f2fa1 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f2fa4 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f2faa fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f2fac test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f2faf jp 0x4f3195 */ if (PF_) goto L_004f3195;
  /* 004f2fb5 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f2fbau; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f2fb5u); RETCHK(0x4f2fbau, 0x4f2fb5u); LOADALL;
  /* 004f2fba lea edi, [ebx + 0x2c] */ edi = (u32)((u32)(ebx + 0x2cu));
  /* 004f2fbd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f2fbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2fbf mov edx, 0x12e487a */ { edx = (u32)(0x12e487au); }
  /* 004f2fc4 call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f2fc9u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f2fc4u); RETCHK(0x4f2fc9u, 0x4f2fc4u); LOADALL;
  /* 004f2fc9 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f2fce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f2fd0 je 0x4f2fe8 */ if (ZF_) goto L_004f2fe8;
  /* 004f2fd2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2fd4 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f2fd9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2fdb push 0x64f4c4 */ { u32 v_ = 0x64f4c4u; esp -= 4; M32(esp) = v_; }
  /* 004f2fe0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2fe1 mov edx, edi */ { edx = (u32)(edi); }
  /* 004f2fe3 call 0x531340 */ esp -= 4; M32(esp) = 0x4f2fe8u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f2fe3u); RETCHK(0x4f2fe8u, 0x4f2fe3u); LOADALL;
L_004f2fe8:;
  /* 004f2fe8 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f2fea mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f2fec call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f2fefu; SAVEALL; call_ind(c, t_); RETCHK(0x4f2fefu, 0x4f2fecu); LOADALL; }
  /* 004f2fef push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f2ff1 push 0x124c72c0 */ { u32 v_ = 0x124c72c0u; esp -= 4; M32(esp) = v_; }
  /* 004f2ff6 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f2ffbu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f2ff6u); RETCHK(0x4f2ffbu, 0x4f2ff6u); LOADALL;
  /* 004f2ffb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f2ffc call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f3001u; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f2ffcu); RETCHK(0x4f3001u, 0x4f2ffcu); LOADALL;
  /* 004f3001 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3003 mov dword ptr [ebx + 0x5c], eax */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f3006 je 0x4f3183 */ if (ZF_) goto L_004f3183;
  /* 004f300c mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004f300e call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f3013u; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f300eu); RETCHK(0x4f3013u, 0x4f300eu); LOADALL;
  /* 004f3013 mov ecx, dword ptr [ebx + 0x6c] */ { const u32 m_ = (u32)(ebx + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 004f3016 mov dword ptr [ecx + 0xc], 0x40600000 */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(0x40600000u); }
  /* 004f301d mov eax, dword ptr [ebx + 0x6c] */ { const u32 m_ = (u32)(ebx + 0x6cu); eax = (u32)(M32(m_)); }
  /* 004f3020 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f3023 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f3026 mov eax, dword ptr [ebx + 0x6c] */ { const u32 m_ = (u32)(ebx + 0x6cu); eax = (u32)(M32(m_)); }
  /* 004f3029 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 004f302f mov ecx, dword ptr [ebx + 0x6c] */ { const u32 m_ = (u32)(ebx + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 004f3032 mov eax, dword ptr [0x7a6ca4] */ { const u32 m_ = (u32)(0x7a6ca4u); eax = (u32)(M32(m_)); }
  /* 004f3037 mov dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004f303e mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f3041 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f3043 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3044 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f3047u; SAVEALL; call_ind(c, t_); RETCHK(0x4f3047u, 0x4f3044u); LOADALL; }
  /* 004f3047 call 0x5e71d0 */ esp -= 4; M32(esp) = 0x4f304cu; SAVEALL; F_005e71d0(c); ABI_CHECK(0x5e71d0u, 0x4f3047u); RETCHK(0x4f304cu, 0x4f3047u); LOADALL;
  /* 004f304c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f304e mov ecx, 0x168 */ { ecx = (u32)(0x168u); }
  /* 004f3053 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x4f3053u); eax = q_; edx = r_; }
  /* 004f3055 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3057 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f305a fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 004f305d jge 0x4f3065 */ if (!LT_) goto L_004f3065;
  /* 004f305f fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_004f3065:;
  /* 004f3065 mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f3068 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3069 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f306c call 0x5467e0 */ esp -= 4; M32(esp) = 0x4f3071u; SAVEALL; F_005467e0(c); ABI_CHECK(0x5467e0u, 0x4f306cu); RETCHK(0x4f3071u, 0x4f306cu); LOADALL;
  /* 004f3071 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f3073 mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f3076 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004f3078 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f307b mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f307e mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f3081 mov ecx, dword ptr [0x63f850] */ { const u32 m_ = (u32)(0x63f850u); ecx = (u32)(M32(m_)); }
  /* 004f3087 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f308a mov eax, dword ptr [0x63f858] */ { const u32 m_ = (u32)(0x63f858u); eax = (u32)(M32(m_)); }
  /* 004f308f mov edx, dword ptr [0x63f854] */ { const u32 m_ = (u32)(0x63f854u); edx = (u32)(M32(m_)); }
  /* 004f3095 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f3098 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f309b mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 004f309e mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 004f30a1 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f30a3 mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f30a9 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f30ac fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f30af lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 004f30b2 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f30b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f30b9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f30ba lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f30bd fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f30c0 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f30c3 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f30c6 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f30c9 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f30cc mov dword ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 004f30d3 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 004f30da mov dword ptr [ebp - 0x1c], 0xc47a0000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0xc47a0000u); }
  /* 004f30e1 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 004f30e8 call 0x405500 */ esp -= 4; M32(esp) = 0x4f30edu; SAVEALL; F_00405500(c); ABI_CHECK(0x405500u, 0x4f30e8u); RETCHK(0x4f30edu, 0x4f30e8u); LOADALL;
  /* 004f30ed fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f30ef mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f30f2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f30f5 lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 004f30f8 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f30fb call 0x5469f0 */ esp -= 4; M32(esp) = 0x4f3100u; SAVEALL; F_005469f0(c); ABI_CHECK(0x5469f0u, 0x4f30fbu); RETCHK(0x4f3100u, 0x4f30fbu); LOADALL;
  /* 004f3100 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3102 je 0x4f310d */ if (ZF_) goto L_004f310d;
  /* 004f3104 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3105 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f310au; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f3105u); RETCHK(0x4f310au, 0x4f3105u); LOADALL;
  /* 004f310a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f310d:;
  /* 004f310d push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f310f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f3111 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f3116u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f3111u); RETCHK(0x4f3116u, 0x4f3111u); LOADALL;
  /* 004f3116 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3117 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f3119 mov eax, 0x124c72c0 */ { eax = (u32)(0x124c72c0u); }
  /* 004f311e call 0x4fb850 */ esp -= 4; M32(esp) = 0x4f3123u; SAVEALL; F_004fb850(c); ABI_CHECK(0x4fb850u, 0x4f311eu); RETCHK(0x4f3123u, 0x4f311eu); LOADALL;
  /* 004f3123 mov edi, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); edi = (u32)(M32(m_)); }
  /* 004f3126 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f3129 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f312b call 0x544a10 */ esp -= 4; M32(esp) = 0x4f3130u; SAVEALL; F_00544a10(c); ABI_CHECK(0x544a10u, 0x4f312bu); RETCHK(0x4f3130u, 0x4f312bu); LOADALL;
  /* 004f3130 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f3133 cmp ecx, 0xf */ { u32 a_ = ecx, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f3136 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f3139 mov dword ptr [eax + 0x3c], 5 */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(0x5u); }
  /* 004f3140 je 0x4f3147 */ if (ZF_) goto L_004f3147;
  /* 004f3142 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f3145 jne 0x4f315d */ if (!ZF_) goto L_004f315d;
L_004f3147:;
  /* 004f3147 fld dword ptr [0x65711c] */ { const u32 m_ = (u32)(0x65711cu); FPUSH((double)MF32(m_)); }
  /* 004f314d mov dword ptr [eax + 0x3c], 0x10005 */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(0x10005u); }
  /* 004f3154 fdiv dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004f315a fstp dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f315d:;
  /* 004f315d mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_004f3160:;
  /* 004f3160 mov ecx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f3163 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f3166 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3167 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f316cu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f3167u); RETCHK(0x4f316cu, 0x4f3167u); LOADALL;
  /* 004f316c mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f316f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f3170 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f3175u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f3170u); RETCHK(0x4f3175u, 0x4f3170u); LOADALL;
  /* 004f3175 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f3178:;
  /* 004f3178 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f3179 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f317a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f317c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f317d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f317f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3180 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f3183:;
  /* 004f3183 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f3184 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3185 mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f318c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f318e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f318f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f3191 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3192 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f3195:;
  /* 004f3195 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f3198 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f319b fmul dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f319e fadd dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f31a1 fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f31a4 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f31a7 fmul dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f31aa fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f31ac fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f31ae mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f31b1 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f31b4 fmul dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f31b7 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f31ba fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f31bd mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f31c0 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f31c3 fmul dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f31c6 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f31c9 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f31cc jmp 0x4f3160 */ goto L_004f3160;
L_004f31ce:;
  /* 004f31ce mov eax, dword ptr [ebx + 0x78] */ { const u32 m_ = (u32)(ebx + 0x78u); eax = (u32)(M32(m_)); }
  /* 004f31d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f31d2 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4f31d7u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4f31d2u); RETCHK(0x4f31d7u, 0x4f31d2u); LOADALL;
  /* 004f31d7 mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f31da add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f31dd add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f31e0 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f31e5 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f31e7 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f31e9 jmp 0x4f3160 */ goto L_004f3160;
}

void F_004f31f0(CPU *c) {
  NATIVE_HOOK(0x4f31f0u) REGS; LOADALL;
L_004f31f0:;
  /* 004f31f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f31f1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f31f3 mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004f31f6 mov eax, 0xb */ { eax = (u32)(0xbu); }
  /* 004f31fb cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f31fd je 0x4f323a */ if (ZF_) goto L_004f323a;
  /* 004f31ff mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 004f3202 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f3207u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f3202u); RETCHK(0x4f3207u, 0x4f3202u); LOADALL;
  /* 004f3207 mov ecx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f320a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f320b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f320c mov edx, 0x124c72c1 */ { edx = (u32)(0x124c72c1u); }
  /* 004f3211 call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f3216u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f3211u); RETCHK(0x4f3216u, 0x4f3211u); LOADALL;
  /* 004f3216 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f321b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f321d je 0x4f3236 */ if (ZF_) goto L_004f3236;
  /* 004f321f mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f3222 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f3224 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f3229 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f322b push 0x64f4b0 */ { u32 v_ = 0x64f4b0u; esp -= 4; M32(esp) = v_; }
  /* 004f3230 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3231 call 0x531340 */ esp -= 4; M32(esp) = 0x4f3236u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f3231u); RETCHK(0x4f3236u, 0x4f3231u); LOADALL;
L_004f3236:;
  /* 004f3236 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f3238 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3239 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004f323a:;
  /* 004f323a xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f323c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f323d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f3240(CPU *c) {
  NATIVE_HOOK(0x4f3240u) REGS; LOADALL;
L_004f3240:;
  /* 004f3240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3243 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3244 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f3246 call 0x4f3270 */ esp -= 4; M32(esp) = 0x4f324bu; SAVEALL; F_004f3270(c); ABI_CHECK(0x4f3270u, 0x4f3246u); RETCHK(0x4f324bu, 0x4f3246u); LOADALL;
  /* 004f324b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f324f je 0x4f325a */ if (ZF_) goto L_004f325a;
  /* 004f3251 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3252 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f3257u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f3252u); RETCHK(0x4f3257u, 0x4f3252u); LOADALL;
  /* 004f3257 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f325a:;
  /* 004f325a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f325c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f325d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f325e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f3270(CPU *c) {
  NATIVE_HOOK(0x4f3270u) REGS; LOADALL;
L_004f3270:;
  /* 004f3270 mov dword ptr [ecx], 0x64f4d4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f4d4u); }
  /* 004f3276 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f3280(CPU *c) {
  NATIVE_HOOK(0x4f3280u) REGS; LOADALL;
L_004f3280:;
  /* 004f3280 mov edx, dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); edx = (u32)(M32(m_)); }
  /* 004f3283 sub edx, 0x11f0e540 */ { u32 a_ = edx, b_ = 0x11f0e540u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f3289 mov eax, 0x431bde83 */ { eax = (u32)(0x431bde83u); }
  /* 004f328e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f3290 sar edx, 0x12 */ { u32 n_ = (18u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f3293 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f3295 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f3298 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f329a mov dword ptr [ecx + 0x3c], 8 */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0x8u); }
  /* 004f32a1 mov edx, dword ptr [eax*4 + 0x63f8a0] */ { const u32 m_ = (u32)(eax * 4u + 0x63f8a0u); edx = (u32)(M32(m_)); }
  /* 004f32a8 mov dword ptr [ecx + 0x58], edx */ { const u32 m_ = (u32)(ecx + 0x58u); M32(m_) = (u32)(edx); }
  /* 004f32ab mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f32ad ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f32b0(CPU *c) {
  NATIVE_HOOK(0x4f32b0u) REGS; LOADALL;
L_004f32b0:;
  /* 004f32b0 mov edx, dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); edx = (u32)(M32(m_)); }
  /* 004f32b3 sub edx, 0x11f0e540 */ { u32 a_ = edx, b_ = 0x11f0e540u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f32b9 mov eax, 0x431bde83 */ { eax = (u32)(0x431bde83u); }
  /* 004f32be imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f32c0 sar edx, 0x12 */ { u32 n_ = (18u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f32c3 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f32c5 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f32c8 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f32ca mov dword ptr [ecx + 0x3c], 8 */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0x8u); }
  /* 004f32d1 mov edx, dword ptr [eax*4 + 0x63f8a0] */ { const u32 m_ = (u32)(eax * 4u + 0x63f8a0u); edx = (u32)(M32(m_)); }
  /* 004f32d8 mov dword ptr [ecx + 0x58], edx */ { const u32 m_ = (u32)(ecx + 0x58u); M32(m_) = (u32)(edx); }
  /* 004f32db mov dword ptr [ecx + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(ecx + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f32e2 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f32e4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f32f0(CPU *c) {
  NATIVE_HOOK(0x4f32f0u) REGS; LOADALL;
L_004f32f0:;
  /* 004f32f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f32f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f32f3 fld dword ptr [ecx + 0x54] */ { const u32 m_ = (u32)(ecx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f32f6 mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f32f9 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f32fc fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f32ff fstp dword ptr [ecx + 0x54] */ { const u32 m_ = (u32)(ecx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3302 jne 0x4f3321 */ if (!ZF_) goto L_004f3321;
  /* 004f3304 fld dword ptr [ecx + 0x58] */ { const u32 m_ = (u32)(ecx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f3307 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f330a fst dword ptr [ecx + 0x58] */ { const u32 m_ = (u32)(ecx + 0x58u); MF32(m_) = (float)ST(0); }
  /* 004f330d fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f3313 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f3315 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f3318 jp 0x4f3321 */ if (PF_) goto L_004f3321;
  /* 004f331a mov dword ptr [ecx + 0x3c], 0xb */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f3321:;
  /* 004f3321 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f3323 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3324 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f3330(CPU *c) {
  NATIVE_HOOK(0x4f3330u) REGS; LOADALL;
L_004f3330:;
  /* 004f3330 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3331 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3333 mov eax, dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); eax = (u32)(M32(m_)); }
  /* 004f3336 cmp eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f3339 jne 0x4f3342 */ if (!ZF_) goto L_004f3342;
  /* 004f333b mov dword ptr [ecx + 0x3c], 0xb */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f3342:;
  /* 004f3342 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3343 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f3350(CPU *c) {
  NATIVE_HOOK(0x4f3350u) REGS; LOADALL;
L_004f3350:;
  /* 004f3350 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3351 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f3353 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f3358u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f3353u); RETCHK(0x4f3358u, 0x4f3353u); LOADALL;
  /* 004f3358 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f335a mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f3360 mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f3366 mov dword ptr [esi], 0x64f504 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f504u); }
  /* 004f336c mov dword ptr [esi + 0x40], 0x12c684c0 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x12c684c0u); }
  /* 004f3373 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f3375 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3376 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f3380(CPU *c) {
  NATIVE_HOOK(0x4f3380u) REGS; LOADALL;
L_004f3380:;
  /* 004f3380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3383 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3384 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f3386 call 0x4f33b0 */ esp -= 4; M32(esp) = 0x4f338bu; SAVEALL; F_004f33b0(c); ABI_CHECK(0x4f33b0u, 0x4f3386u); RETCHK(0x4f338bu, 0x4f3386u); LOADALL;
  /* 004f338b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f338f je 0x4f339a */ if (ZF_) goto L_004f339a;
  /* 004f3391 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3392 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f3397u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f3392u); RETCHK(0x4f3397u, 0x4f3392u); LOADALL;
  /* 004f3397 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f339a:;
  /* 004f339a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f339c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f339d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f339e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f33b0(CPU *c) {
  NATIVE_HOOK(0x4f33b0u) REGS; LOADALL;
L_004f33b0:;
  /* 004f33b0 mov dword ptr [ecx], 0x64f504 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f504u); }
  /* 004f33b6 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f33c0(CPU *c) {
  NATIVE_HOOK(0x4f33c0u) REGS; LOADALL;
L_004f33c0:;
  /* 004f33c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f33c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f33c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f33c4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f33c6 push 0x12c684c0 */ { u32 v_ = 0x12c684c0u; esp -= 4; M32(esp) = v_; }
  /* 004f33cb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f33cd call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f33d2u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f33cdu); RETCHK(0x4f33d2u, 0x4f33cdu); LOADALL;
  /* 004f33d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f33d3 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f33d8u; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f33d3u); RETCHK(0x4f33d8u, 0x4f33d3u); LOADALL;
  /* 004f33d8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f33da mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f33dd je 0x4f3464 */ if (ZF_) goto L_004f3464;
  /* 004f33e3 call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f33e8u; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f33e3u); RETCHK(0x4f33e8u, 0x4f33e3u); LOADALL;
  /* 004f33e8 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f33eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f33ec mov dword ptr [esi + 0x58], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f33f3 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f33f8u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f33f3u); RETCHK(0x4f33f8u, 0x4f33f3u); LOADALL;
  /* 004f33f8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f33fb call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f3400u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f33fbu); RETCHK(0x4f3400u, 0x4f33fbu); LOADALL;
  /* 004f3400 mov ecx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f3403 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3404 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3405 mov edx, 0x12c684c1 */ { edx = (u32)(0x12c684c1u); }
  /* 004f340a call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f340fu; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f340au); RETCHK(0x4f340fu, 0x4f340au); LOADALL;
  /* 004f340f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3411 mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f3417 je 0x4f3454 */ if (ZF_) goto L_004f3454;
  /* 004f3419 mov eax, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); eax = (u32)(M32(m_)); }
  /* 004f341c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f341e je 0x4f3447 */ if (ZF_) goto L_004f3447;
  /* 004f3420 lea edx, [eax + 0x30] */ edx = (u32)((u32)(eax + 0x30u));
  /* 004f3423 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f3428 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f342a je 0x4f3442 */ if (ZF_) goto L_004f3442;
  /* 004f342c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f342e push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f3433 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f3435 push 0x64f534 */ { u32 v_ = 0x64f534u; esp -= 4; M32(esp) = v_; }
  /* 004f343a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f343b call 0x531340 */ esp -= 4; M32(esp) = 0x4f3440u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f343bu); RETCHK(0x4f3440u, 0x4f343bu); LOADALL;
  /* 004f3440 jmp 0x4f3444 */ goto L_004f3444;
L_004f3442:;
  /* 004f3442 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f3444:;
  /* 004f3444 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
L_004f3447:;
  /* 004f3447 mov edx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); edx = (u32)(M32(m_)); }
  /* 004f344d mov dword ptr [edx + 0x34], 1 */ { const u32 m_ = (u32)(edx + 0x34u); M32(m_) = (u32)(0x1u); }
L_004f3454:;
  /* 004f3454 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f3457 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3458 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f345a call 0x4f4240 */ esp -= 4; M32(esp) = 0x4f345fu; SAVEALL; F_004f4240(c); ABI_CHECK(0x4f4240u, 0x4f345au); RETCHK(0x4f345fu, 0x4f345au); LOADALL;
  /* 004f345f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3460 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3461 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f3464:;
  /* 004f3464 mov dword ptr [esi + 0x3c], 0xb */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f346b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f346d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f346e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f346f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f3480(CPU *c) {
  NATIVE_HOOK(0x4f3480u) REGS; LOADALL;
L_004f3480:;
  /* 004f3480 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3481 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3483 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f3484 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004f3487 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3488 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f3489 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f348a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004f348c call 0x4f42a0 */ esp -= 4; M32(esp) = 0x4f3491u; SAVEALL; F_004f42a0(c); ABI_CHECK(0x4f42a0u, 0x4f348cu); RETCHK(0x4f3491u, 0x4f348cu); LOADALL;
  /* 004f3491 mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f3497 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f3499 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f349b je 0x4f34df */ if (ZF_) goto L_004f34df;
  /* 004f349d mov eax, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 004f34a0 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f34a2 je 0x4f34b5 */ if (ZF_) goto L_004f34b5;
  /* 004f34a4 cmp dword ptr [0x7a6cd8], esi */ { const u32 m_ = (u32)(0x7a6cd8u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f34aa je 0x4f34b5 */ if (ZF_) goto L_004f34b5;
  /* 004f34ac mov esi, eax */ { esi = (u32)(eax); }
  /* 004f34ae call 0x531380 */ esp -= 4; M32(esp) = 0x4f34b3u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f34aeu); RETCHK(0x4f34b3u, 0x4f34aeu); LOADALL;
  /* 004f34b3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_004f34b5:;
  /* 004f34b5 mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f34bb mov dword ptr [edi + 0x7c], esi */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(esi); }
  /* 004f34be mov dword ptr [eax + 0x34], esi */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(esi); }
  /* 004f34c1 mov ecx, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f34c7 mov dword ptr [ecx + 0x38], 1 */ { const u32 m_ = (u32)(ecx + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f34ce mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f34d4 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f34d9u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f34d4u); RETCHK(0x4f34d9u, 0x4f34d4u); LOADALL;
  /* 004f34d9 mov dword ptr [edi + 0x80], esi */ { const u32 m_ = (u32)(edi + 0x80u); M32(m_) = (u32)(esi); }
L_004f34df:;
  /* 004f34df call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f34e4u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f34dfu); RETCHK(0x4f34e4u, 0x4f34dfu); LOADALL;
  /* 004f34e4 mov edx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f34e7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f34e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f34e9 mov edx, 0x12c684c2 */ { edx = (u32)(0x12c684c2u); }
  /* 004f34ee call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f34f3u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f34eeu); RETCHK(0x4f34f3u, 0x4f34eeu); LOADALL;
  /* 004f34f3 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f34f5 mov dword ptr [edi + 0x80], eax */ { const u32 m_ = (u32)(edi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f34fb je 0x4f3504 */ if (ZF_) goto L_004f3504;
  /* 004f34fd mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
L_004f3504:;
  /* 004f3504 call 0x5afa60 */ esp -= 4; M32(esp) = 0x4f3509u; SAVEALL; F_005afa60(c); ABI_CHECK(0x5afa60u, 0x4f3504u); RETCHK(0x4f3509u, 0x4f3504u); LOADALL;
  /* 004f3509 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f350b mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f350e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f3510 push 0x41f00000 */ { u32 v_ = 0x41f00000u; esp -= 4; M32(esp) = v_; }
  /* 004f3515 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3516 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3517 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 004f351a call 0x5aefe0 */ esp -= 4; M32(esp) = 0x4f351fu; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x4f351au); RETCHK(0x4f351fu, 0x4f351au); LOADALL;
  /* 004f351f mov ecx, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004f3525 mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f3528 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f352a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f352b add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f352e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f352f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3530 call 0x5aefe0 */ esp -= 4; M32(esp) = 0x4f3535u; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x4f3530u); RETCHK(0x4f3535u, 0x4f3530u); LOADALL;
  /* 004f3535 mov eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f3538 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f353b lea esi, [edi + 0x20] */ esi = (u32)((u32)(edi + 0x20u));
  /* 004f353e fadd dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3544 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3547 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f354a add eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f354d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f354e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f354f call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f3554u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f354fu); RETCHK(0x4f3554u, 0x4f354fu); LOADALL;
  /* 004f3554 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f3556 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 004f3558 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f355b fmul dword ptr [0x656e70] */ { const u32 m_ = (u32)(0x656e70u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3561 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3562 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3563 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3564 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3566 fld dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f3569 fmul dword ptr [0x656e70] */ { const u32 m_ = (u32)(0x656e70u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f356f fstp dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3572 fld dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004f3575 fmul dword ptr [0x656e70] */ { const u32 m_ = (u32)(0x656e70u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f357b fstp dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f357e call 0x5aac00 */ esp -= 4; M32(esp) = 0x4f3583u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4f357eu); RETCHK(0x4f3583u, 0x4f357eu); LOADALL;
  /* 004f3583 mov edx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 004f3586 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 004f3588 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f358b fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f358d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f358e fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3590 mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004f3593 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f3596 fadd dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3599 fstp dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f359c mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f359f fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f35a2 fadd dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f35a5 fstp dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f35a8 call 0x5afa30 */ esp -= 4; M32(esp) = 0x4f35adu; SAVEALL; F_005afa30(c); ABI_CHECK(0x5afa30u, 0x4f35a8u); RETCHK(0x4f35adu, 0x4f35a8u); LOADALL;
  /* 004f35ad mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 004f35b2 mov dword ptr [edi + 0x58], 0x3e4ccccd */ { const u32 m_ = (u32)(edi + 0x58u); M32(m_) = (u32)(0x3e4ccccdu); }
  /* 004f35b9 mov dword ptr [edi + 0x3c], eax */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 004f35bc add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f35bf add edi, 0x90 */ { u32 a_ = edi, b_ = 0x90u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f35c5 add ebx, 0x64 */ { u32 a_ = ebx, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f35c8 jmp 0x4f35d0 */ goto L_004f35d0;
L_004f35d0:;
  /* 004f35d0 mov ecx, dword ptr [ebx - 4] */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f35d3 sub ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f35d6 sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f35d9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f35da mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 004f35dc jne 0x4f35d0 */ if (!ZF_) goto L_004f35d0;
  /* 004f35de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f35df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f35e0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f35e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f35e3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f35e4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f35f0(CPU *c) {
  NATIVE_HOOK(0x4f35f0u) REGS; LOADALL;
L_004f35f0:;
  /* 004f35f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f35f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f35f3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f35f6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f35f9 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 004f35fc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f35fe je 0x4f3666 */ if (ZF_) goto L_004f3666;
  /* 004f3600 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f3603 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004f3606 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3608 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004f360b fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f360e fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3611 fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004f3614 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3617 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f361a fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004f361d fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f3623 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f3625 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f3628 jp 0x4f366d */ if (PF_) goto L_004f366d;
  /* 004f362a fmul dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3630 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f3633 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f3636 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f3639 fmul dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f363f fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f3642 fmul dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3648 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f364b fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f364d fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f364f fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3651 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f3654 fadd dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3657 fstp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f365a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f365d mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f3660 fadd dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3663 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f3666:;
  /* 004f3666 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f3669 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f366b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f366c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004f366d:;
  /* 004f366d fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3670 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3671 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f3674 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004f3677 fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f367a mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f367d fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f3680 fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3683 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3686 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f3688 fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f368a fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f368c mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f368f fadd dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3692 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3695 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f3698 fadd dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f369b mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f369e fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f36a1 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f36a4 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f36a7 fcomp dword ptr [0x656e74] */ { const u32 m_ = (u32)(0x656e74u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f36ad fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f36af test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f36b2 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f36b5 jne 0x4f375d */ if (!ZF_) goto L_004f375d;
  /* 004f36bb fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f36bd lea edx, [ebp - 0xc] */ edx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f36c0 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f36c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f36c4 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f36c7 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f36c9 fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f36cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f36d0 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f36d2 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f36d5 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004f36d7 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f36da fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f36dc fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f36de fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f36e1 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004f36e3 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f36e5 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f36e8 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004f36ea fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f36f0 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004f36f2 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f36f4 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f36f7 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004f36f9 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f36fc fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004f36fe fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3701 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004f3704 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3707 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f3709 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f370b fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004f370d fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3710 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3712 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004f3715 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3718 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004f371a fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f371d call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f3722u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f371du); RETCHK(0x4f3722u, 0x4f371du); LOADALL;
  /* 004f3722 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f3724 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f3727 mov dword ptr [ecx + 4], 0x43160000 */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(0x43160000u); }
  /* 004f372e fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f3731 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f3737 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f373a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f373c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f373f jne 0x4f37b4 */ if (!ZF_) goto L_004f37b4;
  /* 004f3741 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f3744 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f3747 fmul dword ptr [0x656e70] */ { const u32 m_ = (u32)(0x656e70u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f374d fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3750 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3753 mov byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x1u); }
  /* 004f3756 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f3758 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3759 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f375b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f375c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004f375d:;
  /* 004f375d fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f3760 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3763 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f3765 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3767 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f3769 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f376c fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f376f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f3771 fchs */ ST(0) = -ST(0);
  /* 004f3773 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004f3779 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f377c fsubr dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f3782 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 004f3784 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f3786 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3788 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f378a fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f378d fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3790 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f3792 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3795 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3798 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f379a fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f379c mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f379f fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f37a2 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f37a5 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f37a8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f37ab fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f37ae fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f37b1 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f37b4:;
  /* 004f37b4 mov byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x1u); }
  /* 004f37b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f37b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f37ba mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f37bc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f37bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f37c0(CPU *c) {
  NATIVE_HOOK(0x4f37c0u) REGS; LOADALL;
L_004f37c0:;
  /* 004f37c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f37c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f37c3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f37c6 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f37c9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f37ca fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f37d0 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f37d2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f37d4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f37d7 jp 0x4f37e2 */ if (PF_) goto L_004f37e2;
  /* 004f37d9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f37db pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f37dc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f37de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f37df ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f37e2:;
  /* 004f37e2 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f37e5 mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f37e8 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f37eb fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f37ee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f37ef push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f37f0 fstp dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f37f3 fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f37f6 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f37f9 fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f37fc je 0x4f39c6 */ if (ZF_) goto L_004f39c6;
  /* 004f3802 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f3805 je 0x4f3910 */ if (ZF_) goto L_004f3910;
  /* 004f380b sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f380e jne 0x4f3a19 */ if (!ZF_) goto L_004f3a19;
  /* 004f3814 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f3817 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f381a fmul dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f381d mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f3823 mov esi, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); esi = (u32)(M32(m_)); }
  /* 004f3826 push 0x4f35f0 */ { u32 v_ = 0x4f35f0u; esp -= 4; M32(esp) = v_; }
  /* 004f382b fmul dword ptr [0x656f88] */ { const u32 m_ = (u32)(0x656f88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3831 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f3836 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3837 lea eax, [ebx + 0x20] */ eax = (u32)((u32)(ebx + 0x20u));
  /* 004f383a fadd dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f383d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f383e fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3841 call 0x4057f0 */ esp -= 4; M32(esp) = 0x4f3846u; SAVEALL; F_004057f0(c); ABI_CHECK(0x4057f0u, 0x4f3841u); RETCHK(0x4f3846u, 0x4f3841u); LOADALL;
  /* 004f3846 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f3849 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f384c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f384d call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f3852u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f384du); RETCHK(0x4f3852u, 0x4f384du); LOADALL;
  /* 004f3852 mov ecx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f3855 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3856 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f385bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f3856u); RETCHK(0x4f385bu, 0x4f3856u); LOADALL;
  /* 004f385b mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f385e mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004f3860 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f3863 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f3866 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f3869 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f386c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f386e add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f3871 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3873 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 004f3876 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 004f3879 mov dword ptr [ebp - 4], 0x41400000 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x41400000u); }
  /* 004f3880 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 004f3883 mov edx, eax */ { edx = (u32)(eax); }
  /* 004f3885 jle 0x4f38bc */ if ((ZF_|LT_)) goto L_004f38bc;
  /* 004f3887 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f388a shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f388d add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f388f mov edi, eax */ { edi = (u32)(eax); }
L_004f3891:;
  /* 004f3891 sub edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f3894 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f3897 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f3899 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f389a call 0x547e90 */ esp -= 4; M32(esp) = 0x4f389fu; SAVEALL; F_00547e90(c); ABI_CHECK(0x547e90u, 0x4f389au); RETCHK(0x4f389fu, 0x4f389au); LOADALL;
  /* 004f389f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f38a1 je 0x4f38b5 */ if (ZF_) goto L_004f38b5;
  /* 004f38a3 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f38a8 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f38aa shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f38ac mov dword ptr [ebx + 0x58], 0 */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(0x0u); }
  /* 004f38b3 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_004f38b5:;
  /* 004f38b5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f38b7 jg 0x4f3891 */ if (!(ZF_|LT_)) goto L_004f3891;
  /* 004f38b9 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
L_004f38bc:;
  /* 004f38bc fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f38bf fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f38c5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f38c7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f38ca jp 0x4f38d3 */ if (PF_) goto L_004f38d3;
  /* 004f38cc mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f38d3:;
  /* 004f38d3 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f38d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f38db je 0x4f3905 */ if (ZF_) goto L_004f3905;
  /* 004f38dd mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f38e0 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f38e3 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f38e6 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f38e9 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f38ee rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f38f0 mov ecx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f38f6 mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f38f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f38fa call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f38ffu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f38fau); RETCHK(0x4f38ffu, 0x4f38fau); LOADALL;
  /* 004f38ff mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f3902 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f3905:;
  /* 004f3905 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f3906 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f3908 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3909 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f390a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f390c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f390d ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f3910:;
  /* 004f3910 call 0x5fe9d4 */ esp -= 4; M32(esp) = 0x4f3915u; SAVEALL; F_005fe9d4(c); ABI_CHECK(0x5fe9d4u, 0x4f3910u); RETCHK(0x4f3915u, 0x4f3910u); LOADALL;
  /* 004f3915 cdq */ edx = (u32)((s32)eax >> 31);
  /* 004f3916 mov ecx, 0x34 */ { ecx = (u32)(0x34u); }
  /* 004f391b idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x4f391bu); eax = q_; edx = r_; }
  /* 004f391d mov ecx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); ecx = (u32)(M32(m_)); }
  /* 004f3923 mov esi, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); esi = (u32)(M32(m_)); }
  /* 004f3926 push 0x4f35f0 */ { u32 v_ = 0x4f35f0u; esp -= 4; M32(esp) = v_; }
  /* 004f392b push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f3930 lea eax, [ebx + 0x20] */ eax = (u32)((u32)(ebx + 0x20u));
  /* 004f3933 add edx, 0xa */ { u32 a_ = edx, b_ = 0xau; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f3936 mov dword ptr [ebp + 0x14], edx */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(edx); }
  /* 004f3939 fild dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 004f393c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f393f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f3940 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3941 fmul dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3944 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3947 fadd dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f394a fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f394d call 0x4057f0 */ esp -= 4; M32(esp) = 0x4f3952u; SAVEALL; F_004057f0(c); ABI_CHECK(0x4057f0u, 0x4f394du); RETCHK(0x4f3952u, 0x4f394du); LOADALL;
  /* 004f3952 mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f3955 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f3958 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f3959 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f395eu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f3959u); RETCHK(0x4f395eu, 0x4f3959u); LOADALL;
  /* 004f395e mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f3961 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3962 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f3967u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f3962u); RETCHK(0x4f3967u, 0x4f3962u); LOADALL;
  /* 004f3967 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f396a fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f3970 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f3973 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f3975 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f3978 jp 0x4f3988 */ if (PF_) goto L_004f3988;
  /* 004f397a mov dword ptr [ebx + 0x58], 0x40800000 */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(0x40800000u); }
  /* 004f3981 mov dword ptr [ebx + 0x3c], 5 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x5u); }
L_004f3988:;
  /* 004f3988 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f398e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3990 je 0x4f3a19 */ if (ZF_) goto L_004f3a19;
  /* 004f3996 mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f3999 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f399c add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f399f add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f39a2 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f39a7 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f39a9 mov ecx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f39af mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f39b2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f39b3 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f39b8u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f39b3u); RETCHK(0x4f39b8u, 0x4f39b3u); LOADALL;
  /* 004f39b8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f39bb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f39bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f39bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f39bf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f39c0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f39c2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f39c3 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f39c6:;
  /* 004f39c6 mov eax, dword ptr [ebx + 0x78] */ { const u32 m_ = (u32)(ebx + 0x78u); eax = (u32)(M32(m_)); }
  /* 004f39c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f39ca call 0x5abd50 */ esp -= 4; M32(esp) = 0x4f39cfu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4f39cau); RETCHK(0x4f39cfu, 0x4f39cau); LOADALL;
  /* 004f39cf mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f39d2 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f39d4 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f39d7 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f39dc rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f39de mov ecx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f39e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f39e2 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f39e7u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f39e2u); RETCHK(0x4f39e7u, 0x4f39e2u); LOADALL;
  /* 004f39e7 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f39ed add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f39f0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f39f2 je 0x4f3a19 */ if (ZF_) goto L_004f3a19;
  /* 004f39f4 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f39f7 mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f39fa add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f39fd add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f3a00 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f3a05 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f3a07 mov edx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); edx = (u32)(M32(m_)); }
  /* 004f3a0d mov eax, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f3a10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3a11 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f3a16u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f3a11u); RETCHK(0x4f3a16u, 0x4f3a11u); LOADALL;
  /* 004f3a16 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f3a19:;
  /* 004f3a19 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f3a1a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3a1b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f3a1d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f3a1e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f3a20 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3a21 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f3a30(CPU *c) {
  NATIVE_HOOK(0x4f3a30u) REGS; LOADALL;
L_004f3a30:;
  /* 004f3a30 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f3a31 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004f3a33 mov ecx, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004f3a36 mov eax, 0xb */ { eax = (u32)(0xbu); }
  /* 004f3a3b cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f3a3d je 0x4f3a93 */ if (ZF_) goto L_004f3a93;
  /* 004f3a3f mov dword ptr [edi + 0x3c], eax */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 004f3a42 mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f3a48 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3a4a je 0x4f3a75 */ if (ZF_) goto L_004f3a75;
  /* 004f3a4c mov dword ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 004f3a53 mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f3a59 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f3a60 mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f3a66 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f3a6bu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f3a66u); RETCHK(0x4f3a6bu, 0x4f3a66u); LOADALL;
  /* 004f3a6b mov dword ptr [edi + 0x80], 0 */ { const u32 m_ = (u32)(edi + 0x80u); M32(m_) = (u32)(0x0u); }
L_004f3a75:;
  /* 004f3a75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3a76 mov esi, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f3a79 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3a7b je 0x4f3a8b */ if (ZF_) goto L_004f3a8b;
  /* 004f3a7d mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f3a82 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3a84 je 0x4f3a8b */ if (ZF_) goto L_004f3a8b;
  /* 004f3a86 call 0x531380 */ esp -= 4; M32(esp) = 0x4f3a8bu; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f3a86u); RETCHK(0x4f3a8bu, 0x4f3a86u); LOADALL;
L_004f3a8b:;
  /* 004f3a8b mov dword ptr [edi + 0x7c], 0 */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(0x0u); }
  /* 004f3a92 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004f3a93:;
  /* 004f3a93 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f3a95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f3a96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f3aa0(CPU *c) {
  NATIVE_HOOK(0x4f3aa0u) REGS; LOADALL;
L_004f3aa0:;
  /* 004f3aa0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004f3aa2 mov eax, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f3aa8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3aaa je 0x4f3ad5 */ if (ZF_) goto L_004f3ad5;
  /* 004f3aac mov dword ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 004f3ab3 mov eax, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f3ab9 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f3ac0 mov eax, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f3ac6 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f3acbu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f3ac6u); RETCHK(0x4f3acbu, 0x4f3ac6u); LOADALL;
  /* 004f3acb mov dword ptr [edx + 0x80], 0 */ { const u32 m_ = (u32)(edx + 0x80u); M32(m_) = (u32)(0x0u); }
L_004f3ad5:;
  /* 004f3ad5 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f3ad7 jmp 0x4f4330 */ SAVEALL; F_004f4330(c); return;
}

void F_004f3ae0(CPU *c) {
  NATIVE_HOOK(0x4f3ae0u) REGS; LOADALL;
L_004f3ae0:;
  /* 004f3ae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3ae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3ae3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f3ae6 cmp dword ptr [ecx + 0x44], eax */ { const u32 m_ = (u32)(ecx + 0x44u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f3ae9 jne 0x4f3b07 */ if (!ZF_) goto L_004f3b07;
  /* 004f3aeb mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f3aee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3af0 je 0x4f3b13 */ if (ZF_) goto L_004f3b13;
  /* 004f3af2 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f3af5 je 0x4f3b13 */ if (ZF_) goto L_004f3b13;
  /* 004f3af7 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f3afa jne 0x4f3b1a */ if (!ZF_) goto L_004f3b1a;
  /* 004f3afc mov dword ptr [ecx + 0x3c], 0xb */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f3b03 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3b04 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f3b07:;
  /* 004f3b07 cmp dword ptr [ecx + 0x4c], eax */ { const u32 m_ = (u32)(ecx + 0x4cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f3b0a jne 0x4f3b1a */ if (!ZF_) goto L_004f3b1a;
  /* 004f3b0c mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f3b0f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3b11 je 0x4f3b1a */ if (ZF_) goto L_004f3b1a;
L_004f3b13:;
  /* 004f3b13 mov dword ptr [ecx + 0x3c], 0xb */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f3b1a:;
  /* 004f3b1a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3b1b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f3b20(CPU *c) {
  NATIVE_HOOK(0x4f3b20u) REGS; LOADALL;
L_004f3b20:;
  /* 004f3b20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3b21 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f3b23 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f3b28u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f3b23u); RETCHK(0x4f3b28u, 0x4f3b23u); LOADALL;
  /* 004f3b28 mov eax, 0x3f800000 */ { eax = (u32)(0x3f800000u); }
  /* 004f3b2d mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f3b33 mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f3b39 mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 004f3b3f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f3b41 mov dword ptr [esi + 0x8c], eax */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(eax); }
  /* 004f3b47 mov dword ptr [esi + 0xa4], eax */ { const u32 m_ = (u32)(esi + 0xa4u); M32(m_) = (u32)(eax); }
  /* 004f3b4d mov eax, 0x42480000 */ { eax = (u32)(0x42480000u); }
  /* 004f3b52 mov dword ptr [esi + 0x94], eax */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(eax); }
  /* 004f3b58 mov dword ptr [esi + 0x98], eax */ { const u32 m_ = (u32)(esi + 0x98u); M32(m_) = (u32)(eax); }
  /* 004f3b5e mov dword ptr [esi], 0x64f548 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f548u); }
  /* 004f3b64 mov dword ptr [esi + 0x40], 0x123d3080 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x123d3080u); }
  /* 004f3b6b mov dword ptr [esi + 0xa0], 0xc2480000 */ { const u32 m_ = (u32)(esi + 0xa0u); M32(m_) = (u32)(0xc2480000u); }
  /* 004f3b75 mov dword ptr [esi + 0xa8], 0xc1800000 */ { const u32 m_ = (u32)(esi + 0xa8u); M32(m_) = (u32)(0xc1800000u); }
  /* 004f3b7f mov dword ptr [esi + 0x9c], 0x41700000 */ { const u32 m_ = (u32)(esi + 0x9cu); M32(m_) = (u32)(0x41700000u); }
  /* 004f3b89 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f3b8b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3b8c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f3b90(CPU *c) {
  NATIVE_HOOK(0x4f3b90u) REGS; LOADALL;
L_004f3b90:;
  /* 004f3b90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3b91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3b93 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3b94 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f3b96 call 0x4f3bc0 */ esp -= 4; M32(esp) = 0x4f3b9bu; SAVEALL; F_004f3bc0(c); ABI_CHECK(0x4f3bc0u, 0x4f3b96u); RETCHK(0x4f3b9bu, 0x4f3b96u); LOADALL;
  /* 004f3b9b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f3b9f je 0x4f3baa */ if (ZF_) goto L_004f3baa;
  /* 004f3ba1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3ba2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f3ba7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f3ba2u); RETCHK(0x4f3ba7u, 0x4f3ba2u); LOADALL;
  /* 004f3ba7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f3baa:;
  /* 004f3baa mov eax, esi */ { eax = (u32)(esi); }
  /* 004f3bac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3bad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3bae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f3bc0(CPU *c) {
  NATIVE_HOOK(0x4f3bc0u) REGS; LOADALL;
L_004f3bc0:;
  /* 004f3bc0 mov dword ptr [ecx], 0x64f548 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f548u); }
  /* 004f3bc6 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f3bd0(CPU *c) {
  NATIVE_HOOK(0x4f3bd0u) REGS; LOADALL;
L_004f3bd0:;
  /* 004f3bd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3bd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3bd3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3bd4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f3bd6 push 0x123d3081 */ { u32 v_ = 0x123d3081u; esp -= 4; M32(esp) = v_; }
  /* 004f3bdb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f3bdd call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f3be2u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f3bddu); RETCHK(0x4f3be2u, 0x4f3bddu); LOADALL;
  /* 004f3be2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3be3 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f3be8u; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f3be3u); RETCHK(0x4f3be8u, 0x4f3be3u); LOADALL;
  /* 004f3be8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3bea mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f3bed je 0x4f3c04 */ if (ZF_) goto L_004f3c04;
  /* 004f3bef call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f3bf4u; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f3befu); RETCHK(0x4f3bf4u, 0x4f3befu); LOADALL;
  /* 004f3bf4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f3bf7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3bf8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f3bfa call 0x4f4240 */ esp -= 4; M32(esp) = 0x4f3bffu; SAVEALL; F_004f4240(c); ABI_CHECK(0x4f4240u, 0x4f3bfau); RETCHK(0x4f3bffu, 0x4f3bfau); LOADALL;
  /* 004f3bff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3c00 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3c01 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f3c04:;
  /* 004f3c04 mov dword ptr [esi + 0x3c], 0xb */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f3c0b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f3c0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3c0e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3c0f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f3c20(CPU *c) {
  NATIVE_HOOK(0x4f3c20u) REGS; LOADALL;
L_004f3c20:;
  /* 004f3c20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3c21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3c23 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f3c24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3c25 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f3c28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f3c29 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3c2a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004f3c2c call 0x4f42a0 */ esp -= 4; M32(esp) = 0x4f3c31u; SAVEALL; F_004f42a0(c); ABI_CHECK(0x4f42a0u, 0x4f3c2cu); RETCHK(0x4f3c31u, 0x4f3c2cu); LOADALL;
  /* 004f3c31 mov dword ptr [edi + 0x58], 0x3f800000 */ { const u32 m_ = (u32)(edi + 0x58u); M32(m_) = (u32)(0x3f800000u); }
  /* 004f3c38 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f3c3b fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 004f3c3e lea ebx, [edi + 0x20] */ ebx = (u32)((u32)(edi + 0x20u));
  /* 004f3c41 fmul dword ptr [0x657118] */ { const u32 m_ = (u32)(0x657118u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3c47 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f3c49 fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3c4b mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f3c4e fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f3c51 lea ecx, [edi + 0x2c] */ ecx = (u32)((u32)(edi + 0x2cu));
  /* 004f3c54 fmul dword ptr [0x657118] */ { const u32 m_ = (u32)(0x657118u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3c5a fstp dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3c5d mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f3c60 fld dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004f3c63 fmul dword ptr [0x657118] */ { const u32 m_ = (u32)(0x657118u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3c69 fstp dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3c6c mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f3c6f fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 004f3c72 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3c78 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3c7a mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f3c7d fld dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f3c80 mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f3c86 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3c8c fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3c8f mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f3c92 fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004f3c95 mov eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f3c98 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3c9e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f3ca0 fstp dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3ca3 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f3ca5 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3ca7 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3ca9 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f3cac fsub dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3caf fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3cb2 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f3cb5 mov eax, 0x63f868 */ { eax = (u32)(0x63f868u); }
  /* 004f3cba fsub dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3cbd fstp dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3cc0 call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f3cc5u; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f3cc0u); RETCHK(0x4f3cc5u, 0x4f3cc0u); LOADALL;
  /* 004f3cc5 fcom dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f3ccb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f3cce fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f3cd0 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f3cd3 jp 0x4f3cdd */ if (PF_) goto L_004f3cdd;
  /* 004f3cd5 fld dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f3cd8 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f3cda fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f3cdd:;
  /* 004f3cdd mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f3ce2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f3ce4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3ce6 mov edx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f3ce9 je 0x4f3d0a */ if (ZF_) goto L_004f3d0a;
  /* 004f3ceb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f3cec push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f3cf1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f3cf3 push 0x64f3cc */ { u32 v_ = 0x64f3ccu; esp -= 4; M32(esp) = v_; }
  /* 004f3cf8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3cf9 call 0x531340 */ esp -= 4; M32(esp) = 0x4f3cfeu; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f3cf9u); RETCHK(0x4f3cfeu, 0x4f3cf9u); LOADALL;
  /* 004f3cfe mov dword ptr [edi + 0x7c], eax */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f3d01 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f3d02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3d03 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f3d05 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f3d06 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3d07 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f3d0a:;
  /* 004f3d0a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f3d0c mov dword ptr [edi + 0x7c], eax */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f3d0f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f3d10 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3d11 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f3d13 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f3d14 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3d15 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f3d20(CPU *c) {
  NATIVE_HOOK(0x4f3d20u) REGS; LOADALL;
L_004f3d20:;
  /* 004f3d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3d23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3d24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f3d25 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f3d28 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f3d2a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f3d2c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f3d2d call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f3d30u; SAVEALL; call_ind(c, t_); RETCHK(0x4f3d30u, 0x4f3d2du); LOADALL; }
  /* 004f3d30 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f3d33 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f3d35 lea ecx, [esi + 0x2c] */ ecx = (u32)((u32)(esi + 0x2cu));
  /* 004f3d38 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f3d3a mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f3d3d mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f3d40 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f3d43 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f3d44 mov dword ptr [esi + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f3d4b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f3d4e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f3d50 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f3d51 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f3d52 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f3d60(CPU *c) {
  NATIVE_HOOK(0x4f3d60u) REGS; LOADALL;
L_004f3d60:;
  /* 004f3d60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f3d61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f3d63 sub esp, 0xa8 */ { u32 a_ = esp, b_ = 0xa8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f3d69 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f3d6a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f3d6c fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f3d6f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3d70 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3d73 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f3d74 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004f3d77 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3d7a mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f3d7d fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f3d80 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3d83 mov dword ptr [ebx + 0x58], eax */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(eax); }
  /* 004f3d86 mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f3d89 cmp eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f3d8c fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3d8f ja 0x4f4076 */ if (!(CF_|ZF_)) goto L_004f4076;
  /* 004f3d95 movzx ecx, byte ptr [eax + 0x4f412c] */ { const u32 m_ = (u32)(eax + 0x4f412cu); ecx = (u32)(M8(m_)); }
  /* 004f3d9c jmp dword ptr [ecx*4 + 0x4f4118] */ { const u32 m_ = (u32)(ecx * 4u + 0x4f4118u); u32 t_ = M32(m_); switch (t_) { case 0x4f3da3u: goto L_004f3da3; case 0x4f3dd8u: goto L_004f3dd8; case 0x4f3fd8u: goto L_004f3fd8; case 0x4f4015u: goto L_004f4015; case 0x4f4076u: goto L_004f4076; default: SAVEALL; call_ind(c, t_); return; } }
L_004f3da3:;
  /* 004f3da3 mov edx, dword ptr [ebx + 0x78] */ { const u32 m_ = (u32)(ebx + 0x78u); edx = (u32)(M32(m_)); }
  /* 004f3da6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f3da7 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4f3dacu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4f3da7u); RETCHK(0x4f3dacu, 0x4f3da7u); LOADALL;
  /* 004f3dac mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f3daf mov esi, eax */ { esi = (u32)(eax); }
  /* 004f3db1 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f3db4 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f3db9 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f3dbb mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f3dbe add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f3dc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3dc2 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f3dc7u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f3dc2u); RETCHK(0x4f3dc7u, 0x4f3dc2u); LOADALL;
  /* 004f3dc7 mov ecx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f3dca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3dcb call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f3dd0u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f3dcbu); RETCHK(0x4f3dd0u, 0x4f3dcbu); LOADALL;
  /* 004f3dd0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f3dd3 jmp 0x4f4076 */ goto L_004f4076;
L_004f3dd8:;
  /* 004f3dd8 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004f3ddb fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f3de1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f3de3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f3de6 jp 0x4f3f84 */ if (PF_) goto L_004f3f84;
  /* 004f3dec mov edx, dword ptr [0x63f868] */ { const u32 m_ = (u32)(0x63f868u); edx = (u32)(M32(m_)); }
  /* 004f3df2 mov eax, dword ptr [0x63f86c] */ { const u32 m_ = (u32)(0x63f86cu); eax = (u32)(M32(m_)); }
  /* 004f3df7 mov ecx, dword ptr [0x63f870] */ { const u32 m_ = (u32)(0x63f870u); ecx = (u32)(M32(m_)); }
  /* 004f3dfd mov dword ptr [ebp - 0x38], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edx); }
  /* 004f3e00 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 004f3e03 mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 004f3e06 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f3e0bu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f3e06u); RETCHK(0x4f3e0bu, 0x4f3e06u); LOADALL;
  /* 004f3e0b lea esi, [ebx + 0x2c] */ esi = (u32)((u32)(ebx + 0x2cu));
  /* 004f3e0e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f3e0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3e10 mov edx, 0x12e487a */ { edx = (u32)(0x12e487au); }
  /* 004f3e15 call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f3e1au; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f3e15u); RETCHK(0x4f3e1au, 0x4f3e15u); LOADALL;
  /* 004f3e1a mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004f3e1c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f3e1e call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f3e21u; SAVEALL; call_ind(c, t_); RETCHK(0x4f3e21u, 0x4f3e1eu); LOADALL; }
  /* 004f3e21 mov edx, dword ptr [0x7a6cd4] */ { const u32 m_ = (u32)(0x7a6cd4u); edx = (u32)(M32(m_)); }
  /* 004f3e27 lea eax, [ebp - 0x5c] */ eax = (u32)((u32)(ebp + 0xffffffa4u));
  /* 004f3e2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3e2b lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f3e2e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3e2f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f3e30 push 0x7a6cac */ { u32 v_ = 0x7a6cacu; esp -= 4; M32(esp) = v_; }
  /* 004f3e35 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f3e37 call 0x545680 */ esp -= 4; M32(esp) = 0x4f3e3cu; SAVEALL; F_00545680(c); ABI_CHECK(0x545680u, 0x4f3e37u); RETCHK(0x4f3e3cu, 0x4f3e37u); LOADALL;
  /* 004f3e3c mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f3e42 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f3e44 lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 004f3e47 mov eax, 0x63f868 */ { eax = (u32)(0x63f868u); }
  /* 004f3e4c lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f3e4f call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f3e54u; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f3e4fu); RETCHK(0x4f3e54u, 0x4f3e4fu); LOADALL;
  /* 004f3e54 fcom dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f3e5a add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f3e5d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f3e5f test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f3e62 jp 0x4f3e6c */ if (PF_) goto L_004f3e6c;
  /* 004f3e64 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f3e67 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f3e69 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f3e6c:;
  /* 004f3e6c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f3e6e call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f3e73u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f3e6eu); RETCHK(0x4f3e73u, 0x4f3e6eu); LOADALL;
  /* 004f3e73 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f3e76 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3e77 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3e78 mov edx, 0x123d3080 */ { edx = (u32)(0x123d3080u); }
  /* 004f3e7d call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f3e82u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f3e7du); RETCHK(0x4f3e82u, 0x4f3e7du); LOADALL;
  /* 004f3e82 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f3e84 mov dword ptr [ebx + 0x8c], eax */ { const u32 m_ = (u32)(ebx + 0x8cu); M32(m_) = (u32)(eax); }
  /* 004f3e8a je 0x4f406f */ if (ZF_) goto L_004f406f;
  /* 004f3e90 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f3e93 mov ecx, 0x64f588 */ { ecx = (u32)(0x64f588u); }
  /* 004f3e98 call 0x4afa80 */ esp -= 4; M32(esp) = 0x4f3e9du; SAVEALL; F_004afa80(c); ABI_CHECK(0x4afa80u, 0x4f3e98u); RETCHK(0x4f3e9du, 0x4f3e98u); LOADALL;
  /* 004f3e9d mov edx, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); edx = (u32)(M32(m_)); }
  /* 004f3ea3 mov dword ptr [ebx + 0x3c], 8 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x8u); }
  /* 004f3eaa mov dword ptr [edx + 0x38], 0 */ { const u32 m_ = (u32)(edx + 0x38u); M32(m_) = (u32)(0x0u); }
  /* 004f3eb1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f3eb4 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004f3eb7 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f3eba mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 004f3ebd fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 004f3ec0 fadd dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3ec6 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f3ec9 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 004f3ecc mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 004f3ecf mov eax, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M32(m_)); }
  /* 004f3ed2 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3ed5 fld dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); FPUSH((double)MF32(m_)); }
  /* 004f3ed8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3ed9 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004f3edb fchs */ ST(0) = -ST(0);
  /* 004f3edd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f3ede fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3ee1 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 004f3ee4 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 004f3eeb call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f3ef0u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f3eebu); RETCHK(0x4f3ef0u, 0x4f3eebu); LOADALL;
  /* 004f3ef0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f3ef2 mov edi, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edi = (u32)(M32(m_)); }
  /* 004f3ef8 lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 004f3efb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3efc lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f3eff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3f00 lea ebx, [ebp - 0x50] */ ebx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004f3f03 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f3f06 call 0x404e00 */ esp -= 4; M32(esp) = 0x4f3f0bu; SAVEALL; F_00404e00(c); ABI_CHECK(0x404e00u, 0x4f3f06u); RETCHK(0x4f3f0bu, 0x4f3f06u); LOADALL;
  /* 004f3f0b fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 004f3f0e fsub dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3f11 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 004f3f14 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f3f15 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3f18 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 004f3f1b fsub dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3f1e fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3f21 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 004f3f24 fsub dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f3f27 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3f2a call 0x5aa970 */ esp -= 4; M32(esp) = 0x4f3f2fu; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4f3f2au); RETCHK(0x4f3f2fu, 0x4f3f2au); LOADALL;
  /* 004f3f2f fcom dword ptr [0x656f80] */ { const u32 m_ = (u32)(0x656f80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f3f35 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 004f3f38 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f3f3b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f3f3d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f3f40 jne 0x4f3f58 */ if (!ZF_) goto L_004f3f58;
  /* 004f3f42 fmul dword ptr [0x656da4] */ { const u32 m_ = (u32)(0x656da4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3f48 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f3f4a fstp dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3f50 fstp dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3f56 jmp 0x4f3f5a */ goto L_004f3f5a;
L_004f3f58:;
  /* 004f3f58 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f3f5a:;
  /* 004f3f5a mov eax, dword ptr [edi + 0x8c] */ { const u32 m_ = (u32)(edi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f3f60 mov esi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); esi = (u32)(M32(m_)); }
  /* 004f3f63 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 004f3f66 call 0x4eea10 */ esp -= 4; M32(esp) = 0x4f3f6bu; SAVEALL; F_004eea10(c); ABI_CHECK(0x4eea10u, 0x4f3f66u); RETCHK(0x4f3f6bu, 0x4f3f66u); LOADALL;
  /* 004f3f6b mov edx, dword ptr [edi + 0x8c] */ { const u32 m_ = (u32)(edi + 0x8cu); edx = (u32)(M32(m_)); }
  /* 004f3f71 mov esi, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); esi = (u32)(M32(m_)); }
  /* 004f3f74 lea ecx, [ebp - 0x5c] */ ecx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 004f3f77 call 0x4afa60 */ esp -= 4; M32(esp) = 0x4f3f7cu; SAVEALL; F_004afa60(c); ABI_CHECK(0x4afa60u, 0x4f3f77u); RETCHK(0x4f3f7cu, 0x4f3f77u); LOADALL;
  /* 004f3f7c mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 004f3f7f jmp 0x4f4076 */ goto L_004f4076;
L_004f3f84:;
  /* 004f3f84 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f3f87 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f3f8a fmul dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3f8d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3f8e fadd dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3f91 fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3f94 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f3f97 fmul dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3f9a fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3f9c fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3f9e mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f3fa1 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f3fa4 fmul dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3fa7 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3faa fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3fad mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f3fb0 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f3fb3 fmul dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3fb6 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f3fb9 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3fbc mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f3fbf fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f3fc2 fmul dword ptr [0x657114] */ { const u32 m_ = (u32)(0x657114u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f3fc8 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f3fcb call 0x546820 */ esp -= 4; M32(esp) = 0x4f3fd0u; SAVEALL; F_00546820(c); ABI_CHECK(0x546820u, 0x4f3fcbu); RETCHK(0x4f3fd0u, 0x4f3fcbu); LOADALL;
  /* 004f3fd0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f3fd3 jmp 0x4f4076 */ goto L_004f4076;
L_004f3fd8:;
  /* 004f3fd8 mov ecx, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); ecx = (u32)(M32(m_)); }
  /* 004f3fde mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f3fe1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f3fe3 lea eax, [ebx + 0x80] */ eax = (u32)((u32)(ebx + 0x80u));
  /* 004f3fe9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f3fea add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f3fed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f3fee call 0x5af2d0 */ esp -= 4; M32(esp) = 0x4f3ff3u; SAVEALL; F_005af2d0(c); ABI_CHECK(0x5af2d0u, 0x4f3feeu); RETCHK(0x4f3ff3u, 0x4f3feeu); LOADALL;
  /* 004f3ff3 mov eax, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f3ff9 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f3ffc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f3ffd call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f4002u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f3ffdu); RETCHK(0x4f4002u, 0x4f3ffdu); LOADALL;
  /* 004f4002 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4005 mov dword ptr [ebx + 0x3c], 9 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x9u); }
  /* 004f400c mov byte ptr [ebx + 0x90], 0 */ { const u32 m_ = (u32)(ebx + 0x90u); M8(m_) = (u8)(0x0u); }
  /* 004f4013 jmp 0x4f4076 */ goto L_004f4076;
L_004f4015:;
  /* 004f4015 mov al, byte ptr [ebx + 0x90] */ { const u32 m_ = (u32)(ebx + 0x90u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f401b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f401d jne 0x4f4051 */ if (!ZF_) goto L_004f4051;
  /* 004f401f mov ecx, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); ecx = (u32)(M32(m_)); }
  /* 004f4025 fild dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)(s32)M32(m_)); }
  /* 004f4028 fild dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)(s32)M32(m_)); }
  /* 004f402b fmul dword ptr [0x6570f4] */ { const u32 m_ = (u32)(0x6570f4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4031 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 004f4033 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f4035 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f4038 jp 0x4f4051 */ if (PF_) goto L_004f4051;
  /* 004f403a mov byte ptr [ebx + 0x90], 1 */ { const u32 m_ = (u32)(ebx + 0x90u); M8(m_) = (u8)(0x1u); }
  /* 004f4041 mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f4044 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f4047 mov ecx, 0x64f578 */ { ecx = (u32)(0x64f578u); }
  /* 004f404c call 0x4afa80 */ esp -= 4; M32(esp) = 0x4f4051u; SAVEALL; F_004afa80(c); ABI_CHECK(0x4afa80u, 0x4f404cu); RETCHK(0x4f4051u, 0x4f404cu); LOADALL;
L_004f4051:;
  /* 004f4051 mov eax, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f4057 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f405a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f405c jne 0x4f4076 */ if (!ZF_) goto L_004f4076;
  /* 004f405e mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f4065 mov dword ptr [ebx + 0x8c], 0 */ { const u32 m_ = (u32)(ebx + 0x8cu); M32(m_) = (u32)(0x0u); }
L_004f406f:;
  /* 004f406f mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f4076:;
  /* 004f4076 mov eax, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f407c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f407e je 0x4f410d */ if (ZF_) goto L_004f410d;
  /* 004f4084 mov ecx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f4087 cmp ecx, 0x26c */ { u32 a_ = ecx, b_ = 0x26cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f408d jg 0x4f410d */ if (!(ZF_|LT_)) goto L_004f410d;
  /* 004f408f cmp ecx, 0x2d */ { u32 a_ = ecx, b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4092 jle 0x4f410d */ if ((ZF_|LT_)) goto L_004f410d;
  /* 004f4094 mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f4097 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f409a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f409b lea eax, [ebp - 0xa8] */ eax = (u32)((u32)(ebp + 0xffffff58u));
  /* 004f40a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f40a2 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004f40a9 call 0x5af080 */ esp -= 4; M32(esp) = 0x4f40aeu; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x4f40a9u); RETCHK(0x4f40aeu, 0x4f40a9u); LOADALL;
  /* 004f40ae mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f40b1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f40b4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f40b6 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f40b9 jle 0x4f4101 */ if ((ZF_|LT_)) goto L_004f4101;
  /* 004f40bb mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f40be shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f40c1 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f40c3 lea esi, [ebx + 0x94] */ esi = (u32)((u32)(ebx + 0x94u));
  /* 004f40c9 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f40cb jmp 0x4f40d0 */ goto L_004f40d0;
L_004f40d0:;
  /* 004f40d0 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004f40d3 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f40d4 sub edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f40d7 lea eax, [ebp - 0xa8] */ eax = (u32)((u32)(ebp + 0xffffff58u));
  /* 004f40dd mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 004f40e0 call 0x547ee0 */ esp -= 4; M32(esp) = 0x4f40e5u; SAVEALL; F_00547ee0(c); ABI_CHECK(0x547ee0u, 0x4f40e0u); RETCHK(0x4f40e5u, 0x4f40e0u); LOADALL;
  /* 004f40e5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f40e7 je 0x4f40fa */ if (ZF_) goto L_004f40fa;
  /* 004f40e9 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f40ec mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 004f40f1 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f40f3 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f40f5 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f40f7 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_004f40fa:;
  /* 004f40fa mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f40fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f40ff jg 0x4f40d0 */ if (!(ZF_|LT_)) goto L_004f40d0;
L_004f4101:;
  /* 004f4101 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f4104 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4105 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4106 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4107 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f4109 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f410a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f410d:;
  /* 004f410d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f410e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f410f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f4111 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4112 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f4114 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4115 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f4140(CPU *c) {
  NATIVE_HOOK(0x4f4140u) REGS; LOADALL;
L_004f4140:;
  /* 004f4140 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004f4142 mov eax, dword ptr [edx + 0x8c] */ { const u32 m_ = (u32)(edx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f4148 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f414a je 0x4f4168 */ if (ZF_) goto L_004f4168;
  /* 004f414c mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f4153 mov eax, dword ptr [edx + 0x8c] */ { const u32 m_ = (u32)(edx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f4159 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f415eu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f4159u); RETCHK(0x4f415eu, 0x4f4159u); LOADALL;
  /* 004f415e mov dword ptr [edx + 0x8c], 0 */ { const u32 m_ = (u32)(edx + 0x8cu); M32(m_) = (u32)(0x0u); }
L_004f4168:;
  /* 004f4168 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f416a jmp 0x4f4330 */ SAVEALL; F_004f4330(c); return;
}

void F_004f4170(CPU *c) {
  NATIVE_HOOK(0x4f4170u) REGS; LOADALL;
L_004f4170:;
  /* 004f4170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4173 mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f4176 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4178 jne 0x4f4189 */ if (!ZF_) goto L_004f4189;
  /* 004f417a mov eax, dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); eax = (u32)(M32(m_)); }
  /* 004f417d cmp eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4180 jne 0x4f4189 */ if (!ZF_) goto L_004f4189;
  /* 004f4182 mov dword ptr [ecx + 0x3c], 0xb */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f4189:;
  /* 004f4189 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f418a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f4190(CPU *c) {
  NATIVE_HOOK(0x4f4190u) REGS; LOADALL;
L_004f4190:;
  /* 004f4190 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4191 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f4193 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f4195 mov dword ptr [esi], 0x64f594 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f594u); }
  /* 004f419b mov dword ptr [esi + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f41a2 mov dword ptr [esi + 0x38], 0xc1f00000 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0xc1f00000u); }
  /* 004f41a9 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f41ac mov byte ptr [esi + 5], al */ { const u32 m_ = (u32)(esi + 0x5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f41af mov dword ptr [esi + 0x3c], ebx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 004f41b2 mov dword ptr [esi + 0x44], ebx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ebx); }
  /* 004f41b5 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f41bbu; SAVEALL; call_ind(c, t_); RETCHK(0x4f41bbu, 0x4f41b5u); LOADALL; }
  /* 004f41bb mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 004f41be mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 004f41c1 mov byte ptr [esi + 0x50], bl */ { const u32 m_ = (u32)(esi + 0x50u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f41c4 mov dword ptr [esi + 0x5c], ebx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 004f41c7 mov dword ptr [esi + 0x60], ebx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ebx); }
  /* 004f41ca mov dword ptr [esi + 0x64], ebx */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(ebx); }
  /* 004f41cd mov dword ptr [esi + 0x68], ebx */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(ebx); }
  /* 004f41d0 mov dword ptr [esi + 0x6c], ebx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ebx); }
  /* 004f41d3 mov dword ptr [esi + 0x70], ebx */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(ebx); }
  /* 004f41d6 mov dword ptr [esi + 0x74], ebx */ { const u32 m_ = (u32)(esi + 0x74u); M32(m_) = (u32)(ebx); }
  /* 004f41d9 mov dword ptr [esi + 0x78], ebx */ { const u32 m_ = (u32)(esi + 0x78u); M32(m_) = (u32)(ebx); }
  /* 004f41dc mov dword ptr [esi + 0x7c], ebx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 004f41df mov eax, esi */ { eax = (u32)(esi); }
  /* 004f41e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f41e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f41f0(CPU *c) {
  NATIVE_HOOK(0x4f41f0u) REGS; LOADALL;
L_004f41f0:;
  /* 004f41f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f41f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f41f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f41f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f41f6 call 0x4f4220 */ esp -= 4; M32(esp) = 0x4f41fbu; SAVEALL; F_004f4220(c); ABI_CHECK(0x4f4220u, 0x4f41f6u); RETCHK(0x4f41fbu, 0x4f41f6u); LOADALL;
  /* 004f41fb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f41ff je 0x4f420a */ if (ZF_) goto L_004f420a;
  /* 004f4201 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4202 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f4207u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f4202u); RETCHK(0x4f4207u, 0x4f4202u); LOADALL;
  /* 004f4207 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f420a:;
  /* 004f420a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f420c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f420d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f420e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f4220(CPU *c) {
  NATIVE_HOOK(0x4f4220u) REGS; LOADALL;
L_004f4220:;
  /* 004f4220 mov dword ptr [ecx], 0x64f594 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f594u); }
  /* 004f4226 jmp 0x4f4330 */ SAVEALL; F_004f4330(c); return;
}

void F_004f4230(CPU *c) {
  NATIVE_HOOK(0x4f4230u) REGS; LOADALL;
L_004f4230:;
  /* 004f4230 mov dword ptr [eax + 0x3c], 0 */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 004f4237 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f4239 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4240(CPU *c) {
  NATIVE_HOOK(0x4f4240u) REGS; LOADALL;
L_004f4240:;
  /* 004f4240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4243 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f4246 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4247 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f4249 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f424c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f424e mov dword ptr [ebx + 0x3c], 0 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 004f4255 mov dword ptr [ebx + 0x78], eax */ { const u32 m_ = (u32)(ebx + 0x78u); M32(m_) = (u32)(eax); }
  /* 004f4258 mov dword ptr [ebx + 0x54], 0x3fcccccd */ { const u32 m_ = (u32)(ebx + 0x54u); M32(m_) = (u32)(0x3fcccccdu); }
  /* 004f425f je 0x4f4290 */ if (ZF_) goto L_004f4290;
  /* 004f4261 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4263 je 0x4f4281 */ if (ZF_) goto L_004f4281;
  /* 004f4265 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4266 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4267 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4268 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4f426du; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4f4268u); RETCHK(0x4f426du, 0x4f4268u); LOADALL;
  /* 004f426d mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f4270 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4273 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f4276 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f427b mov esi, eax */ { esi = (u32)(eax); }
  /* 004f427d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f427f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4280 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004f4281:;
  /* 004f4281 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f4284 mov edx, dword ptr [0x7a6ca4] */ { const u32 m_ = (u32)(0x7a6ca4u); edx = (u32)(M32(m_)); }
  /* 004f428a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f428c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f428d call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f4290u; SAVEALL; call_ind(c, t_); RETCHK(0x4f4290u, 0x4f428du); LOADALL; }
L_004f4290:;
  /* 004f4290 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f4292 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4293 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4294 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f42a0(CPU *c) {
  NATIVE_HOOK(0x4f42a0u) REGS; LOADALL;
L_004f42a0:;
  /* 004f42a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f42a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f42a3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f42a6 mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f42a9 mov dword ptr [ecx + 0x70], edx */ { const u32 m_ = (u32)(ecx + 0x70u); M32(m_) = (u32)(edx); }
  /* 004f42ac mov edx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); edx = (u32)(M32(m_)); }
  /* 004f42af mov dword ptr [ecx + 0x74], edx */ { const u32 m_ = (u32)(ecx + 0x74u); M32(m_) = (u32)(edx); }
  /* 004f42b2 mov dword ptr [ecx + 0x3c], 2 */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0x2u); }
  /* 004f42b9 mov eax, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004f42bc mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f42be add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f42c1 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f42c3 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f42c6 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f42c9 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f42cc mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f42cf mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f42d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f42d2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f42e0(CPU *c) {
  NATIVE_HOOK(0x4f42e0u) REGS; LOADALL;
L_004f42e0:;
  /* 004f42e0 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 004f42e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f42e4 mov ebx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 004f42e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f42e8 lea edi, [esi + 0x60] */ edi = (u32)((u32)(esi + 0x60u));
  /* 004f42eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f42ec push 0x545180 */ { u32 v_ = 0x545180u; esp -= 4; M32(esp) = v_; }
  /* 004f42f1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f42f2 call 0x577da0 */ esp -= 4; M32(esp) = 0x4f42f7u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4f42f2u); RETCHK(0x4f42f7u, 0x4f42f2u); LOADALL;
  /* 004f42f7 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f42f9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f42fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f42fe je 0x4f4317 */ if (ZF_) goto L_004f4317;
  /* 004f4300 test byte ptr [eax + 0x4c], 2 */ { const u32 m_ = (u32)(eax + 0x4cu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f4304 je 0x4f430f */ if (ZF_) goto L_004f430f;
  /* 004f4306 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4307 call 0x5776c0 */ esp -= 4; M32(esp) = 0x4f430cu; SAVEALL; F_005776c0(c); ABI_CHECK(0x5776c0u, 0x4f4307u); RETCHK(0x4f430cu, 0x4f4307u); LOADALL;
  /* 004f430c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f430f:;
  /* 004f430f mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004f4311 add ecx, 0x1c */ { u32 a_ = ecx, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f4314 mov dword ptr [esi + 0x6c], ecx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ecx); }
L_004f4317:;
  /* 004f4317 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f431a mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 004f431d add eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f4320 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4321 mov dword ptr [esi + 0x68], eax */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(eax); }
  /* 004f4324 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4325 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4330(CPU *c) {
  NATIVE_HOOK(0x4f4330u) REGS; LOADALL;
L_004f4330:;
  /* 004f4330 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4331 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4332 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4333 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004f4335 mov esi, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f4338 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f433a cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f433c je 0x4f434b */ if (ZF_) goto L_004f434b;
  /* 004f433e cmp dword ptr [0x7a6cd8], ebx */ { const u32 m_ = (u32)(0x7a6cd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4344 je 0x4f434b */ if (ZF_) goto L_004f434b;
  /* 004f4346 call 0x531380 */ esp -= 4; M32(esp) = 0x4f434bu; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f4346u); RETCHK(0x4f434bu, 0x4f4346u); LOADALL;
L_004f434b:;
  /* 004f434b mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f434e cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4350 mov dword ptr [edi + 0x7c], ebx */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 004f4353 je 0x4f437e */ if (ZF_) goto L_004f437e;
  /* 004f4355 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f4357 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f435au; SAVEALL; call_ind(c, t_); RETCHK(0x4f435au, 0x4f4357u); LOADALL; }
  /* 004f435a mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f435d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f435f call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f4362u; SAVEALL; call_ind(c, t_); RETCHK(0x4f4362u, 0x4f435fu); LOADALL; }
  /* 004f4362 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f4365 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4367 je 0x4f436f */ if (ZF_) goto L_004f436f;
  /* 004f4369 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f436b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f436d call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f436fu; SAVEALL; call_ind(c, t_); RETCHK(0x4f436fu, 0x4f436du); LOADALL; }
L_004f436f:;
  /* 004f436f mov dword ptr [edi + 0x5c], ebx */ { const u32 m_ = (u32)(edi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 004f4372 mov dword ptr [edi + 0x64], ebx */ { const u32 m_ = (u32)(edi + 0x64u); M32(m_) = (u32)(ebx); }
  /* 004f4375 mov dword ptr [edi + 0x68], ebx */ { const u32 m_ = (u32)(edi + 0x68u); M32(m_) = (u32)(ebx); }
  /* 004f4378 mov dword ptr [edi + 0x60], ebx */ { const u32 m_ = (u32)(edi + 0x60u); M32(m_) = (u32)(ebx); }
  /* 004f437b mov dword ptr [edi + 0x6c], ebx */ { const u32 m_ = (u32)(edi + 0x6cu); M32(m_) = (u32)(ebx); }
L_004f437e:;
  /* 004f437e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f437f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4380 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4381 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4390(CPU *c) {
  NATIVE_HOOK(0x4f4390u) REGS; LOADALL;
L_004f4390:;
  /* 004f4390 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f4392 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f43a0(CPU *c) {
  NATIVE_HOOK(0x4f43a0u) REGS; LOADALL;
L_004f43a0:;
  /* 004f43a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f43a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f43a3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f43a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f43a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f43a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f43a9 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f43ab mov eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f43ae fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 004f43b1 mov ecx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f43b4 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f43ba lea ebx, [edi + 0x2c] */ ebx = (u32)((u32)(edi + 0x2cu));
  /* 004f43bd mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f43c3 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f43c6 fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f43c8 fld dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f43cb mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 004f43ce fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f43d4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f43d6 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f43d8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f43da fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f43dd fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004f43e0 mov eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f43e3 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f43e9 fstp dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f43ec fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f43ee fsub dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f43f0 fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f43f2 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f43f5 fsub dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f43f8 fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f43fb fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f43fe mov eax, 0x63f87c */ { eax = (u32)(0x63f87cu); }
  /* 004f4403 fsub dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f4406 fstp dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4409 call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f440eu; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f4409u); RETCHK(0x4f440eu, 0x4f4409u); LOADALL;
  /* 004f440e fcom dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f4414 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4417 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f4419 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f441c jp 0x4f444f */ if (PF_) goto L_004f444f;
  /* 004f441e fld dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f4421 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f4424 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f4426 fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4429 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f442b fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f442e fchs */ ST(0) = -ST(0);
  /* 004f4430 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f4432 fmul dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4435 fstp dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4438 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f443a fmul dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f443d fstp dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4440 fmul dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4443 fstp dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4446 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4447 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4448 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4449 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f444b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f444c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f444f:;
  /* 004f444f mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f4452 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f4454 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f4457 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f445a fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f445d fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f445f fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4461 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f4463 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f4466 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4469 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f446b fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f4471 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f4473 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f4476 jne 0x4f4515 */ if (!ZF_) goto L_004f4515;
  /* 004f447c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f447e mov eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f4481 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004f4483 mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f4489 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f448f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f4491 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f4493 fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4495 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f4498 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f449e fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f44a1 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f44a4 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f44a6 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f44ac fstp dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f44af fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f44b1 fsub dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f44b3 fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f44b5 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f44b8 fsub dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f44bb fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f44be fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f44c1 mov eax, 0x63f87c */ { eax = (u32)(0x63f87cu); }
  /* 004f44c6 fsub dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f44c9 fstp dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f44cc call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f44d1u; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f44ccu); RETCHK(0x4f44d1u, 0x4f44ccu); LOADALL;
  /* 004f44d1 fcom dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f44d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f44da fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f44dc test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f44df jp 0x4f45b9 */ if (PF_) goto L_004f45b9;
  /* 004f44e5 fld dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f44e8 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f44eb fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f44ed fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f44f0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f44f2 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f44f5 fchs */ ST(0) = -ST(0);
  /* 004f44f7 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f44f9 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f44fb fstp dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f44fe fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f4500 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4503 fstp dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4506 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4509 fstp dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f450c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f450d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f450e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f450f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f4511 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4512 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f4515:;
  /* 004f4515 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f451b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f451d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f4520 jp 0x4f45be */ if (PF_) goto L_004f45be;
  /* 004f4526 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004f4528 mov eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f452b fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4531 mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f4537 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f4539 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f453b fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f453d fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f4540 fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4546 fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4549 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f454c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f454e fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4554 fstp dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4557 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 004f4559 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f455b fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f455d fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f4560 fadd dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f4563 fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4566 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f4569 mov eax, 0x63f87c */ { eax = (u32)(0x63f87cu); }
  /* 004f456e fadd dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f4571 fstp dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4574 call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f4579u; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f4574u); RETCHK(0x4f4579u, 0x4f4574u); LOADALL;
  /* 004f4579 fcom dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f457f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4582 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f4584 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f4587 jp 0x4f45b9 */ if (PF_) goto L_004f45b9;
  /* 004f4589 fld dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f458c mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f458f fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f4591 fstp dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4594 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f4596 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f4599 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f459b fstp dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f459e fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f45a1 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f45a4 fstp dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f45a7 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f45aa fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f45ad fstp dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f45b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f45b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f45b2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f45b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f45b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f45b6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f45b9:;
  /* 004f45b9 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f45bc fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f45be:;
  /* 004f45be add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f45c1 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f45c3 mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 004f45c5 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f45c8 mov edx, dword ptr [0x63f888] */ { const u32 m_ = (u32)(0x63f888u); edx = (u32)(M32(m_)); }
  /* 004f45ce mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f45d1 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f45d4 mov eax, dword ptr [0x63f88c] */ { const u32 m_ = (u32)(0x63f88cu); eax = (u32)(M32(m_)); }
  /* 004f45d9 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f45dc mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 004f45de mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f45e1 mov ecx, dword ptr [0x63f890] */ { const u32 m_ = (u32)(0x63f890u); ecx = (u32)(M32(m_)); }
  /* 004f45e7 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f45ea mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f45ed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f45ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f45ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f45f0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f45f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f45f3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f4600(CPU *c) {
  NATIVE_HOOK(0x4f4600u) REGS; LOADALL;
L_004f4600:;
  /* 004f4600 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004f4602 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f4604 mov dword ptr [eax], 0x64f5c4 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64f5c4u); }
  /* 004f460a mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f460d mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f4610 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004f4613 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 004f4616 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4620(CPU *c) {
  NATIVE_HOOK(0x4f4620u) REGS; LOADALL;
L_004f4620:;
  /* 004f4620 mov dword ptr [ecx], 0x64f5c4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f5c4u); }
  /* 004f4626 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4630(CPU *c) {
  NATIVE_HOOK(0x4f4630u) REGS; LOADALL;
L_004f4630:;
  /* 004f4630 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4631 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4633 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f4636 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4638 jne 0x4f46f0 */ if (!ZF_) goto L_004f46f0;
  /* 004f463e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4640 je 0x4f46f0 */ if (ZF_) goto L_004f46f0;
  /* 004f4646 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f4649 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f464c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f464e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f464f call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f4654u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f464fu); RETCHK(0x4f4654u, 0x4f464fu); LOADALL;
  /* 004f4654 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4655 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f465au; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f4655u); RETCHK(0x4f465au, 0x4f4655u); LOADALL;
  /* 004f465a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f465c mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f465f je 0x4f46f0 */ if (ZF_) goto L_004f46f0;
  /* 004f4665 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4666 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4667 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f466cu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f4667u); RETCHK(0x4f466cu, 0x4f4667u); LOADALL;
  /* 004f466c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f466d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f4670 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f4672 call 0x4fb850 */ esp -= 4; M32(esp) = 0x4f4677u; SAVEALL; F_004fb850(c); ABI_CHECK(0x4fb850u, 0x4f4672u); RETCHK(0x4f4677u, 0x4f4672u); LOADALL;
  /* 004f4677 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 004f467a call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f467fu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f467au); RETCHK(0x4f467fu, 0x4f467au); LOADALL;
  /* 004f467f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4680 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f4683 call 0x4fb850 */ esp -= 4; M32(esp) = 0x4f4688u; SAVEALL; F_004fb850(c); ABI_CHECK(0x4fb850u, 0x4f4683u); RETCHK(0x4f4688u, 0x4f4683u); LOADALL;
  /* 004f4688 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f468b lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 004f468e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f468f mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 004f4692 mov ebx, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 004f4695 push 0x545180 */ { u32 v_ = 0x545180u; esp -= 4; M32(esp) = v_; }
  /* 004f469a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f469b call 0x577da0 */ esp -= 4; M32(esp) = 0x4f46a0u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4f469bu); RETCHK(0x4f46a0u, 0x4f469bu); LOADALL;
  /* 004f46a0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f46a2 mov cl, byte ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f46a5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f46a8 test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f46ab je 0x4f46b6 */ if (ZF_) goto L_004f46b6;
  /* 004f46ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f46ae call 0x5776c0 */ esp -= 4; M32(esp) = 0x4f46b3u; SAVEALL; F_005776c0(c); ABI_CHECK(0x5776c0u, 0x4f46aeu); RETCHK(0x4f46b3u, 0x4f46aeu); LOADALL;
  /* 004f46b3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f46b6:;
  /* 004f46b6 mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 004f46b8 fld dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); FPUSH((double)MF32(m_)); }
  /* 004f46bb fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 004f46bd fstp dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f46c0 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f46c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f46c4 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f46c9u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f46c4u); RETCHK(0x4f46c9u, 0x4f46c4u); LOADALL;
  /* 004f46c9 mov ebx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 004f46cc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f46cf test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f46d1 je 0x4f46e2 */ if (ZF_) goto L_004f46e2;
  /* 004f46d3 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f46d6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f46d8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f46da add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f46dd call 0x544a10 */ esp -= 4; M32(esp) = 0x4f46e2u; SAVEALL; F_00544a10(c); ABI_CHECK(0x544a10u, 0x4f46ddu); RETCHK(0x4f46e2u, 0x4f46ddu); LOADALL;
L_004f46e2:;
  /* 004f46e2 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f46e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f46e8 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 004f46eb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f46ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f46ed ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004f46f0:;
  /* 004f46f0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f46f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f46f3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004f4700(CPU *c) {
  NATIVE_HOOK(0x4f4700u) REGS; LOADALL;
L_004f4700:;
  /* 004f4700 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f4703 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4705 je 0x4f4720 */ if (ZF_) goto L_004f4720;
  /* 004f4707 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f4709 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f470cu; SAVEALL; call_ind(c, t_); RETCHK(0x4f470cu, 0x4f4709u); LOADALL; }
  /* 004f470c mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f470f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4711 je 0x4f4719 */ if (ZF_) goto L_004f4719;
  /* 004f4713 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f4715 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f4717 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f4719u; SAVEALL; call_ind(c, t_); RETCHK(0x4f4719u, 0x4f4717u); LOADALL; }
L_004f4719:;
  /* 004f4719 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
L_004f4720:;
  /* 004f4720 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004f4727 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004f472e mov dword ptr [esi + 0x18], 1 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x1u); }
  /* 004f4735 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4740(CPU *c) {
  NATIVE_HOOK(0x4f4740u) REGS; LOADALL;
L_004f4740:;
  /* 004f4740 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4741 mov ebx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ebx = (u32)(M32(m_)); }
  /* 004f4744 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4746 mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 004f474d je 0x4f4760 */ if (ZF_) goto L_004f4760;
  /* 004f474f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4750 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f4753 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f4755 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f4757 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f475a call 0x544a10 */ esp -= 4; M32(esp) = 0x4f475fu; SAVEALL; F_00544a10(c); ABI_CHECK(0x544a10u, 0x4f475au); RETCHK(0x4f475fu, 0x4f475au); LOADALL;
  /* 004f475f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004f4760:;
  /* 004f4760 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f4765 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4767 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4768 je 0x4f478f */ if (ZF_) goto L_004f478f;
  /* 004f476a mov ecx, dword ptr [0x7a6cdc] */ { const u32 m_ = (u32)(0x7a6cdcu); ecx = (u32)(M32(m_)); }
  /* 004f4770 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f4773 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4774 mov ecx, dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f4777 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f477a push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f477f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f4781 push 0x64f5c8 */ { u32 v_ = 0x64f5c8u; esp -= 4; M32(esp) = v_; }
  /* 004f4786 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f4789 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f478a call 0x531340 */ esp -= 4; M32(esp) = 0x4f478fu; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f478au); RETCHK(0x4f478fu, 0x4f478au); LOADALL;
L_004f478f:;
  /* 004f478f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4790(CPU *c) {
  NATIVE_HOOK(0x4f4790u) REGS; LOADALL;
L_004f4790:;
  /* 004f4790 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4791 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4793 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f4796 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f4799 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f479a je 0x4f484a */ if (ZF_) goto L_004f484a;
  /* 004f47a0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f47a1 je 0x4f487b */ if (ZF_) goto L_004f487b;
  /* 004f47a7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f47a8 jne 0x4f4845 */ if (!ZF_) goto L_004f4845;
  /* 004f47ae fld dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); FPUSH((double)MF32(m_)); }
  /* 004f47b1 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f47b4 fst dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); }
  /* 004f47b7 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f47bd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f47bf test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f47c2 jp 0x4f4845 */ if (PF_) goto L_004f4845;
  /* 004f47c8 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f47cb mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004f47ce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f47cf call 0x546020 */ esp -= 4; M32(esp) = 0x4f47d4u; SAVEALL; F_00546020(c); ABI_CHECK(0x546020u, 0x4f47cfu); RETCHK(0x4f47d4u, 0x4f47cfu); LOADALL;
  /* 004f47d4 mov ebx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 004f47d7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f47d9 je 0x4f47ea */ if (ZF_) goto L_004f47ea;
  /* 004f47db mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f47de push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f47e0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f47e2 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f47e5 call 0x544a10 */ esp -= 4; M32(esp) = 0x4f47eau; SAVEALL; F_00544a10(c); ABI_CHECK(0x544a10u, 0x4f47e5u); RETCHK(0x4f47eau, 0x4f47e5u); LOADALL;
L_004f47ea:;
  /* 004f47ea mov edx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f47ed test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f47ef mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 004f47f4 je 0x4f4841 */ if (ZF_) goto L_004f4841;
  /* 004f47f6 mov eax, dword ptr [edx + 0x50] */ { const u32 m_ = (u32)(edx + 0x50u); eax = (u32)(M32(m_)); }
  /* 004f47f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f47fb jle 0x4f4841 */ if ((ZF_|LT_)) goto L_004f4841;
  /* 004f47fd lea ecx, [edx + eax*4 + 0x10] */ ecx = (u32)((u32)(edx + eax * 4u + 0x10u));
L_004f4801:;
  /* 004f4801 mov ebx, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 004f4804 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f4807 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f4808 cmp dword ptr [ebx + 0x18], edi */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f480b je 0x4f481a */ if (ZF_) goto L_004f481a;
  /* 004f480d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f480f jg 0x4f4801 */ if (!(ZF_|LT_)) goto L_004f4801;
  /* 004f4811 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4812 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 004f4815 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4816 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4817 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f481a:;
  /* 004f481a mov ecx, dword ptr [edx + eax*4 + 0x10] */ { const u32 m_ = (u32)(edx + eax * 4u + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f481e mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f4821 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f4824 mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 004f4827 mov ebx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ebx = (u32)(M32(m_)); }
  /* 004f482a add ecx, 0x28 */ { u32 a_ = ecx, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f482d add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f4830 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f4833u; SAVEALL; call_ind(c, t_); RETCHK(0x4f4833u, 0x4f4830u); LOADALL; }
  /* 004f4833 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4834 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f4836 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4839 call dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f483cu; SAVEALL; call_ind(c, t_); RETCHK(0x4f483cu, 0x4f4839u); LOADALL; }
  /* 004f483c mov edi, 1 */ { edi = (u32)(0x1u); }
L_004f4841:;
  /* 004f4841 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 004f4844 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_004f4845:;
  /* 004f4845 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4846 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4847 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f484a:;
  /* 004f484a mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f484d mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 004f4850 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4852 jl 0x4f487b */ if (LT_) goto L_004f487b;
  /* 004f4854 mov edi, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); edi = (u32)(M32(m_)); }
  /* 004f4857 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f4859 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f485b setge dl */ { edx = (edx & 0xffffff00u) | ((u32)((!LT_) ? 1u : 0u) & 0xffu); }
  /* 004f485e mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f4860 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4862 je 0x4f487b */ if (ZF_) goto L_004f487b;
  /* 004f4864 mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004f4867 call 0x546000 */ esp -= 4; M32(esp) = 0x4f486cu; SAVEALL; F_00546000(c); ABI_CHECK(0x546000u, 0x4f4867u); RETCHK(0x4f486cu, 0x4f4867u); LOADALL;
  /* 004f486c mov eax, dword ptr [0x687c34] */ { const u32 m_ = (u32)(0x687c34u); eax = (u32)(M32(m_)); }
  /* 004f4871 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 004f4874 mov dword ptr [esi + 0x18], 2 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x2u); }
L_004f487b:;
  /* 004f487b mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f487e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f4880 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4881 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4882 jmp dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_004f4890(CPU *c) {
  NATIVE_HOOK(0x4f4890u) REGS; LOADALL;
L_004f4890:;
  /* 004f4890 mov dword ptr [0x687c34], 0x40400000 */ { const u32 m_ = (u32)(0x687c34u); M32(m_) = (u32)(0x40400000u); }
  /* 004f489a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f48a0(CPU *c) {
  NATIVE_HOOK(0x4f48a0u) REGS; LOADALL;
L_004f48a0:;
  /* 004f48a0 mov dword ptr [0x687c34], 0x42340000 */ { const u32 m_ = (u32)(0x687c34u); M32(m_) = (u32)(0x42340000u); }
  /* 004f48aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f48b0(CPU *c) {
  NATIVE_HOOK(0x4f48b0u) REGS; LOADALL;
L_004f48b0:;
  /* 004f48b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f48b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f48b3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f48b6 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f48b9 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f48bb mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f48be push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f48bf add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f48c2 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 004f48c4 mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 004f48c7 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f48ca mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f48cd mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 004f48d0 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f48d3 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f48d6 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f48d9 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004f48dc fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f48df push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004f48e1 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f48e4 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f48e7 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f48ea fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f48ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f48ee fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f48f1 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f48f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f48f5 call 0x5ac1f0 */ esp -= 4; M32(esp) = 0x4f48fau; SAVEALL; F_005ac1f0(c); ABI_CHECK(0x5ac1f0u, 0x4f48f5u); RETCHK(0x4f48fau, 0x4f48f5u); LOADALL;
  /* 004f48fa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f48fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f48fe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f4900 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4901 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4910(CPU *c) {
  NATIVE_HOOK(0x4f4910u) REGS; LOADALL;
L_004f4910:;
  /* 004f4910 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4911 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f4913 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f4918u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f4913u); RETCHK(0x4f4918u, 0x4f4913u); LOADALL;
  /* 004f4918 mov dword ptr [esi], 0x64f5d4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f5d4u); }
  /* 004f491e mov dword ptr [esi + 0x40], 0x125bb500 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x125bb500u); }
  /* 004f4925 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4927 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4928 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4930(CPU *c) {
  NATIVE_HOOK(0x4f4930u) REGS; LOADALL;
L_004f4930:;
  /* 004f4930 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4931 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4933 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4934 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f4936 call 0x4f4a50 */ esp -= 4; M32(esp) = 0x4f493bu; SAVEALL; F_004f4a50(c); ABI_CHECK(0x4f4a50u, 0x4f4936u); RETCHK(0x4f493bu, 0x4f4936u); LOADALL;
  /* 004f493b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f493f je 0x4f494a */ if (ZF_) goto L_004f494a;
  /* 004f4941 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4942 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f4947u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f4942u); RETCHK(0x4f4947u, 0x4f4942u); LOADALL;
  /* 004f4947 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f494a:;
  /* 004f494a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f494c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f494d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f494e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f4960(CPU *c) {
  NATIVE_HOOK(0x4f4960u) REGS; LOADALL;
L_004f4960:;
  /* 004f4960 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4961 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f4963 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f4968u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f4963u); RETCHK(0x4f4968u, 0x4f4963u); LOADALL;
  /* 004f4968 mov dword ptr [esi], 0x64f758 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f758u); }
  /* 004f496e mov dword ptr [esi + 0x40], 0x126af740 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x126af740u); }
  /* 004f4975 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4977 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4978 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4980(CPU *c) {
  NATIVE_HOOK(0x4f4980u) REGS; LOADALL;
L_004f4980:;
  /* 004f4980 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4981 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f4983 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f4988u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f4983u); RETCHK(0x4f4988u, 0x4f4983u); LOADALL;
  /* 004f4988 mov dword ptr [esi], 0x64f724 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f724u); }
  /* 004f498e mov dword ptr [esi + 0x40], 0x12897bc0 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x12897bc0u); }
  /* 004f4995 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4997 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4998 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f49a0(CPU *c) {
  NATIVE_HOOK(0x4f49a0u) REGS; LOADALL;
L_004f49a0:;
  /* 004f49a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f49a1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f49a3 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f49a8u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f49a3u); RETCHK(0x4f49a8u, 0x4f49a3u); LOADALL;
  /* 004f49a8 mov dword ptr [esi], 0x64f6f4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f6f4u); }
  /* 004f49ae mov dword ptr [esi + 0x40], 0x12a80040 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x12a80040u); }
  /* 004f49b5 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f49b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f49b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f49c0(CPU *c) {
  NATIVE_HOOK(0x4f49c0u) REGS; LOADALL;
L_004f49c0:;
  /* 004f49c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f49c1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f49c3 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f49c8u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f49c3u); RETCHK(0x4f49c8u, 0x4f49c3u); LOADALL;
  /* 004f49c8 mov dword ptr [esi], 0x64f6c4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f6c4u); }
  /* 004f49ce mov dword ptr [esi + 0x40], 0x12d5c700 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x12d5c700u); }
  /* 004f49d5 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f49d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f49d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f49e0(CPU *c) {
  NATIVE_HOOK(0x4f49e0u) REGS; LOADALL;
L_004f49e0:;
  /* 004f49e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f49e1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f49e3 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f49e8u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f49e3u); RETCHK(0x4f49e8u, 0x4f49e3u); LOADALL;
  /* 004f49e8 mov dword ptr [esi], 0x64f694 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f694u); }
  /* 004f49ee mov dword ptr [esi + 0x40], 0x12e50940 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x12e50940u); }
  /* 004f49f5 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f49f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f49f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
