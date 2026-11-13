#include "funcs.h"

void F_10202cb0(CPU *c) {
  NATIVE_HOOK(0x10202cb0u) REGS; LOADALL;
L_10202cb0:;
  /* 10202cb0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10202cb2 push 0x1020ab3b */ { u32 v_ = 0x1020ab3bu; esp -= 4; M32(esp) = v_; }
  /* 10202cb7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10202cbd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202cbe mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10202cc5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202cc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202cc7 push 0x12018 */ { u32 v_ = 0x12018u; esp -= 4; M32(esp) = v_; }
  /* 10202ccc call 0x10204fbd */ esp -= 4; M32(esp) = 0x10202cd1u; SAVEALL; F_10204fbd(c); ABI_CHECK(0x10204fbdu, 0x10202cccu); RETCHK(0x10202cd1u, 0x10202cccu); LOADALL;
  /* 10202cd1 mov esi, eax */ { esi = (u32)(eax); }
  /* 10202cd3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202cd6 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 10202cda xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202cdc cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202cde mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10202ce2 je 0x10202cf4 */ if (ZF_) goto L_10202cf4;
  /* 10202ce4 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202ce7 mov dword ptr [esi], 0x1020b130 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1020b130u); }
  /* 10202ced call 0x10204a40 */ esp -= 4; M32(esp) = 0x10202cf2u; SAVEALL; F_10204a40(c); ABI_CHECK(0x10204a40u, 0x10202cedu); RETCHK(0x10202cf2u, 0x10202cedu); LOADALL;
  /* 10202cf2 mov eax, esi */ { eax = (u32)(esi); }
L_10202cf4:;
  /* 10202cf4 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10202cf8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202cf9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10202d00 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202d03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10202d20(CPU *c) {
  NATIVE_HOOK(0x10202d20u) REGS; LOADALL;
L_10202d20:;
  /* 10202d20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202d21 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202d22 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202d26 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10202d28 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202d2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202d2f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d31 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202d36u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202d31u); RETCHK(0x10202d36u, 0x10202d31u); LOADALL;
  /* 10202d36 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d39 je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d3f push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202d41 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10202d44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202d45 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d47 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202d4cu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202d47u); RETCHK(0x10202d4cu, 0x10202d47u); LOADALL;
  /* 10202d4c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d4f je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d51 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10202d56 lea edx, [edi + 0x24] */ edx = (u32)((u32)(edi + 0x24u));
  /* 10202d59 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202d5a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d5c call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202d61u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202d5cu); RETCHK(0x10202d61u, 0x10202d5cu); LOADALL;
  /* 10202d61 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d64 je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d66 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10202d6b lea eax, [edi + 0x124] */ eax = (u32)((u32)(edi + 0x124u));
  /* 10202d71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202d72 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d74 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202d79u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202d74u); RETCHK(0x10202d79u, 0x10202d74u); LOADALL;
  /* 10202d79 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d7c je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d7e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10202d80 mov cx, word ptr [edi + 0x224] */ { const u32 m_ = (u32)(edi + 0x224u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10202d87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202d88 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d8a call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10202d8fu; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10202d8au); RETCHK(0x10202d8fu, 0x10202d8au); LOADALL;
  /* 10202d8f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d92 je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d94 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10202d96 mov dx, word ptr [edi + 0x226] */ { const u32 m_ = (u32)(edi + 0x226u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10202d9d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d9f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202da0 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10202da5u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10202da0u); RETCHK(0x10202da5u, 0x10202da0u); LOADALL;
  /* 10202da5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202da8 je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202daa mov eax, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); eax = (u32)(M32(m_)); }
  /* 10202db0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202db1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202db3 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202db8u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202db3u); RETCHK(0x10202db8u, 0x10202db3u); LOADALL;
  /* 10202db8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202dbb je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202dbd mov ecx, dword ptr [edi + 0x22c] */ { const u32 m_ = (u32)(edi + 0x22cu); ecx = (u32)(M32(m_)); }
  /* 10202dc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202dc4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202dc6 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202dcbu; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202dc6u); RETCHK(0x10202dcbu, 0x10202dc6u); LOADALL;
  /* 10202dcb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202dce jne 0x10202dd8 */ if (!ZF_) goto L_10202dd8;
L_10202dd0:;
  /* 10202dd0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202dd1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202dd4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202dd5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202dd8:;
  /* 10202dd8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202dda call 0x10204b60 */ esp -= 4; M32(esp) = 0x10202ddfu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10202ddau); RETCHK(0x10202ddfu, 0x10202ddau); LOADALL;
  /* 10202ddf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202de0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202de1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202df0(CPU *c) {
  NATIVE_HOOK(0x10202df0u) REGS; LOADALL;
L_10202df0:;
  /* 10202df0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202df1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202df2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202df6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202dfc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202dfd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202dff call 0x10204c90 */ esp -= 4; M32(esp) = 0x10202e04u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10202dffu); RETCHK(0x10202e04u, 0x10202dffu); LOADALL;
  /* 10202e04 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e07 jne 0x10202e11 */ if (!ZF_) goto L_10202e11;
L_10202e09:;
  /* 10202e09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202e0a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202e0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202e0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202e11:;
  /* 10202e11 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202e13 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10202e16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202e17 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e19 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202e1eu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202e19u); RETCHK(0x10202e1eu, 0x10202e19u); LOADALL;
  /* 10202e1e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e21 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e23 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10202e28 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10202e2b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202e2c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e2e call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202e33u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202e2eu); RETCHK(0x10202e33u, 0x10202e2eu); LOADALL;
  /* 10202e33 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e36 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e38 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10202e3d lea edx, [edi + 0x124] */ edx = (u32)((u32)(edi + 0x124u));
  /* 10202e43 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202e44 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e46 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202e4bu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202e46u); RETCHK(0x10202e4bu, 0x10202e46u); LOADALL;
  /* 10202e4b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e4e je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e50 lea eax, [edi + 0x224] */ eax = (u32)((u32)(edi + 0x224u));
  /* 10202e56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202e57 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e59 call 0x10204c10 */ esp -= 4; M32(esp) = 0x10202e5eu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10202e59u); RETCHK(0x10202e5eu, 0x10202e59u); LOADALL;
  /* 10202e5e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e61 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e63 lea ecx, [edi + 0x226] */ ecx = (u32)((u32)(edi + 0x226u));
  /* 10202e69 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202e6a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e6c call 0x10204c10 */ esp -= 4; M32(esp) = 0x10202e71u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10202e6cu); RETCHK(0x10202e71u, 0x10202e6cu); LOADALL;
  /* 10202e71 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e74 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e76 lea edx, [edi + 0x228] */ edx = (u32)((u32)(edi + 0x228u));
  /* 10202e7c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202e7d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e7f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10202e84u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10202e7fu); RETCHK(0x10202e84u, 0x10202e7fu); LOADALL;
  /* 10202e84 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e87 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e89 add edi, 0x22c */ { u32 a_ = edi, b_ = 0x22cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10202e8f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202e90 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e92 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10202e97u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10202e92u); RETCHK(0x10202e97u, 0x10202e92u); LOADALL;
  /* 10202e97 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10202e98 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10202e9a sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10202e9c and eax, 0x231 */ { u32 a_ = eax, b_ = 0x231u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202ea1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ea2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10202ea3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ea4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202eb0(CPU *c) {
  NATIVE_HOOK(0x10202eb0u) REGS; LOADALL;
L_10202eb0:;
  /* 10202eb0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202eb1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202eb2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202eb6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10202eb8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202ebe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202ebf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202ec1 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202ec6u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202ec1u); RETCHK(0x10202ec6u, 0x10202ec1u); LOADALL;
  /* 10202ec6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202ec9 je 0x10202edd */ if (ZF_) goto L_10202edd;
  /* 10202ecb push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202ecd add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10202ed0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202ed1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202ed3 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202ed8u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202ed3u); RETCHK(0x10202ed8u, 0x10202ed3u); LOADALL;
  /* 10202ed8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202edb jne 0x10202ee5 */ if (!ZF_) goto L_10202ee5;
L_10202edd:;
  /* 10202edd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ede or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202ee1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ee2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202ee5:;
  /* 10202ee5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202ee7 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10202eecu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10202ee7u); RETCHK(0x10202eecu, 0x10202ee7u); LOADALL;
  /* 10202eec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202eed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202eee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202f00(CPU *c) {
  NATIVE_HOOK(0x10202f00u) REGS; LOADALL;
L_10202f00:;
  /* 10202f00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202f01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202f02 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202f06 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10202f08 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202f0e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202f0f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f11 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202f16u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202f11u); RETCHK(0x10202f16u, 0x10202f11u); LOADALL;
  /* 10202f16 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f19 je 0x10202f52 */ if (ZF_) goto L_10202f52;
  /* 10202f1b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202f1d lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10202f20 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202f21 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f23 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202f28u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202f23u); RETCHK(0x10202f28u, 0x10202f23u); LOADALL;
  /* 10202f28 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f2b je 0x10202f52 */ if (ZF_) goto L_10202f52;
  /* 10202f2d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202f2f lea edx, [edi + 0x24] */ edx = (u32)((u32)(edi + 0x24u));
  /* 10202f32 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202f33 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f35 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202f3au; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202f35u); RETCHK(0x10202f3au, 0x10202f35u); LOADALL;
  /* 10202f3a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f3d je 0x10202f52 */ if (ZF_) goto L_10202f52;
  /* 10202f3f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202f41 mov ax, word ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10202f45 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202f48 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10202f4du; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10202f48u); RETCHK(0x10202f4du, 0x10202f48u); LOADALL;
  /* 10202f4d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f50 jne 0x10202f5a */ if (!ZF_) goto L_10202f5a;
L_10202f52:;
  /* 10202f52 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202f53 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202f56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202f57 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202f5a:;
  /* 10202f5a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f5c call 0x10204b60 */ esp -= 4; M32(esp) = 0x10202f61u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10202f5cu); RETCHK(0x10202f61u, 0x10202f5cu); LOADALL;
  /* 10202f61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202f62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202f63 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202f70(CPU *c) {
  NATIVE_HOOK(0x10202f70u) REGS; LOADALL;
L_10202f70:;
  /* 10202f70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202f71 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202f72 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202f76 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202f7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202f7d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f7f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10202f84u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10202f7fu); RETCHK(0x10202f84u, 0x10202f7fu); LOADALL;
  /* 10202f84 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f87 jne 0x10202f91 */ if (!ZF_) goto L_10202f91;
L_10202f89:;
  /* 10202f89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202f8a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202f8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202f8e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202f91:;
  /* 10202f91 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202f93 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10202f96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202f97 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f99 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202f9eu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202f99u); RETCHK(0x10202f9eu, 0x10202f99u); LOADALL;
  /* 10202f9e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202fa1 je 0x10202f89 */ if (ZF_) goto L_10202f89;
  /* 10202fa3 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202fa5 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10202fa8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202fa9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202fab call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202fb0u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202fabu); RETCHK(0x10202fb0u, 0x10202fabu); LOADALL;
  /* 10202fb0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202fb3 je 0x10202f89 */ if (ZF_) goto L_10202f89;
  /* 10202fb5 add edi, 0x44 */ { u32 a_ = edi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10202fb8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202fb9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202fbb call 0x10204c10 */ esp -= 4; M32(esp) = 0x10202fc0u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10202fbbu); RETCHK(0x10202fc0u, 0x10202fbbu); LOADALL;
  /* 10202fc0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10202fc1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10202fc3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10202fc5 and eax, 0x49 */ { u32 a_ = eax, b_ = 0x49u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202fc8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202fc9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10202fca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202fcb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202fd0(CPU *c) {
  NATIVE_HOOK(0x10202fd0u) REGS; LOADALL;
L_10202fd0:;
  /* 10202fd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202fd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202fd2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202fd6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202fdc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202fde push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202fdf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202fe1 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202fe6u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202fe1u); RETCHK(0x10202fe6u, 0x10202fe1u); LOADALL;
  /* 10202fe6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202fe9 je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10202feb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202fed mov ax, word ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10202ff1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202ff3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202ff4 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10202ff9u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10202ff4u); RETCHK(0x10202ff9u, 0x10202ff4u); LOADALL;
  /* 10202ff9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202ffc je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10202ffe xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203000 mov cx, word ptr [edi + 0x22] */ { const u32 m_ = (u32)(edi + 0x22u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203004 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203005 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203007 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x1020300cu; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10203007u); RETCHK(0x1020300cu, 0x10203007u); LOADALL;
  /* 1020300c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020300f je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10203011 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 10203014 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203015 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203017 call 0x10204c50 */ esp -= 4; M32(esp) = 0x1020301cu; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203017u); RETCHK(0x1020301cu, 0x10203017u); LOADALL;
  /* 1020301c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020301f je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10203021 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203023 mov al, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203026 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203028 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203029 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020302eu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203029u); RETCHK(0x1020302eu, 0x10203029u); LOADALL;
  /* 1020302e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203031 je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10203033 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203035 mov cl, byte ptr [edi + 0x29] */ { const u32 m_ = (u32)(edi + 0x29u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203038 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203039 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020303b call 0x10204b70 */ esp -= 4; M32(esp) = 0x10203040u; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x1020303bu); RETCHK(0x10203040u, 0x1020303bu); LOADALL;
  /* 10203040 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203043 je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10203045 mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10203048 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203049 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020304b call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203050u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x1020304bu); RETCHK(0x10203050u, 0x1020304bu); LOADALL;
  /* 10203050 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203053 jne 0x1020305d */ if (!ZF_) goto L_1020305d;
L_10203055:;
  /* 10203055 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203056 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203059 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020305a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020305d:;
  /* 1020305d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020305f call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203064u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020305fu); RETCHK(0x10203064u, 0x1020305fu); LOADALL;
  /* 10203064 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203065 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203066 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203070(CPU *c) {
  NATIVE_HOOK(0x10203070u) REGS; LOADALL;
L_10203070:;
  /* 10203070 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203071 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203072 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203076 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020307c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020307e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020307f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203081 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203086u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203081u); RETCHK(0x10203086u, 0x10203081u); LOADALL;
  /* 10203086 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203089 jne 0x10203093 */ if (!ZF_) goto L_10203093;
L_1020308b:;
  /* 1020308b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020308c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020308f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203090 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203093:;
  /* 10203093 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10203096 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203097 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203099 call 0x10204c10 */ esp -= 4; M32(esp) = 0x1020309eu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10203099u); RETCHK(0x1020309eu, 0x10203099u); LOADALL;
  /* 1020309e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030a1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030a3 lea ecx, [edi + 0x22] */ ecx = (u32)((u32)(edi + 0x22u));
  /* 102030a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102030a7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030a9 call 0x10204c10 */ esp -= 4; M32(esp) = 0x102030aeu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x102030a9u); RETCHK(0x102030aeu, 0x102030a9u); LOADALL;
  /* 102030ae cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030b1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030b3 lea edx, [edi + 0x24] */ edx = (u32)((u32)(edi + 0x24u));
  /* 102030b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102030b7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030b9 call 0x10204c90 */ esp -= 4; M32(esp) = 0x102030beu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x102030b9u); RETCHK(0x102030beu, 0x102030b9u); LOADALL;
  /* 102030be cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030c1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030c3 lea eax, [edi + 0x28] */ eax = (u32)((u32)(edi + 0x28u));
  /* 102030c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102030c7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030c9 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102030ceu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102030c9u); RETCHK(0x102030ceu, 0x102030c9u); LOADALL;
  /* 102030ce cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030d1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030d3 lea ecx, [edi + 0x29] */ ecx = (u32)((u32)(edi + 0x29u));
  /* 102030d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102030d7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030d9 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102030deu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102030d9u); RETCHK(0x102030deu, 0x102030d9u); LOADALL;
  /* 102030de cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030e1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030e3 add edi, 0x2c */ { u32 a_ = edi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102030e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102030e7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030e9 call 0x10204c90 */ esp -= 4; M32(esp) = 0x102030eeu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x102030e9u); RETCHK(0x102030eeu, 0x102030e9u); LOADALL;
  /* 102030ee inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102030ef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102030f1 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102030f3 and eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102030f6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102030f7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102030f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102030f9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203100(CPU *c) {
  NATIVE_HOOK(0x10203100u) REGS; LOADALL;
L_10203100:;
  /* 10203100 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203101 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203102 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203103 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10203107 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203109 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1020310b lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10203111 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203112 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203114 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203119u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203114u); RETCHK(0x10203119u, 0x10203114u); LOADALL;
  /* 10203119 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020311c je 0x10203152 */ if (ZF_) goto L_10203152;
  /* 1020311e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203120 mov cl, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203123 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203124 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203126 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020312bu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203126u); RETCHK(0x1020312bu, 0x10203126u); LOADALL;
  /* 1020312b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020312e je 0x10203152 */ if (ZF_) goto L_10203152;
  /* 10203130 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10203132 mov dl, byte ptr [edi + 5] */ { const u32 m_ = (u32)(edi + 0x5u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203135 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203137 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203138 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020313du; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203138u); RETCHK(0x1020313du, 0x10203138u); LOADALL;
  /* 1020313d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203140 je 0x10203152 */ if (ZF_) goto L_10203152;
  /* 10203142 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203145 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203146 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10203148 call 0x10202d20 */ esp -= 4; M32(esp) = 0x1020314du; SAVEALL; F_10202d20(c); ABI_CHECK(0x10202d20u, 0x10203148u); RETCHK(0x1020314du, 0x10203148u); LOADALL;
  /* 1020314d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203150 jne 0x1020315b */ if (!ZF_) goto L_1020315b;
L_10203152:;
  /* 10203152 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203153 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203154 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203157 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203158 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020315b:;
  /* 1020315b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020315d call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203162u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020315du); RETCHK(0x10203162u, 0x1020315du); LOADALL;
  /* 10203162 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203163 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203164 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203165 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203170(CPU *c) {
  NATIVE_HOOK(0x10203170u) REGS; LOADALL;
L_10203170:;
  /* 10203170 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203171 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203172 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10203174 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203175 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10203179 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 1020317f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203180 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203182 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203187u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203182u); RETCHK(0x10203187u, 0x10203182u); LOADALL;
  /* 10203187 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020318a jne 0x10203195 */ if (!ZF_) goto L_10203195;
L_1020318c:;
  /* 1020318c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020318d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020318e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203191 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203192 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203195:;
  /* 10203195 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10203198 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203199 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020319b call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102031a0u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x1020319bu); RETCHK(0x102031a0u, 0x1020319bu); LOADALL;
  /* 102031a0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102031a3 je 0x1020318c */ if (ZF_) goto L_1020318c;
  /* 102031a5 lea ecx, [edi + 5] */ ecx = (u32)((u32)(edi + 0x5u));
  /* 102031a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102031a9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102031ab call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102031b0u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102031abu); RETCHK(0x102031b0u, 0x102031abu); LOADALL;
  /* 102031b0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102031b3 je 0x1020318c */ if (ZF_) goto L_1020318c;
  /* 102031b5 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102031b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102031b9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 102031bb call 0x10202df0 */ esp -= 4; M32(esp) = 0x102031c0u; SAVEALL; F_10202df0(c); ABI_CHECK(0x10202df0u, 0x102031bbu); RETCHK(0x102031c0u, 0x102031bbu); LOADALL;
  /* 102031c0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102031c1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102031c3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102031c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102031c6 and eax, 0x239 */ { u32 a_ = eax, b_ = 0x239u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102031cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102031cc dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102031cd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102031ce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102031e0(CPU *c) {
  NATIVE_HOOK(0x102031e0u) REGS; LOADALL;
L_102031e0:;
  /* 102031e0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102031e4 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102031e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102031e7 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102031ed call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102031f2u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102031edu); RETCHK(0x102031f2u, 0x102031edu); LOADALL;
  /* 102031f2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102031f3 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102031f5 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102031f7 and eax, 0x21 */ { u32 a_ = eax, b_ = 0x21u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102031fa dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102031fb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203200(CPU *c) {
  NATIVE_HOOK(0x10203200u) REGS; LOADALL;
L_10203200:;
  /* 10203200 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203201 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203202 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203203 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10203207 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203209 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1020320b lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10203211 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203212 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203214 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203219u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203214u); RETCHK(0x10203219u, 0x10203214u); LOADALL;
  /* 10203219 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020321c je 0x10203264 */ if (ZF_) goto L_10203264;
  /* 1020321e push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203220 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10203223 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203224 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203226 call 0x10204d80 */ esp -= 4; M32(esp) = 0x1020322bu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203226u); RETCHK(0x1020322bu, 0x10203226u); LOADALL;
  /* 1020322b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020322e je 0x10203264 */ if (ZF_) goto L_10203264;
  /* 10203230 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10203232 mov dl, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203235 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203237 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203238 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020323du; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203238u); RETCHK(0x1020323du, 0x10203238u); LOADALL;
  /* 1020323d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203240 je 0x10203264 */ if (ZF_) goto L_10203264;
  /* 10203242 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203244 mov al, byte ptr [edi + 0x25] */ { const u32 m_ = (u32)(edi + 0x25u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203247 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203249 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020324a call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020324fu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x1020324au); RETCHK(0x1020324fu, 0x1020324au); LOADALL;
  /* 1020324f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203252 je 0x10203264 */ if (ZF_) goto L_10203264;
  /* 10203254 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203257 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203258 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1020325a call 0x10202eb0 */ esp -= 4; M32(esp) = 0x1020325fu; SAVEALL; F_10202eb0(c); ABI_CHECK(0x10202eb0u, 0x1020325au); RETCHK(0x1020325fu, 0x1020325au); LOADALL;
  /* 1020325f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203262 jne 0x1020326d */ if (!ZF_) goto L_1020326d;
L_10203264:;
  /* 10203264 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203265 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203266 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203269 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020326a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020326d:;
  /* 1020326d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020326f call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203274u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020326fu); RETCHK(0x10203274u, 0x1020326fu); LOADALL;
  /* 10203274 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203275 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203276 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203277 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203280(CPU *c) {
  NATIVE_HOOK(0x10203280u) REGS; LOADALL;
L_10203280:;
  /* 10203280 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203281 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203282 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10203284 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203285 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10203289 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 1020328f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203290 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203292 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203297u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203292u); RETCHK(0x10203297u, 0x10203292u); LOADALL;
  /* 10203297 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020329a jne 0x102032a5 */ if (!ZF_) goto L_102032a5;
L_1020329c:;
  /* 1020329c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020329d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020329e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102032a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102032a2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102032a5:;
  /* 102032a5 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102032a7 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 102032aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102032ab mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102032ad call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102032b2u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102032adu); RETCHK(0x102032b2u, 0x102032adu); LOADALL;
  /* 102032b2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102032b5 je 0x1020329c */ if (ZF_) goto L_1020329c;
  /* 102032b7 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 102032ba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102032bb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102032bd call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102032c2u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102032bdu); RETCHK(0x102032c2u, 0x102032bdu); LOADALL;
  /* 102032c2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102032c5 je 0x1020329c */ if (ZF_) goto L_1020329c;
  /* 102032c7 lea edx, [edi + 0x25] */ edx = (u32)((u32)(edi + 0x25u));
  /* 102032ca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102032cb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102032cd call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102032d2u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102032cdu); RETCHK(0x102032d2u, 0x102032cdu); LOADALL;
  /* 102032d2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102032d5 je 0x1020329c */ if (ZF_) goto L_1020329c;
  /* 102032d7 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102032da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102032db mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 102032dd call 0x10203a60 */ esp -= 4; M32(esp) = 0x102032e2u; SAVEALL; F_10203a60(c); ABI_CHECK(0x10203a60u, 0x102032ddu); RETCHK(0x102032e2u, 0x102032ddu); LOADALL;
  /* 102032e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102032e3 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102032e5 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102032e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102032e8 and eax, 0x4d */ { u32 a_ = eax, b_ = 0x4du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102032eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102032ec dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102032ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102032ee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203300(CPU *c) {
  NATIVE_HOOK(0x10203300u) REGS; LOADALL;
L_10203300:;
  /* 10203300 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203301 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203302 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203306 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020330c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020330e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020330f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203311 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203316u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203311u); RETCHK(0x10203316u, 0x10203311u); LOADALL;
  /* 10203316 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203319 je 0x10203354 */ if (ZF_) goto L_10203354;
  /* 1020331b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020331d lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10203320 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203321 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203323 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203328u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203323u); RETCHK(0x10203328u, 0x10203323u); LOADALL;
  /* 10203328 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020332b je 0x10203354 */ if (ZF_) goto L_10203354;
  /* 1020332d push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 1020332f lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 10203332 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203333 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203335 call 0x10204d80 */ esp -= 4; M32(esp) = 0x1020333au; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203335u); RETCHK(0x1020333au, 0x10203335u); LOADALL;
  /* 1020333a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020333d je 0x10203354 */ if (ZF_) goto L_10203354;
  /* 1020333f push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10203344 add edi, 0x50 */ { u32 a_ = edi, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203347 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203348 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020334a call 0x10204d80 */ esp -= 4; M32(esp) = 0x1020334fu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x1020334au); RETCHK(0x1020334fu, 0x1020334au); LOADALL;
  /* 1020334f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203352 jne 0x1020335c */ if (!ZF_) goto L_1020335c;
L_10203354:;
  /* 10203354 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203355 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203358 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203359 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020335c:;
  /* 1020335c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020335e call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203363u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020335eu); RETCHK(0x10203363u, 0x1020335eu); LOADALL;
  /* 10203363 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203364 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203365 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203370(CPU *c) {
  NATIVE_HOOK(0x10203370u) REGS; LOADALL;
L_10203370:;
  /* 10203370 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203371 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203372 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203376 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020337c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020337e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020337f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203381 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203386u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203381u); RETCHK(0x10203386u, 0x10203381u); LOADALL;
  /* 10203386 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203389 jne 0x10203393 */ if (!ZF_) goto L_10203393;
L_1020338b:;
  /* 1020338b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020338c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020338f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203390 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203393:;
  /* 10203393 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203395 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10203398 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203399 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020339b call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102033a0u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x1020339bu); RETCHK(0x102033a0u, 0x1020339bu); LOADALL;
  /* 102033a0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102033a3 je 0x1020338b */ if (ZF_) goto L_1020338b;
  /* 102033a5 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 102033a7 lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 102033aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102033ab mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102033ad call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102033b2u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102033adu); RETCHK(0x102033b2u, 0x102033adu); LOADALL;
  /* 102033b2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102033b5 je 0x1020338b */ if (ZF_) goto L_1020338b;
  /* 102033b7 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 102033bc add edi, 0x50 */ { u32 a_ = edi, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102033bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102033c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102033c2 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102033c7u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102033c2u); RETCHK(0x102033c7u, 0x102033c2u); LOADALL;
  /* 102033c7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102033c8 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102033ca sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102033cc and eax, 0x151 */ { u32 a_ = eax, b_ = 0x151u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102033d1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102033d2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102033d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102033d4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102033e0(CPU *c) {
  NATIVE_HOOK(0x102033e0u) REGS; LOADALL;
L_102033e0:;
  /* 102033e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102033e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102033e2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102033e6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 102033e8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102033ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102033ef mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102033f1 call 0x10204c50 */ esp -= 4; M32(esp) = 0x102033f6u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x102033f1u); RETCHK(0x102033f6u, 0x102033f1u); LOADALL;
  /* 102033f6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102033f9 je 0x1020340b */ if (ZF_) goto L_1020340b;
  /* 102033fb mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102033fe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102033ff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203401 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203406u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203401u); RETCHK(0x10203406u, 0x10203401u); LOADALL;
  /* 10203406 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203409 jne 0x10203413 */ if (!ZF_) goto L_10203413;
L_1020340b:;
  /* 1020340b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020340c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020340f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203410 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203413:;
  /* 10203413 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203415 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020341au; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203415u); RETCHK(0x1020341au, 0x10203415u); LOADALL;
  /* 1020341a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020341b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020341c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203420(CPU *c) {
  NATIVE_HOOK(0x10203420u) REGS; LOADALL;
L_10203420:;
  /* 10203420 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203421 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203422 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203426 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020342c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020342d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020342f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203434u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x1020342fu); RETCHK(0x10203434u, 0x1020342fu); LOADALL;
  /* 10203434 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203437 jne 0x10203440 */ if (!ZF_) goto L_10203440;
  /* 10203439 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020343a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020343c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020343d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203440:;
  /* 10203440 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203443 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203444 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203446 call 0x10204c90 */ esp -= 4; M32(esp) = 0x1020344bu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203446u); RETCHK(0x1020344bu, 0x10203446u); LOADALL;
  /* 1020344b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020344c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1020344e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203450 and eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203453 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203454 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203455 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203456 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203460(CPU *c) {
  NATIVE_HOOK(0x10203460u) REGS; LOADALL;
L_10203460:;
  /* 10203460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203461 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203462 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203466 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203468 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020346a lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203470 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203472 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203473 call 0x10204b70 */ esp -= 4; M32(esp) = 0x10203478u; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203473u); RETCHK(0x10203478u, 0x10203473u); LOADALL;
  /* 10203478 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020347b je 0x1020348d */ if (ZF_) goto L_1020348d;
  /* 1020347d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020347f inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203480 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203481 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203483 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203488u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203483u); RETCHK(0x10203488u, 0x10203483u); LOADALL;
  /* 10203488 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020348b jne 0x10203495 */ if (!ZF_) goto L_10203495;
L_1020348d:;
  /* 1020348d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020348e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203491 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203492 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203495:;
  /* 10203495 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203497 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020349cu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203497u); RETCHK(0x1020349cu, 0x10203497u); LOADALL;
  /* 1020349c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020349d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020349e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102034b0(CPU *c) {
  NATIVE_HOOK(0x102034b0u) REGS; LOADALL;
L_102034b0:;
  /* 102034b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102034b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102034b2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102034b6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102034bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102034bd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102034bf call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102034c4u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102034bfu); RETCHK(0x102034c4u, 0x102034bfu); LOADALL;
  /* 102034c4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102034c7 jne 0x102034d0 */ if (!ZF_) goto L_102034d0;
  /* 102034c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102034ca or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102034cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102034cd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102034d0:;
  /* 102034d0 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102034d2 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102034d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102034d4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102034d6 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102034dbu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102034d6u); RETCHK(0x102034dbu, 0x102034d6u); LOADALL;
  /* 102034db inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102034dc neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102034de sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102034e0 and eax, 0x22 */ { u32 a_ = eax, b_ = 0x22u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102034e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102034e4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102034e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102034e6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102034f0(CPU *c) {
  NATIVE_HOOK(0x102034f0u) REGS; LOADALL;
L_102034f0:;
  /* 102034f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102034f1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102034f2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102034f3 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 102034f7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102034f9 mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102034fc mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 102034fe lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 10203504 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10203508 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203509 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020350eu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203509u); RETCHK(0x1020350eu, 0x10203509u); LOADALL;
  /* 1020350e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203511 jne 0x1020351b */ if (!ZF_) goto L_1020351b;
  /* 10203513 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203514 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203516 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203517 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10203518 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020351b:;
  /* 1020351b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020351c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020351d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1020351f lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10203522:;
  /* 10203522 movzx ecx, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M8(m_)); }
  /* 10203526 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203528 jge 0x10203540 */ if (!LT_) goto L_10203540;
  /* 1020352a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020352b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1020352d call 0x10202f00 */ esp -= 4; M32(esp) = 0x10203532u; SAVEALL; F_10202f00(c); ABI_CHECK(0x10202f00u, 0x1020352du); RETCHK(0x10203532u, 0x1020352du); LOADALL;
  /* 10203532 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203535 je 0x10203551 */ if (ZF_) goto L_10203551;
  /* 10203537 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203538 add edi, 0x48 */ { u32 a_ = edi, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020353b cmp esi, 0xa */ { u32 a_ = esi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020353e jl 0x10203522 */ if (LT_) goto L_10203522;
L_10203540:;
  /* 10203540 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10203544 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203549u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203544u); RETCHK(0x10203549u, 0x10203544u); LOADALL;
  /* 10203549 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020354a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020354b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020354c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020354d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020354e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203551:;
  /* 10203551 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203552 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203553 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203554 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203557 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203558 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10203559 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203560(CPU *c) {
  NATIVE_HOOK(0x10203560u) REGS; LOADALL;
L_10203560:;
  /* 10203560 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203561 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203562 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10203566 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10203568 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203569 lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 1020356f call 0x10204ba0 */ esp -= 4; M32(esp) = 0x10203574u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x1020356fu); RETCHK(0x10203574u, 0x1020356fu); LOADALL;
  /* 10203574 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203577 jne 0x10203580 */ if (!ZF_) goto L_10203580;
  /* 10203579 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020357a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020357c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020357d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203580:;
  /* 10203580 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203581 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203582 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10203584 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10203587:;
  /* 10203587 movzx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M8(m_)); }
  /* 1020358b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020358d jge 0x102035a5 */ if (!LT_) goto L_102035a5;
  /* 1020358f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203590 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10203592 call 0x10202f70 */ esp -= 4; M32(esp) = 0x10203597u; SAVEALL; F_10202f70(c); ABI_CHECK(0x10202f70u, 0x10203592u); RETCHK(0x10203597u, 0x10203592u); LOADALL;
  /* 10203597 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020359a je 0x102035b1 */ if (ZF_) goto L_102035b1;
  /* 1020359c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020359d add edi, 0x48 */ { u32 a_ = edi, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102035a0 cmp esi, 0xa */ { u32 a_ = esi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102035a3 jl 0x10203587 */ if (LT_) goto L_10203587;
L_102035a5:;
  /* 102035a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102035a6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102035a7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102035a8 mov eax, 0x2d4 */ { eax = (u32)(0x2d4u); }
  /* 102035ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102035ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102035b1:;
  /* 102035b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102035b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102035b3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102035b4 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102035b7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102035b8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102035c0(CPU *c) {
  NATIVE_HOOK(0x102035c0u) REGS; LOADALL;
L_102035c0:;
  /* 102035c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102035c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102035c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102035c6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102035cc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102035ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102035cf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102035d1 call 0x10204d80 */ esp -= 4; M32(esp) = 0x102035d6u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x102035d1u); RETCHK(0x102035d6u, 0x102035d1u); LOADALL;
  /* 102035d6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102035d9 je 0x102035eb */ if (ZF_) goto L_102035eb;
  /* 102035db mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 102035de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102035df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102035e1 call 0x10204c50 */ esp -= 4; M32(esp) = 0x102035e6u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x102035e1u); RETCHK(0x102035e6u, 0x102035e1u); LOADALL;
  /* 102035e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102035e9 jne 0x102035f3 */ if (!ZF_) goto L_102035f3;
L_102035eb:;
  /* 102035eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102035ec or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102035ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102035f0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102035f3:;
  /* 102035f3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102035f5 call 0x10204b60 */ esp -= 4; M32(esp) = 0x102035fau; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x102035f5u); RETCHK(0x102035fau, 0x102035f5u); LOADALL;
  /* 102035fa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102035fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102035fc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203600(CPU *c) {
  NATIVE_HOOK(0x10203600u) REGS; LOADALL;
L_10203600:;
  /* 10203600 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203601 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203602 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203606 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020360c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020360e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020360f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203611 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203616u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203611u); RETCHK(0x10203616u, 0x10203611u); LOADALL;
  /* 10203616 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203619 jne 0x10203622 */ if (!ZF_) goto L_10203622;
  /* 1020361b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020361c or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020361e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020361f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203622:;
  /* 10203622 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203625 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203626 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203628 call 0x10204c90 */ esp -= 4; M32(esp) = 0x1020362du; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203628u); RETCHK(0x1020362du, 0x10203628u); LOADALL;
  /* 1020362d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020362e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203630 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203632 and eax, 0x25 */ { u32 a_ = eax, b_ = 0x25u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203635 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203636 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203637 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203638 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203640(CPU *c) {
  NATIVE_HOOK(0x10203640u) REGS; LOADALL;
L_10203640:;
  /* 10203640 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203644 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203645 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020364b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1020364d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020364e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203650 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203655u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203650u); RETCHK(0x10203655u, 0x10203650u); LOADALL;
  /* 10203655 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203658 jne 0x10203660 */ if (!ZF_) goto L_10203660;
  /* 1020365a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020365c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020365d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203660:;
  /* 10203660 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203662 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203667u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203662u); RETCHK(0x10203667u, 0x10203662u); LOADALL;
  /* 10203667 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203668 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203670(CPU *c) {
  NATIVE_HOOK(0x10203670u) REGS; LOADALL;
L_10203670:;
  /* 10203670 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203674 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203675 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203676 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10203678 call 0x10202fd0 */ esp -= 4; M32(esp) = 0x1020367du; SAVEALL; F_10202fd0(c); ABI_CHECK(0x10202fd0u, 0x10203678u); RETCHK(0x1020367du, 0x10203678u); LOADALL;
  /* 1020367d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203680 jne 0x10203688 */ if (!ZF_) goto L_10203688;
  /* 10203682 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203684 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203685 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203688:;
  /* 10203688 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 1020368e call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203693u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020368eu); RETCHK(0x10203693u, 0x1020368eu); LOADALL;
  /* 10203693 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203694 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102036a0(CPU *c) {
  NATIVE_HOOK(0x102036a0u) REGS; LOADALL;
L_102036a0:;
  /* 102036a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102036a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102036a5 call 0x10203070 */ esp -= 4; M32(esp) = 0x102036aau; SAVEALL; F_10203070(c); ABI_CHECK(0x10203070u, 0x102036a5u); RETCHK(0x102036aau, 0x102036a5u); LOADALL;
  /* 102036aa inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102036ab neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102036ad sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102036af and eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102036b2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102036b3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102036c0(CPU *c) {
  NATIVE_HOOK(0x102036c0u) REGS; LOADALL;
L_102036c0:;
  /* 102036c0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 102036c5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102036d0(CPU *c) {
  NATIVE_HOOK(0x102036d0u) REGS; LOADALL;
L_102036d0:;
  /* 102036d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102036d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102036d2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102036d6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102036dc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102036de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102036df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102036e1 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102036e6u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102036e1u); RETCHK(0x102036e6u, 0x102036e1u); LOADALL;
  /* 102036e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102036e9 jne 0x102036f2 */ if (!ZF_) goto L_102036f2;
  /* 102036eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102036ec or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102036ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102036ef ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102036f2:;
  /* 102036f2 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102036f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102036f6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102036f8 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102036fdu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102036f8u); RETCHK(0x102036fdu, 0x102036f8u); LOADALL;
  /* 102036fd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102036fe neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203700 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203702 and eax, 0x22 */ { u32 a_ = eax, b_ = 0x22u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203705 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203706 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203707 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203708 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203710(CPU *c) {
  NATIVE_HOOK(0x10203710u) REGS; LOADALL;
L_10203710:;
  /* 10203710 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203711 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203712 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203716 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020371c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020371d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020371f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203724u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x1020371fu); RETCHK(0x10203724u, 0x1020371fu); LOADALL;
  /* 10203724 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203727 jne 0x10203731 */ if (!ZF_) goto L_10203731;
L_10203729:;
  /* 10203729 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020372a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020372d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020372e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203731:;
  /* 10203731 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203733 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10203736 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203737 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203739 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x1020373eu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203739u); RETCHK(0x1020373eu, 0x10203739u); LOADALL;
  /* 1020373e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203741 je 0x10203729 */ if (ZF_) goto L_10203729;
  /* 10203743 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203746 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203747 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203749 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x1020374eu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x10203749u); RETCHK(0x1020374eu, 0x10203749u); LOADALL;
  /* 1020374e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020374f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203751 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203753 and eax, 0x29 */ { u32 a_ = eax, b_ = 0x29u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203756 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203757 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203758 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203759 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203760(CPU *c) {
  NATIVE_HOOK(0x10203760u) REGS; LOADALL;
L_10203760:;
  /* 10203760 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203761 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203762 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10203766 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10203768 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203769 lea ebp, [ecx + 0x10000] */ ebp = (u32)((u32)(ecx + 0x10000u));
  /* 1020376f mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10203773 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203774 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10203776 call 0x10204c50 */ esp -= 4; M32(esp) = 0x1020377bu; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203776u); RETCHK(0x1020377bu, 0x10203776u); LOADALL;
  /* 1020377b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020377e je 0x102037a6 */ if (ZF_) goto L_102037a6;
  /* 10203780 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203782 mov cx, word ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203786 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203787 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10203789 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x1020378eu; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10203789u); RETCHK(0x1020378eu, 0x10203789u); LOADALL;
  /* 1020378e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203791 je 0x102037a6 */ if (ZF_) goto L_102037a6;
  /* 10203793 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10203795 mov dx, word ptr [ebx + 6] */ { const u32 m_ = (u32)(ebx + 0x6u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203799 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1020379b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020379c call 0x10204bd0 */ esp -= 4; M32(esp) = 0x102037a1u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x1020379cu); RETCHK(0x102037a1u, 0x1020379cu); LOADALL;
  /* 102037a1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102037a4 jne 0x102037af */ if (!ZF_) goto L_102037af;
L_102037a6:;
  /* 102037a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102037a7 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102037aa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102037ab pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102037ac ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102037af:;
  /* 102037af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102037b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102037b1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102037b3 lea edi, [ebx + 8] */ edi = (u32)((u32)(ebx + 0x8u));
L_102037b6:;
  /* 102037b6 movzx eax, word ptr [ebx + 6] */ { const u32 m_ = (u32)(ebx + 0x6u); eax = (u32)(M16(m_)); }
  /* 102037ba cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102037bc jge 0x102037d6 */ if (!LT_) goto L_102037d6;
  /* 102037be mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 102037c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102037c3 call 0x10202fd0 */ esp -= 4; M32(esp) = 0x102037c8u; SAVEALL; F_10202fd0(c); ABI_CHECK(0x10202fd0u, 0x102037c3u); RETCHK(0x102037c8u, 0x102037c3u); LOADALL;
  /* 102037c8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102037cb je 0x102037e5 */ if (ZF_) goto L_102037e5;
  /* 102037cd inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102037ce add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102037d1 cmp esi, 0x64 */ { u32 a_ = esi, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102037d4 jl 0x102037b6 */ if (LT_) goto L_102037b6;
L_102037d6:;
  /* 102037d6 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 102037d8 call 0x10204b60 */ esp -= 4; M32(esp) = 0x102037ddu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x102037d8u); RETCHK(0x102037ddu, 0x102037d8u); LOADALL;
  /* 102037dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102037de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102037df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102037e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102037e1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102037e2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102037e5:;
  /* 102037e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102037e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102037e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102037e8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102037eb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102037ec pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102037ed ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102037f0(CPU *c) {
  NATIVE_HOOK(0x102037f0u) REGS; LOADALL;
L_102037f0:;
  /* 102037f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102037f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102037f2 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 102037f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102037f5 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 102037f9 lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 102037ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203800 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203802 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203807u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203802u); RETCHK(0x10203807u, 0x10203802u); LOADALL;
  /* 10203807 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020380a je 0x1020381c */ if (ZF_) goto L_1020381c;
  /* 1020380c lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 1020380f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203810 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203812 call 0x10204c10 */ esp -= 4; M32(esp) = 0x10203817u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10203812u); RETCHK(0x10203817u, 0x10203812u); LOADALL;
  /* 10203817 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020381a jne 0x10203825 */ if (!ZF_) goto L_10203825;
L_1020381c:;
  /* 1020381c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020381d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020381e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203821 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203822 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203825:;
  /* 10203825 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203826 lea ebx, [edi + 6] */ ebx = (u32)((u32)(edi + 0x6u));
  /* 10203829 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020382a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020382c call 0x10204c10 */ esp -= 4; M32(esp) = 0x10203831u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x1020382cu); RETCHK(0x10203831u, 0x1020382cu); LOADALL;
  /* 10203831 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203834 jne 0x10203840 */ if (!ZF_) goto L_10203840;
L_10203836:;
  /* 10203836 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203837 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203838 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203839 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020383c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020383d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203840:;
  /* 10203840 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10203842 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10203845:;
  /* 10203845 movzx ecx, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M16(m_)); }
  /* 10203848 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020384a jge 0x10203862 */ if (!LT_) goto L_10203862;
  /* 1020384c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020384d mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1020384f call 0x10203070 */ esp -= 4; M32(esp) = 0x10203854u; SAVEALL; F_10203070(c); ABI_CHECK(0x10203070u, 0x1020384fu); RETCHK(0x10203854u, 0x1020384fu); LOADALL;
  /* 10203854 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203857 je 0x10203836 */ if (ZF_) goto L_10203836;
  /* 10203859 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020385a add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020385d cmp esi, 0x64 */ { u32 a_ = esi, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203860 jl 0x10203845 */ if (LT_) goto L_10203845;
L_10203862:;
  /* 10203862 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203863 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203864 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203865 mov eax, 0x12c8 */ { eax = (u32)(0x12c8u); }
  /* 1020386a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020386b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203870(CPU *c) {
  NATIVE_HOOK(0x10203870u) REGS; LOADALL;
L_10203870:;
  /* 10203870 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203874 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203875 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020387b push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 10203880 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203881 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203883 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203888u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203883u); RETCHK(0x10203888u, 0x10203883u); LOADALL;
  /* 10203888 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020388b jne 0x10203893 */ if (!ZF_) goto L_10203893;
  /* 1020388d or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020388f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203890 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203893:;
  /* 10203893 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203895 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020389au; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203895u); RETCHK(0x1020389au, 0x10203895u); LOADALL;
  /* 1020389a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020389b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102038a0(CPU *c) {
  NATIVE_HOOK(0x102038a0u) REGS; LOADALL;
L_102038a0:;
  /* 102038a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102038a4 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 102038a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102038aa add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102038b0 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102038b5u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102038b0u); RETCHK(0x102038b5u, 0x102038b0u); LOADALL;
  /* 102038b5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102038b6 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102038b8 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102038ba and eax, 0x201 */ { u32 a_ = eax, b_ = 0x201u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102038bf dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102038c0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102038d0(CPU *c) {
  NATIVE_HOOK(0x102038d0u) REGS; LOADALL;
L_102038d0:;
  /* 102038d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102038d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102038d2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102038d6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102038dc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102038de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102038df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102038e1 call 0x10204d80 */ esp -= 4; M32(esp) = 0x102038e6u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x102038e1u); RETCHK(0x102038e6u, 0x102038e1u); LOADALL;
  /* 102038e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102038e9 je 0x10203900 */ if (ZF_) goto L_10203900;
  /* 102038eb push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 102038f0 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102038f3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102038f4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102038f6 call 0x10204d80 */ esp -= 4; M32(esp) = 0x102038fbu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x102038f6u); RETCHK(0x102038fbu, 0x102038f6u); LOADALL;
  /* 102038fb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102038fe jne 0x10203908 */ if (!ZF_) goto L_10203908;
L_10203900:;
  /* 10203900 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203901 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203904 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203905 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203908:;
  /* 10203908 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020390a call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020390fu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020390au); RETCHK(0x1020390fu, 0x1020390au); LOADALL;
  /* 1020390f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203910 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203911 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203920(CPU *c) {
  NATIVE_HOOK(0x10203920u) REGS; LOADALL;
L_10203920:;
  /* 10203920 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203921 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203922 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203926 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020392c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020392e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020392f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203931 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203936u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203931u); RETCHK(0x10203936u, 0x10203931u); LOADALL;
  /* 10203936 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203939 jne 0x10203942 */ if (!ZF_) goto L_10203942;
  /* 1020393b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020393c or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020393e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020393f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203942:;
  /* 10203942 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 10203947 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020394a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020394b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020394d call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203952u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x1020394du); RETCHK(0x10203952u, 0x1020394du); LOADALL;
  /* 10203952 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203953 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203955 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203957 and eax, 0x221 */ { u32 a_ = eax, b_ = 0x221u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020395c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020395d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1020395e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020395f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203970(CPU *c) {
  NATIVE_HOOK(0x10203970u) REGS; LOADALL;
L_10203970:;
  /* 10203970 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203971 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203972 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203976 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203978 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020397e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020397f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203981 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203986u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203981u); RETCHK(0x10203986u, 0x10203981u); LOADALL;
  /* 10203986 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203989 je 0x102039a0 */ if (ZF_) goto L_102039a0;
  /* 1020398b push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10203990 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203993 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203994 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203996 call 0x10204d80 */ esp -= 4; M32(esp) = 0x1020399bu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203996u); RETCHK(0x1020399bu, 0x10203996u); LOADALL;
  /* 1020399b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020399e jne 0x102039a8 */ if (!ZF_) goto L_102039a8;
L_102039a0:;
  /* 102039a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102039a1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102039a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102039a5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102039a8:;
  /* 102039a8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102039aa call 0x10204b60 */ esp -= 4; M32(esp) = 0x102039afu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x102039aau); RETCHK(0x102039afu, 0x102039aau); LOADALL;
  /* 102039af pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102039b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102039b1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102039c0(CPU *c) {
  NATIVE_HOOK(0x102039c0u) REGS; LOADALL;
L_102039c0:;
  /* 102039c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102039c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102039c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102039c6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102039cc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102039cd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102039cf call 0x10204c90 */ esp -= 4; M32(esp) = 0x102039d4u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x102039cfu); RETCHK(0x102039d4u, 0x102039cfu); LOADALL;
  /* 102039d4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102039d7 jne 0x102039e0 */ if (!ZF_) goto L_102039e0;
  /* 102039d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102039da or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102039dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102039dd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102039e0:;
  /* 102039e0 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 102039e5 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102039e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102039e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102039eb call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102039f0u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102039ebu); RETCHK(0x102039f0u, 0x102039ebu); LOADALL;
  /* 102039f0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102039f1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102039f3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102039f5 and eax, 0x105 */ { u32 a_ = eax, b_ = 0x105u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102039fa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102039fb dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102039fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102039fd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203a00(CPU *c) {
  NATIVE_HOOK(0x10203a00u) REGS; LOADALL;
L_10203a00:;
  /* 10203a00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203a04 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10203a09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203a0a add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10203a10 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203a15u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203a10u); RETCHK(0x10203a15u, 0x10203a10u); LOADALL;
  /* 10203a15 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203a16 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203a18 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203a1a and eax, 0x101 */ { u32 a_ = eax, b_ = 0x101u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203a1f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203a20 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203a30(CPU *c) {
  NATIVE_HOOK(0x10203a30u) REGS; LOADALL;
L_10203a30:;
  /* 10203a30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203a34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203a35 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203a3b push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10203a40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203a41 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203a43 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203a48u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203a43u); RETCHK(0x10203a48u, 0x10203a43u); LOADALL;
  /* 10203a48 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203a4b jne 0x10203a53 */ if (!ZF_) goto L_10203a53;
  /* 10203a4d or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203a4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203a50 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203a53:;
  /* 10203a53 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203a55 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203a5au; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203a55u); RETCHK(0x10203a5au, 0x10203a55u); LOADALL;
  /* 10203a5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203a5b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203a60(CPU *c) {
  NATIVE_HOOK(0x10203a60u) REGS; LOADALL;
L_10203a60:;
  /* 10203a60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203a61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203a62 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203a66 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203a6c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203a6d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203a6f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203a74u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203a6fu); RETCHK(0x10203a74u, 0x10203a6fu); LOADALL;
  /* 10203a74 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203a77 jne 0x10203a80 */ if (!ZF_) goto L_10203a80;
  /* 10203a79 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203a7a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203a7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203a7d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203a80:;
  /* 10203a80 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203a82 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203a85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203a86 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203a88 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203a8du; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203a88u); RETCHK(0x10203a8du, 0x10203a88u); LOADALL;
  /* 10203a8d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203a8e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203a90 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203a92 and eax, 0x25 */ { u32 a_ = eax, b_ = 0x25u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203a95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203a96 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203a97 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203a98 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203aa0(CPU *c) {
  NATIVE_HOOK(0x10203aa0u) REGS; LOADALL;
L_10203aa0:;
  /* 10203aa0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203aa4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203aa5 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203aab push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203aad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203aae mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ab0 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203ab5u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203ab0u); RETCHK(0x10203ab5u, 0x10203ab0u); LOADALL;
  /* 10203ab5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203ab8 jne 0x10203ac0 */ if (!ZF_) goto L_10203ac0;
  /* 10203aba or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203abc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203abd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203ac0:;
  /* 10203ac0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ac2 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203ac7u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203ac2u); RETCHK(0x10203ac7u, 0x10203ac2u); LOADALL;
  /* 10203ac7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203ac8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203ad0(CPU *c) {
  NATIVE_HOOK(0x10203ad0u) REGS; LOADALL;
L_10203ad0:;
  /* 10203ad0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203ad1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203ad2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203ad6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203adc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203ade push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203adf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ae1 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203ae6u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203ae1u); RETCHK(0x10203ae6u, 0x10203ae1u); LOADALL;
  /* 10203ae6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203ae9 je 0x10203afd */ if (ZF_) goto L_10203afd;
  /* 10203aeb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203aed mov al, byte ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203af0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203af2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203af3 call 0x10204b70 */ esp -= 4; M32(esp) = 0x10203af8u; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203af3u); RETCHK(0x10203af8u, 0x10203af3u); LOADALL;
  /* 10203af8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203afb jne 0x10203b05 */ if (!ZF_) goto L_10203b05;
L_10203afd:;
  /* 10203afd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203afe or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203b01 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b02 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203b05:;
  /* 10203b05 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b07 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203b0cu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203b07u); RETCHK(0x10203b0cu, 0x10203b07u); LOADALL;
  /* 10203b0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203b0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203b20(CPU *c) {
  NATIVE_HOOK(0x10203b20u) REGS; LOADALL;
L_10203b20:;
  /* 10203b20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203b21 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203b22 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203b26 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203b28 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203b2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203b2f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b31 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203b36u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203b31u); RETCHK(0x10203b36u, 0x10203b31u); LOADALL;
  /* 10203b36 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203b39 je 0x10203b5f */ if (ZF_) goto L_10203b5f;
  /* 10203b3b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203b3d lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10203b40 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203b41 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b43 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203b48u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203b43u); RETCHK(0x10203b48u, 0x10203b43u); LOADALL;
  /* 10203b48 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203b4b je 0x10203b5f */ if (ZF_) goto L_10203b5f;
  /* 10203b4d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10203b4f mov dl, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203b52 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b54 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203b55 call 0x10204b70 */ esp -= 4; M32(esp) = 0x10203b5au; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203b55u); RETCHK(0x10203b5au, 0x10203b55u); LOADALL;
  /* 10203b5a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203b5d jne 0x10203b67 */ if (!ZF_) goto L_10203b67;
L_10203b5f:;
  /* 10203b5f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203b60 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203b63 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b64 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203b67:;
  /* 10203b67 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b69 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203b6eu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203b69u); RETCHK(0x10203b6eu, 0x10203b69u); LOADALL;
  /* 10203b6e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203b6f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b70 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203b80(CPU *c) {
  NATIVE_HOOK(0x10203b80u) REGS; LOADALL;
L_10203b80:;
  /* 10203b80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203b84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203b85 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203b8b push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10203b8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203b8e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b90 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203b95u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203b90u); RETCHK(0x10203b95u, 0x10203b90u); LOADALL;
  /* 10203b95 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203b98 jne 0x10203ba0 */ if (!ZF_) goto L_10203ba0;
  /* 10203b9a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203b9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b9d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203ba0:;
  /* 10203ba0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ba2 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203ba7u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203ba2u); RETCHK(0x10203ba7u, 0x10203ba2u); LOADALL;
  /* 10203ba7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203ba8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203bb0(CPU *c) {
  NATIVE_HOOK(0x10203bb0u) REGS; LOADALL;
L_10203bb0:;
  /* 10203bb0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203bb4 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10203bb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203bb7 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10203bbd call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203bc2u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203bbdu); RETCHK(0x10203bc2u, 0x10203bbdu); LOADALL;
  /* 10203bc2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203bc3 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203bc5 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203bc7 and eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203bca dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203bcb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203bd0(CPU *c) {
  NATIVE_HOOK(0x10203bd0u) REGS; LOADALL;
L_10203bd0:;
  /* 10203bd0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203bd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203bd5 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10203bdb call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203be0u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203bdbu); RETCHK(0x10203be0u, 0x10203bdbu); LOADALL;
  /* 10203be0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203be1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203be3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203be5 and eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203be8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203be9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203bf0(CPU *c) {
  NATIVE_HOOK(0x10203bf0u) REGS; LOADALL;
L_10203bf0:;
  /* 10203bf0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203bf1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203bf2 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10203bf6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203bf8 mov ax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203bfb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203bfc mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10203bfe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203bff lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 10203c05 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203c07 mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 10203c0b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203c0c call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10203c11u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10203c0cu); RETCHK(0x10203c11u, 0x10203c0cu); LOADALL;
  /* 10203c11 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203c14 je 0x10203c29 */ if (ZF_) goto L_10203c29;
  /* 10203c16 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203c18 mov cx, word ptr [ebx + 2] */ { const u32 m_ = (u32)(ebx + 0x2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203c1c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203c1d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203c1f call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10203c24u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10203c1fu); RETCHK(0x10203c24u, 0x10203c1fu); LOADALL;
  /* 10203c24 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203c27 jne 0x10203c33 */ if (!ZF_) goto L_10203c33;
L_10203c29:;
  /* 10203c29 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203c2a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203c2b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203c2e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203c2f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10203c30 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203c33:;
  /* 10203c33 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203c34 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10203c36 lea edi, [ebx + 4] */ edi = (u32)((u32)(ebx + 0x4u));
  /* 10203c39 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10203c40:;
  /* 10203c40 movzx edx, word ptr [ebx + 2] */ { const u32 m_ = (u32)(ebx + 0x2u); edx = (u32)(M16(m_)); }
  /* 10203c44 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203c46 jge 0x10203c5e */ if (!LT_) goto L_10203c5e;
  /* 10203c48 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203c49 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10203c4b call 0x10202fd0 */ esp -= 4; M32(esp) = 0x10203c50u; SAVEALL; F_10202fd0(c); ABI_CHECK(0x10202fd0u, 0x10203c4bu); RETCHK(0x10203c50u, 0x10203c4bu); LOADALL;
  /* 10203c50 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203c53 je 0x10203c6f */ if (ZF_) goto L_10203c6f;
  /* 10203c55 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203c56 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203c59 cmp esi, 0x64 */ { u32 a_ = esi, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203c5c jl 0x10203c40 */ if (LT_) goto L_10203c40;
L_10203c5e:;
  /* 10203c5e mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10203c62 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203c67u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203c62u); RETCHK(0x10203c67u, 0x10203c62u); LOADALL;
  /* 10203c67 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203c68 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203c69 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203c6a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203c6b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10203c6c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203c6f:;
  /* 10203c6f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203c70 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203c71 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203c72 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203c75 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203c76 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10203c77 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203c80(CPU *c) {
  NATIVE_HOOK(0x10203c80u) REGS; LOADALL;
L_10203c80:;
  /* 10203c80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203c81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203c82 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10203c84 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203c85 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10203c89 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10203c8f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203c90 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203c92 call 0x10204c10 */ esp -= 4; M32(esp) = 0x10203c97u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10203c92u); RETCHK(0x10203c97u, 0x10203c92u); LOADALL;
  /* 10203c97 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203c9a jne 0x10203ca4 */ if (!ZF_) goto L_10203ca4;
  /* 10203c9c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203c9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203c9e or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203ca0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203ca1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203ca4:;
  /* 10203ca4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203ca5 lea ebp, [edi + 2] */ ebp = (u32)((u32)(edi + 0x2u));
  /* 10203ca8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203ca9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203cab call 0x10204c10 */ esp -= 4; M32(esp) = 0x10203cb0u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10203cabu); RETCHK(0x10203cb0u, 0x10203cabu); LOADALL;
  /* 10203cb0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203cb3 jne 0x10203cbf */ if (!ZF_) goto L_10203cbf;
L_10203cb5:;
  /* 10203cb5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203cb6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203cb7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203cb8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203cbb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203cbc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203cbf:;
  /* 10203cbf xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10203cc1 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10203cc4:;
  /* 10203cc4 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 10203cc8 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203cca jge 0x10203ce2 */ if (!LT_) goto L_10203ce2;
  /* 10203ccc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203ccd mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10203ccf call 0x10203070 */ esp -= 4; M32(esp) = 0x10203cd4u; SAVEALL; F_10203070(c); ABI_CHECK(0x10203070u, 0x10203ccfu); RETCHK(0x10203cd4u, 0x10203ccfu); LOADALL;
  /* 10203cd4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203cd7 je 0x10203cb5 */ if (ZF_) goto L_10203cb5;
  /* 10203cd9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203cda add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203cdd cmp esi, 0x64 */ { u32 a_ = esi, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203ce0 jl 0x10203cc4 */ if (LT_) goto L_10203cc4;
L_10203ce2:;
  /* 10203ce2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203ce3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203ce4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203ce5 mov eax, 0x12c4 */ { eax = (u32)(0x12c4u); }
  /* 10203cea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203ceb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203cf0(CPU *c) {
  NATIVE_HOOK(0x10203cf0u) REGS; LOADALL;
L_10203cf0:;
  /* 10203cf0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203cf1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203cf2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203cf6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203cf8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203cfe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203cff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203d01 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203d06u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203d01u); RETCHK(0x10203d06u, 0x10203d01u); LOADALL;
  /* 10203d06 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203d09 je 0x10203d83 */ if (ZF_) goto L_10203d83;
  /* 10203d0b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10203d0e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203d0f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203d11 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203d16u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203d11u); RETCHK(0x10203d16u, 0x10203d11u); LOADALL;
  /* 10203d16 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203d19 je 0x10203d83 */ if (ZF_) goto L_10203d83;
  /* 10203d1b mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10203d1e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203d1f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203d21 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203d26u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203d21u); RETCHK(0x10203d26u, 0x10203d21u); LOADALL;
  /* 10203d26 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203d29 je 0x10203d83 */ if (ZF_) goto L_10203d83;
  /* 10203d2b mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10203d2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203d2f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203d31 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203d36u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203d31u); RETCHK(0x10203d36u, 0x10203d31u); LOADALL;
  /* 10203d36 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203d39 je 0x10203d83 */ if (ZF_) goto L_10203d83;
  /* 10203d3b mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10203d3e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203d3f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203d41 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203d46u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203d41u); RETCHK(0x10203d46u, 0x10203d41u); LOADALL;
  /* 10203d46 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203d49 je 0x10203d83 */ if (ZF_) goto L_10203d83;
  /* 10203d4b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10203d4d mov dx, word ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203d51 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203d53 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203d54 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10203d59u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10203d54u); RETCHK(0x10203d59u, 0x10203d54u); LOADALL;
  /* 10203d59 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203d5c je 0x10203d83 */ if (ZF_) goto L_10203d83;
  /* 10203d5e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203d60 mov ax, word ptr [edi + 0x16] */ { const u32 m_ = (u32)(edi + 0x16u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203d64 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203d66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203d67 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10203d6cu; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10203d67u); RETCHK(0x10203d6cu, 0x10203d67u); LOADALL;
  /* 10203d6c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203d6f je 0x10203d83 */ if (ZF_) goto L_10203d83;
  /* 10203d71 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203d73 mov cl, byte ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203d76 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203d77 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203d79 call 0x10204b70 */ esp -= 4; M32(esp) = 0x10203d7eu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203d79u); RETCHK(0x10203d7eu, 0x10203d79u); LOADALL;
  /* 10203d7e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203d81 jne 0x10203d8b */ if (!ZF_) goto L_10203d8b;
L_10203d83:;
  /* 10203d83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203d84 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203d87 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203d88 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203d8b:;
  /* 10203d8b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203d8d call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203d92u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203d8du); RETCHK(0x10203d92u, 0x10203d8du); LOADALL;
  /* 10203d92 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203d93 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203d94 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203da0(CPU *c) {
  NATIVE_HOOK(0x10203da0u) REGS; LOADALL;
L_10203da0:;
  /* 10203da0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203da1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203da2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203da6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203dac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203dad mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203daf call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203db4u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203dafu); RETCHK(0x10203db4u, 0x10203dafu); LOADALL;
  /* 10203db4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203db7 jne 0x10203dc1 */ if (!ZF_) goto L_10203dc1;
L_10203db9:;
  /* 10203db9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203dba or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203dbd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203dbe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203dc1:;
  /* 10203dc1 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10203dc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203dc5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203dc7 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203dccu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203dc7u); RETCHK(0x10203dccu, 0x10203dc7u); LOADALL;
  /* 10203dcc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203dcf je 0x10203db9 */ if (ZF_) goto L_10203db9;
  /* 10203dd1 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10203dd4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203dd5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203dd7 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203ddcu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203dd7u); RETCHK(0x10203ddcu, 0x10203dd7u); LOADALL;
  /* 10203ddc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203ddf je 0x10203db9 */ if (ZF_) goto L_10203db9;
  /* 10203de1 lea edx, [edi + 0xc] */ edx = (u32)((u32)(edi + 0xcu));
  /* 10203de4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203de5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203de7 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203decu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203de7u); RETCHK(0x10203decu, 0x10203de7u); LOADALL;
  /* 10203dec cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203def je 0x10203db9 */ if (ZF_) goto L_10203db9;
  /* 10203df1 lea eax, [edi + 0x10] */ eax = (u32)((u32)(edi + 0x10u));
  /* 10203df4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203df5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203df7 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203dfcu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203df7u); RETCHK(0x10203dfcu, 0x10203df7u); LOADALL;
  /* 10203dfc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203dff je 0x10203db9 */ if (ZF_) goto L_10203db9;
  /* 10203e01 lea ecx, [edi + 0x14] */ ecx = (u32)((u32)(edi + 0x14u));
  /* 10203e04 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203e05 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203e07 call 0x10204c10 */ esp -= 4; M32(esp) = 0x10203e0cu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10203e07u); RETCHK(0x10203e0cu, 0x10203e07u); LOADALL;
  /* 10203e0c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203e0f je 0x10203db9 */ if (ZF_) goto L_10203db9;
  /* 10203e11 lea edx, [edi + 0x16] */ edx = (u32)((u32)(edi + 0x16u));
  /* 10203e14 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203e15 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203e17 call 0x10204c10 */ esp -= 4; M32(esp) = 0x10203e1cu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10203e17u); RETCHK(0x10203e1cu, 0x10203e17u); LOADALL;
  /* 10203e1c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203e1f je 0x10203db9 */ if (ZF_) goto L_10203db9;
  /* 10203e21 add edi, 0x18 */ { u32 a_ = edi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203e24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203e25 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203e27 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x10203e2cu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x10203e27u); RETCHK(0x10203e2cu, 0x10203e27u); LOADALL;
  /* 10203e2c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203e2d neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203e2f sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203e31 and eax, 0x1d */ { u32 a_ = eax, b_ = 0x1du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203e34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203e35 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203e36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203e37 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203e40(CPU *c) {
  NATIVE_HOOK(0x10203e40u) REGS; LOADALL;
L_10203e40:;
  /* 10203e40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203e41 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203e42 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203e46 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203e48 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203e4e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203e4f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203e51 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203e56u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203e51u); RETCHK(0x10203e56u, 0x10203e51u); LOADALL;
  /* 10203e56 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203e59 je 0x10203e7d */ if (ZF_) goto L_10203e7d;
  /* 10203e5b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203e5d lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10203e60 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203e61 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203e63 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203e68u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203e63u); RETCHK(0x10203e68u, 0x10203e63u); LOADALL;
  /* 10203e68 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203e6b je 0x10203e7d */ if (ZF_) goto L_10203e7d;
  /* 10203e6d mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 10203e70 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203e71 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203e73 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203e78u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203e73u); RETCHK(0x10203e78u, 0x10203e73u); LOADALL;
  /* 10203e78 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203e7b jne 0x10203e85 */ if (!ZF_) goto L_10203e85;
L_10203e7d:;
  /* 10203e7d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203e7e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203e81 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203e82 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203e85:;
  /* 10203e85 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203e87 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203e8cu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203e87u); RETCHK(0x10203e8cu, 0x10203e87u); LOADALL;
  /* 10203e8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203e8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203e8e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203ea0(CPU *c) {
  NATIVE_HOOK(0x10203ea0u) REGS; LOADALL;
L_10203ea0:;
  /* 10203ea0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203ea1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203ea2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203ea6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203eac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203ead mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203eaf call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203eb4u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203eafu); RETCHK(0x10203eb4u, 0x10203eafu); LOADALL;
  /* 10203eb4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203eb7 jne 0x10203ec1 */ if (!ZF_) goto L_10203ec1;
L_10203eb9:;
  /* 10203eb9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203eba or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203ebd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203ebe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203ec1:;
  /* 10203ec1 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203ec3 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10203ec6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203ec7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ec9 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203eceu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203ec9u); RETCHK(0x10203eceu, 0x10203ec9u); LOADALL;
  /* 10203ece cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203ed1 je 0x10203eb9 */ if (ZF_) goto L_10203eb9;
  /* 10203ed3 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203ed6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203ed7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ed9 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203edeu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203ed9u); RETCHK(0x10203edeu, 0x10203ed9u); LOADALL;
  /* 10203ede inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203edf neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203ee1 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203ee3 and eax, 0x29 */ { u32 a_ = eax, b_ = 0x29u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203ee6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203ee7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203ee8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203ee9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203ef0(CPU *c) {
  NATIVE_HOOK(0x10203ef0u) REGS; LOADALL;
L_10203ef0:;
  /* 10203ef0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203ef1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203ef2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203ef6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203ef8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203efe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203eff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203f01 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203f06u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203f01u); RETCHK(0x10203f06u, 0x10203f01u); LOADALL;
  /* 10203f06 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203f09 je 0x10203f3d */ if (ZF_) goto L_10203f3d;
  /* 10203f0b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203f0d lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10203f10 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203f11 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203f13 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203f18u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203f13u); RETCHK(0x10203f18u, 0x10203f13u); LOADALL;
  /* 10203f18 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203f1b je 0x10203f3d */ if (ZF_) goto L_10203f3d;
  /* 10203f1d mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 10203f20 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203f21 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203f23 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203f28u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203f23u); RETCHK(0x10203f28u, 0x10203f23u); LOADALL;
  /* 10203f28 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203f2b je 0x10203f3d */ if (ZF_) goto L_10203f3d;
  /* 10203f2d mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 10203f30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203f31 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203f33 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203f38u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203f33u); RETCHK(0x10203f38u, 0x10203f33u); LOADALL;
  /* 10203f38 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203f3b jne 0x10203f45 */ if (!ZF_) goto L_10203f45;
L_10203f3d:;
  /* 10203f3d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203f3e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203f41 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203f42 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203f45:;
  /* 10203f45 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203f47 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203f4cu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203f47u); RETCHK(0x10203f4cu, 0x10203f47u); LOADALL;
  /* 10203f4c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203f4d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203f4e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203f60(CPU *c) {
  NATIVE_HOOK(0x10203f60u) REGS; LOADALL;
L_10203f60:;
  /* 10203f60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203f61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203f62 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203f66 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203f6c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203f6d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203f6f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203f74u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203f6fu); RETCHK(0x10203f74u, 0x10203f6fu); LOADALL;
  /* 10203f74 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203f77 jne 0x10203f81 */ if (!ZF_) goto L_10203f81;
L_10203f79:;
  /* 10203f79 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203f7a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203f7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203f7e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203f81:;
  /* 10203f81 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203f83 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10203f86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203f87 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203f89 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203f8eu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203f89u); RETCHK(0x10203f8eu, 0x10203f89u); LOADALL;
  /* 10203f8e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203f91 je 0x10203f79 */ if (ZF_) goto L_10203f79;
  /* 10203f93 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10203f96 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203f97 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203f99 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203f9eu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203f99u); RETCHK(0x10203f9eu, 0x10203f99u); LOADALL;
  /* 10203f9e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203fa1 je 0x10203f79 */ if (ZF_) goto L_10203f79;
  /* 10203fa3 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203fa6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203fa7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203fa9 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203faeu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203fa9u); RETCHK(0x10203faeu, 0x10203fa9u); LOADALL;
  /* 10203fae inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203faf neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203fb1 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203fb3 and eax, 0x2d */ { u32 a_ = eax, b_ = 0x2du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203fb6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203fb7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203fb8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203fb9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203fc0(CPU *c) {
  NATIVE_HOOK(0x10203fc0u) REGS; LOADALL;
L_10203fc0:;
  /* 10203fc0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203fc1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10203fc5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203fc6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203fc7 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10203fc9 call 0x10203ef0 */ esp -= 4; M32(esp) = 0x10203fceu; SAVEALL; F_10203ef0(c); ABI_CHECK(0x10203ef0u, 0x10203fc9u); RETCHK(0x10203fceu, 0x10203fc9u); LOADALL;
  /* 10203fce cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203fd1 je 0x10203fee */ if (ZF_) goto L_10203fee;
  /* 10203fd3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203fd5 mov ax, word ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203fd9 lea ecx, [ebp + 0x10000] */ ecx = (u32)((u32)(ebp + 0x10000u));
  /* 10203fdf mov dword ptr [esp + 0xc], ecx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10203fe3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203fe4 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10203fe9u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10203fe4u); RETCHK(0x10203fe9u, 0x10203fe4u); LOADALL;
  /* 10203fe9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203fec jne 0x10203ff6 */ if (!ZF_) goto L_10203ff6;
L_10203fee:;
  /* 10203fee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203fef or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203ff2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203ff3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203ff6:;
  /* 10203ff6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203ff7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203ff8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10203ffa lea edi, [ebx + 0x30] */ edi = (u32)((u32)(ebx + 0x30u));
  /* 10203ffd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10204000:;
  /* 10204000 movzx ecx, word ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M16(m_)); }
  /* 10204004 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204006 jge 0x1020401e */ if (!LT_) goto L_1020401e;
  /* 10204008 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204009 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1020400b call 0x10203e40 */ esp -= 4; M32(esp) = 0x10204010u; SAVEALL; F_10203e40(c); ABI_CHECK(0x10203e40u, 0x1020400bu); RETCHK(0x10204010u, 0x1020400bu); LOADALL;
  /* 10204010 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204013 je 0x1020404b */ if (ZF_) goto L_1020404b;
  /* 10204015 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10204016 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10204019 cmp esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020401c jl 0x10204000 */ if (LT_) goto L_10204000;
L_1020401e:;
  /* 1020401e mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10204022 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10204024 mov dx, word ptr [ebx + 0xa30] */ { const u32 m_ = (u32)(ebx + 0xa30u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1020402b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020402d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020402e call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10204033u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x1020402eu); RETCHK(0x10204033u, 0x1020402eu); LOADALL;
  /* 10204033 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204036 je 0x1020404b */ if (ZF_) goto L_1020404b;
  /* 10204038 mov eax, dword ptr [ebx + 0xa34] */ { const u32 m_ = (u32)(ebx + 0xa34u); eax = (u32)(M32(m_)); }
  /* 1020403e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020403f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204041 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10204046u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10204041u); RETCHK(0x10204046u, 0x10204041u); LOADALL;
  /* 10204046 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204049 jne 0x10204055 */ if (!ZF_) goto L_10204055;
L_1020404b:;
  /* 1020404b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020404c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020404d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020404e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204051 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204052 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204055:;
  /* 10204055 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204057 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020405cu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10204057u); RETCHK(0x1020405cu, 0x10204057u); LOADALL;
  /* 1020405c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020405d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020405e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020405f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204060 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204070(CPU *c) {
  NATIVE_HOOK(0x10204070u) REGS; LOADALL;
L_10204070:;
  /* 10204070 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10204071 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204072 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10204076 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204077 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10204079 call 0x10203f60 */ esp -= 4; M32(esp) = 0x1020407eu; SAVEALL; F_10203f60(c); ABI_CHECK(0x10203f60u, 0x10204079u); RETCHK(0x1020407eu, 0x10204079u); LOADALL;
  /* 1020407e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204081 jne 0x1020408b */ if (!ZF_) goto L_1020408b;
L_10204083:;
  /* 10204083 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10204084 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204087 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204088 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020408b:;
  /* 1020408b lea eax, [ebp + 0x2c] */ eax = (u32)((u32)(ebp + 0x2cu));
  /* 1020408e lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 10204094 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204095 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10204099 call 0x10204c10 */ esp -= 4; M32(esp) = 0x1020409eu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10204099u); RETCHK(0x1020409eu, 0x10204099u); LOADALL;
  /* 1020409e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102040a1 je 0x10204083 */ if (ZF_) goto L_10204083;
  /* 102040a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102040a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102040a5 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102040a7 lea edi, [ebp + 0x30] */ edi = (u32)((u32)(ebp + 0x30u));
  /* 102040aa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_102040b0:;
  /* 102040b0 movzx eax, word ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); eax = (u32)(M16(m_)); }
  /* 102040b4 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102040b6 jge 0x102040ce */ if (!LT_) goto L_102040ce;
  /* 102040b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102040b9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 102040bb call 0x10203ea0 */ esp -= 4; M32(esp) = 0x102040c0u; SAVEALL; F_10203ea0(c); ABI_CHECK(0x10203ea0u, 0x102040bbu); RETCHK(0x102040c0u, 0x102040bbu); LOADALL;
  /* 102040c0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102040c3 je 0x102040e5 */ if (ZF_) goto L_102040e5;
  /* 102040c5 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102040c6 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102040c9 cmp esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102040cc jl 0x102040b0 */ if (LT_) goto L_102040b0;
L_102040ce:;
  /* 102040ce mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 102040d2 lea ecx, [ebp + 0xa30] */ ecx = (u32)((u32)(ebp + 0xa30u));
  /* 102040d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102040d9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102040db call 0x10204c10 */ esp -= 4; M32(esp) = 0x102040e0u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x102040dbu); RETCHK(0x102040e0u, 0x102040dbu); LOADALL;
  /* 102040e0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102040e3 jne 0x102040ef */ if (!ZF_) goto L_102040ef;
L_102040e5:;
  /* 102040e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102040e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102040e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102040e8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102040eb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102040ec ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102040ef:;
  /* 102040ef add ebp, 0xa34 */ { u32 a_ = ebp, b_ = 0xa34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 102040f5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102040f6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102040f8 call 0x10204c90 */ esp -= 4; M32(esp) = 0x102040fdu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x102040f8u); RETCHK(0x102040fdu, 0x102040f8u); LOADALL;
  /* 102040fd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102040fe neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10204100 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204101 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10204103 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204104 and eax, 0xa39 */ { u32 a_ = eax, b_ = 0xa39u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204109 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020410a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1020410b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020410c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204110(CPU *c) {
  NATIVE_HOOK(0x10204110u) REGS; LOADALL;
L_10204110:;
  /* 10204110 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204111 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204112 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10204116 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10204118 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020411e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020411f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204121 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10204126u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10204121u); RETCHK(0x10204126u, 0x10204121u); LOADALL;
  /* 10204126 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204129 je 0x1020416f */ if (ZF_) goto L_1020416f;
  /* 1020412b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020412d lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10204130 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204131 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204133 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10204138u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10204133u); RETCHK(0x10204138u, 0x10204133u); LOADALL;
  /* 10204138 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020413b je 0x1020416f */ if (ZF_) goto L_1020416f;
  /* 1020413d mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 10204140 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10204141 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204143 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10204148u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10204143u); RETCHK(0x10204148u, 0x10204143u); LOADALL;
  /* 10204148 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020414b je 0x1020416f */ if (ZF_) goto L_1020416f;
  /* 1020414d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020414f lea eax, [edi + 0x28] */ eax = (u32)((u32)(edi + 0x28u));
  /* 10204152 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204153 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204155 call 0x10204d80 */ esp -= 4; M32(esp) = 0x1020415au; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10204155u); RETCHK(0x1020415au, 0x10204155u); LOADALL;
  /* 1020415a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020415d je 0x1020416f */ if (ZF_) goto L_1020416f;
  /* 1020415f mov ecx, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 10204162 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204163 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204165 call 0x10204c50 */ esp -= 4; M32(esp) = 0x1020416au; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10204165u); RETCHK(0x1020416au, 0x10204165u); LOADALL;
  /* 1020416a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020416d jne 0x10204177 */ if (!ZF_) goto L_10204177;
L_1020416f:;
  /* 1020416f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204170 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204173 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204174 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204177:;
  /* 10204177 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204179 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020417eu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10204179u); RETCHK(0x1020417eu, 0x10204179u); LOADALL;
  /* 1020417e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020417f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204180 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204190(CPU *c) {
  NATIVE_HOOK(0x10204190u) REGS; LOADALL;
L_10204190:;
  /* 10204190 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204191 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204192 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10204196 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020419c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020419d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020419f call 0x10204c90 */ esp -= 4; M32(esp) = 0x102041a4u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x1020419fu); RETCHK(0x102041a4u, 0x1020419fu); LOADALL;
  /* 102041a4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102041a7 jne 0x102041b1 */ if (!ZF_) goto L_102041b1;
L_102041a9:;
  /* 102041a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102041aa or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102041ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102041ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102041b1:;
  /* 102041b1 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102041b3 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 102041b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102041b7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102041b9 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102041beu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102041b9u); RETCHK(0x102041beu, 0x102041b9u); LOADALL;
  /* 102041be cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102041c1 je 0x102041a9 */ if (ZF_) goto L_102041a9;
  /* 102041c3 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 102041c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102041c7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102041c9 call 0x10204c90 */ esp -= 4; M32(esp) = 0x102041ceu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x102041c9u); RETCHK(0x102041ceu, 0x102041c9u); LOADALL;
  /* 102041ce cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102041d1 je 0x102041a9 */ if (ZF_) goto L_102041a9;
  /* 102041d3 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102041d5 lea edx, [edi + 0x28] */ edx = (u32)((u32)(edi + 0x28u));
  /* 102041d8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102041d9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102041db call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102041e0u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102041dbu); RETCHK(0x102041e0u, 0x102041dbu); LOADALL;
  /* 102041e0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102041e3 je 0x102041a9 */ if (ZF_) goto L_102041a9;
  /* 102041e5 add edi, 0x48 */ { u32 a_ = edi, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102041e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102041e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102041eb call 0x10204c90 */ esp -= 4; M32(esp) = 0x102041f0u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x102041ebu); RETCHK(0x102041f0u, 0x102041ebu); LOADALL;
  /* 102041f0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102041f1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102041f3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102041f5 and eax, 0x4d */ { u32 a_ = eax, b_ = 0x4du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102041f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102041f9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102041fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102041fb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204200(CPU *c) {
  NATIVE_HOOK(0x10204200u) REGS; LOADALL;
L_10204200:;
  /* 10204200 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204201 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10204202 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204203 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 10204207 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204209 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1020420d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1020420f lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 10204215 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10204219 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020421a call 0x10204bd0 */ esp -= 4; M32(esp) = 0x1020421fu; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x1020421au); RETCHK(0x1020421fu, 0x1020421au); LOADALL;
  /* 1020421f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204222 jne 0x1020422c */ if (!ZF_) goto L_1020422c;
  /* 10204224 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10204225 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204227 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204228 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10204229 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020422c:;
  /* 1020422c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020422d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020422e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10204230 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10204233:;
  /* 10204233 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 10204237 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204239 jge 0x10204251 */ if (!LT_) goto L_10204251;
  /* 1020423b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020423c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1020423e call 0x10204110 */ esp -= 4; M32(esp) = 0x10204243u; SAVEALL; F_10204110(c); ABI_CHECK(0x10204110u, 0x1020423eu); RETCHK(0x10204243u, 0x1020423eu); LOADALL;
  /* 10204243 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204246 je 0x10204262 */ if (ZF_) goto L_10204262;
  /* 10204248 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10204249 add edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020424c cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020424f jl 0x10204233 */ if (LT_) goto L_10204233;
L_10204251:;
  /* 10204251 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10204255 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020425au; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10204255u); RETCHK(0x1020425au, 0x10204255u); LOADALL;
  /* 1020425a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020425b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020425c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020425d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020425e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020425f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204262:;
  /* 10204262 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204263 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204264 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10204265 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204268 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204269 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020426a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204270(CPU *c) {
  NATIVE_HOOK(0x10204270u) REGS; LOADALL;
L_10204270:;
  /* 10204270 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10204271 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204272 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10204276 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10204278 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204279 lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 1020427f call 0x10204c10 */ esp -= 4; M32(esp) = 0x10204284u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x1020427fu); RETCHK(0x10204284u, 0x1020427fu); LOADALL;
  /* 10204284 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204287 jne 0x10204290 */ if (!ZF_) goto L_10204290;
  /* 10204289 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020428a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020428c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020428d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204290:;
  /* 10204290 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204291 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204292 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10204294 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10204297:;
  /* 10204297 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1020429b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020429d jge 0x102042b5 */ if (!LT_) goto L_102042b5;
  /* 1020429f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102042a0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 102042a2 call 0x10204190 */ esp -= 4; M32(esp) = 0x102042a7u; SAVEALL; F_10204190(c); ABI_CHECK(0x10204190u, 0x102042a2u); RETCHK(0x102042a7u, 0x102042a2u); LOADALL;
  /* 102042a7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102042aa je 0x102042c1 */ if (ZF_) goto L_102042c1;
  /* 102042ac inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102042ad add edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102042b0 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102042b3 jl 0x10204297 */ if (LT_) goto L_10204297;
L_102042b5:;
  /* 102042b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102042b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102042b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102042b8 mov eax, 0xe8 */ { eax = (u32)(0xe8u); }
  /* 102042bd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102042be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102042c1:;
  /* 102042c1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102042c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102042c3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102042c4 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102042c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102042c8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102042d0(CPU *c) {
  NATIVE_HOOK(0x102042d0u) REGS; LOADALL;
L_102042d0:;
  /* 102042d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102042d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102042d2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102042d6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 102042d8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102042de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102042df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102042e1 call 0x10204c50 */ esp -= 4; M32(esp) = 0x102042e6u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x102042e1u); RETCHK(0x102042e6u, 0x102042e1u); LOADALL;
  /* 102042e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102042e9 je 0x10204331 */ if (ZF_) goto L_10204331;
  /* 102042eb mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102042ee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102042ef mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102042f1 call 0x10204c50 */ esp -= 4; M32(esp) = 0x102042f6u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x102042f1u); RETCHK(0x102042f6u, 0x102042f1u); LOADALL;
  /* 102042f6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102042f9 je 0x10204331 */ if (ZF_) goto L_10204331;
  /* 102042fb xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 102042fd mov dl, byte ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10204300 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204302 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10204303 call 0x10204b70 */ esp -= 4; M32(esp) = 0x10204308u; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10204303u); RETCHK(0x10204308u, 0x10204303u); LOADALL;
  /* 10204308 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020430b je 0x10204331 */ if (ZF_) goto L_10204331;
  /* 1020430d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020430f mov al, byte ptr [edi + 9] */ { const u32 m_ = (u32)(edi + 0x9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10204312 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204314 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204315 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020431au; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10204315u); RETCHK(0x1020431au, 0x10204315u); LOADALL;
  /* 1020431a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020431d je 0x10204331 */ if (ZF_) goto L_10204331;
  /* 1020431f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10204321 mov cl, byte ptr [edi + 0xa] */ { const u32 m_ = (u32)(edi + 0xau); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10204324 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204325 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204327 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020432cu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10204327u); RETCHK(0x1020432cu, 0x10204327u); LOADALL;
  /* 1020432c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020432f jne 0x10204339 */ if (!ZF_) goto L_10204339;
L_10204331:;
  /* 10204331 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204332 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204335 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204336 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204339:;
  /* 10204339 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020433b call 0x10204b60 */ esp -= 4; M32(esp) = 0x10204340u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020433bu); RETCHK(0x10204340u, 0x1020433bu); LOADALL;
  /* 10204340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204341 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204342 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204350(CPU *c) {
  NATIVE_HOOK(0x10204350u) REGS; LOADALL;
L_10204350:;
  /* 10204350 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204351 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204352 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10204356 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020435c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020435d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020435f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10204364u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x1020435fu); RETCHK(0x10204364u, 0x1020435fu); LOADALL;
  /* 10204364 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204367 jne 0x10204371 */ if (!ZF_) goto L_10204371;
L_10204369:;
  /* 10204369 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020436a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020436d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020436e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204371:;
  /* 10204371 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10204374 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204375 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204377 call 0x10204c90 */ esp -= 4; M32(esp) = 0x1020437cu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10204377u); RETCHK(0x1020437cu, 0x10204377u); LOADALL;
  /* 1020437c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020437f je 0x10204369 */ if (ZF_) goto L_10204369;
  /* 10204381 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10204384 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204385 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204387 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x1020438cu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x10204387u); RETCHK(0x1020438cu, 0x10204387u); LOADALL;
  /* 1020438c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020438f je 0x10204369 */ if (ZF_) goto L_10204369;
  /* 10204391 lea edx, [edi + 9] */ edx = (u32)((u32)(edi + 0x9u));
  /* 10204394 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10204395 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204397 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x1020439cu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x10204397u); RETCHK(0x1020439cu, 0x10204397u); LOADALL;
  /* 1020439c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020439f je 0x10204369 */ if (ZF_) goto L_10204369;
  /* 102043a1 add edi, 0xa */ { u32 a_ = edi, b_ = 0xau; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102043a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102043a5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102043a7 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102043acu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102043a7u); RETCHK(0x102043acu, 0x102043a7u); LOADALL;
  /* 102043ac inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102043ad neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102043af sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102043b1 and eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102043b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102043b5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102043b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102043b7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102043c0(CPU *c) {
  NATIVE_HOOK(0x102043c0u) REGS; LOADALL;
L_102043c0:;
  /* 102043c0 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102043c6 call 0x10204b60 */ esp -= 4; M32(esp) = 0x102043cbu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x102043c6u); RETCHK(0x102043cbu, 0x102043c6u); LOADALL;
  /* 102043cb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102043d0(CPU *c) {
  NATIVE_HOOK(0x102043d0u) REGS; LOADALL;
L_102043d0:;
  /* 102043d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102043d1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102043d2 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 102043d6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 102043d8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102043d9 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 102043db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102043dc lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 102043e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102043e3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102043e5 mov dword ptr [esp + 0x10], esi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(esi); }
  /* 102043e9 call 0x10204c50 */ esp -= 4; M32(esp) = 0x102043eeu; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x102043e9u); RETCHK(0x102043eeu, 0x102043e9u); LOADALL;
  /* 102043ee cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102043f1 je 0x10204405 */ if (ZF_) goto L_10204405;
  /* 102043f3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 102043f5 mov cl, byte ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102043f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102043f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102043fb call 0x10204b70 */ esp -= 4; M32(esp) = 0x10204400u; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x102043fbu); RETCHK(0x10204400u, 0x102043fbu); LOADALL;
  /* 10204400 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204403 jne 0x1020440f */ if (!ZF_) goto L_1020440f;
L_10204405:;
  /* 10204405 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204406 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10204407 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020440a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020440b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020440c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020440f:;
  /* 1020440f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204410 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10204412 lea edi, [ebx + 8] */ edi = (u32)((u32)(ebx + 0x8u));
L_10204415:;
  /* 10204415 movzx edx, byte ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M8(m_)); }
  /* 10204419 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020441b jge 0x10204433 */ if (!LT_) goto L_10204433;
  /* 1020441d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020441e mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10204420 call 0x102042d0 */ esp -= 4; M32(esp) = 0x10204425u; SAVEALL; F_102042d0(c); ABI_CHECK(0x102042d0u, 0x10204420u); RETCHK(0x10204425u, 0x10204420u); LOADALL;
  /* 10204425 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204428 je 0x10204444 */ if (ZF_) goto L_10204444;
  /* 1020442a inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020442b add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020442e cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204431 jl 0x10204415 */ if (LT_) goto L_10204415;
L_10204433:;
  /* 10204433 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10204437 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020443cu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10204437u); RETCHK(0x1020443cu, 0x10204437u); LOADALL;
  /* 1020443c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020443d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020443e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020443f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204440 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10204441 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204444:;
  /* 10204444 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204445 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204446 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10204447 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020444a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020444b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020444c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204450(CPU *c) {
  NATIVE_HOOK(0x10204450u) REGS; LOADALL;
L_10204450:;
  /* 10204450 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10204451 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204452 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10204454 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204455 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10204459 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 1020445f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204460 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204462 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10204467u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10204462u); RETCHK(0x10204467u, 0x10204462u); LOADALL;
  /* 10204467 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020446a jne 0x10204474 */ if (!ZF_) goto L_10204474;
  /* 1020446c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020446d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020446e or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204470 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204471 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204474:;
  /* 10204474 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204475 lea ebp, [edi + 4] */ ebp = (u32)((u32)(edi + 0x4u));
  /* 10204478 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204479 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020447b call 0x10204ba0 */ esp -= 4; M32(esp) = 0x10204480u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x1020447bu); RETCHK(0x10204480u, 0x1020447bu); LOADALL;
  /* 10204480 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204483 jne 0x1020448f */ if (!ZF_) goto L_1020448f;
L_10204485:;
  /* 10204485 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10204486 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204487 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204488 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020448b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020448c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020448f:;
  /* 1020448f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10204491 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10204494:;
  /* 10204494 movzx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M8(m_)); }
  /* 10204498 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020449a jge 0x102044b2 */ if (!LT_) goto L_102044b2;
  /* 1020449c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020449d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1020449f call 0x10204350 */ esp -= 4; M32(esp) = 0x102044a4u; SAVEALL; F_10204350(c); ABI_CHECK(0x10204350u, 0x1020449fu); RETCHK(0x102044a4u, 0x1020449fu); LOADALL;
  /* 102044a4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102044a7 je 0x10204485 */ if (ZF_) goto L_10204485;
  /* 102044a9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102044aa add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102044ad cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102044b0 jl 0x10204494 */ if (LT_) goto L_10204494;
L_102044b2:;
  /* 102044b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102044b3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102044b4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102044b5 mov eax, 0xc8 */ { eax = (u32)(0xc8u); }
  /* 102044ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102044bb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102044c0(CPU *c) {
  NATIVE_HOOK(0x102044c0u) REGS; LOADALL;
L_102044c0:;
  /* 102044c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102044c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102044c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102044c6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 102044c8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102044ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102044cf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102044d1 call 0x10204c50 */ esp -= 4; M32(esp) = 0x102044d6u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x102044d1u); RETCHK(0x102044d6u, 0x102044d1u); LOADALL;
  /* 102044d6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102044d9 je 0x102044ee */ if (ZF_) goto L_102044ee;
  /* 102044db xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 102044dd mov cx, word ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 102044e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102044e2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102044e4 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x102044e9u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x102044e4u); RETCHK(0x102044e9u, 0x102044e4u); LOADALL;
  /* 102044e9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102044ec jne 0x102044f6 */ if (!ZF_) goto L_102044f6;
L_102044ee:;
  /* 102044ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102044ef or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102044f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102044f3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102044f6:;
  /* 102044f6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102044f8 call 0x10204b60 */ esp -= 4; M32(esp) = 0x102044fdu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x102044f8u); RETCHK(0x102044fdu, 0x102044f8u); LOADALL;
  /* 102044fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102044fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102044ff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204510(CPU *c) {
  NATIVE_HOOK(0x10204510u) REGS; LOADALL;
L_10204510:;
  /* 10204510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204511 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204512 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10204516 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020451c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020451d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020451f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10204524u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x1020451fu); RETCHK(0x10204524u, 0x1020451fu); LOADALL;
  /* 10204524 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204527 jne 0x10204530 */ if (!ZF_) goto L_10204530;
  /* 10204529 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020452a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020452c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020452d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204530:;
  /* 10204530 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10204533 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204534 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204536 call 0x10204c10 */ esp -= 4; M32(esp) = 0x1020453bu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10204536u); RETCHK(0x1020453bu, 0x10204536u); LOADALL;
  /* 1020453b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020453c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1020453e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10204540 and eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204543 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204544 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10204545 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204546 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204550(CPU *c) {
  NATIVE_HOOK(0x10204550u) REGS; LOADALL;
L_10204550:;
  /* 10204550 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10204552 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204553 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204555 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 1020455a mov edi, edx */ { edi = (u32)(edx); }
  /* 1020455c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 1020455e mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 10204563 lea edi, [edx + 0x8000] */ edi = (u32)((u32)(edx + 0x8000u));
  /* 10204569 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 1020456b mov dword ptr [edx + 0xfa0], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0xfa0u); M32(m_) = (u32)(0x102043c0u); }
  /* 10204575 mov dword ptr [edx + 0x8fa0], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x8fa0u); M32(m_) = (u32)(0x102036c0u); }
  /* 1020457f mov dword ptr [edx + 0xfa4], 0x10203100 */ { const u32 m_ = (u32)(edx + 0xfa4u); M32(m_) = (u32)(0x10203100u); }
  /* 10204589 mov dword ptr [edx + 0x8fa4], 0x10203170 */ { const u32 m_ = (u32)(edx + 0x8fa4u); M32(m_) = (u32)(0x10203170u); }
  /* 10204593 mov dword ptr [edx + 0xfa8], 0x10203300 */ { const u32 m_ = (u32)(edx + 0xfa8u); M32(m_) = (u32)(0x10203300u); }
  /* 1020459d mov dword ptr [edx + 0x8fa8], 0x10203370 */ { const u32 m_ = (u32)(edx + 0x8fa8u); M32(m_) = (u32)(0x10203370u); }
  /* 102045a7 mov dword ptr [edx + 0xfac], 0x102033e0 */ { const u32 m_ = (u32)(edx + 0xfacu); M32(m_) = (u32)(0x102033e0u); }
  /* 102045b1 mov dword ptr [edx + 0x8fac], 0x10203420 */ { const u32 m_ = (u32)(edx + 0x8facu); M32(m_) = (u32)(0x10203420u); }
  /* 102045bb mov dword ptr [edx + 0xfb0], 0x10203aa0 */ { const u32 m_ = (u32)(edx + 0xfb0u); M32(m_) = (u32)(0x10203aa0u); }
  /* 102045c5 mov dword ptr [edx + 0x8fb0], 0x102031e0 */ { const u32 m_ = (u32)(edx + 0x8fb0u); M32(m_) = (u32)(0x102031e0u); }
  /* 102045cf mov dword ptr [edx + 0xfb4], 0x10203200 */ { const u32 m_ = (u32)(edx + 0xfb4u); M32(m_) = (u32)(0x10203200u); }
  /* 102045d9 mov dword ptr [edx + 0x8fb4], 0x10203280 */ { const u32 m_ = (u32)(edx + 0x8fb4u); M32(m_) = (u32)(0x10203280u); }
  /* 102045e3 mov dword ptr [edx + 0xfb8], 0x10203460 */ { const u32 m_ = (u32)(edx + 0xfb8u); M32(m_) = (u32)(0x10203460u); }
  /* 102045ed mov dword ptr [edx + 0x8fb8], 0x102034b0 */ { const u32 m_ = (u32)(edx + 0x8fb8u); M32(m_) = (u32)(0x102034b0u); }
  /* 102045f7 mov dword ptr [edx + 0xfbc], 0x102034f0 */ { const u32 m_ = (u32)(edx + 0xfbcu); M32(m_) = (u32)(0x102034f0u); }
  /* 10204601 mov dword ptr [edx + 0x8fbc], 0x10203560 */ { const u32 m_ = (u32)(edx + 0x8fbcu); M32(m_) = (u32)(0x10203560u); }
  /* 1020460b mov dword ptr [edx + 0xfc0], 0x102035c0 */ { const u32 m_ = (u32)(edx + 0xfc0u); M32(m_) = (u32)(0x102035c0u); }
  /* 10204615 mov dword ptr [edx + 0x8fc0], 0x10203600 */ { const u32 m_ = (u32)(edx + 0x8fc0u); M32(m_) = (u32)(0x10203600u); }
  /* 1020461f mov dword ptr [edx + 0xfc4], 0x10203640 */ { const u32 m_ = (u32)(edx + 0xfc4u); M32(m_) = (u32)(0x10203640u); }
  /* 10204629 mov dword ptr [edx + 0x8fc4], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x8fc4u); M32(m_) = (u32)(0x10203bd0u); }
  /* 10204633 mov dword ptr [edx + 0xfc8], 0x10203670 */ { const u32 m_ = (u32)(edx + 0xfc8u); M32(m_) = (u32)(0x10203670u); }
  /* 1020463d mov dword ptr [edx + 0x8fc8], 0x102036a0 */ { const u32 m_ = (u32)(edx + 0x8fc8u); M32(m_) = (u32)(0x102036a0u); }
  /* 10204647 mov dword ptr [edx + 0xfcc], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0xfccu); M32(m_) = (u32)(0x102043c0u); }
  /* 10204651 mov dword ptr [edx + 0x8fcc], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x8fccu); M32(m_) = (u32)(0x102036c0u); }
  /* 1020465b mov dword ptr [edx + 0xfd0], 0x10203640 */ { const u32 m_ = (u32)(edx + 0xfd0u); M32(m_) = (u32)(0x10203640u); }
  /* 10204665 mov dword ptr [edx + 0x8fd0], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x8fd0u); M32(m_) = (u32)(0x10203bd0u); }
  /* 1020466f mov dword ptr [edx + 0xfd4], 0x10203aa0 */ { const u32 m_ = (u32)(edx + 0xfd4u); M32(m_) = (u32)(0x10203aa0u); }
  /* 10204679 mov dword ptr [edx + 0x8fd4], 0x102031e0 */ { const u32 m_ = (u32)(edx + 0x8fd4u); M32(m_) = (u32)(0x102031e0u); }
  /* 10204683 mov dword ptr [edx + 0xfd8], 0x10203ad0 */ { const u32 m_ = (u32)(edx + 0xfd8u); M32(m_) = (u32)(0x10203ad0u); }
  /* 1020468d mov dword ptr [edx + 0x8fd8], 0x102036d0 */ { const u32 m_ = (u32)(edx + 0x8fd8u); M32(m_) = (u32)(0x102036d0u); }
  /* 10204697 mov dword ptr [edx + 0xfdc], 0x10203b20 */ { const u32 m_ = (u32)(edx + 0xfdcu); M32(m_) = (u32)(0x10203b20u); }
  /* 102046a1 mov dword ptr [edx + 0x8fdc], 0x10203710 */ { const u32 m_ = (u32)(edx + 0x8fdcu); M32(m_) = (u32)(0x10203710u); }
  /* 102046ab mov dword ptr [edx + 0xfe0], 0x10203670 */ { const u32 m_ = (u32)(edx + 0xfe0u); M32(m_) = (u32)(0x10203670u); }
  /* 102046b5 mov dword ptr [edx + 0x8fe0], 0x102036a0 */ { const u32 m_ = (u32)(edx + 0x8fe0u); M32(m_) = (u32)(0x102036a0u); }
  /* 102046bf mov dword ptr [edx + 0xfe4], 0x10203640 */ { const u32 m_ = (u32)(edx + 0xfe4u); M32(m_) = (u32)(0x10203640u); }
  /* 102046c9 mov dword ptr [edx + 0x8fe4], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x8fe4u); M32(m_) = (u32)(0x10203bd0u); }
  /* 102046d3 mov dword ptr [edx + 0xfe8], 0x10203760 */ { const u32 m_ = (u32)(edx + 0xfe8u); M32(m_) = (u32)(0x10203760u); }
  /* 102046dd mov dword ptr [edx + 0x8fe8], 0x102037f0 */ { const u32 m_ = (u32)(edx + 0x8fe8u); M32(m_) = (u32)(0x102037f0u); }
  /* 102046e7 mov dword ptr [edx + 0xfec], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0xfecu); M32(m_) = (u32)(0x102043c0u); }
  /* 102046f1 mov dword ptr [edx + 0x8fec], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x8fecu); M32(m_) = (u32)(0x102036c0u); }
  /* 102046fb mov dword ptr [edx + 0xff0], 0x10203640 */ { const u32 m_ = (u32)(edx + 0xff0u); M32(m_) = (u32)(0x10203640u); }
  /* 10204705 mov dword ptr [edx + 0x8ff0], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x8ff0u); M32(m_) = (u32)(0x10203bd0u); }
  /* 1020470f mov dword ptr [edx + 0xff4], 0x10203aa0 */ { const u32 m_ = (u32)(edx + 0xff4u); M32(m_) = (u32)(0x10203aa0u); }
  /* 10204719 mov dword ptr [edx + 0x8ff4], 0x102031e0 */ { const u32 m_ = (u32)(edx + 0x8ff4u); M32(m_) = (u32)(0x102031e0u); }
  /* 10204723 mov dword ptr [edx + 0xff8], 0x10203870 */ { const u32 m_ = (u32)(edx + 0xff8u); M32(m_) = (u32)(0x10203870u); }
  /* 1020472d mov dword ptr [edx + 0x8ff8], 0x102038a0 */ { const u32 m_ = (u32)(edx + 0x8ff8u); M32(m_) = (u32)(0x102038a0u); }
  /* 10204737 mov dword ptr [edx + 0xffc], 0x102038d0 */ { const u32 m_ = (u32)(edx + 0xffcu); M32(m_) = (u32)(0x102038d0u); }
  /* 10204741 mov dword ptr [edx + 0x8ffc], 0x10203920 */ { const u32 m_ = (u32)(edx + 0x8ffcu); M32(m_) = (u32)(0x10203920u); }
  /* 1020474b mov dword ptr [edx + 0x1000], 0x102038d0 */ { const u32 m_ = (u32)(edx + 0x1000u); M32(m_) = (u32)(0x102038d0u); }
  /* 10204755 mov dword ptr [edx + 0x9000], 0x10203920 */ { const u32 m_ = (u32)(edx + 0x9000u); M32(m_) = (u32)(0x10203920u); }
  /* 1020475f mov dword ptr [edx + 0x1004], 0x102038d0 */ { const u32 m_ = (u32)(edx + 0x1004u); M32(m_) = (u32)(0x102038d0u); }
  /* 10204769 mov dword ptr [edx + 0x9004], 0x10203920 */ { const u32 m_ = (u32)(edx + 0x9004u); M32(m_) = (u32)(0x10203920u); }
  /* 10204773 mov dword ptr [edx + 0x1008], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x1008u); M32(m_) = (u32)(0x10203640u); }
  /* 1020477d mov dword ptr [edx + 0x9008], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x9008u); M32(m_) = (u32)(0x10203bd0u); }
  /* 10204787 mov dword ptr [edx + 0x100c], 0x10203970 */ { const u32 m_ = (u32)(edx + 0x100cu); M32(m_) = (u32)(0x10203970u); }
  /* 10204791 mov dword ptr [edx + 0x900c], 0x102039c0 */ { const u32 m_ = (u32)(edx + 0x900cu); M32(m_) = (u32)(0x102039c0u); }
  /* 1020479b mov dword ptr [edx + 0x1010], 0x10203a30 */ { const u32 m_ = (u32)(edx + 0x1010u); M32(m_) = (u32)(0x10203a30u); }
  /* 102047a5 mov dword ptr [edx + 0x9010], 0x10203a00 */ { const u32 m_ = (u32)(edx + 0x9010u); M32(m_) = (u32)(0x10203a00u); }
  /* 102047af mov dword ptr [edx + 0x1014], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x1014u); M32(m_) = (u32)(0x10203640u); }
  /* 102047b9 mov dword ptr [edx + 0x9014], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x9014u); M32(m_) = (u32)(0x10203bd0u); }
  /* 102047c3 mov dword ptr [edx + 0x1018], 0x10203a30 */ { const u32 m_ = (u32)(edx + 0x1018u); M32(m_) = (u32)(0x10203a30u); }
  /* 102047cd mov dword ptr [edx + 0x9018], 0x10203a00 */ { const u32 m_ = (u32)(edx + 0x9018u); M32(m_) = (u32)(0x10203a00u); }
  /* 102047d7 mov dword ptr [edx + 0x101c], 0x10203a30 */ { const u32 m_ = (u32)(edx + 0x101cu); M32(m_) = (u32)(0x10203a30u); }
  /* 102047e1 mov dword ptr [edx + 0x901c], 0x10203a00 */ { const u32 m_ = (u32)(edx + 0x901cu); M32(m_) = (u32)(0x10203a00u); }
  /* 102047eb mov dword ptr [edx + 0x1020], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x1020u); M32(m_) = (u32)(0x10203640u); }
  /* 102047f5 mov dword ptr [edx + 0x9020], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x9020u); M32(m_) = (u32)(0x10203bd0u); }
  /* 102047ff mov dword ptr [edx + 0x1024], 0x10203a30 */ { const u32 m_ = (u32)(edx + 0x1024u); M32(m_) = (u32)(0x10203a30u); }
  /* 10204809 mov dword ptr [edx + 0x9024], 0x10203a00 */ { const u32 m_ = (u32)(edx + 0x9024u); M32(m_) = (u32)(0x10203a00u); }
  /* 10204813 mov dword ptr [edx + 0x1028], 0x10203aa0 */ { const u32 m_ = (u32)(edx + 0x1028u); M32(m_) = (u32)(0x10203aa0u); }
  /* 1020481d mov dword ptr [edx + 0x9028], 0x102031e0 */ { const u32 m_ = (u32)(edx + 0x9028u); M32(m_) = (u32)(0x102031e0u); }
  /* 10204827 mov dword ptr [edx + 0x102c], 0x10202eb0 */ { const u32 m_ = (u32)(edx + 0x102cu); M32(m_) = (u32)(0x10202eb0u); }
  /* 10204831 mov dword ptr [edx + 0x902c], 0x10203a60 */ { const u32 m_ = (u32)(edx + 0x902cu); M32(m_) = (u32)(0x10203a60u); }
  /* 1020483b mov dword ptr [edx + 0x1030], 0x10203aa0 */ { const u32 m_ = (u32)(edx + 0x1030u); M32(m_) = (u32)(0x10203aa0u); }
  /* 10204845 mov dword ptr [edx + 0x9030], 0x102031e0 */ { const u32 m_ = (u32)(edx + 0x9030u); M32(m_) = (u32)(0x102031e0u); }
  /* 1020484f mov dword ptr [edx + 0x1034], 0x10203ad0 */ { const u32 m_ = (u32)(edx + 0x1034u); M32(m_) = (u32)(0x10203ad0u); }
  /* 10204859 mov dword ptr [edx + 0x9034], 0x102036d0 */ { const u32 m_ = (u32)(edx + 0x9034u); M32(m_) = (u32)(0x102036d0u); }
  /* 10204863 mov dword ptr [edx + 0x1038], 0x10203b20 */ { const u32 m_ = (u32)(edx + 0x1038u); M32(m_) = (u32)(0x10203b20u); }
  /* 1020486d mov dword ptr [edx + 0x9038], 0x10203710 */ { const u32 m_ = (u32)(edx + 0x9038u); M32(m_) = (u32)(0x10203710u); }
  /* 10204877 mov dword ptr [edx + 0x103c], 0x10203ad0 */ { const u32 m_ = (u32)(edx + 0x103cu); M32(m_) = (u32)(0x10203ad0u); }
  /* 10204881 mov dword ptr [edx + 0x903c], 0x102036d0 */ { const u32 m_ = (u32)(edx + 0x903cu); M32(m_) = (u32)(0x102036d0u); }
  /* 1020488b mov dword ptr [edx + 0x1040], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0x1040u); M32(m_) = (u32)(0x102043c0u); }
  /* 10204895 mov dword ptr [edx + 0x9040], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x9040u); M32(m_) = (u32)(0x102036c0u); }
  /* 1020489f mov dword ptr [edx + 0x1044], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x1044u); M32(m_) = (u32)(0x10203640u); }
  /* 102048a9 mov dword ptr [edx + 0x9044], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x9044u); M32(m_) = (u32)(0x10203bd0u); }
  /* 102048b3 mov dword ptr [edx + 0x1048], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0x1048u); M32(m_) = (u32)(0x102043c0u); }
  /* 102048bd mov dword ptr [edx + 0x9048], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x9048u); M32(m_) = (u32)(0x102036c0u); }
  /* 102048c7 mov dword ptr [edx + 0x11dc], 0x10203b80 */ { const u32 m_ = (u32)(edx + 0x11dcu); M32(m_) = (u32)(0x10203b80u); }
  /* 102048d1 mov dword ptr [edx + 0x91dc], 0x10203bb0 */ { const u32 m_ = (u32)(edx + 0x91dcu); M32(m_) = (u32)(0x10203bb0u); }
  /* 102048db mov dword ptr [edx + 0x11e0], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x11e0u); M32(m_) = (u32)(0x10203640u); }
  /* 102048e5 mov dword ptr [edx + 0x91e0], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x91e0u); M32(m_) = (u32)(0x10203bd0u); }
  /* 102048ef mov dword ptr [edx + 0x11e4], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0x11e4u); M32(m_) = (u32)(0x102043c0u); }
  /* 102048f9 mov dword ptr [edx + 0x91e4], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x91e4u); M32(m_) = (u32)(0x102036c0u); }
  /* 10204903 mov dword ptr [edx + 0x11e8], 0x10203bf0 */ { const u32 m_ = (u32)(edx + 0x11e8u); M32(m_) = (u32)(0x10203bf0u); }
  /* 1020490d mov dword ptr [edx + 0x91e8], 0x10203c80 */ { const u32 m_ = (u32)(edx + 0x91e8u); M32(m_) = (u32)(0x10203c80u); }
  /* 10204917 mov dword ptr [edx + 0x11ec], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0x11ecu); M32(m_) = (u32)(0x102043c0u); }
  /* 10204921 mov dword ptr [edx + 0x91ec], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x91ecu); M32(m_) = (u32)(0x102036c0u); }
  /* 1020492b mov dword ptr [edx + 0x11f0], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x11f0u); M32(m_) = (u32)(0x10203640u); }
  /* 10204935 mov dword ptr [edx + 0x91f0], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x91f0u); M32(m_) = (u32)(0x10203bd0u); }
  /* 1020493f mov dword ptr [edx + 0x12c0], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0x12c0u); M32(m_) = (u32)(0x102043c0u); }
  /* 10204949 mov dword ptr [edx + 0x92c0], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x92c0u); M32(m_) = (u32)(0x102036c0u); }
  /* 10204953 mov dword ptr [edx + 0x12c4], 0x10203cf0 */ { const u32 m_ = (u32)(edx + 0x12c4u); M32(m_) = (u32)(0x10203cf0u); }
  /* 1020495d mov dword ptr [edx + 0x92c4], 0x10203da0 */ { const u32 m_ = (u32)(edx + 0x92c4u); M32(m_) = (u32)(0x10203da0u); }
  /* 10204967 mov dword ptr [edx + 0x12c8], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x12c8u); M32(m_) = (u32)(0x10203640u); }
  /* 10204971 mov dword ptr [edx + 0x92c8], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x92c8u); M32(m_) = (u32)(0x10203bd0u); }
  /* 1020497b mov dword ptr [edx + 0x12cc], 0x10203fc0 */ { const u32 m_ = (u32)(edx + 0x12ccu); M32(m_) = (u32)(0x10203fc0u); }
  /* 10204985 mov dword ptr [edx + 0x92cc], 0x10204070 */ { const u32 m_ = (u32)(edx + 0x92ccu); M32(m_) = (u32)(0x10204070u); }
  /* 1020498f mov dword ptr [edx + 0x12d0], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x12d0u); M32(m_) = (u32)(0x10203640u); }
  /* 10204999 mov dword ptr [edx + 0x92d0], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x92d0u); M32(m_) = (u32)(0x10203bd0u); }
  /* 102049a3 mov dword ptr [edx + 0x12d4], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x12d4u); M32(m_) = (u32)(0x10203640u); }
  /* 102049ad mov dword ptr [edx + 0x92d4], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x92d4u); M32(m_) = (u32)(0x10203bd0u); }
  /* 102049b7 mov dword ptr [edx + 0x12d8], 0x10203640 */ { const u32 m_ = (u32)(edx + 0x12d8u); M32(m_) = (u32)(0x10203640u); }
  /* 102049c1 mov dword ptr [edx + 0x92d8], 0x10203bd0 */ { const u32 m_ = (u32)(edx + 0x92d8u); M32(m_) = (u32)(0x10203bd0u); }
  /* 102049cb mov dword ptr [edx + 0x12dc], 0x10204200 */ { const u32 m_ = (u32)(edx + 0x12dcu); M32(m_) = (u32)(0x10204200u); }
  /* 102049d5 mov dword ptr [edx + 0x92dc], 0x10204270 */ { const u32 m_ = (u32)(edx + 0x92dcu); M32(m_) = (u32)(0x10204270u); }
  /* 102049df mov dword ptr [edx + 0x12e0], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0x12e0u); M32(m_) = (u32)(0x102043c0u); }
  /* 102049e9 mov dword ptr [edx + 0x92e0], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x92e0u); M32(m_) = (u32)(0x102036c0u); }
  /* 102049f3 mov dword ptr [edx + 0x12e4], 0x102043d0 */ { const u32 m_ = (u32)(edx + 0x12e4u); M32(m_) = (u32)(0x102043d0u); }
  /* 102049fd mov dword ptr [edx + 0x92e4], 0x10204450 */ { const u32 m_ = (u32)(edx + 0x92e4u); M32(m_) = (u32)(0x10204450u); }
  /* 10204a07 mov dword ptr [edx + 0x12e8], 0x102043c0 */ { const u32 m_ = (u32)(edx + 0x12e8u); M32(m_) = (u32)(0x102043c0u); }
  /* 10204a11 mov dword ptr [edx + 0x92e8], 0x102036c0 */ { const u32 m_ = (u32)(edx + 0x92e8u); M32(m_) = (u32)(0x102036c0u); }
  /* 10204a1b mov dword ptr [edx + 0x12ec], 0x102044c0 */ { const u32 m_ = (u32)(edx + 0x12ecu); M32(m_) = (u32)(0x102044c0u); }
  /* 10204a25 mov dword ptr [edx + 0x92ec], 0x10204510 */ { const u32 m_ = (u32)(edx + 0x92ecu); M32(m_) = (u32)(0x10204510u); }
  /* 10204a2f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10204a31 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204a32 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10204a40(CPU *c) {
  NATIVE_HOOK(0x10204a40u) REGS; LOADALL;
L_10204a40:;
  /* 10204a40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204a41 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10204a43 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204a44 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10204a4a call 0x10204b10 */ esp -= 4; M32(esp) = 0x10204a4fu; SAVEALL; F_10204b10(c); ABI_CHECK(0x10204b10u, 0x10204a4au); RETCHK(0x10204a4fu, 0x10204a4au); LOADALL;
  /* 10204a4f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204a51 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 10204a56 mov edi, esi */ { edi = (u32)(esi); }
  /* 10204a58 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10204a5a mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 10204a5f lea edi, [esi + 0x8000] */ edi = (u32)((u32)(esi + 0x8000u));
  /* 10204a65 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10204a67 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204a69 call 0x10204550 */ esp -= 4; M32(esp) = 0x10204a6eu; SAVEALL; F_10204550(c); ABI_CHECK(0x10204550u, 0x10204a69u); RETCHK(0x10204a6eu, 0x10204a69u); LOADALL;
  /* 10204a6e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204a6f mov eax, esi */ { eax = (u32)(esi); }
  /* 10204a71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204a72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10204a80(CPU *c) {
  NATIVE_HOOK(0x10204a80u) REGS; LOADALL;
L_10204a80:;
  /* 10204a80 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10204a84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204a85 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10204a87 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10204a8b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204a8c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204a8d lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10204a93 call 0x10204b40 */ esp -= 4; M32(esp) = 0x10204a98u; SAVEALL; F_10204b40(c); ABI_CHECK(0x10204b40u, 0x10204a93u); RETCHK(0x10204a98u, 0x10204a93u); LOADALL;
  /* 10204a98 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10204a9c cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204aa1 jge 0x10204aaa */ if (!LT_) goto L_10204aaa;
  /* 10204aa3 mov eax, dword ptr [esi + eax*4] */ { const u32 m_ = (u32)(esi + eax * 4u); eax = (u32)(M32(m_)); }
  /* 10204aa6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204aa8 jne 0x10204ab1 */ if (!ZF_) goto L_10204ab1;
L_10204aaa:;
  /* 10204aaa or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204aad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204aae ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10204ab1:;
  /* 10204ab1 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10204ab5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10204ab6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204ab8 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10204abau; SAVEALL; call_ind(c, t_); RETCHK(0x10204abau, 0x10204ab8u); LOADALL; }
  /* 10204aba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204abb ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10204ac0(CPU *c) {
  NATIVE_HOOK(0x10204ac0u) REGS; LOADALL;
L_10204ac0:;
  /* 10204ac0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204ac4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204ac5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10204ac7 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10204acb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204acc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204acd lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10204ad3 call 0x10204b40 */ esp -= 4; M32(esp) = 0x10204ad8u; SAVEALL; F_10204b40(c); ABI_CHECK(0x10204b40u, 0x10204ad3u); RETCHK(0x10204ad8u, 0x10204ad3u); LOADALL;
  /* 10204ad8 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10204adc cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204ae1 jge 0x10204aee */ if (!LT_) goto L_10204aee;
  /* 10204ae3 mov eax, dword ptr [esi + eax*4 + 0x8000] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x8000u); eax = (u32)(M32(m_)); }
  /* 10204aea test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204aec jne 0x10204af5 */ if (!ZF_) goto L_10204af5;
L_10204aee:;
  /* 10204aee or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204af1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204af2 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10204af5:;
  /* 10204af5 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10204af9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10204afa mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10204afc call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10204afeu; SAVEALL; call_ind(c, t_); RETCHK(0x10204afeu, 0x10204afcu); LOADALL; }
  /* 10204afe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204aff ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10204b10(CPU *c) {
  NATIVE_HOOK(0x10204b10u) REGS; LOADALL;
L_10204b10:;
  /* 10204b10 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10204b12 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10204b14 mov dword ptr [eax], 0x1020b1a4 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1020b1a4u); }
  /* 10204b1a mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10204b1d mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10204b20 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10204b23 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10204b40(CPU *c) {
  NATIVE_HOOK(0x10204b40u) REGS; LOADALL;
L_10204b40:;
  /* 10204b40 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10204b44 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10204b48 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10204b4b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 10204b4e mov dword ptr [ecx + 0xc], 0 */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 10204b55 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10204b60(CPU *c) {
  NATIVE_HOOK(0x10204b60u) REGS; LOADALL;
L_10204b60:;
  /* 10204b60 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204b63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10204b70(CPU *c) {
  NATIVE_HOOK(0x10204b70u) REGS; LOADALL;
L_10204b70:;
  /* 10204b70 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204b73 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10204b74 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10204b77 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 10204b7a cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204b7c jle 0x10204b85 */ if ((ZF_|LT_)) goto L_10204b85;
  /* 10204b7e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204b81 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204b82 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204b85:;
  /* 10204b85 mov bl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10204b89 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10204b8c mov byte ptr [eax + edx], bl */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10204b8f mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204b92 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10204b93 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10204b96 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204b97 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204ba0(CPU *c) {
  NATIVE_HOOK(0x10204ba0u) REGS; LOADALL;
L_10204ba0:;
  /* 10204ba0 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204ba3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204ba4 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10204ba7 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 10204baa cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204bac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204bad jle 0x10204bb5 */ if ((ZF_|LT_)) goto L_10204bb5;
  /* 10204baf or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204bb2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204bb5:;
  /* 10204bb5 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10204bb8 mov al, byte ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10204bbb mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10204bbf mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10204bc1 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204bc4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10204bc5 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10204bc8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204bd0(CPU *c) {
  NATIVE_HOOK(0x10204bd0u) REGS; LOADALL;
L_10204bd0:;
  /* 10204bd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204bd1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10204bd3 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204bd6 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10204bd9 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204bdc cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204bde jle 0x10204be7 */ if ((ZF_|LT_)) goto L_10204be7;
  /* 10204be0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204be3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204be4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204be7:;
  /* 10204be7 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10204beb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204bec call dword ptr [0x1020b104] */ { const u32 m_ = (u32)(0x1020b104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10204bf2u; SAVEALL; call_ind(c, t_); RETCHK(0x10204bf2u, 0x10204becu); LOADALL; }
  /* 10204bf2 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10204bf5 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10204bf8 mov word ptr [edx + ecx], ax */ { const u32 m_ = (u32)(edx + ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10204bfc mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204bff add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204c02 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10204c05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204c06 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204c10(CPU *c) {
  NATIVE_HOOK(0x10204c10u) REGS; LOADALL;
L_10204c10:;
  /* 10204c10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204c11 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10204c13 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204c16 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10204c19 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 10204c1c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204c1e jle 0x10204c27 */ if ((ZF_|LT_)) goto L_10204c27;
  /* 10204c20 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204c23 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204c24 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204c27:;
  /* 10204c27 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10204c2a movzx eax, word ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M16(m_)); }
  /* 10204c2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204c2f call dword ptr [0x1020b100] */ { const u32 m_ = (u32)(0x1020b100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10204c35u; SAVEALL; call_ind(c, t_); RETCHK(0x10204c35u, 0x10204c2fu); LOADALL; }
  /* 10204c35 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10204c39 mov word ptr [ecx], ax */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10204c3c mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204c3f add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204c42 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10204c45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204c46 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204c50(CPU *c) {
  NATIVE_HOOK(0x10204c50u) REGS; LOADALL;
L_10204c50:;
  /* 10204c50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204c51 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10204c53 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204c56 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10204c59 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204c5c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204c5e jle 0x10204c67 */ if ((ZF_|LT_)) goto L_10204c67;
  /* 10204c60 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204c63 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204c64 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204c67:;
  /* 10204c67 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10204c6b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204c6c call dword ptr [0x1020b0fc] */ { const u32 m_ = (u32)(0x1020b0fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10204c72u; SAVEALL; call_ind(c, t_); RETCHK(0x10204c72u, 0x10204c6cu); LOADALL; }
  /* 10204c72 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10204c75 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10204c78 mov dword ptr [edx + ecx], eax */ { const u32 m_ = (u32)(edx + ecx); M32(m_) = (u32)(eax); }
  /* 10204c7b mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204c7e add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204c81 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10204c84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204c85 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204c90(CPU *c) {
  NATIVE_HOOK(0x10204c90u) REGS; LOADALL;
L_10204c90:;
  /* 10204c90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204c91 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10204c93 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204c96 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10204c99 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 10204c9c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204c9e jle 0x10204ca7 */ if ((ZF_|LT_)) goto L_10204ca7;
  /* 10204ca0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204ca3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204ca4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10204ca7:;
  /* 10204ca7 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10204caa mov eax, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M32(m_)); }
  /* 10204cad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204cae call dword ptr [0x1020b0f8] */ { const u32 m_ = (u32)(0x1020b0f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10204cb4u; SAVEALL; call_ind(c, t_); RETCHK(0x10204cb4u, 0x10204caeu); LOADALL; }
  /* 10204cb4 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10204cb8 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10204cba mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204cbd add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204cc0 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10204cc3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204cc4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204cd0(CPU *c) {
  NATIVE_HOOK(0x10204cd0u) REGS; LOADALL;
L_10204cd0:;
  /* 10204cd0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10204cd1 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10204cd3 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204cd6 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10204cd9 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 10204cdc cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204cde jg 0x10204cfc */ if (!(ZF_|LT_)) goto L_10204cfc;
  /* 10204ce0 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10204ce3 movzx eax, word ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); eax = (u32)(M16(m_)); }
  /* 10204ce7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204ce8 call dword ptr [0x1020b100] */ { const u32 m_ = (u32)(0x1020b100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10204ceeu; SAVEALL; call_ind(c, t_); RETCHK(0x10204ceeu, 0x10204ce8u); LOADALL; }
  /* 10204cee mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10204cf1 add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10204cf4 cmp edx, -1 */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204cf7 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 10204cfa jne 0x10204d03 */ if (!ZF_) goto L_10204d03;
L_10204cfc:;
  /* 10204cfc or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204cff pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204d00 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10204d03:;
  /* 10204d03 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 10204d06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204d07 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10204d0a lea ecx, [eax + edx] */ ecx = (u32)((u32)(eax + edx));
  /* 10204d0d cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204d0f jle 0x10204d19 */ if ((ZF_|LT_)) goto L_10204d19;
L_10204d11:;
  /* 10204d11 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204d12 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204d15 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204d16 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10204d19:;
  /* 10204d19 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10204d1d lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10204d20 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204d22 jg 0x10204d11 */ if (!(ZF_|LT_)) goto L_10204d11;
  /* 10204d24 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10204d27 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204d28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204d29 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10204d2b mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10204d2f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10204d31 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10204d33 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10204d36 mov edi, edx */ { edi = (u32)(edx); }
  /* 10204d38 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10204d3a mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10204d3c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10204d3f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10204d41 mov byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)(0x0u); }
  /* 10204d45 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10204d48 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204d49 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10204d4a add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10204d4c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204d4d mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10204d50 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10204d52 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204d53 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10204d60(CPU *c) {
  NATIVE_HOOK(0x10204d60u) REGS; LOADALL;
L_10204d60:;
  /* 10204d60 test byte ptr [esp + 4], 1 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10204d65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204d66 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10204d68 mov dword ptr [esi], 0x1020b1a4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1020b1a4u); }
  /* 10204d6e je 0x10204d79 */ if (ZF_) goto L_10204d79;
  /* 10204d70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204d71 call 0x10204e07 */ esp -= 4; M32(esp) = 0x10204d76u; SAVEALL; F_10204e07(c); ABI_CHECK(0x10204e07u, 0x10204d71u); RETCHK(0x10204d76u, 0x10204d71u); LOADALL;
  /* 10204d76 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10204d79:;
  /* 10204d79 mov eax, esi */ { eax = (u32)(esi); }
  /* 10204d7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204d7c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10204d80(CPU *c) {
  NATIVE_HOOK(0x10204d80u) REGS; LOADALL;
L_10204d80:;
  /* 10204d80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10204d81 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204d82 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 10204d86 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10204d87 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204d89 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204d8b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204d8c mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10204d90 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10204d92 jle 0x10204da3 */ if ((ZF_|LT_)) goto L_10204da3;
L_10204d94:;
  /* 10204d94 cmp byte ptr [eax + esi], 0 */ { const u32 m_ = (u32)(eax + esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10204d98 je 0x10204da1 */ if (ZF_) goto L_10204da1;
  /* 10204d9a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10204d9b cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204d9d jl 0x10204d94 */ if (LT_) goto L_10204d94;
  /* 10204d9f jmp 0x10204da3 */ goto L_10204da3;
L_10204da1:;
  /* 10204da1 mov ebp, eax */ { ebp = (u32)(eax); }
L_10204da3:;
  /* 10204da3 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204da6 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10204da9 lea edx, [eax + ebp + 2] */ edx = (u32)((u32)(eax + ebp + 0x2u));
  /* 10204dad cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204daf jg 0x10204dd9 */ if (!(ZF_|LT_)) goto L_10204dd9;
  /* 10204db1 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204db4 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204db6 jg 0x10204dd9 */ if (!(ZF_|LT_)) goto L_10204dd9;
  /* 10204db8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204db9 call dword ptr [0x1020b104] */ { const u32 m_ = (u32)(0x1020b104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10204dbfu; SAVEALL; call_ind(c, t_); RETCHK(0x10204dbfu, 0x10204db9u); LOADALL; }
  /* 10204dbf mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10204dc2 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10204dc5 mov word ptr [ecx + edx], ax */ { const u32 m_ = (u32)(ecx + edx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10204dc9 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10204dcc add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10204dcf mov eax, edx */ { eax = (u32)(edx); }
  /* 10204dd1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204dd4 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 10204dd7 jne 0x10204de2 */ if (!ZF_) goto L_10204de2;
L_10204dd9:;
  /* 10204dd9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204dda pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10204ddb or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204dde pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204ddf ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10204de2:;
  /* 10204de2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204de3 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10204de6 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10204de8 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10204dea mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10204dec shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10204def rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10204df1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10204df3 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10204df6 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10204df8 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204dfb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204dfc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204dfd add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204dff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10204e00 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10204e03 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204e04 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10204e07(CPU *c) {
  NATIVE_HOOK(0x10204e07u) REGS; LOADALL;
L_10204e07:;
  /* 10204e07 jmp 0x1020572e */ SAVEALL; F_1020572e(c); return;
}

void F_10204e10(CPU *c) {
  NATIVE_HOOK(0x10204e10u) REGS; LOADALL;
L_10204e10:;
  /* 10204e10 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10204e14 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10204e15 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204e17 je 0x10204eaf */ if (ZF_) goto L_10204eaf;
  /* 10204e1d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10204e1e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10204e1f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10204e21 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10204e25 test esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204e2b mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10204e2f jne 0x10204e3c */ if (!ZF_) goto L_10204e3c;
  /* 10204e31 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10204e34 jne 0x10204ebf */ if (!ZF_) goto L_10204ebf;
  /* 10204e3a jmp 0x10204e63 */ goto L_10204e63;
L_10204e3c:;
  /* 10204e3c mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10204e3e add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10204e41 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10204e43 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10204e46 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10204e49 je 0x10204e76 */ if (ZF_) goto L_10204e76;
  /* 10204e4b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10204e4d je 0x10204e7e */ if (ZF_) goto L_10204e7e;
  /* 10204e4f test esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204e55 jne 0x10204e3c */ if (!ZF_) goto L_10204e3c;
  /* 10204e57 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10204e59 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10204e5c jne 0x10204ebf */ if (!ZF_) goto L_10204ebf;
L_10204e5e:;
  /* 10204e5e and ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10204e61 je 0x10204e76 */ if (ZF_) goto L_10204e76;
L_10204e63:;
  /* 10204e63 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10204e65 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10204e68 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10204e6a add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10204e6d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10204e6f je 0x10204ea8 */ if (ZF_) goto L_10204ea8;
  /* 10204e71 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10204e74 jne 0x10204e63 */ if (!ZF_) goto L_10204e63;
L_10204e76:;
  /* 10204e76 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10204e7a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204e7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204e7c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204e7d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10204e7e:;
  /* 10204e7e test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204e84 je 0x10204e9c */ if (ZF_) goto L_10204e9c;
L_10204e86:;
  /* 10204e86 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10204e88 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10204e8b sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10204e8e je 0x10204f2c */ if (ZF_) goto L_10204f2c;
  /* 10204e94 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204e9a jne 0x10204e86 */ if (!ZF_) goto L_10204e86;
L_10204e9c:;
  /* 10204e9c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10204e9e shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10204ea1 jne 0x10204f17 */ if (!ZF_) goto L_10204f17;
L_10204ea3:;
  /* 10204ea3 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10204ea5 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10204ea8:;
  /* 10204ea8 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10204eab jne 0x10204ea3 */ if (!ZF_) goto L_10204ea3;
  /* 10204ead pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204eae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10204eaf:;
  /* 10204eaf mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10204eb3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204eb4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10204eb5:;
  /* 10204eb5 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10204eb7 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10204eba sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10204ebd je 0x10204e5e */ if (ZF_) goto L_10204e5e;
L_10204ebf:;
  /* 10204ebf mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10204ec4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10204ec6 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10204ec8 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204ecb xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204ecd mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10204ecf add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10204ed2 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204ed7 je 0x10204eb5 */ if (ZF_) goto L_10204eb5;
  /* 10204ed9 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10204edb je 0x10204f09 */ if (ZF_) goto L_10204f09;
  /* 10204edd test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10204edf je 0x10204eff */ if (ZF_) goto L_10204eff;
  /* 10204ee1 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204ee7 je 0x10204ef5 */ if (ZF_) goto L_10204ef5;
  /* 10204ee9 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204eef jne 0x10204eb5 */ if (!ZF_) goto L_10204eb5;
  /* 10204ef1 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10204ef3 jmp 0x10204f0d */ goto L_10204f0d;
L_10204ef5:;
  /* 10204ef5 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10204efb mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10204efd jmp 0x10204f0d */ goto L_10204f0d;
L_10204eff:;
  /* 10204eff and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10204f05 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10204f07 jmp 0x10204f0d */ goto L_10204f0d;
L_10204f09:;
  /* 10204f09 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10204f0b mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
L_10204f0d:;
  /* 10204f0d add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10204f10 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204f12 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10204f15 je 0x10204f23 */ if (ZF_) goto L_10204f23;
L_10204f17:;
  /* 10204f17 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10204f19:;
  /* 10204f19 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10204f1b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10204f1e sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10204f21 jne 0x10204f19 */ if (!ZF_) goto L_10204f19;
L_10204f23:;
  /* 10204f23 and ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10204f26 jne 0x10204ea3 */ if (!ZF_) goto L_10204ea3;
L_10204f2c:;
  /* 10204f2c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10204f30 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10204f31 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10204f32 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10204f33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10204f51(CPU *c) {
  NATIVE_HOOK(0x10204f51u) REGS; LOADALL;
L_10204f51:;
  /* 10204f51 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10204f53 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10204f54 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10204f55(CPU *c) {
  NATIVE_HOOK(0x10204f55u) REGS; LOADALL;
L_10204f55:;
  /* 10204f55 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10204f58 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10204f5c push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10204f5e call dword ptr [0x1020b004] */ { const u32 m_ = (u32)(0x1020b004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10204f64u; SAVEALL; call_ind(c, t_); RETCHK(0x10204f64u, 0x10204f5eu); LOADALL; }
}

void F_10204f65(CPU *c) {
  NATIVE_HOOK(0x10204f65u) REGS; LOADALL;
  goto L_10204f65;
L_10204f34:;
  /* 10204f34 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10204f36 push 0x1020b1a8 */ { u32 v_ = 0x1020b1a8u; esp -= 4; M32(esp) = v_; }
  /* 10204f3b call 0x10205950 */ esp -= 4; M32(esp) = 0x10204f40u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10204f3bu); RETCHK(0x10204f40u, 0x10204f3bu); LOADALL;
  /* 10204f40 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10204f44 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10204f46 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10204f48 call 0x10205805 */ esp -= 4; M32(esp) = 0x10204f4du; SAVEALL; F_10205805(c); ABI_CHECK(0x10205805u, 0x10204f48u); RETCHK(0x10204f4du, 0x10204f48u); LOADALL;
  /* 10204f4d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10204f4e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10204f4f jmp 0x10204f58 */ goto L_10204f58;
L_10204f58:;
  /* 10204f58 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10204f5c push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10204f5e call dword ptr [0x1020b004] */ { const u32 m_ = (u32)(0x1020b004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10204f64u; SAVEALL; call_ind(c, t_); RETCHK(0x10204f64u, 0x10204f5eu); LOADALL; }
L_10204f65:;
  /* 10204f65 cmp ecx, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204f6b jne 0x10204f6e */ if (!ZF_) goto L_10204f6e;
  /* 10204f6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10204f6e:;
  /* 10204f6e jmp 0x10204f34 */ goto L_10204f34;
}

void F_10204f80(CPU *c) {
  NATIVE_HOOK(0x10204f80u) REGS; LOADALL;
L_10204f80:;
  /* 10204f80 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204f85 jae 0x10204f95 */ if (!CF_) goto L_10204f95;
  /* 10204f87 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10204f89 add eax, esp */ { u32 a_ = eax, b_ = esp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204f8b add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204f8e test dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204f90 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 10204f91 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10204f93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204f94 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10204f95:;
  /* 10204f95 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204f96 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
L_10204f9a:;
  /* 10204f9a sub ecx, 0x1000 */ { u32 a_ = ecx, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10204fa0 sub eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204fa5 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204fa7 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10204fac jae 0x10204f9a */ if (!CF_) goto L_10204f9a;
  /* 10204fae sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10204fb0 mov eax, esp */ { eax = (u32)(esp); }
  /* 10204fb2 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10204fb4 mov esp, ecx */ { esp = (u32)(ecx); }
  /* 10204fb6 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10204fb8 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10204fbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10204fbc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10204fbd(CPU *c) {
  NATIVE_HOOK(0x10204fbdu) REGS; LOADALL;
L_10204fbd:;
  /* 10204fbd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10204fbf push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10204fc3 call 0x10205b20 */ esp -= 4; M32(esp) = 0x10204fc8u; SAVEALL; F_10205b20(c); ABI_CHECK(0x10205b20u, 0x10204fc3u); RETCHK(0x10204fc8u, 0x10204fc3u); LOADALL;
  /* 10204fc8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10204fc9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10204fca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10204fcb(CPU *c) {
  NATIVE_HOOK(0x10204fcbu) REGS; LOADALL;
L_10204fcb:;
  /* 10204fcb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10204fcc mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10204fce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10204fcf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10204fd0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10204fd3 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10204fd6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10204fd9 mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 10204fe0 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10204fe2 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10204fe8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10204feb mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10204fee mov esp, dword ptr [ebx - 4] */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); esp = (u32)(M32(m_)); }
  /* 10204ff1 mov ebp, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebp = (u32)(M32(m_)); }
  /* 10204ff4 jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
}

void F_10204ffb(CPU *c) {
  NATIVE_HOOK(0x10204ffbu) REGS; LOADALL;
L_10204ffb:;
  /* 10204ffb pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10204ffc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10204ffd xchg dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); u32 o_ = (u32)__atomic_exchange_n((u32 *)HP(m_), (u32)eax, __ATOMIC_SEQ_CST); eax = (u32)(o_); }
  /* 10205000 jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
}

void F_10205002(CPU *c) {
  NATIVE_HOOK(0x10205002u) REGS; LOADALL;
L_10205002:;
  /* 10205002 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10205003 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10205005 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205006 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205007 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205008 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205009 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020500a mov esi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); esi = (u32)(M32(m_)); }
  /* 10205011 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 10205014 mov dword ptr [ebp - 8], 0x1020502b */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x1020502bu); }
  /* 1020501b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1020501d push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205020 push dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205023 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205026 call 0x1020ab1e */ esp -= 4; M32(esp) = 0x1020502bu; SAVEALL; F_1020ab1e(c); ABI_CHECK(0x1020ab1eu, 0x10205026u); RETCHK(0x1020502bu, 0x10205026u); LOADALL;
  /* 1020502b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1020502e mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10205031 and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205034 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10205037 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 1020503a mov edi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); edi = (u32)(M32(m_)); }
  /* 10205041 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 10205044 mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 10205046 mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 1020504d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020504e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020504f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10205050 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10205051 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1020502b(CPU *c) {
  NATIVE_HOOK(0x1020502bu) REGS; LOADALL;
L_1020502b:;
  /* 1020502b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1020502e mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10205031 and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205034 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10205037 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 1020503a mov edi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); edi = (u32)(M32(m_)); }
  /* 10205041 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 10205044 mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 10205046 mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 1020504d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020504e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020504f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10205050 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10205051 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1020508a(CPU *c) {
  NATIVE_HOOK(0x1020508au) REGS; LOADALL;
L_1020508a:;
  /* 1020508a cld */ c->df = 0;
  /* 1020508b mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020508f mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10205092 cmp ecx, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205098 je 0x102050a6 */ if (ZF_) goto L_102050a6;
  /* 1020509a mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 1020509e or dword ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102050a2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102050a4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102050a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102050a6:;
  /* 102050a6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102050a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102050a9 push dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102050ac push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102050af push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102050b1 push dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102050b5 push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102050b8 push dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102050bc call 0x10206366 */ esp -= 4; M32(esp) = 0x102050c1u; SAVEALL; F_10206366(c); ABI_CHECK(0x10206366u, 0x102050bcu); RETCHK(0x102050c1u, 0x102050bcu); LOADALL;
  /* 102050c1 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102050c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102050c5(CPU *c) {
  NATIVE_HOOK(0x102050c5u) REGS; LOADALL;
L_102050c5:;
  /* 102050c5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102050c6 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102050c8 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102050cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102050cc cmp dword ptr [ebp + 8], 0x123 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x123u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102050d3 jne 0x102050e7 */ if (!ZF_) goto L_102050e7;
  /* 102050d5 mov eax, 0x10205160 */ { eax = (u32)(0x10205160u); }
  /* 102050da mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 102050dd mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 102050df xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102050e1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102050e2 jmp 0x10205189 */ goto L_10205189;
L_102050e7:;
  /* 102050e7 and dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102050eb mov dword ptr [ebp - 0x24], 0x1020518c */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x1020518cu); }
  /* 102050f2 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102050f7 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 102050fa mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 102050fd mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10205100 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10205103 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10205106 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10205109 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 1020510c mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 1020510f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10205112 and dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205116 and dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020511a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020511e mov dword ptr [ebp - 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esp); }
  /* 10205121 mov dword ptr [ebp - 8], ebp */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebp); }
  /* 10205124 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1020512a mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 1020512d lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10205130 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10205136 mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
  /* 1020513d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205140 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 10205143 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10205146 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 10205149 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 1020514c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020514d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205150 push dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205152 call 0x10206441 */ esp -= 4; M32(esp) = 0x10205157u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205152u); RETCHK(0x10205157u, 0x10205152u); LOADALL;
  /* 10205157 call dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020515au; SAVEALL; call_ind(c, t_); RETCHK(0x1020515au, 0x10205157u); LOADALL; }
  /* 1020515a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020515b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020515c and dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205160 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205164 je 0x1020517d */ if (ZF_) goto L_1020517d;
  /* 10205166 mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 1020516d mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 1020516f mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 10205172 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10205174 mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 1020517b jmp 0x10205186 */ goto L_10205186;
L_1020517d:;
  /* 1020517d mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 10205180 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
L_10205186:;
  /* 10205186 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_10205189:;
  /* 10205189 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020518a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020518b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205160(CPU *c) {
  NATIVE_HOOK(0x10205160u) REGS; LOADALL;
L_10205160:;
  /* 10205160 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205164 je 0x1020517d */ if (ZF_) goto L_1020517d;
  /* 10205166 mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 1020516d mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 1020516f mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 10205172 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10205174 mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 1020517b jmp 0x10205186 */ goto L_10205186;
L_1020517d:;
  /* 1020517d mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 10205180 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
L_10205186:;
  /* 10205186 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 10205189 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020518a leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020518b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020518c(CPU *c) {
  NATIVE_HOOK(0x1020518cu) REGS; LOADALL;
L_1020518c:;
  /* 1020518c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1020518d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1020518f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205190 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205191 cld */ c->df = 0;
  /* 10205192 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10205195 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205198 cmp eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020519e je 0x102051b7 */ if (ZF_) goto L_102051b7;
  /* 102051a0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102051a3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 102051a6 or eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102051a9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 102051ac mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 102051af xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102051b1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102051b2 jmp 0x1020523b */ goto L_1020523b;
L_102051b7:;
  /* 102051b7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102051ba mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 102051bd and eax, 0x66 */ { u32 a_ = eax, b_ = 0x66u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102051c0 je 0x102051d1 */ if (ZF_) goto L_102051d1;
  /* 102051c2 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 102051c5 mov dword ptr [eax + 0x24], 1 */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(0x1u); }
  /* 102051cc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102051ce inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102051cf jmp 0x1020523b */ goto L_1020523b;
L_102051d1:;
  /* 102051d1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 102051d3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 102051d6 push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102051d9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 102051dc push dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102051df mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 102051e2 push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102051e5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102051e7 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102051ea mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 102051ed push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102051f0 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102051f3 call 0x10206366 */ esp -= 4; M32(esp) = 0x102051f8u; SAVEALL; F_10206366(c); ABI_CHECK(0x10206366u, 0x102051f3u); RETCHK(0x102051f8u, 0x102051f3u); LOADALL;
  /* 102051f8 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102051fb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 102051fe cmp dword ptr [eax + 0x24], 0 */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205202 jne 0x1020520f */ if (!ZF_) goto L_1020520f;
  /* 10205204 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205207 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020520a call 0x10205002 */ esp -= 4; M32(esp) = 0x1020520fu; SAVEALL; F_10205002(c); ABI_CHECK(0x10205002u, 0x1020520au); RETCHK(0x1020520fu, 0x1020520au); LOADALL;
L_1020520f:;
  /* 1020520f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10205211 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10205213 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10205215 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10205217 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10205219 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 1020521c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020521d push 0x123 */ { u32 v_ = 0x123u; esp -= 4; M32(esp) = v_; }
  /* 10205222 call 0x102050c5 */ esp -= 4; M32(esp) = 0x10205227u; SAVEALL; F_102050c5(c); ABI_CHECK(0x102050c5u, 0x10205222u); RETCHK(0x10205227u, 0x10205222u); LOADALL;
  /* 10205227 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020522a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1020522d mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10205230 mov esp, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); esp = (u32)(M32(m_)); }
  /* 10205233 mov ebp, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ebp = (u32)(M32(m_)); }
  /* 10205236 jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
L_1020523b:;
  /* 1020523b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020523c leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020523d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020523e(CPU *c) {
  NATIVE_HOOK(0x1020523eu) REGS; LOADALL;
L_1020523e:;
  /* 1020523e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1020523f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10205241 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205242 cmp dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205246 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205247 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205248 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205249 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 1020524c mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 1020524f mov ebx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10205252 mov eax, esi */ { eax = (u32)(esi); }
  /* 10205254 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10205257 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 1020525a jl 0x10205294 */ if (LT_) goto L_10205294;
L_1020525c:;
  /* 1020525c cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020525f jne 0x10205266 */ if (!ZF_) goto L_10205266;
  /* 10205261 call 0x1020674c */ esp -= 4; M32(esp) = 0x10205266u; SAVEALL; F_1020674c(c); ABI_CHECK(0x1020674cu, 0x10205261u); RETCHK(0x10205266u, 0x10205261u); LOADALL;
L_10205266:;
  /* 10205266 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10205269 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1020526a lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 1020526d lea eax, [ebx + eax*4] */ eax = (u32)((u32)(ebx + eax * 4u));
  /* 10205270 cmp dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205273 jge 0x1020527a */ if (!LT_) goto L_1020527a;
  /* 10205275 cmp ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205278 jle 0x1020527f */ if ((ZF_|LT_)) goto L_1020527f;
L_1020527a:;
  /* 1020527a cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020527d jne 0x1020528b */ if (!ZF_) goto L_1020528b;
L_1020527f:;
  /* 1020527f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205282 dec dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10205285 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10205288 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
L_1020528b:;
  /* 1020528b cmp dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020528f jge 0x1020525c */ if (!LT_) goto L_1020525c;
  /* 10205291 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_10205294:;
  /* 10205294 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10205297 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10205298 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 1020529a mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 1020529d mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1020529f cmp eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102052a2 ja 0x102052a8 */ if (!(CF_|ZF_)) goto L_102052a8;
  /* 102052a4 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102052a6 jbe 0x102052ad */ if ((CF_|ZF_)) goto L_102052ad;
L_102052a8:;
  /* 102052a8 call 0x1020674c */ esp -= 4; M32(esp) = 0x102052adu; SAVEALL; F_1020674c(c); ABI_CHECK(0x1020674cu, 0x102052a8u); RETCHK(0x102052adu, 0x102052a8u); LOADALL;
L_102052ad:;
  /* 102052ad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102052ae lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 102052b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102052b2 lea eax, [ebx + eax*4] */ eax = (u32)((u32)(ebx + eax * 4u));
  /* 102052b5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102052b6 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102052b7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102052b8(CPU *c) {
  NATIVE_HOOK(0x102052b8u) REGS; LOADALL;
L_102052b8:;
  /* 102052b8 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102052bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102052bd mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 102052c1 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 102052c3 call 0x10206441 */ esp -= 4; M32(esp) = 0x102052c8u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x102052c3u); RETCHK(0x102052c8u, 0x102052c3u); LOADALL;
  /* 102052c8 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 102052ce mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 102052d1 call 0x10206441 */ esp -= 4; M32(esp) = 0x102052d6u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x102052d1u); RETCHK(0x102052d6u, 0x102052d1u); LOADALL;
  /* 102052d6 mov dword ptr [eax + 0x88], esi */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(esi); }
  /* 102052dc mov eax, esi */ { eax = (u32)(esi); }
  /* 102052de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102052df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102052e0(CPU *c) {
  NATIVE_HOOK(0x102052e0u) REGS; LOADALL;
L_102052e0:;
  /* 102052e0 call 0x10206441 */ esp -= 4; M32(esp) = 0x102052e5u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x102052e0u); RETCHK(0x102052e5u, 0x102052e0u); LOADALL;
  /* 102052e5 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 102052eb jmp 0x102052f8 */ goto L_102052f8;
L_102052ed:;
  /* 102052ed mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 102052ef cmp ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102052f3 je 0x102052fe */ if (ZF_) goto L_102052fe;
  /* 102052f5 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
L_102052f8:;
  /* 102052f8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102052fa jne 0x102052ed */ if (!ZF_) goto L_102052ed;
  /* 102052fc inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102052fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_102052fe:;
  /* 102052fe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205300 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205301(CPU *c) {
  NATIVE_HOOK(0x10205301u) REGS; LOADALL;
L_10205301:;
  /* 10205301 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205302 call 0x10206441 */ esp -= 4; M32(esp) = 0x10205307u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205302u); RETCHK(0x10205307u, 0x10205302u); LOADALL;
  /* 10205307 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1020530b cmp esi, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205311 jne 0x10205323 */ if (!ZF_) goto L_10205323;
  /* 10205313 call 0x10206441 */ esp -= 4; M32(esp) = 0x10205318u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205313u); RETCHK(0x10205318u, 0x10205313u); LOADALL;
  /* 10205318 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1020531b mov dword ptr [eax + 0x88], ecx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(ecx); }
  /* 10205321 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10205322 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10205323:;
  /* 10205323 call 0x10206441 */ esp -= 4; M32(esp) = 0x10205328u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205323u); RETCHK(0x10205328u, 0x10205323u); LOADALL;
  /* 10205328 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 1020532e jmp 0x10205339 */ goto L_10205339;
L_10205330:;
  /* 10205330 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10205333 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205335 je 0x10205345 */ if (ZF_) goto L_10205345;
  /* 10205337 mov eax, ecx */ { eax = (u32)(ecx); }
L_10205339:;
  /* 10205339 cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020533d jne 0x10205330 */ if (!ZF_) goto L_10205330;
  /* 1020533f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10205340 jmp 0x1020674c */ SAVEALL; F_1020674c(c); return;
L_10205345:;
  /* 10205345 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10205348 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 1020534b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020534c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020534d(CPU *c) {
  NATIVE_HOOK(0x1020534du) REGS; LOADALL;
L_1020534d:;
  /* 1020534d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1020534e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10205350 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10205353 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10205358 and dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020535c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1020535f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10205362 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10205365 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10205368 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 1020536b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020536c mov dword ptr [ebp - 0x14], 0x1020508a */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x1020508au); }
  /* 10205373 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 10205376 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10205379 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1020537f mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10205382 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10205385 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 1020538b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020538e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020538f push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205392 call 0x10206780 */ esp -= 4; M32(esp) = 0x10205397u; SAVEALL; F_10206780(c); ABI_CHECK(0x10206780u, 0x10205392u); RETCHK(0x10205397u, 0x10205392u); LOADALL;
  /* 10205397 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10205399 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1020539c mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 102053a2 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 102053a4 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 102053a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102053a8(CPU *c) {
  NATIVE_HOOK(0x102053a8u) REGS; LOADALL;
L_102053a8:;
  /* 102053a8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102053a9 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102053ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102053ac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102053ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102053ae push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102053af push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102053b1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 102053b3 push 0x102053c0 */ { u32 v_ = 0x102053c0u; esp -= 4; M32(esp) = v_; }
  /* 102053b8 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102053bb call 0x1020ab1e */ esp -= 4; M32(esp) = 0x102053c0u; SAVEALL; F_1020ab1e(c); ABI_CHECK(0x1020ab1eu, 0x102053bbu); RETCHK(0x102053c0u, 0x102053bbu); LOADALL;
  /* 102053c0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102053c1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102053c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102053c3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102053c4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 102053c6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102053c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102053c0(CPU *c) {
  NATIVE_HOOK(0x102053c0u) REGS; LOADALL;
L_102053c0:;
  /* 102053c0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102053c1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102053c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102053c3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102053c4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 102053c6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102053c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102053c8(CPU *c) {
  NATIVE_HOOK(0x102053c8u) REGS; LOADALL;
L_102053c8:;
  /* 102053c8 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102053cc test dword ptr [ecx + 4], 6 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102053d3 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 102053d8 je 0x102053e9 */ if (ZF_) goto L_102053e9;
  /* 102053da mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102053de mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 102053e2 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 102053e4 mov eax, 3 */ { eax = (u32)(0x3u); }
L_102053e9:;
  /* 102053e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102053ea(CPU *c) {
  NATIVE_HOOK(0x102053eau) REGS; LOADALL;
L_102053ea:;
  /* 102053ea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102053eb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102053ec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102053ed mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 102053f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102053f2 push -2 */ { u32 v_ = 0xfffffffeu; esp -= 4; M32(esp) = v_; }
  /* 102053f4 push 0x102053c8 */ { u32 v_ = 0x102053c8u; esp -= 4; M32(esp) = v_; }
  /* 102053f9 push dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205400 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
L_10205407:;
  /* 10205407 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 1020540b mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 1020540e mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 10205411 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205414 je 0x10205444 */ if (ZF_) goto L_10205444;
  /* 10205416 cmp esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020541a je 0x10205444 */ if (ZF_) goto L_10205444;
  /* 1020541c lea esi, [esi + esi*2] */ esi = (u32)((u32)(esi + esi * 2u));
  /* 1020541f mov ecx, dword ptr [ebx + esi*4] */ { const u32 m_ = (u32)(ebx + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 10205422 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10205426 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10205429 cmp dword ptr [ebx + esi*4 + 4], 0 */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020542e jne 0x10205442 */ if (!ZF_) goto L_10205442;
  /* 10205430 push 0x101 */ { u32 v_ = 0x101u; esp -= 4; M32(esp) = v_; }
  /* 10205435 mov eax, dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205439 call 0x1020547e */ esp -= 4; M32(esp) = 0x1020543eu; SAVEALL; F_1020547e(c); ABI_CHECK(0x1020547eu, 0x10205439u); RETCHK(0x1020543eu, 0x10205439u); LOADALL;
  /* 1020543e call dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10205442u; SAVEALL; call_ind(c, t_); RETCHK(0x10205442u, 0x1020543eu); LOADALL; }
L_10205442:;
  /* 10205442 jmp 0x10205407 */ goto L_10205407;
L_10205444:;
  /* 10205444 pop dword ptr fs:[0] */ { u32 v_ = M32(esp); esp += 4; const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = v_; }
  /* 1020544b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020544e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020544f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10205450 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10205451 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205452(CPU *c) {
  NATIVE_HOOK(0x10205452u) REGS; LOADALL;
L_10205452:;
  /* 10205452 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205454 mov ecx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ecx = (u32)(M32(m_)); }
  /* 1020545b cmp dword ptr [ecx + 4], 0x102053c8 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x102053c8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205462 jne 0x10205474 */ if (!ZF_) goto L_10205474;
  /* 10205464 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10205467 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 1020546a cmp dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020546d jne 0x10205474 */ if (!ZF_) goto L_10205474;
  /* 1020546f mov eax, 1 */ { eax = (u32)(0x1u); }
L_10205474:;
  /* 10205474 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205475(CPU *c) {
  NATIVE_HOOK(0x10205475u) REGS; LOADALL;
L_10205475:;
  /* 10205475 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205476 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205477 mov ebx, 0x1020d050 */ { ebx = (u32)(0x1020d050u); }
  /* 1020547c jmp 0x10205488 */ goto L_10205488;
L_10205488:;
  /* 10205488 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 1020548b mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 1020548e mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 10205491 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205492 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10205493 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_1020547e(CPU *c) {
  NATIVE_HOOK(0x1020547eu) REGS; LOADALL;
L_1020547e:;
  /* 1020547e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020547f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205480 mov ebx, 0x1020d050 */ { ebx = (u32)(0x1020d050u); }
  /* 10205485 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10205488 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 1020548b mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 1020548e mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 10205491 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205492 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10205493 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10205496(CPU *c) {
  NATIVE_HOOK(0x10205496u) REGS; LOADALL;
L_10205496:;
  /* 10205496 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10205497 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10205499 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1020549c cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020549f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102054a0 jne 0x10205586 */ if (!ZF_) goto L_10205586;
  /* 102054a6 mov eax, 0x94 */ { eax = (u32)(0x94u); }
  /* 102054ab call 0x10204f80 */ esp -= 4; M32(esp) = 0x102054b0u; SAVEALL; F_10204f80(c); ABI_CHECK(0x10204f80u, 0x102054abu); RETCHK(0x102054b0u, 0x102054abu); LOADALL;
  /* 102054b0 mov esi, esp */ { esi = (u32)(esp); }
  /* 102054b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102054b3 mov dword ptr [esi], 0x94 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x94u); }
  /* 102054b9 call dword ptr [0x1020b014] */ { const u32 m_ = (u32)(0x1020b014u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102054bfu; SAVEALL; call_ind(c, t_); RETCHK(0x102054bfu, 0x102054b9u); LOADALL; }
  /* 102054bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102054c1 je 0x102055fb */ if (ZF_) goto L_102055fb;
  /* 102054c7 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 102054ca mov dword ptr [0x1020d950], ecx */ { const u32 m_ = (u32)(0x1020d950u); M32(m_) = (u32)(ecx); }
  /* 102054d0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 102054d3 mov dword ptr [0x1020d95c], eax */ { const u32 m_ = (u32)(0x1020d95cu); M32(m_) = (u32)(eax); }
  /* 102054d8 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 102054db mov dword ptr [0x1020d960], edx */ { const u32 m_ = (u32)(0x1020d960u); M32(m_) = (u32)(edx); }
  /* 102054e1 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 102054e4 and esi, 0x7fff */ { u32 a_ = esi, b_ = 0x7fffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102054ea cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102054ed mov dword ptr [0x1020d954], esi */ { const u32 m_ = (u32)(0x1020d954u); M32(m_) = (u32)(esi); }
  /* 102054f3 je 0x10205501 */ if (ZF_) goto L_10205501;
  /* 102054f5 or esi, 0x8000 */ { u32 a_ = esi, b_ = 0x8000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102054fb mov dword ptr [0x1020d954], esi */ { const u32 m_ = (u32)(0x1020d954u); M32(m_) = (u32)(esi); }
L_10205501:;
  /* 10205501 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10205504 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10205506 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10205508 mov dword ptr [0x1020d958], eax */ { const u32 m_ = (u32)(0x1020d958u); M32(m_) = (u32)(eax); }
  /* 1020550d call 0x10207111 */ esp -= 4; M32(esp) = 0x10205512u; SAVEALL; F_10207111(c); ABI_CHECK(0x10207111u, 0x1020550du); RETCHK(0x10205512u, 0x1020550du); LOADALL;
  /* 10205512 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205514 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205515 je 0x102055fb */ if (ZF_) goto L_102055fb;
  /* 1020551b call 0x10206628 */ esp -= 4; M32(esp) = 0x10205520u; SAVEALL; F_10206628(c); ABI_CHECK(0x10206628u, 0x1020551bu); RETCHK(0x10205520u, 0x1020551bu); LOADALL;
  /* 10205520 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205522 jne 0x1020552e */ if (!ZF_) goto L_1020552e;
L_10205524:;
  /* 10205524 call 0x10207162 */ esp -= 4; M32(esp) = 0x10205529u; SAVEALL; F_10207162(c); ABI_CHECK(0x10207162u, 0x10205524u); RETCHK(0x10205529u, 0x10205524u); LOADALL;
  /* 10205529 jmp 0x102055fb */ goto L_102055fb;
L_1020552e:;
  /* 1020552e call 0x1020706f */ esp -= 4; M32(esp) = 0x10205533u; SAVEALL; F_1020706f(c); ABI_CHECK(0x1020706fu, 0x1020552eu); RETCHK(0x10205533u, 0x1020552eu); LOADALL;
  /* 10205533 call dword ptr [0x1020b010] */ { const u32 m_ = (u32)(0x1020b010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10205539u; SAVEALL; call_ind(c, t_); RETCHK(0x10205539u, 0x10205533u); LOADALL; }
  /* 10205539 mov dword ptr [0x1020e174], eax */ { const u32 m_ = (u32)(0x1020e174u); M32(m_) = (u32)(eax); }
  /* 1020553e call 0x10206f4d */ esp -= 4; M32(esp) = 0x10205543u; SAVEALL; F_10206f4d(c); ABI_CHECK(0x10206f4du, 0x1020553eu); RETCHK(0x10205543u, 0x1020553eu); LOADALL;
  /* 10205543 mov dword ptr [0x1020d928], eax */ { const u32 m_ = (u32)(0x1020d928u); M32(m_) = (u32)(eax); }
  /* 10205548 call 0x10206a2e */ esp -= 4; M32(esp) = 0x1020554du; SAVEALL; F_10206a2e(c); ABI_CHECK(0x10206a2eu, 0x10205548u); RETCHK(0x1020554du, 0x10205548u); LOADALL;
  /* 1020554d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020554f jl 0x1020557f */ if (LT_) goto L_1020557f;
  /* 10205551 call 0x10206eab */ esp -= 4; M32(esp) = 0x10205556u; SAVEALL; F_10206eab(c); ABI_CHECK(0x10206eabu, 0x10205551u); RETCHK(0x10205556u, 0x10205551u); LOADALL;
  /* 10205556 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205558 jl 0x1020557a */ if (LT_) goto L_1020557a;
  /* 1020555a call 0x10206c78 */ esp -= 4; M32(esp) = 0x1020555fu; SAVEALL; F_10206c78(c); ABI_CHECK(0x10206c78u, 0x1020555au); RETCHK(0x1020555fu, 0x1020555au); LOADALL;
  /* 1020555f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205561 jl 0x1020557a */ if (LT_) goto L_1020557a;
  /* 10205563 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10205565 call 0x10206826 */ esp -= 4; M32(esp) = 0x1020556au; SAVEALL; F_10206826(c); ABI_CHECK(0x10206826u, 0x10205565u); RETCHK(0x1020556au, 0x10205565u); LOADALL;
  /* 1020556a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020556c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020556d jne 0x1020557a */ if (!ZF_) goto L_1020557a;
  /* 1020556f inc dword ptr [0x1020d924] */ { const u32 m_ = (u32)(0x1020d924u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10205575 jmp 0x1020560c */ goto L_1020560c;
L_1020557a:;
  /* 1020557a call 0x10206c2c */ esp -= 4; M32(esp) = 0x1020557fu; SAVEALL; F_10206c2c(c); ABI_CHECK(0x10206c2cu, 0x1020557au); RETCHK(0x1020557fu, 0x1020557au); LOADALL;
L_1020557f:;
  /* 1020557f call 0x10206411 */ esp -= 4; M32(esp) = 0x10205584u; SAVEALL; F_10206411(c); ABI_CHECK(0x10206411u, 0x1020557fu); RETCHK(0x10205584u, 0x1020557fu); LOADALL;
  /* 10205584 jmp 0x10205524 */ goto L_10205524;
L_10205586:;
  /* 10205586 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205588 jne 0x102055b6 */ if (!ZF_) goto L_102055b6;
  /* 1020558a cmp dword ptr [0x1020d924], eax */ { const u32 m_ = (u32)(0x1020d924u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205590 jle 0x102055fb */ if ((ZF_|LT_)) goto L_102055fb;
  /* 10205592 dec dword ptr [0x1020d924] */ { const u32 m_ = (u32)(0x1020d924u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10205598 cmp dword ptr [0x1020d98c], eax */ { const u32 m_ = (u32)(0x1020d98cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020559e jne 0x102055a5 */ if (!ZF_) goto L_102055a5;
  /* 102055a0 call 0x10206964 */ esp -= 4; M32(esp) = 0x102055a5u; SAVEALL; F_10206964(c); ABI_CHECK(0x10206964u, 0x102055a0u); RETCHK(0x102055a5u, 0x102055a0u); LOADALL;
L_102055a5:;
  /* 102055a5 call 0x10206c2c */ esp -= 4; M32(esp) = 0x102055aau; SAVEALL; F_10206c2c(c); ABI_CHECK(0x10206c2cu, 0x102055a5u); RETCHK(0x102055aau, 0x102055a5u); LOADALL;
  /* 102055aa call 0x10206411 */ esp -= 4; M32(esp) = 0x102055afu; SAVEALL; F_10206411(c); ABI_CHECK(0x10206411u, 0x102055aau); RETCHK(0x102055afu, 0x102055aau); LOADALL;
  /* 102055af call 0x10207162 */ esp -= 4; M32(esp) = 0x102055b4u; SAVEALL; F_10207162(c); ABI_CHECK(0x10207162u, 0x102055afu); RETCHK(0x102055b4u, 0x102055afu); LOADALL;
  /* 102055b4 jmp 0x1020560c */ goto L_1020560c;
L_102055b6:;
  /* 102055b6 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102055b9 jne 0x102055ff */ if (!ZF_) goto L_102055ff;
  /* 102055bb push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 102055c0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 102055c2 call 0x10206973 */ esp -= 4; M32(esp) = 0x102055c7u; SAVEALL; F_10206973(c); ABI_CHECK(0x10206973u, 0x102055c2u); RETCHK(0x102055c7u, 0x102055c2u); LOADALL;
  /* 102055c7 mov esi, eax */ { esi = (u32)(eax); }
  /* 102055c9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102055cb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102055cc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102055cd je 0x102055fb */ if (ZF_) goto L_102055fb;
  /* 102055cf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102055d0 push dword ptr [0x1020d068] */ { const u32 m_ = (u32)(0x1020d068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102055d6 call dword ptr [0x1020d944] */ { const u32 m_ = (u32)(0x1020d944u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102055dcu; SAVEALL; call_ind(c, t_); RETCHK(0x102055dcu, 0x102055d6u); LOADALL; }
  /* 102055dc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102055de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102055df je 0x102055f5 */ if (ZF_) goto L_102055f5;
  /* 102055e1 call 0x1020642e */ esp -= 4; M32(esp) = 0x102055e6u; SAVEALL; F_1020642e(c); ABI_CHECK(0x1020642eu, 0x102055e1u); RETCHK(0x102055e6u, 0x102055e1u); LOADALL;
  /* 102055e6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102055e7 call dword ptr [0x1020b00c] */ { const u32 m_ = (u32)(0x1020b00cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102055edu; SAVEALL; call_ind(c, t_); RETCHK(0x102055edu, 0x102055e7u); LOADALL; }
  /* 102055ed or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102055f1 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 102055f3 jmp 0x1020560c */ goto L_1020560c;
L_102055f5:;
  /* 102055f5 call 0x1020572e */ esp -= 4; M32(esp) = 0x102055fau; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x102055f5u); RETCHK(0x102055fau, 0x102055f5u); LOADALL;
  /* 102055fa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_102055fb:;
  /* 102055fb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102055fd jmp 0x1020560f */ goto L_1020560f;
L_102055ff:;
  /* 102055ff cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205602 jne 0x1020560c */ if (!ZF_) goto L_1020560c;
  /* 10205604 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10205606 call 0x102065f9 */ esp -= 4; M32(esp) = 0x1020560bu; SAVEALL; F_102065f9(c); ABI_CHECK(0x102065f9u, 0x10205606u); RETCHK(0x1020560bu, 0x10205606u); LOADALL;
  /* 1020560b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1020560c:;
  /* 1020560c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020560e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1020560f:;
  /* 1020560f lea esp, [ebp - 4] */ esp = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10205612 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10205613 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10205614 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10205617(CPU *c) {
  NATIVE_HOOK(0x10205617u) REGS; LOADALL;
L_10205617:;
  /* 10205617 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10205619 push 0x1020b1b8 */ { u32 v_ = 0x1020b1b8u; esp -= 4; M32(esp) = v_; }
  /* 1020561e call 0x10205950 */ esp -= 4; M32(esp) = 0x10205623u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x1020561eu); RETCHK(0x10205623u, 0x1020561eu); LOADALL;
  /* 10205623 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205625 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10205626 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10205629 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1020562c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1020562e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205630 jne 0x1020563e */ if (!ZF_) goto L_1020563e;
  /* 10205632 cmp dword ptr [0x1020d924], edi */ { const u32 m_ = (u32)(0x1020d924u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205638 je 0x102056f1 */ if (ZF_) goto L_102056f1;
L_1020563e:;
  /* 1020563e mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10205641 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205643 je 0x1020564a */ if (ZF_) goto L_1020564a;
  /* 10205645 cmp esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205648 jne 0x1020567b */ if (!ZF_) goto L_1020567b;
L_1020564a:;
  /* 1020564a mov eax, dword ptr [0x1020e178] */ { const u32 m_ = (u32)(0x1020e178u); eax = (u32)(M32(m_)); }
  /* 1020564f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205651 je 0x1020565f */ if (ZF_) goto L_1020565f;
  /* 10205653 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205656 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205657 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020565a call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1020565cu; SAVEALL; call_ind(c, t_); RETCHK(0x1020565cu, 0x1020565au); LOADALL; }
  /* 1020565c mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_1020565f:;
  /* 1020565f cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205662 je 0x102056ed */ if (ZF_) goto L_102056ed;
  /* 10205668 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020566b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020566c push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020566f call 0x10205496 */ esp -= 4; M32(esp) = 0x10205674u; SAVEALL; F_10205496(c); ABI_CHECK(0x10205496u, 0x1020566fu); RETCHK(0x10205674u, 0x1020566fu); LOADALL;
  /* 10205674 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10205677 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205679 je 0x102056ed */ if (ZF_) goto L_102056ed;
L_1020567b:;
  /* 1020567b mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 1020567e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020567f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205680 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205683 call 0x10201000 */ esp -= 4; M32(esp) = 0x10205688u; SAVEALL; F_10201000(c); ABI_CHECK(0x10201000u, 0x10205683u); RETCHK(0x10205688u, 0x10205683u); LOADALL;
  /* 10205688 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1020568b cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020568e jne 0x1020569e */ if (!ZF_) goto L_1020569e;
  /* 10205690 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205692 jne 0x1020569e */ if (!ZF_) goto L_1020569e;
  /* 10205694 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205695 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205696 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205699 call 0x10205496 */ esp -= 4; M32(esp) = 0x1020569eu; SAVEALL; F_10205496(c); ABI_CHECK(0x10205496u, 0x10205699u); RETCHK(0x1020569eu, 0x10205699u); LOADALL;
L_1020569e:;
  /* 1020569e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102056a0 je 0x102056a7 */ if (ZF_) goto L_102056a7;
  /* 102056a2 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102056a5 jne 0x102056d0 */ if (!ZF_) goto L_102056d0;
L_102056a7:;
  /* 102056a7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102056a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102056a9 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102056ac call 0x10205496 */ esp -= 4; M32(esp) = 0x102056b1u; SAVEALL; F_10205496(c); ABI_CHECK(0x10205496u, 0x102056acu); RETCHK(0x102056b1u, 0x102056acu); LOADALL;
  /* 102056b1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102056b3 jne 0x102056b8 */ if (!ZF_) goto L_102056b8;
  /* 102056b5 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
L_102056b8:;
  /* 102056b8 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102056bb je 0x102056d0 */ if (ZF_) goto L_102056d0;
  /* 102056bd mov eax, dword ptr [0x1020e178] */ { const u32 m_ = (u32)(0x1020e178u); eax = (u32)(M32(m_)); }
  /* 102056c2 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102056c4 je 0x102056d0 */ if (ZF_) goto L_102056d0;
  /* 102056c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102056c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102056c8 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102056cb call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x102056cdu; SAVEALL; call_ind(c, t_); RETCHK(0x102056cdu, 0x102056cbu); LOADALL; }
  /* 102056cd mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_102056d0:;
  /* 102056d0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102056d4 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 102056d7 jmp 0x102056f3 */ goto L_102056f3;
L_102056ed:;
  /* 102056ed or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_102056f1:;
  /* 102056f1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_102056f3:;
  /* 102056f3 call 0x1020598b */ esp -= 4; M32(esp) = 0x102056f8u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x102056f3u); RETCHK(0x102056f8u, 0x102056f3u); LOADALL;
  /* 102056f8 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102056d9(CPU *c) {
  NATIVE_HOOK(0x102056d9u) REGS; LOADALL;
L_102056d9:;
  /* 102056d9 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 102056dc mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 102056de mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 102056e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102056e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102056e2 call 0x10207345 */ esp -= 4; M32(esp) = 0x102056e7u; SAVEALL; F_10207345(c); ABI_CHECK(0x10207345u, 0x102056e2u); RETCHK(0x102056e7u, 0x102056e2u); LOADALL;
  /* 102056e7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102056e8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102056e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102056ea(CPU *c) {
  NATIVE_HOOK(0x102056eau) REGS; LOADALL;
L_102056ea:;
  /* 102056ea mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 102056ed or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 102056f1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102056f3 call 0x1020598b */ esp -= 4; M32(esp) = 0x102056f8u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x102056f3u); RETCHK(0x102056f8u, 0x102056f3u); LOADALL;
  /* 102056f8 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102056fb(CPU *c) {
  NATIVE_HOOK(0x102056fbu) REGS; LOADALL;
L_102056fb:;
  /* 102056fb mov eax, dword ptr [0x1020d930] */ { const u32 m_ = (u32)(0x1020d930u); eax = (u32)(M32(m_)); }
  /* 10205700 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205703 je 0x10205712 */ if (ZF_) goto L_10205712;
  /* 10205705 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205707 jne 0x10205717 */ if (!ZF_) goto L_10205717;
  /* 10205709 cmp dword ptr [0x1020d934], 1 */ { const u32 m_ = (u32)(0x1020d934u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205710 jne 0x10205717 */ if (!ZF_) goto L_10205717;
L_10205712:;
  /* 10205712 call 0x102074d7 */ esp -= 4; M32(esp) = 0x10205717u; SAVEALL; F_102074d7(c); ABI_CHECK(0x102074d7u, 0x10205712u); RETCHK(0x10205717u, 0x10205712u); LOADALL;
L_10205717:;
  /* 10205717 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020571b call 0x10207360 */ esp -= 4; M32(esp) = 0x10205720u; SAVEALL; F_10207360(c); ABI_CHECK(0x10207360u, 0x1020571bu); RETCHK(0x10205720u, 0x1020571bu); LOADALL;
  /* 10205720 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 10205725 call dword ptr [0x1020d060] */ { const u32 m_ = (u32)(0x1020d060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020572bu; SAVEALL; call_ind(c, t_); RETCHK(0x1020572bu, 0x10205725u); LOADALL; }
  /* 1020572b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020572c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020572d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020572e(CPU *c) {
  NATIVE_HOOK(0x1020572eu) REGS; LOADALL;
L_1020572e:;
  /* 1020572e push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10205730 push 0x1020b1c8 */ { u32 v_ = 0x1020b1c8u; esp -= 4; M32(esp) = v_; }
  /* 10205735 call 0x10205950 */ esp -= 4; M32(esp) = 0x1020573au; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10205735u); RETCHK(0x1020573au, 0x10205735u); LOADALL;
  /* 1020573a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1020573d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020573f je 0x10205799 */ if (ZF_) goto L_10205799;
  /* 10205741 cmp dword ptr [0x1020e040], 3 */ { const u32 m_ = (u32)(0x1020e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205748 jne 0x1020578a */ if (!ZF_) goto L_1020578a;
  /* 1020574a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1020574c call 0x10207663 */ esp -= 4; M32(esp) = 0x10205751u; SAVEALL; F_10207663(c); ABI_CHECK(0x10207663u, 0x1020574cu); RETCHK(0x10205751u, 0x1020574cu); LOADALL;
  /* 10205751 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205752 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205756 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205757 call 0x102076dc */ esp -= 4; M32(esp) = 0x1020575cu; SAVEALL; F_102076dc(c); ABI_CHECK(0x102076dcu, 0x10205757u); RETCHK(0x1020575cu, 0x10205757u); LOADALL;
  /* 1020575c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020575d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10205760 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205762 je 0x1020576d */ if (ZF_) goto L_1020576d;
  /* 10205764 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205765 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205766 call 0x10207707 */ esp -= 4; M32(esp) = 0x1020576bu; SAVEALL; F_10207707(c); ABI_CHECK(0x10207707u, 0x10205766u); RETCHK(0x1020576bu, 0x10205766u); LOADALL;
  /* 1020576b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020576c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1020576d:;
  /* 1020576d or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205771 call 0x10205781 */ esp -= 4; M32(esp) = 0x10205776u; SAVEALL; F_10205781(c); ABI_CHECK(0x10205781u, 0x10205771u); RETCHK(0x10205776u, 0x10205771u); LOADALL;
  /* 10205776 cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020577a jne 0x10205799 */ if (!ZF_) goto L_10205799;
  /* 1020577c push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020577f jmp 0x1020578b */ goto L_1020578b;
L_1020578a:;
  /* 1020578a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_1020578b:;
  /* 1020578b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1020578d push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205793 call dword ptr [0x1020b018] */ { const u32 m_ = (u32)(0x1020b018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10205799u; SAVEALL; call_ind(c, t_); RETCHK(0x10205799u, 0x10205793u); LOADALL; }
L_10205799:;
  /* 10205799 call 0x1020598b */ esp -= 4; M32(esp) = 0x1020579eu; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10205799u); RETCHK(0x1020579eu, 0x10205799u); LOADALL;
  /* 1020579e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205781(CPU *c) {
  NATIVE_HOOK(0x10205781u) REGS; LOADALL;
L_10205781:;
  /* 10205781 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10205783 call 0x102075ae */ esp -= 4; M32(esp) = 0x10205788u; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10205783u); RETCHK(0x10205788u, 0x10205783u); LOADALL;
  /* 10205788 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205789 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020579f(CPU *c) {
  NATIVE_HOOK(0x1020579fu) REGS; LOADALL;
L_1020579f:;
  /* 1020579f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102057a0 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102057a2 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102057a5 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102057aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102057ac je 0x102057b5 */ if (ZF_) goto L_102057b5;
  /* 102057ae cmp eax, 0xbb40e64e */ { u32 a_ = eax, b_ = 0xbb40e64eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102057b3 jne 0x10205803 */ if (!ZF_) goto L_10205803;
L_102057b5:;
  /* 102057b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102057b6 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 102057b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102057ba call dword ptr [0x1020b028] */ { const u32 m_ = (u32)(0x1020b028u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102057c0u; SAVEALL; call_ind(c, t_); RETCHK(0x102057c0u, 0x102057bau); LOADALL; }
  /* 102057c0 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 102057c3 xor esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102057c6 call dword ptr [0x1020b024] */ { const u32 m_ = (u32)(0x1020b024u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102057ccu; SAVEALL; call_ind(c, t_); RETCHK(0x102057ccu, 0x102057c6u); LOADALL; }
  /* 102057cc xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102057ce call dword ptr [0x1020b00c] */ { const u32 m_ = (u32)(0x1020b00cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102057d4u; SAVEALL; call_ind(c, t_); RETCHK(0x102057d4u, 0x102057ceu); LOADALL; }
  /* 102057d4 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102057d6 call dword ptr [0x1020b020] */ { const u32 m_ = (u32)(0x1020b020u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102057dcu; SAVEALL; call_ind(c, t_); RETCHK(0x102057dcu, 0x102057d6u); LOADALL; }
  /* 102057dc xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102057de lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 102057e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102057e2 call dword ptr [0x1020b01c] */ { const u32 m_ = (u32)(0x1020b01cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102057e8u; SAVEALL; call_ind(c, t_); RETCHK(0x102057e8u, 0x102057e2u); LOADALL; }
  /* 102057e8 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 102057eb xor eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102057ee xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102057f0 mov dword ptr [0x1020d040], esi */ { const u32 m_ = (u32)(0x1020d040u); M32(m_) = (u32)(esi); }
  /* 102057f6 jne 0x10205802 */ if (!ZF_) goto L_10205802;
  /* 102057f8 mov dword ptr [0x1020d040], 0xbb40e64e */ { const u32 m_ = (u32)(0x1020d040u); M32(m_) = (u32)(0xbb40e64eu); }
L_10205802:;
  /* 10205802 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10205803:;
  /* 10205803 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10205804 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205805(CPU *c) {
  NATIVE_HOOK(0x10205805u) REGS; LOADALL;
L_10205805:;
  /* 10205805 push 0x118 */ { u32 v_ = 0x118u; esp -= 4; M32(esp) = v_; }
  /* 1020580a push 0x1020b3c0 */ { u32 v_ = 0x1020b3c0u; esp -= 4; M32(esp) = v_; }
  /* 1020580f call 0x10205950 */ esp -= 4; M32(esp) = 0x10205814u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x1020580fu); RETCHK(0x10205814u, 0x1020580fu); LOADALL;
  /* 10205814 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10205819 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1020581c mov eax, dword ptr [0x1020d938] */ { const u32 m_ = (u32)(0x1020d938u); eax = (u32)(M32(m_)); }
  /* 10205821 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10205823 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205825 je 0x10205846 */ if (ZF_) goto L_10205846;
  /* 10205827 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 1020582a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020582d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205830 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10205832u; SAVEALL; call_ind(c, t_); RETCHK(0x10205832u, 0x10205830u); LOADALL; }
  /* 10205832 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205833 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205834 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205838 jmp 0x10205945 */ goto L_10205945;
L_10205846:;
  /* 10205846 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205849 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1020584a je 0x10205862 */ if (ZF_) goto L_10205862;
  /* 1020584c mov edi, 0x1020b39c */ { edi = (u32)(0x1020b39cu); }
  /* 10205851 mov dword ptr [ebp - 0x128], 0x1020b2e8 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x1020b2e8u); }
  /* 1020585b mov esi, 0xd4 */ { esi = (u32)(0xd4u); }
  /* 10205860 jmp 0x10205876 */ goto L_10205876;
L_10205862:;
  /* 10205862 mov edi, 0x1020b2c8 */ { edi = (u32)(0x1020b2c8u); }
  /* 10205867 mov dword ptr [ebp - 0x128], 0x1020b228 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x1020b228u); }
  /* 10205871 mov esi, 0xb9 */ { esi = (u32)(0xb9u); }
L_10205876:;
  /* 10205876 mov byte ptr [ebp - 0x20], cl */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10205879 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 1020587e lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 10205884 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205885 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205886 call dword ptr [0x1020b02c] */ { const u32 m_ = (u32)(0x1020b02cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020588cu; SAVEALL; call_ind(c, t_); RETCHK(0x1020588cu, 0x10205886u); LOADALL; }
  /* 1020588c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020588e jne 0x102058a3 */ if (!ZF_) goto L_102058a3;
  /* 10205890 push 0x1020b210 */ { u32 v_ = 0x1020b210u; esp -= 4; M32(esp) = v_; }
  /* 10205895 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 1020589b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020589c call 0x102082b0 */ esp -= 4; M32(esp) = 0x102058a1u; SAVEALL; F_102082b0(c); ABI_CHECK(0x102082b0u, 0x1020589cu); RETCHK(0x102058a1u, 0x1020589cu); LOADALL;
  /* 102058a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102058a2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_102058a3:;
  /* 102058a3 lea ebx, [ebp - 0x124] */ ebx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 102058a9 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 102058ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102058ac call 0x102083b0 */ esp -= 4; M32(esp) = 0x102058b1u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x102058acu); RETCHK(0x102058b1u, 0x102058acu); LOADALL;
  /* 102058b1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102058b2 add eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 102058b5 cmp eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102058b8 jbe 0x102058df */ if ((CF_|ZF_)) goto L_102058df;
  /* 102058ba mov eax, ebx */ { eax = (u32)(ebx); }
  /* 102058bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102058bd call 0x102083b0 */ esp -= 4; M32(esp) = 0x102058c2u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x102058bdu); RETCHK(0x102058c2u, 0x102058bdu); LOADALL;
  /* 102058c2 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 102058c4 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 102058ca sub eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 102058cd add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 102058cf push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 102058d1 push 0x1020b20c */ { u32 v_ = 0x1020b20cu; esp -= 4; M32(esp) = v_; }
  /* 102058d6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102058d7 call 0x10204e10 */ esp -= 4; M32(esp) = 0x102058dcu; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x102058d7u); RETCHK(0x102058dcu, 0x102058d7u); LOADALL;
  /* 102058dc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_102058df:;
  /* 102058df push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102058e0 call 0x102083b0 */ esp -= 4; M32(esp) = 0x102058e5u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x102058e0u); RETCHK(0x102058e5u, 0x102058e0u); LOADALL;
  /* 102058e5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102058e6 lea eax, [eax + esi + 0xc] */ eax = (u32)((u32)(eax + esi + 0xcu));
  /* 102058ea add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 102058ed and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102058f0 call 0x10204f80 */ esp -= 4; M32(esp) = 0x102058f5u; SAVEALL; F_10204f80(c); ABI_CHECK(0x10204f80u, 0x102058f0u); RETCHK(0x102058f5u, 0x102058f0u); LOADALL;
  /* 102058f5 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 102058f8 mov esi, esp */ { esi = (u32)(esp); }
  /* 102058fa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102058fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102058fc call 0x102082b0 */ esp -= 4; M32(esp) = 0x10205901u; SAVEALL; F_102082b0(c); ABI_CHECK(0x102082b0u, 0x102058fcu); RETCHK(0x10205901u, 0x102058fcu); LOADALL;
  /* 10205901 mov edi, 0x1020b208 */ { edi = (u32)(0x1020b208u); }
  /* 10205906 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205907 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205908 call 0x102082c0 */ esp -= 4; M32(esp) = 0x1020590du; SAVEALL; F_102082c0(c); ABI_CHECK(0x102082c0u, 0x10205908u); RETCHK(0x1020590du, 0x10205908u); LOADALL;
  /* 1020590d push 0x1020b1fc */ { u32 v_ = 0x1020b1fcu; esp -= 4; M32(esp) = v_; }
  /* 10205912 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205913 call 0x102082c0 */ esp -= 4; M32(esp) = 0x10205918u; SAVEALL; F_102082c0(c); ABI_CHECK(0x102082c0u, 0x10205913u); RETCHK(0x10205918u, 0x10205913u); LOADALL;
  /* 10205918 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205919 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020591a call 0x102082c0 */ esp -= 4; M32(esp) = 0x1020591fu; SAVEALL; F_102082c0(c); ABI_CHECK(0x102082c0u, 0x1020591au); RETCHK(0x1020591fu, 0x1020591au); LOADALL;
  /* 1020591f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205920 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205921 call 0x102082c0 */ esp -= 4; M32(esp) = 0x10205926u; SAVEALL; F_102082c0(c); ABI_CHECK(0x102082c0u, 0x10205921u); RETCHK(0x10205926u, 0x10205921u); LOADALL;
  /* 10205926 push dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020592c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020592d call 0x102082c0 */ esp -= 4; M32(esp) = 0x10205932u; SAVEALL; F_102082c0(c); ABI_CHECK(0x102082c0u, 0x1020592du); RETCHK(0x10205932u, 0x1020592du); LOADALL;
  /* 10205932 push 0x12010 */ { u32 v_ = 0x12010u; esp -= 4; M32(esp) = v_; }
  /* 10205937 push 0x1020b1d4 */ { u32 v_ = 0x1020b1d4u; esp -= 4; M32(esp) = v_; }
  /* 1020593c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020593d call 0x102081b7 */ esp -= 4; M32(esp) = 0x10205942u; SAVEALL; F_102081b7(c); ABI_CHECK(0x102081b7u, 0x1020593du); RETCHK(0x10205942u, 0x1020593du); LOADALL;
  /* 10205942 add esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10205945:;
  /* 10205945 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10205947 call 0x10206953 */ esp -= 4; M32(esp) = 0x1020594cu; SAVEALL; F_10206953(c); ABI_CHECK(0x10206953u, 0x10205947u); RETCHK(0x1020594cu, 0x10205947u); LOADALL;
  /* 1020594c int3 */ TRAP(0x1020594cu, "int3");
}

void F_1020583d(CPU *c) {
  NATIVE_HOOK(0x1020583du) REGS; LOADALL;
L_1020583d:;
  /* 1020583d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020583f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10205840 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205841(CPU *c) {
  NATIVE_HOOK(0x10205841u) REGS; LOADALL;
  goto L_10205841;
L_10205834:;
  /* 10205834 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205838 jmp 0x10205945 */ goto L_10205945;
L_10205841:;
  /* 10205841 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10205844 jmp 0x10205834 */ goto L_10205834;
L_10205945:;
  /* 10205945 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10205947 call 0x10206953 */ esp -= 4; M32(esp) = 0x1020594cu; SAVEALL; F_10206953(c); ABI_CHECK(0x10206953u, 0x10205947u); RETCHK(0x1020594cu, 0x10205947u); LOADALL;
  /* 1020594c int3 */ TRAP(0x1020594cu, "int3");
}

void F_10205950(CPU *c) {
  NATIVE_HOOK(0x10205950u) REGS; LOADALL;
L_10205950:;
  /* 10205950 push 0x102059a4 */ { u32 v_ = 0x102059a4u; esp -= 4; M32(esp) = v_; }
  /* 10205955 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1020595b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020595c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10205960 mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 10205964 lea ebp, [esp + 0x10] */ ebp = (u32)((u32)(esp + 0x10u));
  /* 10205968 sub esp, eax */ { u32 a_ = esp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020596a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020596b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020596c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020596d mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 10205970 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10205973 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205974 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10205977 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 1020597e mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10205981 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10205984 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 1020598a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020598b(CPU *c) {
  NATIVE_HOOK(0x1020598bu) REGS; LOADALL;
L_1020598b:;
  /* 1020598b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 1020598e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10205995 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205996 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10205997 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10205998 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10205999 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020599a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020599b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102059a4(CPU *c) {
  NATIVE_HOOK(0x102059a4u) REGS; LOADALL;
L_102059a4:;
  /* 102059a4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102059a5 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102059a7 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102059aa push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102059ab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102059ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102059ad push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102059ae cld */ c->df = 0;
  /* 102059af mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 102059b2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102059b5 test dword ptr [eax + 4], 6 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102059bc jne 0x10205a6d */ if (!ZF_) goto L_10205a6d;
  /* 102059c2 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 102059c5 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 102059c8 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 102059cb lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 102059ce mov dword ptr [ebx - 4], eax */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 102059d1 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 102059d4 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 102059d7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102059d8 call 0x1020843b */ esp -= 4; M32(esp) = 0x102059ddu; SAVEALL; F_1020843b(c); ABI_CHECK(0x1020843bu, 0x102059d8u); RETCHK(0x102059ddu, 0x102059d8u); LOADALL;
  /* 102059dd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102059e0 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102059e2 je 0x10205a5f */ if (ZF_) goto L_10205a5f;
L_102059e4:;
  /* 102059e4 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102059e7 je 0x10205a66 */ if (ZF_) goto L_10205a66;
  /* 102059e9 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 102059ec mov eax, dword ptr [edi + ecx*4 + 4] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 102059f0 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102059f2 je 0x10205a4d */ if (ZF_) goto L_10205a4d;
  /* 102059f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102059f5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102059f6 lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 102059f9 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 102059fb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 102059fd xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 102059ff xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10205a01 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10205a03 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10205a05u; SAVEALL; call_ind(c, t_); RETCHK(0x10205a05u, 0x10205a03u); LOADALL; }
  /* 10205a05 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10205a06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10205a07 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10205a0a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205a0c je 0x10205a4d */ if (ZF_) goto L_10205a4d;
  /* 10205a0e js 0x10205a58 */ if (SF_) goto L_10205a58;
  /* 10205a10 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10205a13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205a14 call 0x102053a8 */ esp -= 4; M32(esp) = 0x10205a19u; SAVEALL; F_102053a8(c); ABI_CHECK(0x102053a8u, 0x10205a14u); RETCHK(0x10205a19u, 0x10205a14u); LOADALL;
  /* 10205a19 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10205a1c lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 10205a1f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205a20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205a21 call 0x102053ea */ esp -= 4; M32(esp) = 0x10205a26u; SAVEALL; F_102053ea(c); ABI_CHECK(0x102053eau, 0x10205a21u); RETCHK(0x10205a26u, 0x10205a21u); LOADALL;
  /* 10205a26 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10205a29 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 10205a2c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10205a2e mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205a32 call 0x1020547e */ esp -= 4; M32(esp) = 0x10205a37u; SAVEALL; F_1020547e(c); ABI_CHECK(0x1020547eu, 0x10205a32u); RETCHK(0x10205a37u, 0x10205a32u); LOADALL;
  /* 10205a37 mov eax, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); eax = (u32)(M32(m_)); }
  /* 10205a3a mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10205a3d mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205a41 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10205a43 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10205a45 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10205a47 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10205a49 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10205a4b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10205a4du; SAVEALL; call_ind(c, t_); RETCHK(0x10205a4du, 0x10205a4bu); LOADALL; }
L_10205a4d:;
  /* 10205a4d mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10205a50 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 10205a53 mov esi, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 10205a56 jmp 0x102059e4 */ goto L_102059e4;
L_10205a58:;
  /* 10205a58 mov eax, 0 */ { eax = (u32)(0x0u); }
  /* 10205a5d jmp 0x10205a82 */ goto L_10205a82;
L_10205a5f:;
  /* 10205a5f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205a62 or dword ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10205a66:;
  /* 10205a66 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10205a6b jmp 0x10205a82 */ goto L_10205a82;
L_10205a6d:;
  /* 10205a6d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10205a6e lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 10205a71 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10205a73 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205a74 call 0x102053ea */ esp -= 4; M32(esp) = 0x10205a79u; SAVEALL; F_102053ea(c); ABI_CHECK(0x102053eau, 0x10205a74u); RETCHK(0x10205a79u, 0x10205a74u); LOADALL;
  /* 10205a79 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10205a7c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10205a7d mov eax, 1 */ { eax = (u32)(0x1u); }
L_10205a82:;
  /* 10205a82 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10205a83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10205a84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10205a85 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10205a86 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10205a88 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10205a89 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205aa5(CPU *c) {
  NATIVE_HOOK(0x10205aa5u) REGS; LOADALL;
L_10205aa5:;
  /* 10205aa5 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10205aa7 push 0x1020b3d0 */ { u32 v_ = 0x1020b3d0u; esp -= 4; M32(esp) = v_; }
  /* 10205aac call 0x10205950 */ esp -= 4; M32(esp) = 0x10205ab1u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10205aacu); RETCHK(0x10205ab1u, 0x10205aacu); LOADALL;
  /* 10205ab1 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10205ab4 cmp dword ptr [0x1020e040], 3 */ { const u32 m_ = (u32)(0x1020e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205abb jne 0x10205aeb */ if (!ZF_) goto L_10205aeb;
  /* 10205abd cmp esi, dword ptr [0x1020e02c] */ { const u32 m_ = (u32)(0x1020e02cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205ac3 ja 0x10205aeb */ if (!(CF_|ZF_)) goto L_10205aeb;
  /* 10205ac5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10205ac7 call 0x10207663 */ esp -= 4; M32(esp) = 0x10205accu; SAVEALL; F_10207663(c); ABI_CHECK(0x10207663u, 0x10205ac7u); RETCHK(0x10205accu, 0x10205ac7u); LOADALL;
  /* 10205acc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205acd and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205ad1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205ad2 call 0x10207ebb */ esp -= 4; M32(esp) = 0x10205ad7u; SAVEALL; F_10207ebb(c); ABI_CHECK(0x10207ebbu, 0x10205ad2u); RETCHK(0x10205ad7u, 0x10205ad2u); LOADALL;
  /* 10205ad7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205ad8 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10205adb or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205adf call 0x10205b17 */ esp -= 4; M32(esp) = 0x10205ae4u; SAVEALL; F_10205b17(c); ABI_CHECK(0x10205b17u, 0x10205adfu); RETCHK(0x10205ae4u, 0x10205adfu); LOADALL;
  /* 10205ae4 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10205ae7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205ae9 jne 0x10205b0e */ if (!ZF_) goto L_10205b0e;
L_10205aeb:;
  /* 10205aeb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205aed jne 0x10205af0 */ if (!ZF_) goto L_10205af0;
  /* 10205aef inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10205af0:;
  /* 10205af0 cmp dword ptr [0x1020e040], 1 */ { const u32 m_ = (u32)(0x1020e040u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205af7 je 0x10205aff */ if (ZF_) goto L_10205aff;
  /* 10205af9 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10205afc and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10205aff:;
  /* 10205aff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205b00 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10205b02 push dword ptr [0x1020e03c] */ { const u32 m_ = (u32)(0x1020e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205b08 call dword ptr [0x1020b030] */ { const u32 m_ = (u32)(0x1020b030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10205b0eu; SAVEALL; call_ind(c, t_); RETCHK(0x10205b0eu, 0x10205b08u); LOADALL; }
L_10205b0e:;
  /* 10205b0e call 0x1020598b */ esp -= 4; M32(esp) = 0x10205b13u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10205b0eu); RETCHK(0x10205b13u, 0x10205b0eu); LOADALL;
  /* 10205b13 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205b14(CPU *c) {
  NATIVE_HOOK(0x10205b14u) REGS; LOADALL;
L_10205b14:;
  /* 10205b14 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10205b17 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10205b19 call 0x102075ae */ esp -= 4; M32(esp) = 0x10205b1eu; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10205b19u); RETCHK(0x10205b1eu, 0x10205b19u); LOADALL;
  /* 10205b1e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205b1f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205b17(CPU *c) {
  NATIVE_HOOK(0x10205b17u) REGS; LOADALL;
L_10205b17:;
  /* 10205b17 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10205b19 call 0x102075ae */ esp -= 4; M32(esp) = 0x10205b1eu; SAVEALL; F_102075ae(c); ABI_CHECK(0x102075aeu, 0x10205b19u); RETCHK(0x10205b1eu, 0x10205b19u); LOADALL;
  /* 10205b1e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205b1f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205b20(CPU *c) {
  NATIVE_HOOK(0x10205b20u) REGS; LOADALL;
L_10205b20:;
  /* 10205b20 cmp dword ptr [esp + 4], -0x20 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205b25 ja 0x10205b49 */ if (!(CF_|ZF_)) goto L_10205b49;
L_10205b27:;
  /* 10205b27 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205b2b call 0x10205aa5 */ esp -= 4; M32(esp) = 0x10205b30u; SAVEALL; F_10205aa5(c); ABI_CHECK(0x10205aa5u, 0x10205b2bu); RETCHK(0x10205b30u, 0x10205b2bu); LOADALL;
  /* 10205b30 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205b32 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205b33 jne 0x10205b4b */ if (!ZF_) goto L_10205b4b;
  /* 10205b35 cmp dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205b39 je 0x10205b4b */ if (ZF_) goto L_10205b4b;
  /* 10205b3b push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205b3f call 0x10208664 */ esp -= 4; M32(esp) = 0x10205b44u; SAVEALL; F_10208664(c); ABI_CHECK(0x10208664u, 0x10205b3fu); RETCHK(0x10205b44u, 0x10205b3fu); LOADALL;
  /* 10205b44 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205b46 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205b47 jne 0x10205b27 */ if (!ZF_) goto L_10205b27;
L_10205b49:;
  /* 10205b49 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10205b4b:;
  /* 10205b4b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205b4c(CPU *c) {
  NATIVE_HOOK(0x10205b4cu) REGS; LOADALL;
L_10205b4c:;
  /* 10205b4c push dword ptr [0x1020dc60] */ { const u32 m_ = (u32)(0x1020dc60u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205b52 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205b56 call 0x10205b20 */ esp -= 4; M32(esp) = 0x10205b5bu; SAVEALL; F_10205b20(c); ABI_CHECK(0x10205b20u, 0x10205b56u); RETCHK(0x10205b5bu, 0x10205b56u); LOADALL;
  /* 10205b5b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205b5c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205b5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205b5e(CPU *c) {
  NATIVE_HOOK(0x10205b5eu) REGS; LOADALL;
L_10205b5e:;
  /* 10205b5e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10205b61 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205b63 je 0x10205ba9 */ if (ZF_) goto L_10205ba9;
  /* 10205b65 lea edx, [eax + 8] */ edx = (u32)((u32)(eax + 0x8u));
  /* 10205b68 cmp byte ptr [edx], 0 */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10205b6b je 0x10205ba9 */ if (ZF_) goto L_10205ba9;
  /* 10205b6d mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10205b70 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205b72 je 0x10205b84 */ if (ZF_) goto L_10205b84;
  /* 10205b74 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10205b77 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205b78 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10205b79 call 0x102086f0 */ esp -= 4; M32(esp) = 0x10205b7eu; SAVEALL; F_102086f0(c); ABI_CHECK(0x102086f0u, 0x10205b79u); RETCHK(0x10205b7eu, 0x10205b79u); LOADALL;
  /* 10205b7e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205b80 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205b81 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205b82 jne 0x10205ba6 */ if (!ZF_) goto L_10205ba6;
L_10205b84:;
  /* 10205b84 test byte ptr [edi], 2 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205b87 je 0x10205b8e */ if (ZF_) goto L_10205b8e;
  /* 10205b89 test byte ptr [esi], 8 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205b8c je 0x10205ba6 */ if (ZF_) goto L_10205ba6;
L_10205b8e:;
  /* 10205b8e mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10205b92 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10205b94 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205b96 je 0x10205b9d */ if (ZF_) goto L_10205b9d;
  /* 10205b98 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205b9b je 0x10205ba6 */ if (ZF_) goto L_10205ba6;
L_10205b9d:;
  /* 10205b9d test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205b9f je 0x10205ba9 */ if (ZF_) goto L_10205ba9;
  /* 10205ba1 test byte ptr [esi], 2 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205ba4 jne 0x10205ba9 */ if (!ZF_) goto L_10205ba9;
L_10205ba6:;
  /* 10205ba6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205ba8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10205ba9:;
  /* 10205ba9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205bab inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10205bac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205bad(CPU *c) {
  NATIVE_HOOK(0x10205badu) REGS; LOADALL;
L_10205bad:;
  /* 10205bad mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10205baf cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205bb5 je 0x10205bba */ if (ZF_) goto L_10205bba;
  /* 10205bb7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205bb9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10205bba:;
  /* 10205bba call 0x10206441 */ esp -= 4; M32(esp) = 0x10205bbfu; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205bbau); RETCHK(0x10205bbfu, 0x10205bbau); LOADALL;
  /* 10205bbf and dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205bc6 jmp 0x10206717 */ SAVEALL; F_10206717(c); return;
}

void F_10205bcb(CPU *c) {
  NATIVE_HOOK(0x10205bcbu) REGS; LOADALL;
L_10205bcb:;
  /* 10205bcb push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10205bcd push 0x1020b3e0 */ { u32 v_ = 0x1020b3e0u; esp -= 4; M32(esp) = v_; }
  /* 10205bd2 call 0x10205950 */ esp -= 4; M32(esp) = 0x10205bd7u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10205bd2u); RETCHK(0x10205bd7u, 0x10205bd2u); LOADALL;
  /* 10205bd7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10205bda mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10205bdd mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 10205be0 call 0x10206441 */ esp -= 4; M32(esp) = 0x10205be5u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205be0u); RETCHK(0x10205be5u, 0x10205be0u); LOADALL;
  /* 10205be5 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10205bea inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10205bec and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205bf0 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
L_10205bf3:;
  /* 10205bf3 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205bf6 je 0x10205c5c */ if (ZF_) goto L_10205c5c;
  /* 10205bf8 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205bfb jle 0x10205c02 */ if ((ZF_|LT_)) goto L_10205c02;
  /* 10205bfd cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205c00 jl 0x10205c07 */ if (LT_) goto L_10205c07;
L_10205c02:;
  /* 10205c02 call 0x1020674c */ esp -= 4; M32(esp) = 0x10205c07u; SAVEALL; F_1020674c(c); ABI_CHECK(0x1020674cu, 0x10205c02u); RETCHK(0x10205c07u, 0x10205c02u); LOADALL;
L_10205c07:;
  /* 10205c07 mov eax, esi */ { eax = (u32)(esi); }
  /* 10205c09 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10205c0c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10205c0f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10205c11 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10205c13 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10205c16 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10205c1d cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205c21 je 0x10205c38 */ if (ZF_) goto L_10205c38;
  /* 10205c23 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10205c26 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 10205c2b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205c2c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10205c2f push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205c33 call 0x10206780 */ esp -= 4; M32(esp) = 0x10205c38u; SAVEALL; F_10206780(c); ABI_CHECK(0x10206780u, 0x10205c33u); RETCHK(0x10205c38u, 0x10205c33u); LOADALL;
L_10205c38:;
  /* 10205c38 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205c3c jmp 0x10205c57 */ goto L_10205c57;
L_10205c57:;
  /* 10205c57 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 10205c5a jmp 0x10205bf3 */ goto L_10205bf3;
L_10205c5c:;
  /* 10205c5c or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205c60 call 0x10205c7e */ esp -= 4; M32(esp) = 0x10205c65u; SAVEALL; F_10205c7e(c); ABI_CHECK(0x10205c7eu, 0x10205c60u); RETCHK(0x10205c65u, 0x10205c60u); LOADALL;
  /* 10205c65 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205c68 je 0x10205c6f */ if (ZF_) goto L_10205c6f;
  /* 10205c6a call 0x1020674c */ esp -= 4; M32(esp) = 0x10205c6fu; SAVEALL; F_1020674c(c); ABI_CHECK(0x1020674cu, 0x10205c6au); RETCHK(0x10205c6fu, 0x10205c6au); LOADALL;
L_10205c6f:;
  /* 10205c6f mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10205c72 call 0x1020598b */ esp -= 4; M32(esp) = 0x10205c77u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10205c72u); RETCHK(0x10205c77u, 0x10205c72u); LOADALL;
  /* 10205c77 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205c3e(CPU *c) {
  NATIVE_HOOK(0x10205c3eu) REGS; LOADALL;
L_10205c3e:;
  /* 10205c3e mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10205c41 call 0x10205bad */ esp -= 4; M32(esp) = 0x10205c46u; SAVEALL; F_10205bad(c); ABI_CHECK(0x10205badu, 0x10205c41u); RETCHK(0x10205c46u, 0x10205c41u); LOADALL;
  /* 10205c46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205c47(CPU *c) {
  NATIVE_HOOK(0x10205c47u) REGS; LOADALL;
  goto L_10205c47;
L_10205bf3:;
  /* 10205bf3 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205bf6 je 0x10205c5c */ if (ZF_) goto L_10205c5c;
  /* 10205bf8 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205bfb jle 0x10205c02 */ if ((ZF_|LT_)) goto L_10205c02;
  /* 10205bfd cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205c00 jl 0x10205c07 */ if (LT_) goto L_10205c07;
L_10205c02:;
  /* 10205c02 call 0x1020674c */ esp -= 4; M32(esp) = 0x10205c07u; SAVEALL; F_1020674c(c); ABI_CHECK(0x1020674cu, 0x10205c02u); RETCHK(0x10205c07u, 0x10205c02u); LOADALL;
L_10205c07:;
  /* 10205c07 mov eax, esi */ { eax = (u32)(esi); }
  /* 10205c09 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10205c0c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10205c0f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10205c11 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10205c13 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10205c16 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10205c1d cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205c21 je 0x10205c38 */ if (ZF_) goto L_10205c38;
  /* 10205c23 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10205c26 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 10205c2b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205c2c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10205c2f push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205c33 call 0x10206780 */ esp -= 4; M32(esp) = 0x10205c38u; SAVEALL; F_10206780(c); ABI_CHECK(0x10206780u, 0x10205c33u); RETCHK(0x10205c38u, 0x10205c33u); LOADALL;
L_10205c38:;
  /* 10205c38 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205c3c jmp 0x10205c57 */ goto L_10205c57;
L_10205c47:;
  /* 10205c47 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10205c4a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205c4e mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10205c51 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10205c54 mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
L_10205c57:;
  /* 10205c57 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 10205c5a jmp 0x10205bf3 */ goto L_10205bf3;
L_10205c5c:;
  /* 10205c5c or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205c60 call 0x10205c7e */ esp -= 4; M32(esp) = 0x10205c65u; SAVEALL; F_10205c7e(c); ABI_CHECK(0x10205c7eu, 0x10205c60u); RETCHK(0x10205c65u, 0x10205c60u); LOADALL;
  /* 10205c65 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205c68 je 0x10205c6f */ if (ZF_) goto L_10205c6f;
  /* 10205c6a call 0x1020674c */ esp -= 4; M32(esp) = 0x10205c6fu; SAVEALL; F_1020674c(c); ABI_CHECK(0x1020674cu, 0x10205c6au); RETCHK(0x10205c6fu, 0x10205c6au); LOADALL;
L_10205c6f:;
  /* 10205c6f mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10205c72 call 0x1020598b */ esp -= 4; M32(esp) = 0x10205c77u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10205c72u); RETCHK(0x10205c77u, 0x10205c72u); LOADALL;
  /* 10205c77 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205c78(CPU *c) {
  NATIVE_HOOK(0x10205c78u) REGS; LOADALL;
L_10205c78:;
  /* 10205c78 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10205c7b mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 10205c7e call 0x10206441 */ esp -= 4; M32(esp) = 0x10205c83u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205c7eu); RETCHK(0x10205c83u, 0x10205c7eu); LOADALL;
  /* 10205c83 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205c8a jle 0x10205c98 */ if ((ZF_|LT_)) goto L_10205c98;
  /* 10205c8c call 0x10206441 */ esp -= 4; M32(esp) = 0x10205c91u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205c8cu); RETCHK(0x10205c91u, 0x10205c8cu); LOADALL;
  /* 10205c91 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10205c96 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10205c98:;
  /* 10205c98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205c7e(CPU *c) {
  NATIVE_HOOK(0x10205c7eu) REGS; LOADALL;
L_10205c7e:;
  /* 10205c7e call 0x10206441 */ esp -= 4; M32(esp) = 0x10205c83u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205c7eu); RETCHK(0x10205c83u, 0x10205c7eu); LOADALL;
  /* 10205c83 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205c8a jle 0x10205c98 */ if ((ZF_|LT_)) goto L_10205c98;
  /* 10205c8c call 0x10206441 */ esp -= 4; M32(esp) = 0x10205c91u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205c8cu); RETCHK(0x10205c91u, 0x10205c8cu); LOADALL;
  /* 10205c91 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10205c96 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10205c98:;
  /* 10205c98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205c99(CPU *c) {
  NATIVE_HOOK(0x10205c99u) REGS; LOADALL;
L_10205c99:;
  /* 10205c99 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10205c9b push 0x1020b3f8 */ { u32 v_ = 0x1020b3f8u; esp -= 4; M32(esp) = v_; }
  /* 10205ca0 call 0x10205950 */ esp -= 4; M32(esp) = 0x10205ca5u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10205ca0u); RETCHK(0x10205ca5u, 0x10205ca0u); LOADALL;
  /* 10205ca5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205ca8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205caa je 0x10205cc7 */ if (ZF_) goto L_10205cc7;
  /* 10205cac mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10205caf mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10205cb2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205cb4 je 0x10205cc7 */ if (ZF_) goto L_10205cc7;
  /* 10205cb6 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205cba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205cbb push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205cbe call 0x10204ffb */ esp -= 4; M32(esp) = 0x10205cc3u; SAVEALL; F_10204ffb(c); ABI_CHECK(0x10204ffbu, 0x10205cbeu); RETCHK(0x10205cc3u, 0x10205cbeu); LOADALL;
  /* 10205cc3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10205cc7:;
  /* 10205cc7 call 0x1020598b */ esp -= 4; M32(esp) = 0x10205cccu; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10205cc7u); RETCHK(0x10205cccu, 0x10205cc7u); LOADALL;
  /* 10205ccc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205ccd(CPU *c) {
  NATIVE_HOOK(0x10205ccdu) REGS; LOADALL;
L_10205ccd:;
  /* 10205ccd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205ccf cmp byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10205cd2 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 10205cd5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205cd6(CPU *c) {
  NATIVE_HOOK(0x10205cd6u) REGS; LOADALL;
L_10205cd6:;
  /* 10205cd6 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10205cd9 jmp 0x10206717 */ SAVEALL; F_10206717(c); return;
}

void F_10205cde(CPU *c) {
  NATIVE_HOOK(0x10205cdeu) REGS; LOADALL;
L_10205cde:;
  /* 10205cde push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205cdf mov esi, eax */ { esi = (u32)(eax); }
  /* 10205ce1 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10205ce3 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10205ce5 cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205ce9 jl 0x10205cfb */ if (LT_) goto L_10205cfb;
  /* 10205ceb mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10205cee mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10205cf1 mov esi, dword ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); esi = (u32)(M32(m_)); }
  /* 10205cf4 mov ecx, dword ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); ecx = (u32)(M32(m_)); }
  /* 10205cf7 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10205cf9 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10205cfb:;
  /* 10205cfb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10205cfc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205cfd(CPU *c) {
  NATIVE_HOOK(0x10205cfdu) REGS; LOADALL;
L_10205cfd:;
  /* 10205cfd push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10205cff push 0x1020b408 */ { u32 v_ = 0x1020b408u; esp -= 4; M32(esp) = v_; }
  /* 10205d04 call 0x10205950 */ esp -= 4; M32(esp) = 0x10205d09u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10205d04u); RETCHK(0x10205d09u, 0x10205d04u); LOADALL;
  /* 10205d09 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10205d0b mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10205d0e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10205d11 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 10205d14 and dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205d18 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10205d1b mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 10205d1e push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205d21 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 10205d24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205d25 call 0x102052b8 */ esp -= 4; M32(esp) = 0x10205d2au; SAVEALL; F_102052b8(c); ABI_CHECK(0x102052b8u, 0x10205d25u); RETCHK(0x10205d2au, 0x10205d25u); LOADALL;
  /* 10205d2a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205d2b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205d2c mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10205d2f call 0x10206441 */ esp -= 4; M32(esp) = 0x10205d34u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205d2fu); RETCHK(0x10205d34u, 0x10205d2fu); LOADALL;
  /* 10205d34 mov eax, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); eax = (u32)(M32(m_)); }
  /* 10205d37 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10205d3a call 0x10206441 */ esp -= 4; M32(esp) = 0x10205d3fu; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205d3au); RETCHK(0x10205d3fu, 0x10205d3au); LOADALL;
  /* 10205d3f mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 10205d45 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 10205d48 call 0x10206441 */ esp -= 4; M32(esp) = 0x10205d4du; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205d48u); RETCHK(0x10205d4du, 0x10205d48u); LOADALL;
  /* 10205d4d mov dword ptr [eax + 0x7c], esi */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(esi); }
  /* 10205d50 call 0x10206441 */ esp -= 4; M32(esp) = 0x10205d55u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205d50u); RETCHK(0x10205d55u, 0x10205d50u); LOADALL;
  /* 10205d55 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10205d58 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10205d5e and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205d62 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10205d69 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205d6c push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205d6f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10205d70 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205d73 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205d74 call 0x1020534d */ esp -= 4; M32(esp) = 0x10205d79u; SAVEALL; F_1020534d(c); ABI_CHECK(0x1020534du, 0x10205d74u); RETCHK(0x10205d79u, 0x10205d74u); LOADALL;
  /* 10205d79 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10205d7c mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10205d7f and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205d83 jmp 0x10205e37 */ goto L_10205e37;
L_10205e37:;
  /* 10205e37 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205e3b call 0x10205e52 */ esp -= 4; M32(esp) = 0x10205e40u; SAVEALL; F_10205e52(c); ABI_CHECK(0x10205e52u, 0x10205e3bu); RETCHK(0x10205e40u, 0x10205e3bu); LOADALL;
  /* 10205e40 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10205e43 call 0x1020598b */ esp -= 4; M32(esp) = 0x10205e48u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10205e43u); RETCHK(0x10205e48u, 0x10205e43u); LOADALL;
  /* 10205e48 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205d88(CPU *c) {
  NATIVE_HOOK(0x10205d88u) REGS; LOADALL;
L_10205d88:;
  /* 10205d88 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10205d8b mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10205d8d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10205d90 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10205d93 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205d99 jne 0x10205dcc */ if (!ZF_) goto L_10205dcc;
  /* 10205d9b mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10205d9e cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205da2 jne 0x10205dcc */ if (!ZF_) goto L_10205dcc;
  /* 10205da4 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10205da7 cmp dword ptr [eax + 0x14], 0x19930520 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205dae je 0x10205dbc */ if (ZF_) goto L_10205dbc;
  /* 10205db0 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10205db3 cmp dword ptr [eax + 0x14], 0x19930521 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205dba jne 0x10205dcc */ if (!ZF_) goto L_10205dcc;
L_10205dbc:;
  /* 10205dbc mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10205dbf cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205dc3 mov dword ptr [ebp - 0x24], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x1u); }
  /* 10205dca je 0x10205dd3 */ if (ZF_) goto L_10205dd3;
L_10205dcc:;
  /* 10205dcc mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
L_10205dd3:;
  /* 10205dd3 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 10205dd6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205dd7(CPU *c) {
  NATIVE_HOOK(0x10205dd7u) REGS; LOADALL;
L_10205dd7:;
  /* 10205dd7 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10205dda mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10205ddd mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205de0 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 10205de3 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10205de6 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10205de9 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10205dec mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 10205def mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 10205df2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_10205df4:;
  /* 10205df4 mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 10205df7 cmp edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205dfa jae 0x10205e20 */ if (!CF_) goto L_10205e20;
  /* 10205dfc lea esi, [edx + edx*4] */ esi = (u32)((u32)(edx + edx * 4u));
  /* 10205dff mov ebx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ebx = (u32)(M32(m_)); }
  /* 10205e02 lea esi, [ebx + esi*4] */ esi = (u32)((u32)(ebx + esi * 4u));
  /* 10205e05 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10205e08 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e0a jle 0x10205e49 */ if ((ZF_|LT_)) goto L_10205e49;
  /* 10205e0c cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e0f jg 0x10205e49 */ if (!(ZF_|LT_)) goto L_10205e49;
  /* 10205e11 lea eax, [ebx + 1] */ eax = (u32)((u32)(ebx + 0x1u));
  /* 10205e14 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10205e17 mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 10205e1a mov eax, dword ptr [edx + eax*8] */ { const u32 m_ = (u32)(edx + eax * 8u); eax = (u32)(M32(m_)); }
  /* 10205e1d mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
L_10205e20:;
  /* 10205e20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205e21 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10205e22 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10205e24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205e25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205e26 call 0x10205bcb */ esp -= 4; M32(esp) = 0x10205e2bu; SAVEALL; F_10205bcb(c); ABI_CHECK(0x10205bcbu, 0x10205e26u); RETCHK(0x10205e2bu, 0x10205e26u); LOADALL;
  /* 10205e2b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10205e2e mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10205e31 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 10205e34 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10205e37 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205e3b call 0x10205e52 */ esp -= 4; M32(esp) = 0x10205e40u; SAVEALL; F_10205e52(c); ABI_CHECK(0x10205e52u, 0x10205e3bu); RETCHK(0x10205e40u, 0x10205e3bu); LOADALL;
  /* 10205e40 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10205e43 call 0x1020598b */ esp -= 4; M32(esp) = 0x10205e48u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x10205e43u); RETCHK(0x10205e48u, 0x10205e43u); LOADALL;
  /* 10205e48 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10205e49:;
  /* 10205e49 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10205e4a jmp 0x10205df4 */ goto L_10205df4;
}

void F_10205e4c(CPU *c) {
  NATIVE_HOOK(0x10205e4cu) REGS; LOADALL;
L_10205e4c:;
  /* 10205e4c mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10205e4f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10205e52 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10205e55 mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10205e58 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205e5b call 0x10205301 */ esp -= 4; M32(esp) = 0x10205e60u; SAVEALL; F_10205301(c); ABI_CHECK(0x10205301u, 0x10205e5bu); RETCHK(0x10205e60u, 0x10205e5bu); LOADALL;
  /* 10205e60 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205e61 call 0x10206441 */ esp -= 4; M32(esp) = 0x10205e66u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205e61u); RETCHK(0x10205e66u, 0x10205e61u); LOADALL;
  /* 10205e66 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 10205e69 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 10205e6c call 0x10206441 */ esp -= 4; M32(esp) = 0x10205e71u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205e6cu); RETCHK(0x10205e71u, 0x10205e6cu); LOADALL;
  /* 10205e71 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10205e74 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10205e7a cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e80 jne 0x10205ec0 */ if (!ZF_) goto L_10205ec0;
  /* 10205e82 cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e86 jne 0x10205ec0 */ if (!ZF_) goto L_10205ec0;
  /* 10205e88 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10205e8b cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e90 je 0x10205e99 */ if (ZF_) goto L_10205e99;
  /* 10205e92 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e97 jne 0x10205ec0 */ if (!ZF_) goto L_10205ec0;
L_10205e99:;
  /* 10205e99 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e9d jne 0x10205ec0 */ if (!ZF_) goto L_10205ec0;
  /* 10205e9f cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205ea3 je 0x10205ec0 */ if (ZF_) goto L_10205ec0;
  /* 10205ea5 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205ea8 call 0x102052e0 */ esp -= 4; M32(esp) = 0x10205eadu; SAVEALL; F_102052e0(c); ABI_CHECK(0x102052e0u, 0x10205ea8u); RETCHK(0x10205eadu, 0x10205ea8u); LOADALL;
  /* 10205ead pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205eae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205eb0 je 0x10205ec0 */ if (ZF_) goto L_10205ec0;
  /* 10205eb2 call 0x10205452 */ esp -= 4; M32(esp) = 0x10205eb7u; SAVEALL; F_10205452(c); ABI_CHECK(0x10205452u, 0x10205eb2u); RETCHK(0x10205eb7u, 0x10205eb2u); LOADALL;
  /* 10205eb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205eb8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205eb9 call 0x10205c99 */ esp -= 4; M32(esp) = 0x10205ebeu; SAVEALL; F_10205c99(c); ABI_CHECK(0x10205c99u, 0x10205eb9u); RETCHK(0x10205ebeu, 0x10205eb9u); LOADALL;
  /* 10205ebe pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205ebf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10205ec0:;
  /* 10205ec0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205e52(CPU *c) {
  NATIVE_HOOK(0x10205e52u) REGS; LOADALL;
L_10205e52:;
  /* 10205e52 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10205e55 mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10205e58 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205e5b call 0x10205301 */ esp -= 4; M32(esp) = 0x10205e60u; SAVEALL; F_10205301(c); ABI_CHECK(0x10205301u, 0x10205e5bu); RETCHK(0x10205e60u, 0x10205e5bu); LOADALL;
  /* 10205e60 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205e61 call 0x10206441 */ esp -= 4; M32(esp) = 0x10205e66u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205e61u); RETCHK(0x10205e66u, 0x10205e61u); LOADALL;
  /* 10205e66 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 10205e69 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 10205e6c call 0x10206441 */ esp -= 4; M32(esp) = 0x10205e71u; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x10205e6cu); RETCHK(0x10205e71u, 0x10205e6cu); LOADALL;
  /* 10205e71 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10205e74 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10205e7a cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e80 jne 0x10205ec0 */ if (!ZF_) goto L_10205ec0;
  /* 10205e82 cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e86 jne 0x10205ec0 */ if (!ZF_) goto L_10205ec0;
  /* 10205e88 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10205e8b cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e90 je 0x10205e99 */ if (ZF_) goto L_10205e99;
  /* 10205e92 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e97 jne 0x10205ec0 */ if (!ZF_) goto L_10205ec0;
L_10205e99:;
  /* 10205e99 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205e9d jne 0x10205ec0 */ if (!ZF_) goto L_10205ec0;
  /* 10205e9f cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205ea3 je 0x10205ec0 */ if (ZF_) goto L_10205ec0;
  /* 10205ea5 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205ea8 call 0x102052e0 */ esp -= 4; M32(esp) = 0x10205eadu; SAVEALL; F_102052e0(c); ABI_CHECK(0x102052e0u, 0x10205ea8u); RETCHK(0x10205eadu, 0x10205ea8u); LOADALL;
  /* 10205ead pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205eae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205eb0 je 0x10205ec0 */ if (ZF_) goto L_10205ec0;
  /* 10205eb2 call 0x10205452 */ esp -= 4; M32(esp) = 0x10205eb7u; SAVEALL; F_10205452(c); ABI_CHECK(0x10205452u, 0x10205eb2u); RETCHK(0x10205eb7u, 0x10205eb2u); LOADALL;
  /* 10205eb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205eb8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10205eb9 call 0x10205c99 */ esp -= 4; M32(esp) = 0x10205ebeu; SAVEALL; F_10205c99(c); ABI_CHECK(0x10205c99u, 0x10205eb9u); RETCHK(0x10205ebeu, 0x10205eb9u); LOADALL;
  /* 10205ebe pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205ebf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10205ec0:;
  /* 10205ec0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10205ec1(CPU *c) {
  NATIVE_HOOK(0x10205ec1u) REGS; LOADALL;
L_10205ec1:;
  /* 10205ec1 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10205ec3 push 0x1020b420 */ { u32 v_ = 0x1020b420u; esp -= 4; M32(esp) = v_; }
  /* 10205ec8 call 0x10205950 */ esp -= 4; M32(esp) = 0x10205ecdu; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x10205ec8u); RETCHK(0x10205ecdu, 0x10205ec8u); LOADALL;
  /* 10205ecd mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10205ecf mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10205ed2 mov edi, edx */ { edi = (u32)(edx); }
  /* 10205ed4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10205ed7 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10205eda test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205edc je 0x1020602b */ if (ZF_) goto L_1020602b;
  /* 10205ee2 cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10205ee6 je 0x1020602b */ if (ZF_) goto L_1020602b;
  /* 10205eec mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10205eef test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205ef1 jne 0x10205efd */ if (!ZF_) goto L_10205efd;
  /* 10205ef3 test byte ptr [eax + 3], 0x80 */ { const u32 m_ = (u32)(eax + 0x3u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205ef7 je 0x1020602b */ if (ZF_) goto L_1020602b;
L_10205efd:;
  /* 10205efd mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10205eff test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205f01 js 0x10205f07 */ if (SF_) goto L_10205f07;
  /* 10205f03 lea edi, [ecx + edi + 0xc] */ edi = (u32)((u32)(ecx + edi + 0xcu));
L_10205f07:;
  /* 10205f07 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10205f0b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10205f0d push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205f10 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205f12 je 0x10205f49 */ if (ZF_) goto L_10205f49;
  /* 10205f14 call 0x10208778 */ esp -= 4; M32(esp) = 0x10205f19u; SAVEALL; F_10208778(c); ABI_CHECK(0x10208778u, 0x10205f14u); RETCHK(0x10205f19u, 0x10205f14u); LOADALL;
  /* 10205f19 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205f1a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205f1b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205f1d je 0x10206022 */ if (ZF_) goto L_10206022;
  /* 10205f23 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10205f25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205f26 call 0x10208794 */ esp -= 4; M32(esp) = 0x10205f2bu; SAVEALL; F_10208794(c); ABI_CHECK(0x10208794u, 0x10205f26u); RETCHK(0x10205f2bu, 0x10205f26u); LOADALL;
  /* 10205f2b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205f2c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205f2d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205f2f je 0x10206022 */ if (ZF_) goto L_10206022;
  /* 10205f35 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10205f38 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
L_10205f3a:;
  /* 10205f3a lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10205f3d call 0x10205cde */ esp -= 4; M32(esp) = 0x10205f42u; SAVEALL; F_10205cde(c); ABI_CHECK(0x10205cdeu, 0x10205f3du); RETCHK(0x10205f42u, 0x10205f3du); LOADALL;
  /* 10205f42 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10205f44 jmp 0x10206027 */ goto L_10206027;
L_10205f49:;
  /* 10205f49 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205f4c je 0x10205f94 */ if (ZF_) goto L_10205f94;
  /* 10205f4e call 0x10208778 */ esp -= 4; M32(esp) = 0x10205f53u; SAVEALL; F_10208778(c); ABI_CHECK(0x10208778u, 0x10205f4eu); RETCHK(0x10205f53u, 0x10205f4eu); LOADALL;
  /* 10205f53 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205f54 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205f55 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205f57 je 0x10206022 */ if (ZF_) goto L_10206022;
  /* 10205f5d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10205f5f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205f60 call 0x10208794 */ esp -= 4; M32(esp) = 0x10205f65u; SAVEALL; F_10208794(c); ABI_CHECK(0x10208794u, 0x10205f60u); RETCHK(0x10205f65u, 0x10205f60u); LOADALL;
  /* 10205f65 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205f66 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205f67 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205f69 je 0x10206022 */ if (ZF_) goto L_10206022;
  /* 10205f6f push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205f72 push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205f75 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205f76 call 0x102087d0 */ esp -= 4; M32(esp) = 0x10205f7bu; SAVEALL; F_102087d0(c); ABI_CHECK(0x102087d0u, 0x10205f76u); RETCHK(0x10205f7bu, 0x10205f76u); LOADALL;
  /* 10205f7b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10205f7e cmp dword ptr [esi + 0x14], 4 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205f82 jne 0x10206027 */ if (!ZF_) goto L_10206027;
  /* 10205f88 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10205f8a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205f8c je 0x10206027 */ if (ZF_) goto L_10206027;
  /* 10205f92 jmp 0x10205f3a */ goto L_10205f3a;
L_10205f94:;
  /* 10205f94 cmp dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10205f98 jne 0x10205fcd */ if (!ZF_) goto L_10205fcd;
  /* 10205f9a call 0x10208778 */ esp -= 4; M32(esp) = 0x10205f9fu; SAVEALL; F_10208778(c); ABI_CHECK(0x10208778u, 0x10205f9au); RETCHK(0x10205f9fu, 0x10205f9au); LOADALL;
  /* 10205f9f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205fa0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205fa1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205fa3 je 0x10206022 */ if (ZF_) goto L_10206022;
  /* 10205fa5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10205fa7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205fa8 call 0x10208794 */ esp -= 4; M32(esp) = 0x10205fadu; SAVEALL; F_10208794(c); ABI_CHECK(0x10208794u, 0x10205fa8u); RETCHK(0x10205fadu, 0x10205fa8u); LOADALL;
  /* 10205fad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205fae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205faf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205fb1 je 0x10206022 */ if (ZF_) goto L_10206022;
  /* 10205fb3 push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205fb6 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10205fb9 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10205fbc call 0x10205cde */ esp -= 4; M32(esp) = 0x10205fc1u; SAVEALL; F_10205cde(c); ABI_CHECK(0x10205cdeu, 0x10205fbcu); RETCHK(0x10205fc1u, 0x10205fbcu); LOADALL;
  /* 10205fc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205fc2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205fc3 call 0x102087d0 */ esp -= 4; M32(esp) = 0x10205fc8u; SAVEALL; F_102087d0(c); ABI_CHECK(0x102087d0u, 0x10205fc3u); RETCHK(0x10205fc8u, 0x10205fc3u); LOADALL;
  /* 10205fc8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10205fcb jmp 0x10206027 */ goto L_10206027;
L_10205fcd:;
  /* 10205fcd call 0x10208778 */ esp -= 4; M32(esp) = 0x10205fd2u; SAVEALL; F_10208778(c); ABI_CHECK(0x10208778u, 0x10205fcdu); RETCHK(0x10205fd2u, 0x10205fcdu); LOADALL;
  /* 10205fd2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205fd3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205fd4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205fd6 je 0x10206022 */ if (ZF_) goto L_10206022;
  /* 10205fd8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10205fda push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10205fdb call 0x10208794 */ esp -= 4; M32(esp) = 0x10205fe0u; SAVEALL; F_10208794(c); ABI_CHECK(0x10208794u, 0x10205fdbu); RETCHK(0x10205fe0u, 0x10205fdbu); LOADALL;
  /* 10205fe0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205fe1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205fe2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205fe4 je 0x10206022 */ if (ZF_) goto L_10206022;
  /* 10205fe6 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205fe9 call 0x102087b0 */ esp -= 4; M32(esp) = 0x10205feeu; SAVEALL; F_102087b0(c); ABI_CHECK(0x102087b0u, 0x10205fe9u); RETCHK(0x10205feeu, 0x10205fe9u); LOADALL;
  /* 10205fee pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10205fef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10205ff1 je 0x10206022 */ if (ZF_) goto L_10206022;
  /* 10205ff3 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10205ff6 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10205ff9 test byte ptr [esi], 4 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10205ffc je 0x10206011 */ if (ZF_) goto L_10206011;
  /* 10205ffe push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10206000 call 0x10205cde */ esp -= 4; M32(esp) = 0x10206005u; SAVEALL; F_10205cde(c); ABI_CHECK(0x10205cdeu, 0x10206000u); RETCHK(0x10206005u, 0x10206000u); LOADALL;
  /* 10206005 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206006 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206009 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020600a call 0x10204ffb */ esp -= 4; M32(esp) = 0x1020600fu; SAVEALL; F_10204ffb(c); ABI_CHECK(0x10204ffbu, 0x1020600au); RETCHK(0x1020600fu, 0x1020600au); LOADALL;
  /* 1020600f jmp 0x10206027 */ goto L_10206027;
L_10206011:;
  /* 10206011 call 0x10205cde */ esp -= 4; M32(esp) = 0x10206016u; SAVEALL; F_10205cde(c); ABI_CHECK(0x10205cdeu, 0x10206011u); RETCHK(0x10206016u, 0x10206011u); LOADALL;
  /* 10206016 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10206017 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020601a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020601b call 0x10204ffb */ esp -= 4; M32(esp) = 0x10206020u; SAVEALL; F_10204ffb(c); ABI_CHECK(0x10204ffbu, 0x1020601bu); RETCHK(0x10206020u, 0x1020601bu); LOADALL;
  /* 10206020 jmp 0x10206027 */ goto L_10206027;
L_10206022:;
  /* 10206022 call 0x1020674c */ esp -= 4; M32(esp) = 0x10206027u; SAVEALL; F_1020674c(c); ABI_CHECK(0x1020674cu, 0x10206022u); RETCHK(0x10206027u, 0x10206022u); LOADALL;
L_10206027:;
  /* 10206027 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1020602b:;
  /* 1020602b call 0x1020598b */ esp -= 4; M32(esp) = 0x10206030u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x1020602bu); RETCHK(0x10206030u, 0x1020602bu); LOADALL;
  /* 10206030 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206031(CPU *c) {
  NATIVE_HOOK(0x10206031u) REGS; LOADALL;
L_10206031:;
  /* 10206031 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10206033 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206034 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10206035(CPU *c) {
  NATIVE_HOOK(0x10206035u) REGS; LOADALL;
L_10206035:;
  /* 10206035 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10206038 jmp 0x10206717 */ SAVEALL; F_10206717(c); return;
}

void F_1020603d(CPU *c) {
  NATIVE_HOOK(0x1020603du) REGS; LOADALL;
L_1020603d:;
  /* 1020603d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1020603e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10206040 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206042 je 0x10206051 */ if (ZF_) goto L_10206051;
  /* 10206044 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10206045 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206048 mov edx, esi */ { edx = (u32)(esi); }
  /* 1020604a call 0x10205ec1 */ esp -= 4; M32(esp) = 0x1020604fu; SAVEALL; F_10205ec1(c); ABI_CHECK(0x10205ec1u, 0x1020604au); RETCHK(0x1020604fu, 0x1020604au); LOADALL;
  /* 1020604f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10206050 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10206051:;
  /* 10206051 cmp dword ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206055 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206058 jne 0x1020605d */ if (!ZF_) goto L_1020605d;
  /* 1020605a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020605b jmp 0x10206060 */ goto L_10206060;
L_1020605d:;
  /* 1020605d push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10206060:;
  /* 10206060 call 0x10205002 */ esp -= 4; M32(esp) = 0x10206065u; SAVEALL; F_10205002(c); ABI_CHECK(0x10205002u, 0x10206060u); RETCHK(0x10206065u, 0x10206060u); LOADALL;
  /* 10206065 push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206067 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020606a push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020606d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020606e call 0x10205bcb */ esp -= 4; M32(esp) = 0x10206073u; SAVEALL; F_10205bcb(c); ABI_CHECK(0x10205bcbu, 0x1020606eu); RETCHK(0x10206073u, 0x1020606eu); LOADALL;
  /* 10206073 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10206076 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 1020607b push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020607e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020607f push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206082 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10206085 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206088 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1020608b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020608c push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020608f call 0x10205cfd */ esp -= 4; M32(esp) = 0x10206094u; SAVEALL; F_10205cfd(c); ABI_CHECK(0x10205cfdu, 0x1020608fu); RETCHK(0x10206094u, 0x1020608fu); LOADALL;
  /* 10206094 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10206097 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206099 je 0x102060a2 */ if (ZF_) goto L_102060a2;
  /* 1020609b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020609c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020609d call 0x10204fcb */ esp -= 4; M32(esp) = 0x102060a2u; SAVEALL; F_10204fcb(c); ABI_CHECK(0x10204fcbu, 0x1020609du); RETCHK(0x102060a2u, 0x1020609du); LOADALL;
L_102060a2:;
  /* 102060a2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102060a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_102060a4(CPU *c) {
  NATIVE_HOOK(0x102060a4u) REGS; LOADALL;
L_102060a4:;
  /* 102060a4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102060a5 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102060a7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102060a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102060a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102060aa mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 102060ad cmp dword ptr [esi], 0x80000003 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x80000003u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102060b3 je 0x1020615f */ if (ZF_) goto L_1020615f;
  /* 102060b9 call 0x10206441 */ esp -= 4; M32(esp) = 0x102060beu; SAVEALL; F_10206441(c); ABI_CHECK(0x10206441u, 0x102060b9u); RETCHK(0x102060beu, 0x102060b9u); LOADALL;
  /* 102060be cmp dword ptr [eax + 0x74], 0 */ { const u32 m_ = (u32)(eax + 0x74u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102060c2 je 0x102060e3 */ if (ZF_) goto L_102060e3;
  /* 102060c4 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102060c7 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102060ca push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102060cd push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102060d0 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102060d3 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102060d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102060d7 call 0x102050c5 */ esp -= 4; M32(esp) = 0x102060dcu; SAVEALL; F_102050c5(c); ABI_CHECK(0x102050c5u, 0x102060d7u); RETCHK(0x102060dcu, 0x102060d7u); LOADALL;
  /* 102060dc add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102060df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102060e1 jne 0x1020615f */ if (!ZF_) goto L_1020615f;
L_102060e3:;
  /* 102060e3 mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 102060e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102060e7 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 102060ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102060eb lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 102060ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102060ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102060f0 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102060f3 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 102060f6 call 0x1020523e */ esp -= 4; M32(esp) = 0x102060fbu; SAVEALL; F_1020523e(c); ABI_CHECK(0x1020523eu, 0x102060f6u); RETCHK(0x102060fbu, 0x102060f6u); LOADALL;
  /* 102060fb mov edi, eax */ { edi = (u32)(eax); }
  /* 102060fd mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10206100 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10206103 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206106 jae 0x1020615e */ if (!CF_) goto L_1020615e;
  /* 10206108 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_10206109:;
  /* 10206109 cmp esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020610b jl 0x1020614f */ if (LT_) goto L_1020614f;
  /* 1020610d cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10206110 jg 0x1020614f */ if (!(ZF_|LT_)) goto L_1020614f;
  /* 10206112 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10206115 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10206118 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1020611b add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1020611d mov ecx, dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10206120 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10206122 je 0x1020612a */ if (ZF_) goto L_1020612a;
  /* 10206124 cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10206128 jne 0x1020614f */ if (!ZF_) goto L_1020614f;
L_1020612a:;
  /* 1020612a push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020612d mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10206130 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206133 lea ebx, [eax - 0x10] */ ebx = (u32)((u32)(eax + 0xfffffff0u));
  /* 10206136 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206139 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1020613b push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020613e push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206141 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10206144 call 0x1020603d */ esp -= 4; M32(esp) = 0x10206149u; SAVEALL; F_1020603d(c); ABI_CHECK(0x1020603du, 0x10206144u); RETCHK(0x10206149u, 0x10206144u); LOADALL;
  /* 10206149 mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 1020614c add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1020614f:;
  /* 1020614f inc dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10206152 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10206155 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10206158 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020615b jb 0x10206109 */ if (CF_) goto L_10206109;
  /* 1020615d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_1020615e:;
  /* 1020615e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_1020615f:;
  /* 1020615f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10206160 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10206161 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
