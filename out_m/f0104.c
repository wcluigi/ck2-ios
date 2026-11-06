#include "funcs.h"

void F_10105b9e(CPU *c) {
  NATIVE_HOOK(0x10105b9eu) REGS; LOADALL;
L_10105b9e:;
  /* 10105b9e mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105ba1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105ba3 jne 0x10105baa */ if (!ZF_) goto L_10105baa;
  /* 10105ba5 mov eax, 0x1010d330 */ { eax = (u32)(0x1010d330u); }
L_10105baa:;
  /* 10105baa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105bab(CPU *c) {
  NATIVE_HOOK(0x10105babu) REGS; LOADALL;
L_10105bab:;
  /* 10105bab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105bac mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10105bae call 0x10105b88 */ esp -= 4; M32(esp) = 0x10105bb3u; SAVEALL; F_10105b88(c); ABI_CHECK(0x10105b88u, 0x10105baeu); RETCHK(0x10105bb3u, 0x10105baeu); LOADALL;
  /* 10105bb3 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10105bb8 je 0x10105bc1 */ if (ZF_) goto L_10105bc1;
  /* 10105bba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105bbb call 0x10105a9d */ esp -= 4; M32(esp) = 0x10105bc0u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10105bbbu); RETCHK(0x10105bc0u, 0x10105bbbu); LOADALL;
  /* 10105bc0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105bc1:;
  /* 10105bc1 mov eax, esi */ { eax = (u32)(esi); }
  /* 10105bc3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105bc4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10105bc7(CPU *c) {
  NATIVE_HOOK(0x10105bc7u) REGS; LOADALL;
L_10105bc7:;
  /* 10105bc7 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10105bc9 push 0x1010d350 */ { u32 v_ = 0x1010d350u; esp -= 4; M32(esp) = v_; }
  /* 10105bce call 0x1010734c */ esp -= 4; M32(esp) = 0x10105bd3u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10105bceu); RETCHK(0x10105bd3u, 0x10105bceu); LOADALL;
  /* 10105bd3 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10105bd5 mov dword ptr [esi], 0x1010d348 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1010d348u); }
  /* 10105bdb push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 10105bdd call 0x101077cb */ esp -= 4; M32(esp) = 0x10105be2u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10105bddu); RETCHK(0x10105be2u, 0x10105bddu); LOADALL;
  /* 10105be2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105be3 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105be7 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10105bea test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105bec je 0x10105bf5 */ if (ZF_) goto L_10105bf5;
  /* 10105bee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105bef call 0x101074a1 */ esp -= 4; M32(esp) = 0x10105bf4u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10105befu); RETCHK(0x10105bf4u, 0x10105befu); LOADALL;
  /* 10105bf4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105bf5:;
  /* 10105bf5 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105bf9 call 0x10105c04 */ esp -= 4; M32(esp) = 0x10105bfeu; SAVEALL; F_10105c04(c); ABI_CHECK(0x10105c04u, 0x10105bf9u); RETCHK(0x10105bfeu, 0x10105bf9u); LOADALL;
  /* 10105bfe call 0x10107387 */ esp -= 4; M32(esp) = 0x10105c03u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10105bfeu); RETCHK(0x10105c03u, 0x10105bfeu); LOADALL;
  /* 10105c03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105c04(CPU *c) {
  NATIVE_HOOK(0x10105c04u) REGS; LOADALL;
L_10105c04:;
  /* 10105c04 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 10105c06 call 0x10107716 */ esp -= 4; M32(esp) = 0x10105c0bu; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10105c06u); RETCHK(0x10105c0bu, 0x10105c06u); LOADALL;
  /* 10105c0b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105c0d(CPU *c) {
  NATIVE_HOOK(0x10105c0du) REGS; LOADALL;
L_10105c0d:;
  /* 10105c0d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105c0e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10105c10 call 0x10105bc7 */ esp -= 4; M32(esp) = 0x10105c15u; SAVEALL; F_10105bc7(c); ABI_CHECK(0x10105bc7u, 0x10105c10u); RETCHK(0x10105c15u, 0x10105c10u); LOADALL;
  /* 10105c15 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10105c1a je 0x10105c23 */ if (ZF_) goto L_10105c23;
  /* 10105c1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105c1d call 0x10105a9d */ esp -= 4; M32(esp) = 0x10105c22u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x10105c1du); RETCHK(0x10105c22u, 0x10105c1du); LOADALL;
  /* 10105c22 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105c23:;
  /* 10105c23 mov eax, esi */ { eax = (u32)(esi); }
  /* 10105c25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105c26 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10105c29(CPU *c) {
  NATIVE_HOOK(0x10105c29u) REGS; LOADALL;
L_10105c29:;
  /* 10105c29 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105c2a push dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105c30 call 0x10107bdc */ esp -= 4; M32(esp) = 0x10105c35u; SAVEALL; F_10107bdc(c); ABI_CHECK(0x10107bdcu, 0x10105c30u); RETCHK(0x10105c35u, 0x10105c30u); LOADALL;
  /* 10105c35 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c36 mov ecx, dword ptr [0x10122504] */ { const u32 m_ = (u32)(0x10122504u); ecx = (u32)(M32(m_)); }
  /* 10105c3c mov esi, eax */ { esi = (u32)(eax); }
  /* 10105c3e mov eax, dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); eax = (u32)(M32(m_)); }
  /* 10105c43 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10105c45 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10105c47 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10105c4a cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105c4c jae 0x10105c9c */ if (!CF_) goto L_10105c9c;
  /* 10105c4e mov ecx, 0x800 */ { ecx = (u32)(0x800u); }
  /* 10105c53 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105c55 jae 0x10105c59 */ if (!CF_) goto L_10105c59;
  /* 10105c57 mov ecx, esi */ { ecx = (u32)(esi); }
L_10105c59:;
  /* 10105c59 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10105c5b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10105c5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105c5d call 0x10107888 */ esp -= 4; M32(esp) = 0x10105c62u; SAVEALL; F_10107888(c); ABI_CHECK(0x10107888u, 0x10105c5du); RETCHK(0x10105c62u, 0x10105c5du); LOADALL;
  /* 10105c62 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105c64 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c65 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c66 jne 0x10105c7f */ if (!ZF_) goto L_10105c7f;
  /* 10105c68 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10105c6b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105c6c push dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105c72 call 0x10107888 */ esp -= 4; M32(esp) = 0x10105c77u; SAVEALL; F_10107888(c); ABI_CHECK(0x10107888u, 0x10105c72u); RETCHK(0x10105c77u, 0x10105c72u); LOADALL;
  /* 10105c77 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105c79 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c7a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105c7b jne 0x10105c7f */ if (!ZF_) goto L_10105c7f;
  /* 10105c7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105c7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105c7f:;
  /* 10105c7f mov ecx, dword ptr [0x10122504] */ { const u32 m_ = (u32)(0x10122504u); ecx = (u32)(M32(m_)); }
  /* 10105c85 sub ecx, dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10105c8b mov dword ptr [0x10122508], eax */ { const u32 m_ = (u32)(0x10122508u); M32(m_) = (u32)(eax); }
  /* 10105c90 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10105c93 lea ecx, [eax + ecx*4] */ ecx = (u32)((u32)(eax + ecx * 4u));
  /* 10105c96 mov dword ptr [0x10122504], ecx */ { const u32 m_ = (u32)(0x10122504u); M32(m_) = (u32)(ecx); }
L_10105c9c:;
  /* 10105c9c mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 10105c9e add dword ptr [0x10122504], 4 */ { const u32 m_ = (u32)(0x10122504u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105ca5 mov eax, edi */ { eax = (u32)(edi); }
  /* 10105ca7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105ca8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105ca9(CPU *c) {
  NATIVE_HOOK(0x10105ca9u) REGS; LOADALL;
L_10105ca9:;
  /* 10105ca9 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10105cae call 0x10106108 */ esp -= 4; M32(esp) = 0x10105cb3u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x10105caeu); RETCHK(0x10105cb3u, 0x10105caeu); LOADALL;
  /* 10105cb3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105cb5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105cb6 mov dword ptr [0x10122508], eax */ { const u32 m_ = (u32)(0x10122508u); M32(m_) = (u32)(eax); }
  /* 10105cbb jne 0x10105cc1 */ if (!ZF_) goto L_10105cc1;
  /* 10105cbd push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 10105cbf pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10105cc0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10105cc1:;
  /* 10105cc1 and dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105cc4 mov eax, dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); eax = (u32)(M32(m_)); }
  /* 10105cc9 mov dword ptr [0x10122504], eax */ { const u32 m_ = (u32)(0x10122504u); M32(m_) = (u32)(eax); }
  /* 10105cce xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105cd0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105cd1(CPU *c) {
  NATIVE_HOOK(0x10105cd1u) REGS; LOADALL;
L_10105cd1:;
  /* 10105cd1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10105cd3 push 0x1010d360 */ { u32 v_ = 0x1010d360u; esp -= 4; M32(esp) = v_; }
  /* 10105cd8 call 0x1010734c */ esp -= 4; M32(esp) = 0x10105cddu; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10105cd8u); RETCHK(0x10105cddu, 0x10105cd8u); LOADALL;
  /* 10105cdd call 0x10107a65 */ esp -= 4; M32(esp) = 0x10105ce2u; SAVEALL; F_10107a65(c); ABI_CHECK(0x10107a65u, 0x10105cddu); RETCHK(0x10105ce2u, 0x10105cddu); LOADALL;
  /* 10105ce2 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105ce6 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10105ce9 call 0x10105c29 */ esp -= 4; M32(esp) = 0x10105ceeu; SAVEALL; F_10105c29(c); ABI_CHECK(0x10105c29u, 0x10105ce9u); RETCHK(0x10105ceeu, 0x10105ce9u); LOADALL;
  /* 10105cee mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105cf1 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105cf5 call 0x10105d03 */ esp -= 4; M32(esp) = 0x10105cfau; SAVEALL; F_10105d03(c); ABI_CHECK(0x10105d03u, 0x10105cf5u); RETCHK(0x10105cfau, 0x10105cf5u); LOADALL;
  /* 10105cfa mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10105cfd call 0x10107387 */ esp -= 4; M32(esp) = 0x10105d02u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10105cfdu); RETCHK(0x10105d02u, 0x10105cfdu); LOADALL;
  /* 10105d02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105d03(CPU *c) {
  NATIVE_HOOK(0x10105d03u) REGS; LOADALL;
L_10105d03:;
  /* 10105d03 call 0x10107a6e */ esp -= 4; M32(esp) = 0x10105d08u; SAVEALL; F_10107a6e(c); ABI_CHECK(0x10107a6eu, 0x10105d03u); RETCHK(0x10105d08u, 0x10105d03u); LOADALL;
  /* 10105d08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105d09(CPU *c) {
  NATIVE_HOOK(0x10105d09u) REGS; LOADALL;
L_10105d09:;
  /* 10105d09 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105d0d call 0x10105cd1 */ esp -= 4; M32(esp) = 0x10105d12u; SAVEALL; F_10105cd1(c); ABI_CHECK(0x10105cd1u, 0x10105d0du); RETCHK(0x10105d12u, 0x10105d0du); LOADALL;
  /* 10105d12 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105d14 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10105d16 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10105d18 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105d19 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10105d1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105d1b(CPU *c) {
  NATIVE_HOOK(0x10105d1bu) REGS; LOADALL;
L_10105d1b:;
  /* 10105d1b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105d1c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105d1e sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105d21 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105d24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105d25 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10105d28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105d29 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105d2c mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105d2f push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105d32 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10105d35 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105d36 mov dword ptr [ebp - 0x14], 0x42 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x42u); }
  /* 10105d3d mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 10105d40 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10105d43 call 0x10107df9 */ esp -= 4; M32(esp) = 0x10105d48u; SAVEALL; F_10107df9(c); ABI_CHECK(0x10107df9u, 0x10105d43u); RETCHK(0x10105d48u, 0x10105d43u); LOADALL;
  /* 10105d48 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105d4b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105d4d mov edi, eax */ { edi = (u32)(eax); }
  /* 10105d4f je 0x10105d6b */ if (ZF_) goto L_10105d6b;
  /* 10105d51 dec dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10105d54 js 0x10105d5e */ if (SF_) goto L_10105d5e;
  /* 10105d56 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10105d59 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10105d5c jmp 0x10105d6b */ goto L_10105d6b;
L_10105d5e:;
  /* 10105d5e lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10105d61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105d62 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105d64 call 0x10107c52 */ esp -= 4; M32(esp) = 0x10105d69u; SAVEALL; F_10107c52(c); ABI_CHECK(0x10107c52u, 0x10105d64u); RETCHK(0x10105d69u, 0x10105d64u); LOADALL;
  /* 10105d69 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105d6a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105d6b:;
  /* 10105d6b mov eax, edi */ { eax = (u32)(edi); }
  /* 10105d6d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105d6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105d6f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105d70 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105d71(CPU *c) {
  NATIVE_HOOK(0x10105d71u) REGS; LOADALL;
L_10105d71:;
  /* 10105d71 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105d72 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105d74 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105d77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105d78 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10105d7b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105d7c lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 10105d7f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105d80 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105d83 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10105d86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105d87 mov dword ptr [ebp - 0x1c], 0x7fffffff */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x7fffffffu); }
  /* 10105d8e mov dword ptr [ebp - 0x14], 0x42 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x42u); }
  /* 10105d95 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 10105d98 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10105d9b call 0x10107df9 */ esp -= 4; M32(esp) = 0x10105da0u; SAVEALL; F_10107df9(c); ABI_CHECK(0x10107df9u, 0x10105d9bu); RETCHK(0x10105da0u, 0x10105d9bu); LOADALL;
  /* 10105da0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10105da3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105da5 mov edi, eax */ { edi = (u32)(eax); }
  /* 10105da7 je 0x10105dc3 */ if (ZF_) goto L_10105dc3;
  /* 10105da9 dec dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10105dac js 0x10105db6 */ if (SF_) goto L_10105db6;
  /* 10105dae mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10105db1 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10105db4 jmp 0x10105dc3 */ goto L_10105dc3;
L_10105db6:;
  /* 10105db6 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10105db9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10105dba push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105dbc call 0x10107c52 */ esp -= 4; M32(esp) = 0x10105dc1u; SAVEALL; F_10107c52(c); ABI_CHECK(0x10107c52u, 0x10105dbcu); RETCHK(0x10105dc1u, 0x10105dbcu); LOADALL;
  /* 10105dc1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105dc2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105dc3:;
  /* 10105dc3 mov eax, edi */ { eax = (u32)(edi); }
  /* 10105dc5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10105dc6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105dc7 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10105dc8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10105dc9(CPU *c) {
  NATIVE_HOOK(0x10105dc9u) REGS; LOADALL;
L_10105dc9:;
  /* 10105dc9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10105dca mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10105dcc mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10105dcf cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105dd2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105dd3 jne 0x10105eb9 */ if (!ZF_) goto L_10105eb9;
  /* 10105dd9 mov eax, 0x94 */ { eax = (u32)(0x94u); }
  /* 10105dde call 0x10105720 */ esp -= 4; M32(esp) = 0x10105de3u; SAVEALL; F_10105720(c); ABI_CHECK(0x10105720u, 0x10105ddeu); RETCHK(0x10105de3u, 0x10105ddeu); LOADALL;
  /* 10105de3 mov esi, esp */ { esi = (u32)(esp); }
  /* 10105de5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105de6 mov dword ptr [esi], 0x94 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x94u); }
  /* 10105dec call dword ptr [0x1010d020] */ { const u32 m_ = (u32)(0x1010d020u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10105df2u; SAVEALL; call_ind(c, t_); RETCHK(0x10105df2u, 0x10105decu); LOADALL; }
  /* 10105df2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105df4 je 0x10105f2e */ if (ZF_) goto L_10105f2e;
  /* 10105dfa mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10105dfd mov dword ptr [0x10120e2c], ecx */ { const u32 m_ = (u32)(0x10120e2cu); M32(m_) = (u32)(ecx); }
  /* 10105e03 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10105e06 mov dword ptr [0x10120e38], eax */ { const u32 m_ = (u32)(0x10120e38u); M32(m_) = (u32)(eax); }
  /* 10105e0b mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10105e0e mov dword ptr [0x10120e3c], edx */ { const u32 m_ = (u32)(0x10120e3cu); M32(m_) = (u32)(edx); }
  /* 10105e14 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 10105e17 and esi, 0x7fff */ { u32 a_ = esi, b_ = 0x7fffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10105e1d cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105e20 mov dword ptr [0x10120e30], esi */ { const u32 m_ = (u32)(0x10120e30u); M32(m_) = (u32)(esi); }
  /* 10105e26 je 0x10105e34 */ if (ZF_) goto L_10105e34;
  /* 10105e28 or esi, 0x8000 */ { u32 a_ = esi, b_ = 0x8000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10105e2e mov dword ptr [0x10120e30], esi */ { const u32 m_ = (u32)(0x10120e30u); M32(m_) = (u32)(esi); }
L_10105e34:;
  /* 10105e34 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10105e37 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10105e39 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10105e3b mov dword ptr [0x10120e34], eax */ { const u32 m_ = (u32)(0x10120e34u); M32(m_) = (u32)(eax); }
  /* 10105e40 call 0x10108d91 */ esp -= 4; M32(esp) = 0x10105e45u; SAVEALL; F_10108d91(c); ABI_CHECK(0x10108d91u, 0x10105e40u); RETCHK(0x10105e45u, 0x10105e40u); LOADALL;
  /* 10105e45 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e47 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105e48 je 0x10105f2e */ if (ZF_) goto L_10105f2e;
  /* 10105e4e call 0x10106ff9 */ esp -= 4; M32(esp) = 0x10105e53u; SAVEALL; F_10106ff9(c); ABI_CHECK(0x10106ff9u, 0x10105e4eu); RETCHK(0x10105e53u, 0x10105e4eu); LOADALL;
  /* 10105e53 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e55 jne 0x10105e61 */ if (!ZF_) goto L_10105e61;
L_10105e57:;
  /* 10105e57 call 0x10108de2 */ esp -= 4; M32(esp) = 0x10105e5cu; SAVEALL; F_10108de2(c); ABI_CHECK(0x10108de2u, 0x10105e57u); RETCHK(0x10105e5cu, 0x10105e57u); LOADALL;
  /* 10105e5c jmp 0x10105f2e */ goto L_10105f2e;
L_10105e61:;
  /* 10105e61 call 0x10108cef */ esp -= 4; M32(esp) = 0x10105e66u; SAVEALL; F_10108cef(c); ABI_CHECK(0x10108cefu, 0x10105e61u); RETCHK(0x10105e66u, 0x10105e61u); LOADALL;
  /* 10105e66 call dword ptr [0x1010d01c] */ { const u32 m_ = (u32)(0x1010d01cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10105e6cu; SAVEALL; call_ind(c, t_); RETCHK(0x10105e6cu, 0x10105e66u); LOADALL; }
  /* 10105e6c mov dword ptr [0x10122514], eax */ { const u32 m_ = (u32)(0x10122514u); M32(m_) = (u32)(eax); }
  /* 10105e71 call 0x10108bcd */ esp -= 4; M32(esp) = 0x10105e76u; SAVEALL; F_10108bcd(c); ABI_CHECK(0x10108bcdu, 0x10105e71u); RETCHK(0x10105e76u, 0x10105e71u); LOADALL;
  /* 10105e76 mov dword ptr [0x10120cac], eax */ { const u32 m_ = (u32)(0x10120cacu); M32(m_) = (u32)(eax); }
  /* 10105e7b call 0x101086ae */ esp -= 4; M32(esp) = 0x10105e80u; SAVEALL; F_101086ae(c); ABI_CHECK(0x101086aeu, 0x10105e7bu); RETCHK(0x10105e80u, 0x10105e7bu); LOADALL;
  /* 10105e80 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e82 jl 0x10105eb2 */ if (LT_) goto L_10105eb2;
  /* 10105e84 call 0x10108b2b */ esp -= 4; M32(esp) = 0x10105e89u; SAVEALL; F_10108b2b(c); ABI_CHECK(0x10108b2bu, 0x10105e84u); RETCHK(0x10105e89u, 0x10105e84u); LOADALL;
  /* 10105e89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e8b jl 0x10105ead */ if (LT_) goto L_10105ead;
  /* 10105e8d call 0x101088f8 */ esp -= 4; M32(esp) = 0x10105e92u; SAVEALL; F_101088f8(c); ABI_CHECK(0x101088f8u, 0x10105e8du); RETCHK(0x10105e92u, 0x10105e8du); LOADALL;
  /* 10105e92 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e94 jl 0x10105ead */ if (LT_) goto L_10105ead;
  /* 10105e96 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105e98 call 0x10107a8f */ esp -= 4; M32(esp) = 0x10105e9du; SAVEALL; F_10107a8f(c); ABI_CHECK(0x10107a8fu, 0x10105e98u); RETCHK(0x10105e9du, 0x10105e98u); LOADALL;
  /* 10105e9d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105e9f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105ea0 jne 0x10105ead */ if (!ZF_) goto L_10105ead;
  /* 10105ea2 inc dword ptr [0x10120ca8] */ { const u32 m_ = (u32)(0x10120ca8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10105ea8 jmp 0x10105f3f */ goto L_10105f3f;
L_10105ead:;
  /* 10105ead call 0x101088ac */ esp -= 4; M32(esp) = 0x10105eb2u; SAVEALL; F_101088ac(c); ABI_CHECK(0x101088acu, 0x10105eadu); RETCHK(0x10105eb2u, 0x10105eadu); LOADALL;
L_10105eb2:;
  /* 10105eb2 call 0x10106de2 */ esp -= 4; M32(esp) = 0x10105eb7u; SAVEALL; F_10106de2(c); ABI_CHECK(0x10106de2u, 0x10105eb2u); RETCHK(0x10105eb7u, 0x10105eb2u); LOADALL;
  /* 10105eb7 jmp 0x10105e57 */ goto L_10105e57;
L_10105eb9:;
  /* 10105eb9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105ebb jne 0x10105ee9 */ if (!ZF_) goto L_10105ee9;
  /* 10105ebd cmp dword ptr [0x10120ca8], eax */ { const u32 m_ = (u32)(0x10120ca8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105ec3 jle 0x10105f2e */ if ((ZF_|LT_)) goto L_10105f2e;
  /* 10105ec5 dec dword ptr [0x10120ca8] */ { const u32 m_ = (u32)(0x10120ca8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10105ecb cmp dword ptr [0x10120e68], eax */ { const u32 m_ = (u32)(0x10120e68u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105ed1 jne 0x10105ed8 */ if (!ZF_) goto L_10105ed8;
  /* 10105ed3 call 0x10107bcd */ esp -= 4; M32(esp) = 0x10105ed8u; SAVEALL; F_10107bcd(c); ABI_CHECK(0x10107bcdu, 0x10105ed3u); RETCHK(0x10105ed8u, 0x10105ed3u); LOADALL;
L_10105ed8:;
  /* 10105ed8 call 0x101088ac */ esp -= 4; M32(esp) = 0x10105eddu; SAVEALL; F_101088ac(c); ABI_CHECK(0x101088acu, 0x10105ed8u); RETCHK(0x10105eddu, 0x10105ed8u); LOADALL;
  /* 10105edd call 0x10106de2 */ esp -= 4; M32(esp) = 0x10105ee2u; SAVEALL; F_10106de2(c); ABI_CHECK(0x10106de2u, 0x10105eddu); RETCHK(0x10105ee2u, 0x10105eddu); LOADALL;
  /* 10105ee2 call 0x10108de2 */ esp -= 4; M32(esp) = 0x10105ee7u; SAVEALL; F_10108de2(c); ABI_CHECK(0x10108de2u, 0x10105ee2u); RETCHK(0x10105ee7u, 0x10105ee2u); LOADALL;
  /* 10105ee7 jmp 0x10105f3f */ goto L_10105f3f;
L_10105ee9:;
  /* 10105ee9 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105eec jne 0x10105f32 */ if (!ZF_) goto L_10105f32;
  /* 10105eee push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 10105ef3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10105ef5 call 0x101085f3 */ esp -= 4; M32(esp) = 0x10105efau; SAVEALL; F_101085f3(c); ABI_CHECK(0x101085f3u, 0x10105ef5u); RETCHK(0x10105efau, 0x10105ef5u); LOADALL;
  /* 10105efa mov esi, eax */ { esi = (u32)(eax); }
  /* 10105efc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105efe pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105eff pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105f00 je 0x10105f2e */ if (ZF_) goto L_10105f2e;
  /* 10105f02 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105f03 push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105f09 call dword ptr [0x10120cc8] */ { const u32 m_ = (u32)(0x10120cc8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10105f0fu; SAVEALL; call_ind(c, t_); RETCHK(0x10105f0fu, 0x10105f09u); LOADALL; }
  /* 10105f0f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105f11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105f12 je 0x10105f28 */ if (ZF_) goto L_10105f28;
  /* 10105f14 call 0x10106dff */ esp -= 4; M32(esp) = 0x10105f19u; SAVEALL; F_10106dff(c); ABI_CHECK(0x10106dffu, 0x10105f14u); RETCHK(0x10105f19u, 0x10105f14u); LOADALL;
  /* 10105f19 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10105f1a call dword ptr [0x1010d018] */ { const u32 m_ = (u32)(0x1010d018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10105f20u; SAVEALL; call_ind(c, t_); RETCHK(0x10105f20u, 0x10105f1au); LOADALL; }
  /* 10105f20 or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10105f24 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10105f26 jmp 0x10105f3f */ goto L_10105f3f;
L_10105f28:;
  /* 10105f28 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10105f2du; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10105f28u); RETCHK(0x10105f2du, 0x10105f28u); LOADALL;
  /* 10105f2d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105f2e:;
  /* 10105f2e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105f30 jmp 0x10105f42 */ goto L_10105f42;
L_10105f32:;
  /* 10105f32 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f35 jne 0x10105f3f */ if (!ZF_) goto L_10105f3f;
  /* 10105f37 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10105f39 call 0x10106fca */ esp -= 4; M32(esp) = 0x10105f3eu; SAVEALL; F_10106fca(c); ABI_CHECK(0x10106fcau, 0x10105f39u); RETCHK(0x10105f3eu, 0x10105f39u); LOADALL;
  /* 10105f3e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10105f3f:;
  /* 10105f3f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105f41 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10105f42:;
  /* 10105f42 lea esp, [ebp - 4] */ esp = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10105f45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10105f46 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10105f47 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10105f4a(CPU *c) {
  NATIVE_HOOK(0x10105f4au) REGS; LOADALL;
L_10105f4a:;
  /* 10105f4a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10105f4c push 0x1010d370 */ { u32 v_ = 0x1010d370u; esp -= 4; M32(esp) = v_; }
  /* 10105f51 call 0x1010734c */ esp -= 4; M32(esp) = 0x10105f56u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10105f51u); RETCHK(0x10105f56u, 0x10105f51u); LOADALL;
  /* 10105f56 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10105f58 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10105f59 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105f5c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10105f5f xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10105f61 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f63 jne 0x10105f71 */ if (!ZF_) goto L_10105f71;
  /* 10105f65 cmp dword ptr [0x10120ca8], edi */ { const u32 m_ = (u32)(0x10120ca8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f6b je 0x10106024 */ if (ZF_) goto L_10106024;
L_10105f71:;
  /* 10105f71 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10105f74 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f76 je 0x10105f7d */ if (ZF_) goto L_10105f7d;
  /* 10105f78 cmp esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f7b jne 0x10105fae */ if (!ZF_) goto L_10105fae;
L_10105f7d:;
  /* 10105f7d mov eax, dword ptr [0x10122518] */ { const u32 m_ = (u32)(0x10122518u); eax = (u32)(M32(m_)); }
  /* 10105f82 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f84 je 0x10105f92 */ if (ZF_) goto L_10105f92;
  /* 10105f86 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105f89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105f8a push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105f8d call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10105f8fu; SAVEALL; call_ind(c, t_); RETCHK(0x10105f8fu, 0x10105f8du); LOADALL; }
  /* 10105f8f mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10105f92:;
  /* 10105f92 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105f95 je 0x10106020 */ if (ZF_) goto L_10106020;
  /* 10105f9b push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105f9e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105f9f push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105fa2 call 0x10105dc9 */ esp -= 4; M32(esp) = 0x10105fa7u; SAVEALL; F_10105dc9(c); ABI_CHECK(0x10105dc9u, 0x10105fa2u); RETCHK(0x10105fa7u, 0x10105fa2u); LOADALL;
  /* 10105fa7 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105faa cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fac je 0x10106020 */ if (ZF_) goto L_10106020;
L_10105fae:;
  /* 10105fae mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10105fb1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105fb2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105fb3 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105fb6 call 0x101017d0 */ esp -= 4; M32(esp) = 0x10105fbbu; SAVEALL; F_101017d0(c); ABI_CHECK(0x101017d0u, 0x10105fb6u); RETCHK(0x10105fbbu, 0x10105fb6u); LOADALL;
  /* 10105fbb mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10105fbe cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fc1 jne 0x10105fd1 */ if (!ZF_) goto L_10105fd1;
  /* 10105fc3 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fc5 jne 0x10105fd1 */ if (!ZF_) goto L_10105fd1;
  /* 10105fc7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105fc8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10105fc9 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105fcc call 0x10105dc9 */ esp -= 4; M32(esp) = 0x10105fd1u; SAVEALL; F_10105dc9(c); ABI_CHECK(0x10105dc9u, 0x10105fccu); RETCHK(0x10105fd1u, 0x10105fccu); LOADALL;
L_10105fd1:;
  /* 10105fd1 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fd3 je 0x10105fda */ if (ZF_) goto L_10105fda;
  /* 10105fd5 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fd8 jne 0x10106003 */ if (!ZF_) goto L_10106003;
L_10105fda:;
  /* 10105fda push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105fdb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105fdc push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105fdf call 0x10105dc9 */ esp -= 4; M32(esp) = 0x10105fe4u; SAVEALL; F_10105dc9(c); ABI_CHECK(0x10105dc9u, 0x10105fdfu); RETCHK(0x10105fe4u, 0x10105fdfu); LOADALL;
  /* 10105fe4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10105fe6 jne 0x10105feb */ if (!ZF_) goto L_10105feb;
  /* 10105fe8 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
L_10105feb:;
  /* 10105feb cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105fee je 0x10106003 */ if (ZF_) goto L_10106003;
  /* 10105ff0 mov eax, dword ptr [0x10122518] */ { const u32 m_ = (u32)(0x10122518u); eax = (u32)(M32(m_)); }
  /* 10105ff5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10105ff7 je 0x10106003 */ if (ZF_) goto L_10106003;
  /* 10105ff9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10105ffa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10105ffb push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10105ffe call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10106000u; SAVEALL; call_ind(c, t_); RETCHK(0x10106000u, 0x10105ffeu); LOADALL; }
  /* 10106000 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10106003:;
  /* 10106003 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106007 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 1010600a jmp 0x10106026 */ goto L_10106026;
L_10106020:;
  /* 10106020 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10106024:;
  /* 10106024 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10106026:;
  /* 10106026 call 0x10107387 */ esp -= 4; M32(esp) = 0x1010602bu; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106026u); RETCHK(0x1010602bu, 0x10106026u); LOADALL;
  /* 1010602b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1010600c(CPU *c) {
  NATIVE_HOOK(0x1010600cu) REGS; LOADALL;
L_1010600c:;
  /* 1010600c mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 1010600f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10106011 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10106013 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106014 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106015 call 0x10108fc5 */ esp -= 4; M32(esp) = 0x1010601au; SAVEALL; F_10108fc5(c); ABI_CHECK(0x10108fc5u, 0x10106015u); RETCHK(0x1010601au, 0x10106015u); LOADALL;
  /* 1010601a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010601b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010601c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010601d(CPU *c) {
  NATIVE_HOOK(0x1010601du) REGS; LOADALL;
L_1010601d:;
  /* 1010601d mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10106020 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106024 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106026 call 0x10107387 */ esp -= 4; M32(esp) = 0x1010602bu; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106026u); RETCHK(0x1010602bu, 0x10106026u); LOADALL;
  /* 1010602b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1010602e(CPU *c) {
  NATIVE_HOOK(0x1010602eu) REGS; LOADALL;
L_1010602e:;
  /* 1010602e mov eax, dword ptr [0x10120cb4] */ { const u32 m_ = (u32)(0x10120cb4u); eax = (u32)(M32(m_)); }
  /* 10106033 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106036 je 0x10106045 */ if (ZF_) goto L_10106045;
  /* 10106038 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010603a jne 0x1010604a */ if (!ZF_) goto L_1010604a;
  /* 1010603c cmp dword ptr [0x10120cb8], 1 */ { const u32 m_ = (u32)(0x10120cb8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106043 jne 0x1010604a */ if (!ZF_) goto L_1010604a;
L_10106045:;
  /* 10106045 call 0x10109157 */ esp -= 4; M32(esp) = 0x1010604au; SAVEALL; F_10109157(c); ABI_CHECK(0x10109157u, 0x10106045u); RETCHK(0x1010604au, 0x10106045u); LOADALL;
L_1010604a:;
  /* 1010604a push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010604e call 0x10108fe0 */ esp -= 4; M32(esp) = 0x10106053u; SAVEALL; F_10108fe0(c); ABI_CHECK(0x10108fe0u, 0x1010604eu); RETCHK(0x10106053u, 0x1010604eu); LOADALL;
  /* 10106053 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 10106058 call dword ptr [0x1011011c] */ { const u32 m_ = (u32)(0x1011011cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010605eu; SAVEALL; call_ind(c, t_); RETCHK(0x1010605eu, 0x10106058u); LOADALL; }
  /* 1010605e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010605f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106060 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106061(CPU *c) {
  NATIVE_HOOK(0x10106061u) REGS; LOADALL;
L_10106061:;
  /* 10106061 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10106063 push 0x1010d380 */ { u32 v_ = 0x1010d380u; esp -= 4; M32(esp) = v_; }
  /* 10106068 call 0x1010734c */ esp -= 4; M32(esp) = 0x1010606du; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10106068u); RETCHK(0x1010606du, 0x10106068u); LOADALL;
  /* 1010606d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106070 cmp dword ptr [0x101223e0], 3 */ { const u32 m_ = (u32)(0x101223e0u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106077 jne 0x101060a7 */ if (!ZF_) goto L_101060a7;
  /* 10106079 cmp esi, dword ptr [0x101223cc] */ { const u32 m_ = (u32)(0x101223ccu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010607f ja 0x101060a7 */ if (!(CF_|ZF_)) goto L_101060a7;
  /* 10106081 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10106083 call 0x101077cb */ esp -= 4; M32(esp) = 0x10106088u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10106083u); RETCHK(0x10106088u, 0x10106083u); LOADALL;
  /* 10106088 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106089 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010608d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010608e call 0x101099b7 */ esp -= 4; M32(esp) = 0x10106093u; SAVEALL; F_101099b7(c); ABI_CHECK(0x101099b7u, 0x1010608eu); RETCHK(0x10106093u, 0x1010608eu); LOADALL;
  /* 10106093 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106094 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10106097 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010609b call 0x101060d3 */ esp -= 4; M32(esp) = 0x101060a0u; SAVEALL; F_101060d3(c); ABI_CHECK(0x101060d3u, 0x1010609bu); RETCHK(0x101060a0u, 0x1010609bu); LOADALL;
  /* 101060a0 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101060a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101060a5 jne 0x101060ca */ if (!ZF_) goto L_101060ca;
L_101060a7:;
  /* 101060a7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101060a9 jne 0x101060ac */ if (!ZF_) goto L_101060ac;
  /* 101060ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_101060ac:;
  /* 101060ac cmp dword ptr [0x101223e0], 1 */ { const u32 m_ = (u32)(0x101223e0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101060b3 je 0x101060bb */ if (ZF_) goto L_101060bb;
  /* 101060b5 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101060b8 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_101060bb:;
  /* 101060bb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101060bc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 101060be push dword ptr [0x101223dc] */ { const u32 m_ = (u32)(0x101223dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101060c4 call dword ptr [0x1010d024] */ { const u32 m_ = (u32)(0x1010d024u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101060cau; SAVEALL; call_ind(c, t_); RETCHK(0x101060cau, 0x101060c4u); LOADALL; }
L_101060ca:;
  /* 101060ca call 0x10107387 */ esp -= 4; M32(esp) = 0x101060cfu; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x101060cau); RETCHK(0x101060cfu, 0x101060cau); LOADALL;
  /* 101060cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101060d0(CPU *c) {
  NATIVE_HOOK(0x101060d0u) REGS; LOADALL;
L_101060d0:;
  /* 101060d0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101060d3 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101060d5 call 0x10107716 */ esp -= 4; M32(esp) = 0x101060dau; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101060d5u); RETCHK(0x101060dau, 0x101060d5u); LOADALL;
  /* 101060da pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101060db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101060d3(CPU *c) {
  NATIVE_HOOK(0x101060d3u) REGS; LOADALL;
L_101060d3:;
  /* 101060d3 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101060d5 call 0x10107716 */ esp -= 4; M32(esp) = 0x101060dau; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101060d5u); RETCHK(0x101060dau, 0x101060d5u); LOADALL;
  /* 101060da pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101060db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101060dc(CPU *c) {
  NATIVE_HOOK(0x101060dcu) REGS; LOADALL;
L_101060dc:;
  /* 101060dc cmp dword ptr [esp + 4], -0x20 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101060e1 ja 0x10106105 */ if (!(CF_|ZF_)) goto L_10106105;
L_101060e3:;
  /* 101060e3 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101060e7 call 0x10106061 */ esp -= 4; M32(esp) = 0x101060ecu; SAVEALL; F_10106061(c); ABI_CHECK(0x10106061u, 0x101060e7u); RETCHK(0x101060ecu, 0x101060e7u); LOADALL;
  /* 101060ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101060ee pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101060ef jne 0x10106107 */ if (!ZF_) goto L_10106107;
  /* 101060f1 cmp dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101060f5 je 0x10106107 */ if (ZF_) goto L_10106107;
  /* 101060f7 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101060fb call 0x1010611a */ esp -= 4; M32(esp) = 0x10106100u; SAVEALL; F_1010611a(c); ABI_CHECK(0x1010611au, 0x101060fbu); RETCHK(0x10106100u, 0x101060fbu); LOADALL;
  /* 10106100 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106102 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106103 jne 0x101060e3 */ if (!ZF_) goto L_101060e3;
L_10106105:;
  /* 10106105 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10106107:;
  /* 10106107 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106108(CPU *c) {
  NATIVE_HOOK(0x10106108u) REGS; LOADALL;
L_10106108:;
  /* 10106108 push dword ptr [0x10120f80] */ { const u32 m_ = (u32)(0x10120f80u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010610e push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106112 call 0x101060dc */ esp -= 4; M32(esp) = 0x10106117u; SAVEALL; F_101060dc(c); ABI_CHECK(0x101060dcu, 0x10106112u); RETCHK(0x10106117u, 0x10106112u); LOADALL;
  /* 10106117 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106118 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106119 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010611a(CPU *c) {
  NATIVE_HOOK(0x1010611au) REGS; LOADALL;
L_1010611a:;
  /* 1010611a mov eax, dword ptr [0x10120cbc] */ { const u32 m_ = (u32)(0x10120cbcu); eax = (u32)(M32(m_)); }
  /* 1010611f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106121 je 0x10106132 */ if (ZF_) goto L_10106132;
  /* 10106123 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106127 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10106129u; SAVEALL; call_ind(c, t_); RETCHK(0x10106129u, 0x10106127u); LOADALL; }
  /* 10106129 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010612b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010612c je 0x10106132 */ if (ZF_) goto L_10106132;
  /* 1010612e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106130 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106131 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106132:;
  /* 10106132 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106134 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106140(CPU *c) {
  NATIVE_HOOK(0x10106140u) REGS; LOADALL;
L_10106140:;
  /* 10106140 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10106144 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010614a je 0x10106170 */ if (ZF_) goto L_10106170;
L_1010614c:;
  /* 1010614c mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010614e add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10106151 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106153 je 0x101061a3 */ if (ZF_) goto L_101061a3;
  /* 10106155 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010615b jne 0x1010614c */ if (!ZF_) goto L_1010614c;
  /* 1010615d add eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106162 lea esp, [esp] */ esp = (u32)((u32)(esp));
  /* 10106169 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10106170:;
  /* 10106170 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10106172 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10106177 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10106179 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010617c xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010617e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10106181 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106186 je 0x10106170 */ if (ZF_) goto L_10106170;
  /* 10106188 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1010618b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010618d je 0x101061c1 */ if (ZF_) goto L_101061c1;
  /* 1010618f test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106191 je 0x101061b7 */ if (ZF_) goto L_101061b7;
  /* 10106193 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106198 je 0x101061ad */ if (ZF_) goto L_101061ad;
  /* 1010619a test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010619f je 0x101061a3 */ if (ZF_) goto L_101061a3;
  /* 101061a1 jmp 0x10106170 */ goto L_10106170;
L_101061a3:;
  /* 101061a3 lea eax, [ecx - 1] */ eax = (u32)((u32)(ecx + 0xffffffffu));
  /* 101061a6 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101061aa sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101061ad:;
  /* 101061ad lea eax, [ecx - 2] */ eax = (u32)((u32)(ecx + 0xfffffffeu));
  /* 101061b0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101061b4 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101061b7:;
  /* 101061b7 lea eax, [ecx - 3] */ eax = (u32)((u32)(ecx + 0xfffffffdu));
  /* 101061ba mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101061be sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101061c1:;
  /* 101061c1 lea eax, [ecx - 4] */ eax = (u32)((u32)(ecx + 0xfffffffcu));
  /* 101061c4 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101061c8 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101061d0(CPU *c) {
  NATIVE_HOOK(0x101061d0u) REGS; LOADALL;
L_101061d0:;
  /* 101061d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101061d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101061d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101061d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101061d5 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 101061d8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 101061db mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 101061de mov eax, ecx */ { eax = (u32)(ecx); }
  /* 101061e0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 101061e2 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101061e4 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101061e6 jbe 0x101061f0 */ if ((CF_|ZF_)) goto L_101061f0;
  /* 101061e8 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101061ea jb 0x1010636c */ if (CF_) goto L_1010636c;
L_101061f0:;
  /* 101061f0 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101061f6 jne 0x1010620c */ if (!ZF_) goto L_1010620c;
  /* 101061f8 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101061fb and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101061fe cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106201 jb 0x1010622c */ if (CF_) goto L_1010622c;
  /* 10106203 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10106205 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010620c:;
  /* 1010620c mov eax, edi */ { eax = (u32)(edi); }
  /* 1010620e mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 10106213 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10106216 jb 0x10106224 */ if (CF_) goto L_10106224;
  /* 10106218 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010621b add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010621d jmp dword ptr [eax*4 + 0x10106230] */ { const u32 m_ = (u32)(eax * 4u + 0x10106230u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10106224:;
  /* 10106224 jmp dword ptr [ecx*4 + 0x1010632c] */ { const u32 m_ = (u32)(ecx * 4u + 0x1010632cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1010622c:;
  /* 1010622c jmp dword ptr [ecx*4 + 0x101062b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x101062b0u); u32 t_ = M32(m_); switch (t_) { case 0x101062d0u: goto L_101062d0; case 0x101062d8u: goto L_101062d8; case 0x101062e0u: goto L_101062e0; case 0x101062e8u: goto L_101062e8; case 0x101062f0u: goto L_101062f0; case 0x101062f8u: goto L_101062f8; case 0x10106300u: goto L_10106300; case 0x10106313u: goto L_10106313; default: SAVEALL; call_ind(c, t_); return; } }
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010636c:;
  /* 1010636c lea esi, [ecx + esi - 4] */ esi = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 10106370 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 10106374 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010637a jne 0x101063a0 */ if (!ZF_) goto L_101063a0;
  /* 1010637c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010637f and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10106382 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106385 jb 0x10106394 */ if (CF_) goto L_10106394;
  /* 10106387 std */ c->df = 1;
  /* 10106388 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010638a cld */ c->df = 0;
  /* 1010638b jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_10106394:;
  /* 10106394 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10106396 jmp dword ptr [ecx*4 + 0x10106468] */ { const u32 m_ = (u32)(ecx * 4u + 0x10106468u); u32 t_ = M32(m_); switch (t_) { case 0x101064afu: goto L_101064af; default: SAVEALL; call_ind(c, t_); return; } }
L_101063a0:;
  /* 101063a0 mov eax, edi */ { eax = (u32)(edi); }
  /* 101063a2 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 101063a7 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101063aa jb 0x101063b8 */ if (CF_) goto L_101063b8;
  /* 101063ac and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101063af sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101063b1 jmp dword ptr [eax*4 + 0x101063bc] */ { const u32 m_ = (u32)(eax * 4u + 0x101063bcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_101063b8:;
  /* 101063b8 jmp dword ptr [ecx*4 + 0x101064b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106230(CPU *c) {
  NATIVE_HOOK(0x10106230u) REGS; LOADALL;
L_10106230:;
  /* 10106230 bound edx, qword ptr [eax] */ TRAP(0x10106230u, "bound");
}

void F_10106240(CPU *c) {
  NATIVE_HOOK(0x10106240u) REGS; LOADALL;
  goto L_10106240;
L_1010622c:;
  /* 1010622c jmp dword ptr [ecx*4 + 0x101062b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x101062b0u); u32 t_ = M32(m_); switch (t_) { case 0x101062d0u: goto L_101062d0; case 0x101062d8u: goto L_101062d8; case 0x101062e0u: goto L_101062e0; case 0x101062e8u: goto L_101062e8; case 0x101062f0u: goto L_101062f0; case 0x101062f8u: goto L_101062f8; case 0x10106300u: goto L_10106300; case 0x10106313u: goto L_10106313; default: SAVEALL; call_ind(c, t_); return; } }
L_10106240:;
  /* 10106240 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10106242 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106244 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106246 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106249 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010624c mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010624f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10106252 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106255 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106258 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010625b cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010625e jb 0x1010622c */ if (CF_) goto L_1010622c;
  /* 10106260 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10106262 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010626c(CPU *c) {
  NATIVE_HOOK(0x1010626cu) REGS; LOADALL;
  goto L_1010626c;
L_1010622c:;
  /* 1010622c jmp dword ptr [ecx*4 + 0x101062b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x101062b0u); u32 t_ = M32(m_); switch (t_) { case 0x101062d0u: goto L_101062d0; case 0x101062d8u: goto L_101062d8; case 0x101062e0u: goto L_101062e0; case 0x101062e8u: goto L_101062e8; case 0x101062f0u: goto L_101062f0; case 0x101062f8u: goto L_101062f8; case 0x10106300u: goto L_10106300; case 0x10106313u: goto L_10106313; default: SAVEALL; call_ind(c, t_); return; } }
L_1010626c:;
  /* 1010626c and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1010626e mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106270 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106272 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106275 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10106278 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010627b add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010627e add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106281 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106284 jb 0x1010622c */ if (CF_) goto L_1010622c;
  /* 10106286 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10106288 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106290(CPU *c) {
  NATIVE_HOOK(0x10106290u) REGS; LOADALL;
  goto L_10106290;
L_1010622c:;
  /* 1010622c jmp dword ptr [ecx*4 + 0x101062b0] */ { const u32 m_ = (u32)(ecx * 4u + 0x101062b0u); u32 t_ = M32(m_); switch (t_) { case 0x101062d0u: goto L_101062d0; case 0x101062d8u: goto L_101062d8; case 0x101062e0u: goto L_101062e0; case 0x101062e8u: goto L_101062e8; case 0x101062f0u: goto L_101062f0; case 0x101062f8u: goto L_101062f8; case 0x10106300u: goto L_10106300; case 0x10106313u: goto L_10106313; default: SAVEALL; call_ind(c, t_); return; } }
L_10106290:;
  /* 10106290 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10106292 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106294 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106296 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106299 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010629c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010629f cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101062a2 jb 0x1010622c */ if (CF_) goto L_1010622c;
  /* 101062a4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 101062a6 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062b0(CPU *c) {
  NATIVE_HOOK(0x101062b0u) REGS; LOADALL;
L_101062b0:;
  /* 101062b0 adc esp, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = esp, b_ = M32(m_); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esp = (u32)(r_); }
  /* 101062b3 adc byte ptr [eax], al */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101062b5 arpl word ptr [eax], dx */ TRAP(0x101062b5u, "arpl");
}

void F_101062d0(CPU *c) {
  NATIVE_HOOK(0x101062d0u) REGS; LOADALL;
L_101062d0:;
  /* 101062d0 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101062d4 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062d8(CPU *c) {
  NATIVE_HOOK(0x101062d8u) REGS; LOADALL;
L_101062d8:;
  /* 101062d8 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 101062dc mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062e0(CPU *c) {
  NATIVE_HOOK(0x101062e0u) REGS; LOADALL;
L_101062e0:;
  /* 101062e0 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 101062e4 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062e8(CPU *c) {
  NATIVE_HOOK(0x101062e8u) REGS; LOADALL;
L_101062e8:;
  /* 101062e8 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 101062ec mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062f0(CPU *c) {
  NATIVE_HOOK(0x101062f0u) REGS; LOADALL;
L_101062f0:;
  /* 101062f0 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101062f4 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101062f8(CPU *c) {
  NATIVE_HOOK(0x101062f8u) REGS; LOADALL;
L_101062f8:;
  /* 101062f8 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 101062fc mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106300(CPU *c) {
  NATIVE_HOOK(0x10106300u) REGS; LOADALL;
L_10106300:;
  /* 10106300 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106304 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106308 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1010630f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106311 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106313(CPU *c) {
  NATIVE_HOOK(0x10106313u) REGS; LOADALL;
L_10106313:;
  /* 10106313 jmp dword ptr [edx*4 + 0x1010631c] */ { const u32 m_ = (u32)(edx * 4u + 0x1010631cu); u32 t_ = M32(m_); switch (t_) { case 0x1010632cu: goto L_1010632c; case 0x10106334u: goto L_10106334; case 0x10106340u: goto L_10106340; case 0x10106354u: goto L_10106354; default: SAVEALL; call_ind(c, t_); return; } }
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010631c(CPU *c) {
  NATIVE_HOOK(0x1010631cu) REGS; LOADALL;
L_1010631c:;
  /* 1010631c sub al, 0x63 */ { u32 a_ = (eax & 0xffu), b_ = 0x63u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1010631e adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10106320 xor al, 0x63 */ { u32 a_ = (eax & 0xffu), b_ = 0x63u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10106322 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10106324 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106325 arpl word ptr [eax], dx */ TRAP(0x10106325u, "arpl");
}

void F_1010632c(CPU *c) {
  NATIVE_HOOK(0x1010632cu) REGS; LOADALL;
L_1010632c:;
  /* 1010632c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010632f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106330 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106331 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106334(CPU *c) {
  NATIVE_HOOK(0x10106334u) REGS; LOADALL;
L_10106334:;
  /* 10106334 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106336 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106338 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010633b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010633c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010633d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010633e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106340(CPU *c) {
  NATIVE_HOOK(0x10106340u) REGS; LOADALL;
L_10106340:;
  /* 10106340 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106342 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106344 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106347 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010634a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010634d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010634e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010634f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106354(CPU *c) {
  NATIVE_HOOK(0x10106354u) REGS; LOADALL;
L_10106354:;
  /* 10106354 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106356 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106358 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010635b mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010635e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106361 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106364 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106368 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106369 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010636a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101063bc(CPU *c) {
  NATIVE_HOOK(0x101063bcu) REGS; LOADALL;
L_101063bc:;
  /* 101063bc adc byte ptr fs:[eax], dl */ { const u32 m_ = (u32)(eax + c->fs_base); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101063bf nop */ ;
  /* 101063c0 int3 */ TRAP(0x101063c0u, "int3");
}

void F_101063cc(CPU *c) {
  NATIVE_HOOK(0x101063ccu) REGS; LOADALL;
  goto L_101063cc;
L_10106394:;
  /* 10106394 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10106396 jmp dword ptr [ecx*4 + 0x10106468] */ { const u32 m_ = (u32)(ecx * 4u + 0x10106468u); u32 t_ = M32(m_); switch (t_) { case 0x101064afu: goto L_101064af; default: SAVEALL; call_ind(c, t_); return; } }
L_101063cc:;
  /* 101063cc mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101063cf and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101063d1 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101063d4 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101063d7 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101063da sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101063dd cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101063e0 jb 0x10106394 */ if (CF_) goto L_10106394;
  /* 101063e2 std */ c->df = 1;
  /* 101063e3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 101063e5 cld */ c->df = 0;
  /* 101063e6 jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101063f0(CPU *c) {
  NATIVE_HOOK(0x101063f0u) REGS; LOADALL;
  goto L_101063f0;
L_10106394:;
  /* 10106394 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10106396 jmp dword ptr [ecx*4 + 0x10106468] */ { const u32 m_ = (u32)(ecx * 4u + 0x10106468u); u32 t_ = M32(m_); switch (t_) { case 0x101064afu: goto L_101064af; default: SAVEALL; call_ind(c, t_); return; } }
L_101063f0:;
  /* 101063f0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101063f3 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101063f5 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101063f8 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101063fb shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 101063fe mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106401 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106404 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106407 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010640a jb 0x10106394 */ if (CF_) goto L_10106394;
  /* 1010640c std */ c->df = 1;
  /* 1010640d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1010640f cld */ c->df = 0;
  /* 10106410 jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106418(CPU *c) {
  NATIVE_HOOK(0x10106418u) REGS; LOADALL;
  goto L_10106418;
L_10106394:;
  /* 10106394 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10106396 jmp dword ptr [ecx*4 + 0x10106468] */ { const u32 m_ = (u32)(ecx * 4u + 0x10106468u); u32 t_ = M32(m_); switch (t_) { case 0x101064afu: goto L_101064af; default: SAVEALL; call_ind(c, t_); return; } }
L_10106418:;
  /* 10106418 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010641b and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1010641d mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106420 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106423 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106426 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106429 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1010642c mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010642f sub esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106432 sub edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106435 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106438 jb 0x10106394 */ if (CF_) goto L_10106394;
  /* 1010643e std */ c->df = 1;
  /* 1010643f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10106441 cld */ c->df = 0;
  /* 10106442 jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106468(CPU *c) {
  NATIVE_HOOK(0x10106468u) REGS; LOADALL;
L_10106468:;
  /* 10106468 scasd eax, dword ptr es:[edi] */ { u32 st_ = c->df ? (u32)-4 : 4u; u32 a_ = eax, b_ = M32(edi); edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffffffffu, 4); }
  /* 10106469 adc byte ptr fs:[eax], dl */ { const u32 m_ = (u32)(eax + c->fs_base); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1010646c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10106470 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10106474 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10106478 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1010647c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106480 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010646c(CPU *c) {
  NATIVE_HOOK(0x1010646cu) REGS; LOADALL;
L_1010646c:;
  /* 1010646c mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10106470 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10106474 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10106478 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1010647c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106480 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106474(CPU *c) {
  NATIVE_HOOK(0x10106474u) REGS; LOADALL;
L_10106474:;
  /* 10106474 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 10106478 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 1010647c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106480 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010647c(CPU *c) {
  NATIVE_HOOK(0x1010647cu) REGS; LOADALL;
L_1010647c:;
  /* 1010647c mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106480 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106484(CPU *c) {
  NATIVE_HOOK(0x10106484u) REGS; LOADALL;
L_10106484:;
  /* 10106484 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 10106488 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010648c(CPU *c) {
  NATIVE_HOOK(0x1010648cu) REGS; LOADALL;
L_1010648c:;
  /* 1010648c mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106490 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106494(CPU *c) {
  NATIVE_HOOK(0x10106494u) REGS; LOADALL;
L_10106494:;
  /* 10106494 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106498 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010649c(CPU *c) {
  NATIVE_HOOK(0x1010649cu) REGS; LOADALL;
L_1010649c:;
  /* 1010649c mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101064a0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 101064a4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 101064ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101064ad add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064af(CPU *c) {
  NATIVE_HOOK(0x101064afu) REGS; LOADALL;
L_101064af:;
  /* 101064af jmp dword ptr [edx*4 + 0x101064b8] */ { const u32 m_ = (u32)(edx * 4u + 0x101064b8u); u32 t_ = M32(m_); switch (t_) { case 0x101064c8u: goto L_101064c8; case 0x101064d0u: goto L_101064d0; case 0x101064e0u: goto L_101064e0; case 0x101064f4u: goto L_101064f4; default: SAVEALL; call_ind(c, t_); return; } }
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064b8(CPU *c) {
  NATIVE_HOOK(0x101064b8u) REGS; LOADALL;
L_101064b8:;
  /* 101064b8 enter 0x1064, 0x10 */ TRAP(0x101064b8u, "unimpl enter 0x1064, 0x10");
  /* 101064bc shl byte ptr [eax + edx + 0x10], 1 */ { const u32 m_ = (u32)(eax + edx + 0x10u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M8(m_); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); M8(m_) = (u8)(r_); } }
  /* 101064c0 loopne 0x10106526 */ if (--ecx != 0 && !ZF_) goto L_10106526;
  /* 101064c2 adc byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 101064c4 hlt */ TRAP(0x101064c4u, "hlt");
L_10106526:;
  /* 10106526 insb byte ptr es:[edi], dx */ TRAP(0x10106526u, "insb");
}

void F_101064c8(CPU *c) {
  NATIVE_HOOK(0x101064c8u) REGS; LOADALL;
L_101064c8:;
  /* 101064c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064cd leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064d0(CPU *c) {
  NATIVE_HOOK(0x101064d0u) REGS; LOADALL;
L_101064d0:;
  /* 101064d0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064d3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064db leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064e0(CPU *c) {
  NATIVE_HOOK(0x101064e0u) REGS; LOADALL;
L_101064e0:;
  /* 101064e0 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e3 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064e6 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064e9 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064ec mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101064ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101064f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101064f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101064f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101064f4(CPU *c) {
  NATIVE_HOOK(0x101064f4u) REGS; LOADALL;
L_101064f4:;
  /* 101064f4 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064f7 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 101064fa mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101064fd mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106500 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10106503 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10106506 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010650a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010650b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1010650c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106510(CPU *c) {
  NATIVE_HOOK(0x10106510u) REGS; LOADALL;
L_10106510:;
  /* 10106510 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10106512 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106513 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10106519 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010651a mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010651e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10106525 mov dword ptr [esp + 0xc], ebp */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebp); }
  /* 10106529 lea ebp, [esp + 0xc] */ ebp = (u32)((u32)(esp + 0xcu));
  /* 1010652d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010652e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106526(CPU *c) {
  NATIVE_HOOK(0x10106526u) REGS; LOADALL;
L_10106526:;
  /* 10106526 insb byte ptr es:[edi], dx */ TRAP(0x10106526u, "insb");
}

void F_1010652f(CPU *c) {
  NATIVE_HOOK(0x1010652fu) REGS; LOADALL;
L_1010652f:;
  /* 1010652f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106532 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106534 je 0x1010657a */ if (ZF_) goto L_1010657a;
  /* 10106536 lea edx, [eax + 8] */ edx = (u32)((u32)(eax + 0x8u));
  /* 10106539 cmp byte ptr [edx], 0 */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010653c je 0x1010657a */ if (ZF_) goto L_1010657a;
  /* 1010653e mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10106541 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106543 je 0x10106555 */ if (ZF_) goto L_10106555;
  /* 10106545 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10106548 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106549 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010654a call 0x10107800 */ esp -= 4; M32(esp) = 0x1010654fu; SAVEALL; F_10107800(c); ABI_CHECK(0x10107800u, 0x1010654au); RETCHK(0x1010654fu, 0x1010654au); LOADALL;
  /* 1010654f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106551 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106552 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106553 jne 0x10106577 */ if (!ZF_) goto L_10106577;
L_10106555:;
  /* 10106555 test byte ptr [edi], 2 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106558 je 0x1010655f */ if (ZF_) goto L_1010655f;
  /* 1010655a test byte ptr [esi], 8 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010655d je 0x10106577 */ if (ZF_) goto L_10106577;
L_1010655f:;
  /* 1010655f mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106563 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10106565 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106567 je 0x1010656e */ if (ZF_) goto L_1010656e;
  /* 10106569 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010656c je 0x10106577 */ if (ZF_) goto L_10106577;
L_1010656e:;
  /* 1010656e test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106570 je 0x1010657a */ if (ZF_) goto L_1010657a;
  /* 10106572 test byte ptr [esi], 2 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106575 jne 0x1010657a */ if (!ZF_) goto L_1010657a;
L_10106577:;
  /* 10106577 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106579 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010657a:;
  /* 1010657a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010657c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010657d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010657e(CPU *c) {
  NATIVE_HOOK(0x1010657eu) REGS; LOADALL;
L_1010657e:;
  /* 1010657e mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10106580 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106586 je 0x1010658b */ if (ZF_) goto L_1010658b;
  /* 10106588 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010658a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010658b:;
  /* 1010658b call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106590u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010658bu); RETCHK(0x10106590u, 0x1010658bu); LOADALL;
  /* 10106590 and dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106597 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_1010659c(CPU *c) {
  NATIVE_HOOK(0x1010659cu) REGS; LOADALL;
L_1010659c:;
  /* 1010659c push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 1010659e push 0x1010d390 */ { u32 v_ = 0x1010d390u; esp -= 4; M32(esp) = v_; }
  /* 101065a3 call 0x1010734c */ esp -= 4; M32(esp) = 0x101065a8u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x101065a3u); RETCHK(0x101065a8u, 0x101065a3u); LOADALL;
  /* 101065a8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 101065ab mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 101065ae mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 101065b1 call 0x10106e12 */ esp -= 4; M32(esp) = 0x101065b6u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x101065b1u); RETCHK(0x101065b6u, 0x101065b1u); LOADALL;
  /* 101065b6 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101065bb inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101065bd and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101065c1 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
L_101065c4:;
  /* 101065c4 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065c7 je 0x1010662d */ if (ZF_) goto L_1010662d;
  /* 101065c9 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065cc jle 0x101065d3 */ if ((ZF_|LT_)) goto L_101065d3;
  /* 101065ce cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065d1 jl 0x101065d8 */ if (LT_) goto L_101065d8;
L_101065d3:;
  /* 101065d3 call 0x1010711d */ esp -= 4; M32(esp) = 0x101065d8u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x101065d3u); RETCHK(0x101065d8u, 0x101065d3u); LOADALL;
L_101065d8:;
  /* 101065d8 mov eax, esi */ { eax = (u32)(esi); }
  /* 101065da shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101065dd mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101065e0 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101065e2 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 101065e4 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 101065e7 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 101065ee cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065f2 je 0x10106609 */ if (ZF_) goto L_10106609;
  /* 101065f4 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 101065f7 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 101065fc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101065fd mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10106600 push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106604 call 0x10107150 */ esp -= 4; M32(esp) = 0x10106609u; SAVEALL; F_10107150(c); ABI_CHECK(0x10107150u, 0x10106604u); RETCHK(0x10106609u, 0x10106604u); LOADALL;
L_10106609:;
  /* 10106609 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010660d jmp 0x10106628 */ goto L_10106628;
L_10106628:;
  /* 10106628 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 1010662b jmp 0x101065c4 */ goto L_101065c4;
L_1010662d:;
  /* 1010662d or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106631 call 0x1010664f */ esp -= 4; M32(esp) = 0x10106636u; SAVEALL; F_1010664f(c); ABI_CHECK(0x1010664fu, 0x10106631u); RETCHK(0x10106636u, 0x10106631u); LOADALL;
  /* 10106636 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106639 je 0x10106640 */ if (ZF_) goto L_10106640;
  /* 1010663b call 0x1010711d */ esp -= 4; M32(esp) = 0x10106640u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x1010663bu); RETCHK(0x10106640u, 0x1010663bu); LOADALL;
L_10106640:;
  /* 10106640 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10106643 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106648u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106643u); RETCHK(0x10106648u, 0x10106643u); LOADALL;
  /* 10106648 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010660f(CPU *c) {
  NATIVE_HOOK(0x1010660fu) REGS; LOADALL;
L_1010660f:;
  /* 1010660f mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10106612 call 0x1010657e */ esp -= 4; M32(esp) = 0x10106617u; SAVEALL; F_1010657e(c); ABI_CHECK(0x1010657eu, 0x10106612u); RETCHK(0x10106617u, 0x10106612u); LOADALL;
  /* 10106617 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106618(CPU *c) {
  NATIVE_HOOK(0x10106618u) REGS; LOADALL;
  goto L_10106618;
L_101065c4:;
  /* 101065c4 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065c7 je 0x1010662d */ if (ZF_) goto L_1010662d;
  /* 101065c9 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065cc jle 0x101065d3 */ if ((ZF_|LT_)) goto L_101065d3;
  /* 101065ce cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065d1 jl 0x101065d8 */ if (LT_) goto L_101065d8;
L_101065d3:;
  /* 101065d3 call 0x1010711d */ esp -= 4; M32(esp) = 0x101065d8u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x101065d3u); RETCHK(0x101065d8u, 0x101065d3u); LOADALL;
L_101065d8:;
  /* 101065d8 mov eax, esi */ { eax = (u32)(esi); }
  /* 101065da shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101065dd mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101065e0 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101065e2 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 101065e4 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 101065e7 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 101065ee cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101065f2 je 0x10106609 */ if (ZF_) goto L_10106609;
  /* 101065f4 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 101065f7 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 101065fc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101065fd mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10106600 push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106604 call 0x10107150 */ esp -= 4; M32(esp) = 0x10106609u; SAVEALL; F_10107150(c); ABI_CHECK(0x10107150u, 0x10106604u); RETCHK(0x10106609u, 0x10106604u); LOADALL;
L_10106609:;
  /* 10106609 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010660d jmp 0x10106628 */ goto L_10106628;
L_10106618:;
  /* 10106618 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1010661b and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010661f mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10106622 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10106625 mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
L_10106628:;
  /* 10106628 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 1010662b jmp 0x101065c4 */ goto L_101065c4;
L_1010662d:;
  /* 1010662d or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106631 call 0x1010664f */ esp -= 4; M32(esp) = 0x10106636u; SAVEALL; F_1010664f(c); ABI_CHECK(0x1010664fu, 0x10106631u); RETCHK(0x10106636u, 0x10106631u); LOADALL;
  /* 10106636 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106639 je 0x10106640 */ if (ZF_) goto L_10106640;
  /* 1010663b call 0x1010711d */ esp -= 4; M32(esp) = 0x10106640u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x1010663bu); RETCHK(0x10106640u, 0x1010663bu); LOADALL;
L_10106640:;
  /* 10106640 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10106643 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106648u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106643u); RETCHK(0x10106648u, 0x10106643u); LOADALL;
  /* 10106648 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106649(CPU *c) {
  NATIVE_HOOK(0x10106649u) REGS; LOADALL;
L_10106649:;
  /* 10106649 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 1010664c mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 1010664f call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106654u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010664fu); RETCHK(0x10106654u, 0x1010664fu); LOADALL;
  /* 10106654 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010665b jle 0x10106669 */ if ((ZF_|LT_)) goto L_10106669;
  /* 1010665d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106662u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010665du); RETCHK(0x10106662u, 0x1010665du); LOADALL;
  /* 10106662 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106667 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106669:;
  /* 10106669 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010664f(CPU *c) {
  NATIVE_HOOK(0x1010664fu) REGS; LOADALL;
L_1010664f:;
  /* 1010664f call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106654u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010664fu); RETCHK(0x10106654u, 0x1010664fu); LOADALL;
  /* 10106654 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010665b jle 0x10106669 */ if ((ZF_|LT_)) goto L_10106669;
  /* 1010665d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106662u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010665du); RETCHK(0x10106662u, 0x1010665du); LOADALL;
  /* 10106662 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106667 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106669:;
  /* 10106669 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010666a(CPU *c) {
  NATIVE_HOOK(0x1010666au) REGS; LOADALL;
L_1010666a:;
  /* 1010666a push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1010666c push 0x1010d3a8 */ { u32 v_ = 0x1010d3a8u; esp -= 4; M32(esp) = v_; }
  /* 10106671 call 0x1010734c */ esp -= 4; M32(esp) = 0x10106676u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10106671u); RETCHK(0x10106676u, 0x10106671u); LOADALL;
  /* 10106676 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106679 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010667b je 0x10106698 */ if (ZF_) goto L_10106698;
  /* 1010667d mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10106680 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10106683 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106685 je 0x10106698 */ if (ZF_) goto L_10106698;
  /* 10106687 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010668b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1010668c push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010668f call 0x10105244 */ esp -= 4; M32(esp) = 0x10106694u; SAVEALL; F_10105244(c); ABI_CHECK(0x10105244u, 0x1010668fu); RETCHK(0x10106694u, 0x1010668fu); LOADALL;
  /* 10106694 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10106698:;
  /* 10106698 call 0x10107387 */ esp -= 4; M32(esp) = 0x1010669du; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106698u); RETCHK(0x1010669du, 0x10106698u); LOADALL;
  /* 1010669d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010669e(CPU *c) {
  NATIVE_HOOK(0x1010669eu) REGS; LOADALL;
L_1010669e:;
  /* 1010669e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101066a0 cmp byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101066a3 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 101066a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101066a7(CPU *c) {
  NATIVE_HOOK(0x101066a7u) REGS; LOADALL;
L_101066a7:;
  /* 101066a7 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 101066aa jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_101066af(CPU *c) {
  NATIVE_HOOK(0x101066afu) REGS; LOADALL;
L_101066af:;
  /* 101066af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101066b0 mov esi, eax */ { esi = (u32)(eax); }
  /* 101066b2 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 101066b4 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101066b6 cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101066ba jl 0x101066cc */ if (LT_) goto L_101066cc;
  /* 101066bc mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 101066bf mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101066c2 mov esi, dword ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); esi = (u32)(M32(m_)); }
  /* 101066c5 mov ecx, dword ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); ecx = (u32)(M32(m_)); }
  /* 101066c8 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101066ca add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_101066cc:;
  /* 101066cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101066cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101066ce(CPU *c) {
  NATIVE_HOOK(0x101066ceu) REGS; LOADALL;
L_101066ce:;
  /* 101066ce push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 101066d0 push 0x1010d3b8 */ { u32 v_ = 0x1010d3b8u; esp -= 4; M32(esp) = v_; }
  /* 101066d5 call 0x1010734c */ esp -= 4; M32(esp) = 0x101066dau; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x101066d5u); RETCHK(0x101066dau, 0x101066d5u); LOADALL;
  /* 101066da mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 101066dc mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 101066df mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101066e2 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 101066e5 and dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101066e9 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101066ec mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 101066ef push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101066f2 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 101066f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101066f6 call 0x10105501 */ esp -= 4; M32(esp) = 0x101066fbu; SAVEALL; F_10105501(c); ABI_CHECK(0x10105501u, 0x101066f6u); RETCHK(0x101066fbu, 0x101066f6u); LOADALL;
  /* 101066fb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101066fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101066fd mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10106700 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106705u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106700u); RETCHK(0x10106705u, 0x10106700u); LOADALL;
  /* 10106705 mov eax, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); eax = (u32)(M32(m_)); }
  /* 10106708 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 1010670b call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106710u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010670bu); RETCHK(0x10106710u, 0x1010670bu); LOADALL;
  /* 10106710 mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 10106716 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 10106719 call 0x10106e12 */ esp -= 4; M32(esp) = 0x1010671eu; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106719u); RETCHK(0x1010671eu, 0x10106719u); LOADALL;
  /* 1010671e mov dword ptr [eax + 0x7c], esi */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(esi); }
  /* 10106721 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106726u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106721u); RETCHK(0x10106726u, 0x10106721u); LOADALL;
  /* 10106726 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10106729 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 1010672f and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106733 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 1010673a push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010673d push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106740 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106741 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106744 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106745 call 0x10105596 */ esp -= 4; M32(esp) = 0x1010674au; SAVEALL; F_10105596(c); ABI_CHECK(0x10105596u, 0x10106745u); RETCHK(0x1010674au, 0x10106745u); LOADALL;
  /* 1010674a add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010674d mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10106750 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106754 jmp 0x10106808 */ goto L_10106808;
L_10106808:;
  /* 10106808 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010680c call 0x10106823 */ esp -= 4; M32(esp) = 0x10106811u; SAVEALL; F_10106823(c); ABI_CHECK(0x10106823u, 0x1010680cu); RETCHK(0x10106811u, 0x1010680cu); LOADALL;
  /* 10106811 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10106814 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106819u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106814u); RETCHK(0x10106819u, 0x10106814u); LOADALL;
  /* 10106819 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106759(CPU *c) {
  NATIVE_HOOK(0x10106759u) REGS; LOADALL;
L_10106759:;
  /* 10106759 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 1010675c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 1010675e mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10106761 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10106764 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010676a jne 0x1010679d */ if (!ZF_) goto L_1010679d;
  /* 1010676c mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 1010676f cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106773 jne 0x1010679d */ if (!ZF_) goto L_1010679d;
  /* 10106775 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10106778 cmp dword ptr [eax + 0x14], 0x19930520 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010677f je 0x1010678d */ if (ZF_) goto L_1010678d;
  /* 10106781 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10106784 cmp dword ptr [eax + 0x14], 0x19930521 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010678b jne 0x1010679d */ if (!ZF_) goto L_1010679d;
L_1010678d:;
  /* 1010678d mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10106790 cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106794 mov dword ptr [ebp - 0x24], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x1u); }
  /* 1010679b je 0x101067a4 */ if (ZF_) goto L_101067a4;
L_1010679d:;
  /* 1010679d mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
L_101067a4:;
  /* 101067a4 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 101067a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101067a8(CPU *c) {
  NATIVE_HOOK(0x101067a8u) REGS; LOADALL;
L_101067a8:;
  /* 101067a8 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 101067ab mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 101067ae mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 101067b1 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 101067b4 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 101067b7 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 101067ba mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 101067bd mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 101067c0 mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 101067c3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_101067c5:;
  /* 101067c5 mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 101067c8 cmp edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101067cb jae 0x101067f1 */ if (!CF_) goto L_101067f1;
  /* 101067cd lea esi, [edx + edx*4] */ esi = (u32)((u32)(edx + edx * 4u));
  /* 101067d0 mov ebx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ebx = (u32)(M32(m_)); }
  /* 101067d3 lea esi, [ebx + esi*4] */ esi = (u32)((u32)(ebx + esi * 4u));
  /* 101067d6 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 101067d9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101067db jle 0x1010681a */ if ((ZF_|LT_)) goto L_1010681a;
  /* 101067dd cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101067e0 jg 0x1010681a */ if (!(ZF_|LT_)) goto L_1010681a;
  /* 101067e2 lea eax, [ebx + 1] */ eax = (u32)((u32)(ebx + 0x1u));
  /* 101067e5 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 101067e8 mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 101067eb mov eax, dword ptr [edx + eax*8] */ { const u32 m_ = (u32)(edx + eax * 8u); eax = (u32)(M32(m_)); }
  /* 101067ee mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
L_101067f1:;
  /* 101067f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101067f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 101067f3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101067f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101067f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101067f7 call 0x1010659c */ esp -= 4; M32(esp) = 0x101067fcu; SAVEALL; F_1010659c(c); ABI_CHECK(0x1010659cu, 0x101067f7u); RETCHK(0x101067fcu, 0x101067f7u); LOADALL;
  /* 101067fc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101067ff mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10106802 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 10106805 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106808 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010680c call 0x10106823 */ esp -= 4; M32(esp) = 0x10106811u; SAVEALL; F_10106823(c); ABI_CHECK(0x10106823u, 0x1010680cu); RETCHK(0x10106811u, 0x1010680cu); LOADALL;
  /* 10106811 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10106814 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106819u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106814u); RETCHK(0x10106819u, 0x10106814u); LOADALL;
  /* 10106819 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010681a:;
  /* 1010681a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010681b jmp 0x101067c5 */ goto L_101067c5;
}

void F_1010681d(CPU *c) {
  NATIVE_HOOK(0x1010681du) REGS; LOADALL;
L_1010681d:;
  /* 1010681d mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10106820 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106823 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10106826 mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106829 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010682c call 0x1010554a */ esp -= 4; M32(esp) = 0x10106831u; SAVEALL; F_1010554a(c); ABI_CHECK(0x1010554au, 0x1010682cu); RETCHK(0x10106831u, 0x1010682cu); LOADALL;
  /* 10106831 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106832 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106837u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106832u); RETCHK(0x10106837u, 0x10106832u); LOADALL;
  /* 10106837 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 1010683a mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 1010683d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106842u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010683du); RETCHK(0x10106842u, 0x1010683du); LOADALL;
  /* 10106842 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10106845 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 1010684b cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106851 jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106853 cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106857 jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106859 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010685c cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106861 je 0x1010686a */ if (ZF_) goto L_1010686a;
  /* 10106863 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106868 jne 0x10106891 */ if (!ZF_) goto L_10106891;
L_1010686a:;
  /* 1010686a cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010686e jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106870 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106874 je 0x10106891 */ if (ZF_) goto L_10106891;
  /* 10106876 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106879 call 0x10105529 */ esp -= 4; M32(esp) = 0x1010687eu; SAVEALL; F_10105529(c); ABI_CHECK(0x10105529u, 0x10106879u); RETCHK(0x1010687eu, 0x10106879u); LOADALL;
  /* 1010687e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010687f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106881 je 0x10106891 */ if (ZF_) goto L_10106891;
  /* 10106883 call 0x1010569a */ esp -= 4; M32(esp) = 0x10106888u; SAVEALL; F_1010569a(c); ABI_CHECK(0x1010569au, 0x10106883u); RETCHK(0x10106888u, 0x10106883u); LOADALL;
  /* 10106888 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106889 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010688a call 0x1010666a */ esp -= 4; M32(esp) = 0x1010688fu; SAVEALL; F_1010666a(c); ABI_CHECK(0x1010666au, 0x1010688au); RETCHK(0x1010688fu, 0x1010688au); LOADALL;
  /* 1010688f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106890 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106891:;
  /* 10106891 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106823(CPU *c) {
  NATIVE_HOOK(0x10106823u) REGS; LOADALL;
L_10106823:;
  /* 10106823 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10106826 mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10106829 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010682c call 0x1010554a */ esp -= 4; M32(esp) = 0x10106831u; SAVEALL; F_1010554a(c); ABI_CHECK(0x1010554au, 0x1010682cu); RETCHK(0x10106831u, 0x1010682cu); LOADALL;
  /* 10106831 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106832 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106837u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106832u); RETCHK(0x10106837u, 0x10106832u); LOADALL;
  /* 10106837 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 1010683a mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 1010683d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106842u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x1010683du); RETCHK(0x10106842u, 0x1010683du); LOADALL;
  /* 10106842 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10106845 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 1010684b cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106851 jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106853 cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106857 jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106859 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010685c cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106861 je 0x1010686a */ if (ZF_) goto L_1010686a;
  /* 10106863 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106868 jne 0x10106891 */ if (!ZF_) goto L_10106891;
L_1010686a:;
  /* 1010686a cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010686e jne 0x10106891 */ if (!ZF_) goto L_10106891;
  /* 10106870 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106874 je 0x10106891 */ if (ZF_) goto L_10106891;
  /* 10106876 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106879 call 0x10105529 */ esp -= 4; M32(esp) = 0x1010687eu; SAVEALL; F_10105529(c); ABI_CHECK(0x10105529u, 0x10106879u); RETCHK(0x1010687eu, 0x10106879u); LOADALL;
  /* 1010687e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010687f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106881 je 0x10106891 */ if (ZF_) goto L_10106891;
  /* 10106883 call 0x1010569a */ esp -= 4; M32(esp) = 0x10106888u; SAVEALL; F_1010569a(c); ABI_CHECK(0x1010569au, 0x10106883u); RETCHK(0x10106888u, 0x10106883u); LOADALL;
  /* 10106888 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106889 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010688a call 0x1010666a */ esp -= 4; M32(esp) = 0x1010688fu; SAVEALL; F_1010666a(c); ABI_CHECK(0x1010666au, 0x1010688au); RETCHK(0x1010688fu, 0x1010688au); LOADALL;
  /* 1010688f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106890 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106891:;
  /* 10106891 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106892(CPU *c) {
  NATIVE_HOOK(0x10106892u) REGS; LOADALL;
L_10106892:;
  /* 10106892 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10106894 push 0x1010d3d0 */ { u32 v_ = 0x1010d3d0u; esp -= 4; M32(esp) = v_; }
  /* 10106899 call 0x1010734c */ esp -= 4; M32(esp) = 0x1010689eu; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10106899u); RETCHK(0x1010689eu, 0x10106899u); LOADALL;
  /* 1010689e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 101068a0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 101068a3 mov edi, edx */ { edi = (u32)(edx); }
  /* 101068a5 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 101068a8 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101068ab test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101068ad je 0x101069fc */ if (ZF_) goto L_101069fc;
  /* 101068b3 cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101068b7 je 0x101069fc */ if (ZF_) goto L_101069fc;
  /* 101068bd mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 101068c0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101068c2 jne 0x101068ce */ if (!ZF_) goto L_101068ce;
  /* 101068c4 test byte ptr [eax + 3], 0x80 */ { const u32 m_ = (u32)(eax + 0x3u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101068c8 je 0x101069fc */ if (ZF_) goto L_101069fc;
L_101068ce:;
  /* 101068ce mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 101068d0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101068d2 js 0x101068d8 */ if (SF_) goto L_101068d8;
  /* 101068d4 lea edi, [ecx + edi + 0xc] */ edi = (u32)((u32)(ecx + edi + 0xcu));
L_101068d8:;
  /* 101068d8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101068dc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 101068de push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101068e1 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101068e3 je 0x1010691a */ if (ZF_) goto L_1010691a;
  /* 101068e5 call 0x10109cb3 */ esp -= 4; M32(esp) = 0x101068eau; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x101068e5u); RETCHK(0x101068eau, 0x101068e5u); LOADALL;
  /* 101068ea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101068eb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101068ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101068ee je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 101068f4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 101068f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101068f7 call 0x10109ccf */ esp -= 4; M32(esp) = 0x101068fcu; SAVEALL; F_10109ccf(c); ABI_CHECK(0x10109ccfu, 0x101068f7u); RETCHK(0x101068fcu, 0x101068f7u); LOADALL;
  /* 101068fc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101068fd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101068fe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106900 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 10106906 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10106909 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
L_1010690b:;
  /* 1010690b lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1010690e call 0x101066af */ esp -= 4; M32(esp) = 0x10106913u; SAVEALL; F_101066af(c); ABI_CHECK(0x101066afu, 0x1010690eu); RETCHK(0x10106913u, 0x1010690eu); LOADALL;
  /* 10106913 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10106915 jmp 0x101069f8 */ goto L_101069f8;
L_1010691a:;
  /* 1010691a test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010691d je 0x10106965 */ if (ZF_) goto L_10106965;
  /* 1010691f call 0x10109cb3 */ esp -= 4; M32(esp) = 0x10106924u; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x1010691fu); RETCHK(0x10106924u, 0x1010691fu); LOADALL;
  /* 10106924 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106925 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106926 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106928 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 1010692e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106930 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106931 call 0x10109ccf */ esp -= 4; M32(esp) = 0x10106936u; SAVEALL; F_10109ccf(c); ABI_CHECK(0x10109ccfu, 0x10106931u); RETCHK(0x10106936u, 0x10106931u); LOADALL;
  /* 10106936 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106937 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106938 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010693a je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 10106940 push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106943 push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106946 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106947 call 0x10105760 */ esp -= 4; M32(esp) = 0x1010694cu; SAVEALL; F_10105760(c); ABI_CHECK(0x10105760u, 0x10106947u); RETCHK(0x1010694cu, 0x10106947u); LOADALL;
  /* 1010694c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010694f cmp dword ptr [esi + 0x14], 4 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106953 jne 0x101069f8 */ if (!ZF_) goto L_101069f8;
  /* 10106959 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 1010695b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010695d je 0x101069f8 */ if (ZF_) goto L_101069f8;
  /* 10106963 jmp 0x1010690b */ goto L_1010690b;
L_10106965:;
  /* 10106965 cmp dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106969 jne 0x1010699e */ if (!ZF_) goto L_1010699e;
  /* 1010696b call 0x10109cb3 */ esp -= 4; M32(esp) = 0x10106970u; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x1010696bu); RETCHK(0x10106970u, 0x1010696bu); LOADALL;
  /* 10106970 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106971 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106972 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106974 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 10106976 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106978 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106979 call 0x10109ccf */ esp -= 4; M32(esp) = 0x1010697eu; SAVEALL; F_10109ccf(c); ABI_CHECK(0x10109ccfu, 0x10106979u); RETCHK(0x1010697eu, 0x10106979u); LOADALL;
  /* 1010697e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010697f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106980 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106982 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 10106984 push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106987 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1010698a mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 1010698d call 0x101066af */ esp -= 4; M32(esp) = 0x10106992u; SAVEALL; F_101066af(c); ABI_CHECK(0x101066afu, 0x1010698du); RETCHK(0x10106992u, 0x1010698du); LOADALL;
  /* 10106992 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106993 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106994 call 0x10105760 */ esp -= 4; M32(esp) = 0x10106999u; SAVEALL; F_10105760(c); ABI_CHECK(0x10105760u, 0x10106994u); RETCHK(0x10106999u, 0x10106994u); LOADALL;
  /* 10106999 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010699c jmp 0x101069f8 */ goto L_101069f8;
L_1010699e:;
  /* 1010699e call 0x10109cb3 */ esp -= 4; M32(esp) = 0x101069a3u; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x1010699eu); RETCHK(0x101069a3u, 0x1010699eu); LOADALL;
  /* 101069a3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069a4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069a5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101069a7 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 101069a9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 101069ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101069ac call 0x10109ccf */ esp -= 4; M32(esp) = 0x101069b1u; SAVEALL; F_10109ccf(c); ABI_CHECK(0x10109ccfu, 0x101069acu); RETCHK(0x101069b1u, 0x101069acu); LOADALL;
  /* 101069b1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069b2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069b3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101069b5 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 101069b7 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101069ba call 0x10109ceb */ esp -= 4; M32(esp) = 0x101069bfu; SAVEALL; F_10109ceb(c); ABI_CHECK(0x10109cebu, 0x101069bau); RETCHK(0x101069bfu, 0x101069bau); LOADALL;
  /* 101069bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101069c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101069c2 je 0x101069f3 */ if (ZF_) goto L_101069f3;
  /* 101069c4 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 101069c7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 101069ca test byte ptr [esi], 4 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101069cd je 0x101069e2 */ if (ZF_) goto L_101069e2;
  /* 101069cf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 101069d1 call 0x101066af */ esp -= 4; M32(esp) = 0x101069d6u; SAVEALL; F_101066af(c); ABI_CHECK(0x101066afu, 0x101069d1u); RETCHK(0x101069d6u, 0x101069d1u); LOADALL;
  /* 101069d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101069d7 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101069da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101069db call 0x10105244 */ esp -= 4; M32(esp) = 0x101069e0u; SAVEALL; F_10105244(c); ABI_CHECK(0x10105244u, 0x101069dbu); RETCHK(0x101069e0u, 0x101069dbu); LOADALL;
  /* 101069e0 jmp 0x101069f8 */ goto L_101069f8;
L_101069e2:;
  /* 101069e2 call 0x101066af */ esp -= 4; M32(esp) = 0x101069e7u; SAVEALL; F_101066af(c); ABI_CHECK(0x101066afu, 0x101069e2u); RETCHK(0x101069e7u, 0x101069e2u); LOADALL;
  /* 101069e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101069e8 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101069eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101069ec call 0x10105244 */ esp -= 4; M32(esp) = 0x101069f1u; SAVEALL; F_10105244(c); ABI_CHECK(0x10105244u, 0x101069ecu); RETCHK(0x101069f1u, 0x101069ecu); LOADALL;
  /* 101069f1 jmp 0x101069f8 */ goto L_101069f8;
L_101069f3:;
  /* 101069f3 call 0x1010711d */ esp -= 4; M32(esp) = 0x101069f8u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x101069f3u); RETCHK(0x101069f8u, 0x101069f3u); LOADALL;
L_101069f8:;
  /* 101069f8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_101069fc:;
  /* 101069fc call 0x10107387 */ esp -= 4; M32(esp) = 0x10106a01u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x101069fcu); RETCHK(0x10106a01u, 0x101069fcu); LOADALL;
  /* 10106a01 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106a02(CPU *c) {
  NATIVE_HOOK(0x10106a02u) REGS; LOADALL;
L_10106a02:;
  /* 10106a02 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106a04 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106a05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106a06(CPU *c) {
  NATIVE_HOOK(0x10106a06u) REGS; LOADALL;
L_10106a06:;
  /* 10106a06 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10106a09 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_10106a0e(CPU *c) {
  NATIVE_HOOK(0x10106a0eu) REGS; LOADALL;
L_10106a0e:;
  /* 10106a0e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10106a0f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10106a11 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106a13 je 0x10106a22 */ if (ZF_) goto L_10106a22;
  /* 10106a15 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106a16 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a19 mov edx, esi */ { edx = (u32)(esi); }
  /* 10106a1b call 0x10106892 */ esp -= 4; M32(esp) = 0x10106a20u; SAVEALL; F_10106892(c); ABI_CHECK(0x10106892u, 0x10106a1bu); RETCHK(0x10106a20u, 0x10106a1bu); LOADALL;
  /* 10106a20 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106a21 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106a22:;
  /* 10106a22 cmp dword ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106a26 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a29 jne 0x10106a2e */ if (!ZF_) goto L_10106a2e;
  /* 10106a2b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a2c jmp 0x10106a31 */ goto L_10106a31;
L_10106a2e:;
  /* 10106a2e push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10106a31:;
  /* 10106a31 call 0x1010524b */ esp -= 4; M32(esp) = 0x10106a36u; SAVEALL; F_1010524b(c); ABI_CHECK(0x1010524bu, 0x10106a31u); RETCHK(0x10106a36u, 0x10106a31u); LOADALL;
  /* 10106a36 push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a38 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a3b push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a3e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a3f call 0x1010659c */ esp -= 4; M32(esp) = 0x10106a44u; SAVEALL; F_1010659c(c); ABI_CHECK(0x1010659cu, 0x10106a3fu); RETCHK(0x10106a44u, 0x10106a3fu); LOADALL;
  /* 10106a44 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106a47 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10106a4c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a4f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106a50 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a53 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10106a56 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a59 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10106a5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a5d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a60 call 0x101066ce */ esp -= 4; M32(esp) = 0x10106a65u; SAVEALL; F_101066ce(c); ABI_CHECK(0x101066ceu, 0x10106a60u); RETCHK(0x10106a65u, 0x10106a60u); LOADALL;
  /* 10106a65 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106a68 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106a6a je 0x10106a73 */ if (ZF_) goto L_10106a73;
  /* 10106a6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a6d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106a6e call 0x10105214 */ esp -= 4; M32(esp) = 0x10106a73u; SAVEALL; F_10105214(c); ABI_CHECK(0x10105214u, 0x10106a6eu); RETCHK(0x10106a73u, 0x10106a6eu); LOADALL;
L_10106a73:;
  /* 10106a73 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10106a74 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106a75(CPU *c) {
  NATIVE_HOOK(0x10106a75u) REGS; LOADALL;
L_10106a75:;
  /* 10106a75 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10106a76 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10106a78 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106a79 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106a7a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106a7b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106a7e cmp dword ptr [esi], 0x80000003 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x80000003u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106a84 je 0x10106b30 */ if (ZF_) goto L_10106b30;
  /* 10106a8a call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106a8fu; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106a8au); RETCHK(0x10106a8fu, 0x10106a8au); LOADALL;
  /* 10106a8f cmp dword ptr [eax + 0x74], 0 */ { const u32 m_ = (u32)(eax + 0x74u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106a93 je 0x10106ab4 */ if (ZF_) goto L_10106ab4;
  /* 10106a95 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a98 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a9b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106a9e push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106aa1 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106aa4 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106aa7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106aa8 call 0x1010530e */ esp -= 4; M32(esp) = 0x10106aadu; SAVEALL; F_1010530e(c); ABI_CHECK(0x1010530eu, 0x10106aa8u); RETCHK(0x10106aadu, 0x10106aa8u); LOADALL;
  /* 10106aad add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106ab0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106ab2 jne 0x10106b30 */ if (!ZF_) goto L_10106b30;
L_10106ab4:;
  /* 10106ab4 mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10106ab7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106ab8 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10106abb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106abc lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10106abf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ac0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106ac1 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106ac4 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106ac7 call 0x10105487 */ esp -= 4; M32(esp) = 0x10106accu; SAVEALL; F_10105487(c); ABI_CHECK(0x10105487u, 0x10106ac7u); RETCHK(0x10106accu, 0x10106ac7u); LOADALL;
  /* 10106acc mov edi, eax */ { edi = (u32)(eax); }
  /* 10106ace mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106ad1 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106ad4 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ad7 jae 0x10106b2f */ if (!CF_) goto L_10106b2f;
  /* 10106ad9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_10106ada:;
  /* 10106ada cmp esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106adc jl 0x10106b20 */ if (LT_) goto L_10106b20;
  /* 10106ade cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ae1 jg 0x10106b20 */ if (!(ZF_|LT_)) goto L_10106b20;
  /* 10106ae3 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106ae6 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10106ae9 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10106aec add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106aee mov ecx, dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10106af1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106af3 je 0x10106afb */ if (ZF_) goto L_10106afb;
  /* 10106af5 cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10106af9 jne 0x10106b20 */ if (!ZF_) goto L_10106b20;
L_10106afb:;
  /* 10106afb push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106afe mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10106b01 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b04 lea ebx, [eax - 0x10] */ ebx = (u32)((u32)(eax + 0xfffffff0u));
  /* 10106b07 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b0a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10106b0c push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b0f push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b12 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106b15 call 0x10106a0e */ esp -= 4; M32(esp) = 0x10106b1au; SAVEALL; F_10106a0e(c); ABI_CHECK(0x10106a0eu, 0x10106b15u); RETCHK(0x10106b1au, 0x10106b15u); LOADALL;
  /* 10106b1a mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10106b1d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10106b20:;
  /* 10106b20 inc dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106b23 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10106b26 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10106b29 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b2c jb 0x10106ada */ if (CF_) goto L_10106ada;
  /* 10106b2e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10106b2f:;
  /* 10106b2f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10106b30:;
  /* 10106b30 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106b31 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106b32 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106b33(CPU *c) {
  NATIVE_HOOK(0x10106b33u) REGS; LOADALL;
L_10106b33:;
  /* 10106b33 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10106b34 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10106b36 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106b39 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10106b3c mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106b3f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b42 mov byte ptr [ebp - 1], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x0u); }
  /* 10106b46 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10106b49 jl 0x10106b53 */ if (LT_) goto L_10106b53;
  /* 10106b4b mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10106b4e cmp eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b51 jl 0x10106b58 */ if (LT_) goto L_10106b58;
L_10106b53:;
  /* 10106b53 call 0x1010711d */ esp -= 4; M32(esp) = 0x10106b58u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x10106b53u); RETCHK(0x10106b58u, 0x10106b53u); LOADALL;
L_10106b58:;
  /* 10106b58 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106b59 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10106b5c cmp dword ptr [ebx], 0xe06d7363 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106b63 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106b64 jne 0x10106d0c */ if (!ZF_) goto L_10106d0c;
  /* 10106b6a cmp dword ptr [ebx + 0x10], 3 */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b6e mov edi, 0x19930520 */ { edi = (u32)(0x19930520u); }
  /* 10106b73 jne 0x10106c00 */ if (!ZF_) goto L_10106c00;
  /* 10106b79 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106b7c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b7e je 0x10106b87 */ if (ZF_) goto L_10106b87;
  /* 10106b80 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b85 jne 0x10106c00 */ if (!ZF_) goto L_10106c00;
L_10106b87:;
  /* 10106b87 cmp dword ptr [ebx + 0x1c], 0 */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b8b jne 0x10106c00 */ if (!ZF_) goto L_10106c00;
  /* 10106b8d call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106b92u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106b8du); RETCHK(0x10106b92u, 0x10106b8du); LOADALL;
  /* 10106b92 cmp dword ptr [eax + 0x7c], 0 */ { const u32 m_ = (u32)(eax + 0x7cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106b96 je 0x10106d04 */ if (ZF_) goto L_10106d04;
  /* 10106b9c call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106ba1u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106b9cu); RETCHK(0x10106ba1u, 0x10106b9cu); LOADALL;
  /* 10106ba1 mov esi, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); esi = (u32)(M32(m_)); }
  /* 10106ba4 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 10106ba7 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10106bacu; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10106ba7u); RETCHK(0x10106bacu, 0x10106ba7u); LOADALL;
  /* 10106bac mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 10106bb2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106bb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106bb5 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10106bb8 mov byte ptr [ebp - 1], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x1u); }
  /* 10106bbc call 0x10109cb3 */ esp -= 4; M32(esp) = 0x10106bc1u; SAVEALL; F_10109cb3(c); ABI_CHECK(0x10109cb3u, 0x10106bbcu); RETCHK(0x10106bc1u, 0x10106bbcu); LOADALL;
  /* 10106bc1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106bc3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106bc4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106bc5 jne 0x10106bcc */ if (!ZF_) goto L_10106bcc;
  /* 10106bc7 call 0x1010711d */ esp -= 4; M32(esp) = 0x10106bccu; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x10106bc7u); RETCHK(0x10106bccu, 0x10106bc7u); LOADALL;
L_10106bcc:;
  /* 10106bcc cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106bd2 jne 0x10106d09 */ if (!ZF_) goto L_10106d09;
  /* 10106bd8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106bdb cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106bdf jne 0x10106bfd */ if (!ZF_) goto L_10106bfd;
  /* 10106be1 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106be4 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106be6 je 0x10106bef */ if (ZF_) goto L_10106bef;
  /* 10106be8 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106bed jne 0x10106bfd */ if (!ZF_) goto L_10106bfd;
L_10106bef:;
  /* 10106bef mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106bf2 cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106bf6 jne 0x10106bfd */ if (!ZF_) goto L_10106bfd;
  /* 10106bf8 call 0x1010711d */ esp -= 4; M32(esp) = 0x10106bfdu; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x10106bf8u); RETCHK(0x10106bfdu, 0x10106bf8u); LOADALL;
L_10106bfd:;
  /* 10106bfd mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10106c00:;
  /* 10106c00 cmp dword ptr [ebx], 0xe06d7363 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c06 jne 0x10106d0c */ if (!ZF_) goto L_10106d0c;
  /* 10106c0c cmp dword ptr [ebx + 0x10], 3 */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c10 jne 0x10106d0c */ if (!ZF_) goto L_10106d0c;
  /* 10106c16 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10106c19 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c1b je 0x10106c28 */ if (ZF_) goto L_10106c28;
  /* 10106c1d cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c22 jne 0x10106d0c */ if (!ZF_) goto L_10106d0c;
L_10106c28:;
  /* 10106c28 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 10106c2b lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10106c2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106c2f lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 10106c32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106c33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106c34 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106c37 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106c3a call 0x10105487 */ esp -= 4; M32(esp) = 0x10106c3fu; SAVEALL; F_10105487(c); ABI_CHECK(0x10105487u, 0x10106c3au); RETCHK(0x10106c3fu, 0x10106c3au); LOADALL;
  /* 10106c3f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10106c42 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106c45 cmp ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c48 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106c4b jae 0x10106cf4 */ if (!CF_) goto L_10106cf4;
  /* 10106c51 jmp 0x10106c56 */ goto L_10106c56;
L_10106c53:;
  /* 10106c53 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
L_10106c56:;
  /* 10106c56 cmp dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c58 jg 0x10106cdf */ if (!(ZF_|LT_)) goto L_10106cdf;
  /* 10106c5e cmp esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106c61 jg 0x10106cdf */ if (!(ZF_|LT_)) goto L_10106cdf;
  /* 10106c63 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10106c66 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106c68 mov esi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); esi = (u32)(M32(m_)); }
  /* 10106c6b mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 10106c6e jle 0x10106cdf */ if ((ZF_|LT_)) goto L_10106cdf;
L_10106c70:;
  /* 10106c70 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10106c73 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10106c76 lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 10106c79 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10106c7b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106c7d mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 10106c80 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 10106c83 jle 0x10106ca9 */ if ((ZF_|LT_)) goto L_10106ca9;
L_10106c85:;
  /* 10106c85 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 10106c88 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 10106c8a push dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106c8d mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 10106c90 call 0x1010652f */ esp -= 4; M32(esp) = 0x10106c95u; SAVEALL; F_1010652f(c); ABI_CHECK(0x1010652fu, 0x10106c90u); RETCHK(0x10106c95u, 0x10106c90u); LOADALL;
  /* 10106c95 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106c97 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106c98 jne 0x10106cb7 */ if (!ZF_) goto L_10106cb7;
  /* 10106c9a dec dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106c9d add dword ptr [ebp - 0x10], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106ca1 cmp dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ca4 jg 0x10106c85 */ if (!(ZF_|LT_)) goto L_10106c85;
  /* 10106ca6 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
L_10106ca9:;
  /* 10106ca9 dec dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106cac add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10106caf cmp dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106cb3 jg 0x10106c70 */ if (!(ZF_|LT_)) goto L_10106c70;
  /* 10106cb5 jmp 0x10106cdf */ goto L_10106cdf;
L_10106cb7:;
  /* 10106cb7 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106cba mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 10106cbd push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106cc0 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 10106cc3 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106cc6 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106cc9 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106ccc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106ccd mov ebx, esi */ { ebx = (u32)(esi); }
  /* 10106ccf mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10106cd2 call 0x10106a0e */ esp -= 4; M32(esp) = 0x10106cd7u; SAVEALL; F_10106a0e(c); ABI_CHECK(0x10106a0eu, 0x10106cd2u); RETCHK(0x10106cd7u, 0x10106cd2u); LOADALL;
  /* 10106cd7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10106cda add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106cdd mov eax, edi */ { eax = (u32)(edi); }
L_10106cdf:;
  /* 10106cdf inc dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10106ce2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10106ce5 add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10106ce8 cmp ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ceb mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10106cee jb 0x10106c53 */ if (CF_) goto L_10106c53;
L_10106cf4:;
  /* 10106cf4 cmp byte ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10106cf8 je 0x10106d04 */ if (ZF_) goto L_10106d04;
  /* 10106cfa push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106cfc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106cfd call 0x1010666a */ esp -= 4; M32(esp) = 0x10106d02u; SAVEALL; F_1010666a(c); ABI_CHECK(0x1010666au, 0x10106cfdu); RETCHK(0x10106d02u, 0x10106cfdu); LOADALL;
  /* 10106d02 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106d03 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106d04:;
  /* 10106d04 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106d05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106d06 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10106d07 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10106d08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10106d09:;
  /* 10106d09 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10106d0c:;
  /* 10106d0c cmp byte ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10106d10 jne 0x10106d32 */ if (!ZF_) goto L_10106d32;
  /* 10106d12 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d15 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d18 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d1b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d1e push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d21 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d24 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d27 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106d28 call 0x10106a75 */ esp -= 4; M32(esp) = 0x10106d2du; SAVEALL; F_10106a75(c); ABI_CHECK(0x10106a75u, 0x10106d28u); RETCHK(0x10106d2du, 0x10106d28u); LOADALL;
  /* 10106d2d add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106d30 jmp 0x10106d04 */ goto L_10106d04;
L_10106d32:;
  /* 10106d32 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_10106d37(CPU *c) {
  NATIVE_HOOK(0x10106d37u) REGS; LOADALL;
L_10106d37:;
  /* 10106d37 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10106d38 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10106d3a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106d3b mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 10106d3e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10106d40 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10106d41 and eax, 0x1fffffff */ { u32 a_ = eax, b_ = 0x1fffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106d46 mov edi, 0x19930520 */ { edi = (u32)(0x19930520u); }
  /* 10106d4b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d4d je 0x10106d54 */ if (ZF_) goto L_10106d54;
  /* 10106d4f call 0x1010711d */ esp -= 4; M32(esp) = 0x10106d54u; SAVEALL; F_1010711d(c); ABI_CHECK(0x1010711du, 0x10106d4fu); RETCHK(0x10106d54u, 0x10106d4fu); LOADALL;
L_10106d54:;
  /* 10106d54 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10106d57 test byte ptr [eax + 4], 0x66 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x66u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10106d5b je 0x10106d7c */ if (ZF_) goto L_10106d7c;
  /* 10106d5d cmp dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d61 je 0x10106dd2 */ if (ZF_) goto L_10106dd2;
  /* 10106d63 cmp dword ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d67 jne 0x10106dd2 */ if (!ZF_) goto L_10106dd2;
  /* 10106d69 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10106d6b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106d6c push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d6f push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106d72 call 0x1010659c */ esp -= 4; M32(esp) = 0x10106d77u; SAVEALL; F_1010659c(c); ABI_CHECK(0x1010659cu, 0x10106d72u); RETCHK(0x10106d77u, 0x10106d72u); LOADALL;
  /* 10106d77 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106d7a jmp 0x10106dd2 */ goto L_10106dd2;
L_10106d7c:;
  /* 10106d7c cmp dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d80 je 0x10106dd2 */ if (ZF_) goto L_10106dd2;
  /* 10106d82 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d88 jne 0x10106db6 */ if (!ZF_) goto L_10106db6;
  /* 10106d8a cmp dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106d8d jbe 0x10106db6 */ if ((CF_|ZF_)) goto L_10106db6;
  /* 10106d8f mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10106d92 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10106d95 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106d97 je 0x10106db6 */ if (ZF_) goto L_10106db6;
  /* 10106d99 movzx edx, byte ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edx = (u32)(M8(m_)); }
  /* 10106d9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10106d9e push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106da1 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106da4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106da5 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106da8 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dab push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106daf call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x10106db1u; SAVEALL; call_ind(c, t_); RETCHK(0x10106db1u, 0x10106dafu); LOADALL; }
  /* 10106db1 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10106db4 jmp 0x10106dd5 */ goto L_10106dd5;
L_10106db6:;
  /* 10106db6 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106db9 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dbc push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dbf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106dc0 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dc3 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dc6 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106dc9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106dca call 0x10106b33 */ esp -= 4; M32(esp) = 0x10106dcfu; SAVEALL; F_10106b33(c); ABI_CHECK(0x10106b33u, 0x10106dcau); RETCHK(0x10106dcfu, 0x10106dcau); LOADALL;
  /* 10106dcf add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10106dd2:;
  /* 10106dd2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10106dd4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10106dd5:;
  /* 10106dd5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10106dd6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106dd7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10106dd8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106dd9(CPU *c) {
  NATIVE_HOOK(0x10106dd9u) REGS; LOADALL;
L_10106dd9:;
  /* 10106dd9 call dword ptr [0x1010d028] */ { const u32 m_ = (u32)(0x1010d028u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106ddfu; SAVEALL; call_ind(c, t_); RETCHK(0x10106ddfu, 0x10106dd9u); LOADALL; }
  /* 10106ddf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10106de2(CPU *c) {
  NATIVE_HOOK(0x10106de2u) REGS; LOADALL;
L_10106de2:;
  /* 10106de2 mov eax, dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); eax = (u32)(M32(m_)); }
  /* 10106de7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106dea je 0x10106dfa */ if (ZF_) goto L_10106dfa;
  /* 10106dec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ded call dword ptr [0x10120ccc] */ { const u32 m_ = (u32)(0x10120cccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106df3u; SAVEALL; call_ind(c, t_); RETCHK(0x10106df3u, 0x10106dedu); LOADALL; }
  /* 10106df3 or dword ptr [0x10110124], 0xffffffff */ { const u32 m_ = (u32)(0x10110124u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10106dfa:;
  /* 10106dfa jmp 0x101076c1 */ goto L_101076c1;
L_101076c1:;
  /* 101076c1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101076c2 mov ebx, dword ptr [0x1010d064] */ { const u32 m_ = (u32)(0x1010d064u); ebx = (u32)(M32(m_)); }
  /* 101076c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101076c9 mov esi, 0x10110130 */ { esi = (u32)(0x10110130u); }
  /* 101076ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_101076cf:;
  /* 101076cf mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 101076d1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101076d3 je 0x101076e8 */ if (ZF_) goto L_101076e8;
  /* 101076d5 cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101076d9 je 0x101076e8 */ if (ZF_) goto L_101076e8;
  /* 101076db push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101076dc call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x101076deu; SAVEALL; call_ind(c, t_); RETCHK(0x101076deu, 0x101076dcu); LOADALL; }
  /* 101076de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101076df call 0x101074a1 */ esp -= 4; M32(esp) = 0x101076e4u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101076dfu); RETCHK(0x101076e4u, 0x101076dfu); LOADALL;
  /* 101076e4 and dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101076e7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101076e8:;
  /* 101076e8 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101076eb cmp esi, 0x10110250 */ { u32 a_ = esi, b_ = 0x10110250u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101076f1 jl 0x101076cf */ if (LT_) goto L_101076cf;
  /* 101076f3 mov esi, 0x10110130 */ { esi = (u32)(0x10110130u); }
  /* 101076f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_101076f9:;
  /* 101076f9 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 101076fb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101076fd je 0x10107708 */ if (ZF_) goto L_10107708;
  /* 101076ff cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107703 jne 0x10107708 */ if (!ZF_) goto L_10107708;
  /* 10107705 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107706 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x10107708u; SAVEALL; call_ind(c, t_); RETCHK(0x10107708u, 0x10107706u); LOADALL; }
L_10107708:;
  /* 10107708 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010770b cmp esi, 0x10110250 */ { u32 a_ = esi, b_ = 0x10110250u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107711 jl 0x101076f9 */ if (LT_) goto L_101076f9;
  /* 10107713 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107714 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107715 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106dff(CPU *c) {
  NATIVE_HOOK(0x10106dffu) REGS; LOADALL;
L_10106dff:;
  /* 10106dff mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106e03 mov dword ptr [eax + 0x54], 0x10110280 */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(0x10110280u); }
  /* 10106e0a mov dword ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 10106e11 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106e12(CPU *c) {
  NATIVE_HOOK(0x10106e12u) REGS; LOADALL;
L_10106e12:;
  /* 10106e12 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106e13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106e14 call dword ptr [0x1010d030] */ { const u32 m_ = (u32)(0x1010d030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e1au; SAVEALL; call_ind(c, t_); RETCHK(0x10106e1au, 0x10106e14u); LOADALL; }
  /* 10106e1a push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106e20 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10106e22 call dword ptr [0x10120cc4] */ { const u32 m_ = (u32)(0x10120cc4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e28u; SAVEALL; call_ind(c, t_); RETCHK(0x10106e28u, 0x10106e22u); LOADALL; }
  /* 10106e28 mov esi, eax */ { esi = (u32)(eax); }
  /* 10106e2a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106e2c jne 0x10106e77 */ if (!ZF_) goto L_10106e77;
  /* 10106e2e push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 10106e33 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10106e35 call 0x101085f3 */ esp -= 4; M32(esp) = 0x10106e3au; SAVEALL; F_101085f3(c); ABI_CHECK(0x101085f3u, 0x10106e35u); RETCHK(0x10106e3au, 0x10106e35u); LOADALL;
  /* 10106e3a mov esi, eax */ { esi = (u32)(eax); }
  /* 10106e3c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106e3e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106e3f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106e40 je 0x10106e6f */ if (ZF_) goto L_10106e6f;
  /* 10106e42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106e43 push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106e49 call dword ptr [0x10120cc8] */ { const u32 m_ = (u32)(0x10120cc8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e4fu; SAVEALL; call_ind(c, t_); RETCHK(0x10106e4fu, 0x10106e49u); LOADALL; }
  /* 10106e4f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106e51 je 0x10106e6f */ if (ZF_) goto L_10106e6f;
  /* 10106e53 mov dword ptr [esi + 0x54], 0x10110280 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x10110280u); }
  /* 10106e5a mov dword ptr [esi + 0x14], 1 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 10106e61 call dword ptr [0x1010d018] */ { const u32 m_ = (u32)(0x1010d018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e67u; SAVEALL; call_ind(c, t_); RETCHK(0x10106e67u, 0x10106e61u); LOADALL; }
  /* 10106e67 or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106e6b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10106e6d jmp 0x10106e77 */ goto L_10106e77;
L_10106e6f:;
  /* 10106e6f push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10106e71 call 0x1010602e */ esp -= 4; M32(esp) = 0x10106e76u; SAVEALL; F_1010602e(c); ABI_CHECK(0x1010602eu, 0x10106e71u); RETCHK(0x10106e76u, 0x10106e71u); LOADALL;
  /* 10106e76 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106e77:;
  /* 10106e77 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10106e78 call dword ptr [0x1010d02c] */ { const u32 m_ = (u32)(0x1010d02cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106e7eu; SAVEALL; call_ind(c, t_); RETCHK(0x10106e7eu, 0x10106e78u); LOADALL; }
  /* 10106e7e mov eax, esi */ { eax = (u32)(esi); }
  /* 10106e80 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10106e81 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10106e82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106e83(CPU *c) {
  NATIVE_HOOK(0x10106e83u) REGS; LOADALL;
L_10106e83:;
  /* 10106e83 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10106e85 push 0x1010d3e0 */ { u32 v_ = 0x1010d3e0u; esp -= 4; M32(esp) = v_; }
  /* 10106e8a call 0x1010734c */ esp -= 4; M32(esp) = 0x10106e8fu; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10106e8au); RETCHK(0x10106e8fu, 0x10106e8au); LOADALL;
  /* 10106e8f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106e92 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10106e94 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106e96 je 0x10106fa8 */ if (ZF_) goto L_10106fa8;
  /* 10106e9c mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 10106e9f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ea1 je 0x10106eaa */ if (ZF_) goto L_10106eaa;
  /* 10106ea3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ea4 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106ea9u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106ea4u); RETCHK(0x10106ea9u, 0x10106ea4u); LOADALL;
  /* 10106ea9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106eaa:;
  /* 10106eaa mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10106ead cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106eaf je 0x10106eb8 */ if (ZF_) goto L_10106eb8;
  /* 10106eb1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106eb2 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106eb7u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106eb2u); RETCHK(0x10106eb7u, 0x10106eb2u); LOADALL;
  /* 10106eb7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106eb8:;
  /* 10106eb8 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 10106ebb cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ebd je 0x10106ec6 */ if (ZF_) goto L_10106ec6;
  /* 10106ebf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ec0 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106ec5u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106ec0u); RETCHK(0x10106ec5u, 0x10106ec0u); LOADALL;
  /* 10106ec5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106ec6:;
  /* 10106ec6 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10106ec9 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ecb je 0x10106ed4 */ if (ZF_) goto L_10106ed4;
  /* 10106ecd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106ece call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106ed3u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106eceu); RETCHK(0x10106ed3u, 0x10106eceu); LOADALL;
  /* 10106ed3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106ed4:;
  /* 10106ed4 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 10106ed7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ed9 je 0x10106ee2 */ if (ZF_) goto L_10106ee2;
  /* 10106edb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106edc call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106ee1u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106edcu); RETCHK(0x10106ee1u, 0x10106edcu); LOADALL;
  /* 10106ee1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106ee2:;
  /* 10106ee2 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 10106ee5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ee7 je 0x10106ef0 */ if (ZF_) goto L_10106ef0;
  /* 10106ee9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106eea call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106eefu; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106eeau); RETCHK(0x10106eefu, 0x10106eeau); LOADALL;
  /* 10106eef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106ef0:;
  /* 10106ef0 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 10106ef3 cmp eax, 0x10110280 */ { u32 a_ = eax, b_ = 0x10110280u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106ef8 je 0x10106f01 */ if (ZF_) goto L_10106f01;
  /* 10106efa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106efb call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106f00u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106efbu); RETCHK(0x10106f00u, 0x10106efbu); LOADALL;
  /* 10106f00 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106f01:;
  /* 10106f01 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10106f03 call 0x101077cb */ esp -= 4; M32(esp) = 0x10106f08u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10106f03u); RETCHK(0x10106f08u, 0x10106f03u); LOADALL;
  /* 10106f08 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106f09 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10106f0c mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 10106f0f mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10106f12 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f14 je 0x10106f29 */ if (ZF_) goto L_10106f29;
  /* 10106f16 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106f18 jne 0x10106f29 */ if (!ZF_) goto L_10106f29;
  /* 10106f1a cmp eax, dword ptr [0x10122188] */ { const u32 m_ = (u32)(0x10122188u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f20 je 0x10106f29 */ if (ZF_) goto L_10106f29;
  /* 10106f22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106f23 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106f28u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106f23u); RETCHK(0x10106f28u, 0x10106f23u); LOADALL;
  /* 10106f28 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106f29:;
  /* 10106f29 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106f2d call 0x10106fb5 */ esp -= 4; M32(esp) = 0x10106f32u; SAVEALL; F_10106fb5(c); ABI_CHECK(0x10106fb5u, 0x10106f2du); RETCHK(0x10106f32u, 0x10106f2du); LOADALL;
  /* 10106f32 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10106f34 call 0x101077cb */ esp -= 4; M32(esp) = 0x10106f39u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10106f34u); RETCHK(0x10106f39u, 0x10106f34u); LOADALL;
  /* 10106f39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106f3a mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10106f41 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 10106f44 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10106f47 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f49 je 0x10106f98 */ if (ZF_) goto L_10106f98;
  /* 10106f4b dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106f4d cmp dword ptr [eax + 0x2c], edi */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f50 je 0x10106f57 */ if (ZF_) goto L_10106f57;
  /* 10106f52 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10106f55 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106f57:;
  /* 10106f57 cmp dword ptr [eax + 0x34], edi */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f5a je 0x10106f61 */ if (ZF_) goto L_10106f61;
  /* 10106f5c mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 10106f5f dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106f61:;
  /* 10106f61 cmp dword ptr [eax + 0x30], edi */ { const u32 m_ = (u32)(eax + 0x30u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f64 je 0x10106f6b */ if (ZF_) goto L_10106f6b;
  /* 10106f66 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 10106f69 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106f6b:;
  /* 10106f6b cmp dword ptr [eax + 0x40], edi */ { const u32 m_ = (u32)(eax + 0x40u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f6e je 0x10106f75 */ if (ZF_) goto L_10106f75;
  /* 10106f70 mov ecx, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10106f73 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10106f75:;
  /* 10106f75 mov ecx, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 10106f78 dec dword ptr [ecx + 0xb4] */ { const u32 m_ = (u32)(ecx + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10106f7e cmp eax, dword ptr [0x101103fc] */ { const u32 m_ = (u32)(0x101103fcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f84 je 0x10106f98 */ if (ZF_) goto L_10106f98;
  /* 10106f86 cmp eax, 0x101103a8 */ { u32 a_ = eax, b_ = 0x101103a8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f8b je 0x10106f98 */ if (ZF_) goto L_10106f98;
  /* 10106f8d cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106f8f jne 0x10106f98 */ if (!ZF_) goto L_10106f98;
  /* 10106f91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106f92 call 0x10109d03 */ esp -= 4; M32(esp) = 0x10106f97u; SAVEALL; F_10109d03(c); ABI_CHECK(0x10109d03u, 0x10106f92u); RETCHK(0x10106f97u, 0x10106f92u); LOADALL;
  /* 10106f97 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106f98:;
  /* 10106f98 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10106f9c call 0x10106fc1 */ esp -= 4; M32(esp) = 0x10106fa1u; SAVEALL; F_10106fc1(c); ABI_CHECK(0x10106fc1u, 0x10106f9cu); RETCHK(0x10106fa1u, 0x10106f9cu); LOADALL;
  /* 10106fa1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10106fa2 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10106fa7u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10106fa2u); RETCHK(0x10106fa7u, 0x10106fa2u); LOADALL;
  /* 10106fa7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10106fa8:;
  /* 10106fa8 call 0x10107387 */ esp -= 4; M32(esp) = 0x10106fadu; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10106fa8u); RETCHK(0x10106fadu, 0x10106fa8u); LOADALL;
  /* 10106fad ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10106fb0(CPU *c) {
  NATIVE_HOOK(0x10106fb0u) REGS; LOADALL;
L_10106fb0:;
  /* 10106fb0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10106fb2 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106fb5 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10106fb7 call 0x10107716 */ esp -= 4; M32(esp) = 0x10106fbcu; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10106fb7u); RETCHK(0x10106fbcu, 0x10106fb7u); LOADALL;
  /* 10106fbc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106fbd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106fb5(CPU *c) {
  NATIVE_HOOK(0x10106fb5u) REGS; LOADALL;
L_10106fb5:;
  /* 10106fb5 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10106fb7 call 0x10107716 */ esp -= 4; M32(esp) = 0x10106fbcu; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10106fb7u); RETCHK(0x10106fbcu, 0x10106fb7u); LOADALL;
  /* 10106fbc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106fbd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106fbe(CPU *c) {
  NATIVE_HOOK(0x10106fbeu) REGS; LOADALL;
L_10106fbe:;
  /* 10106fbe mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10106fc1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10106fc3 call 0x10107716 */ esp -= 4; M32(esp) = 0x10106fc8u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10106fc3u); RETCHK(0x10106fc8u, 0x10106fc3u); LOADALL;
  /* 10106fc8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106fc9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106fc1(CPU *c) {
  NATIVE_HOOK(0x10106fc1u) REGS; LOADALL;
L_10106fc1:;
  /* 10106fc1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10106fc3 call 0x10107716 */ esp -= 4; M32(esp) = 0x10106fc8u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10106fc3u); RETCHK(0x10106fc8u, 0x10106fc3u); LOADALL;
  /* 10106fc8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10106fc9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106fca(CPU *c) {
  NATIVE_HOOK(0x10106fcau) REGS; LOADALL;
L_10106fca:;
  /* 10106fca mov ecx, dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); ecx = (u32)(M32(m_)); }
  /* 10106fd0 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10106fd3 je 0x10106ff8 */ if (ZF_) goto L_10106ff8;
  /* 10106fd5 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10106fd9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10106fdb jne 0x10106fe4 */ if (!ZF_) goto L_10106fe4;
  /* 10106fdd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10106fde call dword ptr [0x10120cc4] */ { const u32 m_ = (u32)(0x10120cc4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106fe4u; SAVEALL; call_ind(c, t_); RETCHK(0x10106fe4u, 0x10106fdeu); LOADALL; }
L_10106fe4:;
  /* 10106fe4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10106fe5 call 0x10106e83 */ esp -= 4; M32(esp) = 0x10106feau; SAVEALL; F_10106e83(c); ABI_CHECK(0x10106e83u, 0x10106fe5u); RETCHK(0x10106feau, 0x10106fe5u); LOADALL;
  /* 10106fea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10106fec push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10106ff2 call dword ptr [0x10120cc8] */ { const u32 m_ = (u32)(0x10120cc8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10106ff8u; SAVEALL; call_ind(c, t_); RETCHK(0x10106ff8u, 0x10106ff2u); LOADALL; }
L_10106ff8:;
  /* 10106ff8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10106ff9(CPU *c) {
  NATIVE_HOOK(0x10106ff9u) REGS; LOADALL;
L_10106ff9:;
  /* 10106ff9 call 0x10107678 */ esp -= 4; M32(esp) = 0x10106ffeu; SAVEALL; F_10107678(c); ABI_CHECK(0x10107678u, 0x10106ff9u); RETCHK(0x10106ffeu, 0x10106ff9u); LOADALL;
  /* 10106ffe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107000 jne 0x1010700a */ if (!ZF_) goto L_1010700a;
  /* 10107002 call 0x10106de2 */ esp -= 4; M32(esp) = 0x10107007u; SAVEALL; F_10106de2(c); ABI_CHECK(0x10106de2u, 0x10107002u); RETCHK(0x10107007u, 0x10107002u); LOADALL;
  /* 10107007 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107009 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010700a:;
  /* 1010700a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010700b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010700c push 0x1010d424 */ { u32 v_ = 0x1010d424u; esp -= 4; M32(esp) = v_; }
  /* 10107011 call dword ptr [0x1010d044] */ { const u32 m_ = (u32)(0x1010d044u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107017u; SAVEALL; call_ind(c, t_); RETCHK(0x10107017u, 0x10107011u); LOADALL; }
  /* 10107017 mov edi, eax */ { edi = (u32)(eax); }
  /* 10107019 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010701b je 0x10107088 */ if (ZF_) goto L_10107088;
  /* 1010701d mov esi, dword ptr [0x1010d040] */ { const u32 m_ = (u32)(0x1010d040u); esi = (u32)(M32(m_)); }
  /* 10107023 push 0x1010d418 */ { u32 v_ = 0x1010d418u; esp -= 4; M32(esp) = v_; }
  /* 10107028 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107029 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1010702bu; SAVEALL; call_ind(c, t_); RETCHK(0x1010702bu, 0x10107029u); LOADALL; }
  /* 1010702b push 0x1010d40c */ { u32 v_ = 0x1010d40cu; esp -= 4; M32(esp) = v_; }
  /* 10107030 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107031 mov dword ptr [0x10120cc0], eax */ { const u32 m_ = (u32)(0x10120cc0u); M32(m_) = (u32)(eax); }
  /* 10107036 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10107038u; SAVEALL; call_ind(c, t_); RETCHK(0x10107038u, 0x10107036u); LOADALL; }
  /* 10107038 push 0x1010d400 */ { u32 v_ = 0x1010d400u; esp -= 4; M32(esp) = v_; }
  /* 1010703d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010703e mov dword ptr [0x10120cc4], eax */ { const u32 m_ = (u32)(0x10120cc4u); M32(m_) = (u32)(eax); }
  /* 10107043 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10107045u; SAVEALL; call_ind(c, t_); RETCHK(0x10107045u, 0x10107043u); LOADALL; }
  /* 10107045 push 0x1010d3f8 */ { u32 v_ = 0x1010d3f8u; esp -= 4; M32(esp) = v_; }
  /* 1010704a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010704b mov dword ptr [0x10120cc8], eax */ { const u32 m_ = (u32)(0x10120cc8u); M32(m_) = (u32)(eax); }
  /* 10107050 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10107052u; SAVEALL; call_ind(c, t_); RETCHK(0x10107052u, 0x10107050u); LOADALL; }
  /* 10107052 cmp dword ptr [0x10120cc4], 0 */ { const u32 m_ = (u32)(0x10120cc4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107059 mov dword ptr [0x10120ccc], eax */ { const u32 m_ = (u32)(0x10120cccu); M32(m_) = (u32)(eax); }
  /* 1010705e jne 0x10107088 */ if (!ZF_) goto L_10107088;
  /* 10107060 mov eax, dword ptr [0x1010d03c] */ { const u32 m_ = (u32)(0x1010d03cu); eax = (u32)(M32(m_)); }
  /* 10107065 mov dword ptr [0x10120cc4], eax */ { const u32 m_ = (u32)(0x10120cc4u); M32(m_) = (u32)(eax); }
  /* 1010706a mov eax, dword ptr [0x1010d038] */ { const u32 m_ = (u32)(0x1010d038u); eax = (u32)(M32(m_)); }
  /* 1010706f mov dword ptr [0x10120cc8], eax */ { const u32 m_ = (u32)(0x10120cc8u); M32(m_) = (u32)(eax); }
  /* 10107074 mov eax, dword ptr [0x1010d034] */ { const u32 m_ = (u32)(0x1010d034u); eax = (u32)(M32(m_)); }
  /* 10107079 mov dword ptr [0x10120cc0], 0x10106dd9 */ { const u32 m_ = (u32)(0x10120cc0u); M32(m_) = (u32)(0x10106dd9u); }
  /* 10107083 mov dword ptr [0x10120ccc], eax */ { const u32 m_ = (u32)(0x10120cccu); M32(m_) = (u32)(eax); }
L_10107088:;
  /* 10107088 push 0x10106e83 */ { u32 v_ = 0x10106e83u; esp -= 4; M32(esp) = v_; }
  /* 1010708d call dword ptr [0x10120cc0] */ { const u32 m_ = (u32)(0x10120cc0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107093u; SAVEALL; call_ind(c, t_); RETCHK(0x10107093u, 0x1010708du); LOADALL; }
  /* 10107093 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107096 mov dword ptr [0x10110124], eax */ { const u32 m_ = (u32)(0x10110124u); M32(m_) = (u32)(eax); }
  /* 1010709b je 0x101070de */ if (ZF_) goto L_101070de;
  /* 1010709d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1010709f push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 101070a4 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101070a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101070a6 call 0x101085f3 */ esp -= 4; M32(esp) = 0x101070abu; SAVEALL; F_101085f3(c); ABI_CHECK(0x101085f3u, 0x101070a6u); RETCHK(0x101070abu, 0x101070a6u); LOADALL;
  /* 101070ab mov esi, eax */ { esi = (u32)(eax); }
  /* 101070ad test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101070af pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101070b0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101070b1 je 0x101070de */ if (ZF_) goto L_101070de;
  /* 101070b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101070b4 push dword ptr [0x10110124] */ { const u32 m_ = (u32)(0x10110124u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101070ba call dword ptr [0x10120cc8] */ { const u32 m_ = (u32)(0x10120cc8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101070c0u; SAVEALL; call_ind(c, t_); RETCHK(0x101070c0u, 0x101070bau); LOADALL; }
  /* 101070c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101070c2 je 0x101070de */ if (ZF_) goto L_101070de;
  /* 101070c4 mov dword ptr [esi + 0x54], 0x10110280 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x10110280u); }
  /* 101070cb mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 101070ce call dword ptr [0x1010d018] */ { const u32 m_ = (u32)(0x1010d018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101070d4u; SAVEALL; call_ind(c, t_); RETCHK(0x101070d4u, 0x101070ceu); LOADALL; }
  /* 101070d4 or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101070d8 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 101070da mov eax, edi */ { eax = (u32)(edi); }
  /* 101070dc jmp 0x101070e5 */ goto L_101070e5;
L_101070de:;
  /* 101070de call 0x10106de2 */ esp -= 4; M32(esp) = 0x101070e3u; SAVEALL; F_10106de2(c); ABI_CHECK(0x10106de2u, 0x101070deu); RETCHK(0x101070e3u, 0x101070deu); LOADALL;
  /* 101070e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_101070e5:;
  /* 101070e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101070e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101070e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101070e8(CPU *c) {
  NATIVE_HOOK(0x101070e8u) REGS; LOADALL;
L_101070e8:;
  /* 101070e8 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 101070ea push 0x1010d438 */ { u32 v_ = 0x1010d438u; esp -= 4; M32(esp) = v_; }
  /* 101070ef call 0x1010734c */ esp -= 4; M32(esp) = 0x101070f4u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x101070efu); RETCHK(0x101070f4u, 0x101070efu); LOADALL;
  /* 101070f4 call 0x10106e12 */ esp -= 4; M32(esp) = 0x101070f9u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x101070f4u); RETCHK(0x101070f9u, 0x101070f4u); LOADALL;
  /* 101070f9 cmp dword ptr [eax + 0x6c], 0 */ { const u32 m_ = (u32)(eax + 0x6cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101070fd je 0x10107118 */ if (ZF_) goto L_10107118;
  /* 101070ff and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107103 call 0x10106e12 */ esp -= 4; M32(esp) = 0x10107108u; SAVEALL; F_10106e12(c); ABI_CHECK(0x10106e12u, 0x10107103u); RETCHK(0x10107108u, 0x10107103u); LOADALL;
  /* 10107108 call dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010710bu; SAVEALL; call_ind(c, t_); RETCHK(0x1010710bu, 0x10107108u); LOADALL; }
  /* 1010710b jmp 0x10107114 */ goto L_10107114;
L_10107114:;
  /* 10107114 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10107118:;
  /* 10107118 jmp 0x1010a3b1 */ goto L_1010a3b1;
L_1010a3b1:;
  /* 1010a3b1 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 1010a3b3 call 0x10108fe0 */ esp -= 4; M32(esp) = 0x1010a3b8u; SAVEALL; F_10108fe0(c); ABI_CHECK(0x10108fe0u, 0x1010a3b3u); RETCHK(0x1010a3b8u, 0x1010a3b3u); LOADALL;
  /* 1010a3b8 push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 1010a3ba call 0x1010b90a */ esp -= 4; M32(esp) = 0x1010a3bfu; SAVEALL; F_1010b90a(c); ABI_CHECK(0x1010b90au, 0x1010a3bau); RETCHK(0x1010a3bfu, 0x1010a3bau); LOADALL;
  /* 1010a3bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010a3c0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010a3c1 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1010a3c3 call 0x10107bbc */ esp -= 4; M32(esp) = 0x1010a3c8u; SAVEALL; F_10107bbc(c); ABI_CHECK(0x10107bbcu, 0x1010a3c3u); RETCHK(0x1010a3c8u, 0x1010a3c3u); LOADALL;
  /* 1010a3c8 int3 */ TRAP(0x1010a3c8u, "int3");
}

void F_1010710d(CPU *c) {
  NATIVE_HOOK(0x1010710du) REGS; LOADALL;
L_1010710d:;
  /* 1010710d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010710f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107110 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107111(CPU *c) {
  NATIVE_HOOK(0x10107111u) REGS; LOADALL;
L_10107111:;
  /* 10107111 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10107114 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107118 jmp 0x1010a3b1 */ goto L_1010a3b1;
L_1010a3b1:;
  /* 1010a3b1 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 1010a3b3 call 0x10108fe0 */ esp -= 4; M32(esp) = 0x1010a3b8u; SAVEALL; F_10108fe0(c); ABI_CHECK(0x10108fe0u, 0x1010a3b3u); RETCHK(0x1010a3b8u, 0x1010a3b3u); LOADALL;
  /* 1010a3b8 push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 1010a3ba call 0x1010b90a */ esp -= 4; M32(esp) = 0x1010a3bfu; SAVEALL; F_1010b90a(c); ABI_CHECK(0x1010b90au, 0x1010a3bau); RETCHK(0x1010a3bfu, 0x1010a3bau); LOADALL;
  /* 1010a3bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010a3c0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010a3c1 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1010a3c3 call 0x10107bbc */ esp -= 4; M32(esp) = 0x1010a3c8u; SAVEALL; F_10107bbc(c); ABI_CHECK(0x10107bbcu, 0x1010a3c3u); RETCHK(0x1010a3c8u, 0x1010a3c3u); LOADALL;
  /* 1010a3c8 int3 */ TRAP(0x1010a3c8u, "int3");
}

void F_1010711d(CPU *c) {
  NATIVE_HOOK(0x1010711du) REGS; LOADALL;
L_1010711d:;
  /* 1010711d push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1010711f push 0x1010d448 */ { u32 v_ = 0x1010d448u; esp -= 4; M32(esp) = v_; }
  /* 10107124 call 0x1010734c */ esp -= 4; M32(esp) = 0x10107129u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10107124u); RETCHK(0x10107129u, 0x10107124u); LOADALL;
  /* 10107129 mov eax, dword ptr [0x10110128] */ { const u32 m_ = (u32)(0x10110128u); eax = (u32)(M32(m_)); }
  /* 1010712e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107130 je 0x10107145 */ if (ZF_) goto L_10107145;
  /* 10107132 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107136 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107138u; SAVEALL; call_ind(c, t_); RETCHK(0x10107138u, 0x10107136u); LOADALL; }
  /* 10107138 jmp 0x10107141 */ goto L_10107141;
L_10107141:;
  /* 10107141 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10107145:;
  /* 10107145 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_1010713a(CPU *c) {
  NATIVE_HOOK(0x1010713au) REGS; LOADALL;
L_1010713a:;
  /* 1010713a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010713c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010713d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010713e(CPU *c) {
  NATIVE_HOOK(0x1010713eu) REGS; LOADALL;
L_1010713e:;
  /* 1010713e mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10107141 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107145 jmp 0x101070e8 */ SAVEALL; F_101070e8(c); return;
}

void F_10107150(CPU *c) {
  NATIVE_HOOK(0x10107150u) REGS; LOADALL;
L_10107150:;
  /* 10107150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10107153 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107156 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107157 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10107158 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1010715b add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010715e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10107161 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107164 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107165 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107168 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1010716b mov ebp, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebp = (u32)(M32(m_)); }
  /* 1010716e call 0x101056bd */ esp -= 4; M32(esp) = 0x10107173u; SAVEALL; F_101056bd(c); ABI_CHECK(0x101056bdu, 0x1010716eu); RETCHK(0x10107173u, 0x1010716eu); LOADALL;
  /* 10107173 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107174 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107175 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107177u; SAVEALL; call_ind(c, t_); RETCHK(0x10107177u, 0x10107175u); LOADALL; }
  /* 10107177 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107178 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107179 mov ebx, ebp */ { ebx = (u32)(ebp); }
  /* 1010717b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010717c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1010717f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107180 mov ebp, ebx */ { ebp = (u32)(ebx); }
  /* 10107182 cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107188 jne 0x1010718f */ if (!ZF_) goto L_1010718f;
  /* 1010718a mov ecx, 2 */ { ecx = (u32)(0x2u); }
L_1010718f:;
  /* 1010718f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10107190 call 0x101056bd */ esp -= 4; M32(esp) = 0x10107195u; SAVEALL; F_101056bd(c); ABI_CHECK(0x101056bdu, 0x10107190u); RETCHK(0x10107195u, 0x10107190u); LOADALL;
  /* 10107195 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107196 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107197 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107198 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10107199 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1010719c(CPU *c) {
  NATIVE_HOOK(0x1010719cu) REGS; LOADALL;
L_1010719c:;
  /* 1010719c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010719d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1010719f sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101071a2 mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 101071a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101071a9 je 0x101071b2 */ if (ZF_) goto L_101071b2;
  /* 101071ab cmp eax, 0xbb40e64e */ { u32 a_ = eax, b_ = 0xbb40e64eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101071b0 jne 0x10107200 */ if (!ZF_) goto L_10107200;
L_101071b2:;
  /* 101071b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101071b3 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 101071b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101071b7 call dword ptr [0x1010d054] */ { const u32 m_ = (u32)(0x1010d054u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071bdu; SAVEALL; call_ind(c, t_); RETCHK(0x101071bdu, 0x101071b7u); LOADALL; }
  /* 101071bd mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 101071c0 xor esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071c3 call dword ptr [0x1010d050] */ { const u32 m_ = (u32)(0x1010d050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071c9u; SAVEALL; call_ind(c, t_); RETCHK(0x101071c9u, 0x101071c3u); LOADALL; }
  /* 101071c9 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071cb call dword ptr [0x1010d018] */ { const u32 m_ = (u32)(0x1010d018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071d1u; SAVEALL; call_ind(c, t_); RETCHK(0x101071d1u, 0x101071cbu); LOADALL; }
  /* 101071d1 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071d3 call dword ptr [0x1010d04c] */ { const u32 m_ = (u32)(0x1010d04cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071d9u; SAVEALL; call_ind(c, t_); RETCHK(0x101071d9u, 0x101071d3u); LOADALL; }
  /* 101071d9 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071db lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 101071de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101071df call dword ptr [0x1010d048] */ { const u32 m_ = (u32)(0x1010d048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101071e5u; SAVEALL; call_ind(c, t_); RETCHK(0x101071e5u, 0x101071dfu); LOADALL; }
  /* 101071e5 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 101071e8 xor eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101071eb xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101071ed mov dword ptr [0x101100f0], esi */ { const u32 m_ = (u32)(0x101100f0u); M32(m_) = (u32)(esi); }
  /* 101071f3 jne 0x101071ff */ if (!ZF_) goto L_101071ff;
  /* 101071f5 mov dword ptr [0x101100f0], 0xbb40e64e */ { const u32 m_ = (u32)(0x101100f0u); M32(m_) = (u32)(0xbb40e64eu); }
L_101071ff:;
  /* 101071ff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10107200:;
  /* 10107200 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10107201 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107202(CPU *c) {
  NATIVE_HOOK(0x10107202u) REGS; LOADALL;
L_10107202:;
  /* 10107202 push 0x118 */ { u32 v_ = 0x118u; esp -= 4; M32(esp) = v_; }
  /* 10107207 push 0x1010d640 */ { u32 v_ = 0x1010d640u; esp -= 4; M32(esp) = v_; }
  /* 1010720c call 0x1010734c */ esp -= 4; M32(esp) = 0x10107211u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x1010720cu); RETCHK(0x10107211u, 0x1010720cu); LOADALL;
  /* 10107211 mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10107216 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10107219 mov eax, dword ptr [0x10120cd0] */ { const u32 m_ = (u32)(0x10120cd0u); eax = (u32)(M32(m_)); }
  /* 1010721e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10107220 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107222 je 0x10107243 */ if (ZF_) goto L_10107243;
  /* 10107224 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10107227 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010722a push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010722d call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1010722fu; SAVEALL; call_ind(c, t_); RETCHK(0x1010722fu, 0x1010722du); LOADALL; }
  /* 1010722f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107230 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107231 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107235 jmp 0x10107342 */ goto L_10107342;
L_10107243:;
  /* 10107243 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107246 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107247 je 0x1010725f */ if (ZF_) goto L_1010725f;
  /* 10107249 mov edi, 0x1010d61c */ { edi = (u32)(0x1010d61cu); }
  /* 1010724e mov dword ptr [ebp - 0x128], 0x1010d568 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x1010d568u); }
  /* 10107258 mov esi, 0xd4 */ { esi = (u32)(0xd4u); }
  /* 1010725d jmp 0x10107273 */ goto L_10107273;
L_1010725f:;
  /* 1010725f mov edi, 0x1010d548 */ { edi = (u32)(0x1010d548u); }
  /* 10107264 mov dword ptr [ebp - 0x128], 0x1010d4a8 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x1010d4a8u); }
  /* 1010726e mov esi, 0xb9 */ { esi = (u32)(0xb9u); }
L_10107273:;
  /* 10107273 mov byte ptr [ebp - 0x20], cl */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10107276 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 1010727b lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 10107281 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107282 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10107283 call dword ptr [0x1010d058] */ { const u32 m_ = (u32)(0x1010d058u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107289u; SAVEALL; call_ind(c, t_); RETCHK(0x10107289u, 0x10107283u); LOADALL; }
  /* 10107289 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010728b jne 0x101072a0 */ if (!ZF_) goto L_101072a0;
  /* 1010728d push 0x1010d490 */ { u32 v_ = 0x1010d490u; esp -= 4; M32(esp) = v_; }
  /* 10107292 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 10107298 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107299 call 0x10107580 */ esp -= 4; M32(esp) = 0x1010729eu; SAVEALL; F_10107580(c); ABI_CHECK(0x10107580u, 0x10107299u); RETCHK(0x1010729eu, 0x10107299u); LOADALL;
  /* 1010729e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010729f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101072a0:;
  /* 101072a0 lea ebx, [ebp - 0x124] */ ebx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 101072a6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 101072a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101072a9 call 0x10106140 */ esp -= 4; M32(esp) = 0x101072aeu; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101072a9u); RETCHK(0x101072aeu, 0x101072a9u); LOADALL;
  /* 101072ae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101072af add eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101072b2 cmp eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101072b5 jbe 0x101072dc */ if ((CF_|ZF_)) goto L_101072dc;
  /* 101072b7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 101072b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101072ba call 0x10106140 */ esp -= 4; M32(esp) = 0x101072bfu; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101072bau); RETCHK(0x101072bfu, 0x101072bau); LOADALL;
  /* 101072bf mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101072c1 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 101072c7 sub eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101072ca add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 101072cc push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 101072ce push 0x1010d48c */ { u32 v_ = 0x1010d48cu; esp -= 4; M32(esp) = v_; }
  /* 101072d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101072d4 call 0x101050f0 */ esp -= 4; M32(esp) = 0x101072d9u; SAVEALL; F_101050f0(c); ABI_CHECK(0x101050f0u, 0x101072d4u); RETCHK(0x101072d9u, 0x101072d4u); LOADALL;
  /* 101072d9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101072dc:;
  /* 101072dc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101072dd call 0x10106140 */ esp -= 4; M32(esp) = 0x101072e2u; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101072ddu); RETCHK(0x101072e2u, 0x101072ddu); LOADALL;
  /* 101072e2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101072e3 lea eax, [eax + esi + 0xc] */ eax = (u32)((u32)(eax + esi + 0xcu));
  /* 101072e7 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101072ea and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101072ed call 0x10105720 */ esp -= 4; M32(esp) = 0x101072f2u; SAVEALL; F_10105720(c); ABI_CHECK(0x10105720u, 0x101072edu); RETCHK(0x101072f2u, 0x101072edu); LOADALL;
  /* 101072f2 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 101072f5 mov esi, esp */ { esi = (u32)(esp); }
  /* 101072f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101072f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101072f9 call 0x10107580 */ esp -= 4; M32(esp) = 0x101072feu; SAVEALL; F_10107580(c); ABI_CHECK(0x10107580u, 0x101072f9u); RETCHK(0x101072feu, 0x101072f9u); LOADALL;
  /* 101072fe mov edi, 0x1010d488 */ { edi = (u32)(0x1010d488u); }
  /* 10107303 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107304 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107305 call 0x10107590 */ esp -= 4; M32(esp) = 0x1010730au; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x10107305u); RETCHK(0x1010730au, 0x10107305u); LOADALL;
  /* 1010730a push 0x1010d47c */ { u32 v_ = 0x1010d47cu; esp -= 4; M32(esp) = v_; }
  /* 1010730f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107310 call 0x10107590 */ esp -= 4; M32(esp) = 0x10107315u; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x10107310u); RETCHK(0x10107315u, 0x10107310u); LOADALL;
  /* 10107315 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107316 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107317 call 0x10107590 */ esp -= 4; M32(esp) = 0x1010731cu; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x10107317u); RETCHK(0x1010731cu, 0x10107317u); LOADALL;
  /* 1010731c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010731d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010731e call 0x10107590 */ esp -= 4; M32(esp) = 0x10107323u; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x1010731eu); RETCHK(0x10107323u, 0x1010731eu); LOADALL;
  /* 10107323 push dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107329 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010732a call 0x10107590 */ esp -= 4; M32(esp) = 0x1010732fu; SAVEALL; F_10107590(c); ABI_CHECK(0x10107590u, 0x1010732au); RETCHK(0x1010732fu, 0x1010732au); LOADALL;
  /* 1010732f push 0x12010 */ { u32 v_ = 0x12010u; esp -= 4; M32(esp) = v_; }
  /* 10107334 push 0x1010d454 */ { u32 v_ = 0x1010d454u; esp -= 4; M32(esp) = v_; }
  /* 10107339 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010733a call 0x1010a3c9 */ esp -= 4; M32(esp) = 0x1010733fu; SAVEALL; F_1010a3c9(c); ABI_CHECK(0x1010a3c9u, 0x1010733au); RETCHK(0x1010733fu, 0x1010733au); LOADALL;
  /* 1010733f add esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10107342:;
  /* 10107342 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10107344 call 0x10107bbc */ esp -= 4; M32(esp) = 0x10107349u; SAVEALL; F_10107bbc(c); ABI_CHECK(0x10107bbcu, 0x10107344u); RETCHK(0x10107349u, 0x10107344u); LOADALL;
  /* 10107349 int3 */ TRAP(0x10107349u, "int3");
}

void F_1010723a(CPU *c) {
  NATIVE_HOOK(0x1010723au) REGS; LOADALL;
L_1010723a:;
  /* 1010723a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010723c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010723d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010723e(CPU *c) {
  NATIVE_HOOK(0x1010723eu) REGS; LOADALL;
  goto L_1010723e;
L_10107231:;
  /* 10107231 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107235 jmp 0x10107342 */ goto L_10107342;
L_1010723e:;
  /* 1010723e mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10107241 jmp 0x10107231 */ goto L_10107231;
L_10107342:;
  /* 10107342 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10107344 call 0x10107bbc */ esp -= 4; M32(esp) = 0x10107349u; SAVEALL; F_10107bbc(c); ABI_CHECK(0x10107bbcu, 0x10107344u); RETCHK(0x10107349u, 0x10107344u); LOADALL;
  /* 10107349 int3 */ TRAP(0x10107349u, "int3");
}

void F_1010734c(CPU *c) {
  NATIVE_HOOK(0x1010734cu) REGS; LOADALL;
L_1010734c:;
  /* 1010734c push 0x101073a0 */ { u32 v_ = 0x101073a0u; esp -= 4; M32(esp) = v_; }
  /* 10107351 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10107357 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107358 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1010735c mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 10107360 lea ebp, [esp + 0x10] */ ebp = (u32)((u32)(esp + 0x10u));
  /* 10107364 sub esp, eax */ { u32 a_ = esp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107366 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107367 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107368 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107369 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1010736c mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 1010736f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107370 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107373 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 1010737a mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 1010737d lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10107380 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10107386 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107387(CPU *c) {
  NATIVE_HOOK(0x10107387u) REGS; LOADALL;
L_10107387:;
  /* 10107387 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1010738a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10107391 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107392 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107393 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107394 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107395 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10107396 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10107397 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101073a0(CPU *c) {
  NATIVE_HOOK(0x101073a0u) REGS; LOADALL;
L_101073a0:;
  /* 101073a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101073a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101073a3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101073a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101073a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101073a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101073a9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101073aa cld */ c->df = 0;
  /* 101073ab mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 101073ae mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101073b1 test dword ptr [eax + 4], 6 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101073b8 jne 0x10107469 */ if (!ZF_) goto L_10107469;
  /* 101073be mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 101073c1 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 101073c4 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101073c7 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 101073ca mov dword ptr [ebx - 4], eax */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101073cd mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 101073d0 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 101073d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101073d4 call 0x1010a4c2 */ esp -= 4; M32(esp) = 0x101073d9u; SAVEALL; F_1010a4c2(c); ABI_CHECK(0x1010a4c2u, 0x101073d4u); RETCHK(0x101073d9u, 0x101073d4u); LOADALL;
  /* 101073d9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101073dc or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101073de je 0x1010745b */ if (ZF_) goto L_1010745b;
L_101073e0:;
  /* 101073e0 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101073e3 je 0x10107462 */ if (ZF_) goto L_10107462;
  /* 101073e5 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 101073e8 mov eax, dword ptr [edi + ecx*4 + 4] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 101073ec or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101073ee je 0x10107449 */ if (ZF_) goto L_10107449;
  /* 101073f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101073f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101073f2 lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 101073f5 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 101073f7 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 101073f9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 101073fb xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101073fd xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 101073ff call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107401u; SAVEALL; call_ind(c, t_); RETCHK(0x10107401u, 0x101073ffu); LOADALL; }
  /* 10107401 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107402 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107403 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10107406 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107408 je 0x10107449 */ if (ZF_) goto L_10107449;
  /* 1010740a js 0x10107454 */ if (SF_) goto L_10107454;
  /* 1010740c mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 1010740f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107410 call 0x101055f0 */ esp -= 4; M32(esp) = 0x10107415u; SAVEALL; F_101055f0(c); ABI_CHECK(0x101055f0u, 0x10107410u); RETCHK(0x10107415u, 0x10107410u); LOADALL;
  /* 10107415 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107418 lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 1010741b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010741c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010741d call 0x10105632 */ esp -= 4; M32(esp) = 0x10107422u; SAVEALL; F_10105632(c); ABI_CHECK(0x10105632u, 0x1010741du); RETCHK(0x10107422u, 0x1010741du); LOADALL;
  /* 10107422 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107425 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 10107428 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1010742a mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010742e call 0x101056c6 */ esp -= 4; M32(esp) = 0x10107433u; SAVEALL; F_101056c6(c); ABI_CHECK(0x101056c6u, 0x1010742eu); RETCHK(0x10107433u, 0x1010742eu); LOADALL;
  /* 10107433 mov eax, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); eax = (u32)(M32(m_)); }
  /* 10107436 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10107439 mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010743d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1010743f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10107441 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10107443 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10107445 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10107447 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107449u; SAVEALL; call_ind(c, t_); RETCHK(0x10107449u, 0x10107447u); LOADALL; }
L_10107449:;
  /* 10107449 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 1010744c lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 1010744f mov esi, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 10107452 jmp 0x101073e0 */ goto L_101073e0;
L_10107454:;
  /* 10107454 mov eax, 0 */ { eax = (u32)(0x0u); }
  /* 10107459 jmp 0x1010747e */ goto L_1010747e;
L_1010745b:;
  /* 1010745b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010745e or dword ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10107462:;
  /* 10107462 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10107467 jmp 0x1010747e */ goto L_1010747e;
L_10107469:;
  /* 10107469 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010746a lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 1010746d push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 1010746f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107470 call 0x10105632 */ esp -= 4; M32(esp) = 0x10107475u; SAVEALL; F_10105632(c); ABI_CHECK(0x10105632u, 0x10107470u); RETCHK(0x10107475u, 0x10107470u); LOADALL;
  /* 10107475 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107478 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107479 mov eax, 1 */ { eax = (u32)(0x1u); }
L_1010747e:;
  /* 1010747e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010747f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107480 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107481 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107482 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10107484 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107485 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101074a1(CPU *c) {
  NATIVE_HOOK(0x101074a1u) REGS; LOADALL;
L_101074a1:;
  /* 101074a1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 101074a3 push 0x1010d650 */ { u32 v_ = 0x1010d650u; esp -= 4; M32(esp) = v_; }
  /* 101074a8 call 0x1010734c */ esp -= 4; M32(esp) = 0x101074adu; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x101074a8u); RETCHK(0x101074adu, 0x101074a8u); LOADALL;
  /* 101074ad mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 101074b0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101074b2 je 0x1010750c */ if (ZF_) goto L_1010750c;
  /* 101074b4 cmp dword ptr [0x101223e0], 3 */ { const u32 m_ = (u32)(0x101223e0u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101074bb jne 0x101074fd */ if (!ZF_) goto L_101074fd;
  /* 101074bd push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101074bf call 0x101077cb */ esp -= 4; M32(esp) = 0x101074c4u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x101074bfu); RETCHK(0x101074c4u, 0x101074bfu); LOADALL;
  /* 101074c4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101074c5 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101074c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101074ca call 0x101091d8 */ esp -= 4; M32(esp) = 0x101074cfu; SAVEALL; F_101091d8(c); ABI_CHECK(0x101091d8u, 0x101074cau); RETCHK(0x101074cfu, 0x101074cau); LOADALL;
  /* 101074cf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101074d0 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 101074d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101074d5 je 0x101074e0 */ if (ZF_) goto L_101074e0;
  /* 101074d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101074d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101074d9 call 0x10109203 */ esp -= 4; M32(esp) = 0x101074deu; SAVEALL; F_10109203(c); ABI_CHECK(0x10109203u, 0x101074d9u); RETCHK(0x101074deu, 0x101074d9u); LOADALL;
  /* 101074de pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101074df pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101074e0:;
  /* 101074e0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101074e4 call 0x101074f4 */ esp -= 4; M32(esp) = 0x101074e9u; SAVEALL; F_101074f4(c); ABI_CHECK(0x101074f4u, 0x101074e4u); RETCHK(0x101074e9u, 0x101074e4u); LOADALL;
  /* 101074e9 cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101074ed jne 0x1010750c */ if (!ZF_) goto L_1010750c;
  /* 101074ef push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101074f2 jmp 0x101074fe */ goto L_101074fe;
L_101074fd:;
  /* 101074fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_101074fe:;
  /* 101074fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10107500 push dword ptr [0x101223dc] */ { const u32 m_ = (u32)(0x101223dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107506 call dword ptr [0x1010d05c] */ { const u32 m_ = (u32)(0x1010d05cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010750cu; SAVEALL; call_ind(c, t_); RETCHK(0x1010750cu, 0x10107506u); LOADALL; }
L_1010750c:;
  /* 1010750c call 0x10107387 */ esp -= 4; M32(esp) = 0x10107511u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x1010750cu); RETCHK(0x10107511u, 0x1010750cu); LOADALL;
  /* 10107511 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101074f4(CPU *c) {
  NATIVE_HOOK(0x101074f4u) REGS; LOADALL;
L_101074f4:;
  /* 101074f4 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101074f6 call 0x10107716 */ esp -= 4; M32(esp) = 0x101074fbu; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101074f6u); RETCHK(0x101074fbu, 0x101074f6u); LOADALL;
  /* 101074fb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101074fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107512(CPU *c) {
  NATIVE_HOOK(0x10107512u) REGS; LOADALL;
L_10107512:;
  /* 10107512 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107513 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10107517 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10107519 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010751f jne 0x1010753d */ if (!ZF_) goto L_1010753d;
  /* 10107521 cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107525 jne 0x1010753d */ if (!ZF_) goto L_1010753d;
  /* 10107527 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 1010752a cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010752f je 0x10107538 */ if (ZF_) goto L_10107538;
  /* 10107531 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107536 jne 0x1010753d */ if (!ZF_) goto L_1010753d;
L_10107538:;
  /* 10107538 call 0x101070e8 */ esp -= 4; M32(esp) = 0x1010753du; SAVEALL; F_101070e8(c); ABI_CHECK(0x101070e8u, 0x10107538u); RETCHK(0x1010753du, 0x10107538u); LOADALL;
L_1010753d:;
  /* 1010753d mov eax, dword ptr [0x10120cd4] */ { const u32 m_ = (u32)(0x10120cd4u); eax = (u32)(M32(m_)); }
  /* 10107542 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107544 je 0x1010755a */ if (ZF_) goto L_1010755a;
  /* 10107546 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107547 call 0x10109ceb */ esp -= 4; M32(esp) = 0x1010754cu; SAVEALL; F_10109ceb(c); ABI_CHECK(0x10109cebu, 0x10107547u); RETCHK(0x1010754cu, 0x10107547u); LOADALL;
  /* 1010754c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010754e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010754f je 0x1010755a */ if (ZF_) goto L_1010755a;
  /* 10107551 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107552 call dword ptr [0x10120cd4] */ { const u32 m_ = (u32)(0x10120cd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107558u; SAVEALL; call_ind(c, t_); RETCHK(0x10107558u, 0x10107552u); LOADALL; }
  /* 10107558 jmp 0x1010755c */ goto L_1010755c;
L_1010755a:;
  /* 1010755a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1010755c:;
  /* 1010755c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1010755d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10107560(CPU *c) {
  NATIVE_HOOK(0x10107560u) REGS; LOADALL;
L_10107560:;
  /* 10107560 push 0x10107512 */ { u32 v_ = 0x10107512u; esp -= 4; M32(esp) = v_; }
  /* 10107565 call dword ptr [0x1010d060] */ { const u32 m_ = (u32)(0x1010d060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010756bu; SAVEALL; call_ind(c, t_); RETCHK(0x1010756bu, 0x10107565u); LOADALL; }
  /* 1010756b mov dword ptr [0x10120cd4], eax */ { const u32 m_ = (u32)(0x10120cd4u); M32(m_) = (u32)(eax); }
  /* 10107570 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107572 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107573(CPU *c) {
  NATIVE_HOOK(0x10107573u) REGS; LOADALL;
L_10107573:;
  /* 10107573 push dword ptr [0x10120cd4] */ { const u32 m_ = (u32)(0x10120cd4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107579 call dword ptr [0x1010d060] */ { const u32 m_ = (u32)(0x1010d060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010757fu; SAVEALL; call_ind(c, t_); RETCHK(0x1010757fu, 0x10107579u); LOADALL; }
  /* 1010757f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107580(CPU *c) {
  NATIVE_HOOK(0x10107580u) REGS; LOADALL;
L_10107580:;
  /* 10107580 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107581 mov edi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10107585 jmp 0x101075f5 */ goto L_101075f5;
L_101075f5:;
  /* 101075f5 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101075f9 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075ff je 0x1010761e */ if (ZF_) goto L_1010761e;
L_10107601:;
  /* 10107601 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107603 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107606 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107608 je 0x10107670 */ if (ZF_) goto L_10107670;
  /* 1010760a mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1010760c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010760f test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107615 jne 0x10107601 */ if (!ZF_) goto L_10107601;
  /* 10107617 jmp 0x1010761e */ goto L_1010761e;
L_10107619:;
  /* 10107619 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 1010761b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_1010761e:;
  /* 1010761e mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10107623 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10107625 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10107627 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010762a xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010762c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 1010762e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107631 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107636 je 0x10107619 */ if (ZF_) goto L_10107619;
  /* 10107638 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010763a je 0x10107670 */ if (ZF_) goto L_10107670;
  /* 1010763c test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010763e je 0x10107667 */ if (ZF_) goto L_10107667;
  /* 10107640 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107646 je 0x1010765a */ if (ZF_) goto L_1010765a;
  /* 10107648 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010764e je 0x10107652 */ if (ZF_) goto L_10107652;
  /* 10107650 jmp 0x10107619 */ goto L_10107619;
L_10107652:;
  /* 10107652 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10107654 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107658 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107659 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010765a:;
  /* 1010765a mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1010765d mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107661 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10107665 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107666 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107667:;
  /* 10107667 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1010766a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010766e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010766f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107670:;
  /* 10107670 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10107672 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107676 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107677 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107590(CPU *c) {
  NATIVE_HOOK(0x10107590u) REGS; LOADALL;
L_10107590:;
  /* 10107590 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10107594 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107595 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010759b je 0x101075b0 */ if (ZF_) goto L_101075b0;
L_1010759d:;
  /* 1010759d mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010759f add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101075a2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101075a4 je 0x101075e3 */ if (ZF_) goto L_101075e3;
  /* 101075a6 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075ac jne 0x1010759d */ if (!ZF_) goto L_1010759d;
  /* 101075ae mov edi, edi */ { edi = (u32)(edi); }
L_101075b0:;
  /* 101075b0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 101075b2 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 101075b7 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 101075b9 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101075bc xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101075be add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 101075c1 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075c6 je 0x101075b0 */ if (ZF_) goto L_101075b0;
  /* 101075c8 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101075cb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101075cd je 0x101075f2 */ if (ZF_) goto L_101075f2;
  /* 101075cf test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101075d1 je 0x101075ed */ if (ZF_) goto L_101075ed;
  /* 101075d3 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075d8 je 0x101075e8 */ if (ZF_) goto L_101075e8;
  /* 101075da test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075df je 0x101075e3 */ if (ZF_) goto L_101075e3;
  /* 101075e1 jmp 0x101075b0 */ goto L_101075b0;
L_101075e3:;
  /* 101075e3 lea edi, [ecx - 1] */ edi = (u32)((u32)(ecx + 0xffffffffu));
  /* 101075e6 jmp 0x101075f5 */ goto L_101075f5;
L_101075e8:;
  /* 101075e8 lea edi, [ecx - 2] */ edi = (u32)((u32)(ecx + 0xfffffffeu));
  /* 101075eb jmp 0x101075f5 */ goto L_101075f5;
L_101075ed:;
  /* 101075ed lea edi, [ecx - 3] */ edi = (u32)((u32)(ecx + 0xfffffffdu));
  /* 101075f0 jmp 0x101075f5 */ goto L_101075f5;
L_101075f2:;
  /* 101075f2 lea edi, [ecx - 4] */ edi = (u32)((u32)(ecx + 0xfffffffcu));
L_101075f5:;
  /* 101075f5 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 101075f9 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101075ff je 0x1010761e */ if (ZF_) goto L_1010761e;
L_10107601:;
  /* 10107601 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107603 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107606 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107608 je 0x10107670 */ if (ZF_) goto L_10107670;
  /* 1010760a mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1010760c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010760f test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107615 jne 0x10107601 */ if (!ZF_) goto L_10107601;
  /* 10107617 jmp 0x1010761e */ goto L_1010761e;
L_10107619:;
  /* 10107619 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 1010761b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_1010761e:;
  /* 1010761e mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10107623 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10107625 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10107627 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010762a xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1010762c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 1010762e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107631 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107636 je 0x10107619 */ if (ZF_) goto L_10107619;
  /* 10107638 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010763a je 0x10107670 */ if (ZF_) goto L_10107670;
  /* 1010763c test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010763e je 0x10107667 */ if (ZF_) goto L_10107667;
  /* 10107640 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107646 je 0x1010765a */ if (ZF_) goto L_1010765a;
  /* 10107648 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010764e je 0x10107652 */ if (ZF_) goto L_10107652;
  /* 10107650 jmp 0x10107619 */ goto L_10107619;
L_10107652:;
  /* 10107652 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10107654 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107658 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107659 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010765a:;
  /* 1010765a mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1010765d mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107661 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10107665 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107666 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107667:;
  /* 10107667 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1010766a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010766e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1010766f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107670:;
  /* 10107670 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10107672 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107676 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107677 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107678(CPU *c) {
  NATIVE_HOOK(0x10107678u) REGS; LOADALL;
L_10107678:;
  /* 10107678 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107679 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010767a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1010767c mov edi, 0x10120cd8 */ { edi = (u32)(0x10120cd8u); }
L_10107681:;
  /* 10107681 cmp dword ptr [esi*8 + 0x10110134], 1 */ { const u32 m_ = (u32)(esi * 8u + 0x10110134u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107689 jne 0x101076a9 */ if (!ZF_) goto L_101076a9;
  /* 1010768b lea eax, [esi*8 + 0x10110130] */ eax = (u32)((u32)(esi * 8u + 0x10110130u));
  /* 10107692 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 10107694 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 10107699 push dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1010769b add edi, 0x18 */ { u32 a_ = edi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1010769e call 0x1010a6fb */ esp -= 4; M32(esp) = 0x101076a3u; SAVEALL; F_1010a6fb(c); ABI_CHECK(0x1010a6fbu, 0x1010769eu); RETCHK(0x101076a3u, 0x1010769eu); LOADALL;
  /* 101076a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101076a5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101076a6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101076a7 je 0x101076b5 */ if (ZF_) goto L_101076b5;
L_101076a9:;
  /* 101076a9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101076aa cmp esi, 0x24 */ { u32 a_ = esi, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101076ad jl 0x10107681 */ if (LT_) goto L_10107681;
  /* 101076af xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101076b1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_101076b2:;
  /* 101076b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101076b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101076b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_101076b5:;
  /* 101076b5 and dword ptr [esi*8 + 0x10110130], 0 */ { const u32 m_ = (u32)(esi * 8u + 0x10110130u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101076bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101076bf jmp 0x101076b2 */ goto L_101076b2;
}

void F_10107716(CPU *c) {
  NATIVE_HOOK(0x10107716u) REGS; LOADALL;
L_10107716:;
  /* 10107716 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107717 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10107719 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1010771c push dword ptr [eax*8 + 0x10110130] */ { const u32 m_ = (u32)(eax * 8u + 0x10110130u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107723 call dword ptr [0x1010d068] */ { const u32 m_ = (u32)(0x1010d068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107729u; SAVEALL; call_ind(c, t_); RETCHK(0x10107729u, 0x10107723u); LOADALL; }
  /* 10107729 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1010772a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010772b(CPU *c) {
  NATIVE_HOOK(0x1010772bu) REGS; LOADALL;
L_1010772b:;
  /* 1010772b push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1010772d push 0x1010d660 */ { u32 v_ = 0x1010d660u; esp -= 4; M32(esp) = v_; }
  /* 10107732 call 0x1010734c */ esp -= 4; M32(esp) = 0x10107737u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10107732u); RETCHK(0x10107737u, 0x10107732u); LOADALL;
  /* 10107737 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1010773a lea esi, [esi*8 + 0x10110130] */ esi = (u32)((u32)(esi * 8u + 0x10110130u));
  /* 10107741 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10107743 cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107745 jne 0x101077b9 */ if (!ZF_) goto L_101077b9;
  /* 10107747 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 10107749 call 0x10106108 */ esp -= 4; M32(esp) = 0x1010774eu; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x10107749u); RETCHK(0x1010774eu, 0x10107749u); LOADALL;
  /* 1010774e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010774f mov edi, eax */ { edi = (u32)(eax); }
  /* 10107751 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107753 jne 0x10107762 */ if (!ZF_) goto L_10107762;
  /* 10107755 call 0x1010a786 */ esp -= 4; M32(esp) = 0x1010775au; SAVEALL; F_1010a786(c); ABI_CHECK(0x1010a786u, 0x10107755u); RETCHK(0x1010775au, 0x10107755u); LOADALL;
  /* 1010775a mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 10107760 jmp 0x101077a1 */ goto L_101077a1;
L_10107762:;
  /* 10107762 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 10107764 call 0x101077cb */ esp -= 4; M32(esp) = 0x10107769u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10107764u); RETCHK(0x10107769u, 0x10107764u); LOADALL;
  /* 10107769 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010776a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 1010776d cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010776f jne 0x101077a9 */ if (!ZF_) goto L_101077a9;
  /* 10107771 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 10107776 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107777 call 0x1010a6fb */ esp -= 4; M32(esp) = 0x1010777cu; SAVEALL; F_1010a6fb(c); ABI_CHECK(0x1010a6fbu, 0x10107777u); RETCHK(0x1010777cu, 0x10107777u); LOADALL;
  /* 1010777c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010777d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010777e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107780 jne 0x101077a5 */ if (!ZF_) goto L_101077a5;
  /* 10107782 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107783 call 0x101074a1 */ esp -= 4; M32(esp) = 0x10107788u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x10107783u); RETCHK(0x10107788u, 0x10107783u); LOADALL;
  /* 10107788 call 0x1010a786 */ esp -= 4; M32(esp) = 0x1010778du; SAVEALL; F_1010a786(c); ABI_CHECK(0x1010a786u, 0x10107788u); RETCHK(0x1010778du, 0x10107788u); LOADALL;
  /* 1010778d mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 10107793 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10107795 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10107798 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107799 call 0x10105632 */ esp -= 4; M32(esp) = 0x1010779eu; SAVEALL; F_10105632(c); ABI_CHECK(0x10105632u, 0x10107799u); RETCHK(0x1010779eu, 0x10107799u); LOADALL;
  /* 1010779e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101077a1:;
  /* 101077a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101077a3 jmp 0x101077bc */ goto L_101077bc;
L_101077a5:;
  /* 101077a5 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 101077a7 jmp 0x101077b0 */ goto L_101077b0;
L_101077a9:;
  /* 101077a9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101077aa call 0x101074a1 */ esp -= 4; M32(esp) = 0x101077afu; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101077aau); RETCHK(0x101077afu, 0x101077aau); LOADALL;
  /* 101077af pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101077b0:;
  /* 101077b0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101077b4 call 0x101077c2 */ esp -= 4; M32(esp) = 0x101077b9u; SAVEALL; F_101077c2(c); ABI_CHECK(0x101077c2u, 0x101077b4u); RETCHK(0x101077b9u, 0x101077b4u); LOADALL;
L_101077b9:;
  /* 101077b9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101077bb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_101077bc:;
  /* 101077bc call 0x10107387 */ esp -= 4; M32(esp) = 0x101077c1u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x101077bcu); RETCHK(0x101077c1u, 0x101077bcu); LOADALL;
  /* 101077c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101077c2(CPU *c) {
  NATIVE_HOOK(0x101077c2u) REGS; LOADALL;
L_101077c2:;
  /* 101077c2 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 101077c4 call 0x10107716 */ esp -= 4; M32(esp) = 0x101077c9u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101077c4u); RETCHK(0x101077c9u, 0x101077c4u); LOADALL;
  /* 101077c9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101077ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101077cb(CPU *c) {
  NATIVE_HOOK(0x101077cbu) REGS; LOADALL;
L_101077cb:;
  /* 101077cb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 101077cc mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101077ce mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 101077d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101077d2 lea esi, [eax*8 + 0x10110130] */ esi = (u32)((u32)(eax * 8u + 0x10110130u));
  /* 101077d9 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101077dc jne 0x101077f1 */ if (!ZF_) goto L_101077f1;
  /* 101077de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101077df call 0x1010772b */ esp -= 4; M32(esp) = 0x101077e4u; SAVEALL; F_1010772b(c); ABI_CHECK(0x1010772bu, 0x101077dfu); RETCHK(0x101077e4u, 0x101077dfu); LOADALL;
  /* 101077e4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101077e6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101077e7 jne 0x101077f1 */ if (!ZF_) goto L_101077f1;
  /* 101077e9 push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 101077eb call 0x1010602e */ esp -= 4; M32(esp) = 0x101077f0u; SAVEALL; F_1010602e(c); ABI_CHECK(0x1010602eu, 0x101077ebu); RETCHK(0x101077f0u, 0x101077ebu); LOADALL;
  /* 101077f0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101077f1:;
  /* 101077f1 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101077f3 call dword ptr [0x1010d06c] */ { const u32 m_ = (u32)(0x1010d06cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101077f9u; SAVEALL; call_ind(c, t_); RETCHK(0x101077f9u, 0x101077f3u); LOADALL; }
  /* 101077f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101077fa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101077fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107800(CPU *c) {
  NATIVE_HOOK(0x10107800u) REGS; LOADALL;
L_10107800:;
  /* 10107800 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10107804 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10107808 test edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010780e jne 0x1010784c */ if (!ZF_) goto L_1010784c;
L_10107810:;
  /* 10107810 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 10107812 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107814 jne 0x10107844 */ if (!ZF_) goto L_10107844;
  /* 10107816 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10107818 je 0x10107840 */ if (ZF_) goto L_10107840;
  /* 1010781a cmp ah, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010781d jne 0x10107844 */ if (!ZF_) goto L_10107844;
  /* 1010781f or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10107821 je 0x10107840 */ if (ZF_) goto L_10107840;
  /* 10107823 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10107826 cmp al, byte ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107829 jne 0x10107844 */ if (!ZF_) goto L_10107844;
  /* 1010782b or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1010782d je 0x10107840 */ if (ZF_) goto L_10107840;
  /* 1010782f cmp ah, byte ptr [ecx + 3] */ { const u32 m_ = (u32)(ecx + 0x3u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107832 jne 0x10107844 */ if (!ZF_) goto L_10107844;
  /* 10107834 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107837 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1010783a or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 1010783c jne 0x10107810 */ if (!ZF_) goto L_10107810;
  /* 1010783e mov edi, edi */ { edi = (u32)(edi); }
L_10107840:;
  /* 10107840 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107842 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107844:;
  /* 10107844 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10107846 shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10107848 add eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010784b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010784c:;
  /* 1010784c test edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107852 je 0x1010786c */ if (ZF_) goto L_1010786c;
  /* 10107854 mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107856 add edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10107859 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010785b jne 0x10107844 */ if (!ZF_) goto L_10107844;
  /* 1010785d add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107860 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10107862 je 0x10107840 */ if (ZF_) goto L_10107840;
  /* 10107864 test edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010786a je 0x10107810 */ if (ZF_) goto L_10107810;
L_1010786c:;
  /* 1010786c mov ax, word ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010786f add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10107872 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107874 jne 0x10107844 */ if (!ZF_) goto L_10107844;
  /* 10107876 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10107878 je 0x10107840 */ if (ZF_) goto L_10107840;
  /* 1010787a cmp ah, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010787d jne 0x10107844 */ if (!ZF_) goto L_10107844;
  /* 1010787f or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10107881 je 0x10107840 */ if (ZF_) goto L_10107840;
  /* 10107883 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10107886 jmp 0x10107810 */ goto L_10107810;
}

void F_10107888(CPU *c) {
  NATIVE_HOOK(0x10107888u) REGS; LOADALL;
L_10107888:;
  /* 10107888 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 1010788a push 0x1010d670 */ { u32 v_ = 0x1010d670u; esp -= 4; M32(esp) = v_; }
  /* 1010788f call 0x1010734c */ esp -= 4; M32(esp) = 0x10107894u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x1010788fu); RETCHK(0x10107894u, 0x1010788fu); LOADALL;
  /* 10107894 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10107897 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10107899 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010789b jne 0x101078ab */ if (!ZF_) goto L_101078ab;
  /* 1010789d push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101078a0 call 0x10106108 */ esp -= 4; M32(esp) = 0x101078a5u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x101078a0u); RETCHK(0x101078a5u, 0x101078a0u); LOADALL;
  /* 101078a5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101078a6 jmp 0x10107a2f */ goto L_10107a2f;
L_101078ab:;
  /* 101078ab mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 101078ae cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101078b0 jne 0x101078be */ if (!ZF_) goto L_101078be;
  /* 101078b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101078b3 call 0x101074a1 */ esp -= 4; M32(esp) = 0x101078b8u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101078b3u); RETCHK(0x101078b8u, 0x101078b3u); LOADALL;
  /* 101078b8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101078b9 jmp 0x10107a2d */ goto L_10107a2d;
L_101078be:;
  /* 101078be cmp dword ptr [0x101223e0], 3 */ { const u32 m_ = (u32)(0x101223e0u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101078c5 jne 0x101079f9 */ if (!ZF_) goto L_101079f9;
L_101078cb:;
  /* 101078cb mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 101078ce cmp esi, -0x20 */ { u32 a_ = esi, b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101078d1 ja 0x101079c8 */ if (!(CF_|ZF_)) goto L_101079c8;
  /* 101078d7 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101078d9 call 0x101077cb */ esp -= 4; M32(esp) = 0x101078deu; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x101078d9u); RETCHK(0x101078deu, 0x101078d9u); LOADALL;
  /* 101078de pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101078df mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 101078e2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101078e3 call 0x101091d8 */ esp -= 4; M32(esp) = 0x101078e8u; SAVEALL; F_101091d8(c); ABI_CHECK(0x101091d8u, 0x101078e3u); RETCHK(0x101078e8u, 0x101078e3u); LOADALL;
  /* 101078e8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101078e9 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 101078ec cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101078ee je 0x10107998 */ if (ZF_) goto L_10107998;
  /* 101078f4 cmp esi, dword ptr [0x101223cc] */ { const u32 m_ = (u32)(0x101223ccu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101078fa ja 0x10107948 */ if (!(CF_|ZF_)) goto L_10107948;
  /* 101078fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101078fd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101078fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101078ff call 0x101096d8 */ esp -= 4; M32(esp) = 0x10107904u; SAVEALL; F_101096d8(c); ABI_CHECK(0x101096d8u, 0x101078ffu); RETCHK(0x10107904u, 0x101078ffu); LOADALL;
  /* 10107904 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107907 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107909 je 0x10107910 */ if (ZF_) goto L_10107910;
  /* 1010790b mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 1010790e jmp 0x10107948 */ goto L_10107948;
L_10107910:;
  /* 10107910 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107911 call 0x101099b7 */ esp -= 4; M32(esp) = 0x10107916u; SAVEALL; F_101099b7(c); ABI_CHECK(0x101099b7u, 0x10107911u); RETCHK(0x10107916u, 0x10107911u); LOADALL;
  /* 10107916 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107917 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1010791a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010791c je 0x10107948 */ if (ZF_) goto L_10107948;
  /* 1010791e mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107921 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107922 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 10107925 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107927 jb 0x1010792b */ if (CF_) goto L_1010792b;
  /* 10107929 mov eax, esi */ { eax = (u32)(esi); }
L_1010792b:;
  /* 1010792b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010792c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010792d push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107930 call 0x101061d0 */ esp -= 4; M32(esp) = 0x10107935u; SAVEALL; F_101061d0(c); ABI_CHECK(0x101061d0u, 0x10107930u); RETCHK(0x10107935u, 0x10107930u); LOADALL;
  /* 10107935 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107936 call 0x101091d8 */ esp -= 4; M32(esp) = 0x1010793bu; SAVEALL; F_101091d8(c); ABI_CHECK(0x101091d8u, 0x10107936u); RETCHK(0x1010793bu, 0x10107936u); LOADALL;
  /* 1010793b mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 1010793e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010793f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107940 call 0x10109203 */ esp -= 4; M32(esp) = 0x10107945u; SAVEALL; F_10109203(c); ABI_CHECK(0x10109203u, 0x10107940u); RETCHK(0x10107945u, 0x10107940u); LOADALL;
  /* 10107945 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10107948:;
  /* 10107948 cmp dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010794b jne 0x10107998 */ if (!ZF_) goto L_10107998;
  /* 1010794d cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010794f jne 0x10107957 */ if (!ZF_) goto L_10107957;
  /* 10107951 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10107953 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107954 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
L_10107957:;
  /* 10107957 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1010795a and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1010795d mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 10107960 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107961 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107962 push dword ptr [0x101223dc] */ { const u32 m_ = (u32)(0x101223dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107968 call dword ptr [0x1010d024] */ { const u32 m_ = (u32)(0x1010d024u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1010796eu; SAVEALL; call_ind(c, t_); RETCHK(0x1010796eu, 0x10107968u); LOADALL; }
  /* 1010796e mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10107971 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107973 je 0x10107998 */ if (ZF_) goto L_10107998;
  /* 10107975 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107978 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107979 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 1010797c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010797e jb 0x10107982 */ if (CF_) goto L_10107982;
  /* 10107980 mov eax, esi */ { eax = (u32)(esi); }
L_10107982:;
  /* 10107982 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107983 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107984 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107987 call 0x101061d0 */ esp -= 4; M32(esp) = 0x1010798cu; SAVEALL; F_101061d0(c); ABI_CHECK(0x101061d0u, 0x10107987u); RETCHK(0x1010798cu, 0x10107987u); LOADALL;
  /* 1010798c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010798d push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107990 call 0x10109203 */ esp -= 4; M32(esp) = 0x10107995u; SAVEALL; F_10109203(c); ABI_CHECK(0x10109203u, 0x10107990u); RETCHK(0x10107995u, 0x10107990u); LOADALL;
  /* 10107995 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10107998:;
  /* 10107998 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010799c call 0x101079f0 */ esp -= 4; M32(esp) = 0x101079a1u; SAVEALL; F_101079f0(c); ABI_CHECK(0x101079f0u, 0x1010799cu); RETCHK(0x101079a1u, 0x1010799cu); LOADALL;
  /* 101079a1 cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101079a4 jne 0x101079c8 */ if (!ZF_) goto L_101079c8;
  /* 101079a6 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101079a8 jne 0x101079ad */ if (!ZF_) goto L_101079ad;
  /* 101079aa xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101079ac inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_101079ad:;
  /* 101079ad add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101079b0 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 101079b3 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 101079b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101079b7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101079b8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101079b9 push dword ptr [0x101223dc] */ { const u32 m_ = (u32)(0x101223dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101079bf call dword ptr [0x1010d070] */ { const u32 m_ = (u32)(0x1010d070u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101079c5u; SAVEALL; call_ind(c, t_); RETCHK(0x101079c5u, 0x101079bfu); LOADALL; }
  /* 101079c5 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_101079c8:;
  /* 101079c8 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 101079cb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101079cd jne 0x10107a2f */ if (!ZF_) goto L_10107a2f;
  /* 101079cf cmp dword ptr [0x10120f80], ebx */ { const u32 m_ = (u32)(0x10120f80u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101079d5 je 0x10107a2f */ if (ZF_) goto L_10107a2f;
  /* 101079d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101079d8 call 0x1010611a */ esp -= 4; M32(esp) = 0x101079ddu; SAVEALL; F_1010611a(c); ABI_CHECK(0x1010611au, 0x101079d8u); RETCHK(0x101079ddu, 0x101079d8u); LOADALL;
  /* 101079dd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101079de test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101079e0 jne 0x101078cb */ if (!ZF_) goto L_101078cb;
  /* 101079e6 jmp 0x10107a2d */ goto L_10107a2d;
L_101079f9:;
  /* 101079f9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101079fb cmp esi, -0x20 */ { u32 a_ = esi, b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101079fe ja 0x10107a16 */ if (!(CF_|ZF_)) goto L_10107a16;
  /* 10107a00 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107a02 jne 0x10107a07 */ if (!ZF_) goto L_10107a07;
  /* 10107a04 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10107a06 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10107a07:;
  /* 10107a07 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107a08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107a09 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107a0a push dword ptr [0x101223dc] */ { const u32 m_ = (u32)(0x101223dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107a10 call dword ptr [0x1010d070] */ { const u32 m_ = (u32)(0x1010d070u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107a16u; SAVEALL; call_ind(c, t_); RETCHK(0x10107a16u, 0x10107a10u); LOADALL; }
L_10107a16:;
  /* 10107a16 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107a18 jne 0x10107a2f */ if (!ZF_) goto L_10107a2f;
  /* 10107a1a cmp dword ptr [0x10120f80], ebx */ { const u32 m_ = (u32)(0x10120f80u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107a20 je 0x10107a2f */ if (ZF_) goto L_10107a2f;
  /* 10107a22 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107a23 call 0x1010611a */ esp -= 4; M32(esp) = 0x10107a28u; SAVEALL; F_1010611a(c); ABI_CHECK(0x1010611au, 0x10107a23u); RETCHK(0x10107a28u, 0x10107a23u); LOADALL;
  /* 10107a28 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107a29 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107a2b jne 0x101079f9 */ if (!ZF_) goto L_101079f9;
L_10107a2d:;
  /* 10107a2d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10107a2f:;
  /* 10107a2f call 0x10107387 */ esp -= 4; M32(esp) = 0x10107a34u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10107a2fu); RETCHK(0x10107a34u, 0x10107a2fu); LOADALL;
  /* 10107a34 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101079e8(CPU *c) {
  NATIVE_HOOK(0x101079e8u) REGS; LOADALL;
L_101079e8:;
  /* 101079e8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 101079ea mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 101079ed mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 101079f0 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101079f2 call 0x10107716 */ esp -= 4; M32(esp) = 0x101079f7u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101079f2u); RETCHK(0x101079f7u, 0x101079f2u); LOADALL;
  /* 101079f7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101079f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_101079f0(CPU *c) {
  NATIVE_HOOK(0x101079f0u) REGS; LOADALL;
L_101079f0:;
  /* 101079f0 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 101079f2 call 0x10107716 */ esp -= 4; M32(esp) = 0x101079f7u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x101079f2u); RETCHK(0x101079f7u, 0x101079f2u); LOADALL;
  /* 101079f7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101079f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107a35(CPU *c) {
  NATIVE_HOOK(0x10107a35u) REGS; LOADALL;
L_10107a35:;
  /* 10107a35 push 0x1010d68c */ { u32 v_ = 0x1010d68cu; esp -= 4; M32(esp) = v_; }
  /* 10107a3a call dword ptr [0x1010d044] */ { const u32 m_ = (u32)(0x1010d044u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107a40u; SAVEALL; call_ind(c, t_); RETCHK(0x10107a40u, 0x10107a3au); LOADALL; }
  /* 10107a40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107a42 je 0x10107a5a */ if (ZF_) goto L_10107a5a;
  /* 10107a44 push 0x1010d67c */ { u32 v_ = 0x1010d67cu; esp -= 4; M32(esp) = v_; }
  /* 10107a49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107a4a call dword ptr [0x1010d040] */ { const u32 m_ = (u32)(0x1010d040u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107a50u; SAVEALL; call_ind(c, t_); RETCHK(0x10107a50u, 0x10107a4au); LOADALL; }
  /* 10107a50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107a52 je 0x10107a5a */ if (ZF_) goto L_10107a5a;
  /* 10107a54 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107a58 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107a5au; SAVEALL; call_ind(c, t_); RETCHK(0x10107a5au, 0x10107a58u); LOADALL; }
L_10107a5a:;
  /* 10107a5a push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107a5e call dword ptr [0x1010d010] */ { const u32 m_ = (u32)(0x1010d010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107a64u; SAVEALL; call_ind(c, t_); RETCHK(0x10107a64u, 0x10107a5eu); LOADALL; }
}

void F_10107a65(CPU *c) {
  NATIVE_HOOK(0x10107a65u) REGS; LOADALL;
L_10107a65:;
  /* 10107a65 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10107a67 call 0x101077cb */ esp -= 4; M32(esp) = 0x10107a6cu; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10107a67u); RETCHK(0x10107a6cu, 0x10107a67u); LOADALL;
  /* 10107a6c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107a6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107a6e(CPU *c) {
  NATIVE_HOOK(0x10107a6eu) REGS; LOADALL;
L_10107a6e:;
  /* 10107a6e push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10107a70 call 0x10107716 */ esp -= 4; M32(esp) = 0x10107a75u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10107a70u); RETCHK(0x10107a75u, 0x10107a70u); LOADALL;
  /* 10107a75 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107a76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107a77(CPU *c) {
  NATIVE_HOOK(0x10107a77u) REGS; LOADALL;
L_10107a77:;
  /* 10107a77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107a78 mov esi, eax */ { esi = (u32)(eax); }
  /* 10107a7a jmp 0x10107a87 */ goto L_10107a87;
L_10107a7c:;
  /* 10107a7c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10107a7e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107a80 je 0x10107a84 */ if (ZF_) goto L_10107a84;
  /* 10107a82 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107a84u; SAVEALL; call_ind(c, t_); RETCHK(0x10107a84u, 0x10107a82u); LOADALL; }
L_10107a84:;
  /* 10107a84 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10107a87:;
  /* 10107a87 cmp esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107a8b jb 0x10107a7c */ if (CF_) goto L_10107a7c;
  /* 10107a8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107a8e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107a8f(CPU *c) {
  NATIVE_HOOK(0x10107a8fu) REGS; LOADALL;
L_10107a8f:;
  /* 10107a8f mov eax, dword ptr [0x10122510] */ { const u32 m_ = (u32)(0x10122510u); eax = (u32)(M32(m_)); }
  /* 10107a94 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107a96 je 0x10107a9f */ if (ZF_) goto L_10107a9f;
  /* 10107a98 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107a9c call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107a9eu; SAVEALL; call_ind(c, t_); RETCHK(0x10107a9eu, 0x10107a9cu); LOADALL; }
  /* 10107a9e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10107a9f:;
  /* 10107a9f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107aa0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107aa1 mov ecx, 0x10110010 */ { ecx = (u32)(0x10110010u); }
  /* 10107aa6 mov edi, 0x10110024 */ { edi = (u32)(0x10110024u); }
  /* 10107aab xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107aad cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107aaf mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10107ab1 jae 0x10107aca */ if (!CF_) goto L_10107aca;
L_10107ab3:;
  /* 10107ab3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107ab5 jne 0x10107af6 */ if (!ZF_) goto L_10107af6;
  /* 10107ab7 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10107ab9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107abb je 0x10107abf */ if (ZF_) goto L_10107abf;
  /* 10107abd call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x10107abfu; SAVEALL; call_ind(c, t_); RETCHK(0x10107abfu, 0x10107abdu); LOADALL; }
L_10107abf:;
  /* 10107abf add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10107ac2 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107ac4 jb 0x10107ab3 */ if (CF_) goto L_10107ab3;
  /* 10107ac6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107ac8 jne 0x10107af6 */ if (!ZF_) goto L_10107af6;
L_10107aca:;
  /* 10107aca push 0x10108d33 */ { u32 v_ = 0x10108d33u; esp -= 4; M32(esp) = v_; }
  /* 10107acf call 0x10105d09 */ esp -= 4; M32(esp) = 0x10107ad4u; SAVEALL; F_10105d09(c); ABI_CHECK(0x10105d09u, 0x10107acfu); RETCHK(0x10107ad4u, 0x10107acfu); LOADALL;
  /* 10107ad4 mov esi, 0x10110000 */ { esi = (u32)(0x10110000u); }
  /* 10107ad9 mov eax, esi */ { eax = (u32)(esi); }
  /* 10107adb mov edi, 0x1011000c */ { edi = (u32)(0x1011000cu); }
  /* 10107ae0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107ae2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107ae3 jae 0x10107af4 */ if (!CF_) goto L_10107af4;
L_10107ae5:;
  /* 10107ae5 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10107ae7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107ae9 je 0x10107aed */ if (ZF_) goto L_10107aed;
  /* 10107aeb call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107aedu; SAVEALL; call_ind(c, t_); RETCHK(0x10107aedu, 0x10107aebu); LOADALL; }
L_10107aed:;
  /* 10107aed add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10107af0 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107af2 jb 0x10107ae5 */ if (CF_) goto L_10107ae5;
L_10107af4:;
  /* 10107af4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10107af6:;
  /* 10107af6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107af7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107af8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107af9(CPU *c) {
  NATIVE_HOOK(0x10107af9u) REGS; LOADALL;
L_10107af9:;
  /* 10107af9 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10107afb push 0x1010d698 */ { u32 v_ = 0x1010d698u; esp -= 4; M32(esp) = v_; }
  /* 10107b00 call 0x1010734c */ esp -= 4; M32(esp) = 0x10107b05u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10107b00u); RETCHK(0x10107b05u, 0x10107b00u); LOADALL;
  /* 10107b05 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10107b07 call 0x101077cb */ esp -= 4; M32(esp) = 0x10107b0cu; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10107b07u); RETCHK(0x10107b0cu, 0x10107b07u); LOADALL;
  /* 10107b0c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107b0d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10107b0f mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10107b12 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10107b14 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107b15 cmp dword ptr [0x10120e6c], esi */ { const u32 m_ = (u32)(0x10120e6cu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107b1b jne 0x10107b2d */ if (!ZF_) goto L_10107b2d;
  /* 10107b1d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107b20 call dword ptr [0x1010d078] */ { const u32 m_ = (u32)(0x1010d078u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107b26u; SAVEALL; call_ind(c, t_); RETCHK(0x10107b26u, 0x10107b20u); LOADALL; }
  /* 10107b26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107b27 call dword ptr [0x1010d074] */ { const u32 m_ = (u32)(0x1010d074u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107b2du; SAVEALL; call_ind(c, t_); RETCHK(0x10107b2du, 0x10107b27u); LOADALL; }
L_10107b2d:;
  /* 10107b2d mov dword ptr [0x10120e68], esi */ { const u32 m_ = (u32)(0x10120e68u); M32(m_) = (u32)(esi); }
  /* 10107b33 mov al, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107b36 mov byte ptr [0x10120e64], al */ { const u32 m_ = (u32)(0x10120e64u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10107b3b cmp dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107b3e jne 0x10107b77 */ if (!ZF_) goto L_10107b77;
  /* 10107b40 cmp dword ptr [0x10122508], edi */ { const u32 m_ = (u32)(0x10122508u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107b46 je 0x10107b67 */ if (ZF_) goto L_10107b67;
L_10107b48:;
  /* 10107b48 mov eax, dword ptr [0x10122504] */ { const u32 m_ = (u32)(0x10122504u); eax = (u32)(M32(m_)); }
  /* 10107b4d sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107b50 mov dword ptr [0x10122504], eax */ { const u32 m_ = (u32)(0x10122504u); M32(m_) = (u32)(eax); }
  /* 10107b55 cmp eax, dword ptr [0x10122508] */ { const u32 m_ = (u32)(0x10122508u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107b5b jb 0x10107b67 */ if (CF_) goto L_10107b67;
  /* 10107b5d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10107b5f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107b61 je 0x10107b48 */ if (ZF_) goto L_10107b48;
  /* 10107b63 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10107b65u; SAVEALL; call_ind(c, t_); RETCHK(0x10107b65u, 0x10107b63u); LOADALL; }
  /* 10107b65 jmp 0x10107b48 */ goto L_10107b48;
L_10107b67:;
  /* 10107b67 push 0x10110030 */ { u32 v_ = 0x10110030u; esp -= 4; M32(esp) = v_; }
  /* 10107b6c mov eax, 0x10110028 */ { eax = (u32)(0x10110028u); }
  /* 10107b71 call 0x10107a77 */ esp -= 4; M32(esp) = 0x10107b76u; SAVEALL; F_10107a77(c); ABI_CHECK(0x10107a77u, 0x10107b71u); RETCHK(0x10107b76u, 0x10107b71u); LOADALL;
  /* 10107b76 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10107b77:;
  /* 10107b77 push 0x1011003c */ { u32 v_ = 0x1011003cu; esp -= 4; M32(esp) = v_; }
  /* 10107b7c mov eax, 0x10110034 */ { eax = (u32)(0x10110034u); }
  /* 10107b81 call 0x10107a77 */ esp -= 4; M32(esp) = 0x10107b86u; SAVEALL; F_10107a77(c); ABI_CHECK(0x10107a77u, 0x10107b81u); RETCHK(0x10107b86u, 0x10107b81u); LOADALL;
  /* 10107b86 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107b87 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107b8b call 0x10107ba8 */ esp -= 4; M32(esp) = 0x10107b90u; SAVEALL; F_10107ba8(c); ABI_CHECK(0x10107ba8u, 0x10107b8bu); RETCHK(0x10107b90u, 0x10107b8bu); LOADALL;
  /* 10107b90 cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107b93 jne 0x10107bb6 */ if (!ZF_) goto L_10107bb6;
  /* 10107b95 mov dword ptr [0x10120e6c], esi */ { const u32 m_ = (u32)(0x10120e6cu); M32(m_) = (u32)(esi); }
  /* 10107b9b push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107b9e call 0x10107a35 */ esp -= 4; M32(esp) = 0x10107ba3u; SAVEALL; F_10107a35(c); ABI_CHECK(0x10107a35u, 0x10107b9eu); RETCHK(0x10107ba3u, 0x10107b9eu); LOADALL;
  /* 10107ba3 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10107ba5 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10107ba7 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107ba8 cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107bab je 0x10107bb5 */ if (ZF_) goto L_10107bb5;
  /* 10107bad push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10107baf call 0x10107716 */ esp -= 4; M32(esp) = 0x10107bb4u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10107bafu); RETCHK(0x10107bb4u, 0x10107bafu); LOADALL;
  /* 10107bb4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10107bb5:;
  /* 10107bb5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107bb6:;
  /* 10107bb6 call 0x10107387 */ esp -= 4; M32(esp) = 0x10107bbbu; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10107bb6u); RETCHK(0x10107bbbu, 0x10107bb6u); LOADALL;
  /* 10107bbb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107ba3(CPU *c) {
  NATIVE_HOOK(0x10107ba3u) REGS; LOADALL;
L_10107ba3:;
  /* 10107ba3 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10107ba5 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10107ba7 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107ba8 cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107bab je 0x10107bb5 */ if (ZF_) goto L_10107bb5;
  /* 10107bad push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10107baf call 0x10107716 */ esp -= 4; M32(esp) = 0x10107bb4u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10107bafu); RETCHK(0x10107bb4u, 0x10107bafu); LOADALL;
  /* 10107bb4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10107bb5:;
  /* 10107bb5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107ba8(CPU *c) {
  NATIVE_HOOK(0x10107ba8u) REGS; LOADALL;
L_10107ba8:;
  /* 10107ba8 cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107bab je 0x10107bb5 */ if (ZF_) goto L_10107bb5;
  /* 10107bad push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10107baf call 0x10107716 */ esp -= 4; M32(esp) = 0x10107bb4u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10107bafu); RETCHK(0x10107bb4u, 0x10107bafu); LOADALL;
  /* 10107bb4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10107bb5:;
  /* 10107bb5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107bbc(CPU *c) {
  NATIVE_HOOK(0x10107bbcu) REGS; LOADALL;
L_10107bbc:;
  /* 10107bbc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10107bbe push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10107bc0 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107bc4 call 0x10107af9 */ esp -= 4; M32(esp) = 0x10107bc9u; SAVEALL; F_10107af9(c); ABI_CHECK(0x10107af9u, 0x10107bc4u); RETCHK(0x10107bc9u, 0x10107bc4u); LOADALL;
  /* 10107bc9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107bcc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107bcd(CPU *c) {
  NATIVE_HOOK(0x10107bcdu) REGS; LOADALL;
L_10107bcd:;
  /* 10107bcd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10107bcf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10107bd1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10107bd3 call 0x10107af9 */ esp -= 4; M32(esp) = 0x10107bd8u; SAVEALL; F_10107af9(c); ABI_CHECK(0x10107af9u, 0x10107bd3u); RETCHK(0x10107bd8u, 0x10107bd3u); LOADALL;
  /* 10107bd8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107bdb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107bdc(CPU *c) {
  NATIVE_HOOK(0x10107bdcu) REGS; LOADALL;
L_10107bdc:;
  /* 10107bdc push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10107bde push 0x1010d6a8 */ { u32 v_ = 0x1010d6a8u; esp -= 4; M32(esp) = v_; }
  /* 10107be3 call 0x1010734c */ esp -= 4; M32(esp) = 0x10107be8u; SAVEALL; F_1010734c(c); ABI_CHECK(0x1010734cu, 0x10107be3u); RETCHK(0x10107be8u, 0x10107be3u); LOADALL;
  /* 10107be8 cmp dword ptr [0x101223e0], 3 */ { const u32 m_ = (u32)(0x101223e0u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107bef jne 0x10107c2b */ if (!ZF_) goto L_10107c2b;
  /* 10107bf1 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10107bf3 call 0x101077cb */ esp -= 4; M32(esp) = 0x10107bf8u; SAVEALL; F_101077cb(c); ABI_CHECK(0x101077cbu, 0x10107bf3u); RETCHK(0x10107bf8u, 0x10107bf3u); LOADALL;
  /* 10107bf8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107bf9 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107bfd mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10107c00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107c01 call 0x101091d8 */ esp -= 4; M32(esp) = 0x10107c06u; SAVEALL; F_101091d8(c); ABI_CHECK(0x101091d8u, 0x10107c01u); RETCHK(0x10107c06u, 0x10107c01u); LOADALL;
  /* 10107c06 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107c07 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10107c0a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107c0c je 0x10107c19 */ if (ZF_) goto L_10107c19;
  /* 10107c0e mov esi, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10107c11 sub esi, 9 */ { u32 a_ = esi, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10107c14 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 10107c17 jmp 0x10107c1c */ goto L_10107c1c;
L_10107c19:;
  /* 10107c19 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
L_10107c1c:;
  /* 10107c1c or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107c20 call 0x10107c49 */ esp -= 4; M32(esp) = 0x10107c25u; SAVEALL; F_10107c49(c); ABI_CHECK(0x10107c49u, 0x10107c20u); RETCHK(0x10107c25u, 0x10107c20u); LOADALL;
  /* 10107c25 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107c29 jne 0x10107c3e */ if (!ZF_) goto L_10107c3e;
L_10107c2b:;
  /* 10107c2b push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107c2e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10107c30 push dword ptr [0x101223dc] */ { const u32 m_ = (u32)(0x101223dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10107c36 call dword ptr [0x1010d07c] */ { const u32 m_ = (u32)(0x1010d07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10107c3cu; SAVEALL; call_ind(c, t_); RETCHK(0x10107c3cu, 0x10107c36u); LOADALL; }
  /* 10107c3c mov esi, eax */ { esi = (u32)(eax); }
L_10107c3e:;
  /* 10107c3e mov eax, esi */ { eax = (u32)(esi); }
  /* 10107c40 call 0x10107387 */ esp -= 4; M32(esp) = 0x10107c45u; SAVEALL; F_10107387(c); ABI_CHECK(0x10107387u, 0x10107c40u); RETCHK(0x10107c45u, 0x10107c40u); LOADALL;
  /* 10107c45 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107c46(CPU *c) {
  NATIVE_HOOK(0x10107c46u) REGS; LOADALL;
L_10107c46:;
  /* 10107c46 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 10107c49 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10107c4b call 0x10107716 */ esp -= 4; M32(esp) = 0x10107c50u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10107c4bu); RETCHK(0x10107c50u, 0x10107c4bu); LOADALL;
  /* 10107c50 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107c51 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107c49(CPU *c) {
  NATIVE_HOOK(0x10107c49u) REGS; LOADALL;
L_10107c49:;
  /* 10107c49 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10107c4b call 0x10107716 */ esp -= 4; M32(esp) = 0x10107c50u; SAVEALL; F_10107716(c); ABI_CHECK(0x10107716u, 0x10107c4bu); RETCHK(0x10107c50u, 0x10107c4bu); LOADALL;
  /* 10107c50 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107c51 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107c52(CPU *c) {
  NATIVE_HOOK(0x10107c52u) REGS; LOADALL;
L_10107c52:;
  /* 10107c52 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107c53 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10107c55 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107c56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107c57 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10107c5a mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10107c5d test al, 0x82 */ { u32 a_ = (eax & 0xffu), b_ = 0x82u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107c5f mov ebx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10107c62 je 0x10107d5e */ if (ZF_) goto L_10107d5e;
  /* 10107c68 test al, 0x40 */ { u32 a_ = (eax & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107c6a jne 0x10107d5e */ if (!ZF_) goto L_10107d5e;
  /* 10107c70 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107c72 je 0x10107c8b */ if (ZF_) goto L_10107c8b;
  /* 10107c74 and dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107c78 test al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107c7a je 0x10107d5e */ if (ZF_) goto L_10107d5e;
  /* 10107c80 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10107c83 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107c86 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10107c88 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
L_10107c8b:;
  /* 10107c8b mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10107c8e and dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107c92 and dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107c96 and eax, 0xffffffef */ { u32 a_ = eax, b_ = 0xffffffefu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107c99 or eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107c9c test ax, 0x10c */ { u32 a_ = (eax & 0xffffu), b_ = 0x10cu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10107ca0 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10107ca3 jne 0x10107cc7 */ if (!ZF_) goto L_10107cc7;
  /* 10107ca5 cmp esi, 0x101107b8 */ { u32 a_ = esi, b_ = 0x101107b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107cab je 0x10107cb5 */ if (ZF_) goto L_10107cb5;
  /* 10107cad cmp esi, 0x101107d8 */ { u32 a_ = esi, b_ = 0x101107d8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107cb3 jne 0x10107cc0 */ if (!ZF_) goto L_10107cc0;
L_10107cb5:;
  /* 10107cb5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107cb6 call 0x1010abe7 */ esp -= 4; M32(esp) = 0x10107cbbu; SAVEALL; F_1010abe7(c); ABI_CHECK(0x1010abe7u, 0x10107cb6u); RETCHK(0x10107cbbu, 0x10107cb6u); LOADALL;
  /* 10107cbb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107cbd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107cbe jne 0x10107cc7 */ if (!ZF_) goto L_10107cc7;
L_10107cc0:;
  /* 10107cc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107cc1 call 0x1010aba3 */ esp -= 4; M32(esp) = 0x10107cc6u; SAVEALL; F_1010aba3(c); ABI_CHECK(0x1010aba3u, 0x10107cc1u); RETCHK(0x10107cc6u, 0x10107cc1u); LOADALL;
  /* 10107cc6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10107cc7:;
  /* 10107cc7 test word ptr [esi + 0xc], 0x108 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M16(m_), b_ = 0x108u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10107ccd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107cce je 0x10107d34 */ if (ZF_) goto L_10107d34;
  /* 10107cd0 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107cd3 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 10107cd5 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10107cd8 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10107cda mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10107cdd sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10107cdf dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107ce0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107ce2 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10107ce5 jle 0x10107cf4 */ if ((ZF_|LT_)) goto L_10107cf4;
  /* 10107ce7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107ce8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107ce9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107cea call 0x1010aaf8 */ esp -= 4; M32(esp) = 0x10107cefu; SAVEALL; F_1010aaf8(c); ABI_CHECK(0x1010aaf8u, 0x10107ceau); RETCHK(0x10107cefu, 0x10107ceau); LOADALL;
  /* 10107cef mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10107cf2 jmp 0x10107d27 */ goto L_10107d27;
L_10107cf4:;
  /* 10107cf4 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107cf7 je 0x10107d12 */ if (ZF_) goto L_10107d12;
  /* 10107cf9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10107cfb sar ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10107cfe mov ecx, dword ptr [ecx*4 + 0x10122400] */ { const u32 m_ = (u32)(ecx * 4u + 0x10122400u); ecx = (u32)(M32(m_)); }
  /* 10107d05 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10107d07 and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107d0a lea eax, [eax + eax*8] */ eax = (u32)((u32)(eax + eax * 8u));
  /* 10107d0d lea eax, [ecx + eax*4] */ eax = (u32)((u32)(ecx + eax * 4u));
  /* 10107d10 jmp 0x10107d17 */ goto L_10107d17;
L_10107d12:;
  /* 10107d12 mov eax, 0x10110258 */ { eax = (u32)(0x10110258u); }
L_10107d17:;
  /* 10107d17 test byte ptr [eax + 4], 0x20 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107d1b je 0x10107d2a */ if (ZF_) goto L_10107d2a;
  /* 10107d1d push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 10107d1f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10107d21 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107d22 call 0x1010a87f */ esp -= 4; M32(esp) = 0x10107d27u; SAVEALL; F_1010a87f(c); ABI_CHECK(0x1010a87fu, 0x10107d22u); RETCHK(0x10107d27u, 0x10107d22u); LOADALL;
L_10107d27:;
  /* 10107d27 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10107d2a:;
  /* 10107d2a mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107d2d mov cl, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107d30 mov byte ptr [eax], cl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10107d32 jmp 0x10107d48 */ goto L_10107d48;
L_10107d34:;
  /* 10107d34 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10107d36 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107d37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107d38 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 10107d3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107d3c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107d3d call 0x1010aaf8 */ esp -= 4; M32(esp) = 0x10107d42u; SAVEALL; F_1010aaf8(c); ABI_CHECK(0x1010aaf8u, 0x10107d3du); RETCHK(0x10107d42u, 0x10107d3du); LOADALL;
  /* 10107d42 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107d45 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
L_10107d48:;
  /* 10107d48 cmp dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107d4b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10107d4c je 0x10107d54 */ if (ZF_) goto L_10107d54;
  /* 10107d4e or dword ptr [esi + 0xc], 0x20 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107d52 jmp 0x10107d64 */ goto L_10107d64;
L_10107d54:;
  /* 10107d54 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10107d57 and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107d5c jmp 0x10107d67 */ goto L_10107d67;
L_10107d5e:;
  /* 10107d5e or eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107d61 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
L_10107d64:;
  /* 10107d64 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10107d67:;
  /* 10107d67 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107d68 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107d69 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107d6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107d6b(CPU *c) {
  NATIVE_HOOK(0x10107d6bu) REGS; LOADALL;
L_10107d6b:;
  /* 10107d6b test byte ptr [ecx + 0xc], 0x40 */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107d6f je 0x10107d77 */ if (ZF_) goto L_10107d77;
  /* 10107d71 cmp dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107d75 je 0x10107d9b */ if (ZF_) goto L_10107d9b;
L_10107d77:;
  /* 10107d77 dec dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107d7a js 0x10107d87 */ if (SF_) goto L_10107d87;
  /* 10107d7c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10107d7e mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10107d80 inc dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107d82 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 10107d85 jmp 0x10107d93 */ goto L_10107d93;
L_10107d87:;
  /* 10107d87 movsx eax, al */ { eax = (u32)((u32)sxt((eax & 0xffu), 1) & 0xffffffffu); }
  /* 10107d8a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10107d8b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10107d8c call 0x10107c52 */ esp -= 4; M32(esp) = 0x10107d91u; SAVEALL; F_10107c52(c); ABI_CHECK(0x10107c52u, 0x10107d8cu); RETCHK(0x10107d91u, 0x10107d8cu); LOADALL;
  /* 10107d91 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107d92 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10107d93:;
  /* 10107d93 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107d96 jne 0x10107d9b */ if (!ZF_) goto L_10107d9b;
  /* 10107d98 or dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107d9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10107d9b:;
  /* 10107d9b inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107d9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107d9e(CPU *c) {
  NATIVE_HOOK(0x10107d9eu) REGS; LOADALL;
L_10107d9e:;
  /* 10107d9e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107d9f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10107da1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107da2 mov esi, eax */ { esi = (u32)(eax); }
  /* 10107da4 jmp 0x10107db9 */ goto L_10107db9;
L_10107da6:;
  /* 10107da6 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10107da9 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107dac dec dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107daf call 0x10107d6b */ esp -= 4; M32(esp) = 0x10107db4u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x10107dafu); RETCHK(0x10107db4u, 0x10107dafu); LOADALL;
  /* 10107db4 cmp dword ptr [esi], -1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107db7 je 0x10107dbf */ if (ZF_) goto L_10107dbf;
L_10107db9:;
  /* 10107db9 cmp dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107dbd jg 0x10107da6 */ if (!(ZF_|LT_)) goto L_10107da6;
L_10107dbf:;
  /* 10107dbf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107dc0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10107dc1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107dc2(CPU *c) {
  NATIVE_HOOK(0x10107dc2u) REGS; LOADALL;
L_10107dc2:;
  /* 10107dc2 test byte ptr [edi + 0xc], 0x40 */ { const u32 m_ = (u32)(edi + 0xcu); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107dc6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107dc7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107dc8 mov esi, eax */ { esi = (u32)(eax); }
  /* 10107dca mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10107dcc je 0x10107def */ if (ZF_) goto L_10107def;
  /* 10107dce cmp dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107dd2 jne 0x10107def */ if (!ZF_) goto L_10107def;
  /* 10107dd4 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10107dd8 add dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107dda jmp 0x10107df6 */ goto L_10107df6;
L_10107ddc:;
  /* 10107ddc mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107dde dec dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107de2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10107de4 call 0x10107d6b */ esp -= 4; M32(esp) = 0x10107de9u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x10107de4u); RETCHK(0x10107de9u, 0x10107de4u); LOADALL;
  /* 10107de9 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107dea cmp dword ptr [esi], -1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107ded je 0x10107df6 */ if (ZF_) goto L_10107df6;
L_10107def:;
  /* 10107def cmp dword ptr [esp + 0xc], 0 */ { const u32 m_ = (u32)(esp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107df4 jg 0x10107ddc */ if (!(ZF_|LT_)) goto L_10107ddc;
L_10107df6:;
  /* 10107df6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10107df7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10107df8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107df9(CPU *c) {
  NATIVE_HOOK(0x10107df9u) REGS; LOADALL;
L_10107df9:;
  /* 10107df9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10107dfa lea ebp, [esp - 0x1d4] */ ebp = (u32)((u32)(esp + 0xfffffe2cu));
  /* 10107e01 sub esp, 0x254 */ { u32 a_ = esp, b_ = 0x254u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10107e07 mov eax, dword ptr [0x101100f0] */ { const u32 m_ = (u32)(0x101100f0u); eax = (u32)(M32(m_)); }
  /* 10107e0c mov dword ptr [ebp + 0x1d0], eax */ { const u32 m_ = (u32)(ebp + 0x1d0u); M32(m_) = (u32)(eax); }
  /* 10107e12 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e14 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10107e17 mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 10107e1a mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 10107e1d mov eax, dword ptr [ebp + 0x1e0] */ { const u32 m_ = (u32)(ebp + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 10107e23 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10107e24 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107e26 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10107e28 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10107e2a je 0x101085bc */ if (ZF_) goto L_101085bc;
  /* 10107e30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10107e31 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10107e32 mov edi, eax */ { edi = (u32)(eax); }
  /* 10107e34 jmp 0x10107e39 */ goto L_10107e39;
L_10107e36:;
  /* 10107e36 mov ecx, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ecx = (u32)(M32(m_)); }
L_10107e39:;
  /* 10107e39 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107e3a cmp dword ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e3e mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107e44 jl 0x101085ba */ if (LT_) goto L_101085ba;
  /* 10107e4a cmp bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e4d jl 0x10107e63 */ if (LT_) goto L_10107e63;
  /* 10107e4f cmp bl, 0x78 */ { u32 a_ = (ebx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e52 jg 0x10107e63 */ if (!(ZF_|LT_)) goto L_10107e63;
  /* 10107e54 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107e57 movsx eax, byte ptr [eax + 0x1010d698] */ { const u32 m_ = (u32)(eax + 0x1010d698u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e5e and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e61 jmp 0x10107e65 */ goto L_10107e65;
L_10107e63:;
  /* 10107e63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10107e65:;
  /* 10107e65 movsx eax, byte ptr [ecx + eax*8 + 0x1010d6b8] */ { const u32 m_ = (u32)(ecx + eax * 8u + 0x1010d6b8u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e6d push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10107e6f sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10107e72 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107e73 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e75 mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 10107e78 ja 0x101085aa */ if (!(CF_|ZF_)) goto L_101085aa;
  /* 10107e7e jmp dword ptr [eax*4 + 0x101085d3] */ { const u32 m_ = (u32)(eax * 4u + 0x101085d3u); u32 t_ = M32(m_); switch (t_) { case 0x10107e85u: goto L_10107e85; case 0x10107ea2u: goto L_10107ea2; case 0x10107eeeu: goto L_10107eee; case 0x10107f2fu: goto L_10107f2f; case 0x10107f38u: goto L_10107f38; case 0x10107f76u: goto L_10107f76; case 0x10108015u: goto L_10108015; case 0x10108057u: goto L_10108057; default: SAVEALL; call_ind(c, t_); return; } }
L_10107e85:;
  /* 10107e85 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e87 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107e8b mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 10107e8e mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 10107e91 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107e94 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 10107e97 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10107e9a mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 10107e9d jmp 0x101085aa */ goto L_101085aa;
L_10107ea2:;
  /* 10107ea2 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107ea5 sub eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ea8 je 0x10107ee5 */ if (ZF_) goto L_10107ee5;
  /* 10107eaa sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ead je 0x10107edc */ if (ZF_) goto L_10107edc;
  /* 10107eaf sub eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107eb2 je 0x10107ed3 */ if (ZF_) goto L_10107ed3;
  /* 10107eb4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb6 je 0x10107eca */ if (ZF_) goto L_10107eca;
  /* 10107eb8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ebb jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107ec1 or dword ptr [ebp - 0x3c], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ec5 jmp 0x101085aa */ goto L_101085aa;
L_10107eca:;
  /* 10107eca or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ece jmp 0x101085aa */ goto L_101085aa;
L_10107ed3:;
  /* 10107ed3 or dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ed7 jmp 0x101085aa */ goto L_101085aa;
L_10107edc:;
  /* 10107edc or byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107ee0 jmp 0x101085aa */ goto L_101085aa;
L_10107ee5:;
  /* 10107ee5 or dword ptr [ebp - 0x3c], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ee9 jmp 0x101085aa */ goto L_101085aa;
L_10107eee:;
  /* 10107eee cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ef1 jne 0x10107f1a */ if (!ZF_) goto L_10107f1a;
  /* 10107ef3 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107efa mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f00 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f05 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f08 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f0e or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f12 neg dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_); u32 r_ = (0u - a_) & 0xffffffffu; M32(m_) = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10107f15 jmp 0x101085aa */ goto L_101085aa;
L_10107f1a:;
  /* 10107f1a mov eax, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); eax = (u32)(M32(m_)); }
  /* 10107f1d movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f20 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f23 lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f27 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f2a jmp 0x101085aa */ goto L_101085aa;
L_10107f2f:;
  /* 10107f2f and dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f33 jmp 0x101085aa */ goto L_101085aa;
L_10107f38:;
  /* 10107f38 cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f3b jne 0x10107f61 */ if (!ZF_) goto L_10107f61;
  /* 10107f3d add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f44 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f4a mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f4f mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f52 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f58 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f5c jmp 0x101085aa */ goto L_101085aa;
L_10107f61:;
  /* 10107f61 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10107f64 movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f67 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f6a lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f6e mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f71 jmp 0x101085aa */ goto L_101085aa;
L_10107f76:;
  /* 10107f76 cmp bl, 0x49 */ { u32 a_ = (ebx & 0xffu), b_ = 0x49u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f79 je 0x10107fa9 */ if (ZF_) goto L_10107fa9;
  /* 10107f7b cmp bl, 0x68 */ { u32 a_ = (ebx & 0xffu), b_ = 0x68u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f7e je 0x10107fa0 */ if (ZF_) goto L_10107fa0;
  /* 10107f80 cmp bl, 0x6c */ { u32 a_ = (ebx & 0xffu), b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f83 je 0x10107f97 */ if (ZF_) goto L_10107f97;
  /* 10107f85 cmp bl, 0x77 */ { u32 a_ = (ebx & 0xffu), b_ = 0x77u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f88 jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107f8e or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107f92 jmp 0x101085aa */ goto L_101085aa;
L_10107f97:;
  /* 10107f97 or dword ptr [ebp - 0x3c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f9b jmp 0x101085aa */ goto L_101085aa;
L_10107fa0:;
  /* 10107fa0 or dword ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107fa4 jmp 0x101085aa */ goto L_101085aa;
L_10107fa9:;
  /* 10107fa9 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107fab cmp al, 0x36 */ { u32 a_ = (eax & 0xffu), b_ = 0x36u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fad jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107faf cmp byte ptr [edi + 1], 0x34 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fb3 jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107fb5 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb6 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb7 or byte ptr [ebp - 0x3b], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fbb mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fc1 jmp 0x101085aa */ goto L_101085aa;
L_10107fc6:;
  /* 10107fc6 cmp al, 0x33 */ { u32 a_ = (eax & 0xffu), b_ = 0x33u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fc8 jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fca cmp byte ptr [edi + 1], 0x32 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x32u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fce jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fd0 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd2 and byte ptr [ebp - 0x3b], 0x7f */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fd6 mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fdc jmp 0x101085aa */ goto L_101085aa;
L_10107fe1:;
  /* 10107fe1 cmp al, 0x64 */ { u32 a_ = (eax & 0xffu), b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fe3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107fe9 cmp al, 0x69 */ { u32 a_ = (eax & 0xffu), b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107feb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff1 cmp al, 0x6f */ { u32 a_ = (eax & 0xffu), b_ = 0x6fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ff3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff9 cmp al, 0x75 */ { u32 a_ = (eax & 0xffu), b_ = 0x75u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ffb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108001 cmp al, 0x78 */ { u32 a_ = (eax & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108003 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108009 cmp al, 0x58 */ { u32 a_ = (eax & 0xffu), b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010800b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108011 and dword ptr [ebp - 0x70], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108015:;
  /* 10108015 mov ecx, dword ptr [0x10110a30] */ { const u32 m_ = (u32)(0x10110a30u); ecx = (u32)(M32(m_)); }
  /* 1010801b and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010801f movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10108022 test byte ptr [ecx + eax*2 + 1], 0x80 */ { const u32 m_ = (u32)(ecx + eax * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108027 je 0x10108042 */ if (ZF_) goto L_10108042;
  /* 10108029 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 1010802f lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108032 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 10108034 call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108039u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x10108034u); RETCHK(0x10108039u, 0x10108034u); LOADALL;
  /* 10108039 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010803b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010803c mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
L_10108042:;
  /* 10108042 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 10108048 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010804b mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 1010804d call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108052u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x1010804du); RETCHK(0x10108052u, 0x1010804du); LOADALL;
  /* 10108052 jmp 0x101085aa */ goto L_101085aa;
L_10108057:;
  /* 10108057 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 1010805a cmp eax, 0x67 */ { u32 a_ = eax, b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010805d jg 0x101082bb */ if (!(ZF_|LT_)) goto L_101082bb;
  /* 10108063 cmp eax, 0x65 */ { u32 a_ = eax, b_ = 0x65u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108066 jge 0x101080f2 */ if (!LT_) goto L_101080f2;
  /* 1010806c cmp eax, 0x58 */ { u32 a_ = eax, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010806f jg 0x10108153 */ if (!(ZF_|LT_)) goto L_10108153;
  /* 10108075 je 0x1010833c */ if (ZF_) goto L_1010833c;
  /* 1010807b sub eax, 0x43 */ { u32 a_ = eax, b_ = 0x43u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010807e je 0x10108112 */ if (ZF_) goto L_10108112;
  /* 10108084 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108085 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108086 je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 10108088 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108089 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010808a je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 1010808c sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010808f jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 10108095 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010809b jne 0x101080a1 */ if (!ZF_) goto L_101080a1;
  /* 1010809d or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101080a1:;
  /* 101080a1 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 101080a4 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080a7 jne 0x101080ae */ if (!ZF_) goto L_101080ae;
  /* 101080a9 mov ecx, 0x7fffffff */ { ecx = (u32)(0x7fffffffu); }
L_101080ae:;
  /* 101080ae add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080b5 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 101080bb mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101080c1 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101080c4 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101080c7 je 0x10108311 */ if (ZF_) goto L_10108311;
  /* 101080cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101080cf jne 0x101080d9 */ if (!ZF_) goto L_101080d9;
  /* 101080d1 mov eax, dword ptr [0x10110254] */ { const u32 m_ = (u32)(0x10110254u); eax = (u32)(M32(m_)); }
  /* 101080d6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_101080d9:;
  /* 101080d9 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 101080dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101080e3 jmp 0x10108303 */ goto L_10108303;
L_101080e8:;
  /* 101080e8 mov dword ptr [ebp - 0x6c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x1u); }
  /* 101080ef add bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_101080f2:;
  /* 101080f2 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080f6 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080fa lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101080fd mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 10108100 jge 0x101081ff */ if (!LT_) goto L_101081ff;
  /* 10108106 mov dword ptr [ebp - 0x40], 6 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x6u); }
  /* 1010810d jmp 0x10108246 */ goto L_10108246;
L_10108112:;
  /* 10108112 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10108118 jne 0x1010811e */ if (!ZF_) goto L_1010811e;
  /* 1010811a or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_1010811e:;
  /* 1010811e add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108125 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010812b mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108131 je 0x10108198 */ if (ZF_) goto L_10108198;
  /* 10108133 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 10108137 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108138 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 1010813b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010813c call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108141u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x1010813cu); RETCHK(0x10108141u, 0x1010813cu); LOADALL;
  /* 10108141 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108143 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108144 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108145 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108148 jge 0x101081a5 */ if (!LT_) goto L_101081a5;
  /* 1010814a mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 10108151 jmp 0x101081a5 */ goto L_101081a5;
L_10108153:;
  /* 10108153 sub eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108156 je 0x101081b0 */ if (ZF_) goto L_101081b0;
  /* 10108158 sub eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010815b je 0x1010811e */ if (ZF_) goto L_1010811e;
  /* 1010815d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010815e jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108164:;
  /* 10108164 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108168:;
  /* 10108168 mov dword ptr [ebp - 0x48], 0xa */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0xau); }
L_1010816f:;
  /* 1010816f mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 10108172 mov esi, 0x8000 */ { esi = (u32)(0x8000u); }
  /* 10108177 test esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108179 je 0x101083b2 */ if (ZF_) goto L_101083b2;
  /* 1010817f mov ecx, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 10108185 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10108187 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010818a add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010818d mov dword ptr [ebp + 0x1e4], ecx */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(ecx); }
  /* 10108193 jmp 0x101083e0 */ goto L_101083e0;
L_10108198:;
  /* 10108198 mov al, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010819b mov byte ptr [ebp - 0x38], al */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010819e mov dword ptr [ebp - 0x48], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x1u); }
L_101081a5:;
  /* 101081a5 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101081a8 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081ab jmp 0x10108496 */ goto L_10108496;
L_101081b0:;
  /* 101081b0 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081b7 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101081bd mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101081c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c2 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081c4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101081c7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c9 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081cb test byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101081cf movsx eax, word ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 101081d2 mov dword ptr [ebp - 0x44], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ecx); }
  /* 101081d5 je 0x101081e8 */ if (ZF_) goto L_101081e8;
  /* 101081d7 cdq */ edx = (u32)((s32)eax >> 31);
  /* 101081d8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101081da sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101081dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101081e3 jmp 0x10108493 */ goto L_10108493;
L_101081e8:;
  /* 101081e8 and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081ec jmp 0x10108493 */ goto L_10108493;
L_101081f1:;
  /* 101081f1 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 101081f6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101081fa jmp 0x101082b0 */ goto L_101082b0;
L_101081ff:;
  /* 101081ff jne 0x1010820f */ if (!ZF_) goto L_1010820f;
  /* 10108201 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108204 jne 0x10108246 */ if (!ZF_) goto L_10108246;
  /* 10108206 mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 1010820d jmp 0x10108246 */ goto L_10108246;
L_1010820f:;
  /* 1010820f mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 10108214 cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108217 jle 0x1010821c */ if ((ZF_|LT_)) goto L_1010821c;
  /* 10108219 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_1010821c:;
  /* 1010821c mov edi, 0xa3 */ { edi = (u32)(0xa3u); }
  /* 10108221 cmp dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108224 jle 0x10108246 */ if ((ZF_|LT_)) goto L_10108246;
  /* 10108226 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108229 add eax, 0x15d */ { u32 a_ = eax, b_ = 0x15du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010822e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010822f call 0x10106108 */ esp -= 4; M32(esp) = 0x10108234u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x1010822fu); RETCHK(0x10108234u, 0x1010822fu); LOADALL;
  /* 10108234 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108236 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108237 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 1010823a je 0x10108243 */ if (ZF_) goto L_10108243;
  /* 1010823c mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 1010823f mov esi, eax */ { esi = (u32)(eax); }
  /* 10108241 jmp 0x10108246 */ goto L_10108246;
L_10108243:;
  /* 10108243 mov dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edi); }
L_10108246:;
  /* 10108246 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 1010824c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1010824e push dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108251 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108254 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108257 mov dword ptr [ebp + 0x1e4], eax */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 1010825d mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108260 mov dword ptr [ebp - 0x7c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(eax); }
  /* 10108263 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10108266 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108267 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1010826a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010826b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010826c mov dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ecx); }
  /* 1010826f call dword ptr [0x10110a18] */ { const u32 m_ = (u32)(0x10110a18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108275u; SAVEALL; call_ind(c, t_); RETCHK(0x10108275u, 0x1010826fu); LOADALL; }
  /* 10108275 mov edi, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edi = (u32)(M32(m_)); }
  /* 10108278 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010827b and edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10108281 je 0x10108291 */ if (ZF_) goto L_10108291;
  /* 10108283 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108287 jne 0x10108291 */ if (!ZF_) goto L_10108291;
  /* 10108289 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010828a call dword ptr [0x10110a24] */ { const u32 m_ = (u32)(0x10110a24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108290u; SAVEALL; call_ind(c, t_); RETCHK(0x10108290u, 0x1010828au); LOADALL; }
  /* 10108290 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10108291:;
  /* 10108291 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108294 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 10108296 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108298 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 1010829a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010829b call dword ptr [0x10110a1c] */ { const u32 m_ = (u32)(0x10110a1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101082a1u; SAVEALL; call_ind(c, t_); RETCHK(0x101082a1u, 0x1010829bu); LOADALL; }
  /* 101082a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101082a2:;
  /* 101082a2 cmp byte ptr [esi], 0x2d */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101082a5 jne 0x101082af */ if (!ZF_) goto L_101082af;
  /* 101082a7 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 101082ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101082ac mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
L_101082af:;
  /* 101082af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_101082b0:;
  /* 101082b0 call 0x10106140 */ esp -= 4; M32(esp) = 0x101082b5u; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101082b0u); RETCHK(0x101082b5u, 0x101082b0u); LOADALL;
  /* 101082b5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101082b6 jmp 0x10108493 */ goto L_10108493;
L_101082bb:;
  /* 101082bb sub eax, 0x69 */ { u32 a_ = eax, b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082be je 0x10108164 */ if (ZF_) goto L_10108164;
  /* 101082c4 sub eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082c7 je 0x10108382 */ if (ZF_) goto L_10108382;
  /* 101082cd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082ce je 0x10108368 */ if (ZF_) goto L_10108368;
  /* 101082d4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082d5 je 0x10108335 */ if (ZF_) goto L_10108335;
  /* 101082d7 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082da je 0x101080a1 */ if (ZF_) goto L_101080a1;
  /* 101082e0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e1 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e2 je 0x10108168 */ if (ZF_) goto L_10108168;
  /* 101082e8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082eb jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 101082f1 mov dword ptr [ebp - 0x68], 0x27 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0x27u); }
  /* 101082f8 jmp 0x1010833f */ goto L_1010833f;
L_101082fa:;
  /* 101082fa dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082fb cmp word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101082ff je 0x10108307 */ if (ZF_) goto L_10108307;
  /* 10108301 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108302 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108303:;
  /* 10108303 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108305 jne 0x101082fa */ if (!ZF_) goto L_101082fa;
L_10108307:;
  /* 10108307 sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010830a sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1010830c jmp 0x10108493 */ goto L_10108493;
L_10108311:;
  /* 10108311 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108313 jne 0x1010831d */ if (!ZF_) goto L_1010831d;
  /* 10108315 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 1010831a mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_1010831d:;
  /* 1010831d mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 10108320 jmp 0x10108329 */ goto L_10108329;
L_10108322:;
  /* 10108322 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108323 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108326 je 0x1010832d */ if (ZF_) goto L_1010832d;
  /* 10108328 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108329:;
  /* 10108329 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010832b jne 0x10108322 */ if (!ZF_) goto L_10108322;
L_1010832d:;
  /* 1010832d sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108330 jmp 0x10108493 */ goto L_10108493;
L_10108335:;
  /* 10108335 mov dword ptr [ebp - 0x40], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x8u); }
L_1010833c:;
  /* 1010833c mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
L_1010833f:;
  /* 1010833f test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108343 mov dword ptr [ebp - 0x48], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x10u); }
  /* 1010834a je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108350 mov al, byte ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10108353 add al, 0x51 */ { u32 a_ = (eax & 0xffu), b_ = 0x51u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10108355 mov byte ptr [ebp - 0x50], 0x30 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x30u); }
  /* 10108359 mov byte ptr [ebp - 0x4f], al */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010835c mov dword ptr [ebp - 0x54], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x2u); }
  /* 10108363 jmp 0x1010816f */ goto L_1010816f;
L_10108368:;
  /* 10108368 test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010836c mov dword ptr [ebp - 0x48], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x8u); }
  /* 10108373 je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108379 or byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1010837d jmp 0x1010816f */ goto L_1010816f;
L_10108382:;
  /* 10108382 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108389 test byte ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010838d mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108393 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108396 je 0x101083a1 */ if (ZF_) goto L_101083a1;
  /* 10108398 mov cx, word ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010839c mov word ptr [eax], cx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 1010839f jmp 0x101083a6 */ goto L_101083a6;
L_101083a1:;
  /* 101083a1 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 101083a4 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_101083a6:;
  /* 101083a6 mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 101083ad jmp 0x10108597 */ goto L_10108597;
L_101083b2:;
  /* 101083b2 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101083b9 test bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083bc mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101083c2 je 0x101083d6 */ if (ZF_) goto L_101083d6;
  /* 101083c4 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083c7 je 0x101083d0 */ if (ZF_) goto L_101083d0;
  /* 101083c9 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
L_101083cd:;
  /* 101083cd cdq */ edx = (u32)((s32)eax >> 31);
  /* 101083ce jmp 0x101083e0 */ goto L_101083e0;
L_101083d0:;
  /* 101083d0 movzx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 101083d4 jmp 0x101083cd */ goto L_101083cd;
L_101083d6:;
  /* 101083d6 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083d9 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101083dc jne 0x101083cd */ if (!ZF_) goto L_101083cd;
  /* 101083de xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_101083e0:;
  /* 101083e0 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083e3 je 0x101083fa */ if (ZF_) goto L_101083fa;
  /* 101083e5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083e7 jg 0x101083fa */ if (!(ZF_|LT_)) goto L_101083fa;
  /* 101083e9 jl 0x101083ef */ if (LT_) goto L_101083ef;
  /* 101083eb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083ed jae 0x101083fa */ if (!CF_) goto L_101083fa;
L_101083ef:;
  /* 101083ef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f1 adc edx, 0 */ { u32 a_ = edx, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 101083f4 neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f6 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101083fa:;
  /* 101083fa test dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083fd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101083ff mov edi, edx */ { edi = (u32)(edx); }
  /* 10108401 jne 0x10108405 */ if (!ZF_) goto L_10108405;
  /* 10108403 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_10108405:;
  /* 10108405 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108409 jge 0x10108414 */ if (!LT_) goto L_10108414;
  /* 1010840b mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 10108412 jmp 0x10108425 */ goto L_10108425;
L_10108414:;
  /* 10108414 and dword ptr [ebp - 0x3c], 0xfffffff7 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108418 mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 1010841d cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108420 jle 0x10108425 */ if ((ZF_|LT_)) goto L_10108425;
  /* 10108422 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_10108425:;
  /* 10108425 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108427 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108429 jne 0x1010842f */ if (!ZF_) goto L_1010842f;
  /* 1010842b and dword ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1010842f:;
  /* 1010842f lea esi, [ebp + 0x1c7] */ esi = (u32)((u32)(ebp + 0x1c7u));
L_10108435:;
  /* 10108435 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108438 dec dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010843b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010843d jg 0x10108445 */ if (!(ZF_|LT_)) goto L_10108445;
  /* 1010843f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108441 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108443 je 0x10108469 */ if (ZF_) goto L_10108469;
L_10108445:;
  /* 10108445 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 10108448 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10108449 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010844a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010844b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010844c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010844d call 0x1010ae00 */ esp -= 4; M32(esp) = 0x10108452u; SAVEALL; F_1010ae00(c); ABI_CHECK(0x1010ae00u, 0x1010844du); RETCHK(0x10108452u, 0x1010844du); LOADALL;
  /* 10108452 add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10108455 cmp ecx, 0x39 */ { u32 a_ = ecx, b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108458 mov dword ptr [ebp - 0x74], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(ebx); }
  /* 1010845b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1010845d mov edi, edx */ { edi = (u32)(edx); }
  /* 1010845f jle 0x10108464 */ if ((ZF_|LT_)) goto L_10108464;
  /* 10108461 add ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_10108464:;
  /* 10108464 mov byte ptr [esi], cl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10108466 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108467 jmp 0x10108435 */ goto L_10108435;
L_10108469:;
  /* 10108469 lea eax, [ebp + 0x1c7] */ eax = (u32)((u32)(ebp + 0x1c7u));
  /* 1010846f sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108471 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108472 test byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108476 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108479 mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 1010847c je 0x10108496 */ if (ZF_) goto L_10108496;
  /* 1010847e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10108480 cmp byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108483 jne 0x10108489 */ if (!ZF_) goto L_10108489;
  /* 10108485 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108487 jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108489:;
  /* 10108489 dec dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010848c mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 1010848f mov byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)(0x30u); }
  /* 10108492 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108493:;
  /* 10108493 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
L_10108496:;
  /* 10108496 cmp dword ptr [ebp - 0x64], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010849a jne 0x10108597 */ if (!ZF_) goto L_10108597;
  /* 101084a0 mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 101084a3 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084a6 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084a8 test bh, 1 */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084ab je 0x101084b3 */ if (ZF_) goto L_101084b3;
  /* 101084ad mov byte ptr [ebp - 0x50], 0x2d */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2du); }
  /* 101084b1 jmp 0x101084c7 */ goto L_101084c7;
L_101084b3:;
  /* 101084b3 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084b6 je 0x101084be */ if (ZF_) goto L_101084be;
  /* 101084b8 mov byte ptr [ebp - 0x50], 0x2b */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2bu); }
  /* 101084bc jmp 0x101084c7 */ goto L_101084c7;
L_101084be:;
  /* 101084be test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084c1 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084c3 mov byte ptr [ebp - 0x50], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x20u); }
L_101084c7:;
  /* 101084c7 mov dword ptr [ebp - 0x54], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x1u); }
L_101084ce:;
  /* 101084ce mov esi, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); esi = (u32)(M32(m_)); }
  /* 101084d1 sub esi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d4 sub esi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d7 test bl, 0xc */ { u32 a_ = (ebx & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084da jne 0x101084f0 */ if (!ZF_) goto L_101084f0;
  /* 101084dc push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084e2 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101084e6 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 101084e8 call 0x10107d9e */ esp -= 4; M32(esp) = 0x101084edu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x101084e8u); RETCHK(0x101084edu, 0x101084e8u); LOADALL;
  /* 101084ed add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101084f0:;
  /* 101084f0 push dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084f3 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 101084f9 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084fc lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 101084ff call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108504u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x101084ffu); RETCHK(0x10108504u, 0x101084ffu); LOADALL;
  /* 10108504 test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108507 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108508 je 0x1010851e */ if (ZF_) goto L_1010851e;
  /* 1010850a test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010850d jne 0x1010851e */ if (!ZF_) goto L_1010851e;
  /* 1010850f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10108510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10108511 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 10108513 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108516 call 0x10107d9e */ esp -= 4; M32(esp) = 0x1010851bu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x10108516u); RETCHK(0x1010851bu, 0x10108516u); LOADALL;
  /* 1010851b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010851e:;
  /* 1010851e cmp dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108522 je 0x1010856e */ if (ZF_) goto L_1010856e;
  /* 10108524 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108528 jle 0x1010856e */ if ((ZF_|LT_)) goto L_1010856e;
  /* 1010852a mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 1010852d mov ebx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ebx = (u32)(M32(m_)); }
  /* 10108530 mov dword ptr [ebp - 0x74], eax */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(eax); }
L_10108533:;
  /* 10108533 dec dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108536 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108538 mov ax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010853b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010853c lea eax, [ebp + 0x1c8] */ eax = (u32)((u32)(ebp + 0x1c8u));
  /* 10108542 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108543 call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108548u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x10108543u); RETCHK(0x10108548u, 0x10108543u); LOADALL;
  /* 10108548 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108549 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010854b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010854d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854e jle 0x1010857d */ if ((ZF_|LT_)) goto L_1010857d;
  /* 10108550 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 10108556 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108557 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010855a lea ecx, [ebp + 0x1c8] */ ecx = (u32)((u32)(ebp + 0x1c8u));
  /* 10108560 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108565u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108560u); RETCHK(0x10108565u, 0x10108560u); LOADALL;
  /* 10108565 cmp dword ptr [ebp - 0x74], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108569 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010856a jne 0x10108533 */ if (!ZF_) goto L_10108533;
  /* 1010856c jmp 0x1010857d */ goto L_1010857d;
L_1010856e:;
  /* 1010856e push dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108571 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10108574 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108577 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x1010857cu; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108577u); RETCHK(0x1010857cu, 0x10108577u); LOADALL;
  /* 1010857c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1010857d:;
  /* 1010857d test byte ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108581 je 0x10108597 */ if (ZF_) goto L_10108597;
  /* 10108583 push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108589 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010858c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010858d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1010858f call 0x10107d9e */ esp -= 4; M32(esp) = 0x10108594u; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x1010858fu); RETCHK(0x10108594u, 0x1010858fu); LOADALL;
  /* 10108594 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10108597:;
  /* 10108597 cmp dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010859b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 1010859d push dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101085a0 call 0x101074a1 */ esp -= 4; M32(esp) = 0x101085a5u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101085a0u); RETCHK(0x101085a5u, 0x101085a0u); LOADALL;
  /* 101085a5 and dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101085a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101085aa:;
  /* 101085aa mov edi, dword ptr [ebp + 0x1e0] */ { const u32 m_ = (u32)(ebp + 0x1e0u); edi = (u32)(M32(m_)); }
  /* 101085b0 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101085b2 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101085b4 jne 0x10107e36 */ if (!ZF_) goto L_10107e36;
L_101085ba:;
  /* 101085ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101085bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_101085bc:;
  /* 101085bc mov ecx, dword ptr [ebp + 0x1d0] */ { const u32 m_ = (u32)(ebp + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 101085c2 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 101085c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101085c6 call 0x1010570f */ esp -= 4; M32(esp) = 0x101085cbu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101085c6u); RETCHK(0x101085cbu, 0x101085c6u); LOADALL;
  /* 101085cb add ebp, 0x1d4 */ { u32 a_ = ebp, b_ = 0x1d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101085d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101085d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107e85(CPU *c) {
  NATIVE_HOOK(0x10107e85u) REGS; LOADALL;
  goto L_10107e85;
L_10107e36:;
  /* 10107e36 mov ecx, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ecx = (u32)(M32(m_)); }
  /* 10107e39 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107e3a cmp dword ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e3e mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107e44 jl 0x101085ba */ if (LT_) goto L_101085ba;
  /* 10107e4a cmp bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e4d jl 0x10107e63 */ if (LT_) goto L_10107e63;
  /* 10107e4f cmp bl, 0x78 */ { u32 a_ = (ebx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e52 jg 0x10107e63 */ if (!(ZF_|LT_)) goto L_10107e63;
  /* 10107e54 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107e57 movsx eax, byte ptr [eax + 0x1010d698] */ { const u32 m_ = (u32)(eax + 0x1010d698u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e5e and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e61 jmp 0x10107e65 */ goto L_10107e65;
L_10107e63:;
  /* 10107e63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10107e65:;
  /* 10107e65 movsx eax, byte ptr [ecx + eax*8 + 0x1010d6b8] */ { const u32 m_ = (u32)(ecx + eax * 8u + 0x1010d6b8u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e6d push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10107e6f sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10107e72 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107e73 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e75 mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 10107e78 ja 0x101085aa */ if (!(CF_|ZF_)) goto L_101085aa;
  /* 10107e7e jmp dword ptr [eax*4 + 0x101085d3] */ { const u32 m_ = (u32)(eax * 4u + 0x101085d3u); u32 t_ = M32(m_); switch (t_) { case 0x10107e85u: goto L_10107e85; case 0x10107ea2u: goto L_10107ea2; case 0x10107eeeu: goto L_10107eee; case 0x10107f2fu: goto L_10107f2f; case 0x10107f38u: goto L_10107f38; case 0x10107f76u: goto L_10107f76; case 0x10108015u: goto L_10108015; case 0x10108057u: goto L_10108057; default: SAVEALL; call_ind(c, t_); return; } }
L_10107e85:;
  /* 10107e85 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e87 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107e8b mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 10107e8e mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 10107e91 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107e94 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 10107e97 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10107e9a mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 10107e9d jmp 0x101085aa */ goto L_101085aa;
L_10107ea2:;
  /* 10107ea2 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107ea5 sub eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ea8 je 0x10107ee5 */ if (ZF_) goto L_10107ee5;
  /* 10107eaa sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ead je 0x10107edc */ if (ZF_) goto L_10107edc;
  /* 10107eaf sub eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107eb2 je 0x10107ed3 */ if (ZF_) goto L_10107ed3;
  /* 10107eb4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb6 je 0x10107eca */ if (ZF_) goto L_10107eca;
  /* 10107eb8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ebb jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107ec1 or dword ptr [ebp - 0x3c], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ec5 jmp 0x101085aa */ goto L_101085aa;
L_10107eca:;
  /* 10107eca or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ece jmp 0x101085aa */ goto L_101085aa;
L_10107ed3:;
  /* 10107ed3 or dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ed7 jmp 0x101085aa */ goto L_101085aa;
L_10107edc:;
  /* 10107edc or byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107ee0 jmp 0x101085aa */ goto L_101085aa;
L_10107ee5:;
  /* 10107ee5 or dword ptr [ebp - 0x3c], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ee9 jmp 0x101085aa */ goto L_101085aa;
L_10107eee:;
  /* 10107eee cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ef1 jne 0x10107f1a */ if (!ZF_) goto L_10107f1a;
  /* 10107ef3 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107efa mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f00 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f05 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f08 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f0e or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f12 neg dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_); u32 r_ = (0u - a_) & 0xffffffffu; M32(m_) = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10107f15 jmp 0x101085aa */ goto L_101085aa;
L_10107f1a:;
  /* 10107f1a mov eax, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); eax = (u32)(M32(m_)); }
  /* 10107f1d movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f20 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f23 lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f27 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f2a jmp 0x101085aa */ goto L_101085aa;
L_10107f2f:;
  /* 10107f2f and dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f33 jmp 0x101085aa */ goto L_101085aa;
L_10107f38:;
  /* 10107f38 cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f3b jne 0x10107f61 */ if (!ZF_) goto L_10107f61;
  /* 10107f3d add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f44 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f4a mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f4f mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f52 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f58 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f5c jmp 0x101085aa */ goto L_101085aa;
L_10107f61:;
  /* 10107f61 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10107f64 movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f67 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f6a lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f6e mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f71 jmp 0x101085aa */ goto L_101085aa;
L_10107f76:;
  /* 10107f76 cmp bl, 0x49 */ { u32 a_ = (ebx & 0xffu), b_ = 0x49u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f79 je 0x10107fa9 */ if (ZF_) goto L_10107fa9;
  /* 10107f7b cmp bl, 0x68 */ { u32 a_ = (ebx & 0xffu), b_ = 0x68u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f7e je 0x10107fa0 */ if (ZF_) goto L_10107fa0;
  /* 10107f80 cmp bl, 0x6c */ { u32 a_ = (ebx & 0xffu), b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f83 je 0x10107f97 */ if (ZF_) goto L_10107f97;
  /* 10107f85 cmp bl, 0x77 */ { u32 a_ = (ebx & 0xffu), b_ = 0x77u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f88 jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107f8e or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107f92 jmp 0x101085aa */ goto L_101085aa;
L_10107f97:;
  /* 10107f97 or dword ptr [ebp - 0x3c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f9b jmp 0x101085aa */ goto L_101085aa;
L_10107fa0:;
  /* 10107fa0 or dword ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107fa4 jmp 0x101085aa */ goto L_101085aa;
L_10107fa9:;
  /* 10107fa9 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107fab cmp al, 0x36 */ { u32 a_ = (eax & 0xffu), b_ = 0x36u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fad jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107faf cmp byte ptr [edi + 1], 0x34 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fb3 jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107fb5 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb6 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb7 or byte ptr [ebp - 0x3b], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fbb mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fc1 jmp 0x101085aa */ goto L_101085aa;
L_10107fc6:;
  /* 10107fc6 cmp al, 0x33 */ { u32 a_ = (eax & 0xffu), b_ = 0x33u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fc8 jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fca cmp byte ptr [edi + 1], 0x32 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x32u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fce jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fd0 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd2 and byte ptr [ebp - 0x3b], 0x7f */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fd6 mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fdc jmp 0x101085aa */ goto L_101085aa;
L_10107fe1:;
  /* 10107fe1 cmp al, 0x64 */ { u32 a_ = (eax & 0xffu), b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fe3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107fe9 cmp al, 0x69 */ { u32 a_ = (eax & 0xffu), b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107feb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff1 cmp al, 0x6f */ { u32 a_ = (eax & 0xffu), b_ = 0x6fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ff3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff9 cmp al, 0x75 */ { u32 a_ = (eax & 0xffu), b_ = 0x75u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ffb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108001 cmp al, 0x78 */ { u32 a_ = (eax & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108003 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108009 cmp al, 0x58 */ { u32 a_ = (eax & 0xffu), b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010800b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108011 and dword ptr [ebp - 0x70], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108015:;
  /* 10108015 mov ecx, dword ptr [0x10110a30] */ { const u32 m_ = (u32)(0x10110a30u); ecx = (u32)(M32(m_)); }
  /* 1010801b and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010801f movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10108022 test byte ptr [ecx + eax*2 + 1], 0x80 */ { const u32 m_ = (u32)(ecx + eax * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108027 je 0x10108042 */ if (ZF_) goto L_10108042;
  /* 10108029 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 1010802f lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108032 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 10108034 call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108039u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x10108034u); RETCHK(0x10108039u, 0x10108034u); LOADALL;
  /* 10108039 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010803b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010803c mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
L_10108042:;
  /* 10108042 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 10108048 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010804b mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 1010804d call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108052u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x1010804du); RETCHK(0x10108052u, 0x1010804du); LOADALL;
  /* 10108052 jmp 0x101085aa */ goto L_101085aa;
L_10108057:;
  /* 10108057 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 1010805a cmp eax, 0x67 */ { u32 a_ = eax, b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010805d jg 0x101082bb */ if (!(ZF_|LT_)) goto L_101082bb;
  /* 10108063 cmp eax, 0x65 */ { u32 a_ = eax, b_ = 0x65u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108066 jge 0x101080f2 */ if (!LT_) goto L_101080f2;
  /* 1010806c cmp eax, 0x58 */ { u32 a_ = eax, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010806f jg 0x10108153 */ if (!(ZF_|LT_)) goto L_10108153;
  /* 10108075 je 0x1010833c */ if (ZF_) goto L_1010833c;
  /* 1010807b sub eax, 0x43 */ { u32 a_ = eax, b_ = 0x43u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010807e je 0x10108112 */ if (ZF_) goto L_10108112;
  /* 10108084 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108085 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108086 je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 10108088 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108089 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010808a je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 1010808c sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010808f jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 10108095 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010809b jne 0x101080a1 */ if (!ZF_) goto L_101080a1;
  /* 1010809d or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101080a1:;
  /* 101080a1 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 101080a4 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080a7 jne 0x101080ae */ if (!ZF_) goto L_101080ae;
  /* 101080a9 mov ecx, 0x7fffffff */ { ecx = (u32)(0x7fffffffu); }
L_101080ae:;
  /* 101080ae add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080b5 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 101080bb mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101080c1 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101080c4 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101080c7 je 0x10108311 */ if (ZF_) goto L_10108311;
  /* 101080cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101080cf jne 0x101080d9 */ if (!ZF_) goto L_101080d9;
  /* 101080d1 mov eax, dword ptr [0x10110254] */ { const u32 m_ = (u32)(0x10110254u); eax = (u32)(M32(m_)); }
  /* 101080d6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_101080d9:;
  /* 101080d9 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 101080dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101080e3 jmp 0x10108303 */ goto L_10108303;
L_101080e8:;
  /* 101080e8 mov dword ptr [ebp - 0x6c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x1u); }
  /* 101080ef add bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_101080f2:;
  /* 101080f2 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080f6 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080fa lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101080fd mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 10108100 jge 0x101081ff */ if (!LT_) goto L_101081ff;
  /* 10108106 mov dword ptr [ebp - 0x40], 6 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x6u); }
  /* 1010810d jmp 0x10108246 */ goto L_10108246;
L_10108112:;
  /* 10108112 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10108118 jne 0x1010811e */ if (!ZF_) goto L_1010811e;
  /* 1010811a or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_1010811e:;
  /* 1010811e add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108125 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010812b mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108131 je 0x10108198 */ if (ZF_) goto L_10108198;
  /* 10108133 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 10108137 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108138 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 1010813b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010813c call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108141u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x1010813cu); RETCHK(0x10108141u, 0x1010813cu); LOADALL;
  /* 10108141 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108143 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108144 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108145 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108148 jge 0x101081a5 */ if (!LT_) goto L_101081a5;
  /* 1010814a mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 10108151 jmp 0x101081a5 */ goto L_101081a5;
L_10108153:;
  /* 10108153 sub eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108156 je 0x101081b0 */ if (ZF_) goto L_101081b0;
  /* 10108158 sub eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010815b je 0x1010811e */ if (ZF_) goto L_1010811e;
  /* 1010815d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010815e jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108164:;
  /* 10108164 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108168:;
  /* 10108168 mov dword ptr [ebp - 0x48], 0xa */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0xau); }
L_1010816f:;
  /* 1010816f mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 10108172 mov esi, 0x8000 */ { esi = (u32)(0x8000u); }
  /* 10108177 test esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108179 je 0x101083b2 */ if (ZF_) goto L_101083b2;
  /* 1010817f mov ecx, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 10108185 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10108187 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010818a add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010818d mov dword ptr [ebp + 0x1e4], ecx */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(ecx); }
  /* 10108193 jmp 0x101083e0 */ goto L_101083e0;
L_10108198:;
  /* 10108198 mov al, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010819b mov byte ptr [ebp - 0x38], al */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010819e mov dword ptr [ebp - 0x48], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x1u); }
L_101081a5:;
  /* 101081a5 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101081a8 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081ab jmp 0x10108496 */ goto L_10108496;
L_101081b0:;
  /* 101081b0 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081b7 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101081bd mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101081c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c2 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081c4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101081c7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c9 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081cb test byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101081cf movsx eax, word ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 101081d2 mov dword ptr [ebp - 0x44], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ecx); }
  /* 101081d5 je 0x101081e8 */ if (ZF_) goto L_101081e8;
  /* 101081d7 cdq */ edx = (u32)((s32)eax >> 31);
  /* 101081d8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101081da sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101081dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101081e3 jmp 0x10108493 */ goto L_10108493;
L_101081e8:;
  /* 101081e8 and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081ec jmp 0x10108493 */ goto L_10108493;
L_101081f1:;
  /* 101081f1 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 101081f6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101081fa jmp 0x101082b0 */ goto L_101082b0;
L_101081ff:;
  /* 101081ff jne 0x1010820f */ if (!ZF_) goto L_1010820f;
  /* 10108201 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108204 jne 0x10108246 */ if (!ZF_) goto L_10108246;
  /* 10108206 mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 1010820d jmp 0x10108246 */ goto L_10108246;
L_1010820f:;
  /* 1010820f mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 10108214 cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108217 jle 0x1010821c */ if ((ZF_|LT_)) goto L_1010821c;
  /* 10108219 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_1010821c:;
  /* 1010821c mov edi, 0xa3 */ { edi = (u32)(0xa3u); }
  /* 10108221 cmp dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108224 jle 0x10108246 */ if ((ZF_|LT_)) goto L_10108246;
  /* 10108226 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108229 add eax, 0x15d */ { u32 a_ = eax, b_ = 0x15du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010822e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010822f call 0x10106108 */ esp -= 4; M32(esp) = 0x10108234u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x1010822fu); RETCHK(0x10108234u, 0x1010822fu); LOADALL;
  /* 10108234 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108236 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108237 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 1010823a je 0x10108243 */ if (ZF_) goto L_10108243;
  /* 1010823c mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 1010823f mov esi, eax */ { esi = (u32)(eax); }
  /* 10108241 jmp 0x10108246 */ goto L_10108246;
L_10108243:;
  /* 10108243 mov dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edi); }
L_10108246:;
  /* 10108246 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 1010824c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1010824e push dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108251 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108254 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108257 mov dword ptr [ebp + 0x1e4], eax */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 1010825d mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108260 mov dword ptr [ebp - 0x7c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(eax); }
  /* 10108263 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10108266 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108267 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1010826a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010826b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010826c mov dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ecx); }
  /* 1010826f call dword ptr [0x10110a18] */ { const u32 m_ = (u32)(0x10110a18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108275u; SAVEALL; call_ind(c, t_); RETCHK(0x10108275u, 0x1010826fu); LOADALL; }
  /* 10108275 mov edi, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edi = (u32)(M32(m_)); }
  /* 10108278 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010827b and edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10108281 je 0x10108291 */ if (ZF_) goto L_10108291;
  /* 10108283 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108287 jne 0x10108291 */ if (!ZF_) goto L_10108291;
  /* 10108289 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010828a call dword ptr [0x10110a24] */ { const u32 m_ = (u32)(0x10110a24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108290u; SAVEALL; call_ind(c, t_); RETCHK(0x10108290u, 0x1010828au); LOADALL; }
  /* 10108290 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10108291:;
  /* 10108291 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108294 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 10108296 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108298 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 1010829a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010829b call dword ptr [0x10110a1c] */ { const u32 m_ = (u32)(0x10110a1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101082a1u; SAVEALL; call_ind(c, t_); RETCHK(0x101082a1u, 0x1010829bu); LOADALL; }
  /* 101082a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101082a2:;
  /* 101082a2 cmp byte ptr [esi], 0x2d */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101082a5 jne 0x101082af */ if (!ZF_) goto L_101082af;
  /* 101082a7 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 101082ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101082ac mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
L_101082af:;
  /* 101082af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_101082b0:;
  /* 101082b0 call 0x10106140 */ esp -= 4; M32(esp) = 0x101082b5u; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101082b0u); RETCHK(0x101082b5u, 0x101082b0u); LOADALL;
  /* 101082b5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101082b6 jmp 0x10108493 */ goto L_10108493;
L_101082bb:;
  /* 101082bb sub eax, 0x69 */ { u32 a_ = eax, b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082be je 0x10108164 */ if (ZF_) goto L_10108164;
  /* 101082c4 sub eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082c7 je 0x10108382 */ if (ZF_) goto L_10108382;
  /* 101082cd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082ce je 0x10108368 */ if (ZF_) goto L_10108368;
  /* 101082d4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082d5 je 0x10108335 */ if (ZF_) goto L_10108335;
  /* 101082d7 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082da je 0x101080a1 */ if (ZF_) goto L_101080a1;
  /* 101082e0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e1 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e2 je 0x10108168 */ if (ZF_) goto L_10108168;
  /* 101082e8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082eb jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 101082f1 mov dword ptr [ebp - 0x68], 0x27 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0x27u); }
  /* 101082f8 jmp 0x1010833f */ goto L_1010833f;
L_101082fa:;
  /* 101082fa dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082fb cmp word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101082ff je 0x10108307 */ if (ZF_) goto L_10108307;
  /* 10108301 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108302 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108303:;
  /* 10108303 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108305 jne 0x101082fa */ if (!ZF_) goto L_101082fa;
L_10108307:;
  /* 10108307 sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010830a sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1010830c jmp 0x10108493 */ goto L_10108493;
L_10108311:;
  /* 10108311 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108313 jne 0x1010831d */ if (!ZF_) goto L_1010831d;
  /* 10108315 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 1010831a mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_1010831d:;
  /* 1010831d mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 10108320 jmp 0x10108329 */ goto L_10108329;
L_10108322:;
  /* 10108322 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108323 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108326 je 0x1010832d */ if (ZF_) goto L_1010832d;
  /* 10108328 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108329:;
  /* 10108329 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010832b jne 0x10108322 */ if (!ZF_) goto L_10108322;
L_1010832d:;
  /* 1010832d sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108330 jmp 0x10108493 */ goto L_10108493;
L_10108335:;
  /* 10108335 mov dword ptr [ebp - 0x40], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x8u); }
L_1010833c:;
  /* 1010833c mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
L_1010833f:;
  /* 1010833f test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108343 mov dword ptr [ebp - 0x48], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x10u); }
  /* 1010834a je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108350 mov al, byte ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10108353 add al, 0x51 */ { u32 a_ = (eax & 0xffu), b_ = 0x51u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10108355 mov byte ptr [ebp - 0x50], 0x30 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x30u); }
  /* 10108359 mov byte ptr [ebp - 0x4f], al */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010835c mov dword ptr [ebp - 0x54], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x2u); }
  /* 10108363 jmp 0x1010816f */ goto L_1010816f;
L_10108368:;
  /* 10108368 test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010836c mov dword ptr [ebp - 0x48], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x8u); }
  /* 10108373 je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108379 or byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1010837d jmp 0x1010816f */ goto L_1010816f;
L_10108382:;
  /* 10108382 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108389 test byte ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010838d mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108393 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108396 je 0x101083a1 */ if (ZF_) goto L_101083a1;
  /* 10108398 mov cx, word ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010839c mov word ptr [eax], cx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 1010839f jmp 0x101083a6 */ goto L_101083a6;
L_101083a1:;
  /* 101083a1 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 101083a4 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_101083a6:;
  /* 101083a6 mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 101083ad jmp 0x10108597 */ goto L_10108597;
L_101083b2:;
  /* 101083b2 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101083b9 test bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083bc mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101083c2 je 0x101083d6 */ if (ZF_) goto L_101083d6;
  /* 101083c4 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083c7 je 0x101083d0 */ if (ZF_) goto L_101083d0;
  /* 101083c9 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
L_101083cd:;
  /* 101083cd cdq */ edx = (u32)((s32)eax >> 31);
  /* 101083ce jmp 0x101083e0 */ goto L_101083e0;
L_101083d0:;
  /* 101083d0 movzx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 101083d4 jmp 0x101083cd */ goto L_101083cd;
L_101083d6:;
  /* 101083d6 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083d9 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101083dc jne 0x101083cd */ if (!ZF_) goto L_101083cd;
  /* 101083de xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_101083e0:;
  /* 101083e0 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083e3 je 0x101083fa */ if (ZF_) goto L_101083fa;
  /* 101083e5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083e7 jg 0x101083fa */ if (!(ZF_|LT_)) goto L_101083fa;
  /* 101083e9 jl 0x101083ef */ if (LT_) goto L_101083ef;
  /* 101083eb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083ed jae 0x101083fa */ if (!CF_) goto L_101083fa;
L_101083ef:;
  /* 101083ef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f1 adc edx, 0 */ { u32 a_ = edx, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 101083f4 neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f6 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101083fa:;
  /* 101083fa test dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083fd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101083ff mov edi, edx */ { edi = (u32)(edx); }
  /* 10108401 jne 0x10108405 */ if (!ZF_) goto L_10108405;
  /* 10108403 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_10108405:;
  /* 10108405 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108409 jge 0x10108414 */ if (!LT_) goto L_10108414;
  /* 1010840b mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 10108412 jmp 0x10108425 */ goto L_10108425;
L_10108414:;
  /* 10108414 and dword ptr [ebp - 0x3c], 0xfffffff7 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108418 mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 1010841d cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108420 jle 0x10108425 */ if ((ZF_|LT_)) goto L_10108425;
  /* 10108422 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_10108425:;
  /* 10108425 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108427 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108429 jne 0x1010842f */ if (!ZF_) goto L_1010842f;
  /* 1010842b and dword ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1010842f:;
  /* 1010842f lea esi, [ebp + 0x1c7] */ esi = (u32)((u32)(ebp + 0x1c7u));
L_10108435:;
  /* 10108435 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108438 dec dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010843b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010843d jg 0x10108445 */ if (!(ZF_|LT_)) goto L_10108445;
  /* 1010843f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108441 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108443 je 0x10108469 */ if (ZF_) goto L_10108469;
L_10108445:;
  /* 10108445 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 10108448 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10108449 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010844a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010844b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010844c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010844d call 0x1010ae00 */ esp -= 4; M32(esp) = 0x10108452u; SAVEALL; F_1010ae00(c); ABI_CHECK(0x1010ae00u, 0x1010844du); RETCHK(0x10108452u, 0x1010844du); LOADALL;
  /* 10108452 add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10108455 cmp ecx, 0x39 */ { u32 a_ = ecx, b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108458 mov dword ptr [ebp - 0x74], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(ebx); }
  /* 1010845b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1010845d mov edi, edx */ { edi = (u32)(edx); }
  /* 1010845f jle 0x10108464 */ if ((ZF_|LT_)) goto L_10108464;
  /* 10108461 add ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_10108464:;
  /* 10108464 mov byte ptr [esi], cl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10108466 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108467 jmp 0x10108435 */ goto L_10108435;
L_10108469:;
  /* 10108469 lea eax, [ebp + 0x1c7] */ eax = (u32)((u32)(ebp + 0x1c7u));
  /* 1010846f sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108471 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108472 test byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108476 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108479 mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 1010847c je 0x10108496 */ if (ZF_) goto L_10108496;
  /* 1010847e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10108480 cmp byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108483 jne 0x10108489 */ if (!ZF_) goto L_10108489;
  /* 10108485 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108487 jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108489:;
  /* 10108489 dec dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010848c mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 1010848f mov byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)(0x30u); }
  /* 10108492 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108493:;
  /* 10108493 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
L_10108496:;
  /* 10108496 cmp dword ptr [ebp - 0x64], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010849a jne 0x10108597 */ if (!ZF_) goto L_10108597;
  /* 101084a0 mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 101084a3 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084a6 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084a8 test bh, 1 */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084ab je 0x101084b3 */ if (ZF_) goto L_101084b3;
  /* 101084ad mov byte ptr [ebp - 0x50], 0x2d */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2du); }
  /* 101084b1 jmp 0x101084c7 */ goto L_101084c7;
L_101084b3:;
  /* 101084b3 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084b6 je 0x101084be */ if (ZF_) goto L_101084be;
  /* 101084b8 mov byte ptr [ebp - 0x50], 0x2b */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2bu); }
  /* 101084bc jmp 0x101084c7 */ goto L_101084c7;
L_101084be:;
  /* 101084be test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084c1 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084c3 mov byte ptr [ebp - 0x50], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x20u); }
L_101084c7:;
  /* 101084c7 mov dword ptr [ebp - 0x54], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x1u); }
L_101084ce:;
  /* 101084ce mov esi, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); esi = (u32)(M32(m_)); }
  /* 101084d1 sub esi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d4 sub esi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d7 test bl, 0xc */ { u32 a_ = (ebx & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084da jne 0x101084f0 */ if (!ZF_) goto L_101084f0;
  /* 101084dc push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084e2 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101084e6 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 101084e8 call 0x10107d9e */ esp -= 4; M32(esp) = 0x101084edu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x101084e8u); RETCHK(0x101084edu, 0x101084e8u); LOADALL;
  /* 101084ed add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101084f0:;
  /* 101084f0 push dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084f3 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 101084f9 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084fc lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 101084ff call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108504u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x101084ffu); RETCHK(0x10108504u, 0x101084ffu); LOADALL;
  /* 10108504 test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108507 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108508 je 0x1010851e */ if (ZF_) goto L_1010851e;
  /* 1010850a test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010850d jne 0x1010851e */ if (!ZF_) goto L_1010851e;
  /* 1010850f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10108510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10108511 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 10108513 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108516 call 0x10107d9e */ esp -= 4; M32(esp) = 0x1010851bu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x10108516u); RETCHK(0x1010851bu, 0x10108516u); LOADALL;
  /* 1010851b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010851e:;
  /* 1010851e cmp dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108522 je 0x1010856e */ if (ZF_) goto L_1010856e;
  /* 10108524 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108528 jle 0x1010856e */ if ((ZF_|LT_)) goto L_1010856e;
  /* 1010852a mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 1010852d mov ebx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ebx = (u32)(M32(m_)); }
  /* 10108530 mov dword ptr [ebp - 0x74], eax */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(eax); }
L_10108533:;
  /* 10108533 dec dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108536 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108538 mov ax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010853b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010853c lea eax, [ebp + 0x1c8] */ eax = (u32)((u32)(ebp + 0x1c8u));
  /* 10108542 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108543 call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108548u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x10108543u); RETCHK(0x10108548u, 0x10108543u); LOADALL;
  /* 10108548 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108549 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010854b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010854d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854e jle 0x1010857d */ if ((ZF_|LT_)) goto L_1010857d;
  /* 10108550 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 10108556 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108557 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010855a lea ecx, [ebp + 0x1c8] */ ecx = (u32)((u32)(ebp + 0x1c8u));
  /* 10108560 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108565u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108560u); RETCHK(0x10108565u, 0x10108560u); LOADALL;
  /* 10108565 cmp dword ptr [ebp - 0x74], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108569 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010856a jne 0x10108533 */ if (!ZF_) goto L_10108533;
  /* 1010856c jmp 0x1010857d */ goto L_1010857d;
L_1010856e:;
  /* 1010856e push dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108571 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10108574 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108577 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x1010857cu; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108577u); RETCHK(0x1010857cu, 0x10108577u); LOADALL;
  /* 1010857c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1010857d:;
  /* 1010857d test byte ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108581 je 0x10108597 */ if (ZF_) goto L_10108597;
  /* 10108583 push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108589 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010858c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010858d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1010858f call 0x10107d9e */ esp -= 4; M32(esp) = 0x10108594u; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x1010858fu); RETCHK(0x10108594u, 0x1010858fu); LOADALL;
  /* 10108594 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10108597:;
  /* 10108597 cmp dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010859b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 1010859d push dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101085a0 call 0x101074a1 */ esp -= 4; M32(esp) = 0x101085a5u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101085a0u); RETCHK(0x101085a5u, 0x101085a0u); LOADALL;
  /* 101085a5 and dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101085a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101085aa:;
  /* 101085aa mov edi, dword ptr [ebp + 0x1e0] */ { const u32 m_ = (u32)(ebp + 0x1e0u); edi = (u32)(M32(m_)); }
  /* 101085b0 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101085b2 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101085b4 jne 0x10107e36 */ if (!ZF_) goto L_10107e36;
L_101085ba:;
  /* 101085ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101085bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101085bc mov ecx, dword ptr [ebp + 0x1d0] */ { const u32 m_ = (u32)(ebp + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 101085c2 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 101085c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101085c6 call 0x1010570f */ esp -= 4; M32(esp) = 0x101085cbu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101085c6u); RETCHK(0x101085cbu, 0x101085c6u); LOADALL;
  /* 101085cb add ebp, 0x1d4 */ { u32 a_ = ebp, b_ = 0x1d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101085d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101085d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107ea2(CPU *c) {
  NATIVE_HOOK(0x10107ea2u) REGS; LOADALL;
  goto L_10107ea2;
L_10107e36:;
  /* 10107e36 mov ecx, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ecx = (u32)(M32(m_)); }
  /* 10107e39 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107e3a cmp dword ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e3e mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107e44 jl 0x101085ba */ if (LT_) goto L_101085ba;
  /* 10107e4a cmp bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e4d jl 0x10107e63 */ if (LT_) goto L_10107e63;
  /* 10107e4f cmp bl, 0x78 */ { u32 a_ = (ebx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e52 jg 0x10107e63 */ if (!(ZF_|LT_)) goto L_10107e63;
  /* 10107e54 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107e57 movsx eax, byte ptr [eax + 0x1010d698] */ { const u32 m_ = (u32)(eax + 0x1010d698u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e5e and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e61 jmp 0x10107e65 */ goto L_10107e65;
L_10107e63:;
  /* 10107e63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10107e65:;
  /* 10107e65 movsx eax, byte ptr [ecx + eax*8 + 0x1010d6b8] */ { const u32 m_ = (u32)(ecx + eax * 8u + 0x1010d6b8u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e6d push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10107e6f sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10107e72 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107e73 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e75 mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 10107e78 ja 0x101085aa */ if (!(CF_|ZF_)) goto L_101085aa;
  /* 10107e7e jmp dword ptr [eax*4 + 0x101085d3] */ { const u32 m_ = (u32)(eax * 4u + 0x101085d3u); u32 t_ = M32(m_); switch (t_) { case 0x10107e85u: goto L_10107e85; case 0x10107ea2u: goto L_10107ea2; case 0x10107eeeu: goto L_10107eee; case 0x10107f2fu: goto L_10107f2f; case 0x10107f38u: goto L_10107f38; case 0x10107f76u: goto L_10107f76; case 0x10108015u: goto L_10108015; case 0x10108057u: goto L_10108057; default: SAVEALL; call_ind(c, t_); return; } }
L_10107e85:;
  /* 10107e85 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e87 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107e8b mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 10107e8e mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 10107e91 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107e94 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 10107e97 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10107e9a mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 10107e9d jmp 0x101085aa */ goto L_101085aa;
L_10107ea2:;
  /* 10107ea2 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107ea5 sub eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ea8 je 0x10107ee5 */ if (ZF_) goto L_10107ee5;
  /* 10107eaa sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ead je 0x10107edc */ if (ZF_) goto L_10107edc;
  /* 10107eaf sub eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107eb2 je 0x10107ed3 */ if (ZF_) goto L_10107ed3;
  /* 10107eb4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb6 je 0x10107eca */ if (ZF_) goto L_10107eca;
  /* 10107eb8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ebb jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107ec1 or dword ptr [ebp - 0x3c], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ec5 jmp 0x101085aa */ goto L_101085aa;
L_10107eca:;
  /* 10107eca or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ece jmp 0x101085aa */ goto L_101085aa;
L_10107ed3:;
  /* 10107ed3 or dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ed7 jmp 0x101085aa */ goto L_101085aa;
L_10107edc:;
  /* 10107edc or byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107ee0 jmp 0x101085aa */ goto L_101085aa;
L_10107ee5:;
  /* 10107ee5 or dword ptr [ebp - 0x3c], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ee9 jmp 0x101085aa */ goto L_101085aa;
L_10107eee:;
  /* 10107eee cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ef1 jne 0x10107f1a */ if (!ZF_) goto L_10107f1a;
  /* 10107ef3 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107efa mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f00 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f05 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f08 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f0e or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f12 neg dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_); u32 r_ = (0u - a_) & 0xffffffffu; M32(m_) = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10107f15 jmp 0x101085aa */ goto L_101085aa;
L_10107f1a:;
  /* 10107f1a mov eax, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); eax = (u32)(M32(m_)); }
  /* 10107f1d movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f20 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f23 lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f27 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f2a jmp 0x101085aa */ goto L_101085aa;
L_10107f2f:;
  /* 10107f2f and dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f33 jmp 0x101085aa */ goto L_101085aa;
L_10107f38:;
  /* 10107f38 cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f3b jne 0x10107f61 */ if (!ZF_) goto L_10107f61;
  /* 10107f3d add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f44 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f4a mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f4f mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f52 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f58 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f5c jmp 0x101085aa */ goto L_101085aa;
L_10107f61:;
  /* 10107f61 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10107f64 movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f67 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f6a lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f6e mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f71 jmp 0x101085aa */ goto L_101085aa;
L_10107f76:;
  /* 10107f76 cmp bl, 0x49 */ { u32 a_ = (ebx & 0xffu), b_ = 0x49u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f79 je 0x10107fa9 */ if (ZF_) goto L_10107fa9;
  /* 10107f7b cmp bl, 0x68 */ { u32 a_ = (ebx & 0xffu), b_ = 0x68u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f7e je 0x10107fa0 */ if (ZF_) goto L_10107fa0;
  /* 10107f80 cmp bl, 0x6c */ { u32 a_ = (ebx & 0xffu), b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f83 je 0x10107f97 */ if (ZF_) goto L_10107f97;
  /* 10107f85 cmp bl, 0x77 */ { u32 a_ = (ebx & 0xffu), b_ = 0x77u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f88 jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107f8e or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107f92 jmp 0x101085aa */ goto L_101085aa;
L_10107f97:;
  /* 10107f97 or dword ptr [ebp - 0x3c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f9b jmp 0x101085aa */ goto L_101085aa;
L_10107fa0:;
  /* 10107fa0 or dword ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107fa4 jmp 0x101085aa */ goto L_101085aa;
L_10107fa9:;
  /* 10107fa9 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107fab cmp al, 0x36 */ { u32 a_ = (eax & 0xffu), b_ = 0x36u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fad jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107faf cmp byte ptr [edi + 1], 0x34 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fb3 jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107fb5 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb6 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb7 or byte ptr [ebp - 0x3b], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fbb mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fc1 jmp 0x101085aa */ goto L_101085aa;
L_10107fc6:;
  /* 10107fc6 cmp al, 0x33 */ { u32 a_ = (eax & 0xffu), b_ = 0x33u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fc8 jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fca cmp byte ptr [edi + 1], 0x32 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x32u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fce jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fd0 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd2 and byte ptr [ebp - 0x3b], 0x7f */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fd6 mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fdc jmp 0x101085aa */ goto L_101085aa;
L_10107fe1:;
  /* 10107fe1 cmp al, 0x64 */ { u32 a_ = (eax & 0xffu), b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fe3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107fe9 cmp al, 0x69 */ { u32 a_ = (eax & 0xffu), b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107feb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff1 cmp al, 0x6f */ { u32 a_ = (eax & 0xffu), b_ = 0x6fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ff3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff9 cmp al, 0x75 */ { u32 a_ = (eax & 0xffu), b_ = 0x75u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ffb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108001 cmp al, 0x78 */ { u32 a_ = (eax & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108003 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108009 cmp al, 0x58 */ { u32 a_ = (eax & 0xffu), b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010800b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108011 and dword ptr [ebp - 0x70], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108015:;
  /* 10108015 mov ecx, dword ptr [0x10110a30] */ { const u32 m_ = (u32)(0x10110a30u); ecx = (u32)(M32(m_)); }
  /* 1010801b and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010801f movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10108022 test byte ptr [ecx + eax*2 + 1], 0x80 */ { const u32 m_ = (u32)(ecx + eax * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108027 je 0x10108042 */ if (ZF_) goto L_10108042;
  /* 10108029 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 1010802f lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108032 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 10108034 call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108039u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x10108034u); RETCHK(0x10108039u, 0x10108034u); LOADALL;
  /* 10108039 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010803b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010803c mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
L_10108042:;
  /* 10108042 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 10108048 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010804b mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 1010804d call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108052u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x1010804du); RETCHK(0x10108052u, 0x1010804du); LOADALL;
  /* 10108052 jmp 0x101085aa */ goto L_101085aa;
L_10108057:;
  /* 10108057 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 1010805a cmp eax, 0x67 */ { u32 a_ = eax, b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010805d jg 0x101082bb */ if (!(ZF_|LT_)) goto L_101082bb;
  /* 10108063 cmp eax, 0x65 */ { u32 a_ = eax, b_ = 0x65u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108066 jge 0x101080f2 */ if (!LT_) goto L_101080f2;
  /* 1010806c cmp eax, 0x58 */ { u32 a_ = eax, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010806f jg 0x10108153 */ if (!(ZF_|LT_)) goto L_10108153;
  /* 10108075 je 0x1010833c */ if (ZF_) goto L_1010833c;
  /* 1010807b sub eax, 0x43 */ { u32 a_ = eax, b_ = 0x43u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010807e je 0x10108112 */ if (ZF_) goto L_10108112;
  /* 10108084 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108085 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108086 je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 10108088 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108089 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010808a je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 1010808c sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010808f jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 10108095 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010809b jne 0x101080a1 */ if (!ZF_) goto L_101080a1;
  /* 1010809d or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101080a1:;
  /* 101080a1 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 101080a4 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080a7 jne 0x101080ae */ if (!ZF_) goto L_101080ae;
  /* 101080a9 mov ecx, 0x7fffffff */ { ecx = (u32)(0x7fffffffu); }
L_101080ae:;
  /* 101080ae add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080b5 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 101080bb mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101080c1 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101080c4 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101080c7 je 0x10108311 */ if (ZF_) goto L_10108311;
  /* 101080cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101080cf jne 0x101080d9 */ if (!ZF_) goto L_101080d9;
  /* 101080d1 mov eax, dword ptr [0x10110254] */ { const u32 m_ = (u32)(0x10110254u); eax = (u32)(M32(m_)); }
  /* 101080d6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_101080d9:;
  /* 101080d9 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 101080dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101080e3 jmp 0x10108303 */ goto L_10108303;
L_101080e8:;
  /* 101080e8 mov dword ptr [ebp - 0x6c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x1u); }
  /* 101080ef add bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_101080f2:;
  /* 101080f2 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080f6 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080fa lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101080fd mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 10108100 jge 0x101081ff */ if (!LT_) goto L_101081ff;
  /* 10108106 mov dword ptr [ebp - 0x40], 6 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x6u); }
  /* 1010810d jmp 0x10108246 */ goto L_10108246;
L_10108112:;
  /* 10108112 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10108118 jne 0x1010811e */ if (!ZF_) goto L_1010811e;
  /* 1010811a or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_1010811e:;
  /* 1010811e add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108125 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010812b mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108131 je 0x10108198 */ if (ZF_) goto L_10108198;
  /* 10108133 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 10108137 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108138 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 1010813b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010813c call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108141u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x1010813cu); RETCHK(0x10108141u, 0x1010813cu); LOADALL;
  /* 10108141 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108143 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108144 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108145 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108148 jge 0x101081a5 */ if (!LT_) goto L_101081a5;
  /* 1010814a mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 10108151 jmp 0x101081a5 */ goto L_101081a5;
L_10108153:;
  /* 10108153 sub eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108156 je 0x101081b0 */ if (ZF_) goto L_101081b0;
  /* 10108158 sub eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010815b je 0x1010811e */ if (ZF_) goto L_1010811e;
  /* 1010815d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010815e jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108164:;
  /* 10108164 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108168:;
  /* 10108168 mov dword ptr [ebp - 0x48], 0xa */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0xau); }
L_1010816f:;
  /* 1010816f mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 10108172 mov esi, 0x8000 */ { esi = (u32)(0x8000u); }
  /* 10108177 test esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108179 je 0x101083b2 */ if (ZF_) goto L_101083b2;
  /* 1010817f mov ecx, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 10108185 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10108187 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010818a add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010818d mov dword ptr [ebp + 0x1e4], ecx */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(ecx); }
  /* 10108193 jmp 0x101083e0 */ goto L_101083e0;
L_10108198:;
  /* 10108198 mov al, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010819b mov byte ptr [ebp - 0x38], al */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010819e mov dword ptr [ebp - 0x48], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x1u); }
L_101081a5:;
  /* 101081a5 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101081a8 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081ab jmp 0x10108496 */ goto L_10108496;
L_101081b0:;
  /* 101081b0 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081b7 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101081bd mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101081c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c2 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081c4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101081c7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c9 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081cb test byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101081cf movsx eax, word ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 101081d2 mov dword ptr [ebp - 0x44], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ecx); }
  /* 101081d5 je 0x101081e8 */ if (ZF_) goto L_101081e8;
  /* 101081d7 cdq */ edx = (u32)((s32)eax >> 31);
  /* 101081d8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101081da sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101081dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101081e3 jmp 0x10108493 */ goto L_10108493;
L_101081e8:;
  /* 101081e8 and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081ec jmp 0x10108493 */ goto L_10108493;
L_101081f1:;
  /* 101081f1 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 101081f6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101081fa jmp 0x101082b0 */ goto L_101082b0;
L_101081ff:;
  /* 101081ff jne 0x1010820f */ if (!ZF_) goto L_1010820f;
  /* 10108201 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108204 jne 0x10108246 */ if (!ZF_) goto L_10108246;
  /* 10108206 mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 1010820d jmp 0x10108246 */ goto L_10108246;
L_1010820f:;
  /* 1010820f mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 10108214 cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108217 jle 0x1010821c */ if ((ZF_|LT_)) goto L_1010821c;
  /* 10108219 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_1010821c:;
  /* 1010821c mov edi, 0xa3 */ { edi = (u32)(0xa3u); }
  /* 10108221 cmp dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108224 jle 0x10108246 */ if ((ZF_|LT_)) goto L_10108246;
  /* 10108226 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108229 add eax, 0x15d */ { u32 a_ = eax, b_ = 0x15du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010822e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010822f call 0x10106108 */ esp -= 4; M32(esp) = 0x10108234u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x1010822fu); RETCHK(0x10108234u, 0x1010822fu); LOADALL;
  /* 10108234 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108236 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108237 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 1010823a je 0x10108243 */ if (ZF_) goto L_10108243;
  /* 1010823c mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 1010823f mov esi, eax */ { esi = (u32)(eax); }
  /* 10108241 jmp 0x10108246 */ goto L_10108246;
L_10108243:;
  /* 10108243 mov dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edi); }
L_10108246:;
  /* 10108246 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 1010824c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1010824e push dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108251 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108254 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108257 mov dword ptr [ebp + 0x1e4], eax */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 1010825d mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108260 mov dword ptr [ebp - 0x7c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(eax); }
  /* 10108263 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10108266 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108267 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1010826a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010826b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010826c mov dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ecx); }
  /* 1010826f call dword ptr [0x10110a18] */ { const u32 m_ = (u32)(0x10110a18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108275u; SAVEALL; call_ind(c, t_); RETCHK(0x10108275u, 0x1010826fu); LOADALL; }
  /* 10108275 mov edi, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edi = (u32)(M32(m_)); }
  /* 10108278 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010827b and edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10108281 je 0x10108291 */ if (ZF_) goto L_10108291;
  /* 10108283 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108287 jne 0x10108291 */ if (!ZF_) goto L_10108291;
  /* 10108289 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010828a call dword ptr [0x10110a24] */ { const u32 m_ = (u32)(0x10110a24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108290u; SAVEALL; call_ind(c, t_); RETCHK(0x10108290u, 0x1010828au); LOADALL; }
  /* 10108290 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10108291:;
  /* 10108291 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108294 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 10108296 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108298 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 1010829a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010829b call dword ptr [0x10110a1c] */ { const u32 m_ = (u32)(0x10110a1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101082a1u; SAVEALL; call_ind(c, t_); RETCHK(0x101082a1u, 0x1010829bu); LOADALL; }
  /* 101082a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101082a2:;
  /* 101082a2 cmp byte ptr [esi], 0x2d */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101082a5 jne 0x101082af */ if (!ZF_) goto L_101082af;
  /* 101082a7 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 101082ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101082ac mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
L_101082af:;
  /* 101082af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_101082b0:;
  /* 101082b0 call 0x10106140 */ esp -= 4; M32(esp) = 0x101082b5u; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101082b0u); RETCHK(0x101082b5u, 0x101082b0u); LOADALL;
  /* 101082b5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101082b6 jmp 0x10108493 */ goto L_10108493;
L_101082bb:;
  /* 101082bb sub eax, 0x69 */ { u32 a_ = eax, b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082be je 0x10108164 */ if (ZF_) goto L_10108164;
  /* 101082c4 sub eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082c7 je 0x10108382 */ if (ZF_) goto L_10108382;
  /* 101082cd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082ce je 0x10108368 */ if (ZF_) goto L_10108368;
  /* 101082d4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082d5 je 0x10108335 */ if (ZF_) goto L_10108335;
  /* 101082d7 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082da je 0x101080a1 */ if (ZF_) goto L_101080a1;
  /* 101082e0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e1 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e2 je 0x10108168 */ if (ZF_) goto L_10108168;
  /* 101082e8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082eb jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 101082f1 mov dword ptr [ebp - 0x68], 0x27 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0x27u); }
  /* 101082f8 jmp 0x1010833f */ goto L_1010833f;
L_101082fa:;
  /* 101082fa dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082fb cmp word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101082ff je 0x10108307 */ if (ZF_) goto L_10108307;
  /* 10108301 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108302 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108303:;
  /* 10108303 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108305 jne 0x101082fa */ if (!ZF_) goto L_101082fa;
L_10108307:;
  /* 10108307 sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010830a sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1010830c jmp 0x10108493 */ goto L_10108493;
L_10108311:;
  /* 10108311 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108313 jne 0x1010831d */ if (!ZF_) goto L_1010831d;
  /* 10108315 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 1010831a mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_1010831d:;
  /* 1010831d mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 10108320 jmp 0x10108329 */ goto L_10108329;
L_10108322:;
  /* 10108322 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108323 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108326 je 0x1010832d */ if (ZF_) goto L_1010832d;
  /* 10108328 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108329:;
  /* 10108329 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010832b jne 0x10108322 */ if (!ZF_) goto L_10108322;
L_1010832d:;
  /* 1010832d sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108330 jmp 0x10108493 */ goto L_10108493;
L_10108335:;
  /* 10108335 mov dword ptr [ebp - 0x40], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x8u); }
L_1010833c:;
  /* 1010833c mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
L_1010833f:;
  /* 1010833f test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108343 mov dword ptr [ebp - 0x48], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x10u); }
  /* 1010834a je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108350 mov al, byte ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10108353 add al, 0x51 */ { u32 a_ = (eax & 0xffu), b_ = 0x51u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10108355 mov byte ptr [ebp - 0x50], 0x30 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x30u); }
  /* 10108359 mov byte ptr [ebp - 0x4f], al */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010835c mov dword ptr [ebp - 0x54], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x2u); }
  /* 10108363 jmp 0x1010816f */ goto L_1010816f;
L_10108368:;
  /* 10108368 test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010836c mov dword ptr [ebp - 0x48], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x8u); }
  /* 10108373 je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108379 or byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1010837d jmp 0x1010816f */ goto L_1010816f;
L_10108382:;
  /* 10108382 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108389 test byte ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010838d mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108393 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108396 je 0x101083a1 */ if (ZF_) goto L_101083a1;
  /* 10108398 mov cx, word ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010839c mov word ptr [eax], cx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 1010839f jmp 0x101083a6 */ goto L_101083a6;
L_101083a1:;
  /* 101083a1 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 101083a4 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_101083a6:;
  /* 101083a6 mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 101083ad jmp 0x10108597 */ goto L_10108597;
L_101083b2:;
  /* 101083b2 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101083b9 test bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083bc mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101083c2 je 0x101083d6 */ if (ZF_) goto L_101083d6;
  /* 101083c4 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083c7 je 0x101083d0 */ if (ZF_) goto L_101083d0;
  /* 101083c9 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
L_101083cd:;
  /* 101083cd cdq */ edx = (u32)((s32)eax >> 31);
  /* 101083ce jmp 0x101083e0 */ goto L_101083e0;
L_101083d0:;
  /* 101083d0 movzx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 101083d4 jmp 0x101083cd */ goto L_101083cd;
L_101083d6:;
  /* 101083d6 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083d9 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101083dc jne 0x101083cd */ if (!ZF_) goto L_101083cd;
  /* 101083de xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_101083e0:;
  /* 101083e0 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083e3 je 0x101083fa */ if (ZF_) goto L_101083fa;
  /* 101083e5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083e7 jg 0x101083fa */ if (!(ZF_|LT_)) goto L_101083fa;
  /* 101083e9 jl 0x101083ef */ if (LT_) goto L_101083ef;
  /* 101083eb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083ed jae 0x101083fa */ if (!CF_) goto L_101083fa;
L_101083ef:;
  /* 101083ef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f1 adc edx, 0 */ { u32 a_ = edx, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 101083f4 neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f6 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101083fa:;
  /* 101083fa test dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083fd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101083ff mov edi, edx */ { edi = (u32)(edx); }
  /* 10108401 jne 0x10108405 */ if (!ZF_) goto L_10108405;
  /* 10108403 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_10108405:;
  /* 10108405 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108409 jge 0x10108414 */ if (!LT_) goto L_10108414;
  /* 1010840b mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 10108412 jmp 0x10108425 */ goto L_10108425;
L_10108414:;
  /* 10108414 and dword ptr [ebp - 0x3c], 0xfffffff7 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108418 mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 1010841d cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108420 jle 0x10108425 */ if ((ZF_|LT_)) goto L_10108425;
  /* 10108422 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_10108425:;
  /* 10108425 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108427 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108429 jne 0x1010842f */ if (!ZF_) goto L_1010842f;
  /* 1010842b and dword ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1010842f:;
  /* 1010842f lea esi, [ebp + 0x1c7] */ esi = (u32)((u32)(ebp + 0x1c7u));
L_10108435:;
  /* 10108435 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108438 dec dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010843b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010843d jg 0x10108445 */ if (!(ZF_|LT_)) goto L_10108445;
  /* 1010843f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108441 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108443 je 0x10108469 */ if (ZF_) goto L_10108469;
L_10108445:;
  /* 10108445 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 10108448 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10108449 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010844a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010844b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010844c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010844d call 0x1010ae00 */ esp -= 4; M32(esp) = 0x10108452u; SAVEALL; F_1010ae00(c); ABI_CHECK(0x1010ae00u, 0x1010844du); RETCHK(0x10108452u, 0x1010844du); LOADALL;
  /* 10108452 add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10108455 cmp ecx, 0x39 */ { u32 a_ = ecx, b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108458 mov dword ptr [ebp - 0x74], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(ebx); }
  /* 1010845b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1010845d mov edi, edx */ { edi = (u32)(edx); }
  /* 1010845f jle 0x10108464 */ if ((ZF_|LT_)) goto L_10108464;
  /* 10108461 add ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_10108464:;
  /* 10108464 mov byte ptr [esi], cl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10108466 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108467 jmp 0x10108435 */ goto L_10108435;
L_10108469:;
  /* 10108469 lea eax, [ebp + 0x1c7] */ eax = (u32)((u32)(ebp + 0x1c7u));
  /* 1010846f sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108471 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108472 test byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108476 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108479 mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 1010847c je 0x10108496 */ if (ZF_) goto L_10108496;
  /* 1010847e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10108480 cmp byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108483 jne 0x10108489 */ if (!ZF_) goto L_10108489;
  /* 10108485 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108487 jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108489:;
  /* 10108489 dec dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010848c mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 1010848f mov byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)(0x30u); }
  /* 10108492 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108493:;
  /* 10108493 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
L_10108496:;
  /* 10108496 cmp dword ptr [ebp - 0x64], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010849a jne 0x10108597 */ if (!ZF_) goto L_10108597;
  /* 101084a0 mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 101084a3 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084a6 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084a8 test bh, 1 */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084ab je 0x101084b3 */ if (ZF_) goto L_101084b3;
  /* 101084ad mov byte ptr [ebp - 0x50], 0x2d */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2du); }
  /* 101084b1 jmp 0x101084c7 */ goto L_101084c7;
L_101084b3:;
  /* 101084b3 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084b6 je 0x101084be */ if (ZF_) goto L_101084be;
  /* 101084b8 mov byte ptr [ebp - 0x50], 0x2b */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2bu); }
  /* 101084bc jmp 0x101084c7 */ goto L_101084c7;
L_101084be:;
  /* 101084be test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084c1 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084c3 mov byte ptr [ebp - 0x50], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x20u); }
L_101084c7:;
  /* 101084c7 mov dword ptr [ebp - 0x54], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x1u); }
L_101084ce:;
  /* 101084ce mov esi, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); esi = (u32)(M32(m_)); }
  /* 101084d1 sub esi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d4 sub esi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d7 test bl, 0xc */ { u32 a_ = (ebx & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084da jne 0x101084f0 */ if (!ZF_) goto L_101084f0;
  /* 101084dc push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084e2 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101084e6 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 101084e8 call 0x10107d9e */ esp -= 4; M32(esp) = 0x101084edu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x101084e8u); RETCHK(0x101084edu, 0x101084e8u); LOADALL;
  /* 101084ed add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101084f0:;
  /* 101084f0 push dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084f3 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 101084f9 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084fc lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 101084ff call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108504u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x101084ffu); RETCHK(0x10108504u, 0x101084ffu); LOADALL;
  /* 10108504 test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108507 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108508 je 0x1010851e */ if (ZF_) goto L_1010851e;
  /* 1010850a test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010850d jne 0x1010851e */ if (!ZF_) goto L_1010851e;
  /* 1010850f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10108510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10108511 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 10108513 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108516 call 0x10107d9e */ esp -= 4; M32(esp) = 0x1010851bu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x10108516u); RETCHK(0x1010851bu, 0x10108516u); LOADALL;
  /* 1010851b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010851e:;
  /* 1010851e cmp dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108522 je 0x1010856e */ if (ZF_) goto L_1010856e;
  /* 10108524 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108528 jle 0x1010856e */ if ((ZF_|LT_)) goto L_1010856e;
  /* 1010852a mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 1010852d mov ebx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ebx = (u32)(M32(m_)); }
  /* 10108530 mov dword ptr [ebp - 0x74], eax */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(eax); }
L_10108533:;
  /* 10108533 dec dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108536 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108538 mov ax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010853b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010853c lea eax, [ebp + 0x1c8] */ eax = (u32)((u32)(ebp + 0x1c8u));
  /* 10108542 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108543 call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108548u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x10108543u); RETCHK(0x10108548u, 0x10108543u); LOADALL;
  /* 10108548 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108549 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010854b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010854d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854e jle 0x1010857d */ if ((ZF_|LT_)) goto L_1010857d;
  /* 10108550 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 10108556 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108557 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010855a lea ecx, [ebp + 0x1c8] */ ecx = (u32)((u32)(ebp + 0x1c8u));
  /* 10108560 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108565u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108560u); RETCHK(0x10108565u, 0x10108560u); LOADALL;
  /* 10108565 cmp dword ptr [ebp - 0x74], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108569 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010856a jne 0x10108533 */ if (!ZF_) goto L_10108533;
  /* 1010856c jmp 0x1010857d */ goto L_1010857d;
L_1010856e:;
  /* 1010856e push dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108571 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10108574 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108577 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x1010857cu; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108577u); RETCHK(0x1010857cu, 0x10108577u); LOADALL;
  /* 1010857c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1010857d:;
  /* 1010857d test byte ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108581 je 0x10108597 */ if (ZF_) goto L_10108597;
  /* 10108583 push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108589 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010858c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010858d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1010858f call 0x10107d9e */ esp -= 4; M32(esp) = 0x10108594u; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x1010858fu); RETCHK(0x10108594u, 0x1010858fu); LOADALL;
  /* 10108594 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10108597:;
  /* 10108597 cmp dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010859b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 1010859d push dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101085a0 call 0x101074a1 */ esp -= 4; M32(esp) = 0x101085a5u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101085a0u); RETCHK(0x101085a5u, 0x101085a0u); LOADALL;
  /* 101085a5 and dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101085a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101085aa:;
  /* 101085aa mov edi, dword ptr [ebp + 0x1e0] */ { const u32 m_ = (u32)(ebp + 0x1e0u); edi = (u32)(M32(m_)); }
  /* 101085b0 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101085b2 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101085b4 jne 0x10107e36 */ if (!ZF_) goto L_10107e36;
L_101085ba:;
  /* 101085ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101085bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101085bc mov ecx, dword ptr [ebp + 0x1d0] */ { const u32 m_ = (u32)(ebp + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 101085c2 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 101085c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101085c6 call 0x1010570f */ esp -= 4; M32(esp) = 0x101085cbu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101085c6u); RETCHK(0x101085cbu, 0x101085c6u); LOADALL;
  /* 101085cb add ebp, 0x1d4 */ { u32 a_ = ebp, b_ = 0x1d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101085d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101085d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107eee(CPU *c) {
  NATIVE_HOOK(0x10107eeeu) REGS; LOADALL;
  goto L_10107eee;
L_10107e36:;
  /* 10107e36 mov ecx, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ecx = (u32)(M32(m_)); }
  /* 10107e39 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107e3a cmp dword ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e3e mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107e44 jl 0x101085ba */ if (LT_) goto L_101085ba;
  /* 10107e4a cmp bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e4d jl 0x10107e63 */ if (LT_) goto L_10107e63;
  /* 10107e4f cmp bl, 0x78 */ { u32 a_ = (ebx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e52 jg 0x10107e63 */ if (!(ZF_|LT_)) goto L_10107e63;
  /* 10107e54 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107e57 movsx eax, byte ptr [eax + 0x1010d698] */ { const u32 m_ = (u32)(eax + 0x1010d698u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e5e and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e61 jmp 0x10107e65 */ goto L_10107e65;
L_10107e63:;
  /* 10107e63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10107e65:;
  /* 10107e65 movsx eax, byte ptr [ecx + eax*8 + 0x1010d6b8] */ { const u32 m_ = (u32)(ecx + eax * 8u + 0x1010d6b8u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e6d push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10107e6f sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10107e72 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107e73 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e75 mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 10107e78 ja 0x101085aa */ if (!(CF_|ZF_)) goto L_101085aa;
  /* 10107e7e jmp dword ptr [eax*4 + 0x101085d3] */ { const u32 m_ = (u32)(eax * 4u + 0x101085d3u); u32 t_ = M32(m_); switch (t_) { case 0x10107e85u: goto L_10107e85; case 0x10107ea2u: goto L_10107ea2; case 0x10107eeeu: goto L_10107eee; case 0x10107f2fu: goto L_10107f2f; case 0x10107f38u: goto L_10107f38; case 0x10107f76u: goto L_10107f76; case 0x10108015u: goto L_10108015; case 0x10108057u: goto L_10108057; default: SAVEALL; call_ind(c, t_); return; } }
L_10107e85:;
  /* 10107e85 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e87 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107e8b mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 10107e8e mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 10107e91 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107e94 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 10107e97 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10107e9a mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 10107e9d jmp 0x101085aa */ goto L_101085aa;
L_10107ea2:;
  /* 10107ea2 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107ea5 sub eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ea8 je 0x10107ee5 */ if (ZF_) goto L_10107ee5;
  /* 10107eaa sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ead je 0x10107edc */ if (ZF_) goto L_10107edc;
  /* 10107eaf sub eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107eb2 je 0x10107ed3 */ if (ZF_) goto L_10107ed3;
  /* 10107eb4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb6 je 0x10107eca */ if (ZF_) goto L_10107eca;
  /* 10107eb8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ebb jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107ec1 or dword ptr [ebp - 0x3c], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ec5 jmp 0x101085aa */ goto L_101085aa;
L_10107eca:;
  /* 10107eca or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ece jmp 0x101085aa */ goto L_101085aa;
L_10107ed3:;
  /* 10107ed3 or dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ed7 jmp 0x101085aa */ goto L_101085aa;
L_10107edc:;
  /* 10107edc or byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107ee0 jmp 0x101085aa */ goto L_101085aa;
L_10107ee5:;
  /* 10107ee5 or dword ptr [ebp - 0x3c], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ee9 jmp 0x101085aa */ goto L_101085aa;
L_10107eee:;
  /* 10107eee cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ef1 jne 0x10107f1a */ if (!ZF_) goto L_10107f1a;
  /* 10107ef3 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107efa mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f00 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f05 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f08 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f0e or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f12 neg dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_); u32 r_ = (0u - a_) & 0xffffffffu; M32(m_) = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10107f15 jmp 0x101085aa */ goto L_101085aa;
L_10107f1a:;
  /* 10107f1a mov eax, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); eax = (u32)(M32(m_)); }
  /* 10107f1d movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f20 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f23 lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f27 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f2a jmp 0x101085aa */ goto L_101085aa;
L_10107f2f:;
  /* 10107f2f and dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f33 jmp 0x101085aa */ goto L_101085aa;
L_10107f38:;
  /* 10107f38 cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f3b jne 0x10107f61 */ if (!ZF_) goto L_10107f61;
  /* 10107f3d add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f44 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f4a mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f4f mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f52 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f58 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f5c jmp 0x101085aa */ goto L_101085aa;
L_10107f61:;
  /* 10107f61 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10107f64 movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f67 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f6a lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f6e mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f71 jmp 0x101085aa */ goto L_101085aa;
L_10107f76:;
  /* 10107f76 cmp bl, 0x49 */ { u32 a_ = (ebx & 0xffu), b_ = 0x49u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f79 je 0x10107fa9 */ if (ZF_) goto L_10107fa9;
  /* 10107f7b cmp bl, 0x68 */ { u32 a_ = (ebx & 0xffu), b_ = 0x68u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f7e je 0x10107fa0 */ if (ZF_) goto L_10107fa0;
  /* 10107f80 cmp bl, 0x6c */ { u32 a_ = (ebx & 0xffu), b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f83 je 0x10107f97 */ if (ZF_) goto L_10107f97;
  /* 10107f85 cmp bl, 0x77 */ { u32 a_ = (ebx & 0xffu), b_ = 0x77u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f88 jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107f8e or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107f92 jmp 0x101085aa */ goto L_101085aa;
L_10107f97:;
  /* 10107f97 or dword ptr [ebp - 0x3c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f9b jmp 0x101085aa */ goto L_101085aa;
L_10107fa0:;
  /* 10107fa0 or dword ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107fa4 jmp 0x101085aa */ goto L_101085aa;
L_10107fa9:;
  /* 10107fa9 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107fab cmp al, 0x36 */ { u32 a_ = (eax & 0xffu), b_ = 0x36u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fad jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107faf cmp byte ptr [edi + 1], 0x34 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fb3 jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107fb5 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb6 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb7 or byte ptr [ebp - 0x3b], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fbb mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fc1 jmp 0x101085aa */ goto L_101085aa;
L_10107fc6:;
  /* 10107fc6 cmp al, 0x33 */ { u32 a_ = (eax & 0xffu), b_ = 0x33u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fc8 jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fca cmp byte ptr [edi + 1], 0x32 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x32u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fce jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fd0 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd2 and byte ptr [ebp - 0x3b], 0x7f */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fd6 mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fdc jmp 0x101085aa */ goto L_101085aa;
L_10107fe1:;
  /* 10107fe1 cmp al, 0x64 */ { u32 a_ = (eax & 0xffu), b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fe3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107fe9 cmp al, 0x69 */ { u32 a_ = (eax & 0xffu), b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107feb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff1 cmp al, 0x6f */ { u32 a_ = (eax & 0xffu), b_ = 0x6fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ff3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff9 cmp al, 0x75 */ { u32 a_ = (eax & 0xffu), b_ = 0x75u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ffb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108001 cmp al, 0x78 */ { u32 a_ = (eax & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108003 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108009 cmp al, 0x58 */ { u32 a_ = (eax & 0xffu), b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010800b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108011 and dword ptr [ebp - 0x70], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108015:;
  /* 10108015 mov ecx, dword ptr [0x10110a30] */ { const u32 m_ = (u32)(0x10110a30u); ecx = (u32)(M32(m_)); }
  /* 1010801b and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010801f movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10108022 test byte ptr [ecx + eax*2 + 1], 0x80 */ { const u32 m_ = (u32)(ecx + eax * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108027 je 0x10108042 */ if (ZF_) goto L_10108042;
  /* 10108029 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 1010802f lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108032 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 10108034 call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108039u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x10108034u); RETCHK(0x10108039u, 0x10108034u); LOADALL;
  /* 10108039 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010803b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010803c mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
L_10108042:;
  /* 10108042 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 10108048 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010804b mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 1010804d call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108052u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x1010804du); RETCHK(0x10108052u, 0x1010804du); LOADALL;
  /* 10108052 jmp 0x101085aa */ goto L_101085aa;
L_10108057:;
  /* 10108057 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 1010805a cmp eax, 0x67 */ { u32 a_ = eax, b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010805d jg 0x101082bb */ if (!(ZF_|LT_)) goto L_101082bb;
  /* 10108063 cmp eax, 0x65 */ { u32 a_ = eax, b_ = 0x65u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108066 jge 0x101080f2 */ if (!LT_) goto L_101080f2;
  /* 1010806c cmp eax, 0x58 */ { u32 a_ = eax, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010806f jg 0x10108153 */ if (!(ZF_|LT_)) goto L_10108153;
  /* 10108075 je 0x1010833c */ if (ZF_) goto L_1010833c;
  /* 1010807b sub eax, 0x43 */ { u32 a_ = eax, b_ = 0x43u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010807e je 0x10108112 */ if (ZF_) goto L_10108112;
  /* 10108084 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108085 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108086 je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 10108088 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108089 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010808a je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 1010808c sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010808f jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 10108095 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010809b jne 0x101080a1 */ if (!ZF_) goto L_101080a1;
  /* 1010809d or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101080a1:;
  /* 101080a1 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 101080a4 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080a7 jne 0x101080ae */ if (!ZF_) goto L_101080ae;
  /* 101080a9 mov ecx, 0x7fffffff */ { ecx = (u32)(0x7fffffffu); }
L_101080ae:;
  /* 101080ae add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080b5 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 101080bb mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101080c1 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101080c4 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101080c7 je 0x10108311 */ if (ZF_) goto L_10108311;
  /* 101080cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101080cf jne 0x101080d9 */ if (!ZF_) goto L_101080d9;
  /* 101080d1 mov eax, dword ptr [0x10110254] */ { const u32 m_ = (u32)(0x10110254u); eax = (u32)(M32(m_)); }
  /* 101080d6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_101080d9:;
  /* 101080d9 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 101080dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101080e3 jmp 0x10108303 */ goto L_10108303;
L_101080e8:;
  /* 101080e8 mov dword ptr [ebp - 0x6c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x1u); }
  /* 101080ef add bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_101080f2:;
  /* 101080f2 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080f6 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080fa lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101080fd mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 10108100 jge 0x101081ff */ if (!LT_) goto L_101081ff;
  /* 10108106 mov dword ptr [ebp - 0x40], 6 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x6u); }
  /* 1010810d jmp 0x10108246 */ goto L_10108246;
L_10108112:;
  /* 10108112 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10108118 jne 0x1010811e */ if (!ZF_) goto L_1010811e;
  /* 1010811a or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_1010811e:;
  /* 1010811e add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108125 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010812b mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108131 je 0x10108198 */ if (ZF_) goto L_10108198;
  /* 10108133 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 10108137 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108138 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 1010813b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010813c call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108141u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x1010813cu); RETCHK(0x10108141u, 0x1010813cu); LOADALL;
  /* 10108141 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108143 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108144 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108145 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108148 jge 0x101081a5 */ if (!LT_) goto L_101081a5;
  /* 1010814a mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 10108151 jmp 0x101081a5 */ goto L_101081a5;
L_10108153:;
  /* 10108153 sub eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108156 je 0x101081b0 */ if (ZF_) goto L_101081b0;
  /* 10108158 sub eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010815b je 0x1010811e */ if (ZF_) goto L_1010811e;
  /* 1010815d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010815e jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108164:;
  /* 10108164 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108168:;
  /* 10108168 mov dword ptr [ebp - 0x48], 0xa */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0xau); }
L_1010816f:;
  /* 1010816f mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 10108172 mov esi, 0x8000 */ { esi = (u32)(0x8000u); }
  /* 10108177 test esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108179 je 0x101083b2 */ if (ZF_) goto L_101083b2;
  /* 1010817f mov ecx, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 10108185 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10108187 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010818a add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010818d mov dword ptr [ebp + 0x1e4], ecx */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(ecx); }
  /* 10108193 jmp 0x101083e0 */ goto L_101083e0;
L_10108198:;
  /* 10108198 mov al, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010819b mov byte ptr [ebp - 0x38], al */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010819e mov dword ptr [ebp - 0x48], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x1u); }
L_101081a5:;
  /* 101081a5 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101081a8 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081ab jmp 0x10108496 */ goto L_10108496;
L_101081b0:;
  /* 101081b0 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081b7 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101081bd mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101081c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c2 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081c4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101081c7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c9 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081cb test byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101081cf movsx eax, word ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 101081d2 mov dword ptr [ebp - 0x44], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ecx); }
  /* 101081d5 je 0x101081e8 */ if (ZF_) goto L_101081e8;
  /* 101081d7 cdq */ edx = (u32)((s32)eax >> 31);
  /* 101081d8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101081da sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101081dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101081e3 jmp 0x10108493 */ goto L_10108493;
L_101081e8:;
  /* 101081e8 and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081ec jmp 0x10108493 */ goto L_10108493;
L_101081f1:;
  /* 101081f1 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 101081f6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101081fa jmp 0x101082b0 */ goto L_101082b0;
L_101081ff:;
  /* 101081ff jne 0x1010820f */ if (!ZF_) goto L_1010820f;
  /* 10108201 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108204 jne 0x10108246 */ if (!ZF_) goto L_10108246;
  /* 10108206 mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 1010820d jmp 0x10108246 */ goto L_10108246;
L_1010820f:;
  /* 1010820f mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 10108214 cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108217 jle 0x1010821c */ if ((ZF_|LT_)) goto L_1010821c;
  /* 10108219 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_1010821c:;
  /* 1010821c mov edi, 0xa3 */ { edi = (u32)(0xa3u); }
  /* 10108221 cmp dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108224 jle 0x10108246 */ if ((ZF_|LT_)) goto L_10108246;
  /* 10108226 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108229 add eax, 0x15d */ { u32 a_ = eax, b_ = 0x15du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010822e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010822f call 0x10106108 */ esp -= 4; M32(esp) = 0x10108234u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x1010822fu); RETCHK(0x10108234u, 0x1010822fu); LOADALL;
  /* 10108234 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108236 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108237 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 1010823a je 0x10108243 */ if (ZF_) goto L_10108243;
  /* 1010823c mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 1010823f mov esi, eax */ { esi = (u32)(eax); }
  /* 10108241 jmp 0x10108246 */ goto L_10108246;
L_10108243:;
  /* 10108243 mov dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edi); }
L_10108246:;
  /* 10108246 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 1010824c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1010824e push dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108251 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108254 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108257 mov dword ptr [ebp + 0x1e4], eax */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 1010825d mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108260 mov dword ptr [ebp - 0x7c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(eax); }
  /* 10108263 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10108266 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108267 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1010826a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010826b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010826c mov dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ecx); }
  /* 1010826f call dword ptr [0x10110a18] */ { const u32 m_ = (u32)(0x10110a18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108275u; SAVEALL; call_ind(c, t_); RETCHK(0x10108275u, 0x1010826fu); LOADALL; }
  /* 10108275 mov edi, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edi = (u32)(M32(m_)); }
  /* 10108278 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010827b and edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10108281 je 0x10108291 */ if (ZF_) goto L_10108291;
  /* 10108283 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108287 jne 0x10108291 */ if (!ZF_) goto L_10108291;
  /* 10108289 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010828a call dword ptr [0x10110a24] */ { const u32 m_ = (u32)(0x10110a24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108290u; SAVEALL; call_ind(c, t_); RETCHK(0x10108290u, 0x1010828au); LOADALL; }
  /* 10108290 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10108291:;
  /* 10108291 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108294 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 10108296 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108298 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 1010829a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010829b call dword ptr [0x10110a1c] */ { const u32 m_ = (u32)(0x10110a1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101082a1u; SAVEALL; call_ind(c, t_); RETCHK(0x101082a1u, 0x1010829bu); LOADALL; }
  /* 101082a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101082a2:;
  /* 101082a2 cmp byte ptr [esi], 0x2d */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101082a5 jne 0x101082af */ if (!ZF_) goto L_101082af;
  /* 101082a7 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 101082ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101082ac mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
L_101082af:;
  /* 101082af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_101082b0:;
  /* 101082b0 call 0x10106140 */ esp -= 4; M32(esp) = 0x101082b5u; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101082b0u); RETCHK(0x101082b5u, 0x101082b0u); LOADALL;
  /* 101082b5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101082b6 jmp 0x10108493 */ goto L_10108493;
L_101082bb:;
  /* 101082bb sub eax, 0x69 */ { u32 a_ = eax, b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082be je 0x10108164 */ if (ZF_) goto L_10108164;
  /* 101082c4 sub eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082c7 je 0x10108382 */ if (ZF_) goto L_10108382;
  /* 101082cd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082ce je 0x10108368 */ if (ZF_) goto L_10108368;
  /* 101082d4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082d5 je 0x10108335 */ if (ZF_) goto L_10108335;
  /* 101082d7 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082da je 0x101080a1 */ if (ZF_) goto L_101080a1;
  /* 101082e0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e1 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e2 je 0x10108168 */ if (ZF_) goto L_10108168;
  /* 101082e8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082eb jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 101082f1 mov dword ptr [ebp - 0x68], 0x27 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0x27u); }
  /* 101082f8 jmp 0x1010833f */ goto L_1010833f;
L_101082fa:;
  /* 101082fa dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082fb cmp word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101082ff je 0x10108307 */ if (ZF_) goto L_10108307;
  /* 10108301 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108302 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108303:;
  /* 10108303 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108305 jne 0x101082fa */ if (!ZF_) goto L_101082fa;
L_10108307:;
  /* 10108307 sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010830a sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1010830c jmp 0x10108493 */ goto L_10108493;
L_10108311:;
  /* 10108311 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108313 jne 0x1010831d */ if (!ZF_) goto L_1010831d;
  /* 10108315 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 1010831a mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_1010831d:;
  /* 1010831d mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 10108320 jmp 0x10108329 */ goto L_10108329;
L_10108322:;
  /* 10108322 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108323 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108326 je 0x1010832d */ if (ZF_) goto L_1010832d;
  /* 10108328 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108329:;
  /* 10108329 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010832b jne 0x10108322 */ if (!ZF_) goto L_10108322;
L_1010832d:;
  /* 1010832d sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108330 jmp 0x10108493 */ goto L_10108493;
L_10108335:;
  /* 10108335 mov dword ptr [ebp - 0x40], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x8u); }
L_1010833c:;
  /* 1010833c mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
L_1010833f:;
  /* 1010833f test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108343 mov dword ptr [ebp - 0x48], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x10u); }
  /* 1010834a je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108350 mov al, byte ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10108353 add al, 0x51 */ { u32 a_ = (eax & 0xffu), b_ = 0x51u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10108355 mov byte ptr [ebp - 0x50], 0x30 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x30u); }
  /* 10108359 mov byte ptr [ebp - 0x4f], al */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010835c mov dword ptr [ebp - 0x54], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x2u); }
  /* 10108363 jmp 0x1010816f */ goto L_1010816f;
L_10108368:;
  /* 10108368 test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010836c mov dword ptr [ebp - 0x48], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x8u); }
  /* 10108373 je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108379 or byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1010837d jmp 0x1010816f */ goto L_1010816f;
L_10108382:;
  /* 10108382 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108389 test byte ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010838d mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108393 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108396 je 0x101083a1 */ if (ZF_) goto L_101083a1;
  /* 10108398 mov cx, word ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010839c mov word ptr [eax], cx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 1010839f jmp 0x101083a6 */ goto L_101083a6;
L_101083a1:;
  /* 101083a1 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 101083a4 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_101083a6:;
  /* 101083a6 mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 101083ad jmp 0x10108597 */ goto L_10108597;
L_101083b2:;
  /* 101083b2 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101083b9 test bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083bc mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101083c2 je 0x101083d6 */ if (ZF_) goto L_101083d6;
  /* 101083c4 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083c7 je 0x101083d0 */ if (ZF_) goto L_101083d0;
  /* 101083c9 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
L_101083cd:;
  /* 101083cd cdq */ edx = (u32)((s32)eax >> 31);
  /* 101083ce jmp 0x101083e0 */ goto L_101083e0;
L_101083d0:;
  /* 101083d0 movzx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 101083d4 jmp 0x101083cd */ goto L_101083cd;
L_101083d6:;
  /* 101083d6 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083d9 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101083dc jne 0x101083cd */ if (!ZF_) goto L_101083cd;
  /* 101083de xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_101083e0:;
  /* 101083e0 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083e3 je 0x101083fa */ if (ZF_) goto L_101083fa;
  /* 101083e5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083e7 jg 0x101083fa */ if (!(ZF_|LT_)) goto L_101083fa;
  /* 101083e9 jl 0x101083ef */ if (LT_) goto L_101083ef;
  /* 101083eb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083ed jae 0x101083fa */ if (!CF_) goto L_101083fa;
L_101083ef:;
  /* 101083ef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f1 adc edx, 0 */ { u32 a_ = edx, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 101083f4 neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f6 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101083fa:;
  /* 101083fa test dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083fd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101083ff mov edi, edx */ { edi = (u32)(edx); }
  /* 10108401 jne 0x10108405 */ if (!ZF_) goto L_10108405;
  /* 10108403 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_10108405:;
  /* 10108405 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108409 jge 0x10108414 */ if (!LT_) goto L_10108414;
  /* 1010840b mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 10108412 jmp 0x10108425 */ goto L_10108425;
L_10108414:;
  /* 10108414 and dword ptr [ebp - 0x3c], 0xfffffff7 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108418 mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 1010841d cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108420 jle 0x10108425 */ if ((ZF_|LT_)) goto L_10108425;
  /* 10108422 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_10108425:;
  /* 10108425 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108427 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108429 jne 0x1010842f */ if (!ZF_) goto L_1010842f;
  /* 1010842b and dword ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1010842f:;
  /* 1010842f lea esi, [ebp + 0x1c7] */ esi = (u32)((u32)(ebp + 0x1c7u));
L_10108435:;
  /* 10108435 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108438 dec dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010843b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010843d jg 0x10108445 */ if (!(ZF_|LT_)) goto L_10108445;
  /* 1010843f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108441 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108443 je 0x10108469 */ if (ZF_) goto L_10108469;
L_10108445:;
  /* 10108445 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 10108448 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10108449 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010844a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010844b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010844c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010844d call 0x1010ae00 */ esp -= 4; M32(esp) = 0x10108452u; SAVEALL; F_1010ae00(c); ABI_CHECK(0x1010ae00u, 0x1010844du); RETCHK(0x10108452u, 0x1010844du); LOADALL;
  /* 10108452 add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10108455 cmp ecx, 0x39 */ { u32 a_ = ecx, b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108458 mov dword ptr [ebp - 0x74], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(ebx); }
  /* 1010845b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1010845d mov edi, edx */ { edi = (u32)(edx); }
  /* 1010845f jle 0x10108464 */ if ((ZF_|LT_)) goto L_10108464;
  /* 10108461 add ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_10108464:;
  /* 10108464 mov byte ptr [esi], cl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10108466 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108467 jmp 0x10108435 */ goto L_10108435;
L_10108469:;
  /* 10108469 lea eax, [ebp + 0x1c7] */ eax = (u32)((u32)(ebp + 0x1c7u));
  /* 1010846f sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108471 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108472 test byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108476 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108479 mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 1010847c je 0x10108496 */ if (ZF_) goto L_10108496;
  /* 1010847e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10108480 cmp byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108483 jne 0x10108489 */ if (!ZF_) goto L_10108489;
  /* 10108485 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108487 jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108489:;
  /* 10108489 dec dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010848c mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 1010848f mov byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)(0x30u); }
  /* 10108492 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108493:;
  /* 10108493 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
L_10108496:;
  /* 10108496 cmp dword ptr [ebp - 0x64], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010849a jne 0x10108597 */ if (!ZF_) goto L_10108597;
  /* 101084a0 mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 101084a3 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084a6 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084a8 test bh, 1 */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084ab je 0x101084b3 */ if (ZF_) goto L_101084b3;
  /* 101084ad mov byte ptr [ebp - 0x50], 0x2d */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2du); }
  /* 101084b1 jmp 0x101084c7 */ goto L_101084c7;
L_101084b3:;
  /* 101084b3 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084b6 je 0x101084be */ if (ZF_) goto L_101084be;
  /* 101084b8 mov byte ptr [ebp - 0x50], 0x2b */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2bu); }
  /* 101084bc jmp 0x101084c7 */ goto L_101084c7;
L_101084be:;
  /* 101084be test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084c1 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084c3 mov byte ptr [ebp - 0x50], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x20u); }
L_101084c7:;
  /* 101084c7 mov dword ptr [ebp - 0x54], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x1u); }
L_101084ce:;
  /* 101084ce mov esi, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); esi = (u32)(M32(m_)); }
  /* 101084d1 sub esi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d4 sub esi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d7 test bl, 0xc */ { u32 a_ = (ebx & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084da jne 0x101084f0 */ if (!ZF_) goto L_101084f0;
  /* 101084dc push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084e2 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101084e6 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 101084e8 call 0x10107d9e */ esp -= 4; M32(esp) = 0x101084edu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x101084e8u); RETCHK(0x101084edu, 0x101084e8u); LOADALL;
  /* 101084ed add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101084f0:;
  /* 101084f0 push dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084f3 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 101084f9 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084fc lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 101084ff call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108504u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x101084ffu); RETCHK(0x10108504u, 0x101084ffu); LOADALL;
  /* 10108504 test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108507 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108508 je 0x1010851e */ if (ZF_) goto L_1010851e;
  /* 1010850a test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010850d jne 0x1010851e */ if (!ZF_) goto L_1010851e;
  /* 1010850f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10108510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10108511 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 10108513 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108516 call 0x10107d9e */ esp -= 4; M32(esp) = 0x1010851bu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x10108516u); RETCHK(0x1010851bu, 0x10108516u); LOADALL;
  /* 1010851b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010851e:;
  /* 1010851e cmp dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108522 je 0x1010856e */ if (ZF_) goto L_1010856e;
  /* 10108524 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108528 jle 0x1010856e */ if ((ZF_|LT_)) goto L_1010856e;
  /* 1010852a mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 1010852d mov ebx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ebx = (u32)(M32(m_)); }
  /* 10108530 mov dword ptr [ebp - 0x74], eax */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(eax); }
L_10108533:;
  /* 10108533 dec dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108536 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108538 mov ax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010853b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010853c lea eax, [ebp + 0x1c8] */ eax = (u32)((u32)(ebp + 0x1c8u));
  /* 10108542 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108543 call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108548u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x10108543u); RETCHK(0x10108548u, 0x10108543u); LOADALL;
  /* 10108548 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108549 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010854b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010854d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854e jle 0x1010857d */ if ((ZF_|LT_)) goto L_1010857d;
  /* 10108550 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 10108556 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108557 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010855a lea ecx, [ebp + 0x1c8] */ ecx = (u32)((u32)(ebp + 0x1c8u));
  /* 10108560 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108565u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108560u); RETCHK(0x10108565u, 0x10108560u); LOADALL;
  /* 10108565 cmp dword ptr [ebp - 0x74], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108569 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010856a jne 0x10108533 */ if (!ZF_) goto L_10108533;
  /* 1010856c jmp 0x1010857d */ goto L_1010857d;
L_1010856e:;
  /* 1010856e push dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108571 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10108574 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108577 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x1010857cu; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108577u); RETCHK(0x1010857cu, 0x10108577u); LOADALL;
  /* 1010857c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1010857d:;
  /* 1010857d test byte ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108581 je 0x10108597 */ if (ZF_) goto L_10108597;
  /* 10108583 push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108589 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010858c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010858d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1010858f call 0x10107d9e */ esp -= 4; M32(esp) = 0x10108594u; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x1010858fu); RETCHK(0x10108594u, 0x1010858fu); LOADALL;
  /* 10108594 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10108597:;
  /* 10108597 cmp dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010859b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 1010859d push dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101085a0 call 0x101074a1 */ esp -= 4; M32(esp) = 0x101085a5u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101085a0u); RETCHK(0x101085a5u, 0x101085a0u); LOADALL;
  /* 101085a5 and dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101085a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101085aa:;
  /* 101085aa mov edi, dword ptr [ebp + 0x1e0] */ { const u32 m_ = (u32)(ebp + 0x1e0u); edi = (u32)(M32(m_)); }
  /* 101085b0 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101085b2 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101085b4 jne 0x10107e36 */ if (!ZF_) goto L_10107e36;
L_101085ba:;
  /* 101085ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101085bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101085bc mov ecx, dword ptr [ebp + 0x1d0] */ { const u32 m_ = (u32)(ebp + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 101085c2 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 101085c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101085c6 call 0x1010570f */ esp -= 4; M32(esp) = 0x101085cbu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101085c6u); RETCHK(0x101085cbu, 0x101085c6u); LOADALL;
  /* 101085cb add ebp, 0x1d4 */ { u32 a_ = ebp, b_ = 0x1d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101085d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101085d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107f2f(CPU *c) {
  NATIVE_HOOK(0x10107f2fu) REGS; LOADALL;
  goto L_10107f2f;
L_10107e36:;
  /* 10107e36 mov ecx, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ecx = (u32)(M32(m_)); }
  /* 10107e39 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107e3a cmp dword ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e3e mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107e44 jl 0x101085ba */ if (LT_) goto L_101085ba;
  /* 10107e4a cmp bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e4d jl 0x10107e63 */ if (LT_) goto L_10107e63;
  /* 10107e4f cmp bl, 0x78 */ { u32 a_ = (ebx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e52 jg 0x10107e63 */ if (!(ZF_|LT_)) goto L_10107e63;
  /* 10107e54 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107e57 movsx eax, byte ptr [eax + 0x1010d698] */ { const u32 m_ = (u32)(eax + 0x1010d698u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e5e and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e61 jmp 0x10107e65 */ goto L_10107e65;
L_10107e63:;
  /* 10107e63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10107e65:;
  /* 10107e65 movsx eax, byte ptr [ecx + eax*8 + 0x1010d6b8] */ { const u32 m_ = (u32)(ecx + eax * 8u + 0x1010d6b8u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e6d push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10107e6f sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10107e72 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107e73 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e75 mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 10107e78 ja 0x101085aa */ if (!(CF_|ZF_)) goto L_101085aa;
  /* 10107e7e jmp dword ptr [eax*4 + 0x101085d3] */ { const u32 m_ = (u32)(eax * 4u + 0x101085d3u); u32 t_ = M32(m_); switch (t_) { case 0x10107e85u: goto L_10107e85; case 0x10107ea2u: goto L_10107ea2; case 0x10107eeeu: goto L_10107eee; case 0x10107f2fu: goto L_10107f2f; case 0x10107f38u: goto L_10107f38; case 0x10107f76u: goto L_10107f76; case 0x10108015u: goto L_10108015; case 0x10108057u: goto L_10108057; default: SAVEALL; call_ind(c, t_); return; } }
L_10107e85:;
  /* 10107e85 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e87 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107e8b mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 10107e8e mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 10107e91 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107e94 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 10107e97 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10107e9a mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 10107e9d jmp 0x101085aa */ goto L_101085aa;
L_10107ea2:;
  /* 10107ea2 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107ea5 sub eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ea8 je 0x10107ee5 */ if (ZF_) goto L_10107ee5;
  /* 10107eaa sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ead je 0x10107edc */ if (ZF_) goto L_10107edc;
  /* 10107eaf sub eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107eb2 je 0x10107ed3 */ if (ZF_) goto L_10107ed3;
  /* 10107eb4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb6 je 0x10107eca */ if (ZF_) goto L_10107eca;
  /* 10107eb8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ebb jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107ec1 or dword ptr [ebp - 0x3c], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ec5 jmp 0x101085aa */ goto L_101085aa;
L_10107eca:;
  /* 10107eca or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ece jmp 0x101085aa */ goto L_101085aa;
L_10107ed3:;
  /* 10107ed3 or dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ed7 jmp 0x101085aa */ goto L_101085aa;
L_10107edc:;
  /* 10107edc or byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107ee0 jmp 0x101085aa */ goto L_101085aa;
L_10107ee5:;
  /* 10107ee5 or dword ptr [ebp - 0x3c], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ee9 jmp 0x101085aa */ goto L_101085aa;
L_10107eee:;
  /* 10107eee cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ef1 jne 0x10107f1a */ if (!ZF_) goto L_10107f1a;
  /* 10107ef3 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107efa mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f00 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f05 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f08 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f0e or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f12 neg dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_); u32 r_ = (0u - a_) & 0xffffffffu; M32(m_) = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10107f15 jmp 0x101085aa */ goto L_101085aa;
L_10107f1a:;
  /* 10107f1a mov eax, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); eax = (u32)(M32(m_)); }
  /* 10107f1d movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f20 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f23 lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f27 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f2a jmp 0x101085aa */ goto L_101085aa;
L_10107f2f:;
  /* 10107f2f and dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f33 jmp 0x101085aa */ goto L_101085aa;
L_10107f38:;
  /* 10107f38 cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f3b jne 0x10107f61 */ if (!ZF_) goto L_10107f61;
  /* 10107f3d add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f44 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f4a mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f4f mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f52 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f58 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f5c jmp 0x101085aa */ goto L_101085aa;
L_10107f61:;
  /* 10107f61 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10107f64 movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f67 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f6a lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f6e mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f71 jmp 0x101085aa */ goto L_101085aa;
L_10107f76:;
  /* 10107f76 cmp bl, 0x49 */ { u32 a_ = (ebx & 0xffu), b_ = 0x49u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f79 je 0x10107fa9 */ if (ZF_) goto L_10107fa9;
  /* 10107f7b cmp bl, 0x68 */ { u32 a_ = (ebx & 0xffu), b_ = 0x68u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f7e je 0x10107fa0 */ if (ZF_) goto L_10107fa0;
  /* 10107f80 cmp bl, 0x6c */ { u32 a_ = (ebx & 0xffu), b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f83 je 0x10107f97 */ if (ZF_) goto L_10107f97;
  /* 10107f85 cmp bl, 0x77 */ { u32 a_ = (ebx & 0xffu), b_ = 0x77u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f88 jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107f8e or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107f92 jmp 0x101085aa */ goto L_101085aa;
L_10107f97:;
  /* 10107f97 or dword ptr [ebp - 0x3c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f9b jmp 0x101085aa */ goto L_101085aa;
L_10107fa0:;
  /* 10107fa0 or dword ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107fa4 jmp 0x101085aa */ goto L_101085aa;
L_10107fa9:;
  /* 10107fa9 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107fab cmp al, 0x36 */ { u32 a_ = (eax & 0xffu), b_ = 0x36u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fad jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107faf cmp byte ptr [edi + 1], 0x34 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fb3 jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107fb5 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb6 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb7 or byte ptr [ebp - 0x3b], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fbb mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fc1 jmp 0x101085aa */ goto L_101085aa;
L_10107fc6:;
  /* 10107fc6 cmp al, 0x33 */ { u32 a_ = (eax & 0xffu), b_ = 0x33u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fc8 jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fca cmp byte ptr [edi + 1], 0x32 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x32u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fce jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fd0 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd2 and byte ptr [ebp - 0x3b], 0x7f */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fd6 mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fdc jmp 0x101085aa */ goto L_101085aa;
L_10107fe1:;
  /* 10107fe1 cmp al, 0x64 */ { u32 a_ = (eax & 0xffu), b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fe3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107fe9 cmp al, 0x69 */ { u32 a_ = (eax & 0xffu), b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107feb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff1 cmp al, 0x6f */ { u32 a_ = (eax & 0xffu), b_ = 0x6fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ff3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff9 cmp al, 0x75 */ { u32 a_ = (eax & 0xffu), b_ = 0x75u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ffb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108001 cmp al, 0x78 */ { u32 a_ = (eax & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108003 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108009 cmp al, 0x58 */ { u32 a_ = (eax & 0xffu), b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010800b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108011 and dword ptr [ebp - 0x70], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108015:;
  /* 10108015 mov ecx, dword ptr [0x10110a30] */ { const u32 m_ = (u32)(0x10110a30u); ecx = (u32)(M32(m_)); }
  /* 1010801b and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010801f movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10108022 test byte ptr [ecx + eax*2 + 1], 0x80 */ { const u32 m_ = (u32)(ecx + eax * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108027 je 0x10108042 */ if (ZF_) goto L_10108042;
  /* 10108029 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 1010802f lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108032 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 10108034 call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108039u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x10108034u); RETCHK(0x10108039u, 0x10108034u); LOADALL;
  /* 10108039 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010803b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010803c mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
L_10108042:;
  /* 10108042 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 10108048 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010804b mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 1010804d call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108052u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x1010804du); RETCHK(0x10108052u, 0x1010804du); LOADALL;
  /* 10108052 jmp 0x101085aa */ goto L_101085aa;
L_10108057:;
  /* 10108057 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 1010805a cmp eax, 0x67 */ { u32 a_ = eax, b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010805d jg 0x101082bb */ if (!(ZF_|LT_)) goto L_101082bb;
  /* 10108063 cmp eax, 0x65 */ { u32 a_ = eax, b_ = 0x65u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108066 jge 0x101080f2 */ if (!LT_) goto L_101080f2;
  /* 1010806c cmp eax, 0x58 */ { u32 a_ = eax, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010806f jg 0x10108153 */ if (!(ZF_|LT_)) goto L_10108153;
  /* 10108075 je 0x1010833c */ if (ZF_) goto L_1010833c;
  /* 1010807b sub eax, 0x43 */ { u32 a_ = eax, b_ = 0x43u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010807e je 0x10108112 */ if (ZF_) goto L_10108112;
  /* 10108084 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108085 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108086 je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 10108088 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108089 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010808a je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 1010808c sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010808f jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 10108095 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010809b jne 0x101080a1 */ if (!ZF_) goto L_101080a1;
  /* 1010809d or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101080a1:;
  /* 101080a1 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 101080a4 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080a7 jne 0x101080ae */ if (!ZF_) goto L_101080ae;
  /* 101080a9 mov ecx, 0x7fffffff */ { ecx = (u32)(0x7fffffffu); }
L_101080ae:;
  /* 101080ae add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080b5 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 101080bb mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101080c1 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101080c4 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101080c7 je 0x10108311 */ if (ZF_) goto L_10108311;
  /* 101080cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101080cf jne 0x101080d9 */ if (!ZF_) goto L_101080d9;
  /* 101080d1 mov eax, dword ptr [0x10110254] */ { const u32 m_ = (u32)(0x10110254u); eax = (u32)(M32(m_)); }
  /* 101080d6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_101080d9:;
  /* 101080d9 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 101080dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101080e3 jmp 0x10108303 */ goto L_10108303;
L_101080e8:;
  /* 101080e8 mov dword ptr [ebp - 0x6c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x1u); }
  /* 101080ef add bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_101080f2:;
  /* 101080f2 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080f6 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080fa lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101080fd mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 10108100 jge 0x101081ff */ if (!LT_) goto L_101081ff;
  /* 10108106 mov dword ptr [ebp - 0x40], 6 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x6u); }
  /* 1010810d jmp 0x10108246 */ goto L_10108246;
L_10108112:;
  /* 10108112 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10108118 jne 0x1010811e */ if (!ZF_) goto L_1010811e;
  /* 1010811a or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_1010811e:;
  /* 1010811e add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108125 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010812b mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108131 je 0x10108198 */ if (ZF_) goto L_10108198;
  /* 10108133 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 10108137 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108138 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 1010813b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010813c call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108141u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x1010813cu); RETCHK(0x10108141u, 0x1010813cu); LOADALL;
  /* 10108141 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108143 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108144 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108145 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108148 jge 0x101081a5 */ if (!LT_) goto L_101081a5;
  /* 1010814a mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 10108151 jmp 0x101081a5 */ goto L_101081a5;
L_10108153:;
  /* 10108153 sub eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108156 je 0x101081b0 */ if (ZF_) goto L_101081b0;
  /* 10108158 sub eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010815b je 0x1010811e */ if (ZF_) goto L_1010811e;
  /* 1010815d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010815e jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108164:;
  /* 10108164 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108168:;
  /* 10108168 mov dword ptr [ebp - 0x48], 0xa */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0xau); }
L_1010816f:;
  /* 1010816f mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 10108172 mov esi, 0x8000 */ { esi = (u32)(0x8000u); }
  /* 10108177 test esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108179 je 0x101083b2 */ if (ZF_) goto L_101083b2;
  /* 1010817f mov ecx, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 10108185 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10108187 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010818a add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010818d mov dword ptr [ebp + 0x1e4], ecx */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(ecx); }
  /* 10108193 jmp 0x101083e0 */ goto L_101083e0;
L_10108198:;
  /* 10108198 mov al, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010819b mov byte ptr [ebp - 0x38], al */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010819e mov dword ptr [ebp - 0x48], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x1u); }
L_101081a5:;
  /* 101081a5 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101081a8 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081ab jmp 0x10108496 */ goto L_10108496;
L_101081b0:;
  /* 101081b0 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081b7 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101081bd mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101081c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c2 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081c4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101081c7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c9 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081cb test byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101081cf movsx eax, word ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 101081d2 mov dword ptr [ebp - 0x44], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ecx); }
  /* 101081d5 je 0x101081e8 */ if (ZF_) goto L_101081e8;
  /* 101081d7 cdq */ edx = (u32)((s32)eax >> 31);
  /* 101081d8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101081da sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101081dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101081e3 jmp 0x10108493 */ goto L_10108493;
L_101081e8:;
  /* 101081e8 and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081ec jmp 0x10108493 */ goto L_10108493;
L_101081f1:;
  /* 101081f1 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 101081f6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101081fa jmp 0x101082b0 */ goto L_101082b0;
L_101081ff:;
  /* 101081ff jne 0x1010820f */ if (!ZF_) goto L_1010820f;
  /* 10108201 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108204 jne 0x10108246 */ if (!ZF_) goto L_10108246;
  /* 10108206 mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 1010820d jmp 0x10108246 */ goto L_10108246;
L_1010820f:;
  /* 1010820f mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 10108214 cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108217 jle 0x1010821c */ if ((ZF_|LT_)) goto L_1010821c;
  /* 10108219 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_1010821c:;
  /* 1010821c mov edi, 0xa3 */ { edi = (u32)(0xa3u); }
  /* 10108221 cmp dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108224 jle 0x10108246 */ if ((ZF_|LT_)) goto L_10108246;
  /* 10108226 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108229 add eax, 0x15d */ { u32 a_ = eax, b_ = 0x15du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010822e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010822f call 0x10106108 */ esp -= 4; M32(esp) = 0x10108234u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x1010822fu); RETCHK(0x10108234u, 0x1010822fu); LOADALL;
  /* 10108234 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108236 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108237 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 1010823a je 0x10108243 */ if (ZF_) goto L_10108243;
  /* 1010823c mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 1010823f mov esi, eax */ { esi = (u32)(eax); }
  /* 10108241 jmp 0x10108246 */ goto L_10108246;
L_10108243:;
  /* 10108243 mov dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edi); }
L_10108246:;
  /* 10108246 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 1010824c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1010824e push dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108251 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108254 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108257 mov dword ptr [ebp + 0x1e4], eax */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 1010825d mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108260 mov dword ptr [ebp - 0x7c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(eax); }
  /* 10108263 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10108266 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108267 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1010826a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010826b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010826c mov dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ecx); }
  /* 1010826f call dword ptr [0x10110a18] */ { const u32 m_ = (u32)(0x10110a18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108275u; SAVEALL; call_ind(c, t_); RETCHK(0x10108275u, 0x1010826fu); LOADALL; }
  /* 10108275 mov edi, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edi = (u32)(M32(m_)); }
  /* 10108278 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010827b and edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10108281 je 0x10108291 */ if (ZF_) goto L_10108291;
  /* 10108283 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108287 jne 0x10108291 */ if (!ZF_) goto L_10108291;
  /* 10108289 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010828a call dword ptr [0x10110a24] */ { const u32 m_ = (u32)(0x10110a24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108290u; SAVEALL; call_ind(c, t_); RETCHK(0x10108290u, 0x1010828au); LOADALL; }
  /* 10108290 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10108291:;
  /* 10108291 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108294 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 10108296 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108298 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 1010829a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010829b call dword ptr [0x10110a1c] */ { const u32 m_ = (u32)(0x10110a1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101082a1u; SAVEALL; call_ind(c, t_); RETCHK(0x101082a1u, 0x1010829bu); LOADALL; }
  /* 101082a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101082a2:;
  /* 101082a2 cmp byte ptr [esi], 0x2d */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101082a5 jne 0x101082af */ if (!ZF_) goto L_101082af;
  /* 101082a7 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 101082ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101082ac mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
L_101082af:;
  /* 101082af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_101082b0:;
  /* 101082b0 call 0x10106140 */ esp -= 4; M32(esp) = 0x101082b5u; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101082b0u); RETCHK(0x101082b5u, 0x101082b0u); LOADALL;
  /* 101082b5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101082b6 jmp 0x10108493 */ goto L_10108493;
L_101082bb:;
  /* 101082bb sub eax, 0x69 */ { u32 a_ = eax, b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082be je 0x10108164 */ if (ZF_) goto L_10108164;
  /* 101082c4 sub eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082c7 je 0x10108382 */ if (ZF_) goto L_10108382;
  /* 101082cd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082ce je 0x10108368 */ if (ZF_) goto L_10108368;
  /* 101082d4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082d5 je 0x10108335 */ if (ZF_) goto L_10108335;
  /* 101082d7 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082da je 0x101080a1 */ if (ZF_) goto L_101080a1;
  /* 101082e0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e1 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e2 je 0x10108168 */ if (ZF_) goto L_10108168;
  /* 101082e8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082eb jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 101082f1 mov dword ptr [ebp - 0x68], 0x27 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0x27u); }
  /* 101082f8 jmp 0x1010833f */ goto L_1010833f;
L_101082fa:;
  /* 101082fa dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082fb cmp word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101082ff je 0x10108307 */ if (ZF_) goto L_10108307;
  /* 10108301 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108302 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108303:;
  /* 10108303 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108305 jne 0x101082fa */ if (!ZF_) goto L_101082fa;
L_10108307:;
  /* 10108307 sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010830a sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1010830c jmp 0x10108493 */ goto L_10108493;
L_10108311:;
  /* 10108311 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108313 jne 0x1010831d */ if (!ZF_) goto L_1010831d;
  /* 10108315 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 1010831a mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_1010831d:;
  /* 1010831d mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 10108320 jmp 0x10108329 */ goto L_10108329;
L_10108322:;
  /* 10108322 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108323 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108326 je 0x1010832d */ if (ZF_) goto L_1010832d;
  /* 10108328 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108329:;
  /* 10108329 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010832b jne 0x10108322 */ if (!ZF_) goto L_10108322;
L_1010832d:;
  /* 1010832d sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108330 jmp 0x10108493 */ goto L_10108493;
L_10108335:;
  /* 10108335 mov dword ptr [ebp - 0x40], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x8u); }
L_1010833c:;
  /* 1010833c mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
L_1010833f:;
  /* 1010833f test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108343 mov dword ptr [ebp - 0x48], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x10u); }
  /* 1010834a je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108350 mov al, byte ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10108353 add al, 0x51 */ { u32 a_ = (eax & 0xffu), b_ = 0x51u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10108355 mov byte ptr [ebp - 0x50], 0x30 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x30u); }
  /* 10108359 mov byte ptr [ebp - 0x4f], al */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010835c mov dword ptr [ebp - 0x54], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x2u); }
  /* 10108363 jmp 0x1010816f */ goto L_1010816f;
L_10108368:;
  /* 10108368 test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010836c mov dword ptr [ebp - 0x48], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x8u); }
  /* 10108373 je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108379 or byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1010837d jmp 0x1010816f */ goto L_1010816f;
L_10108382:;
  /* 10108382 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108389 test byte ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010838d mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108393 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108396 je 0x101083a1 */ if (ZF_) goto L_101083a1;
  /* 10108398 mov cx, word ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010839c mov word ptr [eax], cx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 1010839f jmp 0x101083a6 */ goto L_101083a6;
L_101083a1:;
  /* 101083a1 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 101083a4 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_101083a6:;
  /* 101083a6 mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 101083ad jmp 0x10108597 */ goto L_10108597;
L_101083b2:;
  /* 101083b2 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101083b9 test bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083bc mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101083c2 je 0x101083d6 */ if (ZF_) goto L_101083d6;
  /* 101083c4 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083c7 je 0x101083d0 */ if (ZF_) goto L_101083d0;
  /* 101083c9 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
L_101083cd:;
  /* 101083cd cdq */ edx = (u32)((s32)eax >> 31);
  /* 101083ce jmp 0x101083e0 */ goto L_101083e0;
L_101083d0:;
  /* 101083d0 movzx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 101083d4 jmp 0x101083cd */ goto L_101083cd;
L_101083d6:;
  /* 101083d6 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083d9 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101083dc jne 0x101083cd */ if (!ZF_) goto L_101083cd;
  /* 101083de xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_101083e0:;
  /* 101083e0 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083e3 je 0x101083fa */ if (ZF_) goto L_101083fa;
  /* 101083e5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083e7 jg 0x101083fa */ if (!(ZF_|LT_)) goto L_101083fa;
  /* 101083e9 jl 0x101083ef */ if (LT_) goto L_101083ef;
  /* 101083eb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083ed jae 0x101083fa */ if (!CF_) goto L_101083fa;
L_101083ef:;
  /* 101083ef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f1 adc edx, 0 */ { u32 a_ = edx, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 101083f4 neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f6 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101083fa:;
  /* 101083fa test dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083fd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101083ff mov edi, edx */ { edi = (u32)(edx); }
  /* 10108401 jne 0x10108405 */ if (!ZF_) goto L_10108405;
  /* 10108403 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_10108405:;
  /* 10108405 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108409 jge 0x10108414 */ if (!LT_) goto L_10108414;
  /* 1010840b mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 10108412 jmp 0x10108425 */ goto L_10108425;
L_10108414:;
  /* 10108414 and dword ptr [ebp - 0x3c], 0xfffffff7 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108418 mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 1010841d cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108420 jle 0x10108425 */ if ((ZF_|LT_)) goto L_10108425;
  /* 10108422 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_10108425:;
  /* 10108425 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108427 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108429 jne 0x1010842f */ if (!ZF_) goto L_1010842f;
  /* 1010842b and dword ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1010842f:;
  /* 1010842f lea esi, [ebp + 0x1c7] */ esi = (u32)((u32)(ebp + 0x1c7u));
L_10108435:;
  /* 10108435 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108438 dec dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010843b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010843d jg 0x10108445 */ if (!(ZF_|LT_)) goto L_10108445;
  /* 1010843f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108441 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108443 je 0x10108469 */ if (ZF_) goto L_10108469;
L_10108445:;
  /* 10108445 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 10108448 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10108449 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010844a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010844b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010844c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010844d call 0x1010ae00 */ esp -= 4; M32(esp) = 0x10108452u; SAVEALL; F_1010ae00(c); ABI_CHECK(0x1010ae00u, 0x1010844du); RETCHK(0x10108452u, 0x1010844du); LOADALL;
  /* 10108452 add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10108455 cmp ecx, 0x39 */ { u32 a_ = ecx, b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108458 mov dword ptr [ebp - 0x74], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(ebx); }
  /* 1010845b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1010845d mov edi, edx */ { edi = (u32)(edx); }
  /* 1010845f jle 0x10108464 */ if ((ZF_|LT_)) goto L_10108464;
  /* 10108461 add ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_10108464:;
  /* 10108464 mov byte ptr [esi], cl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10108466 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108467 jmp 0x10108435 */ goto L_10108435;
L_10108469:;
  /* 10108469 lea eax, [ebp + 0x1c7] */ eax = (u32)((u32)(ebp + 0x1c7u));
  /* 1010846f sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108471 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108472 test byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108476 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108479 mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 1010847c je 0x10108496 */ if (ZF_) goto L_10108496;
  /* 1010847e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10108480 cmp byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108483 jne 0x10108489 */ if (!ZF_) goto L_10108489;
  /* 10108485 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108487 jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108489:;
  /* 10108489 dec dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010848c mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 1010848f mov byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)(0x30u); }
  /* 10108492 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108493:;
  /* 10108493 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
L_10108496:;
  /* 10108496 cmp dword ptr [ebp - 0x64], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010849a jne 0x10108597 */ if (!ZF_) goto L_10108597;
  /* 101084a0 mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 101084a3 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084a6 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084a8 test bh, 1 */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084ab je 0x101084b3 */ if (ZF_) goto L_101084b3;
  /* 101084ad mov byte ptr [ebp - 0x50], 0x2d */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2du); }
  /* 101084b1 jmp 0x101084c7 */ goto L_101084c7;
L_101084b3:;
  /* 101084b3 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084b6 je 0x101084be */ if (ZF_) goto L_101084be;
  /* 101084b8 mov byte ptr [ebp - 0x50], 0x2b */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2bu); }
  /* 101084bc jmp 0x101084c7 */ goto L_101084c7;
L_101084be:;
  /* 101084be test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084c1 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084c3 mov byte ptr [ebp - 0x50], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x20u); }
L_101084c7:;
  /* 101084c7 mov dword ptr [ebp - 0x54], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x1u); }
L_101084ce:;
  /* 101084ce mov esi, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); esi = (u32)(M32(m_)); }
  /* 101084d1 sub esi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d4 sub esi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d7 test bl, 0xc */ { u32 a_ = (ebx & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084da jne 0x101084f0 */ if (!ZF_) goto L_101084f0;
  /* 101084dc push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084e2 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101084e6 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 101084e8 call 0x10107d9e */ esp -= 4; M32(esp) = 0x101084edu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x101084e8u); RETCHK(0x101084edu, 0x101084e8u); LOADALL;
  /* 101084ed add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101084f0:;
  /* 101084f0 push dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084f3 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 101084f9 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084fc lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 101084ff call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108504u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x101084ffu); RETCHK(0x10108504u, 0x101084ffu); LOADALL;
  /* 10108504 test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108507 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108508 je 0x1010851e */ if (ZF_) goto L_1010851e;
  /* 1010850a test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010850d jne 0x1010851e */ if (!ZF_) goto L_1010851e;
  /* 1010850f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10108510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10108511 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 10108513 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108516 call 0x10107d9e */ esp -= 4; M32(esp) = 0x1010851bu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x10108516u); RETCHK(0x1010851bu, 0x10108516u); LOADALL;
  /* 1010851b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010851e:;
  /* 1010851e cmp dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108522 je 0x1010856e */ if (ZF_) goto L_1010856e;
  /* 10108524 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108528 jle 0x1010856e */ if ((ZF_|LT_)) goto L_1010856e;
  /* 1010852a mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 1010852d mov ebx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ebx = (u32)(M32(m_)); }
  /* 10108530 mov dword ptr [ebp - 0x74], eax */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(eax); }
L_10108533:;
  /* 10108533 dec dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108536 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108538 mov ax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010853b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010853c lea eax, [ebp + 0x1c8] */ eax = (u32)((u32)(ebp + 0x1c8u));
  /* 10108542 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108543 call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108548u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x10108543u); RETCHK(0x10108548u, 0x10108543u); LOADALL;
  /* 10108548 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108549 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010854b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010854d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854e jle 0x1010857d */ if ((ZF_|LT_)) goto L_1010857d;
  /* 10108550 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 10108556 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108557 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010855a lea ecx, [ebp + 0x1c8] */ ecx = (u32)((u32)(ebp + 0x1c8u));
  /* 10108560 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108565u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108560u); RETCHK(0x10108565u, 0x10108560u); LOADALL;
  /* 10108565 cmp dword ptr [ebp - 0x74], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108569 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010856a jne 0x10108533 */ if (!ZF_) goto L_10108533;
  /* 1010856c jmp 0x1010857d */ goto L_1010857d;
L_1010856e:;
  /* 1010856e push dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108571 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10108574 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108577 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x1010857cu; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108577u); RETCHK(0x1010857cu, 0x10108577u); LOADALL;
  /* 1010857c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1010857d:;
  /* 1010857d test byte ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108581 je 0x10108597 */ if (ZF_) goto L_10108597;
  /* 10108583 push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108589 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010858c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010858d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1010858f call 0x10107d9e */ esp -= 4; M32(esp) = 0x10108594u; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x1010858fu); RETCHK(0x10108594u, 0x1010858fu); LOADALL;
  /* 10108594 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10108597:;
  /* 10108597 cmp dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010859b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 1010859d push dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101085a0 call 0x101074a1 */ esp -= 4; M32(esp) = 0x101085a5u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101085a0u); RETCHK(0x101085a5u, 0x101085a0u); LOADALL;
  /* 101085a5 and dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101085a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101085aa:;
  /* 101085aa mov edi, dword ptr [ebp + 0x1e0] */ { const u32 m_ = (u32)(ebp + 0x1e0u); edi = (u32)(M32(m_)); }
  /* 101085b0 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101085b2 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101085b4 jne 0x10107e36 */ if (!ZF_) goto L_10107e36;
L_101085ba:;
  /* 101085ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101085bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101085bc mov ecx, dword ptr [ebp + 0x1d0] */ { const u32 m_ = (u32)(ebp + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 101085c2 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 101085c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101085c6 call 0x1010570f */ esp -= 4; M32(esp) = 0x101085cbu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101085c6u); RETCHK(0x101085cbu, 0x101085c6u); LOADALL;
  /* 101085cb add ebp, 0x1d4 */ { u32 a_ = ebp, b_ = 0x1d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101085d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101085d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10107f38(CPU *c) {
  NATIVE_HOOK(0x10107f38u) REGS; LOADALL;
  goto L_10107f38;
L_10107e36:;
  /* 10107e36 mov ecx, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ecx = (u32)(M32(m_)); }
  /* 10107e39 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107e3a cmp dword ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e3e mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107e44 jl 0x101085ba */ if (LT_) goto L_101085ba;
  /* 10107e4a cmp bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e4d jl 0x10107e63 */ if (LT_) goto L_10107e63;
  /* 10107e4f cmp bl, 0x78 */ { u32 a_ = (ebx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107e52 jg 0x10107e63 */ if (!(ZF_|LT_)) goto L_10107e63;
  /* 10107e54 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107e57 movsx eax, byte ptr [eax + 0x1010d698] */ { const u32 m_ = (u32)(eax + 0x1010d698u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e5e and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e61 jmp 0x10107e65 */ goto L_10107e65;
L_10107e63:;
  /* 10107e63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10107e65:;
  /* 10107e65 movsx eax, byte ptr [ecx + eax*8 + 0x1010d6b8] */ { const u32 m_ = (u32)(ecx + eax * 8u + 0x1010d6b8u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10107e6d push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10107e6f sar eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10107e72 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10107e73 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10107e75 mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 10107e78 ja 0x101085aa */ if (!(CF_|ZF_)) goto L_101085aa;
  /* 10107e7e jmp dword ptr [eax*4 + 0x101085d3] */ { const u32 m_ = (u32)(eax * 4u + 0x101085d3u); u32 t_ = M32(m_); switch (t_) { case 0x10107e85u: goto L_10107e85; case 0x10107ea2u: goto L_10107ea2; case 0x10107eeeu: goto L_10107eee; case 0x10107f2fu: goto L_10107f2f; case 0x10107f38u: goto L_10107f38; case 0x10107f76u: goto L_10107f76; case 0x10108015u: goto L_10108015; case 0x10108057u: goto L_10108057; default: SAVEALL; call_ind(c, t_); return; } }
L_10107e85:;
  /* 10107e85 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10107e87 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107e8b mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 10107e8e mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 10107e91 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107e94 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 10107e97 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10107e9a mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 10107e9d jmp 0x101085aa */ goto L_101085aa;
L_10107ea2:;
  /* 10107ea2 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107ea5 sub eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ea8 je 0x10107ee5 */ if (ZF_) goto L_10107ee5;
  /* 10107eaa sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ead je 0x10107edc */ if (ZF_) goto L_10107edc;
  /* 10107eaf sub eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107eb2 je 0x10107ed3 */ if (ZF_) goto L_10107ed3;
  /* 10107eb4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10107eb6 je 0x10107eca */ if (ZF_) goto L_10107eca;
  /* 10107eb8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10107ebb jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107ec1 or dword ptr [ebp - 0x3c], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ec5 jmp 0x101085aa */ goto L_101085aa;
L_10107eca:;
  /* 10107eca or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ece jmp 0x101085aa */ goto L_101085aa;
L_10107ed3:;
  /* 10107ed3 or dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ed7 jmp 0x101085aa */ goto L_101085aa;
L_10107edc:;
  /* 10107edc or byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107ee0 jmp 0x101085aa */ goto L_101085aa;
L_10107ee5:;
  /* 10107ee5 or dword ptr [ebp - 0x3c], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107ee9 jmp 0x101085aa */ goto L_101085aa;
L_10107eee:;
  /* 10107eee cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ef1 jne 0x10107f1a */ if (!ZF_) goto L_10107f1a;
  /* 10107ef3 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107efa mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f00 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f05 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f08 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f0e or dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f12 neg dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_); u32 r_ = (0u - a_) & 0xffffffffu; M32(m_) = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10107f15 jmp 0x101085aa */ goto L_101085aa;
L_10107f1a:;
  /* 10107f1a mov eax, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); eax = (u32)(M32(m_)); }
  /* 10107f1d movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f20 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f23 lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f27 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 10107f2a jmp 0x101085aa */ goto L_101085aa;
L_10107f2f:;
  /* 10107f2f and dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f33 jmp 0x101085aa */ goto L_101085aa;
L_10107f38:;
  /* 10107f38 cmp bl, 0x2a */ { u32 a_ = (ebx & 0xffu), b_ = 0x2au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f3b jne 0x10107f61 */ if (!ZF_) goto L_10107f61;
  /* 10107f3d add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f44 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10107f4a mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10107f4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10107f4f mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f52 jge 0x101085aa */ if (!LT_) goto L_101085aa;
  /* 10107f58 or dword ptr [ebp - 0x40], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f5c jmp 0x101085aa */ goto L_101085aa;
L_10107f61:;
  /* 10107f61 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10107f64 movsx ecx, bl */ { ecx = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10107f67 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10107f6a lea eax, [ecx + eax*2 - 0x30] */ eax = (u32)((u32)(ecx + eax * 2u + 0xffffffd0u));
  /* 10107f6e mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10107f71 jmp 0x101085aa */ goto L_101085aa;
L_10107f76:;
  /* 10107f76 cmp bl, 0x49 */ { u32 a_ = (ebx & 0xffu), b_ = 0x49u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f79 je 0x10107fa9 */ if (ZF_) goto L_10107fa9;
  /* 10107f7b cmp bl, 0x68 */ { u32 a_ = (ebx & 0xffu), b_ = 0x68u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f7e je 0x10107fa0 */ if (ZF_) goto L_10107fa0;
  /* 10107f80 cmp bl, 0x6c */ { u32 a_ = (ebx & 0xffu), b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f83 je 0x10107f97 */ if (ZF_) goto L_10107f97;
  /* 10107f85 cmp bl, 0x77 */ { u32 a_ = (ebx & 0xffu), b_ = 0x77u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107f88 jne 0x101085aa */ if (!ZF_) goto L_101085aa;
  /* 10107f8e or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107f92 jmp 0x101085aa */ goto L_101085aa;
L_10107f97:;
  /* 10107f97 or dword ptr [ebp - 0x3c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107f9b jmp 0x101085aa */ goto L_101085aa;
L_10107fa0:;
  /* 10107fa0 or dword ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10107fa4 jmp 0x101085aa */ goto L_101085aa;
L_10107fa9:;
  /* 10107fa9 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10107fab cmp al, 0x36 */ { u32 a_ = (eax & 0xffu), b_ = 0x36u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fad jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107faf cmp byte ptr [edi + 1], 0x34 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fb3 jne 0x10107fc6 */ if (!ZF_) goto L_10107fc6;
  /* 10107fb5 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb6 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fb7 or byte ptr [ebp - 0x3b], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fbb mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fc1 jmp 0x101085aa */ goto L_101085aa;
L_10107fc6:;
  /* 10107fc6 cmp al, 0x33 */ { u32 a_ = (eax & 0xffu), b_ = 0x33u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fc8 jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fca cmp byte ptr [edi + 1], 0x32 */ { const u32 m_ = (u32)(edi + 0x1u); u32 a_ = M8(m_), b_ = 0x32u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fce jne 0x10107fe1 */ if (!ZF_) goto L_10107fe1;
  /* 10107fd0 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd1 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10107fd2 and byte ptr [ebp - 0x3b], 0x7f */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x7fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10107fd6 mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 10107fdc jmp 0x101085aa */ goto L_101085aa;
L_10107fe1:;
  /* 10107fe1 cmp al, 0x64 */ { u32 a_ = (eax & 0xffu), b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107fe3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107fe9 cmp al, 0x69 */ { u32 a_ = (eax & 0xffu), b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107feb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff1 cmp al, 0x6f */ { u32 a_ = (eax & 0xffu), b_ = 0x6fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ff3 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10107ff9 cmp al, 0x75 */ { u32 a_ = (eax & 0xffu), b_ = 0x75u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10107ffb je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108001 cmp al, 0x78 */ { u32 a_ = (eax & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108003 je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108009 cmp al, 0x58 */ { u32 a_ = (eax & 0xffu), b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1010800b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 10108011 and dword ptr [ebp - 0x70], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108015:;
  /* 10108015 mov ecx, dword ptr [0x10110a30] */ { const u32 m_ = (u32)(0x10110a30u); ecx = (u32)(M32(m_)); }
  /* 1010801b and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1010801f movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10108022 test byte ptr [ecx + eax*2 + 1], 0x80 */ { const u32 m_ = (u32)(ecx + eax * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108027 je 0x10108042 */ if (ZF_) goto L_10108042;
  /* 10108029 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 1010802f lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108032 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 10108034 call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108039u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x10108034u); RETCHK(0x10108039u, 0x10108034u); LOADALL;
  /* 10108039 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010803b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010803c mov dword ptr [ebp + 0x1e0], edi */ { const u32 m_ = (u32)(ebp + 0x1e0u); M32(m_) = (u32)(edi); }
L_10108042:;
  /* 10108042 mov ecx, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 10108048 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010804b mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 1010804d call 0x10107d6b */ esp -= 4; M32(esp) = 0x10108052u; SAVEALL; F_10107d6b(c); ABI_CHECK(0x10107d6bu, 0x1010804du); RETCHK(0x10108052u, 0x1010804du); LOADALL;
  /* 10108052 jmp 0x101085aa */ goto L_101085aa;
L_10108057:;
  /* 10108057 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 1010805a cmp eax, 0x67 */ { u32 a_ = eax, b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010805d jg 0x101082bb */ if (!(ZF_|LT_)) goto L_101082bb;
  /* 10108063 cmp eax, 0x65 */ { u32 a_ = eax, b_ = 0x65u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108066 jge 0x101080f2 */ if (!LT_) goto L_101080f2;
  /* 1010806c cmp eax, 0x58 */ { u32 a_ = eax, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010806f jg 0x10108153 */ if (!(ZF_|LT_)) goto L_10108153;
  /* 10108075 je 0x1010833c */ if (ZF_) goto L_1010833c;
  /* 1010807b sub eax, 0x43 */ { u32 a_ = eax, b_ = 0x43u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010807e je 0x10108112 */ if (ZF_) goto L_10108112;
  /* 10108084 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108085 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108086 je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 10108088 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108089 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010808a je 0x101080e8 */ if (ZF_) goto L_101080e8;
  /* 1010808c sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010808f jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 10108095 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010809b jne 0x101080a1 */ if (!ZF_) goto L_101080a1;
  /* 1010809d or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101080a1:;
  /* 101080a1 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 101080a4 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080a7 jne 0x101080ae */ if (!ZF_) goto L_101080ae;
  /* 101080a9 mov ecx, 0x7fffffff */ { ecx = (u32)(0x7fffffffu); }
L_101080ae:;
  /* 101080ae add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080b5 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 101080bb mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101080c1 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101080c4 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101080c7 je 0x10108311 */ if (ZF_) goto L_10108311;
  /* 101080cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101080cf jne 0x101080d9 */ if (!ZF_) goto L_101080d9;
  /* 101080d1 mov eax, dword ptr [0x10110254] */ { const u32 m_ = (u32)(0x10110254u); eax = (u32)(M32(m_)); }
  /* 101080d6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_101080d9:;
  /* 101080d9 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 101080dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101080e3 jmp 0x10108303 */ goto L_10108303;
L_101080e8:;
  /* 101080e8 mov dword ptr [ebp - 0x6c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x1u); }
  /* 101080ef add bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_101080f2:;
  /* 101080f2 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101080f6 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 101080fa lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101080fd mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 10108100 jge 0x101081ff */ if (!LT_) goto L_101081ff;
  /* 10108106 mov dword ptr [ebp - 0x40], 6 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x6u); }
  /* 1010810d jmp 0x10108246 */ goto L_10108246;
L_10108112:;
  /* 10108112 test word ptr [ebp - 0x3c], 0x830 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x830u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 10108118 jne 0x1010811e */ if (!ZF_) goto L_1010811e;
  /* 1010811a or byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_1010811e:;
  /* 1010811e add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108125 test word ptr [ebp - 0x3c], 0x810 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M16(m_), b_ = 0x810u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 1010812b mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108131 je 0x10108198 */ if (ZF_) goto L_10108198;
  /* 10108133 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 10108137 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108138 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 1010813b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010813c call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108141u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x1010813cu); RETCHK(0x10108141u, 0x1010813cu); LOADALL;
  /* 10108141 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108143 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108144 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108145 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108148 jge 0x101081a5 */ if (!LT_) goto L_101081a5;
  /* 1010814a mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 10108151 jmp 0x101081a5 */ goto L_101081a5;
L_10108153:;
  /* 10108153 sub eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108156 je 0x101081b0 */ if (ZF_) goto L_101081b0;
  /* 10108158 sub eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010815b je 0x1010811e */ if (ZF_) goto L_1010811e;
  /* 1010815d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010815e jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108164:;
  /* 10108164 or dword ptr [ebp - 0x3c], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10108168:;
  /* 10108168 mov dword ptr [ebp - 0x48], 0xa */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0xau); }
L_1010816f:;
  /* 1010816f mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 10108172 mov esi, 0x8000 */ { esi = (u32)(0x8000u); }
  /* 10108177 test esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108179 je 0x101083b2 */ if (ZF_) goto L_101083b2;
  /* 1010817f mov ecx, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 10108185 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10108187 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 1010818a add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1010818d mov dword ptr [ebp + 0x1e4], ecx */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(ecx); }
  /* 10108193 jmp 0x101083e0 */ goto L_101083e0;
L_10108198:;
  /* 10108198 mov al, byte ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1010819b mov byte ptr [ebp - 0x38], al */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010819e mov dword ptr [ebp - 0x48], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x1u); }
L_101081a5:;
  /* 101081a5 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 101081a8 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081ab jmp 0x10108496 */ goto L_10108496;
L_101081b0:;
  /* 101081b0 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081b7 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101081bd mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101081c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c2 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081c4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 101081c7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101081c9 je 0x101081f1 */ if (ZF_) goto L_101081f1;
  /* 101081cb test byte ptr [ebp - 0x3b], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101081cf movsx eax, word ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 101081d2 mov dword ptr [ebp - 0x44], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ecx); }
  /* 101081d5 je 0x101081e8 */ if (ZF_) goto L_101081e8;
  /* 101081d7 cdq */ edx = (u32)((s32)eax >> 31);
  /* 101081d8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101081da sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 101081dc mov dword ptr [ebp - 0x5c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0x1u); }
  /* 101081e3 jmp 0x10108493 */ goto L_10108493;
L_101081e8:;
  /* 101081e8 and dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101081ec jmp 0x10108493 */ goto L_10108493;
L_101081f1:;
  /* 101081f1 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 101081f6 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 101081f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101081fa jmp 0x101082b0 */ goto L_101082b0;
L_101081ff:;
  /* 101081ff jne 0x1010820f */ if (!ZF_) goto L_1010820f;
  /* 10108201 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108204 jne 0x10108246 */ if (!ZF_) goto L_10108246;
  /* 10108206 mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 1010820d jmp 0x10108246 */ goto L_10108246;
L_1010820f:;
  /* 1010820f mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 10108214 cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108217 jle 0x1010821c */ if ((ZF_|LT_)) goto L_1010821c;
  /* 10108219 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_1010821c:;
  /* 1010821c mov edi, 0xa3 */ { edi = (u32)(0xa3u); }
  /* 10108221 cmp dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108224 jle 0x10108246 */ if ((ZF_|LT_)) goto L_10108246;
  /* 10108226 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108229 add eax, 0x15d */ { u32 a_ = eax, b_ = 0x15du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010822e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010822f call 0x10106108 */ esp -= 4; M32(esp) = 0x10108234u; SAVEALL; F_10106108(c); ABI_CHECK(0x10106108u, 0x1010822fu); RETCHK(0x10108234u, 0x1010822fu); LOADALL;
  /* 10108234 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108236 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108237 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 1010823a je 0x10108243 */ if (ZF_) goto L_10108243;
  /* 1010823c mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 1010823f mov esi, eax */ { esi = (u32)(eax); }
  /* 10108241 jmp 0x10108246 */ goto L_10108246;
L_10108243:;
  /* 10108243 mov dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edi); }
L_10108246:;
  /* 10108246 mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 1010824c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1010824e push dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108251 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108254 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108257 mov dword ptr [ebp + 0x1e4], eax */ { const u32 m_ = (u32)(ebp + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 1010825d mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108260 mov dword ptr [ebp - 0x7c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(eax); }
  /* 10108263 movsx eax, bl */ { eax = (u32)((u32)sxt((ebx & 0xffu), 1) & 0xffffffffu); }
  /* 10108266 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108267 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1010826a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010826b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010826c mov dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ecx); }
  /* 1010826f call dword ptr [0x10110a18] */ { const u32 m_ = (u32)(0x10110a18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108275u; SAVEALL; call_ind(c, t_); RETCHK(0x10108275u, 0x1010826fu); LOADALL; }
  /* 10108275 mov edi, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edi = (u32)(M32(m_)); }
  /* 10108278 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1010827b and edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10108281 je 0x10108291 */ if (ZF_) goto L_10108291;
  /* 10108283 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108287 jne 0x10108291 */ if (!ZF_) goto L_10108291;
  /* 10108289 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010828a call dword ptr [0x10110a24] */ { const u32 m_ = (u32)(0x10110a24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10108290u; SAVEALL; call_ind(c, t_); RETCHK(0x10108290u, 0x1010828au); LOADALL; }
  /* 10108290 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10108291:;
  /* 10108291 cmp bl, 0x67 */ { u32 a_ = (ebx & 0xffu), b_ = 0x67u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108294 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 10108296 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108298 jne 0x101082a2 */ if (!ZF_) goto L_101082a2;
  /* 1010829a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010829b call dword ptr [0x10110a1c] */ { const u32 m_ = (u32)(0x10110a1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x101082a1u; SAVEALL; call_ind(c, t_); RETCHK(0x101082a1u, 0x1010829bu); LOADALL; }
  /* 101082a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101082a2:;
  /* 101082a2 cmp byte ptr [esi], 0x2d */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 101082a5 jne 0x101082af */ if (!ZF_) goto L_101082af;
  /* 101082a7 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 101082ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 101082ac mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
L_101082af:;
  /* 101082af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_101082b0:;
  /* 101082b0 call 0x10106140 */ esp -= 4; M32(esp) = 0x101082b5u; SAVEALL; F_10106140(c); ABI_CHECK(0x10106140u, 0x101082b0u); RETCHK(0x101082b5u, 0x101082b0u); LOADALL;
  /* 101082b5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 101082b6 jmp 0x10108493 */ goto L_10108493;
L_101082bb:;
  /* 101082bb sub eax, 0x69 */ { u32 a_ = eax, b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082be je 0x10108164 */ if (ZF_) goto L_10108164;
  /* 101082c4 sub eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082c7 je 0x10108382 */ if (ZF_) goto L_10108382;
  /* 101082cd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082ce je 0x10108368 */ if (ZF_) goto L_10108368;
  /* 101082d4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082d5 je 0x10108335 */ if (ZF_) goto L_10108335;
  /* 101082d7 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082da je 0x101080a1 */ if (ZF_) goto L_101080a1;
  /* 101082e0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e1 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082e2 je 0x10108168 */ if (ZF_) goto L_10108168;
  /* 101082e8 sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 101082eb jne 0x10108496 */ if (!ZF_) goto L_10108496;
  /* 101082f1 mov dword ptr [ebp - 0x68], 0x27 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0x27u); }
  /* 101082f8 jmp 0x1010833f */ goto L_1010833f;
L_101082fa:;
  /* 101082fa dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 101082fb cmp word ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 101082ff je 0x10108307 */ if (ZF_) goto L_10108307;
  /* 10108301 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108302 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108303:;
  /* 10108303 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108305 jne 0x101082fa */ if (!ZF_) goto L_101082fa;
L_10108307:;
  /* 10108307 sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1010830a sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1010830c jmp 0x10108493 */ goto L_10108493;
L_10108311:;
  /* 10108311 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108313 jne 0x1010831d */ if (!ZF_) goto L_1010831d;
  /* 10108315 mov eax, dword ptr [0x10110250] */ { const u32 m_ = (u32)(0x10110250u); eax = (u32)(M32(m_)); }
  /* 1010831a mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
L_1010831d:;
  /* 1010831d mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 10108320 jmp 0x10108329 */ goto L_10108329;
L_10108322:;
  /* 10108322 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108323 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108326 je 0x1010832d */ if (ZF_) goto L_1010832d;
  /* 10108328 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108329:;
  /* 10108329 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010832b jne 0x10108322 */ if (!ZF_) goto L_10108322;
L_1010832d:;
  /* 1010832d sub eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108330 jmp 0x10108493 */ goto L_10108493;
L_10108335:;
  /* 10108335 mov dword ptr [ebp - 0x40], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x8u); }
L_1010833c:;
  /* 1010833c mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
L_1010833f:;
  /* 1010833f test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108343 mov dword ptr [ebp - 0x48], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x10u); }
  /* 1010834a je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108350 mov al, byte ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10108353 add al, 0x51 */ { u32 a_ = (eax & 0xffu), b_ = 0x51u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10108355 mov byte ptr [ebp - 0x50], 0x30 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x30u); }
  /* 10108359 mov byte ptr [ebp - 0x4f], al */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1010835c mov dword ptr [ebp - 0x54], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x2u); }
  /* 10108363 jmp 0x1010816f */ goto L_1010816f;
L_10108368:;
  /* 10108368 test byte ptr [ebp - 0x3c], 0x80 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010836c mov dword ptr [ebp - 0x48], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x8u); }
  /* 10108373 je 0x1010816f */ if (ZF_) goto L_1010816f;
  /* 10108379 or byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 1010837d jmp 0x1010816f */ goto L_1010816f;
L_10108382:;
  /* 10108382 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108389 test byte ptr [ebp - 0x3c], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010838d mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 10108393 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10108396 je 0x101083a1 */ if (ZF_) goto L_101083a1;
  /* 10108398 mov cx, word ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010839c mov word ptr [eax], cx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 1010839f jmp 0x101083a6 */ goto L_101083a6;
L_101083a1:;
  /* 101083a1 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 101083a4 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_101083a6:;
  /* 101083a6 mov dword ptr [ebp - 0x64], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(0x1u); }
  /* 101083ad jmp 0x10108597 */ goto L_10108597;
L_101083b2:;
  /* 101083b2 add dword ptr [ebp + 0x1e4], 4 */ { const u32 m_ = (u32)(ebp + 0x1e4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 101083b9 test bl, 0x20 */ { u32 a_ = (ebx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083bc mov eax, dword ptr [ebp + 0x1e4] */ { const u32 m_ = (u32)(ebp + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 101083c2 je 0x101083d6 */ if (ZF_) goto L_101083d6;
  /* 101083c4 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083c7 je 0x101083d0 */ if (ZF_) goto L_101083d0;
  /* 101083c9 movsx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
L_101083cd:;
  /* 101083cd cdq */ edx = (u32)((s32)eax >> 31);
  /* 101083ce jmp 0x101083e0 */ goto L_101083e0;
L_101083d0:;
  /* 101083d0 movzx eax, word ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 101083d4 jmp 0x101083cd */ goto L_101083cd;
L_101083d6:;
  /* 101083d6 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083d9 mov eax, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101083dc jne 0x101083cd */ if (!ZF_) goto L_101083cd;
  /* 101083de xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_101083e0:;
  /* 101083e0 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101083e3 je 0x101083fa */ if (ZF_) goto L_101083fa;
  /* 101083e5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083e7 jg 0x101083fa */ if (!(ZF_|LT_)) goto L_101083fa;
  /* 101083e9 jl 0x101083ef */ if (LT_) goto L_101083ef;
  /* 101083eb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083ed jae 0x101083fa */ if (!CF_) goto L_101083fa;
L_101083ef:;
  /* 101083ef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f1 adc edx, 0 */ { u32 a_ = edx, b_ = 0x0u; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 101083f4 neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 101083f6 or byte ptr [ebp - 0x3b], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_101083fa:;
  /* 101083fa test dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 101083fd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 101083ff mov edi, edx */ { edi = (u32)(edx); }
  /* 10108401 jne 0x10108405 */ if (!ZF_) goto L_10108405;
  /* 10108403 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_10108405:;
  /* 10108405 cmp dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108409 jge 0x10108414 */ if (!LT_) goto L_10108414;
  /* 1010840b mov dword ptr [ebp - 0x40], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x1u); }
  /* 10108412 jmp 0x10108425 */ goto L_10108425;
L_10108414:;
  /* 10108414 and dword ptr [ebp - 0x3c], 0xfffffff7 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0xfffffff7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10108418 mov eax, 0x200 */ { eax = (u32)(0x200u); }
  /* 1010841d cmp dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108420 jle 0x10108425 */ if ((ZF_|LT_)) goto L_10108425;
  /* 10108422 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_10108425:;
  /* 10108425 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108427 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108429 jne 0x1010842f */ if (!ZF_) goto L_1010842f;
  /* 1010842b and dword ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1010842f:;
  /* 1010842f lea esi, [ebp + 0x1c7] */ esi = (u32)((u32)(ebp + 0x1c7u));
L_10108435:;
  /* 10108435 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 10108438 dec dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010843b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010843d jg 0x10108445 */ if (!(ZF_|LT_)) goto L_10108445;
  /* 1010843f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10108441 or eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108443 je 0x10108469 */ if (ZF_) goto L_10108469;
L_10108445:;
  /* 10108445 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 10108448 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10108449 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1010844a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010844b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1010844c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1010844d call 0x1010ae00 */ esp -= 4; M32(esp) = 0x10108452u; SAVEALL; F_1010ae00(c); ABI_CHECK(0x1010ae00u, 0x1010844du); RETCHK(0x10108452u, 0x1010844du); LOADALL;
  /* 10108452 add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10108455 cmp ecx, 0x39 */ { u32 a_ = ecx, b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108458 mov dword ptr [ebp - 0x74], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(ebx); }
  /* 1010845b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1010845d mov edi, edx */ { edi = (u32)(edx); }
  /* 1010845f jle 0x10108464 */ if ((ZF_|LT_)) goto L_10108464;
  /* 10108461 add ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_10108464:;
  /* 10108464 mov byte ptr [esi], cl */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10108466 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108467 jmp 0x10108435 */ goto L_10108435;
L_10108469:;
  /* 10108469 lea eax, [ebp + 0x1c7] */ eax = (u32)((u32)(ebp + 0x1c7u));
  /* 1010846f sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10108471 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108472 test byte ptr [ebp - 0x3b], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108476 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 10108479 mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 1010847c je 0x10108496 */ if (ZF_) goto L_10108496;
  /* 1010847e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10108480 cmp byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10108483 jne 0x10108489 */ if (!ZF_) goto L_10108489;
  /* 10108485 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10108487 jne 0x10108496 */ if (!ZF_) goto L_10108496;
L_10108489:;
  /* 10108489 dec dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1010848c mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 1010848f mov byte ptr [ecx], 0x30 */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)(0x30u); }
  /* 10108492 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10108493:;
  /* 10108493 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
L_10108496:;
  /* 10108496 cmp dword ptr [ebp - 0x64], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010849a jne 0x10108597 */ if (!ZF_) goto L_10108597;
  /* 101084a0 mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 101084a3 test bl, 0x40 */ { u32 a_ = (ebx & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084a6 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084a8 test bh, 1 */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084ab je 0x101084b3 */ if (ZF_) goto L_101084b3;
  /* 101084ad mov byte ptr [ebp - 0x50], 0x2d */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2du); }
  /* 101084b1 jmp 0x101084c7 */ goto L_101084c7;
L_101084b3:;
  /* 101084b3 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084b6 je 0x101084be */ if (ZF_) goto L_101084be;
  /* 101084b8 mov byte ptr [ebp - 0x50], 0x2b */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x2bu); }
  /* 101084bc jmp 0x101084c7 */ goto L_101084c7;
L_101084be:;
  /* 101084be test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084c1 je 0x101084ce */ if (ZF_) goto L_101084ce;
  /* 101084c3 mov byte ptr [ebp - 0x50], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x20u); }
L_101084c7:;
  /* 101084c7 mov dword ptr [ebp - 0x54], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x1u); }
L_101084ce:;
  /* 101084ce mov esi, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); esi = (u32)(M32(m_)); }
  /* 101084d1 sub esi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d4 sub esi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 101084d7 test bl, 0xc */ { u32 a_ = (ebx & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101084da jne 0x101084f0 */ if (!ZF_) goto L_101084f0;
  /* 101084dc push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084e2 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101084e6 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 101084e8 call 0x10107d9e */ esp -= 4; M32(esp) = 0x101084edu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x101084e8u); RETCHK(0x101084edu, 0x101084e8u); LOADALL;
  /* 101084ed add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_101084f0:;
  /* 101084f0 push dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101084f3 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 101084f9 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 101084fc lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 101084ff call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108504u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x101084ffu); RETCHK(0x10108504u, 0x101084ffu); LOADALL;
  /* 10108504 test bl, 8 */ { u32 a_ = (ebx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108507 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10108508 je 0x1010851e */ if (ZF_) goto L_1010851e;
  /* 1010850a test bl, 4 */ { u32 a_ = (ebx & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1010850d jne 0x1010851e */ if (!ZF_) goto L_1010851e;
  /* 1010850f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10108510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10108511 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 10108513 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108516 call 0x10107d9e */ esp -= 4; M32(esp) = 0x1010851bu; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x10108516u); RETCHK(0x1010851bu, 0x10108516u); LOADALL;
  /* 1010851b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1010851e:;
  /* 1010851e cmp dword ptr [ebp - 0x5c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108522 je 0x1010856e */ if (ZF_) goto L_1010856e;
  /* 10108524 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108528 jle 0x1010856e */ if ((ZF_|LT_)) goto L_1010856e;
  /* 1010852a mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 1010852d mov ebx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ebx = (u32)(M32(m_)); }
  /* 10108530 mov dword ptr [ebp - 0x74], eax */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(eax); }
L_10108533:;
  /* 10108533 dec dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10108536 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10108538 mov ax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1010853b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010853c lea eax, [ebp + 0x1c8] */ eax = (u32)((u32)(ebp + 0x1c8u));
  /* 10108542 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108543 call 0x1010add2 */ esp -= 4; M32(esp) = 0x10108548u; SAVEALL; F_1010add2(c); ABI_CHECK(0x1010add2u, 0x10108543u); RETCHK(0x10108548u, 0x10108543u); LOADALL;
  /* 10108548 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10108549 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1010854b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1010854d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010854e jle 0x1010857d */ if ((ZF_|LT_)) goto L_1010857d;
  /* 10108550 mov edi, dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 10108556 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10108557 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010855a lea ecx, [ebp + 0x1c8] */ ecx = (u32)((u32)(ebp + 0x1c8u));
  /* 10108560 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x10108565u; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108560u); RETCHK(0x10108565u, 0x10108560u); LOADALL;
  /* 10108565 cmp dword ptr [ebp - 0x74], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10108569 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010856a jne 0x10108533 */ if (!ZF_) goto L_10108533;
  /* 1010856c jmp 0x1010857d */ goto L_1010857d;
L_1010856e:;
  /* 1010856e push dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108571 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10108574 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 10108577 call 0x10107dc2 */ esp -= 4; M32(esp) = 0x1010857cu; SAVEALL; F_10107dc2(c); ABI_CHECK(0x10107dc2u, 0x10108577u); RETCHK(0x1010857cu, 0x10108577u); LOADALL;
  /* 1010857c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1010857d:;
  /* 1010857d test byte ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10108581 je 0x10108597 */ if (ZF_) goto L_10108597;
  /* 10108583 push dword ptr [ebp + 0x1dc] */ { const u32 m_ = (u32)(ebp + 0x1dcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10108589 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 1010858c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1010858d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1010858f call 0x10107d9e */ esp -= 4; M32(esp) = 0x10108594u; SAVEALL; F_10107d9e(c); ABI_CHECK(0x10107d9eu, 0x1010858fu); RETCHK(0x10108594u, 0x1010858fu); LOADALL;
  /* 10108594 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10108597:;
  /* 10108597 cmp dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1010859b je 0x101085aa */ if (ZF_) goto L_101085aa;
  /* 1010859d push dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101085a0 call 0x101074a1 */ esp -= 4; M32(esp) = 0x101085a5u; SAVEALL; F_101074a1(c); ABI_CHECK(0x101074a1u, 0x101085a0u); RETCHK(0x101085a5u, 0x101085a0u); LOADALL;
  /* 101085a5 and dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 101085a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_101085aa:;
  /* 101085aa mov edi, dword ptr [ebp + 0x1e0] */ { const u32 m_ = (u32)(ebp + 0x1e0u); edi = (u32)(M32(m_)); }
  /* 101085b0 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 101085b2 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 101085b4 jne 0x10107e36 */ if (!ZF_) goto L_10107e36;
L_101085ba:;
  /* 101085ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101085bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101085bc mov ecx, dword ptr [ebp + 0x1d0] */ { const u32 m_ = (u32)(ebp + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 101085c2 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 101085c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101085c6 call 0x1010570f */ esp -= 4; M32(esp) = 0x101085cbu; SAVEALL; F_1010570f(c); ABI_CHECK(0x1010570fu, 0x101085c6u); RETCHK(0x101085cbu, 0x101085c6u); LOADALL;
  /* 101085cb add ebp, 0x1d4 */ { u32 a_ = ebp, b_ = 0x1d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 101085d1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 101085d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
