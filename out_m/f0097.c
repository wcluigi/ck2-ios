#include "funcs.h"

void F_00629c60(CPU *c) {
  NATIVE_HOOK(0x629c60u) REGS; LOADALL;
L_00629c60:;
  /* 00629c60 push 0x429a0000 */ { u32 v_ = 0x429a0000u; esp -= 4; M32(esp) = v_; }
  /* 00629c65 push 0x431a0000 */ { u32 v_ = 0x431a0000u; esp -= 4; M32(esp) = v_; }
  /* 00629c6a push 0x42140000 */ { u32 v_ = 0x42140000u; esp -= 4; M32(esp) = v_; }
  /* 00629c6f push 0x42e40000 */ { u32 v_ = 0x42e40000u; esp -= 4; M32(esp) = v_; }
  /* 00629c74 mov eax, 0x7a7e68 */ { eax = (u32)(0x7a7e68u); }
  /* 00629c79 call 0x52cec0 */ esp -= 4; M32(esp) = 0x629c7eu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629c79u); RETCHK(0x629c7eu, 0x629c79u); LOADALL;
  /* 00629c7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629c80(CPU *c) {
  NATIVE_HOOK(0x629c80u) REGS; LOADALL;
L_00629c80:;
  /* 00629c80 push 0x429a0000 */ { u32 v_ = 0x429a0000u; esp -= 4; M32(esp) = v_; }
  /* 00629c85 push 0x42aa0000 */ { u32 v_ = 0x42aa0000u; esp -= 4; M32(esp) = v_; }
  /* 00629c8a push 0x42140000 */ { u32 v_ = 0x42140000u; esp -= 4; M32(esp) = v_; }
  /* 00629c8f push 0x42340000 */ { u32 v_ = 0x42340000u; esp -= 4; M32(esp) = v_; }
  /* 00629c94 mov eax, 0x7a7ee0 */ { eax = (u32)(0x7a7ee0u); }
  /* 00629c99 call 0x52cec0 */ esp -= 4; M32(esp) = 0x629c9eu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629c99u); RETCHK(0x629c9eu, 0x629c99u); LOADALL;
  /* 00629c9e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629ca0(CPU *c) {
  NATIVE_HOOK(0x629ca0u) REGS; LOADALL;
L_00629ca0:;
  /* 00629ca0 push 0x42c20000 */ { u32 v_ = 0x42c20000u; esp -= 4; M32(esp) = v_; }
  /* 00629ca5 push 0x42d20000 */ { u32 v_ = 0x42d20000u; esp -= 4; M32(esp) = v_; }
  /* 00629caa push 0x41880000 */ { u32 v_ = 0x41880000u; esp -= 4; M32(esp) = v_; }
  /* 00629caf push 0x41c80000 */ { u32 v_ = 0x41c80000u; esp -= 4; M32(esp) = v_; }
  /* 00629cb4 mov eax, 0x7a7e40 */ { eax = (u32)(0x7a7e40u); }
  /* 00629cb9 call 0x52cec0 */ esp -= 4; M32(esp) = 0x629cbeu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629cb9u); RETCHK(0x629cbeu, 0x629cb9u); LOADALL;
  /* 00629cbe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629cc0(CPU *c) {
  NATIVE_HOOK(0x629cc0u) REGS; LOADALL;
L_00629cc0:;
  /* 00629cc0 push 0x42c20000 */ { u32 v_ = 0x42c20000u; esp -= 4; M32(esp) = v_; }
  /* 00629cc5 push 0x432e0000 */ { u32 v_ = 0x432e0000u; esp -= 4; M32(esp) = v_; }
  /* 00629cca push 0x41880000 */ { u32 v_ = 0x41880000u; esp -= 4; M32(esp) = v_; }
  /* 00629ccf push 0x42bc0000 */ { u32 v_ = 0x42bc0000u; esp -= 4; M32(esp) = v_; }
  /* 00629cd4 mov eax, 0x7a7dbc */ { eax = (u32)(0x7a7dbcu); }
  /* 00629cd9 call 0x52cec0 */ esp -= 4; M32(esp) = 0x629cdeu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629cd9u); RETCHK(0x629cdeu, 0x629cd9u); LOADALL;
  /* 00629cde ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629ce0(CPU *c) {
  NATIVE_HOOK(0x629ce0u) REGS; LOADALL;
L_00629ce0:;
  /* 00629ce0 push 0x429a0000 */ { u32 v_ = 0x429a0000u; esp -= 4; M32(esp) = v_; }
  /* 00629ce5 push 0x431a0000 */ { u32 v_ = 0x431a0000u; esp -= 4; M32(esp) = v_; }
  /* 00629cea push 0x42140000 */ { u32 v_ = 0x42140000u; esp -= 4; M32(esp) = v_; }
  /* 00629cef push 0x42e40000 */ { u32 v_ = 0x42e40000u; esp -= 4; M32(esp) = v_; }
  /* 00629cf4 mov eax, 0x7a7dcc */ { eax = (u32)(0x7a7dccu); }
  /* 00629cf9 call 0x52cec0 */ esp -= 4; M32(esp) = 0x629cfeu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629cf9u); RETCHK(0x629cfeu, 0x629cf9u); LOADALL;
  /* 00629cfe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629d00(CPU *c) {
  NATIVE_HOOK(0x629d00u) REGS; LOADALL;
L_00629d00:;
  /* 00629d00 push 0x429a0000 */ { u32 v_ = 0x429a0000u; esp -= 4; M32(esp) = v_; }
  /* 00629d05 push 0x42aa0000 */ { u32 v_ = 0x42aa0000u; esp -= 4; M32(esp) = v_; }
  /* 00629d0a push 0x42140000 */ { u32 v_ = 0x42140000u; esp -= 4; M32(esp) = v_; }
  /* 00629d0f push 0x42340000 */ { u32 v_ = 0x42340000u; esp -= 4; M32(esp) = v_; }
  /* 00629d14 mov eax, 0x7a7ddc */ { eax = (u32)(0x7a7ddcu); }
  /* 00629d19 call 0x52cec0 */ esp -= 4; M32(esp) = 0x629d1eu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629d19u); RETCHK(0x629d1eu, 0x629d19u); LOADALL;
  /* 00629d1e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629d20(CPU *c) {
  NATIVE_HOOK(0x629d20u) REGS; LOADALL;
L_00629d20:;
  /* 00629d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629d23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629d24 mov eax, dword ptr [0x6870cc] */ { const u32 m_ = (u32)(0x6870ccu); eax = (u32)(M32(m_)); }
  /* 00629d29 lea ecx, [eax + 0x61] */ ecx = (u32)((u32)(eax + 0x61u));
  /* 00629d2c mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00629d2f fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629d32 mov ecx, dword ptr [0x6870c8] */ { const u32 m_ = (u32)(0x6870c8u); ecx = (u32)(M32(m_)); }
  /* 00629d38 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629d3b lea edx, [ecx + 0x69] */ edx = (u32)((u32)(ecx + 0x69u));
  /* 00629d3e fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629d42 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00629d45 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629d48 add eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00629d4b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00629d4e add ecx, 0x19 */ { u32 a_ = ecx, b_ = 0x19u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00629d51 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629d55 mov eax, 0x7a7df8 */ { eax = (u32)(0x7a7df8u); }
  /* 00629d5a fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629d5d mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00629d60 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629d64 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629d67 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629d6a call 0x52cec0 */ esp -= 4; M32(esp) = 0x629d6fu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629d6au); RETCHK(0x629d6fu, 0x629d6au); LOADALL;
  /* 00629d6f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629d71 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629d72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629d80(CPU *c) {
  NATIVE_HOOK(0x629d80u) REGS; LOADALL;
L_00629d80:;
  /* 00629d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629d81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629d83 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629d84 mov eax, dword ptr [0x6870cc] */ { const u32 m_ = (u32)(0x6870ccu); eax = (u32)(M32(m_)); }
  /* 00629d89 lea ecx, [eax + 0x61] */ ecx = (u32)((u32)(eax + 0x61u));
  /* 00629d8c mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00629d8f fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629d92 mov ecx, dword ptr [0x6870c8] */ { const u32 m_ = (u32)(0x6870c8u); ecx = (u32)(M32(m_)); }
  /* 00629d98 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629d9b lea edx, [ecx + 0xae] */ edx = (u32)((u32)(ecx + 0xaeu));
  /* 00629da1 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629da5 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00629da8 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629dab add eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00629dae mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00629db1 add ecx, 0x5e */ { u32 a_ = ecx, b_ = 0x5eu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00629db4 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629db8 mov eax, 0x7a7e08 */ { eax = (u32)(0x7a7e08u); }
  /* 00629dbd fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629dc0 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00629dc3 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629dc7 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629dca fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629dcd call 0x52cec0 */ esp -= 4; M32(esp) = 0x629dd2u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629dcdu); RETCHK(0x629dd2u, 0x629dcdu); LOADALL;
  /* 00629dd2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629dd4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629dd5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629de0(CPU *c) {
  NATIVE_HOOK(0x629de0u) REGS; LOADALL;
L_00629de0:;
  /* 00629de0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629de1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629de3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629de4 mov eax, dword ptr [0x6870cc] */ { const u32 m_ = (u32)(0x6870ccu); eax = (u32)(M32(m_)); }
  /* 00629de9 lea ecx, [eax + 0x4d] */ ecx = (u32)((u32)(eax + 0x4du));
  /* 00629dec mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00629def fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629df2 mov ecx, dword ptr [0x6870c8] */ { const u32 m_ = (u32)(0x6870c8u); ecx = (u32)(M32(m_)); }
  /* 00629df8 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629dfb lea edx, [ecx + 0x9a] */ edx = (u32)((u32)(ecx + 0x9au));
  /* 00629e01 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629e05 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00629e08 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629e0b add eax, 0x25 */ { u32 a_ = eax, b_ = 0x25u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00629e0e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00629e11 add ecx, 0x72 */ { u32 a_ = ecx, b_ = 0x72u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00629e14 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629e18 mov eax, 0x7a7e58 */ { eax = (u32)(0x7a7e58u); }
  /* 00629e1d fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629e20 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00629e23 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629e27 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629e2a fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629e2d call 0x52cec0 */ esp -= 4; M32(esp) = 0x629e32u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629e2du); RETCHK(0x629e32u, 0x629e2du); LOADALL;
  /* 00629e32 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629e34 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629e35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629e40(CPU *c) {
  NATIVE_HOOK(0x629e40u) REGS; LOADALL;
L_00629e40:;
  /* 00629e40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629e41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629e43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629e44 mov eax, dword ptr [0x6870cc] */ { const u32 m_ = (u32)(0x6870ccu); eax = (u32)(M32(m_)); }
  /* 00629e49 lea ecx, [eax + 0x4d] */ ecx = (u32)((u32)(eax + 0x4du));
  /* 00629e4c mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00629e4f fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629e52 mov ecx, dword ptr [0x6870c8] */ { const u32 m_ = (u32)(0x6870c8u); ecx = (u32)(M32(m_)); }
  /* 00629e58 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629e5b lea edx, [ecx + 0x55] */ edx = (u32)((u32)(ecx + 0x55u));
  /* 00629e5e fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629e62 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00629e65 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629e68 add eax, 0x25 */ { u32 a_ = eax, b_ = 0x25u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00629e6b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00629e6e add ecx, 0x2d */ { u32 a_ = ecx, b_ = 0x2du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00629e71 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629e75 mov eax, 0x7a7ecc */ { eax = (u32)(0x7a7eccu); }
  /* 00629e7a fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629e7d mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00629e80 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629e84 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00629e87 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629e8a call 0x52cec0 */ esp -= 4; M32(esp) = 0x629e8fu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629e8au); RETCHK(0x629e8fu, 0x629e8au); LOADALL;
  /* 00629e8f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629e91 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629e92 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629ea0(CPU *c) {
  NATIVE_HOOK(0x629ea0u) REGS; LOADALL;
L_00629ea0:;
  /* 00629ea0 push 0x62c4a0 */ { u32 v_ = 0x62c4a0u; esp -= 4; M32(esp) = v_; }
  /* 00629ea5 call 0x5fe916 */ esp -= 4; M32(esp) = 0x629eaau; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629ea5u); RETCHK(0x629eaau, 0x629ea5u); LOADALL;
  /* 00629eaa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00629eab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629eb0(CPU *c) {
  NATIVE_HOOK(0x629eb0u) REGS; LOADALL;
L_00629eb0:;
  /* 00629eb0 push 0x43ee60 */ { u32 v_ = 0x43ee60u; esp -= 4; M32(esp) = v_; }
  /* 00629eb5 push 0x403040 */ { u32 v_ = 0x403040u; esp -= 4; M32(esp) = v_; }
  /* 00629eba push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00629ebc push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 00629ebe push 0x7a7e78 */ { u32 v_ = 0x7a7e78u; esp -= 4; M32(esp) = v_; }
  /* 00629ec3 call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x629ec8u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x629ec3u); RETCHK(0x629ec8u, 0x629ec3u); LOADALL;
  /* 00629ec8 push 0x62c4d0 */ { u32 v_ = 0x62c4d0u; esp -= 4; M32(esp) = v_; }
  /* 00629ecd call 0x5fe916 */ esp -= 4; M32(esp) = 0x629ed2u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629ecdu); RETCHK(0x629ed2u, 0x629ecdu); LOADALL;
  /* 00629ed2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00629ed3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629ee0(CPU *c) {
  NATIVE_HOOK(0x629ee0u) REGS; LOADALL;
L_00629ee0:;
  /* 00629ee0 mov dword ptr [0x7a7ef0], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7ef0u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629eea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629ef0(CPU *c) {
  NATIVE_HOOK(0x629ef0u) REGS; LOADALL;
L_00629ef0:;
  /* 00629ef0 mov dword ptr [0x7a7ef4], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7ef4u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629efa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f00(CPU *c) {
  NATIVE_HOOK(0x629f00u) REGS; LOADALL;
L_00629f00:;
  /* 00629f00 mov dword ptr [0x7a7ef8], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7ef8u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629f0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f10(CPU *c) {
  NATIVE_HOOK(0x629f10u) REGS; LOADALL;
L_00629f10:;
  /* 00629f10 mov dword ptr [0x7a7efc], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7efcu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629f1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f20(CPU *c) {
  NATIVE_HOOK(0x629f20u) REGS; LOADALL;
L_00629f20:;
  /* 00629f20 push 0x62c4f0 */ { u32 v_ = 0x62c4f0u; esp -= 4; M32(esp) = v_; }
  /* 00629f25 call 0x5fe916 */ esp -= 4; M32(esp) = 0x629f2au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629f25u); RETCHK(0x629f2au, 0x629f25u); LOADALL;
  /* 00629f2a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00629f2b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f30(CPU *c) {
  NATIVE_HOOK(0x629f30u) REGS; LOADALL;
L_00629f30:;
  /* 00629f30 mov dword ptr [0x7a7f10], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7f10u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629f3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f40(CPU *c) {
  NATIVE_HOOK(0x629f40u) REGS; LOADALL;
L_00629f40:;
  /* 00629f40 mov dword ptr [0x7a7f14], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7f14u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629f4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f50(CPU *c) {
  NATIVE_HOOK(0x629f50u) REGS; LOADALL;
L_00629f50:;
  /* 00629f50 mov dword ptr [0x7a7f18], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7f18u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629f5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f60(CPU *c) {
  NATIVE_HOOK(0x629f60u) REGS; LOADALL;
L_00629f60:;
  /* 00629f60 mov dword ptr [0x7a7f1c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7f1cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629f6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f70(CPU *c) {
  NATIVE_HOOK(0x629f70u) REGS; LOADALL;
L_00629f70:;
  /* 00629f70 mov dword ptr [0x7a7f20], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7f20u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629f7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f80(CPU *c) {
  NATIVE_HOOK(0x629f80u) REGS; LOADALL;
L_00629f80:;
  /* 00629f80 mov dword ptr [0x7a7f24], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7f24u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629f8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629f90(CPU *c) {
  NATIVE_HOOK(0x629f90u) REGS; LOADALL;
L_00629f90:;
  /* 00629f90 mov dword ptr [0x7a7f28], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7f28u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629f9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629fa0(CPU *c) {
  NATIVE_HOOK(0x629fa0u) REGS; LOADALL;
L_00629fa0:;
  /* 00629fa0 mov dword ptr [0x7a7f2c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7f2cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629faa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629fb0(CPU *c) {
  NATIVE_HOOK(0x629fb0u) REGS; LOADALL;
L_00629fb0:;
  /* 00629fb0 mov eax, 0x7a7f30 */ { eax = (u32)(0x7a7f30u); }
  /* 00629fb5 call 0x4e8be0 */ esp -= 4; M32(esp) = 0x629fbau; SAVEALL; F_004e8be0(c); ABI_CHECK(0x4e8be0u, 0x629fb5u); RETCHK(0x629fbau, 0x629fb5u); LOADALL;
  /* 00629fba push 0x62c500 */ { u32 v_ = 0x62c500u; esp -= 4; M32(esp) = v_; }
  /* 00629fbf call 0x5fe916 */ esp -= 4; M32(esp) = 0x629fc4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629fbfu); RETCHK(0x629fc4u, 0x629fbfu); LOADALL;
  /* 00629fc4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00629fc5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629fd0(CPU *c) {
  NATIVE_HOOK(0x629fd0u) REGS; LOADALL;
L_00629fd0:;
  /* 00629fd0 mov dword ptr [0x7a7fa4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7fa4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629fda ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629fe0(CPU *c) {
  NATIVE_HOOK(0x629fe0u) REGS; LOADALL;
L_00629fe0:;
  /* 00629fe0 mov dword ptr [0x7a7fa8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7fa8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629fea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629ff0(CPU *c) {
  NATIVE_HOOK(0x629ff0u) REGS; LOADALL;
L_00629ff0:;
  /* 00629ff0 mov dword ptr [0x7a7fac], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7facu); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629ffa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a000(CPU *c) {
  NATIVE_HOOK(0x62a000u) REGS; LOADALL;
L_0062a000:;
  /* 0062a000 mov dword ptr [0x7a7fb0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7fb0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a00a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a010(CPU *c) {
  NATIVE_HOOK(0x62a010u) REGS; LOADALL;
L_0062a010:;
  /* 0062a010 mov dword ptr [0x7a7fb4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7fb4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a01a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a020(CPU *c) {
  NATIVE_HOOK(0x62a020u) REGS; LOADALL;
L_0062a020:;
  /* 0062a020 mov dword ptr [0x7a7fb8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7fb8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a02a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a030(CPU *c) {
  NATIVE_HOOK(0x62a030u) REGS; LOADALL;
L_0062a030:;
  /* 0062a030 mov dword ptr [0x7a7fbc], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7fbcu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a03a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a040(CPU *c) {
  NATIVE_HOOK(0x62a040u) REGS; LOADALL;
L_0062a040:;
  /* 0062a040 mov dword ptr [0x7a7fc0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7fc0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a04a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a050(CPU *c) {
  NATIVE_HOOK(0x62a050u) REGS; LOADALL;
L_0062a050:;
  /* 0062a050 mov dword ptr [0x7a7fc4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7fc4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a05a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a060(CPU *c) {
  NATIVE_HOOK(0x62a060u) REGS; LOADALL;
L_0062a060:;
  /* 0062a060 mov dword ptr [0x7a7fc8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7fc8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a06a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a070(CPU *c) {
  NATIVE_HOOK(0x62a070u) REGS; LOADALL;
L_0062a070:;
  /* 0062a070 mov dword ptr [0x7a7fcc], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7fccu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a07a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a080(CPU *c) {
  NATIVE_HOOK(0x62a080u) REGS; LOADALL;
L_0062a080:;
  /* 0062a080 mov dword ptr [0x7a7fd0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7fd0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a08a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a090(CPU *c) {
  NATIVE_HOOK(0x62a090u) REGS; LOADALL;
L_0062a090:;
  /* 0062a090 mov dword ptr [0x7a7fd4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7fd4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a09a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a0a0(CPU *c) {
  NATIVE_HOOK(0x62a0a0u) REGS; LOADALL;
L_0062a0a0:;
  /* 0062a0a0 mov dword ptr [0x7a7fd8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7fd8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a0aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a0b0(CPU *c) {
  NATIVE_HOOK(0x62a0b0u) REGS; LOADALL;
L_0062a0b0:;
  /* 0062a0b0 mov dword ptr [0x7a7fdc], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7fdcu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a0ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a0c0(CPU *c) {
  NATIVE_HOOK(0x62a0c0u) REGS; LOADALL;
L_0062a0c0:;
  /* 0062a0c0 mov dword ptr [0x7a7fe0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7fe0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a0ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a0d0(CPU *c) {
  NATIVE_HOOK(0x62a0d0u) REGS; LOADALL;
L_0062a0d0:;
  /* 0062a0d0 mov dword ptr [0x7a7fe4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7fe4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a0da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a0e0(CPU *c) {
  NATIVE_HOOK(0x62a0e0u) REGS; LOADALL;
L_0062a0e0:;
  /* 0062a0e0 mov dword ptr [0x7a7fe8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7fe8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a0ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a0f0(CPU *c) {
  NATIVE_HOOK(0x62a0f0u) REGS; LOADALL;
L_0062a0f0:;
  /* 0062a0f0 mov dword ptr [0x7a7fec], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7fecu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a0fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a100(CPU *c) {
  NATIVE_HOOK(0x62a100u) REGS; LOADALL;
L_0062a100:;
  /* 0062a100 mov dword ptr [0x7a7ff0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7ff0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a10a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a110(CPU *c) {
  NATIVE_HOOK(0x62a110u) REGS; LOADALL;
L_0062a110:;
  /* 0062a110 mov dword ptr [0x7a7ff4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7ff4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a11a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a120(CPU *c) {
  NATIVE_HOOK(0x62a120u) REGS; LOADALL;
L_0062a120:;
  /* 0062a120 mov dword ptr [0x7a7ff8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7ff8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a12a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a130(CPU *c) {
  NATIVE_HOOK(0x62a130u) REGS; LOADALL;
L_0062a130:;
  /* 0062a130 mov dword ptr [0x7a7ffc], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7ffcu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a13a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a140(CPU *c) {
  NATIVE_HOOK(0x62a140u) REGS; LOADALL;
L_0062a140:;
  /* 0062a140 mov dword ptr [0x7a8000], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8000u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a14a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a150(CPU *c) {
  NATIVE_HOOK(0x62a150u) REGS; LOADALL;
L_0062a150:;
  /* 0062a150 mov dword ptr [0x7a8004], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8004u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a15a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a160(CPU *c) {
  NATIVE_HOOK(0x62a160u) REGS; LOADALL;
L_0062a160:;
  /* 0062a160 mov dword ptr [0x7a8008], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8008u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a16a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a170(CPU *c) {
  NATIVE_HOOK(0x62a170u) REGS; LOADALL;
L_0062a170:;
  /* 0062a170 mov dword ptr [0x7a800c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a800cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a17a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a180(CPU *c) {
  NATIVE_HOOK(0x62a180u) REGS; LOADALL;
L_0062a180:;
  /* 0062a180 mov dword ptr [0x7a8010], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8010u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a18a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a190(CPU *c) {
  NATIVE_HOOK(0x62a190u) REGS; LOADALL;
L_0062a190:;
  /* 0062a190 mov dword ptr [0x7a8014], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8014u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a19a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a1a0(CPU *c) {
  NATIVE_HOOK(0x62a1a0u) REGS; LOADALL;
L_0062a1a0:;
  /* 0062a1a0 mov dword ptr [0x7a8018], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8018u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a1aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a1b0(CPU *c) {
  NATIVE_HOOK(0x62a1b0u) REGS; LOADALL;
L_0062a1b0:;
  /* 0062a1b0 fld dword ptr [0x657114] */ { const u32 m_ = (u32)(0x657114u); FPUSH((double)MF32(m_)); }
  /* 0062a1b6 fdiv dword ptr [0x687c30] */ { const u32 m_ = (u32)(0x687c30u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0062a1bc fstp dword ptr [0x7a801c] */ { const u32 m_ = (u32)(0x7a801cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062a1c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a1d0(CPU *c) {
  NATIVE_HOOK(0x62a1d0u) REGS; LOADALL;
L_0062a1d0:;
  /* 0062a1d0 mov dword ptr [0x7a8020], 0x41100000 */ { const u32 m_ = (u32)(0x7a8020u); M32(m_) = (u32)(0x41100000u); }
  /* 0062a1da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a1e0(CPU *c) {
  NATIVE_HOOK(0x62a1e0u) REGS; LOADALL;
L_0062a1e0:;
  /* 0062a1e0 mov dword ptr [0x7a8024], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8024u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a1ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a1f0(CPU *c) {
  NATIVE_HOOK(0x62a1f0u) REGS; LOADALL;
L_0062a1f0:;
  /* 0062a1f0 mov dword ptr [0x7a8028], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8028u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a1fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a200(CPU *c) {
  NATIVE_HOOK(0x62a200u) REGS; LOADALL;
L_0062a200:;
  /* 0062a200 mov dword ptr [0x7a802c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a802cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a20a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a210(CPU *c) {
  NATIVE_HOOK(0x62a210u) REGS; LOADALL;
L_0062a210:;
  /* 0062a210 mov dword ptr [0x7a8030], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8030u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a21a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a220(CPU *c) {
  NATIVE_HOOK(0x62a220u) REGS; LOADALL;
L_0062a220:;
  /* 0062a220 mov dword ptr [0x7a8034], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8034u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a22a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a230(CPU *c) {
  NATIVE_HOOK(0x62a230u) REGS; LOADALL;
L_0062a230:;
  /* 0062a230 mov dword ptr [0x7a8038], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8038u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a23a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a240(CPU *c) {
  NATIVE_HOOK(0x62a240u) REGS; LOADALL;
L_0062a240:;
  /* 0062a240 mov dword ptr [0x7a803c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a803cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a24a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a250(CPU *c) {
  NATIVE_HOOK(0x62a250u) REGS; LOADALL;
L_0062a250:;
  /* 0062a250 mov dword ptr [0x7a8040], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8040u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a25a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a260(CPU *c) {
  NATIVE_HOOK(0x62a260u) REGS; LOADALL;
L_0062a260:;
  /* 0062a260 mov dword ptr [0x7a8044], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8044u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a26a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a270(CPU *c) {
  NATIVE_HOOK(0x62a270u) REGS; LOADALL;
L_0062a270:;
  /* 0062a270 mov dword ptr [0x7a8048], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8048u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a27a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a280(CPU *c) {
  NATIVE_HOOK(0x62a280u) REGS; LOADALL;
L_0062a280:;
  /* 0062a280 mov dword ptr [0x7a804c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a804cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a28a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a290(CPU *c) {
  NATIVE_HOOK(0x62a290u) REGS; LOADALL;
L_0062a290:;
  /* 0062a290 mov dword ptr [0x7a8050], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8050u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a29a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a2a0(CPU *c) {
  NATIVE_HOOK(0x62a2a0u) REGS; LOADALL;
L_0062a2a0:;
  /* 0062a2a0 mov dword ptr [0x7a8054], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8054u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a2aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a2b0(CPU *c) {
  NATIVE_HOOK(0x62a2b0u) REGS; LOADALL;
L_0062a2b0:;
  /* 0062a2b0 mov dword ptr [0x7a8058], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8058u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a2ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a2c0(CPU *c) {
  NATIVE_HOOK(0x62a2c0u) REGS; LOADALL;
L_0062a2c0:;
  /* 0062a2c0 mov dword ptr [0x7a805c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a805cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a2ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a2d0(CPU *c) {
  NATIVE_HOOK(0x62a2d0u) REGS; LOADALL;
L_0062a2d0:;
  /* 0062a2d0 mov dword ptr [0x7a8060], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8060u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a2da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a2e0(CPU *c) {
  NATIVE_HOOK(0x62a2e0u) REGS; LOADALL;
L_0062a2e0:;
  /* 0062a2e0 mov dword ptr [0x7a8064], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8064u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a2ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a2f0(CPU *c) {
  NATIVE_HOOK(0x62a2f0u) REGS; LOADALL;
L_0062a2f0:;
  /* 0062a2f0 mov dword ptr [0x7a8068], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8068u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a2fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a300(CPU *c) {
  NATIVE_HOOK(0x62a300u) REGS; LOADALL;
L_0062a300:;
  /* 0062a300 mov dword ptr [0x7a806c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a806cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a30a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a310(CPU *c) {
  NATIVE_HOOK(0x62a310u) REGS; LOADALL;
L_0062a310:;
  /* 0062a310 mov dword ptr [0x7a8070], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8070u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a31a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a320(CPU *c) {
  NATIVE_HOOK(0x62a320u) REGS; LOADALL;
L_0062a320:;
  /* 0062a320 mov dword ptr [0x7a8074], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8074u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a32a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a330(CPU *c) {
  NATIVE_HOOK(0x62a330u) REGS; LOADALL;
L_0062a330:;
  /* 0062a330 mov dword ptr [0x7a8078], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8078u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a33a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a340(CPU *c) {
  NATIVE_HOOK(0x62a340u) REGS; LOADALL;
L_0062a340:;
  /* 0062a340 mov dword ptr [0x7a807c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a807cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a34a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a350(CPU *c) {
  NATIVE_HOOK(0x62a350u) REGS; LOADALL;
L_0062a350:;
  /* 0062a350 mov dword ptr [0x7a8080], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8080u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a35a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a360(CPU *c) {
  NATIVE_HOOK(0x62a360u) REGS; LOADALL;
L_0062a360:;
  /* 0062a360 mov dword ptr [0x7a8084], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8084u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a36a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a370(CPU *c) {
  NATIVE_HOOK(0x62a370u) REGS; LOADALL;
L_0062a370:;
  /* 0062a370 mov dword ptr [0x7a8088], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8088u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a37a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a380(CPU *c) {
  NATIVE_HOOK(0x62a380u) REGS; LOADALL;
L_0062a380:;
  /* 0062a380 mov dword ptr [0x7a808c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a808cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a38a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a390(CPU *c) {
  NATIVE_HOOK(0x62a390u) REGS; LOADALL;
L_0062a390:;
  /* 0062a390 mov dword ptr [0x7a8090], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8090u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a39a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a3a0(CPU *c) {
  NATIVE_HOOK(0x62a3a0u) REGS; LOADALL;
L_0062a3a0:;
  /* 0062a3a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a3a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a3a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a3a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a3a5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a3a8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a3aa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a3ad xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a3af push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 0062a3b1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a3b8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a3bb push 0x643538 */ { u32 v_ = 0x643538u; esp -= 4; M32(esp) = v_; }
  /* 0062a3c0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a3c3 call 0x404420 */ esp -= 4; M32(esp) = 0x62a3c8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a3c3u); RETCHK(0x62a3c8u, 0x62a3c3u); LOADALL;
  /* 0062a3c8 mov esi, 0x7a8094 */ { esi = (u32)(0x7a8094u); }
  /* 0062a3cd call 0x500a20 */ esp -= 4; M32(esp) = 0x62a3d2u; SAVEALL; F_00500a20(c); ABI_CHECK(0x500a20u, 0x62a3cdu); RETCHK(0x62a3d2u, 0x62a3cdu); LOADALL;
  /* 0062a3d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a3d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a3d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a3d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a3e0(CPU *c) {
  NATIVE_HOOK(0x62a3e0u) REGS; LOADALL;
L_0062a3e0:;
  /* 0062a3e0 mov dword ptr [0x7a8098], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8098u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a3ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a3f0(CPU *c) {
  NATIVE_HOOK(0x62a3f0u) REGS; LOADALL;
L_0062a3f0:;
  /* 0062a3f0 mov dword ptr [0x7a809c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a809cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a3fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a400(CPU *c) {
  NATIVE_HOOK(0x62a400u) REGS; LOADALL;
L_0062a400:;
  /* 0062a400 mov dword ptr [0x7a80a0], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a80a0u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a40a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a410(CPU *c) {
  NATIVE_HOOK(0x62a410u) REGS; LOADALL;
L_0062a410:;
  /* 0062a410 mov dword ptr [0x7a80a4], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a80a4u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a41a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a420(CPU *c) {
  NATIVE_HOOK(0x62a420u) REGS; LOADALL;
L_0062a420:;
  /* 0062a420 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a421 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a423 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a424 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a425 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a428 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a42a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a42d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a42f push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 0062a431 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a438 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a43b push 0x6501d4 */ { u32 v_ = 0x6501d4u; esp -= 4; M32(esp) = v_; }
  /* 0062a440 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a443 call 0x404420 */ esp -= 4; M32(esp) = 0x62a448u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a443u); RETCHK(0x62a448u, 0x62a443u); LOADALL;
  /* 0062a448 mov esi, 0x7a80a8 */ { esi = (u32)(0x7a80a8u); }
  /* 0062a44d call 0x502500 */ esp -= 4; M32(esp) = 0x62a452u; SAVEALL; F_00502500(c); ABI_CHECK(0x502500u, 0x62a44du); RETCHK(0x62a452u, 0x62a44du); LOADALL;
  /* 0062a452 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a453 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a455 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a456 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a460(CPU *c) {
  NATIVE_HOOK(0x62a460u) REGS; LOADALL;
L_0062a460:;
  /* 0062a460 mov dword ptr [0x7a80ac], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a80acu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a46a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a470(CPU *c) {
  NATIVE_HOOK(0x62a470u) REGS; LOADALL;
L_0062a470:;
  /* 0062a470 mov dword ptr [0x7a80b0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a80b0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a47a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a480(CPU *c) {
  NATIVE_HOOK(0x62a480u) REGS; LOADALL;
L_0062a480:;
  /* 0062a480 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a481 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a483 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a484 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a485 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a488 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a48a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a48d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a48f push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0062a491 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a498 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a49b push 0x65030c */ { u32 v_ = 0x65030cu; esp -= 4; M32(esp) = v_; }
  /* 0062a4a0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a4a3 call 0x404420 */ esp -= 4; M32(esp) = 0x62a4a8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a4a3u); RETCHK(0x62a4a8u, 0x62a4a3u); LOADALL;
  /* 0062a4a8 mov esi, 0x7a80b4 */ { esi = (u32)(0x7a80b4u); }
  /* 0062a4ad call 0x503720 */ esp -= 4; M32(esp) = 0x62a4b2u; SAVEALL; F_00503720(c); ABI_CHECK(0x503720u, 0x62a4adu); RETCHK(0x62a4b2u, 0x62a4adu); LOADALL;
  /* 0062a4b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a4b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a4b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a4b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a4c0(CPU *c) {
  NATIVE_HOOK(0x62a4c0u) REGS; LOADALL;
L_0062a4c0:;
  /* 0062a4c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a4c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a4c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a4c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a4c5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a4c8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a4ca mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a4cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a4cf push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0062a4d1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a4d8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a4db push 0x6504b8 */ { u32 v_ = 0x6504b8u; esp -= 4; M32(esp) = v_; }
  /* 0062a4e0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a4e3 call 0x404420 */ esp -= 4; M32(esp) = 0x62a4e8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a4e3u); RETCHK(0x62a4e8u, 0x62a4e3u); LOADALL;
  /* 0062a4e8 mov esi, 0x7a80b5 */ { esi = (u32)(0x7a80b5u); }
  /* 0062a4ed call 0x504a70 */ esp -= 4; M32(esp) = 0x62a4f2u; SAVEALL; F_00504a70(c); ABI_CHECK(0x504a70u, 0x62a4edu); RETCHK(0x62a4f2u, 0x62a4edu); LOADALL;
  /* 0062a4f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a4f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a4f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a4f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a500(CPU *c) {
  NATIVE_HOOK(0x62a500u) REGS; LOADALL;
L_0062a500:;
  /* 0062a500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a503 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a504 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a505 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a508 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a50a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a50d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a50f push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0062a511 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a518 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a51b push 0x6505d4 */ { u32 v_ = 0x6505d4u; esp -= 4; M32(esp) = v_; }
  /* 0062a520 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a523 call 0x404420 */ esp -= 4; M32(esp) = 0x62a528u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a523u); RETCHK(0x62a528u, 0x62a523u); LOADALL;
  /* 0062a528 mov esi, 0x7a80b6 */ { esi = (u32)(0x7a80b6u); }
  /* 0062a52d call 0x504ff0 */ esp -= 4; M32(esp) = 0x62a532u; SAVEALL; F_00504ff0(c); ABI_CHECK(0x504ff0u, 0x62a52du); RETCHK(0x62a532u, 0x62a52du); LOADALL;
  /* 0062a532 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a533 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a535 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a536 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a540(CPU *c) {
  NATIVE_HOOK(0x62a540u) REGS; LOADALL;
L_0062a540:;
  /* 0062a540 mov dword ptr [0x7a80b8], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a80b8u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a54a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a550(CPU *c) {
  NATIVE_HOOK(0x62a550u) REGS; LOADALL;
L_0062a550:;
  /* 0062a550 mov dword ptr [0x7a80bc], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a80bcu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a55a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a560(CPU *c) {
  NATIVE_HOOK(0x62a560u) REGS; LOADALL;
L_0062a560:;
  /* 0062a560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a563 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a564 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a565 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a568 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a56a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a56d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a56f push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0062a571 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a578 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a57b push 0x6506f4 */ { u32 v_ = 0x6506f4u; esp -= 4; M32(esp) = v_; }
  /* 0062a580 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a583 call 0x404420 */ esp -= 4; M32(esp) = 0x62a588u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a583u); RETCHK(0x62a588u, 0x62a583u); LOADALL;
  /* 0062a588 mov esi, 0x7a80c0 */ { esi = (u32)(0x7a80c0u); }
  /* 0062a58d call 0x505b80 */ esp -= 4; M32(esp) = 0x62a592u; SAVEALL; F_00505b80(c); ABI_CHECK(0x505b80u, 0x62a58du); RETCHK(0x62a592u, 0x62a58du); LOADALL;
  /* 0062a592 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a593 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a595 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a596 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a5a0(CPU *c) {
  NATIVE_HOOK(0x62a5a0u) REGS; LOADALL;
L_0062a5a0:;
  /* 0062a5a0 mov dword ptr [0x7a80c4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a80c4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a5aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a5b0(CPU *c) {
  NATIVE_HOOK(0x62a5b0u) REGS; LOADALL;
L_0062a5b0:;
  /* 0062a5b0 mov dword ptr [0x7a80c8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a80c8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a5ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a5c0(CPU *c) {
  NATIVE_HOOK(0x62a5c0u) REGS; LOADALL;
L_0062a5c0:;
  /* 0062a5c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a5c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a5c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a5c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a5c5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a5c8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a5ca mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a5cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a5cf push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0062a5d1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a5d8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a5db push 0x6507f8 */ { u32 v_ = 0x6507f8u; esp -= 4; M32(esp) = v_; }
  /* 0062a5e0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a5e3 call 0x404420 */ esp -= 4; M32(esp) = 0x62a5e8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a5e3u); RETCHK(0x62a5e8u, 0x62a5e3u); LOADALL;
  /* 0062a5e8 mov esi, 0x7a80cc */ { esi = (u32)(0x7a80ccu); }
  /* 0062a5ed call 0x505d80 */ esp -= 4; M32(esp) = 0x62a5f2u; SAVEALL; F_00505d80(c); ABI_CHECK(0x505d80u, 0x62a5edu); RETCHK(0x62a5f2u, 0x62a5edu); LOADALL;
  /* 0062a5f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a5f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a5f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a5f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a600(CPU *c) {
  NATIVE_HOOK(0x62a600u) REGS; LOADALL;
L_0062a600:;
  /* 0062a600 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a601 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a603 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a604 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a605 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a608 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a60a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a60d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a60f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0062a611 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a618 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a61b push 0x650908 */ { u32 v_ = 0x650908u; esp -= 4; M32(esp) = v_; }
  /* 0062a620 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a623 call 0x404420 */ esp -= 4; M32(esp) = 0x62a628u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a623u); RETCHK(0x62a628u, 0x62a623u); LOADALL;
  /* 0062a628 mov esi, 0x7a80cd */ { esi = (u32)(0x7a80cdu); }
  /* 0062a62d call 0x506140 */ esp -= 4; M32(esp) = 0x62a632u; SAVEALL; F_00506140(c); ABI_CHECK(0x506140u, 0x62a62du); RETCHK(0x62a632u, 0x62a62du); LOADALL;
  /* 0062a632 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a633 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a635 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a636 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a640(CPU *c) {
  NATIVE_HOOK(0x62a640u) REGS; LOADALL;
L_0062a640:;
  /* 0062a640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a643 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a644 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a645 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a648 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a64a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a64d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a64f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0062a651 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a658 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a65b push 0x650a14 */ { u32 v_ = 0x650a14u; esp -= 4; M32(esp) = v_; }
  /* 0062a660 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a663 call 0x404420 */ esp -= 4; M32(esp) = 0x62a668u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a663u); RETCHK(0x62a668u, 0x62a663u); LOADALL;
  /* 0062a668 mov esi, 0x7a80ce */ { esi = (u32)(0x7a80ceu); }
  /* 0062a66d call 0x5064e0 */ esp -= 4; M32(esp) = 0x62a672u; SAVEALL; F_005064e0(c); ABI_CHECK(0x5064e0u, 0x62a66du); RETCHK(0x62a672u, 0x62a66du); LOADALL;
  /* 0062a672 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a673 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a675 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a676 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a680(CPU *c) {
  NATIVE_HOOK(0x62a680u) REGS; LOADALL;
L_0062a680:;
  /* 0062a680 mov dword ptr [0x7a80d0], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a80d0u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a68a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a690(CPU *c) {
  NATIVE_HOOK(0x62a690u) REGS; LOADALL;
L_0062a690:;
  /* 0062a690 mov dword ptr [0x7a80d4], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a80d4u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a69a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a6a0(CPU *c) {
  NATIVE_HOOK(0x62a6a0u) REGS; LOADALL;
L_0062a6a0:;
  /* 0062a6a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a6a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a6a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a6a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a6a5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a6a8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a6aa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a6ad xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a6af push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0062a6b1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a6b8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a6bb push 0x650b0c */ { u32 v_ = 0x650b0cu; esp -= 4; M32(esp) = v_; }
  /* 0062a6c0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a6c3 call 0x404420 */ esp -= 4; M32(esp) = 0x62a6c8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a6c3u); RETCHK(0x62a6c8u, 0x62a6c3u); LOADALL;
  /* 0062a6c8 mov esi, 0x7a80d8 */ { esi = (u32)(0x7a80d8u); }
  /* 0062a6cd call 0x506a80 */ esp -= 4; M32(esp) = 0x62a6d2u; SAVEALL; F_00506a80(c); ABI_CHECK(0x506a80u, 0x62a6cdu); RETCHK(0x62a6d2u, 0x62a6cdu); LOADALL;
  /* 0062a6d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a6d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a6d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a6d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a6e0(CPU *c) {
  NATIVE_HOOK(0x62a6e0u) REGS; LOADALL;
L_0062a6e0:;
  /* 0062a6e0 mov dword ptr [0x7a80dc], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a80dcu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a6ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a6f0(CPU *c) {
  NATIVE_HOOK(0x62a6f0u) REGS; LOADALL;
L_0062a6f0:;
  /* 0062a6f0 mov dword ptr [0x7a80e0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a80e0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a6fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a700(CPU *c) {
  NATIVE_HOOK(0x62a700u) REGS; LOADALL;
L_0062a700:;
  /* 0062a700 mov dword ptr [0x7a80e4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a80e4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a70a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a710(CPU *c) {
  NATIVE_HOOK(0x62a710u) REGS; LOADALL;
L_0062a710:;
  /* 0062a710 mov dword ptr [0x7a80e8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a80e8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a71a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a720(CPU *c) {
  NATIVE_HOOK(0x62a720u) REGS; LOADALL;
L_0062a720:;
  /* 0062a720 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a721 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a723 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a724 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a725 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a728 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a72a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a72d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a72f push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0062a731 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a738 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a73b push 0x650d48 */ { u32 v_ = 0x650d48u; esp -= 4; M32(esp) = v_; }
  /* 0062a740 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a743 call 0x404420 */ esp -= 4; M32(esp) = 0x62a748u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a743u); RETCHK(0x62a748u, 0x62a743u); LOADALL;
  /* 0062a748 mov esi, 0x7a80ec */ { esi = (u32)(0x7a80ecu); }
  /* 0062a74d call 0x5097a0 */ esp -= 4; M32(esp) = 0x62a752u; SAVEALL; F_005097a0(c); ABI_CHECK(0x5097a0u, 0x62a74du); RETCHK(0x62a752u, 0x62a74du); LOADALL;
  /* 0062a752 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a753 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a755 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a756 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a760(CPU *c) {
  NATIVE_HOOK(0x62a760u) REGS; LOADALL;
L_0062a760:;
  /* 0062a760 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a761 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a763 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a764 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a765 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a768 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a76a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a76d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a76f push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0062a771 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a778 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a77b push 0x651018 */ { u32 v_ = 0x651018u; esp -= 4; M32(esp) = v_; }
  /* 0062a780 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a783 call 0x404420 */ esp -= 4; M32(esp) = 0x62a788u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a783u); RETCHK(0x62a788u, 0x62a783u); LOADALL;
  /* 0062a788 mov esi, 0x7a80ed */ { esi = (u32)(0x7a80edu); }
  /* 0062a78d call 0x50b250 */ esp -= 4; M32(esp) = 0x62a792u; SAVEALL; F_0050b250(c); ABI_CHECK(0x50b250u, 0x62a78du); RETCHK(0x62a792u, 0x62a78du); LOADALL;
  /* 0062a792 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a793 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a795 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a796 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a7a0(CPU *c) {
  NATIVE_HOOK(0x62a7a0u) REGS; LOADALL;
L_0062a7a0:;
  /* 0062a7a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a7a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a7a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a7a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a7a5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a7a8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a7aa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a7ad xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a7af push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0062a7b1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a7b8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a7bb push 0x6428bc */ { u32 v_ = 0x6428bcu; esp -= 4; M32(esp) = v_; }
  /* 0062a7c0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a7c3 call 0x404420 */ esp -= 4; M32(esp) = 0x62a7c8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a7c3u); RETCHK(0x62a7c8u, 0x62a7c3u); LOADALL;
  /* 0062a7c8 mov esi, 0x7a80ee */ { esi = (u32)(0x7a80eeu); }
  /* 0062a7cd call 0x50b2d0 */ esp -= 4; M32(esp) = 0x62a7d2u; SAVEALL; F_0050b2d0(c); ABI_CHECK(0x50b2d0u, 0x62a7cdu); RETCHK(0x62a7d2u, 0x62a7cdu); LOADALL;
  /* 0062a7d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a7d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a7d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a7d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a7e0(CPU *c) {
  NATIVE_HOOK(0x62a7e0u) REGS; LOADALL;
L_0062a7e0:;
  /* 0062a7e0 mov dword ptr [0x7a80f0], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a80f0u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a7ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a7f0(CPU *c) {
  NATIVE_HOOK(0x62a7f0u) REGS; LOADALL;
L_0062a7f0:;
  /* 0062a7f0 mov dword ptr [0x7a80f4], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a80f4u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a7fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a800(CPU *c) {
  NATIVE_HOOK(0x62a800u) REGS; LOADALL;
L_0062a800:;
  /* 0062a800 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a801 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a803 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a804 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a805 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a808 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a80a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a80d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a80f push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0062a811 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a818 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a81b push 0x651128 */ { u32 v_ = 0x651128u; esp -= 4; M32(esp) = v_; }
  /* 0062a820 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a823 call 0x404420 */ esp -= 4; M32(esp) = 0x62a828u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a823u); RETCHK(0x62a828u, 0x62a823u); LOADALL;
  /* 0062a828 mov esi, 0x7a80f8 */ { esi = (u32)(0x7a80f8u); }
  /* 0062a82d call 0x50ba90 */ esp -= 4; M32(esp) = 0x62a832u; SAVEALL; F_0050ba90(c); ABI_CHECK(0x50ba90u, 0x62a82du); RETCHK(0x62a832u, 0x62a82du); LOADALL;
  /* 0062a832 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a833 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a835 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a836 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a840(CPU *c) {
  NATIVE_HOOK(0x62a840u) REGS; LOADALL;
L_0062a840:;
  /* 0062a840 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a841 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a843 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a844 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a845 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a848 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a84a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a84d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a84f push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0062a851 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a858 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a85b push 0x651000 */ { u32 v_ = 0x651000u; esp -= 4; M32(esp) = v_; }
  /* 0062a860 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a863 call 0x404420 */ esp -= 4; M32(esp) = 0x62a868u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a863u); RETCHK(0x62a868u, 0x62a863u); LOADALL;
  /* 0062a868 mov esi, 0x7a80f9 */ { esi = (u32)(0x7a80f9u); }
  /* 0062a86d call 0x50c860 */ esp -= 4; M32(esp) = 0x62a872u; SAVEALL; F_0050c860(c); ABI_CHECK(0x50c860u, 0x62a86du); RETCHK(0x62a872u, 0x62a86du); LOADALL;
  /* 0062a872 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a873 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a875 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a876 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a880(CPU *c) {
  NATIVE_HOOK(0x62a880u) REGS; LOADALL;
L_0062a880:;
  /* 0062a880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a883 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a884 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a885 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a888 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a88a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a88d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a88f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0062a891 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a898 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a89b push 0x65131c */ { u32 v_ = 0x65131cu; esp -= 4; M32(esp) = v_; }
  /* 0062a8a0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a8a3 call 0x404420 */ esp -= 4; M32(esp) = 0x62a8a8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a8a3u); RETCHK(0x62a8a8u, 0x62a8a3u); LOADALL;
  /* 0062a8a8 mov esi, 0x7a80fa */ { esi = (u32)(0x7a80fau); }
  /* 0062a8ad call 0x50cba0 */ esp -= 4; M32(esp) = 0x62a8b2u; SAVEALL; F_0050cba0(c); ABI_CHECK(0x50cba0u, 0x62a8adu); RETCHK(0x62a8b2u, 0x62a8adu); LOADALL;
  /* 0062a8b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a8b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a8b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a8b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a8c0(CPU *c) {
  NATIVE_HOOK(0x62a8c0u) REGS; LOADALL;
L_0062a8c0:;
  /* 0062a8c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a8c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a8c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a8c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a8c5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a8c8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a8ca mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a8cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a8cf push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0062a8d1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a8d8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a8db push 0x6514a0 */ { u32 v_ = 0x6514a0u; esp -= 4; M32(esp) = v_; }
  /* 0062a8e0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a8e3 call 0x404420 */ esp -= 4; M32(esp) = 0x62a8e8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a8e3u); RETCHK(0x62a8e8u, 0x62a8e3u); LOADALL;
  /* 0062a8e8 mov esi, 0x7a80fb */ { esi = (u32)(0x7a80fbu); }
  /* 0062a8ed call 0x50d730 */ esp -= 4; M32(esp) = 0x62a8f2u; SAVEALL; F_0050d730(c); ABI_CHECK(0x50d730u, 0x62a8edu); RETCHK(0x62a8f2u, 0x62a8edu); LOADALL;
  /* 0062a8f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a8f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a8f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a8f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a900(CPU *c) {
  NATIVE_HOOK(0x62a900u) REGS; LOADALL;
L_0062a900:;
  /* 0062a900 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a901 mov esi, 0x7a80fc */ { esi = (u32)(0x7a80fcu); }
  /* 0062a906 call 0x62df00 */ esp -= 4; M32(esp) = 0x62a90bu; SAVEALL; F_0062df00(c); ABI_CHECK(0x62df00u, 0x62a906u); RETCHK(0x62a90bu, 0x62a906u); LOADALL;
  /* 0062a90b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a90c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a910(CPU *c) {
  NATIVE_HOOK(0x62a910u) REGS; LOADALL;
L_0062a910:;
  /* 0062a910 mov dword ptr [0x7a8110], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8110u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a91a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a920(CPU *c) {
  NATIVE_HOOK(0x62a920u) REGS; LOADALL;
L_0062a920:;
  /* 0062a920 mov dword ptr [0x7a8114], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8114u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062a92a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a930(CPU *c) {
  NATIVE_HOOK(0x62a930u) REGS; LOADALL;
L_0062a930:;
  /* 0062a930 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a931 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a933 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a934 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a935 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a938 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a93a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a93d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a93f push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0062a941 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a948 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a94b push 0x6515a0 */ { u32 v_ = 0x6515a0u; esp -= 4; M32(esp) = v_; }
  /* 0062a950 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a953 call 0x404420 */ esp -= 4; M32(esp) = 0x62a958u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a953u); RETCHK(0x62a958u, 0x62a953u); LOADALL;
  /* 0062a958 mov esi, 0x7a8118 */ { esi = (u32)(0x7a8118u); }
  /* 0062a95d call 0x50e1c0 */ esp -= 4; M32(esp) = 0x62a962u; SAVEALL; F_0050e1c0(c); ABI_CHECK(0x50e1c0u, 0x62a95du); RETCHK(0x62a962u, 0x62a95du); LOADALL;
  /* 0062a962 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a963 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a965 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a966 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a970(CPU *c) {
  NATIVE_HOOK(0x62a970u) REGS; LOADALL;
L_0062a970:;
  /* 0062a970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a973 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a974 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a975 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a978 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a97a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a97d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a97f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0062a981 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a988 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a98b push 0x6516a4 */ { u32 v_ = 0x6516a4u; esp -= 4; M32(esp) = v_; }
  /* 0062a990 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a993 call 0x404420 */ esp -= 4; M32(esp) = 0x62a998u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a993u); RETCHK(0x62a998u, 0x62a993u); LOADALL;
  /* 0062a998 mov esi, 0x7a8119 */ { esi = (u32)(0x7a8119u); }
  /* 0062a99d call 0x50e4e0 */ esp -= 4; M32(esp) = 0x62a9a2u; SAVEALL; F_0050e4e0(c); ABI_CHECK(0x50e4e0u, 0x62a99du); RETCHK(0x62a9a2u, 0x62a99du); LOADALL;
  /* 0062a9a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a9a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a9a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a9a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a9b0(CPU *c) {
  NATIVE_HOOK(0x62a9b0u) REGS; LOADALL;
L_0062a9b0:;
  /* 0062a9b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062a9b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062a9b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062a9b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062a9b5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062a9b8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062a9ba mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062a9bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062a9bf push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0062a9c1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062a9c8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062a9cb push 0x6518d4 */ { u32 v_ = 0x6518d4u; esp -= 4; M32(esp) = v_; }
  /* 0062a9d0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062a9d3 call 0x404420 */ esp -= 4; M32(esp) = 0x62a9d8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62a9d3u); RETCHK(0x62a9d8u, 0x62a9d3u); LOADALL;
  /* 0062a9d8 mov esi, 0x7a811a */ { esi = (u32)(0x7a811au); }
  /* 0062a9dd call 0x511c20 */ esp -= 4; M32(esp) = 0x62a9e2u; SAVEALL; F_00511c20(c); ABI_CHECK(0x511c20u, 0x62a9ddu); RETCHK(0x62a9e2u, 0x62a9ddu); LOADALL;
  /* 0062a9e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062a9e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062a9e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062a9e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062a9f0(CPU *c) {
  NATIVE_HOOK(0x62a9f0u) REGS; LOADALL;
L_0062a9f0:;
  /* 0062a9f0 mov dword ptr [0x7a811c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a811cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062a9fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062aa00(CPU *c) {
  NATIVE_HOOK(0x62aa00u) REGS; LOADALL;
L_0062aa00:;
  /* 0062aa00 mov dword ptr [0x7a8120], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8120u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062aa0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062aa10(CPU *c) {
  NATIVE_HOOK(0x62aa10u) REGS; LOADALL;
L_0062aa10:;
  /* 0062aa10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062aa11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062aa13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062aa14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062aa15 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062aa18 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062aa1a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062aa1d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062aa1f push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0062aa21 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062aa28 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062aa2b push 0x6519e0 */ { u32 v_ = 0x6519e0u; esp -= 4; M32(esp) = v_; }
  /* 0062aa30 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062aa33 call 0x404420 */ esp -= 4; M32(esp) = 0x62aa38u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62aa33u); RETCHK(0x62aa38u, 0x62aa33u); LOADALL;
  /* 0062aa38 mov esi, 0x7a8124 */ { esi = (u32)(0x7a8124u); }
  /* 0062aa3d call 0x512540 */ esp -= 4; M32(esp) = 0x62aa42u; SAVEALL; F_00512540(c); ABI_CHECK(0x512540u, 0x62aa3du); RETCHK(0x62aa42u, 0x62aa3du); LOADALL;
  /* 0062aa42 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062aa43 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062aa45 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062aa46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062aa50(CPU *c) {
  NATIVE_HOOK(0x62aa50u) REGS; LOADALL;
L_0062aa50:;
  /* 0062aa50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062aa51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062aa53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062aa54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062aa55 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062aa58 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062aa5a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062aa5d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062aa5f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0062aa61 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062aa68 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062aa6b push 0x651b28 */ { u32 v_ = 0x651b28u; esp -= 4; M32(esp) = v_; }
  /* 0062aa70 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062aa73 call 0x404420 */ esp -= 4; M32(esp) = 0x62aa78u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62aa73u); RETCHK(0x62aa78u, 0x62aa73u); LOADALL;
  /* 0062aa78 mov esi, 0x7a8125 */ { esi = (u32)(0x7a8125u); }
  /* 0062aa7d call 0x513230 */ esp -= 4; M32(esp) = 0x62aa82u; SAVEALL; F_00513230(c); ABI_CHECK(0x513230u, 0x62aa7du); RETCHK(0x62aa82u, 0x62aa7du); LOADALL;
  /* 0062aa82 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062aa83 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062aa85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062aa86 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062aa90(CPU *c) {
  NATIVE_HOOK(0x62aa90u) REGS; LOADALL;
L_0062aa90:;
  /* 0062aa90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062aa91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062aa93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062aa94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062aa95 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062aa98 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062aa9a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062aa9d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062aa9f push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0062aaa1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062aaa8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062aaab push 0x651c1c */ { u32 v_ = 0x651c1cu; esp -= 4; M32(esp) = v_; }
  /* 0062aab0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062aab3 call 0x404420 */ esp -= 4; M32(esp) = 0x62aab8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62aab3u); RETCHK(0x62aab8u, 0x62aab3u); LOADALL;
  /* 0062aab8 mov esi, 0x7a8126 */ { esi = (u32)(0x7a8126u); }
  /* 0062aabd call 0x513650 */ esp -= 4; M32(esp) = 0x62aac2u; SAVEALL; F_00513650(c); ABI_CHECK(0x513650u, 0x62aabdu); RETCHK(0x62aac2u, 0x62aabdu); LOADALL;
  /* 0062aac2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062aac3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062aac5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062aac6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062aad0(CPU *c) {
  NATIVE_HOOK(0x62aad0u) REGS; LOADALL;
L_0062aad0:;
  /* 0062aad0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062aad1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062aad3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062aad4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062aad5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062aad8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062aada mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062aadd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062aadf push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0062aae1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062aae8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062aaeb push 0x651da4 */ { u32 v_ = 0x651da4u; esp -= 4; M32(esp) = v_; }
  /* 0062aaf0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062aaf3 call 0x404420 */ esp -= 4; M32(esp) = 0x62aaf8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62aaf3u); RETCHK(0x62aaf8u, 0x62aaf3u); LOADALL;
  /* 0062aaf8 mov esi, 0x7a8127 */ { esi = (u32)(0x7a8127u); }
  /* 0062aafd call 0x514320 */ esp -= 4; M32(esp) = 0x62ab02u; SAVEALL; F_00514320(c); ABI_CHECK(0x514320u, 0x62aafdu); RETCHK(0x62ab02u, 0x62aafdu); LOADALL;
  /* 0062ab02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062ab03 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062ab05 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062ab06 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ab10(CPU *c) {
  NATIVE_HOOK(0x62ab10u) REGS; LOADALL;
L_0062ab10:;
  /* 0062ab10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062ab11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062ab13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062ab14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062ab15 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062ab18 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062ab1a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062ab1d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062ab1f push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0062ab21 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062ab28 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062ab2b push 0x651edc */ { u32 v_ = 0x651edcu; esp -= 4; M32(esp) = v_; }
  /* 0062ab30 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062ab33 call 0x404420 */ esp -= 4; M32(esp) = 0x62ab38u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62ab33u); RETCHK(0x62ab38u, 0x62ab33u); LOADALL;
  /* 0062ab38 mov esi, 0x7a8128 */ { esi = (u32)(0x7a8128u); }
  /* 0062ab3d call 0x514ff0 */ esp -= 4; M32(esp) = 0x62ab42u; SAVEALL; F_00514ff0(c); ABI_CHECK(0x514ff0u, 0x62ab3du); RETCHK(0x62ab42u, 0x62ab3du); LOADALL;
  /* 0062ab42 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062ab43 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062ab45 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062ab46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ab50(CPU *c) {
  NATIVE_HOOK(0x62ab50u) REGS; LOADALL;
L_0062ab50:;
  /* 0062ab50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062ab51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062ab53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062ab54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062ab55 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062ab58 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062ab5a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062ab5d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062ab5f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0062ab61 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062ab68 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062ab6b push 0x651ffc */ { u32 v_ = 0x651ffcu; esp -= 4; M32(esp) = v_; }
  /* 0062ab70 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062ab73 call 0x404420 */ esp -= 4; M32(esp) = 0x62ab78u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62ab73u); RETCHK(0x62ab78u, 0x62ab73u); LOADALL;
  /* 0062ab78 mov esi, 0x7a8129 */ { esi = (u32)(0x7a8129u); }
  /* 0062ab7d call 0x516790 */ esp -= 4; M32(esp) = 0x62ab82u; SAVEALL; F_00516790(c); ABI_CHECK(0x516790u, 0x62ab7du); RETCHK(0x62ab82u, 0x62ab7du); LOADALL;
  /* 0062ab82 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062ab83 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062ab85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062ab86 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ab90(CPU *c) {
  NATIVE_HOOK(0x62ab90u) REGS; LOADALL;
L_0062ab90:;
  /* 0062ab90 mov dword ptr [0x7a812c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a812cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062ab9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062aba0(CPU *c) {
  NATIVE_HOOK(0x62aba0u) REGS; LOADALL;
L_0062aba0:;
  /* 0062aba0 mov dword ptr [0x7a8130], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8130u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062abaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062abb0(CPU *c) {
  NATIVE_HOOK(0x62abb0u) REGS; LOADALL;
L_0062abb0:;
  /* 0062abb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062abb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062abb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062abb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062abb5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062abb8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062abba mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062abbd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062abbf push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0062abc1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062abc8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062abcb push 0x652448 */ { u32 v_ = 0x652448u; esp -= 4; M32(esp) = v_; }
  /* 0062abd0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062abd3 call 0x404420 */ esp -= 4; M32(esp) = 0x62abd8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62abd3u); RETCHK(0x62abd8u, 0x62abd3u); LOADALL;
  /* 0062abd8 mov esi, 0x7a8134 */ { esi = (u32)(0x7a8134u); }
  /* 0062abdd call 0x51aa60 */ esp -= 4; M32(esp) = 0x62abe2u; SAVEALL; F_0051aa60(c); ABI_CHECK(0x51aa60u, 0x62abddu); RETCHK(0x62abe2u, 0x62abddu); LOADALL;
  /* 0062abe2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062abe3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062abe5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062abe6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062abf0(CPU *c) {
  NATIVE_HOOK(0x62abf0u) REGS; LOADALL;
L_0062abf0:;
  /* 0062abf0 mov dword ptr [0x7a8138], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8138u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062abfa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ac00(CPU *c) {
  NATIVE_HOOK(0x62ac00u) REGS; LOADALL;
L_0062ac00:;
  /* 0062ac00 mov dword ptr [0x7a813c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a813cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062ac0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ac10(CPU *c) {
  NATIVE_HOOK(0x62ac10u) REGS; LOADALL;
L_0062ac10:;
  /* 0062ac10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062ac11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062ac13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062ac14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062ac15 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062ac18 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062ac1a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062ac1d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062ac1f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0062ac21 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062ac28 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062ac2b push 0x652540 */ { u32 v_ = 0x652540u; esp -= 4; M32(esp) = v_; }
  /* 0062ac30 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062ac33 call 0x404420 */ esp -= 4; M32(esp) = 0x62ac38u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62ac33u); RETCHK(0x62ac38u, 0x62ac33u); LOADALL;
  /* 0062ac38 mov esi, 0x7a8140 */ { esi = (u32)(0x7a8140u); }
  /* 0062ac3d call 0x51c370 */ esp -= 4; M32(esp) = 0x62ac42u; SAVEALL; F_0051c370(c); ABI_CHECK(0x51c370u, 0x62ac3du); RETCHK(0x62ac42u, 0x62ac3du); LOADALL;
  /* 0062ac42 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062ac43 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062ac45 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062ac46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ac50(CPU *c) {
  NATIVE_HOOK(0x62ac50u) REGS; LOADALL;
L_0062ac50:;
  /* 0062ac50 mov dword ptr [0x7a8144], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8144u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062ac5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ac60(CPU *c) {
  NATIVE_HOOK(0x62ac60u) REGS; LOADALL;
L_0062ac60:;
  /* 0062ac60 mov dword ptr [0x7a8148], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8148u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062ac6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ac70(CPU *c) {
  NATIVE_HOOK(0x62ac70u) REGS; LOADALL;
L_0062ac70:;
  /* 0062ac70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062ac71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062ac73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062ac74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062ac75 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062ac78 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062ac7a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062ac7d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062ac7f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0062ac81 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062ac88 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062ac8b push 0x652894 */ { u32 v_ = 0x652894u; esp -= 4; M32(esp) = v_; }
  /* 0062ac90 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062ac93 call 0x404420 */ esp -= 4; M32(esp) = 0x62ac98u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62ac93u); RETCHK(0x62ac98u, 0x62ac93u); LOADALL;
  /* 0062ac98 mov esi, 0x7a814c */ { esi = (u32)(0x7a814cu); }
  /* 0062ac9d call 0x51d410 */ esp -= 4; M32(esp) = 0x62aca2u; SAVEALL; F_0051d410(c); ABI_CHECK(0x51d410u, 0x62ac9du); RETCHK(0x62aca2u, 0x62ac9du); LOADALL;
  /* 0062aca2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062aca3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062aca5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062aca6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062acb0(CPU *c) {
  NATIVE_HOOK(0x62acb0u) REGS; LOADALL;
L_0062acb0:;
  /* 0062acb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062acb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062acb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062acb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062acb5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062acb8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062acba mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062acbd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062acbf push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0062acc1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062acc8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062accb push 0x6529e4 */ { u32 v_ = 0x6529e4u; esp -= 4; M32(esp) = v_; }
  /* 0062acd0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062acd3 call 0x404420 */ esp -= 4; M32(esp) = 0x62acd8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62acd3u); RETCHK(0x62acd8u, 0x62acd3u); LOADALL;
  /* 0062acd8 mov esi, 0x7a814d */ { esi = (u32)(0x7a814du); }
  /* 0062acdd call 0x51db10 */ esp -= 4; M32(esp) = 0x62ace2u; SAVEALL; F_0051db10(c); ABI_CHECK(0x51db10u, 0x62acddu); RETCHK(0x62ace2u, 0x62acddu); LOADALL;
  /* 0062ace2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062ace3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062ace5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062ace6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062acf0(CPU *c) {
  NATIVE_HOOK(0x62acf0u) REGS; LOADALL;
L_0062acf0:;
  /* 0062acf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062acf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062acf3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062acf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062acf5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062acf8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062acfa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062acfd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062acff push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0062ad01 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062ad08 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062ad0b push 0x652af0 */ { u32 v_ = 0x652af0u; esp -= 4; M32(esp) = v_; }
  /* 0062ad10 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062ad13 call 0x404420 */ esp -= 4; M32(esp) = 0x62ad18u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62ad13u); RETCHK(0x62ad18u, 0x62ad13u); LOADALL;
  /* 0062ad18 mov esi, 0x7a814e */ { esi = (u32)(0x7a814eu); }
  /* 0062ad1d call 0x51e920 */ esp -= 4; M32(esp) = 0x62ad22u; SAVEALL; F_0051e920(c); ABI_CHECK(0x51e920u, 0x62ad1du); RETCHK(0x62ad22u, 0x62ad1du); LOADALL;
  /* 0062ad22 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062ad23 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062ad25 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062ad26 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ad30(CPU *c) {
  NATIVE_HOOK(0x62ad30u) REGS; LOADALL;
L_0062ad30:;
  /* 0062ad30 mov dword ptr [0x7a8150], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a8150u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062ad3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ad40(CPU *c) {
  NATIVE_HOOK(0x62ad40u) REGS; LOADALL;
L_0062ad40:;
  /* 0062ad40 mov dword ptr [0x7a8154], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a8154u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062ad4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ad50(CPU *c) {
  NATIVE_HOOK(0x62ad50u) REGS; LOADALL;
L_0062ad50:;
  /* 0062ad50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062ad51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062ad53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062ad54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062ad55 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062ad58 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062ad5a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062ad5d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062ad5f push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 0062ad61 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062ad68 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062ad6b push 0x652c28 */ { u32 v_ = 0x652c28u; esp -= 4; M32(esp) = v_; }
  /* 0062ad70 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062ad73 call 0x404420 */ esp -= 4; M32(esp) = 0x62ad78u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62ad73u); RETCHK(0x62ad78u, 0x62ad73u); LOADALL;
  /* 0062ad78 mov esi, 0x7a8158 */ { esi = (u32)(0x7a8158u); }
  /* 0062ad7d call 0x520ee0 */ esp -= 4; M32(esp) = 0x62ad82u; SAVEALL; F_00520ee0(c); ABI_CHECK(0x520ee0u, 0x62ad7du); RETCHK(0x62ad82u, 0x62ad7du); LOADALL;
  /* 0062ad82 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062ad83 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062ad85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062ad86 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ad90(CPU *c) {
  NATIVE_HOOK(0x62ad90u) REGS; LOADALL;
L_0062ad90:;
  /* 0062ad90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062ad91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062ad93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062ad94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062ad95 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062ad98 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062ad9a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062ad9d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062ad9f push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 0062ada1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062ada8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062adab push 0x652db0 */ { u32 v_ = 0x652db0u; esp -= 4; M32(esp) = v_; }
  /* 0062adb0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062adb3 call 0x404420 */ esp -= 4; M32(esp) = 0x62adb8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62adb3u); RETCHK(0x62adb8u, 0x62adb3u); LOADALL;
  /* 0062adb8 mov esi, 0x7a8159 */ { esi = (u32)(0x7a8159u); }
  /* 0062adbd call 0x5220d0 */ esp -= 4; M32(esp) = 0x62adc2u; SAVEALL; F_005220d0(c); ABI_CHECK(0x5220d0u, 0x62adbdu); RETCHK(0x62adc2u, 0x62adbdu); LOADALL;
  /* 0062adc2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062adc3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062adc5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062adc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
