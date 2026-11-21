#include "funcs.h"

void F_00589f00(CPU *c) {
  NATIVE_HOOK(0x589f00u) REGS; LOADALL;
L_00589f00:;
  /* 00589f00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00589f01 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00589f05 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00589f06 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00589f07 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00589f08 cmp eax, 0xe */ { u32 a_ = eax, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00589f0b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00589f0c ja 0x58a831 */ if (!(CF_|ZF_)) goto L_0058a831;
  /* 00589f12 jmp dword ptr [eax*4 + 0x58a844] */ { const u32 m_ = (u32)(eax * 4u + 0x58a844u); u32 t_ = M32(m_); switch (t_) { case 0x589f19u: goto L_00589f19; case 0x589f5eu: goto L_00589f5e; case 0x589fb3u: goto L_00589fb3; case 0x58a01bu: goto L_0058a01b; case 0x58a08bu: goto L_0058a08b; case 0x58a153u: goto L_0058a153; case 0x58a1f2u: goto L_0058a1f2; case 0x58a26au: goto L_0058a26a; case 0x58a310u: goto L_0058a310; case 0x58a3d8u: goto L_0058a3d8; case 0x58a479u: goto L_0058a479; case 0x58a54bu: goto L_0058a54b; case 0x58a5ecu: goto L_0058a5ec; case 0x58a6beu: goto L_0058a6be; case 0x58a768u: goto L_0058a768; default: SAVEALL; call_ind(c, t_); return; } }
L_00589f19:;
  /* 00589f19 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 00589f1d mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00589f21 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00589f23 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 00589f29 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 00589f2d mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00589f31 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_00589f35:;
  /* 00589f35 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00589f37 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00589f39 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00589f3c add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00589f3f fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00589f43 fadd dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00589f46 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00589f48 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00589f4a dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00589f4b jne 0x589f35 */ if (!ZF_) goto L_00589f35;
  /* 00589f4d mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00589f51 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00589f52 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00589f53 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00589f54 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 00589f5b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00589f5c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00589f5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00589f5e:;
  /* 00589f5e mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 00589f62 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00589f66 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00589f68 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 00589f6e mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 00589f72 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00589f76 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_00589f7a:;
  /* 00589f7a fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00589f7c fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00589f7e add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00589f81 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00589f84 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00589f88 fadd dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00589f8b fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00589f8d fld dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00589f90 fsub dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00589f93 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00589f97 fadd dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00589f9a fstp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00589f9d add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00589f9f dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00589fa0 jne 0x589f7a */ if (!ZF_) goto L_00589f7a;
  /* 00589fa2 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00589fa6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00589fa7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00589fa8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00589fa9 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 00589fb0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00589fb1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00589fb2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00589fb3:;
  /* 00589fb3 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 00589fb7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00589fb9 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 00589fbf mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00589fc3 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 00589fc7 mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 00589fcb lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 00589fce mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_00589fd2:;
  /* 00589fd2 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 00589fd4 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00589fd6 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00589fd9 add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00589fdc fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00589fe0 fadd dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00589fe3 fstp dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00589fe6 fld dword ptr [edx - 8] */ { const u32 m_ = (u32)(edx + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00589fe9 fsub dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00589fec fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00589ff0 fadd dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00589ff3 fstp dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00589ff6 fld dword ptr [edx - 4] */ { const u32 m_ = (u32)(edx + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00589ff9 fsub dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00589ffc fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a000 fadd dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a003 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a005 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a007 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a008 jne 0x589fd2 */ if (!ZF_) goto L_00589fd2;
  /* 0058a00a mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a00e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a00f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a010 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a011 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a018 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a019 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a01a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a01b:;
  /* 0058a01b mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0058a01f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a021 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a027 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0058a02b mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 0058a02f mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 0058a033 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0058a037 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a03a mov ebx, 0x3f800000 */ { ebx = (u32)(0x3f800000u); }
L_0058a03f:;
  /* 0058a03f fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058a041 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a043 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a046 add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058a049 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a04d fadd dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a050 fstp dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a053 fld dword ptr [edx - 8] */ { const u32 m_ = (u32)(edx + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058a056 fsub dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a059 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a05d fadd dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a060 fstp dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a063 fld dword ptr [edx - 4] */ { const u32 m_ = (u32)(edx + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058a066 fsub dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a069 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a06d fadd dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a070 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0058a073 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a075 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a077 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a078 jne 0x58a03f */ if (!ZF_) goto L_0058a03f;
  /* 0058a07a mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a07e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a07f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a080 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a081 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a088 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a089 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a08a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a08b:;
  /* 0058a08b fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0058a091 fsub dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a095 mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0058a099 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a09b fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a0a1 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a0a5 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a0a9 fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a0af fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a0b3 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a0b9 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0058a0bd mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 0058a0c1 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058a0c5 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0058a0c9 lea eax, [edx + 1] */ eax = (u32)((u32)(edx + 0x1u));
  /* 0058a0cc mov dl, 0xff */ { edx = (edx & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
L_0058a0ce:;
  /* 0058a0ce fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a0d2 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a0d4 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a0d8 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a0da faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a0dc fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a0e0 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a0e4 fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a0e8 mov bl, byte ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a0ec fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a0f0 mov byte ptr [eax + 1], bl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058a0f3 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a0f6 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a0fa fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a0fd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a0ff fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a103 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a107 fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a10b mov bl, byte ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a10f fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a113 mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058a115 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a118 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a11c fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a11f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a121 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a125 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a129 fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a12d mov bl, byte ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a131 mov byte ptr [eax + 2], dl */ { const u32 m_ = (u32)(eax + 0x2u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0058a134 mov byte ptr [eax - 1], bl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058a137 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a13a add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058a13d add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a13f dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a140 jne 0x58a0ce */ if (!ZF_) goto L_0058a0ce;
  /* 0058a142 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a146 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a147 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a148 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a149 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a150 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a151 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a152 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a153:;
  /* 0058a153 mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0058a157 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a159 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a15f mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0058a163 mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 0058a167 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058a16b mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 0058a170 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 0058a173 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_0058a177:;
  /* 0058a177 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0058a179 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a17b fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a17f fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a181 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a185 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a189 fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a18d mov dl, byte ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a191 mov byte ptr [ecx - 2], dl */ { const u32 m_ = (u32)(ecx + 0xfffffffeu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0058a194 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058a197 fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a19a fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a19e fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a1a1 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a1a5 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a1a9 fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a1ad mov dl, byte ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a1b1 mov byte ptr [ecx - 1], dl */ { const u32 m_ = (u32)(ecx + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0058a1b4 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058a1b7 fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a1ba fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a1be fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a1c1 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a1c5 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a1c9 fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a1cd mov dl, byte ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a1d1 mov byte ptr [ecx + 1], bl */ { const u32 m_ = (u32)(ecx + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058a1d4 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0058a1d6 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a1d9 add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058a1dc add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a1de dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a1df jne 0x58a177 */ if (!ZF_) goto L_0058a177;
  /* 0058a1e1 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a1e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a1e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a1e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a1e8 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a1ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a1f0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a1f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a1f2:;
  /* 0058a1f2 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0058a1f6 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0058a1fa test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a1fc jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a202 mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 0058a206 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0058a20a mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_0058a20e:;
  /* 0058a20e fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058a210 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a212 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a216 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a218 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a21c fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a220 fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a224 mov bx, word ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a229 mov word ptr [edx], bx */ { const u32 m_ = (u32)(edx); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058a22c fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058a22f fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a232 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a236 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a239 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a23d fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a241 fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a245 mov bx, word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a24a add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a24d mov word ptr [edx + 2], bx */ { const u32 m_ = (u32)(edx + 0x2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058a251 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a254 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058a256 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a257 jne 0x58a20e */ if (!ZF_) goto L_0058a20e;
  /* 0058a259 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a25d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a25e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a25f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a260 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a267 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a268 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a269 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a26a:;
  /* 0058a26a mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0058a26e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a270 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a276 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0058a27a mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 0058a27e mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 0058a282 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 0058a287 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 0058a28a mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_0058a28e:;
  /* 0058a28e fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058a290 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a292 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a296 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a298 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a29c fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a2a0 fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a2a4 mov bp, word ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a2a9 mov word ptr [ecx - 4], bp */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 0058a2ad fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058a2b0 fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a2b3 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a2b7 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a2ba fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a2be fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a2c2 fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a2c6 mov bp, word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a2cb mov word ptr [ecx - 2], bp */ { const u32 m_ = (u32)(ecx + 0xfffffffeu); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 0058a2cf fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058a2d2 fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a2d5 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a2d9 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a2dc fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a2e0 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a2e4 fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a2e8 mov bp, word ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a2ed mov word ptr [ecx + 2], bx */ { const u32 m_ = (u32)(ecx + 0x2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058a2f1 mov word ptr [ecx], bp */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 0058a2f4 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a2f7 add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058a2fa add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a2fc dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a2fd jne 0x58a28e */ if (!ZF_) goto L_0058a28e;
  /* 0058a2ff mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a303 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a304 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a305 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a306 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a30d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a30e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a30f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a310:;
  /* 0058a310 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0058a316 fsub dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a31a mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0058a31e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a320 fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a326 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a32a fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a32e fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a334 fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a338 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a33e mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0058a342 mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 0058a346 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058a34a mov dl, 0xff */ { edx = (edx & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0058a34c lea eax, [ecx + 2] */ eax = (u32)((u32)(ecx + 0x2u));
  /* 0058a34f mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
L_0058a353:;
  /* 0058a353 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a357 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a359 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a35d fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a35f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a361 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a365 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a369 fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a36d mov bl, byte ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a371 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a375 mov byte ptr [eax - 2], bl */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058a378 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a37b fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a37f fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a382 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a384 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a388 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a38c fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a390 mov bl, byte ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a394 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a398 mov byte ptr [eax - 1], bl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058a39b fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a39e fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a3a2 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a3a5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a3a7 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a3ab fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a3af fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a3b3 mov bl, byte ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a3b7 mov byte ptr [eax + 1], dl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0058a3ba mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058a3bc add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a3bf add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058a3c2 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a3c4 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a3c5 jne 0x58a353 */ if (!ZF_) goto L_0058a353;
  /* 0058a3c7 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a3cb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a3cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a3cd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a3ce mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a3d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a3d6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a3d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a3d8:;
  /* 0058a3d8 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0058a3de fsub dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a3e2 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0058a3e6 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0058a3ea test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a3ec fmul dword ptr [0x62ef34] */ { const u32 m_ = (u32)(0x62ef34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a3f2 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a3f6 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a3fa fmul dword ptr [0x62ef34] */ { const u32 m_ = (u32)(0x62ef34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a400 fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a404 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a40a mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 0058a40e mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0058a412 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_0058a416:;
  /* 0058a416 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a41a fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a41c fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a420 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a422 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a424 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a428 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a42c fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a430 mov bx, word ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a435 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a439 mov word ptr [edx], bx */ { const u32 m_ = (u32)(edx); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058a43c fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a43f fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a443 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a446 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a448 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a44c fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a450 fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a454 mov bx, word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a459 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a45c mov word ptr [edx + 2], bx */ { const u32 m_ = (u32)(edx + 0x2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058a460 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a463 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058a465 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a466 jne 0x58a416 */ if (!ZF_) goto L_0058a416;
  /* 0058a468 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a46c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a46d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a46e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a46f mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a476 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a477 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a478 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a479:;
  /* 0058a479 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0058a47f fsub dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a483 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0058a487 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a489 fmul dword ptr [0x62ef34] */ { const u32 m_ = (u32)(0x62ef34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a48f fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a493 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a497 fmul dword ptr [0x62ef34] */ { const u32 m_ = (u32)(0x62ef34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a49d fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a4a1 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a4a7 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0058a4ab mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 0058a4af mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0058a4b3 mov ebx, 0x7fff */ { ebx = (u32)(0x7fffu); }
  /* 0058a4b8 lea eax, [edx + 4] */ eax = (u32)((u32)(edx + 0x4u));
  /* 0058a4bb mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
L_0058a4bf:;
  /* 0058a4bf fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a4c3 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a4c5 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a4c9 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a4cb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a4cd fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a4d1 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a4d5 fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a4d9 mov bp, word ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a4de fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a4e2 mov word ptr [eax - 4], bp */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 0058a4e6 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a4e9 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a4ed fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a4f0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a4f2 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a4f6 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a4fa fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a4fe mov bp, word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a503 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a507 mov word ptr [eax - 2], bp */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 0058a50b fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a50e fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a512 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a515 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a517 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a51b fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a51f fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a523 mov bp, word ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a528 mov word ptr [eax + 2], bx */ { const u32 m_ = (u32)(eax + 0x2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058a52c mov word ptr [eax], bp */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 0058a52f add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a532 add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058a535 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a537 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a538 jne 0x58a4bf */ if (!ZF_) goto L_0058a4bf;
  /* 0058a53a mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a53e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a53f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a540 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a541 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a548 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a549 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a54a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a54b:;
  /* 0058a54b fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0058a551 fsub dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a555 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0058a559 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0058a55d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a55f fmul dword ptr [0x6570a4] */ { const u32 m_ = (u32)(0x6570a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a565 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a569 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a56d fmul dword ptr [0x6570a4] */ { const u32 m_ = (u32)(0x6570a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a573 fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a577 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a57d mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 0058a581 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0058a585 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_0058a589:;
  /* 0058a589 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a58d fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a58f fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a593 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a595 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a597 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a59b fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a59f fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a5a3 mov bx, word ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a5a8 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a5ac mov word ptr [edx], bx */ { const u32 m_ = (u32)(edx); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058a5af fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a5b2 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a5b6 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a5b9 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a5bb fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a5bf fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a5c3 fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a5c7 mov bx, word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a5cc add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a5cf mov word ptr [edx + 2], bx */ { const u32 m_ = (u32)(edx + 0x2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058a5d3 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a5d6 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058a5d8 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a5d9 jne 0x58a589 */ if (!ZF_) goto L_0058a589;
  /* 0058a5db mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a5df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a5e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a5e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a5e2 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a5e9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a5ea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a5eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a5ec:;
  /* 0058a5ec fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0058a5f2 fsub dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a5f6 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0058a5fa test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a5fc fmul dword ptr [0x6570a4] */ { const u32 m_ = (u32)(0x6570a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a602 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a606 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a60a fmul dword ptr [0x6570a4] */ { const u32 m_ = (u32)(0x6570a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a610 fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a614 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a61a mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0058a61e mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 0058a622 mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 0058a626 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0058a62a add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a62d mov ebx, 0xffff */ { ebx = (u32)(0xffffu); }
L_0058a632:;
  /* 0058a632 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a636 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a638 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a63c fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a63e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a640 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a644 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a648 fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a64c mov bp, word ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a651 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a655 mov word ptr [eax - 4], bp */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 0058a659 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a65c fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a660 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a663 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a665 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a669 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a66d fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a671 mov bp, word ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a676 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a67a mov word ptr [eax - 2], bp */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 0058a67e fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a681 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a685 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a688 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a68a fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a68e fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a692 fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a696 mov bp, word ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (ebp & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058a69b mov word ptr [eax + 2], bx */ { const u32 m_ = (u32)(eax + 0x2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058a69f mov word ptr [eax], bp */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ebp & 0xffffu)); }
  /* 0058a6a2 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a6a5 add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058a6a8 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a6aa dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a6ab jne 0x58a632 */ if (!ZF_) goto L_0058a632;
  /* 0058a6ad mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a6b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a6b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a6b3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a6b4 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a6bb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a6bc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a6bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a6be:;
  /* 0058a6be mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0058a6c2 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0058a6c6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a6c8 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a6ce mov esi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); esi = (u32)(M32(m_)); }
  /* 0058a6d2 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0058a6d6 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_0058a6da:;
  /* 0058a6da fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058a6dc fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a6de fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a6e2 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a6e4 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a6e8 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a6ec fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a6f0 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058a6f3 fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a6f6 fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a6fa fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a6fd fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a701 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a705 fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a709 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058a70c fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a70f fmul dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a713 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058a716 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a71a fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a71e fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a722 mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 0058a726 mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 0058a72a and ebx, 0x3ff */ { u32 a_ = ebx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058a730 and ebp, 0x3ff */ { u32 a_ = ebp, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0058a736 shl ebx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0058a739 or ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058a73b mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 0058a73f shl ebx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0058a742 and ebp, 0x3ff */ { u32 a_ = ebp, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0058a748 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a74b or ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058a74d add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a750 mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 0058a752 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058a754 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a755 jne 0x58a6da */ if (!ZF_) goto L_0058a6da;
  /* 0058a757 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a75b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a75c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a75d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a75e mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a765 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a766 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a767 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a768:;
  /* 0058a768 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0058a76e fsub dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058a772 mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0058a776 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0058a77a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a77c fmul dword ptr [0x62ef2c] */ { const u32 m_ = (u32)(0x62ef2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a782 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a786 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a78a fmul dword ptr [0x62ef2c] */ { const u32 m_ = (u32)(0x62ef2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a790 fstp dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a794 jle 0x58a831 */ if ((ZF_|LT_)) goto L_0058a831;
  /* 0058a79a mov esi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); esi = (u32)(M32(m_)); }
  /* 0058a79e mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0058a7a2 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
L_0058a7a6:;
  /* 0058a7a6 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a7aa fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a7ac fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a7b0 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a7b2 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a7b4 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a7b8 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a7bc fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a7c0 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a7c4 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a7c7 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a7cb fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a7ce faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a7d0 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a7d4 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a7d8 fistp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a7dc fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058a7e0 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a7e3 fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058a7e7 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a7ea faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058a7ec fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a7f0 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058a7f4 fistp dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a7f8 mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 0058a7fc mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 0058a800 and ebx, 0x3ff */ { u32 a_ = ebx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058a806 and ebp, 0x3ff */ { u32 a_ = ebp, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0058a80c shl ebx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0058a80f or ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058a811 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 0058a815 shl ebx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0058a818 and ebp, 0x3ff */ { u32 a_ = ebp, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 0058a81e add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a821 or ebx, ebp */ { u32 a_ = ebx, b_ = ebp; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058a823 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a826 mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 0058a828 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058a82a dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a82b jne 0x58a7a6 */ if (!ZF_) goto L_0058a7a6;
L_0058a831:;
  /* 0058a831 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a835 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a836 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a837 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a838 mov eax, dword ptr [ecx*4 + 0x62eee8] */ { const u32 m_ = (u32)(ecx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a83f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a840 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058a841 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058a880(CPU *c) {
  NATIVE_HOOK(0x58a880u) REGS; LOADALL;
L_0058a880:;
  /* 0058a880 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058a881 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058a882 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 0058a886 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058a887 cmp ebp, 0xe */ { u32 a_ = ebp, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058a88a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058a88b ja 0x58ae2f */ if (!(CF_|ZF_)) goto L_0058ae2f;
  /* 0058a891 jmp dword ptr [ebp*4 + 0x58ae3c] */ { const u32 m_ = (u32)(ebp * 4u + 0x58ae3cu); u32 t_ = M32(m_); switch (t_) { case 0x58a898u: goto L_0058a898; case 0x58a8c8u: goto L_0058a8c8; case 0x58a920u: goto L_0058a920; case 0x58a960u: goto L_0058a960; case 0x58a9a8u: goto L_0058a9a8; case 0x58aa16u: goto L_0058aa16; case 0x58aa7bu: goto L_0058aa7b; case 0x58aad5u: goto L_0058aad5; case 0x58ab41u: goto L_0058ab41; case 0x58abafu: goto L_0058abaf; case 0x58ac15u: goto L_0058ac15; case 0x58ac8du: goto L_0058ac8d; case 0x58acf3u: goto L_0058acf3; case 0x58ad6bu: goto L_0058ad6b; case 0x58adcfu: goto L_0058adcf; default: SAVEALL; call_ind(c, t_); return; } }
L_0058a898:;
  /* 0058a898 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058a89c mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a8a0 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a8a2 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058a8a8 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058a8ac mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
L_0058a8b0:;
  /* 0058a8b0 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0058a8b2 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a8b5 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 0058a8b7 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a8b9 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a8ba jne 0x58a8b0 */ if (!ZF_) goto L_0058a8b0;
  /* 0058a8bc mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a8c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a8c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a8c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a8c6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a8c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a8c8:;
  /* 0058a8c8 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058a8cc cmp esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058a8cf jne 0x58a8ee */ if (!ZF_) goto L_0058a8ee;
  /* 0058a8d1 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0058a8d5 mov esi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 0058a8d9 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058a8dd lea ecx, [eax + eax] */ ecx = (u32)((u32)(eax + eax));
  /* 0058a8e0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0058a8e2 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a8e9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a8ea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a8eb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a8ec pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a8ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a8ee:;
  /* 0058a8ee mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058a8f2 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058a8f6 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a8f8 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058a8fe mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
L_0058a902:;
  /* 0058a902 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 0058a904 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a907 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 0058a909 mov edi, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0058a90c mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0058a90f add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a911 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a912 jne 0x58a902 */ if (!ZF_) goto L_0058a902;
  /* 0058a914 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a91b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a91c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a91d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a91e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a91f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a920:;
  /* 0058a920 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058a924 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a926 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058a92c mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a930 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058a934 lea eax, [ecx + 8] */ eax = (u32)((u32)(ecx + 0x8u));
  /* 0058a937 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
L_0058a93b:;
  /* 0058a93b mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 0058a93d add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a940 mov dword ptr [eax - 8], edi */ { const u32 m_ = (u32)(eax + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 0058a943 mov edi, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0058a946 mov dword ptr [eax - 4], edi */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0058a949 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 0058a94f add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a951 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a952 jne 0x58a93b */ if (!ZF_) goto L_0058a93b;
  /* 0058a954 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a95b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a95c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a95d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a95e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a95f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a960:;
  /* 0058a960 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058a964 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a966 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058a96c mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058a970 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058a974 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0058a978 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a97b mov edi, 0x3f800000 */ { edi = (u32)(0x3f800000u); }
L_0058a980:;
  /* 0058a980 mov ebx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (u32)(M32(m_)); }
  /* 0058a982 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058a985 mov dword ptr [eax - 8], ebx */ { const u32 m_ = (u32)(eax + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 0058a988 mov ebx, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0058a98b mov dword ptr [eax - 4], ebx */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0058a98e mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 0058a994 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0058a997 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058a999 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058a99a jne 0x58a980 */ if (!ZF_) goto L_0058a980;
  /* 0058a99c mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058a9a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058a9a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058a9a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058a9a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058a9a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058a9a8:;
  /* 0058a9a8 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 0058a9ac test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058a9ae jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058a9b4 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058a9b8 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 0058a9bc mov dl, 0xff */ { edx = (edx & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0058a9be lea eax, [ecx + 1] */ eax = (u32)((u32)(ecx + 0x1u));
  /* 0058a9c1 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
L_0058a9c5:;
  /* 0058a9c5 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058a9c7 fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a9cd fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a9d1 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058a9d5 fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a9d9 mov bl, byte ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a9dd mov byte ptr [eax + 1], bl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058a9e0 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058a9e3 fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058a9e9 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058a9ed fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058a9f1 fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058a9f5 mov bl, byte ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058a9f9 mov byte ptr [eax - 1], 0 */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)(0x0u); }
  /* 0058a9fd mov byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058a9ff mov byte ptr [eax + 2], dl */ { const u32 m_ = (u32)(eax + 0x2u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0058aa02 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058aa05 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058aa07 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058aa08 jne 0x58a9c5 */ if (!ZF_) goto L_0058a9c5;
  /* 0058aa0a mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058aa11 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058aa12 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058aa13 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058aa14 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058aa15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058aa16:;
  /* 0058aa16 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 0058aa1a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058aa1c jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058aa22 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0058aa26 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 0058aa2a mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0058aa2e mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 0058aa33 lea eax, [edx + 2] */ eax = (u32)((u32)(edx + 0x2u));
L_0058aa36:;
  /* 0058aa36 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0058aa38 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0058aa3c fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058aa40 fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058aa44 mov dl, byte ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058aa48 mov byte ptr [eax - 2], dl */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0058aa4b mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058aa4e mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 0058aa52 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058aa56 fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058aa5a mov dl, byte ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058aa5e mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 0058aa61 mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0058aa64 mov byte ptr [eax + 1], bl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058aa67 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058aa6a add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058aa6c dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058aa6d jne 0x58aa36 */ if (!ZF_) goto L_0058aa36;
  /* 0058aa6f mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058aa76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058aa77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058aa78 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058aa79 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058aa7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058aa7b:;
  /* 0058aa7b mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058aa7f mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058aa83 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058aa85 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058aa8b mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058aa8f mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
L_0058aa93:;
  /* 0058aa93 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0058aa95 mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 0058aa99 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058aa9d fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058aaa1 mov di, word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058aaa6 mov word ptr [ecx], di */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058aaa9 mov edi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M32(m_)); }
  /* 0058aaac mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 0058aab0 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058aab4 fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058aab8 mov di, word ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058aabd add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058aac0 mov word ptr [ecx + 2], di */ { const u32 m_ = (u32)(ecx + 0x2u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058aac4 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058aac6 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058aac7 jne 0x58aa93 */ if (!ZF_) goto L_0058aa93;
  /* 0058aac9 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058aad0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058aad1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058aad2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058aad3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058aad4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058aad5:;
  /* 0058aad5 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058aad9 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058aadb jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058aae1 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058aae5 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058aae9 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0058aaed add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058aaf0 mov ebx, 1 */ { ebx = (u32)(0x1u); }
L_0058aaf5:;
  /* 0058aaf5 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 0058aaf7 mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 0058aafb fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058aaff fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ab03 mov di, word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058ab08 mov word ptr [eax - 4], di */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058ab0c mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 0058ab0f mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 0058ab13 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058ab17 fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ab1b mov di, word ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058ab20 mov word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x0u); }
  /* 0058ab25 mov word ptr [eax - 2], di */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058ab29 mov word ptr [eax + 2], bx */ { const u32 m_ = (u32)(eax + 0x2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058ab2d add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058ab30 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058ab32 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058ab33 jne 0x58aaf5 */ if (!ZF_) goto L_0058aaf5;
  /* 0058ab35 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058ab3c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058ab3d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ab3e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ab3f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058ab40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058ab41:;
  /* 0058ab41 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 0058ab45 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ab47 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058ab4d mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058ab51 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 0058ab55 mov dl, 0xff */ { edx = (edx & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0058ab57 lea eax, [ecx + 2] */ eax = (u32)((u32)(ecx + 0x2u));
  /* 0058ab5a mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
L_0058ab5e:;
  /* 0058ab5e fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058ab60 fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ab66 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ab6a fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058ab6e fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ab72 mov bl, byte ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058ab76 mov byte ptr [eax - 2], bl */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058ab79 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ab7c fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ab82 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ab86 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058ab8a fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ab8e mov bl, byte ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058ab92 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 0058ab95 mov byte ptr [eax - 1], bl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058ab98 mov byte ptr [eax + 1], dl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0058ab9b add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058ab9e add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058aba0 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058aba1 jne 0x58ab5e */ if (!ZF_) goto L_0058ab5e;
  /* 0058aba3 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058abaa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058abab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058abac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058abad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058abae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058abaf:;
  /* 0058abaf mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058abb3 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058abb7 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058abb9 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058abbf mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058abc3 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
L_0058abc7:;
  /* 0058abc7 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058abc9 fmul dword ptr [0x62ef34] */ { const u32 m_ = (u32)(0x62ef34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058abcf fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058abd3 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058abd7 fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058abdb mov di, word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058abe0 mov word ptr [ecx], di */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058abe3 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058abe6 fmul dword ptr [0x62ef34] */ { const u32 m_ = (u32)(0x62ef34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058abec fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058abf0 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058abf4 fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058abf8 mov di, word ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058abfd add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058ac00 mov word ptr [ecx + 2], di */ { const u32 m_ = (u32)(ecx + 0x2u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058ac04 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058ac06 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058ac07 jne 0x58abc7 */ if (!ZF_) goto L_0058abc7;
  /* 0058ac09 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058ac10 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058ac11 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ac12 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ac13 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058ac14 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058ac15:;
  /* 0058ac15 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058ac19 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ac1b jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058ac21 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058ac25 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058ac29 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0058ac2d add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058ac30 mov edi, 0x7fff */ { edi = (u32)(0x7fffu); }
L_0058ac35:;
  /* 0058ac35 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058ac37 fmul dword ptr [0x62ef34] */ { const u32 m_ = (u32)(0x62ef34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ac3d fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ac41 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058ac45 fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ac49 mov bx, word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058ac4e mov word ptr [eax - 4], bx */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058ac52 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ac55 fmul dword ptr [0x62ef34] */ { const u32 m_ = (u32)(0x62ef34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ac5b fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ac5f fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058ac63 fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ac67 mov bx, word ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058ac6c mov word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x0u); }
  /* 0058ac71 mov word ptr [eax - 2], bx */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058ac75 mov word ptr [eax + 2], di */ { const u32 m_ = (u32)(eax + 0x2u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058ac79 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058ac7c add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058ac7e dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058ac7f jne 0x58ac35 */ if (!ZF_) goto L_0058ac35;
  /* 0058ac81 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058ac88 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058ac89 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ac8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ac8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058ac8c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058ac8d:;
  /* 0058ac8d mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058ac91 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058ac95 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ac97 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058ac9d mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058aca1 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
L_0058aca5:;
  /* 0058aca5 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058aca7 fmul dword ptr [0x6570a4] */ { const u32 m_ = (u32)(0x6570a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058acad fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058acb1 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058acb5 fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058acb9 mov di, word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058acbe mov word ptr [ecx], di */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058acc1 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058acc4 fmul dword ptr [0x6570a4] */ { const u32 m_ = (u32)(0x6570a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058acca fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058acce fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058acd2 fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058acd6 mov di, word ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (edi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058acdb add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058acde mov word ptr [ecx + 2], di */ { const u32 m_ = (u32)(ecx + 0x2u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058ace2 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058ace4 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058ace5 jne 0x58aca5 */ if (!ZF_) goto L_0058aca5;
  /* 0058ace7 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058acee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058acef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058acf0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058acf1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058acf2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058acf3:;
  /* 0058acf3 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058acf7 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058acf9 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058acff mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058ad03 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058ad07 mov edi, 0xffff */ { edi = (u32)(0xffffu); }
  /* 0058ad0c lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 0058ad0f mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
L_0058ad13:;
  /* 0058ad13 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058ad15 fmul dword ptr [0x6570a4] */ { const u32 m_ = (u32)(0x6570a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ad1b fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ad1f fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058ad23 fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ad27 mov bx, word ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058ad2c mov word ptr [eax - 4], bx */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058ad30 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ad33 fmul dword ptr [0x6570a4] */ { const u32 m_ = (u32)(0x6570a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ad39 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ad3d fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058ad41 fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ad45 mov bx, word ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (ebx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058ad4a mov word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x0u); }
  /* 0058ad4f mov word ptr [eax - 2], bx */ { const u32 m_ = (u32)(eax + 0xfffffffeu); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058ad53 mov word ptr [eax + 2], di */ { const u32 m_ = (u32)(eax + 0x2u); M16(m_) = (u16)((edi & 0xffffu)); }
  /* 0058ad57 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058ad5a add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058ad5c dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058ad5d jne 0x58ad13 */ if (!ZF_) goto L_0058ad13;
  /* 0058ad5f mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058ad66 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058ad67 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ad68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ad69 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058ad6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058ad6b:;
  /* 0058ad6b mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058ad6f mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058ad73 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ad75 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058ad7b mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058ad7f mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
L_0058ad83:;
  /* 0058ad83 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0058ad85 mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 0058ad89 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058ad8d fistp dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ad91 mov edi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M32(m_)); }
  /* 0058ad94 mov dword ptr [esp + 0x20], edi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(edi); }
  /* 0058ad98 fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058ad9c fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ada0 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 0058ada4 mov ebx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebx = (u32)(M32(m_)); }
  /* 0058ada8 and edi, 0x3ff */ { u32 a_ = edi, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0058adae and ebx, 0x3ff */ { u32 a_ = ebx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058adb4 shl edi, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0058adb7 or edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0058adb9 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058adbc mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 0058adbe add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058adc0 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058adc1 jne 0x58ad83 */ if (!ZF_) goto L_0058ad83;
  /* 0058adc3 mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058adca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058adcb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058adcc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058adcd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058adce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058adcf:;
  /* 0058adcf mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058add3 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058add7 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058add9 jle 0x58ae2f */ if ((ZF_|LT_)) goto L_0058ae2f;
  /* 0058addb mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058addf mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
L_0058ade3:;
  /* 0058ade3 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058ade5 fmul dword ptr [0x62ef2c] */ { const u32 m_ = (u32)(0x62ef2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058adeb fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058adef fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058adf3 fistp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058adf7 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058adfa fmul dword ptr [0x62ef2c] */ { const u32 m_ = (u32)(0x62ef2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ae00 fstp dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ae04 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058ae08 fistp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0058ae0c mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 0058ae10 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 0058ae14 and edi, 0x3ff */ { u32 a_ = edi, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0058ae1a and ebx, 0x3ff */ { u32 a_ = ebx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058ae20 shl edi, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0058ae23 or edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0058ae25 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058ae28 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 0058ae2a add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058ae2c dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058ae2d jne 0x58ade3 */ if (!ZF_) goto L_0058ade3;
L_0058ae2f:;
  /* 0058ae2f mov eax, dword ptr [ebp*4 + 0x62eee8] */ { const u32 m_ = (u32)(ebp * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058ae36 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058ae37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ae38 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ae39 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058ae3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058ae80(CPU *c) {
  NATIVE_HOOK(0x58ae80u) REGS; LOADALL;
L_0058ae80:;
  /* 0058ae80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ae81 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058ae85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058ae86 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 0058ae8a or cl, 0xff */ { u32 a_ = (ecx & 0xffu), b_ = 0xffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0058ae8d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ae8f jle 0x58aeca */ if ((ZF_|LT_)) goto L_0058aeca;
  /* 0058ae91 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058ae95 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058ae96 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ae97 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 0058ae9b add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0058ae9e:;
  /* 0058ae9e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058aea0 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058aea2 mov dl, byte ptr [eax - 3] */ { const u32 m_ = (u32)(eax + 0xfffffffdu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058aea5 mov bl, byte ptr [eax - 2] */ { const u32 m_ = (u32)(eax + 0xfffffffeu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058aea8 mov dh, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 0058aeaa add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058aead shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0058aeb0 or edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058aeb2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058aeb4 mov bl, byte ptr [eax - 5] */ { const u32 m_ = (u32)(eax + 0xfffffffbu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058aeb7 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0058aeba or edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058aebc mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 0058aebe mov bl, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058aec1 and cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0058aec3 add esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058aec5 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058aec6 jne 0x58ae9e */ if (!ZF_) goto L_0058ae9e;
  /* 0058aec8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058aec9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0058aeca:;
  /* 0058aeca xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058aecc cmp cl, 0xff */ { u32 a_ = (ecx & 0xffu), b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0058aecf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058aed0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058aed1 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0058aed4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058aee0(CPU *c) {
  NATIVE_HOOK(0x58aee0u) REGS; LOADALL;
L_0058aee0:;
  /* 0058aee0 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058aee4 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058aee8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058aee9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058aeea lea ecx, [edx - 4] */ ecx = (u32)((u32)(edx + 0xfffffffcu));
  /* 0058aeed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058aeee cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058aef1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058aef2 ja 0x58b056 */ if (!(CF_|ZF_)) goto L_0058b056;
  /* 0058aef8 jmp dword ptr [ecx*4 + 0x58b064] */ { const u32 m_ = (u32)(ecx * 4u + 0x58b064u); u32 t_ = M32(m_); switch (t_) { case 0x58aeffu: goto L_0058aeff; case 0x58af5au: goto L_0058af5a; case 0x58afb7u: goto L_0058afb7; case 0x58affdu: goto L_0058affd; default: SAVEALL; call_ind(c, t_); return; } }
L_0058aeff:;
  /* 0058aeff mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 0058af03 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058af05 jle 0x58b056 */ if ((ZF_|LT_)) goto L_0058b056;
  /* 0058af0b mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058af0f mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 0058af13 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 0058af17 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058af1a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0058af1b:;
  /* 0058af1b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058af1d mov bl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af20 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058af23 mov bl, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af26 mov byte ptr [ecx - 2], bl */ { const u32 m_ = (u32)(ecx + 0xfffffffeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058af29 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058af2b mov bl, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af2e mov bl, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af31 mov byte ptr [ecx - 1], bl */ { const u32 m_ = (u32)(ecx + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058af34 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058af36 mov bl, byte ptr [eax - 5] */ { const u32 m_ = (u32)(eax + 0xfffffffbu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af39 mov bl, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af3c mov byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058af3e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058af40 mov bl, byte ptr [eax - 2] */ { const u32 m_ = (u32)(eax + 0xfffffffeu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af43 mov bl, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af46 mov byte ptr [ecx + 1], bl */ { const u32 m_ = (u32)(ecx + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058af49 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058af4b dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058af4c jne 0x58af1b */ if (!ZF_) goto L_0058af1b;
  /* 0058af4e mov eax, dword ptr [edx*4 + 0x62eee8] */ { const u32 m_ = (u32)(edx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058af55 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058af56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058af57 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058af58 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058af59 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058af5a:;
  /* 0058af5a mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 0058af5e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058af60 jle 0x58b056 */ if ((ZF_|LT_)) goto L_0058b056;
  /* 0058af66 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058af6a mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 0058af6e mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 0058af72 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058af75 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0058af78:;
  /* 0058af78 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058af7a mov bl, byte ptr [eax - 2] */ { const u32 m_ = (u32)(eax + 0xfffffffeu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af7d add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058af80 mov bl, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af83 mov byte ptr [ecx - 2], bl */ { const u32 m_ = (u32)(ecx + 0xfffffffeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058af86 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058af88 mov bl, byte ptr [eax - 5] */ { const u32 m_ = (u32)(eax + 0xfffffffbu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af8b mov bl, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af8e mov byte ptr [ecx - 1], bl */ { const u32 m_ = (u32)(ecx + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058af91 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058af93 mov bl, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af96 mov bl, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058af99 mov byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058af9b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058af9d mov bl, byte ptr [eax - 3] */ { const u32 m_ = (u32)(eax + 0xfffffffdu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058afa0 mov bl, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058afa3 mov byte ptr [ecx + 1], bl */ { const u32 m_ = (u32)(ecx + 0x1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0058afa6 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058afa8 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058afa9 jne 0x58af78 */ if (!ZF_) goto L_0058af78;
  /* 0058afab mov eax, dword ptr [edx*4 + 0x62eee8] */ { const u32 m_ = (u32)(edx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058afb2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058afb3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058afb4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058afb5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058afb6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058afb7:;
  /* 0058afb7 mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 0058afbb mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058afbf test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058afc1 jle 0x58b056 */ if ((ZF_|LT_)) goto L_0058b056;
  /* 0058afc7 mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 0058afcb mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
L_0058afcf:;
  /* 0058afcf xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058afd1 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058afd3 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058afd6 movzx bx, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0058afdb mov word ptr [ecx], bx */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058afde xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058afe0 mov bl, byte ptr [eax - 3] */ { const u32 m_ = (u32)(eax + 0xfffffffdu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058afe3 movzx bx, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0058afe8 mov word ptr [ecx + 2], bx */ { const u32 m_ = (u32)(ecx + 0x2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058afec add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058afee dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058afef jne 0x58afcf */ if (!ZF_) goto L_0058afcf;
  /* 0058aff1 mov eax, dword ptr [edx*4 + 0x62eee8] */ { const u32 m_ = (u32)(edx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058aff8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058aff9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058affa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058affb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058affc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058affd:;
  /* 0058affd mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 0058b001 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058b003 jle 0x58b056 */ if ((ZF_|LT_)) goto L_0058b056;
  /* 0058b005 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058b009 mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 0058b00d mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 0058b011 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058b014 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0058b017:;
  /* 0058b017 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058b019 mov bl, byte ptr [eax - 2] */ { const u32 m_ = (u32)(eax + 0xfffffffeu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b01c add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058b01f movzx bx, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0058b024 mov word ptr [ecx - 4], bx */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058b028 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058b02a mov bl, byte ptr [eax - 5] */ { const u32 m_ = (u32)(eax + 0xfffffffbu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b02d movzx bx, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0058b032 mov word ptr [ecx - 2], bx */ { const u32 m_ = (u32)(ecx + 0xfffffffeu); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058b036 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058b038 mov bl, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b03b movzx bx, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0058b040 mov word ptr [ecx], bx */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058b043 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058b045 mov bl, byte ptr [eax - 3] */ { const u32 m_ = (u32)(eax + 0xfffffffdu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b048 movzx bx, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); ebx = (ebx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0058b04d mov word ptr [ecx + 2], bx */ { const u32 m_ = (u32)(ecx + 0x2u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0058b051 add ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058b053 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058b054 jne 0x58b017 */ if (!ZF_) goto L_0058b017;
L_0058b056:;
  /* 0058b056 mov eax, dword ptr [edx*4 + 0x62eee8] */ { const u32 m_ = (u32)(edx * 4u + 0x62eee8u); eax = (u32)(M32(m_)); }
  /* 0058b05d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058b05e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b05f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058b060 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058b061 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058b080(CPU *c) {
  NATIVE_HOOK(0x58b080u) REGS; LOADALL;
L_0058b080:;
  /* 0058b080 sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b083 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058b084 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058b085 mov ebp, dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); ebp = (u32)(M32(m_)); }
  /* 0058b089 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058b08a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058b08b push 0x1050d */ { u32 v_ = 0x1050du; esp -= 4; M32(esp) = v_; }
  /* 0058b090 mov eax, dword ptr [ebp + 0x3c] */ { const u32 m_ = (u32)(ebp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0058b093 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 0058b097 lea esi, [eax + eax*2] */ esi = (u32)((u32)(eax + eax * 2u));
  /* 0058b09a mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0058b09f shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0058b0a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058b0a3 call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58b0a9u; SAVEALL; call_ind(c, t_); RETCHK(0x58b0a9u, 0x58b0a3u); LOADALL; }
  /* 0058b0a9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0058b0ab mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0058b0ad mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0058b0af xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058b0b1 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0058b0b3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b0b6 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058b0b9 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0058b0bb mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0058b0bd lea edx, [esp + 0x34] */ edx = (u32)((u32)(esp + 0x34u));
  /* 0058b0c1 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058b0c4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0058b0c6 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 0058b0c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058b0cb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0058b0cc mov edx, dword ptr [ebp + 0x38] */ { const u32 m_ = (u32)(ebp + 0x38u); edx = (u32)(M32(m_)); }
  /* 0058b0cf mov dword ptr [esp + 0x30], ebx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ebx); }
  /* 0058b0d3 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0058b0d5 add edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058b0d7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0058b0d8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0058b0da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058b0db call dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58b0deu; SAVEALL; call_ind(c, t_); RETCHK(0x58b0deu, 0x58b0dbu); LOADALL; }
  /* 0058b0de mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058b0e1 lea edi, [ebp + 0x40] */ edi = (u32)((u32)(ebp + 0x40u));
  /* 0058b0e4 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 0058b0e8 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
L_0058b0ec:;
  /* 0058b0ec mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0058b0ef mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 0058b0f3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058b0f6 lea esi, [edx + ecx*2] */ esi = (u32)((u32)(edx + ecx * 2u));
  /* 0058b0f9 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0058b0fb cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b0fe mov dword ptr [esp + 0x24], esi */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(esi); }
  /* 0058b102 mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0058b106 jne 0x58b10f */ if (!ZF_) goto L_0058b10f;
  /* 0058b108 sub ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058b10b mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
L_0058b10f:;
  /* 0058b10f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058b111 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058b113 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0058b117 jbe 0x58b39f */ if ((CF_|ZF_)) goto L_0058b39f;
  /* 0058b11d lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 0058b120 lea ebp, [esi + 2] */ ebp = (u32)((u32)(esi + 0x2u));
  /* 0058b123 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0058b127 jmp 0x58b135 */ goto L_0058b135;
L_0058b129:;
  /* 0058b129 mov esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); esi = (u32)(M32(m_)); }
  /* 0058b12d mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0058b131 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
L_0058b135:;
  /* 0058b135 mov ecx, dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); ecx = (u32)(M32(m_)); }
  /* 0058b139 cmp dword ptr [ecx + 0xc], 4 */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b13d jne 0x58b176 */ if (!ZF_) goto L_0058b176;
  /* 0058b13f mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0058b142 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058b144 mov cx, word ptr [esi + eax*2] */ { const u32 m_ = (u32)(esi + eax * 2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058b148 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058b14a mov si, word ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058b14d mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0058b14f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058b151 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058b153 mov cx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058b157 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058b159 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058b15b mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0058b15f add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0058b162 add ebp, 6 */ { u32 a_ = ebp, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0058b165 add edx, 6 */ { u32 a_ = edx, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058b168 mov dword ptr [esp + 0x10], edi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edi); }
  /* 0058b16c mov dword ptr [esp + 0x20], ebp */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebp); }
  /* 0058b170 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0058b174 jmp 0x58b1f0 */ goto L_0058b1f0;
L_0058b176:;
  /* 0058b176 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058b178 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058b17a je 0x58b1a0 */ if (ZF_) goto L_0058b1a0;
  /* 0058b17c mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0058b17f mov cx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058b183 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058b185 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058b187 mov ax, word ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058b18a mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 0058b18e add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058b190 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0058b194 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058b196 mov si, word ptr [edx + edi*2] */ { const u32 m_ = (u32)(edx + edi * 2u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058b19a mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 0058b19e jmp 0x58b1b8 */ goto L_0058b1b8;
L_0058b1a0:;
  /* 0058b1a0 mov cx, word ptr [esi + eax*2] */ { const u32 m_ = (u32)(esi + eax * 2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058b1a4 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0058b1a7 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0058b1a9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058b1ab mov cx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058b1af add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058b1b1 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058b1b3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058b1b5 mov si, word ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
L_0058b1b8:;
  /* 0058b1b8 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058b1bb add ebp, 2 */ { u32 a_ = ebp, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0058b1be add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058b1c0 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058b1c4 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058b1c5 mov dword ptr [esp + 0x20], ebp */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ebp); }
  /* 0058b1c9 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b1cd mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0058b1d1 add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058b1d4 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b1d6 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0058b1da je 0x58b38b */ if (ZF_) goto L_0058b38b;
  /* 0058b1e0 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b1e2 je 0x58b38b */ if (ZF_) goto L_0058b38b;
  /* 0058b1e8 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b1ea je 0x58b38b */ if (ZF_) goto L_0058b38b;
L_0058b1f0:;
  /* 0058b1f0 mov ebx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); ebx = (u32)(M32(m_)); }
  /* 0058b1f4 lea edi, [ecx + ecx*2] */ edi = (u32)((u32)(ecx + ecx * 2u));
  /* 0058b1f7 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 0058b1fa lea ebp, [esi + esi*2] */ ebp = (u32)((u32)(esi + esi * 2u));
  /* 0058b1fd shl edi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0058b200 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0058b203 fld dword ptr [edi + ebx] */ { const u32 m_ = (u32)(edi + ebx); FPUSH((double)MF32(m_)); }
  /* 0058b206 fsub dword ptr [edx + ebx] */ { const u32 m_ = (u32)(edx + ebx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b209 mov ebx, dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); ebx = (u32)(M32(m_)); }
  /* 0058b20d shl ebp, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebp; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebp = (u32)(r_); } }
  /* 0058b210 fstp dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b214 fld dword ptr [ebx + ecx*8] */ { const u32 m_ = (u32)(ebx + ecx * 8u); FPUSH((double)MF32(m_)); }
  /* 0058b217 fsub dword ptr [ebx + eax*8] */ { const u32 m_ = (u32)(ebx + eax * 8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b21a fld dword ptr [ebx + ecx*8 + 4] */ { const u32 m_ = (u32)(ebx + ecx * 8u + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b21e fsub dword ptr [ebx + eax*8 + 4] */ { const u32 m_ = (u32)(ebx + eax * 8u + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b222 lea ecx, [ebx + eax*8 + 4] */ ecx = (u32)((u32)(ebx + eax * 8u + 0x4u));
  /* 0058b226 mov dword ptr [esp + 0x38], ecx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0058b22a mov ecx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 0058b22e fstp dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b232 fld dword ptr [ecx + ebp] */ { const u32 m_ = (u32)(ecx + ebp); FPUSH((double)MF32(m_)); }
  /* 0058b235 fsub dword ptr [edx + ecx] */ { const u32 m_ = (u32)(edx + ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b238 fstp dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b23c fld dword ptr [ebx + esi*8] */ { const u32 m_ = (u32)(ebx + esi * 8u); FPUSH((double)MF32(m_)); }
  /* 0058b23f fsub dword ptr [ebx + eax*8] */ { const u32 m_ = (u32)(ebx + eax * 8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b242 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 0058b246 fld dword ptr [ebx + esi*8 + 4] */ { const u32 m_ = (u32)(ebx + esi * 8u + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b24a fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b24c mov ebx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebx = (u32)(M32(m_)); }
  /* 0058b250 fst dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); MF32(m_) = (float)ST(0); }
  /* 0058b254 fmulp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) * s0_); FPOP(); }
  /* 0058b256 fmul dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b25a fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058b25c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058b25e fld dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); FPUSH((double)MF32(m_)); }
  /* 0058b262 fmul dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b266 fld dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); FPUSH((double)MF32(m_)); }
  /* 0058b26a fmul dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b26e fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058b270 fstp dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b274 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058b276 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 0058b278 fcomp dword ptr [0x62ef48] */ { const u32 m_ = (u32)(0x62ef48u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058b27e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058b280 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058b285 jne 0x58b2a9 */ if (!ZF_) goto L_0058b2a9;
  /* 0058b287 fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 0058b28d fmul dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b291 fld dword ptr [edx + ebx] */ { const u32 m_ = (u32)(edx + ebx); FPUSH((double)MF32(m_)); }
  /* 0058b294 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058b296 fstp dword ptr [edx + ebx] */ { const u32 m_ = (u32)(edx + ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b299 fld dword ptr [edi + ebx] */ { const u32 m_ = (u32)(edi + ebx); FPUSH((double)MF32(m_)); }
  /* 0058b29c fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058b29e fstp dword ptr [edi + ebx] */ { const u32 m_ = (u32)(edi + ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b2a1 fld dword ptr [ebx + ebp] */ { const u32 m_ = (u32)(ebx + ebp); FPUSH((double)MF32(m_)); }
  /* 0058b2a4 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058b2a6 fstp dword ptr [ebx + ebp] */ { const u32 m_ = (u32)(ebx + ebp); MF32(m_) = (float)ST(0); FPOP(); }
L_0058b2a9:;
  /* 0058b2a9 mov ecx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 0058b2ad fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058b2af fld dword ptr [edi + ecx + 4] */ { const u32 m_ = (u32)(edi + ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b2b3 fsub dword ptr [edx + ecx + 4] */ { const u32 m_ = (u32)(edx + ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b2b7 fld dword ptr [ecx + ebp + 4] */ { const u32 m_ = (u32)(ecx + ebp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b2bb fsub dword ptr [edx + ecx + 4] */ { const u32 m_ = (u32)(edx + ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b2bf fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058b2c1 fstp dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b2c5 fmul dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b2c9 fld dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); FPUSH((double)MF32(m_)); }
  /* 0058b2cd fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058b2cf fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058b2d1 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 0058b2d3 fld dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058b2d7 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 0058b2d9 fcomp dword ptr [0x62ef48] */ { const u32 m_ = (u32)(0x62ef48u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058b2df fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058b2e1 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058b2e6 jne 0x58b312 */ if (!ZF_) goto L_0058b312;
  /* 0058b2e8 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0058b2ee fdiv dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0058b2f2 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0058b2f4 fld dword ptr [edx + ebx + 4] */ { const u32 m_ = (u32)(edx + ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b2f8 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058b2fa fstp dword ptr [edx + ebx + 4] */ { const u32 m_ = (u32)(edx + ebx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b2fe fld dword ptr [edi + ebx + 4] */ { const u32 m_ = (u32)(edi + ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b302 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058b304 fstp dword ptr [edi + ebx + 4] */ { const u32 m_ = (u32)(edi + ebx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b308 fld dword ptr [ebx + ebp + 4] */ { const u32 m_ = (u32)(ebx + ebp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b30c fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058b30e fstp dword ptr [ebx + ebp + 4] */ { const u32 m_ = (u32)(ebx + ebp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
L_0058b312:;
  /* 0058b312 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058b314 fld dword ptr [edi + ecx + 8] */ { const u32 m_ = (u32)(edi + ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058b318 fsub dword ptr [edx + ecx + 8] */ { const u32 m_ = (u32)(edx + ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b31c fld dword ptr [ecx + ebp + 8] */ { const u32 m_ = (u32)(ecx + ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058b320 fsub dword ptr [edx + ecx + 8] */ { const u32 m_ = (u32)(edx + ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b324 fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 0058b326 fstp dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b32a lea eax, [edx + ecx + 8] */ eax = (u32)((u32)(edx + ecx + 0x8u));
  /* 0058b32e fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0058b330 fmul dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b334 fld dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); FPUSH((double)MF32(m_)); }
  /* 0058b338 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058b33a fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058b33c fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0058b33e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058b340 fld dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058b344 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 0058b346 fcomp dword ptr [0x62ef48] */ { const u32 m_ = (u32)(0x62ef48u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058b34c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058b34e and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058b353 jne 0x58b381 */ if (!ZF_) goto L_0058b381;
  /* 0058b355 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 0058b35b fdiv dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0058b35f lea edx, [edx + ebx + 8] */ edx = (u32)((u32)(edx + ebx + 0x8u));
  /* 0058b363 lea edi, [edi + ebx + 8] */ edi = (u32)((u32)(edi + ebx + 0x8u));
  /* 0058b367 lea ebp, [ebx + ebp + 8] */ ebp = (u32)((u32)(ebx + ebp + 0x8u));
  /* 0058b36b fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0058b36d fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058b36f fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058b371 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b373 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0058b375 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058b377 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b379 fld dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); FPUSH((double)MF32(m_)); }
  /* 0058b37c fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058b37e fstp dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); MF32(m_) = (float)ST(0); FPOP(); }
L_0058b381:;
  /* 0058b381 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 0058b385 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 0058b389 fstp st(0) */ ST(0) = ST(0); FPOP();
L_0058b38b:;
  /* 0058b38b mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0058b38f mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058b393 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b395 jb 0x58b129 */ if (CF_) goto L_0058b129;
  /* 0058b39b mov ebp, dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); ebp = (u32)(M32(m_)); }
L_0058b39f:;
  /* 0058b39f mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 0058b3a3 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0058b3a6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058b3a7 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 0058b3ab mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 0058b3af jne 0x58b0ec */ if (!ZF_) goto L_0058b0ec;
  /* 0058b3b5 mov ebp, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 0058b3b8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058b3b9 mov edx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edx = (u32)(M32(m_)); }
  /* 0058b3bc call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58b3bfu; SAVEALL; call_ind(c, t_); RETCHK(0x58b3bfu, 0x58b3bcu); LOADALL; }
  /* 0058b3bf mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 0058b3c3 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0058b3c9 push 0x1050d */ { u32 v_ = 0x1050du; esp -= 4; M32(esp) = v_; }
  /* 0058b3ce lea eax, [ebp*4] */ eax = (u32)((u32)(ebp * 4u));
  /* 0058b3d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058b3d6 call dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58b3dcu; SAVEALL; call_ind(c, t_); RETCHK(0x58b3dcu, 0x58b3d6u); LOADALL; }
  /* 0058b3dc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0058b3de xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058b3e0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b3e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058b3e5 cmp ebp, edx */ { u32 a_ = ebp, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b3e7 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0058b3eb jbe 0x58b3f5 */ if ((CF_|ZF_)) goto L_0058b3f5;
L_0058b3ed:;
  /* 0058b3ed mov dword ptr [ecx + eax*4], eax */ { const u32 m_ = (u32)(ecx + eax * 4u); M32(m_) = (u32)(eax); }
  /* 0058b3f0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058b3f1 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b3f3 jb 0x58b3ed */ if (CF_) goto L_0058b3ed;
L_0058b3f5:;
  /* 0058b3f5 cmp ebp, edx */ { u32 a_ = ebp, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b3f7 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b3fb jbe 0x58b662 */ if ((CF_|ZF_)) goto L_0058b662;
  /* 0058b401 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 0058b405 mov edx, dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); edx = (u32)(M32(m_)); }
  /* 0058b409 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058b40a mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0058b40c mov dword ptr [esp + 0x78], edx */ { const u32 m_ = (u32)(esp + 0x78u); M32(m_) = (u32)(edx); }
  /* 0058b410 mov edx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); edx = (u32)(M32(m_)); }
  /* 0058b414 lea ebp, [edx + 0x14] */ ebp = (u32)((u32)(edx + 0x14u));
  /* 0058b417 mov dword ptr [esp + 0x2c], ebp */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebp); }
L_0058b41b:;
  /* 0058b41b mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058b41f mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058b423 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058b424 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b426 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 0058b42a mov dword ptr [esp + 0x7c], eax */ { const u32 m_ = (u32)(esp + 0x7cu); M32(m_) = (u32)(eax); }
  /* 0058b42e jae 0x58b62c */ if (!CF_) goto L_0058b62c;
  /* 0058b434 mov ecx, dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); ecx = (u32)(M32(m_)); }
  /* 0058b438 lea edi, [esi + 0xc] */ edi = (u32)((u32)(esi + 0xcu));
  /* 0058b43b add ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058b43e mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0058b442 mov ecx, dword ptr [esp + 0x70] */ { const u32 m_ = (u32)(esp + 0x70u); ecx = (u32)(M32(m_)); }
  /* 0058b446 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0058b448 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058b44a mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 0058b44e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0058b450 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058b452 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 0058b456 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0058b458 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058b45a mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
L_0058b45e:;
  /* 0058b45e mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0058b462 mov eax, dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); eax = (u32)(M32(m_)); }
  /* 0058b466 mov ecx, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); ecx = (u32)(M32(m_)); }
  /* 0058b469 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058b46d cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b46f jbe 0x58b5fe */ if ((CF_|ZF_)) goto L_0058b5fe;
  /* 0058b475 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058b479 mov edx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); edx = (u32)(M32(m_)); }
  /* 0058b47d fld dword ptr [ecx + edx] */ { const u32 m_ = (u32)(ecx + edx); FPUSH((double)MF32(m_)); }
  /* 0058b480 fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b483 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 0058b485 fcomp qword ptr [0x62ef40] */ { const u32 m_ = (u32)(0x62ef40u); c->fsw = fcom_sw(c->fsw, ST(0), MF64(m_)); FPOP(); }
  /* 0058b48b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058b48d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058b490 jp 0x58b5fe */ if (PF_) goto L_0058b5fe;
  /* 0058b496 fld dword ptr [ecx + edx + 4] */ { const u32 m_ = (u32)(ecx + edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b49a fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b49d fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 0058b49f fcomp qword ptr [0x62ef40] */ { const u32 m_ = (u32)(0x62ef40u); c->fsw = fcom_sw(c->fsw, ST(0), MF64(m_)); FPOP(); }
  /* 0058b4a5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058b4a7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058b4aa jp 0x58b5fe */ if (PF_) goto L_0058b5fe;
  /* 0058b4b0 fld dword ptr [ecx + edx + 8] */ { const u32 m_ = (u32)(ecx + edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058b4b4 fsub dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058b4b7 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 0058b4b9 fcomp qword ptr [0x62ef40] */ { const u32 m_ = (u32)(0x62ef40u); c->fsw = fcom_sw(c->fsw, ST(0), MF64(m_)); FPOP(); }
  /* 0058b4bf fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058b4c1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058b4c4 jp 0x58b5fe */ if (PF_) goto L_0058b5fe;
  /* 0058b4ca mov eax, dword ptr [esp + 0x70] */ { const u32 m_ = (u32)(esp + 0x70u); eax = (u32)(M32(m_)); }
  /* 0058b4ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058b4d0 je 0x58b4f8 */ if (ZF_) goto L_0058b4f8;
  /* 0058b4d2 mov edx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); edx = (u32)(M32(m_)); }
  /* 0058b4d6 fld dword ptr [edi + edx + 4] */ { const u32 m_ = (u32)(edi + edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b4da fmul dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b4de fld dword ptr [edi + edx] */ { const u32 m_ = (u32)(edi + edx); FPUSH((double)MF32(m_)); }
  /* 0058b4e1 fmul dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b4e4 mov edx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edx = (u32)(M32(m_)); }
  /* 0058b4e8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058b4ea fld dword ptr [edx + ebp] */ { const u32 m_ = (u32)(edx + ebp); FPUSH((double)MF32(m_)); }
  /* 0058b4ed fmul dword ptr [ecx + eax + 8] */ { const u32 m_ = (u32)(ecx + eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b4f1 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058b4f3 jmp 0x58b57e */ goto L_0058b57e;
L_0058b4f8:;
  /* 0058b4f8 mov eax, dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); eax = (u32)(M32(m_)); }
  /* 0058b4fc movsx ecx, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 0058b500 movsx edx, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 0058b503 movsx eax, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 0058b507 mov dword ptr [esp + 0x74], ecx */ { const u32 m_ = (u32)(esp + 0x74u); M32(m_) = (u32)(ecx); }
  /* 0058b50b fild dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b50f mov dword ptr [esp + 0x74], edx */ { const u32 m_ = (u32)(esp + 0x74u); M32(m_) = (u32)(edx); }
  /* 0058b513 fmul dword ptr [0x62ef38] */ { const u32 m_ = (u32)(0x62ef38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b519 fild dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b51d mov dword ptr [esp + 0x74], eax */ { const u32 m_ = (u32)(esp + 0x74u); M32(m_) = (u32)(eax); }
  /* 0058b521 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0058b525 movsx ecx, byte ptr [eax - 2] */ { const u32 m_ = (u32)(eax + 0xfffffffeu); ecx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 0058b529 fmul dword ptr [0x62ef38] */ { const u32 m_ = (u32)(0x62ef38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b52f fild dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b533 movsx edx, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); edx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 0058b537 fmul dword ptr [0x62ef38] */ { const u32 m_ = (u32)(0x62ef38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b53d mov dword ptr [esp + 0x74], ecx */ { const u32 m_ = (u32)(esp + 0x74u); M32(m_) = (u32)(ecx); }
  /* 0058b541 fild dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b545 movsx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 0058b548 fmul dword ptr [0x62ef38] */ { const u32 m_ = (u32)(0x62ef38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b54e mov dword ptr [esp + 0x74], edx */ { const u32 m_ = (u32)(esp + 0x74u); M32(m_) = (u32)(edx); }
  /* 0058b552 fild dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b556 mov dword ptr [esp + 0x74], eax */ { const u32 m_ = (u32)(esp + 0x74u); M32(m_) = (u32)(eax); }
  /* 0058b55a fmul dword ptr [0x62ef38] */ { const u32 m_ = (u32)(0x62ef38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b560 fild dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b564 fmul dword ptr [0x62ef38] */ { const u32 m_ = (u32)(0x62ef38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b56a fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0058b56c fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0058b56e fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 0058b570 fmul st(5) */ ST(0) = FR(ST(0) * ST(5));
  /* 0058b572 faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0058b574 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058b576 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058b578 fstp st(3) */ ST(3) = ST(0); FPOP();
  /* 0058b57a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058b57c fstp st(0) */ ST(0) = ST(0); FPOP();
L_0058b57e:;
  /* 0058b57e fcomp dword ptr [0x62ef3c] */ { const u32 m_ = (u32)(0x62ef3cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058b584 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058b586 and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058b58b jne 0x58b5fe */ if (!ZF_) goto L_0058b5fe;
  /* 0058b58d fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b590 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b593 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0058b597 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058b598 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0058b59a fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b59c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058b59e fld dword ptr [ecx + ebp] */ { const u32 m_ = (u32)(ecx + ebp); FPUSH((double)MF32(m_)); }
  /* 0058b5a1 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b5a4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058b5a6 fstp dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b5aa call 0x5aa970 */ esp -= 4; M32(esp) = 0x58b5afu; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x58b5aau); RETCHK(0x58b5afu, 0x58b5aau); LOADALL;
  /* 0058b5af fdivr dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 0058b5b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058b5b4 fstp dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b5b8 call 0x5aa970 */ esp -= 4; M32(esp) = 0x58b5bdu; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x58b5b8u); RETCHK(0x58b5bdu, 0x58b5b8u); LOADALL;
  /* 0058b5bd fdivr dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 0058b5c1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b5c4 fcomp dword ptr [0x657180] */ { const u32 m_ = (u32)(0x657180u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058b5ca fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058b5cc and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058b5d1 jne 0x58b5fe */ if (!ZF_) goto L_0058b5fe;
  /* 0058b5d3 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0058b5d5 fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058b5d7 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 0058b5db mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0058b5df mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058b5e3 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b5e5 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058b5e8 fadd dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058b5eb fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b5ee fld dword ptr [edx + ebp] */ { const u32 m_ = (u32)(edx + ebp); FPUSH((double)MF32(m_)); }
  /* 0058b5f1 fadd dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058b5f4 mov edx, dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); edx = (u32)(M32(m_)); }
  /* 0058b5f8 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b5fb mov dword ptr [ecx + edx*4], eax */ { const u32 m_ = (u32)(ecx + edx * 4u); M32(m_) = (u32)(eax); }
L_0058b5fe:;
  /* 0058b5fe mov eax, dword ptr [esp + 0x7c] */ { const u32 m_ = (u32)(esp + 0x7cu); eax = (u32)(M32(m_)); }
  /* 0058b602 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058b606 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058b60a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058b60b add ebp, 0xc */ { u32 a_ = ebp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0058b60e add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0058b611 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058b614 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b616 mov dword ptr [esp + 0x7c], eax */ { const u32 m_ = (u32)(esp + 0x7cu); M32(m_) = (u32)(eax); }
  /* 0058b61a mov dword ptr [esp + 0x20], edx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(edx); }
  /* 0058b61e jb 0x58b45e */ if (CF_) goto L_0058b45e;
  /* 0058b624 mov edx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); edx = (u32)(M32(m_)); }
  /* 0058b628 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
L_0058b62c:;
  /* 0058b62c mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058b630 mov ebp, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (u32)(M32(m_)); }
  /* 0058b634 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058b638 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0058b63b mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 0058b63f mov edi, dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); edi = (u32)(M32(m_)); }
  /* 0058b643 add ebp, 0xc */ { u32 a_ = ebp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0058b646 add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058b649 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0058b64c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b64e mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0058b652 mov dword ptr [esp + 0x2c], ebp */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebp); }
  /* 0058b656 mov dword ptr [esp + 0x78], edi */ { const u32 m_ = (u32)(esp + 0x78u); M32(m_) = (u32)(edi); }
  /* 0058b65a jb 0x58b41b */ if (CF_) goto L_0058b41b;
  /* 0058b660 mov ebp, ecx */ { ebp = (u32)(ecx); }
L_0058b662:;
  /* 0058b662 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0058b664 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058b666 jbe 0x58b6e1 */ if ((CF_|ZF_)) goto L_0058b6e1;
  /* 0058b668 lea esi, [ebx + 8] */ esi = (u32)((u32)(ebx + 0x8u));
L_0058b66b:;
  /* 0058b66b mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0058b66f mov eax, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); eax = (u32)(M32(m_)); }
  /* 0058b672 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b674 jne 0x58b6bf */ if (!ZF_) goto L_0058b6bf;
  /* 0058b676 fld dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058b679 fld dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058b67c fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0058b67e fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058b680 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058b682 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058b684 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0058b686 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058b688 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058b68a fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058b68c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058b68e fstp dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b692 mov ecx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 0058b696 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058b698 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058b69a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058b69c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058b69d call 0x5aaa40 */ esp -= 4; M32(esp) = 0x58b6a2u; SAVEALL; F_005aaa40(c); ABI_CHECK(0x5aaa40u, 0x58b69du); RETCHK(0x58b6a2u, 0x58b69du); LOADALL;
  /* 0058b6a2 fld dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058b6a5 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058b6a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b6aa fstp dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b6ad fld dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058b6b0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058b6b2 fstp dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b6b5 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0058b6b7 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058b6b9 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b6bb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058b6bd jmp 0x58b6d9 */ goto L_0058b6d9;
L_0058b6bf:;
  /* 0058b6bf lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 0058b6c2 lea ecx, [esi - 8] */ ecx = (u32)((u32)(esi + 0xfffffff8u));
  /* 0058b6c5 lea eax, [ebx + edx*4] */ eax = (u32)((u32)(ebx + edx * 4u));
  /* 0058b6c8 mov edx, dword ptr [ebx + edx*4] */ { const u32 m_ = (u32)(ebx + edx * 4u); edx = (u32)(M32(m_)); }
  /* 0058b6cb mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0058b6cd mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058b6d0 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058b6d3 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058b6d6 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_0058b6d9:;
  /* 0058b6d9 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058b6da add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058b6dd cmp edi, ebp */ { u32 a_ = edi, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b6df jb 0x58b66b */ if (CF_) goto L_0058b66b;
L_0058b6e1:;
  /* 0058b6e1 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0058b6e5 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0058b6eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058b6ec call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58b6f2u; SAVEALL; call_ind(c, t_); RETCHK(0x58b6f2u, 0x58b6ecu); LOADALL; }
  /* 0058b6f2 mov eax, dword ptr [esp + 0x84] */ { const u32 m_ = (u32)(esp + 0x84u); eax = (u32)(M32(m_)); }
  /* 0058b6f9 mov ecx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 0058b6fd mov edx, dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); edx = (u32)(M32(m_)); }
  /* 0058b701 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058b702 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058b703 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058b704 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058b705 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0058b706 call 0x588e70 */ esp -= 4; M32(esp) = 0x58b70bu; SAVEALL; F_00588e70(c); ABI_CHECK(0x588e70u, 0x58b706u); RETCHK(0x58b70bu, 0x58b706u); LOADALL;
  /* 0058b70b mov esi, eax */ { esi = (u32)(eax); }
  /* 0058b70d mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0058b712 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058b713 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58b719u; SAVEALL; call_ind(c, t_); RETCHK(0x58b719u, 0x58b713u); LOADALL; }
  /* 0058b719 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b71c mov eax, esi */ { eax = (u32)(esi); }
  /* 0058b71e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058b71f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b720 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058b721 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058b722 add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b725 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058b730(CPU *c) {
  NATIVE_HOOK(0x58b730u) REGS; LOADALL;
L_0058b730:;
  /* 0058b730 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058b734 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b737 cmp eax, 0xe */ { u32 a_ = eax, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058b73a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058b73b ja 0x58bac5 */ if (!(CF_|ZF_)) goto L_0058bac5;
  /* 0058b741 jmp dword ptr [eax*4 + 0x58bad8] */ { const u32 m_ = (u32)(eax * 4u + 0x58bad8u); u32 t_ = M32(m_); switch (t_) { case 0x58b748u: goto L_0058b748; case 0x58b761u: goto L_0058b761; case 0x58b77fu: goto L_0058b77f; case 0x58b79cu: goto L_0058b79c; case 0x58b7e9u: goto L_0058b7e9; case 0x58b824u: goto L_0058b824; case 0x58b854u: goto L_0058b854; case 0x58b88cu: goto L_0058b88c; case 0x58b8d9u: goto L_0058b8d9; case 0x58b915u: goto L_0058b915; case 0x58b95fu: goto L_0058b95f; case 0x58b99bu: goto L_0058b99b; case 0x58b9e5u: goto L_0058b9e5; case 0x58ba3du: goto L_0058ba3d; default: SAVEALL; call_ind(c, t_); return; } }
L_0058b748:;
  /* 0058b748 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058b74c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058b74e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0058b750 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058b754 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 0058b757 mov dword ptr [eax + 8], esi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(esi); }
  /* 0058b75a mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0058b75c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b75d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b760 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b761:;
  /* 0058b761 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058b765 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058b769 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b76a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0058b76c mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0058b76e mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0058b771 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0058b774 mov dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0058b77b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b77e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b77f:;
  /* 0058b77f mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058b783 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058b787 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b788 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0058b78a mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0058b78c mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058b78f mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058b792 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058b795 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0058b798 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b79b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b79c:;
  /* 0058b79c mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058b7a0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058b7a2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058b7a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b7a5 mov cl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b7a8 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058b7ac mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058b7b0 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b7b4 fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b7ba fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b7bc mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b7bf mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b7c3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058b7c5 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b7c9 fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b7cf fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b7d2 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b7d4 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b7d8 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b7dc fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b7e2 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b7e5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b7e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b7e9:;
  /* 0058b7e9 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058b7ed xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058b7ef xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058b7f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b7f2 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b7f4 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058b7f8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058b7fc fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b800 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b802 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b805 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b809 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058b80b fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b80f fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b812 mov dl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b815 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b819 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b81d fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b820 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b823 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b824:;
  /* 0058b824 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058b828 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b829 movsx eax, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b82c mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0058b830 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058b834 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b838 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b83a movsx ecx, word ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b83e mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0058b842 mov dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0058b849 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b84d fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b850 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b853 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b854:;
  /* 0058b854 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058b858 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058b85c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b85d movsx edx, word ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b860 mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 0058b864 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b868 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b86a movsx edx, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b86e mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b872 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b876 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b879 movsx eax, word ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b87d mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0058b881 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b885 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b888 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b88b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b88c:;
  /* 0058b88c mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058b890 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058b892 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058b894 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b895 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b897 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058b89b mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058b89f fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b8a3 fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b8a9 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b8ab mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b8ae mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b8b2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058b8b4 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b8b8 fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b8be fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b8c1 mov dl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058b8c4 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b8c8 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b8cc fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b8d2 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b8d5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b8d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b8d9:;
  /* 0058b8d9 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058b8dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b8de movsx eax, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b8e1 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0058b8e5 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058b8e9 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b8ed fmul dword ptr [0x656d9c] */ { const u32 m_ = (u32)(0x656d9cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b8f3 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b8f5 movsx ecx, word ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b8f9 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0058b8fd mov dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0058b904 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b908 fmul dword ptr [0x656d9c] */ { const u32 m_ = (u32)(0x656d9cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b90e fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b911 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b914 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b915:;
  /* 0058b915 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058b919 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058b91d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b91e movsx edx, word ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b921 mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 0058b925 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b929 fmul dword ptr [0x656d9c] */ { const u32 m_ = (u32)(0x656d9cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b92f fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b931 movsx edx, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b935 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b939 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b93d fmul dword ptr [0x656d9c] */ { const u32 m_ = (u32)(0x656d9cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b943 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b946 movsx eax, word ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b94a mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0058b94e fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b952 fmul dword ptr [0x656d9c] */ { const u32 m_ = (u32)(0x656d9cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b958 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b95b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b95e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b95f:;
  /* 0058b95f mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058b963 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058b967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b968 movsx edx, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b96b mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 0058b96f fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b973 fmul dword ptr [0x656d8c] */ { const u32 m_ = (u32)(0x656d8cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b979 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b97b movsx ecx, word ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b97f mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0058b983 mov dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0058b98a fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b98e fmul dword ptr [0x656d8c] */ { const u32 m_ = (u32)(0x656d8cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b994 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b997 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b99a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b99b:;
  /* 0058b99b mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058b99f mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058b9a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058b9a4 movsx edx, word ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b9a7 mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 0058b9ab fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b9af fmul dword ptr [0x656d8c] */ { const u32 m_ = (u32)(0x656d8cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b9b5 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b9b7 movsx edx, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b9bb mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058b9bf fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b9c3 fmul dword ptr [0x656d8c] */ { const u32 m_ = (u32)(0x656d8cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b9c9 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b9cc movsx eax, word ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058b9d0 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0058b9d4 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058b9d8 fmul dword ptr [0x656d8c] */ { const u32 m_ = (u32)(0x656d8cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058b9de fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058b9e1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058b9e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058b9e5:;
  /* 0058b9e5 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058b9e9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0058b9eb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0058b9ed mov edx, eax */ { edx = (u32)(eax); }
  /* 0058b9ef shr ecx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058b9f2 shr edx, 0x14 */ { u32 n_ = (20u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0058b9f5 and ecx, 0x3ff */ { u32 a_ = ecx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058b9fb and edx, 0x3ff */ { u32 a_ = edx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058ba01 and eax, 0x3ff */ { u32 a_ = eax, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058ba06 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058ba08 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 0058ba0c mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058ba10 mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0058ba14 fild qword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)(s64)M64(m_)); }
  /* 0058ba18 mov dword ptr [esp + 4], ecx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0058ba1c mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0058ba20 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ba22 fild qword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)(s64)M64(m_)); }
  /* 0058ba26 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058ba2a mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0058ba2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ba2f fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ba32 fild qword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)(s64)M64(m_)); }
  /* 0058ba36 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ba39 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058ba3c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058ba3d:;
  /* 0058ba3d mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0058ba41 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0058ba43 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0058ba45 and ecx, 0x3ff */ { u32 a_ = ecx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058ba4b test ch, 2 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058ba4e mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0058ba52 je 0x58ba5e */ if (ZF_) goto L_0058ba5e;
  /* 0058ba54 or ecx, 0xfffffc00 */ { u32 a_ = ecx, b_ = 0xfffffc00u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058ba5a mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
L_0058ba5e:;
  /* 0058ba5e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0058ba60 sar ecx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058ba63 and ecx, 0x3ff */ { u32 a_ = ecx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058ba69 test ch, 2 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058ba6c mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0058ba70 je 0x58ba7c */ if (ZF_) goto L_0058ba7c;
  /* 0058ba72 or ecx, 0xfffffc00 */ { u32 a_ = ecx, b_ = 0xfffffc00u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058ba78 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
L_0058ba7c:;
  /* 0058ba7c sar eax, 0x14 */ { u32 n_ = (20u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0058ba7f and eax, 0x3ff */ { u32 a_ = eax, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058ba84 test ah, 2 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058ba87 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 0058ba8b je 0x58ba96 */ if (ZF_) goto L_0058ba96;
  /* 0058ba8d or eax, 0xfffffc00 */ { u32 a_ = eax, b_ = 0xfffffc00u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058ba92 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
L_0058ba96:;
  /* 0058ba96 fild dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)(s32)M32(m_)); }
  /* 0058ba9a mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058ba9e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ba9f fmul dword ptr [0x62ef30] */ { const u32 m_ = (u32)(0x62ef30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058baa5 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058baa7 fild dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0058baab fmul dword ptr [0x62ef30] */ { const u32 m_ = (u32)(0x62ef30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bab1 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bab4 fild dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)(s32)M32(m_)); }
  /* 0058bab8 fmul dword ptr [0x62ef30] */ { const u32 m_ = (u32)(0x62ef30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058babe fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bac1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bac4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bac5:;
  /* 0058bac5 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bac9 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058bacb mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0058bacd mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 0058bad0 mov dword ptr [eax + 8], esi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(esi); }
  /* 0058bad3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058bad4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bad7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058bb20(CPU *c) {
  NATIVE_HOOK(0x58bb20u) REGS; LOADALL;
L_0058bb20:;
  /* 0058bb20 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058bb24 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bb27 cmp eax, 0xe */ { u32 a_ = eax, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058bb2a ja 0x58bd24 */ if (!(CF_|ZF_)) goto L_0058bd24;
  /* 0058bb30 jmp dword ptr [eax*4 + 0x58bd34] */ { const u32 m_ = (u32)(eax * 4u + 0x58bd34u); u32 t_ = M32(m_); switch (t_) { case 0x58bb37u: goto L_0058bb37; case 0x58bb4eu: goto L_0058bb4e; case 0x58bb64u: goto L_0058bb64; case 0x58bb9bu: goto L_0058bb9b; case 0x58bbc5u: goto L_0058bbc5; case 0x58bbedu: goto L_0058bbed; case 0x58bc23u: goto L_0058bc23; case 0x58bc57u: goto L_0058bc57; case 0x58bc8bu: goto L_0058bc8b; case 0x58bcc8u: goto L_0058bcc8; default: SAVEALL; call_ind(c, t_); return; } }
L_0058bb37:;
  /* 0058bb37 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bb3b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0058bb3d mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058bb41 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0058bb43 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0058bb4a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bb4d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bb4e:;
  /* 0058bb4e mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bb52 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058bb56 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0058bb58 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0058bb5a mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058bb5d mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0058bb60 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bb63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bb64:;
  /* 0058bb64 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bb68 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058bb6a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058bb6c mov cl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058bb6f mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058bb73 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058bb77 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bb7b fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bb81 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bb83 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058bb86 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058bb8a fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bb8e fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bb94 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bb97 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bb9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bb9b:;
  /* 0058bb9b mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bb9f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058bba1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058bba3 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058bba5 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058bba9 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058bbad fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bbb1 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bbb3 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058bbb6 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058bbba fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bbbe fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bbc1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bbc4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bbc5:;
  /* 0058bbc5 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bbc9 movsx ecx, word ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058bbcc mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058bbd0 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058bbd4 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bbd8 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bbda movsx edx, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058bbde mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058bbe2 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bbe6 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bbe9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bbec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bbed:;
  /* 0058bbed mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bbf1 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058bbf3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058bbf5 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058bbf7 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058bbfb mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058bbff fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bc03 fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bc09 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bc0b mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058bc0e mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058bc12 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bc16 fmul dword ptr [0x656f1c] */ { const u32 m_ = (u32)(0x656f1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bc1c fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bc1f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bc22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bc23:;
  /* 0058bc23 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bc27 movsx ecx, word ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058bc2a mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058bc2e mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058bc32 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bc36 fmul dword ptr [0x656d9c] */ { const u32 m_ = (u32)(0x656d9cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bc3c fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bc3e movsx edx, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058bc42 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058bc46 fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bc4a fmul dword ptr [0x656d9c] */ { const u32 m_ = (u32)(0x656d9cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bc50 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bc53 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bc56 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bc57:;
  /* 0058bc57 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bc5b movsx ecx, word ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058bc5e mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058bc62 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058bc66 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bc6a fmul dword ptr [0x656d8c] */ { const u32 m_ = (u32)(0x656d8cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bc70 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bc72 movsx edx, word ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0058bc76 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058bc7a fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bc7e fmul dword ptr [0x656d8c] */ { const u32 m_ = (u32)(0x656d8cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bc84 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bc87 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bc8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bc8b:;
  /* 0058bc8b mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058bc8f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0058bc91 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0058bc93 and eax, 0x3ff */ { u32 a_ = eax, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058bc98 shr ecx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058bc9b and ecx, 0x3ff */ { u32 a_ = ecx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058bca1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058bca3 mov dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(eax); }
  /* 0058bca7 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058bcab mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058bcaf fild qword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)(s64)M64(m_)); }
  /* 0058bcb3 mov dword ptr [esp], ecx */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(ecx); }
  /* 0058bcb7 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058bcbb fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bcbd fild qword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)(s64)M64(m_)); }
  /* 0058bcc1 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bcc4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bcc7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bcc8:;
  /* 0058bcc8 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058bccc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0058bcce mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0058bcd0 and ecx, 0x3ff */ { u32 a_ = ecx, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058bcd6 test ch, 2 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058bcd9 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058bcdd je 0x58bce9 */ if (ZF_) goto L_0058bce9;
  /* 0058bcdf or ecx, 0xfffffc00 */ { u32 a_ = ecx, b_ = 0xfffffc00u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058bce5 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
L_0058bce9:;
  /* 0058bce9 sar eax, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0058bcec and eax, 0x3ff */ { u32 a_ = eax, b_ = 0x3ffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058bcf1 test ah, 2 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058bcf4 mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0058bcf8 je 0x58bd03 */ if (ZF_) goto L_0058bd03;
  /* 0058bcfa or eax, 0xfffffc00 */ { u32 a_ = eax, b_ = 0xfffffc00u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058bcff mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
L_0058bd03:;
  /* 0058bd03 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0058bd07 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058bd0b fmul dword ptr [0x62ef30] */ { const u32 m_ = (u32)(0x62ef30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bd11 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bd13 fild dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0058bd17 fmul dword ptr [0x62ef30] */ { const u32 m_ = (u32)(0x62ef30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058bd1d fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058bd20 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bd23 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bd24:;
  /* 0058bd24 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058bd28 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058bd2a mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0058bd2c mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058bd2f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bd32 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058bd70(CPU *c) {
  NATIVE_HOOK(0x58bd70u) REGS; LOADALL;
L_0058bd70:;
  /* 0058bd70 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0058bd74 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0058bd78 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058bd79 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058bd7d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0058bd7f mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0058bd81 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058bd84 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0058bd87 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0058bd89 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0058bd8b mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058bd8e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0058bd91 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058bd95 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058bd98 jle 0x58bdf1 */ if ((ZF_|LT_)) goto L_0058bdf1;
  /* 0058bd9a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058bd9b lea edi, [eax - 1] */ edi = (u32)((u32)(eax + 0xffffffffu));
L_0058bd9e:;
  /* 0058bd9e fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058bda0 fcomp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058bda2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058bda4 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058bda9 jne 0x58bdb1 */ if (!ZF_) goto L_0058bdb1;
  /* 0058bdab mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0058bdad mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0058bdaf jmp 0x58bdc0 */ goto L_0058bdc0;
L_0058bdb1:;
  /* 0058bdb1 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0058bdb3 fcomp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058bdb5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058bdb7 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058bdba jp 0x58bdc0 */ if (PF_) goto L_0058bdc0;
  /* 0058bdbc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0058bdbe mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
L_0058bdc0:;
  /* 0058bdc0 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058bdc3 fcomp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058bdc6 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058bdc8 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058bdcd jne 0x58bdd7 */ if (!ZF_) goto L_0058bdd7;
  /* 0058bdcf mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058bdd2 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0058bdd5 jmp 0x58bdea */ goto L_0058bdea;
L_0058bdd7:;
  /* 0058bdd7 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058bdda fcomp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058bddd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058bddf test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058bde2 jp 0x58bdea */ if (PF_) goto L_0058bdea;
  /* 0058bde4 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058bde7 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
L_0058bdea:;
  /* 0058bdea add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058bded dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058bdee jne 0x58bd9e */ if (!ZF_) goto L_0058bd9e;
  /* 0058bdf0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0058bdf1:;
  /* 0058bdf1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058bdf2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058be00(CPU *c) {
  NATIVE_HOOK(0x58be00u) REGS; LOADALL;
L_0058be00:;
  /* 0058be00 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0058be04 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058be07 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 0058be0b lea ecx, [esp] */ ecx = (u32)((u32)(esp));
  /* 0058be0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058be10 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058be14 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058be15 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0058be16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058be17 call 0x58bd70 */ esp -= 4; M32(esp) = 0x58be1cu; SAVEALL; F_0058bd70(c); ABI_CHECK(0x58bd70u, 0x58be17u); RETCHK(0x58be1cu, 0x58be17u); LOADALL;
  /* 0058be1c fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058be20 fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058be26 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058be29 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0058be2e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058be30 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058be33 jp 0x58bedd */ if (PF_) goto L_0058bedd;
  /* 0058be39 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058be3d fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058be43 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058be45 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058be48 jp 0x58bedd */ if (PF_) goto L_0058bedd;
  /* 0058be4e fld dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)MF32(m_)); }
  /* 0058be52 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058be58 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058be5a and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058be5f jne 0x58be9a */ if (!ZF_) goto L_0058be9a;
  /* 0058be61 fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058be65 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058be6b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058be6d and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058be72 jne 0x58be9a */ if (!ZF_) goto L_0058be9a;
  /* 0058be74 mov eax, dword ptr [0x9bf86c] */ { const u32 m_ = (u32)(0x9bf86cu); eax = (u32)(M32(m_)); }
  /* 0058be79 test al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058be7b je 0x58be88 */ if (ZF_) goto L_0058be88;
  /* 0058be7d mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0058be82 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0058be84 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058be87 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058be88:;
  /* 0058be88 and al, 0x80 */ { u32 a_ = (eax & 0xffu), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0058be8a neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 0058be8c sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0058be8e and eax, 0xa */ { u32 a_ = eax, b_ = 0xau; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058be91 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058be94 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0058be96 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058be99 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058be9a:;
  /* 0058be9a fld dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)MF32(m_)); }
  /* 0058be9e fcomp dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058bea4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058bea6 and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058beab jne 0x58bedd */ if (!ZF_) goto L_0058bedd;
  /* 0058bead fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058beb1 fcomp dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058beb7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058beb9 and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058bebe jne 0x58bedd */ if (!ZF_) goto L_0058bedd;
  /* 0058bec0 mov al, byte ptr [0x9bf86c] */ { const u32 m_ = (u32)(0x9bf86cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058bec5 test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058bec7 je 0x58bed4 */ if (ZF_) goto L_0058bed4;
  /* 0058bec9 mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 0058bece mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0058bed0 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bed3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bed4:;
  /* 0058bed4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058bed6 jns 0x58bedd */ if (!SF_) goto L_0058bedd;
  /* 0058bed8 mov ecx, 0xe */ { ecx = (u32)(0xeu); }
L_0058bedd:;
  /* 0058bedd mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0058bedf add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058bee2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058bef0(CPU *c) {
  NATIVE_HOOK(0x58bef0u) REGS; LOADALL;
L_0058bef0:;
  /* 0058bef0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058bef1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058bef3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058bef6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058bef8 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058befa mov dword ptr [0x68d090], eax */ { const u32 m_ = (u32)(0x68d090u); M32(m_) = (u32)(eax); }
  /* 0058beff je 0x58bf6b */ if (ZF_) goto L_0058bf6b;
  /* 0058bf01 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0058bf03 mov dword ptr [0x674990], edx */ { const u32 m_ = (u32)(0x674990u); M32(m_) = (u32)(edx); }
  /* 0058bf09 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058bf0c mov dword ptr [0x674994], edx */ { const u32 m_ = (u32)(0x674994u); M32(m_) = (u32)(edx); }
  /* 0058bf12 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0058bf15 mov dword ptr [0x674998], edx */ { const u32 m_ = (u32)(0x674998u); M32(m_) = (u32)(edx); }
  /* 0058bf1b mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058bf1e mov dword ptr [0x6749a0], edx */ { const u32 m_ = (u32)(0x6749a0u); M32(m_) = (u32)(edx); }
  /* 0058bf24 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0058bf27 mov dword ptr [0x6749a4], edx */ { const u32 m_ = (u32)(0x6749a4u); M32(m_) = (u32)(edx); }
  /* 0058bf2d mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 0058bf30 mov dword ptr [0x6749a8], edx */ { const u32 m_ = (u32)(0x6749a8u); M32(m_) = (u32)(edx); }
  /* 0058bf36 mov edx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058bf39 mov dword ptr [0x6749b0], edx */ { const u32 m_ = (u32)(0x6749b0u); M32(m_) = (u32)(edx); }
  /* 0058bf3f mov edx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); edx = (u32)(M32(m_)); }
  /* 0058bf42 mov dword ptr [0x6749b4], edx */ { const u32 m_ = (u32)(0x6749b4u); M32(m_) = (u32)(edx); }
  /* 0058bf48 mov edx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); edx = (u32)(M32(m_)); }
  /* 0058bf4b mov dword ptr [0x6749b8], edx */ { const u32 m_ = (u32)(0x6749b8u); M32(m_) = (u32)(edx); }
  /* 0058bf51 mov edx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); edx = (u32)(M32(m_)); }
  /* 0058bf54 mov dword ptr [0x6749c0], edx */ { const u32 m_ = (u32)(0x6749c0u); M32(m_) = (u32)(edx); }
  /* 0058bf5a mov edx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); edx = (u32)(M32(m_)); }
  /* 0058bf5d mov dword ptr [0x6749c4], edx */ { const u32 m_ = (u32)(0x6749c4u); M32(m_) = (u32)(edx); }
  /* 0058bf63 mov eax, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); eax = (u32)(M32(m_)); }
  /* 0058bf66 mov dword ptr [0x6749c8], eax */ { const u32 m_ = (u32)(0x6749c8u); M32(m_) = (u32)(eax); }
L_0058bf6b:;
  /* 0058bf6b mov dword ptr [0x68d094], ecx */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(ecx); }
  /* 0058bf71 mov dword ptr [0x68d098], ecx */ { const u32 m_ = (u32)(0x68d098u); M32(m_) = (u32)(ecx); }
  /* 0058bf77 mov dword ptr [0x68d09c], ecx */ { const u32 m_ = (u32)(0x68d09cu); M32(m_) = (u32)(ecx); }
  /* 0058bf7d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058bf7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058bf80(CPU *c) {
  NATIVE_HOOK(0x58bf80u) REGS; LOADALL;
L_0058bf80:;
  /* 0058bf80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058bf81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058bf83 mov eax, dword ptr [0x68f8a0] */ { const u32 m_ = (u32)(0x68f8a0u); eax = (u32)(M32(m_)); }
  /* 0058bf88 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058bf8a jne 0x58bfaa */ if (!ZF_) goto L_0058bfaa;
  /* 0058bf8c push 0x67cfb8 */ { u32 v_ = 0x67cfb8u; esp -= 4; M32(esp) = v_; }
  /* 0058bf91 push 0x9bf500 */ { u32 v_ = 0x9bf500u; esp -= 4; M32(esp) = v_; }
  /* 0058bf96 push 0x68d050 */ { u32 v_ = 0x68d050u; esp -= 4; M32(esp) = v_; }
  /* 0058bf9b call 0x58d766 */ esp -= 4; M32(esp) = 0x58bfa0u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58bf9bu); RETCHK(0x58bfa0u, 0x58bf9bu); LOADALL;
  /* 0058bfa0 mov eax, 0x68d050 */ { eax = (u32)(0x68d050u); }
  /* 0058bfa5 mov dword ptr [0x68f8a0], eax */ { const u32 m_ = (u32)(0x68f8a0u); M32(m_) = (u32)(eax); }
L_0058bfaa:;
  /* 0058bfaa mov ecx, dword ptr [0x68d090] */ { const u32 m_ = (u32)(0x68d090u); ecx = (u32)(M32(m_)); }
  /* 0058bfb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058bfb1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058bfb3 je 0x58bfc5 */ if (ZF_) goto L_0058bfc5;
  /* 0058bfb5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058bfb8 push 0x674990 */ { u32 v_ = 0x674990u; esp -= 4; M32(esp) = v_; }
  /* 0058bfbd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058bfbe call 0x58da41 */ esp -= 4; M32(esp) = 0x58bfc3u; SAVEALL; F_0058da41(c); ABI_CHECK(0x58da41u, 0x58bfbeu); RETCHK(0x58bfc3u, 0x58bfbeu); LOADALL;
  /* 0058bfc3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058bfc4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058bfc5:;
  /* 0058bfc5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0058bfc8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058bfc9 call 0x58d9b7 */ esp -= 4; M32(esp) = 0x58bfceu; SAVEALL; F_0058d9b7(c); ABI_CHECK(0x58d9b7u, 0x58bfc9u); RETCHK(0x58bfceu, 0x58bfc9u); LOADALL;
  /* 0058bfce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058bfcf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058bfd0(CPU *c) {
  NATIVE_HOOK(0x58bfd0u) REGS; LOADALL;
L_0058bfd0:;
  /* 0058bfd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058bfd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058bfd3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058bfd4 mov esi, dword ptr [0x68d094] */ { const u32 m_ = (u32)(0x68d094u); esi = (u32)(M32(m_)); }
  /* 0058bfda test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058bfdc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058bfdd jne 0x58c098 */ if (!ZF_) goto L_0058c098;
  /* 0058bfe3 mov eax, dword ptr [0x68d090] */ { const u32 m_ = (u32)(0x68d090u); eax = (u32)(M32(m_)); }
  /* 0058bfe8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058bfea je 0x58c087 */ if (ZF_) goto L_0058c087;
  /* 0058bff0 mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 0058bff3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0058bff5 and ecx, 0x20000 */ { u32 a_ = ecx, b_ = 0x20000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058bffb cmp ecx, 0x20000 */ { u32 a_ = ecx, b_ = 0x20000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c001 je 0x58c087 */ if (ZF_) goto L_0058c087;
  /* 0058c007 mov edx, esi */ { edx = (u32)(esi); }
  /* 0058c009 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c00a and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058c00d push 0x6749d0 */ { u32 v_ = 0x6749d0u; esp -= 4; M32(esp) = v_; }
  /* 0058c012 cmp dl, 3 */ { u32 a_ = (edx & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0058c015 jne 0x58c03e */ if (!ZF_) goto L_0058c03e;
  /* 0058c017 call 0x58c0b0 */ esp -= 4; M32(esp) = 0x58c01cu; SAVEALL; F_0058c0b0(c); ABI_CHECK(0x58c0b0u, 0x58c017u); RETCHK(0x58c01cu, 0x58c017u); LOADALL;
  /* 0058c01c mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0058c01f mov esi, 0x6749d0 */ { esi = (u32)(0x6749d0u); }
  /* 0058c024 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0058c029 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c02c mov dword ptr [0x68d098], esi */ { const u32 m_ = (u32)(0x68d098u); M32(m_) = (u32)(esi); }
  /* 0058c032 mov dword ptr [0x68d094], esi */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(esi); }
  /* 0058c038 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0058c03a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c03b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c03c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c03d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058c03e:;
  /* 0058c03e call 0x5af080 */ esp -= 4; M32(esp) = 0x58c043u; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x58c03eu); RETCHK(0x58c043u, 0x58c03eu); LOADALL;
  /* 0058c043 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0058c046 mov esi, 0x6749d0 */ { esi = (u32)(0x6749d0u); }
  /* 0058c04b mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0058c050 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c053 mov dword ptr [0x6749dc], 0 */ { const u32 m_ = (u32)(0x6749dcu); M32(m_) = (u32)(0x0u); }
  /* 0058c05d mov dword ptr [0x6749ec], 0 */ { const u32 m_ = (u32)(0x6749ecu); M32(m_) = (u32)(0x0u); }
  /* 0058c067 mov dword ptr [0x6749fc], 0 */ { const u32 m_ = (u32)(0x6749fcu); M32(m_) = (u32)(0x0u); }
  /* 0058c071 mov dword ptr [0x674a0c], 0x3f800000 */ { const u32 m_ = (u32)(0x674a0cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0058c07b mov dword ptr [0x68d094], esi */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(esi); }
  /* 0058c081 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0058c083 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c084 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c085 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c086 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058c087:;
  /* 0058c087 mov esi, 0x62ef50 */ { esi = (u32)(0x62ef50u); }
  /* 0058c08c mov dword ptr [0x68d098], esi */ { const u32 m_ = (u32)(0x68d098u); M32(m_) = (u32)(esi); }
  /* 0058c092 mov dword ptr [0x68d094], esi */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(esi); }
L_0058c098:;
  /* 0058c098 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0058c09b mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0058c0a0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0058c0a2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c0a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c0a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c0a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058c0b0(CPU *c) {
  NATIVE_HOOK(0x58c0b0u) REGS; LOADALL;
L_0058c0b0:;
  /* 0058c0b0 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c0b4 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0058c0b8 fld dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058c0bb fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c0be fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058c0c1 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c0c3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c0c5 fld dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058c0c8 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c0cb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c0cd fchs */ ST(0) = -ST(0);
  /* 0058c0cf fstp dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c0d2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0058c0d4 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0058c0d6 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058c0d9 mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
  /* 0058c0dc mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0058c0df mov dword ptr [ecx + 0x20], edx */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(edx); }
  /* 0058c0e2 fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058c0e5 fmul dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c0e8 fld dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058c0eb fmul dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c0ee faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c0f0 fld dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058c0f3 fmul dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c0f6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c0f8 fchs */ ST(0) = -ST(0);
  /* 0058c0fa fstp dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c0fd mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058c100 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058c103 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0058c106 mov dword ptr [ecx + 0x14], edx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(edx); }
  /* 0058c109 mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 0058c10c mov dword ptr [ecx + 0x24], edx */ { const u32 m_ = (u32)(ecx + 0x24u); M32(m_) = (u32)(edx); }
  /* 0058c10f fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058c112 fmul dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c115 fld dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058c118 fmul dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c11b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c11d fld dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058c120 fmul dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c123 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c125 fchs */ ST(0) = -ST(0);
  /* 0058c127 fstp dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c12a mov edx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058c12d mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0058c130 mov edx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); edx = (u32)(M32(m_)); }
  /* 0058c133 mov dword ptr [ecx + 0x18], edx */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(edx); }
  /* 0058c136 mov eax, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 0058c139 mov dword ptr [ecx + 0x28], eax */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(eax); }
  /* 0058c13c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058c140(CPU *c) {
  NATIVE_HOOK(0x58c140u) REGS; LOADALL;
L_0058c140:;
  /* 0058c140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c143 mov eax, dword ptr [0x68d098] */ { const u32 m_ = (u32)(0x68d098u); eax = (u32)(M32(m_)); }
  /* 0058c148 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c14a jne 0x58c19e */ if (!ZF_) goto L_0058c19e;
  /* 0058c14c mov ecx, dword ptr [0x68d090] */ { const u32 m_ = (u32)(0x68d090u); ecx = (u32)(M32(m_)); }
  /* 0058c152 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c154 je 0x58c24d */ if (ZF_) goto L_0058c24d;
  /* 0058c15a mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058c15d mov edx, eax */ { edx = (u32)(eax); }
  /* 0058c15f and edx, 0x20000 */ { u32 a_ = edx, b_ = 0x20000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058c165 cmp edx, 0x20000 */ { u32 a_ = edx, b_ = 0x20000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c16b je 0x58c24d */ if (ZF_) goto L_0058c24d;
  /* 0058c171 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058c174 cmp al, 3 */ { u32 a_ = (eax & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0058c176 mov eax, dword ptr [0x68d094] */ { const u32 m_ = (u32)(0x68d094u); eax = (u32)(M32(m_)); }
  /* 0058c17b jne 0x58c1b9 */ if (!ZF_) goto L_0058c1b9;
  /* 0058c17d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c17f jne 0x58c199 */ if (!ZF_) goto L_0058c199;
  /* 0058c181 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c182 push 0x6749d0 */ { u32 v_ = 0x6749d0u; esp -= 4; M32(esp) = v_; }
  /* 0058c187 call 0x58c0b0 */ esp -= 4; M32(esp) = 0x58c18cu; SAVEALL; F_0058c0b0(c); ABI_CHECK(0x58c0b0u, 0x58c187u); RETCHK(0x58c18cu, 0x58c187u); LOADALL;
  /* 0058c18c mov eax, 0x6749d0 */ { eax = (u32)(0x6749d0u); }
  /* 0058c191 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c194 mov dword ptr [0x68d094], eax */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(eax); }
L_0058c199:;
  /* 0058c199 mov dword ptr [0x68d098], eax */ { const u32 m_ = (u32)(0x68d098u); M32(m_) = (u32)(eax); }
L_0058c19e:;
  /* 0058c19e cmp eax, 0x62ef50 */ { u32 a_ = eax, b_ = 0x62ef50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c1a3 je 0x58c25c */ if (ZF_) goto L_0058c25c;
  /* 0058c1a9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c1ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c1ad mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c1b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c1b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c1b2 call 0x58cfa4 */ esp -= 4; M32(esp) = 0x58c1b7u; SAVEALL; F_0058cfa4(c); ABI_CHECK(0x58cfa4u, 0x58c1b2u); RETCHK(0x58c1b7u, 0x58c1b2u); LOADALL;
  /* 0058c1b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c1b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058c1b9:;
  /* 0058c1b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c1bb jne 0x58c1fd */ if (!ZF_) goto L_0058c1fd;
  /* 0058c1bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c1be push 0x6749d0 */ { u32 v_ = 0x6749d0u; esp -= 4; M32(esp) = v_; }
  /* 0058c1c3 call 0x5af080 */ esp -= 4; M32(esp) = 0x58c1c8u; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x58c1c3u); RETCHK(0x58c1c8u, 0x58c1c3u); LOADALL;
  /* 0058c1c8 mov eax, 0x6749d0 */ { eax = (u32)(0x6749d0u); }
  /* 0058c1cd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c1d0 mov dword ptr [0x6749dc], 0 */ { const u32 m_ = (u32)(0x6749dcu); M32(m_) = (u32)(0x0u); }
  /* 0058c1da mov dword ptr [0x6749ec], 0 */ { const u32 m_ = (u32)(0x6749ecu); M32(m_) = (u32)(0x0u); }
  /* 0058c1e4 mov dword ptr [0x6749fc], 0 */ { const u32 m_ = (u32)(0x6749fcu); M32(m_) = (u32)(0x0u); }
  /* 0058c1ee mov dword ptr [0x674a0c], 0x3f800000 */ { const u32 m_ = (u32)(0x674a0cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0058c1f8 mov dword ptr [0x68d094], eax */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(eax); }
L_0058c1fd:;
  /* 0058c1fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c1fe push 0x674a10 */ { u32 v_ = 0x674a10u; esp -= 4; M32(esp) = v_; }
  /* 0058c203 call 0x5ae930 */ esp -= 4; M32(esp) = 0x58c208u; SAVEALL; F_005ae930(c); ABI_CHECK(0x5ae930u, 0x58c203u); RETCHK(0x58c208u, 0x58c203u); LOADALL;
  /* 0058c208 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c20b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c20e mov eax, 0x674a10 */ { eax = (u32)(0x674a10u); }
  /* 0058c213 mov dword ptr [0x674a1c], 0 */ { const u32 m_ = (u32)(0x674a1cu); M32(m_) = (u32)(0x0u); }
  /* 0058c21d mov dword ptr [0x68d098], eax */ { const u32 m_ = (u32)(0x68d098u); M32(m_) = (u32)(eax); }
  /* 0058c222 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c223 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c226 mov dword ptr [0x674a2c], 0 */ { const u32 m_ = (u32)(0x674a2cu); M32(m_) = (u32)(0x0u); }
  /* 0058c230 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c231 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c232 mov dword ptr [0x674a3c], 0 */ { const u32 m_ = (u32)(0x674a3cu); M32(m_) = (u32)(0x0u); }
  /* 0058c23c mov dword ptr [0x674a4c], 0x3f800000 */ { const u32 m_ = (u32)(0x674a4cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0058c246 call 0x58cfa4 */ esp -= 4; M32(esp) = 0x58c24bu; SAVEALL; F_0058cfa4(c); ABI_CHECK(0x58cfa4u, 0x58c246u); RETCHK(0x58c24bu, 0x58c246u); LOADALL;
  /* 0058c24b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c24c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058c24d:;
  /* 0058c24d mov eax, 0x62ef50 */ { eax = (u32)(0x62ef50u); }
  /* 0058c252 mov dword ptr [0x68d094], eax */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(eax); }
  /* 0058c257 mov dword ptr [0x68d098], eax */ { const u32 m_ = (u32)(0x68d098u); M32(m_) = (u32)(eax); }
L_0058c25c:;
  /* 0058c25c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c25f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c262 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0058c264 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0058c266 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058c269 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058c26c mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c26f mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0058c272 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c273 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058c280(CPU *c) {
  NATIVE_HOOK(0x58c280u) REGS; LOADALL;
L_0058c280:;
  /* 0058c280 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c281 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c283 mov eax, dword ptr [0x68d094] */ { const u32 m_ = (u32)(0x68d094u); eax = (u32)(M32(m_)); }
  /* 0058c288 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058c289 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c28b jne 0x58c352 */ if (!ZF_) goto L_0058c352;
  /* 0058c291 mov eax, dword ptr [0x68d090] */ { const u32 m_ = (u32)(0x68d090u); eax = (u32)(M32(m_)); }
  /* 0058c296 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c298 je 0x58c32f */ if (ZF_) goto L_0058c32f;
  /* 0058c29e mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 0058c2a1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0058c2a3 and ecx, 0x20000 */ { u32 a_ = ecx, b_ = 0x20000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c2a9 cmp ecx, 0x20000 */ { u32 a_ = ecx, b_ = 0x20000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c2af je 0x58c32f */ if (ZF_) goto L_0058c32f;
  /* 0058c2b1 mov edx, esi */ { edx = (u32)(esi); }
  /* 0058c2b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c2b4 and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058c2b7 push 0x6749d0 */ { u32 v_ = 0x6749d0u; esp -= 4; M32(esp) = v_; }
  /* 0058c2bc cmp dl, 3 */ { u32 a_ = (edx & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0058c2bf jne 0x58c2e4 */ if (!ZF_) goto L_0058c2e4;
  /* 0058c2c1 call 0x58c0b0 */ esp -= 4; M32(esp) = 0x58c2c6u; SAVEALL; F_0058c0b0(c); ABI_CHECK(0x58c0b0u, 0x58c2c1u); RETCHK(0x58c2c6u, 0x58c2c1u); LOADALL;
  /* 0058c2c6 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c2c9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c2cc mov eax, 0x6749d0 */ { eax = (u32)(0x6749d0u); }
  /* 0058c2d1 mov dword ptr [0x68d094], eax */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(eax); }
  /* 0058c2d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c2d7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c2da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c2db push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c2dc call 0x58ce91 */ esp -= 4; M32(esp) = 0x58c2e1u; SAVEALL; F_0058ce91(c); ABI_CHECK(0x58ce91u, 0x58c2dcu); RETCHK(0x58c2e1u, 0x58c2dcu); LOADALL;
  /* 0058c2e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c2e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c2e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058c2e4:;
  /* 0058c2e4 call 0x5af080 */ esp -= 4; M32(esp) = 0x58c2e9u; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x58c2e4u); RETCHK(0x58c2e9u, 0x58c2e4u); LOADALL;
  /* 0058c2e9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c2ec add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c2ef mov eax, 0x6749d0 */ { eax = (u32)(0x6749d0u); }
  /* 0058c2f4 mov dword ptr [0x6749dc], 0 */ { const u32 m_ = (u32)(0x6749dcu); M32(m_) = (u32)(0x0u); }
  /* 0058c2fe mov dword ptr [0x68d094], eax */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(eax); }
  /* 0058c303 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c304 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c307 mov dword ptr [0x6749ec], 0 */ { const u32 m_ = (u32)(0x6749ecu); M32(m_) = (u32)(0x0u); }
  /* 0058c311 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c312 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c313 mov dword ptr [0x6749fc], 0 */ { const u32 m_ = (u32)(0x6749fcu); M32(m_) = (u32)(0x0u); }
  /* 0058c31d mov dword ptr [0x674a0c], 0x3f800000 */ { const u32 m_ = (u32)(0x674a0cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0058c327 call 0x58ce91 */ esp -= 4; M32(esp) = 0x58c32cu; SAVEALL; F_0058ce91(c); ABI_CHECK(0x58ce91u, 0x58c327u); RETCHK(0x58c32cu, 0x58c327u); LOADALL;
  /* 0058c32c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c32d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c32e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058c32f:;
  /* 0058c32f mov dword ptr [0x68d094], 0x62ef50 */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(0x62ef50u); }
L_0058c339:;
  /* 0058c339 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c33c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c33f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c340 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0058c342 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0058c344 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058c347 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058c34a mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c34d mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0058c350 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c351 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058c352:;
  /* 0058c352 cmp eax, 0x62ef50 */ { u32 a_ = eax, b_ = 0x62ef50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c357 je 0x58c339 */ if (ZF_) goto L_0058c339;
  /* 0058c359 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c35c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c35d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c360 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c361 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c362 call 0x58ce91 */ esp -= 4; M32(esp) = 0x58c367u; SAVEALL; F_0058ce91(c); ABI_CHECK(0x58ce91u, 0x58c362u); RETCHK(0x58c367u, 0x58c362u); LOADALL;
  /* 0058c367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c368 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c369 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058c370(CPU *c) {
  NATIVE_HOOK(0x58c370u) REGS; LOADALL;
L_0058c370:;
  /* 0058c370 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c371 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c373 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c376 mov ecx, dword ptr [0x68d090] */ { const u32 m_ = (u32)(0x68d090u); ecx = (u32)(M32(m_)); }
  /* 0058c37c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c37e je 0x58c42f */ if (ZF_) goto L_0058c42f;
  /* 0058c384 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058c387 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058c38a cmp al, 3 */ { u32 a_ = (eax & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0058c38c je 0x58c42f */ if (ZF_) goto L_0058c42f;
  /* 0058c392 mov eax, dword ptr [0x68d094] */ { const u32 m_ = (u32)(0x68d094u); eax = (u32)(M32(m_)); }
  /* 0058c397 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c399 jne 0x58c3db */ if (!ZF_) goto L_0058c3db;
  /* 0058c39b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c39c push 0x6749d0 */ { u32 v_ = 0x6749d0u; esp -= 4; M32(esp) = v_; }
  /* 0058c3a1 call 0x5af080 */ esp -= 4; M32(esp) = 0x58c3a6u; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x58c3a1u); RETCHK(0x58c3a6u, 0x58c3a1u); LOADALL;
  /* 0058c3a6 mov eax, 0x6749d0 */ { eax = (u32)(0x6749d0u); }
  /* 0058c3ab add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c3ae mov dword ptr [0x6749dc], 0 */ { const u32 m_ = (u32)(0x6749dcu); M32(m_) = (u32)(0x0u); }
  /* 0058c3b8 mov dword ptr [0x6749ec], 0 */ { const u32 m_ = (u32)(0x6749ecu); M32(m_) = (u32)(0x0u); }
  /* 0058c3c2 mov dword ptr [0x6749fc], 0 */ { const u32 m_ = (u32)(0x6749fcu); M32(m_) = (u32)(0x0u); }
  /* 0058c3cc mov dword ptr [0x674a0c], 0x3f800000 */ { const u32 m_ = (u32)(0x674a0cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0058c3d6 mov dword ptr [0x68d094], eax */ { const u32 m_ = (u32)(0x68d094u); M32(m_) = (u32)(eax); }
L_0058c3db:;
  /* 0058c3db lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0058c3de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c3df lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0058c3e2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c3e3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0058c3e4 mov dword ptr [ebp - 0x10], 0x3f13cd3a */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3f13cd3au); }
  /* 0058c3eb mov dword ptr [ebp - 0xc], 0x3f13cd3a */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x3f13cd3au); }
  /* 0058c3f2 mov dword ptr [ebp - 8], 0x3f13cd3a */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x3f13cd3au); }
  /* 0058c3f9 call 0x58cfa4 */ esp -= 4; M32(esp) = 0x58c3feu; SAVEALL; F_0058cfa4(c); ABI_CHECK(0x58cfa4u, 0x58c3f9u); RETCHK(0x58c3feu, 0x58c3f9u); LOADALL;
  /* 0058c3fe fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058c401 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c404 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058c407 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c40a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c40c fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058c40f fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c412 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c414 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c417 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0058c41a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c41b call 0x5aaa40 */ esp -= 4; M32(esp) = 0x58c420u; SAVEALL; F_005aaa40(c); ABI_CHECK(0x5aaa40u, 0x58c41bu); RETCHK(0x58c420u, 0x58c41bu); LOADALL;
  /* 0058c420 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c423 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c426 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c429 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c42b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0058c42d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c42e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0058c42f:;
  /* 0058c42f fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058c432 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0058c435 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c437 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0058c439 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c43a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0058c440(CPU *c) {
  NATIVE_HOOK(0x58c440u) REGS; LOADALL;
L_0058c440:;
  /* 0058c440 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c442 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c443 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c445 sub esp, 0x334 */ { u32 a_ = esp, b_ = 0x334u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058c44b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058c44c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058c44d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058c44f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058c450 lea ecx, [ebp - 0x334] */ ecx = (u32)((u32)(ebp + 0xfffffcccu));
  /* 0058c456 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0058c459 call 0x593114 */ esp -= 4; M32(esp) = 0x58c45eu; SAVEALL; F_00593114(c); ABI_CHECK(0x593114u, 0x58c459u); RETCHK(0x58c45eu, 0x58c459u); LOADALL;
  /* 0058c45e mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 0058c461 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c463 je 0x58c467 */ if (ZF_) goto L_0058c467;
  /* 0058c465 mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
L_0058c467:;
  /* 0058c467 test dword ptr [ebp + 0x18], 0xfffffffc */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c46e je 0x58c477 */ if (ZF_) goto L_0058c477;
  /* 0058c470 mov edi, 0x8876086c */ { edi = (u32)(0x8876086cu); }
  /* 0058c475 jmp 0x58c4ec */ goto L_0058c4ec;
L_0058c477:;
  /* 0058c477 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c47a lea ecx, [ebp - 0x334] */ ecx = (u32)((u32)(ebp + 0xfffffcccu));
  /* 0058c480 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c483 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c486 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c489 call 0x59456e */ esp -= 4; M32(esp) = 0x58c48eu; SAVEALL; F_0059456e(c); ABI_CHECK(0x59456eu, 0x58c489u); RETCHK(0x58c48eu, 0x58c489u); LOADALL;
  /* 0058c48e mov edi, eax */ { edi = (u32)(eax); }
  /* 0058c490 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c492 jl 0x58c4ec */ if (LT_) goto L_0058c4ec;
  /* 0058c494 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0058c49a call 0x596046 */ esp -= 4; M32(esp) = 0x58c49fu; SAVEALL; F_00596046(c); ABI_CHECK(0x596046u, 0x58c49au); RETCHK(0x58c49fu, 0x58c49au); LOADALL;
  /* 0058c49f lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0058c4a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c4a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058c4a4 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c4a7 lea eax, [ebp - 0x334] */ eax = (u32)((u32)(ebp + 0xfffffcccu));
  /* 0058c4ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c4ae lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0058c4b4 call 0x599256 */ esp -= 4; M32(esp) = 0x58c4b9u; SAVEALL; F_00599256(c); ABI_CHECK(0x599256u, 0x58c4b4u); RETCHK(0x58c4b9u, 0x58c4b4u); LOADALL;
  /* 0058c4b9 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0058c4bf mov edi, eax */ { edi = (u32)(eax); }
  /* 0058c4c1 call 0x598693 */ esp -= 4; M32(esp) = 0x58c4c6u; SAVEALL; F_00598693(c); ABI_CHECK(0x598693u, 0x58c4c1u); RETCHK(0x58c4c6u, 0x58c4c1u); LOADALL;
  /* 0058c4c6 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c4c8 jl 0x58c4ec */ if (LT_) goto L_0058c4ec;
  /* 0058c4ca lea ecx, [ebp - 0x31c] */ ecx = (u32)((u32)(ebp + 0xfffffce4u));
  /* 0058c4d0 call 0x594bdc */ esp -= 4; M32(esp) = 0x58c4d5u; SAVEALL; F_00594bdc(c); ABI_CHECK(0x594bdcu, 0x58c4d0u); RETCHK(0x58c4d5u, 0x58c4d0u); LOADALL;
  /* 0058c4d5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c4d7 je 0x58c4e0 */ if (ZF_) goto L_0058c4e0;
  /* 0058c4d9 mov edi, 0x88760b59 */ { edi = (u32)(0x88760b59u); }
  /* 0058c4de jmp 0x58c4ec */ goto L_0058c4ec;
L_0058c4e0:;
  /* 0058c4e0 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c4e2 je 0x58c4ec */ if (ZF_) goto L_0058c4ec;
  /* 0058c4e4 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0058c4e7 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0058c4e9 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
L_0058c4ec:;
  /* 0058c4ec cmp dword ptr [ebp + 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c4ef je 0x58c4ff */ if (ZF_) goto L_0058c4ff;
  /* 0058c4f1 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c4f4 lea ecx, [ebp - 0x31c] */ ecx = (u32)((u32)(ebp + 0xfffffce4u));
  /* 0058c4fa call 0x594b6e */ esp -= 4; M32(esp) = 0x58c4ffu; SAVEALL; F_00594b6e(c); ABI_CHECK(0x594b6eu, 0x58c4fau); RETCHK(0x58c4ffu, 0x58c4fau); LOADALL;
L_0058c4ff:;
  /* 0058c4ff mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0058c502 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c504 je 0x58c50f */ if (ZF_) goto L_0058c50f;
  /* 0058c506 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0058c508 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058c509 call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58c50cu; SAVEALL; call_ind(c, t_); RETCHK(0x58c50cu, 0x58c509u); LOADALL; }
  /* 0058c50c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
L_0058c50f:;
  /* 0058c50f lea ecx, [ebp - 0x334] */ ecx = (u32)((u32)(ebp + 0xfffffcccu));
  /* 0058c515 call 0x593201 */ esp -= 4; M32(esp) = 0x58c51au; SAVEALL; F_00593201(c); ABI_CHECK(0x593201u, 0x58c515u); RETCHK(0x58c51au, 0x58c515u); LOADALL;
  /* 0058c51a mov eax, edi */ { eax = (u32)(edi); }
  /* 0058c51c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c51d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c51e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058c51f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058c520 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0058c523(CPU *c) {
  NATIVE_HOOK(0x58c523u) REGS; LOADALL;
L_0058c523:;
  /* 0058c523 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c525 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c526 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c528 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c529 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058c52b cmp dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c52e jne 0x58c537 */ if (!ZF_) goto L_0058c537;
  /* 0058c530 mov eax, 0x8876086c */ { eax = (u32)(0x8876086cu); }
  /* 0058c535 jmp 0x58c595 */ goto L_0058c595;
L_0058c537:;
  /* 0058c537 push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 0058c539 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 0058c53a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058c53b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058c53c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0058c53f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0058c540:;
  /* 0058c540 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0058c543 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0058c545 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0058c547 lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 0058c54a mov esi, dword ptr [ecx*4 + 0x62ef90] */ { const u32 m_ = (u32)(ecx * 4u + 0x62ef90u); esi = (u32)(M32(m_)); }
L_0058c551:;
  /* 0058c551 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058c553 mov cl, bl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0058c555 cmp bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0058c557 jne 0x58c573 */ if (!ZF_) goto L_0058c573;
  /* 0058c559 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058c55b je 0x58c56f */ if (ZF_) goto L_0058c56f;
  /* 0058c55d mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0058c560 mov cl, bl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0058c562 cmp bl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0058c565 jne 0x58c573 */ if (!ZF_) goto L_0058c573;
  /* 0058c567 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058c568 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058c569 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058c56a inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058c56b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058c56d jne 0x58c551 */ if (!ZF_) goto L_0058c551;
L_0058c56f:;
  /* 0058c56f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c571 jmp 0x58c578 */ goto L_0058c578;
L_0058c573:;
  /* 0058c573 sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 0058c575 sbb ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
L_0058c578:;
  /* 0058c578 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c57a je 0x58c599 */ if (ZF_) goto L_0058c599;
  /* 0058c57c jge 0x58c583 */ if (!LT_) goto L_0058c583;
  /* 0058c57e lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0058c581 jmp 0x58c586 */ goto L_0058c586;
L_0058c583:;
  /* 0058c583 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_0058c586:;
  /* 0058c586 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0058c589 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c58b jb 0x58c540 */ if (CF_) goto L_0058c540;
L_0058c58d:;
  /* 0058c58d mov eax, 0x80004005 */ { eax = (u32)(0x80004005u); }
L_0058c592:;
  /* 0058c592 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c593 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c594 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0058c595:;
  /* 0058c595 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058c596 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0058c599:;
  /* 0058c599 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 0058c59c shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0058c59f mov ecx, dword ptr [eax + 0x62ef98] */ { const u32 m_ = (u32)(eax + 0x62ef98u); ecx = (u32)(M32(m_)); }
  /* 0058c5a5 and ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c5a8 cmp ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c5ab jne 0x58c58d */ if (!ZF_) goto L_0058c58d;
  /* 0058c5ad mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0058c5b0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c5b2 je 0x58c5bd */ if (ZF_) goto L_0058c5bd;
  /* 0058c5b4 lea esi, [eax + 0x62ef90] */ esi = (u32)((u32)(eax + 0x62ef90u));
  /* 0058c5ba movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058c5bb movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058c5bc movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
L_0058c5bd:;
  /* 0058c5bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058c5bf jmp 0x58c592 */ goto L_0058c592;
}

void F_0058c5c1(CPU *c) {
  NATIVE_HOOK(0x58c5c1u) REGS; LOADALL;
L_0058c5c1:;
  /* 0058c5c1 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c5c3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c5c4 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c5c6 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058c5c9 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058c5cc fld dword ptr [0x63131c] */ { const u32 m_ = (u32)(0x63131cu); FPUSH((double)MF32(m_)); }
  /* 0058c5d2 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 0058c5d4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058c5d6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058c5d9 jp 0x58c5ed */ if (PF_) goto L_0058c5ed;
  /* 0058c5db fcomp dword ptr [0x631318] */ { const u32 m_ = (u32)(0x631318u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058c5e1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058c5e3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058c5e6 jp 0x58c5ef */ if (PF_) goto L_0058c5ef;
  /* 0058c5e8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058c5ea inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058c5eb jmp 0x58c5f1 */ goto L_0058c5f1;
L_0058c5ed:;
  /* 0058c5ed fstp st(0) */ ST(0) = ST(0); FPOP();
L_0058c5ef:;
  /* 0058c5ef xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0058c5f1:;
  /* 0058c5f1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c5f2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058c5f5(CPU *c) {
  NATIVE_HOOK(0x58c5f5u) REGS; LOADALL;
L_0058c5f5:;
  /* 0058c5f5 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c5f7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c5f8 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c5fa push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c5fc call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c601u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c5fcu); RETCHK(0x58c601u, 0x58c5fcu); LOADALL;
  /* 0058c601 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c602 jmp dword ptr [0x674b78] */ { const u32 m_ = (u32)(0x674b78u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c608(CPU *c) {
  NATIVE_HOOK(0x58c608u) REGS; LOADALL;
L_0058c608:;
  /* 0058c608 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c60a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c60b mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c60d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c610 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058c611 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058c613 cmp dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c616 jbe 0x58c6a5 */ if ((CF_|ZF_)) goto L_0058c6a5;
  /* 0058c61c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058c61d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0058c61e:;
  /* 0058c61e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c621 mov ecx, dword ptr [ecx + ebx*4] */ { const u32 m_ = (u32)(ecx + ebx * 4u); ecx = (u32)(M32(m_)); }
  /* 0058c624 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0058c626 shr edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0058c629 and ecx, 0x7fffffff */ { u32 a_ = ecx, b_ = 0x7fffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c62f and edx, 0x8000 */ { u32 a_ = edx, b_ = 0x8000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058c635 cmp ecx, 0x47ffefff */ { u32 a_ = ecx, b_ = 0x47ffefffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c63b jbe 0x58c647 */ if ((CF_|ZF_)) goto L_0058c647;
  /* 0058c63d or edx, 0x7fff */ { u32 a_ = edx, b_ = 0x7fffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058c643 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0058c645 jmp 0x58c695 */ goto L_0058c695;
L_0058c647:;
  /* 0058c647 cmp ecx, 0x38800000 */ { u32 a_ = ecx, b_ = 0x38800000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c64d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0058c64f jae 0x58c683 */ if (!CF_) goto L_0058c683;
  /* 0058c651 push 0x71 */ { u32 v_ = 0x71u; esp -= 4; M32(esp) = v_; }
  /* 0058c653 shr ecx, 0x17 */ { u32 n_ = (23u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058c656 and esi, 0x7fffff */ { u32 a_ = esi, b_ = 0x7fffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058c65c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c65d sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0058c65f or esi, 0x800000 */ { u32 a_ = esi, b_ = 0x800000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058c665 cmp edi, 0x1f */ { u32 a_ = edi, b_ = 0x1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c668 jle 0x58c66e */ if ((ZF_|LT_)) goto L_0058c66e;
  /* 0058c66a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058c66c jmp 0x58c672 */ goto L_0058c672;
L_0058c66e:;
  /* 0058c66e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0058c670 shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_0058c672:;
  /* 0058c672 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0058c674 shr ecx, 0xd */ { u32 n_ = (13u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058c677 and ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c67a lea ecx, [ecx + esi + 0xfff] */ ecx = (u32)((u32)(ecx + esi + 0xfffu));
  /* 0058c681 jmp 0x58c690 */ goto L_0058c690;
L_0058c683:;
  /* 0058c683 shr esi, 0xd */ { u32 n_ = (13u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0058c686 and esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0058c689 lea ecx, [esi + ecx - 0x37fff001] */ ecx = (u32)((u32)(esi + ecx + 0xc8000fffu));
L_0058c690:;
  /* 0058c690 shr ecx, 0xd */ { u32 n_ = (13u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058c693 or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0058c695:;
  /* 0058c695 mov word ptr [eax + ebx*2], cx */ { const u32 m_ = (u32)(eax + ebx * 2u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0058c699 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058c69a cmp ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c69d jb 0x58c61e */ if (CF_) goto L_0058c61e;
  /* 0058c6a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c6a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0058c6a5:;
  /* 0058c6a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058c6a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c6a7 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058c6aa(CPU *c) {
  NATIVE_HOOK(0x58c6aau) REGS; LOADALL;
L_0058c6aa:;
  /* 0058c6aa mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c6ac push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c6ad mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c6af push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c6b1 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c6b6u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c6b1u); RETCHK(0x58c6b6u, 0x58c6b1u); LOADALL;
  /* 0058c6b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c6b7 jmp dword ptr [0x674b7c] */ { const u32 m_ = (u32)(0x674b7cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c6bd(CPU *c) {
  NATIVE_HOOK(0x58c6bdu) REGS; LOADALL;
L_0058c6bd:;
  /* 0058c6bd mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c6bf push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c6c0 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c6c2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058c6c3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058c6c5 cmp dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c6c8 jbe 0x58c75c */ if ((CF_|ZF_)) goto L_0058c75c;
  /* 0058c6ce push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058c6cf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058c6d0 mov esi, 0x3ff */ { esi = (u32)(0x3ffu); }
  /* 0058c6d5 mov eax, 0x400 */ { eax = (u32)(0x400u); }
L_0058c6da:;
  /* 0058c6da mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c6dd mov dx, word ptr [ecx + ebx*2] */ { const u32 m_ = (u32)(ecx + ebx * 2u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0058c6e1 movzx ecx, dx */ { ecx = (u32)((edx & 0xffffu)); }
  /* 0058c6e4 test ecx, 0xffff7c00 */ { u32 a_ = ecx, b_ = 0xffff7c00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c6ea jne 0x58c72c */ if (!ZF_) goto L_0058c72c;
  /* 0058c6ec test si, dx */ { u32 a_ = (esi & 0xffffu), b_ = (edx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 0058c6ef je 0x58c721 */ if (ZF_) goto L_0058c721;
  /* 0058c6f1 push -0xe */ { u32 v_ = 0xfffffff2u; esp -= 4; M32(esp) = v_; }
  /* 0058c6f3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0058c6f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c6f6 and edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058c6f8 jmp 0x58c6fd */ goto L_0058c6fd;
L_0058c6fa:;
  /* 0058c6fa dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058c6fb shl edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_0058c6fd:;
  /* 0058c6fd test eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058c6ff je 0x58c6fa */ if (ZF_) goto L_0058c6fa;
  /* 0058c701 and ecx, 0xffff8080 */ { u32 a_ = ecx, b_ = 0xffff8080u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c707 shl ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058c70a or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c70c and ecx, 0xfffffbff */ { u32 a_ = ecx, b_ = 0xfffffbffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c712 add edi, 0x7f */ { u32 a_ = edi, b_ = 0x7fu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0058c715 shl ecx, 0xd */ { u32 n_ = (13u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058c718 shl edi, 0x17 */ { u32 n_ = (23u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0058c71b or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0058c71d:;
  /* 0058c71d mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0058c71f jmp 0x58c74e */ goto L_0058c74e;
L_0058c721:;
  /* 0058c721 and ecx, 0xffff8000 */ { u32 a_ = ecx, b_ = 0xffff8000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c727 shl ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058c72a jmp 0x58c71d */ goto L_0058c71d;
L_0058c72c:;
  /* 0058c72c mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0058c72e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0058c730 and edx, 0xffff8000 */ { u32 a_ = edx, b_ = 0xffff8000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058c736 shr ecx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058c739 shl edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0058c73c and ecx, 0x1f */ { u32 a_ = ecx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0058c73f and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0058c741 or edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0058c743 add ecx, 0x70 */ { u32 a_ = ecx, b_ = 0x70u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058c746 shl edx, 0xd */ { u32 n_ = (13u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0058c749 shl ecx, 0x17 */ { u32 n_ = (23u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0058c74c or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0058c74e:;
  /* 0058c74e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0058c751 mov dword ptr [ecx + ebx*4], edx */ { const u32 m_ = (u32)(ecx + ebx * 4u); M32(m_) = (u32)(edx); }
  /* 0058c754 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058c755 cmp ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058c758 jb 0x58c6da */ if (CF_) goto L_0058c6da;
  /* 0058c75a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c75b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0058c75c:;
  /* 0058c75c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c75f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058c760 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c761 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058c764(CPU *c) {
  NATIVE_HOOK(0x58c764u) REGS; LOADALL;
L_0058c764:;
  /* 0058c764 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c766 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c767 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c769 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c76b call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c770u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c76bu); RETCHK(0x58c770u, 0x58c76bu); LOADALL;
  /* 0058c770 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c771 jmp dword ptr [0x674b4c] */ { const u32 m_ = (u32)(0x674b4cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c777(CPU *c) {
  NATIVE_HOOK(0x58c777u) REGS; LOADALL;
L_0058c777:;
  /* 0058c777 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c779 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c77a mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c77c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c77e call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c783u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c77eu); RETCHK(0x58c783u, 0x58c77eu); LOADALL;
  /* 0058c783 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c786 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c787 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c78a push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c78d push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c790 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c793 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c796 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c799 call dword ptr [0x674ad8] */ { const u32 m_ = (u32)(0x674ad8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58c79fu; SAVEALL; call_ind(c, t_); RETCHK(0x58c79fu, 0x58c799u); LOADALL; }
  /* 0058c79f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c7a0 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058c7a3(CPU *c) {
  NATIVE_HOOK(0x58c7a3u) REGS; LOADALL;
L_0058c7a3:;
  /* 0058c7a3 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c7a5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c7a6 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c7a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c7a9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c7aa fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c7ad mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c7b0 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c7b3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058c7b6 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c7b9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c7bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058c7bd fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058c7bf mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058c7c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058c7c3 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058c7c6 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058c7c8 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0058c7ca fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058c7cc fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c7d2 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058c7d4 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058c7d6 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058c7dc fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c7df fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058c7e1 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0058c7e3 fsubr st(3) */ ST(0) = FR(ST(3) - ST(0));
  /* 0058c7e5 fadd dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058c7e8 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c7eb fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058c7ed fstp dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c7f0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058c7f2 fsubrp st(1) */ { double s0_ = ST(0); ST(1) = FR(s0_ - ST(1)); FPOP(); }
  /* 0058c7f4 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058c7f7 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c7f9 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058c7fc fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c7fe faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c800 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c803 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c805 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c807 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058c809 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c80b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c80d fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c80f fmul dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c812 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c813 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c816 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c819 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c81a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c81c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058c81f fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c822 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c824 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058c827 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c82a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c82c fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c82f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058c830 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058c833(CPU *c) {
  NATIVE_HOOK(0x58c833u) REGS; LOADALL;
L_0058c833:;
  /* 0058c833 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c835 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c836 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c838 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c83a call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c83fu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c83au); RETCHK(0x58c83fu, 0x58c83au); LOADALL;
  /* 0058c83f fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c842 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c843 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c846 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c849 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c84c push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c84f push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c852 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c855 call dword ptr [0x674b50] */ { const u32 m_ = (u32)(0x674b50u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58c85bu; SAVEALL; call_ind(c, t_); RETCHK(0x58c85bu, 0x58c855u); LOADALL; }
  /* 0058c85b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c85c ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058c85f(CPU *c) {
  NATIVE_HOOK(0x58c85fu) REGS; LOADALL;
L_0058c85f:;
  /* 0058c85f mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c861 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c862 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c864 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c865 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c866 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c869 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c86c fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c86f mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058c872 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c875 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c878 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058c879 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058c87b mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058c87e fld dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); FPUSH((double)MF32(m_)); }
  /* 0058c884 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058c885 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058c887 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058c88a fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058c88c fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0058c88e fsub dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058c891 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c894 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058c896 fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c89c fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058c89e fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c8a4 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0058c8a6 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0058c8a8 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c8ab fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058c8ad fmul dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c8b3 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058c8b5 fadd dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058c8b8 fstp dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c8bb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058c8bd fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058c8bf fsubrp st(1) */ { double s0_ = ST(0); ST(1) = FR(s0_ - ST(1)); FPOP(); }
  /* 0058c8c1 fld dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); FPUSH((double)MF32(m_)); }
  /* 0058c8c7 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058c8ca fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c8cc fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058c8cf fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c8d1 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c8d3 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c8d6 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c8d8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c8da fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058c8dc fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c8de faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c8e0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058c8e2 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c8e4 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058c8e6 fmul dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c8e9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058c8ea fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c8ed fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c8f0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c8f1 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c8f3 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058c8f6 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c8f9 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c8fb fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058c8fe fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c901 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c903 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058c905 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c908 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058c90a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058c90c leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058c90d ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058c910(CPU *c) {
  NATIVE_HOOK(0x58c910u) REGS; LOADALL;
L_0058c910:;
  /* 0058c910 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c912 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c913 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c915 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c917 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c91cu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c917u); RETCHK(0x58c91cu, 0x58c917u); LOADALL;
  /* 0058c91c fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058c91f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c920 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c921 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c925 fld dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058c928 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c92b push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c92e push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c931 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c934 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058c937 call dword ptr [0x674b54] */ { const u32 m_ = (u32)(0x674b54u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58c93du; SAVEALL; call_ind(c, t_); RETCHK(0x58c93du, 0x58c937u); LOADALL; }
  /* 0058c93d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c93e ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058c941(CPU *c) {
  NATIVE_HOOK(0x58c941u) REGS; LOADALL;
L_0058c941:;
  /* 0058c941 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c943 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c944 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c946 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058c949 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058c94c fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058c94e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058c951 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058c953 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058c954 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058c957 fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c95a fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0058c95c fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058c95e fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c961 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c963 fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058c965 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c967 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058c96a fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058c96d fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c970 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058c973 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058c974 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058c977 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058c97a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058c97c fadd dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058c97f fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058c982 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c983 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058c986(CPU *c) {
  NATIVE_HOOK(0x58c986u) REGS; LOADALL;
L_0058c986:;
  /* 0058c986 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c988 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c989 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c98b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c98d call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c992u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c98du); RETCHK(0x58c992u, 0x58c98du); LOADALL;
  /* 0058c992 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c993 jmp dword ptr [0x674a90] */ { const u32 m_ = (u32)(0x674a90u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c999(CPU *c) {
  NATIVE_HOOK(0x58c999u) REGS; LOADALL;
L_0058c999:;
  /* 0058c999 jmp dword ptr [0x674a90] */ { const u32 m_ = (u32)(0x674a90u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c99f(CPU *c) {
  NATIVE_HOOK(0x58c99fu) REGS; LOADALL;
L_0058c99f:;
  /* 0058c99f mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c9a1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c9a2 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c9a4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c9a6 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c9abu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c9a6u); RETCHK(0x58c9abu, 0x58c9a6u); LOADALL;
  /* 0058c9ab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c9ac jmp dword ptr [0x674b80] */ { const u32 m_ = (u32)(0x674b80u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c9b2(CPU *c) {
  NATIVE_HOOK(0x58c9b2u) REGS; LOADALL;
L_0058c9b2:;
  /* 0058c9b2 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c9b4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c9b5 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c9b7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c9b9 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c9beu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c9b9u); RETCHK(0x58c9beu, 0x58c9b9u); LOADALL;
  /* 0058c9be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c9bf jmp dword ptr [0x674ab4] */ { const u32 m_ = (u32)(0x674ab4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c9c5(CPU *c) {
  NATIVE_HOOK(0x58c9c5u) REGS; LOADALL;
L_0058c9c5:;
  /* 0058c9c5 jmp dword ptr [0x674ab4] */ { const u32 m_ = (u32)(0x674ab4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c9cb(CPU *c) {
  NATIVE_HOOK(0x58c9cbu) REGS; LOADALL;
L_0058c9cb:;
  /* 0058c9cb mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c9cd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c9ce mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c9d0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c9d2 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c9d7u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c9d2u); RETCHK(0x58c9d7u, 0x58c9d2u); LOADALL;
  /* 0058c9d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c9d8 jmp dword ptr [0x674b84] */ { const u32 m_ = (u32)(0x674b84u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c9de(CPU *c) {
  NATIVE_HOOK(0x58c9deu) REGS; LOADALL;
L_0058c9de:;
  /* 0058c9de mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c9e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c9e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c9e3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058c9e5 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58c9eau; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58c9e5u); RETCHK(0x58c9eau, 0x58c9e5u); LOADALL;
  /* 0058c9ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058c9eb jmp dword ptr [0x674aa4] */ { const u32 m_ = (u32)(0x674aa4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c9f1(CPU *c) {
  NATIVE_HOOK(0x58c9f1u) REGS; LOADALL;
L_0058c9f1:;
  /* 0058c9f1 jmp dword ptr [0x674aa4] */ { const u32 m_ = (u32)(0x674aa4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058c9f7(CPU *c) {
  NATIVE_HOOK(0x58c9f7u) REGS; LOADALL;
L_0058c9f7:;
  /* 0058c9f7 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058c9f9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058c9fa mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058c9fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c9fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058c9fe mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058ca01 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058ca04 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058ca07 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ca0a fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058ca0c fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ca0e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ca10 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ca13 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ca16 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ca18 fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058ca1b mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0058ca1e fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ca21 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058ca24 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0058ca26 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ca28 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ca2b mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0058ca2e mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0058ca31 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058ca32 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058ca35(CPU *c) {
  NATIVE_HOOK(0x58ca35u) REGS; LOADALL;
L_0058ca35:;
  /* 0058ca35 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ca37 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ca38 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ca3a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058ca3c call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58ca41u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58ca3cu); RETCHK(0x58ca41u, 0x58ca3cu); LOADALL;
  /* 0058ca41 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ca42 jmp dword ptr [0x674b88] */ { const u32 m_ = (u32)(0x674b88u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ca48(CPU *c) {
  NATIVE_HOOK(0x58ca48u) REGS; LOADALL;
L_0058ca48:;
  /* 0058ca48 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ca4a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ca4b mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ca4d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058ca4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058ca4f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ca50 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058ca53 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058ca54 mov edi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 0058ca57 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ca59 mov eax, esi */ { eax = (u32)(esi); }
  /* 0058ca5b jbe 0x58ca98 */ if ((CF_|ZF_)) goto L_0058ca98;
  /* 0058ca5d mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0058ca60 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058ca63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_0058ca64:;
  /* 0058ca64 fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058ca67 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ca6a fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058ca6c fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ca6e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ca70 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ca73 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 0058ca76 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ca79 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ca7b fld dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058ca7e fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ca81 add ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058ca84 mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 0058ca86 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ca88 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ca8b mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0058ca8e mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0058ca91 add esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058ca94 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058ca95 jne 0x58ca64 */ if (!ZF_) goto L_0058ca64;
  /* 0058ca97 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0058ca98:;
  /* 0058ca98 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058ca99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ca9a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058ca9b ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058ca9e(CPU *c) {
  NATIVE_HOOK(0x58ca9eu) REGS; LOADALL;
L_0058ca9e:;
  /* 0058ca9e mov edi, edi */ { edi = (u32)(edi); }
  /* 0058caa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058caa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058caa3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058caa5 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58caaau; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58caa5u); RETCHK(0x58caaau, 0x58caa5u); LOADALL;
  /* 0058caaa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058caab jmp dword ptr [0x674aac] */ { const u32 m_ = (u32)(0x674aacu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058cab1(CPU *c) {
  NATIVE_HOOK(0x58cab1u) REGS; LOADALL;
L_0058cab1:;
  /* 0058cab1 jmp dword ptr [0x674aac] */ { const u32 m_ = (u32)(0x674aacu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058cab7(CPU *c) {
  NATIVE_HOOK(0x58cab7u) REGS; LOADALL;
L_0058cab7:;
  /* 0058cab7 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cab9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058caba mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cabc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058cabe call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58cac3u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58cabeu); RETCHK(0x58cac3u, 0x58cabeu); LOADALL;
  /* 0058cac3 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cac6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058cac7 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058caca push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cacd push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cad0 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cad3 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cad6 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cad9 call dword ptr [0x674b58] */ { const u32 m_ = (u32)(0x674b58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58cadfu; SAVEALL; call_ind(c, t_); RETCHK(0x58cadfu, 0x58cad9u); LOADALL; }
  /* 0058cadf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058cae0 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058cae3(CPU *c) {
  NATIVE_HOOK(0x58cae3u) REGS; LOADALL;
L_0058cae3:;
  /* 0058cae3 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cae5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cae6 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cae8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058cae9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058caea fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058caed mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058caf0 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058caf3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058caf6 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058caf9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058cafc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058cafd fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058caff mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058cb02 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058cb03 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058cb06 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058cb08 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0058cb0a fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058cb0c fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb12 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058cb14 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058cb16 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cb1c fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cb1f fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058cb21 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0058cb23 fsubr st(3) */ ST(0) = FR(ST(3) - ST(0));
  /* 0058cb25 fadd dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cb28 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cb2b fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058cb2d fstp dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cb30 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058cb32 fsubrp st(1) */ { double s0_ = ST(0); ST(1) = FR(s0_ - ST(1)); FPOP(); }
  /* 0058cb34 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058cb37 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb39 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058cb3c fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb3e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cb40 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cb43 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb45 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cb47 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058cb49 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb4b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cb4d fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cb4f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058cb51 fmul dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb54 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cb57 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb5a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cb5c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058cb5f fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb62 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cb64 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058cb67 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb6a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cb6c fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cb6f fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb72 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058cb73 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cb76 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb79 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058cb7a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cb7c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058cb7f fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb82 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cb84 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058cb87 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cb8a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cb8c fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cb8f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058cb90 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058cb93(CPU *c) {
  NATIVE_HOOK(0x58cb93u) REGS; LOADALL;
L_0058cb93:;
  /* 0058cb93 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cb95 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cb96 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cb98 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058cb9a call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58cb9fu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58cb9au); RETCHK(0x58cb9fu, 0x58cb9au); LOADALL;
  /* 0058cb9f fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cba2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058cba3 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cba6 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cba9 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cbac push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cbaf push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cbb2 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058cbb5 call dword ptr [0x674b5c] */ { const u32 m_ = (u32)(0x674b5cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58cbbbu; SAVEALL; call_ind(c, t_); RETCHK(0x58cbbbu, 0x58cbb5u); LOADALL; }
  /* 0058cbbb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058cbbc ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058cbbf(CPU *c) {
  NATIVE_HOOK(0x58cbbfu) REGS; LOADALL;
L_0058cbbf:;
  /* 0058cbbf mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cbc1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cbc2 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cbc4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058cbc5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058cbc6 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cbc9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058cbcc fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cbcf mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058cbd2 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cbd5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058cbd8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058cbd9 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058cbdb mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058cbde fld dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); FPUSH((double)MF32(m_)); }
  /* 0058cbe4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058cbe5 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058cbe7 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058cbea fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058cbec fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0058cbee fsub dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058cbf1 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cbf4 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058cbf6 fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cbfc fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058cbfe fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc04 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0058cc06 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0058cc08 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cc0b fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058cc0d fmul dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc13 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058cc15 fadd dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cc18 fstp dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cc1b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058cc1d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058cc1f fsubrp st(1) */ { double s0_ = ST(0); ST(1) = FR(s0_ - ST(1)); FPOP(); }
  /* 0058cc21 fld dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); FPUSH((double)MF32(m_)); }
  /* 0058cc27 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058cc2a fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc2c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058cc2f fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc31 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cc33 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cc36 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc38 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cc3a fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058cc3c fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc3e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cc40 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058cc42 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cc44 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058cc46 fmul dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc49 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cc4c fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc4f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cc51 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058cc54 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc57 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cc59 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058cc5c fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc5f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cc61 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058cc63 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cc66 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058cc68 fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc6b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058cc6c fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cc6f fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058cc73 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cc75 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058cc78 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc7b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cc7d fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058cc80 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cc83 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cc85 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058cc87 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cc8a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058cc8c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058cc8e leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058cc8f ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058cc92(CPU *c) {
  NATIVE_HOOK(0x58cc92u) REGS; LOADALL;
L_0058cc92:;
  /* 0058cc92 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cc94 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cc95 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cc97 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058cc99 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58cc9eu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58cc99u); RETCHK(0x58cc9eu, 0x58cc99u); LOADALL;
  /* 0058cc9e fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cca1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058cca2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058cca3 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cca7 fld dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058ccaa fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ccad push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ccb0 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ccb3 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ccb6 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ccb9 call dword ptr [0x674b60] */ { const u32 m_ = (u32)(0x674b60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58ccbfu; SAVEALL; call_ind(c, t_); RETCHK(0x58ccbfu, 0x58ccb9u); LOADALL; }
  /* 0058ccbf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ccc0 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058ccc3(CPU *c) {
  NATIVE_HOOK(0x58ccc3u) REGS; LOADALL;
L_0058ccc3:;
  /* 0058ccc3 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ccc5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ccc6 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ccc8 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058cccb mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058ccce fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058ccd0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058ccd3 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058ccd5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ccd6 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058ccd9 fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ccdc fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0058ccde fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058cce0 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cce3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cce5 fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cce7 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cce9 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ccec fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058ccef fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ccf2 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ccf5 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058ccf8 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ccfb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ccfd fadd dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cd00 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cd03 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058cd06 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058cd09 fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd0c fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058cd0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058cd10 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058cd13 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd16 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cd18 fadd dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cd1b fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cd1e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058cd1f ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058cd22(CPU *c) {
  NATIVE_HOOK(0x58cd22u) REGS; LOADALL;
L_0058cd22:;
  /* 0058cd22 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cd24 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cd25 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cd27 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058cd29 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58cd2eu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58cd29u); RETCHK(0x58cd2eu, 0x58cd29u); LOADALL;
  /* 0058cd2e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058cd2f jmp dword ptr [0x674a94] */ { const u32 m_ = (u32)(0x674a94u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058cd35(CPU *c) {
  NATIVE_HOOK(0x58cd35u) REGS; LOADALL;
L_0058cd35:;
  /* 0058cd35 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cd37 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cd38 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cd3a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058cd3d mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058cd40 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058cd43 fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058cd46 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd49 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058cd4a fld dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058cd4d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058cd4e fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd51 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0058cd54 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cd56 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058cd58 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd5a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cd5c fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cd5f fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cd62 fld dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058cd65 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd68 fld dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058cd6b fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd6e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cd70 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058cd73 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd75 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cd77 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cd7a fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cd7d fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058cd80 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd83 fld dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058cd86 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd89 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cd8b fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058cd8e fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd90 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cd92 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cd95 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cd98 fld dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058cd9b fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cd9e fld dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cda1 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cda4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cda6 fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058cda9 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cdab faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cdad fadd dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cdb0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058cdb3 mov edi, eax */ { edi = (u32)(eax); }
  /* 0058cdb5 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cdb8 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058cdb9 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058cdba movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058cdbb movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058cdbc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058cdbd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058cdbe leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058cdbf ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058cdc2(CPU *c) {
  NATIVE_HOOK(0x58cdc2u) REGS; LOADALL;
L_0058cdc2:;
  /* 0058cdc2 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cdc4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cdc5 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cdc7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058cdc9 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58cdceu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58cdc9u); RETCHK(0x58cdceu, 0x58cdc9u); LOADALL;
  /* 0058cdce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058cdcf jmp dword ptr [0x674b8c] */ { const u32 m_ = (u32)(0x674b8cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058cdd5(CPU *c) {
  NATIVE_HOOK(0x58cdd5u) REGS; LOADALL;
L_0058cdd5:;
  /* 0058cdd5 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cdd7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cdd8 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cdda sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058cddd mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0058cde0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058cde2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058cde3 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0058cde6 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0058cde9 jbe 0x58ce76 */ if ((CF_|ZF_)) goto L_0058ce76;
  /* 0058cdef mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058cdf2 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058cdf5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058cdf6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0058cdf7:;
  /* 0058cdf7 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058cdfa mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0058cdfc fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cdff add ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0058ce02 fld dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058ce05 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0058ce08 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce0b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ce0d fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058ce0f fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce11 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ce13 fadd dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ce16 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ce19 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ce1c fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce1e fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058ce21 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce24 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ce26 fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058ce29 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce2c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ce2e fadd dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ce31 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ce34 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058ce37 fmul dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce3a fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058ce3c fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce3f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ce41 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ce44 fmul dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce47 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ce49 fadd dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ce4c fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ce4f fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058ce52 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce54 fld dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058ce57 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce5a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ce5c fld dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058ce5f fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ce62 add edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058ce65 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058ce66 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ce68 fadd dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ce6b fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ce6e movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058ce6f movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058ce70 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058ce71 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058ce72 jne 0x58cdf7 */ if (!ZF_) goto L_0058cdf7;
  /* 0058ce74 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058ce75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0058ce76:;
  /* 0058ce76 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058ce79 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058ce7a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058ce7b ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058ce7e(CPU *c) {
  NATIVE_HOOK(0x58ce7eu) REGS; LOADALL;
L_0058ce7e:;
  /* 0058ce7e mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ce80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ce81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ce83 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058ce85 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58ce8au; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58ce85u); RETCHK(0x58ce8au, 0x58ce85u); LOADALL;
  /* 0058ce8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ce8b jmp dword ptr [0x674ab8] */ { const u32 m_ = (u32)(0x674ab8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ce91(CPU *c) {
  NATIVE_HOOK(0x58ce91u) REGS; LOADALL;
L_0058ce91:;
  /* 0058ce91 jmp dword ptr [0x674ab8] */ { const u32 m_ = (u32)(0x674ab8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ce97(CPU *c) {
  NATIVE_HOOK(0x58ce97u) REGS; LOADALL;
L_0058ce97:;
  /* 0058ce97 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ce99 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ce9a mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ce9c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058ce9e call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58cea3u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58ce9eu); RETCHK(0x58cea3u, 0x58ce9eu); LOADALL;
  /* 0058cea3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058cea4 jmp dword ptr [0x674b90] */ { const u32 m_ = (u32)(0x674b90u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ceaa(CPU *c) {
  NATIVE_HOOK(0x58ceaau) REGS; LOADALL;
L_0058ceaa:;
  /* 0058ceaa jmp dword ptr [0x674b90] */ { const u32 m_ = (u32)(0x674b90u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ceb0(CPU *c) {
  NATIVE_HOOK(0x58ceb0u) REGS; LOADALL;
L_0058ceb0:;
  /* 0058ceb0 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ceb2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ceb3 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ceb5 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058ceb8 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0058cebb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058cebd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058cebe mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0058cec1 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0058cec4 jbe 0x58cf89 */ if ((CF_|ZF_)) goto L_0058cf89;
  /* 0058ceca mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0058cecd mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058ced0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ced1 mov dword ptr [ebp + 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0058ced4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0058ced5:;
  /* 0058ced5 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058ced8 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0058cedb fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cede mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0058cee0 fld dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058cee3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058cee4 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cee7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058cee8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058ceea fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058ceec fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ceee faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cef0 fadd dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cef3 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cef6 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058cef9 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cefb fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058cefe fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf01 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cf03 fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058cf06 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf09 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cf0b fadd dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cf0e fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cf11 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058cf14 fmul dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf17 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058cf19 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf1c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cf1e fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058cf21 fmul dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf24 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cf26 fadd dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cf29 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cf2c fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058cf2f fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf31 fld dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058cf34 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf37 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cf39 fld dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058cf3c fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf3f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cf41 fadd dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058cf44 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058cf45 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058cf46 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cf49 fld1 */ FPUSH(1.0);
  /* 0058cf4b fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cf4f fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058cf52 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058cf53 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cf56 call 0x58c5c1 */ esp -= 4; M32(esp) = 0x58cf5bu; SAVEALL; F_0058c5c1(c); ABI_CHECK(0x58c5c1u, 0x58cf56u); RETCHK(0x58cf5bu, 0x58cf56u); LOADALL;
  /* 0058cf5b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058cf5d jne 0x58cf78 */ if (!ZF_) goto L_0058cf78;
  /* 0058cf5f fld1 */ FPUSH(1.0);
  /* 0058cf61 fdiv dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0058cf64 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058cf66 fmul dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf68 fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cf6a fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058cf6c fmul dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf6f fstp dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cf72 fmul dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cf75 fstp dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_0058cf78:;
  /* 0058cf78 add edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058cf7b add ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0058cf7e dec dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058cf81 jne 0x58ced5 */ if (!ZF_) goto L_0058ced5;
  /* 0058cf87 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058cf88 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0058cf89:;
  /* 0058cf89 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0058cf8c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058cf8d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058cf8e ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058cf91(CPU *c) {
  NATIVE_HOOK(0x58cf91u) REGS; LOADALL;
L_0058cf91:;
  /* 0058cf91 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cf93 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cf94 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cf96 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058cf98 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58cf9du; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58cf98u); RETCHK(0x58cf9du, 0x58cf98u); LOADALL;
  /* 0058cf9d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058cf9e jmp dword ptr [0x674aa8] */ { const u32 m_ = (u32)(0x674aa8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058cfa4(CPU *c) {
  NATIVE_HOOK(0x58cfa4u) REGS; LOADALL;
L_0058cfa4:;
  /* 0058cfa4 jmp dword ptr [0x674aa8] */ { const u32 m_ = (u32)(0x674aa8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058cfaa(CPU *c) {
  NATIVE_HOOK(0x58cfaau) REGS; LOADALL;
L_0058cfaa:;
  /* 0058cfaa mov edi, edi */ { edi = (u32)(edi); }
  /* 0058cfac push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058cfad mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058cfaf sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058cfb2 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058cfb5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058cfb8 fld dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058cfbb fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cfbe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058cfbf fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058cfc2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058cfc3 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cfc6 lea esi, [ebp - 0xc] */ esi = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0058cfc9 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cfcb fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058cfcd fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cfcf faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cfd1 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cfd4 fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058cfd7 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cfda fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058cfdd fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cfe0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cfe2 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058cfe5 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cfe7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cfe9 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058cfec fld dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058cfef fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cff2 fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058cff5 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cff8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058cffa fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058cffd fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058cfff mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d002 mov edi, eax */ { edi = (u32)(eax); }
  /* 0058d004 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d006 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d009 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d00a movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d00b movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d00c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058d00d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058d00e leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058d00f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058d012(CPU *c) {
  NATIVE_HOOK(0x58d012u) REGS; LOADALL;
L_0058d012:;
  /* 0058d012 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d014 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d015 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d017 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d019 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d01eu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d019u); RETCHK(0x58d01eu, 0x58d019u); LOADALL;
  /* 0058d01e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d01f jmp dword ptr [0x674b94] */ { const u32 m_ = (u32)(0x674b94u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d025(CPU *c) {
  NATIVE_HOOK(0x58d025u) REGS; LOADALL;
L_0058d025:;
  /* 0058d025 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d027 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d028 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d02a sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058d02d mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0058d030 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058d032 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058d033 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0058d036 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0058d039 jbe 0x58d09d */ if ((CF_|ZF_)) goto L_0058d09d;
  /* 0058d03b mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0058d03e mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058d041 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058d042 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0058d043:;
  /* 0058d043 fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d046 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0058d048 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d04b add ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0058d04e fld dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058d051 lea esi, [ebp - 0xc] */ esi = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0058d054 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d057 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d059 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058d05b fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d05d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d05f fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d062 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d065 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d067 fld dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058d06a fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d06d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d06f fld dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058d072 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d075 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d077 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d07a fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d07d fmul dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d080 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058d082 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d085 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d087 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d08a add ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058d08d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058d08e fmul dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d091 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d093 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d096 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d097 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d098 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d099 jne 0x58d043 */ if (!ZF_) goto L_0058d043;
  /* 0058d09b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058d09c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0058d09d:;
  /* 0058d09d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d0a0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058d0a1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058d0a2 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058d0a5(CPU *c) {
  NATIVE_HOOK(0x58d0a5u) REGS; LOADALL;
L_0058d0a5:;
  /* 0058d0a5 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d0a7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d0a8 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d0aa push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d0ac call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d0b1u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d0acu); RETCHK(0x58d0b1u, 0x58d0acu); LOADALL;
  /* 0058d0b1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d0b2 jmp dword ptr [0x674acc] */ { const u32 m_ = (u32)(0x674accu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d0b8(CPU *c) {
  NATIVE_HOOK(0x58d0b8u) REGS; LOADALL;
L_0058d0b8:;
  /* 0058d0b8 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d0ba push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d0bb mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d0bd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d0bf call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d0c4u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d0bfu); RETCHK(0x58d0c4u, 0x58d0bfu); LOADALL;
  /* 0058d0c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d0c5 jmp dword ptr [0x674b9c] */ { const u32 m_ = (u32)(0x674b9cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d0cb(CPU *c) {
  NATIVE_HOOK(0x58d0cbu) REGS; LOADALL;
L_0058d0cb:;
  /* 0058d0cb mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d0cd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d0ce mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d0d0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d0d2 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d0d7u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d0d2u); RETCHK(0x58d0d7u, 0x58d0d2u); LOADALL;
  /* 0058d0d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d0d8 jmp dword ptr [0x674ad0] */ { const u32 m_ = (u32)(0x674ad0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d0de(CPU *c) {
  NATIVE_HOOK(0x58d0deu) REGS; LOADALL;
L_0058d0de:;
  /* 0058d0de mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d0e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d0e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d0e3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d0e5 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d0eau; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d0e5u); RETCHK(0x58d0eau, 0x58d0e5u); LOADALL;
  /* 0058d0ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d0eb jmp dword ptr [0x674ba0] */ { const u32 m_ = (u32)(0x674ba0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d0f1(CPU *c) {
  NATIVE_HOOK(0x58d0f1u) REGS; LOADALL;
L_0058d0f1:;
  /* 0058d0f1 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d0f3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d0f4 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d0f6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d0f8 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d0fdu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d0f8u); RETCHK(0x58d0fdu, 0x58d0f8u); LOADALL;
  /* 0058d0fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d0fe jmp dword ptr [0x674ad4] */ { const u32 m_ = (u32)(0x674ad4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d104(CPU *c) {
  NATIVE_HOOK(0x58d104u) REGS; LOADALL;
L_0058d104:;
  /* 0058d104 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d106 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d107 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d109 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058d10c mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058d10f mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058d112 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d115 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d118 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0058d11b fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d11e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058d11f fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d122 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058d123 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d126 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d129 fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d12c fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d12f fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d131 fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d134 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d137 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d13a fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d13d fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d140 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d143 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d146 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058d148 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058d14a fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d14d fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d150 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d153 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d155 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058d158 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d15b fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d15e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d160 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d163 fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d166 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d168 fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d16b fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d16e fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d170 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d173 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058d175 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d178 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058d17a fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d17d fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d17f fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d182 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058d184 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d186 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d189 fsub dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d18c fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d18f fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d191 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058d194 fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d197 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d199 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d19c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d19e fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058d1a0 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d1a3 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058d1a5 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d1a8 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d1ab fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d1ad fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058d1b0 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d1b3 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d1b6 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d1b8 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058d1ba fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0058d1bc fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d1bf faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d1c1 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d1c4 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058d1c7 fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d1ca fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d1cc fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058d1cf fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d1d2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d1d5 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0058d1d8 mov edi, eax */ { edi = (u32)(eax); }
  /* 0058d1da fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d1dc fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058d1de fsub st(3) */ ST(0) = FR(ST(0) - ST(3));
  /* 0058d1e0 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d1e3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d1e5 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d1e8 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d1e9 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d1ea fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d1ec fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d1ee movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d1ef movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d1f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058d1f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058d1f2 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058d1f3 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058d1f6(CPU *c) {
  NATIVE_HOOK(0x58d1f6u) REGS; LOADALL;
L_0058d1f6:;
  /* 0058d1f6 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d1f8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d1f9 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d1fb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d1fd call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d202u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d1fdu); RETCHK(0x58d202u, 0x58d1fdu); LOADALL;
  /* 0058d202 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d203 jmp dword ptr [0x674ab0] */ { const u32 m_ = (u32)(0x674ab0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d209(CPU *c) {
  NATIVE_HOOK(0x58d209u) REGS; LOADALL;
L_0058d209:;
  /* 0058d209 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d20b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d20c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d20e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d210 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d215u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d210u); RETCHK(0x58d215u, 0x58d210u); LOADALL;
  /* 0058d215 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d218 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058d219 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d21c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d21f push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d222 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d225 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d228 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d22b call dword ptr [0x674b64] */ { const u32 m_ = (u32)(0x674b64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58d231u; SAVEALL; call_ind(c, t_); RETCHK(0x58d231u, 0x58d22bu); LOADALL; }
  /* 0058d231 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d232 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058d235(CPU *c) {
  NATIVE_HOOK(0x58d235u) REGS; LOADALL;
L_0058d235:;
  /* 0058d235 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d237 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d238 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d23a sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058d23d fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d240 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058d243 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d246 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058d249 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d24c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d24f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058d250 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058d252 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058d255 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058d256 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058d259 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 0058d25c fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0058d25e fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d261 fld dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); FPUSH((double)MF32(m_)); }
  /* 0058d267 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058d269 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d26c fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058d26f fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d272 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058d278 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058d27a fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0058d27c fsubr dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0058d27f fadd dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058d282 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058d285 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d288 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058d28b fsub st(4) */ ST(0) = FR(ST(0) - ST(4));
  /* 0058d28d fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d28f fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d291 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d293 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d295 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d297 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058d299 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d29b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d29d fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058d29f fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2a1 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2a3 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d2a5 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058d2a7 fmul dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2aa fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058d2ac fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2af faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2b1 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d2b3 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2b6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2b8 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058d2ba fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2bd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2bf fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d2c2 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058d2c4 fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2c7 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058d2c9 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2cc faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2ce fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d2d0 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2d3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2d5 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058d2d7 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2da faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2dc fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d2df fmul dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2e2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058d2e3 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058d2e5 fmul dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058d2e9 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2eb fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058d2ed fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2f0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2f2 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d2f4 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d2f7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d2f9 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d2fc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d2fe fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d300 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d302 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d304 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058d305 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058d308(CPU *c) {
  NATIVE_HOOK(0x58d308u) REGS; LOADALL;
L_0058d308:;
  /* 0058d308 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d30a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d30b mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d30d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d30f call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d314u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d30fu); RETCHK(0x58d314u, 0x58d30fu); LOADALL;
  /* 0058d314 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d317 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058d318 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d31b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d31e push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d321 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d324 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d327 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d32a call dword ptr [0x674b68] */ { const u32 m_ = (u32)(0x674b68u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58d330u; SAVEALL; call_ind(c, t_); RETCHK(0x58d330u, 0x58d32au); LOADALL; }
  /* 0058d330 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d331 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058d334(CPU *c) {
  NATIVE_HOOK(0x58d334u) REGS; LOADALL;
L_0058d334:;
  /* 0058d334 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d336 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d337 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d339 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058d33a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058d33b fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d33e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058d341 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d344 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058d347 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d34a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d34d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058d34e fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058d350 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058d353 fld dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); FPUSH((double)MF32(m_)); }
  /* 0058d359 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058d35a fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058d35c mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058d35f fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058d361 fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0058d363 fsub dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d366 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d369 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058d36b fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d371 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d373 fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d379 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0058d37b fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0058d37d fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d380 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d382 fmul dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d388 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058d38a fadd dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058d38d fstp dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d390 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d392 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d394 fsubrp st(1) */ { double s0_ = ST(0); ST(1) = FR(s0_ - ST(1)); FPOP(); }
  /* 0058d396 fld dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); FPUSH((double)MF32(m_)); }
  /* 0058d39c fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058d39f fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3a1 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058d3a4 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3a6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d3a8 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d3ab fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3ad faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d3af fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058d3b1 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3b3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d3b5 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058d3b7 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d3b9 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058d3bb fmul dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3be fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d3c1 fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3c4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d3c6 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058d3c9 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3cc faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d3ce fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058d3d1 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3d4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d3d6 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058d3d8 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d3db fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058d3dd fmul dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3e0 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d3e3 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3e6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d3e8 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058d3eb fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3ee faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d3f0 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058d3f3 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d3f6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d3f8 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058d3fa fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d3fd fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058d3ff fmul dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d402 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d405 fmul dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d408 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d40a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058d40d fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d410 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058d411 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058d412 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d414 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058d417 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d41a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d41c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058d41e fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d421 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d423 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d425 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058d426 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058d429(CPU *c) {
  NATIVE_HOOK(0x58d429u) REGS; LOADALL;
L_0058d429:;
  /* 0058d429 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d42b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d42c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d42e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d430 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d435u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d430u); RETCHK(0x58d435u, 0x58d430u); LOADALL;
  /* 0058d435 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d438 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058d439 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058d43a fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d43e fld dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d441 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d444 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d447 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d44a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d44d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058d450 call dword ptr [0x674b6c] */ { const u32 m_ = (u32)(0x674b6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58d456u; SAVEALL; call_ind(c, t_); RETCHK(0x58d456u, 0x58d450u); LOADALL; }
  /* 0058d456 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d457 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058d45a(CPU *c) {
  NATIVE_HOOK(0x58d45au) REGS; LOADALL;
L_0058d45a:;
  /* 0058d45a mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d45c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d45d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d45f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058d462 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058d465 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058d467 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d46a fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d46c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058d46d mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 0058d470 fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d473 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0058d475 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d477 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d47a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d47c fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058d47e fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d480 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d483 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d486 fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d489 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d48c fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d48f fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d492 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d494 fadd dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058d497 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d49a fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d49d fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d4a0 fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d4a3 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d4a6 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d4a9 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d4ac faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d4ae fadd dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058d4b1 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d4b4 fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d4b7 fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d4ba fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d4bd fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d4c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058d4c1 fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058d4c4 fmul dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d4c7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d4c9 fadd dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058d4cc fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d4cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d4d0 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058d4d3(CPU *c) {
  NATIVE_HOOK(0x58d4d3u) REGS; LOADALL;
L_0058d4d3:;
  /* 0058d4d3 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d4d5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d4d6 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d4d8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d4da call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d4dfu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d4dau); RETCHK(0x58d4dfu, 0x58d4dau); LOADALL;
  /* 0058d4df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d4e0 jmp dword ptr [0x674a98] */ { const u32 m_ = (u32)(0x674a98u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d4e6(CPU *c) {
  NATIVE_HOOK(0x58d4e6u) REGS; LOADALL;
L_0058d4e6:;
  /* 0058d4e6 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d4e8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d4e9 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d4eb sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058d4ee mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058d4f1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058d4f4 fld dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058d4f7 fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d4fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058d4fb fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d4fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058d4ff fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d502 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0058d505 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d507 fld dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058d50a fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d50d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d50f fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058d511 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d513 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d515 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d518 fld dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058d51b fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d51e fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058d521 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d524 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d526 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d529 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d52b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d52d fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058d530 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d533 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d535 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d538 fld dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058d53b fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d53e fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d541 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d544 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d546 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d549 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d54b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d54d fld dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058d550 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d553 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d555 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d558 fld dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058d55b fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d55e fld dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d561 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d564 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d566 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d569 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d56b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d56d fld dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058d570 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d573 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d576 mov edi, eax */ { edi = (u32)(eax); }
  /* 0058d578 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d57a fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d57d movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d57e movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d57f movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d580 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d581 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058d582 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058d583 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058d584 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058d587(CPU *c) {
  NATIVE_HOOK(0x58d587u) REGS; LOADALL;
L_0058d587:;
  /* 0058d587 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d589 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d58a mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d58c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d58e call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d593u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d58eu); RETCHK(0x58d593u, 0x58d58eu); LOADALL;
  /* 0058d593 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d594 jmp dword ptr [0x674b98] */ { const u32 m_ = (u32)(0x674b98u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d59a(CPU *c) {
  NATIVE_HOOK(0x58d59au) REGS; LOADALL;
L_0058d59a:;
  /* 0058d59a mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d59c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d59d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d59f sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058d5a2 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0058d5a5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058d5a7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058d5a8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0058d5ab mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0058d5ae jbe 0x58d653 */ if ((CF_|ZF_)) goto L_0058d653;
  /* 0058d5b4 mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0058d5b7 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058d5ba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058d5bb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0058d5bc:;
  /* 0058d5bc fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d5bf mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0058d5c1 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d5c4 add ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0058d5c7 fld dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058d5ca lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0058d5cd fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d5d0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d5d2 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d5d5 fmul dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d5d8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d5da fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058d5dc fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d5de faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d5e0 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d5e3 fld dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058d5e6 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d5e9 fld dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058d5ec fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d5ef faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d5f1 fld dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058d5f4 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d5f7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d5f9 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058d5fb fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d5fe faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d600 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d603 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d606 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d608 fld dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d60b fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d60e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d610 fld dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058d613 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d616 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d618 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d61b fmul dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d61e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d620 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d623 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d626 fmul dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d629 fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d62c fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d62e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d630 fld dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d633 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d636 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d638 fld dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058d63b fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d63e add ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0058d641 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0058d642 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d644 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d647 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d648 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d649 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d64a movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058d64b jne 0x58d5bc */ if (!ZF_) goto L_0058d5bc;
  /* 0058d651 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058d652 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0058d653:;
  /* 0058d653 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d656 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058d657 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058d658 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0058d65b(CPU *c) {
  NATIVE_HOOK(0x58d65bu) REGS; LOADALL;
L_0058d65b:;
  /* 0058d65b mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d65d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d65e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d660 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d662 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d667u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d662u); RETCHK(0x58d667u, 0x58d662u); LOADALL;
  /* 0058d667 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d668 jmp dword ptr [0x674abc] */ { const u32 m_ = (u32)(0x674abcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d66e(CPU *c) {
  NATIVE_HOOK(0x58d66eu) REGS; LOADALL;
L_0058d66e:;
  /* 0058d66e jmp dword ptr [0x674abc] */ { const u32 m_ = (u32)(0x674abcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d674(CPU *c) {
  NATIVE_HOOK(0x58d674u) REGS; LOADALL;
L_0058d674:;
  /* 0058d674 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d676 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d677 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d679 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d67c fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058d67f fmul dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d682 fld dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058d685 fmul dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d688 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d68a fld dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058d68d fmul dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d690 fld dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058d693 fmul dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d696 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d698 fld dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058d69b fmul dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d69e fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058d6a1 fmul dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6a4 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d6a6 fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058d6a9 fmul dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6ac fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058d6af fmul dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6b2 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d6b4 fld dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058d6b7 fmul dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6ba fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058d6bd fmul dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6c0 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d6c2 fld dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058d6c5 fmul dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6c8 fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058d6cb fmul dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6ce fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d6d0 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d6d3 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058d6d5 fmul dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6d8 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058d6da fmul dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6dd fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d6df fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d6e1 fmul dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6e4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d6e6 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6e8 fld st(5) */ { double v_ = ST(5); FPUSH(v_); }
  /* 0058d6ea fmul dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6ed fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d6ef fmul dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6f2 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d6f4 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058d6f6 fmul dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6f9 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d6fb fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d6fe fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d700 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058d702 fmul dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d705 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d707 fmul dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d70a fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d70c fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d70f fmul dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d712 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d714 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d717 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d719 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058d71b fmul dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d71e fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058d720 fmul dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d723 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d725 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d728 fmul dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d72b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d72d fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d730 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058d732 fstp st(5) */ ST(5) = ST(0); FPOP();
  /* 0058d734 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d736 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d738 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d73a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058d73c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d73d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0058d740(CPU *c) {
  NATIVE_HOOK(0x58d740u) REGS; LOADALL;
L_0058d740:;
  /* 0058d740 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d742 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d743 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d745 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d747 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d74cu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d747u); RETCHK(0x58d74cu, 0x58d747u); LOADALL;
  /* 0058d74c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d74d jmp dword ptr [0x674ac0] */ { const u32 m_ = (u32)(0x674ac0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d753(CPU *c) {
  NATIVE_HOOK(0x58d753u) REGS; LOADALL;
L_0058d753:;
  /* 0058d753 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d755 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d756 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d758 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d75a call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d75fu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d75au); RETCHK(0x58d75fu, 0x58d75au); LOADALL;
  /* 0058d75f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d760 jmp dword ptr [0x674a9c] */ { const u32 m_ = (u32)(0x674a9cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d766(CPU *c) {
  NATIVE_HOOK(0x58d766u) REGS; LOADALL;
L_0058d766:;
  /* 0058d766 jmp dword ptr [0x674a9c] */ { const u32 m_ = (u32)(0x674a9cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d76c(CPU *c) {
  NATIVE_HOOK(0x58d76cu) REGS; LOADALL;
L_0058d76c:;
  /* 0058d76c mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d76e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d76f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d771 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058d774 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d777 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0058d77a cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058d77c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058d77f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058d780 je 0x58d788 */ if (ZF_) goto L_0058d788;
  /* 0058d782 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058d784 mov esi, eax */ { esi = (u32)(eax); }
  /* 0058d786 jne 0x58d78b */ if (!ZF_) goto L_0058d78b;
L_0058d788:;
  /* 0058d788 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
L_0058d78b:;
  /* 0058d78b fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d78e fmul dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d791 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058d793 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d795 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d797 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d79a fmul dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d79d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d79f fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d7a2 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7a5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d7a7 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d7a9 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d7ac fmul dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7af fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d7b2 fmul dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7b5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d7b7 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d7ba fmul dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7bd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d7bf fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d7c2 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7c4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d7c6 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d7c9 fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d7cc fmul dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7cf fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d7d2 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7d4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d7d6 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d7d9 fmul dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7dc faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d7de fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d7e1 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7e4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d7e6 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d7e9 fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d7ec fmul dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7ef fld dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058d7f2 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7f5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d7f7 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058d7f9 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d7fc faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d7fe fld dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d801 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d804 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d806 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d809 fld dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d80c fmul dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d80f fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d812 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d814 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d816 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d819 fmul dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d81c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d81e fld dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d821 fmul dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d824 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d826 fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d829 fld dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d82c fmul dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d82f fld dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d832 fmul dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d835 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d837 fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058d83a fmul dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d83d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d83f fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d842 fmul dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d845 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d847 fstp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d84a fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d84d fmul dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d850 fld dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d853 fmul dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d856 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d858 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d85b fmul dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d85e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d860 fld dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d863 fmul dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d866 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d868 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d86b fld dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d86e fmul dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d871 fld dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d874 fmul dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d877 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d879 fld dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d87c fmul dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d87f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d881 fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d884 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d887 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d889 fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d88c fld dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058d88f fmul dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d892 fld dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058d895 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d897 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d899 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d89c fmul dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d89f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d8a1 fld dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058d8a4 fmul dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8a7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d8a9 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d8ac fld dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058d8af fmul dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8b2 fld dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058d8b5 fmul dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8b8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d8ba fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058d8bd fmul dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8c0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d8c2 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d8c5 fmul dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8c8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d8ca fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d8cd fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d8d0 fmul dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8d3 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d8d6 fmul dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8d9 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d8db fld dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058d8de fmul dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8e1 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d8e3 fld dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058d8e6 fmul dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8e9 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d8eb fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d8ee fld dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058d8f1 fmul dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8f4 fld dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058d8f7 fmul dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d8fa faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d8fc fld dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d8ff fmul dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d902 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d904 fld dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058d907 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d90a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d90c fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d90f fld dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058d912 fmul dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d915 fld dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058d918 fmul dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d91b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d91d fld dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058d920 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d922 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d924 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d927 fmul dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d92a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d92c fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d92f fld dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058d932 fmul dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d935 fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058d938 fmul dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d93b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d93d fld dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058d940 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058d942 fmul dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d945 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d947 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d94a fmul dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d94d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d94f fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d952 fld dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058d955 fmul dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d958 fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d95b fmul dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d95e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d960 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d963 fmul dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d966 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d968 fld dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058d96b fmul dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d96e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d970 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d973 fld dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058d976 fmul dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d979 fld dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058d97c fmul dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d97f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d981 fld dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058d984 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d987 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d989 fld dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058d98c fmul dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058d98f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058d991 fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d994 je 0x58d99f */ if (ZF_) goto L_0058d99f;
  /* 0058d996 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058d997 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0058d999 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058d99a mov edi, eax */ { edi = (u32)(eax); }
  /* 0058d99c rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0058d99e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0058d99f:;
  /* 0058d99f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058d9a0 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058d9a1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058d9a4(CPU *c) {
  NATIVE_HOOK(0x58d9a4u) REGS; LOADALL;
L_0058d9a4:;
  /* 0058d9a4 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d9a6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d9a7 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d9a9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058d9ab call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58d9b0u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58d9abu); RETCHK(0x58d9b0u, 0x58d9abu); LOADALL;
  /* 0058d9b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058d9b1 jmp dword ptr [0x674b28] */ { const u32 m_ = (u32)(0x674b28u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d9b7(CPU *c) {
  NATIVE_HOOK(0x58d9b7u) REGS; LOADALL;
L_0058d9b7:;
  /* 0058d9b7 jmp dword ptr [0x674b28] */ { const u32 m_ = (u32)(0x674b28u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058d9bd(CPU *c) {
  NATIVE_HOOK(0x58d9bdu) REGS; LOADALL;
L_0058d9bd:;
  /* 0058d9bd mov edi, edi */ { edi = (u32)(edi); }
  /* 0058d9bf push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058d9c0 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058d9c2 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058d9c5 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058d9c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058d9cb cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058d9cd fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058d9d0 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d9d3 fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d9d6 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 0058d9d9 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058d9dc mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0058d9df fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d9e2 mov edx, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); edx = (u32)(M32(m_)); }
  /* 0058d9e5 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058d9e8 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 0058d9eb fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d9ee mov edx, dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); edx = (u32)(M32(m_)); }
  /* 0058d9f1 fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058d9f4 mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 0058d9f7 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058d9fa mov edx, dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); edx = (u32)(M32(m_)); }
  /* 0058d9fd fld dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058da00 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 0058da03 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058da06 mov edx, dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); edx = (u32)(M32(m_)); }
  /* 0058da09 fld dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058da0c mov dword ptr [eax + 0x2c], edx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0058da0f fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058da12 je 0x58da2a */ if (ZF_) goto L_0058da2a;
  /* 0058da14 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0058da16 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0058da18 mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0058da1b mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 0058da1e mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 0058da21 mov dword ptr [eax + 0x28], edx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(edx); }
  /* 0058da24 mov ecx, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0058da27 mov dword ptr [eax + 0x3c], ecx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(ecx); }
L_0058da2a:;
  /* 0058da2a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058da2b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058da2e(CPU *c) {
  NATIVE_HOOK(0x58da2eu) REGS; LOADALL;
L_0058da2e:;
  /* 0058da2e mov edi, edi */ { edi = (u32)(edi); }
  /* 0058da30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058da31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058da33 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058da35 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58da3au; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58da35u); RETCHK(0x58da3au, 0x58da35u); LOADALL;
  /* 0058da3a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058da3b jmp dword ptr [0x674aa0] */ { const u32 m_ = (u32)(0x674aa0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058da41(CPU *c) {
  NATIVE_HOOK(0x58da41u) REGS; LOADALL;
L_0058da41:;
  /* 0058da41 jmp dword ptr [0x674aa0] */ { const u32 m_ = (u32)(0x674aa0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058da47(CPU *c) {
  NATIVE_HOOK(0x58da47u) REGS; LOADALL;
L_0058da47:;
  /* 0058da47 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058da49 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058da4a mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058da4c sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058da4f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058da52 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0058da55 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058da57 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058da5a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058da5b je 0x58da63 */ if (ZF_) goto L_0058da63;
  /* 0058da5d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058da5f mov esi, eax */ { esi = (u32)(eax); }
  /* 0058da61 jne 0x58da66 */ if (!ZF_) goto L_0058da66;
L_0058da63:;
  /* 0058da63 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
L_0058da66:;
  /* 0058da66 fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058da69 fmul dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058da6c fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058da6e fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058da70 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058da72 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058da75 fmul dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058da78 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058da7a fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058da7d fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058da80 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058da82 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058da84 fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058da87 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058da89 fld dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058da8c fmul dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058da8f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058da91 fld dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058da94 fmul dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058da97 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058da99 fld dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058da9c fmul dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058da9f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058daa1 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058daa4 fld dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058daa7 fmul dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058daaa fld dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058daad fmul dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dab0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dab2 fld dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058dab5 fmul dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dab8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058daba fld dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058dabd fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dabf faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dac1 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dac4 fld dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058dac7 fmul dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058daca fld dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058dacd fmul dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dad0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dad2 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058dad4 fmul dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dad7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dad9 fld dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058dadc fmul dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dadf faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dae1 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dae4 fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058dae7 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058daea fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058daed fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058daef faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058daf1 fld dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058daf4 fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058daf7 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058daf9 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058dafc fmul dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058daff faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db01 fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058db04 fld dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058db07 fmul dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db0a fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058db0d fmul dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db10 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db12 fld dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058db15 fmul dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db18 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db1a fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058db1d fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db20 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db22 fstp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058db25 fld dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058db28 fmul dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db2b fld dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058db2e fmul dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db31 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db33 fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058db36 fmul dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db39 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db3b fld dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058db3e fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db41 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db43 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058db46 fld dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058db49 fmul dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db4c fld dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058db4f fmul dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db52 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db54 fld dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058db57 fmul dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db5a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db5c fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058db5f fmul dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db62 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db64 fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058db67 fld dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058db6a fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db6d fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058db70 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db72 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db74 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058db77 fmul dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db7a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db7c fld dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058db7f fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db82 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db84 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058db87 fld dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058db8a fmul dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db8d fld dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058db90 fmul dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db93 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db95 fld dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058db98 fmul dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058db9b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058db9d fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058dba0 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dba3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dba5 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dba8 fld dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058dbab fmul dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbae fld dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058dbb1 fmul dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbb4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dbb6 fld dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058dbb9 fmul dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbbc faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dbbe fld dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058dbc1 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbc4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dbc6 fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dbc9 fld dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058dbcc fmul dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbcf fld dword ptr [ecx + 0x38] */ { const u32 m_ = (u32)(ecx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058dbd2 fmul dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbd5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dbd7 fld dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058dbda fmul dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbdd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dbdf fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058dbe2 fmul dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbe5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dbe7 fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dbea fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058dbed fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbef fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058dbf2 fmul dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbf5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dbf7 fld dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058dbfa fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dbfd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dbff fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058dc02 fmul dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc05 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc07 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dc0a fld dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058dc0d fmul dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc10 fld dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058dc13 fmul dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc16 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc18 fld dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058dc1b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058dc1d fmul dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc20 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc22 fld dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058dc25 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc28 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc2a fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dc2d fld dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058dc30 fmul dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc33 fld dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0058dc36 fmul dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc39 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc3b fld dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058dc3e fmul dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc41 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc43 fld dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058dc46 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc49 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc4b fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dc4e fld dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058dc51 fmul dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc54 fld dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 0058dc57 fmul dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc5a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc5c fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058dc5f fmul dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc62 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc64 fld dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058dc67 fmul dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dc6a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dc6c fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dc6f je 0x58dc7a */ if (ZF_) goto L_0058dc7a;
  /* 0058dc71 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058dc72 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0058dc74 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058dc75 mov edi, eax */ { edi = (u32)(eax); }
  /* 0058dc77 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0058dc79 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0058dc7a:;
  /* 0058dc7a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058dc7b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058dc7c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058dc7f(CPU *c) {
  NATIVE_HOOK(0x58dc7fu) REGS; LOADALL;
L_0058dc7f:;
  /* 0058dc7f mov edi, edi */ { edi = (u32)(edi); }
  /* 0058dc81 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058dc82 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058dc84 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058dc86 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58dc8bu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58dc86u); RETCHK(0x58dc8bu, 0x58dc86u); LOADALL;
  /* 0058dc8b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058dc8c jmp dword ptr [0x674adc] */ { const u32 m_ = (u32)(0x674adcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058dc92(CPU *c) {
  NATIVE_HOOK(0x58dc92u) REGS; LOADALL;
L_0058dc92:;
  /* 0058dc92 jmp dword ptr [0x674adc] */ { const u32 m_ = (u32)(0x674adcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058dc98(CPU *c) {
  NATIVE_HOOK(0x58dc98u) REGS; LOADALL;
L_0058dc98:;
  /* 0058dc98 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058dc9a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058dc9b mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058dc9d sub esp, 0x54 */ { u32 a_ = esp, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058dca0 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058dca3 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058dca6 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058dca8 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058dcab mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 0058dcae mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058dcb1 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0058dcb4 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 0058dcb7 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0058dcba fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058dcbc mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0058dcbf fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0058dcc2 mov ecx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0058dcc5 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058dcc7 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0058dcca mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0058dccd mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0058dcd0 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dcd2 mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0058dcd5 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0058dcd8 mov ecx, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0058dcdb fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dcde mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0058dce1 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058dce4 mov ecx, dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0058dce7 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058dce9 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0058dcec fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058dcee fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dcf0 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dcf3 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058dcf6 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058dcf8 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0058dcfb fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058dcfd fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dcff fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dd02 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058dd04 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058dd06 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058dd09 fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd0c fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0058dd0f fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd12 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dd14 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dd17 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058dd1a fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd1d fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0058dd20 fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd23 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dd25 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dd28 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058dd2b mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0058dd2e fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd31 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0058dd34 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd37 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dd39 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dd3c fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058dd3f fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058dd42 fld dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058dd45 fst dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); }
  /* 0058dd48 fld dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058dd4b fst dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); }
  /* 0058dd4e fld dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0058dd51 fst dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); }
  /* 0058dd54 fld dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0058dd57 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 0058dd5a fld st(5) */ { double v_ = ST(5); FPUSH(v_); }
  /* 0058dd5c fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd5f fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058dd61 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd64 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dd66 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058dd68 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd6b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dd6d fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dd70 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058dd72 fmul dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd75 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058dd78 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd7b fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dd7d fld st(6) */ { double v_ = ST(6); FPUSH(v_); }
  /* 0058dd7f fmul dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd82 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dd84 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dd87 fld st(5) */ { double v_ = ST(5); FPUSH(v_); }
  /* 0058dd89 fmul dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd8c fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058dd8e fmul dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd91 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dd93 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058dd96 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dd99 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dd9b fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dd9e fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058dda0 fmul dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dda3 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058dda6 fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dda9 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058ddab fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058ddad fmul dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ddb0 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058ddb2 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ddb5 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058ddb8 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 0058ddba fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058ddbd fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058ddbf fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058ddc1 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 0058ddc4 fmul st(6) */ ST(0) = FR(ST(0) * ST(6));
  /* 0058ddc6 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058ddc8 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ddcb fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0058ddce fmul st(5) */ ST(0) = FR(ST(0) * ST(5));
  /* 0058ddd0 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 0058ddd3 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0058ddd5 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058ddd7 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058ddda fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dddd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058dddf fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dde2 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 0058dde5 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dde7 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058ddea fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dded fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058ddef fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0058ddf2 fmul st(6) */ ST(0) = FR(ST(0) * ST(6));
  /* 0058ddf4 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058ddf6 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ddf9 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0058ddfc fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 0058ddfe fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0058de01 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058de03 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058de05 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 0058de08 fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058de0b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058de0d fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058de10 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058de12 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058de14 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058de16 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058de18 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058de1a fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0058de1c fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058de1e fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058de21 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058de23 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058de25 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058de27 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058de2a fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0058de2d fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058de2f fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058de31 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058de34 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058de36 fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058de39 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058de3c fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058de3e fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058de40 fstp st(2) */ ST(2) = ST(0); FPOP();
  /* 0058de42 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058de44 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0058de47 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0058de49 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058de4c mov dword ptr [ebp - 0x38], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ecx); }
  /* 0058de4f fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0058de52 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058de55 fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058de58 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 0058de5b mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0058de5e mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0058de61 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058de63 mov ecx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0058de66 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0058de69 fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058de6c fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058de6f fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058de72 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058de74 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0058de77 fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058de7a fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058de7d fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058de80 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0058de83 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0058de86 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0058de89 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058de8b fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058de8e fld dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058de91 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 0058de94 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058de97 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0058de9a fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058de9c fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058de9f fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dea2 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dea4 fld st(5) */ { double v_ = ST(5); FPUSH(v_); }
  /* 0058dea6 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 0058dea8 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058deaa fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dead fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058deaf fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058deb1 fld st(6) */ { double v_ = ST(6); FPUSH(v_); }
  /* 0058deb3 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058deb5 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058deb7 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058deba fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058debd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058debf fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dec2 fld st(5) */ { double v_ = ST(5); FPUSH(v_); }
  /* 0058dec4 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dec7 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058deca fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058decd fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058decf fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058ded1 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 0058ded3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058ded5 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ded8 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058deda fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dedc fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058dede fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dee1 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058dee3 fld st(5) */ { double v_ = ST(5); FPUSH(v_); }
  /* 0058dee5 fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058dee8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058deea fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058deed fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058deef fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058def1 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058def3 fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058def6 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058def9 fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058defc fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058defe fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058df01 fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df04 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058df06 fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058df09 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058df0b fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df0e fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058df11 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df14 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058df16 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058df18 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058df1b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058df1d fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df20 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058df22 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058df25 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 0058df28 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058df2a fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058df2c fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df2f fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058df31 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058df34 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df37 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058df39 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058df3c fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058df3e fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df41 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058df43 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df46 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058df48 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058df4a fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df4d fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058df4f fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058df52 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058df54 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058df56 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058df58 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058df5a fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058df5d fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df60 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0058df63 fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df66 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058df68 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0058df6b fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df6e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058df70 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0058df73 fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058df76 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058df78 je 0x58df7c */ if (ZF_) goto L_0058df7c;
  /* 0058df7a fst dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); }
L_0058df7c:;
  /* 0058df7c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058df7e fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0058df84 fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0058df86 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058df88 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058df8b jp 0x58df94 */ if (PF_) goto L_0058df94;
  /* 0058df8d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0058df8f jmp 0x58e039 */ goto L_0058e039;
L_0058df94:;
  /* 0058df94 fld1 */ FPUSH(1.0);
  /* 0058df96 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058df97 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 0058df99 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058df9a fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058df9d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058df9f fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058dfa2 fstp qword ptr [esp] */ { const u32 m_ = (u32)(esp); MF64(m_) = ST(0); FPOP(); }
  /* 0058dfa5 call 0x5fedbc */ esp -= 4; M32(esp) = 0x58dfaau; SAVEALL; F_005fedbc(c); ABI_CHECK(0x5fedbcu, 0x58dfa5u); RETCHK(0x58dfaau, 0x58dfa5u); LOADALL;
  /* 0058dfaa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058dfac pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058dfad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0058dfae je 0x58e03b */ if (ZF_) goto L_0058e03b;
  /* 0058dfb4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058dfb7 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058dfba fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0058dfbd fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dfbf fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dfc1 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0058dfc4 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dfc6 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dfc9 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0058dfcc fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dfce fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dfd1 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058dfd4 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dfd6 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dfd9 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0058dfdc fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dfde fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dfe1 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 0058dfe4 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dfe6 fstp dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dfe9 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058dfec fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dfee fstp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dff1 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058dff4 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dff6 fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058dff9 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 0058dffc fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058dffe fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e001 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 0058e004 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e006 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e009 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 0058e00c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e00e fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e011 fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 0058e014 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e016 fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e019 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 0058e01c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e01e fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e021 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 0058e024 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e026 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e029 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0058e02c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e02e fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e031 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0058e034 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e036 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
L_0058e039:;
  /* 0058e039 fstp st(0) */ ST(0) = ST(0); FPOP();
L_0058e03b:;
  /* 0058e03b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058e03c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058e03f(CPU *c) {
  NATIVE_HOOK(0x58e03fu) REGS; LOADALL;
L_0058e03f:;
  /* 0058e03f mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e041 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e042 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e044 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e046 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e04bu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e046u); RETCHK(0x58e04bu, 0x58e046u); LOADALL;
  /* 0058e04b fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058e04e sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e051 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e055 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e058 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e05c fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e05f fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e062 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e065 call dword ptr [0x674b18] */ { const u32 m_ = (u32)(0x674b18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58e06bu; SAVEALL; call_ind(c, t_); RETCHK(0x58e06bu, 0x58e065u); LOADALL; }
  /* 0058e06b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e06c ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058e06f(CPU *c) {
  NATIVE_HOOK(0x58e06fu) REGS; LOADALL;
L_0058e06f:;
  /* 0058e06f mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e071 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e072 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e074 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058e077 fldz */ FPUSH(0.0);
  /* 0058e079 fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e07c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058e07f fldz */ FPUSH(0.0);
  /* 0058e081 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0058e083 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e086 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058e089 fldz */ FPUSH(0.0);
  /* 0058e08b mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058e08e mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058e091 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e094 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0058e097 fldz */ FPUSH(0.0);
  /* 0058e099 fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e09c fldz */ FPUSH(0.0);
  /* 0058e09e fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0a1 fldz */ FPUSH(0.0);
  /* 0058e0a3 fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0a6 fldz */ FPUSH(0.0);
  /* 0058e0a8 fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0ab fldz */ FPUSH(0.0);
  /* 0058e0ad fstp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0b0 fldz */ FPUSH(0.0);
  /* 0058e0b2 fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0b5 fldz */ FPUSH(0.0);
  /* 0058e0b7 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0ba fldz */ FPUSH(0.0);
  /* 0058e0bc fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0bf fldz */ FPUSH(0.0);
  /* 0058e0c1 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0c4 fld1 */ FPUSH(1.0);
  /* 0058e0c6 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0c9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e0ca ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058e0cd(CPU *c) {
  NATIVE_HOOK(0x58e0cdu) REGS; LOADALL;
L_0058e0cd:;
  /* 0058e0cd mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e0cf push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e0d0 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e0d2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e0d4 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e0d9u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e0d4u); RETCHK(0x58e0d9u, 0x58e0d4u); LOADALL;
  /* 0058e0d9 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058e0dc sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e0df fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0e3 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e0e6 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0ea fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e0ed fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e0f0 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e0f3 call dword ptr [0x674afc] */ { const u32 m_ = (u32)(0x674afcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58e0f9u; SAVEALL; call_ind(c, t_); RETCHK(0x58e0f9u, 0x58e0f3u); LOADALL; }
  /* 0058e0f9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e0fa ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058e0fd(CPU *c) {
  NATIVE_HOOK(0x58e0fdu) REGS; LOADALL;
L_0058e0fd:;
  /* 0058e0fd mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e0ff push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e100 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e102 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058e105 fldz */ FPUSH(0.0);
  /* 0058e107 fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e10a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058e10d fldz */ FPUSH(0.0);
  /* 0058e10f mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0058e112 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e115 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0058e118 fldz */ FPUSH(0.0);
  /* 0058e11a mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0058e11d mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058e120 fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e123 mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0058e126 fldz */ FPUSH(0.0);
  /* 0058e128 fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e12b fldz */ FPUSH(0.0);
  /* 0058e12d fstp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e130 fldz */ FPUSH(0.0);
  /* 0058e132 fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e135 fldz */ FPUSH(0.0);
  /* 0058e137 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e13a fldz */ FPUSH(0.0);
  /* 0058e13c fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e13f fldz */ FPUSH(0.0);
  /* 0058e141 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e144 fld1 */ FPUSH(1.0);
  /* 0058e146 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e149 fld1 */ FPUSH(1.0);
  /* 0058e14b fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e14e fld1 */ FPUSH(1.0);
  /* 0058e150 fstp dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e153 fld1 */ FPUSH(1.0);
  /* 0058e155 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e157 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e158 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058e15b(CPU *c) {
  NATIVE_HOOK(0x58e15bu) REGS; LOADALL;
L_0058e15b:;
  /* 0058e15b mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e15d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e15e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e160 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e162 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e167u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e162u); RETCHK(0x58e167u, 0x58e162u); LOADALL;
  /* 0058e167 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e16a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058e16b fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e16e push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e171 call dword ptr [0x674b0c] */ { const u32 m_ = (u32)(0x674b0cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58e177u; SAVEALL; call_ind(c, t_); RETCHK(0x58e177u, 0x58e171u); LOADALL; }
  /* 0058e177 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e178 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058e17b(CPU *c) {
  NATIVE_HOOK(0x58e17bu) REGS; LOADALL;
L_0058e17b:;
  /* 0058e17b mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e17d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e17e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e180 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e183 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0058e186 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0058e189 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0058e18c mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0058e18f mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0058e192 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 0058e195 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e198 fsincos */ { double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }
  /* 0058e19a fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e19c fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e19e fld1 */ FPUSH(1.0);
  /* 0058e1a0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058e1a3 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1a5 fldz */ FPUSH(0.0);
  /* 0058e1a7 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0058e1aa fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1ad mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0058e1b0 fldz */ FPUSH(0.0);
  /* 0058e1b2 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1b5 fldz */ FPUSH(0.0);
  /* 0058e1b7 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1ba fldz */ FPUSH(0.0);
  /* 0058e1bc fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1bf fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058e1c2 fst dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); MF32(m_) = (float)ST(0); }
  /* 0058e1c5 fldz */ FPUSH(0.0);
  /* 0058e1c7 fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1ca fldz */ FPUSH(0.0);
  /* 0058e1cc fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1cf fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058e1d2 fchs */ ST(0) = -ST(0);
  /* 0058e1d4 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1d7 fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1da fldz */ FPUSH(0.0);
  /* 0058e1dc fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1df fldz */ FPUSH(0.0);
  /* 0058e1e1 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1e4 fldz */ FPUSH(0.0);
  /* 0058e1e6 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1e9 fldz */ FPUSH(0.0);
  /* 0058e1eb fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1ee fld1 */ FPUSH(1.0);
  /* 0058e1f0 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e1f3 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058e1f4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058e1f7(CPU *c) {
  NATIVE_HOOK(0x58e1f7u) REGS; LOADALL;
L_0058e1f7:;
  /* 0058e1f7 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e1f9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e1fa mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e1fc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e1fe call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e203u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e1feu); RETCHK(0x58e203u, 0x58e1feu); LOADALL;
  /* 0058e203 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e206 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058e207 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e20a push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e20d call dword ptr [0x674b10] */ { const u32 m_ = (u32)(0x674b10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58e213u; SAVEALL; call_ind(c, t_); RETCHK(0x58e213u, 0x58e20du); LOADALL; }
  /* 0058e213 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e214 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058e217(CPU *c) {
  NATIVE_HOOK(0x58e217u) REGS; LOADALL;
L_0058e217:;
  /* 0058e217 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e219 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e21a mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e21c sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e21f lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0058e222 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0058e225 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0058e228 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0058e22b mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0058e22e mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 0058e231 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e234 fsincos */ { double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }
  /* 0058e236 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e238 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e23a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058e23d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058e240 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058e242 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e244 fldz */ FPUSH(0.0);
  /* 0058e246 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e249 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058e24c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058e24e fchs */ ST(0) = -ST(0);
  /* 0058e250 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e253 fldz */ FPUSH(0.0);
  /* 0058e255 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e258 fldz */ FPUSH(0.0);
  /* 0058e25a fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e25d fld1 */ FPUSH(1.0);
  /* 0058e25f fstp dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e262 fldz */ FPUSH(0.0);
  /* 0058e264 fstp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e267 fldz */ FPUSH(0.0);
  /* 0058e269 fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e26c fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e26f fldz */ FPUSH(0.0);
  /* 0058e271 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e274 fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e277 fldz */ FPUSH(0.0);
  /* 0058e279 fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e27c fldz */ FPUSH(0.0);
  /* 0058e27e fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e281 fldz */ FPUSH(0.0);
  /* 0058e283 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e286 fldz */ FPUSH(0.0);
  /* 0058e288 fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e28b fld1 */ FPUSH(1.0);
  /* 0058e28d fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e290 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058e291 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058e294(CPU *c) {
  NATIVE_HOOK(0x58e294u) REGS; LOADALL;
L_0058e294:;
  /* 0058e294 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e296 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e297 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e299 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e29b call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e2a0u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e29bu); RETCHK(0x58e2a0u, 0x58e29bu); LOADALL;
  /* 0058e2a0 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e2a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058e2a4 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e2a7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e2aa call dword ptr [0x674b14] */ { const u32 m_ = (u32)(0x674b14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58e2b0u; SAVEALL; call_ind(c, t_); RETCHK(0x58e2b0u, 0x58e2aau); LOADALL; }
  /* 0058e2b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e2b1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058e2b4(CPU *c) {
  NATIVE_HOOK(0x58e2b4u) REGS; LOADALL;
L_0058e2b4:;
  /* 0058e2b4 jmp dword ptr [0x674b14] */ { const u32 m_ = (u32)(0x674b14u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058e2ba(CPU *c) {
  NATIVE_HOOK(0x58e2bau) REGS; LOADALL;
L_0058e2ba:;
  /* 0058e2ba mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e2bc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e2bd mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e2bf sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e2c2 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0058e2c5 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0058e2c8 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0058e2cb mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0058e2ce mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0058e2d1 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 0058e2d4 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e2d7 fsincos */ { double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }
  /* 0058e2d9 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e2db fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e2dd fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058e2e0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058e2e3 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058e2e5 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e2e7 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0058e2ea fldz */ FPUSH(0.0);
  /* 0058e2ec mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0058e2ef fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e2f2 fldz */ FPUSH(0.0);
  /* 0058e2f4 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e2f7 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058e2fa fchs */ ST(0) = -ST(0);
  /* 0058e2fc fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e2ff fstp dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e302 fldz */ FPUSH(0.0);
  /* 0058e304 fstp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e307 fldz */ FPUSH(0.0);
  /* 0058e309 fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e30c fldz */ FPUSH(0.0);
  /* 0058e30e fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e311 fldz */ FPUSH(0.0);
  /* 0058e313 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e316 fld1 */ FPUSH(1.0);
  /* 0058e318 fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e31b fldz */ FPUSH(0.0);
  /* 0058e31d fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e320 fldz */ FPUSH(0.0);
  /* 0058e322 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e325 fldz */ FPUSH(0.0);
  /* 0058e327 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e32a fldz */ FPUSH(0.0);
  /* 0058e32c fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e32f fld1 */ FPUSH(1.0);
  /* 0058e331 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e334 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058e335 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058e338(CPU *c) {
  NATIVE_HOOK(0x58e338u) REGS; LOADALL;
L_0058e338:;
  /* 0058e338 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e33a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e33b mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e33d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e33f call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e344u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e33fu); RETCHK(0x58e344u, 0x58e33fu); LOADALL;
  /* 0058e344 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e347 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058e348 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e34b push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e34e push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e351 call dword ptr [0x674b3c] */ { const u32 m_ = (u32)(0x674b3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58e357u; SAVEALL; call_ind(c, t_); RETCHK(0x58e357u, 0x58e351u); LOADALL; }
  /* 0058e357 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e358 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058e35b(CPU *c) {
  NATIVE_HOOK(0x58e35bu) REGS; LOADALL;
L_0058e35b:;
  /* 0058e35b mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e35d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e35e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e360 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e363 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0058e366 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0058e369 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e36a lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0058e36d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058e36e mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0058e371 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0058e374 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 0058e377 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e37a fsincos */ { double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }
  /* 0058e37c fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e37e fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e380 fld1 */ FPUSH(1.0);
  /* 0058e382 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0058e385 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e388 lea edi, [ebp - 0x1c] */ edi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0058e38b movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058e38c lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0058e38f fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e392 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058e393 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e394 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e395 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 0058e396 call 0x58cab1 */ esp -= 4; M32(esp) = 0x58e39bu; SAVEALL; F_0058cab1(c); ABI_CHECK(0x58cab1u, 0x58e396u); RETCHK(0x58e39bu, 0x58e396u); LOADALL;
  /* 0058e39b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058e39e fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e3a1 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0058e3a4 fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e3a7 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e3a9 fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e3ac fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0058e3af fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0058e3b2 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e3b4 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058e3b6 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058e3b8 fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e3bb fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 0058e3bd fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0058e3c0 fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e3c3 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0058e3c5 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e3c8 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e3ca fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058e3cc fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e3cf fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e3d2 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0058e3d4 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e3d7 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0058e3da fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e3dd fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 0058e3e0 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058e3e2 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058e3e4 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e3e7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e3e9 fldz */ FPUSH(0.0);
  /* 0058e3eb fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e3ee fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e3f1 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058e3f3 fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e3f6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e3f8 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0058e3fb fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e3fe fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0058e400 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e403 fstp dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e406 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0058e409 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e40c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058e40e fadd st(3) */ ST(0) = FR(ST(0) + ST(3));
  /* 0058e410 fstp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e413 fldz */ FPUSH(0.0);
  /* 0058e415 fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e418 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e41b fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0058e41d fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e420 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058e422 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058e424 fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e427 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e429 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e42b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e42d fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058e42f fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e431 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0058e433 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e436 fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e439 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e43b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058e43c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e43e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058e43f fldz */ FPUSH(0.0);
  /* 0058e441 fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e444 fldz */ FPUSH(0.0);
  /* 0058e446 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e449 fldz */ FPUSH(0.0);
  /* 0058e44b fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e44e fldz */ FPUSH(0.0);
  /* 0058e450 fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e453 fld1 */ FPUSH(1.0);
  /* 0058e455 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e458 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058e459 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058e45c(CPU *c) {
  NATIVE_HOOK(0x58e45cu) REGS; LOADALL;
L_0058e45c:;
  /* 0058e45c mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e45e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e45f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e461 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e463 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e468u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e463u); RETCHK(0x58e468u, 0x58e463u); LOADALL;
  /* 0058e468 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e469 jmp dword ptr [0x674b2c] */ { const u32 m_ = (u32)(0x674b2cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058e46f(CPU *c) {
  NATIVE_HOOK(0x58e46fu) REGS; LOADALL;
L_0058e46f:;
  /* 0058e46f jmp dword ptr [0x674b2c] */ { const u32 m_ = (u32)(0x674b2cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058e475(CPU *c) {
  NATIVE_HOOK(0x58e475u) REGS; LOADALL;
L_0058e475:;
  /* 0058e475 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e477 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e478 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e47a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e47d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058e480 fld dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); FPUSH((double)MF32(m_)); }
  /* 0058e486 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058e488 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e48a fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e48d fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058e490 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058e492 fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e495 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e498 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058e49b fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e49e fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e4a1 fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e4a4 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058e4a6 fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e4a9 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058e4ac fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e4ae fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4b1 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e4b4 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e4b6 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4b9 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058e4bb fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e4bd fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4c0 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e4c3 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e4c6 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4c9 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058e4cb fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e4ce fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4d1 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058e4d3 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e4d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058e4d9 fld1 */ FPUSH(1.0);
  /* 0058e4db fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e4de fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058e4e0 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4e2 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058e4e5 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0058e4e7 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4ea fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058e4ed fsub st(3) */ ST(0) = FR(ST(0) - ST(3));
  /* 0058e4ef fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4f2 fldz */ FPUSH(0.0);
  /* 0058e4f4 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4f7 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058e4fa fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0058e4fc fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e4ff fld1 */ FPUSH(1.0);
  /* 0058e501 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e504 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 0058e507 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058e509 fstp dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e50c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e50e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e510 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e513 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0058e515 fstp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e518 fldz */ FPUSH(0.0);
  /* 0058e51a fstp dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e51d fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058e520 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0058e522 fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e525 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e527 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e52a fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058e52c fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e52f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e531 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058e533 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058e536 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e539 fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e53c fldz */ FPUSH(0.0);
  /* 0058e53e fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e541 fldz */ FPUSH(0.0);
  /* 0058e543 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e546 fldz */ FPUSH(0.0);
  /* 0058e548 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e54b fldz */ FPUSH(0.0);
  /* 0058e54d fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e550 fld1 */ FPUSH(1.0);
  /* 0058e552 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e555 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058e556 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058e559(CPU *c) {
  NATIVE_HOOK(0x58e559u) REGS; LOADALL;
L_0058e559:;
  /* 0058e559 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e55b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e55c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e55e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e560 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e565u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e560u); RETCHK(0x58e565u, 0x58e560u); LOADALL;
  /* 0058e565 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058e568 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e56b fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e56f fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e572 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e576 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058e579 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e57c push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e57f call dword ptr [0x674b34] */ { const u32 m_ = (u32)(0x674b34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58e585u; SAVEALL; call_ind(c, t_); RETCHK(0x58e585u, 0x58e57fu); LOADALL; }
  /* 0058e585 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e586 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058e589(CPU *c) {
  NATIVE_HOOK(0x58e589u) REGS; LOADALL;
L_0058e589:;
  /* 0058e589 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e58b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e58c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e58e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e590 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e595u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e590u); RETCHK(0x58e595u, 0x58e590u); LOADALL;
  /* 0058e595 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e596 jmp dword ptr [0x674b30] */ { const u32 m_ = (u32)(0x674b30u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058e59c(CPU *c) {
  NATIVE_HOOK(0x58e59cu) REGS; LOADALL;
L_0058e59c:;
  /* 0058e59c mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e59e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058e59f mov ebx, esp */ { ebx = (u32)(esp); }
  /* 0058e5a1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058e5a2 and esp, 0xfffffff0 */ { u32 a_ = esp, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 0058e5a5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e5a8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e5a9 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e5ab mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0058e5ae fldz */ FPUSH(0.0);
  /* 0058e5b0 sub esp, 0xc8 */ { u32 a_ = esp, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e5b6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058e5b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e5b9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058e5ba je 0x58e7cb */ if (ZF_) goto L_0058e7cb;
  /* 0058e5c0 cmp dword ptr [ebx + 0x10], 0 */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058e5c4 je 0x58e711 */ if (ZF_) goto L_0058e711;
  /* 0058e5ca fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e5cd mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0058e5cf fldz */ FPUSH(0.0);
  /* 0058e5d1 push dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e5d4 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e5d7 mov dword ptr [ebp - 0x40], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ecx); }
  /* 0058e5da fldz */ FPUSH(0.0);
  /* 0058e5dc mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0058e5df fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e5e2 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058e5e5 fldz */ FPUSH(0.0);
  /* 0058e5e7 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0058e5ea lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058e5ed fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e5f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e5f1 fldz */ FPUSH(0.0);
  /* 0058e5f3 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 0058e5f6 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e5f9 fldz */ FPUSH(0.0);
  /* 0058e5fb fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e5fe fldz */ FPUSH(0.0);
  /* 0058e600 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e603 fldz */ FPUSH(0.0);
  /* 0058e605 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e608 fldz */ FPUSH(0.0);
  /* 0058e60a fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e60d fldz */ FPUSH(0.0);
  /* 0058e60f fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e612 fldz */ FPUSH(0.0);
  /* 0058e614 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e617 fldz */ FPUSH(0.0);
  /* 0058e619 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e61c fld1 */ FPUSH(1.0);
  /* 0058e61e fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e621 call 0x58e46f */ esp -= 4; M32(esp) = 0x58e626u; SAVEALL; F_0058e46f(c); ABI_CHECK(0x58e46fu, 0x58e621u); RETCHK(0x58e626u, 0x58e621u); LOADALL;
  /* 0058e626 mov edi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edi = (u32)(M32(m_)); }
  /* 0058e629 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058e62b lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058e62e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e62f je 0x58e6ed */ if (ZF_) goto L_0058e6ed;
  /* 0058e635 lea eax, [ebp - 0xc0] */ eax = (u32)((u32)(ebp + 0xffffff40u));
  /* 0058e63b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e63c call 0x58d9b7 */ esp -= 4; M32(esp) = 0x58e641u; SAVEALL; F_0058d9b7(c); ABI_CHECK(0x58d9b7u, 0x58e63cu); RETCHK(0x58e641u, 0x58e63cu); LOADALL;
  /* 0058e641 fldz */ FPUSH(0.0);
  /* 0058e643 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058e646 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e649 fldz */ FPUSH(0.0);
  /* 0058e64b lea eax, [ebp - 0xc0] */ eax = (u32)((u32)(ebp + 0xffffff40u));
  /* 0058e651 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e654 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e655 fldz */ FPUSH(0.0);
  /* 0058e657 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e658 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e659 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e65c fldz */ FPUSH(0.0);
  /* 0058e65e fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e661 fldz */ FPUSH(0.0);
  /* 0058e663 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e666 fldz */ FPUSH(0.0);
  /* 0058e668 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e66b fldz */ FPUSH(0.0);
  /* 0058e66d fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e670 fldz */ FPUSH(0.0);
  /* 0058e672 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e675 fldz */ FPUSH(0.0);
  /* 0058e677 fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e67a fldz */ FPUSH(0.0);
  /* 0058e67c fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e67f fldz */ FPUSH(0.0);
  /* 0058e681 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e684 fldz */ FPUSH(0.0);
  /* 0058e686 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e689 fld1 */ FPUSH(1.0);
  /* 0058e68b fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e68e fld1 */ FPUSH(1.0);
  /* 0058e690 fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e693 fld1 */ FPUSH(1.0);
  /* 0058e695 fstp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e698 fld1 */ FPUSH(1.0);
  /* 0058e69a fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e69c fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0058e69e fchs */ ST(0) = -ST(0);
  /* 0058e6a0 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e6a3 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058e6a6 fchs */ ST(0) = -ST(0);
  /* 0058e6a8 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e6ab fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058e6ae fchs */ ST(0) = -ST(0);
  /* 0058e6b0 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e6b3 call 0x58d766 */ esp -= 4; M32(esp) = 0x58e6b8u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58e6b3u); RETCHK(0x58e6b8u, 0x58e6b3u); LOADALL;
  /* 0058e6b8 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0058e6bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e6bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e6bd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e6be call 0x58d766 */ esp -= 4; M32(esp) = 0x58e6c3u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58e6beu); RETCHK(0x58e6c3u, 0x58e6beu); LOADALL;
  /* 0058e6c3 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058e6c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e6c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e6c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e6c9 call 0x58d766 */ esp -= 4; M32(esp) = 0x58e6ceu; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58e6c9u); RETCHK(0x58e6ceu, 0x58e6c9u); LOADALL;
  /* 0058e6ce fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058e6d1 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e6d3 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e6d6 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058e6d9 fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e6dc fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e6df fld dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058e6e2 fadd dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e6e5 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e6e8 jmp 0x58e81b */ goto L_0058e81b;
L_0058e6ed:;
  /* 0058e6ed mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058e6f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e6f1 call 0x58d9b7 */ esp -= 4; M32(esp) = 0x58e6f6u; SAVEALL; F_0058d9b7(c); ABI_CHECK(0x58d9b7u, 0x58e6f1u); RETCHK(0x58e6f6u, 0x58e6f1u); LOADALL;
  /* 0058e6f6 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0058e6f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e6fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e6fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e6fc call 0x58d766 */ esp -= 4; M32(esp) = 0x58e701u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58e6fcu); RETCHK(0x58e701u, 0x58e6fcu); LOADALL;
  /* 0058e701 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058e704 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e705 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e706 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e707 call 0x58d766 */ esp -= 4; M32(esp) = 0x58e70cu; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58e707u); RETCHK(0x58e70cu, 0x58e707u); LOADALL;
  /* 0058e70c jmp 0x58e81b */ goto L_0058e81b;
L_0058e711:;
  /* 0058e711 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058e714 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058e716 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058e719 je 0x58e77f */ if (ZF_) goto L_0058e77f;
  /* 0058e71b fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e71e fldz */ FPUSH(0.0);
  /* 0058e720 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e723 fldz */ FPUSH(0.0);
  /* 0058e725 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e728 fldz */ FPUSH(0.0);
  /* 0058e72a fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e72d fldz */ FPUSH(0.0);
  /* 0058e72f fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e732 fldz */ FPUSH(0.0);
  /* 0058e734 fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e737 fldz */ FPUSH(0.0);
  /* 0058e739 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e73c fldz */ FPUSH(0.0);
  /* 0058e73e fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e741 fldz */ FPUSH(0.0);
  /* 0058e743 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e746 fld1 */ FPUSH(1.0);
  /* 0058e748 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0058e74a mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 0058e74c mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058e74f mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 0058e752 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0058e755 mov dword ptr [esi + 0x28], edx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edx); }
  /* 0058e758 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e75a fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e75c fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e75f fld1 */ FPUSH(1.0);
  /* 0058e761 fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e764 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e767 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e76a fld1 */ FPUSH(1.0);
  /* 0058e76c fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e76f fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058e772 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
L_0058e775:;
  /* 0058e775 fld1 */ FPUSH(1.0);
  /* 0058e777 fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e77a jmp 0x58e81b */ goto L_0058e81b;
L_0058e77f:;
  /* 0058e77f fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e782 fldz */ FPUSH(0.0);
  /* 0058e784 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e787 fldz */ FPUSH(0.0);
  /* 0058e789 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e78c fldz */ FPUSH(0.0);
  /* 0058e78e fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e791 fldz */ FPUSH(0.0);
  /* 0058e793 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e796 fldz */ FPUSH(0.0);
  /* 0058e798 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e79b fldz */ FPUSH(0.0);
  /* 0058e79d fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7a0 fldz */ FPUSH(0.0);
  /* 0058e7a2 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7a5 fldz */ FPUSH(0.0);
  /* 0058e7a7 fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7aa fldz */ FPUSH(0.0);
  /* 0058e7ac fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7af fldz */ FPUSH(0.0);
  /* 0058e7b1 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7b4 fldz */ FPUSH(0.0);
  /* 0058e7b6 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7b9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0058e7bb mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0058e7bd mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0058e7c0 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0058e7c3 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058e7c6 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 0058e7c9 jmp 0x58e775 */ goto L_0058e775;
L_0058e7cb:;
  /* 0058e7cb mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058e7ce fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7d1 fldz */ FPUSH(0.0);
  /* 0058e7d3 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7d6 fldz */ FPUSH(0.0);
  /* 0058e7d8 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7db fldz */ FPUSH(0.0);
  /* 0058e7dd fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7e0 fldz */ FPUSH(0.0);
  /* 0058e7e2 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7e5 fldz */ FPUSH(0.0);
  /* 0058e7e7 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7ea fldz */ FPUSH(0.0);
  /* 0058e7ec fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7ef fldz */ FPUSH(0.0);
  /* 0058e7f1 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7f4 fldz */ FPUSH(0.0);
  /* 0058e7f6 fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7f9 fldz */ FPUSH(0.0);
  /* 0058e7fb fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e7fe fldz */ FPUSH(0.0);
  /* 0058e800 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e803 fldz */ FPUSH(0.0);
  /* 0058e805 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e808 fld1 */ FPUSH(1.0);
  /* 0058e80a fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e80d fld1 */ FPUSH(1.0);
  /* 0058e80f fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e812 fld1 */ FPUSH(1.0);
  /* 0058e814 fstp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e817 fld1 */ FPUSH(1.0);
  /* 0058e819 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
L_0058e81b:;
  /* 0058e81b cmp dword ptr [ebx + 0x1c], 0 */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058e81f je 0x58e87a */ if (ZF_) goto L_0058e87a;
  /* 0058e821 push dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e824 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058e827 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e828 call 0x58e46f */ esp -= 4; M32(esp) = 0x58e82du; SAVEALL; F_0058e46f(c); ABI_CHECK(0x58e46fu, 0x58e828u); RETCHK(0x58e82du, 0x58e828u); LOADALL;
  /* 0058e82d mov edi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058e830 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058e832 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058e835 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e836 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e837 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e838 je 0x58e875 */ if (ZF_) goto L_0058e875;
  /* 0058e83a fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058e83d fsub dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e83f fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e842 fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058e845 fsub dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e848 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e84b fld dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058e84e fsub dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058e851 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e854 call 0x58d766 */ esp -= 4; M32(esp) = 0x58e859u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58e854u); RETCHK(0x58e859u, 0x58e854u); LOADALL;
  /* 0058e859 fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058e85c fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e85e fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e861 fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058e864 fadd dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e867 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e86a fld dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058e86d fadd dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e870 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e873 jmp 0x58e87a */ goto L_0058e87a;
L_0058e875:;
  /* 0058e875 call 0x58d766 */ esp -= 4; M32(esp) = 0x58e87au; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58e875u); RETCHK(0x58e87au, 0x58e875u); LOADALL;
L_0058e87a:;
  /* 0058e87a mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 0058e87d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058e87f je 0x58e89b */ if (ZF_) goto L_0058e89b;
  /* 0058e881 fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058e884 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e886 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e889 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058e88c fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e88f fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e892 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058e895 fadd dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058e898 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
L_0058e89b:;
  /* 0058e89b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058e89c mov eax, esi */ { eax = (u32)(esi); }
  /* 0058e89e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058e89f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0058e8a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e8a2 mov esp, ebx */ { esp = (u32)(ebx); }
  /* 0058e8a4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058e8a5 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0058e8a8(CPU *c) {
  NATIVE_HOOK(0x58e8a8u) REGS; LOADALL;
L_0058e8a8:;
  /* 0058e8a8 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e8aa push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e8ab mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e8ad push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058e8af call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58e8b4u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58e8afu); RETCHK(0x58e8b4u, 0x58e8afu); LOADALL;
  /* 0058e8b4 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058e8b7 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e8ba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058e8bb fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e8be push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e8c1 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e8c4 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e8c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058e8c8 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e8cb push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e8ce push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058e8d1 call dword ptr [0x674bb0] */ { const u32 m_ = (u32)(0x674bb0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58e8d7u; SAVEALL; call_ind(c, t_); RETCHK(0x58e8d7u, 0x58e8d1u); LOADALL; }
  /* 0058e8d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058e8d8 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0058e8db(CPU *c) {
  NATIVE_HOOK(0x58e8dbu) REGS; LOADALL;
L_0058e8db:;
  /* 0058e8db mov edi, edi */ { edi = (u32)(edi); }
  /* 0058e8dd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058e8de mov ebx, esp */ { ebx = (u32)(esp); }
  /* 0058e8e0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058e8e1 and esp, 0xfffffff0 */ { u32 a_ = esp, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 0058e8e4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e8e7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058e8e8 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058e8ea mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0058e8ed sub esp, 0xc8 */ { u32 a_ = esp, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058e8f3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058e8f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e8f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058e8f7 je 0x58eb00 */ if (ZF_) goto L_0058eb00;
  /* 0058e8fd fld dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e900 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0058e906 fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0058e908 fldz */ FPUSH(0.0);
  /* 0058e90a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058e90c test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058e90f jnp 0x58ea4e */ if (!PF_) goto L_0058ea4e;
  /* 0058e915 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e918 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0058e91a fldz */ FPUSH(0.0);
  /* 0058e91c mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 0058e91f fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e922 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058e925 fldz */ FPUSH(0.0);
  /* 0058e927 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058e928 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e92b mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 0058e92e fldz */ FPUSH(0.0);
  /* 0058e930 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058e933 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e936 fldz */ FPUSH(0.0);
  /* 0058e938 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e93b fldz */ FPUSH(0.0);
  /* 0058e93d fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e940 fldz */ FPUSH(0.0);
  /* 0058e942 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e945 fldz */ FPUSH(0.0);
  /* 0058e947 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e94a fldz */ FPUSH(0.0);
  /* 0058e94c fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e94f fldz */ FPUSH(0.0);
  /* 0058e951 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e954 fldz */ FPUSH(0.0);
  /* 0058e956 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e959 fldz */ FPUSH(0.0);
  /* 0058e95b fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e95e fld1 */ FPUSH(1.0);
  /* 0058e960 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e963 fld1 */ FPUSH(1.0);
  /* 0058e965 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e968 fld dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058e96b fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e96e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e96f call 0x58e2b4 */ esp -= 4; M32(esp) = 0x58e974u; SAVEALL; F_0058e2b4(c); ABI_CHECK(0x58e2b4u, 0x58e96fu); RETCHK(0x58e974u, 0x58e96fu); LOADALL;
  /* 0058e974 mov edi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edi = (u32)(M32(m_)); }
  /* 0058e977 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058e979 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058e97c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e97d je 0x58ea2a */ if (ZF_) goto L_0058ea2a;
  /* 0058e983 lea eax, [ebp - 0xc0] */ eax = (u32)((u32)(ebp + 0xffffff40u));
  /* 0058e989 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e98a call 0x58d9b7 */ esp -= 4; M32(esp) = 0x58e98fu; SAVEALL; F_0058d9b7(c); ABI_CHECK(0x58d9b7u, 0x58e98au); RETCHK(0x58e98fu, 0x58e98au); LOADALL;
  /* 0058e98f fldz */ FPUSH(0.0);
  /* 0058e991 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058e994 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e997 fldz */ FPUSH(0.0);
  /* 0058e999 lea eax, [ebp - 0xc0] */ eax = (u32)((u32)(ebp + 0xffffff40u));
  /* 0058e99f fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058e9a3 fldz */ FPUSH(0.0);
  /* 0058e9a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e9a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058e9a7 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9aa fldz */ FPUSH(0.0);
  /* 0058e9ac fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9af fldz */ FPUSH(0.0);
  /* 0058e9b1 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9b4 fldz */ FPUSH(0.0);
  /* 0058e9b6 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9b9 fldz */ FPUSH(0.0);
  /* 0058e9bb fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9be fldz */ FPUSH(0.0);
  /* 0058e9c0 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9c3 fldz */ FPUSH(0.0);
  /* 0058e9c5 fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9c8 fldz */ FPUSH(0.0);
  /* 0058e9ca fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9cd fldz */ FPUSH(0.0);
  /* 0058e9cf fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9d2 fldz */ FPUSH(0.0);
  /* 0058e9d4 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9d7 fld1 */ FPUSH(1.0);
  /* 0058e9d9 fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9dc fld1 */ FPUSH(1.0);
  /* 0058e9de fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9e1 fld1 */ FPUSH(1.0);
  /* 0058e9e3 fstp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9e6 fld1 */ FPUSH(1.0);
  /* 0058e9e8 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9ea fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0058e9ec fchs */ ST(0) = -ST(0);
  /* 0058e9ee fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9f1 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058e9f4 fchs */ ST(0) = -ST(0);
  /* 0058e9f6 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058e9f9 call 0x58d766 */ esp -= 4; M32(esp) = 0x58e9feu; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58e9f9u); RETCHK(0x58e9feu, 0x58e9f9u); LOADALL;
  /* 0058e9fe lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0058ea01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058ea02 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ea03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ea04 call 0x58d766 */ esp -= 4; M32(esp) = 0x58ea09u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58ea04u); RETCHK(0x58ea09u, 0x58ea04u); LOADALL;
  /* 0058ea09 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058ea0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058ea0d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ea0e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ea0f call 0x58d766 */ esp -= 4; M32(esp) = 0x58ea14u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58ea0fu); RETCHK(0x58ea14u, 0x58ea0fu); LOADALL;
  /* 0058ea14 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0058ea16 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ea19 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea1c fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ea1f fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ea22 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea25 jmp 0x58eb52 */ goto L_0058eb52;
L_0058ea2a:;
  /* 0058ea2a mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058ea2d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ea2e call 0x58d9b7 */ esp -= 4; M32(esp) = 0x58ea33u; SAVEALL; F_0058d9b7(c); ABI_CHECK(0x58d9b7u, 0x58ea2eu); RETCHK(0x58ea33u, 0x58ea2eu); LOADALL;
  /* 0058ea33 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0058ea36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058ea37 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ea38 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ea39 call 0x58d766 */ esp -= 4; M32(esp) = 0x58ea3eu; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58ea39u); RETCHK(0x58ea3eu, 0x58ea39u); LOADALL;
  /* 0058ea3e lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058ea41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058ea42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ea43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ea44 call 0x58d766 */ esp -= 4; M32(esp) = 0x58ea49u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58ea44u); RETCHK(0x58ea49u, 0x58ea44u); LOADALL;
  /* 0058ea49 jmp 0x58eb52 */ goto L_0058eb52;
L_0058ea4e:;
  /* 0058ea4e mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058ea51 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ea53 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058ea56 je 0x58eab5 */ if (ZF_) goto L_0058eab5;
  /* 0058ea58 fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea5b fldz */ FPUSH(0.0);
  /* 0058ea5d fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea60 fldz */ FPUSH(0.0);
  /* 0058ea62 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea65 fldz */ FPUSH(0.0);
  /* 0058ea67 fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea6a fldz */ FPUSH(0.0);
  /* 0058ea6c fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea6f fldz */ FPUSH(0.0);
  /* 0058ea71 fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea74 fldz */ FPUSH(0.0);
  /* 0058ea76 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea79 fldz */ FPUSH(0.0);
  /* 0058ea7b fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea7e fldz */ FPUSH(0.0);
  /* 0058ea80 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea83 fld1 */ FPUSH(1.0);
  /* 0058ea85 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0058ea87 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 0058ea89 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058ea8c fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea8f mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 0058ea92 fld1 */ FPUSH(1.0);
  /* 0058ea94 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058ea96 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ea98 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ea9b fld1 */ FPUSH(1.0);
  /* 0058ea9d fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058eaa0 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058eaa3 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eaa6 fldz */ FPUSH(0.0);
  /* 0058eaa8 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
L_0058eaab:;
  /* 0058eaab fld1 */ FPUSH(1.0);
  /* 0058eaad fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eab0 jmp 0x58eb52 */ goto L_0058eb52;
L_0058eab5:;
  /* 0058eab5 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eab8 fldz */ FPUSH(0.0);
  /* 0058eaba fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eabd fldz */ FPUSH(0.0);
  /* 0058eabf fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eac2 fldz */ FPUSH(0.0);
  /* 0058eac4 fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eac7 fldz */ FPUSH(0.0);
  /* 0058eac9 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eacc fldz */ FPUSH(0.0);
  /* 0058eace fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ead1 fldz */ FPUSH(0.0);
  /* 0058ead3 fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ead6 fldz */ FPUSH(0.0);
  /* 0058ead8 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eadb fldz */ FPUSH(0.0);
  /* 0058eadd fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eae0 fldz */ FPUSH(0.0);
  /* 0058eae2 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eae5 fldz */ FPUSH(0.0);
  /* 0058eae7 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eaea fldz */ FPUSH(0.0);
  /* 0058eaec fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eaef fld1 */ FPUSH(1.0);
  /* 0058eaf1 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0058eaf3 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0058eaf5 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058eaf8 fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eafb mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0058eafe jmp 0x58eaab */ goto L_0058eaab;
L_0058eb00:;
  /* 0058eb00 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058eb03 fldz */ FPUSH(0.0);
  /* 0058eb05 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb08 fldz */ FPUSH(0.0);
  /* 0058eb0a fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb0d fldz */ FPUSH(0.0);
  /* 0058eb0f fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb12 fldz */ FPUSH(0.0);
  /* 0058eb14 fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb17 fldz */ FPUSH(0.0);
  /* 0058eb19 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb1c fldz */ FPUSH(0.0);
  /* 0058eb1e fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb21 fldz */ FPUSH(0.0);
  /* 0058eb23 fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb26 fldz */ FPUSH(0.0);
  /* 0058eb28 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb2b fldz */ FPUSH(0.0);
  /* 0058eb2d fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb30 fldz */ FPUSH(0.0);
  /* 0058eb32 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb35 fldz */ FPUSH(0.0);
  /* 0058eb37 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb3a fldz */ FPUSH(0.0);
  /* 0058eb3c fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb3f fld1 */ FPUSH(1.0);
  /* 0058eb41 fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb44 fld1 */ FPUSH(1.0);
  /* 0058eb46 fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb49 fld1 */ FPUSH(1.0);
  /* 0058eb4b fstp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb4e fld1 */ FPUSH(1.0);
  /* 0058eb50 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
L_0058eb52:;
  /* 0058eb52 fld dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058eb55 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0058eb5b fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0058eb5d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058eb5f test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058eb62 jnp 0x58ebaf */ if (!PF_) goto L_0058ebaf;
  /* 0058eb64 fld dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058eb67 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058eb68 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058eb6b fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058eb6f call 0x58e2b4 */ esp -= 4; M32(esp) = 0x58eb74u; SAVEALL; F_0058e2b4(c); ABI_CHECK(0x58e2b4u, 0x58eb6fu); RETCHK(0x58eb74u, 0x58eb6fu); LOADALL;
  /* 0058eb74 mov edi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edi = (u32)(M32(m_)); }
  /* 0058eb77 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058eb79 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0058eb7c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058eb7d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058eb7e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058eb7f je 0x58ebaa */ if (ZF_) goto L_0058ebaa;
  /* 0058eb81 fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058eb84 fsub dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058eb86 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb89 fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058eb8c fsub dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058eb8f fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb92 call 0x58d766 */ esp -= 4; M32(esp) = 0x58eb97u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58eb92u); RETCHK(0x58eb97u, 0x58eb92u); LOADALL;
  /* 0058eb97 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0058eb99 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058eb9c fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eb9f fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058eba2 fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058eba5 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eba8 jmp 0x58ebaf */ goto L_0058ebaf;
L_0058ebaa:;
  /* 0058ebaa call 0x58d766 */ esp -= 4; M32(esp) = 0x58ebafu; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58ebaau); RETCHK(0x58ebafu, 0x58ebaau); LOADALL;
L_0058ebaf:;
  /* 0058ebaf mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 0058ebb2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ebb4 je 0x58ebc7 */ if (ZF_) goto L_0058ebc7;
  /* 0058ebb6 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058ebb8 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ebbb fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ebbe fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ebc1 fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ebc4 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
L_0058ebc7:;
  /* 0058ebc7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058ebc8 mov eax, esi */ { eax = (u32)(esi); }
  /* 0058ebca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ebcb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0058ebcd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ebce mov esp, ebx */ { esp = (u32)(ebx); }
  /* 0058ebd0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058ebd1 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0058ebd4(CPU *c) {
  NATIVE_HOOK(0x58ebd4u) REGS; LOADALL;
L_0058ebd4:;
  /* 0058ebd4 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ebd6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ebd7 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ebd9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058ebdb call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58ebe0u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58ebdbu); RETCHK(0x58ebe0u, 0x58ebdbu); LOADALL;
  /* 0058ebe0 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058ebe3 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ebe6 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ebe9 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ebec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058ebed fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ebf0 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ebf3 call dword ptr [0x674b38] */ { const u32 m_ = (u32)(0x674b38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58ebf9u; SAVEALL; call_ind(c, t_); RETCHK(0x58ebf9u, 0x58ebf3u); LOADALL; }
  /* 0058ebf9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ebfa ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0058ebfd(CPU *c) {
  NATIVE_HOOK(0x58ebfdu) REGS; LOADALL;
L_0058ebfd:;
  /* 0058ebfd mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ebff push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058ec00 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 0058ec02 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058ec03 and esp, 0xfffffff0 */ { u32 a_ = esp, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 0058ec06 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058ec09 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ec0a mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ec0c sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058ec0f fldz */ FPUSH(0.0);
  /* 0058ec11 cmp dword ptr [ebx + 0x14], 0 */ { const u32 m_ = (u32)(ebx + 0x14u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058ec15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ec16 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058ec19 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec1c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058ec1d fldz */ FPUSH(0.0);
  /* 0058ec1f fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec22 fldz */ FPUSH(0.0);
  /* 0058ec24 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec27 fldz */ FPUSH(0.0);
  /* 0058ec29 fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec2c fldz */ FPUSH(0.0);
  /* 0058ec2e fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec31 fldz */ FPUSH(0.0);
  /* 0058ec33 fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec36 fldz */ FPUSH(0.0);
  /* 0058ec38 fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec3b fldz */ FPUSH(0.0);
  /* 0058ec3d fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec40 fldz */ FPUSH(0.0);
  /* 0058ec42 fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec45 fldz */ FPUSH(0.0);
  /* 0058ec47 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec4a fldz */ FPUSH(0.0);
  /* 0058ec4c fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec4f fldz */ FPUSH(0.0);
  /* 0058ec51 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec54 fld dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058ec57 fst dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); }
  /* 0058ec59 fst dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); MF32(m_) = (float)ST(0); }
  /* 0058ec5c fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec5f fld1 */ FPUSH(1.0);
  /* 0058ec61 fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec64 je 0x58ecbf */ if (ZF_) goto L_0058ecbf;
  /* 0058ec66 push dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ec69 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0058ec6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058ec6d call 0x58e46f */ esp -= 4; M32(esp) = 0x58ec72u; SAVEALL; F_0058e46f(c); ABI_CHECK(0x58e46fu, 0x58ec6du); RETCHK(0x58ec72u, 0x58ec6du); LOADALL;
  /* 0058ec72 mov edi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); edi = (u32)(M32(m_)); }
  /* 0058ec75 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ec77 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0058ec7a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058ec7b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ec7c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ec7d je 0x58ecba */ if (ZF_) goto L_0058ecba;
  /* 0058ec7f fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058ec82 fsub dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058ec84 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec87 fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058ec8a fsub dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058ec8d fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec90 fld dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0058ec93 fsub dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058ec96 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ec99 call 0x58d766 */ esp -= 4; M32(esp) = 0x58ec9eu; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58ec99u); RETCHK(0x58ec9eu, 0x58ec99u); LOADALL;
  /* 0058ec9e fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0058eca0 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058eca3 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eca6 fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058eca9 fadd dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ecac fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ecaf fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058ecb2 fadd dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ecb5 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ecb8 jmp 0x58ecbf */ goto L_0058ecbf;
L_0058ecba:;
  /* 0058ecba call 0x58d766 */ esp -= 4; M32(esp) = 0x58ecbfu; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58ecbau); RETCHK(0x58ecbfu, 0x58ecbau); LOADALL;
L_0058ecbf:;
  /* 0058ecbf mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058ecc2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ecc4 je 0x58ece0 */ if (ZF_) goto L_0058ece0;
  /* 0058ecc6 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058ecc8 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058eccb fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ecce fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058ecd1 fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ecd4 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ecd7 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058ecda fadd dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ecdd fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
L_0058ece0:;
  /* 0058ece0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058ece1 mov eax, esi */ { eax = (u32)(esi); }
  /* 0058ece3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ece4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0058ece6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ece7 mov esp, ebx */ { esp = (u32)(ebx); }
  /* 0058ece9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058ecea ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0058eced(CPU *c) {
  NATIVE_HOOK(0x58ecedu) REGS; LOADALL;
L_0058eced:;
  /* 0058eced mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ecef push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ecf0 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ecf2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058ecf4 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58ecf9u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58ecf4u); RETCHK(0x58ecf9u, 0x58ecf4u); LOADALL;
  /* 0058ecf9 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058ecfc push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ecff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058ed00 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed03 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ed06 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058ed09 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058ed0a fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed0d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058ed10 call dword ptr [0x674bb4] */ { const u32 m_ = (u32)(0x674bb4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58ed16u; SAVEALL; call_ind(c, t_); RETCHK(0x58ed16u, 0x58ed10u); LOADALL; }
  /* 0058ed16 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ed17 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0058ed1a(CPU *c) {
  NATIVE_HOOK(0x58ed1au) REGS; LOADALL;
L_0058ed1a:;
  /* 0058ed1a mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ed1c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058ed1d mov ebx, esp */ { ebx = (u32)(esp); }
  /* 0058ed1f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058ed20 and esp, 0xfffffff0 */ { u32 a_ = esp, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 0058ed23 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058ed26 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ed27 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ed29 sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058ed2c fldz */ FPUSH(0.0);
  /* 0058ed2e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ed2f mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058ed32 fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed35 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058ed36 fldz */ FPUSH(0.0);
  /* 0058ed38 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed3b fldz */ FPUSH(0.0);
  /* 0058ed3d fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed40 fldz */ FPUSH(0.0);
  /* 0058ed42 fstp dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed45 fldz */ FPUSH(0.0);
  /* 0058ed47 fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed4a fldz */ FPUSH(0.0);
  /* 0058ed4c fstp dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed4f fldz */ FPUSH(0.0);
  /* 0058ed51 fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed54 fldz */ FPUSH(0.0);
  /* 0058ed56 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed59 fldz */ FPUSH(0.0);
  /* 0058ed5b fstp dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed5e fldz */ FPUSH(0.0);
  /* 0058ed60 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed63 fldz */ FPUSH(0.0);
  /* 0058ed65 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed68 fldz */ FPUSH(0.0);
  /* 0058ed6a fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed6d fld dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058ed70 fst dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); }
  /* 0058ed72 fstp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed75 fld1 */ FPUSH(1.0);
  /* 0058ed77 fstp dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed7a fld1 */ FPUSH(1.0);
  /* 0058ed7c fstp dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed7f fld dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058ed82 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0058ed88 fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0058ed8a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058ed8c test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058ed8f jnp 0x58eddc */ if (!PF_) goto L_0058eddc;
  /* 0058ed91 fld dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058ed94 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058ed95 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0058ed98 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ed9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058ed9c call 0x58e2b4 */ esp -= 4; M32(esp) = 0x58eda1u; SAVEALL; F_0058e2b4(c); ABI_CHECK(0x58e2b4u, 0x58ed9cu); RETCHK(0x58eda1u, 0x58ed9cu); LOADALL;
  /* 0058eda1 mov edi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); edi = (u32)(M32(m_)); }
  /* 0058eda4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058eda6 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0058eda9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058edaa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058edab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058edac je 0x58edd7 */ if (ZF_) goto L_0058edd7;
  /* 0058edae fld dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0058edb1 fsub dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058edb3 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058edb6 fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058edb9 fsub dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058edbc fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058edbf call 0x58d766 */ esp -= 4; M32(esp) = 0x58edc4u; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58edbfu); RETCHK(0x58edc4u, 0x58edbfu); LOADALL;
  /* 0058edc4 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0058edc6 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058edc9 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058edcc fld dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0058edcf fadd dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058edd2 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058edd5 jmp 0x58eddc */ goto L_0058eddc;
L_0058edd7:;
  /* 0058edd7 call 0x58d766 */ esp -= 4; M32(esp) = 0x58eddcu; SAVEALL; F_0058d766(c); ABI_CHECK(0x58d766u, 0x58edd7u); RETCHK(0x58eddcu, 0x58edd7u); LOADALL;
L_0058eddc:;
  /* 0058eddc mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0058eddf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ede1 je 0x58edf4 */ if (ZF_) goto L_0058edf4;
  /* 0058ede3 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058ede5 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ede8 fstp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058edeb fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058edee fadd dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058edf1 fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
L_0058edf4:;
  /* 0058edf4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058edf5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0058edf7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058edf8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0058edfa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058edfb mov esp, ebx */ { esp = (u32)(ebx); }
  /* 0058edfd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058edfe ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0058ee01(CPU *c) {
  NATIVE_HOOK(0x58ee01u) REGS; LOADALL;
L_0058ee01:;
  /* 0058ee01 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ee03 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ee04 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ee06 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058ee08 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58ee0du; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58ee08u); RETCHK(0x58ee0du, 0x58ee08u); LOADALL;
  /* 0058ee0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ee0e jmp dword ptr [0x674b00] */ { const u32 m_ = (u32)(0x674b00u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ee14(CPU *c) {
  NATIVE_HOOK(0x58ee14u) REGS; LOADALL;
L_0058ee14:;
  /* 0058ee14 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ee16 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ee17 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ee19 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058ee1b call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58ee20u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58ee1bu); RETCHK(0x58ee20u, 0x58ee1bu); LOADALL;
  /* 0058ee20 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ee21 jmp dword ptr [0x674b04] */ { const u32 m_ = (u32)(0x674b04u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ee27(CPU *c) {
  NATIVE_HOOK(0x58ee27u) REGS; LOADALL;
L_0058ee27:;
  /* 0058ee27 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ee29 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ee2a mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ee2c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058ee2e call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58ee33u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58ee2eu); RETCHK(0x58ee33u, 0x58ee2eu); LOADALL;
  /* 0058ee33 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ee34 jmp dword ptr [0x674af0] */ { const u32 m_ = (u32)(0x674af0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ee3a(CPU *c) {
  NATIVE_HOOK(0x58ee3au) REGS; LOADALL;
L_0058ee3a:;
  /* 0058ee3a mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ee3c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ee3d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ee3f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058ee42 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ee44 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058ee47 je 0x58ee59 */ if (ZF_) goto L_0058ee59;
  /* 0058ee49 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0058ee4b mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0058ee4d mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0058ee50 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0058ee53 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0058ee56 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
L_0058ee59:;
  /* 0058ee59 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058ee5a mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0058ee5d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058ee5f je 0x58ee6d */ if (ZF_) goto L_0058ee6d;
  /* 0058ee61 fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058ee64 call 0x5fedb6 */ { ST(0) = m_acos(ST(0)); }
  /* 0058ee69 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0058ee6b fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
L_0058ee6d:;
  /* 0058ee6d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058ee6e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ee6f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058ee72(CPU *c) {
  NATIVE_HOOK(0x58ee72u) REGS; LOADALL;
L_0058ee72:;
  /* 0058ee72 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ee74 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ee75 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ee77 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058ee79 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58ee7eu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58ee79u); RETCHK(0x58ee7eu, 0x58ee79u); LOADALL;
  /* 0058ee7e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058ee7f jmp dword ptr [0x674af4] */ { const u32 m_ = (u32)(0x674af4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ee85(CPU *c) {
  NATIVE_HOOK(0x58ee85u) REGS; LOADALL;
L_0058ee85:;
  /* 0058ee85 jmp dword ptr [0x674af4] */ { const u32 m_ = (u32)(0x674af4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058ee8b(CPU *c) {
  NATIVE_HOOK(0x58ee8bu) REGS; LOADALL;
L_0058ee8b:;
  /* 0058ee8b mov edi, edi */ { edi = (u32)(edi); }
  /* 0058ee8d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058ee8e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058ee90 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058ee93 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058ee96 fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058ee99 fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ee9b fadd dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ee9e fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0058eea4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058eea6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058eea9 jne 0x58eeec */ if (!ZF_) goto L_0058eeec;
  /* 0058eeab fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058eeb1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058eeb4 fsqrt */ ST(0) = FR(__builtin_sqrt(ST(0)));
  /* 0058eeb6 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058eebc fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058eebe fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eec1 fdivr dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 0058eec7 fld dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0058eeca fsub dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058eecd fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058eecf fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eed1 fld dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0058eed4 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058eed7 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058eed9 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eedc fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058eedf fsub dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058eee2 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058eee4 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058eee7 jmp 0x58efbb */ goto L_0058efbb;
L_0058eeec:;
  /* 0058eeec fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058eeee and dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0058eef2 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058eef4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0058eef5 fsub dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058eef8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058eef9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0058eefa xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0058eefc fsub dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058eeff inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0058ef00 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0058ef02 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 0058ef03 fst dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); }
  /* 0058ef06 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0058ef09 fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058ef0c mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 0058ef0f fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058ef11 fsub dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058ef14 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ef17 fld dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058ef1a fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ef1c fsubr dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0058ef1f fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ef22 fcomp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058ef25 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058ef27 test bl, ah */ { u32 a_ = (ebx & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058ef29 jne 0x58ef2d */ if (!ZF_) goto L_0058ef2d;
  /* 0058ef2b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0058ef2d:;
  /* 0058ef2d fld dword ptr [ebp + ebx*4 - 0x10] */ { const u32 m_ = (u32)(ebp + ebx * 4u + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058ef31 mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0058ef34 fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058ef37 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058ef39 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058ef3c je 0x58ef43 */ if (ZF_) goto L_0058ef43;
  /* 0058ef3e mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0058ef40 mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
L_0058ef43:;
  /* 0058ef43 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0058ef45 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0058ef48 fld dword ptr [ebp + edx - 0x10] */ { const u32 m_ = (u32)(ebp + edx + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058ef4c mov edi, dword ptr [ebp + edx - 0x1c] */ { const u32 m_ = (u32)(ebp + edx + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 0058ef50 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ef56 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058ef59 mov esi, edi */ { esi = (u32)(edi); }
  /* 0058ef5b shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0058ef5e fsqrt */ ST(0) = FR(__builtin_sqrt(ST(0)));
  /* 0058ef60 add ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0058ef62 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0058ef65 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0058ef67 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058ef6d fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058ef6f fstp dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ef72 fdivr dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 0058ef78 fld dword ptr [ecx + ebx*4] */ { const u32 m_ = (u32)(ecx + ebx * 4u); FPUSH((double)MF32(m_)); }
  /* 0058ef7b fadd dword ptr [ecx + edi*4] */ { const u32 m_ = (u32)(ecx + edi * 4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058ef7e mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0058ef81 mov edi, dword ptr [ebp + esi - 0x1c] */ { const u32 m_ = (u32)(ebp + esi + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 0058ef85 shl edi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0058ef88 add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0058ef8a fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058ef8c mov dword ptr [ebp + 8], edi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edi); }
  /* 0058ef8f mov edi, dword ptr [ebp + esi - 0x1c] */ { const u32 m_ = (u32)(ebp + esi + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 0058ef93 fstp dword ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058ef96 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058ef98 fld dword ptr [ecx + ebx*4] */ { const u32 m_ = (u32)(ecx + ebx * 4u); FPUSH((double)MF32(m_)); }
  /* 0058ef9b add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0058ef9d fadd dword ptr [ecx + edx*4] */ { const u32 m_ = (u32)(ecx + edx * 4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0058efa0 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0058efa3 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0058efa6 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058efa8 fstp dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058efab add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0058efad fld dword ptr [ecx + esi*4] */ { const u32 m_ = (u32)(ecx + esi * 4u); FPUSH((double)MF32(m_)); }
  /* 0058efb0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0058efb1 fsub dword ptr [ecx + edx*4] */ { const u32 m_ = (u32)(ecx + edx * 4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058efb4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058efb5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0058efb6 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058efb8 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
L_0058efbb:;
  /* 0058efbb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058efbd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058efbe ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058efc1(CPU *c) {
  NATIVE_HOOK(0x58efc1u) REGS; LOADALL;
L_0058efc1:;
  /* 0058efc1 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058efc3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058efc4 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058efc6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058efc8 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58efcdu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58efc8u); RETCHK(0x58efcdu, 0x58efc8u); LOADALL;
  /* 0058efcd fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058efd0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058efd1 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058efd4 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058efd7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058efda call dword ptr [0x674b08] */ { const u32 m_ = (u32)(0x674b08u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58efe0u; SAVEALL; call_ind(c, t_); RETCHK(0x58efe0u, 0x58efdau); LOADALL; }
  /* 0058efe0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058efe1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058efe4(CPU *c) {
  NATIVE_HOOK(0x58efe4u) REGS; LOADALL;
L_0058efe4:;
  /* 0058efe4 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058efe6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058efe7 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058efe9 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058efec push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058efef lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0058eff2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0058eff3 call 0x58cab1 */ esp -= 4; M32(esp) = 0x58eff8u; SAVEALL; F_0058cab1(c); ABI_CHECK(0x58cab1u, 0x58eff3u); RETCHK(0x58eff8u, 0x58eff3u); LOADALL;
  /* 0058eff8 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058effb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0058effe fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f004 lea eax, [ecx + 0xc] */ eax = (u32)((u32)(ecx + 0xcu));
  /* 0058f007 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0058f00a lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 0058f00d fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f010 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0058f013 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0058f016 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0058f019 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058f01c fsincos */ { double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }
  /* 0058f01e fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f020 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f022 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0058f025 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f028 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0058f02a fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f02c fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058f02f fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f032 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f035 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0058f038 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f03b fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f03e leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058f03f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058f042(CPU *c) {
  NATIVE_HOOK(0x58f042u) REGS; LOADALL;
L_0058f042:;
  /* 0058f042 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f044 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f045 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f047 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058f049 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58f04eu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58f049u); RETCHK(0x58f04eu, 0x58f049u); LOADALL;
  /* 0058f04e fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058f051 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058f054 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f058 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058f05b fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f05f fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f062 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f065 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058f068 call dword ptr [0x674af8] */ { const u32 m_ = (u32)(0x674af8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58f06eu; SAVEALL; call_ind(c, t_); RETCHK(0x58f06eu, 0x58f068u); LOADALL; }
  /* 0058f06e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f06f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058f072(CPU *c) {
  NATIVE_HOOK(0x58f072u) REGS; LOADALL;
L_0058f072:;
  /* 0058f072 jmp dword ptr [0x674af8] */ { const u32 m_ = (u32)(0x674af8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f078(CPU *c) {
  NATIVE_HOOK(0x58f078u) REGS; LOADALL;
L_0058f078:;
  /* 0058f078 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f07a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f07b mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f07d sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0058f080 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058f083 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0058f086 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f08c mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0058f08f lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 0058f092 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0058f095 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f098 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 0058f09b mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 0058f09e fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0058f0a1 fsincos */ { double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }
  /* 0058f0a3 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f0a5 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f0a7 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058f0aa lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0058f0ad fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f0b3 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0058f0b6 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0058f0b9 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0058f0bc fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f0bf mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0058f0c2 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 0058f0c5 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058f0c8 fsincos */ { double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }
  /* 0058f0ca fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f0cc fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f0ce fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f0d1 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0058f0d4 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f0da mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0058f0dd lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0058f0e0 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0058f0e3 fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f0e6 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0058f0e9 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 0058f0ec fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058f0ef fsincos */ { double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }
  /* 0058f0f1 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f0f3 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f0f5 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058f0f8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058f0fb fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f0fe fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058f101 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f104 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058f107 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058f109 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058f10b fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f10e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f110 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f112 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058f114 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f117 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058f119 fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f11c fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058f11e fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f121 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f123 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f125 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0058f128 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f12b fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0058f12e fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f131 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058f133 fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f136 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058f138 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f13b fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0058f13d fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f140 fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f143 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058f145 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f148 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f14a fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f14d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f14f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058f150 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058f153(CPU *c) {
  NATIVE_HOOK(0x58f153u) REGS; LOADALL;
L_0058f153:;
  /* 0058f153 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f155 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f156 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f158 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058f15a call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58f15fu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58f15au); RETCHK(0x58f15fu, 0x58f15au); LOADALL;
  /* 0058f15f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f160 jmp dword ptr [0x674ae0] */ { const u32 m_ = (u32)(0x674ae0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f166(CPU *c) {
  NATIVE_HOOK(0x58f166u) REGS; LOADALL;
L_0058f166:;
  /* 0058f166 jmp dword ptr [0x674ae0] */ { const u32 m_ = (u32)(0x674ae0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f16c(CPU *c) {
  NATIVE_HOOK(0x58f16cu) REGS; LOADALL;
L_0058f16c:;
  /* 0058f16c mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f16e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f16f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f171 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0058f174 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0058f177 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0058f17a fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f17d fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f17f fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f182 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f185 fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f188 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f18b fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f18e fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f191 fxch st(3) */ { double t_ = ST(0); ST(0) = ST(3); ST(3) = t_; }
  /* 0058f193 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058f195 fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f198 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058f19a fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f19d fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058f19f fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1a2 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0058f1a4 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1a6 fxch st(3) */ { double t_ = ST(0); ST(0) = ST(3); ST(3) = t_; }
  /* 0058f1a8 faddp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) + s0_); FPOP(); }
  /* 0058f1aa fsubp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) - s0_); FPOP(); }
  /* 0058f1ac faddp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) + s0_); FPOP(); }
  /* 0058f1ae fsubp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) - s0_); FPOP(); }
  /* 0058f1b0 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058f1b3 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1b6 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058f1b9 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1bb fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058f1be fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1c1 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058f1c4 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1c7 fxch st(3) */ { double t_ = ST(0); ST(0) = ST(3); ST(3) = t_; }
  /* 0058f1c9 faddp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) + s0_); FPOP(); }
  /* 0058f1cb faddp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) + s0_); FPOP(); }
  /* 0058f1cd fsubp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) - s0_); FPOP(); }
  /* 0058f1cf fsubp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) - s0_); FPOP(); }
  /* 0058f1d1 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058f1d4 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1d7 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058f1da fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1dd fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058f1e0 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1e2 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058f1e5 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f1e8 fxch st(3) */ { double t_ = ST(0); ST(0) = ST(3); ST(3) = t_; }
  /* 0058f1ea fsubp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) - s0_); FPOP(); }
  /* 0058f1ec faddp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) + s0_); FPOP(); }
  /* 0058f1ee faddp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) + s0_); FPOP(); }
  /* 0058f1f0 fsubp st(4) */ { double s0_ = ST(0); ST(4) = FR(ST(4) - s0_); FPOP(); }
  /* 0058f1f2 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f1f4 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f1f7 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f1fa fstp dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f1fd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058f200 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f201 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0058f204(CPU *c) {
  NATIVE_HOOK(0x58f204u) REGS; LOADALL;
L_0058f204:;
  /* 0058f204 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f206 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f207 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f209 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058f20b call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58f210u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58f20bu); RETCHK(0x58f210u, 0x58f20bu); LOADALL;
  /* 0058f210 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f211 jmp dword ptr [0x674ae4] */ { const u32 m_ = (u32)(0x674ae4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f217(CPU *c) {
  NATIVE_HOOK(0x58f217u) REGS; LOADALL;
L_0058f217:;
  /* 0058f217 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f219 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f21a mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f21c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058f21e call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58f223u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58f21eu); RETCHK(0x58f223u, 0x58f21eu); LOADALL;
  /* 0058f223 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f224 jmp dword ptr [0x674b44] */ { const u32 m_ = (u32)(0x674b44u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f22a(CPU *c) {
  NATIVE_HOOK(0x58f22au) REGS; LOADALL;
L_0058f22a:;
  /* 0058f22a jmp dword ptr [0x674b44] */ { const u32 m_ = (u32)(0x674b44u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f230(CPU *c) {
  NATIVE_HOOK(0x58f230u) REGS; LOADALL;
L_0058f230:;
  /* 0058f230 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f232 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f233 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f235 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0058f238 fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f23b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0058f23e fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058f241 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058f244 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058f246 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f248 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058f24a fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058f24c fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 0058f24e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f250 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058f252 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0058f254 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f256 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 0058f258 fmul st(5) */ ST(0) = FR(ST(0) * ST(5));
  /* 0058f25a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f25c fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f25f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f261 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f263 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f265 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f267 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f26a fcomp dword ptr [0x631324] */ { const u32 m_ = (u32)(0x631324u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058f270 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058f272 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058f275 jne 0x58f2ca */ if (!ZF_) goto L_0058f2ca;
  /* 0058f277 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 0058f279 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f27a fchs */ ST(0) = -ST(0);
  /* 0058f27c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f27d fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f27f fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058f282 fchs */ ST(0) = -ST(0);
  /* 0058f284 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f287 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058f28a fchs */ ST(0) = -ST(0);
  /* 0058f28c fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f28f mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0058f292 fld1 */ FPUSH(1.0);
  /* 0058f294 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0058f297 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f29b fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f29e fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f2a1 call 0x58c5c1 */ esp -= 4; M32(esp) = 0x58f2a6u; SAVEALL; F_0058c5c1(c); ABI_CHECK(0x58c5c1u, 0x58f2a1u); RETCHK(0x58f2a6u, 0x58f2a1u); LOADALL;
  /* 0058f2a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058f2a8 jne 0x58f2dd */ if (!ZF_) goto L_0058f2dd;
  /* 0058f2aa fld1 */ FPUSH(1.0);
  /* 0058f2ac fdiv dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0058f2af fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f2b1 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f2b3 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f2b5 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f2b7 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f2ba fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f2bd fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f2bf fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f2c2 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f2c5 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f2c8 jmp 0x58f2da */ goto L_0058f2da;
L_0058f2ca:;
  /* 0058f2ca fldz */ FPUSH(0.0);
  /* 0058f2cc fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f2ce fldz */ FPUSH(0.0);
  /* 0058f2d0 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f2d3 fldz */ FPUSH(0.0);
  /* 0058f2d5 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f2d8 fldz */ FPUSH(0.0);
L_0058f2da:;
  /* 0058f2da fstp dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
L_0058f2dd:;
  /* 0058f2dd mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0058f2df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f2e0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058f2e3(CPU *c) {
  NATIVE_HOOK(0x58f2e3u) REGS; LOADALL;
L_0058f2e3:;
  /* 0058f2e3 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f2e5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f2e6 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f2e8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058f2ea call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58f2efu; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58f2eau); RETCHK(0x58f2efu, 0x58f2eau); LOADALL;
  /* 0058f2ef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f2f0 jmp dword ptr [0x674b70] */ { const u32 m_ = (u32)(0x674b70u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f2f6(CPU *c) {
  NATIVE_HOOK(0x58f2f6u) REGS; LOADALL;
L_0058f2f6:;
  /* 0058f2f6 jmp dword ptr [0x674b70] */ { const u32 m_ = (u32)(0x674b70u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f2fc(CPU *c) {
  NATIVE_HOOK(0x58f2fcu) REGS; LOADALL;
L_0058f2fc:;
  /* 0058f2fc mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f2fe push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f2ff mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f301 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f302 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058f303 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0058f306 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f309 fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058f30f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058f311 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058f314 jp 0x58f35c */ if (PF_) goto L_0058f35c;
  /* 0058f316 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f319 call 0x5fedb6 */ { ST(0) = m_acos(ST(0)); }
  /* 0058f31e fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 0058f321 fsin */ ST(0) = m_sin(ST(0)); c->fsw &= ~0x400u;
  /* 0058f323 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f324 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f325 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f328 fldz */ FPUSH(0.0);
  /* 0058f32a fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f32e fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058f331 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f334 call 0x58c5c1 */ esp -= 4; M32(esp) = 0x58f339u; SAVEALL; F_0058c5c1(c); ABI_CHECK(0x58c5c1u, 0x58f334u); RETCHK(0x58f339u, 0x58f334u); LOADALL;
  /* 0058f339 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058f33b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058f33e jne 0x58f35f */ if (!ZF_) goto L_0058f35f;
  /* 0058f340 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f343 fdiv dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0058f346 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f348 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f34a fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f34c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f34e fmul dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f351 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f354 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f357 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f35a jmp 0x58f36f */ goto L_0058f36f;
L_0058f35c:;
  /* 0058f35c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_0058f35f:;
  /* 0058f35f fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0058f361 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f363 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0058f366 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0058f369 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0058f36c mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_0058f36f:;
  /* 0058f36f fldz */ FPUSH(0.0);
  /* 0058f371 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058f372 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f375 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058f376 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058f379(CPU *c) {
  NATIVE_HOOK(0x58f379u) REGS; LOADALL;
L_0058f379:;
  /* 0058f379 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f37b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f37c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f37e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058f380 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58f385u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58f380u); RETCHK(0x58f385u, 0x58f380u); LOADALL;
  /* 0058f385 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f386 jmp dword ptr [0x674b74] */ { const u32 m_ = (u32)(0x674b74u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f38c(CPU *c) {
  NATIVE_HOOK(0x58f38cu) REGS; LOADALL;
L_0058f38c:;
  /* 0058f38c jmp dword ptr [0x674b74] */ { const u32 m_ = (u32)(0x674b74u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f392(CPU *c) {
  NATIVE_HOOK(0x58f392u) REGS; LOADALL;
L_0058f392:;
  /* 0058f392 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f394 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f395 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f397 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f398 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f399 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058f39c fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058f39f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0058f3a0 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058f3a3 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0058f3a6 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058f3a8 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 0058f3ab fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f3ad mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0058f3b0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058f3b2 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 0058f3b5 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058f3b7 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0058f3ba fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 0058f3bc faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f3be fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 0058f3c0 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 0058f3c2 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f3c4 fsqrt */ ST(0) = FR(__builtin_sqrt(ST(0)));
  /* 0058f3c6 fstp st(3) */ ST(3) = ST(0); FPOP();
  /* 0058f3c8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f3ca fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f3cc fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f3cf mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0058f3d2 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0058f3d5 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0058f3d8 fsincos */ { double x_ = ST(0); ST(0) = m_sin(x_); FPUSH(m_cos(x_)); c->fsw &= ~0x400u; }
  /* 0058f3da fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f3dc fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f3de fldz */ FPUSH(0.0);
  /* 0058f3e0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f3e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f3e2 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f3e6 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f3e9 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f3ec call 0x58c5c1 */ esp -= 4; M32(esp) = 0x58f3f1u; SAVEALL; F_0058c5c1(c); ABI_CHECK(0x58c5c1u, 0x58f3ecu); RETCHK(0x58f3f1u, 0x58f3ecu); LOADALL;
  /* 0058f3f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0058f3f3 je 0x58f40b */ if (ZF_) goto L_0058f40b;
  /* 0058f3f5 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0058f3f7 je 0x58f425 */ if (ZF_) goto L_0058f425;
  /* 0058f3f9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0058f3fb mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0058f3fd mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0058f400 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0058f403 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058f406 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0058f409 jmp 0x58f425 */ goto L_0058f425;
L_0058f40b:;
  /* 0058f40b fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f40e fdiv dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0058f411 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f413 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f415 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f417 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f419 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f41c fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f41f fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f422 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
L_0058f425:;
  /* 0058f425 mov eax, esi */ { eax = (u32)(esi); }
  /* 0058f427 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0058f428 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058f429 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0058f42c(CPU *c) {
  NATIVE_HOOK(0x58f42cu) REGS; LOADALL;
L_0058f42c:;
  /* 0058f42c mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f42e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f42f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f431 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058f433 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58f438u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58f433u); RETCHK(0x58f438u, 0x58f433u); LOADALL;
  /* 0058f438 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0058f43b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f43c fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f43f push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058f442 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058f445 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058f448 call dword ptr [0x674b20] */ { const u32 m_ = (u32)(0x674b20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58f44eu; SAVEALL; call_ind(c, t_); RETCHK(0x58f44eu, 0x58f448u); LOADALL; }
  /* 0058f44e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f44f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058f452(CPU *c) {
  NATIVE_HOOK(0x58f452u) REGS; LOADALL;
L_0058f452:;
  /* 0058f452 jmp dword ptr [0x674b20] */ { const u32 m_ = (u32)(0x674b20u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0058f458(CPU *c) {
  NATIVE_HOOK(0x58f458u) REGS; LOADALL;
L_0058f458:;
  /* 0058f458 mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f45a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f45b mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f45d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f45e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0058f461 fld1 */ FPUSH(1.0);
  /* 0058f463 fsub dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0058f466 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0058f469 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0058f46b fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f46d fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0058f470 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f473 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f475 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0058f478 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f47b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f47d fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f480 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f483 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f485 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0058f48b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058f48d test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058f490 jne 0x58f499 */ if (!ZF_) goto L_0058f499;
  /* 0058f492 fld1 */ FPUSH(1.0);
  /* 0058f494 fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f497 jmp 0x58f4a0 */ goto L_0058f4a0;
L_0058f499:;
  /* 0058f499 mov dword ptr [ebp + 0xc], 0xbf800000 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0xbf800000u); }
L_0058f4a0:;
  /* 0058f4a0 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0058f4a3 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058f4a5 fst dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 0058f4a8 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 0058f4aa fld1 */ FPUSH(1.0);
  /* 0058f4ac fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0058f4ae fcomp dword ptr [0x631318] */ { const u32 m_ = (u32)(0x631318u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0058f4b4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0058f4b6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0058f4b9 jne 0x58f4f5 */ if (!ZF_) goto L_0058f4f5;
  /* 0058f4bb fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f4bd fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058f4bf fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0058f4c5 fsqrt */ ST(0) = FR(__builtin_sqrt(ST(0)));
  /* 0058f4c7 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 0058f4c9 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f4cb fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058f4ce fpatan */ { double x_ = ST(0); FPOP(); ST(0) = m_atan2(ST(0), x_); }
  /* 0058f4d0 fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f4d3 fld1 */ FPUSH(1.0);
  /* 0058f4d5 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 0058f4d7 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f4da fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f4dc fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058f4df fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0058f4e1 fsin */ ST(0) = m_sin(ST(0)); c->fsw &= ~0x400u;
  /* 0058f4e3 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 0058f4e5 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f4e8 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0058f4eb fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f4ee fsin */ ST(0) = m_sin(ST(0)); c->fsw &= ~0x400u;
  /* 0058f4f0 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f4f3 jmp 0x58f4fa */ goto L_0058f4fa;
L_0058f4f5:;
  /* 0058f4f5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f4f7 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
L_0058f4fa:;
  /* 0058f4fa fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f4fd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0058f500 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058f502 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f504 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058f506 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f508 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f50a fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f50c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f50e fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f511 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058f513 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f516 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f518 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f51b fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0058f51d fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f520 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0058f522 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f525 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f527 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f52a fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f52d fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0058f52f fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0058f532 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0058f534 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f537 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0058f539 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 0058f53a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0058f53d(CPU *c) {
  NATIVE_HOOK(0x58f53du) REGS; LOADALL;
L_0058f53d:;
  /* 0058f53d mov edi, edi */ { edi = (u32)(edi); }
  /* 0058f53f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0058f540 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0058f542 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0058f544 call 0x59a0f5 */ esp -= 4; M32(esp) = 0x58f549u; SAVEALL; F_0059a0f5(c); ABI_CHECK(0x59a0f5u, 0x58f544u); RETCHK(0x58f549u, 0x58f544u); LOADALL;
  /* 0058f549 fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0058f54c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0058f54d fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0058f550 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058f553 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058f556 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058f559 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058f55c push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0058f55f call dword ptr [0x674b40] */ { const u32 m_ = (u32)(0x674b40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x58f565u; SAVEALL; call_ind(c, t_); RETCHK(0x58f565u, 0x58f55fu); LOADALL; }
  /* 0058f565 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0058f566 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}
