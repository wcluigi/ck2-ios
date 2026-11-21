#include "funcs.h"

void F_004fbaa0(CPU *c) {
  NATIVE_HOOK(0x4fbaa0u) REGS; LOADALL;
L_004fbaa0:;
  /* 004fbaa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fbaa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fbaa3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fbaa6 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004fbaa9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fbaac fcomp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004fbaaf fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004fbab1 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fbab4 mov eax, 0xffffffff */ { eax = (u32)(0xffffffffu); }
  /* 004fbab9 jnp 0x4fbac0 */ if (!PF_) goto L_004fbac0;
  /* 004fbabb mov eax, 1 */ { eax = (u32)(0x1u); }
L_004fbac0:;
  /* 004fbac0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fbac1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fbad0(CPU *c) {
  NATIVE_HOOK(0x4fbad0u) REGS; LOADALL;
L_004fbad0:;
  /* 004fbad0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fbad1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fbad3 sub esp, 0x220 */ { u32 a_ = esp, b_ = 0x220u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbad9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fbadc mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fbadf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fbae0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbae1 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004fbae4 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fbae7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004fbae9 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fbaec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbaee mov dword ptr [ebp - 0x14], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x3f800000u); }
  /* 004fbaf5 je 0x4fbbdf */ if (ZF_) goto L_004fbbdf;
  /* 004fbafb mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fbafe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fbaff mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 004fbb01 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbb03 je 0x4fbbb1 */ if (ZF_) goto L_004fbbb1;
  /* 004fbb09 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004fbb10:;
  /* 004fbb10 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fbb13 cmp dword ptr [eax + 0x2c], 1 */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbb17 jne 0x4fbba6 */ if (!ZF_) goto L_004fbba6;
  /* 004fbb1d mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 004fbb20 add eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fbb23 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fbb25 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004fbb27 mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 004fbb2a mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fbb2d mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 004fbb30 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fbb33 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 004fbb36 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004fbb38 fsub dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004fbb3b lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004fbb3e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fbb3f fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004fbb42 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004fbb45 fsub dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004fbb48 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004fbb4b fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004fbb4e fsub dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004fbb51 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004fbb54 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4fbb59u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4fbb54u); RETCHK(0x4fbb59u, 0x4fbb54u); LOADALL;
  /* 004fbb59 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004fbb5c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fbb5f lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004fbb62 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbb63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fbb64 call 0x5afcc0 */ esp -= 4; M32(esp) = 0x4fbb69u; SAVEALL; F_005afcc0(c); ABI_CHECK(0x5afcc0u, 0x4fbb64u); RETCHK(0x4fbb69u, 0x4fbb64u); LOADALL;
  /* 004fbb69 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004fbb6c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbb6f cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbb72 jne 0x4fbb7c */ if (!ZF_) goto L_004fbb7c;
  /* 004fbb74 fcomp dword ptr [0x656f84] */ { const u32 m_ = (u32)(0x656f84u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004fbb7a jmp 0x4fbb82 */ goto L_004fbb82;
L_004fbb7c:;
  /* 004fbb7c fcomp dword ptr [0x656f80] */ { const u32 m_ = (u32)(0x656f80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
L_004fbb82:;
  /* 004fbb82 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004fbb84 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fbb87 je 0x4fbba3 */ if (ZF_) goto L_004fbba3;
  /* 004fbb89 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fbb8c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004fbb8f fstp dword ptr [ebp + ebx*8 - 0x21c] */ { const u32 m_ = (u32)(ebp + ebx * 8u + 0xfffffde4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004fbb96 mov dword ptr [ebp + ebx*8 - 0x220], edx */ { const u32 m_ = (u32)(ebp + ebx * 8u + 0xfffffde0u); M32(m_) = (u32)(edx); }
  /* 004fbb9d inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fbb9e cmp ebx, 0x40 */ { u32 a_ = ebx, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbba1 jge 0x4fbbb1 */ if (!LT_) goto L_004fbbb1;
L_004fbba3:;
  /* 004fbba3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
L_004fbba6:;
  /* 004fbba6 mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 004fbba8 cmp edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbbab jne 0x4fbb10 */ if (!ZF_) goto L_004fbb10;
L_004fbbb1:;
  /* 004fbbb1 push 0x4fbaa0 */ { u32 v_ = 0x4fbaa0u; esp -= 4; M32(esp) = v_; }
  /* 004fbbb6 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004fbbb8 lea eax, [ebp - 0x220] */ eax = (u32)((u32)(ebp + 0xfffffde0u));
  /* 004fbbbe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fbbbf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbbc0 call 0x5feab8 */ esp -= 4; M32(esp) = 0x4fbbc5u; SAVEALL; F_005feab8(c); ABI_CHECK(0x5feab8u, 0x4fbbc0u); RETCHK(0x4fbbc5u, 0x4fbbc0u); LOADALL;
  /* 004fbbc5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbbc8 lea esi, [ebx - 1] */ esi = (u32)((u32)(ebx + 0xffffffffu));
  /* 004fbbcb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbbcd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fbbce jl 0x4fbbdf */ if (LT_) goto L_004fbbdf;
L_004fbbd0:;
  /* 004fbbd0 mov eax, dword ptr [ebp + esi*8 - 0x220] */ { const u32 m_ = (u32)(ebp + esi * 8u + 0xfffffde0u); eax = (u32)(M32(m_)); }
  /* 004fbbd7 call 0x54ab60 */ esp -= 4; M32(esp) = 0x4fbbdcu; SAVEALL; F_0054ab60(c); ABI_CHECK(0x54ab60u, 0x4fbbd7u); RETCHK(0x4fbbdcu, 0x4fbbd7u); LOADALL;
  /* 004fbbdc dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fbbdd jns 0x4fbbd0 */ if (!SF_) goto L_004fbbd0;
L_004fbbdf:;
  /* 004fbbdf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fbbe0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fbbe1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fbbe3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fbbe4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fbbf0(CPU *c) {
  NATIVE_HOOK(0x4fbbf0u) REGS; LOADALL;
L_004fbbf0:;
  /* 004fbbf0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbbf1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fbbf2 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fbbf4 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004fbbf7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fbbf9 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbbfb je 0x4fbc0e */ if (ZF_) goto L_004fbc0e;
  /* 004fbbfd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004fbc00:;
  /* 004fbc00 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fbc03 cmp dword ptr [esi + 0x3c], edx */ { const u32 m_ = (u32)(esi + 0x3cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbc06 je 0x4fbc46 */ if (ZF_) goto L_004fbc46;
  /* 004fbc08 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004fbc0a cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbc0c jne 0x4fbc00 */ if (!ZF_) goto L_004fbc00;
L_004fbc0e:;
  /* 004fbc0e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fbc0f call 0x4fc670 */ esp -= 4; M32(esp) = 0x4fbc14u; SAVEALL; F_004fc670(c); ABI_CHECK(0x4fc670u, 0x4fbc0fu); RETCHK(0x4fbc14u, 0x4fbc0fu); LOADALL;
  /* 004fbc14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbc15 call 0x4fe810 */ esp -= 4; M32(esp) = 0x4fbc1au; SAVEALL; F_004fe810(c); ABI_CHECK(0x4fe810u, 0x4fbc15u); RETCHK(0x4fbc1au, 0x4fbc15u); LOADALL;
  /* 004fbc1a mov edi, eax */ { edi = (u32)(eax); }
  /* 004fbc1c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbc1e je 0x4fbc84 */ if (ZF_) goto L_004fbc84;
  /* 004fbc20 push 0x44 */ { u32 v_ = 0x44u; esp -= 4; M32(esp) = v_; }
  /* 004fbc22 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4fbc27u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4fbc22u); RETCHK(0x4fbc27u, 0x4fbc22u); LOADALL;
  /* 004fbc27 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbc2a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbc2c je 0x4fbc84 */ if (ZF_) goto L_004fbc84;
  /* 004fbc2e call 0x54a640 */ esp -= 4; M32(esp) = 0x4fbc33u; SAVEALL; F_0054a640(c); ABI_CHECK(0x54a640u, 0x4fbc2eu); RETCHK(0x4fbc33u, 0x4fbc2eu); LOADALL;
  /* 004fbc33 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fbc35 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbc37 je 0x4fbc84 */ if (ZF_) goto L_004fbc84;
  /* 004fbc39 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbc3a mov eax, edi */ { eax = (u32)(edi); }
  /* 004fbc3c call 0x54a680 */ esp -= 4; M32(esp) = 0x4fbc41u; SAVEALL; F_0054a680(c); ABI_CHECK(0x54a680u, 0x4fbc3cu); RETCHK(0x4fbc41u, 0x4fbc3cu); LOADALL;
  /* 004fbc41 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fbc42 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fbc44 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fbc45 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fbc46:;
  /* 004fbc46 mov dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 004fbc4d mov dword ptr [esi + 0x24], 0 */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 004fbc54 mov dword ptr [esi + 0x2c], 1 */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(0x1u); }
  /* 004fbc5b cmp eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbc5e je 0x4fbc7f */ if (ZF_) goto L_004fbc7f;
  /* 004fbc60 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fbc63 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004fbc65 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004fbc67 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fbc69 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fbc6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbc6d mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 004fbc70 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fbc75u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fbc70u); RETCHK(0x4fbc75u, 0x4fbc70u); LOADALL;
  /* 004fbc75 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 004fbc78 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbc7b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fbc7c mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
L_004fbc7f:;
  /* 004fbc7f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fbc80 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fbc82 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fbc83 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fbc84:;
  /* 004fbc84 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fbc85 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fbc86 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fbc88 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fbc90(CPU *c) {
  NATIVE_HOOK(0x4fbc90u) REGS; LOADALL;
L_004fbc90:;
  /* 004fbc90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fbc91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fbc93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fbc94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbc95 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fbc96 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fbc99 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fbc9b call 0x4fbbf0 */ esp -= 4; M32(esp) = 0x4fbca0u; SAVEALL; F_004fbbf0(c); ABI_CHECK(0x4fbbf0u, 0x4fbc9bu); RETCHK(0x4fbca0u, 0x4fbc9bu); LOADALL;
  /* 004fbca0 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fbca2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbca4 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 004fbca7 je 0x4fbd1d */ if (ZF_) goto L_004fbd1d;
  /* 004fbca9 mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 004fbcac mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fbcaf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fbcb0 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004fbcb3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbcb4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fbcb5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fbcb6 call 0x508af0 */ esp -= 4; M32(esp) = 0x4fbcbbu; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x4fbcb6u); RETCHK(0x4fbcbbu, 0x4fbcb6u); LOADALL;
  /* 004fbcbb mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fbcbe mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004fbcc3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fbcc5 call 0x518d90 */ esp -= 4; M32(esp) = 0x4fbccau; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x4fbcc5u); RETCHK(0x4fbccau, 0x4fbcc5u); LOADALL;
  /* 004fbcca mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004fbccd mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fbcd0 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fbcd2 mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 004fbcd4 call 0x54ad80 */ esp -= 4; M32(esp) = 0x4fbcd9u; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4fbcd4u); RETCHK(0x4fbcd9u, 0x4fbcd4u); LOADALL;
  /* 004fbcd9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fbcdc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbcde mov dword ptr [esi + 0x34], 0 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 004fbce5 mov dword ptr [esi + 0x38], 1 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004fbcec pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fbced je 0x4fbd1d */ if (ZF_) goto L_004fbd1d;
  /* 004fbcef mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004fbcf2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004fbcf4 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fbcf7 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004fbcf9 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fbcfc mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 004fbcff mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fbd02 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fbd05 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004fbd08 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fbd0b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fbd0c call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4fbd11u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4fbd0cu); RETCHK(0x4fbd11u, 0x4fbd0cu); LOADALL;
  /* 004fbd11 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004fbd14 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fbd15 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4fbd1au; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4fbd15u); RETCHK(0x4fbd1au, 0x4fbd15u); LOADALL;
  /* 004fbd1a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fbd1d:;
  /* 004fbd1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fbd1e mov eax, esi */ { eax = (u32)(esi); }
  /* 004fbd20 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fbd21 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fbd23 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fbd24 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fbd30(CPU *c) {
  NATIVE_HOOK(0x4fbd30u) REGS; LOADALL;
L_004fbd30:;
  /* 004fbd30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fbd31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fbd33 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbd36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbd37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fbd38 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fbd3b mov eax, edi */ { eax = (u32)(edi); }
  /* 004fbd3d call 0x4fbbf0 */ esp -= 4; M32(esp) = 0x4fbd42u; SAVEALL; F_004fbbf0(c); ABI_CHECK(0x4fbbf0u, 0x4fbd3du); RETCHK(0x4fbd42u, 0x4fbd3du); LOADALL;
  /* 004fbd42 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fbd44 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbd46 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 004fbd49 je 0x4fbdf5 */ if (ZF_) goto L_004fbdf5;
  /* 004fbd4f mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 004fbd52 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fbd55 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fbd56 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004fbd59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbd5a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fbd5b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fbd5c call 0x508af0 */ esp -= 4; M32(esp) = 0x4fbd61u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x4fbd5cu); RETCHK(0x4fbd61u, 0x4fbd5cu); LOADALL;
  /* 004fbd61 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fbd64 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004fbd69 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fbd6b call 0x518d90 */ esp -= 4; M32(esp) = 0x4fbd70u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x4fbd6bu); RETCHK(0x4fbd70u, 0x4fbd6bu); LOADALL;
  /* 004fbd70 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004fbd73 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fbd76 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fbd78 mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 004fbd7a call 0x54ad80 */ esp -= 4; M32(esp) = 0x4fbd7fu; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4fbd7au); RETCHK(0x4fbd7fu, 0x4fbd7au); LOADALL;
  /* 004fbd7f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fbd82 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbd84 mov dword ptr [esi + 0x34], 0 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 004fbd8b mov dword ptr [esi + 0x38], 1 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004fbd92 je 0x4fbdea */ if (ZF_) goto L_004fbdea;
  /* 004fbd94 mov ebx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ebx = (u32)(M32(m_)); }
  /* 004fbd97 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fbd9a mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004fbd9f mov esi, eax */ { esi = (u32)(eax); }
  /* 004fbda1 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004fbda3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004fbda5 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004fbda8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbdaa je 0x4fbddb */ if (ZF_) goto L_004fbddb;
  /* 004fbdac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbdad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fbdae lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004fbdb1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbdb2 call 0x5aac00 */ esp -= 4; M32(esp) = 0x4fbdb7u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4fbdb2u); RETCHK(0x4fbdb7u, 0x4fbdb2u); LOADALL;
  /* 004fbdb7 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004fbdba fadd dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004fbdbd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fbdbe fstp dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004fbdc1 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004fbdc4 fadd dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004fbdc7 fstp dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004fbdca fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004fbdcd fadd dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004fbdd0 fstp dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004fbdd3 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4fbdd8u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4fbdd3u); RETCHK(0x4fbdd8u, 0x4fbdd3u); LOADALL;
  /* 004fbdd8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fbddb:;
  /* 004fbddb mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004fbdde mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004fbde1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fbde2 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4fbde7u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4fbde2u); RETCHK(0x4fbde7u, 0x4fbde2u); LOADALL;
  /* 004fbde7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fbdea:;
  /* 004fbdea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fbdeb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fbdec mov eax, esi */ { eax = (u32)(esi); }
  /* 004fbdee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fbdef mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fbdf1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fbdf2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004fbdf5:;
  /* 004fbdf5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fbdf6 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fbdf8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fbdf9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fbdfb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fbdfc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004fbe00(CPU *c) {
  NATIVE_HOOK(0x4fbe00u) REGS; LOADALL;
L_004fbe00:;
  /* 004fbe00 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 004fbe02 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4fbe07u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4fbe02u); RETCHK(0x4fbe07u, 0x4fbe02u); LOADALL;
  /* 004fbe07 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbe0a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbe0c je 0x4fbe10 */ if (ZF_) goto L_004fbe10;
  /* 004fbe0e mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
L_004fbe10:;
  /* 004fbe10 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 004fbe13 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbe15 je 0x4fbe19 */ if (ZF_) goto L_004fbe19;
  /* 004fbe17 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_004fbe19:;
  /* 004fbe19 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fbe20(CPU *c) {
  NATIVE_HOOK(0x4fbe20u) REGS; LOADALL;
L_004fbe20:;
  /* 004fbe20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fbe21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fbe23 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 004fbe25 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4fbe2au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4fbe25u); RETCHK(0x4fbe2au, 0x4fbe25u); LOADALL;
  /* 004fbe2a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbe2d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbe2f je 0x4fbe47 */ if (ZF_) goto L_004fbe47;
  /* 004fbe31 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fbe34 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fbe37 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fbe39 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004fbe3c mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 004fbe3e mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004fbe41 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fbe44 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
L_004fbe47:;
  /* 004fbe47 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fbe48 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fbe50(CPU *c) {
  NATIVE_HOOK(0x4fbe50u) REGS; LOADALL;
L_004fbe50:;
  /* 004fbe50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fbe51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fbe53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fbe55 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 004fbe5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fbe60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbe61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fbe68 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbe6b mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fbe6e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbe6f mov esi, 0x1fffffff */ { esi = (u32)(0x1fffffffu); }
  /* 004fbe74 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fbe76 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbe78 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fbe79 jae 0x4fbec4 */ if (!CF_) goto L_004fbec4;
  /* 004fbe7b push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 004fbe7d push 0x648f18 */ { u32 v_ = 0x648f18u; esp -= 4; M32(esp) = v_; }
  /* 004fbe82 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004fbe85 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 004fbe8c mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 004fbe93 mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 004fbe97 call 0x404420 */ esp -= 4; M32(esp) = 0x4fbe9cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4fbe97u); RETCHK(0x4fbe9cu, 0x4fbe97u); LOADALL;
  /* 004fbe9c lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004fbe9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbea0 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004fbea3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fbeaa call 0x4040e0 */ esp -= 4; M32(esp) = 0x4fbeafu; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x4fbeaau); RETCHK(0x4fbeafu, 0x4fbeaau); LOADALL;
  /* 004fbeaf push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 004fbeb4 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004fbeb7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fbeb8 mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 004fbebf call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_004fbec4:;
  /* 004fbec4 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fbec6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fbec9 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fbecc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fbed3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fbed5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fbed6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fbee0(CPU *c) {
  NATIVE_HOOK(0x4fbee0u) REGS; LOADALL;
L_004fbee0:;
  /* 004fbee0 lea eax, [edx + 0x28] */ eax = (u32)((u32)(edx + 0x28u));
  /* 004fbee3 mov dword ptr [edx], 0x64fcd4 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x64fcd4u); }
  /* 004fbee9 call 0x544940 */ esp -= 4; M32(esp) = 0x4fbeeeu; SAVEALL; F_00544940(c); ABI_CHECK(0x544940u, 0x4fbee9u); RETCHK(0x4fbeeeu, 0x4fbee9u); LOADALL;
  /* 004fbeee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fbef0 mov ecx, 0x3f800000 */ { ecx = (u32)(0x3f800000u); }
  /* 004fbef5 mov dword ptr [edx + 0x10], eax */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fbef8 mov dword ptr [edx + 0xc], eax */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(eax); }
  /* 004fbefb mov dword ptr [edx + 0x14], eax */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(eax); }
  /* 004fbefe mov dword ptr [edx + 0x18], eax */ { const u32 m_ = (u32)(edx + 0x18u); M32(m_) = (u32)(eax); }
  /* 004fbf01 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004fbf04 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fbf07 mov dword ptr [edx + 0x1c], ecx */ { const u32 m_ = (u32)(edx + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 004fbf0a mov dword ptr [edx + 0x20], ecx */ { const u32 m_ = (u32)(edx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 004fbf0d mov dword ptr [edx + 0x24], ecx */ { const u32 m_ = (u32)(edx + 0x24u); M32(m_) = (u32)(ecx); }
  /* 004fbf10 mov dword ptr [edx + 0x5c], 1 */ { const u32 m_ = (u32)(edx + 0x5cu); M32(m_) = (u32)(0x1u); }
  /* 004fbf17 mov eax, edx */ { eax = (u32)(edx); }
  /* 004fbf19 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fbf20(CPU *c) {
  NATIVE_HOOK(0x4fbf20u) REGS; LOADALL;
L_004fbf20:;
  /* 004fbf20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fbf21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fbf23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbf24 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fbf26 call 0x4fbf50 */ esp -= 4; M32(esp) = 0x4fbf2bu; SAVEALL; F_004fbf50(c); ABI_CHECK(0x4fbf50u, 0x4fbf26u); RETCHK(0x4fbf2bu, 0x4fbf26u); LOADALL;
  /* 004fbf2b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fbf2f je 0x4fbf3a */ if (ZF_) goto L_004fbf3a;
  /* 004fbf31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbf32 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fbf37u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fbf32u); RETCHK(0x4fbf37u, 0x4fbf32u); LOADALL;
  /* 004fbf37 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fbf3a:;
  /* 004fbf3a mov eax, esi */ { eax = (u32)(esi); }
  /* 004fbf3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fbf3d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fbf3e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fbf50(CPU *c) {
  NATIVE_HOOK(0x4fbf50u) REGS; LOADALL;
L_004fbf50:;
  /* 004fbf50 mov dword ptr [ecx], 0x64fcd4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64fcd4u); }
  /* 004fbf56 add ecx, 0x28 */ { u32 a_ = ecx, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fbf59 jmp 0x5449b0 */ SAVEALL; F_005449b0(c); return;
}

void F_004fbf60(CPU *c) {
  NATIVE_HOOK(0x4fbf60u) REGS; LOADALL;
L_004fbf60:;
  /* 004fbf60 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fbf63 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbf65 jne 0x4fbf6e */ if (!ZF_) goto L_004fbf6e;
  /* 004fbf67 mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004fbf6a mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fbf6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fbf6e:;
  /* 004fbf6e cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fbf71 jne 0x4fbf7a */ if (!ZF_) goto L_004fbf7a;
  /* 004fbf73 mov ecx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004fbf76 mov eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004fbf79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fbf7a:;
  /* 004fbf7a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fbf7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fbf80(CPU *c) {
  NATIVE_HOOK(0x4fbf80u) REGS; LOADALL;
L_004fbf80:;
  /* 004fbf80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fbf81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fbf83 call 0x4fbf60 */ esp -= 4; M32(esp) = 0x4fbf88u; SAVEALL; F_004fbf60(c); ABI_CHECK(0x4fbf60u, 0x4fbf83u); RETCHK(0x4fbf88u, 0x4fbf83u); LOADALL;
  /* 004fbf88 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbf8a je 0x4fbfa6 */ if (ZF_) goto L_004fbfa6;
  /* 004fbf8c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbf8d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fbf90 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fbf91 lea edi, [eax + 0x10] */ edi = (u32)((u32)(eax + 0x10u));
  /* 004fbf94 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004fbf99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbf9a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004fbf9c call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4fbfa1u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4fbf9cu); RETCHK(0x4fbfa1u, 0x4fbf9cu); LOADALL;
  /* 004fbfa1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbfa4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fbfa5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004fbfa6:;
  /* 004fbfa6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fbfa7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fbfb0(CPU *c) {
  NATIVE_HOOK(0x4fbfb0u) REGS; LOADALL;
L_004fbfb0:;
  /* 004fbfb0 call 0x4fbf60 */ esp -= 4; M32(esp) = 0x4fbfb5u; SAVEALL; F_004fbf60(c); ABI_CHECK(0x4fbf60u, 0x4fbfb0u); RETCHK(0x4fbfb5u, 0x4fbfb0u); LOADALL;
  /* 004fbfb5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbfb7 je 0x4fbfbd */ if (ZF_) goto L_004fbfbd;
  /* 004fbfb9 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fbfbc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fbfbd:;
  /* 004fbfbd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fbfbf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fbfc0(CPU *c) {
  NATIVE_HOOK(0x4fbfc0u) REGS; LOADALL;
L_004fbfc0:;
  /* 004fbfc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fbfc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fbfc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fbfc4 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fbfc7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbfc9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fbfca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fbfcb mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fbfce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fbfcf mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004fbfd1 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004fbfd4 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 004fbfd7 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
  /* 004fbfda mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 004fbfdd jne 0x4fc02e */ if (!ZF_) goto L_004fc02e;
  /* 004fbfdf mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fbfe2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbfe4 je 0x4fc061 */ if (ZF_) goto L_004fc061;
  /* 004fbfe6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fbfe7 call 0x578180 */ esp -= 4; M32(esp) = 0x4fbfecu; SAVEALL; F_00578180(c); ABI_CHECK(0x578180u, 0x4fbfe7u); RETCHK(0x4fbfecu, 0x4fbfe7u); LOADALL;
  /* 004fbfec mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fbfee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fbff1 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fbff3 je 0x4fc061 */ if (ZF_) goto L_004fc061;
  /* 004fbff5 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 004fbff8 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fbffb mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fbffd call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fc000u; SAVEALL; call_ind(c, t_); RETCHK(0x4fc000u, 0x4fbffdu); LOADALL; }
  /* 004fc000 call 0x544c90 */ esp -= 4; M32(esp) = 0x4fc005u; SAVEALL; F_00544c90(c); ABI_CHECK(0x544c90u, 0x4fc000u); RETCHK(0x4fc005u, 0x4fc000u); LOADALL;
  /* 004fc005 call 0x556030 */ esp -= 4; M32(esp) = 0x4fc00au; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4fc005u); RETCHK(0x4fc00au, 0x4fc005u); LOADALL;
  /* 004fc00a mov edx, esi */ { edx = (u32)(esi); }
  /* 004fc00c mov esi, eax */ { esi = (u32)(eax); }
  /* 004fc00e call 0x555a00 */ esp -= 4; M32(esp) = 0x4fc013u; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x4fc00eu); RETCHK(0x4fc013u, 0x4fc00eu); LOADALL;
  /* 004fc013 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc015 je 0x4fc023 */ if (ZF_) goto L_004fc023;
  /* 004fc017 mov ecx, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004fc01d mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004fc020 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
L_004fc023:;
  /* 004fc023 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fc024 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc025 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fc027 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fc028 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fc02a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc02b ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004fc02e:;
  /* 004fc02e cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc031 jne 0x4fc061 */ if (!ZF_) goto L_004fc061;
  /* 004fc033 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004fc036 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc038 je 0x4fc061 */ if (ZF_) goto L_004fc061;
  /* 004fc03a mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
  /* 004fc03d mov dword ptr [eax + 0x38], 0 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x0u); }
  /* 004fc044 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 004fc047 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
  /* 004fc04e mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 004fc051 call 0x54ad80 */ esp -= 4; M32(esp) = 0x4fc056u; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4fc051u); RETCHK(0x4fc056u, 0x4fc051u); LOADALL;
  /* 004fc056 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fc057 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc058 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fc05a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fc05b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fc05d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc05e ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004fc061:;
  /* 004fc061 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fc062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc063 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fc065 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fc066 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fc068 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc069 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004fc070(CPU *c) {
  NATIVE_HOOK(0x4fc070u) REGS; LOADALL;
L_004fc070:;
  /* 004fc070 cdq */ edx = (u32)((s32)eax >> 31);
  /* 004fc071 mov ecx, 0x5f5e100 */ { ecx = (u32)(0x5f5e100u); }
  /* 004fc076 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x4fc076u); eax = q_; edx = r_; }
  /* 004fc078 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc07b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004fc07d jne 0x4fc0af */ if (!ZF_) goto L_004fc0af;
  /* 004fc07f mov eax, 0x6b5fca6b */ { eax = (u32)(0x6b5fca6bu); }
  /* 004fc084 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fc086 sar edx, 0x16 */ { u32 n_ = (22u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004fc089 mov eax, edx */ { eax = (u32)(edx); }
  /* 004fc08b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fc08e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fc090 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fc091 jne 0x4fc0af */ if (!ZF_) goto L_004fc0af;
  /* 004fc093 mov eax, 0x14f8b589 */ { eax = (u32)(0x14f8b589u); }
  /* 004fc098 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fc09a sar edx, 0xd */ { u32 n_ = (13u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004fc09d mov eax, edx */ { eax = (u32)(edx); }
  /* 004fc09f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fc0a2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fc0a4 cdq */ edx = (u32)((s32)eax >> 31);
  /* 004fc0a5 mov ecx, 0x64 */ { ecx = (u32)(0x64u); }
  /* 004fc0aa idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x4fc0aau); eax = q_; edx = r_; }
  /* 004fc0ac mov eax, edx */ { eax = (u32)(edx); }
  /* 004fc0ae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fc0af:;
  /* 004fc0af xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fc0b1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc0c0(CPU *c) {
  NATIVE_HOOK(0x4fc0c0u) REGS; LOADALL;
L_004fc0c0:;
  /* 004fc0c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fc0c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fc0c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc0c4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fc0c6 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fc0c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc0cb jne 0x4fc0f6 */ if (!ZF_) goto L_004fc0f6;
  /* 004fc0cd mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fc0d0 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 004fc0d3 lea ecx, [esi + 0x28] */ ecx = (u32)((u32)(esi + 0x28u));
  /* 004fc0d6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fc0d7 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fc0dau; SAVEALL; call_ind(c, t_); RETCHK(0x4fc0dau, 0x4fc0d7u); LOADALL; }
  /* 004fc0da mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004fc0dd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc0df je 0x4fc0f6 */ if (ZF_) goto L_004fc0f6;
  /* 004fc0e1 mov ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004fc0e4 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fc0e7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fc0e9 lea eax, [esi + 0x1c] */ eax = (u32)((u32)(esi + 0x1cu));
  /* 004fc0ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc0ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fc0ee call 0x5ac290 */ esp -= 4; M32(esp) = 0x4fc0f3u; SAVEALL; F_005ac290(c); ABI_CHECK(0x5ac290u, 0x4fc0eeu); RETCHK(0x4fc0f3u, 0x4fc0eeu); LOADALL;
  /* 004fc0f3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc0f6:;
  /* 004fc0f6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc0f7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc0f8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fc100(CPU *c) {
  NATIVE_HOOK(0x4fc100u) REGS; LOADALL;
L_004fc100:;
  /* 004fc100 mov eax, dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 004fc103 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc105 je 0x4fc117 */ if (ZF_) goto L_004fc117;
  /* 004fc107 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fc10a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc10c jne 0x4fc117 */ if (!ZF_) goto L_004fc117;
  /* 004fc10e mov eax, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); eax = (u32)(M32(m_)); }
  /* 004fc111 add ecx, 0x28 */ { u32 a_ = ecx, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fc114 jmp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_004fc117:;
  /* 004fc117 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc120(CPU *c) {
  NATIVE_HOOK(0x4fc120u) REGS; LOADALL;
L_004fc120:;
  /* 004fc120 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc121 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fc123 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004fc125 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fc128u; SAVEALL; call_ind(c, t_); RETCHK(0x4fc128u, 0x4fc125u); LOADALL; }
  /* 004fc128 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fc12b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc12d jne 0x4fc149 */ if (!ZF_) goto L_004fc149;
  /* 004fc12f mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004fc132 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc134 je 0x4fc13f */ if (ZF_) goto L_004fc13f;
  /* 004fc136 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc137 call 0x5784d0 */ esp -= 4; M32(esp) = 0x4fc13cu; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x4fc137u); RETCHK(0x4fc13cu, 0x4fc137u); LOADALL;
  /* 004fc13c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc13f:;
  /* 004fc13f mov edx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); edx = (u32)(M32(m_)); }
  /* 004fc142 lea ecx, [esi + 0x28] */ ecx = (u32)((u32)(esi + 0x28u));
  /* 004fc145 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc146 jmp dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_004fc149:;
  /* 004fc149 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc14c jne 0x4fc16b */ if (!ZF_) goto L_004fc16b;
  /* 004fc14e mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 004fc151 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc153 je 0x4fc16b */ if (ZF_) goto L_004fc16b;
  /* 004fc155 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4fc15au; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4fc155u); RETCHK(0x4fc15au, 0x4fc155u); LOADALL;
  /* 004fc15a mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 004fc15d mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004fc164 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
L_004fc16b:;
  /* 004fc16b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc16c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc170(CPU *c) {
  NATIVE_HOOK(0x4fc170u) REGS; LOADALL;
L_004fc170:;
  /* 004fc170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fc171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fc173 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc174 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fc175 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fc178 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc17a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fc17c jne 0x4fc186 */ if (!ZF_) goto L_004fc186;
  /* 004fc17e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fc17f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fc181 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc182 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc183 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fc186:;
  /* 004fc186 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fc189 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc18b jne 0x4fc19d */ if (!ZF_) goto L_004fc19d;
  /* 004fc18d mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004fc190 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc191 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fc192 call 0x57ad90 */ esp -= 4; M32(esp) = 0x4fc197u; SAVEALL; F_0057ad90(c); ABI_CHECK(0x57ad90u, 0x4fc192u); RETCHK(0x4fc197u, 0x4fc192u); LOADALL;
  /* 004fc197 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc19a mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
L_004fc19d:;
  /* 004fc19d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fc19e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fc1a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc1a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc1a2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fc1b0(CPU *c) {
  NATIVE_HOOK(0x4fc1b0u) REGS; LOADALL;
L_004fc1b0:;
  /* 004fc1b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fc1b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc1b2 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fc1b4 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fc1b7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004fc1b9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc1bb jne 0x4fc1e5 */ if (!ZF_) goto L_004fc1e5;
  /* 004fc1bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fc1be mov edi, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edi = (u32)(M32(m_)); }
  /* 004fc1c1 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc1c3 je 0x4fc1dc */ if (ZF_) goto L_004fc1dc;
  /* 004fc1c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fc1c6 call 0x57b140 */ esp -= 4; M32(esp) = 0x4fc1cbu; SAVEALL; F_0057b140(c); ABI_CHECK(0x57b140u, 0x4fc1c6u); RETCHK(0x4fc1cbu, 0x4fc1c6u); LOADALL;
  /* 004fc1cb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc1ce cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc1d0 je 0x4fc1dc */ if (ZF_) goto L_004fc1dc;
  /* 004fc1d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fc1d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc1d4 call 0x57aef0 */ esp -= 4; M32(esp) = 0x4fc1d9u; SAVEALL; F_0057aef0(c); ABI_CHECK(0x57aef0u, 0x4fc1d4u); RETCHK(0x4fc1d9u, 0x4fc1d4u); LOADALL;
  /* 004fc1d9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc1dc:;
  /* 004fc1dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fc1dd mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 004fc1e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc1e1 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fc1e3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fc1e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fc1e5:;
  /* 004fc1e5 mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 004fc1e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc1e9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fc1eb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fc1ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc1f0(CPU *c) {
  NATIVE_HOOK(0x4fc1f0u) REGS; LOADALL;
L_004fc1f0:;
  /* 004fc1f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fc1f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fc1f3 call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fc1f8u; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fc1f3u); RETCHK(0x4fc1f8u, 0x4fc1f3u); LOADALL;
  /* 004fc1f8 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 004fc1fa mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fc1fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc1fe call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fc203u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fc1feu); RETCHK(0x4fc203u, 0x4fc1feu); LOADALL;
  /* 004fc203 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc206 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fc208 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc209 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fc240(CPU *c) {
  NATIVE_HOOK(0x4fc240u) REGS; LOADALL;
L_004fc240:;
  /* 004fc240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fc241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fc243 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc244 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fc246 lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 004fc249 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc24a mov dword ptr [esi], 0x64fd04 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64fd04u); }
  /* 004fc250 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fc255u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fc250u); RETCHK(0x4fc255u, 0x4fc250u); LOADALL;
  /* 004fc255 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fc258 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc25b test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fc25d je 0x4fc268 */ if (ZF_) goto L_004fc268;
  /* 004fc25f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc260 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fc265u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fc260u); RETCHK(0x4fc265u, 0x4fc260u); LOADALL;
  /* 004fc265 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc268:;
  /* 004fc268 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fc26a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc26b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc26c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fc270(CPU *c) {
  NATIVE_HOOK(0x4fc270u) REGS; LOADALL;
L_004fc270:;
  /* 004fc270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fc271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fc273 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc274 push 0x3c */ { u32 v_ = 0x3cu; esp -= 4; M32(esp) = v_; }
  /* 004fc276 mov dword ptr [edi], 0x64fd04 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x64fd04u); }
  /* 004fc27c call 0x5b18a0 */ esp -= 4; M32(esp) = 0x4fc281u; SAVEALL; F_005b18a0(c); ABI_CHECK(0x5b18a0u, 0x4fc27cu); RETCHK(0x4fc281u, 0x4fc27cu); LOADALL;
  /* 004fc281 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc282 lea eax, [edi + 8] */ eax = (u32)((u32)(edi + 0x8u));
  /* 004fc285 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc286 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4fc28bu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4fc286u); RETCHK(0x4fc28bu, 0x4fc286u); LOADALL;
  /* 004fc28b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc28e mov byte ptr [edi + 0x43], 0 */ { const u32 m_ = (u32)(edi + 0x43u); M8(m_) = (u8)(0x0u); }
  /* 004fc292 mov dword ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fc299 mov dword ptr [edi], 0x64fd00 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x64fd00u); }
  /* 004fc29f call 0x5b18a0 */ esp -= 4; M32(esp) = 0x4fc2a4u; SAVEALL; F_005b18a0(c); ABI_CHECK(0x5b18a0u, 0x4fc29fu); RETCHK(0x4fc2a4u, 0x4fc29fu); LOADALL;
  /* 004fc2a4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fc2a7 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fc2a9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004fc2b0:;
  /* 004fc2b0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fc2b2 mov al, dl */ { eax = (eax & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 004fc2b4 cmp dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004fc2b6 jne 0x4fc2d4 */ if (!ZF_) goto L_004fc2d4;
  /* 004fc2b8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fc2ba je 0x4fc2d0 */ if (ZF_) goto L_004fc2d0;
  /* 004fc2bc mov dl, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fc2bf mov al, dl */ { eax = (eax & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 004fc2c1 cmp dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004fc2c4 jne 0x4fc2d4 */ if (!ZF_) goto L_004fc2d4;
  /* 004fc2c6 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fc2c9 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fc2cc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fc2ce jne 0x4fc2b0 */ if (!ZF_) goto L_004fc2b0;
L_004fc2d0:;
  /* 004fc2d0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fc2d2 jmp 0x4fc2d9 */ goto L_004fc2d9;
L_004fc2d4:;
  /* 004fc2d4 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 004fc2d6 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_004fc2d9:;
  /* 004fc2d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc2db mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004fc2de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc2df je 0x4fc2ed */ if (ZF_) goto L_004fc2ed;
  /* 004fc2e1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fc2e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc2e5 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fc2eau; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fc2e5u); RETCHK(0x4fc2eau, 0x4fc2e5u); LOADALL;
  /* 004fc2ea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc2ed:;
  /* 004fc2ed mov eax, edi */ { eax = (u32)(edi); }
  /* 004fc2ef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc2f0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fc300(CPU *c) {
  NATIVE_HOOK(0x4fc300u) REGS; LOADALL;
L_004fc300:;
  /* 004fc300 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc301 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fc303 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fc306 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc308 mov dword ptr [esi], 0x64fd00 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64fd00u); }
  /* 004fc30e je 0x4fc31c */ if (ZF_) goto L_004fc31c;
  /* 004fc310 lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 004fc313 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc314 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fc319u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fc314u); RETCHK(0x4fc319u, 0x4fc314u); LOADALL;
  /* 004fc319 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc31c:;
  /* 004fc31c mov dword ptr [esi], 0x64fd04 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64fd04u); }
  /* 004fc322 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fc325 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc326 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fc32bu; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fc326u); RETCHK(0x4fc32bu, 0x4fc326u); LOADALL;
  /* 004fc32b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc32e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc32f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc330(CPU *c) {
  NATIVE_HOOK(0x4fc330u) REGS; LOADALL;
L_004fc330:;
  /* 004fc330 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fc331 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fc333 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc334 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fc336 call 0x4fc300 */ esp -= 4; M32(esp) = 0x4fc33bu; SAVEALL; F_004fc300(c); ABI_CHECK(0x4fc300u, 0x4fc336u); RETCHK(0x4fc33bu, 0x4fc336u); LOADALL;
  /* 004fc33b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fc33f je 0x4fc34a */ if (ZF_) goto L_004fc34a;
  /* 004fc341 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc342 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fc347u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fc342u); RETCHK(0x4fc347u, 0x4fc342u); LOADALL;
  /* 004fc347 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc34a:;
  /* 004fc34a mov eax, esi */ { eax = (u32)(esi); }
  /* 004fc34c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc34d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc34e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fc360(CPU *c) {
  NATIVE_HOOK(0x4fc360u) REGS; LOADALL;
L_004fc360:;
  /* 004fc360 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004fc362 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004fc364 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004fc367 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fc369 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004fc36c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc390(CPU *c) {
  NATIVE_HOOK(0x4fc390u) REGS; LOADALL;
L_004fc390:;
  /* 004fc390 movsx ecx, cl */ { ecx = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 004fc393 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc394 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc395 call 0x5feac4 */ esp -= 4; M32(esp) = 0x4fc39au; SAVEALL; F_005feac4(c); ABI_CHECK(0x5feac4u, 0x4fc395u); RETCHK(0x4fc39au, 0x4fc395u); LOADALL;
  /* 004fc39a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004fc39c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc39f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc3a2 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 004fc3a5 mov al, dl */ { eax = (eax & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 004fc3a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc3b0(CPU *c) {
  NATIVE_HOOK(0x4fc3b0u) REGS; LOADALL;
L_004fc3b0:;
  /* 004fc3b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fc3b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fc3b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fc3b5 push 0x61e0c7 */ { u32 v_ = 0x61e0c7u; esp -= 4; M32(esp) = v_; }
  /* 004fc3ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fc3c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc3c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fc3c8 sub esp, 0x110 */ { u32 a_ = esp, b_ = 0x110u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc3ce mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fc3d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fc3d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc3d5 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004fc3d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fc3d9 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fc3dc lea eax, [ebp - 0x11c] */ eax = (u32)((u32)(ebp + 0xfffffee4u));
  /* 004fc3e2 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fc3e4 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004fc3e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc3e7 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004fc3ec mov dword ptr [ebp - 0x68], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ebx); }
  /* 004fc3ef call 0x4feae0 */ esp -= 4; M32(esp) = 0x4fc3f4u; SAVEALL; F_004feae0(c); ABI_CHECK(0x4feae0u, 0x4fc3efu); RETCHK(0x4fc3f4u, 0x4fc3efu); LOADALL;
  /* 004fc3f4 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 004fc3fb mov eax, esi */ { eax = (u32)(esi); }
  /* 004fc3fd mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 004fc404 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 004fc407 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fc40a lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 004fc40d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004fc410:;
  /* 004fc410 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fc412 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fc413 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004fc415 jne 0x4fc410 */ if (!ZF_) goto L_004fc410;
  /* 004fc417 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fc419 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc41a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc41b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fc41e call 0x404420 */ esp -= 4; M32(esp) = 0x4fc423u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4fc41eu); RETCHK(0x4fc423u, 0x4fc41eu); LOADALL;
  /* 004fc423 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004fc425 mov eax, 0x64ff1c */ { eax = (u32)(0x64ff1cu); }
  /* 004fc42a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fc42d mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004fc431 call 0x40d260 */ esp -= 4; M32(esp) = 0x4fc436u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x4fc431u); RETCHK(0x4fc436u, 0x4fc431u); LOADALL;
  /* 004fc436 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc43a mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 004fc43d jae 0x4fc442 */ if (!CF_) goto L_004fc442;
  /* 004fc43f lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
L_004fc442:;
  /* 004fc442 push 0x1b6 */ { u32 v_ = 0x1b6u; esp -= 4; M32(esp) = v_; }
  /* 004fc447 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004fc44c lea esi, [ebp - 0x114] */ esi = (u32)((u32)(ebp + 0xfffffeecu));
  /* 004fc452 call 0x4ff4f0 */ esp -= 4; M32(esp) = 0x4fc457u; SAVEALL; F_004ff4f0(c); ABI_CHECK(0x4ff4f0u, 0x4fc452u); RETCHK(0x4fc457u, 0x4fc452u); LOADALL;
  /* 004fc457 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc459 jne 0x4fc48a */ if (!ZF_) goto L_004fc48a;
  /* 004fc45b mov ecx, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ecx = (u32)(M32(m_)); }
  /* 004fc461 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fc464 mov eax, dword ptr [ebp + ecx - 0x114] */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 004fc46b mov edx, dword ptr [ebp + ecx - 0xf4] */ { const u32 m_ = (u32)(ebp + ecx + 0xffffff0cu); edx = (u32)(M32(m_)); }
  /* 004fc472 lea ecx, [ebp + ecx - 0x11c] */ ecx = (u32)((u32)(ebp + ecx + 0xfffffee4u));
  /* 004fc479 or eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fc47c cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc47e jne 0x4fc483 */ if (!ZF_) goto L_004fc483;
  /* 004fc480 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fc483:;
  /* 004fc483 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fc484 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc485 call 0x601918 */ esp -= 4; M32(esp) = 0x4fc48au; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4fc485u); RETCHK(0x4fc48au, 0x4fc485u); LOADALL;
L_004fc48a:;
  /* 004fc48a mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 004fc48f mov dword ptr [ebp - 0x4c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(esi); }
  /* 004fc492 mov dword ptr [ebp - 0x50], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ebx); }
  /* 004fc495 mov byte ptr [ebp - 0x60], bl */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fc498 lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004fc49b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fc49c lea eax, [ebp - 0x11c] */ eax = (u32)((u32)(ebp + 0xfffffee4u));
  /* 004fc4a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc4a3 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 004fc4a7 call 0x4ff960 */ esp -= 4; M32(esp) = 0x4fc4acu; SAVEALL; F_004ff960(c); ABI_CHECK(0x4ff960u, 0x4fc4a7u); RETCHK(0x4fc4acu, 0x4fc4a7u); LOADALL;
  /* 004fc4ac add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc4af lea ecx, [ebp - 0x114] */ ecx = (u32)((u32)(ebp + 0xfffffeecu));
  /* 004fc4b5 call 0x4ff600 */ esp -= 4; M32(esp) = 0x4fc4bau; SAVEALL; F_004ff600(c); ABI_CHECK(0x4ff600u, 0x4fc4b5u); RETCHK(0x4fc4bau, 0x4fc4b5u); LOADALL;
  /* 004fc4ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc4bc jne 0x4fc4ed */ if (!ZF_) goto L_004fc4ed;
  /* 004fc4be mov ecx, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ecx = (u32)(M32(m_)); }
  /* 004fc4c4 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fc4c7 mov eax, dword ptr [ebp + ecx - 0x114] */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffeecu); eax = (u32)(M32(m_)); }
  /* 004fc4ce mov edx, dword ptr [ebp + ecx - 0xf4] */ { const u32 m_ = (u32)(ebp + ecx + 0xffffff0cu); edx = (u32)(M32(m_)); }
  /* 004fc4d5 lea ecx, [ebp + ecx - 0x11c] */ ecx = (u32)((u32)(ebp + ecx + 0xfffffee4u));
  /* 004fc4dc or eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fc4df cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc4e1 jne 0x4fc4e6 */ if (!ZF_) goto L_004fc4e6;
  /* 004fc4e3 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fc4e6:;
  /* 004fc4e6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fc4e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc4e8 call 0x601918 */ esp -= 4; M32(esp) = 0x4fc4edu; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4fc4e8u); RETCHK(0x4fc4edu, 0x4fc4e8u); LOADALL;
L_004fc4ed:;
  /* 004fc4ed mov dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(esi); }
  /* 004fc4f0 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 004fc4f3 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fc4f6 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fc4f9 lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004fc4fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fc4fd lea esi, [ebp - 0x84] */ esi = (u32)((u32)(ebp + 0xffffff7cu));
  /* 004fc503 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 004fc507 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x4fc50cu; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x4fc507u); RETCHK(0x4fc50cu, 0x4fc507u); LOADALL;
  /* 004fc50c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc50f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fc511 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fc512 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc513 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004fc516 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 004fc51a call 0x404140 */ esp -= 4; M32(esp) = 0x4fc51fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4fc51au); RETCHK(0x4fc51fu, 0x4fc51au); LOADALL;
  /* 004fc51f mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 004fc523 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 004fc526 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 004fc52b cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc52d jb 0x4fc53b */ if (CF_) goto L_004fc53b;
  /* 004fc52f mov eax, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); eax = (u32)(M32(m_)); }
  /* 004fc532 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc533 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fc538u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fc533u); RETCHK(0x4fc538u, 0x4fc533u); LOADALL;
  /* 004fc538 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc53b:;
  /* 004fc53b cmp dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc53e mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004fc541 jae 0x4fc546 */ if (!CF_) goto L_004fc546;
  /* 004fc543 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
L_004fc546:;
  /* 004fc546 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc547 call dword ptr [0x62e494] */ { const u32 m_ = (u32)(0x62e494u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fc54du; SAVEALL; call_ind(c, t_); RETCHK(0x4fc54du, 0x4fc547u); LOADALL; }
  /* 004fc54d cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc550 mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 004fc553 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 004fc55a mov byte ptr [edi + 4], bl */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fc55d jne 0x4fc56f */ if (!ZF_) goto L_004fc56f;
  /* 004fc55f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fc561 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fc562 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004fc565 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc566 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fc568 call 0x404140 */ esp -= 4; M32(esp) = 0x4fc56du; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4fc568u); RETCHK(0x4fc56du, 0x4fc568u); LOADALL;
  /* 004fc56d jmp 0x4fc57c */ goto L_004fc57c;
L_004fc56f:;
  /* 004fc56f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fc570 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 004fc575 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fc577 call 0x404420 */ esp -= 4; M32(esp) = 0x4fc57cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4fc577u); RETCHK(0x4fc57cu, 0x4fc577u); LOADALL;
L_004fc57c:;
  /* 004fc57c cmp dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc57f mov dword ptr [ebp - 0x68], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0x1u); }
  /* 004fc586 jb 0x4fc594 */ if (CF_) goto L_004fc594;
  /* 004fc588 mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 004fc58b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fc58c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fc591u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fc58cu); RETCHK(0x4fc591u, 0x4fc58cu); LOADALL;
  /* 004fc591 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc594:;
  /* 004fc594 cmp dword ptr [ebp - 0x4c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc597 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 004fc59e mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 004fc5a1 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fc5a4 jb 0x4fc5b2 */ if (CF_) goto L_004fc5b2;
  /* 004fc5a6 mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 004fc5a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc5aa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fc5afu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fc5aau); RETCHK(0x4fc5afu, 0x4fc5aau); LOADALL;
  /* 004fc5af add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc5b2:;
  /* 004fc5b2 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc5b5 mov dword ptr [ebp - 0x4c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0xfu); }
  /* 004fc5bc mov dword ptr [ebp - 0x50], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ebx); }
  /* 004fc5bf mov byte ptr [ebp - 0x60], bl */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fc5c2 jb 0x4fc5d0 */ if (CF_) goto L_004fc5d0;
  /* 004fc5c4 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 004fc5c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc5c8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fc5cdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fc5c8u); RETCHK(0x4fc5cdu, 0x4fc5c8u); LOADALL;
  /* 004fc5cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc5d0:;
  /* 004fc5d0 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fc5d3 lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 004fc5d9 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fc5dc mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 004fc5df mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 004fc5e6 call 0x4febe0 */ esp -= 4; M32(esp) = 0x4fc5ebu; SAVEALL; F_004febe0(c); ABI_CHECK(0x4febe0u, 0x4fc5e6u); RETCHK(0x4fc5ebu, 0x4fc5e6u); LOADALL;
  /* 004fc5eb lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 004fc5f1 mov dword ptr [ebp - 0xb8], 0x63d0e0 */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(0x63d0e0u); }
  /* 004fc5fb call 0x60182e */ esp -= 4; M32(esp) = 0x4fc600u; SAVEALL; F_0060182e(c); ABI_CHECK(0x60182eu, 0x4fc5fbu); RETCHK(0x4fc600u, 0x4fc5fbu); LOADALL;
  /* 004fc600 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fc603 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fc605 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fc606 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc607 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fc60e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004fc611 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fc612 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fc617u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fc612u); RETCHK(0x4fc617u, 0x4fc612u); LOADALL;
  /* 004fc617 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fc619 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc61a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc640(CPU *c) {
  NATIVE_HOOK(0x4fc640u) REGS; LOADALL;
L_004fc640:;
  /* 004fc640 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fc641 push 0x459c10 */ { u32 v_ = 0x459c10u; esp -= 4; M32(esp) = v_; }
  /* 004fc646 push 0x4fc360 */ { u32 v_ = 0x4fc360u; esp -= 4; M32(esp) = v_; }
  /* 004fc64b push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004fc64d push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 004fc64f lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004fc652 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc653 call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x4fc658u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x4fc653u); RETCHK(0x4fc658u, 0x4fc653u); LOADALL;
  /* 004fc658 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fc65a mov ecx, 0x30 */ { ecx = (u32)(0x30u); }
  /* 004fc65f lea edi, [esi + 0x4c] */ edi = (u32)((u32)(esi + 0x4cu));
  /* 004fc662 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 004fc668 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fc66a mov eax, esi */ { eax = (u32)(esi); }
  /* 004fc66c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fc66d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc670(CPU *c) {
  NATIVE_HOOK(0x4fc670u) REGS; LOADALL;
L_004fc670:;
  /* 004fc670 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fc671 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fc673 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fc679 mov cl, byte ptr [0x9b93a4] */ { const u32 m_ = (u32)(0x9b93a4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fc67f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fc681 push 0x61b53e */ { u32 v_ = 0x61b53eu; esp -= 4; M32(esp) = v_; }
  /* 004fc686 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc687 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004fc68c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fc68e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fc695 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc696 jne 0x4fc6bc */ if (!ZF_) goto L_004fc6bc;
  /* 004fc698 or dword ptr [0x9b93a4], eax */ { const u32 m_ = (u32)(0x9b93a4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 004fc69e mov esi, 0x9b9298 */ { esi = (u32)(0x9b9298u); }
  /* 004fc6a3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fc6aa call 0x4fc640 */ esp -= 4; M32(esp) = 0x4fc6afu; SAVEALL; F_004fc640(c); ABI_CHECK(0x4fc640u, 0x4fc6aau); RETCHK(0x4fc6afu, 0x4fc6aau); LOADALL;
  /* 004fc6af push 0x62c590 */ { u32 v_ = 0x62c590u; esp -= 4; M32(esp) = v_; }
  /* 004fc6b4 call 0x5fe916 */ esp -= 4; M32(esp) = 0x4fc6b9u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x4fc6b4u); RETCHK(0x4fc6b9u, 0x4fc6b4u); LOADALL;
  /* 004fc6b9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fc6bc:;
  /* 004fc6bc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fc6bf mov eax, 0x9b9298 */ { eax = (u32)(0x9b9298u); }
  /* 004fc6c4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fc6cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fc6cc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fc6ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fc6cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fc6d0(CPU *c) {
  NATIVE_HOOK(0x4fc6d0u) REGS; LOADALL;
L_004fc6d0:;
  /* 004fc6d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fc6d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fc6d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fc6d5 push 0x61fea0 */ { u32 v_ = 0x61fea0u; esp -= 4; M32(esp) = v_; }
  /* 004fc6da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fc6e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc6e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fc6e8 sub esp, 0x150 */ { u32 a_ = esp, b_ = 0x150u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc6ee test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc6f0 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fc6f5 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004fc6f8 je 0x4fc71f */ if (ZF_) goto L_004fc71f;
  /* 004fc6fa mov eax, 0x64f338 */ { eax = (u32)(0x64f338u); }
  /* 004fc6ff call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fc704u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fc6ffu); RETCHK(0x4fc704u, 0x4fc6ffu); LOADALL;
  /* 004fc704 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc706 mov dword ptr [ebp - 0x140], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); M32(m_) = (u32)(eax); }
  /* 004fc70c je 0x4fc71f */ if (ZF_) goto L_004fc71f;
  /* 004fc70e mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004fc710 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fc712 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fc715u; SAVEALL; call_ind(c, t_); RETCHK(0x4fc715u, 0x4fc712u); LOADALL; }
  /* 004fc715 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc717 mov dword ptr [ebp - 0x13c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(eax); }
  /* 004fc71d jne 0x4fc726 */ if (!ZF_) goto L_004fc726;
L_004fc71f:;
  /* 004fc71f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fc721 jmp 0x4fd4a8 */ goto L_004fd4a8;
L_004fc726:;
  /* 004fc726 mov ecx, dword ptr [0x64f320] */ { const u32 m_ = (u32)(0x64f320u); ecx = (u32)(M32(m_)); }
  /* 004fc72c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fc72d mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004fc730 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc731 lea esi, [ebx + 0x4c] */ esi = (u32)((u32)(ebx + 0x4cu));
  /* 004fc734 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fc736 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fc738 mov dx, word ptr [0x64f324] */ { const u32 m_ = (u32)(0x64f324u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 004fc73f mov word ptr [eax + 4], dx */ { const u32 m_ = (u32)(eax + 0x4u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 004fc743 mov ecx, dword ptr [0x64f320] */ { const u32 m_ = (u32)(0x64f320u); ecx = (u32)(M32(m_)); }
  /* 004fc749 lea eax, [ebx + 0x6c] */ eax = (u32)((u32)(ebx + 0x6cu));
  /* 004fc74c mov dword ptr [ebp - 0x14c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); M32(m_) = (u32)(eax); }
  /* 004fc752 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fc754 mov dx, word ptr [0x64f324] */ { const u32 m_ = (u32)(0x64f324u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 004fc75b mov word ptr [eax + 4], dx */ { const u32 m_ = (u32)(eax + 0x4u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 004fc75f mov ecx, dword ptr [0x64f320] */ { const u32 m_ = (u32)(0x64f320u); ecx = (u32)(M32(m_)); }
  /* 004fc765 lea eax, [ebx + 0x8c] */ eax = (u32)((u32)(ebx + 0x8cu));
  /* 004fc76b mov dword ptr [ebp - 0x148], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); M32(m_) = (u32)(eax); }
  /* 004fc771 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fc773 mov dx, word ptr [0x64f324] */ { const u32 m_ = (u32)(0x64f324u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 004fc77a mov word ptr [eax + 4], dx */ { const u32 m_ = (u32)(eax + 0x4u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 004fc77e mov ecx, dword ptr [0x64f320] */ { const u32 m_ = (u32)(0x64f320u); ecx = (u32)(M32(m_)); }
  /* 004fc784 lea eax, [ebx + 0xac] */ eax = (u32)((u32)(ebx + 0xacu));
  /* 004fc78a mov dword ptr [ebp - 0x154], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); M32(m_) = (u32)(eax); }
  /* 004fc790 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fc792 mov dx, word ptr [0x64f324] */ { const u32 m_ = (u32)(0x64f324u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 004fc799 mov word ptr [eax + 4], dx */ { const u32 m_ = (u32)(eax + 0x4u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 004fc79d mov ecx, dword ptr [0x64f320] */ { const u32 m_ = (u32)(0x64f320u); ecx = (u32)(M32(m_)); }
  /* 004fc7a3 lea eax, [ebx + 0xcc] */ eax = (u32)((u32)(ebx + 0xccu));
  /* 004fc7a9 mov dword ptr [ebp - 0x158], eax */ { const u32 m_ = (u32)(ebp + 0xfffffea8u); M32(m_) = (u32)(eax); }
  /* 004fc7af mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fc7b1 mov dx, word ptr [0x64f324] */ { const u32 m_ = (u32)(0x64f324u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 004fc7b8 mov word ptr [eax + 4], dx */ { const u32 m_ = (u32)(eax + 0x4u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 004fc7bc mov ecx, dword ptr [0x64f320] */ { const u32 m_ = (u32)(0x64f320u); ecx = (u32)(M32(m_)); }
  /* 004fc7c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fc7c3 lea edi, [ebx + 0xec] */ edi = (u32)((u32)(ebx + 0xecu));
  /* 004fc7c9 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fc7cb mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fc7cd mov dx, word ptr [0x64f324] */ { const u32 m_ = (u32)(0x64f324u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 004fc7d4 mov word ptr [eax + 4], dx */ { const u32 m_ = (u32)(eax + 0x4u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 004fc7d8 mov eax, dword ptr [ebp - 0x13c] */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); eax = (u32)(M32(m_)); }
  /* 004fc7de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc7df mov eax, 0x64ff08 */ { eax = (u32)(0x64ff08u); }
  /* 004fc7e4 mov dword ptr [ebp - 0x15c], esi */ { const u32 m_ = (u32)(ebp + 0xfffffea4u); M32(m_) = (u32)(esi); }
  /* 004fc7ea call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fc7efu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fc7eau); RETCHK(0x4fc7efu, 0x4fc7eau); LOADALL;
  /* 004fc7ef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc7f1 jne 0x4fc7f8 */ if (!ZF_) goto L_004fc7f8;
  /* 004fc7f3 mov eax, 0x64fef0 */ { eax = (u32)(0x64fef0u); }
L_004fc7f8:;
  /* 004fc7f8 push 0x1a */ { u32 v_ = 0x1au; esp -= 4; M32(esp) = v_; }
  /* 004fc7fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc7fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc7fc call 0x5fe9b6 */ esp -= 4; M32(esp) = 0x4fc801u; SAVEALL; F_005fe9b6(c); ABI_CHECK(0x5fe9b6u, 0x4fc7fcu); RETCHK(0x4fc801u, 0x4fc7fcu); LOADALL;
  /* 004fc801 mov ecx, dword ptr [ebp - 0x13c] */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); ecx = (u32)(M32(m_)); }
  /* 004fc807 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc80a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc80b mov eax, 0x64fee0 */ { eax = (u32)(0x64fee0u); }
  /* 004fc810 mov byte ptr [ebx + 0x6b], 0 */ { const u32 m_ = (u32)(ebx + 0x6bu); M8(m_) = (u8)(0x0u); }
  /* 004fc814 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fc819u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fc814u); RETCHK(0x4fc819u, 0x4fc814u); LOADALL;
  /* 004fc819 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc81b jne 0x4fc822 */ if (!ZF_) goto L_004fc822;
  /* 004fc81d mov eax, 0x64fecc */ { eax = (u32)(0x64feccu); }
L_004fc822:;
  /* 004fc822 mov edx, dword ptr [ebp - 0x148] */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); edx = (u32)(M32(m_)); }
  /* 004fc828 push 0x1a */ { u32 v_ = 0x1au; esp -= 4; M32(esp) = v_; }
  /* 004fc82a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc82b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fc82c call 0x5fe9b6 */ esp -= 4; M32(esp) = 0x4fc831u; SAVEALL; F_005fe9b6(c); ABI_CHECK(0x5fe9b6u, 0x4fc82cu); RETCHK(0x4fc831u, 0x4fc82cu); LOADALL;
  /* 004fc831 mov esi, dword ptr [ebp - 0x13c] */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); esi = (u32)(M32(m_)); }
  /* 004fc837 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc83a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc83b mov eax, 0x64febc */ { eax = (u32)(0x64febcu); }
  /* 004fc840 mov byte ptr [ebx + 0xab], 0 */ { const u32 m_ = (u32)(ebx + 0xabu); M8(m_) = (u8)(0x0u); }
  /* 004fc847 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fc84cu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fc847u); RETCHK(0x4fc84cu, 0x4fc847u); LOADALL;
  /* 004fc84c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc84e jne 0x4fc855 */ if (!ZF_) goto L_004fc855;
  /* 004fc850 mov eax, 0x64fea8 */ { eax = (u32)(0x64fea8u); }
L_004fc855:;
  /* 004fc855 push 0x1a */ { u32 v_ = 0x1au; esp -= 4; M32(esp) = v_; }
  /* 004fc857 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc858 mov eax, dword ptr [ebp - 0x14c] */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); eax = (u32)(M32(m_)); }
  /* 004fc85e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc85f call 0x5fe9b6 */ esp -= 4; M32(esp) = 0x4fc864u; SAVEALL; F_005fe9b6(c); ABI_CHECK(0x5fe9b6u, 0x4fc85fu); RETCHK(0x4fc864u, 0x4fc85fu); LOADALL;
  /* 004fc864 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc867 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc868 mov eax, 0x64fe98 */ { eax = (u32)(0x64fe98u); }
  /* 004fc86d mov byte ptr [ebx + 0x8b], 0 */ { const u32 m_ = (u32)(ebx + 0x8bu); M8(m_) = (u8)(0x0u); }
  /* 004fc874 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fc879u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fc874u); RETCHK(0x4fc879u, 0x4fc874u); LOADALL;
  /* 004fc879 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc87b jne 0x4fc882 */ if (!ZF_) goto L_004fc882;
  /* 004fc87d mov eax, 0x64fe84 */ { eax = (u32)(0x64fe84u); }
L_004fc882:;
  /* 004fc882 push 0x1a */ { u32 v_ = 0x1au; esp -= 4; M32(esp) = v_; }
  /* 004fc884 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc885 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fc886 call 0x5fe9b6 */ esp -= 4; M32(esp) = 0x4fc88bu; SAVEALL; F_005fe9b6(c); ABI_CHECK(0x5fe9b6u, 0x4fc886u); RETCHK(0x4fc88bu, 0x4fc886u); LOADALL;
  /* 004fc88b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc88e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc88f mov eax, 0x64fe78 */ { eax = (u32)(0x64fe78u); }
  /* 004fc894 mov byte ptr [ebx + 0x10b], 0 */ { const u32 m_ = (u32)(ebx + 0x10bu); M8(m_) = (u8)(0x0u); }
  /* 004fc89b call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fc8a0u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fc89bu); RETCHK(0x4fc8a0u, 0x4fc89bu); LOADALL;
  /* 004fc8a0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc8a2 jne 0x4fc8a9 */ if (!ZF_) goto L_004fc8a9;
  /* 004fc8a4 mov eax, 0x64fe68 */ { eax = (u32)(0x64fe68u); }
L_004fc8a9:;
  /* 004fc8a9 mov ecx, dword ptr [ebp - 0x154] */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); ecx = (u32)(M32(m_)); }
  /* 004fc8af push 0x1a */ { u32 v_ = 0x1au; esp -= 4; M32(esp) = v_; }
  /* 004fc8b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc8b2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc8b3 call 0x5fe9b6 */ esp -= 4; M32(esp) = 0x4fc8b8u; SAVEALL; F_005fe9b6(c); ABI_CHECK(0x5fe9b6u, 0x4fc8b3u); RETCHK(0x4fc8b8u, 0x4fc8b3u); LOADALL;
  /* 004fc8b8 mov edx, dword ptr [ebp - 0x158] */ { const u32 m_ = (u32)(ebp + 0xfffffea8u); edx = (u32)(M32(m_)); }
  /* 004fc8be mov esi, edx */ { esi = (u32)(edx); }
  /* 004fc8c0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc8c3 mov byte ptr [ebx + 0xcb], 0 */ { const u32 m_ = (u32)(ebx + 0xcbu); M8(m_) = (u8)(0x0u); }
  /* 004fc8ca mov eax, edi */ { eax = (u32)(edi); }
  /* 004fc8cc sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fc8ce mov edi, edi */ { edi = (u32)(edi); }
L_004fc8d0:;
  /* 004fc8d0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fc8d2 mov byte ptr [esi + eax], cl */ { const u32 m_ = (u32)(esi + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004fc8d5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fc8d6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fc8d8 jne 0x4fc8d0 */ if (!ZF_) goto L_004fc8d0;
  /* 004fc8da push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fc8df push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fc8e0 push 0x6887d0 */ { u32 v_ = 0x6887d0u; esp -= 4; M32(esp) = v_; }
  /* 004fc8e5 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4fc8eau; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4fc8e5u); RETCHK(0x4fc8eau, 0x4fc8e5u); LOADALL;
  /* 004fc8ea push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fc8ec mov byte ptr [0x6888cf], 0 */ { const u32 m_ = (u32)(0x6888cfu); M8(m_) = (u8)(0x0u); }
  /* 004fc8f3 call 0x5ac530 */ esp -= 4; M32(esp) = 0x4fc8f8u; SAVEALL; F_005ac530(c); ABI_CHECK(0x5ac530u, 0x4fc8f3u); RETCHK(0x4fc8f8u, 0x4fc8f3u); LOADALL;
  /* 004fc8f8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fc8fa call 0x5ac560 */ esp -= 4; M32(esp) = 0x4fc8ffu; SAVEALL; F_005ac560(c); ABI_CHECK(0x5ac560u, 0x4fc8fau); RETCHK(0x4fc8ffu, 0x4fc8fau); LOADALL;
  /* 004fc8ff call 0x5ac5c0 */ esp -= 4; M32(esp) = 0x4fc904u; SAVEALL; F_005ac5c0(c); ABI_CHECK(0x5ac5c0u, 0x4fc8ffu); RETCHK(0x4fc904u, 0x4fc8ffu); LOADALL;
  /* 004fc904 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc905 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 004fc907 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fc90cu; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fc907u); RETCHK(0x4fc90cu, 0x4fc907u); LOADALL;
  /* 004fc90c mov edx, dword ptr [ebp - 0x154] */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); edx = (u32)(M32(m_)); }
  /* 004fc912 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fc913 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fc918u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fc913u); RETCHK(0x4fc918u, 0x4fc913u); LOADALL;
  /* 004fc918 mov ecx, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); ecx = (u32)(M32(m_)); }
  /* 004fc91e add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc921 mov eax, 0x64fe58 */ { eax = (u32)(0x64fe58u); }
  /* 004fc926 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fc92bu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fc926u); RETCHK(0x4fc92bu, 0x4fc926u); LOADALL;
  /* 004fc92b mov edi, eax */ { edi = (u32)(eax); }
  /* 004fc92d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc92f je 0x4fca9e */ if (ZF_) goto L_004fca9e;
  /* 004fc935 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004fc937 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fc939 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fc93cu; SAVEALL; call_ind(c, t_); RETCHK(0x4fc93cu, 0x4fc939u); LOADALL; }
  /* 004fc93c push 0x64fe4c */ { u32 v_ = 0x64fe4cu; esp -= 4; M32(esp) = v_; }
  /* 004fc941 mov dword ptr [ebp - 0x13c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(eax); }
  /* 004fc947 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fc94cu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fc947u); RETCHK(0x4fc94cu, 0x4fc947u); LOADALL;
  /* 004fc94c cmp eax, 0xa0 */ { u32 a_ = eax, b_ = 0xa0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc951 jge 0x4fc958 */ if (!LT_) goto L_004fc958;
  /* 004fc953 mov eax, 0xa0 */ { eax = (u32)(0xa0u); }
L_004fc958:;
  /* 004fc958 lea esi, [ebx + 4] */ esi = (u32)((u32)(ebx + 0x4u));
  /* 004fc95b mov dword ptr [ebp - 0x150], esi */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); M32(m_) = (u32)(esi); }
  /* 004fc961 call 0x54d100 */ esp -= 4; M32(esp) = 0x4fc966u; SAVEALL; F_0054d100(c); ABI_CHECK(0x54d100u, 0x4fc961u); RETCHK(0x4fc966u, 0x4fc961u); LOADALL;
  /* 004fc966 mov eax, 0x64fe40 */ { eax = (u32)(0x64fe40u); }
  /* 004fc96b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fc96d call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fc972u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fc96du); RETCHK(0x4fc972u, 0x4fc96du); LOADALL;
  /* 004fc972 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc974 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fc97a je 0x4fca9e */ if (ZF_) goto L_004fca9e;
L_004fc980:;
  /* 004fc980 push 0x3a51b717 */ { u32 v_ = 0x3a51b717u; esp -= 4; M32(esp) = v_; }
  /* 004fc985 call 0x553380 */ esp -= 4; M32(esp) = 0x4fc98au; SAVEALL; F_00553380(c); ABI_CHECK(0x553380u, 0x4fc985u); RETCHK(0x4fc98au, 0x4fc985u); LOADALL;
  /* 004fc98a mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fc990 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004fc992 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fc995 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fc998u; SAVEALL; call_ind(c, t_); RETCHK(0x4fc998u, 0x4fc995u); LOADALL; }
  /* 004fc998 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fc99a push 0x645584 */ { u32 v_ = 0x645584u; esp -= 4; M32(esp) = v_; }
  /* 004fc99f mov dword ptr [ebp - 0x13c], esi */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(esi); }
  /* 004fc9a5 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fc9aau; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fc9a5u); RETCHK(0x4fc9aau, 0x4fc9a5u); LOADALL;
  /* 004fc9aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc9ac mov dword ptr [ebp - 0x138], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(eax); }
  /* 004fc9b2 je 0x4fca80 */ if (ZF_) goto L_004fca80;
  /* 004fc9b8 push 0x64fe38 */ { u32 v_ = 0x64fe38u; esp -= 4; M32(esp) = v_; }
  /* 004fc9bd mov eax, esi */ { eax = (u32)(esi); }
  /* 004fc9bf call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fc9c4u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fc9bfu); RETCHK(0x4fc9c4u, 0x4fc9bfu); LOADALL;
  /* 004fc9c4 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fc9c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fc9c7 mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004fc9cc call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fc9d1u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fc9ccu); RETCHK(0x4fc9d1u, 0x4fc9ccu); LOADALL;
  /* 004fc9d1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fc9d3 mov dword ptr [ebp - 0x144], eax */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); M32(m_) = (u32)(eax); }
  /* 004fc9d9 je 0x4fca10 */ if (ZF_) goto L_004fca10;
  /* 004fc9db cmp edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fc9de jne 0x4fc9ee */ if (!ZF_) goto L_004fc9ee;
  /* 004fc9e0 push 0x64fe28 */ { u32 v_ = 0x64fe28u; esp -= 4; M32(esp) = v_; }
  /* 004fc9e5 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fc9e7 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fc9ecu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fc9e7u); RETCHK(0x4fc9ecu, 0x4fc9e7u); LOADALL;
  /* 004fc9ec jmp 0x4fc9f0 */ goto L_004fc9f0;
L_004fc9ee:;
  /* 004fc9ee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fc9f0:;
  /* 004fc9f0 mov ecx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); ecx = (u32)(M32(m_)); }
  /* 004fc9f6 mov ebx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); ebx = (u32)(M32(m_)); }
  /* 004fc9fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc9fd mov eax, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); eax = (u32)(M32(m_)); }
  /* 004fca03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fca04 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fca06 call 0x4fd650 */ esp -= 4; M32(esp) = 0x4fca0bu; SAVEALL; F_004fd650(c); ABI_CHECK(0x4fd650u, 0x4fca06u); RETCHK(0x4fca0bu, 0x4fca06u); LOADALL;
  /* 004fca0b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fca0e jmp 0x4fca7d */ goto L_004fca7d;
L_004fca10:;
  /* 004fca10 mov ecx, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); ecx = (u32)(M32(m_)); }
  /* 004fca16 mov edx, dword ptr [ebp - 0x15c] */ { const u32 m_ = (u32)(ebp + 0xfffffea4u); edx = (u32)(M32(m_)); }
  /* 004fca1c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fca1d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fca1e push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fca23 lea eax, [ebp - 0x130] */ eax = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fca29 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fca2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fca2f call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fca34u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fca2fu); RETCHK(0x4fca34u, 0x4fca2fu); LOADALL;
  /* 004fca34 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fca36 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fca38 call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fca3du; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fca38u); RETCHK(0x4fca3du, 0x4fca38u); LOADALL;
  /* 004fca3d mov esi, eax */ { esi = (u32)(eax); }
  /* 004fca3f add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fca42 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fca44 je 0x4fca80 */ if (ZF_) goto L_004fca80;
  /* 004fca46 mov ecx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); ecx = (u32)(M32(m_)); }
  /* 004fca4c mov edi, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); edi = (u32)(M32(m_)); }
  /* 004fca52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fca53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fca54 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fca59u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fca54u); RETCHK(0x4fca59u, 0x4fca54u); LOADALL;
  /* 004fca59 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fca5b jl 0x4fca74 */ if (LT_) goto L_004fca74;
  /* 004fca5d lea eax, [ebp - 0x130] */ eax = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fca63 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fca6a call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fca6fu; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fca6au); RETCHK(0x4fca6fu, 0x4fca6au); LOADALL;
  /* 004fca6f mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fca72 jmp 0x4fca7d */ goto L_004fca7d;
L_004fca74:;
  /* 004fca74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fca75 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fca7au; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fca75u); RETCHK(0x4fca7au, 0x4fca75u); LOADALL;
  /* 004fca7a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fca7d:;
  /* 004fca7d mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004fca80:;
  /* 004fca80 mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fca86 mov eax, 0x64fe40 */ { eax = (u32)(0x64fe40u); }
  /* 004fca8b call 0x560c00 */ esp -= 4; M32(esp) = 0x4fca90u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x4fca8bu); RETCHK(0x4fca90u, 0x4fca8bu); LOADALL;
  /* 004fca90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fca92 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fca98 jne 0x4fc980 */ if (!ZF_) goto L_004fc980;
L_004fca9e:;
  /* 004fca9e mov ecx, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); ecx = (u32)(M32(m_)); }
  /* 004fcaa4 mov eax, 0x64fe1c */ { eax = (u32)(0x64fe1cu); }
  /* 004fcaa9 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fcaaeu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fcaa9u); RETCHK(0x4fcaaeu, 0x4fcaa9u); LOADALL;
  /* 004fcaae mov edi, eax */ { edi = (u32)(eax); }
  /* 004fcab0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcab2 je 0x4fcc1f */ if (ZF_) goto L_004fcc1f;
  /* 004fcab8 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004fcaba mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fcabc call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fcabfu; SAVEALL; call_ind(c, t_); RETCHK(0x4fcabfu, 0x4fcabcu); LOADALL; }
  /* 004fcabf push 0x64fe4c */ { u32 v_ = 0x64fe4cu; esp -= 4; M32(esp) = v_; }
  /* 004fcac4 mov dword ptr [ebp - 0x13c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(eax); }
  /* 004fcaca call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcacfu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcacau); RETCHK(0x4fcacfu, 0x4fcacau); LOADALL;
  /* 004fcacf cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fcad2 jge 0x4fcad9 */ if (!LT_) goto L_004fcad9;
  /* 004fcad4 mov eax, 0x20 */ { eax = (u32)(0x20u); }
L_004fcad9:;
  /* 004fcad9 lea esi, [ebx + 0x10] */ esi = (u32)((u32)(ebx + 0x10u));
  /* 004fcadc mov dword ptr [ebp - 0x150], esi */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); M32(m_) = (u32)(esi); }
  /* 004fcae2 call 0x54d100 */ esp -= 4; M32(esp) = 0x4fcae7u; SAVEALL; F_0054d100(c); ABI_CHECK(0x54d100u, 0x4fcae2u); RETCHK(0x4fcae7u, 0x4fcae2u); LOADALL;
  /* 004fcae7 mov eax, 0x6469e8 */ { eax = (u32)(0x6469e8u); }
  /* 004fcaec mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fcaee call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fcaf3u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fcaeeu); RETCHK(0x4fcaf3u, 0x4fcaeeu); LOADALL;
  /* 004fcaf3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcaf5 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fcafb je 0x4fcc1f */ if (ZF_) goto L_004fcc1f;
L_004fcb01:;
  /* 004fcb01 push 0x3a51b717 */ { u32 v_ = 0x3a51b717u; esp -= 4; M32(esp) = v_; }
  /* 004fcb06 call 0x553380 */ esp -= 4; M32(esp) = 0x4fcb0bu; SAVEALL; F_00553380(c); ABI_CHECK(0x553380u, 0x4fcb06u); RETCHK(0x4fcb0bu, 0x4fcb06u); LOADALL;
  /* 004fcb0b mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fcb11 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fcb13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fcb16 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fcb19u; SAVEALL; call_ind(c, t_); RETCHK(0x4fcb19u, 0x4fcb16u); LOADALL; }
  /* 004fcb19 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fcb1b push 0x645584 */ { u32 v_ = 0x645584u; esp -= 4; M32(esp) = v_; }
  /* 004fcb20 mov dword ptr [ebp - 0x13c], esi */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(esi); }
  /* 004fcb26 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcb2bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcb26u); RETCHK(0x4fcb2bu, 0x4fcb26u); LOADALL;
  /* 004fcb2b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcb2d mov dword ptr [ebp - 0x138], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(eax); }
  /* 004fcb33 je 0x4fcc01 */ if (ZF_) goto L_004fcc01;
  /* 004fcb39 push 0x64fe38 */ { u32 v_ = 0x64fe38u; esp -= 4; M32(esp) = v_; }
  /* 004fcb3e mov eax, esi */ { eax = (u32)(esi); }
  /* 004fcb40 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcb45u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcb40u); RETCHK(0x4fcb45u, 0x4fcb40u); LOADALL;
  /* 004fcb45 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fcb47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fcb48 mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004fcb4d call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fcb52u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fcb4du); RETCHK(0x4fcb52u, 0x4fcb4du); LOADALL;
  /* 004fcb52 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcb54 mov dword ptr [ebp - 0x144], eax */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); M32(m_) = (u32)(eax); }
  /* 004fcb5a je 0x4fcb91 */ if (ZF_) goto L_004fcb91;
  /* 004fcb5c cmp edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fcb5f jne 0x4fcb6f */ if (!ZF_) goto L_004fcb6f;
  /* 004fcb61 push 0x64fe28 */ { u32 v_ = 0x64fe28u; esp -= 4; M32(esp) = v_; }
  /* 004fcb66 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fcb68 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcb6du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcb68u); RETCHK(0x4fcb6du, 0x4fcb68u); LOADALL;
  /* 004fcb6d jmp 0x4fcb71 */ goto L_004fcb71;
L_004fcb6f:;
  /* 004fcb6f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fcb71:;
  /* 004fcb71 mov ecx, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); ecx = (u32)(M32(m_)); }
  /* 004fcb77 mov ebx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); ebx = (u32)(M32(m_)); }
  /* 004fcb7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fcb7e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fcb7f mov ecx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); ecx = (u32)(M32(m_)); }
  /* 004fcb85 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fcb87 call 0x4fd650 */ esp -= 4; M32(esp) = 0x4fcb8cu; SAVEALL; F_004fd650(c); ABI_CHECK(0x4fd650u, 0x4fcb87u); RETCHK(0x4fcb8cu, 0x4fcb87u); LOADALL;
  /* 004fcb8c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fcb8f jmp 0x4fcbfe */ goto L_004fcbfe;
L_004fcb91:;
  /* 004fcb91 mov edx, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); edx = (u32)(M32(m_)); }
  /* 004fcb97 mov eax, dword ptr [ebp - 0x14c] */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); eax = (u32)(M32(m_)); }
  /* 004fcb9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fcb9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fcb9f push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fcba4 lea ecx, [ebp - 0x130] */ ecx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fcbaa push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fcbaf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fcbb0 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fcbb5u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fcbb0u); RETCHK(0x4fcbb5u, 0x4fcbb0u); LOADALL;
  /* 004fcbb5 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fcbb7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fcbb9 call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fcbbeu; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fcbb9u); RETCHK(0x4fcbbeu, 0x4fcbb9u); LOADALL;
  /* 004fcbbe mov esi, eax */ { esi = (u32)(eax); }
  /* 004fcbc0 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fcbc3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcbc5 je 0x4fcc01 */ if (ZF_) goto L_004fcc01;
  /* 004fcbc7 mov edx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); edx = (u32)(M32(m_)); }
  /* 004fcbcd mov edi, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); edi = (u32)(M32(m_)); }
  /* 004fcbd3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fcbd4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fcbd5 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fcbdau; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fcbd5u); RETCHK(0x4fcbdau, 0x4fcbd5u); LOADALL;
  /* 004fcbda test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcbdc jl 0x4fcbf5 */ if (LT_) goto L_004fcbf5;
  /* 004fcbde lea eax, [ebp - 0x130] */ eax = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fcbe4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fcbe5 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 004fcbe7 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fcbee call 0x4fd720 */ esp -= 4; M32(esp) = 0x4fcbf3u; SAVEALL; F_004fd720(c); ABI_CHECK(0x4fd720u, 0x4fcbeeu); RETCHK(0x4fcbf3u, 0x4fcbeeu); LOADALL;
  /* 004fcbf3 jmp 0x4fcbfe */ goto L_004fcbfe;
L_004fcbf5:;
  /* 004fcbf5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fcbf6 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fcbfbu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fcbf6u); RETCHK(0x4fcbfbu, 0x4fcbf6u); LOADALL;
  /* 004fcbfb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fcbfe:;
  /* 004fcbfe mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004fcc01:;
  /* 004fcc01 mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fcc07 mov eax, 0x6469e8 */ { eax = (u32)(0x6469e8u); }
  /* 004fcc0c call 0x560c00 */ esp -= 4; M32(esp) = 0x4fcc11u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x4fcc0cu); RETCHK(0x4fcc11u, 0x4fcc0cu); LOADALL;
  /* 004fcc11 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcc13 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fcc19 jne 0x4fcb01 */ if (!ZF_) goto L_004fcb01;
L_004fcc1f:;
  /* 004fcc1f mov ecx, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); ecx = (u32)(M32(m_)); }
  /* 004fcc25 mov eax, 0x64fe0c */ { eax = (u32)(0x64fe0cu); }
  /* 004fcc2a call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fcc2fu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fcc2au); RETCHK(0x4fcc2fu, 0x4fcc2au); LOADALL;
  /* 004fcc2f mov edi, eax */ { edi = (u32)(eax); }
  /* 004fcc31 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcc33 je 0x4fcd92 */ if (ZF_) goto L_004fcd92;
  /* 004fcc39 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004fcc3b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fcc3d call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fcc40u; SAVEALL; call_ind(c, t_); RETCHK(0x4fcc40u, 0x4fcc3du); LOADALL; }
  /* 004fcc40 push 0x64fe4c */ { u32 v_ = 0x64fe4cu; esp -= 4; M32(esp) = v_; }
  /* 004fcc45 mov dword ptr [ebp - 0x13c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(eax); }
  /* 004fcc4b call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcc50u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcc4bu); RETCHK(0x4fcc50u, 0x4fcc4bu); LOADALL;
  /* 004fcc50 cmp eax, 0x400 */ { u32 a_ = eax, b_ = 0x400u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fcc55 jge 0x4fcc5c */ if (!LT_) goto L_004fcc5c;
  /* 004fcc57 mov eax, 0x400 */ { eax = (u32)(0x400u); }
L_004fcc5c:;
  /* 004fcc5c lea esi, [ebx + 0x1c] */ esi = (u32)((u32)(ebx + 0x1cu));
  /* 004fcc5f mov dword ptr [ebp - 0x14c], esi */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); M32(m_) = (u32)(esi); }
  /* 004fcc65 call 0x54d100 */ esp -= 4; M32(esp) = 0x4fcc6au; SAVEALL; F_0054d100(c); ABI_CHECK(0x54d100u, 0x4fcc65u); RETCHK(0x4fcc6au, 0x4fcc65u); LOADALL;
  /* 004fcc6a mov eax, 0x64fe00 */ { eax = (u32)(0x64fe00u); }
  /* 004fcc6f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fcc71 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fcc76u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fcc71u); RETCHK(0x4fcc76u, 0x4fcc71u); LOADALL;
  /* 004fcc76 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcc78 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fcc7e je 0x4fcd92 */ if (ZF_) goto L_004fcd92;
L_004fcc84:;
  /* 004fcc84 push 0x3a51b717 */ { u32 v_ = 0x3a51b717u; esp -= 4; M32(esp) = v_; }
  /* 004fcc89 call 0x553380 */ esp -= 4; M32(esp) = 0x4fcc8eu; SAVEALL; F_00553380(c); ABI_CHECK(0x553380u, 0x4fcc89u); RETCHK(0x4fcc8eu, 0x4fcc89u); LOADALL;
  /* 004fcc8e mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fcc94 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fcc96 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fcc99 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fcc9cu; SAVEALL; call_ind(c, t_); RETCHK(0x4fcc9cu, 0x4fcc99u); LOADALL; }
  /* 004fcc9c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fcc9e push 0x645584 */ { u32 v_ = 0x645584u; esp -= 4; M32(esp) = v_; }
  /* 004fcca3 mov dword ptr [ebp - 0x13c], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(ebx); }
  /* 004fcca9 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fccaeu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcca9u); RETCHK(0x4fccaeu, 0x4fcca9u); LOADALL;
  /* 004fccae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fccb0 mov dword ptr [ebp - 0x138], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(eax); }
  /* 004fccb6 je 0x4fcd71 */ if (ZF_) goto L_004fcd71;
  /* 004fccbc push 0x64fe38 */ { u32 v_ = 0x64fe38u; esp -= 4; M32(esp) = v_; }
  /* 004fccc1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fccc3 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fccc8u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fccc3u); RETCHK(0x4fccc8u, 0x4fccc3u); LOADALL;
  /* 004fccc8 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fccca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fcccb mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004fccd0 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fccd5u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fccd0u); RETCHK(0x4fccd5u, 0x4fccd0u); LOADALL;
  /* 004fccd5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fccd7 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fccd9 je 0x4fcd0a */ if (ZF_) goto L_004fcd0a;
  /* 004fccdb cmp edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fccde jne 0x4fccee */ if (!ZF_) goto L_004fccee;
  /* 004fcce0 push 0x64fe28 */ { u32 v_ = 0x64fe28u; esp -= 4; M32(esp) = v_; }
  /* 004fcce5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fcce7 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fccecu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcce7u); RETCHK(0x4fccecu, 0x4fcce7u); LOADALL;
  /* 004fccec jmp 0x4fccf0 */ goto L_004fccf0;
L_004fccee:;
  /* 004fccee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fccf0:;
  /* 004fccf0 mov ecx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); ecx = (u32)(M32(m_)); }
  /* 004fccf6 mov ebx, dword ptr [ebp - 0x14c] */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); ebx = (u32)(M32(m_)); }
  /* 004fccfc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fccfd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fccfe mov eax, edi */ { eax = (u32)(edi); }
  /* 004fcd00 call 0x4fd650 */ esp -= 4; M32(esp) = 0x4fcd05u; SAVEALL; F_004fd650(c); ABI_CHECK(0x4fd650u, 0x4fcd00u); RETCHK(0x4fcd05u, 0x4fcd00u); LOADALL;
  /* 004fcd05 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fcd08 jmp 0x4fcd71 */ goto L_004fcd71;
L_004fcd0a:;
  /* 004fcd0a mov ecx, dword ptr [ebp - 0x148] */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); ecx = (u32)(M32(m_)); }
  /* 004fcd10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fcd11 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fcd12 push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fcd17 lea edx, [ebp - 0x130] */ edx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fcd1d push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fcd22 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fcd23 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fcd28u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fcd23u); RETCHK(0x4fcd28u, 0x4fcd23u); LOADALL;
  /* 004fcd28 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fcd2a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fcd2c call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fcd31u; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fcd2cu); RETCHK(0x4fcd31u, 0x4fcd2cu); LOADALL;
  /* 004fcd31 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fcd33 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fcd36 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcd38 je 0x4fcd71 */ if (ZF_) goto L_004fcd71;
  /* 004fcd3a mov eax, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); eax = (u32)(M32(m_)); }
  /* 004fcd40 mov edi, dword ptr [ebp - 0x14c] */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); edi = (u32)(M32(m_)); }
  /* 004fcd46 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fcd47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fcd48 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fcd4du; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fcd48u); RETCHK(0x4fcd4du, 0x4fcd48u); LOADALL;
  /* 004fcd4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcd4f jl 0x4fcd68 */ if (LT_) goto L_004fcd68;
  /* 004fcd51 lea eax, [ebp - 0x130] */ eax = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fcd57 mov dword ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fcd5e call 0x545230 */ esp -= 4; M32(esp) = 0x4fcd63u; SAVEALL; F_00545230(c); ABI_CHECK(0x545230u, 0x4fcd5eu); RETCHK(0x4fcd63u, 0x4fcd5eu); LOADALL;
  /* 004fcd63 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fcd66 jmp 0x4fcd71 */ goto L_004fcd71;
L_004fcd68:;
  /* 004fcd68 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fcd69 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fcd6eu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fcd69u); RETCHK(0x4fcd6eu, 0x4fcd69u); LOADALL;
  /* 004fcd6e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fcd71:;
  /* 004fcd71 mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fcd77 mov eax, 0x64fe00 */ { eax = (u32)(0x64fe00u); }
  /* 004fcd7c call 0x560c00 */ esp -= 4; M32(esp) = 0x4fcd81u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x4fcd7cu); RETCHK(0x4fcd81u, 0x4fcd7cu); LOADALL;
  /* 004fcd81 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcd83 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fcd89 jne 0x4fcc84 */ if (!ZF_) goto L_004fcc84;
  /* 004fcd8f mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004fcd92:;
  /* 004fcd92 mov ecx, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); ecx = (u32)(M32(m_)); }
  /* 004fcd98 mov eax, 0x64fdf4 */ { eax = (u32)(0x64fdf4u); }
  /* 004fcd9d call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fcda2u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fcd9du); RETCHK(0x4fcda2u, 0x4fcd9du); LOADALL;
  /* 004fcda2 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fcda4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcda6 je 0x4fcf14 */ if (ZF_) goto L_004fcf14;
  /* 004fcdac mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004fcdae mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fcdb0 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fcdb3u; SAVEALL; call_ind(c, t_); RETCHK(0x4fcdb3u, 0x4fcdb0u); LOADALL; }
  /* 004fcdb3 push 0x64fe4c */ { u32 v_ = 0x64fe4cu; esp -= 4; M32(esp) = v_; }
  /* 004fcdb8 mov dword ptr [ebp - 0x13c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(eax); }
  /* 004fcdbe call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcdc3u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcdbeu); RETCHK(0x4fcdc3u, 0x4fcdbeu); LOADALL;
  /* 004fcdc3 cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fcdc8 jge 0x4fcdcf */ if (!LT_) goto L_004fcdcf;
  /* 004fcdca mov eax, 0x100 */ { eax = (u32)(0x100u); }
L_004fcdcf:;
  /* 004fcdcf lea esi, [ebx + 0x28] */ esi = (u32)((u32)(ebx + 0x28u));
  /* 004fcdd2 mov dword ptr [ebp - 0x148], esi */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); M32(m_) = (u32)(esi); }
  /* 004fcdd8 call 0x54d100 */ esp -= 4; M32(esp) = 0x4fcdddu; SAVEALL; F_0054d100(c); ABI_CHECK(0x54d100u, 0x4fcdd8u); RETCHK(0x4fcdddu, 0x4fcdd8u); LOADALL;
  /* 004fcddd mov eax, 0x64fdec */ { eax = (u32)(0x64fdecu); }
  /* 004fcde2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fcde4 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fcde9u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fcde4u); RETCHK(0x4fcde9u, 0x4fcde4u); LOADALL;
  /* 004fcde9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcdeb mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fcdf1 je 0x4fcf14 */ if (ZF_) goto L_004fcf14;
  /* 004fcdf7 jmp 0x4fce00 */ goto L_004fce00;
L_004fce00:;
  /* 004fce00 push 0x3a51b717 */ { u32 v_ = 0x3a51b717u; esp -= 4; M32(esp) = v_; }
  /* 004fce05 call 0x553380 */ esp -= 4; M32(esp) = 0x4fce0au; SAVEALL; F_00553380(c); ABI_CHECK(0x553380u, 0x4fce05u); RETCHK(0x4fce0au, 0x4fce05u); LOADALL;
  /* 004fce0a mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fce10 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fce12 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fce15 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fce18u; SAVEALL; call_ind(c, t_); RETCHK(0x4fce18u, 0x4fce15u); LOADALL; }
  /* 004fce18 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fce1a push 0x645584 */ { u32 v_ = 0x645584u; esp -= 4; M32(esp) = v_; }
  /* 004fce1f mov dword ptr [ebp - 0x13c], edi */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(edi); }
  /* 004fce25 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fce2au; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fce25u); RETCHK(0x4fce2au, 0x4fce25u); LOADALL;
  /* 004fce2a mov esi, eax */ { esi = (u32)(eax); }
  /* 004fce2c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fce2e je 0x4fcef3 */ if (ZF_) goto L_004fcef3;
  /* 004fce34 push 0x64fe38 */ { u32 v_ = 0x64fe38u; esp -= 4; M32(esp) = v_; }
  /* 004fce39 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fce3b call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fce40u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fce3bu); RETCHK(0x4fce40u, 0x4fce3bu); LOADALL;
  /* 004fce40 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fce42 push 0x645588 */ { u32 v_ = 0x645588u; esp -= 4; M32(esp) = v_; }
  /* 004fce47 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fce49 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fce4eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fce49u); RETCHK(0x4fce4eu, 0x4fce49u); LOADALL;
  /* 004fce4e mov dword ptr [ebp - 0x14c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); M32(m_) = (u32)(eax); }
  /* 004fce54 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fce55 mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004fce5a call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fce5fu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fce5au); RETCHK(0x4fce5fu, 0x4fce5au); LOADALL;
  /* 004fce5f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fce61 mov dword ptr [ebp - 0x144], eax */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); M32(m_) = (u32)(eax); }
  /* 004fce67 je 0x4fcea7 */ if (ZF_) goto L_004fcea7;
  /* 004fce69 cmp ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fce6c jne 0x4fce7c */ if (!ZF_) goto L_004fce7c;
  /* 004fce6e push 0x64fe28 */ { u32 v_ = 0x64fe28u; esp -= 4; M32(esp) = v_; }
  /* 004fce73 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fce75 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fce7au; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fce75u); RETCHK(0x4fce7au, 0x4fce75u); LOADALL;
  /* 004fce7a jmp 0x4fce7e */ goto L_004fce7e;
L_004fce7c:;
  /* 004fce7c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fce7e:;
  /* 004fce7e mov ecx, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); ecx = (u32)(M32(m_)); }
  /* 004fce84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fce85 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fce86 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fce88 mov ebx, dword ptr [ebp - 0x148] */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); ebx = (u32)(M32(m_)); }
  /* 004fce8e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fce90 call 0x4fd650 */ esp -= 4; M32(esp) = 0x4fce95u; SAVEALL; F_004fd650(c); ABI_CHECK(0x4fd650u, 0x4fce90u); RETCHK(0x4fce95u, 0x4fce90u); LOADALL;
  /* 004fce95 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fce98 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fce9a je 0x4fcef3 */ if (ZF_) goto L_004fcef3;
  /* 004fce9c mov edx, dword ptr [ebp - 0x14c] */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); edx = (u32)(M32(m_)); }
  /* 004fcea2 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 004fcea5 jmp 0x4fcef3 */ goto L_004fcef3;
L_004fcea7:;
  /* 004fcea7 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fcea9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fceab call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fceb0u; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fceabu); RETCHK(0x4fceb0u, 0x4fceabu); LOADALL;
  /* 004fceb0 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fceb2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fceb5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fceb7 je 0x4fcef3 */ if (ZF_) goto L_004fcef3;
  /* 004fceb9 mov edi, dword ptr [ebp - 0x148] */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); edi = (u32)(M32(m_)); }
  /* 004fcebf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fcec0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fcec1 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fcec6u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fcec1u); RETCHK(0x4fcec6u, 0x4fcec1u); LOADALL;
  /* 004fcec6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcec8 jl 0x4fceea */ if (LT_) goto L_004fceea;
  /* 004fceca mov ecx, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); ecx = (u32)(M32(m_)); }
  /* 004fced0 mov eax, dword ptr [ebp - 0x14c] */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); eax = (u32)(M32(m_)); }
  /* 004fced6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fced7 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004fced9 mov dword ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fcee0 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fcee3 call 0x4fd8e0 */ esp -= 4; M32(esp) = 0x4fcee8u; SAVEALL; F_004fd8e0(c); ABI_CHECK(0x4fd8e0u, 0x4fcee3u); RETCHK(0x4fcee8u, 0x4fcee3u); LOADALL;
  /* 004fcee8 jmp 0x4fcef3 */ goto L_004fcef3;
L_004fceea:;
  /* 004fceea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fceeb call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fcef0u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fceebu); RETCHK(0x4fcef0u, 0x4fceebu); LOADALL;
  /* 004fcef0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fcef3:;
  /* 004fcef3 mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fcef9 mov eax, 0x64fdec */ { eax = (u32)(0x64fdecu); }
  /* 004fcefe call 0x560c00 */ esp -= 4; M32(esp) = 0x4fcf03u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x4fcefeu); RETCHK(0x4fcf03u, 0x4fcefeu); LOADALL;
  /* 004fcf03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcf05 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fcf0b jne 0x4fce00 */ if (!ZF_) goto L_004fce00;
  /* 004fcf11 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004fcf14:;
  /* 004fcf14 mov ecx, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); ecx = (u32)(M32(m_)); }
  /* 004fcf1a mov eax, 0x64fde0 */ { eax = (u32)(0x64fde0u); }
  /* 004fcf1f call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fcf24u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fcf1fu); RETCHK(0x4fcf24u, 0x4fcf1fu); LOADALL;
  /* 004fcf24 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fcf26 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcf28 je 0x4fd0b7 */ if (ZF_) goto L_004fd0b7;
  /* 004fcf2e mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004fcf30 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fcf32 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fcf35u; SAVEALL; call_ind(c, t_); RETCHK(0x4fcf35u, 0x4fcf32u); LOADALL; }
  /* 004fcf35 push 0x64fe4c */ { u32 v_ = 0x64fe4cu; esp -= 4; M32(esp) = v_; }
  /* 004fcf3a mov dword ptr [ebp - 0x13c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(eax); }
  /* 004fcf40 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcf45u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcf40u); RETCHK(0x4fcf45u, 0x4fcf40u); LOADALL;
  /* 004fcf45 cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fcf4a jge 0x4fcf51 */ if (!LT_) goto L_004fcf51;
  /* 004fcf4c mov eax, 0x100 */ { eax = (u32)(0x100u); }
L_004fcf51:;
  /* 004fcf51 add ebx, 0x34 */ { u32 a_ = ebx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fcf54 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004fcf56 mov dword ptr [ebp - 0x148], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); M32(m_) = (u32)(ebx); }
  /* 004fcf5c call 0x54d100 */ esp -= 4; M32(esp) = 0x4fcf61u; SAVEALL; F_0054d100(c); ABI_CHECK(0x54d100u, 0x4fcf5cu); RETCHK(0x4fcf61u, 0x4fcf5cu); LOADALL;
  /* 004fcf61 mov eax, 0x64fdd8 */ { eax = (u32)(0x64fdd8u); }
  /* 004fcf66 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fcf68 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fcf6du; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fcf68u); RETCHK(0x4fcf6du, 0x4fcf68u); LOADALL;
  /* 004fcf6d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcf6f mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fcf75 je 0x4fd0b7 */ if (ZF_) goto L_004fd0b7;
  /* 004fcf7b jmp 0x4fcf83 */ goto L_004fcf83;
L_004fcf7d:;
  /* 004fcf7d mov eax, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); eax = (u32)(M32(m_)); }
L_004fcf83:;
  /* 004fcf83 push 0x3a51b717 */ { u32 v_ = 0x3a51b717u; esp -= 4; M32(esp) = v_; }
  /* 004fcf88 call 0x553380 */ esp -= 4; M32(esp) = 0x4fcf8du; SAVEALL; F_00553380(c); ABI_CHECK(0x553380u, 0x4fcf88u); RETCHK(0x4fcf8du, 0x4fcf88u); LOADALL;
  /* 004fcf8d mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004fcf8f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fcf92 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fcf94 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fcf97u; SAVEALL; call_ind(c, t_); RETCHK(0x4fcf97u, 0x4fcf94u); LOADALL; }
  /* 004fcf97 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fcf99 push 0x645584 */ { u32 v_ = 0x645584u; esp -= 4; M32(esp) = v_; }
  /* 004fcf9e mov dword ptr [ebp - 0x13c], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(ebx); }
  /* 004fcfa4 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcfa9u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcfa4u); RETCHK(0x4fcfa9u, 0x4fcfa4u); LOADALL;
  /* 004fcfa9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcfab mov dword ptr [ebp - 0x138], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(eax); }
  /* 004fcfb1 je 0x4fd099 */ if (ZF_) goto L_004fd099;
  /* 004fcfb7 push 0x64fe38 */ { u32 v_ = 0x64fe38u; esp -= 4; M32(esp) = v_; }
  /* 004fcfbc mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fcfbe call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcfc3u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcfbeu); RETCHK(0x4fcfc3u, 0x4fcfbeu); LOADALL;
  /* 004fcfc3 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fcfc5 push 0x64fdcc */ { u32 v_ = 0x64fdccu; esp -= 4; M32(esp) = v_; }
  /* 004fcfca mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fcfcc call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcfd1u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcfccu); RETCHK(0x4fcfd1u, 0x4fcfccu); LOADALL;
  /* 004fcfd1 mov dword ptr [ebp - 0x14c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); M32(m_) = (u32)(eax); }
  /* 004fcfd7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fcfd8 mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004fcfdd call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fcfe2u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fcfddu); RETCHK(0x4fcfe2u, 0x4fcfddu); LOADALL;
  /* 004fcfe2 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fcfe4 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fcfe6 je 0x4fd028 */ if (ZF_) goto L_004fd028;
  /* 004fcfe8 cmp edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fcfeb jne 0x4fcffb */ if (!ZF_) goto L_004fcffb;
  /* 004fcfed push 0x64fe28 */ { u32 v_ = 0x64fe28u; esp -= 4; M32(esp) = v_; }
  /* 004fcff2 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fcff4 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fcff9u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fcff4u); RETCHK(0x4fcff9u, 0x4fcff4u); LOADALL;
  /* 004fcff9 jmp 0x4fcffd */ goto L_004fcffd;
L_004fcffb:;
  /* 004fcffb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fcffd:;
  /* 004fcffd mov ecx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); ecx = (u32)(M32(m_)); }
  /* 004fd003 mov ebx, dword ptr [ebp - 0x148] */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); ebx = (u32)(M32(m_)); }
  /* 004fd009 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd00a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd00b mov eax, edi */ { eax = (u32)(edi); }
  /* 004fd00d call 0x4fd650 */ esp -= 4; M32(esp) = 0x4fd012u; SAVEALL; F_004fd650(c); ABI_CHECK(0x4fd650u, 0x4fd00du); RETCHK(0x4fd012u, 0x4fd00du); LOADALL;
  /* 004fd012 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd015 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd017 je 0x4fd099 */ if (ZF_) goto L_004fd099;
  /* 004fd01d mov ecx, dword ptr [ebp - 0x14c] */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); ecx = (u32)(M32(m_)); }
  /* 004fd023 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004fd026 jmp 0x4fd099 */ goto L_004fd099;
L_004fd028:;
  /* 004fd028 mov edx, dword ptr [ebp - 0x158] */ { const u32 m_ = (u32)(ebp + 0xfffffea8u); edx = (u32)(M32(m_)); }
  /* 004fd02e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd02f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd030 push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fd035 lea eax, [ebp - 0x130] */ eax = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fd03b push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fd040 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd041 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fd046u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fd041u); RETCHK(0x4fd046u, 0x4fd041u); LOADALL;
  /* 004fd046 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fd048 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fd04a call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fd04fu; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fd04au); RETCHK(0x4fd04fu, 0x4fd04au); LOADALL;
  /* 004fd04f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fd051 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd054 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd056 je 0x4fd099 */ if (ZF_) goto L_004fd099;
  /* 004fd058 mov ecx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); ecx = (u32)(M32(m_)); }
  /* 004fd05e mov edi, dword ptr [ebp - 0x148] */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); edi = (u32)(M32(m_)); }
  /* 004fd064 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd065 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fd066 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fd06bu; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fd066u); RETCHK(0x4fd06bu, 0x4fd066u); LOADALL;
  /* 004fd06b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd06d jl 0x4fd090 */ if (LT_) goto L_004fd090;
  /* 004fd06f lea edx, [ebp - 0x130] */ edx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fd075 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd076 mov dword ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fd07d call 0x4fd950 */ esp -= 4; M32(esp) = 0x4fd082u; SAVEALL; F_004fd950(c); ABI_CHECK(0x4fd950u, 0x4fd07du); RETCHK(0x4fd082u, 0x4fd07du); LOADALL;
  /* 004fd082 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fd085 mov eax, dword ptr [ebp - 0x14c] */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); eax = (u32)(M32(m_)); }
  /* 004fd08b mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fd08e jmp 0x4fd099 */ goto L_004fd099;
L_004fd090:;
  /* 004fd090 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd091 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fd096u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fd091u); RETCHK(0x4fd096u, 0x4fd091u); LOADALL;
  /* 004fd096 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd099:;
  /* 004fd099 mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fd09f mov eax, 0x64fdd8 */ { eax = (u32)(0x64fdd8u); }
  /* 004fd0a4 call 0x560c00 */ esp -= 4; M32(esp) = 0x4fd0a9u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x4fd0a4u); RETCHK(0x4fd0a9u, 0x4fd0a4u); LOADALL;
  /* 004fd0a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd0ab mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fd0b1 jne 0x4fcf7d */ if (!ZF_) goto L_004fcf7d;
L_004fd0b7:;
  /* 004fd0b7 mov ecx, dword ptr [ebp - 0x154] */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); ecx = (u32)(M32(m_)); }
  /* 004fd0bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fd0be call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fd0c3u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fd0beu); RETCHK(0x4fd0c3u, 0x4fd0beu); LOADALL;
  /* 004fd0c3 mov ecx, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); ecx = (u32)(M32(m_)); }
  /* 004fd0c9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd0cc mov eax, 0x64861c */ { eax = (u32)(0x64861cu); }
  /* 004fd0d1 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fd0d6u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fd0d1u); RETCHK(0x4fd0d6u, 0x4fd0d1u); LOADALL;
  /* 004fd0d6 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fd0d8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd0da je 0x4fd37c */ if (ZF_) goto L_004fd37c;
  /* 004fd0e0 mov eax, dword ptr [ebp - 0x13c] */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); eax = (u32)(M32(m_)); }
  /* 004fd0e6 push 0x64fe4c */ { u32 v_ = 0x64fe4cu; esp -= 4; M32(esp) = v_; }
  /* 004fd0eb call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fd0f0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fd0ebu); RETCHK(0x4fd0f0u, 0x4fd0ebu); LOADALL;
  /* 004fd0f0 cmp eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fd0f5 jge 0x4fd0fc */ if (!LT_) goto L_004fd0fc;
  /* 004fd0f7 mov eax, 0x80 */ { eax = (u32)(0x80u); }
L_004fd0fc:;
  /* 004fd0fc mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fd0ff add esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fd102 mov dword ptr [ebp - 0x140], esi */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); M32(m_) = (u32)(esi); }
  /* 004fd108 call 0x54d100 */ esp -= 4; M32(esp) = 0x4fd10du; SAVEALL; F_0054d100(c); ABI_CHECK(0x54d100u, 0x4fd108u); RETCHK(0x4fd10du, 0x4fd108u); LOADALL;
  /* 004fd10d mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004fd10f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fd111 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fd114u; SAVEALL; call_ind(c, t_); RETCHK(0x4fd114u, 0x4fd111u); LOADALL; }
  /* 004fd114 mov eax, 0x64fdc4 */ { eax = (u32)(0x64fdc4u); }
  /* 004fd119 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fd11b call 0x560ba0 */ esp -= 4; M32(esp) = 0x4fd120u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4fd11bu); RETCHK(0x4fd120u, 0x4fd11bu); LOADALL;
  /* 004fd120 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd122 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fd128 je 0x4fd37c */ if (ZF_) goto L_004fd37c;
  /* 004fd12e jmp 0x4fd136 */ goto L_004fd136;
L_004fd130:;
  /* 004fd130 mov eax, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); eax = (u32)(M32(m_)); }
L_004fd136:;
  /* 004fd136 push 0x3a51b717 */ { u32 v_ = 0x3a51b717u; esp -= 4; M32(esp) = v_; }
  /* 004fd13b call 0x553380 */ esp -= 4; M32(esp) = 0x4fd140u; SAVEALL; F_00553380(c); ABI_CHECK(0x553380u, 0x4fd13bu); RETCHK(0x4fd140u, 0x4fd13bu); LOADALL;
  /* 004fd140 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004fd142 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd145 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fd147 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fd14au; SAVEALL; call_ind(c, t_); RETCHK(0x4fd14au, 0x4fd147u); LOADALL; }
  /* 004fd14a push 0x645584 */ { u32 v_ = 0x645584u; esp -= 4; M32(esp) = v_; }
  /* 004fd14f mov edi, eax */ { edi = (u32)(eax); }
  /* 004fd151 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fd156u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fd151u); RETCHK(0x4fd156u, 0x4fd151u); LOADALL;
  /* 004fd156 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd158 mov dword ptr [ebp - 0x138], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(eax); }
  /* 004fd15e je 0x4fd35e */ if (ZF_) goto L_004fd35e;
  /* 004fd164 push 0x64fe38 */ { u32 v_ = 0x64fe38u; esp -= 4; M32(esp) = v_; }
  /* 004fd169 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fd16b call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fd170u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fd16bu); RETCHK(0x4fd170u, 0x4fd16bu); LOADALL;
  /* 004fd170 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd172 push 0x645588 */ { u32 v_ = 0x645588u; esp -= 4; M32(esp) = v_; }
  /* 004fd177 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fd179 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fd17eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fd179u); RETCHK(0x4fd17eu, 0x4fd179u); LOADALL;
  /* 004fd17e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fd180 push 0x64fdcc */ { u32 v_ = 0x64fdccu; esp -= 4; M32(esp) = v_; }
  /* 004fd185 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fd187 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fd18cu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fd187u); RETCHK(0x4fd18cu, 0x4fd187u); LOADALL;
  /* 004fd18c mov dword ptr [ebp - 0x148], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); M32(m_) = (u32)(eax); }
  /* 004fd192 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd193 mov eax, 0x64f1f4 */ { eax = (u32)(0x64f1f4u); }
  /* 004fd198 call 0x560ed0 */ esp -= 4; M32(esp) = 0x4fd19du; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4fd198u); RETCHK(0x4fd19du, 0x4fd198u); LOADALL;
  /* 004fd19d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd19f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fd1a1 mov dword ptr [ebp - 0x144], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); M32(m_) = (u32)(ecx); }
  /* 004fd1a7 je 0x4fd26c */ if (ZF_) goto L_004fd26c;
  /* 004fd1ad sub ebx, 0 */ { u32 a_ = ebx, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fd1b0 je 0x4fd218 */ if (ZF_) goto L_004fd218;
  /* 004fd1b2 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd1b3 jne 0x4fd35e */ if (!ZF_) goto L_004fd35e;
  /* 004fd1b9 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fd1bc jne 0x4fd1d2 */ if (!ZF_) goto L_004fd1d2;
  /* 004fd1be push 0x64fe28 */ { u32 v_ = 0x64fe28u; esp -= 4; M32(esp) = v_; }
  /* 004fd1c3 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fd1c5 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fd1cau; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fd1c5u); RETCHK(0x4fd1cau, 0x4fd1c5u); LOADALL;
  /* 004fd1ca mov ecx, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); ecx = (u32)(M32(m_)); }
  /* 004fd1d0 jmp 0x4fd1d4 */ goto L_004fd1d4;
L_004fd1d2:;
  /* 004fd1d2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fd1d4:;
  /* 004fd1d4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004fd1d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd1d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fd1d9 mov ecx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); ecx = (u32)(M32(m_)); }
  /* 004fd1df add ebx, 0x34 */ { u32 a_ = ebx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fd1e2 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fd1e4 call 0x4fd650 */ esp -= 4; M32(esp) = 0x4fd1e9u; SAVEALL; F_004fd650(c); ABI_CHECK(0x4fd650u, 0x4fd1e4u); RETCHK(0x4fd1e9u, 0x4fd1e4u); LOADALL;
  /* 004fd1e9 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd1eb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd1ee test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd1f0 je 0x4fd35e */ if (ZF_) goto L_004fd35e;
  /* 004fd1f6 mov eax, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); eax = (u32)(M32(m_)); }
  /* 004fd1fc mov edi, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); edi = (u32)(M32(m_)); }
  /* 004fd202 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004fd204 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd205 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fd20au; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fd205u); RETCHK(0x4fd20au, 0x4fd205u); LOADALL;
  /* 004fd20a mov ecx, dword ptr [ebp - 0x148] */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); ecx = (u32)(M32(m_)); }
  /* 004fd210 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004fd213 jmp 0x4fd35e */ goto L_004fd35e;
L_004fd218:;
  /* 004fd218 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fd21b jne 0x4fd231 */ if (!ZF_) goto L_004fd231;
  /* 004fd21d push 0x64fe28 */ { u32 v_ = 0x64fe28u; esp -= 4; M32(esp) = v_; }
  /* 004fd222 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fd224 call 0x560fd0 */ esp -= 4; M32(esp) = 0x4fd229u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x4fd224u); RETCHK(0x4fd229u, 0x4fd224u); LOADALL;
  /* 004fd229 mov ecx, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); ecx = (u32)(M32(m_)); }
  /* 004fd22f jmp 0x4fd233 */ goto L_004fd233;
L_004fd231:;
  /* 004fd231 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fd233:;
  /* 004fd233 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004fd236 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd237 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fd238 mov ecx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); ecx = (u32)(M32(m_)); }
  /* 004fd23e add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fd241 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fd243 call 0x4fd650 */ esp -= 4; M32(esp) = 0x4fd248u; SAVEALL; F_004fd650(c); ABI_CHECK(0x4fd650u, 0x4fd243u); RETCHK(0x4fd248u, 0x4fd243u); LOADALL;
  /* 004fd248 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd24b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd24d je 0x4fd35e */ if (ZF_) goto L_004fd35e;
  /* 004fd253 mov edx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); edx = (u32)(M32(m_)); }
  /* 004fd259 mov edi, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); edi = (u32)(M32(m_)); }
  /* 004fd25f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fd261 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd262 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fd267u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fd262u); RETCHK(0x4fd267u, 0x4fd262u); LOADALL;
  /* 004fd267 jmp 0x4fd35e */ goto L_004fd35e;
L_004fd26c:;
  /* 004fd26c mov eax, dword ptr [ebp - 0x158] */ { const u32 m_ = (u32)(ebp + 0xfffffea8u); eax = (u32)(M32(m_)); }
  /* 004fd272 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fd273 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd274 push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fd279 lea ecx, [ebp - 0x130] */ ecx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fd27f push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fd284 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fd285 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fd28au; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fd285u); RETCHK(0x4fd28au, 0x4fd285u); LOADALL;
  /* 004fd28a add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd28d sub ebx, 0 */ { u32 a_ = ebx, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fd290 je 0x4fd307 */ if (ZF_) goto L_004fd307;
  /* 004fd292 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd293 jne 0x4fd35e */ if (!ZF_) goto L_004fd35e;
  /* 004fd299 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fd29b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fd29d call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fd2a2u; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fd29du); RETCHK(0x4fd2a2u, 0x4fd29du); LOADALL;
  /* 004fd2a2 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fd2a4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd2a7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd2a9 je 0x4fd35e */ if (ZF_) goto L_004fd35e;
  /* 004fd2af mov esi, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); esi = (u32)(M32(m_)); }
  /* 004fd2b5 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fd2b8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd2b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd2ba add edi, 0x34 */ { u32 a_ = edi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fd2bd call 0x54d170 */ esp -= 4; M32(esp) = 0x4fd2c2u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fd2bdu); RETCHK(0x4fd2c2u, 0x4fd2bdu); LOADALL;
  /* 004fd2c2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd2c4 jl 0x4fd304 */ if (LT_) goto L_004fd304;
  /* 004fd2c6 lea edx, [ebp - 0x130] */ edx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fd2cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd2cd mov dword ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fd2d4 call 0x4fd950 */ esp -= 4; M32(esp) = 0x4fd2d9u; SAVEALL; F_004fd950(c); ABI_CHECK(0x4fd950u, 0x4fd2d4u); RETCHK(0x4fd2d9u, 0x4fd2d4u); LOADALL;
  /* 004fd2d9 mov ecx, dword ptr [ebp - 0x154] */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); ecx = (u32)(M32(m_)); }
  /* 004fd2df mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fd2e2 mov eax, dword ptr [ebp - 0x148] */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); eax = (u32)(M32(m_)); }
  /* 004fd2e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fd2e9 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fd2ec call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fd2f1u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fd2ecu); RETCHK(0x4fd2f1u, 0x4fd2ecu); LOADALL;
  /* 004fd2f1 mov edi, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); edi = (u32)(M32(m_)); }
  /* 004fd2f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd2fa push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004fd2fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd2fd call 0x54d170 */ esp -= 4; M32(esp) = 0x4fd302u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fd2fdu); RETCHK(0x4fd302u, 0x4fd2fdu); LOADALL;
  /* 004fd302 jmp 0x4fd35e */ goto L_004fd35e;
L_004fd304:;
  /* 004fd304 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd305 jmp 0x4fd356 */ goto L_004fd356;
L_004fd307:;
  /* 004fd307 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fd309 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fd30b call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fd310u; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fd30bu); RETCHK(0x4fd310u, 0x4fd30bu); LOADALL;
  /* 004fd310 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd312 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd315 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd317 je 0x4fd35e */ if (ZF_) goto L_004fd35e;
  /* 004fd319 mov ebx, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); ebx = (u32)(M32(m_)); }
  /* 004fd31f mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fd322 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd323 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd324 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fd327 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fd32cu; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fd327u); RETCHK(0x4fd32cu, 0x4fd327u); LOADALL;
  /* 004fd32c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd32e jl 0x4fd355 */ if (LT_) goto L_004fd355;
  /* 004fd330 lea eax, [ebp - 0x130] */ eax = (u32)((u32)(ebp + 0xfffffed0u));
  /* 004fd336 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fd33d call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fd342u; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fd33du); RETCHK(0x4fd342u, 0x4fd33du); LOADALL;
  /* 004fd342 mov edi, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); edi = (u32)(M32(m_)); }
  /* 004fd348 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fd34a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd34b mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fd34e call 0x54d170 */ esp -= 4; M32(esp) = 0x4fd353u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fd34eu); RETCHK(0x4fd353u, 0x4fd34eu); LOADALL;
  /* 004fd353 jmp 0x4fd35e */ goto L_004fd35e;
L_004fd355:;
  /* 004fd355 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_004fd356:;
  /* 004fd356 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fd35bu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fd356u); RETCHK(0x4fd35bu, 0x4fd356u); LOADALL;
  /* 004fd35b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd35e:;
  /* 004fd35e mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 004fd364 mov eax, 0x64fdc4 */ { eax = (u32)(0x64fdc4u); }
  /* 004fd369 call 0x560c00 */ esp -= 4; M32(esp) = 0x4fd36eu; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x4fd369u); RETCHK(0x4fd36eu, 0x4fd369u); LOADALL;
  /* 004fd36e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd370 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 004fd376 jne 0x4fd130 */ if (!ZF_) goto L_004fd130;
L_004fd37c:;
  /* 004fd37c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004fd37e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd37f call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fd384u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fd37fu); RETCHK(0x4fd384u, 0x4fd37fu); LOADALL;
  /* 004fd384 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd385 call 0x5ac530 */ esp -= 4; M32(esp) = 0x4fd38au; SAVEALL; F_005ac530(c); ABI_CHECK(0x5ac530u, 0x4fd385u); RETCHK(0x4fd38au, 0x4fd385u); LOADALL;
  /* 004fd38a push 0x64f1d8 */ { u32 v_ = 0x64f1d8u; esp -= 4; M32(esp) = v_; }
  /* 004fd38f push 0x64fda4 */ { u32 v_ = 0x64fda4u; esp -= 4; M32(esp) = v_; }
  /* 004fd394 call 0x5fea9a */ esp -= 4; M32(esp) = 0x4fd399u; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x4fd394u); RETCHK(0x4fd399u, 0x4fd394u); LOADALL;
  /* 004fd399 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd39b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd39e cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fd3a0 je 0x4fd416 */ if (ZF_) goto L_004fd416;
  /* 004fd3a2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd3a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd3a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd3a5 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fd3aau; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fd3a5u); RETCHK(0x4fd3aau, 0x4fd3a5u); LOADALL;
  /* 004fd3aa push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004fd3ac push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd3ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd3ae call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fd3b3u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fd3aeu); RETCHK(0x4fd3b3u, 0x4fd3aeu); LOADALL;
  /* 004fd3b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd3b4 call 0x5feaa6 */ esp -= 4; M32(esp) = 0x4fd3b9u; SAVEALL; F_005feaa6(c); ABI_CHECK(0x5feaa6u, 0x4fd3b4u); RETCHK(0x4fd3b9u, 0x4fd3b4u); LOADALL;
  /* 004fd3b9 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd3bc mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 004fd3c3 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 004fd3c6 mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fd3c9 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 004fd3cb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004fd3ce push 0x64fd9c */ { u32 v_ = 0x64fd9cu; esp -= 4; M32(esp) = v_; }
  /* 004fd3d3 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fd3d6 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004fd3d9 call 0x404420 */ esp -= 4; M32(esp) = 0x4fd3deu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4fd3d9u); RETCHK(0x4fd3deu, 0x4fd3d9u); LOADALL;
  /* 004fd3de call 0x41b490 */ esp -= 4; M32(esp) = 0x4fd3e3u; SAVEALL; F_0041b490(c); ABI_CHECK(0x41b490u, 0x4fd3deu); RETCHK(0x4fd3e3u, 0x4fd3deu); LOADALL;
  /* 004fd3e3 lea edi, [ebp - 0x30] */ edi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fd3e6 call 0x41b7b0 */ esp -= 4; M32(esp) = 0x4fd3ebu; SAVEALL; F_0041b7b0(c); ABI_CHECK(0x41b7b0u, 0x4fd3e6u); RETCHK(0x4fd3ebu, 0x4fd3e6u); LOADALL;
  /* 004fd3eb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fd3ed jne 0x4fd3fd */ if (!ZF_) goto L_004fd3fd;
  /* 004fd3ef mov byte ptr [0x7a6cf7], 1 */ { const u32 m_ = (u32)(0x7a6cf7u); M8(m_) = (u8)(0x1u); }
  /* 004fd3f6 mov byte ptr [0x7a6cf8], 1 */ { const u32 m_ = (u32)(0x7a6cf8u); M8(m_) = (u8)(0x1u); }
L_004fd3fd:;
  /* 004fd3fd mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004fd404 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fd408 jb 0x4fd416 */ if (CF_) goto L_004fd416;
  /* 004fd40a mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 004fd40d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd40e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fd413u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fd40eu); RETCHK(0x4fd413u, 0x4fd40eu); LOADALL;
  /* 004fd413 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd416:;
  /* 004fd416 push 0x64f1d8 */ { u32 v_ = 0x64f1d8u; esp -= 4; M32(esp) = v_; }
  /* 004fd41b push 0x64fd7c */ { u32 v_ = 0x64fd7cu; esp -= 4; M32(esp) = v_; }
  /* 004fd420 call 0x5fea9a */ esp -= 4; M32(esp) = 0x4fd425u; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x4fd420u); RETCHK(0x4fd425u, 0x4fd420u); LOADALL;
  /* 004fd425 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd427 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd42a cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fd42c je 0x4fd4a0 */ if (ZF_) goto L_004fd4a0;
  /* 004fd42e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd42f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd430 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd431 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fd436u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fd431u); RETCHK(0x4fd436u, 0x4fd431u); LOADALL;
  /* 004fd436 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004fd438 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd439 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd43a call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fd43fu; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fd43au); RETCHK(0x4fd43fu, 0x4fd43au); LOADALL;
  /* 004fd43f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd440 call 0x5feaa6 */ esp -= 4; M32(esp) = 0x4fd445u; SAVEALL; F_005feaa6(c); ABI_CHECK(0x5feaa6u, 0x4fd440u); RETCHK(0x4fd445u, 0x4fd440u); LOADALL;
  /* 004fd445 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd448 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 004fd44f mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 004fd452 mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 004fd456 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 004fd458 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 004fd45f push 0x64fd74 */ { u32 v_ = 0x64fd74u; esp -= 4; M32(esp) = v_; }
  /* 004fd464 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fd467 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004fd46a call 0x404420 */ esp -= 4; M32(esp) = 0x4fd46fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4fd46au); RETCHK(0x4fd46fu, 0x4fd46au); LOADALL;
  /* 004fd46f call 0x41b490 */ esp -= 4; M32(esp) = 0x4fd474u; SAVEALL; F_0041b490(c); ABI_CHECK(0x41b490u, 0x4fd46fu); RETCHK(0x4fd474u, 0x4fd46fu); LOADALL;
  /* 004fd474 lea edi, [ebp - 0x30] */ edi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fd477 call 0x41b7b0 */ esp -= 4; M32(esp) = 0x4fd47cu; SAVEALL; F_0041b7b0(c); ABI_CHECK(0x41b7b0u, 0x4fd477u); RETCHK(0x4fd47cu, 0x4fd477u); LOADALL;
  /* 004fd47c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fd47e jne 0x4fd48e */ if (!ZF_) goto L_004fd48e;
  /* 004fd480 mov byte ptr [0x7a6cf7], 1 */ { const u32 m_ = (u32)(0x7a6cf7u); M8(m_) = (u8)(0x1u); }
  /* 004fd487 mov byte ptr [0x7a6cf8], 1 */ { const u32 m_ = (u32)(0x7a6cf8u); M8(m_) = (u8)(0x1u); }
L_004fd48e:;
  /* 004fd48e cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fd492 jb 0x4fd4a0 */ if (CF_) goto L_004fd4a0;
  /* 004fd494 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 004fd497 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd498 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fd49du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fd498u); RETCHK(0x4fd49du, 0x4fd498u); LOADALL;
  /* 004fd49d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd4a0:;
  /* 004fd4a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fd4a1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd4a2 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004fd4a7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_004fd4a8:;
  /* 004fd4a8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fd4ab mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fd4b2 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004fd4b5 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fd4bau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fd4b5u); RETCHK(0x4fd4bau, 0x4fd4b5u); LOADALL;
  /* 004fd4ba mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fd4bc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd4bd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fd4c0(CPU *c) {
  NATIVE_HOOK(0x4fd4c0u) REGS; LOADALL;
L_004fd4c0:;
  /* 004fd4c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fd4c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fd4c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fd4c5 push 0x61b378 */ { u32 v_ = 0x61b378u; esp -= 4; M32(esp) = v_; }
  /* 004fd4ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fd4d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd4d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fd4d8 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd4db push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd4dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd4dd mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 004fd4df call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fd4e4u; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fd4dfu); RETCHK(0x4fd4e4u, 0x4fd4dfu); LOADALL;
  /* 004fd4e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd4e5 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004fd4e8 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fd4edu; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fd4e8u); RETCHK(0x4fd4edu, 0x4fd4e8u); LOADALL;
  /* 004fd4ed add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd4f0 lea esi, [edi + 0x40] */ esi = (u32)((u32)(edi + 0x40u));
  /* 004fd4f3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fd4fa call 0x54d140 */ esp -= 4; M32(esp) = 0x4fd4ffu; SAVEALL; F_0054d140(c); ABI_CHECK(0x54d140u, 0x4fd4fau); RETCHK(0x4fd4ffu, 0x4fd4fau); LOADALL;
  /* 004fd4ff mov esi, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); esi = (u32)(M32(m_)); }
  /* 004fd502 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd503 js 0x4fd52b */ if (SF_) goto L_004fd52b;
L_004fd505:;
  /* 004fd505 mov eax, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004fd508 mov ebx, dword ptr [eax + esi*8 + 4] */ { const u32 m_ = (u32)(eax + esi * 8u + 0x4u); ebx = (u32)(M32(m_)); }
  /* 004fd50c mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fd50f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd511 jne 0x4fd51f */ if (!ZF_) goto L_004fd51f;
  /* 004fd513 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fd516 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd518 je 0x4fd51f */ if (ZF_) goto L_004fd51f;
  /* 004fd51a call 0x4fda50 */ esp -= 4; M32(esp) = 0x4fd51fu; SAVEALL; F_004fda50(c); ABI_CHECK(0x4fda50u, 0x4fd51au); RETCHK(0x4fd51fu, 0x4fd51au); LOADALL;
L_004fd51f:;
  /* 004fd51f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd520 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fd525u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fd520u); RETCHK(0x4fd525u, 0x4fd520u); LOADALL;
  /* 004fd525 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd528 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd529 jns 0x4fd505 */ if (!SF_) goto L_004fd505;
L_004fd52b:;
  /* 004fd52b lea esi, [edi + 0x34] */ esi = (u32)((u32)(edi + 0x34u));
  /* 004fd52e call 0x54d140 */ esp -= 4; M32(esp) = 0x4fd533u; SAVEALL; F_0054d140(c); ABI_CHECK(0x54d140u, 0x4fd52eu); RETCHK(0x4fd533u, 0x4fd52eu); LOADALL;
  /* 004fd533 mov ebx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ebx = (u32)(M32(m_)); }
  /* 004fd536 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd537 js 0x4fd568 */ if (SF_) goto L_004fd568;
  /* 004fd539 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004fd540:;
  /* 004fd540 mov ecx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 004fd543 mov eax, dword ptr [ecx + ebx*8 + 4] */ { const u32 m_ = (u32)(ecx + ebx * 8u + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fd547 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fd54a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd54c mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004fd54f jne 0x4fd55c */ if (!ZF_) goto L_004fd55c;
  /* 004fd551 lea esi, [eax + 0x10] */ esi = (u32)((u32)(eax + 0x10u));
  /* 004fd554 call 0x4fda30 */ esp -= 4; M32(esp) = 0x4fd559u; SAVEALL; F_004fda30(c); ABI_CHECK(0x4fda30u, 0x4fd554u); RETCHK(0x4fd559u, 0x4fd554u); LOADALL;
  /* 004fd559 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
L_004fd55c:;
  /* 004fd55c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd55d call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fd562u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fd55du); RETCHK(0x4fd562u, 0x4fd55du); LOADALL;
  /* 004fd562 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd565 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd566 jns 0x4fd540 */ if (!SF_) goto L_004fd540;
L_004fd568:;
  /* 004fd568 lea esi, [edi + 0x28] */ esi = (u32)((u32)(edi + 0x28u));
  /* 004fd56b call 0x54d140 */ esp -= 4; M32(esp) = 0x4fd570u; SAVEALL; F_0054d140(c); ABI_CHECK(0x54d140u, 0x4fd56bu); RETCHK(0x4fd570u, 0x4fd56bu); LOADALL;
  /* 004fd570 mov ebx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 004fd573 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd574 js 0x4fd5a0 */ if (SF_) goto L_004fd5a0;
L_004fd576:;
  /* 004fd576 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 004fd579 mov esi, dword ptr [edx + ebx*8 + 4] */ { const u32 m_ = (u32)(edx + ebx * 8u + 0x4u); esi = (u32)(M32(m_)); }
  /* 004fd57d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fd580 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd582 jne 0x4fd594 */ if (!ZF_) goto L_004fd594;
  /* 004fd584 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fd587 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd589 je 0x4fd594 */ if (ZF_) goto L_004fd594;
  /* 004fd58b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd58c call 0x5e81a0 */ esp -= 4; M32(esp) = 0x4fd591u; SAVEALL; F_005e81a0(c); ABI_CHECK(0x5e81a0u, 0x4fd58cu); RETCHK(0x4fd591u, 0x4fd58cu); LOADALL;
  /* 004fd591 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd594:;
  /* 004fd594 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd595 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fd59au; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fd595u); RETCHK(0x4fd59au, 0x4fd595u); LOADALL;
  /* 004fd59a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd59d dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd59e jns 0x4fd576 */ if (!SF_) goto L_004fd576;
L_004fd5a0:;
  /* 004fd5a0 lea esi, [edi + 0x1c] */ esi = (u32)((u32)(edi + 0x1cu));
  /* 004fd5a3 call 0x54d140 */ esp -= 4; M32(esp) = 0x4fd5a8u; SAVEALL; F_0054d140(c); ABI_CHECK(0x54d140u, 0x4fd5a3u); RETCHK(0x4fd5a8u, 0x4fd5a3u); LOADALL;
  /* 004fd5a8 mov ebx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 004fd5ab dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd5ac js 0x4fd5d2 */ if (SF_) goto L_004fd5d2;
  /* 004fd5ae mov edi, edi */ { edi = (u32)(edi); }
L_004fd5b0:;
  /* 004fd5b0 mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004fd5b3 mov esi, dword ptr [eax + ebx*8 + 4] */ { const u32 m_ = (u32)(eax + ebx * 8u + 0x4u); esi = (u32)(M32(m_)); }
  /* 004fd5b7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fd5ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd5bc jne 0x4fd5c6 */ if (!ZF_) goto L_004fd5c6;
  /* 004fd5be lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
  /* 004fd5c1 call 0x4fd9d0 */ esp -= 4; M32(esp) = 0x4fd5c6u; SAVEALL; F_004fd9d0(c); ABI_CHECK(0x4fd9d0u, 0x4fd5c1u); RETCHK(0x4fd5c6u, 0x4fd5c1u); LOADALL;
L_004fd5c6:;
  /* 004fd5c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd5c7 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fd5ccu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fd5c7u); RETCHK(0x4fd5ccu, 0x4fd5c7u); LOADALL;
  /* 004fd5cc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd5cf dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd5d0 jns 0x4fd5b0 */ if (!SF_) goto L_004fd5b0;
L_004fd5d2:;
  /* 004fd5d2 lea esi, [edi + 0x10] */ esi = (u32)((u32)(edi + 0x10u));
  /* 004fd5d5 call 0x54d140 */ esp -= 4; M32(esp) = 0x4fd5dau; SAVEALL; F_0054d140(c); ABI_CHECK(0x54d140u, 0x4fd5d5u); RETCHK(0x4fd5dau, 0x4fd5d5u); LOADALL;
  /* 004fd5da mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 004fd5dd dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd5de js 0x4fd60a */ if (SF_) goto L_004fd60a;
L_004fd5e0:;
  /* 004fd5e0 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fd5e3 mov esi, dword ptr [ecx + ebx*8 + 4] */ { const u32 m_ = (u32)(ecx + ebx * 8u + 0x4u); esi = (u32)(M32(m_)); }
  /* 004fd5e7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fd5ea test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd5ec jne 0x4fd5fe */ if (!ZF_) goto L_004fd5fe;
  /* 004fd5ee mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fd5f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd5f3 je 0x4fd5fe */ if (ZF_) goto L_004fd5fe;
  /* 004fd5f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd5f6 call 0x5784d0 */ esp -= 4; M32(esp) = 0x4fd5fbu; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x4fd5f6u); RETCHK(0x4fd5fbu, 0x4fd5f6u); LOADALL;
  /* 004fd5fb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd5fe:;
  /* 004fd5fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd5ff call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fd604u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fd5ffu); RETCHK(0x4fd604u, 0x4fd5ffu); LOADALL;
  /* 004fd604 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd607 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd608 jns 0x4fd5e0 */ if (!SF_) goto L_004fd5e0;
L_004fd60a:;
  /* 004fd60a lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 004fd60d call 0x54d140 */ esp -= 4; M32(esp) = 0x4fd612u; SAVEALL; F_0054d140(c); ABI_CHECK(0x54d140u, 0x4fd60du); RETCHK(0x4fd612u, 0x4fd60du); LOADALL;
  /* 004fd612 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004fd614 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd616 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd617 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fd618 je 0x4fd629 */ if (ZF_) goto L_004fd629;
  /* 004fd61a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd61b call 0x5ac660 */ esp -= 4; M32(esp) = 0x4fd620u; SAVEALL; F_005ac660(c); ABI_CHECK(0x5ac660u, 0x4fd61bu); RETCHK(0x4fd620u, 0x4fd61bu); LOADALL;
  /* 004fd620 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd623 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_004fd629:;
  /* 004fd629 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004fd62c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd62d call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fd632u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fd62du); RETCHK(0x4fd632u, 0x4fd62du); LOADALL;
  /* 004fd632 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fd635 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd638 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fd63f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fd641 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd642 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fd650(CPU *c) {
  NATIVE_HOOK(0x4fd650u) REGS; LOADALL;
L_004fd650:;
  /* 004fd650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fd651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fd653 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd654 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd655 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004fd657 je 0x4fd6f6 */ if (ZF_) goto L_004fd6f6;
  /* 004fd65d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd65e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd65f je 0x4fd6b4 */ if (ZF_) goto L_004fd6b4;
  /* 004fd661 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fd662 je 0x4fd66a */ if (ZF_) goto L_004fd66a;
  /* 004fd664 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd665 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fd667 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fd668 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd669 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fd66a:;
  /* 004fd66a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fd66d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd66f je 0x4fd6b4 */ if (ZF_) goto L_004fd6b4;
  /* 004fd671 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fd673 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fd675 call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fd67au; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fd675u); RETCHK(0x4fd67au, 0x4fd675u); LOADALL;
  /* 004fd67a mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd67c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd67f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd681 je 0x4fd6ae */ if (ZF_) goto L_004fd6ae;
  /* 004fd683 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd684 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd685 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004fd687 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fd68cu; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fd687u); RETCHK(0x4fd68cu, 0x4fd687u); LOADALL;
  /* 004fd68c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd68e jl 0x4fd6a3 */ if (LT_) goto L_004fd6a3;
  /* 004fd690 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fd693 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fd696 mov dword ptr [esi + 4], 3 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x3u); }
  /* 004fd69d mov eax, esi */ { eax = (u32)(esi); }
  /* 004fd69f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd6a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fd6a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd6a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fd6a3:;
  /* 004fd6a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd6a4 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fd6a9u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fd6a4u); RETCHK(0x4fd6a9u, 0x4fd6a4u); LOADALL;
  /* 004fd6a9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd6ac xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_004fd6ae:;
  /* 004fd6ae mov eax, esi */ { eax = (u32)(esi); }
  /* 004fd6b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd6b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fd6b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd6b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fd6b4:;
  /* 004fd6b4 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fd6b6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fd6b8 call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fd6bdu; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fd6b8u); RETCHK(0x4fd6bdu, 0x4fd6b8u); LOADALL;
  /* 004fd6bd mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd6bf add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd6c2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd6c4 je 0x4fd6ae */ if (ZF_) goto L_004fd6ae;
  /* 004fd6c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd6c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd6c8 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004fd6ca call 0x54d170 */ esp -= 4; M32(esp) = 0x4fd6cfu; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fd6cau); RETCHK(0x4fd6cfu, 0x4fd6cau); LOADALL;
  /* 004fd6cf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd6d1 jl 0x4fd6a3 */ if (LT_) goto L_004fd6a3;
  /* 004fd6d3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fd6d6 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 004fd6d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fd6d9 lea edx, [esi + 0x10] */ edx = (u32)((u32)(esi + 0x10u));
  /* 004fd6dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd6dd mov dword ptr [esi + 4], 2 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x2u); }
  /* 004fd6e4 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4fd6e9u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4fd6e4u); RETCHK(0x4fd6e9u, 0x4fd6e4u); LOADALL;
  /* 004fd6e9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd6ec mov byte ptr [esi + 0x3f], 0 */ { const u32 m_ = (u32)(esi + 0x3fu); M8(m_) = (u8)(0x0u); }
  /* 004fd6f0 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fd6f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd6f3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fd6f4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd6f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fd6f6:;
  /* 004fd6f6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fd6f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fd6f9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd6fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fd700(CPU *c) {
  NATIVE_HOOK(0x4fd700u) REGS; LOADALL;
L_004fd700:;
  /* 004fd700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fd701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fd703 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fd706 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd707 call 0x578070 */ esp -= 4; M32(esp) = 0x4fd70cu; SAVEALL; F_00578070(c); ABI_CHECK(0x578070u, 0x4fd707u); RETCHK(0x4fd70cu, 0x4fd707u); LOADALL;
  /* 004fd70c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fd70f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd712 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004fd714 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fd716 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd717 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fd720(CPU *c) {
  NATIVE_HOOK(0x4fd720u) REGS; LOADALL;
L_004fd720:;
  /* 004fd720 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fd721 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fd723 sub esp, 0x100 */ { u32 a_ = esp, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd729 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fd72e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004fd731 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fd734 lea edx, [ebp - 0x100] */ edx = (u32)((u32)(ebp + 0xffffff00u));
  /* 004fd73a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fd73c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004fd740:;
  /* 004fd740 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fd742 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004fd745 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fd746 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fd748 jne 0x4fd740 */ if (!ZF_) goto L_004fd740;
  /* 004fd74a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd74b lea eax, [ebp - 0x100] */ eax = (u32)((u32)(ebp + 0xffffff00u));
  /* 004fd751 push 0x2e */ { u32 v_ = 0x2eu; esp -= 4; M32(esp) = v_; }
  /* 004fd753 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd754 call 0x5fe9e0 */ esp -= 4; M32(esp) = 0x4fd759u; SAVEALL; F_005fe9e0(c); ABI_CHECK(0x5fe9e0u, 0x4fd754u); RETCHK(0x4fd759u, 0x4fd754u); LOADALL;
  /* 004fd759 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd75b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd75e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd760 jne 0x4fd771 */ if (!ZF_) goto L_004fd771;
  /* 004fd762 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd763 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004fd766 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fd76bu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fd766u); RETCHK(0x4fd76bu, 0x4fd766u); LOADALL;
  /* 004fd76b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fd76d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd76e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fd771:;
  /* 004fd771 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd772 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004fd774 lea edi, [ebx + 0x10] */ edi = (u32)((u32)(ebx + 0x10u));
  /* 004fd777 mov edx, edi */ { edx = (u32)(edi); }
  /* 004fd779 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 004fd77b mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004fd77e mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004fd781 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004fd784 lea eax, [ebp - 0x100] */ eax = (u32)((u32)(ebp + 0xffffff00u));
  /* 004fd78a mov dword ptr [ebp + 8], edi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edi); }
  /* 004fd78d mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004fd790 call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fd795u; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fd790u); RETCHK(0x4fd795u, 0x4fd790u); LOADALL;
  /* 004fd795 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 004fd797 mov ecx, dword ptr [0x64fd68] */ { const u32 m_ = (u32)(0x64fd68u); ecx = (u32)(M32(m_)); }
  /* 004fd79d mov eax, esi */ { eax = (u32)(esi); }
  /* 004fd79f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fd7a1 mov edx, dword ptr [0x64fd6c] */ { const u32 m_ = (u32)(0x64fd6cu); edx = (u32)(M32(m_)); }
  /* 004fd7a7 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004fd7aa mov cl, byte ptr [0x64fd70] */ { const u32 m_ = (u32)(0x64fd70u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fd7b0 mov byte ptr [eax + 8], cl */ { const u32 m_ = (u32)(eax + 0x8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004fd7b3 lea eax, [ebp - 0x100] */ eax = (u32)((u32)(ebp + 0xffffff00u));
  /* 004fd7b9 call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fd7beu; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fd7b9u); RETCHK(0x4fd7beu, 0x4fd7b9u); LOADALL;
  /* 004fd7be mov edi, eax */ { edi = (u32)(eax); }
  /* 004fd7c0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd7c2 je 0x4fd7dc */ if (ZF_) goto L_004fd7dc;
  /* 004fd7c4 lea edx, [ebx + 0x14] */ edx = (u32)((u32)(ebx + 0x14u));
  /* 004fd7c7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd7c8 push 0x4fd700 */ { u32 v_ = 0x4fd700u; esp -= 4; M32(esp) = v_; }
  /* 004fd7cd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd7ce call 0x577da0 */ esp -= 4; M32(esp) = 0x4fd7d3u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4fd7ceu); RETCHK(0x4fd7d3u, 0x4fd7ceu); LOADALL;
  /* 004fd7d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd7d4 call 0x5784d0 */ esp -= 4; M32(esp) = 0x4fd7d9u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x4fd7d4u); RETCHK(0x4fd7d9u, 0x4fd7d4u); LOADALL;
  /* 004fd7d9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd7dc:;
  /* 004fd7dc mov ecx, dword ptr [0x64fd5c] */ { const u32 m_ = (u32)(0x64fd5cu); ecx = (u32)(M32(m_)); }
  /* 004fd7e2 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fd7e4 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fd7e6 mov edx, dword ptr [0x64fd60] */ { const u32 m_ = (u32)(0x64fd60u); edx = (u32)(M32(m_)); }
  /* 004fd7ec mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004fd7ef mov cl, byte ptr [0x64fd64] */ { const u32 m_ = (u32)(0x64fd64u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fd7f5 mov byte ptr [eax + 8], cl */ { const u32 m_ = (u32)(eax + 0x8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004fd7f8 lea eax, [ebp - 0x100] */ eax = (u32)((u32)(ebp + 0xffffff00u));
  /* 004fd7fe call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fd803u; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fd7feu); RETCHK(0x4fd803u, 0x4fd7feu); LOADALL;
  /* 004fd803 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fd805 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd807 je 0x4fd821 */ if (ZF_) goto L_004fd821;
  /* 004fd809 lea edx, [ebx + 0x1c] */ edx = (u32)((u32)(ebx + 0x1cu));
  /* 004fd80c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd80d push 0x4fd700 */ { u32 v_ = 0x4fd700u; esp -= 4; M32(esp) = v_; }
  /* 004fd812 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd813 call 0x577da0 */ esp -= 4; M32(esp) = 0x4fd818u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4fd813u); RETCHK(0x4fd818u, 0x4fd813u); LOADALL;
  /* 004fd818 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd819 call 0x5784d0 */ esp -= 4; M32(esp) = 0x4fd81eu; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x4fd819u); RETCHK(0x4fd81eu, 0x4fd819u); LOADALL;
  /* 004fd81e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd821:;
  /* 004fd821 mov ecx, dword ptr [0x64fd50] */ { const u32 m_ = (u32)(0x64fd50u); ecx = (u32)(M32(m_)); }
  /* 004fd827 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fd829 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004fd82b mov edx, dword ptr [0x64fd54] */ { const u32 m_ = (u32)(0x64fd54u); edx = (u32)(M32(m_)); }
  /* 004fd831 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004fd834 mov cl, byte ptr [0x64fd58] */ { const u32 m_ = (u32)(0x64fd58u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fd83a mov byte ptr [eax + 8], cl */ { const u32 m_ = (u32)(eax + 0x8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004fd83d lea eax, [ebp - 0x100] */ eax = (u32)((u32)(ebp + 0xffffff00u));
  /* 004fd843 call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fd848u; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fd843u); RETCHK(0x4fd848u, 0x4fd843u); LOADALL;
  /* 004fd848 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fd84a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd84c je 0x4fd866 */ if (ZF_) goto L_004fd866;
  /* 004fd84e lea edx, [ebx + 0x18] */ edx = (u32)((u32)(ebx + 0x18u));
  /* 004fd851 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd852 push 0x4fd700 */ { u32 v_ = 0x4fd700u; esp -= 4; M32(esp) = v_; }
  /* 004fd857 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd858 call 0x577da0 */ esp -= 4; M32(esp) = 0x4fd85du; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4fd858u); RETCHK(0x4fd85du, 0x4fd858u); LOADALL;
  /* 004fd85d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd85e call 0x5784d0 */ esp -= 4; M32(esp) = 0x4fd863u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x4fd85eu); RETCHK(0x4fd863u, 0x4fd85eu); LOADALL;
  /* 004fd863 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd866:;
  /* 004fd866 mov eax, dword ptr [0x64fd44] */ { const u32 m_ = (u32)(0x64fd44u); eax = (u32)(M32(m_)); }
  /* 004fd86b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 004fd86d mov ecx, dword ptr [0x64fd48] */ { const u32 m_ = (u32)(0x64fd48u); ecx = (u32)(M32(m_)); }
  /* 004fd873 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004fd876 mov dl, byte ptr [0x64fd4c] */ { const u32 m_ = (u32)(0x64fd4cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fd87c lea eax, [ebp - 0x100] */ eax = (u32)((u32)(ebp + 0xffffff00u));
  /* 004fd882 mov byte ptr [esi + 8], dl */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 004fd885 call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fd88au; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fd885u); RETCHK(0x4fd88au, 0x4fd885u); LOADALL;
  /* 004fd88a mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd88c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd88e je 0x4fd8a8 */ if (ZF_) goto L_004fd8a8;
  /* 004fd890 lea eax, [ebx + 0x20] */ eax = (u32)((u32)(ebx + 0x20u));
  /* 004fd893 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd894 push 0x4fd700 */ { u32 v_ = 0x4fd700u; esp -= 4; M32(esp) = v_; }
  /* 004fd899 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd89a call 0x577da0 */ esp -= 4; M32(esp) = 0x4fd89fu; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4fd89au); RETCHK(0x4fd89fu, 0x4fd89au); LOADALL;
  /* 004fd89f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd8a0 call 0x5784d0 */ esp -= 4; M32(esp) = 0x4fd8a5u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x4fd8a0u); RETCHK(0x4fd8a5u, 0x4fd8a0u); LOADALL;
  /* 004fd8a5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd8a8:;
  /* 004fd8a8 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004fd8ab mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004fd8ae mov edi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edi = (u32)(M32(m_)); }
  /* 004fd8b1 mov esi, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); esi = (u32)(M32(m_)); }
  /* 004fd8b4 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fd8b6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fd8b9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004fd8bb mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004fd8be or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fd8c0 or eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fd8c2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fd8c3 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fd8c5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd8c6 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fd8cbu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fd8c6u); RETCHK(0x4fd8cbu, 0x4fd8c6u); LOADALL;
  /* 004fd8cb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fd8cd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd8ce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fd8e0(CPU *c) {
  NATIVE_HOOK(0x4fd8e0u) REGS; LOADALL;
L_004fd8e0:;
  /* 004fd8e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fd8e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fd8e3 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd8e6 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fd8eb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004fd8ee mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fd8f1 lea edx, [ebp - 0x34] */ edx = (u32)((u32)(ebp + 0xffffffccu));
  /* 004fd8f4 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_004fd8f6:;
  /* 004fd8f6 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fd8f8 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004fd8fb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fd8fc test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fd8fe jne 0x4fd8f6 */ if (!ZF_) goto L_004fd8f6;
  /* 004fd900 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd901 lea esi, [edi + 0x10] */ esi = (u32)((u32)(edi + 0x10u));
  /* 004fd904 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fd906 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fd908 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004fd90a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd90b lea edx, [ebp - 0x34] */ edx = (u32)((u32)(ebp + 0xffffffccu));
  /* 004fd90e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fd90f mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004fd912 call 0x5aca30 */ esp -= 4; M32(esp) = 0x4fd917u; SAVEALL; F_005aca30(c); ABI_CHECK(0x5aca30u, 0x4fd912u); RETCHK(0x4fd917u, 0x4fd912u); LOADALL;
  /* 004fd917 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 004fd919 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fd91c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd91f cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fd922 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd923 jne 0x4fd93d */ if (!ZF_) goto L_004fd93d;
  /* 004fd925 lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 004fd928 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fd92a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd92b mov dword ptr [ebp - 0x34], 0x79646f62 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x79646f62u); }
  /* 004fd932 call 0x5aca30 */ esp -= 4; M32(esp) = 0x4fd937u; SAVEALL; F_005aca30(c); ABI_CHECK(0x5aca30u, 0x4fd932u); RETCHK(0x4fd937u, 0x4fd932u); LOADALL;
  /* 004fd937 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd93a mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
L_004fd93d:;
  /* 004fd93d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004fd940 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004fd945 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fd94au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fd945u); RETCHK(0x4fd94au, 0x4fd945u); LOADALL;
  /* 004fd94a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fd94c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd94d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fd950(CPU *c) {
  NATIVE_HOOK(0x4fd950u) REGS; LOADALL;
L_004fd950:;
  /* 004fd950 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fd951 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fd953 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd954 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd955 push 0x44 */ { u32 v_ = 0x44u; esp -= 4; M32(esp) = v_; }
  /* 004fd957 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4fd95cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4fd957u); RETCHK(0x4fd95cu, 0x4fd957u); LOADALL;
  /* 004fd95c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd95f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd961 je 0x4fd9ba */ if (ZF_) goto L_004fd9ba;
  /* 004fd963 call 0x54a640 */ esp -= 4; M32(esp) = 0x4fd968u; SAVEALL; F_0054a640(c); ABI_CHECK(0x54a640u, 0x4fd963u); RETCHK(0x4fd968u, 0x4fd963u); LOADALL;
  /* 004fd968 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd96a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd96c je 0x4fd9ba */ if (ZF_) goto L_004fd9ba;
  /* 004fd96e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fd971 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd972 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fd974 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004fd976 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x4fd97bu; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x4fd976u); RETCHK(0x4fd97bu, 0x4fd976u); LOADALL;
  /* 004fd97b mov edi, eax */ { edi = (u32)(eax); }
  /* 004fd97d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd980 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd982 je 0x4fd9b1 */ if (ZF_) goto L_004fd9b1;
  /* 004fd984 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fd985 call 0x54ab90 */ esp -= 4; M32(esp) = 0x4fd98au; SAVEALL; F_0054ab90(c); ABI_CHECK(0x54ab90u, 0x4fd985u); RETCHK(0x4fd98au, 0x4fd985u); LOADALL;
  /* 004fd98a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fd98c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fd98d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fd98f call 0x5b3410 */ esp -= 4; M32(esp) = 0x4fd994u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x4fd98fu); RETCHK(0x4fd994u, 0x4fd98fu); LOADALL;
  /* 004fd994 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fd997 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd999 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fd99a je 0x4fd9b1 */ if (ZF_) goto L_004fd9b1;
  /* 004fd99c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd99d call 0x54a990 */ esp -= 4; M32(esp) = 0x4fd9a2u; SAVEALL; F_0054a990(c); ABI_CHECK(0x54a990u, 0x4fd99du); RETCHK(0x4fd9a2u, 0x4fd99du); LOADALL;
  /* 004fd9a2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fd9a3 mov dword ptr [esi + 0x40], 0 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x0u); }
  /* 004fd9aa mov eax, esi */ { eax = (u32)(esi); }
  /* 004fd9ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd9ad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd9ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fd9b1:;
  /* 004fd9b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd9b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fd9b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fd9b2u); RETCHK(0x4fd9b7u, 0x4fd9b2u); LOADALL;
  /* 004fd9b7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd9ba:;
  /* 004fd9ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fd9bb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fd9bd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fd9be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fd9bf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fd9d0(CPU *c) {
  NATIVE_HOOK(0x4fd9d0u) REGS; LOADALL;
L_004fd9d0:;
  /* 004fd9d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fd9d1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fd9d3 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fd9d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd9d8 je 0x4fd9e3 */ if (ZF_) goto L_004fd9e3;
  /* 004fd9da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd9db call 0x577ff0 */ esp -= 4; M32(esp) = 0x4fd9e0u; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x4fd9dbu); RETCHK(0x4fd9e0u, 0x4fd9dbu); LOADALL;
  /* 004fd9e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd9e3:;
  /* 004fd9e3 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fd9e6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd9e8 je 0x4fd9f3 */ if (ZF_) goto L_004fd9f3;
  /* 004fd9ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd9eb call 0x577ff0 */ esp -= 4; M32(esp) = 0x4fd9f0u; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x4fd9ebu); RETCHK(0x4fd9f0u, 0x4fd9ebu); LOADALL;
  /* 004fd9f0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fd9f3:;
  /* 004fd9f3 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fd9f6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fd9f8 je 0x4fda03 */ if (ZF_) goto L_004fda03;
  /* 004fd9fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fd9fb call 0x577ff0 */ esp -= 4; M32(esp) = 0x4fda00u; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x4fd9fbu); RETCHK(0x4fda00u, 0x4fd9fbu); LOADALL;
  /* 004fda00 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fda03:;
  /* 004fda03 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fda06 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fda08 je 0x4fda13 */ if (ZF_) goto L_004fda13;
  /* 004fda0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fda0b call 0x577ff0 */ esp -= 4; M32(esp) = 0x4fda10u; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x4fda0bu); RETCHK(0x4fda10u, 0x4fda0bu); LOADALL;
  /* 004fda10 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fda13:;
  /* 004fda13 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 004fda15 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fda17 je 0x4fda22 */ if (ZF_) goto L_004fda22;
  /* 004fda19 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fda1a call 0x5784d0 */ esp -= 4; M32(esp) = 0x4fda1fu; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x4fda1au); RETCHK(0x4fda1fu, 0x4fda1au); LOADALL;
  /* 004fda1f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fda22:;
  /* 004fda22 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fda23 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fda30(CPU *c) {
  NATIVE_HOOK(0x4fda30u) REGS; LOADALL;
L_004fda30:;
  /* 004fda30 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004fda32 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fda34 je 0x4fda3f */ if (ZF_) goto L_004fda3f;
  /* 004fda36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fda37 call 0x5ac7e0 */ esp -= 4; M32(esp) = 0x4fda3cu; SAVEALL; F_005ac7e0(c); ABI_CHECK(0x5ac7e0u, 0x4fda37u); RETCHK(0x4fda3cu, 0x4fda37u); LOADALL;
  /* 004fda3c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fda3f:;
  /* 004fda3f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fda42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fda44 je 0x4fda4d */ if (ZF_) goto L_004fda4d;
  /* 004fda46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fda47 call 0x5ac7e0 */ esp -= 4; M32(esp) = 0x4fda4cu; SAVEALL; F_005ac7e0(c); ABI_CHECK(0x5ac7e0u, 0x4fda47u); RETCHK(0x4fda4cu, 0x4fda47u); LOADALL;
  /* 004fda4c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_004fda4d:;
  /* 004fda4d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fda50(CPU *c) {
  NATIVE_HOOK(0x4fda50u) REGS; LOADALL;
L_004fda50:;
  /* 004fda50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fda51 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fda53 call 0x54aa60 */ esp -= 4; M32(esp) = 0x4fda58u; SAVEALL; F_0054aa60(c); ABI_CHECK(0x54aa60u, 0x4fda53u); RETCHK(0x4fda58u, 0x4fda53u); LOADALL;
  /* 004fda58 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fda59 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fda5eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fda59u); RETCHK(0x4fda5eu, 0x4fda59u); LOADALL;
  /* 004fda5e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fda61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fda62 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fda70(CPU *c) {
  NATIVE_HOOK(0x4fda70u) REGS; LOADALL;
L_004fda70:;
  /* 004fda70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fda71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fda73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fda75 push 0x62043c */ { u32 v_ = 0x62043cu; esp -= 4; M32(esp) = v_; }
  /* 004fda7a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fda80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fda81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fda88 sub esp, 0x384 */ { u32 a_ = esp, b_ = 0x384u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fda8e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fda93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fda94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fda95 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fda98 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fda99 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fda9c add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fda9f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004fdaa2 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fdaa7u; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fdaa2u); RETCHK(0x4fdaa7u, 0x4fdaa2u); LOADALL;
  /* 004fdaa7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fdaa9 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdaab jne 0x4fddb3 */ if (!ZF_) goto L_004fddb3;
  /* 004fdab1 mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 004fdab6 lea edi, [ebp - 0x270] */ edi = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fdabc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fdabe mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 004fdac1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdac3 jne 0x4fdaeb */ if (!ZF_) goto L_004fdaeb;
  /* 004fdac5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fdac8 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fdacb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdacc lea ecx, [esi + 0x4c] */ ecx = (u32)((u32)(esi + 0x4cu));
  /* 004fdacf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fdad0 push 0x64fd38 */ { u32 v_ = 0x64fd38u; esp -= 4; M32(esp) = v_; }
  /* 004fdad5 lea edx, [ebp - 0x270] */ edx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fdadb push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004fdae0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fdae1 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fdae6u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fdae1u); RETCHK(0x4fdae6u, 0x4fdae1u); LOADALL;
  /* 004fdae6 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdae9 jmp 0x4fdb1a */ goto L_004fdb1a;
L_004fdaeb:;
  /* 004fdaeb cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdaee jne 0x4fdb17 */ if (!ZF_) goto L_004fdb17;
  /* 004fdaf0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fdaf3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fdaf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdaf7 add ecx, 0xec */ { u32 a_ = ecx, b_ = 0xecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fdafd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fdafe push 0x64fd38 */ { u32 v_ = 0x64fd38u; esp -= 4; M32(esp) = v_; }
  /* 004fdb03 lea edx, [ebp - 0x270] */ edx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fdb09 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004fdb0e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fdb0f call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fdb14u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fdb0fu); RETCHK(0x4fdb14u, 0x4fdb0fu); LOADALL;
  /* 004fdb14 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fdb17:;
  /* 004fdb17 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_004fdb1a:;
  /* 004fdb1a push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fdb1c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fdb1e call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fdb23u; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fdb1eu); RETCHK(0x4fdb23u, 0x4fdb1eu); LOADALL;
  /* 004fdb23 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fdb25 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fdb27 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdb2a cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdb2c je 0x4fdd74 */ if (ZF_) goto L_004fdd74;
  /* 004fdb32 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdb34 jne 0x4fdc59 */ if (!ZF_) goto L_004fdc59;
  /* 004fdb3a mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004fdb3d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fdb40 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fdb41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdb42 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 004fdb45 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fdb4au; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fdb45u); RETCHK(0x4fdb4au, 0x4fdb45u); LOADALL;
  /* 004fdb4a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdb4c jl 0x4fdc48 */ if (LT_) goto L_004fdc48;
  /* 004fdb52 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 004fdb54 call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fdb59u; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fdb54u); RETCHK(0x4fdb59u, 0x4fdb54u); LOADALL;
  /* 004fdb59 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fdb5a mov dword ptr [ebp - 0x374], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc8cu); M32(m_) = (u32)(eax); }
  /* 004fdb60 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fdb65u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fdb60u); RETCHK(0x4fdb65u, 0x4fdb60u); LOADALL;
  /* 004fdb65 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdb68 lea ecx, [esi + 0xac] */ ecx = (u32)((u32)(esi + 0xacu));
  /* 004fdb6e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fdb6f lea edi, [ebp - 0x70] */ edi = (u32)((u32)(ebp + 0xffffff90u));
  /* 004fdb72 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fdb79 call 0x4fc270 */ esp -= 4; M32(esp) = 0x4fdb7eu; SAVEALL; F_004fc270(c); ABI_CHECK(0x4fc270u, 0x4fdb79u); RETCHK(0x4fdb7eu, 0x4fdb79u); LOADALL;
  /* 004fdb7e lea edx, [ebp - 0x270] */ edx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fdb84 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fdb85 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004fdb89 call dword ptr [0x62e494] */ { const u32 m_ = (u32)(0x62e494u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fdb8fu; SAVEALL; call_ind(c, t_); RETCHK(0x4fdb8fu, 0x4fdb89u); LOADALL; }
  /* 004fdb8f cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdb92 jne 0x4fdba7 */ if (!ZF_) goto L_004fdba7;
  /* 004fdb94 lea eax, [ebp - 0x270] */ eax = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fdb9a call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fdb9fu; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fdb9au); RETCHK(0x4fdb9fu, 0x4fdb9au); LOADALL;
  /* 004fdb9f mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fdba2 jmp 0x4fdc29 */ goto L_004fdc29;
L_004fdba7:;
  /* 004fdba7 lea edi, [esi + 0x4c] */ edi = (u32)((u32)(esi + 0x4cu));
  /* 004fdbaa lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdbad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fdbae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdbaf lea ecx, [ebp - 0x270] */ ecx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fdbb5 call 0x4fc3b0 */ esp -= 4; M32(esp) = 0x4fdbbau; SAVEALL; F_004fc3b0(c); ABI_CHECK(0x4fc3b0u, 0x4fdbb5u); RETCHK(0x4fdbbau, 0x4fdbb5u); LOADALL;
  /* 004fdbba add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdbbd mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004fdbc1 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004fdbc4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdbc6 je 0x4fdc0d */ if (ZF_) goto L_004fdc0d;
  /* 004fdbc8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdbcb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fdbcc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fdbce lea esi, [ebp - 0x390] */ esi = (u32)((u32)(ebp + 0xfffffc70u));
  /* 004fdbd4 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x4fdbd9u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x4fdbd4u); RETCHK(0x4fdbd9u, 0x4fdbd4u); LOADALL;
  /* 004fdbd9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdbdc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fdbde push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fdbe0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdbe1 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdbe4 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 004fdbe8 call 0x404140 */ esp -= 4; M32(esp) = 0x4fdbedu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4fdbe8u); RETCHK(0x4fdbedu, 0x4fdbe8u); LOADALL;
  /* 004fdbed mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fdbef call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fdbf4u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fdbefu); RETCHK(0x4fdbf4u, 0x4fdbefu); LOADALL;
  /* 004fdbf4 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdbf8 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004fdbfb jae 0x4fdc00 */ if (!CF_) goto L_004fdc00;
  /* 004fdbfd lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004fdc00:;
  /* 004fdc00 call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fdc05u; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fdc00u); RETCHK(0x4fdc05u, 0x4fdc00u); LOADALL;
  /* 004fdc05 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fdc08 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fdc0b jmp 0x4fdc21 */ goto L_004fdc21;
L_004fdc0d:;
  /* 004fdc0d mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fdc10 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004fdc13 call 0x54d270 */ esp -= 4; M32(esp) = 0x4fdc18u; SAVEALL; F_0054d270(c); ABI_CHECK(0x54d270u, 0x4fdc13u); RETCHK(0x4fdc18u, 0x4fdc13u); LOADALL;
  /* 004fdc18 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fdc19 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fdc1eu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fdc19u); RETCHK(0x4fdc1eu, 0x4fdc19u); LOADALL;
  /* 004fdc1e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fdc21:;
  /* 004fdc21 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdc24 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fdc29u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fdc24u); RETCHK(0x4fdc29u, 0x4fdc24u); LOADALL;
L_004fdc29:;
  /* 004fdc29 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 004fdc2c call 0x4fc300 */ esp -= 4; M32(esp) = 0x4fdc31u; SAVEALL; F_004fc300(c); ABI_CHECK(0x4fc300u, 0x4fdc2cu); RETCHK(0x4fdc31u, 0x4fdc2cu); LOADALL;
  /* 004fdc31 mov edx, dword ptr [ebp - 0x374] */ { const u32 m_ = (u32)(ebp + 0xfffffc8cu); edx = (u32)(M32(m_)); }
  /* 004fdc37 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fdc38 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fdc3du; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fdc38u); RETCHK(0x4fdc3du, 0x4fdc38u); LOADALL;
  /* 004fdc3d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdc40 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fdc43 jmp 0x4fdd85 */ goto L_004fdd85;
L_004fdc48:;
  /* 004fdc48 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fdc49 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fdc4eu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fdc49u); RETCHK(0x4fdc4eu, 0x4fdc49u); LOADALL;
  /* 004fdc4e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdc51 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fdc54 jmp 0x4fdd85 */ goto L_004fdd85;
L_004fdc59:;
  /* 004fdc59 cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdc5c jne 0x4fdd74 */ if (!ZF_) goto L_004fdd74;
  /* 004fdc62 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004fdc65 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fdc68 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fdc69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdc6a lea edi, [esi + 0x40] */ edi = (u32)((u32)(esi + 0x40u));
  /* 004fdc6d call 0x54d170 */ esp -= 4; M32(esp) = 0x4fdc72u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fdc6du); RETCHK(0x4fdc72u, 0x4fdc6du); LOADALL;
  /* 004fdc72 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdc74 jl 0x4fdd69 */ if (LT_) goto L_004fdd69;
  /* 004fdc7a mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 004fdc7c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fdc7d lea esi, [ebp - 0x374] */ esi = (u32)((u32)(ebp + 0xfffffc8cu));
  /* 004fdc83 call 0x4fc1f0 */ esp -= 4; M32(esp) = 0x4fdc88u; SAVEALL; F_004fc1f0(c); ABI_CHECK(0x4fc1f0u, 0x4fdc83u); RETCHK(0x4fdc88u, 0x4fdc83u); LOADALL;
  /* 004fdc88 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fdc8b lea edx, [esi + 0xac] */ edx = (u32)((u32)(esi + 0xacu));
  /* 004fdc91 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fdc92 lea edi, [ebp - 0x70] */ edi = (u32)((u32)(ebp + 0xffffff90u));
  /* 004fdc95 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 004fdc9c call 0x4fc270 */ esp -= 4; M32(esp) = 0x4fdca1u; SAVEALL; F_004fc270(c); ABI_CHECK(0x4fc270u, 0x4fdc9cu); RETCHK(0x4fdca1u, 0x4fdc9cu); LOADALL;
  /* 004fdca1 lea eax, [ebp - 0x270] */ eax = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fdca7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdca8 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 004fdcac call dword ptr [0x62e494] */ { const u32 m_ = (u32)(0x62e494u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fdcb2u; SAVEALL; call_ind(c, t_); RETCHK(0x4fdcb2u, 0x4fdcacu); LOADALL; }
  /* 004fdcb2 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdcb5 jne 0x4fdcca */ if (!ZF_) goto L_004fdcca;
  /* 004fdcb7 lea eax, [ebp - 0x270] */ eax = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fdcbd call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fdcc2u; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fdcbdu); RETCHK(0x4fdcc2u, 0x4fdcbdu); LOADALL;
  /* 004fdcc2 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fdcc5 jmp 0x4fdd4d */ goto L_004fdd4d;
L_004fdcca:;
  /* 004fdcca lea ecx, [esi + 0xec] */ ecx = (u32)((u32)(esi + 0xecu));
  /* 004fdcd0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fdcd1 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdcd4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fdcd5 lea ecx, [ebp - 0x270] */ ecx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fdcdb call 0x4fc3b0 */ esp -= 4; M32(esp) = 0x4fdce0u; SAVEALL; F_004fc3b0(c); ABI_CHECK(0x4fc3b0u, 0x4fdcdbu); RETCHK(0x4fdce0u, 0x4fdcdbu); LOADALL;
  /* 004fdce0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdce3 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 004fdce7 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004fdcea test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdcec je 0x4fdd31 */ if (ZF_) goto L_004fdd31;
  /* 004fdcee lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdcf1 lea ecx, [esi + 0x4c] */ ecx = (u32)((u32)(esi + 0x4cu));
  /* 004fdcf4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdcf5 lea esi, [ebp - 0x390] */ esi = (u32)((u32)(ebp + 0xfffffc70u));
  /* 004fdcfb call 0x41a9b0 */ esp -= 4; M32(esp) = 0x4fdd00u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x4fdcfbu); RETCHK(0x4fdd00u, 0x4fdcfbu); LOADALL;
  /* 004fdd00 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdd03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fdd05 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fdd07 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdd08 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdd0b mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 004fdd0f call 0x404140 */ esp -= 4; M32(esp) = 0x4fdd14u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4fdd0fu); RETCHK(0x4fdd14u, 0x4fdd0fu); LOADALL;
  /* 004fdd14 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fdd16 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fdd1bu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fdd16u); RETCHK(0x4fdd1bu, 0x4fdd16u); LOADALL;
  /* 004fdd1b cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdd1f mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004fdd22 jae 0x4fdd27 */ if (!CF_) goto L_004fdd27;
  /* 004fdd24 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004fdd27:;
  /* 004fdd27 call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fdd2cu; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fdd27u); RETCHK(0x4fdd2cu, 0x4fdd27u); LOADALL;
  /* 004fdd2c mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fdd2f jmp 0x4fdd45 */ goto L_004fdd45;
L_004fdd31:;
  /* 004fdd31 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fdd34 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004fdd37 call 0x54d270 */ esp -= 4; M32(esp) = 0x4fdd3cu; SAVEALL; F_0054d270(c); ABI_CHECK(0x54d270u, 0x4fdd37u); RETCHK(0x4fdd3cu, 0x4fdd37u); LOADALL;
  /* 004fdd3c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fdd3d call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fdd42u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fdd3du); RETCHK(0x4fdd42u, 0x4fdd3du); LOADALL;
  /* 004fdd42 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fdd45:;
  /* 004fdd45 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdd48 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fdd4du; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fdd48u); RETCHK(0x4fdd4du, 0x4fdd48u); LOADALL;
L_004fdd4d:;
  /* 004fdd4d lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 004fdd50 call 0x4fc300 */ esp -= 4; M32(esp) = 0x4fdd55u; SAVEALL; F_004fc300(c); ABI_CHECK(0x4fc300u, 0x4fdd50u); RETCHK(0x4fdd55u, 0x4fdd50u); LOADALL;
  /* 004fdd55 mov ecx, dword ptr [ebp - 0x374] */ { const u32 m_ = (u32)(ebp + 0xfffffc8cu); ecx = (u32)(M32(m_)); }
  /* 004fdd5b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fdd5c call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fdd61u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fdd5cu); RETCHK(0x4fdd61u, 0x4fdd5cu); LOADALL;
  /* 004fdd61 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fdd64 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdd67 jmp 0x4fdd82 */ goto L_004fdd82;
L_004fdd69:;
  /* 004fdd69 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fdd6a call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fdd6fu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fdd6au); RETCHK(0x4fdd6fu, 0x4fdd6au); LOADALL;
  /* 004fdd6f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdd72 jmp 0x4fdd82 */ goto L_004fdd82;
L_004fdd74:;
  /* 004fdd74 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdd76 jne 0x4fdd7d */ if (!ZF_) goto L_004fdd7d;
  /* 004fdd78 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fdd7b jmp 0x4fdd85 */ goto L_004fdd85;
L_004fdd7d:;
  /* 004fdd7d cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdd80 jne 0x4fdd92 */ if (!ZF_) goto L_004fdd92;
L_004fdd82:;
  /* 004fdd82 add esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_004fdd85:;
  /* 004fdd85 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fdd88 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fdd8du; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fdd88u); RETCHK(0x4fdd8du, 0x4fdd88u); LOADALL;
  /* 004fdd8d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fdd90 mov ebx, eax */ { ebx = (u32)(eax); }
L_004fdd92:;
  /* 004fdd92 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdd94 jne 0x4fddb6 */ if (!ZF_) goto L_004fddb6;
L_004fdd96:;
  /* 004fdd96 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fdd98:;
  /* 004fdd98 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fdd9b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fdd9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fdd9d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fdda4 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004fdda7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fdda8 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fddadu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fdda8u); RETCHK(0x4fddadu, 0x4fdda8u); LOADALL;
  /* 004fddad mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fddaf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fddb0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004fddb3:;
  /* 004fddb3 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_004fddb6:;
  /* 004fddb6 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004fddb8 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fddbb inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fddbc sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fddbf mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 004fddc1 je 0x4fde99 */ if (ZF_) goto L_004fde99;
  /* 004fddc7 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fddca je 0x4fdde2 */ if (ZF_) goto L_004fdde2;
  /* 004fddcc dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fddcd jne 0x4fdd96 */ if (!ZF_) goto L_004fdd96;
  /* 004fddcf mov edi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); edi = (u32)(M32(m_)); }
  /* 004fddd2 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fddd5 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fdddau; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fddd5u); RETCHK(0x4fdddau, 0x4fddd5u); LOADALL;
  /* 004fddda mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fdddc test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fddde je 0x4fdd96 */ if (ZF_) goto L_004fdd96;
  /* 004fdde0 jmp 0x4fddb3 */ goto L_004fddb3;
L_004fdde2:;
  /* 004fdde2 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 004fdde4 call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fdde9u; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fdde4u); RETCHK(0x4fdde9u, 0x4fdde4u); LOADALL;
  /* 004fdde9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fddea mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fdded call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fddf2u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fddedu); RETCHK(0x4fddf2u, 0x4fddedu); LOADALL;
  /* 004fddf2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fddf5 lea edx, [esi + 0xac] */ edx = (u32)((u32)(esi + 0xacu));
  /* 004fddfb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fddfc lea edi, [ebp - 0x70] */ edi = (u32)((u32)(ebp + 0xffffff90u));
  /* 004fddff call 0x4fc270 */ esp -= 4; M32(esp) = 0x4fde04u; SAVEALL; F_004fc270(c); ABI_CHECK(0x4fc270u, 0x4fddffu); RETCHK(0x4fde04u, 0x4fddffu); LOADALL;
  /* 004fde04 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fde07 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fde0a je 0x4fde2d */ if (ZF_) goto L_004fde2d;
  /* 004fde0c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fde0d jne 0x4fde4e */ if (!ZF_) goto L_004fde4e;
  /* 004fde0f lea eax, [ebx + 0x10] */ eax = (u32)((u32)(ebx + 0x10u));
  /* 004fde12 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fde13 add esi, 0xec */ { u32 a_ = esi, b_ = 0xecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fde19 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fde1a push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fde1f push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fde24 lea ecx, [ebp - 0x370] */ ecx = (u32)((u32)(ebp + 0xfffffc90u));
  /* 004fde2a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fde2b jmp 0x4fde46 */ goto L_004fde46;
L_004fde2d:;
  /* 004fde2d lea edx, [ebx + 0x10] */ edx = (u32)((u32)(ebx + 0x10u));
  /* 004fde30 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fde31 add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fde34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fde35 push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fde3a push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fde3f lea eax, [ebp - 0x370] */ eax = (u32)((u32)(ebp + 0xfffffc90u));
  /* 004fde45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_004fde46:;
  /* 004fde46 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fde4bu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fde46u); RETCHK(0x4fde4bu, 0x4fde46u); LOADALL;
  /* 004fde4b add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fde4e:;
  /* 004fde4e lea eax, [ebp - 0x370] */ eax = (u32)((u32)(ebp + 0xfffffc90u));
  /* 004fde54 call 0x5451e0 */ esp -= 4; M32(esp) = 0x4fde59u; SAVEALL; F_005451e0(c); ABI_CHECK(0x5451e0u, 0x4fde54u); RETCHK(0x4fde59u, 0x4fde54u); LOADALL;
  /* 004fde59 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fde5c mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 004fde5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fde61 mov dword ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fde68 mov dword ptr [ebp - 0x70], 0x64fd00 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0x64fd00u); }
  /* 004fde6f je 0x4fde7d */ if (ZF_) goto L_004fde7d;
  /* 004fde71 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 004fde74 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fde75 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fde7au; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fde75u); RETCHK(0x4fde7au, 0x4fde75u); LOADALL;
  /* 004fde7a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fde7d:;
  /* 004fde7d lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 004fde80 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fde81 mov dword ptr [ebp - 0x70], 0x64fd04 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0x64fd04u); }
  /* 004fde88 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fde8du; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fde88u); RETCHK(0x4fde8du, 0x4fde88u); LOADALL;
  /* 004fde8d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fde90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fde91 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fde96u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fde91u); RETCHK(0x4fde96u, 0x4fde91u); LOADALL;
  /* 004fde96 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fde99:;
  /* 004fde99 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fde9c jmp 0x4fdd98 */ goto L_004fdd98;
}

void F_004fdeb0(CPU *c) {
  NATIVE_HOOK(0x4fdeb0u) REGS; LOADALL;
L_004fdeb0:;
  /* 004fdeb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fdeb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fdeb3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fdeb5 push 0x6203e3 */ { u32 v_ = 0x6203e3u; esp -= 4; M32(esp) = v_; }
  /* 004fdeba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fdec0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdec1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fdec8 sub esp, 0x340 */ { u32 a_ = esp, b_ = 0x340u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdece mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fded3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fded4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004fded7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fded8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fded9 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fdedc lea esi, [ebx + 0x1c] */ esi = (u32)((u32)(ebx + 0x1cu));
  /* 004fdedf mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004fdee2 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fdee7u; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fdee2u); RETCHK(0x4fdee7u, 0x4fdee2u); LOADALL;
  /* 004fdee7 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fdee9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdeeb jne 0x4fe030 */ if (!ZF_) goto L_004fe030;
  /* 004fdef1 mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 004fdef6 lea edi, [ebp - 0x22c] */ edi = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 004fdefc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fdefe mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fdf01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdf02 lea esi, [ebx + 0x8c] */ esi = (u32)((u32)(ebx + 0x8cu));
  /* 004fdf08 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fdf09 push 0x64fd2c */ { u32 v_ = 0x64fd2cu; esp -= 4; M32(esp) = v_; }
  /* 004fdf0e lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 004fdf14 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004fdf19 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fdf1a call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fdf1fu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fdf1au); RETCHK(0x4fdf1fu, 0x4fdf1au); LOADALL;
  /* 004fdf1f push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fdf21 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fdf23 call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fdf28u; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fdf23u); RETCHK(0x4fdf28u, 0x4fdf23u); LOADALL;
  /* 004fdf28 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fdf2a add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdf2d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdf2f je 0x4fe014 */ if (ZF_) goto L_004fe014;
  /* 004fdf35 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fdf38 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fdf3b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fdf3c add edi, 0x1c */ { u32 a_ = edi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fdf3f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fdf40 mov dword ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fdf47 mov dword ptr [ebp - 0x330], edi */ { const u32 m_ = (u32)(ebp + 0xfffffcd0u); M32(m_) = (u32)(edi); }
  /* 004fdf4d call 0x54d170 */ esp -= 4; M32(esp) = 0x4fdf52u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fdf4du); RETCHK(0x4fdf52u, 0x4fdf4du); LOADALL;
  /* 004fdf52 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdf54 jl 0x4fe00b */ if (LT_) goto L_004fe00b;
  /* 004fdf5a lea eax, [ebp - 0x22c] */ eax = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 004fdf60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdf61 call dword ptr [0x62e494] */ { const u32 m_ = (u32)(0x62e494u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fdf67u; SAVEALL; call_ind(c, t_); RETCHK(0x4fdf67u, 0x4fdf61u); LOADALL; }
  /* 004fdf67 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdf6a jne 0x4fdf7f */ if (!ZF_) goto L_004fdf7f;
  /* 004fdf6c lea eax, [ebp - 0x22c] */ eax = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 004fdf72 call 0x545230 */ esp -= 4; M32(esp) = 0x4fdf77u; SAVEALL; F_00545230(c); ABI_CHECK(0x545230u, 0x4fdf72u); RETCHK(0x4fdf77u, 0x4fdf72u); LOADALL;
  /* 004fdf77 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fdf7a jmp 0x4fe014 */ goto L_004fe014;
L_004fdf7f:;
  /* 004fdf7f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdf82 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fdf83 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fdf84 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 004fdf8a call 0x4fc3b0 */ esp -= 4; M32(esp) = 0x4fdf8fu; SAVEALL; F_004fc3b0(c); ABI_CHECK(0x4fc3b0u, 0x4fdf8au); RETCHK(0x4fdf8fu, 0x4fdf8au); LOADALL;
  /* 004fdf8f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdf92 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fdf99 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004fdf9c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fdf9e je 0x4fdfea */ if (ZF_) goto L_004fdfea;
  /* 004fdfa0 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdfa3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fdfa5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fdfa6 lea esi, [ebp - 0x34c] */ esi = (u32)((u32)(ebp + 0xfffffcb4u));
  /* 004fdfac call 0x41a9b0 */ esp -= 4; M32(esp) = 0x4fdfb1u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x4fdfacu); RETCHK(0x4fdfb1u, 0x4fdfacu); LOADALL;
  /* 004fdfb1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fdfb4 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fdfb6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fdfb8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fdfb9 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdfbc mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004fdfc0 call 0x404140 */ esp -= 4; M32(esp) = 0x4fdfc5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4fdfc0u); RETCHK(0x4fdfc5u, 0x4fdfc0u); LOADALL;
  /* 004fdfc5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fdfc7 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fdfccu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fdfc7u); RETCHK(0x4fdfccu, 0x4fdfc7u); LOADALL;
  /* 004fdfcc cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fdfd0 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004fdfd3 jae 0x4fdfd8 */ if (!CF_) goto L_004fdfd8;
  /* 004fdfd5 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004fdfd8:;
  /* 004fdfd8 call 0x545230 */ esp -= 4; M32(esp) = 0x4fdfddu; SAVEALL; F_00545230(c); ABI_CHECK(0x545230u, 0x4fdfd8u); RETCHK(0x4fdfddu, 0x4fdfd8u); LOADALL;
  /* 004fdfdd lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fdfe0 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fdfe3 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fdfe8u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fdfe3u); RETCHK(0x4fdfe8u, 0x4fdfe3u); LOADALL;
  /* 004fdfe8 jmp 0x4fe014 */ goto L_004fe014;
L_004fdfea:;
  /* 004fdfea mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fdfed mov eax, dword ptr [ebp - 0x330] */ { const u32 m_ = (u32)(ebp + 0xfffffcd0u); eax = (u32)(M32(m_)); }
  /* 004fdff3 call 0x54d270 */ esp -= 4; M32(esp) = 0x4fdff8u; SAVEALL; F_0054d270(c); ABI_CHECK(0x54d270u, 0x4fdff3u); RETCHK(0x4fdff8u, 0x4fdff3u); LOADALL;
  /* 004fdff8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fdff9 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fdffeu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fdff9u); RETCHK(0x4fdffeu, 0x4fdff9u); LOADALL;
  /* 004fdffe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe001 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fe004 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fe009u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fe004u); RETCHK(0x4fe009u, 0x4fe004u); LOADALL;
  /* 004fe009 jmp 0x4fe014 */ goto L_004fe014;
L_004fe00b:;
  /* 004fe00b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe00c call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fe011u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fe00cu); RETCHK(0x4fe011u, 0x4fe00cu); LOADALL;
  /* 004fe011 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe014:;
  /* 004fe014 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fe017 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fe01a add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fe01d call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe022u; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe01du); RETCHK(0x4fe022u, 0x4fe01du); LOADALL;
  /* 004fe022 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe024 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe026 je 0x4fe056 */ if (ZF_) goto L_004fe056;
  /* 004fe028 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004fe02b jmp 0x4fe030 */ goto L_004fe030;
L_004fe030:;
  /* 004fe030 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004fe032 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fe035 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fe036 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fe039 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 004fe03b je 0x4fe0ab */ if (ZF_) goto L_004fe0ab;
  /* 004fe03d sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fe040 je 0x4fe073 */ if (ZF_) goto L_004fe073;
  /* 004fe042 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fe043 jne 0x4fe056 */ if (!ZF_) goto L_004fe056;
  /* 004fe045 mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 004fe048 lea esi, [ebx + 0x1c] */ esi = (u32)((u32)(ebx + 0x1cu));
  /* 004fe04b call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe050u; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe04bu); RETCHK(0x4fe050u, 0x4fe04bu); LOADALL;
  /* 004fe050 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe052 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe054 jne 0x4fe030 */ if (!ZF_) goto L_004fe030;
L_004fe056:;
  /* 004fe056 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fe058:;
  /* 004fe058 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fe05b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fe05c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fe05d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fe064 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004fe067 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fe068 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fe06du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fe068u); RETCHK(0x4fe06du, 0x4fe068u); LOADALL;
  /* 004fe06d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fe06f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fe070 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fe073:;
  /* 004fe073 lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 004fe076 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fe077 add ebx, 0x8c */ { u32 a_ = ebx, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fe07d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe07e push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fe083 lea eax, [ebp - 0x32c] */ eax = (u32)((u32)(ebp + 0xfffffcd4u));
  /* 004fe089 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fe08e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe08f call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fe094u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fe08fu); RETCHK(0x4fe094u, 0x4fe08fu); LOADALL;
  /* 004fe094 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe097 lea eax, [ebp - 0x32c] */ eax = (u32)((u32)(ebp + 0xfffffcd4u));
  /* 004fe09d call 0x545230 */ esp -= 4; M32(esp) = 0x4fe0a2u; SAVEALL; F_00545230(c); ABI_CHECK(0x545230u, 0x4fe09du); RETCHK(0x4fe0a2u, 0x4fe09du); LOADALL;
  /* 004fe0a2 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 004fe0a4 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_004fe0ab:;
  /* 004fe0ab mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fe0ae jmp 0x4fe058 */ goto L_004fe058;
}

void F_004fe0b0(CPU *c) {
  NATIVE_HOOK(0x4fe0b0u) REGS; LOADALL;
L_004fe0b0:;
  /* 004fe0b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fe0b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fe0b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fe0b5 push 0x6203c1 */ { u32 v_ = 0x6203c1u; esp -= 4; M32(esp) = v_; }
  /* 004fe0ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fe0c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe0c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fe0c8 sub esp, 0x3d4 */ { u32 a_ = esp, b_ = 0x3d4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe0ce mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fe0d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe0d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe0d5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fe0d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fe0d9 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fe0dc add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fe0df mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004fe0e2 mov dword ptr [ebp - 0x3d8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffc28u); M32(m_) = (u32)(esi); }
  /* 004fe0e8 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe0edu; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe0e8u); RETCHK(0x4fe0edu, 0x4fe0e8u); LOADALL;
  /* 004fe0ed mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fe0ef test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe0f1 jne 0x4fe422 */ if (!ZF_) goto L_004fe422;
  /* 004fe0f7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fe0fa mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004fe0fd mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 004fe102 lea edi, [ebp - 0x3d0] */ edi = (u32)((u32)(ebp + 0xfffffc30u));
  /* 004fe108 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fe10a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe10b lea eax, [esi + 0x6c] */ eax = (u32)((u32)(esi + 0x6cu));
  /* 004fe10e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe10f push 0x64fd38 */ { u32 v_ = 0x64fd38u; esp -= 4; M32(esp) = v_; }
  /* 004fe114 mov dword ptr [ebp - 0x3e0], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc20u); M32(m_) = (u32)(eax); }
  /* 004fe11a lea eax, [ebp - 0x3d0] */ eax = (u32)((u32)(ebp + 0xfffffc30u));
  /* 004fe120 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004fe125 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe126 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fe12bu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fe126u); RETCHK(0x4fe12bu, 0x4fe126u); LOADALL;
  /* 004fe12b push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fe12d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fe12f call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fe134u; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fe12fu); RETCHK(0x4fe134u, 0x4fe12fu); LOADALL;
  /* 004fe134 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe137 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe139 mov dword ptr [ebp - 0x3d4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc2cu); M32(m_) = (u32)(eax); }
  /* 004fe13f je 0x4fe40f */ if (ZF_) goto L_004fe40f;
  /* 004fe145 mov edi, dword ptr [ebp - 0x3d8] */ { const u32 m_ = (u32)(ebp + 0xfffffc28u); edi = (u32)(M32(m_)); }
  /* 004fe14b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe14c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe14d call 0x54d170 */ esp -= 4; M32(esp) = 0x4fe152u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fe14du); RETCHK(0x4fe152u, 0x4fe14du); LOADALL;
  /* 004fe152 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe154 jl 0x4fe400 */ if (LT_) goto L_004fe400;
  /* 004fe15a mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 004fe15c call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fe161u; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fe15cu); RETCHK(0x4fe161u, 0x4fe15cu); LOADALL;
  /* 004fe161 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fe162 mov dword ptr [ebp - 0x3dc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc24u); M32(m_) = (u32)(eax); }
  /* 004fe168 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe16du; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe168u); RETCHK(0x4fe16du, 0x4fe168u); LOADALL;
  /* 004fe16d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe170 add esi, 0xac */ { u32 a_ = esi, b_ = 0xacu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fe176 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe177 lea edi, [ebp - 0xd0] */ edi = (u32)((u32)(ebp + 0xffffff30u));
  /* 004fe17d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fe184 call 0x4fc270 */ esp -= 4; M32(esp) = 0x4fe189u; SAVEALL; F_004fc270(c); ABI_CHECK(0x4fc270u, 0x4fe184u); RETCHK(0x4fe189u, 0x4fe184u); LOADALL;
  /* 004fe189 mov ecx, dword ptr [ebp - 0x3d4] */ { const u32 m_ = (u32)(ebp + 0xfffffc2cu); ecx = (u32)(M32(m_)); }
  /* 004fe18f lea edx, [ebp - 0x3d0] */ edx = (u32)((u32)(ebp + 0xfffffc30u));
  /* 004fe195 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004fe199 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe19a mov dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fe1a1 call dword ptr [0x62e494] */ { const u32 m_ = (u32)(0x62e494u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fe1a7u; SAVEALL; call_ind(c, t_); RETCHK(0x4fe1a7u, 0x4fe1a1u); LOADALL; }
  /* 004fe1a7 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fe1aa jne 0x4fe28d */ if (!ZF_) goto L_004fe28d;
  /* 004fe1b0 lea eax, [ebp - 0x3d0] */ eax = (u32)((u32)(ebp + 0xfffffc30u));
  /* 004fe1b6 push 0x64f1d8 */ { u32 v_ = 0x64f1d8u; esp -= 4; M32(esp) = v_; }
  /* 004fe1bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe1bc call 0x5fea9a */ esp -= 4; M32(esp) = 0x4fe1c1u; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x4fe1bcu); RETCHK(0x4fe1c1u, 0x4fe1bcu); LOADALL;
  /* 004fe1c1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe1c3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe1c6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe1c8 je 0x4fe273 */ if (ZF_) goto L_004fe273;
  /* 004fe1ce push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe1d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe1d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe1d3 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fe1d8u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fe1d3u); RETCHK(0x4fe1d8u, 0x4fe1d3u); LOADALL;
  /* 004fe1d8 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004fe1da push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe1dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe1dd call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fe1e2u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fe1ddu); RETCHK(0x4fe1e2u, 0x4fe1ddu); LOADALL;
  /* 004fe1e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe1e3 call 0x5feaa6 */ esp -= 4; M32(esp) = 0x4fe1e8u; SAVEALL; F_005feaa6(c); ABI_CHECK(0x5feaa6u, 0x4fe1e3u); RETCHK(0x4fe1e8u, 0x4fe1e3u); LOADALL;
  /* 004fe1e8 mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 004fe1ed mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 004fe1f0 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 004fe1f7 mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 004fe1fb mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004fe1ff mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004fe202 mov byte ptr [ebp - 0x8c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M8(m_) = (u8)(0x0u); }
  /* 004fe209 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fe20b lea edi, [ebp - 0x8b] */ edi = (u32)((u32)(ebp + 0xffffff75u));
  /* 004fe211 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fe213 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 004fe215 lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 004fe21b stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 004fe21d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe21e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe21f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 004fe220 call 0x61af7c */ esp -= 4; M32(esp) = 0x4fe225u; SAVEALL; F_0061af7c(c); ABI_CHECK(0x61af7cu, 0x4fe220u); RETCHK(0x4fe225u, 0x4fe220u); LOADALL;
  /* 004fe225 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe228 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe229 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fe22c call 0x404590 */ esp -= 4; M32(esp) = 0x4fe231u; SAVEALL; F_00404590(c); ABI_CHECK(0x404590u, 0x4fe22cu); RETCHK(0x4fe231u, 0x4fe22cu); LOADALL;
  /* 004fe231 call 0x41b490 */ esp -= 4; M32(esp) = 0x4fe236u; SAVEALL; F_0041b490(c); ABI_CHECK(0x41b490u, 0x4fe231u); RETCHK(0x4fe236u, 0x4fe231u); LOADALL;
  /* 004fe236 lea edi, [ebp - 0x30] */ edi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fe239 call 0x41b7b0 */ esp -= 4; M32(esp) = 0x4fe23eu; SAVEALL; F_0041b7b0(c); ABI_CHECK(0x41b7b0u, 0x4fe239u); RETCHK(0x4fe23eu, 0x4fe239u); LOADALL;
  /* 004fe23e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fe240 jne 0x4fe26b */ if (!ZF_) goto L_004fe26b;
  /* 004fe242 push 0x64fd20 */ { u32 v_ = 0x64fd20u; esp -= 4; M32(esp) = v_; }
  /* 004fe247 mov byte ptr [0x7a6cf7], 1 */ { const u32 m_ = (u32)(0x7a6cf7u); M8(m_) = (u8)(0x1u); }
  /* 004fe24e call 0x5fead6 */ esp -= 4; M32(esp) = 0x4fe253u; SAVEALL; F_005fead6(c); ABI_CHECK(0x5fead6u, 0x4fe24eu); RETCHK(0x4fe253u, 0x4fe24eu); LOADALL;
  /* 004fe253 mov ecx, 7 */ { ecx = (u32)(0x7u); }
  /* 004fe258 mov esi, 0x64fda4 */ { esi = (u32)(0x64fda4u); }
  /* 004fe25d lea edi, [ebp - 0x3d0] */ edi = (u32)((u32)(ebp + 0xfffffc30u));
  /* 004fe263 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004fe265 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 004fe267 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe26a movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = M8(esi); esi += st_; edi += st_; }
L_004fe26b:;
  /* 004fe26b lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fe26e call 0x45c610 */ esp -= 4; M32(esp) = 0x4fe273u; SAVEALL; F_0045c610(c); ABI_CHECK(0x45c610u, 0x4fe26eu); RETCHK(0x4fe273u, 0x4fe26eu); LOADALL;
L_004fe273:;
  /* 004fe273 mov ebx, dword ptr [ebp - 0x3d4] */ { const u32 m_ = (u32)(ebp + 0xfffffc2cu); ebx = (u32)(M32(m_)); }
  /* 004fe279 lea edx, [ebp - 0x3d0] */ edx = (u32)((u32)(ebp + 0xfffffc30u));
  /* 004fe27f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe280 call 0x4fd720 */ esp -= 4; M32(esp) = 0x4fe285u; SAVEALL; F_004fd720(c); ABI_CHECK(0x4fd720u, 0x4fe280u); RETCHK(0x4fe285u, 0x4fe280u); LOADALL;
  /* 004fe285 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004fe288 jmp 0x4fe3e0 */ goto L_004fe3e0;
L_004fe28d:;
  /* 004fe28d mov esi, dword ptr [ebp - 0x3e0] */ { const u32 m_ = (u32)(ebp + 0xfffffc20u); esi = (u32)(M32(m_)); }
  /* 004fe293 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004fe296 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe297 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe298 lea ecx, [ebp - 0x3d0] */ ecx = (u32)((u32)(ebp + 0xfffffc30u));
  /* 004fe29e call 0x4fc3b0 */ esp -= 4; M32(esp) = 0x4fe2a3u; SAVEALL; F_004fc3b0(c); ABI_CHECK(0x4fc3b0u, 0x4fe29eu); RETCHK(0x4fe2a3u, 0x4fe29eu); LOADALL;
  /* 004fe2a3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe2a6 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 004fe2aa mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 004fe2ad test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe2af je 0x4fe3bc */ if (ZF_) goto L_004fe3bc;
  /* 004fe2b5 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004fe2b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe2b9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fe2bb lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fe2be call 0x41a9b0 */ esp -= 4; M32(esp) = 0x4fe2c3u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x4fe2beu); RETCHK(0x4fe2c3u, 0x4fe2beu); LOADALL;
  /* 004fe2c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe2c6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fe2c8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe2ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe2cb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004fe2ce mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 004fe2d2 call 0x404140 */ esp -= 4; M32(esp) = 0x4fe2d7u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4fe2d2u); RETCHK(0x4fe2d7u, 0x4fe2d2u); LOADALL;
  /* 004fe2d7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fe2d9 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fe2deu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fe2d9u); RETCHK(0x4fe2deu, 0x4fe2d9u); LOADALL;
  /* 004fe2de cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fe2e2 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 004fe2e5 jae 0x4fe2ea */ if (!CF_) goto L_004fe2ea;
  /* 004fe2e7 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
L_004fe2ea:;
  /* 004fe2ea push 0x64f1d8 */ { u32 v_ = 0x64f1d8u; esp -= 4; M32(esp) = v_; }
  /* 004fe2ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe2f0 call 0x5fea9a */ esp -= 4; M32(esp) = 0x4fe2f5u; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x4fe2f0u); RETCHK(0x4fe2f5u, 0x4fe2f0u); LOADALL;
  /* 004fe2f5 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe2f7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe2fa test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe2fc je 0x4fe39f */ if (ZF_) goto L_004fe39f;
  /* 004fe302 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe304 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe306 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe307 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fe30cu; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fe307u); RETCHK(0x4fe30cu, 0x4fe307u); LOADALL;
  /* 004fe30c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004fe30e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe310 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe311 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fe316u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fe311u); RETCHK(0x4fe316u, 0x4fe311u); LOADALL;
  /* 004fe316 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe317 call 0x5feaa6 */ esp -= 4; M32(esp) = 0x4fe31cu; SAVEALL; F_005feaa6(c); ABI_CHECK(0x5feaa6u, 0x4fe317u); RETCHK(0x4fe31cu, 0x4fe317u); LOADALL;
  /* 004fe31c mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 004fe321 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 004fe324 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 004fe32b mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 004fe32f mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 004fe333 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004fe336 mov byte ptr [ebp - 0x8c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M8(m_) = (u8)(0x0u); }
  /* 004fe33d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fe33f lea edi, [ebp - 0x8b] */ edi = (u32)((u32)(ebp + 0xffffff75u));
  /* 004fe345 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fe347 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 004fe349 lea edx, [ebp - 0x8c] */ edx = (u32)((u32)(ebp + 0xffffff74u));
  /* 004fe34f stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 004fe351 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe352 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe353 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 004fe354 call 0x61af7c */ esp -= 4; M32(esp) = 0x4fe359u; SAVEALL; F_0061af7c(c); ABI_CHECK(0x61af7cu, 0x4fe354u); RETCHK(0x4fe359u, 0x4fe354u); LOADALL;
  /* 004fe359 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe35c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe35d lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fe360 call 0x404590 */ esp -= 4; M32(esp) = 0x4fe365u; SAVEALL; F_00404590(c); ABI_CHECK(0x404590u, 0x4fe360u); RETCHK(0x4fe365u, 0x4fe360u); LOADALL;
  /* 004fe365 call 0x41b490 */ esp -= 4; M32(esp) = 0x4fe36au; SAVEALL; F_0041b490(c); ABI_CHECK(0x41b490u, 0x4fe365u); RETCHK(0x4fe36au, 0x4fe365u); LOADALL;
  /* 004fe36a lea edi, [ebp - 0x30] */ edi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fe36d call 0x41b7b0 */ esp -= 4; M32(esp) = 0x4fe372u; SAVEALL; F_0041b7b0(c); ABI_CHECK(0x41b7b0u, 0x4fe36du); RETCHK(0x4fe372u, 0x4fe36du); LOADALL;
  /* 004fe372 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fe374 jne 0x4fe397 */ if (!ZF_) goto L_004fe397;
  /* 004fe376 push 0x64fd20 */ { u32 v_ = 0x64fd20u; esp -= 4; M32(esp) = v_; }
  /* 004fe37b mov byte ptr [0x7a6cf7], 1 */ { const u32 m_ = (u32)(0x7a6cf7u); M8(m_) = (u8)(0x1u); }
  /* 004fe382 call 0x5fead6 */ esp -= 4; M32(esp) = 0x4fe387u; SAVEALL; F_005fead6(c); ABI_CHECK(0x5fead6u, 0x4fe382u); RETCHK(0x4fe387u, 0x4fe382u); LOADALL;
  /* 004fe387 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe38a push 0x64fda4 */ { u32 v_ = 0x64fda4u; esp -= 4; M32(esp) = v_; }
  /* 004fe38f lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004fe392 call 0x404590 */ esp -= 4; M32(esp) = 0x4fe397u; SAVEALL; F_00404590(c); ABI_CHECK(0x404590u, 0x4fe392u); RETCHK(0x4fe397u, 0x4fe392u); LOADALL;
L_004fe397:;
  /* 004fe397 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fe39a call 0x45c610 */ esp -= 4; M32(esp) = 0x4fe39fu; SAVEALL; F_0045c610(c); ABI_CHECK(0x45c610u, 0x4fe39au); RETCHK(0x4fe39fu, 0x4fe39au); LOADALL;
L_004fe39f:;
  /* 004fe39f cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fe3a3 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 004fe3a6 jae 0x4fe3ab */ if (!CF_) goto L_004fe3ab;
  /* 004fe3a8 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
L_004fe3ab:;
  /* 004fe3ab mov ebx, dword ptr [ebp - 0x3d4] */ { const u32 m_ = (u32)(ebp + 0xfffffc2cu); ebx = (u32)(M32(m_)); }
  /* 004fe3b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe3b2 call 0x4fd720 */ esp -= 4; M32(esp) = 0x4fe3b7u; SAVEALL; F_004fd720(c); ABI_CHECK(0x4fd720u, 0x4fe3b2u); RETCHK(0x4fe3b7u, 0x4fe3b2u); LOADALL;
  /* 004fe3b7 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004fe3ba jmp 0x4fe3d8 */ goto L_004fe3d8;
L_004fe3bc:;
  /* 004fe3bc mov eax, dword ptr [ebp - 0x3d8] */ { const u32 m_ = (u32)(ebp + 0xfffffc28u); eax = (u32)(M32(m_)); }
  /* 004fe3c2 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004fe3c4 call 0x54d270 */ esp -= 4; M32(esp) = 0x4fe3c9u; SAVEALL; F_0054d270(c); ABI_CHECK(0x54d270u, 0x4fe3c4u); RETCHK(0x4fe3c9u, 0x4fe3c4u); LOADALL;
  /* 004fe3c9 mov eax, dword ptr [ebp - 0x3d4] */ { const u32 m_ = (u32)(ebp + 0xfffffc2cu); eax = (u32)(M32(m_)); }
  /* 004fe3cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe3d0 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fe3d5u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fe3d0u); RETCHK(0x4fe3d5u, 0x4fe3d0u); LOADALL;
  /* 004fe3d5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe3d8:;
  /* 004fe3d8 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004fe3db call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fe3e0u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fe3dbu); RETCHK(0x4fe3e0u, 0x4fe3dbu); LOADALL;
L_004fe3e0:;
  /* 004fe3e0 lea ecx, [ebp - 0xd0] */ ecx = (u32)((u32)(ebp + 0xffffff30u));
  /* 004fe3e6 call 0x4fc300 */ esp -= 4; M32(esp) = 0x4fe3ebu; SAVEALL; F_004fc300(c); ABI_CHECK(0x4fc300u, 0x4fe3e6u); RETCHK(0x4fe3ebu, 0x4fe3e6u); LOADALL;
  /* 004fe3eb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004fe3f2 mov ecx, dword ptr [ebp - 0x3dc] */ { const u32 m_ = (u32)(ebp + 0xfffffc24u); ecx = (u32)(M32(m_)); }
  /* 004fe3f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe3f9 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe3feu; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe3f9u); RETCHK(0x4fe3feu, 0x4fe3f9u); LOADALL;
  /* 004fe3fe jmp 0x4fe40c */ goto L_004fe40c;
L_004fe400:;
  /* 004fe400 mov edx, dword ptr [ebp - 0x3d4] */ { const u32 m_ = (u32)(ebp + 0xfffffc2cu); edx = (u32)(M32(m_)); }
  /* 004fe406 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe407 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fe40cu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fe407u); RETCHK(0x4fe40cu, 0x4fe407u); LOADALL;
L_004fe40c:;
  /* 004fe40c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe40f:;
  /* 004fe40f mov esi, dword ptr [ebp - 0x3d8] */ { const u32 m_ = (u32)(ebp + 0xfffffc28u); esi = (u32)(M32(m_)); }
  /* 004fe415 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004fe417 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe41cu; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe417u); RETCHK(0x4fe41cu, 0x4fe417u); LOADALL;
  /* 004fe41c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fe41e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe420 je 0x4fe44f */ if (ZF_) goto L_004fe44f;
L_004fe422:;
  /* 004fe422 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004fe424 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fe427 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fe428 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fe42b mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 004fe42d je 0x4fe5f7 */ if (ZF_) goto L_004fe5f7;
  /* 004fe433 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fe436 je 0x4fe46c */ if (ZF_) goto L_004fe46c;
  /* 004fe438 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fe439 jne 0x4fe44f */ if (!ZF_) goto L_004fe44f;
  /* 004fe43b mov edi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); edi = (u32)(M32(m_)); }
  /* 004fe43e mov esi, dword ptr [ebp - 0x3d8] */ { const u32 m_ = (u32)(ebp + 0xfffffc28u); esi = (u32)(M32(m_)); }
  /* 004fe444 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe449u; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe444u); RETCHK(0x4fe449u, 0x4fe444u); LOADALL;
  /* 004fe449 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fe44b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe44d jne 0x4fe422 */ if (!ZF_) goto L_004fe422;
L_004fe44f:;
  /* 004fe44f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fe451:;
  /* 004fe451 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fe454 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fe455 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fe456 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fe45d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004fe460 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fe461 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fe466u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fe461u); RETCHK(0x4fe466u, 0x4fe461u); LOADALL;
  /* 004fe466 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fe468 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fe469 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fe46c:;
  /* 004fe46c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fe46f mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 004fe471 call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fe476u; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fe471u); RETCHK(0x4fe476u, 0x4fe471u); LOADALL;
  /* 004fe476 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fe477 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fe47a call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe47fu; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe47au); RETCHK(0x4fe47fu, 0x4fe47au); LOADALL;
  /* 004fe47f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe482 lea eax, [esi + 0xac] */ eax = (u32)((u32)(esi + 0xacu));
  /* 004fe488 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe489 lea edi, [ebp - 0xd0] */ edi = (u32)((u32)(ebp + 0xffffff30u));
  /* 004fe48f mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 004fe496 call 0x4fc270 */ esp -= 4; M32(esp) = 0x4fe49bu; SAVEALL; F_004fc270(c); ABI_CHECK(0x4fc270u, 0x4fe496u); RETCHK(0x4fe49bu, 0x4fe496u); LOADALL;
  /* 004fe49b lea ecx, [ebx + 0x10] */ ecx = (u32)((u32)(ebx + 0x10u));
  /* 004fe49e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe49f add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fe4a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe4a3 push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fe4a8 lea edx, [ebp - 0x1d0] */ edx = (u32)((u32)(ebp + 0xfffffe30u));
  /* 004fe4ae push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fe4b3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe4b4 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 004fe4b8 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fe4bdu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fe4b8u); RETCHK(0x4fe4bdu, 0x4fe4b8u); LOADALL;
  /* 004fe4bd lea eax, [ebp - 0x1d0] */ eax = (u32)((u32)(ebp + 0xfffffe30u));
  /* 004fe4c3 push 0x64f1d8 */ { u32 v_ = 0x64f1d8u; esp -= 4; M32(esp) = v_; }
  /* 004fe4c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe4c9 call 0x5fea9a */ esp -= 4; M32(esp) = 0x4fe4ceu; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x4fe4c9u); RETCHK(0x4fe4ceu, 0x4fe4c9u); LOADALL;
  /* 004fe4ce mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe4d0 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe4d3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe4d5 je 0x4fe59f */ if (ZF_) goto L_004fe59f;
  /* 004fe4db push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe4dd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe4df push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe4e0 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fe4e5u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fe4e0u); RETCHK(0x4fe4e5u, 0x4fe4e0u); LOADALL;
  /* 004fe4e5 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004fe4e7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe4e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe4ea call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4fe4efu; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4fe4eau); RETCHK(0x4fe4efu, 0x4fe4eau); LOADALL;
  /* 004fe4ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe4f0 call 0x5feaa6 */ esp -= 4; M32(esp) = 0x4fe4f5u; SAVEALL; F_005feaa6(c); ABI_CHECK(0x5feaa6u, 0x4fe4f0u); RETCHK(0x4fe4f5u, 0x4fe4f0u); LOADALL;
  /* 004fe4f5 mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 004fe4fa mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 004fe4fd mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 004fe504 mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 004fe508 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fe50b mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 004fe50f mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004fe512 mov byte ptr [ebp - 0x8c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M8(m_) = (u8)(0x0u); }
  /* 004fe519 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fe51b lea edi, [ebp - 0x8b] */ edi = (u32)((u32)(ebp + 0xffffff75u));
  /* 004fe521 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fe523 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 004fe525 lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 004fe52b stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 004fe52d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe52e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe52f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 004fe530 call 0x61af7c */ esp -= 4; M32(esp) = 0x4fe535u; SAVEALL; F_0061af7c(c); ABI_CHECK(0x61af7cu, 0x4fe530u); RETCHK(0x4fe535u, 0x4fe530u); LOADALL;
  /* 004fe535 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe537 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fe539 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe53c lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 004fe53f nop */ ;
L_004fe540:;
  /* 004fe540 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fe542 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fe543 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fe545 jne 0x4fe540 */ if (!ZF_) goto L_004fe540;
  /* 004fe547 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fe549 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe54a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe54b lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fe54e call 0x404420 */ esp -= 4; M32(esp) = 0x4fe553u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4fe54eu); RETCHK(0x4fe553u, 0x4fe54eu); LOADALL;
  /* 004fe553 call 0x41b490 */ esp -= 4; M32(esp) = 0x4fe558u; SAVEALL; F_0041b490(c); ABI_CHECK(0x41b490u, 0x4fe553u); RETCHK(0x4fe558u, 0x4fe553u); LOADALL;
  /* 004fe558 lea edi, [ebp - 0x30] */ edi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004fe55b call 0x41b7b0 */ esp -= 4; M32(esp) = 0x4fe560u; SAVEALL; F_0041b7b0(c); ABI_CHECK(0x41b7b0u, 0x4fe55bu); RETCHK(0x4fe560u, 0x4fe55bu); LOADALL;
  /* 004fe560 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fe562 jne 0x4fe58d */ if (!ZF_) goto L_004fe58d;
  /* 004fe564 push 0x64fd20 */ { u32 v_ = 0x64fd20u; esp -= 4; M32(esp) = v_; }
  /* 004fe569 mov byte ptr [0x7a6cf7], 1 */ { const u32 m_ = (u32)(0x7a6cf7u); M8(m_) = (u8)(0x1u); }
  /* 004fe570 call 0x5fead6 */ esp -= 4; M32(esp) = 0x4fe575u; SAVEALL; F_005fead6(c); ABI_CHECK(0x5fead6u, 0x4fe570u); RETCHK(0x4fe575u, 0x4fe570u); LOADALL;
  /* 004fe575 mov ecx, 7 */ { ecx = (u32)(0x7u); }
  /* 004fe57a mov esi, 0x64fda4 */ { esi = (u32)(0x64fda4u); }
  /* 004fe57f lea edi, [ebp - 0x1d0] */ edi = (u32)((u32)(ebp + 0xfffffe30u));
  /* 004fe585 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004fe587 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 004fe589 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe58c movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = M8(esi); esi += st_; edi += st_; }
L_004fe58d:;
  /* 004fe58d cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fe591 jb 0x4fe59f */ if (CF_) goto L_004fe59f;
  /* 004fe593 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 004fe596 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe597 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fe59cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fe597u); RETCHK(0x4fe59cu, 0x4fe597u); LOADALL;
  /* 004fe59c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe59f:;
  /* 004fe59f lea ecx, [ebp - 0x1d0] */ ecx = (u32)((u32)(ebp + 0xfffffe30u));
  /* 004fe5a5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe5a6 call 0x4fd720 */ esp -= 4; M32(esp) = 0x4fe5abu; SAVEALL; F_004fd720(c); ABI_CHECK(0x4fd720u, 0x4fe5a6u); RETCHK(0x4fe5abu, 0x4fe5a6u); LOADALL;
  /* 004fe5ab mov eax, dword ptr [ebp - 0xcc] */ { const u32 m_ = (u32)(ebp + 0xffffff34u); eax = (u32)(M32(m_)); }
  /* 004fe5b1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe5b3 mov dword ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fe5ba mov dword ptr [ebp - 0xd0], 0x64fd00 */ { const u32 m_ = (u32)(ebp + 0xffffff30u); M32(m_) = (u32)(0x64fd00u); }
  /* 004fe5c4 je 0x4fe5d5 */ if (ZF_) goto L_004fe5d5;
  /* 004fe5c6 lea edx, [ebp - 0xc8] */ edx = (u32)((u32)(ebp + 0xffffff38u));
  /* 004fe5cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe5cd call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fe5d2u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fe5cdu); RETCHK(0x4fe5d2u, 0x4fe5cdu); LOADALL;
  /* 004fe5d2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe5d5:;
  /* 004fe5d5 lea eax, [ebp - 0xc8] */ eax = (u32)((u32)(ebp + 0xffffff38u));
  /* 004fe5db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe5dc mov dword ptr [ebp - 0xd0], 0x64fd04 */ { const u32 m_ = (u32)(ebp + 0xffffff30u); M32(m_) = (u32)(0x64fd04u); }
  /* 004fe5e6 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fe5ebu; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fe5e6u); RETCHK(0x4fe5ebu, 0x4fe5e6u); LOADALL;
  /* 004fe5eb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fe5ee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe5ef call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe5f4u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe5efu); RETCHK(0x4fe5f4u, 0x4fe5efu); LOADALL;
  /* 004fe5f4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe5f7:;
  /* 004fe5f7 lea eax, [ebx + 0x10] */ eax = (u32)((u32)(ebx + 0x10u));
  /* 004fe5fa jmp 0x4fe451 */ goto L_004fe451;
}

void F_004fe600(CPU *c) {
  NATIVE_HOOK(0x4fe600u) REGS; LOADALL;
L_004fe600:;
  /* 004fe600 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fe601 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fe603 sub esp, 0x44c */ { u32 a_ = esp, b_ = 0x44cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe609 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fe60e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe60f mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004fe612 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe613 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fe614 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fe617 lea esi, [ebx + 0x28] */ esi = (u32)((u32)(ebx + 0x28u));
  /* 004fe61a mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004fe61d call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe622u; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe61du); RETCHK(0x4fe622u, 0x4fe61du); LOADALL;
  /* 004fe622 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe624 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe626 jne 0x4fe753 */ if (!ZF_) goto L_004fe753;
  /* 004fe62c mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 004fe631 lea edi, [ebp - 0x448] */ edi = (u32)((u32)(ebp + 0xfffffbb8u));
  /* 004fe637 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fe639 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fe63c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe63d push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 004fe642 lea ecx, [ebp - 0x248] */ ecx = (u32)((u32)(ebp + 0xfffffdb8u));
  /* 004fe648 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004fe64d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe64e call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fe653u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fe64eu); RETCHK(0x4fe653u, 0x4fe64eu); LOADALL;
  /* 004fe653 mov dl, byte ptr [ebp - 0x240] */ { const u32 m_ = (u32)(ebp + 0xfffffdc0u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fe659 lea eax, [ebp - 0x248] */ eax = (u32)((u32)(ebp + 0xfffffdb8u));
  /* 004fe65f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe660 add ebx, 0xac */ { u32 a_ = ebx, b_ = 0xacu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fe666 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe667 push 0x64fd14 */ { u32 v_ = 0x64fd14u; esp -= 4; M32(esp) = v_; }
  /* 004fe66c lea ecx, [ebp - 0x448] */ ecx = (u32)((u32)(ebp + 0xfffffbb8u));
  /* 004fe672 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004fe677 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe678 mov byte ptr [ebp - 0x243], dl */ { const u32 m_ = (u32)(ebp + 0xfffffdbdu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 004fe67e mov byte ptr [ebp - 0x242], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffdbeu); M8(m_) = (u8)(0x0u); }
  /* 004fe685 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fe68au; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fe685u); RETCHK(0x4fe68au, 0x4fe685u); LOADALL;
  /* 004fe68a push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fe68c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fe68e call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fe693u; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fe68eu); RETCHK(0x4fe693u, 0x4fe68eu); LOADALL;
  /* 004fe693 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe695 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe698 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe69a je 0x4fe73c */ if (ZF_) goto L_004fe73c;
  /* 004fe6a0 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fe6a3 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fe6a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe6a7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe6a8 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fe6ab call 0x54d170 */ esp -= 4; M32(esp) = 0x4fe6b0u; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fe6abu); RETCHK(0x4fe6b0u, 0x4fe6abu); LOADALL;
  /* 004fe6b0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe6b2 jl 0x4fe733 */ if (LT_) goto L_004fe733;
  /* 004fe6b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fe6b7 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 004fe6b9 call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fe6beu; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fe6b9u); RETCHK(0x4fe6beu, 0x4fe6b9u); LOADALL;
  /* 004fe6be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fe6bf mov dword ptr [ebp - 0x44c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffbb4u); M32(m_) = (u32)(eax); }
  /* 004fe6c5 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe6cau; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe6c5u); RETCHK(0x4fe6cau, 0x4fe6c5u); LOADALL;
  /* 004fe6ca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe6cd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe6ce lea edi, [ebp - 0x48] */ edi = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004fe6d1 call 0x4fc270 */ esp -= 4; M32(esp) = 0x4fe6d6u; SAVEALL; F_004fc270(c); ABI_CHECK(0x4fc270u, 0x4fe6d1u); RETCHK(0x4fe6d6u, 0x4fe6d1u); LOADALL;
  /* 004fe6d6 lea ecx, [ebp - 0x448] */ ecx = (u32)((u32)(ebp + 0xfffffbb8u));
  /* 004fe6dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe6dd mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fe6e4 mov dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 004fe6eb call dword ptr [0x62e494] */ { const u32 m_ = (u32)(0x62e494u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fe6f1u; SAVEALL; call_ind(c, t_); RETCHK(0x4fe6f1u, 0x4fe6ebu); LOADALL; }
  /* 004fe6f1 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fe6f4 jne 0x4fe706 */ if (!ZF_) goto L_004fe706;
  /* 004fe6f6 lea edx, [ebp - 0x248] */ edx = (u32)((u32)(ebp + 0xfffffdb8u));
  /* 004fe6fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe6fd mov edi, esi */ { edi = (u32)(esi); }
  /* 004fe6ff call 0x4fd8e0 */ esp -= 4; M32(esp) = 0x4fe704u; SAVEALL; F_004fd8e0(c); ABI_CHECK(0x4fd8e0u, 0x4fe6ffu); RETCHK(0x4fe704u, 0x4fe6ffu); LOADALL;
  /* 004fe704 jmp 0x4fe71d */ goto L_004fe71d;
L_004fe706:;
  /* 004fe706 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fe709 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fe70c add eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fe70f call 0x54d270 */ esp -= 4; M32(esp) = 0x4fe714u; SAVEALL; F_0054d270(c); ABI_CHECK(0x54d270u, 0x4fe70fu); RETCHK(0x4fe714u, 0x4fe70fu); LOADALL;
  /* 004fe714 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe715 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fe71au; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fe715u); RETCHK(0x4fe71au, 0x4fe715u); LOADALL;
  /* 004fe71a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe71d:;
  /* 004fe71d lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004fe720 call 0x4fc300 */ esp -= 4; M32(esp) = 0x4fe725u; SAVEALL; F_004fc300(c); ABI_CHECK(0x4fc300u, 0x4fe720u); RETCHK(0x4fe725u, 0x4fe720u); LOADALL;
  /* 004fe725 mov eax, dword ptr [ebp - 0x44c] */ { const u32 m_ = (u32)(ebp + 0xfffffbb4u); eax = (u32)(M32(m_)); }
  /* 004fe72b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe72c call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe731u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe72cu); RETCHK(0x4fe731u, 0x4fe72cu); LOADALL;
  /* 004fe731 jmp 0x4fe739 */ goto L_004fe739;
L_004fe733:;
  /* 004fe733 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe734 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fe739u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fe734u); RETCHK(0x4fe739u, 0x4fe734u); LOADALL;
L_004fe739:;
  /* 004fe739 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe73c:;
  /* 004fe73c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fe73f mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fe742 add esi, 0x28 */ { u32 a_ = esi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fe745 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe74au; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe745u); RETCHK(0x4fe74au, 0x4fe745u); LOADALL;
  /* 004fe74a mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe74c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe74e je 0x4fe77d */ if (ZF_) goto L_004fe77d;
  /* 004fe750 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004fe753:;
  /* 004fe753 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004fe755 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fe758 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fe759 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fe75c mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 004fe75e je 0x4fe7fa */ if (ZF_) goto L_004fe7fa;
  /* 004fe764 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fe767 je 0x4fe790 */ if (ZF_) goto L_004fe790;
  /* 004fe769 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fe76a jne 0x4fe77d */ if (!ZF_) goto L_004fe77d;
  /* 004fe76c mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 004fe76f lea esi, [ebx + 0x28] */ esi = (u32)((u32)(ebx + 0x28u));
  /* 004fe772 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe777u; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe772u); RETCHK(0x4fe777u, 0x4fe772u); LOADALL;
  /* 004fe777 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe779 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe77b jne 0x4fe753 */ if (!ZF_) goto L_004fe753;
L_004fe77d:;
  /* 004fe77d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fe77e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fe77f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fe781 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fe782 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004fe785 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fe78au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fe785u); RETCHK(0x4fe78au, 0x4fe785u); LOADALL;
  /* 004fe78a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fe78c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fe78d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fe790:;
  /* 004fe790 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 004fe792 call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fe797u; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fe792u); RETCHK(0x4fe797u, 0x4fe792u); LOADALL;
  /* 004fe797 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fe798 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fe79b call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe7a0u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe79bu); RETCHK(0x4fe7a0u, 0x4fe79bu); LOADALL;
  /* 004fe7a0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe7a3 add ebx, 0xac */ { u32 a_ = ebx, b_ = 0xacu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fe7a9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe7aa lea edi, [ebp - 0x48] */ edi = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004fe7ad call 0x4fc270 */ esp -= 4; M32(esp) = 0x4fe7b2u; SAVEALL; F_004fc270(c); ABI_CHECK(0x4fc270u, 0x4fe7adu); RETCHK(0x4fe7b2u, 0x4fe7adu); LOADALL;
  /* 004fe7b2 lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 004fe7b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe7b6 mov edi, esi */ { edi = (u32)(esi); }
  /* 004fe7b8 call 0x4fd8e0 */ esp -= 4; M32(esp) = 0x4fe7bdu; SAVEALL; F_004fd8e0(c); ABI_CHECK(0x4fd8e0u, 0x4fe7b8u); RETCHK(0x4fe7bdu, 0x4fe7b8u); LOADALL;
  /* 004fe7bd mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004fe7c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe7c2 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fe7c9 mov dword ptr [ebp - 0x48], 0x64fd00 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x64fd00u); }
  /* 004fe7d0 je 0x4fe7de */ if (ZF_) goto L_004fe7de;
  /* 004fe7d2 lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 004fe7d5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe7d6 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fe7dbu; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fe7d6u); RETCHK(0x4fe7dbu, 0x4fe7d6u); LOADALL;
  /* 004fe7db add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe7de:;
  /* 004fe7de lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 004fe7e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe7e2 mov dword ptr [ebp - 0x48], 0x64fd04 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x64fd04u); }
  /* 004fe7e9 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fe7eeu; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fe7e9u); RETCHK(0x4fe7eeu, 0x4fe7e9u); LOADALL;
  /* 004fe7ee mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fe7f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe7f2 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe7f7u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe7f2u); RETCHK(0x4fe7f7u, 0x4fe7f2u); LOADALL;
  /* 004fe7f7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe7fa:;
  /* 004fe7fa mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004fe7fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fe7fe lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
  /* 004fe801 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fe802 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fe803 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fe808u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fe803u); RETCHK(0x4fe808u, 0x4fe803u); LOADALL;
  /* 004fe808 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fe80a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fe80b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fe810(CPU *c) {
  NATIVE_HOOK(0x4fe810u) REGS; LOADALL;
L_004fe810:;
  /* 004fe810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fe811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fe813 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fe815 push 0x620366 */ { u32 v_ = 0x620366u; esp -= 4; M32(esp) = v_; }
  /* 004fe81a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fe820 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe821 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fe828 sub esp, 0x388 */ { u32 a_ = esp, b_ = 0x388u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe82e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fe833 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe834 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004fe837 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe838 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fe839 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fe83c lea esi, [ebx + 0x34] */ esi = (u32)((u32)(ebx + 0x34u));
  /* 004fe83f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004fe842 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe847u; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe842u); RETCHK(0x4fe847u, 0x4fe842u); LOADALL;
  /* 004fe847 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe849 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe84b jne 0x4fe9d7 */ if (!ZF_) goto L_004fe9d7;
  /* 004fe851 mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 004fe856 lea edi, [ebp - 0x270] */ edi = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fe85c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fe85e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fe861 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe862 lea esi, [ebx + 0xcc] */ esi = (u32)((u32)(ebx + 0xccu));
  /* 004fe868 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe869 push 0x64fd08 */ { u32 v_ = 0x64fd08u; esp -= 4; M32(esp) = v_; }
  /* 004fe86e lea ecx, [ebp - 0x270] */ ecx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fe874 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004fe879 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe87a call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fe87fu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fe87au); RETCHK(0x4fe87fu, 0x4fe87au); LOADALL;
  /* 004fe87f push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 004fe881 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fe883 call 0x5fead0 */ esp -= 4; M32(esp) = 0x4fe888u; SAVEALL; F_005fead0(c); ABI_CHECK(0x5fead0u, 0x4fe883u); RETCHK(0x4fe888u, 0x4fe883u); LOADALL;
  /* 004fe888 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fe88a add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe88d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe88f je 0x4fe9c0 */ if (ZF_) goto L_004fe9c0;
  /* 004fe895 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fe898 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fe89b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe89c add edi, 0x34 */ { u32 a_ = edi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fe89f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe8a0 mov dword ptr [ebp - 0x374], edi */ { const u32 m_ = (u32)(ebp + 0xfffffc8cu); M32(m_) = (u32)(edi); }
  /* 004fe8a6 call 0x54d170 */ esp -= 4; M32(esp) = 0x4fe8abu; SAVEALL; F_0054d170(c); ABI_CHECK(0x54d170u, 0x4fe8a6u); RETCHK(0x4fe8abu, 0x4fe8a6u); LOADALL;
  /* 004fe8ab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe8ad jl 0x4fe9b7 */ if (LT_) goto L_004fe9b7;
  /* 004fe8b3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fe8b6 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 004fe8b8 call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fe8bdu; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fe8b8u); RETCHK(0x4fe8bdu, 0x4fe8b8u); LOADALL;
  /* 004fe8bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fe8be mov dword ptr [ebp - 0x378], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc88u); M32(m_) = (u32)(eax); }
  /* 004fe8c4 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe8c9u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe8c4u); RETCHK(0x4fe8c9u, 0x4fe8c4u); LOADALL;
  /* 004fe8c9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe8cc mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fe8d3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fe8d6 add ecx, 0xac */ { u32 a_ = ecx, b_ = 0xacu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fe8dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe8dd lea edi, [ebp - 0x70] */ edi = (u32)((u32)(ebp + 0xffffff90u));
  /* 004fe8e0 call 0x4fc270 */ esp -= 4; M32(esp) = 0x4fe8e5u; SAVEALL; F_004fc270(c); ABI_CHECK(0x4fc270u, 0x4fe8e0u); RETCHK(0x4fe8e5u, 0x4fe8e0u); LOADALL;
  /* 004fe8e5 lea edx, [ebp - 0x270] */ edx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fe8eb mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004fe8ef push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe8f0 mov dword ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fe8f7 call dword ptr [0x62e494] */ { const u32 m_ = (u32)(0x62e494u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fe8fdu; SAVEALL; call_ind(c, t_); RETCHK(0x4fe8fdu, 0x4fe8f7u); LOADALL; }
  /* 004fe8fd cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fe900 jne 0x4fe916 */ if (!ZF_) goto L_004fe916;
  /* 004fe902 lea eax, [ebp - 0x270] */ eax = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fe908 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe909 call 0x4fd950 */ esp -= 4; M32(esp) = 0x4fe90eu; SAVEALL; F_004fd950(c); ABI_CHECK(0x4fd950u, 0x4fe909u); RETCHK(0x4fe90eu, 0x4fe909u); LOADALL;
  /* 004fe90e mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fe911 jmp 0x4fe99a */ goto L_004fe99a;
L_004fe916:;
  /* 004fe916 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fe919 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fe91a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fe91b lea ecx, [ebp - 0x270] */ ecx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 004fe921 call 0x4fc3b0 */ esp -= 4; M32(esp) = 0x4fe926u; SAVEALL; F_004fc3b0(c); ABI_CHECK(0x4fc3b0u, 0x4fe921u); RETCHK(0x4fe926u, 0x4fe921u); LOADALL;
  /* 004fe926 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe929 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004fe92d mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004fe930 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe932 je 0x4fe97b */ if (ZF_) goto L_004fe97b;
  /* 004fe934 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fe937 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fe939 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fe93a lea esi, [ebp - 0x394] */ esi = (u32)((u32)(ebp + 0xfffffc6cu));
  /* 004fe940 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x4fe945u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x4fe940u); RETCHK(0x4fe945u, 0x4fe940u); LOADALL;
  /* 004fe945 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fe948 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fe94a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fe94c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe94d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fe950 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 004fe954 call 0x404140 */ esp -= 4; M32(esp) = 0x4fe959u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4fe954u); RETCHK(0x4fe959u, 0x4fe954u); LOADALL;
  /* 004fe959 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fe95b mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004fe95f call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fe964u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fe95fu); RETCHK(0x4fe964u, 0x4fe95fu); LOADALL;
  /* 004fe964 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fe968 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004fe96b jae 0x4fe970 */ if (!CF_) goto L_004fe970;
  /* 004fe96d lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004fe970:;
  /* 004fe970 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe971 call 0x4fd950 */ esp -= 4; M32(esp) = 0x4fe976u; SAVEALL; F_004fd950(c); ABI_CHECK(0x4fd950u, 0x4fe971u); RETCHK(0x4fe976u, 0x4fe971u); LOADALL;
  /* 004fe976 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fe979 jmp 0x4fe992 */ goto L_004fe992;
L_004fe97b:;
  /* 004fe97b mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fe97e mov eax, dword ptr [ebp - 0x374] */ { const u32 m_ = (u32)(ebp + 0xfffffc8cu); eax = (u32)(M32(m_)); }
  /* 004fe984 call 0x54d270 */ esp -= 4; M32(esp) = 0x4fe989u; SAVEALL; F_0054d270(c); ABI_CHECK(0x54d270u, 0x4fe984u); RETCHK(0x4fe989u, 0x4fe984u); LOADALL;
  /* 004fe989 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe98a call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fe98fu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fe98au); RETCHK(0x4fe98fu, 0x4fe98au); LOADALL;
  /* 004fe98f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe992:;
  /* 004fe992 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fe995 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fe99au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fe995u); RETCHK(0x4fe99au, 0x4fe995u); LOADALL;
L_004fe99a:;
  /* 004fe99a lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 004fe99d call 0x4fc300 */ esp -= 4; M32(esp) = 0x4fe9a2u; SAVEALL; F_004fc300(c); ABI_CHECK(0x4fc300u, 0x4fe99du); RETCHK(0x4fe9a2u, 0x4fe99du); LOADALL;
  /* 004fe9a2 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004fe9a9 mov eax, dword ptr [ebp - 0x378] */ { const u32 m_ = (u32)(ebp + 0xfffffc88u); eax = (u32)(M32(m_)); }
  /* 004fe9af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fe9b0 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fe9b5u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fe9b0u); RETCHK(0x4fe9b5u, 0x4fe9b0u); LOADALL;
  /* 004fe9b5 jmp 0x4fe9bd */ goto L_004fe9bd;
L_004fe9b7:;
  /* 004fe9b7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fe9b8 call 0x5fe99e */ esp -= 4; M32(esp) = 0x4fe9bdu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x4fe9b8u); RETCHK(0x4fe9bdu, 0x4fe9b8u); LOADALL;
L_004fe9bd:;
  /* 004fe9bd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fe9c0:;
  /* 004fe9c0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fe9c3 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fe9c6 add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fe9c9 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe9ceu; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe9c9u); RETCHK(0x4fe9ceu, 0x4fe9c9u); LOADALL;
  /* 004fe9ce mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe9d0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe9d2 je 0x4fea01 */ if (ZF_) goto L_004fea01;
  /* 004fe9d4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004fe9d7:;
  /* 004fe9d7 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004fe9d9 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fe9dc inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fe9dd sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fe9e0 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 004fe9e2 je 0x4feab4 */ if (ZF_) goto L_004feab4;
  /* 004fe9e8 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fe9eb je 0x4fea1e */ if (ZF_) goto L_004fea1e;
  /* 004fe9ed dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fe9ee jne 0x4fea01 */ if (!ZF_) goto L_004fea01;
  /* 004fe9f0 mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 004fe9f3 lea esi, [ebx + 0x34] */ esi = (u32)((u32)(ebx + 0x34u));
  /* 004fe9f6 call 0x54d220 */ esp -= 4; M32(esp) = 0x4fe9fbu; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fe9f6u); RETCHK(0x4fe9fbu, 0x4fe9f6u); LOADALL;
  /* 004fe9fb mov esi, eax */ { esi = (u32)(eax); }
  /* 004fe9fd test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fe9ff jne 0x4fe9d7 */ if (!ZF_) goto L_004fe9d7;
L_004fea01:;
  /* 004fea01 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fea03:;
  /* 004fea03 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fea06 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fea07 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fea08 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fea0f mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004fea12 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fea13 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fea18u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fea13u); RETCHK(0x4fea18u, 0x4fea13u); LOADALL;
  /* 004fea18 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fea1a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fea1b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fea1e:;
  /* 004fea1e mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 004fea20 call 0x5aca20 */ esp -= 4; M32(esp) = 0x4fea25u; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x4fea20u); RETCHK(0x4fea25u, 0x4fea20u); LOADALL;
  /* 004fea25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fea26 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fea29 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fea2eu; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fea29u); RETCHK(0x4fea2eu, 0x4fea29u); LOADALL;
  /* 004fea2e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fea31 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 004fea38 push 0x3c */ { u32 v_ = 0x3cu; esp -= 4; M32(esp) = v_; }
  /* 004fea3a mov dword ptr [ebp - 0x70], 0x64fd04 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0x64fd04u); }
  /* 004fea41 call 0x5b18a0 */ esp -= 4; M32(esp) = 0x4fea46u; SAVEALL; F_005b18a0(c); ABI_CHECK(0x5b18a0u, 0x4fea41u); RETCHK(0x4fea46u, 0x4fea41u); LOADALL;
  /* 004fea46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fea47 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 004fea4a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fea4b call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4fea50u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4fea4bu); RETCHK(0x4fea50u, 0x4fea4bu); LOADALL;
  /* 004fea50 mov byte ptr [ebp - 0x2d], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)(0x0u); }
  /* 004fea54 mov dword ptr [ebp - 0x6c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x0u); }
  /* 004fea5b lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 004fea5e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fea5f add ebx, 0xcc */ { u32 a_ = ebx, b_ = 0xccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fea65 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fea66 push 0x64fe30 */ { u32 v_ = 0x64fe30u; esp -= 4; M32(esp) = v_; }
  /* 004fea6b lea edx, [ebp - 0x370] */ edx = (u32)((u32)(ebp + 0xfffffc90u));
  /* 004fea71 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 004fea76 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fea77 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 004fea7b call 0x5fe928 */ esp -= 4; M32(esp) = 0x4fea80u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4fea7bu); RETCHK(0x4fea80u, 0x4fea7bu); LOADALL;
  /* 004fea80 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fea83 lea eax, [ebp - 0x370] */ eax = (u32)((u32)(ebp + 0xfffffc90u));
  /* 004fea89 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fea8a call 0x4fd950 */ esp -= 4; M32(esp) = 0x4fea8fu; SAVEALL; F_004fd950(c); ABI_CHECK(0x4fd950u, 0x4fea8au); RETCHK(0x4fea8fu, 0x4fea8au); LOADALL;
  /* 004fea8f lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 004fea92 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fea93 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 004fea95 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fea9c mov dword ptr [ebp - 0x70], 0x64fd04 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0x64fd04u); }
  /* 004feaa3 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4feaa8u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4feaa3u); RETCHK(0x4feaa8u, 0x4feaa3u); LOADALL;
  /* 004feaa8 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004feaab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004feaac call 0x5aca00 */ esp -= 4; M32(esp) = 0x4feab1u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4feaacu); RETCHK(0x4feab1u, 0x4feaacu); LOADALL;
  /* 004feab1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004feab4:;
  /* 004feab4 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004feab7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004feab9 je 0x4fea03 */ if (ZF_) goto L_004fea03;
  /* 004feabf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004feac2 mov dword ptr [eax + 0x3c], ecx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 004feac5 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004feac8 mov dword ptr [eax + 0x40], edx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(edx); }
  /* 004feacb jmp 0x4fea03 */ goto L_004fea03;
}

void F_004fead0(CPU *c) {
  NATIVE_HOOK(0x4fead0u) REGS; LOADALL;
L_004fead0:;
  /* 004fead0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fead1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fead3 add esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fead6 call 0x54d220 */ esp -= 4; M32(esp) = 0x4feadbu; SAVEALL; F_0054d220(c); ABI_CHECK(0x54d220u, 0x4fead6u); RETCHK(0x4feadbu, 0x4fead6u); LOADALL;
  /* 004feadb dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004feadc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004feadd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004feae0(CPU *c) {
  NATIVE_HOOK(0x4feae0u) REGS; LOADALL;
L_004feae0:;
  /* 004feae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004feae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004feae3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004feae5 push 0x61e067 */ { u32 v_ = 0x61e067u; esp -= 4; M32(esp) = v_; }
  /* 004feaea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004feaf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004feaf1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004feaf8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004feaf9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004feafa mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004feafd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004feaff cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004feb01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004feb02 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004feb03 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004feb06 je 0x4feb1f */ if (ZF_) goto L_004feb1f;
  /* 004feb08 mov dword ptr [ebx], 0x64fcf4 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x64fcf4u); }
  /* 004feb0e mov dword ptr [ebx + 0x64], 0x63d0e0 */ { const u32 m_ = (u32)(ebx + 0x64u); M32(m_) = (u32)(0x63d0e0u); }
  /* 004feb15 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004feb18 mov dword ptr [ebp - 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x1u); }
L_004feb1f:;
  /* 004feb1f mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 004feb21 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004feb24 mov dword ptr [ebx + edx], 0x64e81c */ { const u32 m_ = (u32)(ebx + edx); M32(m_) = (u32)(0x64e81cu); }
  /* 004feb2b mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004feb2e mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004feb30 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004feb33 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004feb35 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004feb37 call 0x601a39 */ esp -= 4; M32(esp) = 0x4feb3cu; SAVEALL; F_00601a39(c); ABI_CHECK(0x601a39u, 0x4feb37u); RETCHK(0x4feb3cu, 0x4feb37u); LOADALL;
  /* 004feb3c lea edi, [ebx + 8] */ edi = (u32)((u32)(ebx + 0x8u));
  /* 004feb3f push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 004feb41 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004feb43 mov dword ptr [esi + 0x28], edi */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edi); }
  /* 004feb46 mov dword ptr [esi + 0x2c], 0 */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 004feb4d call 0x4d3f40 */ esp -= 4; M32(esp) = 0x4feb52u; SAVEALL; F_004d3f40(c); ABI_CHECK(0x4d3f40u, 0x4feb4du); RETCHK(0x4feb52u, 0x4feb4du); LOADALL;
  /* 004feb52 mov byte ptr [esi + 0x30], al */ { const u32 m_ = (u32)(esi + 0x30u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004feb55 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 004feb58 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004feb5a jne 0x4feb6f */ if (!ZF_) goto L_004feb6f;
  /* 004feb5c mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004feb5f or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004feb62 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004feb65 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004feb67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004feb68 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004feb6a call 0x601918 */ esp -= 4; M32(esp) = 0x4feb6fu; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4feb6au); RETCHK(0x4feb6fu, 0x4feb6au); LOADALL;
L_004feb6f:;
  /* 004feb6f mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004feb76 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 004feb7d mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 004feb7f mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004feb82 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004feb84 mov dword ptr [ebx + edx], 0x64fcfc */ { const u32 m_ = (u32)(ebx + edx); M32(m_) = (u32)(0x64fcfcu); }
  /* 004feb8b call 0x4d25b0 */ esp -= 4; M32(esp) = 0x4feb90u; SAVEALL; F_004d25b0(c); ABI_CHECK(0x4d25b0u, 0x4feb8bu); RETCHK(0x4feb90u, 0x4feb8bu); LOADALL;
  /* 004feb90 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004feb92 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004feb94 mov dword ptr [edi], 0x63d148 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x63d148u); }
  /* 004feb9a mov dword ptr [edi + 0x48], esi */ { const u32 m_ = (u32)(edi + 0x48u); M32(m_) = (u32)(esi); }
  /* 004feb9d mov byte ptr [edi + 0x54], 0 */ { const u32 m_ = (u32)(edi + 0x54u); M8(m_) = (u8)(0x0u); }
  /* 004feba1 mov byte ptr [edi + 0x4c], 0 */ { const u32 m_ = (u32)(edi + 0x4cu); M8(m_) = (u8)(0x0u); }
  /* 004feba5 call 0x4d3b10 */ esp -= 4; M32(esp) = 0x4febaau; SAVEALL; F_004d3b10(c); ABI_CHECK(0x4d3b10u, 0x4feba5u); RETCHK(0x4febaau, 0x4feba5u); LOADALL;
  /* 004febaa mov dword ptr [edi + 0x58], esi */ { const u32 m_ = (u32)(edi + 0x58u); M32(m_) = (u32)(esi); }
  /* 004febad mov eax, dword ptr [0x9b9294] */ { const u32 m_ = (u32)(0x9b9294u); eax = (u32)(M32(m_)); }
  /* 004febb2 mov dword ptr [edi + 0x50], eax */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(eax); }
  /* 004febb5 mov ecx, dword ptr [0x9b9294] */ { const u32 m_ = (u32)(0x9b9294u); ecx = (u32)(M32(m_)); }
  /* 004febbb mov dword ptr [edi + 0x40], ecx */ { const u32 m_ = (u32)(edi + 0x40u); M32(m_) = (u32)(ecx); }
  /* 004febbe mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004febc1 mov dword ptr [edi + 0x3c], esi */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(esi); }
  /* 004febc4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004febc5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004febc6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004febc8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004febc9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004febd0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004febd2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004febd3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004febe0(CPU *c) {
  NATIVE_HOOK(0x4febe0u) REGS; LOADALL;
L_004febe0:;
  /* 004febe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004febe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004febe3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004febe5 push 0x61bc6b */ { u32 v_ = 0x61bc6bu; esp -= 4; M32(esp) = v_; }
  /* 004febea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004febf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004febf1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004febf8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004febf9 mov eax, dword ptr [ecx - 0x64] */ { const u32 m_ = (u32)(ecx + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 004febfc mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004febff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fec00 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 004fec03 mov dword ptr [edx + ecx - 0x64], 0x64fcfc */ { const u32 m_ = (u32)(edx + ecx + 0xffffff9cu); M32(m_) = (u32)(0x64fcfcu); }
  /* 004fec0b lea esi, [ecx - 0x5c] */ esi = (u32)((u32)(ecx + 0xffffffa4u));
  /* 004fec0e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fec10 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fec17 call 0x4fec40 */ esp -= 4; M32(esp) = 0x4fec1cu; SAVEALL; F_004fec40(c); ABI_CHECK(0x4fec40u, 0x4fec17u); RETCHK(0x4fec1cu, 0x4fec17u); LOADALL;
  /* 004fec1c mov eax, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004fec1f mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fec22 mov dword ptr [ecx + esi - 8], 0x64e81c */ { const u32 m_ = (u32)(ecx + esi + 0xfffffff8u); M32(m_) = (u32)(0x64e81cu); }
  /* 004fec2a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fec2d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fec2e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fec35 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fec37 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fec38 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fec40(CPU *c) {
  NATIVE_HOOK(0x4fec40u) REGS; LOADALL;
L_004fec40:;
  /* 004fec40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fec41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fec43 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fec45 push 0x61bc48 */ { u32 v_ = 0x61bc48u; esp -= 4; M32(esp) = v_; }
  /* 004fec4a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fec50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fec51 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fec58 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fec59 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fec5a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fec5b mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004fec5d mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 004fec60 mov dword ptr [edi], 0x63d148 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x63d148u); }
  /* 004fec66 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fec6d mov al, byte ptr [edi + 0x54] */ { const u32 m_ = (u32)(edi + 0x54u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fec70 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fec72 je 0x4fec79 */ if (ZF_) goto L_004fec79;
  /* 004fec74 call 0x4ff600 */ esp -= 4; M32(esp) = 0x4fec79u; SAVEALL; F_004ff600(c); ABI_CHECK(0x4ff600u, 0x4fec74u); RETCHK(0x4fec79u, 0x4fec74u); LOADALL;
L_004fec79:;
  /* 004fec79 mov esi, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); esi = (u32)(M32(m_)); }
  /* 004fec7c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fec7e je 0x4fecad */ if (ZF_) goto L_004fecad;
  /* 004fec80 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fec84 jb 0x4fec92 */ if (CF_) goto L_004fec92;
  /* 004fec86 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fec89 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fec8a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fec8fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fec8au); RETCHK(0x4fec8fu, 0x4fec8au); LOADALL;
  /* 004fec8f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fec92:;
  /* 004fec92 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 004fec99 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 004feca0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004feca1 mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 004feca5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fecaau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4feca5u); RETCHK(0x4fecaau, 0x4feca5u); LOADALL;
  /* 004fecaa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fecad:;
  /* 004fecad mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fecaf mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004fecb6 call 0x4b12e0 */ esp -= 4; M32(esp) = 0x4fecbbu; SAVEALL; F_004b12e0(c); ABI_CHECK(0x4b12e0u, 0x4fecb6u); RETCHK(0x4fecbbu, 0x4fecb6u); LOADALL;
  /* 004fecbb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fecbe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fecbf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fecc0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fecc7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fecc9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fecca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fecd0(CPU *c) {
  NATIVE_HOOK(0x4fecd0u) REGS; LOADALL;
L_004fecd0:;
  /* 004fecd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fecd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fecd3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fecd5 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 004fecda mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fece0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fece1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fece8 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004feceb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004fecf0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fecf1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004fecf4 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fecf7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fecf8 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004fecfb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fecfd jne 0x4fed06 */ if (!ZF_) goto L_004fed06;
  /* 004fecff xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fed01 jmp 0x4fee8a */ goto L_004fee8a;
L_004fed06:;
  /* 004fed06 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 004fed09 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fed0b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fed0d je 0x4fed2f */ if (ZF_) goto L_004fed2f;
  /* 004fed0f mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 004fed12 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004fed14 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fed16 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fed18 jae 0x4fed2f */ if (!CF_) goto L_004fed2f;
  /* 004fed1a dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fed1c mov esi, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); esi = (u32)(M32(m_)); }
  /* 004fed1f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004fed21 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 004fed24 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 004fed26 mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fed28 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fed2a jmp 0x4fee8a */ goto L_004fee8a;
L_004fed2f:;
  /* 004fed2f mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004fed32 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fed34 jne 0x4fed3e */ if (!ZF_) goto L_004fed3e;
L_004fed36:;
  /* 004fed36 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fed39 jmp 0x4fee8a */ goto L_004fee8a;
L_004fed3e:;
  /* 004fed3e mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004fed41 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fed43 jne 0x4fed5e */ if (!ZF_) goto L_004fed5e;
  /* 004fed45 movsx edx, bl */ { edx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 004fed48 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fed49 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fed4a call 0x5feac4 */ esp -= 4; M32(esp) = 0x4fed4fu; SAVEALL; F_005feac4(c); ABI_CHECK(0x5feac4u, 0x4fed4au); RETCHK(0x4fed4fu, 0x4fed4au); LOADALL;
  /* 004fed4f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fed52 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fed55 je 0x4fed36 */ if (ZF_) goto L_004fed36;
  /* 004fed57 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fed59 jmp 0x4fee8a */ goto L_004fee8a;
L_004fed5e:;
  /* 004fed5e mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004fed61 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fed63 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fed65 mov byte ptr [ebp - 0x2d], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fed68 call 0x404240 */ esp -= 4; M32(esp) = 0x4fed6du; SAVEALL; F_00404240(c); ABI_CHECK(0x404240u, 0x4fed68u); RETCHK(0x4fed6du, 0x4fed68u); LOADALL;
  /* 004fed6d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004fed6f mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 004fed74 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fed77 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004fed79 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 004fed7d mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004fed80 mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 004fed83 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 004fed86 mov dword ptr [ebp - 0x18], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x8u); }
  /* 004fed8d jae 0x4fed92 */ if (!CF_) goto L_004fed92;
  /* 004fed8f lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_004fed92:;
  /* 004fed92 mov byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 004fed96 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fed9d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_004fed9e:;
  /* 004fed9e mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004feda1 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
L_004feda4:;
  /* 004feda4 cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004feda7 mov edx, eax */ { edx = (u32)(eax); }
  /* 004feda9 jae 0x4fedb0 */ if (!CF_) goto L_004fedb0;
  /* 004fedab lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004fedae mov eax, edx */ { eax = (u32)(edx); }
L_004fedb0:;
  /* 004fedb0 mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004fedb3 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 004fedb5 lea ebx, [ebp - 0x34] */ ebx = (u32)((u32)(ebp + 0xffffffccu));
  /* 004fedb8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fedb9 mov ebx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ebx = (u32)(M32(m_)); }
  /* 004fedbc add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fedbe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fedbf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fedc0 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 004fedc3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fedc4 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fedc7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fedc8 lea eax, [ebp - 0x2d] */ eax = (u32)((u32)(ebp + 0xffffffd3u));
  /* 004fedcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fedcc lea eax, [esi + 0x50] */ eax = (u32)((u32)(esi + 0x50u));
  /* 004fedcf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fedd0 call dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fedd3u; SAVEALL; call_ind(c, t_); RETCHK(0x4fedd3u, 0x4fedd0u); LOADALL; }
  /* 004fedd3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fedd5 jl 0x4fee7e */ if (LT_) goto L_004fee7e;
  /* 004feddb cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fedde jg 0x4fee3f */ if (!(ZF_|LT_)) goto L_004fee3f;
  /* 004fede0 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
  /* 004fede3 cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fede6 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004fede9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fedeb jae 0x4fedf0 */ if (!CF_) goto L_004fedf0;
  /* 004feded lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_004fedf0:;
  /* 004fedf0 mov edi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edi = (u32)(M32(m_)); }
  /* 004fedf3 sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fedf5 je 0x4fee19 */ if (ZF_) goto L_004fee19;
  /* 004fedf7 cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fedfa jae 0x4fedff */ if (!CF_) goto L_004fedff;
  /* 004fedfc lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004fedff:;
  /* 004fedff mov ecx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 004fee02 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fee03 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fee04 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fee06 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fee07 call 0x5feadc */ esp -= 4; M32(esp) = 0x4fee0cu; SAVEALL; F_005feadc(c); ABI_CHECK(0x5feadcu, 0x4fee07u); RETCHK(0x4fee0cu, 0x4fee07u); LOADALL;
  /* 004fee0c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fee0f cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fee11 jne 0x4fee7e */ if (!ZF_) goto L_004fee7e;
  /* 004fee13 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004fee16 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
L_004fee19:;
  /* 004fee19 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 004fee1c lea edx, [ebp - 0x2d] */ edx = (u32)((u32)(ebp + 0xffffffd3u));
  /* 004fee1f cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fee21 mov byte ptr [esi + 0x4c], 1 */ { const u32 m_ = (u32)(esi + 0x4cu); M8(m_) = (u8)(0x1u); }
  /* 004fee25 jne 0x4fee71 */ if (!ZF_) goto L_004fee71;
  /* 004fee27 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fee29 jne 0x4feda4 */ if (!ZF_) goto L_004feda4;
  /* 004fee2f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fee30 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004fee32 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fee35 call 0x419e40 */ esp -= 4; M32(esp) = 0x4fee3au; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x4fee35u); RETCHK(0x4fee3au, 0x4fee35u); LOADALL;
  /* 004fee3a jmp 0x4fed9e */ goto L_004fed9e;
L_004fee3f:;
  /* 004fee3f cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fee42 jne 0x4fee7e */ if (!ZF_) goto L_004fee7e;
  /* 004fee44 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004fee47 mov cl, byte ptr [ebp - 0x2d] */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fee4a call 0x4fc390 */ esp -= 4; M32(esp) = 0x4fee4fu; SAVEALL; F_004fc390(c); ABI_CHECK(0x4fc390u, 0x4fee4au); RETCHK(0x4fee4fu, 0x4fee4au); LOADALL;
  /* 004fee4f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fee51 je 0x4fee62 */ if (ZF_) goto L_004fee62;
  /* 004fee53 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fee56 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fee59 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fee5eu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fee59u); RETCHK(0x4fee5eu, 0x4fee59u); LOADALL;
  /* 004fee5e mov eax, esi */ { eax = (u32)(esi); }
  /* 004fee60 jmp 0x4fee89 */ goto L_004fee89;
L_004fee62:;
  /* 004fee62 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fee65 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004fee68 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fee6du; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fee68u); RETCHK(0x4fee6du, 0x4fee68u); LOADALL;
  /* 004fee6d mov eax, esi */ { eax = (u32)(esi); }
  /* 004fee6f jmp 0x4fee89 */ goto L_004fee89;
L_004fee71:;
  /* 004fee71 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fee74 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fee79u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fee74u); RETCHK(0x4fee79u, 0x4fee74u); LOADALL;
  /* 004fee79 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fee7c jmp 0x4fee89 */ goto L_004fee89;
L_004fee7e:;
  /* 004fee7e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004fee81 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4fee86u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4fee81u); RETCHK(0x4fee86u, 0x4fee81u); LOADALL;
  /* 004fee86 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fee89:;
  /* 004fee89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004fee8a:;
  /* 004fee8a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fee8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fee8e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fee95 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004fee98 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fee99 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fee9eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fee99u); RETCHK(0x4fee9eu, 0x4fee99u); LOADALL;
  /* 004fee9e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004feea0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004feea1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004feeb0(CPU *c) {
  NATIVE_HOOK(0x4feeb0u) REGS; LOADALL;
L_004feeb0:;
  /* 004feeb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004feeb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004feeb3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004feeb4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004feeb7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004feeb8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004feeba mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004feebd mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004feebf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004feec1 je 0x4feef2 */ if (ZF_) goto L_004feef2;
  /* 004feec3 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004feec6 cmp dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004feec8 jae 0x4feef2 */ if (!CF_) goto L_004feef2;
  /* 004feeca cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004feecd je 0x4feed7 */ if (ZF_) goto L_004feed7;
  /* 004feecf movzx edx, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); edx = (u32)(M8(m_)); }
  /* 004feed3 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004feed5 jne 0x4feef2 */ if (!ZF_) goto L_004feef2;
L_004feed7:;
  /* 004feed7 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 004feeda inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004feedc mov esi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); esi = (u32)(M32(m_)); }
  /* 004feedf dec dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004feee1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004feee3 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004feee6 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 004feee9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004feeea dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004feeeb and eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004feeed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004feeee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004feeef ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004feef2:;
  /* 004feef2 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004feef5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004feef7 je 0x4fef43 */ if (ZF_) goto L_004fef43;
  /* 004feef9 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004feefc je 0x4fef43 */ if (ZF_) goto L_004fef43;
  /* 004feefe mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004fef01 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fef03 jne 0x4fef17 */ if (!ZF_) goto L_004fef17;
  /* 004fef05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fef06 movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 004fef09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fef0a call 0x5feaca */ esp -= 4; M32(esp) = 0x4fef0fu; SAVEALL; F_005feaca(c); ABI_CHECK(0x5feacau, 0x4fef0au); RETCHK(0x4fef0fu, 0x4fef0au); LOADALL;
  /* 004fef0f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fef12 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fef15 jne 0x4fef3b */ if (!ZF_) goto L_004fef3b;
L_004fef17:;
  /* 004fef17 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004fef1a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004fef1c lea eax, [esi + 0x44] */ eax = (u32)((u32)(esi + 0x44u));
  /* 004fef1f cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fef21 je 0x4fef43 */ if (ZF_) goto L_004fef43;
  /* 004fef23 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 004fef26 mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fef28 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004fef2a mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004fef2d mov edx, esi */ { edx = (u32)(esi); }
  /* 004fef2f sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fef31 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004fef33 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 004fef36 add edx, 0x45 */ { u32 a_ = edx, b_ = 0x45u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fef39 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
L_004fef3b:;
  /* 004fef3b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fef3c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fef3e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fef3f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fef40 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fef43:;
  /* 004fef43 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fef44 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fef47 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fef48 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fef49 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fef50(CPU *c) {
  NATIVE_HOOK(0x4fef50u) REGS; LOADALL;
L_004fef50:;
  /* 004fef50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fef51 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fef53 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004fef56 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fef58 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fef5a je 0x4fef70 */ if (ZF_) goto L_004fef70;
  /* 004fef5c mov edx, eax */ { edx = (u32)(eax); }
  /* 004fef5e mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004fef60 mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 004fef63 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 004fef65 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fef67 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fef69 jae 0x4fef70 */ if (!CF_) goto L_004fef70;
  /* 004fef6b movzx eax, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M8(m_)); }
  /* 004fef6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fef6f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fef70:;
  /* 004fef70 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004fef72 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fef73 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fef75 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fef78u; SAVEALL; call_ind(c, t_); RETCHK(0x4fef78u, 0x4fef75u); LOADALL; }
  /* 004fef78 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fef7a cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fef7d jne 0x4fef84 */ if (!ZF_) goto L_004fef84;
  /* 004fef7f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fef80 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fef82 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fef83 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fef84:;
  /* 004fef84 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004fef86 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fef87 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fef89 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fef8cu; SAVEALL; call_ind(c, t_); RETCHK(0x4fef8cu, 0x4fef89u); LOADALL; }
  /* 004fef8c mov eax, edi */ { eax = (u32)(edi); }
  /* 004fef8e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fef8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fef90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fefa0(CPU *c) {
  NATIVE_HOOK(0x4fefa0u) REGS; LOADALL;
L_004fefa0:;
  /* 004fefa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fefa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fefa3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fefa6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fefa7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fefa9 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004fefac cmp dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fefaf je 0x4fefd2 */ if (ZF_) goto L_004fefd2;
  /* 004fefb1 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 004fefb4 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 004fefb6 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004fefb8 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fefba cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fefbc jae 0x4fefd2 */ if (!CF_) goto L_004fefd2;
  /* 004fefbe dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fefc0 mov esi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); esi = (u32)(M32(m_)); }
  /* 004fefc3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004fefc5 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 004fefc8 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 004fefca movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 004fefcd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fefce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fefd0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fefd1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fefd2:;
  /* 004fefd2 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004fefd5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fefd7 jne 0x4fefe1 */ if (!ZF_) goto L_004fefe1;
L_004fefd9:;
  /* 004fefd9 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fefdc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fefdd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fefdf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fefe0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fefe1:;
  /* 004fefe1 mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004fefe4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fefe6 jne 0x4feffe */ if (!ZF_) goto L_004feffe;
  /* 004fefe8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fefe9 call 0x5feabe */ esp -= 4; M32(esp) = 0x4fefeeu; SAVEALL; F_005feabe(c); ABI_CHECK(0x5feabeu, 0x4fefe9u); RETCHK(0x4fefeeu, 0x4fefe9u); LOADALL;
  /* 004fefee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004feff1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004feff4 je 0x4fefd9 */ if (ZF_) goto L_004fefd9;
  /* 004feff6 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 004feff9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004feffa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004feffc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004feffd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004feffe:;
  /* 004feffe mov edx, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); edx = (u32)(M32(m_)); }
  /* 004ff001 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004ff004 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff005 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff006 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ff008 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ff00a mov dword ptr [esi + 0x40], edx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(edx); }
  /* 004ff00d call 0x404240 */ esp -= 4; M32(esp) = 0x4ff012u; SAVEALL; F_00404240(c); ABI_CHECK(0x404240u, 0x4ff00du); RETCHK(0x4ff012u, 0x4ff00du); LOADALL;
  /* 004ff012 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff015 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff016 call 0x5feabe */ esp -= 4; M32(esp) = 0x4ff01bu; SAVEALL; F_005feabe(c); ABI_CHECK(0x5feabeu, 0x4ff016u); RETCHK(0x4ff01bu, 0x4ff016u); LOADALL;
  /* 004ff01b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff01e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff021 je 0x4ff0da */ if (ZF_) goto L_004ff0da;
  /* 004ff027 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 004ff02c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004ff030:;
  /* 004ff030 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004ff033 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff034 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ff036 call 0x419e40 */ esp -= 4; M32(esp) = 0x4ff03bu; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x4ff036u); RETCHK(0x4ff03bu, 0x4ff036u); LOADALL;
  /* 004ff03b mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004ff03e cmp dword ptr [eax + 0x18], edi */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff041 jb 0x4ff04b */ if (CF_) goto L_004ff04b;
  /* 004ff043 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ff046 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 004ff049 jmp 0x4ff051 */ goto L_004ff051;
L_004ff04b:;
  /* 004ff04b lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 004ff04e mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
L_004ff051:;
  /* 004ff051 cmp dword ptr [eax + 0x18], edi */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff054 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 004ff057 jb 0x4ff05e */ if (CF_) goto L_004ff05e;
  /* 004ff059 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ff05c jmp 0x4ff061 */ goto L_004ff061;
L_004ff05e:;
  /* 004ff05e add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_004ff061:;
  /* 004ff061 mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004ff064 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 004ff066 lea ebx, [ebp - 0x10] */ ebx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ff069 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff06a lea ebx, [ebp] */ ebx = (u32)((u32)(ebp));
  /* 004ff06d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff06e lea ebx, [ebp - 1] */ ebx = (u32)((u32)(ebp + 0xffffffffu));
  /* 004ff071 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff072 lea ebx, [ebp - 8] */ ebx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004ff075 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff076 mov ebx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ebx = (u32)(M32(m_)); }
  /* 004ff079 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004ff07b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff07c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff07d lea eax, [esi + 0x50] */ eax = (u32)((u32)(esi + 0x50u));
  /* 004ff080 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff081 call dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ff084u; SAVEALL; call_ind(c, t_); RETCHK(0x4ff084u, 0x4ff081u); LOADALL; }
  /* 004ff084 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004ff087 je 0x4ff0fc */ if (ZF_) goto L_004ff0fc;
  /* 004ff089 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ff08a je 0x4ff0a1 */ if (ZF_) goto L_004ff0a1;
  /* 004ff08c sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004ff08f jne 0x4ff0da */ if (!ZF_) goto L_004ff0da;
  /* 004ff091 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004ff094 cmp dword ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff098 jae 0x4ff0e4 */ if (!CF_) goto L_004ff0e4;
  /* 004ff09a mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 004ff09f jmp 0x4ff0c5 */ goto L_004ff0c5;
L_004ff0a1:;
  /* 004ff0a1 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004ff0a4 mov eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004ff0a7 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 004ff0ac cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff0ae jb 0x4ff0b5 */ if (CF_) goto L_004ff0b5;
  /* 004ff0b0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ff0b3 jmp 0x4ff0b8 */ goto L_004ff0b8;
L_004ff0b5:;
  /* 004ff0b5 lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
L_004ff0b8:;
  /* 004ff0b8 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004ff0bb sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004ff0bd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ff0be push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ff0c0 call 0x404240 */ esp -= 4; M32(esp) = 0x4ff0c5u; SAVEALL; F_00404240(c); ABI_CHECK(0x404240u, 0x4ff0c0u); RETCHK(0x4ff0c5u, 0x4ff0c0u); LOADALL;
L_004ff0c5:;
  /* 004ff0c5 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff0c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff0c9 call 0x5feabe */ esp -= 4; M32(esp) = 0x4ff0ceu; SAVEALL; F_005feabe(c); ABI_CHECK(0x5feabeu, 0x4ff0c9u); RETCHK(0x4ff0ceu, 0x4ff0c9u); LOADALL;
  /* 004ff0ce add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff0d1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff0d4 jne 0x4ff030 */ if (!ZF_) goto L_004ff030;
L_004ff0da:;
  /* 004ff0da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff0db pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff0dc or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ff0df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff0e0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff0e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff0e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004ff0e4:;
  /* 004ff0e4 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004ff0e7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff0e8 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004ff0eb call 0x40ce20 */ esp -= 4; M32(esp) = 0x4ff0f0u; SAVEALL; F_0040ce20(c); ABI_CHECK(0x40ce20u, 0x4ff0ebu); RETCHK(0x4ff0f0u, 0x4ff0ebu); LOADALL;
  /* 004ff0f0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004ff0f2 movzx eax, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M8(m_)); }
  /* 004ff0f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff0f6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff0f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff0f8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff0fa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff0fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004ff0fc:;
  /* 004ff0fc mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004ff0ff lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 004ff102 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff103 call 0x40ce20 */ esp -= 4; M32(esp) = 0x4ff108u; SAVEALL; F_0040ce20(c); ABI_CHECK(0x40ce20u, 0x4ff103u); RETCHK(0x4ff108u, 0x4ff103u); LOADALL;
  /* 004ff108 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004ff10b mov edi, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edi = (u32)(M32(m_)); }
  /* 004ff10e mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004ff111 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004ff113 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004ff115 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004ff117 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff119 jle 0x4ff13a */ if ((ZF_|LT_)) goto L_004ff13a;
  /* 004ff11b jmp 0x4ff120 */ goto L_004ff120;
L_004ff120:;
  /* 004ff120 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004ff123 mov edx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); edx = (u32)(M32(m_)); }
  /* 004ff126 movsx ecx, byte ptr [edi + eax - 1] */ { const u32 m_ = (u32)(edi + eax + 0xffffffffu); ecx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 004ff12b dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ff12c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ff12d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff12e call 0x5feaca */ esp -= 4; M32(esp) = 0x4ff133u; SAVEALL; F_005feaca(c); ABI_CHECK(0x5feacau, 0x4ff12eu); RETCHK(0x4ff133u, 0x4ff12eu); LOADALL;
  /* 004ff133 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff136 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff138 jg 0x4ff120 */ if (!(ZF_|LT_)) goto L_004ff120;
L_004ff13a:;
  /* 004ff13a movzx eax, byte ptr [ebp - 1] */ { const u32 m_ = (u32)(ebp + 0xffffffffu); eax = (u32)(M8(m_)); }
  /* 004ff13e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff13f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff140 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff141 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff143 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff144 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ff150(CPU *c) {
  NATIVE_HOOK(0x4ff150u) REGS; LOADALL;
L_004ff150:;
  /* 004ff150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff153 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff156 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff157 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff159 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004ff15c mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 004ff15f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004ff161 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 004ff163 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004ff165 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff167 jbe 0x4ff1cc */ if ((CF_|ZF_)) goto L_004ff1cc;
  /* 004ff169 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004ff16b lea eax, [esi + 0x44] */ eax = (u32)((u32)(esi + 0x44u));
  /* 004ff16e cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff170 jne 0x4ff1cc */ if (!ZF_) goto L_004ff1cc;
  /* 004ff172 cmp dword ptr [ebp + 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff176 jne 0x4ff1cc */ if (!ZF_) goto L_004ff1cc;
  /* 004ff178 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004ff17b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff17d jne 0x4ff184 */ if (!ZF_) goto L_004ff184;
  /* 004ff17f dec dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ff182 jmp 0x4ff1cc */ goto L_004ff1cc;
L_004ff184:;
  /* 004ff184 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004ff187 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff188 mov edi, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edi = (u32)(M32(m_)); }
  /* 004ff18b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff18d jle 0x4ff1b9 */ if ((ZF_|LT_)) goto L_004ff1b9;
  /* 004ff18f nop */ ;
L_004ff190:;
  /* 004ff190 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004ff193 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004ff196 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ff197 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff19a jb 0x4ff1a1 */ if (CF_) goto L_004ff1a1;
  /* 004ff19c mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ff19f jmp 0x4ff1a4 */ goto L_004ff1a4;
L_004ff1a1:;
  /* 004ff1a1 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_004ff1a4:;
  /* 004ff1a4 mov edx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); edx = (u32)(M32(m_)); }
  /* 004ff1a7 movsx eax, byte ptr [eax + edi] */ { const u32 m_ = (u32)(eax + edi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 004ff1ab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ff1ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff1ad call 0x5feaca */ esp -= 4; M32(esp) = 0x4ff1b2u; SAVEALL; F_005feaca(c); ABI_CHECK(0x5feacau, 0x4ff1adu); RETCHK(0x4ff1b2u, 0x4ff1adu); LOADALL;
  /* 004ff1b2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff1b5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff1b7 jg 0x4ff190 */ if (!(ZF_|LT_)) goto L_004ff190;
L_004ff1b9:;
  /* 004ff1b9 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004ff1bc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ff1be push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ff1c0 call 0x404240 */ esp -= 4; M32(esp) = 0x4ff1c5u; SAVEALL; F_00404240(c); ABI_CHECK(0x404240u, 0x4ff1c0u); RETCHK(0x4ff1c5u, 0x4ff1c0u); LOADALL;
  /* 004ff1c5 mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 004ff1c8 mov dword ptr [esi + 0x50], ecx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ecx); }
  /* 004ff1cb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004ff1cc:;
  /* 004ff1cc mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff1cf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff1d1 je 0x4ff25c */ if (ZF_) goto L_004ff25c;
  /* 004ff1d7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff1d9 call 0x4ff660 */ esp -= 4; M32(esp) = 0x4ff1deu; SAVEALL; F_004ff660(c); ABI_CHECK(0x4ff660u, 0x4ff1d9u); RETCHK(0x4ff1deu, 0x4ff1d9u); LOADALL;
  /* 004ff1de test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ff1e0 je 0x4ff25c */ if (ZF_) goto L_004ff25c;
  /* 004ff1e2 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004ff1e5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff1e7 jne 0x4ff1ef */ if (!ZF_) goto L_004ff1ef;
  /* 004ff1e9 cmp dword ptr [ebp + 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff1ed je 0x4ff204 */ if (ZF_) goto L_004ff204;
L_004ff1ef:;
  /* 004ff1ef mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004ff1f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ff1f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff1f4 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff1f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff1f8 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4ff1fdu; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4ff1f8u); RETCHK(0x4ff1fdu, 0x4ff1f8u); LOADALL;
  /* 004ff1fd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff200 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff202 jne 0x4ff25c */ if (!ZF_) goto L_004ff25c;
L_004ff204:;
  /* 004ff204 mov edx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); edx = (u32)(M32(m_)); }
  /* 004ff207 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004ff20a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff20b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ff20c call 0x5feae2 */ esp -= 4; M32(esp) = 0x4ff211u; SAVEALL; F_005feae2(c); ABI_CHECK(0x5feae2u, 0x4ff20cu); RETCHK(0x4ff211u, 0x4ff20cu); LOADALL;
  /* 004ff211 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff214 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff216 jne 0x4ff25c */ if (!ZF_) goto L_004ff25c;
  /* 004ff218 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004ff21b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004ff21d lea eax, [esi + 0x44] */ eax = (u32)((u32)(esi + 0x44u));
  /* 004ff220 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff222 jne 0x4ff23a */ if (!ZF_) goto L_004ff23a;
  /* 004ff224 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 004ff227 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004ff229 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004ff22c mov edx, esi */ { edx = (u32)(esi); }
  /* 004ff22e sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004ff230 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004ff232 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 004ff235 add edx, 0x44 */ { u32 a_ = edx, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004ff238 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
L_004ff23a:;
  /* 004ff23a mov esi, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); esi = (u32)(M32(m_)); }
  /* 004ff23d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ff240 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004ff243 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004ff246 mov dword ptr [eax + 0x10], esi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(esi); }
  /* 004ff249 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 004ff24f mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004ff252 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 004ff255 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff256 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff258 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff259 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004ff25c:;
  /* 004ff25c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ff25f mov ecx, dword ptr [0x63cfcc] */ { const u32 m_ = (u32)(0x63cfccu); ecx = (u32)(M32(m_)); }
  /* 004ff265 mov edx, dword ptr [0x694598] */ { const u32 m_ = (u32)(0x694598u); edx = (u32)(M32(m_)); }
  /* 004ff26b mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004ff26d mov ecx, dword ptr [0x69459c] */ { const u32 m_ = (u32)(0x69459cu); ecx = (u32)(M32(m_)); }
  /* 004ff273 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 004ff276 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004ff279 mov edx, dword ptr [0x9b91ec] */ { const u32 m_ = (u32)(0x9b91ecu); edx = (u32)(M32(m_)); }
  /* 004ff27f mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 004ff282 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff283 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff285 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff286 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004ff290(CPU *c) {
  NATIVE_HOOK(0x4ff290u) REGS; LOADALL;
L_004ff290:;
  /* 004ff290 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff291 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff293 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff296 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004ff299 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff29a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff29c mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004ff29f mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004ff2a2 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff2a5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff2a7 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 004ff2aa je 0x4ff34e */ if (ZF_) goto L_004ff34e;
  /* 004ff2b0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff2b2 call 0x4ff660 */ esp -= 4; M32(esp) = 0x4ff2b7u; SAVEALL; F_004ff660(c); ABI_CHECK(0x4ff660u, 0x4ff2b2u); RETCHK(0x4ff2b7u, 0x4ff2b2u); LOADALL;
  /* 004ff2b7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ff2b9 je 0x4ff34e */ if (ZF_) goto L_004ff34e;
  /* 004ff2bf mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff2c2 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004ff2c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ff2c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff2c7 call 0x5feae8 */ esp -= 4; M32(esp) = 0x4ff2ccu; SAVEALL; F_005feae8(c); ABI_CHECK(0x5feae8u, 0x4ff2c7u); RETCHK(0x4ff2ccu, 0x4ff2c7u); LOADALL;
  /* 004ff2cc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff2cf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff2d1 jne 0x4ff34e */ if (!ZF_) goto L_004ff34e;
  /* 004ff2d3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004ff2d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff2d8 je 0x4ff2ed */ if (ZF_) goto L_004ff2ed;
  /* 004ff2da mov ecx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 004ff2dd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ff2df push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff2e0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff2e1 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x4ff2e6u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x4ff2e1u); RETCHK(0x4ff2e6u, 0x4ff2e1u); LOADALL;
  /* 004ff2e6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff2e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff2eb jne 0x4ff34e */ if (!ZF_) goto L_004ff34e;
L_004ff2ed:;
  /* 004ff2ed mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff2f0 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004ff2f3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ff2f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff2f5 call 0x5feae2 */ esp -= 4; M32(esp) = 0x4ff2fau; SAVEALL; F_005feae2(c); ABI_CHECK(0x5feae2u, 0x4ff2f5u); RETCHK(0x4ff2fau, 0x4ff2f5u); LOADALL;
  /* 004ff2fa add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff2fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff2ff jne 0x4ff34e */ if (!ZF_) goto L_004ff34e;
  /* 004ff301 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004ff304 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff306 je 0x4ff316 */ if (ZF_) goto L_004ff316;
  /* 004ff308 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 004ff30b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ff30d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff30e mov dword ptr [esi + 0x50], edx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(edx); }
  /* 004ff311 call 0x404240 */ esp -= 4; M32(esp) = 0x4ff316u; SAVEALL; F_00404240(c); ABI_CHECK(0x404240u, 0x4ff311u); RETCHK(0x4ff316u, 0x4ff311u); LOADALL;
L_004ff316:;
  /* 004ff316 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004ff319 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004ff31b lea eax, [esi + 0x44] */ eax = (u32)((u32)(esi + 0x44u));
  /* 004ff31e cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff320 jne 0x4ff32c */ if (!ZF_) goto L_004ff32c;
  /* 004ff322 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff323 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff324 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff325 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff327 call 0x4d1620 */ esp -= 4; M32(esp) = 0x4ff32cu; SAVEALL; F_004d1620(c); ABI_CHECK(0x4d1620u, 0x4ff327u); RETCHK(0x4ff32cu, 0x4ff327u); LOADALL;
L_004ff32c:;
  /* 004ff32c mov esi, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); esi = (u32)(M32(m_)); }
  /* 004ff32f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ff332 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004ff335 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004ff338 mov dword ptr [eax + 0x10], esi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(esi); }
  /* 004ff33b mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 004ff341 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 004ff344 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004ff347 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff348 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff34a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff34b ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
L_004ff34e:;
  /* 004ff34e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ff351 mov edx, dword ptr [0x63cfcc] */ { const u32 m_ = (u32)(0x63cfccu); edx = (u32)(M32(m_)); }
  /* 004ff357 mov ecx, dword ptr [0x694598] */ { const u32 m_ = (u32)(0x694598u); ecx = (u32)(M32(m_)); }
  /* 004ff35d mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004ff35f mov edx, dword ptr [0x69459c] */ { const u32 m_ = (u32)(0x69459cu); edx = (u32)(M32(m_)); }
  /* 004ff365 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004ff368 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 004ff36b mov ecx, dword ptr [0x9b91ec] */ { const u32 m_ = (u32)(0x9b91ecu); ecx = (u32)(M32(m_)); }
  /* 004ff371 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004ff374 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff375 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff377 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff378 ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
}

void F_004ff380(CPU *c) {
  NATIVE_HOOK(0x4ff380u) REGS; LOADALL;
L_004ff380:;
  /* 004ff380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff383 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff384 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004ff386 mov ecx, dword ptr [edi + 0x58] */ { const u32 m_ = (u32)(edi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 004ff389 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff38b je 0x4ff3bd */ if (ZF_) goto L_004ff3bd;
  /* 004ff38d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004ff390 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff392 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff393 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004ff396 jne 0x4ff3a3 */ if (!ZF_) goto L_004ff3a3;
  /* 004ff398 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff39a jne 0x4ff3a3 */ if (!ZF_) goto L_004ff3a3;
  /* 004ff39c mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 004ff3a1 jmp 0x4ff3a5 */ goto L_004ff3a5;
L_004ff3a3:;
  /* 004ff3a3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004ff3a5:;
  /* 004ff3a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff3a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff3a7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ff3a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff3a9 call 0x5feaee */ esp -= 4; M32(esp) = 0x4ff3aeu; SAVEALL; F_005feaee(c); ABI_CHECK(0x5feaeeu, 0x4ff3a9u); RETCHK(0x4ff3aeu, 0x4ff3a9u); LOADALL;
  /* 004ff3ae add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff3b1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff3b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff3b4 jne 0x4ff3bd */ if (!ZF_) goto L_004ff3bd;
  /* 004ff3b6 mov eax, edi */ { eax = (u32)(edi); }
  /* 004ff3b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff3b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff3ba ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004ff3bd:;
  /* 004ff3bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ff3bf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff3c0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff3c1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004ff3d0(CPU *c) {
  NATIVE_HOOK(0x4ff3d0u) REGS; LOADALL;
L_004ff3d0:;
  /* 004ff3d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff3d1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff3d3 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff3d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff3d8 je 0x4ff3fb */ if (ZF_) goto L_004ff3fb;
  /* 004ff3da mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004ff3dc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ff3de call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ff3e1u; SAVEALL; call_ind(c, t_); RETCHK(0x4ff3e1u, 0x4ff3deu); LOADALL; }
  /* 004ff3e1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff3e4 je 0x4ff3fb */ if (ZF_) goto L_004ff3fb;
  /* 004ff3e6 mov ecx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 004ff3e9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff3ea call 0x5feaf4 */ esp -= 4; M32(esp) = 0x4ff3efu; SAVEALL; F_005feaf4(c); ABI_CHECK(0x5feaf4u, 0x4ff3eau); RETCHK(0x4ff3efu, 0x4ff3eau); LOADALL;
  /* 004ff3ef add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff3f2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff3f4 jge 0x4ff3fb */ if (!LT_) goto L_004ff3fb;
  /* 004ff3f6 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ff3f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff3fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004ff3fb:;
  /* 004ff3fb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ff3fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff3fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ff400(CPU *c) {
  NATIVE_HOOK(0x4ff400u) REGS; LOADALL;
L_004ff400:;
  /* 004ff400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff403 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ff406 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff407 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff408 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff40a call 0x4ffb30 */ esp -= 4; M32(esp) = 0x4ff40fu; SAVEALL; F_004ffb30(c); ABI_CHECK(0x4ffb30u, 0x4ff40au); RETCHK(0x4ff40fu, 0x4ff40au); LOADALL;
  /* 004ff40f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff412 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff413 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff415 call 0x4ff790 */ esp -= 4; M32(esp) = 0x4ff41au; SAVEALL; F_004ff790(c); ABI_CHECK(0x4ff790u, 0x4ff415u); RETCHK(0x4ff41au, 0x4ff415u); LOADALL;
  /* 004ff41a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff41b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff41c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004ff420(CPU *c) {
  NATIVE_HOOK(0x4ff420u) REGS; LOADALL;
L_004ff420:;
  /* 004ff420 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff421 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff423 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff424 lea esi, [ecx - 0x64] */ esi = (u32)((u32)(ecx + 0xffffff9cu));
  /* 004ff427 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff428 lea edi, [esi + 0x64] */ edi = (u32)((u32)(esi + 0x64u));
  /* 004ff42b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004ff42d call 0x4febe0 */ esp -= 4; M32(esp) = 0x4ff432u; SAVEALL; F_004febe0(c); ABI_CHECK(0x4febe0u, 0x4ff42du); RETCHK(0x4ff432u, 0x4ff42du); LOADALL;
  /* 004ff432 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004ff434 call 0x4b12c0 */ esp -= 4; M32(esp) = 0x4ff439u; SAVEALL; F_004b12c0(c); ABI_CHECK(0x4b12c0u, 0x4ff434u); RETCHK(0x4ff439u, 0x4ff434u); LOADALL;
  /* 004ff439 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ff43d je 0x4ff448 */ if (ZF_) goto L_004ff448;
  /* 004ff43f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff440 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4ff445u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4ff440u); RETCHK(0x4ff445u, 0x4ff440u); LOADALL;
  /* 004ff445 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004ff448:;
  /* 004ff448 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff449 mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff44b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff44c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff44d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004ff450(CPU *c) {
  NATIVE_HOOK(0x4ff450u) REGS; LOADALL;
L_004ff450:;
  /* 004ff450 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff451 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff453 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff454 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff456 call 0x4fec40 */ esp -= 4; M32(esp) = 0x4ff45bu; SAVEALL; F_004fec40(c); ABI_CHECK(0x4fec40u, 0x4ff456u); RETCHK(0x4ff45bu, 0x4ff456u); LOADALL;
  /* 004ff45b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ff45f je 0x4ff46a */ if (ZF_) goto L_004ff46a;
  /* 004ff461 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff462 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4ff467u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4ff462u); RETCHK(0x4ff467u, 0x4ff462u); LOADALL;
  /* 004ff467 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004ff46a:;
  /* 004ff46a mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff46c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff46d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff46e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004ff480(CPU *c) {
  NATIVE_HOOK(0x4ff480u) REGS; LOADALL;
L_004ff480:;
  /* 004ff480 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff481 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff483 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff484 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff485 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff487 call 0x4d25b0 */ esp -= 4; M32(esp) = 0x4ff48cu; SAVEALL; F_004d25b0(c); ABI_CHECK(0x4d25b0u, 0x4ff487u); RETCHK(0x4ff48cu, 0x4ff487u); LOADALL;
  /* 004ff48c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004ff48e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff490 mov dword ptr [esi], 0x63d148 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63d148u); }
  /* 004ff496 mov dword ptr [esi + 0x48], ebx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 004ff499 mov byte ptr [esi + 0x54], bl */ { const u32 m_ = (u32)(esi + 0x54u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004ff49c mov byte ptr [esi + 0x4c], bl */ { const u32 m_ = (u32)(esi + 0x4cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004ff49f call 0x4d3b10 */ esp -= 4; M32(esp) = 0x4ff4a4u; SAVEALL; F_004d3b10(c); ABI_CHECK(0x4d3b10u, 0x4ff49fu); RETCHK(0x4ff4a4u, 0x4ff49fu); LOADALL;
  /* 004ff4a4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ff4a7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff4a9 je 0x4ff4c3 */ if (ZF_) goto L_004ff4c3;
  /* 004ff4ab lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 004ff4ae mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004ff4b1 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004ff4b4 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 004ff4b7 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 004ff4ba mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 004ff4bd mov dword ptr [esi + 0x30], ecx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 004ff4c0 mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
L_004ff4c3:;
  /* 004ff4c3 mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
  /* 004ff4c6 mov eax, dword ptr [0x9b9294] */ { const u32 m_ = (u32)(0x9b9294u); eax = (u32)(M32(m_)); }
  /* 004ff4cb mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 004ff4ce mov ecx, dword ptr [0x9b9294] */ { const u32 m_ = (u32)(0x9b9294u); ecx = (u32)(M32(m_)); }
  /* 004ff4d4 mov dword ptr [esi + 0x3c], ebx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 004ff4d7 mov dword ptr [esi + 0x40], ecx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ecx); }
  /* 004ff4da mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff4dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff4dd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff4de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff4df ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004ff4f0(CPU *c) {
  NATIVE_HOOK(0x4ff4f0u) REGS; LOADALL;
L_004ff4f0:;
  /* 004ff4f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff4f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff4f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ff4f5 push 0x61b6d8 */ { u32 v_ = 0x61b6d8u; esp -= 4; M32(esp) = v_; }
  /* 004ff4fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ff500 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff501 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ff508 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff509 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff50c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff50e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff50f jne 0x4ff5ed */ if (!ZF_) goto L_004ff5ed;
  /* 004ff515 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ff518 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff519 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff51a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ff51b call 0x6022f8 */ esp -= 4; M32(esp) = 0x4ff520u; SAVEALL; F_006022f8(c); ABI_CHECK(0x6022f8u, 0x4ff51bu); RETCHK(0x4ff520u, 0x4ff51bu); LOADALL;
  /* 004ff520 mov edi, eax */ { edi = (u32)(eax); }
  /* 004ff522 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff525 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff527 je 0x4ff5ed */ if (ZF_) goto L_004ff5ed;
  /* 004ff52d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff52f mov byte ptr [esi + 0x54], 1 */ { const u32 m_ = (u32)(esi + 0x54u); M8(m_) = (u8)(0x1u); }
  /* 004ff533 mov byte ptr [esi + 0x4c], 0 */ { const u32 m_ = (u32)(esi + 0x4cu); M8(m_) = (u8)(0x0u); }
  /* 004ff537 call 0x4d3b10 */ esp -= 4; M32(esp) = 0x4ff53cu; SAVEALL; F_004d3b10(c); ABI_CHECK(0x4d3b10u, 0x4ff537u); RETCHK(0x4ff53cu, 0x4ff537u); LOADALL;
  /* 004ff53c lea eax, [edi + 8] */ eax = (u32)((u32)(edi + 0x8u));
  /* 004ff53f lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 004ff542 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 004ff545 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 004ff548 mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 004ff54b mov dword ptr [esi + 0x24], edi */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edi); }
  /* 004ff54e mov dword ptr [esi + 0x58], edi */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(edi); }
  /* 004ff551 mov dword ptr [esi + 0x30], ecx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 004ff554 mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 004ff557 mov eax, dword ptr [0x9b9294] */ { const u32 m_ = (u32)(0x9b9294u); eax = (u32)(M32(m_)); }
  /* 004ff55c mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 004ff55f mov ecx, dword ptr [0x9b9294] */ { const u32 m_ = (u32)(0x9b9294u); ecx = (u32)(M32(m_)); }
  /* 004ff565 lea edi, [ebp + 8] */ edi = (u32)((u32)(ebp + 0x8u));
  /* 004ff568 mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff56a mov dword ptr [esi + 0x40], ecx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ecx); }
  /* 004ff56d mov dword ptr [esi + 0x3c], 0 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 004ff574 call 0x4ff920 */ esp -= 4; M32(esp) = 0x4ff579u; SAVEALL; F_004ff920(c); ABI_CHECK(0x4ff920u, 0x4ff574u); RETCHK(0x4ff579u, 0x4ff574u); LOADALL;
  /* 004ff579 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff57a mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004ff581 call 0x4ffb30 */ esp -= 4; M32(esp) = 0x4ff586u; SAVEALL; F_004ffb30(c); ABI_CHECK(0x4ffb30u, 0x4ff581u); RETCHK(0x4ff586u, 0x4ff581u); LOADALL;
  /* 004ff586 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff589 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff58a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff58c call 0x4ff790 */ esp -= 4; M32(esp) = 0x4ff591u; SAVEALL; F_004ff790(c); ABI_CHECK(0x4ff790u, 0x4ff58cu); RETCHK(0x4ff591u, 0x4ff58cu); LOADALL;
  /* 004ff591 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004ff598 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ff59b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff59d je 0x4ff5da */ if (ZF_) goto L_004ff5da;
  /* 004ff59f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ff5a1 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ff5a4 call 0x601e91 */ esp -= 4; M32(esp) = 0x4ff5a9u; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x4ff5a4u); RETCHK(0x4ff5a9u, 0x4ff5a4u); LOADALL;
  /* 004ff5a9 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ff5ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff5ae jbe 0x4ff5b9 */ if ((CF_|ZF_)) goto L_004ff5b9;
  /* 004ff5b0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff5b3 jae 0x4ff5b9 */ if (!CF_) goto L_004ff5b9;
  /* 004ff5b5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ff5b6 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
L_004ff5b9:;
  /* 004ff5b9 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ff5bc xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004ff5be test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff5c0 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 004ff5c3 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ff5c6 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ff5c7 and edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004ff5c9 call 0x601eb4 */ esp -= 4; M32(esp) = 0x4ff5ceu; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x4ff5c9u); RETCHK(0x4ff5ceu, 0x4ff5c9u); LOADALL;
  /* 004ff5ce test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff5d0 je 0x4ff5da */ if (ZF_) goto L_004ff5da;
  /* 004ff5d2 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ff5d4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ff5d6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004ff5d8 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ff5dau; SAVEALL; call_ind(c, t_); RETCHK(0x4ff5dau, 0x4ff5d8u); LOADALL; }
L_004ff5da:;
  /* 004ff5da mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff5dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff5dd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004ff5e0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ff5e7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff5e9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff5ea ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004ff5ed:;
  /* 004ff5ed mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004ff5f0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ff5f2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff5f3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ff5fa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff5fc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff5fd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004ff600(CPU *c) {
  NATIVE_HOOK(0x4ff600u) REGS; LOADALL;
L_004ff600:;
  /* 004ff600 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff601 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff602 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff604 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff607 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004ff609 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff60b je 0x4ff650 */ if (ZF_) goto L_004ff650;
  /* 004ff60d call 0x4ff660 */ esp -= 4; M32(esp) = 0x4ff612u; SAVEALL; F_004ff660(c); ABI_CHECK(0x4ff660u, 0x4ff60du); RETCHK(0x4ff612u, 0x4ff60du); LOADALL;
  /* 004ff612 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ff614 je 0x4ff650 */ if (ZF_) goto L_004ff650;
  /* 004ff616 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004ff619 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff61a call 0x5feafa */ esp -= 4; M32(esp) = 0x4ff61fu; SAVEALL; F_005feafa(c); ABI_CHECK(0x5feafau, 0x4ff61au); RETCHK(0x4ff61fu, 0x4ff61au); LOADALL;
  /* 004ff61f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff622 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff624 jne 0x4ff650 */ if (!ZF_) goto L_004ff650;
  /* 004ff626 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff628 mov byte ptr [esi + 0x54], bl */ { const u32 m_ = (u32)(esi + 0x54u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004ff62b mov byte ptr [esi + 0x4c], bl */ { const u32 m_ = (u32)(esi + 0x4cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004ff62e call 0x4d3b10 */ esp -= 4; M32(esp) = 0x4ff633u; SAVEALL; F_004d3b10(c); ABI_CHECK(0x4d3b10u, 0x4ff62eu); RETCHK(0x4ff633u, 0x4ff62eu); LOADALL;
  /* 004ff633 mov dword ptr [esi + 0x58], ebx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ebx); }
  /* 004ff636 mov ecx, dword ptr [0x9b9294] */ { const u32 m_ = (u32)(0x9b9294u); ecx = (u32)(M32(m_)); }
  /* 004ff63c mov dword ptr [esi + 0x50], ecx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ecx); }
  /* 004ff63f mov edx, dword ptr [0x9b9294] */ { const u32 m_ = (u32)(0x9b9294u); edx = (u32)(M32(m_)); }
  /* 004ff645 mov dword ptr [esi + 0x3c], ebx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 004ff648 mov dword ptr [esi + 0x40], edx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(edx); }
  /* 004ff64b mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff64d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff64e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff64f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004ff650:;
  /* 004ff650 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff651 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ff653 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff654 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ff660(CPU *c) {
  NATIVE_HOOK(0x4ff660u) REGS; LOADALL;
L_004ff660:;
  /* 004ff660 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff661 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff663 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ff665 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 004ff66a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ff670 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff671 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ff678 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff67b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004ff680 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff681 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff682 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff684 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004ff687 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004ff68a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004ff68c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff68e je 0x4ff784 */ if (ZF_) goto L_004ff784;
  /* 004ff694 cmp byte ptr [esi + 0x4c], bl */ { const u32 m_ = (u32)(esi + 0x4cu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004ff697 je 0x4ff784 */ if (ZF_) goto L_004ff784;
  /* 004ff69d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004ff69f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ff6a1 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ff6a4u; SAVEALL; call_ind(c, t_); RETCHK(0x4ff6a4u, 0x4ff6a1u); LOADALL; }
  /* 004ff6a4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004ff6a6 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 004ff6ab cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff6ae mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004ff6b0 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004ff6b3 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004ff6b6 mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 004ff6b9 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 004ff6bc mov dword ptr [ebp - 0x18], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x8u); }
  /* 004ff6c3 jae 0x4ff6c8 */ if (!CF_) goto L_004ff6c8;
  /* 004ff6c5 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_004ff6c8:;
  /* 004ff6c8 mov byte ptr [ecx + 8], bl */ { const u32 m_ = (u32)(ecx + 0x8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004ff6cb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004ff6ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff6cf nop */ ;
L_004ff6d0:;
  /* 004ff6d0 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004ff6d3 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff6d6 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004ff6d9 mov edx, eax */ { edx = (u32)(eax); }
  /* 004ff6db jae 0x4ff6e2 */ if (!CF_) goto L_004ff6e2;
  /* 004ff6dd lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004ff6e0 mov eax, edx */ { eax = (u32)(edx); }
L_004ff6e2:;
  /* 004ff6e2 mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004ff6e5 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 004ff6e7 lea ebx, [ebp - 0x30] */ ebx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004ff6ea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff6eb mov ebx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ebx = (u32)(M32(m_)); }
  /* 004ff6ee add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004ff6f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff6f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff6f2 lea eax, [esi + 0x50] */ eax = (u32)((u32)(esi + 0x50u));
  /* 004ff6f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff6f6 call dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ff6f9u; SAVEALL; call_ind(c, t_); RETCHK(0x4ff6f9u, 0x4ff6f6u); LOADALL; }
  /* 004ff6f9 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004ff6fc je 0x4ff729 */ if (ZF_) goto L_004ff729;
  /* 004ff6fe dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ff6ff je 0x4ff72d */ if (ZF_) goto L_004ff72d;
  /* 004ff701 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004ff704 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004ff707 jne 0x4ff77b */ if (!ZF_) goto L_004ff77b;
L_004ff709:;
  /* 004ff709 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4ff70eu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4ff709u); RETCHK(0x4ff70eu, 0x4ff709u); LOADALL;
  /* 004ff70e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_004ff710:;
  /* 004ff710 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004ff711:;
  /* 004ff711 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004ff714 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff715 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ff71c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004ff71f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff720 call 0x61af31 */ esp -= 4; M32(esp) = 0x4ff725u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4ff720u); RETCHK(0x4ff725u, 0x4ff720u); LOADALL;
  /* 004ff725 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff727 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff728 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004ff729:;
  /* 004ff729 mov byte ptr [esi + 0x4c], 0 */ { const u32 m_ = (u32)(esi + 0x4cu); M8(m_) = (u8)(0x0u); }
L_004ff72d:;
  /* 004ff72d mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004ff730 cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff733 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004ff736 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004ff738 jae 0x4ff73d */ if (!CF_) goto L_004ff73d;
  /* 004ff73a lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_004ff73d:;
  /* 004ff73d mov edi, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edi = (u32)(M32(m_)); }
  /* 004ff740 sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004ff742 je 0x4ff760 */ if (ZF_) goto L_004ff760;
  /* 004ff744 cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff747 jae 0x4ff74c */ if (!CF_) goto L_004ff74c;
  /* 004ff749 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004ff74c:;
  /* 004ff74c mov ecx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 004ff74f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff750 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ff752 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff753 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff754 call 0x5feadc */ esp -= 4; M32(esp) = 0x4ff759u; SAVEALL; F_005feadc(c); ABI_CHECK(0x5feadcu, 0x4ff754u); RETCHK(0x4ff759u, 0x4ff754u); LOADALL;
  /* 004ff759 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff75c cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff75e jne 0x4ff778 */ if (!ZF_) goto L_004ff778;
L_004ff760:;
  /* 004ff760 mov al, byte ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004ff763 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ff765 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004ff768 je 0x4ff709 */ if (ZF_) goto L_004ff709;
  /* 004ff76a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ff76c push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004ff76e call 0x419e40 */ esp -= 4; M32(esp) = 0x4ff773u; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x4ff76eu); RETCHK(0x4ff773u, 0x4ff76eu); LOADALL;
  /* 004ff773 jmp 0x4ff6d0 */ goto L_004ff6d0;
L_004ff778:;
  /* 004ff778 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
L_004ff77b:;
  /* 004ff77b call 0x43ee60 */ esp -= 4; M32(esp) = 0x4ff780u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4ff77bu); RETCHK(0x4ff780u, 0x4ff77bu); LOADALL;
  /* 004ff780 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004ff782 jmp 0x4ff710 */ goto L_004ff710;
L_004ff784:;
  /* 004ff784 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004ff786 jmp 0x4ff711 */ goto L_004ff711;
}

void F_004ff790(CPU *c) {
  NATIVE_HOOK(0x4ff790u) REGS; LOADALL;
L_004ff790:;
  /* 004ff790 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff791 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff793 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff794 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff795 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ff798 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ff79a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff79c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004ff79e call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ff7a1u; SAVEALL; call_ind(c, t_); RETCHK(0x4ff7a1u, 0x4ff79eu); LOADALL; }
  /* 004ff7a1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ff7a3 je 0x4ff7b2 */ if (ZF_) goto L_004ff7b2;
  /* 004ff7a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff7a6 mov dword ptr [esi + 0x3c], 0 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 004ff7ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff7ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff7af ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004ff7b2:;
  /* 004ff7b2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff7b4 mov dword ptr [esi + 0x3c], edi */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(edi); }
  /* 004ff7b7 call 0x4d3b10 */ esp -= 4; M32(esp) = 0x4ff7bcu; SAVEALL; F_004d3b10(c); ABI_CHECK(0x4d3b10u, 0x4ff7b7u); RETCHK(0x4ff7bcu, 0x4ff7b7u); LOADALL;
  /* 004ff7bc mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004ff7bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff7c1 jne 0x4ff7f1 */ if (!ZF_) goto L_004ff7f1;
  /* 004ff7c3 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 004ff7c5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4ff7cau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4ff7c5u); RETCHK(0x4ff7cau, 0x4ff7c5u); LOADALL;
  /* 004ff7ca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff7cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff7cf je 0x4ff7ec */ if (ZF_) goto L_004ff7ec;
  /* 004ff7d1 mov dword ptr [eax + 0x18], 0xf */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 004ff7d8 mov dword ptr [eax + 0x14], 0 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 004ff7df mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 004ff7e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff7e4 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
  /* 004ff7e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff7e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff7e9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004ff7ec:;
  /* 004ff7ec xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ff7ee mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
L_004ff7f1:;
  /* 004ff7f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff7f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff7f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff7f4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004ff800(CPU *c) {
  NATIVE_HOOK(0x4ff800u) REGS; LOADALL;
L_004ff800:;
  /* 004ff800 mov dword ptr [ecx], 0x63d040 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x63d040u); }
  /* 004ff806 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ff810(CPU *c) {
  NATIVE_HOOK(0x4ff810u) REGS; LOADALL;
L_004ff810:;
  /* 004ff810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff813 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004ff816 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004ff819 mov edx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edx = (u32)(M32(m_)); }
  /* 004ff81c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004ff81e mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 004ff821 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004ff823 mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 004ff828 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff829 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_004ff830(CPU *c) {
  NATIVE_HOOK(0x4ff830u) REGS; LOADALL;
L_004ff830:;
  /* 004ff830 mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 004ff835 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004ff840(CPU *c) {
  NATIVE_HOOK(0x4ff840u) REGS; LOADALL;
L_004ff840:;
  /* 004ff840 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff841 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff843 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004ff846 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004ff849 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004ff84b mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004ff84e cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff850 jae 0x4ff854 */ if (!CF_) goto L_004ff854;
  /* 004ff852 mov eax, ecx */ { eax = (u32)(ecx); }
L_004ff854:;
  /* 004ff854 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff855 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004ff860(CPU *c) {
  NATIVE_HOOK(0x4ff860u) REGS; LOADALL;
L_004ff860:;
  /* 004ff860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff863 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff864 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004ff867 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff86a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff86b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ff86d jne 0x4ff876 */ if (!ZF_) goto L_004ff876;
  /* 004ff86f call 0x6016ae */ esp -= 4; M32(esp) = 0x4ff874u; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x4ff86fu); RETCHK(0x4ff874u, 0x4ff86fu); LOADALL;
  /* 004ff874 jmp 0x4ff87b */ goto L_004ff87b;
L_004ff876:;
  /* 004ff876 cmp ebx, -2 */ { u32 a_ = ebx, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff879 jbe 0x4ff882 */ if ((CF_|ZF_)) goto L_004ff882;
L_004ff87b:;
  /* 004ff87b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff87d call 0x6016ae */ esp -= 4; M32(esp) = 0x4ff882u; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x4ff87du); RETCHK(0x4ff882u, 0x4ff87du); LOADALL;
L_004ff882:;
  /* 004ff882 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004ff885 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff887 jae 0x4ff8a5 */ if (!CF_) goto L_004ff8a5;
  /* 004ff889 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 004ff88c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff88d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff88e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ff890 call 0x4042c0 */ esp -= 4; M32(esp) = 0x4ff895u; SAVEALL; F_004042c0(c); ABI_CHECK(0x4042c0u, 0x4ff890u); RETCHK(0x4ff895u, 0x4ff890u); LOADALL;
  /* 004ff895 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_004ff897:;
  /* 004ff897 jbe 0x4ff912 */ if ((CF_|ZF_)) goto L_004ff912;
  /* 004ff899 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff89d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff89e jb 0x4ff8cc */ if (CF_) goto L_004ff8cc;
  /* 004ff8a0 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 004ff8a3 jmp 0x4ff8cf */ goto L_004ff8cf;
L_004ff8a5:;
  /* 004ff8a5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ff8a7 jne 0x4ff897 */ if (!ZF_) goto L_004ff897;
  /* 004ff8a9 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff8ac mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 004ff8af jb 0x4ff8be */ if (CF_) goto L_004ff8be;
  /* 004ff8b1 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ff8b4 mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004ff8b6 mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff8b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff8b9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff8ba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff8bb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004ff8be:;
  /* 004ff8be lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004ff8c1 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 004ff8c4 mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff8c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff8c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff8c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff8c9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004ff8cc:;
  /* 004ff8cc lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
L_004ff8cf:;
  /* 004ff8cf movsx eax, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 004ff8d3 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004ff8d5 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 004ff8d7 mov bh, bl */ { ebx = (ebx & 0xffff00ffu) | (((u32)((ebx & 0xffu)) & 0xffu) << 8); }
  /* 004ff8d9 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004ff8db shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004ff8de mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004ff8e0 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004ff8e3 mov ax, bx */ { eax = (eax & 0xffff0000u) | ((u32)((ebx & 0xffffu)) & 0xffffu); }
  /* 004ff8e6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004ff8e8 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004ff8ea and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004ff8ed rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 004ff8ef cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff8f3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ff8f6 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004ff8f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ff8fa jb 0x4ff90b */ if (CF_) goto L_004ff90b;
  /* 004ff8fc mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ff8ff mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 004ff903 mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff905 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff906 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff907 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff908 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004ff90b:;
  /* 004ff90b lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004ff90e mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
L_004ff912:;
  /* 004ff912 mov eax, esi */ { eax = (u32)(esi); }
  /* 004ff914 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff915 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ff916 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff917 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004ff920(CPU *c) {
  NATIVE_HOOK(0x4ff920u) REGS; LOADALL;
L_004ff920:;
  /* 004ff920 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff921 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff923 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff924 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004ff92b mov ecx, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ecx = (u32)(M32(m_)); }
  /* 004ff92e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff92f mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 004ff931 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ff933 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004ff936 mov dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(esi); }
  /* 004ff938 call 0x601e91 */ esp -= 4; M32(esp) = 0x4ff93du; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x4ff938u); RETCHK(0x4ff93du, 0x4ff938u); LOADALL;
  /* 004ff93d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ff940 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff943 jae 0x4ff949 */ if (!CF_) goto L_004ff949;
  /* 004ff945 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004ff946 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
L_004ff949:;
  /* 004ff949 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004ff94c call 0x601eb4 */ esp -= 4; M32(esp) = 0x4ff951u; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x4ff94cu); RETCHK(0x4ff951u, 0x4ff94cu); LOADALL;
  /* 004ff951 mov eax, edi */ { eax = (u32)(edi); }
  /* 004ff953 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ff954 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ff956 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ff957 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ff960(CPU *c) {
  NATIVE_HOOK(0x4ff960u) REGS; LOADALL;
L_004ff960:;
  /* 004ff960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ff961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ff963 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ff965 push 0x61c9f0 */ { u32 v_ = 0x61c9f0u; esp -= 4; M32(esp) = v_; }
  /* 004ff96a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ff970 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff971 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ff978 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff97b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff97c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ff97d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff97e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ff981 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 004ff984 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004ff986 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff987 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ff988 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004ff98b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff98c mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 004ff98f mov byte ptr [ebp - 0x11], bl */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004ff992 call 0x4ffd60 */ esp -= 4; M32(esp) = 0x4ff997u; SAVEALL; F_004ffd60(c); ABI_CHECK(0x4ffd60u, 0x4ff992u); RETCHK(0x4ff997u, 0x4ff992u); LOADALL;
  /* 004ff997 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004ff99a mov al, byte ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004ff99d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ff99f je 0x4ffac0 */ if (ZF_) goto L_004ffac0;
  /* 004ff9a5 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004ff9a7 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004ff9aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ff9ab mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ff9ae add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ff9b0 call 0x4b1200 */ esp -= 4; M32(esp) = 0x4ff9b5u; SAVEALL; F_004b1200(c); ABI_CHECK(0x4b1200u, 0x4ff9b0u); RETCHK(0x4ff9b5u, 0x4ff9b0u); LOADALL;
  /* 004ff9b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ff9b6 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004ff9ba call 0x4b1740 */ esp -= 4; M32(esp) = 0x4ff9bfu; SAVEALL; F_004b1740(c); ABI_CHECK(0x4b1740u, 0x4ff9bau); RETCHK(0x4ff9bfu, 0x4ff9bau); LOADALL;
  /* 004ff9bf mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004ff9c2 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 004ff9c5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ff9c8 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff9ca mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 004ff9cd je 0x4ffa09 */ if (ZF_) goto L_004ffa09;
  /* 004ff9cf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ff9d0 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004ff9d3 call 0x601e91 */ esp -= 4; M32(esp) = 0x4ff9d8u; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x4ff9d3u); RETCHK(0x4ff9d8u, 0x4ff9d3u); LOADALL;
  /* 004ff9d8 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ff9db cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff9dd jbe 0x4ff9e8 */ if ((CF_|ZF_)) goto L_004ff9e8;
  /* 004ff9df cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff9e2 jae 0x4ff9e8 */ if (!CF_) goto L_004ff9e8;
  /* 004ff9e4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ff9e5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
L_004ff9e8:;
  /* 004ff9e8 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ff9eb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ff9ed cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff9ef setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 004ff9f2 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004ff9f5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ff9f6 and esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004ff9f8 call 0x601eb4 */ esp -= 4; M32(esp) = 0x4ff9fdu; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x4ff9f8u); RETCHK(0x4ff9fdu, 0x4ff9f8u); LOADALL;
  /* 004ff9fd cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ff9ff je 0x4ffa09 */ if (ZF_) goto L_004ffa09;
  /* 004ffa01 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004ffa03 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ffa05 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ffa07 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ffa09u; SAVEALL; call_ind(c, t_); RETCHK(0x4ffa09u, 0x4ffa07u); LOADALL; }
L_004ffa09:;
  /* 004ffa09 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004ffa0c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ffa0e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ffa0f call 0x404240 */ esp -= 4; M32(esp) = 0x4ffa14u; SAVEALL; F_00404240(c); ABI_CHECK(0x404240u, 0x4ffa0fu); RETCHK(0x4ffa14u, 0x4ffa0fu); LOADALL;
  /* 004ffa14 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004ffa18 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ffa1a mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffa1d mov eax, dword ptr [ecx + edi + 0x18] */ { const u32 m_ = (u32)(ecx + edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004ffa21 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ffa23 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffa25 jle 0x4ffa2e */ if ((ZF_|LT_)) goto L_004ffa2e;
  /* 004ffa27 cmp eax, -2 */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffa2a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004ffa2c jb 0x4ffa33 */ if (CF_) goto L_004ffa33;
L_004ffa2e:;
  /* 004ffa2e mov ebx, 0xfffffffe */ { ebx = (u32)(0xfffffffeu); }
L_004ffa33:;
  /* 004ffa33 mov ecx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 004ffa36 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 004ffa39 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004ffa3b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffa3d je 0x4ffa51 */ if (ZF_) goto L_004ffa51;
  /* 004ffa3f mov esi, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); esi = (u32)(M32(m_)); }
  /* 004ffa42 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 004ffa44 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 004ffa46 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004ffa48 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffa4a jae 0x4ffa51 */ if (!CF_) goto L_004ffa51;
  /* 004ffa4c movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 004ffa4f jmp 0x4ffa56 */ goto L_004ffa56;
L_004ffa51:;
  /* 004ffa51 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004ffa53 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ffa56u; SAVEALL; call_ind(c, t_); RETCHK(0x4ffa56u, 0x4ffa53u); LOADALL; }
L_004ffa56:;
  /* 004ffa56 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffa58 jbe 0x4ffac0 */ if ((CF_|ZF_)) goto L_004ffac0;
  /* 004ffa5a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffa5d jne 0x4ffa65 */ if (!ZF_) goto L_004ffa65;
  /* 004ffa5f or dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 004ffa63 jmp 0x4ffac0 */ goto L_004ffac0;
L_004ffa65:;
  /* 004ffa65 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 004ffa68 mov edx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); edx = (u32)(M32(m_)); }
  /* 004ffa6b movzx ecx, al */ { ecx = (u32)((eax & 0xffu)); }
  /* 004ffa6e test byte ptr [edx + ecx*2], 0x48 */ { const u32 m_ = (u32)(edx + ecx * 2u); u32 a_ = M8(m_), b_ = 0x48u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ffa72 jne 0x4ffac0 */ if (!ZF_) goto L_004ffac0;
  /* 004ffa74 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004ffa77 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffa78 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ffa7a call 0x419e40 */ esp -= 4; M32(esp) = 0x4ffa7fu; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x4ffa7au); RETCHK(0x4ffa7fu, 0x4ffa7au); LOADALL;
  /* 004ffa7f mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ffa81 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffa84 mov esi, dword ptr [ecx + edi + 0x28] */ { const u32 m_ = (u32)(ecx + edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 004ffa88 mov byte ptr [ebp - 0x11], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)(0x1u); }
  /* 004ffa8c dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ffa8d call 0x4ffce0 */ esp -= 4; M32(esp) = 0x4ffa92u; SAVEALL; F_004ffce0(c); ABI_CHECK(0x4ffce0u, 0x4ffa8du); RETCHK(0x4ffa92u, 0x4ffa8du); LOADALL;
  /* 004ffa92 jmp 0x4ffa56 */ goto L_004ffa56;
L_004ffac0:;
  /* 004ffac0 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 004ffac3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004ffac5 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 004ffac8 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ffaca mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ffacd add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004ffacf mov dword ptr [eax + 0x18], esi */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(esi); }
  /* 004ffad2 mov al, byte ptr [ebp - 0x11] */ { const u32 m_ = (u32)(ebp + 0xffffffefu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004ffad5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ffad7 jne 0x4ffadc */ if (!ZF_) goto L_004ffadc;
  /* 004ffad9 or edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_004ffadc:;
  /* 004ffadc mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004ffade mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffae1 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ffae3 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffae5 je 0x4ffafb */ if (ZF_) goto L_004ffafb;
  /* 004ffae7 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ffaea or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ffaec cmp dword ptr [ecx + 0x28], esi */ { const u32 m_ = (u32)(ecx + 0x28u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffaef jne 0x4ffaf4 */ if (!ZF_) goto L_004ffaf4;
  /* 004ffaf1 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004ffaf4:;
  /* 004ffaf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ffaf5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffaf6 call 0x601918 */ esp -= 4; M32(esp) = 0x4ffafbu; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4ffaf6u); RETCHK(0x4ffafbu, 0x4ffaf6u); LOADALL;
L_004ffafb:;
  /* 004ffafb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004ffb02 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 004ffb05 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004ffb07 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffb0a mov eax, dword ptr [ecx + eax + 0x28] */ { const u32 m_ = (u32)(ecx + eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 004ffb0e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffb10 je 0x4ffb1a */ if (ZF_) goto L_004ffb1a;
  /* 004ffb12 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 004ffb15 call 0x601efe */ esp -= 4; M32(esp) = 0x4ffb1au; SAVEALL; F_00601efe(c); ABI_CHECK(0x601efeu, 0x4ffb15u); RETCHK(0x4ffb1au, 0x4ffb15u); LOADALL;
L_004ffb1a:;
  /* 004ffb1a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004ffb1d mov eax, edi */ { eax = (u32)(edi); }
  /* 004ffb1f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ffb20 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ffb21 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ffb28 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ffb29 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ffb2b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ffb2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ffa94(CPU *c) {
  NATIVE_HOOK(0x4ffa94u) REGS; LOADALL;
L_004ffa94:;
  /* 004ffa94 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ffa97 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004ffa99 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffa9c mov edx, dword ptr [ecx + eax + 0x28] */ { const u32 m_ = (u32)(ecx + eax + 0x28u); edx = (u32)(M32(m_)); }
  /* 004ffaa0 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ffaa2 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ffaa5 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ffaa8 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffaaa jne 0x4ffaaf */ if (!ZF_) goto L_004ffaaf;
  /* 004ffaac or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004ffaaf:;
  /* 004ffaaf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ffab1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffab2 call 0x601918 */ esp -= 4; M32(esp) = 0x4ffab7u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4ffab2u); RETCHK(0x4ffab7u, 0x4ffab2u); LOADALL;
  /* 004ffab7 mov eax, 0x4ffabd */ { eax = (u32)(0x4ffabdu); }
  /* 004ffabc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ffabd(CPU *c) {
  NATIVE_HOOK(0x4ffabdu) REGS; LOADALL;
L_004ffabd:;
  /* 004ffabd mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ffac0 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 004ffac3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004ffac5 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 004ffac8 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ffaca mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ffacd add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004ffacf mov dword ptr [eax + 0x18], esi */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(esi); }
  /* 004ffad2 mov al, byte ptr [ebp - 0x11] */ { const u32 m_ = (u32)(ebp + 0xffffffefu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004ffad5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ffad7 jne 0x4ffadc */ if (!ZF_) goto L_004ffadc;
  /* 004ffad9 or edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_004ffadc:;
  /* 004ffadc mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004ffade mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffae1 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ffae3 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffae5 je 0x4ffafb */ if (ZF_) goto L_004ffafb;
  /* 004ffae7 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ffaea or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ffaec cmp dword ptr [ecx + 0x28], esi */ { const u32 m_ = (u32)(ecx + 0x28u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffaef jne 0x4ffaf4 */ if (!ZF_) goto L_004ffaf4;
  /* 004ffaf1 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004ffaf4:;
  /* 004ffaf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ffaf5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffaf6 call 0x601918 */ esp -= 4; M32(esp) = 0x4ffafbu; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4ffaf6u); RETCHK(0x4ffafbu, 0x4ffaf6u); LOADALL;
L_004ffafb:;
  /* 004ffafb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004ffb02 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 004ffb05 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004ffb07 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffb0a mov eax, dword ptr [ecx + eax + 0x28] */ { const u32 m_ = (u32)(ecx + eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 004ffb0e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffb10 je 0x4ffb1a */ if (ZF_) goto L_004ffb1a;
  /* 004ffb12 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 004ffb15 call 0x601efe */ esp -= 4; M32(esp) = 0x4ffb1au; SAVEALL; F_00601efe(c); ABI_CHECK(0x601efeu, 0x4ffb15u); RETCHK(0x4ffb1au, 0x4ffb15u); LOADALL;
L_004ffb1a:;
  /* 004ffb1a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004ffb1d mov eax, edi */ { eax = (u32)(edi); }
  /* 004ffb1f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ffb20 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ffb21 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ffb28 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004ffb29 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ffb2b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ffb2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ffb30(CPU *c) {
  NATIVE_HOOK(0x4ffb30u) REGS; LOADALL;
L_004ffb30:;
  /* 004ffb30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ffb31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ffb33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ffb35 push 0x61bef8 */ { u32 v_ = 0x61bef8u; esp -= 4; M32(esp) = v_; }
  /* 004ffb3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ffb40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffb41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ffb48 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ffb4b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ffb4c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ffb4d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ffb4f lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 004ffb52 call 0x601e91 */ esp -= 4; M32(esp) = 0x4ffb57u; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x4ffb52u); RETCHK(0x4ffb57u, 0x4ffb52u); LOADALL;
  /* 004ffb57 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004ffb5e mov eax, dword ptr [0x9be378] */ { const u32 m_ = (u32)(0x9be378u); eax = (u32)(M32(m_)); }
  /* 004ffb63 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffb65 mov edi, dword ptr [0x9b8b58] */ { const u32 m_ = (u32)(0x9b8b58u); edi = (u32)(M32(m_)); }
  /* 004ffb6b mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 004ffb6e jne 0x4ffb9b */ if (!ZF_) goto L_004ffb9b;
  /* 004ffb70 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ffb72 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004ffb75 call 0x601e91 */ esp -= 4; M32(esp) = 0x4ffb7au; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x4ffb75u); RETCHK(0x4ffb7au, 0x4ffb75u); LOADALL;
  /* 004ffb7a mov eax, dword ptr [0x9be378] */ { const u32 m_ = (u32)(0x9be378u); eax = (u32)(M32(m_)); }
  /* 004ffb7f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffb81 jne 0x4ffb93 */ if (!ZF_) goto L_004ffb93;
  /* 004ffb83 mov eax, dword ptr [0x6945e4] */ { const u32 m_ = (u32)(0x6945e4u); eax = (u32)(M32(m_)); }
  /* 004ffb88 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004ffb89 mov dword ptr [0x6945e4], eax */ { const u32 m_ = (u32)(0x6945e4u); M32(m_) = (u32)(eax); }
  /* 004ffb8e mov dword ptr [0x9be378], eax */ { const u32 m_ = (u32)(0x9be378u); M32(m_) = (u32)(eax); }
L_004ffb93:;
  /* 004ffb93 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004ffb96 call 0x601eb4 */ esp -= 4; M32(esp) = 0x4ffb9bu; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x4ffb96u); RETCHK(0x4ffb9bu, 0x4ffb96u); LOADALL;
L_004ffb9b:;
  /* 004ffb9b mov eax, dword ptr [0x9be378] */ { const u32 m_ = (u32)(0x9be378u); eax = (u32)(M32(m_)); }
  /* 004ffba0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004ffba3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffba4 call 0x601af8 */ esp -= 4; M32(esp) = 0x4ffba9u; SAVEALL; F_00601af8(c); ABI_CHECK(0x601af8u, 0x4ffba4u); RETCHK(0x4ffba9u, 0x4ffba4u); LOADALL;
  /* 004ffba9 mov esi, eax */ { esi = (u32)(eax); }
  /* 004ffbab test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffbad jne 0x4ffbfa */ if (!ZF_) goto L_004ffbfa;
  /* 004ffbaf test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffbb1 je 0x4ffbb7 */ if (ZF_) goto L_004ffbb7;
  /* 004ffbb3 mov esi, edi */ { esi = (u32)(edi); }
  /* 004ffbb5 jmp 0x4ffbfa */ goto L_004ffbfa;
L_004ffbb7:;
  /* 004ffbb7 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004ffbba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ffbbb call 0x4ffc20 */ esp -= 4; M32(esp) = 0x4ffbc0u; SAVEALL; F_004ffc20(c); ABI_CHECK(0x4ffc20u, 0x4ffbbbu); RETCHK(0x4ffbc0u, 0x4ffbbbu); LOADALL;
  /* 004ffbc0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ffbc3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffbc6 jne 0x4ffbe3 */ if (!ZF_) goto L_004ffbe3;
  /* 004ffbc8 push 0x64e820 */ { u32 v_ = 0x64e820u; esp -= 4; M32(esp) = v_; }
  /* 004ffbcd lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 004ffbd0 call 0x5fea70 */ esp -= 4; M32(esp) = 0x4ffbd5u; SAVEALL; F_005fea70(c); ABI_CHECK(0x5fea70u, 0x4ffbd0u); RETCHK(0x4ffbd5u, 0x4ffbd0u); LOADALL;
  /* 004ffbd5 push 0x657b68 */ { u32 v_ = 0x657b68u; esp -= 4; M32(esp) = v_; }
  /* 004ffbda lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 004ffbdd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004ffbde call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_004ffbe3:;
  /* 004ffbe3 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 004ffbe6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ffbe8 mov dword ptr [0x9b8b58], esi */ { const u32 m_ = (u32)(0x9b8b58u); M32(m_) = (u32)(esi); }
  /* 004ffbee call 0x4b0e80 */ esp -= 4; M32(esp) = 0x4ffbf3u; SAVEALL; F_004b0e80(c); ABI_CHECK(0x4b0e80u, 0x4ffbeeu); RETCHK(0x4ffbf3u, 0x4ffbeeu); LOADALL;
  /* 004ffbf3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ffbf5 call 0x601b70 */ esp -= 4; M32(esp) = 0x4ffbfau; SAVEALL; F_00601b70(c); ABI_CHECK(0x601b70u, 0x4ffbf5u); RETCHK(0x4ffbfau, 0x4ffbf5u); LOADALL;
L_004ffbfa:;
  /* 004ffbfa lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 004ffbfd mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004ffc04 call 0x601eb4 */ esp -= 4; M32(esp) = 0x4ffc09u; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x4ffc04u); RETCHK(0x4ffc09u, 0x4ffc04u); LOADALL;
  /* 004ffc09 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004ffc0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004ffc0d mov eax, esi */ { eax = (u32)(esi); }
  /* 004ffc0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ffc10 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ffc17 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ffc19 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ffc1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ffc20(CPU *c) {
  NATIVE_HOOK(0x4ffc20u) REGS; LOADALL;
L_004ffc20:;
  /* 004ffc20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ffc21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ffc23 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ffc29 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ffc2b push 0x61b75b */ { u32 v_ = 0x61b75bu; esp -= 4; M32(esp) = v_; }
  /* 004ffc30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffc31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ffc38 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ffc39 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004ffc3c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffc3e je 0x4ffc6b */ if (ZF_) goto L_004ffc6b;
  /* 004ffc40 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffc43 jne 0x4ffc6b */ if (!ZF_) goto L_004ffc6b;
  /* 004ffc45 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004ffc47 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4ffc4cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4ffc47u); RETCHK(0x4ffc4cu, 0x4ffc47u); LOADALL;
  /* 004ffc4c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ffc4f mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004ffc52 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffc54 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004ffc5b je 0x4ffc67 */ if (ZF_) goto L_004ffc67;
  /* 004ffc5d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ffc5f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffc60 call 0x4ffc80 */ esp -= 4; M32(esp) = 0x4ffc65u; SAVEALL; F_004ffc80(c); ABI_CHECK(0x4ffc80u, 0x4ffc60u); RETCHK(0x4ffc65u, 0x4ffc60u); LOADALL;
  /* 004ffc65 jmp 0x4ffc69 */ goto L_004ffc69;
L_004ffc67:;
  /* 004ffc67 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004ffc69:;
  /* 004ffc69 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
L_004ffc6b:;
  /* 004ffc6b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004ffc6e mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 004ffc73 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ffc7a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ffc7b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ffc7d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ffc7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004ffc80(CPU *c) {
  NATIVE_HOOK(0x4ffc80u) REGS; LOADALL;
L_004ffc80:;
  /* 004ffc80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ffc81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ffc83 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ffc85 push 0x61b3c8 */ { u32 v_ = 0x61b3c8u; esp -= 4; M32(esp) = v_; }
  /* 004ffc8a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ffc90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffc91 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ffc98 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ffc9b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004ffc9e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ffc9f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004ffca2 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004ffca5 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004ffcac push 0x64e82c */ { u32 v_ = 0x64e82cu; esp -= 4; M32(esp) = v_; }
  /* 004ffcb1 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004ffcb4 mov dword ptr [esi], 0x63d180 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63d180u); }
  /* 004ffcba call 0x601cf4 */ esp -= 4; M32(esp) = 0x4ffcbfu; SAVEALL; F_00601cf4(c); ABI_CHECK(0x601cf4u, 0x4ffcbau); RETCHK(0x4ffcbfu, 0x4ffcbau); LOADALL;
  /* 004ffcbf lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004ffcc2 call 0x601c31 */ esp -= 4; M32(esp) = 0x4ffcc7u; SAVEALL; F_00601c31(c); ABI_CHECK(0x601c31u, 0x4ffcc2u); RETCHK(0x4ffcc7u, 0x4ffcc2u); LOADALL;
  /* 004ffcc7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004ffcca mov eax, esi */ { eax = (u32)(esi); }
  /* 004ffccc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ffccd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ffcd4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ffcd6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ffcd7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004ffce0(CPU *c) {
  NATIVE_HOOK(0x4ffce0u) REGS; LOADALL;
L_004ffce0:;
  /* 004ffce0 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004ffce3 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffce6 je 0x4ffd0a */ if (ZF_) goto L_004ffd0a;
  /* 004ffce8 mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 004ffceb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004ffced mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004ffcef mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 004ffcf1 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ffcf3 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffcf5 jae 0x4ffd0a */ if (!CF_) goto L_004ffd0a;
  /* 004ffcf7 mov eax, edx */ { eax = (u32)(edx); }
  /* 004ffcf9 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ffcfb mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004ffcfe mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004ffd00 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 004ffd03 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004ffd05 movzx eax, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M8(m_)); }
  /* 004ffd08 jmp 0x4ffd11 */ goto L_004ffd11;
L_004ffd0a:;
  /* 004ffd0a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004ffd0c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ffd0e call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ffd11u; SAVEALL; call_ind(c, t_); RETCHK(0x4ffd11u, 0x4ffd0eu); LOADALL; }
L_004ffd11:;
  /* 004ffd11 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffd14 jne 0x4ffd19 */ if (!ZF_) goto L_004ffd19;
  /* 004ffd16 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ffd18 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004ffd19:;
  /* 004ffd19 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004ffd1c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004ffd1e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffd20 je 0x4ffd35 */ if (ZF_) goto L_004ffd35;
  /* 004ffd22 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004ffd24 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 004ffd26 mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 004ffd29 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 004ffd2b add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004ffd2d cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffd2f jae 0x4ffd35 */ if (!CF_) goto L_004ffd35;
  /* 004ffd31 movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 004ffd34 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004ffd35:;
  /* 004ffd35 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004ffd37 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ffd39 jmp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_004ffd60(CPU *c) {
  NATIVE_HOOK(0x4ffd60u) REGS; LOADALL;
L_004ffd60:;
  /* 004ffd60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ffd61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ffd63 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ffd69 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ffd6b push 0x61b738 */ { u32 v_ = 0x61b738u; esp -= 4; M32(esp) = v_; }
  /* 004ffd70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffd71 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004ffd74 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ffd7b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ffd7c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004ffd7f mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 004ffd81 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004ffd83 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ffd86 mov eax, dword ptr [edx + eax + 0x28] */ { const u32 m_ = (u32)(edx + eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 004ffd8a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffd8c je 0x4ffd96 */ if (ZF_) goto L_004ffd96;
  /* 004ffd8e lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 004ffd91 call 0x601ef5 */ esp -= 4; M32(esp) = 0x4ffd96u; SAVEALL; F_00601ef5(c); ABI_CHECK(0x601ef5u, 0x4ffd91u); RETCHK(0x4ffd96u, 0x4ffd91u); LOADALL;
L_004ffd96:;
  /* 004ffd96 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004ffd99 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004ffda0 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 004ffda2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffda3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ffda4 call 0x4ffdc0 */ esp -= 4; M32(esp) = 0x4ffda9u; SAVEALL; F_004ffdc0(c); ABI_CHECK(0x4ffdc0u, 0x4ffda4u); RETCHK(0x4ffda9u, 0x4ffda4u); LOADALL;
  /* 004ffda9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004ffdac mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004ffdaf mov eax, esi */ { eax = (u32)(esi); }
  /* 004ffdb1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004ffdb8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ffdb9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004ffdbb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ffdbc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004ffdc0(CPU *c) {
  NATIVE_HOOK(0x4ffdc0u) REGS; LOADALL;
L_004ffdc0:;
  /* 004ffdc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004ffdc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004ffdc3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004ffdc5 push 0x61c9c8 */ { u32 v_ = 0x61c9c8u; esp -= 4; M32(esp) = v_; }
  /* 004ffdca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004ffdd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffdd1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004ffdd8 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ffddb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004ffddc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ffddd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004ffdde mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004ffde1 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ffde3 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffde6 mov eax, dword ptr [ecx + edi + 8] */ { const u32 m_ = (u32)(ecx + edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ffdea add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ffdec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffdee mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 004ffdf1 jne 0x4fff5b */ if (!ZF_) goto L_004fff5b;
  /* 004ffdf7 mov ecx, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004ffdfa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffdfc je 0x4ffe05 */ if (ZF_) goto L_004ffe05;
  /* 004ffdfe mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004ffe00 call 0x4b1270 */ esp -= 4; M32(esp) = 0x4ffe05u; SAVEALL; F_004b1270(c); ABI_CHECK(0x4b1270u, 0x4ffe00u); RETCHK(0x4ffe05u, 0x4ffe00u); LOADALL;
L_004ffe05:;
  /* 004ffe05 mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004ffe08 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ffe0a jne 0x4fff30 */ if (!ZF_) goto L_004fff30;
  /* 004ffe10 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004ffe12 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ffe15 mov ecx, dword ptr [edx + edi + 0x10] */ { const u32 m_ = (u32)(edx + edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004ffe19 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ffe1c je 0x4fff30 */ if (ZF_) goto L_004fff30;
  /* 004ffe22 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 004ffe25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004ffe26 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004ffe28 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ffe2a call 0x4b1200 */ esp -= 4; M32(esp) = 0x4ffe2fu; SAVEALL; F_004b1200(c); ABI_CHECK(0x4b1200u, 0x4ffe2au); RETCHK(0x4ffe2fu, 0x4ffe2au); LOADALL;
  /* 004ffe2f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffe30 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004ffe37 call 0x4b1740 */ esp -= 4; M32(esp) = 0x4ffe3cu; SAVEALL; F_004b1740(c); ABI_CHECK(0x4b1740u, 0x4ffe37u); RETCHK(0x4ffe3cu, 0x4ffe37u); LOADALL;
  /* 004ffe3c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004ffe43 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004ffe46 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004ffe49 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffe4b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004ffe4d je 0x4ffe8a */ if (ZF_) goto L_004ffe8a;
  /* 004ffe4f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ffe51 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004ffe54 call 0x601e91 */ esp -= 4; M32(esp) = 0x4ffe59u; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x4ffe54u); RETCHK(0x4ffe59u, 0x4ffe54u); LOADALL;
  /* 004ffe59 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004ffe5c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffe5e jbe 0x4ffe69 */ if ((CF_|ZF_)) goto L_004ffe69;
  /* 004ffe60 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffe63 jae 0x4ffe69 */ if (!CF_) goto L_004ffe69;
  /* 004ffe65 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ffe66 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
L_004ffe69:;
  /* 004ffe69 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffe6c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004ffe6e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffe70 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 004ffe73 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004ffe76 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004ffe77 and esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004ffe79 call 0x601eb4 */ esp -= 4; M32(esp) = 0x4ffe7eu; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x4ffe79u); RETCHK(0x4ffe7eu, 0x4ffe79u); LOADALL;
  /* 004ffe7e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffe80 je 0x4ffe8a */ if (ZF_) goto L_004ffe8a;
  /* 004ffe82 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004ffe84 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004ffe86 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004ffe88 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ffe8au; SAVEALL; call_ind(c, t_); RETCHK(0x4ffe8au, 0x4ffe88u); LOADALL; }
L_004ffe8a:;
  /* 004ffe8a mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 004ffe91 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004ffe93 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ffe96 mov ecx, dword ptr [edx + edi + 0x28] */ { const u32 m_ = (u32)(edx + edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 004ffe9a mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004ffe9d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004ffe9f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffea1 je 0x4ffeb8 */ if (ZF_) goto L_004ffeb8;
  /* 004ffea3 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 004ffea6 mov esi, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); esi = (u32)(M32(m_)); }
  /* 004ffea9 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 004ffeab mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 004ffead add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004ffeaf cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffeb1 jae 0x4ffeb8 */ if (!CF_) goto L_004ffeb8;
  /* 004ffeb3 movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 004ffeb6 jmp 0x4ffec0 */ goto L_004ffec0;
L_004ffeb8:;
  /* 004ffeb8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004ffeba call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4ffebdu; SAVEALL; call_ind(c, t_); RETCHK(0x4ffebdu, 0x4ffebau); LOADALL; }
  /* 004ffebd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004ffec0:;
  /* 004ffec0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004ffec3 jne 0x4ffee8 */ if (!ZF_) goto L_004ffee8;
  /* 004ffec5 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004ffec7 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004ffeca mov eax, dword ptr [ecx + edi + 8] */ { const u32 m_ = (u32)(ecx + edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004ffece mov edx, dword ptr [ecx + edi + 0x28] */ { const u32 m_ = (u32)(ecx + edi + 0x28u); edx = (u32)(M32(m_)); }
  /* 004ffed2 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004ffed4 or eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004ffed7 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004ffed9 jne 0x4ffede */ if (!ZF_) goto L_004ffede;
  /* 004ffedb or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004ffede:;
  /* 004ffede push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004ffee0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004ffee1 call 0x601918 */ esp -= 4; M32(esp) = 0x4ffee6u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4ffee1u); RETCHK(0x4ffee6u, 0x4ffee1u); LOADALL;
  /* 004ffee6 jmp 0x4fff30 */ goto L_004fff30;
L_004ffee8:;
  /* 004ffee8 movzx edx, al */ { edx = (u32)((eax & 0xffu)); }
  /* 004ffeeb mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004ffeee test byte ptr [eax + edx*2], 0x48 */ { const u32 m_ = (u32)(eax + edx * 2u); u32 a_ = M8(m_), b_ = 0x48u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004ffef2 je 0x4fff30 */ if (ZF_) goto L_004fff30;
  /* 004ffef4 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004ffef6 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004ffef9 mov esi, dword ptr [edx + edi + 0x28] */ { const u32 m_ = (u32)(edx + edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 004ffefd call 0x4ffce0 */ esp -= 4; M32(esp) = 0x4fff02u; SAVEALL; F_004ffce0(c); ABI_CHECK(0x4ffce0u, 0x4ffefdu); RETCHK(0x4fff02u, 0x4ffefdu); LOADALL;
  /* 004fff02 jmp 0x4ffec0 */ goto L_004ffec0;
L_004fff30:;
  /* 004fff30 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004fff37 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004fff39 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fff3c lea ecx, [eax + edi] */ ecx = (u32)((u32)(eax + edi));
  /* 004fff3f mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fff42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fff44 jne 0x4fff5b */ if (!ZF_) goto L_004fff5b;
  /* 004fff46 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fff48 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fff4b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fff52 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fff53 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fff54 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fff55 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fff57 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fff58 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fff5b:;
  /* 004fff5b mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fff5e mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 004fff61 or eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fff64 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fff66 jne 0x4fff6b */ if (!ZF_) goto L_004fff6b;
  /* 004fff68 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fff6b:;
  /* 004fff6b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fff6d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fff6e call 0x601918 */ esp -= 4; M32(esp) = 0x4fff73u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4fff6eu); RETCHK(0x4fff73u, 0x4fff6eu); LOADALL;
  /* 004fff73 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fff76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fff77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fff78 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fff7a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fff81 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fff82 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fff84 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fff85 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fff04(CPU *c) {
  NATIVE_HOOK(0x4fff04u) REGS; LOADALL;
L_004fff04:;
  /* 004fff04 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fff07 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fff09 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fff0c mov edx, dword ptr [ecx + eax + 0x28] */ { const u32 m_ = (u32)(ecx + eax + 0x28u); edx = (u32)(M32(m_)); }
  /* 004fff10 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fff12 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fff15 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fff18 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fff1a jne 0x4fff1f */ if (!ZF_) goto L_004fff1f;
  /* 004fff1c or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fff1f:;
  /* 004fff1f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fff21 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fff22 call 0x601918 */ esp -= 4; M32(esp) = 0x4fff27u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4fff22u); RETCHK(0x4fff27u, 0x4fff22u); LOADALL;
  /* 004fff27 mov eax, 0x4fff2d */ { eax = (u32)(0x4fff2du); }
  /* 004fff2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fff2d(CPU *c) {
  NATIVE_HOOK(0x4fff2du) REGS; LOADALL;
L_004fff2d:;
  /* 004fff2d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fff30 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004fff37 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004fff39 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fff3c lea ecx, [eax + edi] */ ecx = (u32)((u32)(eax + edi));
  /* 004fff3f mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fff42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fff44 jne 0x4fff5b */ if (!ZF_) goto L_004fff5b;
  /* 004fff46 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fff48 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fff4b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fff52 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fff53 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fff54 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fff55 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fff57 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fff58 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fff5b:;
  /* 004fff5b mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fff5e mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 004fff61 or eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fff64 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fff66 jne 0x4fff6b */ if (!ZF_) goto L_004fff6b;
  /* 004fff68 or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fff6b:;
  /* 004fff6b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fff6d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fff6e call 0x601918 */ esp -= 4; M32(esp) = 0x4fff73u; SAVEALL; F_00601918(c); ABI_CHECK(0x601918u, 0x4fff6eu); RETCHK(0x4fff73u, 0x4fff6eu); LOADALL;
  /* 004fff73 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fff76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fff77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fff78 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fff7a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fff81 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fff82 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fff84 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fff85 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fff90(CPU *c) {
  NATIVE_HOOK(0x4fff90u) REGS; LOADALL;
L_004fff90:;
  /* 004fff90 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fff91 call 0x4fbee0 */ esp -= 4; M32(esp) = 0x4fff96u; SAVEALL; F_004fbee0(c); ABI_CHECK(0x4fbee0u, 0x4fff91u); RETCHK(0x4fff96u, 0x4fff91u); LOADALL;
  /* 004fff96 mov dword ptr [edx], 0x64ff24 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x64ff24u); }
  /* 004fff9c mov byte ptr [edx + 0x60], 1 */ { const u32 m_ = (u32)(edx + 0x60u); M8(m_) = (u8)(0x1u); }
  /* 004fffa0 mov dword ptr [edx + 0x64], 0x3fc00000 */ { const u32 m_ = (u32)(edx + 0x64u); M32(m_) = (u32)(0x3fc00000u); }
  /* 004fffa7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fffa9 lea ecx, [edx + 0xb0] */ ecx = (u32)((u32)(edx + 0xb0u));
  /* 004fffaf mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004fffb1 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004fffb4 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fffb7 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004fffbc lea edi, [edx + 0x70] */ edi = (u32)((u32)(edx + 0x70u));
  /* 004fffbf rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fffc1 mov dword ptr [edx + 0x68], eax */ { const u32 m_ = (u32)(edx + 0x68u); M32(m_) = (u32)(eax); }
  /* 004fffc4 mov dword ptr [edx + 0x6c], 0x3f000000 */ { const u32 m_ = (u32)(edx + 0x6cu); M32(m_) = (u32)(0x3f000000u); }
  /* 004fffcb mov dword ptr [edx + 0x5c], 1 */ { const u32 m_ = (u32)(edx + 0x5cu); M32(m_) = (u32)(0x1u); }
  /* 004fffd2 mov eax, edx */ { eax = (u32)(edx); }
  /* 004fffd4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fffd5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fffe0(CPU *c) {
  NATIVE_HOOK(0x4fffe0u) REGS; LOADALL;
L_004fffe0:;
  /* 004fffe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fffe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fffe3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fffe4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fffe6 call 0x500010 */ esp -= 4; M32(esp) = 0x4fffebu; SAVEALL; F_00500010(c); ABI_CHECK(0x500010u, 0x4fffe6u); RETCHK(0x4fffebu, 0x4fffe6u); LOADALL;
  /* 004fffeb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fffef je 0x4ffffa */ if (ZF_) goto L_004ffffa;
  /* 004ffff1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004ffff2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4ffff7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4ffff2u); RETCHK(0x4ffff7u, 0x4ffff2u); LOADALL;
  /* 004ffff7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004ffffa:;
  /* 004ffffa mov eax, esi */ { eax = (u32)(esi); }
  /* 004ffffc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004ffffd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004ffffe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500000(CPU *c) {
  NATIVE_HOOK(0x500000u) REGS; LOADALL;
L_00500000:;
  /* 00500000 add ah, cl */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00500002 int3 */ TRAP(0x500002u, "int3");
}

void F_00500010(CPU *c) {
  NATIVE_HOOK(0x500010u) REGS; LOADALL;
L_00500010:;
  /* 00500010 mov dword ptr [ecx], 0x64ff24 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64ff24u); }
  /* 00500016 jmp 0x4fbf50 */ SAVEALL; F_004fbf50(c); return;
}

void F_00500014(CPU *c) {
  NATIVE_HOOK(0x500014u) REGS; LOADALL;
L_00500014:;
  /* 00500014 add cl, ch */ { u32 a_ = (ecx & 0xffu), b_ = ((ecx >> 8) & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00500017 xor eax, 0xccffffbf */ { u32 a_ = eax, b_ = 0xccffffbfu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050001c int3 */ TRAP(0x50001cu, "int3");
}

void F_00500018(CPU *c) {
  NATIVE_HOOK(0x500018u) REGS; LOADALL;
L_00500018:;
  /* 00500018 mov edi, 0xccccffff */ { edi = (u32)(0xccccffffu); }
  /* 0050001d int3 */ TRAP(0x50001du, "int3");
}

void F_00500020(CPU *c) {
  NATIVE_HOOK(0x500020u) REGS; LOADALL;
L_00500020:;
  /* 00500020 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500021 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500023 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500026 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00500027 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00500029 mov al, byte ptr [ebx + 0x60] */ { const u32 m_ = (u32)(ebx + 0x60u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050002c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050002e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050002f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00500032 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500033 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00500038 jne 0x500048 */ if (!ZF_) goto L_00500048;
  /* 0050003a lea edi, [ebx + 0x70] */ edi = (u32)((u32)(ebx + 0x70u));
  /* 0050003d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050003f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500040 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500041 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500042 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500044 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500045 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00500048:;
  /* 00500048 lea edi, [ebp - 0x40] */ edi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0050004b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050004d fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00500050 fadd dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500053 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500056 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00500059 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050005a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050005c call 0x4fbf80 */ esp -= 4; M32(esp) = 0x500061u; SAVEALL; F_004fbf80(c); ABI_CHECK(0x4fbf80u, 0x50005cu); RETCHK(0x500061u, 0x50005cu); LOADALL;
  /* 00500061 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500063 mov byte ptr [ebx + 0x60], 0 */ { const u32 m_ = (u32)(ebx + 0x60u); M8(m_) = (u8)(0x0u); }
  /* 00500067 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500068 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050006a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050006b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500021(CPU *c) {
  NATIVE_HOOK(0x500021u) REGS; LOADALL;
L_00500021:;
  /* 00500021 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500023 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500026 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00500027 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00500029 mov al, byte ptr [ebx + 0x60] */ { const u32 m_ = (u32)(ebx + 0x60u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050002c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050002e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050002f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00500032 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500033 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00500038 jne 0x500048 */ if (!ZF_) goto L_00500048;
  /* 0050003a lea edi, [ebx + 0x70] */ edi = (u32)((u32)(ebx + 0x70u));
  /* 0050003d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050003f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500040 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500041 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500042 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500044 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500045 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00500048:;
  /* 00500048 lea edi, [ebp - 0x40] */ edi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0050004b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050004d fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00500050 fadd dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500053 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500056 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00500059 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050005a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050005c call 0x4fbf80 */ esp -= 4; M32(esp) = 0x500061u; SAVEALL; F_004fbf80(c); ABI_CHECK(0x4fbf80u, 0x50005cu); RETCHK(0x500061u, 0x50005cu); LOADALL;
  /* 00500061 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500063 mov byte ptr [ebx + 0x60], 0 */ { const u32 m_ = (u32)(ebx + 0x60u); M8(m_) = (u8)(0x0u); }
  /* 00500067 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500068 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050006a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050006b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500029(CPU *c) {
  NATIVE_HOOK(0x500029u) REGS; LOADALL;
L_00500029:;
  /* 00500029 mov al, byte ptr [ebx + 0x60] */ { const u32 m_ = (u32)(ebx + 0x60u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050002c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050002e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050002f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00500032 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500033 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00500038 jne 0x500048 */ if (!ZF_) goto L_00500048;
  /* 0050003a lea edi, [ebx + 0x70] */ edi = (u32)((u32)(ebx + 0x70u));
  /* 0050003d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050003f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500040 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500041 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500042 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500044 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500045 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00500048:;
  /* 00500048 lea edi, [ebp - 0x40] */ edi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0050004b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050004d fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00500050 fadd dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500053 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500056 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00500059 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050005a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050005c call 0x4fbf80 */ esp -= 4; M32(esp) = 0x500061u; SAVEALL; F_004fbf80(c); ABI_CHECK(0x4fbf80u, 0x50005cu); RETCHK(0x500061u, 0x50005cu); LOADALL;
  /* 00500061 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500063 mov byte ptr [ebx + 0x60], 0 */ { const u32 m_ = (u32)(ebx + 0x60u); M8(m_) = (u8)(0x0u); }
  /* 00500067 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500068 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050006a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050006b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050002a(CPU *c) {
  NATIVE_HOOK(0x50002au) REGS; LOADALL;
L_0050002a:;
  /* 0050002a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050002b pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0050002c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050002e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050002f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00500032 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500033 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00500038 jne 0x500048 */ if (!ZF_) goto L_00500048;
  /* 0050003a lea edi, [ebx + 0x70] */ edi = (u32)((u32)(ebx + 0x70u));
  /* 0050003d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050003f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500040 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500041 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500042 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500044 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500045 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00500048:;
  /* 00500048 lea edi, [ebp - 0x40] */ edi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0050004b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050004d fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00500050 fadd dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500053 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500056 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00500059 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050005a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050005c call 0x4fbf80 */ esp -= 4; M32(esp) = 0x500061u; SAVEALL; F_004fbf80(c); ABI_CHECK(0x4fbf80u, 0x50005cu); RETCHK(0x500061u, 0x50005cu); LOADALL;
  /* 00500061 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500063 mov byte ptr [ebx + 0x60], 0 */ { const u32 m_ = (u32)(ebx + 0x60u); M8(m_) = (u8)(0x0u); }
  /* 00500067 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500068 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050006a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050006b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050002c(CPU *c) {
  NATIVE_HOOK(0x50002cu) REGS; LOADALL;
L_0050002c:;
  /* 0050002c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050002e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050002f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00500032 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500033 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00500038 jne 0x500048 */ if (!ZF_) goto L_00500048;
  /* 0050003a lea edi, [ebx + 0x70] */ edi = (u32)((u32)(ebx + 0x70u));
  /* 0050003d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050003f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500040 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500041 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500042 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500044 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500045 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00500048:;
  /* 00500048 lea edi, [ebp - 0x40] */ edi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0050004b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050004d fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00500050 fadd dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500053 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500056 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00500059 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050005a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050005c call 0x4fbf80 */ esp -= 4; M32(esp) = 0x500061u; SAVEALL; F_004fbf80(c); ABI_CHECK(0x4fbf80u, 0x50005cu); RETCHK(0x500061u, 0x50005cu); LOADALL;
  /* 00500061 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500063 mov byte ptr [ebx + 0x60], 0 */ { const u32 m_ = (u32)(ebx + 0x60u); M8(m_) = (u8)(0x0u); }
  /* 00500067 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500068 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050006a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050006b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500044(CPU *c) {
  NATIVE_HOOK(0x500044u) REGS; LOADALL;
L_00500044:;
  /* 00500044 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500045 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500049(CPU *c) {
  NATIVE_HOOK(0x500049u) REGS; LOADALL;
  goto L_00500049;
L_0050000b:;
  /* 0050000b int3 */ TRAP(0x50000bu, "int3");
L_00500049:;
  /* 00500049 jge 0x50000b */ if (!LT_) goto L_0050000b;
  /* 0050004b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050004d fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00500050 fadd dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500053 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500056 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00500059 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050005a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050005c call 0x4fbf80 */ esp -= 4; M32(esp) = 0x500061u; SAVEALL; F_004fbf80(c); ABI_CHECK(0x4fbf80u, 0x50005cu); RETCHK(0x500061u, 0x50005cu); LOADALL;
  /* 00500061 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500063 mov byte ptr [ebx + 0x60], 0 */ { const u32 m_ = (u32)(ebx + 0x60u); M8(m_) = (u8)(0x0u); }
  /* 00500067 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500068 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050006a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050006b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500050(CPU *c) {
  NATIVE_HOOK(0x500050u) REGS; LOADALL;
L_00500050:;
  /* 00500050 fadd dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500053 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500056 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00500059 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050005a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050005c call 0x4fbf80 */ esp -= 4; M32(esp) = 0x500061u; SAVEALL; F_004fbf80(c); ABI_CHECK(0x4fbf80u, 0x50005cu); RETCHK(0x500061u, 0x50005cu); LOADALL;
  /* 00500061 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500063 mov byte ptr [ebx + 0x60], 0 */ { const u32 m_ = (u32)(ebx + 0x60u); M8(m_) = (u8)(0x0u); }
  /* 00500067 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500068 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050006a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050006b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500070(CPU *c) {
  NATIVE_HOOK(0x500070u) REGS; LOADALL;
L_00500070:;
  /* 00500070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500073 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500074 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00500077 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050007a fcomp dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00500080 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00500083 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500084 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00500086 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00500088 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050008b jne 0x5000b4 */ if (!ZF_) goto L_005000b4;
  /* 0050008d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00500090:;
  /* 00500090 push 0x3c23d70a */ { u32 v_ = 0x3c23d70au; esp -= 4; M32(esp) = v_; }
  /* 00500095 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500096 call 0x5000d0 */ esp -= 4; M32(esp) = 0x50009bu; SAVEALL; F_005000d0(c); ABI_CHECK(0x5000d0u, 0x500096u); RETCHK(0x50009bu, 0x500096u); LOADALL;
  /* 0050009b fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0050009e fsub dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005000a4 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 005000a7 fcomp dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005000ad fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005000af test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005000b2 je 0x500090 */ if (ZF_) goto L_00500090;
L_005000b4:;
  /* 005000b4 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005000b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005000b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005000b9 call 0x5000d0 */ esp -= 4; M32(esp) = 0x5000beu; SAVEALL; F_005000d0(c); ABI_CHECK(0x5000d0u, 0x5000b9u); RETCHK(0x5000beu, 0x5000b9u); LOADALL;
  /* 005000be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005000bf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005000c1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005000c2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500082(CPU *c) {
  NATIVE_HOOK(0x500082u) REGS; LOADALL;
L_00500082:;
  /* 00500082 cld */ c->df = 0;
  /* 00500083 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500084 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00500086 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00500088 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050008b jne 0x5000b4 */ if (!ZF_) goto L_005000b4;
  /* 0050008d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00500090:;
  /* 00500090 push 0x3c23d70a */ { u32 v_ = 0x3c23d70au; esp -= 4; M32(esp) = v_; }
  /* 00500095 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500096 call 0x5000d0 */ esp -= 4; M32(esp) = 0x50009bu; SAVEALL; F_005000d0(c); ABI_CHECK(0x5000d0u, 0x500096u); RETCHK(0x50009bu, 0x500096u); LOADALL;
  /* 0050009b fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0050009e fsub dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005000a4 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 005000a7 fcomp dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005000ad fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005000af test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005000b2 je 0x500090 */ if (ZF_) goto L_00500090;
L_005000b4:;
  /* 005000b4 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005000b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005000b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005000b9 call 0x5000d0 */ esp -= 4; M32(esp) = 0x5000beu; SAVEALL; F_005000d0(c); ABI_CHECK(0x5000d0u, 0x5000b9u); RETCHK(0x5000beu, 0x5000b9u); LOADALL;
  /* 005000be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005000bf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005000c1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005000c2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005000d0(CPU *c) {
  NATIVE_HOOK(0x5000d0u) REGS; LOADALL;
L_005000d0:;
  /* 005000d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005000d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005000d3 sub esp, 0xac */ { u32 a_ = esp, b_ = 0xacu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005000d9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005000da mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005000dd mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005000df call 0x4fbfb0 */ esp -= 4; M32(esp) = 0x5000e4u; SAVEALL; F_004fbfb0(c); ABI_CHECK(0x4fbfb0u, 0x5000dfu); RETCHK(0x5000e4u, 0x5000dfu); LOADALL;
  /* 005000e4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005000e6 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 005000e9 je 0x5003e1 */ if (ZF_) goto L_005003e1;
  /* 005000ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005000f0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005000f1 mov esi, eax */ { esi = (u32)(eax); }
  /* 005000f3 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 005000f8 lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 005000fb rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005000fd fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 00500100 fsub dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00500106 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00500109 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050010c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050010d fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 00500110 fsub dword ptr [ebx + 0xa4] */ { const u32 m_ = (u32)(ebx + 0xa4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00500116 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500119 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0050011c fsub dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00500122 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500125 call 0x5aa970 */ esp -= 4; M32(esp) = 0x50012au; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x500125u); RETCHK(0x50012au, 0x500125u); LOADALL;
  /* 0050012a fcom dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00500130 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500133 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00500135 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500138 jne 0x50015a */ if (!ZF_) goto L_0050015a;
  /* 0050013a fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00500140 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 00500142 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00500145 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00500147 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050014a fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0050014d fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0050014f fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500152 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00500155 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500158 jmp 0x500162 */ goto L_00500162;
L_0050015a:;
  /* 0050015a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050015c fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
L_00500162:;
  /* 00500162 fmul dword ptr [0x657034] */ { const u32 m_ = (u32)(0x657034u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00500168 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 0050016b fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0050016e mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00500173 lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00500176 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00500178 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0050017a fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050017d fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 0050017f fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00500182 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500185 fld dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); FPUSH((double)MF32(m_)); }
  /* 00500188 fmul dword ptr [0x64eacc] */ { const u32 m_ = (u32)(0x64eaccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050018e fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 00500190 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500193 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 00500195 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00500198 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0050019b fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050019e fstp dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005001a1 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 005001a4 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005001a7 fstp dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005001aa fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005001ad fmul dword ptr [0x657030] */ { const u32 m_ = (u32)(0x657030u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005001b3 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005001b5 fmul dword ptr [ebx + 0xb0] */ { const u32 m_ = (u32)(ebx + 0xb0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005001bb fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005001bd fmul dword ptr [ebx + 0xb4] */ { const u32 m_ = (u32)(ebx + 0xb4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005001c3 fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 005001c5 fmul dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005001cb faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 005001cd fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 005001cf fstp dword ptr [ebx + 0xb0] */ { const u32 m_ = (u32)(ebx + 0xb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005001d5 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005001d7 fadd dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005001da fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005001dc fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005001de fstp dword ptr [ebx + 0xb4] */ { const u32 m_ = (u32)(ebx + 0xb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005001e4 fadd dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005001e7 fst dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); }
  /* 005001ea fstp dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005001f0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005001f2 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005001f4 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005001f7 fstp dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005001fa fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005001fd fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00500200 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00500203 fld dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); FPUSH((double)MF32(m_)); }
  /* 00500206 fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500209 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050020c fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050020e fadd dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500211 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500214 fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500217 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050021a fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 0050021d fsub dword ptr [ebx + 0xa4] */ { const u32 m_ = (u32)(ebx + 0xa4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00500223 fld dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); FPUSH((double)MF32(m_)); }
  /* 00500226 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050022c fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050022f fcom dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00500232 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00500234 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500237 jne 0x500240 */ if (!ZF_) goto L_00500240;
  /* 00500239 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050023b fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050023e jmp 0x500259 */ goto L_00500259;
L_00500240:;
  /* 00500240 fld dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); FPUSH((double)MF32(m_)); }
  /* 00500243 fmul dword ptr [0x656e60] */ { const u32 m_ = (u32)(0x656e60u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00500249 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050024c fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050024f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00500251 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500254 jp 0x500262 */ if (PF_) goto L_00500262;
  /* 00500256 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
L_00500259:;
  /* 00500259 fadd dword ptr [ebx + 0xa4] */ { const u32 m_ = (u32)(ebx + 0xa4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050025f fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
L_00500262:;
  /* 00500262 mov ecx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 00500265 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00500268 mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0050026b fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500271 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00500274 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 00500277 lea esi, [ebx + 0x70] */ esi = (u32)((u32)(ebx + 0x70u));
  /* 0050027a mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0050027f lea edi, [ebp - 0xac] */ edi = (u32)((u32)(ebp + 0xffffff54u));
  /* 00500285 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00500287 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050028a mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 0050028d mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00500290 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 00500293 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00500296 lea ebx, [ebp - 0xac] */ ebx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0050029c fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050029f mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 005002a2 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005002a5 call 0x546b80 */ esp -= 4; M32(esp) = 0x5002aau; SAVEALL; F_00546b80(c); ABI_CHECK(0x546b80u, 0x5002a5u); RETCHK(0x5002aau, 0x5002a5u); LOADALL;
  /* 005002aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005002ac je 0x5002cc */ if (ZF_) goto L_005002cc;
  /* 005002ae mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 005002b1 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 005002b4 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 005002b9 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005002bb lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 005002be rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005002c0 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 005002c3 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 005002c6 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 005002c9 mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
L_005002cc:;
  /* 005002cc mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005002cf fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005002d2 fmul dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005002d5 lea edx, [ebp - 0x60] */ edx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 005002d8 fmul dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005002de fadd dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005002e1 fst dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); MF32(m_) = (float)ST(0); }
  /* 005002e4 fsin */ ST(0) = m_sin(ST(0)); c->fsw &= ~0x400u;
  /* 005002e6 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 005002e9 fmul dword ptr [0x656f4c] */ { const u32 m_ = (u32)(0x656f4cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005002ef fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005002f2 mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 005002f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005002f6 call 0x546760 */ esp -= 4; M32(esp) = 0x5002fbu; SAVEALL; F_00546760(c); ABI_CHECK(0x546760u, 0x5002f6u); RETCHK(0x5002fbu, 0x5002f6u); LOADALL;
  /* 005002fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005002fc lea edx, [ebp - 0x60] */ edx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 005002ff call 0x546720 */ esp -= 4; M32(esp) = 0x500304u; SAVEALL; F_00546720(c); ABI_CHECK(0x546720u, 0x5002ffu); RETCHK(0x500304u, 0x5002ffu); LOADALL;
  /* 00500304 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00500307 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050030a lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0050030d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050030e fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00500314 fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 00500317 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00500319 fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050031c fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050031f fld dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); FPUSH((double)MF32(m_)); }
  /* 00500322 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00500324 fadd dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500327 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050032a fld dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); FPUSH((double)MF32(m_)); }
  /* 0050032d fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0050032f fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00500332 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500335 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00500337 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0050033a fsub dword ptr [esi + 0xa0] */ { const u32 m_ = (u32)(esi + 0xa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00500340 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500343 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 00500346 fsub dword ptr [esi + 0xa4] */ { const u32 m_ = (u32)(esi + 0xa4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050034c fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050034f fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 00500352 fsub dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00500358 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050035b call 0x5aa970 */ esp -= 4; M32(esp) = 0x500360u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x50035bu); RETCHK(0x500360u, 0x50035bu); LOADALL;
  /* 00500360 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 00500363 fcomp dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00500369 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050036c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050036e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500371 jne 0x5003c9 */ if (!ZF_) goto L_005003c9;
  /* 00500373 fld dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); FPUSH((double)MF32(m_)); }
  /* 00500376 fmul dword ptr [0x65702c] */ { const u32 m_ = (u32)(0x65702cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050037c fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0050037f fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 00500381 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00500383 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500386 jne 0x5003c7 */ if (!ZF_) goto L_005003c7;
  /* 00500388 fdiv dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0050038b fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0050038e fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00500390 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500393 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00500396 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00500398 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050039b fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050039e fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005003a1 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 005003a4 fadd dword ptr [esi + 0xa0] */ { const u32 m_ = (u32)(esi + 0xa0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005003aa fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005003ad fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005003b0 fadd dword ptr [esi + 0xa4] */ { const u32 m_ = (u32)(esi + 0xa4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005003b6 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005003b9 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 005003bc fadd dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005003c2 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005003c5 jmp 0x5003c9 */ goto L_005003c9;
L_005003c7:;
  /* 005003c7 fstp st(0) */ ST(0) = ST(0); FPOP();
L_005003c9:;
  /* 005003c9 lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 005003cc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005003cd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005003cf call 0x4fbf80 */ esp -= 4; M32(esp) = 0x5003d4u; SAVEALL; F_004fbf80(c); ABI_CHECK(0x4fbf80u, 0x5003cfu); RETCHK(0x5003d4u, 0x5003cfu); LOADALL;
  /* 005003d4 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005003d7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005003d8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005003da call 0x4fc0c0 */ esp -= 4; M32(esp) = 0x5003dfu; SAVEALL; F_004fc0c0(c); ABI_CHECK(0x4fc0c0u, 0x5003dau); RETCHK(0x5003dfu, 0x5003dau); LOADALL;
  /* 005003df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005003e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005003e1:;
  /* 005003e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005003e2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005003e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005003e5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005003f0(CPU *c) {
  NATIVE_HOOK(0x5003f0u) REGS; LOADALL;
L_005003f0:;
  /* 005003f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005003f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005003f3 sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005003f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005003f7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005003f9 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 005003fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005003fe je 0x500472 */ if (ZF_) goto L_00500472;
  /* 00500400 mov ecx, dword ptr [esi + 0xa4] */ { const u32 m_ = (u32)(esi + 0xa4u); ecx = (u32)(M32(m_)); }
  /* 00500406 mov eax, dword ptr [esi + 0xa0] */ { const u32 m_ = (u32)(esi + 0xa0u); eax = (u32)(M32(m_)); }
  /* 0050040c mov edx, dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); edx = (u32)(M32(m_)); }
  /* 00500412 mov dword ptr [ebp - 0x44], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ecx); }
  /* 00500415 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00500417 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 0050041a mov dword ptr [ebp - 0x40], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edx); }
  /* 0050041d mov dword ptr [ebp - 0x30], 0xffd2c8c8 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xffd2c8c8u); }
  /* 00500424 call 0x4fbfb0 */ esp -= 4; M32(esp) = 0x500429u; SAVEALL; F_004fbfb0(c); ABI_CHECK(0x4fbfb0u, 0x500424u); RETCHK(0x500429u, 0x500424u); LOADALL;
  /* 00500429 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050042b je 0x50046b */ if (ZF_) goto L_0050046b;
  /* 0050042d mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 00500430 mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 00500433 mov edx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); edx = (u32)(M32(m_)); }
  /* 00500436 push 0x1a */ { u32 v_ = 0x1au; esp -= 4; M32(esp) = v_; }
  /* 00500438 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050043a mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 0050043d mov eax, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); eax = (u32)(M32(m_)); }
  /* 00500440 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00500443 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00500445 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500446 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00500449 mov dword ptr [ebp - 0xc], 0xffffc8c8 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0xffffc8c8u); }
  /* 00500450 call 0x5b4a60 */ esp -= 4; M32(esp) = 0x500455u; SAVEALL; F_005b4a60(c); ABI_CHECK(0x5b4a60u, 0x500450u); RETCHK(0x500455u, 0x500450u); LOADALL;
  /* 00500455 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500458 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050045a je 0x50046b */ if (ZF_) goto L_0050046b;
  /* 0050045c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050045e call 0x5b4cc0 */ esp -= 4; M32(esp) = 0x500463u; SAVEALL; F_005b4cc0(c); ABI_CHECK(0x5b4cc0u, 0x50045eu); RETCHK(0x500463u, 0x50045eu); LOADALL;
  /* 00500463 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500466 call 0x5b4b30 */ esp -= 4; M32(esp) = 0x50046bu; SAVEALL; F_005b4b30(c); ABI_CHECK(0x5b4b30u, 0x500466u); RETCHK(0x50046bu, 0x500466u); LOADALL;
L_0050046b:;
  /* 0050046b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050046d call 0x4fc100 */ esp -= 4; M32(esp) = 0x500472u; SAVEALL; F_004fc100(c); ABI_CHECK(0x4fc100u, 0x50046du); RETCHK(0x500472u, 0x50046du); LOADALL;
L_00500472:;
  /* 00500472 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500473 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500475 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500476 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00500480(CPU *c) {
  NATIVE_HOOK(0x500480u) REGS; LOADALL;
L_00500480:;
  /* 00500480 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00500482 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500483 call 0x509940 */ esp -= 4; M32(esp) = 0x500488u; SAVEALL; F_00509940(c); ABI_CHECK(0x509940u, 0x500483u); RETCHK(0x500488u, 0x500483u); LOADALL;
  /* 00500488 mov dword ptr [esi], 0x64ff48 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64ff48u); }
  /* 0050048e mov dword ptr [esi + 0x350], 0 */ { const u32 m_ = (u32)(esi + 0x350u); M32(m_) = (u32)(0x0u); }
  /* 00500498 mov dword ptr [esi + 0x354], 0 */ { const u32 m_ = (u32)(esi + 0x354u); M32(m_) = (u32)(0x0u); }
  /* 005004a2 mov dword ptr [esi + 0x358], 0 */ { const u32 m_ = (u32)(esi + 0x358u); M32(m_) = (u32)(0x0u); }
  /* 005004ac mov eax, esi */ { eax = (u32)(esi); }
  /* 005004ae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005004b0(CPU *c) {
  NATIVE_HOOK(0x5004b0u) REGS; LOADALL;
L_005004b0:;
  /* 005004b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005004b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005004b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005004b4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005004b6 call 0x5004e0 */ esp -= 4; M32(esp) = 0x5004bbu; SAVEALL; F_005004e0(c); ABI_CHECK(0x5004e0u, 0x5004b6u); RETCHK(0x5004bbu, 0x5004b6u); LOADALL;
  /* 005004bb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005004bf je 0x5004ca */ if (ZF_) goto L_005004ca;
  /* 005004c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005004c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5004c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5004c2u); RETCHK(0x5004c7u, 0x5004c2u); LOADALL;
  /* 005004c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005004ca:;
  /* 005004ca mov eax, esi */ { eax = (u32)(esi); }
  /* 005004cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005004cd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005004ce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005004e0(CPU *c) {
  NATIVE_HOOK(0x5004e0u) REGS; LOADALL;
L_005004e0:;
  /* 005004e0 mov dword ptr [ecx], 0x64ff48 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64ff48u); }
  /* 005004e6 jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_005004f0(CPU *c) {
  NATIVE_HOOK(0x5004f0u) REGS; LOADALL;
L_005004f0:;
  /* 005004f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005004f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005004f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005004f5 push 0x61e031 */ { u32 v_ = 0x61e031u; esp -= 4; M32(esp) = v_; }
  /* 005004fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00500500 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500501 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00500508 sub esp, 0x640 */ { u32 a_ = esp, b_ = 0x640u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050050e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00500513 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00500514 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500515 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500516 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00500518 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050051a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050051c push 0x650054 */ { u32 v_ = 0x650054u; esp -= 4; M32(esp) = v_; }
  /* 00500521 lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 00500527 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050052a mov dword ptr [ebp - 0x624], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffff9dcu); M32(m_) = (u32)(0xfu); }
  /* 00500534 mov dword ptr [ebp - 0x628], ebx */ { const u32 m_ = (u32)(ebp + 0xfffff9d8u); M32(m_) = (u32)(ebx); }
  /* 0050053a mov byte ptr [ebp - 0x638], bl */ { const u32 m_ = (u32)(ebp + 0xfffff9c8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00500540 call 0x404420 */ esp -= 4; M32(esp) = 0x500545u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x500540u); RETCHK(0x500545u, 0x500540u); LOADALL;
  /* 00500545 lea eax, [ebp - 0x63c] */ eax = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0050054b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050054c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050054e mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00500551 call 0x5075d0 */ esp -= 4; M32(esp) = 0x500556u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x500551u); RETCHK(0x500556u, 0x500551u); LOADALL;
  /* 00500556 mov dword ptr [edi + 0x350], eax */ { const u32 m_ = (u32)(edi + 0x350u); M32(m_) = (u32)(eax); }
  /* 0050055c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00500563 mov eax, dword ptr [ebp - 0x624] */ { const u32 m_ = (u32)(ebp + 0xfffff9dcu); eax = (u32)(M32(m_)); }
  /* 00500569 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0050056e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00500570 jb 0x500581 */ if (CF_) goto L_00500581;
  /* 00500572 mov ecx, dword ptr [ebp - 0x638] */ { const u32 m_ = (u32)(ebp + 0xfffff9c8u); ecx = (u32)(M32(m_)); }
  /* 00500578 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500579 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50057eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x500579u); RETCHK(0x50057eu, 0x500579u); LOADALL;
  /* 0050057e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00500581:;
  /* 00500581 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00500583 push 0x650048 */ { u32 v_ = 0x650048u; esp -= 4; M32(esp) = v_; }
  /* 00500588 lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 0050058e mov dword ptr [ebp - 0x624], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffff9dcu); M32(m_) = (u32)(0xfu); }
  /* 00500598 mov dword ptr [ebp - 0x628], ebx */ { const u32 m_ = (u32)(ebp + 0xfffff9d8u); M32(m_) = (u32)(ebx); }
  /* 0050059e mov byte ptr [ebp - 0x638], bl */ { const u32 m_ = (u32)(ebp + 0xfffff9c8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005005a4 call 0x404420 */ esp -= 4; M32(esp) = 0x5005a9u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5005a4u); RETCHK(0x5005a9u, 0x5005a4u); LOADALL;
  /* 005005a9 lea edx, [ebp - 0x63c] */ edx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 005005af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005005b0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005005b2 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 005005b9 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5005beu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5005b9u); RETCHK(0x5005beu, 0x5005b9u); LOADALL;
  /* 005005be mov dword ptr [edi + 0x354], eax */ { const u32 m_ = (u32)(edi + 0x354u); M32(m_) = (u32)(eax); }
  /* 005005c4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005005cb cmp dword ptr [ebp - 0x624], esi */ { const u32 m_ = (u32)(ebp + 0xfffff9dcu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005005d1 jb 0x5005e2 */ if (CF_) goto L_005005e2;
  /* 005005d3 mov eax, dword ptr [ebp - 0x638] */ { const u32 m_ = (u32)(ebp + 0xfffff9c8u); eax = (u32)(M32(m_)); }
  /* 005005d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005005da call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5005dfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5005dau); RETCHK(0x5005dfu, 0x5005dau); LOADALL;
  /* 005005df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005005e2:;
  /* 005005e2 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 005005e4 push 0x650040 */ { u32 v_ = 0x650040u; esp -= 4; M32(esp) = v_; }
  /* 005005e9 lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 005005ef mov dword ptr [ebp - 0x624], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffff9dcu); M32(m_) = (u32)(0xfu); }
  /* 005005f9 mov dword ptr [ebp - 0x628], ebx */ { const u32 m_ = (u32)(ebp + 0xfffff9d8u); M32(m_) = (u32)(ebx); }
  /* 005005ff mov byte ptr [ebp - 0x638], bl */ { const u32 m_ = (u32)(ebp + 0xfffff9c8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00500605 call 0x404420 */ esp -= 4; M32(esp) = 0x50060au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x500605u); RETCHK(0x50060au, 0x500605u); LOADALL;
  /* 0050060a lea ecx, [ebp - 0x63c] */ ecx = (u32)((u32)(ebp + 0xfffff9c4u));
  /* 00500610 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500611 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00500613 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0050061a call 0x5075d0 */ esp -= 4; M32(esp) = 0x50061fu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x50061au); RETCHK(0x50061fu, 0x50061au); LOADALL;
  /* 0050061f mov dword ptr [edi + 0x358], eax */ { const u32 m_ = (u32)(edi + 0x358u); M32(m_) = (u32)(eax); }
  /* 00500625 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0050062c cmp dword ptr [ebp - 0x624], esi */ { const u32 m_ = (u32)(ebp + 0xfffff9dcu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00500632 jb 0x500643 */ if (CF_) goto L_00500643;
  /* 00500634 mov edx, dword ptr [ebp - 0x638] */ { const u32 m_ = (u32)(ebp + 0xfffff9c8u); edx = (u32)(M32(m_)); }
  /* 0050063a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050063b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x500640u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50063bu); RETCHK(0x500640u, 0x50063bu); LOADALL;
  /* 00500640 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00500643:;
  /* 00500643 mov ecx, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); ecx = (u32)(M32(m_)); }
  /* 00500649 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050064b je 0x50097d */ if (ZF_) goto L_0050097d;
  /* 00500651 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00500653 lea edx, [ebp - 0x620] */ edx = (u32)((u32)(ebp + 0xfffff9e0u));
  /* 00500659 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050065a call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50065du; SAVEALL; call_ind(c, t_); RETCHK(0x50065du, 0x50065au); LOADALL; }
  /* 0050065d cmp dword ptr [0x9c0268], ebx */ { const u32 m_ = (u32)(0x9c0268u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00500663 mov dword ptr [0x7a6e90], 1 */ { const u32 m_ = (u32)(0x7a6e90u); M32(m_) = (u32)(0x1u); }
  /* 0050066d jmp 0x50088c */ goto L_0050088c;
L_0050088c:;
  /* 0050088c lea ecx, [ebp - 0x610] */ ecx = (u32)((u32)(ebp + 0xfffff9f0u));
  /* 00500892 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500893 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00500898 call dword ptr [0x62e1bc] */ { const u32 m_ = (u32)(0x62e1bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50089eu; SAVEALL; call_ind(c, t_); RETCHK(0x50089eu, 0x500898u); LOADALL; }
  /* 0050089e lea edx, [ebp - 0x610] */ edx = (u32)((u32)(ebp + 0xfffff9f0u));
  /* 005008a4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005008a5 push 0x63e7c8 */ { u32 v_ = 0x63e7c8u; esp -= 4; M32(esp) = v_; }
  /* 005008aa lea eax, [ebp - 0x410] */ eax = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 005008b0 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 005008b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005008b6 call 0x5fe928 */ esp -= 4; M32(esp) = 0x5008bbu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x5008b6u); RETCHK(0x5008bbu, 0x5008b6u); LOADALL;
  /* 005008bb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005008be lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 005008c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005008c5 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 005008ca lea edx, [ebp - 0x210] */ edx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 005008d0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005008d1 push 0x64294c */ { u32 v_ = 0x64294cu; esp -= 4; M32(esp) = v_; }
  /* 005008d6 push 0x643538 */ { u32 v_ = 0x643538u; esp -= 4; M32(esp) = v_; }
  /* 005008db push 0x63e79c */ { u32 v_ = 0x63e79cu; esp -= 4; M32(esp) = v_; }
  /* 005008e0 call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5008e6u; SAVEALL; call_ind(c, t_); RETCHK(0x5008e6u, 0x5008e0u); LOADALL; }
  /* 005008e6 lea ecx, [ebp - 0x620] */ ecx = (u32)((u32)(ebp + 0xfffff9e0u));
  /* 005008ec lea eax, [ebp - 0x64c] */ eax = (u32)((u32)(ebp + 0xfffff9b4u));
  /* 005008f2 call 0x52cea0 */ esp -= 4; M32(esp) = 0x5008f7u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x5008f2u); RETCHK(0x5008f7u, 0x5008f2u); LOADALL;
  /* 005008f7 mov ecx, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); ecx = (u32)(M32(m_)); }
  /* 005008fd mov edx, eax */ { edx = (u32)(eax); }
  /* 005008ff add ecx, 0x188 */ { u32 a_ = ecx, b_ = 0x188u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00500905 lea eax, [ebp - 0x630] */ eax = (u32)((u32)(ebp + 0xfffff9d0u));
  /* 0050090b call 0x52cee0 */ esp -= 4; M32(esp) = 0x500910u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50090bu); RETCHK(0x500910u, 0x50090bu); LOADALL;
  /* 00500910 lea eax, [ebp - 0x210] */ eax = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00500916 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00500919 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00500920:;
  /* 00500920 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00500922 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00500923 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00500925 jne 0x500920 */ if (!ZF_) goto L_00500920;
  /* 00500927 mov ecx, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); ecx = (u32)(M32(m_)); }
  /* 0050092d sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050092f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500930 lea eax, [ebp - 0x210] */ eax = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00500936 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500937 add ecx, 0x198 */ { u32 a_ = ecx, b_ = 0x198u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050093d call 0x404420 */ esp -= 4; M32(esp) = 0x500942u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50093du); RETCHK(0x500942u, 0x50093du); LOADALL;
  /* 00500942 mov ecx, dword ptr [0x9c0264] */ { const u32 m_ = (u32)(0x9c0264u); ecx = (u32)(M32(m_)); }
  /* 00500948 mov eax, dword ptr [0x9c0260] */ { const u32 m_ = (u32)(0x9c0260u); eax = (u32)(M32(m_)); }
  /* 0050094d mov esi, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); esi = (u32)(M32(m_)); }
  /* 00500953 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500954 call 0x50d030 */ esp -= 4; M32(esp) = 0x500959u; SAVEALL; F_0050d030(c); ABI_CHECK(0x50d030u, 0x500954u); RETCHK(0x500959u, 0x500954u); LOADALL;
  /* 00500959 mov edx, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); edx = (u32)(M32(m_)); }
  /* 0050095f mov byte ptr [edx + 0x1f8], bl */ { const u32 m_ = (u32)(edx + 0x1f8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00500965 mov eax, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); eax = (u32)(M32(m_)); }
  /* 0050096b mov ecx, dword ptr [eax + 0x184] */ { const u32 m_ = (u32)(eax + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00500971 mov byte ptr [0x696e28], bl */ { const u32 m_ = (u32)(0x696e28u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00500977 mov dword ptr [0x7a6e8c], ecx */ { const u32 m_ = (u32)(0x7a6e8cu); M32(m_) = (u32)(ecx); }
L_0050097d:;
  /* 0050097d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00500980 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500981 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500982 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00500989 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0050098c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050098e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050098f call 0x61af31 */ esp -= 4; M32(esp) = 0x500994u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x50098fu); RETCHK(0x500994u, 0x50098fu); LOADALL;
  /* 00500994 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500996 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500997 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005009a0(CPU *c) {
  NATIVE_HOOK(0x5009a0u) REGS; LOADALL;
L_005009a0:;
  /* 005009a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005009a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005009a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005009a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005009a5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005009a8 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005009aa dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005009ab mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005009ad jne 0x500a0b */ if (!ZF_) goto L_00500a0b;
  /* 005009af mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005009b2 call 0x5075c0 */ esp -= 4; M32(esp) = 0x5009b7u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x5009b2u); RETCHK(0x5009b7u, 0x5009b2u); LOADALL;
  /* 005009b7 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005009ba push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 005009bc push 0x650040 */ { u32 v_ = 0x650040u; esp -= 4; M32(esp) = v_; }
  /* 005009c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005009c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005009c4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005009c6 call 0x405de0 */ esp -= 4; M32(esp) = 0x5009cbu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x5009c6u); RETCHK(0x5009cbu, 0x5009c6u); LOADALL;
  /* 005009cb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005009cd jne 0x500a0b */ if (!ZF_) goto L_00500a0b;
  /* 005009cf mov ecx, dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); ecx = (u32)(M32(m_)); }
  /* 005009d5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005009d7 je 0x5009fc */ if (ZF_) goto L_005009fc;
  /* 005009d9 call 0x50d110 */ esp -= 4; M32(esp) = 0x5009deu; SAVEALL; F_0050d110(c); ABI_CHECK(0x50d110u, 0x5009d9u); RETCHK(0x5009deu, 0x5009d9u); LOADALL;
  /* 005009de mov dword ptr [ebx + 0x354], 0 */ { const u32 m_ = (u32)(ebx + 0x354u); M32(m_) = (u32)(0x0u); }
  /* 005009e8 mov dword ptr [0x7a6e90], 0 */ { const u32 m_ = (u32)(0x7a6e90u); M32(m_) = (u32)(0x0u); }
  /* 005009f2 mov dword ptr [0x7a6e8c], 0 */ { const u32 m_ = (u32)(0x7a6e8cu); M32(m_) = (u32)(0x0u); }
L_005009fc:;
  /* 005009fc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005009fe call 0x509d90 */ esp -= 4; M32(esp) = 0x500a03u; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x5009feu); RETCHK(0x500a03u, 0x5009feu); LOADALL;
  /* 00500a03 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500a04 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00500a06 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500a07 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500a08 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00500a0b:;
  /* 00500a0b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500a0c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00500a0e call 0x50a1b0 */ esp -= 4; M32(esp) = 0x500a13u; SAVEALL; F_0050a1b0(c); ABI_CHECK(0x50a1b0u, 0x500a0eu); RETCHK(0x500a13u, 0x500a0eu); LOADALL;
  /* 00500a13 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500a14 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500a15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500a16 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500a20(CPU *c) {
  NATIVE_HOOK(0x500a20u) REGS; LOADALL;
L_00500a20:;
  /* 00500a20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500a21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500a23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00500a25 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00500a2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00500a30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500a31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00500a38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500a39 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00500a3a push 0x500aa0 */ { u32 v_ = 0x500aa0u; esp -= 4; M32(esp) = v_; }
  /* 00500a3f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500a42 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00500a44 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00500a46 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00500a49 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00500a4c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00500a4e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00500a4f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00500a52 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00500a59 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00500a5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500a5d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00500a60 call 0x404140 */ esp -= 4; M32(esp) = 0x500a65u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x500a60u); RETCHK(0x500a65u, 0x500a60u); LOADALL;
  /* 00500a65 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00500a68 call 0x405c00 */ esp -= 4; M32(esp) = 0x500a6du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x500a68u); RETCHK(0x500a6du, 0x500a68u); LOADALL;
  /* 00500a6d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00500a6f call 0x405c80 */ esp -= 4; M32(esp) = 0x500a74u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x500a6fu); RETCHK(0x500a74u, 0x500a6fu); LOADALL;
  /* 00500a74 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00500a78 jb 0x500a86 */ if (CF_) goto L_00500a86;
  /* 00500a7a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00500a7d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500a7e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x500a83u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x500a7eu); RETCHK(0x500a83u, 0x500a7eu); LOADALL;
  /* 00500a83 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00500a86:;
  /* 00500a86 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00500a89 mov eax, esi */ { eax = (u32)(esi); }
  /* 00500a8b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00500a92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500a93 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500a95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500a96 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00500aa0(CPU *c) {
  NATIVE_HOOK(0x500aa0u) REGS; LOADALL;
L_00500aa0:;
  /* 00500aa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500aa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500aa3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00500aa5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00500aaa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00500ab0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500ab1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00500ab8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500ab9 push 0x35c */ { u32 v_ = 0x35cu; esp -= 4; M32(esp) = v_; }
  /* 00500abe call 0x5fe934 */ esp -= 4; M32(esp) = 0x500ac3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x500abeu); RETCHK(0x500ac3u, 0x500abeu); LOADALL;
  /* 00500ac3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500ac6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00500ac9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00500acb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00500ad2 je 0x500aeb */ if (ZF_) goto L_00500aeb;
  /* 00500ad4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500ad5 mov esi, eax */ { esi = (u32)(eax); }
  /* 00500ad7 call 0x500480 */ esp -= 4; M32(esp) = 0x500adcu; SAVEALL; F_00500480(c); ABI_CHECK(0x500480u, 0x500ad7u); RETCHK(0x500adcu, 0x500ad7u); LOADALL;
  /* 00500adc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500add mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00500ae0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00500ae7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500ae9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500aea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00500aeb:;
  /* 00500aeb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00500aee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00500af0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00500af7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500af9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500afa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00500b00(CPU *c) {
  NATIVE_HOOK(0x500b00u) REGS; LOADALL;
L_00500b00:;
  /* 00500b00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500b01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500b03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500b04 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00500b06 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00500b08 je 0x500b37 */ if (ZF_) goto L_00500b37;
  /* 00500b0a mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00500b0d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00500b10 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500b13 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00500b15 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00500b17 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00500b1a mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00500b1d mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00500b20 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00500b23 mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00500b26 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00500b29 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00500b2c mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
  /* 00500b2f mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00500b32 call 0x51d4f0 */ esp -= 4; M32(esp) = 0x500b37u; SAVEALL; F_0051d4f0(c); ABI_CHECK(0x51d4f0u, 0x500b32u); RETCHK(0x500b37u, 0x500b32u); LOADALL;
L_00500b37:;
  /* 00500b37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500b38 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500b39 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_00500b40(CPU *c) {
  NATIVE_HOOK(0x500b40u) REGS; LOADALL;
L_00500b40:;
  /* 00500b40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500b41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500b43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500b44 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00500b47 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00500b49 mov dword ptr [ebx], 0x65005c */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x65005cu); }
  /* 00500b4f jne 0x500b5c */ if (!ZF_) goto L_00500b5c;
  /* 00500b51 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00500b54 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00500b56 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500b58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500b59 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00500b5c:;
  /* 00500b5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500b5d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500b5e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500b5f call 0x5feb00 */ esp -= 4; M32(esp) = 0x500b64u; SAVEALL; F_005feb00(c); ABI_CHECK(0x5feb00u, 0x500b5fu); RETCHK(0x500b64u, 0x500b5fu); LOADALL;
  /* 00500b64 mov esi, eax */ { esi = (u32)(eax); }
  /* 00500b66 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00500b67 lea edi, [esi*4] */ edi = (u32)((u32)(esi * 4u));
  /* 00500b6e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500b6f mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00500b72 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x500b77u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x500b72u); RETCHK(0x500b77u, 0x500b72u); LOADALL;
  /* 00500b77 mov edx, eax */ { edx = (u32)(eax); }
  /* 00500b79 mov dword ptr [ebx + 4], edx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00500b7c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00500b7e mov edi, edx */ { edi = (u32)(edx); }
  /* 00500b80 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00500b82 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00500b85 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500b88 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00500b8a rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00500b8c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00500b8e mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00500b90 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00500b92 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00500b95 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 00500b97 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00500b9a mov eax, edx */ { eax = (u32)(edx); }
  /* 00500b9c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00500b9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500ba0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500ba1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500ba2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00500ba3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00500ba5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00500ba7 call dword ptr [0x62e170] */ { const u32 m_ = (u32)(0x62e170u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x500badu; SAVEALL; call_ind(c, t_); RETCHK(0x500badu, 0x500ba7u); LOADALL; }
  /* 00500bad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500bae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500baf mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00500bb1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500bb3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500bb4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500bf0(CPU *c) {
  NATIVE_HOOK(0x500bf0u) REGS; LOADALL;
L_00500bf0:;
  /* 00500bf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500bf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500bf3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500bf4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00500bf6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00500bf9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00500bfb mov dword ptr [esi], 0x65005c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x65005cu); }
  /* 00500c01 je 0x500c13 */ if (ZF_) goto L_00500c13;
  /* 00500c03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500c04 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x500c09u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x500c04u); RETCHK(0x500c09u, 0x500c04u); LOADALL;
  /* 00500c09 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500c0c mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_00500c13:;
  /* 00500c13 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500c17 je 0x500c22 */ if (ZF_) goto L_00500c22;
  /* 00500c19 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500c1a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x500c1fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x500c1au); RETCHK(0x500c1fu, 0x500c1au); LOADALL;
  /* 00500c1f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00500c22:;
  /* 00500c22 mov eax, esi */ { eax = (u32)(esi); }
  /* 00500c24 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500c25 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500c26 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500c30(CPU *c) {
  NATIVE_HOOK(0x500c30u) REGS; LOADALL;
L_00500c30:;
  /* 00500c30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500c31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500c33 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500c36 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00500c38 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00500c3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500c3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00500c3d call dword ptr [0x62e070] */ { const u32 m_ = (u32)(0x62e070u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x500c43u; SAVEALL; call_ind(c, t_); RETCHK(0x500c43u, 0x500c3du); LOADALL; }
  /* 00500c43 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 00500c46 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500c48 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500c49 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00500c50(CPU *c) {
  NATIVE_HOOK(0x500c50u) REGS; LOADALL;
L_00500c50:;
  /* 00500c50 mov word ptr [eax], 0x30 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x30u); }
  /* 00500c55 mov edx, dword ptr [0x6501e8] */ { const u32 m_ = (u32)(0x6501e8u); edx = (u32)(M32(m_)); }
  /* 00500c5b lea ecx, [eax + 0x10] */ ecx = (u32)((u32)(eax + 0x10u));
  /* 00500c5e mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00500c60 mov dl, byte ptr [0x6501ec] */ { const u32 m_ = (u32)(0x6501ecu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00500c66 mov byte ptr [ecx + 4], dl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00500c69 mov ecx, 4 */ { ecx = (u32)(0x4u); }
  /* 00500c6e mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 00500c71 mov dword ptr [eax + 0x3c], ecx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 00500c74 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00500c76 mov dword ptr [eax + 0x30], 0x18 */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(0x18u); }
  /* 00500c7d mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
  /* 00500c84 mov dword ptr [eax + 0x40], ecx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(ecx); }
  /* 00500c87 mov dword ptr [eax + 0x44], ecx */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(ecx); }
  /* 00500c8a mov dword ptr [eax + 0x48], 0xffffffff */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(0xffffffffu); }
  /* 00500c91 mov dword ptr [eax + 0x4c], 0xaf000000 */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(0xaf000000u); }
  /* 00500c98 mov dword ptr [eax + 0x50], 0x3f800000 */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(0x3f800000u); }
  /* 00500c9f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00500ca0(CPU *c) {
  NATIVE_HOOK(0x500ca0u) REGS; LOADALL;
L_00500ca0:;
  /* 00500ca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500ca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500ca3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500ca6 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00500ca9 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00500cac fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00500cb2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00500cb4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500cb7 je 0x500cc1 */ if (ZF_) goto L_00500cc1;
  /* 00500cb9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00500cbb fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00500cbe fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00500cc1:;
  /* 00500cc1 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500cc4 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00500cc7 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00500cc9 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00500ccf fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00500cd1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500cd4 je 0x500cdd */ if (ZF_) goto L_00500cdd;
  /* 00500cd6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00500cd8 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00500cda fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00500cdd:;
  /* 00500cdd mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00500ce0 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00500ce3 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00500ce6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500ce7 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00500cea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00500ceb mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00500cee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500cef mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00500cf2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00500cf3 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00500cf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500cf7 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00500cfa mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00500cfc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00500cfd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500cfe mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00500d01 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500d02 call 0x526bd0 */ esp -= 4; M32(esp) = 0x500d07u; SAVEALL; F_00526bd0(c); ABI_CHECK(0x526bd0u, 0x500d02u); RETCHK(0x500d07u, 0x500d02u); LOADALL;
  /* 00500d07 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500d09 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500d0a ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00500d10(CPU *c) {
  NATIVE_HOOK(0x500d10u) REGS; LOADALL;
L_00500d10:;
  /* 00500d10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500d11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500d13 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00500d19 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00500d1b push 0x61c9b2 */ { u32 v_ = 0x61c9b2u; esp -= 4; M32(esp) = v_; }
  /* 00500d20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500d21 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00500d24 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00500d2b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00500d2c mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00500d2f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500d30 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500d31 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500d32 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00500d33 call 0x506b60 */ esp -= 4; M32(esp) = 0x500d38u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x500d33u); RETCHK(0x500d38u, 0x500d33u); LOADALL;
  /* 00500d38 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00500d3a mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00500d3d mov dword ptr [ebx], 0x650060 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x650060u); }
  /* 00500d43 mov dword ptr [ebx + 0x198], 7 */ { const u32 m_ = (u32)(ebx + 0x198u); M32(m_) = (u32)(0x7u); }
  /* 00500d4d mov dword ptr [ebx + 0x194], eax */ { const u32 m_ = (u32)(ebx + 0x194u); M32(m_) = (u32)(eax); }
  /* 00500d53 mov word ptr [ebx + 0x184], ax */ { const u32 m_ = (u32)(ebx + 0x184u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00500d5a mov word ptr [ebx + 0x1b8], 0x30 */ { const u32 m_ = (u32)(ebx + 0x1b8u); M16(m_) = (u16)(0x30u); }
  /* 00500d63 mov edx, dword ptr [0x6501e8] */ { const u32 m_ = (u32)(0x6501e8u); edx = (u32)(M32(m_)); }
  /* 00500d69 lea ecx, [ebx + 0x1c8] */ ecx = (u32)((u32)(ebx + 0x1c8u));
  /* 00500d6f mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00500d71 mov dl, byte ptr [0x6501ec] */ { const u32 m_ = (u32)(0x6501ecu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00500d77 mov byte ptr [ecx + 4], dl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00500d7a mov ecx, 4 */ { ecx = (u32)(0x4u); }
  /* 00500d7f lea esi, [ebx + 0x224] */ esi = (u32)((u32)(ebx + 0x224u));
  /* 00500d85 mov dword ptr [ebx + 0x1e8], 0x18 */ { const u32 m_ = (u32)(ebx + 0x1e8u); M32(m_) = (u32)(0x18u); }
  /* 00500d8f mov dword ptr [ebx + 0x1ec], 1 */ { const u32 m_ = (u32)(ebx + 0x1ecu); M32(m_) = (u32)(0x1u); }
  /* 00500d99 mov dword ptr [ebx + 0x1f0], ecx */ { const u32 m_ = (u32)(ebx + 0x1f0u); M32(m_) = (u32)(ecx); }
  /* 00500d9f mov dword ptr [ebx + 0x1f4], ecx */ { const u32 m_ = (u32)(ebx + 0x1f4u); M32(m_) = (u32)(ecx); }
  /* 00500da5 mov dword ptr [ebx + 0x1f8], eax */ { const u32 m_ = (u32)(ebx + 0x1f8u); M32(m_) = (u32)(eax); }
  /* 00500dab mov dword ptr [ebx + 0x1fc], eax */ { const u32 m_ = (u32)(ebx + 0x1fcu); M32(m_) = (u32)(eax); }
  /* 00500db1 mov dword ptr [ebx + 0x200], 0xffffffff */ { const u32 m_ = (u32)(ebx + 0x200u); M32(m_) = (u32)(0xffffffffu); }
  /* 00500dbb mov dword ptr [ebx + 0x204], 0xaf000000 */ { const u32 m_ = (u32)(ebx + 0x204u); M32(m_) = (u32)(0xaf000000u); }
  /* 00500dc5 mov dword ptr [ebx + 0x208], 0x3f800000 */ { const u32 m_ = (u32)(ebx + 0x208u); M32(m_) = (u32)(0x3f800000u); }
  /* 00500dcf call 0x5267c0 */ esp -= 4; M32(esp) = 0x500dd4u; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x500dcfu); RETCHK(0x500dd4u, 0x500dcfu); LOADALL;
  /* 00500dd4 lea edi, [ebx + 0x2b8] */ edi = (u32)((u32)(ebx + 0x2b8u));
  /* 00500dda call 0x5275b0 */ esp -= 4; M32(esp) = 0x500ddfu; SAVEALL; F_005275b0(c); ABI_CHECK(0x5275b0u, 0x500ddau); RETCHK(0x500ddfu, 0x500ddau); LOADALL;
  /* 00500ddf push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 00500de1 push 0x6501d4 */ { u32 v_ = 0x6501d4u; esp -= 4; M32(esp) = v_; }
  /* 00500de6 lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 00500de9 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00500ded call 0x404420 */ esp -= 4; M32(esp) = 0x500df2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x500dedu); RETCHK(0x500df2u, 0x500dedu); LOADALL;
  /* 00500df2 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00500df4 mov dword ptr [ebx + 0x1b4], esi */ { const u32 m_ = (u32)(ebx + 0x1b4u); M32(m_) = (u32)(esi); }
  /* 00500dfa mov byte ptr [ebx + 0x1a8], 0 */ { const u32 m_ = (u32)(ebx + 0x1a8u); M8(m_) = (u8)(0x0u); }
  /* 00500e01 mov dword ptr [ebx + 0x19c], esi */ { const u32 m_ = (u32)(ebx + 0x19cu); M32(m_) = (u32)(esi); }
  /* 00500e07 mov dword ptr [ebx + 0x1a0], esi */ { const u32 m_ = (u32)(ebx + 0x1a0u); M32(m_) = (u32)(esi); }
  /* 00500e0d mov dword ptr [ebx + 0x1ac], esi */ { const u32 m_ = (u32)(ebx + 0x1acu); M32(m_) = (u32)(esi); }
  /* 00500e13 mov dword ptr [ebx + 0x220], 0xffffffff */ { const u32 m_ = (u32)(ebx + 0x220u); M32(m_) = (u32)(0xffffffffu); }
  /* 00500e1d call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x500e23u; SAVEALL; call_ind(c, t_); RETCHK(0x500e23u, 0x500e1du); LOADALL; }
  /* 00500e23 mov dword ptr [ebx + 0x218], eax */ { const u32 m_ = (u32)(ebx + 0x218u); M32(m_) = (u32)(eax); }
  /* 00500e29 mov dword ptr [ebx + 0x21c], eax */ { const u32 m_ = (u32)(ebx + 0x21cu); M32(m_) = (u32)(eax); }
  /* 00500e2f mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 00500e31 mov byte ptr [ebx + 0x1b3], al */ { const u32 m_ = (u32)(ebx + 0x1b3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00500e37 mov byte ptr [ebx + 0x1b0], al */ { const u32 m_ = (u32)(ebx + 0x1b0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00500e3d mov byte ptr [ebx + 0x1b1], al */ { const u32 m_ = (u32)(ebx + 0x1b1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00500e43 mov byte ptr [ebx + 0x1b2], al */ { const u32 m_ = (u32)(ebx + 0x1b2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00500e49 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00500e4b mov dword ptr [ebx + 0x1a4], esi */ { const u32 m_ = (u32)(ebx + 0x1a4u); M32(m_) = (u32)(esi); }
  /* 00500e51 mov dword ptr [ebx + 0x364], esi */ { const u32 m_ = (u32)(ebx + 0x364u); M32(m_) = (u32)(esi); }
  /* 00500e57 lea ecx, [ebx + 0x20c] */ ecx = (u32)((u32)(ebx + 0x20cu));
  /* 00500e5d mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00500e5f mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00500e62 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00500e65 mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 00500e6a cmp dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00500e6d je 0x500e81 */ if (ZF_) goto L_00500e81;
  /* 00500e6f cmp dword ptr [eax + 0x10], 1 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00500e73 je 0x500e81 */ if (ZF_) goto L_00500e81;
  /* 00500e75 mov dword ptr [ebx + 0x2a8], 2 */ { const u32 m_ = (u32)(ebx + 0x2a8u); M32(m_) = (u32)(0x2u); }
  /* 00500e7f jmp 0x500e8b */ goto L_00500e8b;
L_00500e81:;
  /* 00500e81 mov dword ptr [ebx + 0x2a8], 1 */ { const u32 m_ = (u32)(ebx + 0x2a8u); M32(m_) = (u32)(0x1u); }
L_00500e8b:;
  /* 00500e8b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00500e8e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500e8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500e90 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00500e92 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00500e99 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500e9a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500e9c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500e9d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00500ea0(CPU *c) {
  NATIVE_HOOK(0x500ea0u) REGS; LOADALL;
L_00500ea0:;
  /* 00500ea0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500ea1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500ea3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500ea4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00500ea6 call 0x500ed0 */ esp -= 4; M32(esp) = 0x500eabu; SAVEALL; F_00500ed0(c); ABI_CHECK(0x500ed0u, 0x500ea6u); RETCHK(0x500eabu, 0x500ea6u); LOADALL;
  /* 00500eab test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500eaf je 0x500eba */ if (ZF_) goto L_00500eba;
  /* 00500eb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500eb2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x500eb7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x500eb2u); RETCHK(0x500eb7u, 0x500eb2u); LOADALL;
  /* 00500eb7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00500eba:;
  /* 00500eba mov eax, esi */ { eax = (u32)(esi); }
  /* 00500ebc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500ebd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500ebe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00500ed0(CPU *c) {
  NATIVE_HOOK(0x500ed0u) REGS; LOADALL;
L_00500ed0:;
  /* 00500ed0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500ed1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00500ed3 mov dword ptr [esi], 0x650060 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650060u); }
  /* 00500ed9 call 0x501a80 */ esp -= 4; M32(esp) = 0x500edeu; SAVEALL; F_00501a80(c); ABI_CHECK(0x501a80u, 0x500ed9u); RETCHK(0x500edeu, 0x500ed9u); LOADALL;
  /* 00500ede lea ecx, [esi + 0x2b8] */ ecx = (u32)((u32)(esi + 0x2b8u));
  /* 00500ee4 call 0x527610 */ esp -= 4; M32(esp) = 0x500ee9u; SAVEALL; F_00527610(c); ABI_CHECK(0x527610u, 0x500ee4u); RETCHK(0x500ee9u, 0x500ee4u); LOADALL;
  /* 00500ee9 lea ecx, [esi + 0x224] */ ecx = (u32)((u32)(esi + 0x224u));
  /* 00500eef call 0x5267e0 */ esp -= 4; M32(esp) = 0x500ef4u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x500eefu); RETCHK(0x500ef4u, 0x500eefu); LOADALL;
  /* 00500ef4 cmp dword ptr [esi + 0x198], 8 */ { const u32 m_ = (u32)(esi + 0x198u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00500efb jb 0x500f0c */ if (CF_) goto L_00500f0c;
  /* 00500efd mov eax, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); eax = (u32)(M32(m_)); }
  /* 00500f03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500f04 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x500f09u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x500f04u); RETCHK(0x500f09u, 0x500f04u); LOADALL;
  /* 00500f09 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00500f0c:;
  /* 00500f0c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00500f0e mov dword ptr [esi + 0x198], 7 */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(0x7u); }
  /* 00500f18 mov dword ptr [esi + 0x194], eax */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(eax); }
  /* 00500f1e mov word ptr [esi + 0x184], ax */ { const u32 m_ = (u32)(esi + 0x184u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00500f25 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00500f27 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500f28 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_00500f30(CPU *c) {
  NATIVE_HOOK(0x500f30u) REGS; LOADALL;
L_00500f30:;
  /* 00500f30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00500f31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00500f33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00500f35 push 0x621343 */ { u32 v_ = 0x621343u; esp -= 4; M32(esp) = v_; }
  /* 00500f3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00500f40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500f41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00500f48 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00500f4b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00500f4c mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00500f4f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00500f50 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00500f51 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00500f53 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00500f56 lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 00500f59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500f5a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00500f5b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00500f5d mov edi, edx */ { edi = (u32)(edx); }
  /* 00500f5f call 0x507260 */ esp -= 4; M32(esp) = 0x500f64u; SAVEALL; F_00507260(c); ABI_CHECK(0x507260u, 0x500f5fu); RETCHK(0x500f64u, 0x500f5fu); LOADALL;
  /* 00500f64 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00500f66 jne 0x500f7b */ if (!ZF_) goto L_00500f7b;
  /* 00500f68 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00500f6b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00500f72 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00500f73 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00500f74 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00500f75 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00500f77 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00500f78 ret 0x24 */ c->popped = M32(esp); esp += 40u; SAVEALL; return;
L_00500f7b:;
  /* 00500f7b mov dword ptr [ebx + 0x1b4], esi */ { const u32 m_ = (u32)(ebx + 0x1b4u); M32(m_) = (u32)(esi); }
  /* 00500f81 call 0x527d20 */ esp -= 4; M32(esp) = 0x500f86u; SAVEALL; F_00527d20(c); ABI_CHECK(0x527d20u, 0x500f81u); RETCHK(0x500f86u, 0x500f81u); LOADALL;
  /* 00500f86 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00500f88 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00500f8b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00500f8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00500f8d call dword ptr [0x62e070] */ { const u32 m_ = (u32)(0x62e070u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x500f93u; SAVEALL; call_ind(c, t_); RETCHK(0x500f93u, 0x500f8du); LOADALL; }
  /* 00500f93 fild dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)(s32)M32(m_)); }
  /* 00500f96 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00500f9c call 0x61b154 */ esp -= 4; M32(esp) = 0x500fa1u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x500f9cu); RETCHK(0x500fa1u, 0x500f9cu); LOADALL;
  /* 00500fa1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00500fa3 mov ecx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00500fa6 mov dword ptr [ebx + 0x1a0], eax */ { const u32 m_ = (u32)(ebx + 0x1a0u); M32(m_) = (u32)(eax); }
  /* 00500fac mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00500fae mov eax, dword ptr [ebp + 0x28] */ { const u32 m_ = (u32)(ebp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00500fb1 mov dword ptr [ebx + 0x1b0], edx */ { const u32 m_ = (u32)(ebx + 0x1b0u); M32(m_) = (u32)(edx); }
  /* 00500fb7 mov dword ptr [ebx + 0x220], eax */ { const u32 m_ = (u32)(ebx + 0x220u); M32(m_) = (u32)(eax); }
  /* 00500fbd je 0x500fd7 */ if (ZF_) goto L_00500fd7;
  /* 00500fbf cmp byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00500fc2 je 0x500fd7 */ if (ZF_) goto L_00500fd7;
  /* 00500fc4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00500fc5 lea edx, [ebx + 0x2b8] */ edx = (u32)((u32)(ebx + 0x2b8u));
  /* 00500fcb mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 00500fd0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00500fd2 call 0x527630 */ esp -= 4; M32(esp) = 0x500fd7u; SAVEALL; F_00527630(c); ABI_CHECK(0x527630u, 0x500fd2u); RETCHK(0x500fd7u, 0x500fd2u); LOADALL;
L_00500fd7:;
  /* 00500fd7 call 0x52a850 */ esp -= 4; M32(esp) = 0x500fdcu; SAVEALL; F_0052a850(c); ABI_CHECK(0x52a850u, 0x500fd7u); RETCHK(0x500fdcu, 0x500fd7u); LOADALL;
  /* 00500fdc mov ecx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00500fdf mov edx, eax */ { edx = (u32)(eax); }
  /* 00500fe1 call 0x52a8b0 */ esp -= 4; M32(esp) = 0x500fe6u; SAVEALL; F_0052a8b0(c); ABI_CHECK(0x52a8b0u, 0x500fe1u); RETCHK(0x500fe6u, 0x500fe1u); LOADALL;
  /* 00500fe6 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 00500fe9 fsub dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00500fec mov esi, eax */ { esi = (u32)(eax); }
  /* 00500fee lea edi, [ebx + 0x1b8] */ edi = (u32)((u32)(ebx + 0x1b8u));
  /* 00500ff4 mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 00500ff9 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00500fff rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00501001 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00501003 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501006 je 0x501010 */ if (ZF_) goto L_00501010;
  /* 00501008 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050100a fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0050100d fsub dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00501010:;
  /* 00501010 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00501016 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0050101b mov dword ptr [ebp + 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 00501022 mov dword ptr [ebp + 0x18], 0x43250000 */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(0x43250000u); }
  /* 00501029 fsub dword ptr [0x6570d4] */ { const u32 m_ = (u32)(0x6570d4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050102f fst dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); }
  /* 00501032 fadd dword ptr [0x6570d0] */ { const u32 m_ = (u32)(0x6570d0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00501038 fstp dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050103b call 0x5fe934 */ esp -= 4; M32(esp) = 0x501040u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50103bu); RETCHK(0x501040u, 0x50103bu); LOADALL;
  /* 00501040 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501043 mov dword ptr [ebp + 0x24], eax */ { const u32 m_ = (u32)(ebp + 0x24u); M32(m_) = (u32)(eax); }
  /* 00501046 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501048 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050104f je 0x50105a */ if (ZF_) goto L_0050105a;
  /* 00501051 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501052 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501053 call 0x50d810 */ esp -= 4; M32(esp) = 0x501058u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x501053u); RETCHK(0x501058u, 0x501053u); LOADALL;
  /* 00501058 jmp 0x50105c */ goto L_0050105c;
L_0050105a:;
  /* 0050105a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050105c:;
  /* 0050105c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050105f mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00501066 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00501067 mov edi, 0x6501c4 */ { edi = (u32)(0x6501c4u); }
  /* 0050106c lea esi, [ebp - 0x28] */ esi = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050106f mov dword ptr [ebx + 0x364], eax */ { const u32 m_ = (u32)(ebx + 0x364u); M32(m_) = (u32)(eax); }
  /* 00501075 call 0x4646d0 */ esp -= 4; M32(esp) = 0x50107au; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x501075u); RETCHK(0x50107au, 0x501075u); LOADALL;
  /* 0050107a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050107d mov esi, eax */ { esi = (u32)(eax); }
  /* 0050107f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00501081 push 0x6501c8 */ { u32 v_ = 0x6501c8u; esp -= 4; M32(esp) = v_; }
  /* 00501086 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501089 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 0050108c mov eax, esp */ { eax = (u32)(esp); }
  /* 0050108e mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00501095 mov dword ptr [ebp + 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esp); }
  /* 00501098 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50109du; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x501098u); RETCHK(0x50109du, 0x501098u); LOADALL;
  /* 0050109d mov ebx, dword ptr [ebx + 0x364] */ { const u32 m_ = (u32)(ebx + 0x364u); ebx = (u32)(M32(m_)); }
  /* 005010a3 mov eax, esi */ { eax = (u32)(esi); }
  /* 005010a5 call 0x50da30 */ esp -= 4; M32(esp) = 0x5010aau; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x5010a5u); RETCHK(0x5010aau, 0x5010a5u); LOADALL;
  /* 005010aa mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005010b1 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005010b5 jb 0x5010c3 */ if (CF_) goto L_005010c3;
  /* 005010b7 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 005010ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005010bb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5010c0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5010bbu); RETCHK(0x5010c0u, 0x5010bbu); LOADALL;
  /* 005010c0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005010c3:;
  /* 005010c3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005010c6 mov ecx, dword ptr [ecx + 0x364] */ { const u32 m_ = (u32)(ecx + 0x364u); ecx = (u32)(M32(m_)); }
  /* 005010cc mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005010ce xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005010d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005010d1 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 005010d8 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 005010db mov byte ptr [ebp - 0x24], al */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005010de call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5010e1u; SAVEALL; call_ind(c, t_); RETCHK(0x5010e1u, 0x5010deu); LOADALL; }
  /* 005010e1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005010e4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005010e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005010e6 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005010e8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005010ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005010f0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005010f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005010f3 ret 0x24 */ c->popped = M32(esp); esp += 40u; SAVEALL; return;
}

void F_00501100(CPU *c) {
  NATIVE_HOOK(0x501100u) REGS; LOADALL;
L_00501100:;
  /* 00501100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00501101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00501103 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501104 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501105 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501106 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00501108 mov ebx, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); ebx = (u32)(M32(m_)); }
  /* 0050110e lea ebx, [ebx + ebx + 2] */ ebx = (u32)((u32)(ebx + ebx + 0x2u));
  /* 00501112 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501113 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x501118u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x501113u); RETCHK(0x501118u, 0x501113u); LOADALL;
  /* 00501118 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050111a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050111d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050111f je 0x501172 */ if (ZF_) goto L_00501172;
  /* 00501121 cmp dword ptr [edi + 0x198], 8 */ { const u32 m_ = (u32)(edi + 0x198u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501128 mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0050112e jb 0x501138 */ if (CF_) goto L_00501138;
  /* 00501130 mov edi, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); edi = (u32)(M32(m_)); }
  /* 00501136 jmp 0x50113e */ goto L_0050113e;
L_00501138:;
  /* 00501138 add edi, 0x184 */ { u32 a_ = edi, b_ = 0x184u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_0050113e:;
  /* 0050113e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00501140 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00501142 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501143 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501144 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00501145 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501146 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501147 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00501149 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050114b call dword ptr [0x62e170] */ { const u32 m_ = (u32)(0x62e170u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501151u; SAVEALL; call_ind(c, t_); RETCHK(0x501151u, 0x50114bu); LOADALL; }
  /* 00501151 mov eax, esi */ { eax = (u32)(esi); }
  /* 00501153 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00501156:;
  /* 00501156 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00501158 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00501159 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050115b jne 0x501156 */ if (!ZF_) goto L_00501156;
  /* 0050115d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00501160 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00501162 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501163 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501164 call 0x404420 */ esp -= 4; M32(esp) = 0x501169u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x501164u); RETCHK(0x501169u, 0x501164u); LOADALL;
  /* 00501169 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050116a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x50116fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x50116au); RETCHK(0x50116fu, 0x50116au); LOADALL;
  /* 0050116f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00501172:;
  /* 00501172 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501173 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501174 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00501175 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501176 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00501180(CPU *c) {
  NATIVE_HOOK(0x501180u) REGS; LOADALL;
L_00501180:;
  /* 00501180 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00501181 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00501183 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00501186 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501187 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501188 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501189 mov edi, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edi = (u32)(M32(m_)); }
  /* 0050118c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050118e mov eax, dword ptr [esi + 0x220] */ { const u32 m_ = (u32)(esi + 0x220u); eax = (u32)(M32(m_)); }
  /* 00501194 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501196 jbe 0x50119a */ if ((CF_|ZF_)) goto L_0050119a;
  /* 00501198 mov edi, eax */ { edi = (u32)(eax); }
L_0050119a:;
  /* 0050119a lea ecx, [edi + edi + 2] */ ecx = (u32)((u32)(edi + edi + 0x2u));
  /* 0050119e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050119f call 0x5fe9ce */ esp -= 4; M32(esp) = 0x5011a4u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x50119fu); RETCHK(0x5011a4u, 0x50119fu); LOADALL;
  /* 005011a4 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005011a6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005011a9 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005011ac add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005011af cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005011b2 jb 0x5011b9 */ if (CF_) goto L_005011b9;
  /* 005011b4 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005011b7 jmp 0x5011bc */ goto L_005011bc;
L_005011b9:;
  /* 005011b9 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_005011bc:;
  /* 005011bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005011bd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005011be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005011bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005011c0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005011c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005011c4 call dword ptr [0x62e174] */ { const u32 m_ = (u32)(0x62e174u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5011cau; SAVEALL; call_ind(c, t_); RETCHK(0x5011cau, 0x5011c4u); LOADALL; }
  /* 005011ca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005011cb mov word ptr [ebx + eax*2], 0 */ { const u32 m_ = (u32)(ebx + eax * 2u); M16(m_) = (u16)(0x0u); }
  /* 005011d1 call 0x5feb00 */ esp -= 4; M32(esp) = 0x5011d6u; SAVEALL; F_005feb00(c); ABI_CHECK(0x5feb00u, 0x5011d1u); RETCHK(0x5011d6u, 0x5011d1u); LOADALL;
  /* 005011d6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005011d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005011da mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 005011e0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005011e1 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005011e3 lea ecx, [esi + 0x180] */ ecx = (u32)((u32)(esi + 0x180u));
  /* 005011e9 call 0x502940 */ esp -= 4; M32(esp) = 0x5011eeu; SAVEALL; F_00502940(c); ABI_CHECK(0x502940u, 0x5011e9u); RETCHK(0x5011eeu, 0x5011e9u); LOADALL;
  /* 005011ee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005011f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005011f1 jne 0x501202 */ if (!ZF_) goto L_00501202;
  /* 005011f3 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5011f8u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5011f3u); RETCHK(0x5011f8u, 0x5011f3u); LOADALL;
  /* 005011f8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005011fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005011fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005011fd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005011fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005011ff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00501202:;
  /* 00501202 movzx eax, byte ptr [esi + 0x1b1] */ { const u32 m_ = (u32)(esi + 0x1b1u); eax = (u32)(M8(m_)); }
  /* 00501209 movzx ecx, byte ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M8(m_)); }
  /* 00501210 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00501212 mov dh, byte ptr [esi + 0x1b3] */ { const u32 m_ = (u32)(esi + 0x1b3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00501218 mov dl, byte ptr [esi + 0x1b2] */ { const u32 m_ = (u32)(esi + 0x1b2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050121e shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00501221 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00501223 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00501226 or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00501228 mov dword ptr [esi + 0x200], edx */ { const u32 m_ = (u32)(esi + 0x200u); M32(m_) = (u32)(edx); }
  /* 0050122e call 0x5feb00 */ esp -= 4; M32(esp) = 0x501233u; SAVEALL; F_005feb00(c); ABI_CHECK(0x5feb00u, 0x50122eu); RETCHK(0x501233u, 0x50122eu); LOADALL;
  /* 00501233 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501236 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501237 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00501239 lea ecx, [esi + 0x180] */ ecx = (u32)((u32)(esi + 0x180u));
  /* 0050123f call 0x5025e0 */ esp -= 4; M32(esp) = 0x501244u; SAVEALL; F_005025e0(c); ABI_CHECK(0x5025e0u, 0x50123fu); RETCHK(0x501244u, 0x50123fu); LOADALL;
  /* 00501244 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00501246 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501247 mov dword ptr [esi + 0x19c], eax */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(eax); }
  /* 0050124d mov dword ptr [esi + 0x1a0], eax */ { const u32 m_ = (u32)(esi + 0x1a0u); M32(m_) = (u32)(eax); }
  /* 00501253 call 0x5feb00 */ esp -= 4; M32(esp) = 0x501258u; SAVEALL; F_005feb00(c); ABI_CHECK(0x5feb00u, 0x501253u); RETCHK(0x501258u, 0x501253u); LOADALL;
  /* 00501258 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501259 mov dword ptr [esi + 0x1ac], eax */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(eax); }
  /* 0050125f call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x501264u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x50125fu); RETCHK(0x501264u, 0x50125fu); LOADALL;
  /* 00501264 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00501266 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501269 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050126b call dword ptr [edx + 0x104] */ { const u32 m_ = (u32)(edx + 0x104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501271u; SAVEALL; call_ind(c, t_); RETCHK(0x501271u, 0x50126bu); LOADALL; }
  /* 00501271 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00501273 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00501275 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50127bu; SAVEALL; call_ind(c, t_); RETCHK(0x50127bu, 0x501275u); LOADALL; }
  /* 0050127b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050127d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050127f call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501285u; SAVEALL; call_ind(c, t_); RETCHK(0x501285u, 0x50127fu); LOADALL; }
  /* 00501285 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501286 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501287 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00501288 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501289 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00501290(CPU *c) {
  NATIVE_HOOK(0x501290u) REGS; LOADALL;
L_00501290:;
  /* 00501290 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00501291 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00501293 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501296 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501297 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501298 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501299 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0050129b mov edi, eax */ { edi = (u32)(eax); }
  /* 0050129d mov eax, dword ptr [ebx + 0x1a4] */ { const u32 m_ = (u32)(ebx + 0x1a4u); eax = (u32)(M32(m_)); }
  /* 005012a3 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005012a5 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005012a7 jl 0x5014aa */ if (LT_) goto L_005014aa;
  /* 005012ad fld dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005012b0 fsub dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005012b3 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005012b9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005012bb test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005012be je 0x5012c8 */ if (ZF_) goto L_005012c8;
  /* 005012c0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005012c2 fld dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005012c5 fsub dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005012c8:;
  /* 005012c8 call 0x61b154 */ esp -= 4; M32(esp) = 0x5012cdu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5012c8u); RETCHK(0x5012cdu, 0x5012c8u); LOADALL;
  /* 005012cd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005012cf mov eax, dword ptr [ebx + 0x1a4] */ { const u32 m_ = (u32)(ebx + 0x1a4u); eax = (u32)(M32(m_)); }
  /* 005012d5 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005012d7 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005012d9 jg 0x5014aa */ if (!(ZF_|LT_)) goto L_005014aa;
  /* 005012df cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005012e1 jl 0x5014aa */ if (LT_) goto L_005014aa;
  /* 005012e7 fld dword ptr [ebx + 0x50] */ { const u32 m_ = (u32)(ebx + 0x50u); FPUSH((double)MF32(m_)); }
  /* 005012ea fsub dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005012ed fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005012f3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005012f5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005012f8 je 0x501302 */ if (ZF_) goto L_00501302;
  /* 005012fa fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005012fc fld dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); FPUSH((double)MF32(m_)); }
  /* 005012ff fsub dword ptr [ebx + 0x50] */ { const u32 m_ = (u32)(ebx + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00501302:;
  /* 00501302 call 0x61b154 */ esp -= 4; M32(esp) = 0x501307u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x501302u); RETCHK(0x501307u, 0x501302u); LOADALL;
  /* 00501307 mov edx, dword ptr [ebx + 0x1a4] */ { const u32 m_ = (u32)(ebx + 0x1a4u); edx = (u32)(M32(m_)); }
  /* 0050130d sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050130f cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501311 jg 0x5014aa */ if (!(ZF_|LT_)) goto L_005014aa;
  /* 00501317 mov eax, edx */ { eax = (u32)(edx); }
  /* 00501319 sub esi, dword ptr [ebx + 0x19c] */ { const u32 m_ = (u32)(ebx + 0x19cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050131f sub edi, dword ptr [ebx + 0x1a0] */ { const u32 m_ = (u32)(ebx + 0x1a0u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00501325 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00501327 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00501329 mov eax, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); eax = (u32)(M32(m_)); }
  /* 0050132f lea edx, [eax*4] */ edx = (u32)((u32)(eax * 4u));
  /* 00501336 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00501337 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 0050133a mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 0050133d mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 00501344 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x501349u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x501344u); RETCHK(0x501349u, 0x501344u); LOADALL;
  /* 00501349 mov ecx, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0050134f shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00501352 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00501354 mov edi, eax */ { edi = (u32)(eax); }
  /* 00501356 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00501359 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050135b mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0050135e rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00501360 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00501362 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00501365 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 00501367 mov esi, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); esi = (u32)(M32(m_)); }
  /* 0050136d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501370 call 0x527d20 */ esp -= 4; M32(esp) = 0x501375u; SAVEALL; F_00527d20(c); ABI_CHECK(0x527d20u, 0x501370u); RETCHK(0x501375u, 0x501370u); LOADALL;
  /* 00501375 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00501377 call 0x500c30 */ esp -= 4; M32(esp) = 0x50137cu; SAVEALL; F_00500c30(c); ABI_CHECK(0x500c30u, 0x501377u); RETCHK(0x50137cu, 0x501377u); LOADALL;
  /* 0050137c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050137e mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00501381 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00501384 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00501385 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x501385u); eax = q_; edx = r_; }
  /* 00501387 lea esi, [ebx + 0x44] */ esi = (u32)((u32)(ebx + 0x44u));
  /* 0050138a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050138c mov edi, eax */ { edi = (u32)(eax); }
  /* 0050138e call 0x40d9d0 */ esp -= 4; M32(esp) = 0x501393u; SAVEALL; F_0040d9d0(c); ABI_CHECK(0x40d9d0u, 0x50138eu); RETCHK(0x501393u, 0x50138eu); LOADALL;
  /* 00501393 call 0x61b154 */ esp -= 4; M32(esp) = 0x501398u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x501393u); RETCHK(0x501398u, 0x501393u); LOADALL;
  /* 00501398 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0050139b sub eax, 0xa */ { u32 a_ = eax, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050139e imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005013a1 mov edi, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); edi = (u32)(M32(m_)); }
  /* 005013a7 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005013a9 cmp dword ptr [ebx + 0x198], 8 */ { const u32 m_ = (u32)(ebx + 0x198u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005013b0 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 005013b3 jb 0x5013c0 */ if (CF_) goto L_005013c0;
  /* 005013b5 mov edx, dword ptr [ebx + 0x184] */ { const u32 m_ = (u32)(ebx + 0x184u); edx = (u32)(M32(m_)); }
  /* 005013bb mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 005013be jmp 0x5013c9 */ goto L_005013c9;
L_005013c0:;
  /* 005013c0 lea eax, [ebx + 0x184] */ eax = (u32)((u32)(ebx + 0x184u));
  /* 005013c6 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_005013c9:;
  /* 005013c9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005013cb call 0x40d9d0 */ esp -= 4; M32(esp) = 0x5013d0u; SAVEALL; F_0040d9d0(c); ABI_CHECK(0x40d9d0u, 0x5013cbu); RETCHK(0x5013d0u, 0x5013cbu); LOADALL;
  /* 005013d0 call 0x61b154 */ esp -= 4; M32(esp) = 0x5013d5u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5013d0u); RETCHK(0x5013d5u, 0x5013d0u); LOADALL;
  /* 005013d5 mov esi, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); esi = (u32)(M32(m_)); }
  /* 005013db mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005013de call 0x527d20 */ esp -= 4; M32(esp) = 0x5013e3u; SAVEALL; F_00527d20(c); ABI_CHECK(0x527d20u, 0x5013deu); RETCHK(0x5013e3u, 0x5013deu); LOADALL;
  /* 005013e3 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 005013e6 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 005013e9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005013eb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005013ec lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 005013ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005013f0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005013f3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005013f4 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005013f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005013f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005013f8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005013f9 call dword ptr [0x62e084] */ { const u32 m_ = (u32)(0x62e084u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5013ffu; SAVEALL; call_ind(c, t_); RETCHK(0x5013ffu, 0x5013f9u); LOADALL; }
  /* 005013ff test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501401 jne 0x50146e */ if (!ZF_) goto L_0050146e;
  /* 00501403 mov eax, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); eax = (u32)(M32(m_)); }
  /* 00501409 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0050140b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050140d mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00501410 jle 0x50146e */ if ((ZF_|LT_)) goto L_0050146e;
L_00501412:;
  /* 00501412 cmp dword ptr [ebx + 0x198], 8 */ { const u32 m_ = (u32)(ebx + 0x198u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501419 jb 0x501426 */ if (CF_) goto L_00501426;
  /* 0050141b mov eax, dword ptr [ebx + 0x184] */ { const u32 m_ = (u32)(ebx + 0x184u); eax = (u32)(M32(m_)); }
  /* 00501421 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00501424 jmp 0x50142f */ goto L_0050142f;
L_00501426:;
  /* 00501426 lea ecx, [ebx + 0x184] */ ecx = (u32)((u32)(ebx + 0x184u));
  /* 0050142c mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
L_0050142f:;
  /* 0050142f mov esi, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); esi = (u32)(M32(m_)); }
  /* 00501435 call 0x527d20 */ esp -= 4; M32(esp) = 0x50143au; SAVEALL; F_00527d20(c); ABI_CHECK(0x527d20u, 0x501435u); RETCHK(0x50143au, 0x501435u); LOADALL;
  /* 0050143a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050143d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0050143f lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00501442 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00501443 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00501445 lea edx, [ecx + edi*2] */ edx = (u32)((u32)(ecx + edi * 2u));
  /* 00501448 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00501449 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050144a call dword ptr [0x62e088] */ { const u32 m_ = (u32)(0x62e088u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501450u; SAVEALL; call_ind(c, t_); RETCHK(0x501450u, 0x50144au); LOADALL; }
  /* 00501450 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00501453 mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 00501456 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00501459 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050145b mov dword ptr [ecx + edi*4], eax */ { const u32 m_ = (u32)(ecx + edi * 4u); M32(m_) = (u32)(eax); }
  /* 0050145e mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00501461 mov eax, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); eax = (u32)(M32(m_)); }
  /* 00501467 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00501468 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050146a jl 0x501412 */ if (LT_) goto L_00501412;
  /* 0050146c mov esi, ecx */ { esi = (u32)(ecx); }
L_0050146e:;
  /* 0050146e mov ebx, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); ebx = (u32)(M32(m_)); }
  /* 00501474 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00501476 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501478 jle 0x50148d */ if ((ZF_|LT_)) goto L_0050148d;
  /* 0050147a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00501480:;
  /* 00501480 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00501483 cmp dword ptr [esi + edi*4], edx */ { const u32 m_ = (u32)(esi + edi * 4u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501486 jg 0x50148d */ if (!(ZF_|LT_)) goto L_0050148d;
  /* 00501488 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00501489 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050148b jl 0x501480 */ if (LT_) goto L_00501480;
L_0050148d:;
  /* 0050148d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050148f je 0x50149a */ if (ZF_) goto L_0050149a;
  /* 00501491 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501492 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x501497u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x501492u); RETCHK(0x501497u, 0x501492u); LOADALL;
  /* 00501497 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050149a:;
  /* 0050149a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050149d mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 0050149f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005014a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005014a1 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005014a3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005014a4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005014a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005014a7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005014aa:;
  /* 005014aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005014ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005014ac xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005014ae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005014af mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005014b1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005014b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005014c0(CPU *c) {
  NATIVE_HOOK(0x5014c0u) REGS; LOADALL;
L_005014c0:;
  /* 005014c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005014c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005014c3 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005014c6 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005014c9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005014cb cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005014cd jl 0x5015dc */ if (LT_) goto L_005015dc;
  /* 005014d3 cmp eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005014d9 jg 0x5015dc */ if (!(ZF_|LT_)) goto L_005015dc;
  /* 005014df cmp dword ptr [edi + 0x198], 8 */ { const u32 m_ = (u32)(edi + 0x198u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005014e6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005014e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005014e8 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 005014eb mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005014ee jb 0x5014f8 */ if (CF_) goto L_005014f8;
  /* 005014f0 mov ebx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ebx = (u32)(M32(m_)); }
  /* 005014f6 jmp 0x5014fe */ goto L_005014fe;
L_005014f8:;
  /* 005014f8 lea ebx, [edi + 0x184] */ ebx = (u32)((u32)(edi + 0x184u));
L_005014fe:;
  /* 005014fe mov esi, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); esi = (u32)(M32(m_)); }
  /* 00501504 call 0x527d20 */ esp -= 4; M32(esp) = 0x501509u; SAVEALL; F_00527d20(c); ABI_CHECK(0x527d20u, 0x501504u); RETCHK(0x501509u, 0x501504u); LOADALL;
  /* 00501509 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0050150c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0050150e lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00501511 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00501512 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00501513 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501514 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501515 call dword ptr [0x62e088] */ { const u32 m_ = (u32)(0x62e088u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50151bu; SAVEALL; call_ind(c, t_); RETCHK(0x50151bu, 0x501515u); LOADALL; }
  /* 0050151b fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0050151e fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00501521 mov esi, dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); esi = (u32)(M32(m_)); }
  /* 00501527 mov ecx, dword ptr [edi + 0x19c] */ { const u32 m_ = (u32)(edi + 0x19cu); ecx = (u32)(M32(m_)); }
  /* 0050152d mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00501530 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00501536 add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00501538 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050153a mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 0050153d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050153f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501542 je 0x50154c */ if (ZF_) goto L_0050154c;
  /* 00501544 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00501546 fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00501549 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050154c:;
  /* 0050154c fild dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0050154f fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00501551 fsub dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00501557 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 00501559 call 0x61b154 */ esp -= 4; M32(esp) = 0x50155eu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x501559u); RETCHK(0x50155eu, 0x501559u); LOADALL;
  /* 0050155e fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00501561 fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00501564 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00501566 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050156c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050156e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501571 je 0x50157b */ if (ZF_) goto L_0050157b;
  /* 00501573 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00501575 fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00501578 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050157b:;
  /* 0050157b fsub dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00501581 call 0x61b154 */ esp -= 4; M32(esp) = 0x501586u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x501581u); RETCHK(0x501586u, 0x501581u); LOADALL;
  /* 00501586 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00501588 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050158a cdq */ edx = (u32)((s32)eax >> 31);
  /* 0050158b idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x50158bu); eax = q_; edx = r_; }
  /* 0050158d mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 00501590 fild dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 00501593 fmul qword ptr [0x656f78] */ { const u32 m_ = (u32)(0x656f78u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00501599 fadd qword ptr [0x656f70] */ { const u32 m_ = (u32)(0x656f70u); ST(0) = FR(ST(0) + MF64(m_)); }
  /* 0050159f call 0x61b154 */ esp -= 4; M32(esp) = 0x5015a4u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50159fu); RETCHK(0x5015a4u, 0x50159fu); LOADALL;
  /* 005015a4 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005015a7 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 005015a9 mov esi, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); esi = (u32)(M32(m_)); }
  /* 005015af call 0x527d20 */ esp -= 4; M32(esp) = 0x5015b4u; SAVEALL; F_00527d20(c); ABI_CHECK(0x527d20u, 0x5015afu); RETCHK(0x5015b4u, 0x5015afu); LOADALL;
  /* 005015b4 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005015b6 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 005015b9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005015ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005015bb call dword ptr [0x62e070] */ { const u32 m_ = (u32)(0x62e070u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5015c1u; SAVEALL; call_ind(c, t_); RETCHK(0x5015c1u, 0x5015bbu); LOADALL; }
  /* 005015c1 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 005015c4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005015c7 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005015ca imul eax, ebx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005015cd add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005015d0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005015d1 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005015d3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005015d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005015d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005015d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005015d9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005015dc:;
  /* 005015dc xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005015de mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005015e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005015e1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005015f0(CPU *c) {
  NATIVE_HOOK(0x5015f0u) REGS; LOADALL;
L_005015f0:;
  /* 005015f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005015f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005015f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005015f5 push 0x624388 */ { u32 v_ = 0x624388u; esp -= 4; M32(esp) = v_; }
  /* 005015fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00501600 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501601 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00501608 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050160b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050160c mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0050160f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00501612 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501614 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501615 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501616 jne 0x50162d */ if (!ZF_) goto L_0050162d;
  /* 00501618 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050161a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050161d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00501624 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501625 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501626 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00501627 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501629 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050162a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050162d:;
  /* 0050162d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050162f call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501632u; SAVEALL; call_ind(c, t_); RETCHK(0x501632u, 0x50162fu); LOADALL; }
  /* 00501632 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00501637 mov esi, eax */ { esi = (u32)(eax); }
  /* 00501639 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50163eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x501639u); RETCHK(0x50163eu, 0x501639u); LOADALL;
  /* 0050163e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00501641 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00501644 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00501649 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050164b fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050164e call 0x560fd0 */ esp -= 4; M32(esp) = 0x501653u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50164eu); RETCHK(0x501653u, 0x50164eu); LOADALL;
  /* 00501653 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00501656 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00501659 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0050165e mov eax, esi */ { eax = (u32)(esi); }
  /* 00501660 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501663 call 0x560fd0 */ esp -= 4; M32(esp) = 0x501668u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x501663u); RETCHK(0x501668u, 0x501663u); LOADALL;
  /* 00501668 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050166b fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050166e push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00501673 mov eax, esi */ { eax = (u32)(esi); }
  /* 00501675 fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00501678 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050167b call 0x560fd0 */ esp -= 4; M32(esp) = 0x501680u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50167bu); RETCHK(0x501680u, 0x50167bu); LOADALL;
  /* 00501680 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00501683 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00501686 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501687 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050168c fadd dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050168f fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501692 call 0x560ed0 */ esp -= 4; M32(esp) = 0x501697u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x501692u); RETCHK(0x501697u, 0x501692u); LOADALL;
  /* 00501697 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00501699 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050169a mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 0050169f call 0x560ed0 */ esp -= 4; M32(esp) = 0x5016a4u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50169fu); RETCHK(0x5016a4u, 0x50169fu); LOADALL;
  /* 005016a4 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 005016a7 push 0x650194 */ { u32 v_ = 0x650194u; esp -= 4; M32(esp) = v_; }
  /* 005016ac mov eax, esi */ { eax = (u32)(esi); }
  /* 005016ae call 0x560fd0 */ esp -= 4; M32(esp) = 0x5016b3u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5016aeu); RETCHK(0x5016b3u, 0x5016aeu); LOADALL;
  /* 005016b3 mov edi, eax */ { edi = (u32)(eax); }
  /* 005016b5 call 0x52a540 */ esp -= 4; M32(esp) = 0x5016bau; SAVEALL; F_0052a540(c); ABI_CHECK(0x52a540u, 0x5016b5u); RETCHK(0x5016bau, 0x5016b5u); LOADALL;
  /* 005016ba mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005016bc mov eax, edi */ { eax = (u32)(edi); }
  /* 005016be call 0x52a5a0 */ esp -= 4; M32(esp) = 0x5016c3u; SAVEALL; F_0052a5a0(c); ABI_CHECK(0x52a5a0u, 0x5016beu); RETCHK(0x5016c3u, 0x5016beu); LOADALL;
  /* 005016c3 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 005016c6 push 0x650190 */ { u32 v_ = 0x650190u; esp -= 4; M32(esp) = v_; }
  /* 005016cb mov eax, esi */ { eax = (u32)(esi); }
  /* 005016cd call 0x560fd0 */ esp -= 4; M32(esp) = 0x5016d2u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5016cdu); RETCHK(0x5016d2u, 0x5016cdu); LOADALL;
  /* 005016d2 mov byte ptr [ebp - 0x10], al */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005016d5 push 0x650188 */ { u32 v_ = 0x650188u; esp -= 4; M32(esp) = v_; }
  /* 005016da mov eax, esi */ { eax = (u32)(esi); }
  /* 005016dc call 0x560fd0 */ esp -= 4; M32(esp) = 0x5016e1u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5016dcu); RETCHK(0x5016e1u, 0x5016dcu); LOADALL;
  /* 005016e1 mov byte ptr [ebp - 0xf], al */ { const u32 m_ = (u32)(ebp + 0xfffffff1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005016e4 push 0x650180 */ { u32 v_ = 0x650180u; esp -= 4; M32(esp) = v_; }
  /* 005016e9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005016eb call 0x560fd0 */ esp -= 4; M32(esp) = 0x5016f0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5016ebu); RETCHK(0x5016f0u, 0x5016ebu); LOADALL;
  /* 005016f0 mov byte ptr [ebp - 0xe], al */ { const u32 m_ = (u32)(ebp + 0xfffffff2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005016f3 push 0x650178 */ { u32 v_ = 0x650178u; esp -= 4; M32(esp) = v_; }
  /* 005016f8 mov eax, esi */ { eax = (u32)(esi); }
  /* 005016fa call 0x560fd0 */ esp -= 4; M32(esp) = 0x5016ffu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5016fau); RETCHK(0x5016ffu, 0x5016fau); LOADALL;
  /* 005016ff mov byte ptr [ebp - 0xd], al */ { const u32 m_ = (u32)(ebp + 0xfffffff3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00501702 push 0x650170 */ { u32 v_ = 0x650170u; esp -= 4; M32(esp) = v_; }
  /* 00501707 mov eax, esi */ { eax = (u32)(esi); }
  /* 00501709 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50170eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x501709u); RETCHK(0x50170eu, 0x501709u); LOADALL;
  /* 0050170e movzx ecx, al */ { ecx = (u32)((eax & 0xffu)); }
  /* 00501711 push 0x6424e4 */ { u32 v_ = 0x6424e4u; esp -= 4; M32(esp) = v_; }
  /* 00501716 mov eax, esi */ { eax = (u32)(esi); }
  /* 00501718 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0050171b call 0x560fd0 */ esp -= 4; M32(esp) = 0x501720u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50171bu); RETCHK(0x501720u, 0x50171bu); LOADALL;
  /* 00501720 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501722 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00501725 mov eax, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00501728 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050172b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050172d mov byte ptr [ebp + 0xb], dl */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00501730 je 0x50173e */ if (ZF_) goto L_0050173e;
  /* 00501732 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501733 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00501736 call 0x52d060 */ esp -= 4; M32(esp) = 0x50173bu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x501736u); RETCHK(0x50173bu, 0x501736u); LOADALL;
  /* 0050173b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050173e:;
  /* 0050173e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00501740 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00501742 mov dword ptr [ebp - 0x34], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0xfu); }
  /* 00501749 mov dword ptr [ebp - 0x38], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(esi); }
  /* 0050174c mov byte ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)(0x0u); }
  /* 00501750 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00501753:;
  /* 00501753 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00501755 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00501756 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501758 jne 0x501753 */ if (!ZF_) goto L_00501753;
  /* 0050175a sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050175c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050175d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050175e lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00501761 call 0x404420 */ esp -= 4; M32(esp) = 0x501766u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x501761u); RETCHK(0x501766u, 0x501761u); LOADALL;
  /* 00501766 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00501769 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050176a lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050176d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050176e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050176f sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501772 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00501775 mov eax, esp */ { eax = (u32)(esp); }
  /* 00501777 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0050177a mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 0050177d call 0x52cea0 */ esp -= 4; M32(esp) = 0x501782u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50177du); RETCHK(0x501782u, 0x50177du); LOADALL;
  /* 00501782 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00501785 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 00501788 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0050178b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050178c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050178d mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 00501790 call 0x500f30 */ esp -= 4; M32(esp) = 0x501795u; SAVEALL; F_00500f30(c); ABI_CHECK(0x500f30u, 0x501790u); RETCHK(0x501795u, 0x501790u); LOADALL;
  /* 00501795 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00501797 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050179b jb 0x5017a9 */ if (CF_) goto L_005017a9;
  /* 0050179d mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 005017a0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005017a1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5017a6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5017a1u); RETCHK(0x5017a6u, 0x5017a1u); LOADALL;
  /* 005017a6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005017a9:;
  /* 005017a9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005017ac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005017ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005017ae mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005017b0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005017b7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005017b8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005017ba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005017bb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005017c0(CPU *c) {
  NATIVE_HOOK(0x5017c0u) REGS; LOADALL;
L_005017c0:;
  /* 005017c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005017c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005017c3 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005017c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005017c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005017c8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005017c9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005017cb lea ebx, [edi + 0x2b8] */ ebx = (u32)((u32)(edi + 0x2b8u));
  /* 005017d1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005017d3 call 0x527a50 */ esp -= 4; M32(esp) = 0x5017d8u; SAVEALL; F_00527a50(c); ABI_CHECK(0x527a50u, 0x5017d3u); RETCHK(0x5017d8u, 0x5017d3u); LOADALL;
  /* 005017d8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005017da je 0x501814 */ if (ZF_) goto L_00501814;
  /* 005017dc mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005017de mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005017e0 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5017e3u; SAVEALL; call_ind(c, t_); RETCHK(0x5017e3u, 0x5017e0u); LOADALL; }
  /* 005017e3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005017e5 jne 0x5017eb */ if (!ZF_) goto L_005017eb;
  /* 005017e7 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005017e9 jmp 0x50180d */ goto L_0050180d;
L_005017eb:;
  /* 005017eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005017ec call 0x508500 */ esp -= 4; M32(esp) = 0x5017f1u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x5017ecu); RETCHK(0x5017f1u, 0x5017ecu); LOADALL;
  /* 005017f1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005017f3 je 0x50180b */ if (ZF_) goto L_0050180b;
  /* 005017f5 mov esi, edi */ { esi = (u32)(edi); }
  /* 005017f7 call 0x5084b0 */ esp -= 4; M32(esp) = 0x5017fcu; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x5017f7u); RETCHK(0x5017fcu, 0x5017f7u); LOADALL;
  /* 005017fc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005017fe je 0x50180b */ if (ZF_) goto L_0050180b;
  /* 00501800 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00501802 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00501804 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00501806 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501809u; SAVEALL; call_ind(c, t_); RETCHK(0x501809u, 0x501806u); LOADALL; }
  /* 00501809 jmp 0x501814 */ goto L_00501814;
L_0050180b:;
  /* 0050180b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
L_0050180d:;
  /* 0050180d mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050180f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00501811 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501814u; SAVEALL; call_ind(c, t_); RETCHK(0x501814u, 0x501811u); LOADALL; }
L_00501814:;
  /* 00501814 mov esi, dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); esi = (u32)(M32(m_)); }
  /* 0050181a mov eax, dword ptr [edi + 0x1a0] */ { const u32 m_ = (u32)(edi + 0x1a0u); eax = (u32)(M32(m_)); }
  /* 00501820 mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 00501823 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 00501826 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00501829 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050182c fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0050182f fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501832 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00501835 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 00501838 mov ecx, dword ptr [edi + 0x20c] */ { const u32 m_ = (u32)(edi + 0x20cu); ecx = (u32)(M32(m_)); }
  /* 0050183e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501840 jne 0x501846 */ if (!ZF_) goto L_00501846;
  /* 00501842 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00501844 jmp 0x501849 */ goto L_00501849;
L_00501846:;
  /* 00501846 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
L_00501849:;
  /* 00501849 mov eax, dword ptr [edi + 0x19c] */ { const u32 m_ = (u32)(edi + 0x19cu); eax = (u32)(M32(m_)); }
  /* 0050184f lea ebx, [eax + esi] */ ebx = (u32)((u32)(eax + esi));
  /* 00501852 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00501854 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501856 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00501859 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 0050185c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0050185f fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501862 jne 0x501868 */ if (!ZF_) goto L_00501868;
  /* 00501864 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00501866 jmp 0x50186b */ goto L_0050186b;
L_00501868:;
  /* 00501868 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
L_0050186b:;
  /* 0050186b mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0050186e add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00501870 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501872 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00501875 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 00501878 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 0050187f mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 00501886 mov dword ptr [ebp - 0x18], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0050188d fst dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); }
  /* 00501890 mov dword ptr [ebp - 0x14], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x3f800000u); }
  /* 00501897 jge 0x5018bb */ if (!LT_) goto L_005018bb;
  /* 00501899 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050189b je 0x5018a4 */ if (ZF_) goto L_005018a4;
  /* 0050189d mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005018a0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005018a2 jne 0x5018ad */ if (!ZF_) goto L_005018ad;
L_005018a4:;
  /* 005018a4 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 005018ab jmp 0x5018bb */ goto L_005018bb;
L_005018ad:;
  /* 005018ad fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 005018b0 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005018b3 fidiv dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 005018b6 fchs */ ST(0) = -ST(0);
  /* 005018b8 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
L_005018bb:;
  /* 005018bb fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005018be fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005018c1 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005018c7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005018c9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005018cc je 0x5018d6 */ if (ZF_) goto L_005018d6;
  /* 005018ce fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005018d0 fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005018d3 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005018d6:;
  /* 005018d6 lea edx, [esi + esi] */ edx = (u32)((u32)(esi + esi));
  /* 005018d9 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 005018dc fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 005018df fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 005018e2 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 005018e4 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 005018e7 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 005018e9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005018eb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005018ed test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005018f0 jne 0x50193c */ if (!ZF_) goto L_0050193c;
  /* 005018f2 fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005018f5 fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005018f8 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005018fe fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00501900 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501903 je 0x50190d */ if (ZF_) goto L_0050190d;
  /* 00501905 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00501907 fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0050190a fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050190d:;
  /* 0050190d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050190f fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00501912 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501915 je 0x50191e */ if (ZF_) goto L_0050191e;
  /* 00501917 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050191a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050191c jne 0x501927 */ if (!ZF_) goto L_00501927;
L_0050191e:;
  /* 0050191e mov dword ptr [ebp - 0x18], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00501925 jmp 0x50193c */ goto L_0050193c;
L_00501927:;
  /* 00501927 fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050192a mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050192d fsubr dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00501930 fidiv dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 00501933 fadd dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00501939 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
L_0050193c:;
  /* 0050193c fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 0050193f fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00501945 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00501947 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050194a jp 0x50197b */ if (PF_) goto L_0050197b;
  /* 0050194c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050194e je 0x501957 */ if (ZF_) goto L_00501957;
  /* 00501950 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00501953 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501955 jne 0x501960 */ if (!ZF_) goto L_00501960;
L_00501957:;
  /* 00501957 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0050195e jmp 0x501974 */ goto L_00501974;
L_00501960:;
  /* 00501960 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 00501963 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00501966 fchs */ ST(0) = -ST(0);
  /* 00501968 fidiv dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 0050196b fadd dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00501971 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
L_00501974:;
  /* 00501974 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
L_0050197b:;
  /* 0050197b fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0050197e fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00501981 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00501987 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00501989 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050198c je 0x501996 */ if (ZF_) goto L_00501996;
  /* 0050198e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00501990 fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 00501993 fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00501996:;
  /* 00501996 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00501998 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0050199a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050199c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050199e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005019a1 jne 0x5019ea */ if (!ZF_) goto L_005019ea;
  /* 005019a3 fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 005019a6 fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005019a9 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005019af fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005019b1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005019b4 je 0x5019be */ if (ZF_) goto L_005019be;
  /* 005019b6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005019b8 fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 005019bb fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005019be:;
  /* 005019be test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005019c0 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005019c3 je 0x5019cc */ if (ZF_) goto L_005019cc;
  /* 005019c5 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005019c8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005019ca jne 0x5019d5 */ if (!ZF_) goto L_005019d5;
L_005019cc:;
  /* 005019cc mov dword ptr [ebp - 0x14], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x3f800000u); }
  /* 005019d3 jmp 0x5019ea */ goto L_005019ea;
L_005019d5:;
  /* 005019d5 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 005019d8 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 005019db fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005019de fidiv dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 005019e1 fadd dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005019e7 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
L_005019ea:;
  /* 005019ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005019eb lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 005019ee call 0x52cf90 */ esp -= 4; M32(esp) = 0x5019f3u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5019eeu); RETCHK(0x5019f3u, 0x5019eeu); LOADALL;
  /* 005019f3 mov ecx, dword ptr [edi + 0x20c] */ { const u32 m_ = (u32)(edi + 0x20cu); ecx = (u32)(M32(m_)); }
  /* 005019f9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005019fc lea eax, [edi + 0x224] */ eax = (u32)((u32)(edi + 0x224u));
  /* 00501a02 call 0x526830 */ esp -= 4; M32(esp) = 0x501a07u; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x501a02u); RETCHK(0x501a07u, 0x501a02u); LOADALL;
  /* 00501a07 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00501a0a mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00501a0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00501a0e mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 00501a11 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00501a12 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 00501a15 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00501a16 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00501a17 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501a18 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00501a1a call 0x500ca0 */ esp -= 4; M32(esp) = 0x501a1fu; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x501a1au); RETCHK(0x501a1fu, 0x501a1au); LOADALL;
  /* 00501a1f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501a20 call 0x508500 */ esp -= 4; M32(esp) = 0x501a25u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x501a20u); RETCHK(0x501a25u, 0x501a20u); LOADALL;
  /* 00501a25 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501a27 je 0x501a5e */ if (ZF_) goto L_00501a5e;
  /* 00501a29 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501a2fu; SAVEALL; call_ind(c, t_); RETCHK(0x501a2fu, 0x501a29u); LOADALL; }
  /* 00501a2f mov ecx, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); ecx = (u32)(M32(m_)); }
  /* 00501a35 mov dword ptr [edi + 0x21c], eax */ { const u32 m_ = (u32)(edi + 0x21cu); M32(m_) = (u32)(eax); }
  /* 00501a3b sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00501a3d cdq */ edx = (u32)((s32)eax >> 31);
  /* 00501a3e mov ecx, 0x3e8 */ { ecx = (u32)(0x3e8u); }
  /* 00501a43 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x501a43u); eax = q_; edx = r_; }
  /* 00501a45 cmp edx, 0x1f4 */ { u32 a_ = edx, b_ = 0x1f4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501a4b jge 0x501a5e */ if (!LT_) goto L_00501a5e;
  /* 00501a4d mov eax, dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); eax = (u32)(M32(m_)); }
  /* 00501a53 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00501a55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501a56 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501a58 call dword ptr [edx + 0xf0] */ { const u32 m_ = (u32)(edx + 0xf0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501a5eu; SAVEALL; call_ind(c, t_); RETCHK(0x501a5eu, 0x501a58u); LOADALL; }
L_00501a5e:;
  /* 00501a5e mov ecx, dword ptr [edi + 0x364] */ { const u32 m_ = (u32)(edi + 0x364u); ecx = (u32)(M32(m_)); }
  /* 00501a64 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501a66 je 0x501a79 */ if (ZF_) goto L_00501a79;
  /* 00501a68 mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 00501a6e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501a70 jbe 0x501a79 */ if ((CF_|ZF_)) goto L_00501a79;
  /* 00501a72 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00501a74 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00501a76 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501a79u; SAVEALL; call_ind(c, t_); RETCHK(0x501a79u, 0x501a76u); LOADALL; }
L_00501a79:;
  /* 00501a79 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501a7a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501a7b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00501a7c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501a7e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501a7f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00501a80(CPU *c) {
  NATIVE_HOOK(0x501a80u) REGS; LOADALL;
L_00501a80:;
  /* 00501a80 mov eax, dword ptr [ecx + 0x20c] */ { const u32 m_ = (u32)(ecx + 0x20cu); eax = (u32)(M32(m_)); }
  /* 00501a86 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501a88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501a89 lea esi, [ecx + 0x20c] */ esi = (u32)((u32)(ecx + 0x20cu));
  /* 00501a8f je 0x501aa4 */ if (ZF_) goto L_00501aa4;
  /* 00501a91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501a92 call 0x5ab020 */ esp -= 4; M32(esp) = 0x501a97u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x501a92u); RETCHK(0x501a97u, 0x501a92u); LOADALL;
  /* 00501a97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501a9a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00501a9c mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00501a9e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00501aa1 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_00501aa4:;
  /* 00501aa4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501aa5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00501ab0(CPU *c) {
  NATIVE_HOOK(0x501ab0u) REGS; LOADALL;
L_00501ab0:;
  /* 00501ab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00501ab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00501ab3 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501ab6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501ab7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501ab8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00501aba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501abb mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00501abe mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00501ac1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00501ac4 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00501ac6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501ac7 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00501aca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00501acb lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00501ace push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00501acf mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00501ad1 call 0x5014c0 */ esp -= 4; M32(esp) = 0x501ad6u; SAVEALL; F_005014c0(c); ABI_CHECK(0x5014c0u, 0x501ad1u); RETCHK(0x501ad6u, 0x501ad1u); LOADALL;
  /* 00501ad6 mov eax, dword ptr [ebx + 0x1a0] */ { const u32 m_ = (u32)(ebx + 0x1a0u); eax = (u32)(M32(m_)); }
  /* 00501adc mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00501adf mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00501ae2 lea ecx, [eax + edi + 2] */ ecx = (u32)((u32)(eax + edi + 0x2u));
  /* 00501ae6 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00501ae9 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00501aec add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00501aef mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00501af2 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00501af4 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501af7 mov dword ptr [ebp - 0x14], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x40000000u); }
  /* 00501afe fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00501b01 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501b04 call 0x527d20 */ esp -= 4; M32(esp) = 0x501b09u; SAVEALL; F_00527d20(c); ABI_CHECK(0x527d20u, 0x501b04u); RETCHK(0x501b09u, 0x501b04u); LOADALL;
  /* 00501b09 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00501b0b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00501b0e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00501b0f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00501b10 call dword ptr [0x62e070] */ { const u32 m_ = (u32)(0x62e070u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501b16u; SAVEALL; call_ind(c, t_); RETCHK(0x501b16u, 0x501b10u); LOADALL; }
  /* 00501b16 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 00501b19 lea ecx, [eax + edi + 2] */ ecx = (u32)((u32)(eax + edi + 0x2u));
  /* 00501b1d mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00501b20 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00501b23 lea edi, [ebp - 0xc] */ edi = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00501b26 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00501b28 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501b2b call 0x52cf40 */ esp -= 4; M32(esp) = 0x501b30u; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x501b2bu); RETCHK(0x501b30u, 0x501b2bu); LOADALL;
  /* 00501b30 lea edi, [ebp - 0x14] */ edi = (u32)((u32)(ebp + 0xffffffecu));
  /* 00501b33 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00501b35 call 0x52cf40 */ esp -= 4; M32(esp) = 0x501b3au; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x501b35u); RETCHK(0x501b3au, 0x501b35u); LOADALL;
  /* 00501b3a fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00501b3d fadd dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00501b43 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00501b46 lea esi, [ebx + 0x1b0] */ esi = (u32)((u32)(ebx + 0x1b0u));
  /* 00501b4c mov ebx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ebx = (u32)(M32(m_)); }
  /* 00501b4f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501b50 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501b53 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00501b56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501b57 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501b58 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501b59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501b5a call 0x526d10 */ esp -= 4; M32(esp) = 0x501b5fu; SAVEALL; F_00526d10(c); ABI_CHECK(0x526d10u, 0x501b5au); RETCHK(0x501b5fu, 0x501b5au); LOADALL;
  /* 00501b5f fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00501b62 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00501b68 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501b69 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501b6a fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00501b6d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00501b70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501b71 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501b72 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501b73 call 0x526d10 */ esp -= 4; M32(esp) = 0x501b78u; SAVEALL; F_00526d10(c); ABI_CHECK(0x526d10u, 0x501b73u); RETCHK(0x501b78u, 0x501b73u); LOADALL;
  /* 00501b78 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501b79 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501b7a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00501b7b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501b7d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501b7e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00501b90(CPU *c) {
  NATIVE_HOOK(0x501b90u) REGS; LOADALL;
L_00501b90:;
  /* 00501b90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00501b91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00501b93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00501b95 push 0x61dff8 */ { u32 v_ = 0x61dff8u; esp -= 4; M32(esp) = v_; }
  /* 00501b9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00501ba0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501ba1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00501ba8 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501bab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00501bac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501bad mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00501baf mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00501bb1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501bb2 call dword ptr [eax + 0xdc] */ { const u32 m_ = (u32)(eax + 0xdcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501bb8u; SAVEALL; call_ind(c, t_); RETCHK(0x501bb8u, 0x501bb2u); LOADALL; }
  /* 00501bb8 cmp dword ptr [esi + 0x198], 8 */ { const u32 m_ = (u32)(esi + 0x198u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501bbf jb 0x501bc9 */ if (CF_) goto L_00501bc9;
  /* 00501bc1 mov eax, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); eax = (u32)(M32(m_)); }
  /* 00501bc7 jmp 0x501bcf */ goto L_00501bcf;
L_00501bc9:;
  /* 00501bc9 lea eax, [esi + 0x184] */ eax = (u32)((u32)(esi + 0x184u));
L_00501bcf:;
  /* 00501bcf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501bd0 lea ebx, [ebp - 0x14] */ ebx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00501bd3 call 0x500b40 */ esp -= 4; M32(esp) = 0x501bd8u; SAVEALL; F_00500b40(c); ABI_CHECK(0x500b40u, 0x501bd3u); RETCHK(0x501bd8u, 0x501bd3u); LOADALL;
  /* 00501bd8 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00501bdf fld dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 00501be2 fsub dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00501be5 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00501beb fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00501bed test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501bf0 je 0x501bfa */ if (ZF_) goto L_00501bfa;
  /* 00501bf2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00501bf4 fld dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 00501bf7 fsub dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00501bfa:;
  /* 00501bfa fld dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00501bfd fsub dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00501c00 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00501c06 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00501c08 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501c0b je 0x501c15 */ if (ZF_) goto L_00501c15;
  /* 00501c0d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00501c0f fld dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00501c12 fsub dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00501c15:;
  /* 00501c15 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00501c17 lea ebx, [esi + 0x20c] */ ebx = (u32)((u32)(esi + 0x20cu));
  /* 00501c1d call 0x61b154 */ esp -= 4; M32(esp) = 0x501c22u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x501c1du); RETCHK(0x501c22u, 0x501c1du); LOADALL;
  /* 00501c22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501c23 call 0x61b154 */ esp -= 4; M32(esp) = 0x501c28u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x501c23u); RETCHK(0x501c28u, 0x501c23u); LOADALL;
  /* 00501c28 mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00501c2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501c2c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501c2d add esi, 0x1b8 */ { u32 a_ = esi, b_ = 0x1b8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00501c33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501c34 call 0x5288e0 */ esp -= 4; M32(esp) = 0x501c39u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x501c34u); RETCHK(0x501c39u, 0x501c34u); LOADALL;
  /* 00501c39 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00501c3c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00501c3e mov edx, eax */ { edx = (u32)(eax); }
  /* 00501c40 call 0x528970 */ esp -= 4; M32(esp) = 0x501c45u; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x501c40u); RETCHK(0x501c45u, 0x501c40u); LOADALL;
  /* 00501c45 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501c47 je 0x501c52 */ if (ZF_) goto L_00501c52;
  /* 00501c49 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501c4a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x501c4fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x501c4au); RETCHK(0x501c4fu, 0x501c4au); LOADALL;
  /* 00501c4f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00501c52:;
  /* 00501c52 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00501c55 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501c56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501c57 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00501c58 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00501c5f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501c61 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501c62 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00501c70(CPU *c) {
  NATIVE_HOOK(0x501c70u) REGS; LOADALL;
L_00501c70:;
  /* 00501c70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501c71 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00501c73 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00501c75 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501c78u; SAVEALL; call_ind(c, t_); RETCHK(0x501c78u, 0x501c75u); LOADALL; }
  /* 00501c78 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501c7a je 0x501cfa */ if (ZF_) goto L_00501cfa;
  /* 00501c7c mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00501c7e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00501c80 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501c83u; SAVEALL; call_ind(c, t_); RETCHK(0x501c83u, 0x501c80u); LOADALL; }
  /* 00501c83 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501c85 je 0x501cfa */ if (ZF_) goto L_00501cfa;
  /* 00501c87 call 0x5084b0 */ esp -= 4; M32(esp) = 0x501c8cu; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x501c87u); RETCHK(0x501c8cu, 0x501c87u); LOADALL;
  /* 00501c8c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501c8e je 0x501cfa */ if (ZF_) goto L_00501cfa;
  /* 00501c90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501c91 call 0x508500 */ esp -= 4; M32(esp) = 0x501c96u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x501c91u); RETCHK(0x501c96u, 0x501c91u); LOADALL;
  /* 00501c96 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501c98 je 0x501c9e */ if (ZF_) goto L_00501c9e;
  /* 00501c9a mov eax, esi */ { eax = (u32)(esi); }
  /* 00501c9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501c9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00501c9e:;
  /* 00501c9e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501c9f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00501ca1 call 0x507ac0 */ esp -= 4; M32(esp) = 0x501ca6u; SAVEALL; F_00507ac0(c); ABI_CHECK(0x507ac0u, 0x501ca1u); RETCHK(0x501ca6u, 0x501ca1u); LOADALL;
  /* 00501ca6 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501cacu; SAVEALL; call_ind(c, t_); RETCHK(0x501cacu, 0x501ca6u); LOADALL; }
  /* 00501cac mov dword ptr [esi + 0x21c], eax */ { const u32 m_ = (u32)(esi + 0x21cu); M32(m_) = (u32)(eax); }
  /* 00501cb2 mov dword ptr [esi + 0x218], eax */ { const u32 m_ = (u32)(esi + 0x218u); M32(m_) = (u32)(eax); }
  /* 00501cb8 call 0x518bb0 */ esp -= 4; M32(esp) = 0x501cbdu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x501cb8u); RETCHK(0x501cbdu, 0x501cb8u); LOADALL;
  /* 00501cbd call 0x5180e0 */ esp -= 4; M32(esp) = 0x501cc2u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x501cbdu); RETCHK(0x501cc2u, 0x501cbdu); LOADALL;
  /* 00501cc2 mov edi, eax */ { edi = (u32)(eax); }
  /* 00501cc4 call 0x508d30 */ esp -= 4; M32(esp) = 0x501cc9u; SAVEALL; F_00508d30(c); ABI_CHECK(0x508d30u, 0x501cc4u); RETCHK(0x501cc9u, 0x501cc4u); LOADALL;
  /* 00501cc9 mov ecx, dword ptr [esi + 0x364] */ { const u32 m_ = (u32)(esi + 0x364u); ecx = (u32)(M32(m_)); }
  /* 00501ccf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501cd1 mov edi, eax */ { edi = (u32)(eax); }
  /* 00501cd3 je 0x501cf5 */ if (ZF_) goto L_00501cf5;
  /* 00501cd5 mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 00501cdb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501cdd jne 0x501cf5 */ if (!ZF_) goto L_00501cf5;
  /* 00501cdf mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00501ce4 mov dl, byte ptr [eax + 0xe5] */ { const u32 m_ = (u32)(eax + 0xe5u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00501cea test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501cec je 0x501cf5 */ if (ZF_) goto L_00501cf5;
  /* 00501cee mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00501cf0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00501cf2 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501cf5u; SAVEALL; call_ind(c, t_); RETCHK(0x501cf5u, 0x501cf2u); LOADALL; }
L_00501cf5:;
  /* 00501cf5 mov eax, edi */ { eax = (u32)(edi); }
  /* 00501cf7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501cf8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501cf9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00501cfa:;
  /* 00501cfa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00501cfc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501cfd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00501d00(CPU *c) {
  NATIVE_HOOK(0x501d00u) REGS; LOADALL;
L_00501d00:;
  /* 00501d00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501d01 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00501d03 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00501d05 call dword ptr [0x62e4f8] */ { const u32 m_ = (u32)(0x62e4f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501d0bu; SAVEALL; call_ind(c, t_); RETCHK(0x501d0bu, 0x501d05u); LOADALL; }
  /* 00501d0b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501d0c call 0x5fe6b0 */ esp -= 4; M32(esp) = 0x501d11u; SAVEALL; F_005fe6b0(c); ABI_CHECK(0x5fe6b0u, 0x501d0cu); RETCHK(0x501d11u, 0x501d0cu); LOADALL;
  /* 00501d11 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501d13 je 0x501d3c */ if (ZF_) goto L_00501d3c;
  /* 00501d15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501d16 call 0x559eb0 */ esp -= 4; M32(esp) = 0x501d1bu; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x501d16u); RETCHK(0x501d1bu, 0x501d16u); LOADALL;
  /* 00501d1b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501d1c call 0x5fe6b6 */ esp -= 4; M32(esp) = 0x501d21u; SAVEALL; F_005fe6b6(c); ABI_CHECK(0x5fe6b6u, 0x501d1cu); RETCHK(0x501d21u, 0x501d1cu); LOADALL;
  /* 00501d21 mov esi, eax */ { esi = (u32)(eax); }
  /* 00501d23 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501d25 je 0x501d3b */ if (ZF_) goto L_00501d3b;
  /* 00501d27 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00501d29 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501d2a call 0x5fe6bc */ esp -= 4; M32(esp) = 0x501d2fu; SAVEALL; F_005fe6bc(c); ABI_CHECK(0x5fe6bcu, 0x501d2au); RETCHK(0x501d2fu, 0x501d2au); LOADALL;
  /* 00501d2f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501d30 call 0x559eb0 */ esp -= 4; M32(esp) = 0x501d35u; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x501d30u); RETCHK(0x501d35u, 0x501d30u); LOADALL;
  /* 00501d35 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501d36 call 0x5fe6c2 */ esp -= 4; M32(esp) = 0x501d3bu; SAVEALL; F_005fe6c2(c); ABI_CHECK(0x5fe6c2u, 0x501d36u); RETCHK(0x501d3bu, 0x501d36u); LOADALL;
L_00501d3b:;
  /* 00501d3b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00501d3c:;
  /* 00501d3c mov eax, dword ptr [edi + 0x364] */ { const u32 m_ = (u32)(edi + 0x364u); eax = (u32)(M32(m_)); }
  /* 00501d42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00501d44 je 0x501d4f */ if (ZF_) goto L_00501d4f;
  /* 00501d46 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00501d48 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00501d4a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00501d4c call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501d4fu; SAVEALL; call_ind(c, t_); RETCHK(0x501d4fu, 0x501d4cu); LOADALL; }
L_00501d4f:;
  /* 00501d4f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501d50 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00501d60(CPU *c) {
  NATIVE_HOOK(0x501d60u) REGS; LOADALL;
L_00501d60:;
  /* 00501d60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00501d61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00501d63 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00501d68 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501d69 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501d6a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00501d6c call 0x550370 */ esp -= 4; M32(esp) = 0x501d71u; SAVEALL; F_00550370(c); ABI_CHECK(0x550370u, 0x501d6cu); RETCHK(0x501d71u, 0x501d6cu); LOADALL;
  /* 00501d71 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501d73 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00501d76 je 0x501d93 */ if (ZF_) goto L_00501d93;
  /* 00501d78 cmp esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501d7b jne 0x501d93 */ if (!ZF_) goto L_00501d93;
  /* 00501d7d mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00501d7f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501d81 call dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501d87u; SAVEALL; call_ind(c, t_); RETCHK(0x501d87u, 0x501d81u); LOADALL; }
  /* 00501d87 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501d89 je 0x501db7 */ if (ZF_) goto L_00501db7;
  /* 00501d8b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501d8c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501d8e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501d8f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501d90 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501d93:;
  /* 00501d93 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00501d95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501d96 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00501d99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501d9a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501d9c call dword ptr [edx + 0xec] */ { const u32 m_ = (u32)(edx + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501da2u; SAVEALL; call_ind(c, t_); RETCHK(0x501da2u, 0x501d9cu); LOADALL; }
  /* 00501da2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501da4 je 0x501db7 */ if (ZF_) goto L_00501db7;
  /* 00501da6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00501da9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00501daa call 0x5022a0 */ esp -= 4; M32(esp) = 0x501dafu; SAVEALL; F_005022a0(c); ABI_CHECK(0x5022a0u, 0x501daau); RETCHK(0x501dafu, 0x501daau); LOADALL;
  /* 00501daf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501db0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501db2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501db3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501db4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501db7:;
  /* 00501db7 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00501dba mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00501dbd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00501dbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501dbf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501dc0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501dc2 call 0x508350 */ esp -= 4; M32(esp) = 0x501dc7u; SAVEALL; F_00508350(c); ABI_CHECK(0x508350u, 0x501dc2u); RETCHK(0x501dc7u, 0x501dc2u); LOADALL;
  /* 00501dc7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501dc8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501dc9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501dca ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00501dd0(CPU *c) {
  NATIVE_HOOK(0x501dd0u) REGS; LOADALL;
L_00501dd0:;
  /* 00501dd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00501dd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00501dd3 mov al, byte ptr [0x9b8b60] */ { const u32 m_ = (u32)(0x9b8b60u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00501dd8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501dda jne 0x501e17 */ if (!ZF_) goto L_00501e17;
  /* 00501ddc mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00501ddf cmp eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501de4 jb 0x501df1 */ if (CF_) goto L_00501df1;
  /* 00501de6 mov byte ptr [0x9b8b60], al */ { const u32 m_ = (u32)(0x9b8b60u); M8(m_) = (u8)((eax & 0xffu)); }
L_00501deb:;
  /* 00501deb xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00501ded pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501dee ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00501df1:;
  /* 00501df1 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501df4 jne 0x501e04 */ if (!ZF_) goto L_00501e04;
  /* 00501df6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00501df9 mov word ptr [eax], 0x3000 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x3000u); }
  /* 00501dfe xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00501e00 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501e01 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00501e04:;
  /* 00501e04 jb 0x501deb */ if (CF_) goto L_00501deb;
  /* 00501e06 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00501e09 add eax, 0xfffffee0 */ { u32 a_ = eax, b_ = 0xfffffee0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00501e0e mov word ptr [ecx], ax */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00501e11 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501e13 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501e14 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00501e17:;
  /* 00501e17 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00501e1a mov dl, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00501e1d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00501e1f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501e20 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00501e22 push 0x9b8b60 */ { u32 v_ = 0x9b8b60u; esp -= 4; M32(esp) = v_; }
  /* 00501e27 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00501e29 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00501e2b mov byte ptr [0x9b8b61], dl */ { const u32 m_ = (u32)(0x9b8b61u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00501e31 call dword ptr [0x62e174] */ { const u32 m_ = (u32)(0x62e174u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501e37u; SAVEALL; call_ind(c, t_); RETCHK(0x501e37u, 0x501e31u); LOADALL; }
  /* 00501e37 mov byte ptr [0x9b8b60], 0 */ { const u32 m_ = (u32)(0x9b8b60u); M8(m_) = (u8)(0x0u); }
  /* 00501e3e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501e40 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501e41 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00501e50(CPU *c) {
  NATIVE_HOOK(0x501e50u) REGS; LOADALL;
L_00501e50:;
  /* 00501e50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00501e51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00501e53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00501e54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501e55 mov esi, dword ptr [0x62e4dc] */ { const u32 m_ = (u32)(0x62e4dcu); esi = (u32)(M32(m_)); }
  /* 00501e5b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00501e5c push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00501e5e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00501e60 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x501e62u; SAVEALL; call_ind(c, t_); RETCHK(0x501e62u, 0x501e60u); LOADALL; }
  /* 00501e62 movsx eax, ax */ { eax = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 00501e65 and eax, 0x80000000 */ { u32 a_ = eax, b_ = 0x80000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00501e6a cmp eax, 0x80000000 */ { u32 a_ = eax, b_ = 0x80000000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501e6f sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00501e72 push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 00501e74 mov byte ptr [ebp - 4], cl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00501e77 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x501e79u; SAVEALL; call_ind(c, t_); RETCHK(0x501e79u, 0x501e77u); LOADALL; }
  /* 00501e79 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00501e7c movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 00501e7f and edx, 0x80000000 */ { u32 a_ = edx, b_ = 0x80000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00501e85 cmp edx, 0x80000000 */ { u32 a_ = edx, b_ = 0x80000000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501e8b sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00501e8e cmp esi, 0x2e */ { u32 a_ = esi, b_ = 0x2eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501e91 ja 0x501f8b */ if (!(CF_|ZF_)) goto L_00501f8b;
  /* 00501e97 je 0x501f65 */ if (ZF_) goto L_00501f65;
  /* 00501e9d lea eax, [esi - 8] */ eax = (u32)((u32)(esi + 0xfffffff8u));
  /* 00501ea0 cmp eax, 0x25 */ { u32 a_ = eax, b_ = 0x25u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501ea3 ja 0x501fec */ if (!(CF_|ZF_)) goto L_00501fec;
  /* 00501ea9 movzx eax, byte ptr [eax + 0x502034] */ { const u32 m_ = (u32)(eax + 0x502034u); eax = (u32)(M8(m_)); }
  /* 00501eb0 jmp dword ptr [eax*4 + 0x50201c] */ { const u32 m_ = (u32)(eax * 4u + 0x50201cu); u32 t_ = M32(m_); switch (t_) { case 0x501eb7u: goto L_00501eb7; case 0x501ee9u: goto L_00501ee9; case 0x501f1bu: goto L_00501f1b; case 0x501f49u: goto L_00501f49; case 0x501fecu: goto L_00501fec; case 0x502010u: goto L_00502010; default: SAVEALL; call_ind(c, t_); return; } }
L_00501eb7:;
  /* 00501eb7 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00501ebc call 0x550370 */ esp -= 4; M32(esp) = 0x501ec1u; SAVEALL; F_00550370(c); ABI_CHECK(0x550370u, 0x501ebcu); RETCHK(0x501ec1u, 0x501ebcu); LOADALL;
  /* 00501ec1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501ec3 jne 0x502010 */ if (!ZF_) goto L_00502010;
  /* 00501ec9 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00501ecc mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00501ece push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501ecf mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501ed1 call dword ptr [edx + 0xf4] */ { const u32 m_ = (u32)(edx + 0xf4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501ed7u; SAVEALL; call_ind(c, t_); RETCHK(0x501ed7u, 0x501ed1u); LOADALL; }
  /* 00501ed7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501ed9 je 0x501fec */ if (ZF_) goto L_00501fec;
  /* 00501edf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501ee0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501ee2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501ee3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501ee5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501ee6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501ee9:;
  /* 00501ee9 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00501eee call 0x550370 */ esp -= 4; M32(esp) = 0x501ef3u; SAVEALL; F_00550370(c); ABI_CHECK(0x550370u, 0x501eeeu); RETCHK(0x501ef3u, 0x501eeeu); LOADALL;
  /* 00501ef3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501ef5 jne 0x502010 */ if (!ZF_) goto L_00502010;
  /* 00501efb mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00501efe mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00501f00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501f01 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501f03 call dword ptr [edx + 0xf8] */ { const u32 m_ = (u32)(edx + 0xf8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501f09u; SAVEALL; call_ind(c, t_); RETCHK(0x501f09u, 0x501f03u); LOADALL; }
  /* 00501f09 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501f0b je 0x501fec */ if (ZF_) goto L_00501fec;
  /* 00501f11 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501f12 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501f14 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501f15 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501f17 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501f18 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501f1b:;
  /* 00501f1b mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00501f20 call 0x550370 */ esp -= 4; M32(esp) = 0x501f25u; SAVEALL; F_00550370(c); ABI_CHECK(0x550370u, 0x501f20u); RETCHK(0x501f25u, 0x501f20u); LOADALL;
  /* 00501f25 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501f27 jne 0x502010 */ if (!ZF_) goto L_00502010;
  /* 00501f2d mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00501f2f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501f31 call dword ptr [edx + 0xfc] */ { const u32 m_ = (u32)(edx + 0xfcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501f37u; SAVEALL; call_ind(c, t_); RETCHK(0x501f37u, 0x501f31u); LOADALL; }
  /* 00501f37 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501f39 je 0x501fec */ if (ZF_) goto L_00501fec;
  /* 00501f3f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501f40 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501f42 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501f43 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501f45 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501f46 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501f49:;
  /* 00501f49 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00501f4e call 0x550370 */ esp -= 4; M32(esp) = 0x501f53u; SAVEALL; F_00550370(c); ABI_CHECK(0x550370u, 0x501f4eu); RETCHK(0x501f53u, 0x501f4eu); LOADALL;
  /* 00501f53 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501f55 je 0x501fec */ if (ZF_) goto L_00501fec;
  /* 00501f5b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501f5c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501f5e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501f5f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501f61 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501f62 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501f65:;
  /* 00501f65 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00501f6a call 0x550370 */ esp -= 4; M32(esp) = 0x501f6fu; SAVEALL; F_00550370(c); ABI_CHECK(0x550370u, 0x501f6au); RETCHK(0x501f6fu, 0x501f6au); LOADALL;
  /* 00501f6f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501f71 jne 0x502010 */ if (!ZF_) goto L_00502010;
  /* 00501f77 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00501f79 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501f7b call dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501f81u; SAVEALL; call_ind(c, t_); RETCHK(0x501f81u, 0x501f7bu); LOADALL; }
  /* 00501f81 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501f82 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501f84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501f85 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501f87 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501f88 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501f8b:;
  /* 00501f8b cmp esi, 0x58 */ { u32 a_ = esi, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501f8e ja 0x501fe4 */ if (!(CF_|ZF_)) goto L_00501fe4;
  /* 00501f90 je 0x501fcc */ if (ZF_) goto L_00501fcc;
  /* 00501f92 cmp esi, 0x43 */ { u32 a_ = esi, b_ = 0x43u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501f95 je 0x501fb4 */ if (ZF_) goto L_00501fb4;
  /* 00501f97 cmp esi, 0x56 */ { u32 a_ = esi, b_ = 0x56u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501f9a jne 0x501fec */ if (!ZF_) goto L_00501fec;
  /* 00501f9c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501f9e je 0x502010 */ if (ZF_) goto L_00502010;
  /* 00501fa0 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00501fa2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501fa4 call dword ptr [edx + 0x90] */ { const u32 m_ = (u32)(edx + 0x90u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501faau; SAVEALL; call_ind(c, t_); RETCHK(0x501faau, 0x501fa4u); LOADALL; }
  /* 00501faa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501fab mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501fad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501fae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501fb0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501fb1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501fb4:;
  /* 00501fb4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501fb6 je 0x502010 */ if (ZF_) goto L_00502010;
  /* 00501fb8 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00501fba mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501fbc call dword ptr [eax + 0x94] */ { const u32 m_ = (u32)(eax + 0x94u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501fc2u; SAVEALL; call_ind(c, t_); RETCHK(0x501fc2u, 0x501fbcu); LOADALL; }
  /* 00501fc2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501fc3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501fc5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501fc6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501fc8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501fc9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501fcc:;
  /* 00501fcc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00501fce je 0x502010 */ if (ZF_) goto L_00502010;
  /* 00501fd0 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00501fd2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501fd4 call dword ptr [edx + 0x98] */ { const u32 m_ = (u32)(edx + 0x98u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x501fdau; SAVEALL; call_ind(c, t_); RETCHK(0x501fdau, 0x501fd4u); LOADALL; }
  /* 00501fda pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501fdb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00501fdd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501fde mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00501fe0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00501fe1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00501fe4:;
  /* 00501fe4 cmp esi, 0xff01 */ { u32 a_ = esi, b_ = 0xff01u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00501fea je 0x502004 */ if (ZF_) goto L_00502004;
L_00501fec:;
  /* 00501fec mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00501fef mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00501ff2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00501ff3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00501ff4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00501ff5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00501ff7 call 0x508230 */ esp -= 4; M32(esp) = 0x501ffcu; SAVEALL; F_00508230(c); ABI_CHECK(0x508230u, 0x501ff7u); RETCHK(0x501ffcu, 0x501ff7u); LOADALL;
  /* 00501ffc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00501ffd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00501ffe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502000 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502001 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00502004:;
  /* 00502004 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00502009 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0050200b call 0x550350 */ esp -= 4; M32(esp) = 0x502010u; SAVEALL; F_00550350(c); ABI_CHECK(0x550350u, 0x50200bu); RETCHK(0x502010u, 0x50200bu); LOADALL;
L_00502010:;
  /* 00502010 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502011 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00502013 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502014 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502016 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502017 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00502060(CPU *c) {
  NATIVE_HOOK(0x502060u) REGS; LOADALL;
L_00502060:;
  /* 00502060 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502061 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502063 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502066 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00502069 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050206a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050206b mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0050206e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050206f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502070 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00502072 call 0x507f00 */ esp -= 4; M32(esp) = 0x502077u; SAVEALL; F_00507f00(c); ABI_CHECK(0x507f00u, 0x502072u); RETCHK(0x502077u, 0x502072u); LOADALL;
  /* 00502077 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00502079 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050207b call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50207eu; SAVEALL; call_ind(c, t_); RETCHK(0x50207eu, 0x50207bu); LOADALL; }
  /* 0050207e call 0x559eb0 */ esp -= 4; M32(esp) = 0x502083u; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x50207eu); RETCHK(0x502083u, 0x50207eu); LOADALL;
  /* 00502083 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502084 call dword ptr [0x62e4fc] */ { const u32 m_ = (u32)(0x62e4fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50208au; SAVEALL; call_ind(c, t_); RETCHK(0x50208au, 0x502084u); LOADALL; }
  /* 0050208a fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0050208c call 0x61b154 */ esp -= 4; M32(esp) = 0x502091u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50208cu); RETCHK(0x502091u, 0x50208cu); LOADALL;
  /* 00502091 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00502094 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00502097 call 0x61b154 */ esp -= 4; M32(esp) = 0x50209cu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x502097u); RETCHK(0x50209cu, 0x502097u); LOADALL;
  /* 0050209c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050209f lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005020a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005020a3 mov eax, esi */ { eax = (u32)(esi); }
  /* 005020a5 call 0x52d0d0 */ esp -= 4; M32(esp) = 0x5020aau; SAVEALL; F_0052d0d0(c); ABI_CHECK(0x52d0d0u, 0x5020a5u); RETCHK(0x5020aau, 0x5020a5u); LOADALL;
  /* 005020aa mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005020ad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005020b0 lea ecx, [esi + 0x1ac] */ ecx = (u32)((u32)(esi + 0x1acu));
  /* 005020b6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005020b7 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005020ba mov edx, esi */ { edx = (u32)(esi); }
  /* 005020bc call 0x501290 */ esp -= 4; M32(esp) = 0x5020c1u; SAVEALL; F_00501290(c); ABI_CHECK(0x501290u, 0x5020bcu); RETCHK(0x5020c1u, 0x5020bcu); LOADALL;
  /* 005020c1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005020c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005020c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005020c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005020c6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005020d0(CPU *c) {
  NATIVE_HOOK(0x5020d0u) REGS; LOADALL;
L_005020d0:;
  /* 005020d0 mov eax, dword ptr [ecx + 0x1ac] */ { const u32 m_ = (u32)(ecx + 0x1acu); eax = (u32)(M32(m_)); }
  /* 005020d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005020d8 jle 0x5020ee */ if ((ZF_|LT_)) goto L_005020ee;
  /* 005020da dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005020db mov dword ptr [ecx + 0x1ac], eax */ { const u32 m_ = (u32)(ecx + 0x1acu); M32(m_) = (u32)(eax); }
  /* 005020e1 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005020e3 call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5020e9u; SAVEALL; call_ind(c, t_); RETCHK(0x5020e9u, 0x5020e3u); LOADALL; }
  /* 005020e9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005020eb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005020ee:;
  /* 005020ee xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005020f0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00502100(CPU *c) {
  NATIVE_HOOK(0x502100u) REGS; LOADALL;
L_00502100:;
  /* 00502100 mov eax, dword ptr [ecx + 0x1ac] */ { const u32 m_ = (u32)(ecx + 0x1acu); eax = (u32)(M32(m_)); }
  /* 00502106 cmp eax, dword ptr [ecx + 0x194] */ { const u32 m_ = (u32)(ecx + 0x194u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050210c jge 0x502122 */ if (!LT_) goto L_00502122;
  /* 0050210e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050210f mov dword ptr [ecx + 0x1ac], eax */ { const u32 m_ = (u32)(ecx + 0x1acu); M32(m_) = (u32)(eax); }
  /* 00502115 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00502117 call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50211du; SAVEALL; call_ind(c, t_); RETCHK(0x50211du, 0x502117u); LOADALL; }
  /* 0050211d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050211f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00502122:;
  /* 00502122 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00502124 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00502130(CPU *c) {
  NATIVE_HOOK(0x502130u) REGS; LOADALL;
L_00502130:;
  /* 00502130 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00502131 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502132 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00502134 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50213au; SAVEALL; call_ind(c, t_); RETCHK(0x50213au, 0x502134u); LOADALL; }
  /* 0050213a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050213c mov eax, dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); eax = (u32)(M32(m_)); }
  /* 00502142 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502144 jle 0x502189 */ if ((ZF_|LT_)) goto L_00502189;
  /* 00502146 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00502147 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502148 mov dword ptr [edi + 0x1ac], eax */ { const u32 m_ = (u32)(edi + 0x1acu); M32(m_) = (u32)(eax); }
  /* 0050214e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050214f lea esi, [edi + 0x180] */ esi = (u32)((u32)(edi + 0x180u));
  /* 00502155 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0050215a call 0x502470 */ esp -= 4; M32(esp) = 0x50215fu; SAVEALL; F_00502470(c); ABI_CHECK(0x502470u, 0x50215au); RETCHK(0x50215fu, 0x50215au); LOADALL;
  /* 0050215f mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00502161 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00502163 call dword ptr [eax + 0x104] */ { const u32 m_ = (u32)(eax + 0x104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x502169u; SAVEALL; call_ind(c, t_); RETCHK(0x502169u, 0x502163u); LOADALL; }
  /* 00502169 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0050216b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050216d call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x502173u; SAVEALL; call_ind(c, t_); RETCHK(0x502173u, 0x50216du); LOADALL; }
  /* 00502173 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00502175 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00502177 call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50217du; SAVEALL; call_ind(c, t_); RETCHK(0x50217du, 0x502177u); LOADALL; }
  /* 0050217d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050217e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050217f mov dword ptr [0x9b8b5c], ebx */ { const u32 m_ = (u32)(0x9b8b5cu); M32(m_) = (u32)(ebx); }
  /* 00502185 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00502187 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00502188 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00502189:;
  /* 00502189 mov edx, dword ptr [0x9b8b5c] */ { const u32 m_ = (u32)(0x9b8b5cu); edx = (u32)(M32(m_)); }
  /* 0050218f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00502191 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00502193 cmp ecx, 0x1f4 */ { u32 a_ = ecx, b_ = 0x1f4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502199 jle 0x5021a6 */ if ((ZF_|LT_)) goto L_005021a6;
  /* 0050219b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050219c mov dword ptr [0x9b8b5c], ebx */ { const u32 m_ = (u32)(0x9b8b5cu); M32(m_) = (u32)(ebx); }
  /* 005021a2 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005021a4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005021a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005021a6:;
  /* 005021a6 push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 005021a8 push 0x1f4 */ { u32 v_ = 0x1f4u; esp -= 4; M32(esp) = v_; }
  /* 005021ad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005021b0 nop */ ;
  /* 005021b1 nop */ ;
  /* 005021b2 nop */ ;
  /* 005021b3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005021b4 mov dword ptr [0x9b8b5c], ebx */ { const u32 m_ = (u32)(0x9b8b5cu); M32(m_) = (u32)(ebx); }
  /* 005021ba mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005021bc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005021bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005021c0(CPU *c) {
  NATIVE_HOOK(0x5021c0u) REGS; LOADALL;
L_005021c0:;
  /* 005021c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005021c1 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005021c3 mov eax, dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); eax = (u32)(M32(m_)); }
  /* 005021c9 cmp eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005021cf jge 0x502203 */ if (!LT_) goto L_00502203;
  /* 005021d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005021d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005021d3 lea esi, [edi + 0x180] */ esi = (u32)((u32)(edi + 0x180u));
  /* 005021d9 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005021de call 0x502470 */ esp -= 4; M32(esp) = 0x5021e3u; SAVEALL; F_00502470(c); ABI_CHECK(0x502470u, 0x5021deu); RETCHK(0x5021e3u, 0x5021deu); LOADALL;
  /* 005021e3 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005021e5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005021e7 call dword ptr [eax + 0x104] */ { const u32 m_ = (u32)(eax + 0x104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5021edu; SAVEALL; call_ind(c, t_); RETCHK(0x5021edu, 0x5021e7u); LOADALL; }
  /* 005021ed mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005021ef mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005021f1 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5021f7u; SAVEALL; call_ind(c, t_); RETCHK(0x5021f7u, 0x5021f1u); LOADALL; }
  /* 005021f7 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005021f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005021fa mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005021fc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005021fd jmp dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00502203:;
  /* 00502203 push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 00502205 push 0x1f4 */ { u32 v_ = 0x1f4u; esp -= 4; M32(esp) = v_; }
  /* 0050220a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050220d nop */ ;
  /* 0050220e nop */ ;
  /* 0050220f nop */ ;
  /* 00502210 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502211 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00502220(CPU *c) {
  NATIVE_HOOK(0x502220u) REGS; LOADALL;
L_00502220:;
  /* 00502220 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502221 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502223 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00502225 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 0050222a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00502230 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502231 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00502238 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050223b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00502240 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00502243 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00502245 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00502246 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0050224d mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00502250 mov byte ptr [ebp - 0x28], al */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00502253 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00502256 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00502259 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050225b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050225c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050225e call dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x502264u; SAVEALL; call_ind(c, t_); RETCHK(0x502264u, 0x50225eu); LOADALL; }
  /* 00502264 mov ebx, dword ptr [esi + 0x220] */ { const u32 m_ = (u32)(esi + 0x220u); ebx = (u32)(M32(m_)); }
  /* 0050226a mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0050226d mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00502270 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502272 sbb bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00502274 inc bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 00502276 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502279 jb 0x502287 */ if (CF_) goto L_00502287;
  /* 0050227b mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0050227e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050227f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x502284u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50227fu); RETCHK(0x502284u, 0x50227fu); LOADALL;
  /* 00502284 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502287:;
  /* 00502287 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050228a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00502291 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00502294 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00502296 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00502297 call 0x61af31 */ esp -= 4; M32(esp) = 0x50229cu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x502297u); RETCHK(0x50229cu, 0x502297u); LOADALL;
  /* 0050229c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050229e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050229f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005022a0(CPU *c) {
  NATIVE_HOOK(0x5022a0u) REGS; LOADALL;
L_005022a0:;
  /* 005022a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005022a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005022a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005022a4 mov esi, edi */ { esi = (u32)(edi); }
  /* 005022a6 call 0x502220 */ esp -= 4; M32(esp) = 0x5022abu; SAVEALL; F_00502220(c); ABI_CHECK(0x502220u, 0x5022a6u); RETCHK(0x5022abu, 0x5022a6u); LOADALL;
  /* 005022ab test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005022ad je 0x5022c1 */ if (ZF_) goto L_005022c1;
  /* 005022af push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 005022b1 push 0x1f4 */ { u32 v_ = 0x1f4u; esp -= 4; M32(esp) = v_; }
  /* 005022b6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005022b9 nop */ ;
  /* 005022ba nop */ ;
  /* 005022bb nop */ ;
  /* 005022bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005022bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005022be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005022c1:;
  /* 005022c1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005022c4 mov ecx, dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); ecx = (u32)(M32(m_)); }
  /* 005022ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005022cb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005022cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005022ce lea esi, [edi + 0x180] */ esi = (u32)((u32)(edi + 0x180u));
  /* 005022d4 call 0x502340 */ esp -= 4; M32(esp) = 0x5022d9u; SAVEALL; F_00502340(c); ABI_CHECK(0x502340u, 0x5022d4u); RETCHK(0x5022d9u, 0x5022d4u); LOADALL;
  /* 005022d9 mov eax, dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); eax = (u32)(M32(m_)); }
  /* 005022df mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005022e1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005022e2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005022e4 mov dword ptr [edi + 0x1ac], eax */ { const u32 m_ = (u32)(edi + 0x1acu); M32(m_) = (u32)(eax); }
  /* 005022ea call dword ptr [edx + 0x104] */ { const u32 m_ = (u32)(edx + 0x104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5022f0u; SAVEALL; call_ind(c, t_); RETCHK(0x5022f0u, 0x5022eau); LOADALL; }
  /* 005022f0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005022f2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005022f4 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5022fau; SAVEALL; call_ind(c, t_); RETCHK(0x5022fau, 0x5022f4u); LOADALL; }
  /* 005022fa mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005022fc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005022fe call dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x502304u; SAVEALL; call_ind(c, t_); RETCHK(0x502304u, 0x5022feu); LOADALL; }
  /* 00502304 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502305 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502306 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00502340(CPU *c) {
  NATIVE_HOOK(0x502340u) REGS; LOADALL;
L_00502340:;
  /* 00502340 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502341 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502343 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502344 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00502347 cmp dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050234a jae 0x502353 */ if (!CF_) goto L_00502353;
  /* 0050234c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050234e call 0x60166e */ esp -= 4; M32(esp) = 0x502353u; SAVEALL; F_0060166e(c); ABI_CHECK(0x60166eu, 0x50234eu); RETCHK(0x502353u, 0x50234eu); LOADALL;
L_00502353:;
  /* 00502353 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00502356 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00502359 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050235a mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0050235d sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050235f cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502361 ja 0x50236a */ if (!(CF_|ZF_)) goto L_0050236a;
  /* 00502363 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00502365 call 0x6016ae */ esp -= 4; M32(esp) = 0x50236au; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x502365u); RETCHK(0x50236au, 0x502365u); LOADALL;
L_0050236a:;
  /* 0050236a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050236c jbe 0x502465 */ if ((CF_|ZF_)) goto L_00502465;
  /* 00502372 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00502373 mov ebx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ebx = (u32)(M32(m_)); }
  /* 00502376 add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00502378 cmp ebx, 0x7ffffffe */ { u32 a_ = ebx, b_ = 0x7ffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050237e jbe 0x502387 */ if ((CF_|ZF_)) goto L_00502387;
  /* 00502380 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00502382 call 0x6016ae */ esp -= 4; M32(esp) = 0x502387u; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x502382u); RETCHK(0x502387u, 0x502382u); LOADALL;
L_00502387:;
  /* 00502387 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0050238a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050238c jae 0x5023ae */ if (!CF_) goto L_005023ae;
  /* 0050238e mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00502391 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00502392 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00502393 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502394 call 0x5026e0 */ esp -= 4; M32(esp) = 0x502399u; SAVEALL; F_005026e0(c); ABI_CHECK(0x5026e0u, 0x502394u); RETCHK(0x502399u, 0x502394u); LOADALL;
  /* 00502399 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_0050239b:;
  /* 0050239b jbe 0x502464 */ if ((CF_|ZF_)) goto L_00502464;
  /* 005023a1 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005023a4 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005023a7 jb 0x5023dc */ if (CF_) goto L_005023dc;
  /* 005023a9 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005023ac jmp 0x5023df */ goto L_005023df;
L_005023ae:;
  /* 005023ae test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005023b0 jne 0x50239b */ if (!ZF_) goto L_0050239b;
  /* 005023b2 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005023b5 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005023b8 jb 0x5023ca */ if (CF_) goto L_005023ca;
  /* 005023ba mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005023bd mov word ptr [eax], bx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 005023c0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005023c1 mov eax, esi */ { eax = (u32)(esi); }
  /* 005023c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005023c4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005023c6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005023c7 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005023ca:;
  /* 005023ca lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005023cd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005023ce mov word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x0u); }
  /* 005023d3 mov eax, esi */ { eax = (u32)(esi); }
  /* 005023d5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005023d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005023d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005023d9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005023dc:;
  /* 005023dc lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
L_005023df:;
  /* 005023df cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005023e2 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005023e5 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 005023e8 jb 0x5023ee */ if (CF_) goto L_005023ee;
  /* 005023ea mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005023ec jmp 0x5023f0 */ goto L_005023f0;
L_005023ee:;
  /* 005023ee mov ecx, edi */ { ecx = (u32)(edi); }
L_005023f0:;
  /* 005023f0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005023f3 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 005023f6 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005023f8 shl edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005023fa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005023fb mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005023fe lea edx, [edx + eax*2] */ edx = (u32)((u32)(edx + eax * 2u));
  /* 00502401 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00502402 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00502405 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00502407 lea eax, [ecx + eax*2] */ eax = (u32)((u32)(ecx + eax * 2u));
  /* 0050240a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050240b call 0x5fe998 */ esp -= 4; M32(esp) = 0x502410u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x50240bu); RETCHK(0x502410u, 0x50240bu); LOADALL;
  /* 00502410 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00502413 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502416 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502419 jb 0x50241d */ if (CF_) goto L_0050241d;
  /* 0050241b mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
L_0050241d:;
  /* 0050241d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00502420 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00502423 lea edx, [edi + ecx*2] */ edx = (u32)((u32)(edi + ecx * 2u));
  /* 00502426 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00502429 mov edi, edx */ { edi = (u32)(edx); }
  /* 0050242b mov dx, ax */ { edx = (edx & 0xffff0000u) | ((u32)((eax & 0xffffu)) & 0xffffu); }
  /* 0050242e shl edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00502431 mov dx, ax */ { edx = (edx & 0xffff0000u) | ((u32)((eax & 0xffffu)) & 0xffffu); }
  /* 00502434 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00502436 mov eax, edx */ { eax = (u32)(edx); }
  /* 00502438 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0050243a adc ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 0050243c rep stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; while (ecx) { M16(edi) = (u16)(eax & 0xffffu); edi += st_; ecx--; } }
  /* 0050243f cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502443 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00502446 jb 0x50245b */ if (CF_) goto L_0050245b;
  /* 00502448 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050244b mov word ptr [eax + ebx*2], 0 */ { const u32 m_ = (u32)(eax + ebx * 2u); M16(m_) = (u16)(0x0u); }
  /* 00502451 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00502452 mov eax, esi */ { eax = (u32)(esi); }
  /* 00502454 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502455 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502457 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502458 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0050245b:;
  /* 0050245b lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0050245e mov word ptr [eax + ebx*2], 0 */ { const u32 m_ = (u32)(eax + ebx * 2u); M16(m_) = (u16)(0x0u); }
L_00502464:;
  /* 00502464 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00502465:;
  /* 00502465 mov eax, esi */ { eax = (u32)(esi); }
  /* 00502467 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502468 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050246a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050246b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00502470(CPU *c) {
  NATIVE_HOOK(0x502470u) REGS; LOADALL;
L_00502470:;
  /* 00502470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502473 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502474 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00502475 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00502478 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502479 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050247b cmp dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050247e jae 0x502487 */ if (!CF_) goto L_00502487;
  /* 00502480 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00502482 call 0x60166e */ esp -= 4; M32(esp) = 0x502487u; SAVEALL; F_0060166e(c); ABI_CHECK(0x60166eu, 0x502482u); RETCHK(0x502487u, 0x502482u); LOADALL;
L_00502487:;
  /* 00502487 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0050248a sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050248c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050248e jae 0x502492 */ if (!CF_) goto L_00502492;
  /* 00502490 mov edi, eax */ { edi = (u32)(eax); }
L_00502492:;
  /* 00502492 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502494 jbe 0x5024ec */ if ((CF_|ZF_)) goto L_005024ec;
  /* 00502496 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 00502499 cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050249c lea ebx, [esi + 4] */ ebx = (u32)((u32)(esi + 0x4u));
  /* 0050249f jb 0x5024a5 */ if (CF_) goto L_005024a5;
  /* 005024a1 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 005024a3 jmp 0x5024a7 */ goto L_005024a7;
L_005024a5:;
  /* 005024a5 mov ecx, ebx */ { ecx = (u32)(ebx); }
L_005024a7:;
  /* 005024a7 cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005024aa jb 0x5024b3 */ if (CF_) goto L_005024b3;
  /* 005024ac mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005024ae mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005024b1 jmp 0x5024b6 */ goto L_005024b6;
L_005024b3:;
  /* 005024b3 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
L_005024b6:;
  /* 005024b6 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005024b8 shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005024ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005024bb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005024be lea edx, [eax + edi] */ edx = (u32)((u32)(eax + edi));
  /* 005024c1 lea ecx, [ecx + edx*2] */ ecx = (u32)((u32)(ecx + edx * 2u));
  /* 005024c4 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005024c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005024c8 lea eax, [edx + eax*2] */ eax = (u32)((u32)(edx + eax * 2u));
  /* 005024cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005024cc call 0x5fe998 */ esp -= 4; M32(esp) = 0x5024d1u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x5024ccu); RETCHK(0x5024d1u, 0x5024ccu); LOADALL;
  /* 005024d1 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005024d4 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005024d7 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005024d9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005024dc cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005024df mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005024e2 jb 0x5024e6 */ if (CF_) goto L_005024e6;
  /* 005024e4 mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
L_005024e6:;
  /* 005024e6 mov word ptr [ebx + eax*2], 0 */ { const u32 m_ = (u32)(ebx + eax * 2u); M16(m_) = (u16)(0x0u); }
L_005024ec:;
  /* 005024ec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005024ed mov eax, esi */ { eax = (u32)(esi); }
  /* 005024ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005024f0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005024f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005024f3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00502500(CPU *c) {
  NATIVE_HOOK(0x502500u) REGS; LOADALL;
L_00502500:;
  /* 00502500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502503 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00502505 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050250a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00502510 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502511 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00502518 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502519 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050251a push 0x502580 */ { u32 v_ = 0x502580u; esp -= 4; M32(esp) = v_; }
  /* 0050251f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502522 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00502524 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00502526 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00502529 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050252c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050252e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050252f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00502532 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00502539 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050253c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050253d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00502540 call 0x404140 */ esp -= 4; M32(esp) = 0x502545u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x502540u); RETCHK(0x502545u, 0x502540u); LOADALL;
  /* 00502545 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00502548 call 0x405c00 */ esp -= 4; M32(esp) = 0x50254du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x502548u); RETCHK(0x50254du, 0x502548u); LOADALL;
  /* 0050254d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050254f call 0x405c80 */ esp -= 4; M32(esp) = 0x502554u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50254fu); RETCHK(0x502554u, 0x50254fu); LOADALL;
  /* 00502554 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502558 jb 0x502566 */ if (CF_) goto L_00502566;
  /* 0050255a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050255d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050255e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x502563u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50255eu); RETCHK(0x502563u, 0x50255eu); LOADALL;
  /* 00502563 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502566:;
  /* 00502566 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00502569 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050256b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00502572 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00502573 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502575 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502576 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00502580(CPU *c) {
  NATIVE_HOOK(0x502580u) REGS; LOADALL;
L_00502580:;
  /* 00502580 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502581 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502583 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00502585 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050258a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00502590 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502591 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00502598 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502599 push 0x368 */ { u32 v_ = 0x368u; esp -= 4; M32(esp) = v_; }
  /* 0050259e call 0x5fe934 */ esp -= 4; M32(esp) = 0x5025a3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50259eu); RETCHK(0x5025a3u, 0x50259eu); LOADALL;
  /* 005025a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005025a6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005025a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005025ab mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005025b2 je 0x5025ca */ if (ZF_) goto L_005025ca;
  /* 005025b4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005025b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005025b7 call 0x500d10 */ esp -= 4; M32(esp) = 0x5025bcu; SAVEALL; F_00500d10(c); ABI_CHECK(0x500d10u, 0x5025b7u); RETCHK(0x5025bcu, 0x5025b7u); LOADALL;
  /* 005025bc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005025bf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005025c6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005025c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005025c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005025ca:;
  /* 005025ca mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005025cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005025cf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005025d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005025d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005025d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005025e0(CPU *c) {
  NATIVE_HOOK(0x5025e0u) REGS; LOADALL;
L_005025e0:;
  /* 005025e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005025e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005025e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005025e4 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005025e6 mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 005025e9 cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005025ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005025ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005025ee mov edi, eax */ { edi = (u32)(eax); }
  /* 005025f0 jb 0x5025f7 */ if (CF_) goto L_005025f7;
  /* 005025f2 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005025f5 jmp 0x5025fa */ goto L_005025fa;
L_005025f7:;
  /* 005025f7 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
L_005025fa:;
  /* 005025fa cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005025fc jb 0x502634 */ if (CF_) goto L_00502634;
  /* 005025fe cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502601 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 00502604 jb 0x50260a */ if (CF_) goto L_0050260a;
  /* 00502606 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00502608 jmp 0x50260c */ goto L_0050260c;
L_0050260a:;
  /* 0050260a mov ecx, eax */ { ecx = (u32)(eax); }
L_0050260c:;
  /* 0050260c mov esi, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); esi = (u32)(M32(m_)); }
  /* 0050260f lea ecx, [ecx + esi*2] */ ecx = (u32)((u32)(ecx + esi * 2u));
  /* 00502612 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502614 jbe 0x502634 */ if ((CF_|ZF_)) goto L_00502634;
  /* 00502616 cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502619 jb 0x50261d */ if (CF_) goto L_0050261d;
  /* 0050261b mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_0050261d:;
  /* 0050261d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00502620 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00502622 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00502623 sar edi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00502625 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502626 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00502628 call 0x502820 */ esp -= 4; M32(esp) = 0x50262du; SAVEALL; F_00502820(c); ABI_CHECK(0x502820u, 0x502628u); RETCHK(0x50262du, 0x502628u); LOADALL;
  /* 0050262d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050262e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050262f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00502630 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502631 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00502634:;
  /* 00502634 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00502637 cmp esi, 0x7ffffffe */ { u32 a_ = esi, b_ = 0x7ffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050263d jbe 0x502646 */ if ((CF_|ZF_)) goto L_00502646;
  /* 0050263f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00502641 call 0x6016ae */ esp -= 4; M32(esp) = 0x502646u; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x502641u); RETCHK(0x502646u, 0x502641u); LOADALL;
L_00502646:;
  /* 00502646 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 00502649 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050264b jae 0x502667 */ if (!CF_) goto L_00502667;
  /* 0050264d mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 00502650 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502651 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502652 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00502653 call 0x5026e0 */ esp -= 4; M32(esp) = 0x502658u; SAVEALL; F_005026e0(c); ABI_CHECK(0x5026e0u, 0x502653u); RETCHK(0x502658u, 0x502653u); LOADALL;
  /* 00502658 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_0050265a:;
  /* 0050265a jbe 0x5026d4 */ if ((CF_|ZF_)) goto L_005026d4;
  /* 0050265c cmp dword ptr [ebx + 0x18], 8 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502660 jb 0x502693 */ if (CF_) goto L_00502693;
  /* 00502662 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00502665 jmp 0x502696 */ goto L_00502696;
L_00502667:;
  /* 00502667 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502669 jne 0x50265a */ if (!ZF_) goto L_0050265a;
  /* 0050266b cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050266e mov dword ptr [ebx + 0x14], esi */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(esi); }
  /* 00502671 jb 0x502682 */ if (CF_) goto L_00502682;
  /* 00502673 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00502676 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502677 mov word ptr [eax], si */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 0050267a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050267b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050267d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050267e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050267f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00502682:;
  /* 00502682 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 00502685 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502686 mov word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x0u); }
  /* 0050268b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050268c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050268e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050268f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502690 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00502693:;
  /* 00502693 lea edx, [ebx + 4] */ edx = (u32)((u32)(ebx + 0x4u));
L_00502696:;
  /* 00502696 lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 00502699 mov esi, edi */ { esi = (u32)(edi); }
  /* 0050269b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050269d mov edi, edx */ { edi = (u32)(edx); }
  /* 0050269f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005026a1 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005026a4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005026a6 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005026a8 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005026ab rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005026ad mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005026b0 mov dword ptr [ebx + 0x14], ecx */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005026b3 cmp dword ptr [ebx + 0x18], 8 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005026b7 jb 0x5026cb */ if (CF_) goto L_005026cb;
  /* 005026b9 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005026bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005026bd mov word ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M16(m_) = (u16)(0x0u); }
  /* 005026c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005026c4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005026c6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005026c7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005026c8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005026cb:;
  /* 005026cb lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 005026ce mov word ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M16(m_) = (u16)(0x0u); }
L_005026d4:;
  /* 005026d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005026d5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005026d6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005026d8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005026d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005026da ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005026e0(CPU *c) {
  NATIVE_HOOK(0x5026e0u) REGS; LOADALL;
L_005026e0:;
  /* 005026e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005026e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005026e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005026e5 push 0x61b520 */ { u32 v_ = 0x61b520u; esp -= 4; M32(esp) = v_; }
  /* 005026ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005026f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005026f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005026f8 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005026fb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005026fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005026ff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502700 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00502703 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00502705 or ebx, 7 */ { u32 a_ = ebx, b_ = 0x7u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00502708 cmp ebx, 0x7ffffffe */ { u32 a_ = ebx, b_ = 0x7ffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050270e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050270f mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00502712 jbe 0x502718 */ if ((CF_|ZF_)) goto L_00502718;
  /* 00502714 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00502716 jmp 0x50273a */ goto L_0050273a;
L_00502718:;
  /* 00502718 mov edi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edi = (u32)(M32(m_)); }
  /* 0050271b mov eax, 0xaaaaaaab */ { eax = (u32)(0xaaaaaaabu); }
  /* 00502720 mul ebx */ { u64 p_ = (u64)eax * ebx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00502722 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00502724 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00502726 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00502728 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050272a jae 0x50273a */ if (!CF_) goto L_0050273a;
  /* 0050272c mov eax, 0x7ffffffe */ { eax = (u32)(0x7ffffffeu); }
  /* 00502731 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00502733 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502735 ja 0x50273a */ if (!(CF_|ZF_)) goto L_0050273a;
  /* 00502737 lea ebx, [ecx + edi] */ ebx = (u32)((u32)(ecx + edi));
L_0050273a:;
  /* 0050273a lea ecx, [ebx + ebx + 2] */ ecx = (u32)((u32)(ebx + ebx + 0x2u));
  /* 0050273e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050273f mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00502746 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50274bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x502746u); RETCHK(0x50274bu, 0x502746u); LOADALL;
  /* 0050274b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050274e mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00502751 jmp 0x50277c */ goto L_0050277c;
L_0050277c:;
  /* 0050277c mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0050277f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502781 jbe 0x5027a8 */ if ((CF_|ZF_)) goto L_005027a8;
  /* 00502783 cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502787 jb 0x50278e */ if (CF_) goto L_0050278e;
  /* 00502789 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0050278c jmp 0x502791 */ goto L_00502791;
L_0050278e:;
  /* 0050278e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00502791:;
  /* 00502791 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00502794 lea ecx, [edx + edx] */ ecx = (u32)((u32)(edx + edx));
  /* 00502797 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00502799 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0050279c rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050279e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005027a0 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005027a3 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005027a5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_005027a8:;
  /* 005027a8 cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005027ac jb 0x5027bd */ if (CF_) goto L_005027bd;
  /* 005027ae mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005027b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005027b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5027b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5027b2u); RETCHK(0x5027b7u, 0x5027b2u); LOADALL;
  /* 005027b7 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005027ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005027bd:;
  /* 005027bd cmp ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005027c0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005027c3 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005027c6 mov word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x0u); }
  /* 005027cb mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005027cd mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 005027d0 mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 005027d3 jb 0x5027d7 */ if (CF_) goto L_005027d7;
  /* 005027d5 mov eax, ecx */ { eax = (u32)(ecx); }
L_005027d7:;
  /* 005027d7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005027da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005027db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005027dc mov word ptr [eax + edx*2], 0 */ { const u32 m_ = (u32)(eax + edx * 2u); M16(m_) = (u16)(0x0u); }
  /* 005027e2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005027e9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005027ea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005027ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005027ed ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00502753(CPU *c) {
  NATIVE_HOOK(0x502753u) REGS; LOADALL;
L_00502753:;
  /* 00502753 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00502756 lea edx, [eax + eax + 2] */ edx = (u32)((u32)(eax + eax + 0x2u));
  /* 0050275a mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050275d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050275e mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00502761 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00502765 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50276au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x502765u); RETCHK(0x50276au, 0x502765u); LOADALL;
  /* 0050276a mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0050276d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502770 mov eax, 0x502776 */ { eax = (u32)(0x502776u); }
  /* 00502775 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00502776(CPU *c) {
  NATIVE_HOOK(0x502776u) REGS; LOADALL;
L_00502776:;
  /* 00502776 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
  /* 00502779 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050277c mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0050277f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502781 jbe 0x5027a8 */ if ((CF_|ZF_)) goto L_005027a8;
  /* 00502783 cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502787 jb 0x50278e */ if (CF_) goto L_0050278e;
  /* 00502789 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0050278c jmp 0x502791 */ goto L_00502791;
L_0050278e:;
  /* 0050278e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00502791:;
  /* 00502791 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00502794 lea ecx, [edx + edx] */ ecx = (u32)((u32)(edx + edx));
  /* 00502797 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00502799 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0050279c rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0050279e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005027a0 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005027a3 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005027a5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_005027a8:;
  /* 005027a8 cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005027ac jb 0x5027bd */ if (CF_) goto L_005027bd;
  /* 005027ae mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005027b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005027b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5027b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5027b2u); RETCHK(0x5027b7u, 0x5027b2u); LOADALL;
  /* 005027b7 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005027ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005027bd:;
  /* 005027bd cmp ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005027c0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005027c3 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005027c6 mov word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x0u); }
  /* 005027cb mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005027cd mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 005027d0 mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 005027d3 jb 0x5027d7 */ if (CF_) goto L_005027d7;
  /* 005027d5 mov eax, ecx */ { eax = (u32)(ecx); }
L_005027d7:;
  /* 005027d7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005027da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005027db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005027dc mov word ptr [eax + edx*2], 0 */ { const u32 m_ = (u32)(eax + edx * 2u); M16(m_) = (u16)(0x0u); }
  /* 005027e2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005027e9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005027ea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005027ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005027ed ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005027f0(CPU *c) {
  NATIVE_HOOK(0x5027f0u) REGS; LOADALL;
L_005027f0:;
  /* 005027f0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005027f3 cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005027f7 jb 0x502805 */ if (CF_) goto L_00502805;
  /* 005027f9 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005027fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005027fd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x502802u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5027fdu); RETCHK(0x502802u, 0x5027fdu); LOADALL;
  /* 00502802 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502805:;
  /* 00502805 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00502807 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502808 mov dword ptr [esi + 0x18], 7 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x7u); }
  /* 0050280f mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 00502812 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502813 mov word ptr [esi + 4], ax */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00502817 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0050281c int3 */ TRAP(0x50281cu, "int3");
}

void F_00502820(CPU *c) {
  NATIVE_HOOK(0x502820u) REGS; LOADALL;
L_00502820:;
  /* 00502820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502823 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502824 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502825 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502826 mov edi, eax */ { edi = (u32)(eax); }
  /* 00502828 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050282b cmp dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050282e jae 0x502837 */ if (!CF_) goto L_00502837;
  /* 00502830 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00502832 call 0x60166e */ esp -= 4; M32(esp) = 0x502837u; SAVEALL; F_0060166e(c); ABI_CHECK(0x60166eu, 0x502832u); RETCHK(0x502837u, 0x502832u); LOADALL;
L_00502837:;
  /* 00502837 mov esi, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); esi = (u32)(M32(m_)); }
  /* 0050283a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050283d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00502840 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00502842 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502844 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00502847 jae 0x50284e */ if (!CF_) goto L_0050284e;
  /* 00502849 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050284c mov esi, eax */ { esi = (u32)(eax); }
L_0050284e:;
  /* 0050284e cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502850 jne 0x502873 */ if (!ZF_) goto L_00502873;
  /* 00502852 add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00502854 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502855 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00502858 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0050285a call 0x502470 */ esp -= 4; M32(esp) = 0x50285fu; SAVEALL; F_00502470(c); ABI_CHECK(0x502470u, 0x50285au); RETCHK(0x50285fu, 0x50285au); LOADALL;
  /* 0050285f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00502862 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00502864 call 0x502470 */ esp -= 4; M32(esp) = 0x502869u; SAVEALL; F_00502470(c); ABI_CHECK(0x502470u, 0x502864u); RETCHK(0x502869u, 0x502864u); LOADALL;
  /* 00502869 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050286a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050286c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050286d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050286f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502870 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00502873:;
  /* 00502873 cmp esi, 0x7ffffffe */ { u32 a_ = esi, b_ = 0x7ffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502879 jbe 0x502882 */ if ((CF_|ZF_)) goto L_00502882;
  /* 0050287b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050287d call 0x6016ae */ esp -= 4; M32(esp) = 0x502882u; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x50287du); RETCHK(0x502882u, 0x50287du); LOADALL;
L_00502882:;
  /* 00502882 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 00502885 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502887 jae 0x5028ad */ if (!CF_) goto L_005028ad;
  /* 00502889 mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0050288c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050288d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050288e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050288f call 0x5026e0 */ esp -= 4; M32(esp) = 0x502894u; SAVEALL; F_005026e0(c); ABI_CHECK(0x5026e0u, 0x50288fu); RETCHK(0x502894u, 0x50288fu); LOADALL;
  /* 00502894 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_00502896:;
  /* 00502896 jbe 0x50292e */ if ((CF_|ZF_)) goto L_0050292e;
  /* 0050289c mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0050289f mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 005028a4 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005028a6 jb 0x5028db */ if (CF_) goto L_005028db;
  /* 005028a8 mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 005028ab jmp 0x5028de */ goto L_005028de;
L_005028ad:;
  /* 005028ad test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005028af jne 0x502896 */ if (!ZF_) goto L_00502896;
  /* 005028b1 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005028b4 mov dword ptr [ebx + 0x14], esi */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(esi); }
  /* 005028b7 jb 0x5028c9 */ if (CF_) goto L_005028c9;
  /* 005028b9 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005028bc mov word ptr [eax], si */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 005028bf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005028c0 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005028c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005028c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005028c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005028c6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005028c9:;
  /* 005028c9 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 005028cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005028cd mov word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x0u); }
  /* 005028d2 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005028d4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005028d5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005028d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005028d8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005028db:;
  /* 005028db add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005028de:;
  /* 005028de cmp dword ptr [ebx + 0x18], eax */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005028e1 jb 0x5028e8 */ if (CF_) goto L_005028e8;
  /* 005028e3 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005028e6 jmp 0x5028eb */ goto L_005028eb;
L_005028e8:;
  /* 005028e8 lea edx, [ebx + 4] */ edx = (u32)((u32)(ebx + 0x4u));
L_005028eb:;
  /* 005028eb lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 005028ee mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005028f1 lea esi, [edi + esi*2] */ esi = (u32)((u32)(edi + esi * 2u));
  /* 005028f4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005028f6 mov edi, edx */ { edi = (u32)(edx); }
  /* 005028f8 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005028fa shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005028fd rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005028ff mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00502901 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00502904 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00502906 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00502909 mov dword ptr [ebx + 0x14], ecx */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0050290c cmp dword ptr [ebx + 0x18], 8 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502910 jb 0x502925 */ if (CF_) goto L_00502925;
  /* 00502912 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00502915 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502916 mov word ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M16(m_) = (u16)(0x0u); }
  /* 0050291c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050291e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050291f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502921 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502922 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00502925:;
  /* 00502925 lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 00502928 mov word ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M16(m_) = (u16)(0x0u); }
L_0050292e:;
  /* 0050292e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050292f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00502931 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502932 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502934 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502935 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00502940(CPU *c) {
  NATIVE_HOOK(0x502940u) REGS; LOADALL;
L_00502940:;
  /* 00502940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502943 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00502944 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502945 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00502947 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00502949 cmp dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050294c jae 0x502953 */ if (!CF_) goto L_00502953;
  /* 0050294e call 0x60166e */ esp -= 4; M32(esp) = 0x502953u; SAVEALL; F_0060166e(c); ABI_CHECK(0x60166eu, 0x50294eu); RETCHK(0x502953u, 0x50294eu); LOADALL;
L_00502953:;
  /* 00502953 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00502956 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00502958 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050295a jae 0x50295e */ if (!CF_) goto L_0050295e;
  /* 0050295c mov ebx, eax */ { ebx = (u32)(eax); }
L_0050295e:;
  /* 0050295e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502960 je 0x5029a4 */ if (ZF_) goto L_005029a4;
  /* 00502962 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00502965 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502967 jae 0x50296b */ if (!CF_) goto L_0050296b;
  /* 00502969 mov edx, ebx */ { edx = (u32)(ebx); }
L_0050296b:;
  /* 0050296b cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050296f jb 0x502976 */ if (CF_) goto L_00502976;
  /* 00502971 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00502974 jmp 0x502979 */ goto L_00502979;
L_00502976:;
  /* 00502976 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
L_00502979:;
  /* 00502979 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050297b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050297e lea eax, [eax + edi*2] */ eax = (u32)((u32)(eax + edi * 2u));
  /* 00502981 jbe 0x5029a4 */ if ((CF_|ZF_)) goto L_005029a4;
L_00502983:;
  /* 00502983 mov si, word ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00502986 cmp si, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (esi & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00502989 jne 0x502996 */ if (!ZF_) goto L_00502996;
  /* 0050298b add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050298e add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00502991 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00502992 jne 0x502983 */ if (!ZF_) goto L_00502983;
  /* 00502994 jmp 0x5029a4 */ goto L_005029a4;
L_00502996:;
  /* 00502996 movzx eax, word ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M16(m_)); }
  /* 00502999 cmp ax, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0050299c sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0050299e and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005029a1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005029a2 jne 0x5029bd */ if (!ZF_) goto L_005029bd;
L_005029a4:;
  /* 005029a4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005029a7 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005029a9 jae 0x5029b4 */ if (!CF_) goto L_005029b4;
  /* 005029ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005029ac or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005029af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005029b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005029b1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005029b4:;
  /* 005029b4 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005029b6 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005029b8 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005029bb mov eax, ecx */ { eax = (u32)(ecx); }
L_005029bd:;
  /* 005029bd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005029be pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005029bf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005029c0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}
