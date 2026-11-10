#include "funcs.h"

void F_0041b980(CPU *c) {
  NATIVE_HOOK(0x41b980u) REGS; LOADALL;
L_0041b980:;
  /* 0041b980 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0041b982 mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041b985 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041b987 jne 0x41b9d6 */ if (!ZF_) goto L_0041b9d6;
  /* 0041b989 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041b98c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041b98d mov bl, byte ptr [ecx + 0x2d] */ { const u32 m_ = (u32)(ecx + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041b990 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041b992 jne 0x41b9af */ if (!ZF_) goto L_0041b9af;
  /* 0041b994 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041b996 mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041b999 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041b99b jne 0x41b9ab */ if (!ZF_) goto L_0041b9ab;
  /* 0041b99d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0041b9a0:;
  /* 0041b9a0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041b9a2 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041b9a4 mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041b9a7 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041b9a9 je 0x41b9a0 */ if (ZF_) goto L_0041b9a0;
L_0041b9ab:;
  /* 0041b9ab mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0041b9ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041b9ae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041b9af:;
  /* 0041b9af mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041b9b2 mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041b9b5 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041b9b7 jne 0x41b9d3 */ if (!ZF_) goto L_0041b9d3;
  /* 0041b9b9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0041b9c0:;
  /* 0041b9c0 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0041b9c2 cmp ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041b9c5 jne 0x41b9d3 */ if (!ZF_) goto L_0041b9d3;
  /* 0041b9c7 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0041b9c9 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041b9cc mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041b9cf test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041b9d1 je 0x41b9c0 */ if (ZF_) goto L_0041b9c0;
L_0041b9d3:;
  /* 0041b9d3 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0041b9d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0041b9d6:;
  /* 0041b9d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041b9e0(CPU *c) {
  NATIVE_HOOK(0x41b9e0u) REGS; LOADALL;
L_0041b9e0:;
  /* 0041b9e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041b9e1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041b9e3 mov dword ptr [esi], 0x643d40 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x643d40u); }
  /* 0041b9e9 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 0041b9ec cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041b9f1 je 0x41b9fc */ if (ZF_) goto L_0041b9fc;
  /* 0041b9f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041b9f4 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x41b9f9u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x41b9f4u); RETCHK(0x41b9f9u, 0x41b9f4u); LOADALL;
  /* 0041b9f9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041b9fc:;
  /* 0041b9fc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041b9fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041b9ff jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_0041ba10(CPU *c) {
  NATIVE_HOOK(0x41ba10u) REGS; LOADALL;
L_0041ba10:;
  /* 0041ba10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ba11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ba13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ba14 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041ba16 call 0x41b9e0 */ esp -= 4; M32(esp) = 0x41ba1bu; SAVEALL; F_0041b9e0(c); ABI_CHECK(0x41b9e0u, 0x41ba16u); RETCHK(0x41ba1bu, 0x41ba16u); LOADALL;
  /* 0041ba1b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ba1f je 0x41ba2a */ if (ZF_) goto L_0041ba2a;
  /* 0041ba21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ba22 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41ba27u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41ba22u); RETCHK(0x41ba27u, 0x41ba22u); LOADALL;
  /* 0041ba27 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041ba2a:;
  /* 0041ba2a mov eax, esi */ { eax = (u32)(esi); }
  /* 0041ba2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041ba2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ba2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041ba40(CPU *c) {
  NATIVE_HOOK(0x41ba40u) REGS; LOADALL;
L_0041ba40:;
  /* 0041ba40 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0041ba42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041ba70(CPU *c) {
  NATIVE_HOOK(0x41ba70u) REGS; LOADALL;
L_0041ba70:;
  /* 0041ba70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ba71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ba73 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041ba79 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041ba7b push 0x61fa16 */ { u32 v_ = 0x61fa16u; esp -= 4; M32(esp) = v_; }
  /* 0041ba80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba81 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041ba84 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041ba8b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041ba8c mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041ba8f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ba90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ba91 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041ba92 call 0x509940 */ esp -= 4; M32(esp) = 0x41ba97u; SAVEALL; F_00509940(c); ABI_CHECK(0x509940u, 0x41ba92u); RETCHK(0x41ba97u, 0x41ba92u); LOADALL;
  /* 0041ba97 lea esi, [ebx + 0x358] */ esi = (u32)((u32)(ebx + 0x358u));
  /* 0041ba9d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041ba9f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041baa2 mov dword ptr [ebx], 0x643db8 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x643db8u); }
  /* 0041baa8 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 0041baab mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 0041bab0 mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0041bab3 mov byte ptr [esi + 8], al */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041bab6 mov dword ptr [esi + 0x3c], ecx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 0041bab9 mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0041babc mov byte ptr [esi + 0x28], al */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041babf mov dword ptr [esi + 0x58], ecx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ecx); }
  /* 0041bac2 mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 0041bac5 mov byte ptr [esi + 0x44], al */ { const u32 m_ = (u32)(esi + 0x44u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041bac8 mov dword ptr [esi + 0x74], ecx */ { const u32 m_ = (u32)(esi + 0x74u); M32(m_) = (u32)(ecx); }
  /* 0041bacb mov dword ptr [esi + 0x70], eax */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(eax); }
  /* 0041bace mov byte ptr [esi + 0x60], al */ { const u32 m_ = (u32)(esi + 0x60u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041bad1 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0041bad5 call 0x41ab00 */ esp -= 4; M32(esp) = 0x41badau; SAVEALL; F_0041ab00(c); ABI_CHECK(0x41ab00u, 0x41bad5u); RETCHK(0x41badau, 0x41bad5u); LOADALL;
  /* 0041bada mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0041badd mov dword ptr [ebx + 0x3d4], ecx */ { const u32 m_ = (u32)(ebx + 0x3d4u); M32(m_) = (u32)(ecx); }
  /* 0041bae3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041bae6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041bae7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041bae9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041baf0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041baf1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041baf3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041baf4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041bb00(CPU *c) {
  NATIVE_HOOK(0x41bb00u) REGS; LOADALL;
L_0041bb00:;
  /* 0041bb00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041bb01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041bb03 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041bb04 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041bb06 call 0x41bb30 */ esp -= 4; M32(esp) = 0x41bb0bu; SAVEALL; F_0041bb30(c); ABI_CHECK(0x41bb30u, 0x41bb06u); RETCHK(0x41bb0bu, 0x41bb06u); LOADALL;
  /* 0041bb0b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041bb0f je 0x41bb1a */ if (ZF_) goto L_0041bb1a;
  /* 0041bb11 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041bb12 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41bb17u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41bb12u); RETCHK(0x41bb17u, 0x41bb12u); LOADALL;
  /* 0041bb17 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041bb1a:;
  /* 0041bb1a mov eax, edi */ { eax = (u32)(edi); }
  /* 0041bb1c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041bb1d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041bb1e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041bb30(CPU *c) {
  NATIVE_HOOK(0x41bb30u) REGS; LOADALL;
L_0041bb30:;
  /* 0041bb30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041bb31 lea esi, [edi + 0x358] */ esi = (u32)((u32)(edi + 0x358u));
  /* 0041bb37 call 0x417430 */ esp -= 4; M32(esp) = 0x41bb3cu; SAVEALL; F_00417430(c); ABI_CHECK(0x417430u, 0x41bb37u); RETCHK(0x41bb3cu, 0x41bb37u); LOADALL;
  /* 0041bb3c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041bb3e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041bb3f jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_0041bb50(CPU *c) {
  NATIVE_HOOK(0x41bb50u) REGS; LOADALL;
L_0041bb50:;
  /* 0041bb50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041bb51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041bb53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041bb55 push 0x61c008 */ { u32 v_ = 0x61c008u; esp -= 4; M32(esp) = v_; }
  /* 0041bb5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041bb60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bb61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041bb68 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041bb6b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041bb6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041bb6d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041bb6e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0041bb70 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041bb72 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041bb74 push 0x644150 */ { u32 v_ = 0x644150u; esp -= 4; M32(esp) = v_; }
  /* 0041bb79 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041bb7c mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 0041bb83 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041bb86 mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041bb89 call 0x404420 */ esp -= 4; M32(esp) = 0x41bb8eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41bb89u); RETCHK(0x41bb8eu, 0x41bb89u); LOADALL;
  /* 0041bb8e lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041bb91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bb92 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041bb94 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041bb97 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41bb9cu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41bb97u); RETCHK(0x41bb9cu, 0x41bb97u); LOADALL;
  /* 0041bb9c mov esi, eax */ { esi = (u32)(eax); }
  /* 0041bb9e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041bba5 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041bba9 jb 0x41bbb7 */ if (CF_) goto L_0041bbb7;
  /* 0041bbab mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 0041bbae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041bbaf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41bbb4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41bbafu); RETCHK(0x41bbb4u, 0x41bbafu); LOADALL;
  /* 0041bbb4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041bbb7:;
  /* 0041bbb7 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041bbb9 je 0x41bbc6 */ if (ZF_) goto L_0041bbc6;
  /* 0041bbbb lea eax, [edi + 0x398] */ eax = (u32)((u32)(edi + 0x398u));
  /* 0041bbc1 call 0x5224b0 */ esp -= 4; M32(esp) = 0x41bbc6u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x41bbc1u); RETCHK(0x41bbc6u, 0x41bbc1u); LOADALL;
L_0041bbc6:;
  /* 0041bbc6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0041bbc8 push 0x644148 */ { u32 v_ = 0x644148u; esp -= 4; M32(esp) = v_; }
  /* 0041bbcd lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041bbd0 mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 0041bbd7 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041bbda mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041bbdd call 0x404420 */ esp -= 4; M32(esp) = 0x41bbe2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41bbddu); RETCHK(0x41bbe2u, 0x41bbddu); LOADALL;
  /* 0041bbe2 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041bbe5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041bbe6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041bbe8 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0041bbef call 0x5075d0 */ esp -= 4; M32(esp) = 0x41bbf4u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41bbefu); RETCHK(0x41bbf4u, 0x41bbefu); LOADALL;
  /* 0041bbf4 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041bbf6 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041bbfd cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041bc01 jb 0x41bc0f */ if (CF_) goto L_0041bc0f;
  /* 0041bc03 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0041bc06 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bc07 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41bc0cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41bc07u); RETCHK(0x41bc0cu, 0x41bc07u); LOADALL;
  /* 0041bc0c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041bc0f:;
  /* 0041bc0f cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041bc11 je 0x41bc1e */ if (ZF_) goto L_0041bc1e;
  /* 0041bc13 lea eax, [edi + 0x3b4] */ eax = (u32)((u32)(edi + 0x3b4u));
  /* 0041bc19 call 0x5224b0 */ esp -= 4; M32(esp) = 0x41bc1eu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x41bc19u); RETCHK(0x41bc1eu, 0x41bc19u); LOADALL;
L_0041bc1e:;
  /* 0041bc1e push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0041bc20 push 0x64413c */ { u32 v_ = 0x64413cu; esp -= 4; M32(esp) = v_; }
  /* 0041bc25 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0041bc28 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0041bc2f mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041bc32 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041bc35 call 0x404420 */ esp -= 4; M32(esp) = 0x41bc3au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41bc35u); RETCHK(0x41bc3au, 0x41bc35u); LOADALL;
  /* 0041bc3a lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0041bc3d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041bc3e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041bc40 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0041bc47 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41bc4cu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41bc47u); RETCHK(0x41bc4cu, 0x41bc47u); LOADALL;
  /* 0041bc4c mov esi, eax */ { esi = (u32)(eax); }
  /* 0041bc4e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041bc55 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041bc59 jb 0x41bc67 */ if (CF_) goto L_0041bc67;
  /* 0041bc5b mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0041bc5e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041bc5f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41bc64u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41bc5fu); RETCHK(0x41bc64u, 0x41bc5fu); LOADALL;
  /* 0041bc64 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041bc67:;
  /* 0041bc67 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041bc69 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0041bc70 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041bc73 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041bc76 je 0x41bc83 */ if (ZF_) goto L_0041bc83;
  /* 0041bc78 lea eax, [edi + 0x37c] */ eax = (u32)((u32)(edi + 0x37cu));
  /* 0041bc7e call 0x5224b0 */ esp -= 4; M32(esp) = 0x41bc83u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x41bc7eu); RETCHK(0x41bc83u, 0x41bc7eu); LOADALL;
L_0041bc83:;
  /* 0041bc83 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041bc86 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041bc87 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041bc88 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041bc8a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041bc8b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041bc92 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041bc94 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041bc95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041bca0(CPU *c) {
  NATIVE_HOOK(0x41bca0u) REGS; LOADALL;
L_0041bca0:;
  /* 0041bca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041bca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041bca3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041bca4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041bca5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041bca6 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0041bca9 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0041bcab dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041bcac mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041bcae jne 0x41bd26 */ if (!ZF_) goto L_0041bd26;
  /* 0041bcb0 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041bcb3 call 0x5075c0 */ esp -= 4; M32(esp) = 0x41bcb8u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x41bcb3u); RETCHK(0x41bcb8u, 0x41bcb3u); LOADALL;
  /* 0041bcb8 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0041bcbb push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0041bcbd push 0x644130 */ { u32 v_ = 0x644130u; esp -= 4; M32(esp) = v_; }
  /* 0041bcc2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041bcc3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041bcc5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041bcc7 call 0x405de0 */ esp -= 4; M32(esp) = 0x41bcccu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x41bcc7u); RETCHK(0x41bcccu, 0x41bcc7u); LOADALL;
  /* 0041bccc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041bcce je 0x41bcf0 */ if (ZF_) goto L_0041bcf0;
  /* 0041bcd0 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041bcd3 call 0x5075c0 */ esp -= 4; M32(esp) = 0x41bcd8u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x41bcd3u); RETCHK(0x41bcd8u, 0x41bcd3u); LOADALL;
  /* 0041bcd8 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0041bcdb push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0041bcdd push 0x644124 */ { u32 v_ = 0x644124u; esp -= 4; M32(esp) = v_; }
  /* 0041bce2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041bce3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041bce5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041bce7 call 0x405de0 */ esp -= 4; M32(esp) = 0x41bcecu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x41bce7u); RETCHK(0x41bcecu, 0x41bce7u); LOADALL;
  /* 0041bcec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041bcee jne 0x41bd26 */ if (!ZF_) goto L_0041bd26;
L_0041bcf0:;
  /* 0041bcf0 call 0x550820 */ esp -= 4; M32(esp) = 0x41bcf5u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x41bcf0u); RETCHK(0x41bcf5u, 0x41bcf0u); LOADALL;
  /* 0041bcf5 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041bcf7 mov ebx, 0x2003 */ { ebx = (u32)(0x2003u); }
  /* 0041bcfc call 0x54be20 */ esp -= 4; M32(esp) = 0x41bd01u; SAVEALL; F_0054be20(c); ABI_CHECK(0x54be20u, 0x41bcfcu); RETCHK(0x41bd01u, 0x41bcfcu); LOADALL;
  /* 0041bd01 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041bd03 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041bd05 je 0x41bd14 */ if (ZF_) goto L_0041bd14;
  /* 0041bd07 mov eax, dword ptr [esi + 0x3d4] */ { const u32 m_ = (u32)(esi + 0x3d4u); eax = (u32)(M32(m_)); }
  /* 0041bd0d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041bd0f call 0x4194f0 */ esp -= 4; M32(esp) = 0x41bd14u; SAVEALL; F_004194f0(c); ABI_CHECK(0x4194f0u, 0x41bd0fu); RETCHK(0x41bd14u, 0x41bd0fu); LOADALL;
L_0041bd14:;
  /* 0041bd14 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041bd16 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0041bd18 call 0x509d90 */ esp -= 4; M32(esp) = 0x41bd1du; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x41bd18u); RETCHK(0x41bd1du, 0x41bd18u); LOADALL;
  /* 0041bd1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041bd1e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041bd1f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041bd21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041bd22 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041bd23 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0041bd26:;
  /* 0041bd26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041bd27 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041bd29 call 0x50a1b0 */ esp -= 4; M32(esp) = 0x41bd2eu; SAVEALL; F_0050a1b0(c); ABI_CHECK(0x50a1b0u, 0x41bd29u); RETCHK(0x41bd2eu, 0x41bd29u); LOADALL;
  /* 0041bd2e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041bd2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041bd30 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041bd31 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041bd32 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041bd40(CPU *c) {
  NATIVE_HOOK(0x41bd40u) REGS; LOADALL;
L_0041bd40:;
  /* 0041bd40 push 0x644118 */ { u32 v_ = 0x644118u; esp -= 4; M32(esp) = v_; }
  /* 0041bd45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bd46 call 0x50a070 */ esp -= 4; M32(esp) = 0x41bd4bu; SAVEALL; F_0050a070(c); ABI_CHECK(0x50a070u, 0x41bd46u); RETCHK(0x41bd4bu, 0x41bd46u); LOADALL;
  /* 0041bd4b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041bd50(CPU *c) {
  NATIVE_HOOK(0x41bd50u) REGS; LOADALL;
L_0041bd50:;
  /* 0041bd50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041bd51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041bd53 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041bd59 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041bd5b push 0x61f9f6 */ { u32 v_ = 0x61f9f6u; esp -= 4; M32(esp) = v_; }
  /* 0041bd60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bd61 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041bd64 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041bd6b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041bd6c mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041bd6f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041bd70 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041bd71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bd72 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041bd73 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041bd75 call 0x509940 */ esp -= 4; M32(esp) = 0x41bd7au; SAVEALL; F_00509940(c); ABI_CHECK(0x509940u, 0x41bd75u); RETCHK(0x41bd7au, 0x41bd75u); LOADALL;
  /* 0041bd7a lea esi, [ebx + 0x374] */ esi = (u32)((u32)(ebx + 0x374u));
  /* 0041bd80 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041bd82 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041bd85 mov dword ptr [ebx], 0x643fa8 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x643fa8u); }
  /* 0041bd8b mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 0041bd8e mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 0041bd93 mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0041bd96 mov byte ptr [esi + 8], al */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041bd99 mov dword ptr [esi + 0x3c], ecx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 0041bd9c mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0041bd9f mov byte ptr [esi + 0x28], al */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041bda2 mov dword ptr [esi + 0x58], ecx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ecx); }
  /* 0041bda5 mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 0041bda8 mov byte ptr [esi + 0x44], al */ { const u32 m_ = (u32)(esi + 0x44u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041bdab mov dword ptr [esi + 0x74], ecx */ { const u32 m_ = (u32)(esi + 0x74u); M32(m_) = (u32)(ecx); }
  /* 0041bdae mov dword ptr [esi + 0x70], eax */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(eax); }
  /* 0041bdb1 mov byte ptr [esi + 0x60], al */ { const u32 m_ = (u32)(esi + 0x60u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041bdb4 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0041bdb8 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041bdba lea eax, [ebx + 0x350] */ eax = (u32)((u32)(ebx + 0x350u));
  /* 0041bdc0 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0041bdc2 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0041bdc5 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0041bdc8 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0041bdcb mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0041bdce mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0041bdd1 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0041bdd4 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0041bdd7 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0041bdda mov edx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0041bddd mov dword ptr [ebx + 0x358], edx */ { const u32 m_ = (u32)(ebx + 0x358u); M32(m_) = (u32)(edx); }
  /* 0041bde3 call 0x556030 */ esp -= 4; M32(esp) = 0x41bde8u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x41bde3u); RETCHK(0x41bde8u, 0x41bde3u); LOADALL;
  /* 0041bde8 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0041bdeb call 0x555a60 */ esp -= 4; M32(esp) = 0x41bdf0u; SAVEALL; F_00555a60(c); ABI_CHECK(0x555a60u, 0x41bdebu); RETCHK(0x41bdf0u, 0x41bdebu); LOADALL;
  /* 0041bdf0 mov dword ptr [ebx + 0x350], eax */ { const u32 m_ = (u32)(ebx + 0x350u); M32(m_) = (u32)(eax); }
  /* 0041bdf6 call 0x41ab00 */ esp -= 4; M32(esp) = 0x41bdfbu; SAVEALL; F_0041ab00(c); ABI_CHECK(0x41ab00u, 0x41bdf6u); RETCHK(0x41bdfbu, 0x41bdf6u); LOADALL;
  /* 0041bdfb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041bdfe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041bdff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041be00 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041be02 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041be09 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041be0a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041be0c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041be0d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0041be10(CPU *c) {
  NATIVE_HOOK(0x41be10u) REGS; LOADALL;
L_0041be10:;
  /* 0041be10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041be11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041be13 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041be14 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041be16 call 0x41c090 */ esp -= 4; M32(esp) = 0x41be1bu; SAVEALL; F_0041c090(c); ABI_CHECK(0x41c090u, 0x41be16u); RETCHK(0x41be1bu, 0x41be16u); LOADALL;
  /* 0041be1b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041be1f je 0x41be2a */ if (ZF_) goto L_0041be2a;
  /* 0041be21 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041be22 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41be27u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41be22u); RETCHK(0x41be27u, 0x41be22u); LOADALL;
  /* 0041be27 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041be2a:;
  /* 0041be2a mov eax, edi */ { eax = (u32)(edi); }
  /* 0041be2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041be2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041be2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041be40(CPU *c) {
  NATIVE_HOOK(0x41be40u) REGS; LOADALL;
L_0041be40:;
  /* 0041be40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041be41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041be43 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041be45 push 0x61c0c0 */ { u32 v_ = 0x61c0c0u; esp -= 4; M32(esp) = v_; }
  /* 0041be4a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041be50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041be51 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041be58 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041be5b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041be5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041be5d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041be5e push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0041be60 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041be62 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041be64 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0041be69 push 0x64410c */ { u32 v_ = 0x64410cu; esp -= 4; M32(esp) = v_; }
  /* 0041be6e lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041be71 mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 0041be74 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041be77 mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041be7a call 0x404420 */ esp -= 4; M32(esp) = 0x41be7fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41be7au); RETCHK(0x41be7fu, 0x41be7au); LOADALL;
  /* 0041be7f lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041be82 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041be83 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041be85 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041be88 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41be8du; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41be88u); RETCHK(0x41be8du, 0x41be88u); LOADALL;
  /* 0041be8d mov dword ptr [esi + 0x364], eax */ { const u32 m_ = (u32)(esi + 0x364u); M32(m_) = (u32)(eax); }
  /* 0041be93 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041be9a cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041be9e jb 0x41beac */ if (CF_) goto L_0041beac;
  /* 0041bea0 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 0041bea3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041bea4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41bea9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41bea4u); RETCHK(0x41bea9u, 0x41bea4u); LOADALL;
  /* 0041bea9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041beac:;
  /* 0041beac push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0041beae push 0x644100 */ { u32 v_ = 0x644100u; esp -= 4; M32(esp) = v_; }
  /* 0041beb3 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041beb6 mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 0041beb9 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041bebc mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041bebf call 0x404420 */ esp -= 4; M32(esp) = 0x41bec4u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41bebfu); RETCHK(0x41bec4u, 0x41bebfu); LOADALL;
  /* 0041bec4 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041bec7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041bec8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041beca mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0041bed1 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41bed6u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41bed1u); RETCHK(0x41bed6u, 0x41bed1u); LOADALL;
  /* 0041bed6 mov dword ptr [esi + 0x368], eax */ { const u32 m_ = (u32)(esi + 0x368u); M32(m_) = (u32)(eax); }
  /* 0041bedc mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041bee3 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041bee7 jb 0x41bef5 */ if (CF_) goto L_0041bef5;
  /* 0041bee9 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0041beec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041beed call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41bef2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41beedu); RETCHK(0x41bef2u, 0x41beedu); LOADALL;
  /* 0041bef2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041bef5:;
  /* 0041bef5 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0041bef7 push 0x6440f4 */ { u32 v_ = 0x6440f4u; esp -= 4; M32(esp) = v_; }
  /* 0041befc lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041beff mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 0041bf02 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041bf05 mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041bf08 call 0x404420 */ esp -= 4; M32(esp) = 0x41bf0du; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41bf08u); RETCHK(0x41bf0du, 0x41bf08u); LOADALL;
  /* 0041bf0d lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041bf10 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041bf11 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041bf13 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0041bf1a call 0x5075d0 */ esp -= 4; M32(esp) = 0x41bf1fu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41bf1au); RETCHK(0x41bf1fu, 0x41bf1au); LOADALL;
  /* 0041bf1f mov dword ptr [esi + 0x360], eax */ { const u32 m_ = (u32)(esi + 0x360u); M32(m_) = (u32)(eax); }
  /* 0041bf25 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041bf2c cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041bf30 jb 0x41bf3e */ if (CF_) goto L_0041bf3e;
  /* 0041bf32 mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 0041bf35 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041bf36 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41bf3bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41bf36u); RETCHK(0x41bf3bu, 0x41bf36u); LOADALL;
  /* 0041bf3b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041bf3e:;
  /* 0041bf3e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041bf3f push 0x6440e4 */ { u32 v_ = 0x6440e4u; esp -= 4; M32(esp) = v_; }
  /* 0041bf44 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0041bf47 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 0041bf4a mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041bf4d mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041bf50 call 0x404420 */ esp -= 4; M32(esp) = 0x41bf55u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41bf50u); RETCHK(0x41bf55u, 0x41bf50u); LOADALL;
  /* 0041bf55 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0041bf58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bf59 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041bf5b mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0041bf62 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41bf67u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41bf62u); RETCHK(0x41bf67u, 0x41bf62u); LOADALL;
  /* 0041bf67 mov dword ptr [esi + 0x370], eax */ { const u32 m_ = (u32)(esi + 0x370u); M32(m_) = (u32)(eax); }
  /* 0041bf6d mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041bf74 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041bf78 jb 0x41bf86 */ if (CF_) goto L_0041bf86;
  /* 0041bf7a mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 0041bf7d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041bf7e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41bf83u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41bf7eu); RETCHK(0x41bf83u, 0x41bf7eu); LOADALL;
  /* 0041bf83 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041bf86:;
  /* 0041bf86 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 0041bf89 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041bf8c add esi, 0x350 */ { u32 a_ = esi, b_ = 0x350u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041bf92 mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 0041bf97 mov edi, esp */ { edi = (u32)(esp); }
  /* 0041bf99 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041bf9c mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041bf9f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0041bfa1 call 0x462480 */ esp -= 4; M32(esp) = 0x41bfa6u; SAVEALL; F_00462480(c); ABI_CHECK(0x462480u, 0x41bfa1u); RETCHK(0x41bfa6u, 0x41bfa1u); LOADALL;
  /* 0041bfa6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041bfa9 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041bfac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041bfad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041bfae mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041bfb0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041bfb7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041bfb8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041bfba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041bfbb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041bfc0(CPU *c) {
  NATIVE_HOOK(0x41bfc0u) REGS; LOADALL;
L_0041bfc0:;
  /* 0041bfc0 push 0x6440d0 */ { u32 v_ = 0x6440d0u; esp -= 4; M32(esp) = v_; }
  /* 0041bfc5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bfc6 call 0x50a070 */ esp -= 4; M32(esp) = 0x41bfcbu; SAVEALL; F_0050a070(c); ABI_CHECK(0x50a070u, 0x41bfc6u); RETCHK(0x41bfcbu, 0x41bfc6u); LOADALL;
  /* 0041bfcb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041bfd0(CPU *c) {
  NATIVE_HOOK(0x41bfd0u) REGS; LOADALL;
L_0041bfd0:;
  /* 0041bfd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041bfd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041bfd3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041bfd9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041bfdb push 0x61f9f6 */ { u32 v_ = 0x61f9f6u; esp -= 4; M32(esp) = v_; }
  /* 0041bfe0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bfe1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041bfe4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041bfeb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041bfec mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041bfef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041bff0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041bff1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041bff2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041bff3 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041bff5 call 0x509940 */ esp -= 4; M32(esp) = 0x41bffau; SAVEALL; F_00509940(c); ABI_CHECK(0x509940u, 0x41bff5u); RETCHK(0x41bffau, 0x41bff5u); LOADALL;
  /* 0041bffa lea esi, [ebx + 0x374] */ esi = (u32)((u32)(ebx + 0x374u));
  /* 0041c000 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041c002 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041c005 mov dword ptr [ebx], 0x643eb0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x643eb0u); }
  /* 0041c00b mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 0041c00e mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 0041c013 mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0041c016 mov byte ptr [esi + 8], al */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041c019 mov dword ptr [esi + 0x3c], ecx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 0041c01c mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0041c01f mov byte ptr [esi + 0x28], al */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041c022 mov dword ptr [esi + 0x58], ecx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ecx); }
  /* 0041c025 mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 0041c028 mov byte ptr [esi + 0x44], al */ { const u32 m_ = (u32)(esi + 0x44u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041c02b mov dword ptr [esi + 0x74], ecx */ { const u32 m_ = (u32)(esi + 0x74u); M32(m_) = (u32)(ecx); }
  /* 0041c02e mov dword ptr [esi + 0x70], eax */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(eax); }
  /* 0041c031 mov byte ptr [esi + 0x60], al */ { const u32 m_ = (u32)(esi + 0x60u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041c034 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0041c038 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041c03a lea eax, [ebx + 0x350] */ eax = (u32)((u32)(ebx + 0x350u));
  /* 0041c040 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0041c042 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0041c045 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0041c048 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0041c04b mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0041c04e mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0041c051 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0041c054 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0041c057 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0041c05a mov edx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0041c05d mov dword ptr [ebx + 0x358], edx */ { const u32 m_ = (u32)(ebx + 0x358u); M32(m_) = (u32)(edx); }
  /* 0041c063 call 0x556030 */ esp -= 4; M32(esp) = 0x41c068u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x41c063u); RETCHK(0x41c068u, 0x41c063u); LOADALL;
  /* 0041c068 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0041c06b call 0x555a60 */ esp -= 4; M32(esp) = 0x41c070u; SAVEALL; F_00555a60(c); ABI_CHECK(0x555a60u, 0x41c06bu); RETCHK(0x41c070u, 0x41c06bu); LOADALL;
  /* 0041c070 mov dword ptr [ebx + 0x350], eax */ { const u32 m_ = (u32)(ebx + 0x350u); M32(m_) = (u32)(eax); }
  /* 0041c076 call 0x41ab00 */ esp -= 4; M32(esp) = 0x41c07bu; SAVEALL; F_0041ab00(c); ABI_CHECK(0x41ab00u, 0x41c076u); RETCHK(0x41c07bu, 0x41c076u); LOADALL;
  /* 0041c07b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041c07e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041c07f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c080 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041c082 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041c089 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c08a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041c08c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c08d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0041c090(CPU *c) {
  NATIVE_HOOK(0x41c090u) REGS; LOADALL;
L_0041c090:;
  /* 0041c090 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041c091 lea esi, [edi + 0x374] */ esi = (u32)((u32)(edi + 0x374u));
  /* 0041c097 call 0x417430 */ esp -= 4; M32(esp) = 0x41c09cu; SAVEALL; F_00417430(c); ABI_CHECK(0x417430u, 0x41c097u); RETCHK(0x41c09cu, 0x41c097u); LOADALL;
  /* 0041c09c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041c09e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c09f jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_0041c0b0(CPU *c) {
  NATIVE_HOOK(0x41c0b0u) REGS; LOADALL;
L_0041c0b0:;
  /* 0041c0b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041c0b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041c0b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041c0b5 push 0x62629e */ { u32 v_ = 0x62629eu; esp -= 4; M32(esp) = v_; }
  /* 0041c0ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041c0c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c0c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041c0c8 sub esp, 0x78 */ { u32 a_ = esp, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041c0cb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041c0d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c0d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041c0d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041c0d3 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 0041c0d5 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0041c0d7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0041c0d9 push 0x6440c0 */ { u32 v_ = 0x6440c0u; esp -= 4; M32(esp) = v_; }
  /* 0041c0de lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c0e1 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0041c0e4 mov dword ptr [ebp - 0x4c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0xfu); }
  /* 0041c0eb mov dword ptr [ebp - 0x50], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edi); }
  /* 0041c0ee mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 0041c0f2 call 0x404420 */ esp -= 4; M32(esp) = 0x41c0f7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41c0f2u); RETCHK(0x41c0f7u, 0x41c0f2u); LOADALL;
  /* 0041c0f7 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c0fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c0fb mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041c0fd mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041c100 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41c105u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41c100u); RETCHK(0x41c105u, 0x41c100u); LOADALL;
  /* 0041c105 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0041c108 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041c10a mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0041c10d cmp dword ptr [ebp - 0x4c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c111 mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
  /* 0041c114 jb 0x41c125 */ if (CF_) goto L_0041c125;
  /* 0041c116 mov ecx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ecx = (u32)(M32(m_)); }
  /* 0041c119 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c11a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c11fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c11au); RETCHK(0x41c11fu, 0x41c11au); LOADALL;
  /* 0041c11f mov ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ecx = (u32)(M32(m_)); }
  /* 0041c122 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c125:;
  /* 0041c125 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c127 je 0x41c139 */ if (ZF_) goto L_0041c139;
  /* 0041c129 lea eax, [ebx + 0x398] */ eax = (u32)((u32)(ebx + 0x398u));
  /* 0041c12f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041c131 call 0x5224b0 */ esp -= 4; M32(esp) = 0x41c136u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x41c131u); RETCHK(0x41c136u, 0x41c131u); LOADALL;
  /* 0041c136 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0041c139:;
  /* 0041c139 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0041c13b push 0x64410c */ { u32 v_ = 0x64410cu; esp -= 4; M32(esp) = v_; }
  /* 0041c140 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c143 mov dword ptr [ebp - 0x4c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0xfu); }
  /* 0041c14a mov dword ptr [ebp - 0x50], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edi); }
  /* 0041c14d mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 0041c151 call 0x404420 */ esp -= 4; M32(esp) = 0x41c156u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41c151u); RETCHK(0x41c156u, 0x41c151u); LOADALL;
  /* 0041c156 lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c159 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c15a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041c15c mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0041c163 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41c168u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41c163u); RETCHK(0x41c168u, 0x41c163u); LOADALL;
  /* 0041c168 mov dword ptr [ebx + 0x364], eax */ { const u32 m_ = (u32)(ebx + 0x364u); M32(m_) = (u32)(eax); }
  /* 0041c16e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0041c171 cmp dword ptr [ebp - 0x4c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c175 jb 0x41c183 */ if (CF_) goto L_0041c183;
  /* 0041c177 mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 0041c17a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c17b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c180u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c17bu); RETCHK(0x41c180u, 0x41c17bu); LOADALL;
  /* 0041c180 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c183:;
  /* 0041c183 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0041c185 push 0x644100 */ { u32 v_ = 0x644100u; esp -= 4; M32(esp) = v_; }
  /* 0041c18a lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c18d mov dword ptr [ebp - 0x4c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0xfu); }
  /* 0041c194 mov dword ptr [ebp - 0x50], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edi); }
  /* 0041c197 mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 0041c19b call 0x404420 */ esp -= 4; M32(esp) = 0x41c1a0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41c19bu); RETCHK(0x41c1a0u, 0x41c19bu); LOADALL;
  /* 0041c1a0 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c1a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c1a4 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041c1a6 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0041c1ad call 0x5075d0 */ esp -= 4; M32(esp) = 0x41c1b2u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41c1adu); RETCHK(0x41c1b2u, 0x41c1adu); LOADALL;
  /* 0041c1b2 mov dword ptr [ebx + 0x368], eax */ { const u32 m_ = (u32)(ebx + 0x368u); M32(m_) = (u32)(eax); }
  /* 0041c1b8 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0041c1bb cmp dword ptr [ebp - 0x4c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c1bf jb 0x41c1cd */ if (CF_) goto L_0041c1cd;
  /* 0041c1c1 mov edx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); edx = (u32)(M32(m_)); }
  /* 0041c1c4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c1c5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c1cau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c1c5u); RETCHK(0x41c1cau, 0x41c1c5u); LOADALL;
  /* 0041c1ca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c1cd:;
  /* 0041c1cd push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0041c1cf push 0x6440f4 */ { u32 v_ = 0x6440f4u; esp -= 4; M32(esp) = v_; }
  /* 0041c1d4 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c1d7 mov dword ptr [ebp - 0x4c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0xfu); }
  /* 0041c1de mov dword ptr [ebp - 0x50], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edi); }
  /* 0041c1e1 mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 0041c1e5 call 0x404420 */ esp -= 4; M32(esp) = 0x41c1eau; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41c1e5u); RETCHK(0x41c1eau, 0x41c1e5u); LOADALL;
  /* 0041c1ea lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c1ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c1ee mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041c1f0 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0041c1f7 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41c1fcu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41c1f7u); RETCHK(0x41c1fcu, 0x41c1f7u); LOADALL;
  /* 0041c1fc mov dword ptr [ebx + 0x360], eax */ { const u32 m_ = (u32)(ebx + 0x360u); M32(m_) = (u32)(eax); }
  /* 0041c202 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0041c205 cmp dword ptr [ebp - 0x4c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c209 jb 0x41c217 */ if (CF_) goto L_0041c217;
  /* 0041c20b mov ecx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ecx = (u32)(M32(m_)); }
  /* 0041c20e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c20f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c214u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c20fu); RETCHK(0x41c214u, 0x41c20fu); LOADALL;
  /* 0041c214 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c217:;
  /* 0041c217 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 0041c219 push 0x6440e4 */ { u32 v_ = 0x6440e4u; esp -= 4; M32(esp) = v_; }
  /* 0041c21e lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c221 mov dword ptr [ebp - 0x4c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0xfu); }
  /* 0041c228 mov dword ptr [ebp - 0x50], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edi); }
  /* 0041c22b mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 0041c22f call 0x404420 */ esp -= 4; M32(esp) = 0x41c234u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41c22fu); RETCHK(0x41c234u, 0x41c22fu); LOADALL;
  /* 0041c234 lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c237 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c238 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041c23a mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 0041c241 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41c246u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41c241u); RETCHK(0x41c246u, 0x41c241u); LOADALL;
  /* 0041c246 mov dword ptr [ebx + 0x370], eax */ { const u32 m_ = (u32)(ebx + 0x370u); M32(m_) = (u32)(eax); }
  /* 0041c24c mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0041c24f cmp dword ptr [ebp - 0x4c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c253 jb 0x41c261 */ if (CF_) goto L_0041c261;
  /* 0041c255 mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 0041c258 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c259 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c25eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c259u); RETCHK(0x41c25eu, 0x41c259u); LOADALL;
  /* 0041c25e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c261:;
  /* 0041c261 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041c264 lea esi, [ebx + 0x350] */ esi = (u32)((u32)(ebx + 0x350u));
  /* 0041c26a mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 0041c26f mov edi, esp */ { edi = (u32)(esp); }
  /* 0041c271 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0041c273 call 0x462480 */ esp -= 4; M32(esp) = 0x41c278u; SAVEALL; F_00462480(c); ABI_CHECK(0x462480u, 0x41c273u); RETCHK(0x41c278u, 0x41c273u); LOADALL;
  /* 0041c278 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0041c27d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0041c27f add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041c282 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0041c285 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 0041c288 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0041c28c mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 0041c293 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0041c296 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0041c299 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0041c29d mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 0041c2a1 mov eax, dword ptr [ebx + 0x368] */ { const u32 m_ = (u32)(ebx + 0x368u); eax = (u32)(M32(m_)); }
  /* 0041c2a7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c2a9 je 0x41c2b3 */ if (ZF_) goto L_0041c2b3;
  /* 0041c2ab lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0041c2ae call 0x522620 */ esp -= 4; M32(esp) = 0x41c2b3u; SAVEALL; F_00522620(c); ABI_CHECK(0x522620u, 0x41c2aeu); RETCHK(0x41c2b3u, 0x41c2aeu); LOADALL;
L_0041c2b3:;
  /* 0041c2b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041c2b5 mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 0041c2ba lea esi, [ebp - 0x84] */ esi = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0041c2c0 lea edx, [ebp - 0x48] */ edx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0041c2c3 call 0x40c990 */ esp -= 4; M32(esp) = 0x41c2c8u; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x41c2c3u); RETCHK(0x41c2c8u, 0x41c2c3u); LOADALL;
  /* 0041c2c8 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041c2ca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041c2cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c2cc lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0041c2cf mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 0041c2d3 call 0x404140 */ esp -= 4; M32(esp) = 0x41c2d8u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x41c2d3u); RETCHK(0x41c2d8u, 0x41c2d3u); LOADALL;
  /* 0041c2d8 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 0041c2dc cmp dword ptr [ebp - 0x6c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c2e0 jb 0x41c2ee */ if (CF_) goto L_0041c2ee;
  /* 0041c2e2 mov ecx, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); ecx = (u32)(M32(m_)); }
  /* 0041c2e5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c2e6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c2ebu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c2e6u); RETCHK(0x41c2ebu, 0x41c2e6u); LOADALL;
  /* 0041c2eb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c2ee:;
  /* 0041c2ee push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0041c2f0 push 0x6440b0 */ { u32 v_ = 0x6440b0u; esp -= 4; M32(esp) = v_; }
  /* 0041c2f5 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0041c2fb mov dword ptr [ebp - 0x6c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0xfu); }
  /* 0041c302 mov dword ptr [ebp - 0x70], edi */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(edi); }
  /* 0041c305 mov byte ptr [ebp - 0x80], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M8(m_) = (u8)(0x0u); }
  /* 0041c309 call 0x404420 */ esp -= 4; M32(esp) = 0x41c30eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41c309u); RETCHK(0x41c30eu, 0x41c309u); LOADALL;
  /* 0041c30e lea edx, [ebp - 0x84] */ edx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0041c314 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c315 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041c317 mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 0041c31b call 0x5075d0 */ esp -= 4; M32(esp) = 0x41c320u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41c31bu); RETCHK(0x41c320u, 0x41c31bu); LOADALL;
  /* 0041c320 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041c322 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 0041c326 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0041c329 mov ebx, 0x10 */ { ebx = (u32)(0x10u); }
  /* 0041c32e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c330 jb 0x41c33e */ if (CF_) goto L_0041c33e;
  /* 0041c332 mov eax, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); eax = (u32)(M32(m_)); }
  /* 0041c335 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c336 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c33bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c336u); RETCHK(0x41c33bu, 0x41c336u); LOADALL;
  /* 0041c33b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c33e:;
  /* 0041c33e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c340 je 0x41c34a */ if (ZF_) goto L_0041c34a;
  /* 0041c342 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0041c345 call 0x5224b0 */ esp -= 4; M32(esp) = 0x41c34au; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x41c345u); RETCHK(0x41c34au, 0x41c345u); LOADALL;
L_0041c34a:;
  /* 0041c34a cmp dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c34d jb 0x41c35b */ if (CF_) goto L_0041c35b;
  /* 0041c34f mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0041c352 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c353 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c358u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c353u); RETCHK(0x41c358u, 0x41c353u); LOADALL;
  /* 0041c358 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c35b:;
  /* 0041c35b cmp dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c35e mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0041c365 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0041c368 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0041c36c jb 0x41c37a */ if (CF_) goto L_0041c37a;
  /* 0041c36e mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 0041c371 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c372 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c377u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c372u); RETCHK(0x41c377u, 0x41c372u); LOADALL;
  /* 0041c377 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c37a:;
  /* 0041c37a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041c37d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041c384 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0041c387 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041c389 call 0x61af31 */ esp -= 4; M32(esp) = 0x41c38eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41c389u); RETCHK(0x41c38eu, 0x41c389u); LOADALL;
  /* 0041c38e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041c38f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c390 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c391 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041c393 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c394 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c3a0(CPU *c) {
  NATIVE_HOOK(0x41c3a0u) REGS; LOADALL;
L_0041c3a0:;
  /* 0041c3a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041c3a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041c3a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c3a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041c3a5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0041c3a8 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0041c3aa dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041c3ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041c3ac mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041c3ae jne 0x41c436 */ if (!ZF_) goto L_0041c436;
  /* 0041c3b4 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041c3b7 call 0x5075c0 */ esp -= 4; M32(esp) = 0x41c3bcu; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x41c3b7u); RETCHK(0x41c3bcu, 0x41c3b7u); LOADALL;
  /* 0041c3bc mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0041c3bf push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0041c3c1 push 0x644130 */ { u32 v_ = 0x644130u; esp -= 4; M32(esp) = v_; }
  /* 0041c3c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c3c7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041c3c9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041c3cb call 0x405de0 */ esp -= 4; M32(esp) = 0x41c3d0u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x41c3cbu); RETCHK(0x41c3d0u, 0x41c3cbu); LOADALL;
  /* 0041c3d0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041c3d2 jne 0x41c3f6 */ if (!ZF_) goto L_0041c3f6;
  /* 0041c3d4 mov ebx, dword ptr [edi + 0x394] */ { const u32 m_ = (u32)(edi + 0x394u); ebx = (u32)(M32(m_)); }
  /* 0041c3da mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0041c3df call 0x461620 */ esp -= 4; M32(esp) = 0x41c3e4u; SAVEALL; F_00461620(c); ABI_CHECK(0x461620u, 0x41c3dfu); RETCHK(0x41c3e4u, 0x41c3dfu); LOADALL;
L_0041c3e4:;
  /* 0041c3e4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041c3e6 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0041c3e8 call 0x509d90 */ esp -= 4; M32(esp) = 0x41c3edu; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x41c3e8u); RETCHK(0x41c3edu, 0x41c3e8u); LOADALL;
  /* 0041c3ed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041c3ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c3ef mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041c3f1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c3f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c3f3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0041c3f6:;
  /* 0041c3f6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041c3f9 call 0x5075c0 */ esp -= 4; M32(esp) = 0x41c3feu; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x41c3f9u); RETCHK(0x41c3feu, 0x41c3f9u); LOADALL;
  /* 0041c3fe mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 0041c401 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0041c403 push 0x6440dc */ { u32 v_ = 0x6440dcu; esp -= 4; M32(esp) = v_; }
  /* 0041c408 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c409 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041c40b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041c40d call 0x405de0 */ esp -= 4; M32(esp) = 0x41c412u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x41c40du); RETCHK(0x41c412u, 0x41c40du); LOADALL;
  /* 0041c412 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041c414 je 0x41c3e4 */ if (ZF_) goto L_0041c3e4;
  /* 0041c416 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041c419 call 0x5075c0 */ esp -= 4; M32(esp) = 0x41c41eu; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x41c419u); RETCHK(0x41c41eu, 0x41c419u); LOADALL;
  /* 0041c41e mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0041c421 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0041c423 push 0x644124 */ { u32 v_ = 0x644124u; esp -= 4; M32(esp) = v_; }
  /* 0041c428 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c429 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041c42b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041c42d call 0x405de0 */ esp -= 4; M32(esp) = 0x41c432u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x41c42du); RETCHK(0x41c432u, 0x41c42du); LOADALL;
  /* 0041c432 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041c434 je 0x41c3e4 */ if (ZF_) goto L_0041c3e4;
L_0041c436:;
  /* 0041c436 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041c437 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041c439 call 0x50a1b0 */ esp -= 4; M32(esp) = 0x41c43eu; SAVEALL; F_0050a1b0(c); ABI_CHECK(0x50a1b0u, 0x41c439u); RETCHK(0x41c43eu, 0x41c439u); LOADALL;
  /* 0041c43e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041c43f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c440 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c441 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c442 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041c450(CPU *c) {
  NATIVE_HOOK(0x41c450u) REGS; LOADALL;
L_0041c450:;
  /* 0041c450 push 0x6440a0 */ { u32 v_ = 0x6440a0u; esp -= 4; M32(esp) = v_; }
  /* 0041c455 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c456 call 0x50a070 */ esp -= 4; M32(esp) = 0x41c45bu; SAVEALL; F_0050a070(c); ABI_CHECK(0x50a070u, 0x41c456u); RETCHK(0x41c45bu, 0x41c456u); LOADALL;
  /* 0041c45b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c460(CPU *c) {
  NATIVE_HOOK(0x41c460u) REGS; LOADALL;
L_0041c460:;
  /* 0041c460 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041c462 mov dword ptr [eax + 0x1c], 0xf */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0xfu); }
  /* 0041c469 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0041c46c mov byte ptr [eax + 8], cl */ { const u32 m_ = (u32)(eax + 0x8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0041c46f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0041c471 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0041c474 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c480(CPU *c) {
  NATIVE_HOOK(0x41c480u) REGS; LOADALL;
L_0041c480:;
  /* 0041c480 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0041c482 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c490(CPU *c) {
  NATIVE_HOOK(0x41c490u) REGS; LOADALL;
L_0041c490:;
  /* 0041c490 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0041c493 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c4a0(CPU *c) {
  NATIVE_HOOK(0x41c4a0u) REGS; LOADALL;
L_0041c4a0:;
  /* 0041c4a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041c4a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041c4a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041c4a5 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 0041c4aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041c4b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c4b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041c4b8 sub esp, 0x41c */ { u32 a_ = esp, b_ = 0x41cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041c4be mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041c4c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c4c4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041c4c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041c4c8 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0041c4cb mov esi, edx */ { esi = (u32)(edx); }
  /* 0041c4cd mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0041c4d0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041c4d1 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041c4d2 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041c4d4 imul ebx, eax */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041c4d7 mov dword ptr [ebp - 0x424], eax */ { const u32 m_ = (u32)(ebp + 0xfffffbdcu); M32(m_) = (u32)(eax); }
  /* 0041c4dd call 0x41c740 */ esp -= 4; M32(esp) = 0x41c4e2u; SAVEALL; F_0041c740(c); ABI_CHECK(0x41c740u, 0x41c4ddu); RETCHK(0x41c4e2u, 0x41c4ddu); LOADALL;
  /* 0041c4e2 mov dword ptr [ebp - 0x428], eax */ { const u32 m_ = (u32)(ebp + 0xfffffbd8u); M32(m_) = (u32)(eax); }
  /* 0041c4e8 call 0x41c760 */ esp -= 4; M32(esp) = 0x41c4edu; SAVEALL; F_0041c760(c); ABI_CHECK(0x41c760u, 0x41c4e8u); RETCHK(0x41c4edu, 0x41c4e8u); LOADALL;
  /* 0041c4ed xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0041c4ef cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c4f1 mov byte ptr [ebp + 8], dl */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0041c4f4 jne 0x41c4fb */ if (!ZF_) goto L_0041c4fb;
  /* 0041c4f6 mov byte ptr [ebp + 8], dl */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0041c4f9 jmp 0x41c50f */ goto L_0041c50f;
L_0041c4fb:;
  /* 0041c4fb cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c4fe jne 0x41c506 */ if (!ZF_) goto L_0041c506;
  /* 0041c500 mov byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)(0x1u); }
  /* 0041c504 jmp 0x41c50f */ goto L_0041c50f;
L_0041c506:;
  /* 0041c506 cmp edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c509 jne 0x41c50f */ if (!ZF_) goto L_0041c50f;
  /* 0041c50b mov byte ptr [ebp + 8], 2 */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)(0x2u); }
L_0041c50f:;
  /* 0041c50f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041c511 mov byte ptr [ebp - 0x410], dl */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0041c517 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 0041c51c lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 0041c522 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0041c524 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0041c526 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0041c527 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c52d call 0x5680c0 */ esp -= 4; M32(esp) = 0x41c532u; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x41c52du); RETCHK(0x41c532u, 0x41c52du); LOADALL;
  /* 0041c532 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0041c535 mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 0041c53a lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 0041c540 call 0x568120 */ esp -= 4; M32(esp) = 0x41c545u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x41c540u); RETCHK(0x41c545u, 0x41c540u); LOADALL;
  /* 0041c545 push 0x40000001 */ { u32 v_ = 0x40000001u; esp -= 4; M32(esp) = v_; }
  /* 0041c54a call 0x5681f0 */ esp -= 4; M32(esp) = 0x41c54fu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x41c54au); RETCHK(0x41c54fu, 0x41c54au); LOADALL;
  /* 0041c54f mov eax, dword ptr [ebp - 0x428] */ { const u32 m_ = (u32)(ebp + 0xfffffbd8u); eax = (u32)(M32(m_)); }
  /* 0041c555 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c556 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c55c call 0x5681f0 */ esp -= 4; M32(esp) = 0x41c561u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x41c55cu); RETCHK(0x41c561u, 0x41c55cu); LOADALL;
  /* 0041c561 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041c564 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c565 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c56b call 0x567dc0 */ esp -= 4; M32(esp) = 0x41c570u; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x41c56bu); RETCHK(0x41c570u, 0x41c56bu); LOADALL;
  /* 0041c570 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c571 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c577 call 0x5681f0 */ esp -= 4; M32(esp) = 0x41c57cu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x41c577u); RETCHK(0x41c57cu, 0x41c577u); LOADALL;
  /* 0041c57c mov edx, dword ptr [ebp - 0x424] */ { const u32 m_ = (u32)(ebp + 0xfffffbdcu); edx = (u32)(M32(m_)); }
  /* 0041c582 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c583 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c589 call 0x5681f0 */ esp -= 4; M32(esp) = 0x41c58eu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x41c589u); RETCHK(0x41c58eu, 0x41c589u); LOADALL;
  /* 0041c58e lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c594 call 0x464860 */ esp -= 4; M32(esp) = 0x41c599u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x41c594u); RETCHK(0x41c599u, 0x41c594u); LOADALL;
  /* 0041c599 mov edx, eax */ { edx = (u32)(eax); }
  /* 0041c59b lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c5a1 call 0x4648e0 */ esp -= 4; M32(esp) = 0x41c5a6u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x41c5a1u); RETCHK(0x41c5a6u, 0x41c5a1u); LOADALL;
  /* 0041c5a6 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 0041c5ac push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0041c5b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c5b2 call 0x565810 */ esp -= 4; M32(esp) = 0x41c5b7u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x41c5b2u); RETCHK(0x41c5b7u, 0x41c5b2u); LOADALL;
  /* 0041c5b7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041c5ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041c5bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c5bc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041c5c3 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0041c5c6 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041c5c8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c5c9 call 0x61af31 */ esp -= 4; M32(esp) = 0x41c5ceu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41c5c9u); RETCHK(0x41c5ceu, 0x41c5c9u); LOADALL;
  /* 0041c5ce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041c5d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c5d1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041c5e0(CPU *c) {
  NATIVE_HOOK(0x41c5e0u) REGS; LOADALL;
L_0041c5e0:;
  /* 0041c5e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041c5e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041c5e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041c5e5 push 0x61d303 */ { u32 v_ = 0x61d303u; esp -= 4; M32(esp) = v_; }
  /* 0041c5ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041c5f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c5f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041c5f8 sub esp, 0x80 */ { u32 a_ = esp, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041c5fe mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041c603 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c604 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041c606 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0041c609 lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
  /* 0041c60c mov dword ptr [ebp - 0x6c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ebx); }
  /* 0041c60f mov dword ptr [ebp - 0x64], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(ebx); }
  /* 0041c612 mov dword ptr [ebp - 0x68], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ebx); }
  /* 0041c615 call 0x5680c0 */ esp -= 4; M32(esp) = 0x41c61au; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x41c615u); RETCHK(0x41c61au, 0x41c615u); LOADALL;
  /* 0041c61a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041c61d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041c620 call 0x568120 */ esp -= 4; M32(esp) = 0x41c625u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x41c620u); RETCHK(0x41c625u, 0x41c620u); LOADALL;
  /* 0041c625 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0041c628 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c629 lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
  /* 0041c62c call 0x568230 */ esp -= 4; M32(esp) = 0x41c631u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c62cu); RETCHK(0x41c631u, 0x41c62cu); LOADALL;
  /* 0041c631 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041c634 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c635 lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
  /* 0041c638 call 0x568230 */ esp -= 4; M32(esp) = 0x41c63du; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c638u); RETCHK(0x41c63du, 0x41c638u); LOADALL;
  /* 0041c63d lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041c640 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c641 lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
  /* 0041c644 call 0x568230 */ esp -= 4; M32(esp) = 0x41c649u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c644u); RETCHK(0x41c649u, 0x41c644u); LOADALL;
  /* 0041c649 lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 0041c64c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c64d lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
  /* 0041c650 call 0x568230 */ esp -= 4; M32(esp) = 0x41c655u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c650u); RETCHK(0x41c655u, 0x41c650u); LOADALL;
  /* 0041c655 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0041c658 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041c65a call 0x41c790 */ esp -= 4; M32(esp) = 0x41c65fu; SAVEALL; F_0041c790(c); ABI_CHECK(0x41c790u, 0x41c65au); RETCHK(0x41c65fu, 0x41c65au); LOADALL;
  /* 0041c65f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041c661 je 0x41c723 */ if (ZF_) goto L_0041c723;
  /* 0041c667 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041c668 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041c66a call 0x41c780 */ esp -= 4; M32(esp) = 0x41c66fu; SAVEALL; F_0041c780(c); ABI_CHECK(0x41c780u, 0x41c66au); RETCHK(0x41c66fu, 0x41c66au); LOADALL;
  /* 0041c66f mov byte ptr [ebp - 0x60], bl */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041c672 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041c674 mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 0041c679 lea edi, [ebp - 0x5f] */ edi = (u32)((u32)(ebp + 0xffffffa1u));
  /* 0041c67c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0041c67e stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0041c680 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0041c681 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041c683 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0041c686 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 0041c689 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0041c68c mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0041c68f mov dword ptr [ebp - 0x88], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(ebx); }
  /* 0041c695 mov dword ptr [ebp - 0x84], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(ebx); }
  /* 0041c69b mov dword ptr [ebp - 0x80], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ebx); }
  /* 0041c69e mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0041c6a2 mov edi, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); edi = (u32)(M32(m_)); }
  /* 0041c6a5 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c6a7 jbe 0x41c6fd */ if ((CF_|ZF_)) goto L_0041c6fd;
  /* 0041c6a9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0041c6b0:;
  /* 0041c6b0 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 0041c6b2 lea edx, [ebp - 0x60] */ edx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0041c6b5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c6b6 lea ebx, [ebp - 0x7c] */ ebx = (u32)((u32)(ebp + 0xffffff84u));
  /* 0041c6b9 call 0x5682e0 */ esp -= 4; M32(esp) = 0x41c6beu; SAVEALL; F_005682e0(c); ABI_CHECK(0x5682e0u, 0x41c6b9u); RETCHK(0x41c6beu, 0x41c6b9u); LOADALL;
  /* 0041c6be lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041c6c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c6c2 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041c6c4 call 0x568230 */ esp -= 4; M32(esp) = 0x41c6c9u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c6c4u); RETCHK(0x41c6c9u, 0x41c6c4u); LOADALL;
  /* 0041c6c9 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0041c6cc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c6cd mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041c6cf call 0x568230 */ esp -= 4; M32(esp) = 0x41c6d4u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c6cfu); RETCHK(0x41c6d4u, 0x41c6cfu); LOADALL;
  /* 0041c6d4 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0041c6d7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c6d8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041c6da call 0x568230 */ esp -= 4; M32(esp) = 0x41c6dfu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c6dau); RETCHK(0x41c6dfu, 0x41c6dau); LOADALL;
  /* 0041c6df lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0041c6e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c6e3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041c6e5 call 0x568230 */ esp -= 4; M32(esp) = 0x41c6eau; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c6e5u); RETCHK(0x41c6eau, 0x41c6e5u); LOADALL;
  /* 0041c6ea lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0041c6ed lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 0041c6f3 call 0x41c960 */ esp -= 4; M32(esp) = 0x41c6f8u; SAVEALL; F_0041c960(c); ABI_CHECK(0x41c960u, 0x41c6f3u); RETCHK(0x41c6f8u, 0x41c6f3u); LOADALL;
  /* 0041c6f8 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041c6f9 jne 0x41c6b0 */ if (!ZF_) goto L_0041c6b0;
  /* 0041c6fb xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0041c6fd:;
  /* 0041c6fd mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0041c6ff mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041c701 lea eax, [ebp - 0x8c] */ eax = (u32)((u32)(ebp + 0xffffff74u));
  /* 0041c707 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c708 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0041c70b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c70c call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41c70fu; SAVEALL; call_ind(c, t_); RETCHK(0x41c70fu, 0x41c70cu); LOADALL; }
  /* 0041c70f mov eax, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); eax = (u32)(M32(m_)); }
  /* 0041c715 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c717 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041c718 je 0x41c723 */ if (ZF_) goto L_0041c723;
  /* 0041c71a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c71b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41c720u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41c71bu); RETCHK(0x41c720u, 0x41c71bu); LOADALL;
  /* 0041c720 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041c723:;
  /* 0041c723 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041c726 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041c72d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0041c730 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c731 call 0x61af31 */ esp -= 4; M32(esp) = 0x41c736u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41c731u); RETCHK(0x41c736u, 0x41c731u); LOADALL;
  /* 0041c736 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041c738 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c739 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041c740(CPU *c) {
  NATIVE_HOOK(0x41c740u) REGS; LOADALL;
L_0041c740:;
  /* 0041c740 mov eax, dword ptr [0x9b8a54] */ { const u32 m_ = (u32)(0x9b8a54u); eax = (u32)(M32(m_)); }
  /* 0041c745 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041c746 cmp eax, 0xee6b2800 */ { u32 a_ = eax, b_ = 0xee6b2800u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c74b mov dword ptr [0x9b8a54], eax */ { const u32 m_ = (u32)(0x9b8a54u); M32(m_) = (u32)(eax); }
  /* 0041c750 jbe 0x41c759 */ if ((CF_|ZF_)) goto L_0041c759;
  /* 0041c752 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041c754 mov dword ptr [0x9b8a54], eax */ { const u32 m_ = (u32)(0x9b8a54u); M32(m_) = (u32)(eax); }
L_0041c759:;
  /* 0041c759 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c760(CPU *c) {
  NATIVE_HOOK(0x41c760u) REGS; LOADALL;
L_0041c760:;
  /* 0041c760 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041c762 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0041c765 call 0x5fe9bc */ esp -= 4; M32(esp) = 0x41c76au; SAVEALL; F_005fe9bc(c); ABI_CHECK(0x5fe9bcu, 0x41c765u); RETCHK(0x41c76au, 0x41c765u); LOADALL;
  /* 0041c76a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041c76d mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 0041c770 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c780(CPU *c) {
  NATIVE_HOOK(0x41c780u) REGS; LOADALL;
L_0041c780:;
  /* 0041c780 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041c782 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0041c785 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0041c788 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c790(CPU *c) {
  NATIVE_HOOK(0x41c790u) REGS; LOADALL;
L_0041c790:;
  /* 0041c790 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041c791 mov esi, dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); esi = (u32)(M32(m_)); }
  /* 0041c794 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041c796 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c798 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0041c79b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c79c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c7a0(CPU *c) {
  NATIVE_HOOK(0x41c7a0u) REGS; LOADALL;
L_0041c7a0:;
  /* 0041c7a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041c7a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041c7a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041c7a5 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 0041c7aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041c7b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c7b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041c7b8 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041c7be mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041c7c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c7c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041c7c5 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0041c7c8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041c7c9 call 0x41c740 */ esp -= 4; M32(esp) = 0x41c7ceu; SAVEALL; F_0041c740(c); ABI_CHECK(0x41c740u, 0x41c7c9u); RETCHK(0x41c7ceu, 0x41c7c9u); LOADALL;
  /* 0041c7ce mov esi, eax */ { esi = (u32)(eax); }
  /* 0041c7d0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041c7d2 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0041c7d4 mov byte ptr [ebp - 0x410], dl */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0041c7da mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 0041c7df lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 0041c7e5 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0041c7e7 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0041c7e9 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0041c7ea lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c7f0 call 0x5680c0 */ esp -= 4; M32(esp) = 0x41c7f5u; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x41c7f0u); RETCHK(0x41c7f5u, 0x41c7f0u); LOADALL;
  /* 0041c7f5 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0041c7f8 mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 0041c7fd lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 0041c803 call 0x568120 */ esp -= 4; M32(esp) = 0x41c808u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x41c803u); RETCHK(0x41c808u, 0x41c803u); LOADALL;
  /* 0041c808 call 0x9c1197 */ esp -= 4; M32(esp) = 0x41c80du; SAVEALL; F_009c1197(c); ABI_CHECK(0x9c1197u, 0x41c808u); RETCHK(0x41c80du, 0x41c808u); LOADALL;
  /* 0041c80d call 0x5681f0 */ esp -= 4; M32(esp) = 0x41c812u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x41c80du); RETCHK(0x41c812u, 0x41c80du); LOADALL;
  /* 0041c812 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041c813 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c819 call 0x5681f0 */ esp -= 4; M32(esp) = 0x41c81eu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x41c819u); RETCHK(0x41c81eu, 0x41c819u); LOADALL;
  /* 0041c81e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041c821 mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 0041c826 lea ebx, [ebp - 0x420] */ ebx = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0041c82c call 0x568270 */ esp -= 4; M32(esp) = 0x41c831u; SAVEALL; F_00568270(c); ABI_CHECK(0x568270u, 0x41c82cu); RETCHK(0x41c831u, 0x41c82cu); LOADALL;
  /* 0041c831 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041c833 call 0x464860 */ esp -= 4; M32(esp) = 0x41c838u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x41c833u); RETCHK(0x41c838u, 0x41c833u); LOADALL;
  /* 0041c838 mov edx, eax */ { edx = (u32)(eax); }
  /* 0041c83a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041c83c call 0x4648e0 */ esp -= 4; M32(esp) = 0x41c841u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x41c83cu); RETCHK(0x41c841u, 0x41c83cu); LOADALL;
  /* 0041c841 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 0041c847 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0041c84c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c84d call 0x565810 */ esp -= 4; M32(esp) = 0x41c852u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x41c84du); RETCHK(0x41c852u, 0x41c84du); LOADALL;
  /* 0041c852 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041c855 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041c856 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c857 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041c85e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0041c861 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041c863 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c864 call 0x61af31 */ esp -= 4; M32(esp) = 0x41c869u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41c864u); RETCHK(0x41c869u, 0x41c864u); LOADALL;
  /* 0041c869 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041c86b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c86c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0041c870(CPU *c) {
  NATIVE_HOOK(0x41c870u) REGS; LOADALL;
L_0041c870:;
  /* 0041c870 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041c871 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041c873 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041c875 push 0x61b2f8 */ { u32 v_ = 0x61b2f8u; esp -= 4; M32(esp) = v_; }
  /* 0041c87a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041c880 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c881 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041c888 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041c88b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041c88d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0041c890 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c891 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041c893 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0041c896 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041c899 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0041c89c mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0041c89f mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041c8a2 call 0x5680c0 */ esp -= 4; M32(esp) = 0x41c8a7u; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x41c8a2u); RETCHK(0x41c8a7u, 0x41c8a2u); LOADALL;
  /* 0041c8a7 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041c8aa mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041c8ad call 0x568120 */ esp -= 4; M32(esp) = 0x41c8b2u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x41c8adu); RETCHK(0x41c8b2u, 0x41c8adu); LOADALL;
  /* 0041c8b2 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0041c8b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c8b6 call 0x568230 */ esp -= 4; M32(esp) = 0x41c8bbu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c8b6u); RETCHK(0x41c8bbu, 0x41c8b6u); LOADALL;
  /* 0041c8bb lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 0041c8be push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c8bf lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041c8c2 call 0x568230 */ esp -= 4; M32(esp) = 0x41c8c7u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c8c2u); RETCHK(0x41c8c7u, 0x41c8c2u); LOADALL;
  /* 0041c8c7 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041c8ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c8cb lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041c8ce call 0x568230 */ esp -= 4; M32(esp) = 0x41c8d3u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c8ceu); RETCHK(0x41c8d3u, 0x41c8ceu); LOADALL;
  /* 0041c8d3 cmp dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c8d6 jne 0x41c93f */ if (!ZF_) goto L_0041c93f;
  /* 0041c8d8 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0041c8db push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c8dc lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041c8df call 0x568230 */ esp -= 4; M32(esp) = 0x41c8e4u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c8dfu); RETCHK(0x41c8e4u, 0x41c8dfu); LOADALL;
  /* 0041c8e4 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0041c8e7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c8e9 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0041c8ec jle 0x41c937 */ if ((ZF_|LT_)) goto L_0041c937;
  /* 0041c8ee lea edx, [ebp + 0xb] */ edx = (u32)((u32)(ebp + 0xbu));
  /* 0041c8f1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c8f2 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041c8f5 mov byte ptr [ebp + 0xb], bl */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041c8f8 call 0x568130 */ esp -= 4; M32(esp) = 0x41c8fdu; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x41c8f8u); RETCHK(0x41c8fdu, 0x41c8f8u); LOADALL;
  /* 0041c8fd cmp byte ptr [ebp + 0xb], 1 */ { const u32 m_ = (u32)(ebp + 0xbu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041c901 jne 0x41c92f */ if (!ZF_) goto L_0041c92f;
  /* 0041c903 lea eax, [ebp + 0xb] */ eax = (u32)((u32)(ebp + 0xbu));
  /* 0041c906 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c907 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041c90a mov byte ptr [ebp + 0xb], bl */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041c90d call 0x568130 */ esp -= 4; M32(esp) = 0x41c912u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x41c90du); RETCHK(0x41c912u, 0x41c90du); LOADALL;
  /* 0041c912 cmp byte ptr [ebp + 0xb], 1 */ { const u32 m_ = (u32)(ebp + 0xbu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041c916 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0041c919 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0041c91c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c91d lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041c920 mov byte ptr [ebp - 0x1c], cl */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0041c923 call 0x568230 */ esp -= 4; M32(esp) = 0x41c928u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x41c923u); RETCHK(0x41c928u, 0x41c923u); LOADALL;
  /* 0041c928 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041c92b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c92c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c92d jmp 0x41c945 */ goto L_0041c945;
L_0041c92f:;
  /* 0041c92f lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041c932 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c933 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0041c935 jmp 0x41c945 */ goto L_0041c945;
L_0041c937:;
  /* 0041c937 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041c93a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c93b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041c93d jmp 0x41c945 */ goto L_0041c945;
L_0041c93f:;
  /* 0041c93f lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041c942 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041c943 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
L_0041c945:;
  /* 0041c945 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0041c947 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041c949 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41c94cu; SAVEALL; call_ind(c, t_); RETCHK(0x41c94cu, 0x41c949u); LOADALL; }
  /* 0041c94c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041c94f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c950 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041c957 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041c959 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c95a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041c960(CPU *c) {
  NATIVE_HOOK(0x41c960u) REGS; LOADALL;
L_0041c960:;
  /* 0041c960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041c961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041c963 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c964 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c965 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041c966 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041c967 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041c969 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0041c96c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041c96e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0041c970 jne 0x41c976 */ if (!ZF_) goto L_0041c976;
  /* 0041c972 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041c974 jmp 0x41c98c */ goto L_0041c98c;
L_0041c976:;
  /* 0041c976 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041c979 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041c97b mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041c980 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041c982 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041c985 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0041c987 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0041c98a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0041c98c:;
  /* 0041c98c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041c98e je 0x41c9cd */ if (ZF_) goto L_0041c9cd;
  /* 0041c990 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041c993 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041c995 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041c99a imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041c99c sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041c99f mov eax, edx */ { eax = (u32)(edx); }
  /* 0041c9a1 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041c9a4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041c9a6 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041c9a8 jae 0x41c9cd */ if (!CF_) goto L_0041c9cd;
  /* 0041c9aa mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0041c9ad mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0041c9b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c9b1 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0041c9b6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041c9b8 call 0x41cd80 */ esp -= 4; M32(esp) = 0x41c9bdu; SAVEALL; F_0041cd80(c); ABI_CHECK(0x41cd80u, 0x41c9b8u); RETCHK(0x41c9bdu, 0x41c9b8u); LOADALL;
  /* 0041c9bd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041c9c0 add esi, 0x50 */ { u32 a_ = esi, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041c9c3 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0041c9c6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041c9c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c9c8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c9c9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041c9cb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c9cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041c9cd:;
  /* 0041c9cd mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041c9d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041c9d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041c9d2 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0041c9d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041c9d6 call 0x41ca10 */ esp -= 4; M32(esp) = 0x41c9dbu; SAVEALL; F_0041ca10(c); ABI_CHECK(0x41ca10u, 0x41c9d6u); RETCHK(0x41c9dbu, 0x41c9d6u); LOADALL;
  /* 0041c9db pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041c9dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041c9dd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041c9de mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041c9e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041c9e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041c9f0(CPU *c) {
  NATIVE_HOOK(0x41c9f0u) REGS; LOADALL;
L_0041c9f0:;
  /* 0041c9f0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041c9f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041c9f5 jne 0x41c9f8 */ if (!ZF_) goto L_0041c9f8;
  /* 0041c9f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041c9f8:;
  /* 0041c9f8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041c9fb sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041c9fd mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041ca02 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ca04 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041ca07 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041ca09 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041ca0c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ca0e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041ca10(CPU *c) {
  NATIVE_HOOK(0x41ca10u) REGS; LOADALL;
L_0041ca10:;
  /* 0041ca10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ca11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ca13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041ca14 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041ca17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ca18 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0041ca1b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ca1d je 0x41ca3a */ if (ZF_) goto L_0041ca3a;
  /* 0041ca1f mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041ca22 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041ca24 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041ca29 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ca2b sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041ca2e mov eax, edx */ { eax = (u32)(edx); }
  /* 0041ca30 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041ca33 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ca35 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0041ca38 jne 0x41ca3e */ if (!ZF_) goto L_0041ca3e;
L_0041ca3a:;
  /* 0041ca3a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0041ca3c jmp 0x41ca53 */ goto L_0041ca53;
L_0041ca3e:;
  /* 0041ca3e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041ca40 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041ca42 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041ca47 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ca49 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041ca4c mov esi, edx */ { esi = (u32)(edx); }
  /* 0041ca4e shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0041ca51 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0041ca53:;
  /* 0041ca53 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0041ca56 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041ca58 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041ca59 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041ca5a call 0x41cab0 */ esp -= 4; M32(esp) = 0x41ca5fu; SAVEALL; F_0041cab0(c); ABI_CHECK(0x41cab0u, 0x41ca5au); RETCHK(0x41ca5fu, 0x41ca5au); LOADALL;
  /* 0041ca5f mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041ca62 lea ecx, [esi + esi*4] */ ecx = (u32)((u32)(esi + esi * 4u));
  /* 0041ca65 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0041ca68 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041ca6a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041ca6d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041ca6e mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0041ca70 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041ca71 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ca72 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041ca80(CPU *c) {
  NATIVE_HOOK(0x41ca80u) REGS; LOADALL;
L_0041ca80:;
  /* 0041ca80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ca81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ca83 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041ca84 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0041ca87 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ca88 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041ca8a mov eax, edi */ { eax = (u32)(edi); }
  /* 0041ca8c call 0x41cd80 */ esp -= 4; M32(esp) = 0x41ca91u; SAVEALL; F_0041cd80(c); ABI_CHECK(0x41cd80u, 0x41ca8cu); RETCHK(0x41ca91u, 0x41ca8cu); LOADALL;
  /* 0041ca91 lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 0041ca94 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041ca97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ca9a add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ca9c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041ca9e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ca9f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041cab0(CPU *c) {
  NATIVE_HOOK(0x41cab0u) REGS; LOADALL;
L_0041cab0:;
  /* 0041cab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041cab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041cab3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041cab5 push 0x61d2e0 */ { u32 v_ = 0x61d2e0u; esp -= 4; M32(esp) = v_; }
  /* 0041caba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041cac0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041cac1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041cac8 sub esp, 0x60 */ { u32 a_ = esp, b_ = 0x60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cacb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041cad0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041cad1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cad2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041cad3 mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 0041cad8 mov esi, edx */ { esi = (u32)(edx); }
  /* 0041cada lea edi, [ebp - 0x64] */ edi = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041cadd rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0041cadf mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0041cae2 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0041cae5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cae7 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0041caea mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0041caed jne 0x41caf3 */ if (!ZF_) goto L_0041caf3;
  /* 0041caef xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041caf1 jmp 0x41cb09 */ goto L_0041cb09;
L_0041caf3:;
  /* 0041caf3 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041caf6 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041caf8 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041cafd imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041caff sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041cb02 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0041cb04 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0041cb07 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0041cb09:;
  /* 0041cb09 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0041cb0c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cb0e je 0x41cd23 */ if (ZF_) goto L_0041cd23;
  /* 0041cb14 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cb16 jne 0x41cb1c */ if (!ZF_) goto L_0041cb1c;
  /* 0041cb18 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041cb1a jmp 0x41cb32 */ goto L_0041cb32;
L_0041cb1c:;
  /* 0041cb1c mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041cb1f sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cb21 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041cb26 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041cb28 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041cb2b mov eax, edx */ { eax = (u32)(edx); }
  /* 0041cb2d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cb30 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0041cb32:;
  /* 0041cb32 mov edx, 0x3333333 */ { edx = (u32)(0x3333333u); }
  /* 0041cb37 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cb39 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cb3b jae 0x41cb42 */ if (!CF_) goto L_0041cb42;
  /* 0041cb3d call 0x49ac70 */ esp -= 4; M32(esp) = 0x41cb42u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x41cb3du); RETCHK(0x41cb42u, 0x41cb3du); LOADALL;
L_0041cb42:;
  /* 0041cb42 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cb44 jne 0x41cb4a */ if (!ZF_) goto L_0041cb4a;
  /* 0041cb46 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041cb48 jmp 0x41cb60 */ goto L_0041cb60;
L_0041cb4a:;
  /* 0041cb4a mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041cb4d sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cb4f mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041cb54 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041cb56 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041cb59 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041cb5b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cb5e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0041cb60:;
  /* 0041cb60 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cb62 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cb64 jae 0x41cc6d */ if (!CF_) goto L_0041cc6d;
  /* 0041cb6a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0041cb6c shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cb6e mov edx, 0x3333333 */ { edx = (u32)(0x3333333u); }
  /* 0041cb73 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cb75 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cb77 jae 0x41cb7d */ if (!CF_) goto L_0041cb7d;
  /* 0041cb79 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041cb7b jmp 0x41cb7f */ goto L_0041cb7f;
L_0041cb7d:;
  /* 0041cb7d add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0041cb7f:;
  /* 0041cb7f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cb81 jne 0x41cb87 */ if (!ZF_) goto L_0041cb87;
  /* 0041cb83 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041cb85 jmp 0x41cb9d */ goto L_0041cb9d;
L_0041cb87:;
  /* 0041cb87 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041cb8a sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cb8c mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041cb91 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041cb93 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041cb96 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041cb98 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cb9b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0041cb9d:;
  /* 0041cb9d add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cb9f cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cba1 jae 0x41cbae */ if (!CF_) goto L_0041cbae;
  /* 0041cba3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041cba5 call 0x41c9f0 */ esp -= 4; M32(esp) = 0x41cbaau; SAVEALL; F_0041c9f0(c); ABI_CHECK(0x41c9f0u, 0x41cba5u); RETCHK(0x41cbaau, 0x41cba5u); LOADALL;
  /* 0041cbaa mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041cbac add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0041cbae:;
  /* 0041cbae lea eax, [ecx + ecx*4] */ eax = (u32)((u32)(ecx + ecx * 4u));
  /* 0041cbb1 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cbb4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041cbb5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0041cbb8 call 0x5fe934 */ esp -= 4; M32(esp) = 0x41cbbdu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41cbb8u); RETCHK(0x41cbbdu, 0x41cbb8u); LOADALL;
  /* 0041cbbd mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0041cbc4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041cbc7 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0041cbca mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041cbcd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041cbce mov dword ptr [ebp - 0x68], eax */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(eax); }
  /* 0041cbd1 call 0x41cda0 */ esp -= 4; M32(esp) = 0x41cbd6u; SAVEALL; F_0041cda0(c); ABI_CHECK(0x41cda0u, 0x41cbd1u); RETCHK(0x41cbd6u, 0x41cbd1u); LOADALL;
  /* 0041cbd6 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041cbd9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cbdc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041cbdd lea ebx, [ebp - 0x64] */ ebx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041cbe0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041cbe2 mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 0041cbe5 call 0x41cd80 */ esp -= 4; M32(esp) = 0x41cbeau; SAVEALL; F_0041cd80(c); ABI_CHECK(0x41cd80u, 0x41cbe5u); RETCHK(0x41cbeau, 0x41cbe5u); LOADALL;
  /* 0041cbea mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041cbed mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0041cbf0 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041cbf3 lea ecx, [esi + esi*4] */ ecx = (u32)((u32)(esi + esi * 4u));
  /* 0041cbf6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cbf9 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0041cbfc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041cbfd mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041cc00 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cc02 call 0x41cda0 */ esp -= 4; M32(esp) = 0x41cc07u; SAVEALL; F_0041cda0(c); ABI_CHECK(0x41cda0u, 0x41cc02u); RETCHK(0x41cc07u, 0x41cc02u); LOADALL;
  /* 0041cc07 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0041cc0a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cc0d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cc0f jne 0x41cc15 */ if (!ZF_) goto L_0041cc15;
  /* 0041cc11 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041cc13 jmp 0x41cc2b */ goto L_0041cc2b;
L_0041cc15:;
  /* 0041cc15 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041cc18 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041cc1a mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041cc1f imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041cc21 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041cc24 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041cc26 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cc29 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0041cc2b:;
  /* 0041cc2b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041cc2d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cc2f je 0x41cc3a */ if (ZF_) goto L_0041cc3a;
  /* 0041cc31 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041cc32 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41cc37u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41cc32u); RETCHK(0x41cc37u, 0x41cc32u); LOADALL;
  /* 0041cc37 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041cc3a:;
  /* 0041cc3a mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 0041cc3d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041cc40 lea edx, [esi + esi*4] */ edx = (u32)((u32)(esi + esi * 4u));
  /* 0041cc43 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041cc45 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041cc48 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cc4a mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0041cc4d mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0041cc50 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041cc53 jmp 0x41cd23 */ goto L_0041cd23;
L_0041cc6d:;
  /* 0041cc6d mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041cc70 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041cc73 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0041cc75 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cc77 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041cc7c imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041cc7e sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041cc81 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041cc83 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cc86 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cc88 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cc8a jae 0x41cce9 */ if (!CF_) goto L_0041cce9;
  /* 0041cc8c mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041cc8f lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 0041cc92 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cc95 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0041cc98 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041cc99 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cc9b mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0041cc9d call 0x41cda0 */ esp -= 4; M32(esp) = 0x41cca2u; SAVEALL; F_0041cda0(c); ABI_CHECK(0x41cda0u, 0x41cc9du); RETCHK(0x41cca2u, 0x41cc9du); LOADALL;
  /* 0041cca2 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0041cca9 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041ccac mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041ccaf mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0041ccb1 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ccb3 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041ccb8 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ccba sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041ccbd mov eax, edx */ { eax = (u32)(edx); }
  /* 0041ccbf shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041ccc2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ccc5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ccc7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041ccc8 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041ccca lea ebx, [ebp - 0x64] */ ebx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041cccd mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041cccf call 0x41ca80 */ esp -= 4; M32(esp) = 0x41ccd4u; SAVEALL; F_0041ca80(c); ABI_CHECK(0x41ca80u, 0x41cccfu); RETCHK(0x41ccd4u, 0x41cccfu); LOADALL;
  /* 0041ccd4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041ccd7 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041ccda mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0041ccdd add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ccdf mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0041cce2 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041cce5 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cce7 jmp 0x41cd1b */ goto L_0041cd1b;
L_0041cce9:;
  /* 0041cce9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041ccec lea esi, [esi + esi*4] */ esi = (u32)((u32)(esi + esi * 4u));
  /* 0041ccef shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0041ccf2 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0041ccf4 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ccf6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041ccf7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041ccf9 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0041ccfc call 0x41cda0 */ esp -= 4; M32(esp) = 0x41cd01u; SAVEALL; F_0041cda0(c); ABI_CHECK(0x41cda0u, 0x41ccfcu); RETCHK(0x41cd01u, 0x41ccfcu); LOADALL;
  /* 0041cd01 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041cd04 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0041cd07 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0041cd0a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041cd0c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cd0f mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0041cd11 call 0x41cd60 */ esp -= 4; M32(esp) = 0x41cd16u; SAVEALL; F_0041cd60(c); ABI_CHECK(0x41cd60u, 0x41cd11u); RETCHK(0x41cd16u, 0x41cd11u); LOADALL;
  /* 0041cd16 lea edx, [esi + edi] */ edx = (u32)((u32)(esi + edi));
  /* 0041cd19 mov eax, edi */ { eax = (u32)(edi); }
L_0041cd1b:;
  /* 0041cd1b lea ebx, [ebp - 0x64] */ ebx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041cd1e call 0x41cd40 */ esp -= 4; M32(esp) = 0x41cd23u; SAVEALL; F_0041cd40(c); ABI_CHECK(0x41cd40u, 0x41cd1eu); RETCHK(0x41cd23u, 0x41cd1eu); LOADALL;
L_0041cd23:;
  /* 0041cd23 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041cd26 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041cd2d mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0041cd30 call 0x61af31 */ esp -= 4; M32(esp) = 0x41cd35u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41cd30u); RETCHK(0x41cd35u, 0x41cd30u); LOADALL;
  /* 0041cd35 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041cd36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041cd37 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041cd38 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041cd3a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041cd3b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041cc58(CPU *c) {
  NATIVE_HOOK(0x41cc58u) REGS; LOADALL;
L_0041cc58:;
  /* 0041cc58 mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 0041cc5b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041cc5c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41cc61u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41cc5cu); RETCHK(0x41cc61u, 0x41cc5cu); LOADALL;
  /* 0041cc61 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cc64 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041cc66 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041cc68 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0041cc6d mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041cc70 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041cc73 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0041cc75 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cc77 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041cc7c imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041cc7e sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041cc81 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041cc83 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cc86 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cc88 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cc8a jae 0x41cce9 */ if (!CF_) goto L_0041cce9;
  /* 0041cc8c mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041cc8f lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 0041cc92 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cc95 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0041cc98 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041cc99 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cc9b mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0041cc9d call 0x41cda0 */ esp -= 4; M32(esp) = 0x41cca2u; SAVEALL; F_0041cda0(c); ABI_CHECK(0x41cda0u, 0x41cc9du); RETCHK(0x41cca2u, 0x41cc9du); LOADALL;
  /* 0041cca2 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0041cca9 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041ccac mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041ccaf mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0041ccb1 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ccb3 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041ccb8 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ccba sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041ccbd mov eax, edx */ { eax = (u32)(edx); }
  /* 0041ccbf shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041ccc2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ccc5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ccc7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041ccc8 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041ccca lea ebx, [ebp - 0x64] */ ebx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041cccd mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041cccf call 0x41ca80 */ esp -= 4; M32(esp) = 0x41ccd4u; SAVEALL; F_0041ca80(c); ABI_CHECK(0x41ca80u, 0x41cccfu); RETCHK(0x41ccd4u, 0x41cccfu); LOADALL;
  /* 0041ccd4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041ccd7 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041ccda mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0041ccdd add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ccdf mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0041cce2 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041cce5 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cce7 jmp 0x41cd1b */ goto L_0041cd1b;
L_0041cce9:;
  /* 0041cce9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041ccec lea esi, [esi + esi*4] */ esi = (u32)((u32)(esi + esi * 4u));
  /* 0041ccef shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0041ccf2 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0041ccf4 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ccf6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041ccf7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041ccf9 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0041ccfc call 0x41cda0 */ esp -= 4; M32(esp) = 0x41cd01u; SAVEALL; F_0041cda0(c); ABI_CHECK(0x41cda0u, 0x41ccfcu); RETCHK(0x41cd01u, 0x41ccfcu); LOADALL;
  /* 0041cd01 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041cd04 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0041cd07 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0041cd0a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041cd0c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cd0f mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0041cd11 call 0x41cd60 */ esp -= 4; M32(esp) = 0x41cd16u; SAVEALL; F_0041cd60(c); ABI_CHECK(0x41cd60u, 0x41cd11u); RETCHK(0x41cd16u, 0x41cd11u); LOADALL;
  /* 0041cd16 lea edx, [esi + edi] */ edx = (u32)((u32)(esi + edi));
  /* 0041cd19 mov eax, edi */ { eax = (u32)(edi); }
L_0041cd1b:;
  /* 0041cd1b lea ebx, [ebp - 0x64] */ ebx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041cd1e call 0x41cd40 */ esp -= 4; M32(esp) = 0x41cd23u; SAVEALL; F_0041cd40(c); ABI_CHECK(0x41cd40u, 0x41cd1eu); RETCHK(0x41cd23u, 0x41cd1eu); LOADALL;
  /* 0041cd23 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041cd26 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041cd2d mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0041cd30 call 0x61af31 */ esp -= 4; M32(esp) = 0x41cd35u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41cd30u); RETCHK(0x41cd35u, 0x41cd30u); LOADALL;
  /* 0041cd35 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041cd36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041cd37 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041cd38 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041cd3a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041cd3b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041cc64(CPU *c) {
  NATIVE_HOOK(0x41cc64u) REGS; LOADALL;
L_0041cc64:;
  /* 0041cc64 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041cc66 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041cc68 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0041cc6d mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041cc70 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041cc73 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0041cc75 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cc77 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041cc7c imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041cc7e sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041cc81 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041cc83 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cc86 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cc88 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cc8a jae 0x41cce9 */ if (!CF_) goto L_0041cce9;
  /* 0041cc8c mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041cc8f lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 0041cc92 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041cc95 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0041cc98 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041cc99 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cc9b mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0041cc9d call 0x41cda0 */ esp -= 4; M32(esp) = 0x41cca2u; SAVEALL; F_0041cda0(c); ABI_CHECK(0x41cda0u, 0x41cc9du); RETCHK(0x41cca2u, 0x41cc9du); LOADALL;
  /* 0041cca2 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0041cca9 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041ccac mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041ccaf mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0041ccb1 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ccb3 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0041ccb8 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ccba sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041ccbd mov eax, edx */ { eax = (u32)(edx); }
  /* 0041ccbf shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041ccc2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ccc5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ccc7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041ccc8 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041ccca lea ebx, [ebp - 0x64] */ ebx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041cccd mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041cccf call 0x41ca80 */ esp -= 4; M32(esp) = 0x41ccd4u; SAVEALL; F_0041ca80(c); ABI_CHECK(0x41ca80u, 0x41cccfu); RETCHK(0x41ccd4u, 0x41cccfu); LOADALL;
  /* 0041ccd4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041ccd7 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041ccda mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0041ccdd add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ccdf mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0041cce2 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041cce5 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cce7 jmp 0x41cd1b */ goto L_0041cd1b;
L_0041cce9:;
  /* 0041cce9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041ccec lea esi, [esi + esi*4] */ esi = (u32)((u32)(esi + esi * 4u));
  /* 0041ccef shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0041ccf2 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0041ccf4 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ccf6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041ccf7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041ccf9 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0041ccfc call 0x41cda0 */ esp -= 4; M32(esp) = 0x41cd01u; SAVEALL; F_0041cda0(c); ABI_CHECK(0x41cda0u, 0x41ccfcu); RETCHK(0x41cd01u, 0x41ccfcu); LOADALL;
  /* 0041cd01 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041cd04 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0041cd07 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0041cd0a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041cd0c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cd0f mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0041cd11 call 0x41cd60 */ esp -= 4; M32(esp) = 0x41cd16u; SAVEALL; F_0041cd60(c); ABI_CHECK(0x41cd60u, 0x41cd11u); RETCHK(0x41cd16u, 0x41cd11u); LOADALL;
  /* 0041cd16 lea edx, [esi + edi] */ edx = (u32)((u32)(esi + edi));
  /* 0041cd19 mov eax, edi */ { eax = (u32)(edi); }
L_0041cd1b:;
  /* 0041cd1b lea ebx, [ebp - 0x64] */ ebx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0041cd1e call 0x41cd40 */ esp -= 4; M32(esp) = 0x41cd23u; SAVEALL; F_0041cd40(c); ABI_CHECK(0x41cd40u, 0x41cd1eu); RETCHK(0x41cd23u, 0x41cd1eu); LOADALL;
  /* 0041cd23 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041cd26 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041cd2d mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0041cd30 call 0x61af31 */ esp -= 4; M32(esp) = 0x41cd35u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41cd30u); RETCHK(0x41cd35u, 0x41cd30u); LOADALL;
  /* 0041cd35 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041cd36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041cd37 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041cd38 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041cd3a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041cd3b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041cd40(CPU *c) {
  NATIVE_HOOK(0x41cd40u) REGS; LOADALL;
L_0041cd40:;
  /* 0041cd40 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cd42 je 0x41cd5a */ if (ZF_) goto L_0041cd5a;
  /* 0041cd44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cd45 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0041cd46:;
  /* 0041cd46 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041cd48 add eax, 0x50 */ { u32 a_ = eax, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cd4b cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cd4d mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 0041cd52 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0041cd54 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0041cd56 jne 0x41cd46 */ if (!ZF_) goto L_0041cd46;
  /* 0041cd58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041cd59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0041cd5a:;
  /* 0041cd5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041cd60(CPU *c) {
  NATIVE_HOOK(0x41cd60u) REGS; LOADALL;
L_0041cd60:;
  /* 0041cd60 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cd62 je 0x41cd7d */ if (ZF_) goto L_0041cd7d;
  /* 0041cd64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cd65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0041cd66:;
  /* 0041cd66 sub edx, 0x50 */ { u32 a_ = edx, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cd69 sub eax, 0x50 */ { u32 a_ = eax, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cd6c cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cd6e mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 0041cd73 mov esi, edx */ { esi = (u32)(edx); }
  /* 0041cd75 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041cd77 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0041cd79 jne 0x41cd66 */ if (!ZF_) goto L_0041cd66;
  /* 0041cd7b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041cd7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0041cd7d:;
  /* 0041cd7d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041cd80(CPU *c) {
  NATIVE_HOOK(0x41cd80u) REGS; LOADALL;
L_0041cd80:;
  /* 0041cd80 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cd82 jbe 0x41cd9f */ if ((CF_|ZF_)) goto L_0041cd9f;
  /* 0041cd84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cd85 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0041cd87 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0041cd88:;
  /* 0041cd88 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cd8a je 0x41cd97 */ if (ZF_) goto L_0041cd97;
  /* 0041cd8c mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 0041cd91 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0041cd93 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041cd95 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0041cd97:;
  /* 0041cd97 add eax, 0x50 */ { u32 a_ = eax, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cd9a dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041cd9b jne 0x41cd88 */ if (!ZF_) goto L_0041cd88;
  /* 0041cd9d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041cd9e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0041cd9f:;
  /* 0041cd9f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041cda0(CPU *c) {
  NATIVE_HOOK(0x41cda0u) REGS; LOADALL;
L_0041cda0:;
  /* 0041cda0 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cda2 je 0x41cdc1 */ if (ZF_) goto L_0041cdc1;
  /* 0041cda4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cda5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0041cda6:;
  /* 0041cda6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cda8 je 0x41cdb5 */ if (ZF_) goto L_0041cdb5;
  /* 0041cdaa mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 0041cdaf mov esi, edx */ { esi = (u32)(edx); }
  /* 0041cdb1 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041cdb3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0041cdb5:;
  /* 0041cdb5 add edx, 0x50 */ { u32 a_ = edx, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041cdb8 add eax, 0x50 */ { u32 a_ = eax, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041cdbb cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cdbd jne 0x41cda6 */ if (!ZF_) goto L_0041cda6;
  /* 0041cdbf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041cdc0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0041cdc1:;
  /* 0041cdc1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041cde0(CPU *c) {
  NATIVE_HOOK(0x41cde0u) REGS; LOADALL;
L_0041cde0:;
  /* 0041cde0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041cde1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041cde3 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041cde7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cde8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041cdea mov dword ptr [esi], 0x644184 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x644184u); }
  /* 0041cdf0 je 0x41cdfb */ if (ZF_) goto L_0041cdfb;
  /* 0041cdf2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cdf3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41cdf8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41cdf3u); RETCHK(0x41cdf8u, 0x41cdf3u); LOADALL;
  /* 0041cdf8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041cdfb:;
  /* 0041cdfb mov eax, esi */ { eax = (u32)(esi); }
  /* 0041cdfd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041cdfe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041cdff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041ce10(CPU *c) {
  NATIVE_HOOK(0x41ce10u) REGS; LOADALL;
L_0041ce10:;
  /* 0041ce10 mov eax, dword ptr [0x7a6818] */ { const u32 m_ = (u32)(0x7a6818u); eax = (u32)(M32(m_)); }
  /* 0041ce15 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ce17 jne 0x41ce39 */ if (!ZF_) goto L_0041ce39;
  /* 0041ce19 push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 0041ce1b call 0x5fe934 */ esp -= 4; M32(esp) = 0x41ce20u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41ce1bu); RETCHK(0x41ce20u, 0x41ce1bu); LOADALL;
  /* 0041ce20 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ce23 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ce25 je 0x41ce32 */ if (ZF_) goto L_0041ce32;
  /* 0041ce27 call 0x41c460 */ esp -= 4; M32(esp) = 0x41ce2cu; SAVEALL; F_0041c460(c); ABI_CHECK(0x41c460u, 0x41ce27u); RETCHK(0x41ce2cu, 0x41ce27u); LOADALL;
  /* 0041ce2c mov dword ptr [0x7a6818], eax */ { const u32 m_ = (u32)(0x7a6818u); M32(m_) = (u32)(eax); }
  /* 0041ce31 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041ce32:;
  /* 0041ce32 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041ce34 mov dword ptr [0x7a6818], eax */ { const u32 m_ = (u32)(0x7a6818u); M32(m_) = (u32)(eax); }
L_0041ce39:;
  /* 0041ce39 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041ce40(CPU *c) {
  NATIVE_HOOK(0x41ce40u) REGS; LOADALL;
L_0041ce40:;
  /* 0041ce40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ce41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ce43 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ce47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ce48 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041ce4a mov dword ptr [esi], 0x644168 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x644168u); }
  /* 0041ce50 je 0x41ce5b */ if (ZF_) goto L_0041ce5b;
  /* 0041ce52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ce53 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41ce58u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41ce53u); RETCHK(0x41ce58u, 0x41ce53u); LOADALL;
  /* 0041ce58 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041ce5b:;
  /* 0041ce5b mov eax, esi */ { eax = (u32)(esi); }
  /* 0041ce5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041ce5e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ce5f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041ce70(CPU *c) {
  NATIVE_HOOK(0x41ce70u) REGS; LOADALL;
L_0041ce70:;
  /* 0041ce70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ce71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ce73 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 0041ce75 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041ce76 lea edx, [esi + 8] */ edx = (u32)((u32)(esi + 0x8u));
  /* 0041ce79 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041ce7a mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041ce7d mov dword ptr [esi], 0x644170 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x644170u); }
  /* 0041ce83 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x41ce88u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x41ce83u); RETCHK(0x41ce88u, 0x41ce83u); LOADALL;
  /* 0041ce88 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041ce8b push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0041ce8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ce8e lea ecx, [esi + 0x48] */ ecx = (u32)((u32)(esi + 0x48u));
  /* 0041ce91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041ce92 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x41ce97u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x41ce92u); RETCHK(0x41ce97u, 0x41ce92u); LOADALL;
  /* 0041ce97 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041ce9a push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0041ce9c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041ce9d lea eax, [esi + 0x5c] */ eax = (u32)((u32)(esi + 0x5cu));
  /* 0041cea0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041cea1 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x41cea6u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x41cea1u); RETCHK(0x41cea6u, 0x41cea1u); LOADALL;
  /* 0041cea6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041cea8 lea edx, [esi + 0x70] */ edx = (u32)((u32)(esi + 0x70u));
  /* 0041ceab mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0041cead mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0041ceb0 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0041ceb3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041ceb5 lea ecx, [esi + 0x7c] */ ecx = (u32)((u32)(esi + 0x7cu));
  /* 0041ceb8 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0041ceba mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041cebd mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0041cec0 mov cl, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041cec3 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cec6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0041cec8 lea eax, [esi + 0x88] */ eax = (u32)((u32)(esi + 0x88u));
  /* 0041cece mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0041ced0 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0041ced3 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0041ced6 mov byte ptr [esi + 0x94], cl */ { const u32 m_ = (u32)(esi + 0x94u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0041cedc mov eax, esi */ { eax = (u32)(esi); }
  /* 0041cede pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041cedf ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041cef0(CPU *c) {
  NATIVE_HOOK(0x41cef0u) REGS; LOADALL;
L_0041cef0:;
  /* 0041cef0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cef1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041cef3 mov eax, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); eax = (u32)(M32(m_)); }
  /* 0041cef6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cef8 je 0x41cf0a */ if (ZF_) goto L_0041cf0a;
  /* 0041cefa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041cefb call 0x5ab020 */ esp -= 4; M32(esp) = 0x41cf00u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x41cefbu); RETCHK(0x41cf00u, 0x41cefbu); LOADALL;
  /* 0041cf00 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cf03 mov dword ptr [esi + 0x70], 0 */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(0x0u); }
L_0041cf0a:;
  /* 0041cf0a mov eax, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 0041cf0d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cf0f je 0x41cf21 */ if (ZF_) goto L_0041cf21;
  /* 0041cf11 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041cf12 call 0x5ab020 */ esp -= 4; M32(esp) = 0x41cf17u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x41cf12u); RETCHK(0x41cf17u, 0x41cf12u); LOADALL;
  /* 0041cf17 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cf1a mov dword ptr [esi + 0x7c], 0 */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(0x0u); }
L_0041cf21:;
  /* 0041cf21 mov eax, dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); eax = (u32)(M32(m_)); }
  /* 0041cf27 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cf29 je 0x41cf3e */ if (ZF_) goto L_0041cf3e;
  /* 0041cf2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041cf2c call 0x5ab020 */ esp -= 4; M32(esp) = 0x41cf31u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x41cf2cu); RETCHK(0x41cf31u, 0x41cf2cu); LOADALL;
  /* 0041cf31 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cf34 mov dword ptr [esi + 0x88], 0 */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(0x0u); }
L_0041cf3e:;
  /* 0041cf3e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041cf3f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041cf40(CPU *c) {
  NATIVE_HOOK(0x41cf40u) REGS; LOADALL;
L_0041cf40:;
  /* 0041cf40 mov dword ptr [ecx], 0x644168 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x644168u); }
  /* 0041cf46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041cf50(CPU *c) {
  NATIVE_HOOK(0x41cf50u) REGS; LOADALL;
L_0041cf50:;
  /* 0041cf50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041cf51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041cf53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cf54 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041cf56 call 0x41cf40 */ esp -= 4; M32(esp) = 0x41cf5bu; SAVEALL; F_0041cf40(c); ABI_CHECK(0x41cf40u, 0x41cf56u); RETCHK(0x41cf5bu, 0x41cf56u); LOADALL;
  /* 0041cf5b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041cf5f je 0x41cf6a */ if (ZF_) goto L_0041cf6a;
  /* 0041cf61 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cf62 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41cf67u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41cf62u); RETCHK(0x41cf67u, 0x41cf62u); LOADALL;
  /* 0041cf67 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041cf6a:;
  /* 0041cf6a mov eax, esi */ { eax = (u32)(esi); }
  /* 0041cf6c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041cf6d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041cf6e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041cf80(CPU *c) {
  NATIVE_HOOK(0x41cf80u) REGS; LOADALL;
L_0041cf80:;
  /* 0041cf80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041cf81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041cf83 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041cf89 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041cf8b push 0x61f9c8 */ { u32 v_ = 0x61f9c8u; esp -= 4; M32(esp) = v_; }
  /* 0041cf90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041cf91 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041cf98 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041cf99 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041cf9a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0041cf9d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041cf9f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0041cfa1 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041cfa4 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041cfa7 mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 0041cfad mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041cfb0 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 0041cfb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041cfb3 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 0041cfb6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041cfb7 mov dword ptr [esi], 0x64417c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64417cu); }
  /* 0041cfbd mov dword ptr [esi + 0x80], 2 */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(0x2u); }
  /* 0041cfc7 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x41cfccu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x41cfc7u); RETCHK(0x41cfccu, 0x41cfc7u); LOADALL;
  /* 0041cfcc mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0041cfcf add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041cfd2 cmp ebx, 0x12b */ { u32 a_ = ebx, b_ = 0x12bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cfd8 mov byte ptr [esi + 0x47], 0 */ { const u32 m_ = (u32)(esi + 0x47u); M8(m_) = (u8)(0x0u); }
  /* 0041cfdc mov dword ptr [esi + 0x48], ebx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 0041cfdf mov dword ptr [esi + 0x4c], edx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(edx); }
  /* 0041cfe2 jle 0x41cfed */ if ((ZF_|LT_)) goto L_0041cfed;
  /* 0041cfe4 mov dword ptr [esi + 0x48], 0x12b */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0x12bu); }
  /* 0041cfeb jmp 0x41cff9 */ goto L_0041cff9;
L_0041cfed:;
  /* 0041cfed cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041cff0 jge 0x41cff9 */ if (!LT_) goto L_0041cff9;
  /* 0041cff2 mov dword ptr [esi + 0x48], 1 */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0x1u); }
L_0041cff9:;
  /* 0041cff9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041cffb mov eax, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); eax = (u32)(M32(m_)); }
  /* 0041cffe mov cl, byte ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041d001 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 0041d004 mov al, byte ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041d007 mov dword ptr [esi + 0x78], edi */ { const u32 m_ = (u32)(esi + 0x78u); M32(m_) = (u32)(edi); }
  /* 0041d00a mov byte ptr [esi + 0x50], al */ { const u32 m_ = (u32)(esi + 0x50u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041d00d mov byte ptr [esi + 0x51], cl */ { const u32 m_ = (u32)(esi + 0x51u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0041d010 je 0x41d07d */ if (ZF_) goto L_0041d07d;
  /* 0041d012 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d014 jne 0x41d03a */ if (!ZF_) goto L_0041d03a;
  /* 0041d016 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d018 jne 0x41d03a */ if (!ZF_) goto L_0041d03a;
  /* 0041d01a mov ax, word ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0041d01e call 0x555440 */ esp -= 4; M32(esp) = 0x41d023u; SAVEALL; F_00555440(c); ABI_CHECK(0x555440u, 0x41d01eu); RETCHK(0x41d023u, 0x41d01eu); LOADALL;
  /* 0041d023 call 0x9c10a0 */ esp -= 4; M32(esp) = 0x41d028u; SAVEALL; F_009c10a0(c); ABI_CHECK(0x9c10a0u, 0x41d023u); RETCHK(0x41d028u, 0x41d023u); LOADALL;
  /* 0041d028 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d029 nop */ ;
  /* 0041d02a nop */ ;
  /* 0041d02b mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0041d02d call 0x50dc70 */ esp -= 4; M32(esp) = 0x41d032u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x41d02du); RETCHK(0x41d032u, 0x41d02du); LOADALL;
  /* 0041d032 mov edx, dword ptr [0x63ea44] */ { const u32 m_ = (u32)(0x63ea44u); edx = (u32)(M32(m_)); }
  /* 0041d038 jmp 0x41d06d */ goto L_0041d06d;
L_0041d03a:;
  /* 0041d03a mov ax, word ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0041d03e call 0x555440 */ esp -= 4; M32(esp) = 0x41d043u; SAVEALL; F_00555440(c); ABI_CHECK(0x555440u, 0x41d03eu); RETCHK(0x41d043u, 0x41d03eu); LOADALL;
  /* 0041d043 call 0x9c10a0 */ esp -= 4; M32(esp) = 0x41d048u; SAVEALL; F_009c10a0(c); ABI_CHECK(0x9c10a0u, 0x41d043u); RETCHK(0x41d048u, 0x41d043u); LOADALL;
  /* 0041d048 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d049 nop */ ;
  /* 0041d04a nop */ ;
  /* 0041d04b mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0041d04d call 0x50dc70 */ esp -= 4; M32(esp) = 0x41d052u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x41d04du); RETCHK(0x41d052u, 0x41d04du); LOADALL;
  /* 0041d052 mov al, byte ptr [esi + 0x51] */ { const u32 m_ = (u32)(esi + 0x51u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041d055 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d057 je 0x41d067 */ if (ZF_) goto L_0041d067;
  /* 0041d059 call 0x9c4959 */ esp -= 4; M32(esp) = 0x41d05eu; SAVEALL; F_009c4959(c); ABI_CHECK(0x9c4959u, 0x41d059u); RETCHK(0x41d05eu, 0x41d059u); LOADALL;
  /* 0041d05e nop */ ;
  /* 0041d05f mov dword ptr [esi + 0x88], ecx */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(ecx); }
  /* 0041d065 jmp 0x41d073 */ goto L_0041d073;
L_0041d067:;
  /* 0041d067 mov edx, dword ptr [0x6403c8] */ { const u32 m_ = (u32)(0x6403c8u); edx = (u32)(M32(m_)); }
L_0041d06d:;
  /* 0041d06d mov dword ptr [esi + 0x88], edx */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(edx); }
L_0041d073:;
  /* 0041d073 mov ecx, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ecx = (u32)(M32(m_)); }
  /* 0041d076 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041d078 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041d07a call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d07du; SAVEALL; call_ind(c, t_); RETCHK(0x41d07du, 0x41d07au); LOADALL; }
L_0041d07d:;
  /* 0041d07d mov eax, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 0041d080 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d082 je 0x41d0b6 */ if (ZF_) goto L_0041d0b6;
  /* 0041d084 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0041d087 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d088 call 0x40d630 */ esp -= 4; M32(esp) = 0x41d08du; SAVEALL; F_0040d630(c); ABI_CHECK(0x40d630u, 0x41d088u); RETCHK(0x41d08du, 0x41d088u); LOADALL;
  /* 0041d08d call 0x40d8a0 */ esp -= 4; M32(esp) = 0x41d092u; SAVEALL; F_0040d8a0(c); ABI_CHECK(0x40d8a0u, 0x41d08du); RETCHK(0x41d092u, 0x41d08du); LOADALL;
  /* 0041d092 cmp eax, -2 */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d095 jle 0x41d0ac */ if ((ZF_|LT_)) goto L_0041d0ac;
  /* 0041d097 cmp eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d09a jge 0x41d0ac */ if (!LT_) goto L_0041d0ac;
  /* 0041d09c mov edx, dword ptr [eax*4 + 0x683eb4] */ { const u32 m_ = (u32)(eax * 4u + 0x683eb4u); edx = (u32)(M32(m_)); }
  /* 0041d0a3 mov ebx, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); ebx = (u32)(M32(m_)); }
  /* 0041d0a6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041d0a7 call 0x50dc70 */ esp -= 4; M32(esp) = 0x41d0acu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x41d0a7u); RETCHK(0x41d0acu, 0x41d0a7u); LOADALL;
L_0041d0ac:;
  /* 0041d0ac mov ecx, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); ecx = (u32)(M32(m_)); }
  /* 0041d0af mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041d0b1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041d0b3 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d0b6u; SAVEALL; call_ind(c, t_); RETCHK(0x41d0b6u, 0x41d0b3u); LOADALL; }
L_0041d0b6:;
  /* 0041d0b6 mov ebx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 0041d0b9 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d0bb mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0041d0be mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 0041d0c4 mov dword ptr [esi + 0x84], ebx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(ebx); }
  /* 0041d0ca je 0x41d10d */ if (ZF_) goto L_0041d10d;
  /* 0041d0cc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d0ce jne 0x41d0e6 */ if (!ZF_) goto L_0041d0e6;
  /* 0041d0d0 push 0x644290 */ { u32 v_ = 0x644290u; esp -= 4; M32(esp) = v_; }
  /* 0041d0d5 call 0x50dc70 */ esp -= 4; M32(esp) = 0x41d0dau; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x41d0d5u); RETCHK(0x41d0dau, 0x41d0d5u); LOADALL;
  /* 0041d0da mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 0041d0e0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041d0e2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041d0e4 jmp 0x41d10a */ goto L_0041d10a;
L_0041d0e6:;
  /* 0041d0e6 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d0e9 jne 0x41d104 */ if (!ZF_) goto L_0041d104;
  /* 0041d0eb push 0x644278 */ { u32 v_ = 0x644278u; esp -= 4; M32(esp) = v_; }
  /* 0041d0f0 call 0x50dc70 */ esp -= 4; M32(esp) = 0x41d0f5u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x41d0f0u); RETCHK(0x41d0f5u, 0x41d0f0u); LOADALL;
  /* 0041d0f5 mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 0041d0fb mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041d0fd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041d0ff call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d102u; SAVEALL; call_ind(c, t_); RETCHK(0x41d102u, 0x41d0ffu); LOADALL; }
  /* 0041d102 jmp 0x41d10d */ goto L_0041d10d;
L_0041d104:;
  /* 0041d104 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0041d106 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041d108 mov ecx, ebx */ { ecx = (u32)(ebx); }
L_0041d10a:;
  /* 0041d10a call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d10du; SAVEALL; call_ind(c, t_); RETCHK(0x41d10du, 0x41d10au); LOADALL; }
L_0041d10d:;
  /* 0041d10d jmp 0x9c5772 */ goto L_009c5772;
L_0041d112:;
  /* 0041d112 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0041d114 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041d117 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0041d11a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0041d11c lea eax, [esi + 0x60] */ eax = (u32)((u32)(esi + 0x60u));
  /* 0041d11f mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0041d121 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0041d124 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0041d127 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041d129 lea edx, [esi + 0x6c] */ edx = (u32)((u32)(esi + 0x6cu));
  /* 0041d12c mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0041d12e mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0041d131 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0041d134 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041d137 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041d139 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d13a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041d141 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041d142 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041d144 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d145 ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
L_009c5772:;
  /* 009c5772 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 009c5775 mov al, byte ptr [eax + 0x45] */ { const u32 m_ = (u32)(eax + 0x45u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009c5778 mov ah, al */ { eax = (eax & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 009c577a and al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 009c577c and ah, 0x10 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 009c577f mov word ptr [esi + 0x52], ax */ { const u32 m_ = (u32)(esi + 0x52u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 009c5783 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c5785 lea ecx, [esi + 0x54] */ ecx = (u32)((u32)(esi + 0x54u));
  /* 009c5788 jmp 0x41d112 */ goto L_0041d112;
}

void F_0041d150(CPU *c) {
  NATIVE_HOOK(0x41d150u) REGS; LOADALL;
L_0041d150:;
  /* 0041d150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d153 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d154 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041d156 call 0x41d1d0 */ esp -= 4; M32(esp) = 0x41d15bu; SAVEALL; F_0041d1d0(c); ABI_CHECK(0x41d1d0u, 0x41d156u); RETCHK(0x41d15bu, 0x41d156u); LOADALL;
  /* 0041d15b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d15f je 0x41d16a */ if (ZF_) goto L_0041d16a;
  /* 0041d161 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d162 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41d167u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41d162u); RETCHK(0x41d167u, 0x41d162u); LOADALL;
  /* 0041d167 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041d16a:;
  /* 0041d16a mov eax, esi */ { eax = (u32)(esi); }
  /* 0041d16c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d16d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d16e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041d180(CPU *c) {
  NATIVE_HOOK(0x41d180u) REGS; LOADALL;
L_0041d180:;
  /* 0041d180 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d181 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041d183 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 0041d186 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d188 je 0x41d19a */ if (ZF_) goto L_0041d19a;
  /* 0041d18a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d18b call 0x5ab020 */ esp -= 4; M32(esp) = 0x41d190u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x41d18bu); RETCHK(0x41d190u, 0x41d18bu); LOADALL;
  /* 0041d190 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d193 mov dword ptr [esi + 0x54], 0 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x0u); }
L_0041d19a:;
  /* 0041d19a mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 0041d19d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d19f je 0x41d1b1 */ if (ZF_) goto L_0041d1b1;
  /* 0041d1a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d1a2 call 0x5ab020 */ esp -= 4; M32(esp) = 0x41d1a7u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x41d1a2u); RETCHK(0x41d1a7u, 0x41d1a2u); LOADALL;
  /* 0041d1a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d1aa mov dword ptr [esi + 0x60], 0 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x0u); }
L_0041d1b1:;
  /* 0041d1b1 mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 0041d1b4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d1b6 je 0x41d1c8 */ if (ZF_) goto L_0041d1c8;
  /* 0041d1b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d1b9 call 0x5ab020 */ esp -= 4; M32(esp) = 0x41d1beu; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x41d1b9u); RETCHK(0x41d1beu, 0x41d1b9u); LOADALL;
  /* 0041d1be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d1c1 mov dword ptr [esi + 0x6c], 0 */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(0x0u); }
L_0041d1c8:;
  /* 0041d1c8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d1c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d1d0(CPU *c) {
  NATIVE_HOOK(0x41d1d0u) REGS; LOADALL;
L_0041d1d0:;
  /* 0041d1d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d1d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d1d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041d1d5 push 0x61b448 */ { u32 v_ = 0x61b448u; esp -= 4; M32(esp) = v_; }
  /* 0041d1da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041d1e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d1e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041d1e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d1e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d1ea mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041d1ec mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0041d1ef mov dword ptr [esi], 0x64417c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64417cu); }
  /* 0041d1f5 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0041d1fc mov ecx, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ecx = (u32)(M32(m_)); }
  /* 0041d1ff test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d201 je 0x41d20a */ if (ZF_) goto L_0041d20a;
  /* 0041d203 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041d205 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041d207 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d20au; SAVEALL; call_ind(c, t_); RETCHK(0x41d20au, 0x41d207u); LOADALL; }
L_0041d20a:;
  /* 0041d20a mov ecx, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); ecx = (u32)(M32(m_)); }
  /* 0041d20d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d20f je 0x41d218 */ if (ZF_) goto L_0041d218;
  /* 0041d211 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041d213 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041d215 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d218u; SAVEALL; call_ind(c, t_); RETCHK(0x41d218u, 0x41d215u); LOADALL; }
L_0041d218:;
  /* 0041d218 mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 0041d21e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d220 je 0x41d229 */ if (ZF_) goto L_0041d229;
  /* 0041d222 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041d224 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041d226 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d229u; SAVEALL; call_ind(c, t_); RETCHK(0x41d229u, 0x41d226u); LOADALL; }
L_0041d229:;
  /* 0041d229 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041d22c mov dword ptr [esi], 0x644168 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x644168u); }
  /* 0041d232 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d233 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041d23a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041d23c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d23d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d240(CPU *c) {
  NATIVE_HOOK(0x41d240u) REGS; LOADALL;
L_0041d240:;
  /* 0041d240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d243 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041d246 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041d249 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 0041d24b add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041d24e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d24f add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041d252 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d253 call 0x61af76 */ esp -= 4; M32(esp) = 0x41d258u; SAVEALL; F_0061af76(c); ABI_CHECK(0x61af76u, 0x41d253u); RETCHK(0x41d258u, 0x41d253u); LOADALL;
  /* 0041d258 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d25b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d25c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d260(CPU *c) {
  NATIVE_HOOK(0x41d260u) REGS; LOADALL;
L_0041d260:;
  /* 0041d260 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041d262 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d270(CPU *c) {
  NATIVE_HOOK(0x41d270u) REGS; LOADALL;
L_0041d270:;
  /* 0041d270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d273 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d276 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0041d279 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041d27a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d27b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041d27c lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041d27f call 0x52cea0 */ esp -= 4; M32(esp) = 0x41d284u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x41d27fu); RETCHK(0x41d284u, 0x41d27fu); LOADALL;
  /* 0041d284 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0041d287 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d28d mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0041d290 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041d293 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041d296 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d299 lea eax, [edi + 0x88] */ eax = (u32)((u32)(edi + 0x88u));
  /* 0041d29f fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0041d2a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d2a3 fadd dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d2a9 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 0041d2ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d2ad lea eax, [edi + 0x54] */ eax = (u32)((u32)(edi + 0x54u));
  /* 0041d2b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041d2b1 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d2b4 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041d2b7 call 0x9c578d */ esp -= 4; M32(esp) = 0x41d2bcu; SAVEALL; F_009c578d(c); ABI_CHECK(0x9c578du, 0x41d2b7u); RETCHK(0x41d2bcu, 0x41d2b7u); LOADALL;
  /* 0041d2bc mov edi, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); edi = (u32)(M32(m_)); }
  /* 0041d2c2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d2c5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d2c7 je 0x41d322 */ if (ZF_) goto L_0041d322;
  /* 0041d2c9 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0041d2cc lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041d2cf call 0x52cea0 */ esp -= 4; M32(esp) = 0x41d2d4u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x41d2cfu); RETCHK(0x41d2d4u, 0x41d2cfu); LOADALL;
  /* 0041d2d4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d2d7 call 0x507890 */ esp -= 4; M32(esp) = 0x41d2dcu; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x41d2d7u); RETCHK(0x41d2dcu, 0x41d2d7u); LOADALL;
  /* 0041d2dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d2dd lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041d2e0 call 0x52d060 */ esp -= 4; M32(esp) = 0x41d2e5u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x41d2e0u); RETCHK(0x41d2e5u, 0x41d2e0u); LOADALL;
  /* 0041d2e5 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0041d2e8 fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d2ee mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0041d2f0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d2f3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041d2f5 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d2f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d2f9 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0041d2fc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041d2fe fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d304 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d307 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0041d30a fadd dword ptr [0x6570c0] */ { const u32 m_ = (u32)(0x6570c0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d310 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d313 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0041d316 fadd dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d31c fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d31f call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d322u; SAVEALL; call_ind(c, t_); RETCHK(0x41d322u, 0x41d31fu); LOADALL; }
L_0041d322:;
  /* 0041d322 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d323 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d324 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041d325 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041d327 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d328 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d330(CPU *c) {
  NATIVE_HOOK(0x41d330u) REGS; LOADALL;
L_0041d330:;
  /* 0041d330 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d331 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d333 sub esp, 0x54 */ { u32 a_ = esp, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d336 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041d33b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041d33e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041d340 mov dword ptr [ebp - 0x23], eax */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M32(m_) = (u32)(eax); }
  /* 0041d343 mov dword ptr [ebp - 0x1f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M32(m_) = (u32)(eax); }
  /* 0041d346 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041d347 mov dword ptr [ebp - 0x1b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M32(m_) = (u32)(eax); }
  /* 0041d34a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d34b mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0041d34e mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 0041d351 mov dword ptr [ebp - 0x17], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(eax); }
  /* 0041d354 mov dword ptr [ebp - 0x13], eax */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M32(m_) = (u32)(eax); }
  /* 0041d357 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041d358 mov dword ptr [ebp - 0xf], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff1u); M32(m_) = (u32)(eax); }
  /* 0041d35b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d35c mov dword ptr [ebp - 0xb], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff5u); M32(m_) = (u32)(eax); }
  /* 0041d35f push 0xac */ { u32 v_ = 0xacu; esp -= 4; M32(esp) = v_; }
  /* 0041d364 mov word ptr [ebp - 7], ax */ { const u32 m_ = (u32)(ebp + 0xfffffff9u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0041d368 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0041d36d mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0041d371 mov byte ptr [ebp - 5], al */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041d374 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d37au; SAVEALL; call_ind(c, t_); RETCHK(0x41d37au, 0x41d374u); LOADALL; }
  /* 0041d37a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d37b lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0041d37e push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0041d380 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041d381 call 0x5fe928 */ esp -= 4; M32(esp) = 0x41d386u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41d381u); RETCHK(0x41d386u, 0x41d381u); LOADALL;
  /* 0041d386 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0041d389 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d38c lea eax, [ebp - 0x54] */ eax = (u32)((u32)(ebp + 0xffffffacu));
  /* 0041d38f call 0x52cea0 */ esp -= 4; M32(esp) = 0x41d394u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x41d38fu); RETCHK(0x41d394u, 0x41d38fu); LOADALL;
  /* 0041d394 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0041d397 fadd dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d39d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041d3a0 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041d3a3 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0041d3a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d3a7 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d3aa lea edi, [esi + 0x60] */ edi = (u32)((u32)(esi + 0x60u));
  /* 0041d3ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d3ae lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 0041d3b1 call 0x516590 */ esp -= 4; M32(esp) = 0x41d3b6u; SAVEALL; F_00516590(c); ABI_CHECK(0x516590u, 0x41d3b1u); RETCHK(0x41d3b6u, 0x41d3b1u); LOADALL;
  /* 0041d3b6 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0041d3b9 mov eax, dword ptr [edi + 0x78] */ { const u32 m_ = (u32)(edi + 0x78u); eax = (u32)(M32(m_)); }
  /* 0041d3bc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d3bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d3c1 je 0x41d4b8 */ if (ZF_) goto L_0041d4b8;
  /* 0041d3c7 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0041d3ca lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0041d3cd call 0x52cea0 */ esp -= 4; M32(esp) = 0x41d3d2u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x41d3cdu); RETCHK(0x41d3d2u, 0x41d3cdu); LOADALL;
  /* 0041d3d2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d3d5 call 0x507890 */ esp -= 4; M32(esp) = 0x41d3dau; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x41d3d5u); RETCHK(0x41d3dau, 0x41d3d5u); LOADALL;
  /* 0041d3da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d3db lea esi, [ebp - 0x34] */ esi = (u32)((u32)(ebp + 0xffffffccu));
  /* 0041d3de call 0x52d060 */ esp -= 4; M32(esp) = 0x41d3e3u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x41d3deu); RETCHK(0x41d3e3u, 0x41d3deu); LOADALL;
  /* 0041d3e3 mov ecx, dword ptr [edi + 0x78] */ { const u32 m_ = (u32)(edi + 0x78u); ecx = (u32)(M32(m_)); }
  /* 0041d3e6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041d3e8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d3eb lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041d3ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d3ef call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d3f2u; SAVEALL; call_ind(c, t_); RETCHK(0x41d3f2u, 0x41d3efu); LOADALL; }
  /* 0041d3f2 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0041d3f5 fsub dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0041d3f8 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0041d3fe fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041d400 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d403 je 0x41d40d */ if (ZF_) goto L_0041d40d;
  /* 0041d405 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041d407 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0041d40a fsub dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041d40d:;
  /* 0041d40d fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 0041d410 fsub dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0041d413 fst dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 0041d416 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0041d41c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041d41e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d421 jne 0x41d428 */ if (!ZF_) goto L_0041d428;
  /* 0041d423 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0041d426 jmp 0x41d42e */ goto L_0041d42e;
L_0041d428:;
  /* 0041d428 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 0041d42b fsub dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041d42e:;
  /* 0041d42e mov eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); eax = (u32)(M32(m_)); }
  /* 0041d431 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0041d433 cmp eax, 0xa */ { u32 a_ = eax, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d436 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0041d438 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0041d43e fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 0041d440 fld dword ptr [0x6570b4] */ { const u32 m_ = (u32)(0x6570b4u); FPUSH((double)MF32(m_)); }
  /* 0041d446 jl 0x41d450 */ if (LT_) goto L_0041d450;
  /* 0041d448 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041d44a fld dword ptr [0x6570bc] */ { const u32 m_ = (u32)(0x6570bcu); FPUSH((double)MF32(m_)); }
L_0041d450:;
  /* 0041d450 jmp 0x62d8d0 */ goto L_0062d8d0;
L_0041d458:;
  /* 0041d458 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041d45a fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 0041d45d fsub dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0041d460 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0041d466 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041d468 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d46b je 0x41d475 */ if (ZF_) goto L_0041d475;
  /* 0041d46d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041d46f fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 0041d472 fsub dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041d475:;
  /* 0041d475 fadd dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d478 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d47b fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0041d47e fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0041d480 fadd dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d486 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d489 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041d48b fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0041d48e fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0041d494 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041d496 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d499 jne 0x41d4a0 */ if (!ZF_) goto L_0041d4a0;
  /* 0041d49b fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0041d49e jmp 0x41d4a6 */ goto L_0041d4a6;
L_0041d4a0:;
  /* 0041d4a0 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 0041d4a3 fsub dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041d4a6:;
  /* 0041d4a6 fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d4a9 mov ecx, dword ptr [edi + 0x78] */ { const u32 m_ = (u32)(edi + 0x78u); ecx = (u32)(M32(m_)); }
  /* 0041d4ac lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0041d4af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d4b0 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d4b3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041d4b5 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d4b8u; SAVEALL; call_ind(c, t_); RETCHK(0x41d4b8u, 0x41d4b5u); LOADALL; }
L_0041d4b8:;
  /* 0041d4b8 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0041d4bb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d4bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d4bd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041d4be call 0x61af31 */ esp -= 4; M32(esp) = 0x41d4c3u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41d4beu); RETCHK(0x41d4c3u, 0x41d4beu); LOADALL;
  /* 0041d4c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041d4c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d4c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062d8d0:;
  /* 0062d8d0 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0062d8d3 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0062d8d5 call 0x62d820 */ esp -= 4; M32(esp) = 0x62d8dau; SAVEALL; F_0062d820(c); ABI_CHECK(0x62d820u, 0x62d8d5u); RETCHK(0x62d8dau, 0x62d8d5u); LOADALL;
  /* 0062d8da fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0062d8dc fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d8df jmp 0x41d458 */ goto L_0041d458;
}

void F_0041d4d0(CPU *c) {
  NATIVE_HOOK(0x41d4d0u) REGS; LOADALL;
L_0041d4d0:;
  /* 0041d4d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d4d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d4d3 sub esp, 0x54 */ { u32 a_ = esp, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d4d6 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041d4db mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041d4de xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041d4e0 mov dword ptr [ebp - 0x23], eax */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M32(m_) = (u32)(eax); }
  /* 0041d4e3 mov dword ptr [ebp - 0x1f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M32(m_) = (u32)(eax); }
  /* 0041d4e6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041d4e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d4e8 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0041d4eb mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 0041d4ee mov dword ptr [ebp - 0x1b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M32(m_) = (u32)(eax); }
  /* 0041d4f1 mov dword ptr [ebp - 0x17], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(eax); }
  /* 0041d4f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041d4f5 mov dword ptr [ebp - 0x13], eax */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M32(m_) = (u32)(eax); }
  /* 0041d4f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d4f9 mov dword ptr [ebp - 0xf], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff1u); M32(m_) = (u32)(eax); }
  /* 0041d4fc push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0041d501 mov dword ptr [ebp - 0xb], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff5u); M32(m_) = (u32)(eax); }
  /* 0041d504 lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0041d507 mov word ptr [ebp - 7], ax */ { const u32 m_ = (u32)(ebp + 0xfffffff9u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0041d50b push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0041d50d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041d50e mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0041d512 mov byte ptr [ebp - 5], al */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041d515 call 0x5fe928 */ esp -= 4; M32(esp) = 0x41d51au; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41d515u); RETCHK(0x41d51au, 0x41d515u); LOADALL;
  /* 0041d51a mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0041d51d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d520 lea eax, [ebp - 0x54] */ eax = (u32)((u32)(ebp + 0xffffffacu));
  /* 0041d523 call 0x52cea0 */ esp -= 4; M32(esp) = 0x41d528u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x41d523u); RETCHK(0x41d528u, 0x41d523u); LOADALL;
  /* 0041d528 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0041d52b fadd dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d531 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041d534 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041d537 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0041d53a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d53b fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d53e lea edi, [esi + 0x6c] */ edi = (u32)((u32)(esi + 0x6cu));
  /* 0041d541 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d542 lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 0041d545 call 0x516590 */ esp -= 4; M32(esp) = 0x41d54au; SAVEALL; F_00516590(c); ABI_CHECK(0x516590u, 0x41d545u); RETCHK(0x41d54au, 0x41d545u); LOADALL;
  /* 0041d54a mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0041d54d mov eax, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 0041d550 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d553 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d555 je 0x41d638 */ if (ZF_) goto L_0041d638;
  /* 0041d55b mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0041d55e lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0041d561 call 0x52cea0 */ esp -= 4; M32(esp) = 0x41d566u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x41d561u); RETCHK(0x41d566u, 0x41d561u); LOADALL;
  /* 0041d566 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d569 call 0x507890 */ esp -= 4; M32(esp) = 0x41d56eu; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x41d569u); RETCHK(0x41d56eu, 0x41d569u); LOADALL;
  /* 0041d56e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d56f lea esi, [ebp - 0x34] */ esi = (u32)((u32)(ebp + 0xffffffccu));
  /* 0041d572 call 0x52d060 */ esp -= 4; M32(esp) = 0x41d577u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x41d572u); RETCHK(0x41d577u, 0x41d572u); LOADALL;
  /* 0041d577 mov ecx, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); ecx = (u32)(M32(m_)); }
  /* 0041d57a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041d57c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d57f lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041d582 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d583 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d586u; SAVEALL; call_ind(c, t_); RETCHK(0x41d586u, 0x41d583u); LOADALL; }
  /* 0041d586 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0041d589 fsub dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0041d58c fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0041d592 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041d594 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d597 je 0x41d5a1 */ if (ZF_) goto L_0041d5a1;
  /* 0041d599 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041d59b fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0041d59e fsub dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041d5a1:;
  /* 0041d5a1 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 0041d5a4 fsub dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0041d5a7 fst dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 0041d5aa fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0041d5b0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041d5b2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d5b5 jne 0x41d5bc */ if (!ZF_) goto L_0041d5bc;
  /* 0041d5b7 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0041d5ba jmp 0x41d5c2 */ goto L_0041d5c2;
L_0041d5bc:;
  /* 0041d5bc fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 0041d5bf fsub dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041d5c2:;
  /* 0041d5c2 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0041d5c4 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0041d5c6 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0041d5cc fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 0041d5ce fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 0041d5d1 fsub dword ptr [0x6570b8] */ { const u32 m_ = (u32)(0x6570b8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0041d5d7 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d5da fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 0041d5dd fsub dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0041d5e0 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0041d5e6 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041d5e8 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d5eb je 0x41d5f5 */ if (ZF_) goto L_0041d5f5;
  /* 0041d5ed fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041d5ef fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 0041d5f2 fsub dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041d5f5:;
  /* 0041d5f5 fadd dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d5f8 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d5fb fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 0041d5fe fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0041d600 fadd dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d606 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d609 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041d60b fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0041d60e fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0041d614 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041d616 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d619 jne 0x41d620 */ if (!ZF_) goto L_0041d620;
  /* 0041d61b fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0041d61e jmp 0x41d626 */ goto L_0041d626;
L_0041d620:;
  /* 0041d620 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 0041d623 fsub dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041d626:;
  /* 0041d626 fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041d629 mov ecx, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); ecx = (u32)(M32(m_)); }
  /* 0041d62c lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0041d62f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d630 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041d633 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041d635 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41d638u; SAVEALL; call_ind(c, t_); RETCHK(0x41d638u, 0x41d635u); LOADALL; }
L_0041d638:;
  /* 0041d638 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0041d63b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d63c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d63d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041d63e call 0x61af31 */ esp -= 4; M32(esp) = 0x41d643u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41d63eu); RETCHK(0x41d643u, 0x41d63eu); LOADALL;
  /* 0041d643 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041d645 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d646 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d650(CPU *c) {
  NATIVE_HOOK(0x41d650u) REGS; LOADALL;
L_0041d650:;
  /* 0041d650 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041d652 mov dword ptr [eax], 0x644178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x644178u); }
  /* 0041d658 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0041d65b mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0041d65e mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0041d661 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0041d664 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d670(CPU *c) {
  NATIVE_HOOK(0x41d670u) REGS; LOADALL;
L_0041d670:;
  /* 0041d670 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d671 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d673 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d674 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041d676 call 0x41d6a0 */ esp -= 4; M32(esp) = 0x41d67bu; SAVEALL; F_0041d6a0(c); ABI_CHECK(0x41d6a0u, 0x41d676u); RETCHK(0x41d67bu, 0x41d676u); LOADALL;
  /* 0041d67b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041d67f je 0x41d68a */ if (ZF_) goto L_0041d68a;
  /* 0041d681 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d682 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41d687u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41d682u); RETCHK(0x41d687u, 0x41d682u); LOADALL;
  /* 0041d687 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041d68a:;
  /* 0041d68a mov eax, esi */ { eax = (u32)(esi); }
  /* 0041d68c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d68d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d68e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041d6a0(CPU *c) {
  NATIVE_HOOK(0x41d6a0u) REGS; LOADALL;
L_0041d6a0:;
  /* 0041d6a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d6a1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041d6a3 mov dword ptr [esi], 0x644178 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x644178u); }
  /* 0041d6a9 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d6ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d6ae je 0x41d6b9 */ if (ZF_) goto L_0041d6b9;
  /* 0041d6b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d6b1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41d6b6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41d6b1u); RETCHK(0x41d6b6u, 0x41d6b1u); LOADALL;
  /* 0041d6b6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041d6b9:;
  /* 0041d6b9 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0041d6c0 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0041d6c7 mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 0041d6ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d6cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d6d0(CPU *c) {
  NATIVE_HOOK(0x41d6d0u) REGS; LOADALL;
L_0041d6d0:;
  /* 0041d6d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d6d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d6d3 sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d6d6 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041d6db push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041d6dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d6dd mov esi, edx */ { esi = (u32)(edx); }
  /* 0041d6df add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041d6e2 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041d6e5 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041d6e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041d6e9 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0041d6eb cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d6ed mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0041d6ef je 0x41d6fa */ if (ZF_) goto L_0041d6fa;
  /* 0041d6f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d6f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41d6f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41d6f2u); RETCHK(0x41d6f7u, 0x41d6f2u); LOADALL;
  /* 0041d6f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041d6fa:;
  /* 0041d6fa mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0041d6fd mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0041d700 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 0041d703 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041d705 mov byte ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)(0x0u); }
  /* 0041d709 mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 0041d70e lea edi, [ebp - 0x47] */ edi = (u32)((u32)(ebp + 0xffffffb9u));
  /* 0041d711 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0041d713 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0041d715 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0041d716 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 0041d719 cmp edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d71c mov byte ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)(0x0u); }
  /* 0041d720 mov byte ptr [ebp - 8], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)(0x1u); }
  /* 0041d724 je 0x41d74f */ if (ZF_) goto L_0041d74f;
L_0041d726:;
  /* 0041d726 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 0041d728 lea eax, [edi + 2] */ eax = (u32)((u32)(edi + 0x2u));
  /* 0041d72b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d72c lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0041d72f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d730 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x41d735u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x41d730u); RETCHK(0x41d735u, 0x41d730u); LOADALL;
  /* 0041d735 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d738 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0041d73b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041d73d call 0x41fc10 */ esp -= 4; M32(esp) = 0x41d742u; SAVEALL; F_0041fc10(c); ABI_CHECK(0x41fc10u, 0x41d73du); RETCHK(0x41d742u, 0x41d73du); LOADALL;
  /* 0041d742 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d745 add edi, 0x82 */ { u32 a_ = edi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0041d74b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d74d jne 0x41d726 */ if (!ZF_) goto L_0041d726;
L_0041d74f:;
  /* 0041d74f mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041d752 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 0041d755 cmp edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d758 mov byte ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)(0x0u); }
  /* 0041d75c je 0x41d789 */ if (ZF_) goto L_0041d789;
  /* 0041d75e mov edi, edi */ { edi = (u32)(edi); }
L_0041d760:;
  /* 0041d760 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 0041d762 lea edx, [edi + 2] */ edx = (u32)((u32)(edi + 0x2u));
  /* 0041d765 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041d766 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0041d769 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d76a call 0x5fe7ca */ esp -= 4; M32(esp) = 0x41d76fu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x41d76au); RETCHK(0x41d76fu, 0x41d76au); LOADALL;
  /* 0041d76f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041d772 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0041d775 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041d777 call 0x41fc10 */ esp -= 4; M32(esp) = 0x41d77cu; SAVEALL; F_0041fc10(c); ABI_CHECK(0x41fc10u, 0x41d777u); RETCHK(0x41d77cu, 0x41d777u); LOADALL;
  /* 0041d77c mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d77f add edi, 0x82 */ { u32 a_ = edi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0041d785 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d787 jne 0x41d760 */ if (!ZF_) goto L_0041d760;
L_0041d789:;
  /* 0041d789 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0041d78c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d78d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d78e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041d78f call 0x61af31 */ esp -= 4; M32(esp) = 0x41d794u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41d78fu); RETCHK(0x41d794u, 0x41d78fu); LOADALL;
  /* 0041d794 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041d796 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d797 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041d7a0(CPU *c) {
  NATIVE_HOOK(0x41d7a0u) REGS; LOADALL;
L_0041d7a0:;
  /* 0041d7a0 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d7a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d7a5 je 0x41d7bd */ if (ZF_) goto L_0041d7bd;
  /* 0041d7a7 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041d7aa sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041d7ac mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041d7b1 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041d7b3 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041d7b6 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041d7b8 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041d7bb add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0041d7bd:;
  /* 0041d7bd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d7be xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0041d7c0 mov esi, 0x11 */ { esi = (u32)(0x11u); }
  /* 0041d7c5 div esi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, esi, &q_, &r_, 0x41d7c5u); eax = q_; edx = r_; }
  /* 0041d7c7 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d7ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d7cb test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d7cd jne 0x41d805 */ if (!ZF_) goto L_0041d805;
  /* 0041d7cf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d7d1 jne 0x41d7e2 */ if (!ZF_) goto L_0041d7e2;
  /* 0041d7d3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041d7d5 mov eax, 0xf0f0f0f1 */ { eax = (u32)(0xf0f0f0f1u); }
  /* 0041d7da mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041d7dc mov eax, edx */ { eax = (u32)(edx); }
  /* 0041d7de shr eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041d7e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041d7e2:;
  /* 0041d7e2 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041d7e5 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041d7e7 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041d7ec imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041d7ee sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041d7f1 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0041d7f3 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0041d7f6 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041d7f8 mov eax, 0xf0f0f0f1 */ { eax = (u32)(0xf0f0f0f1u); }
  /* 0041d7fd mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041d7ff mov eax, edx */ { eax = (u32)(edx); }
  /* 0041d801 shr eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041d804 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041d805:;
  /* 0041d805 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d807 jne 0x41d819 */ if (!ZF_) goto L_0041d819;
  /* 0041d809 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041d80b mov eax, 0xf0f0f0f1 */ { eax = (u32)(0xf0f0f0f1u); }
  /* 0041d810 mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041d812 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041d814 shr eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041d817 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041d818 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041d819:;
  /* 0041d819 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041d81c sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041d81e mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041d823 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041d825 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041d828 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0041d82a shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0041d82d add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041d82f mov eax, 0xf0f0f0f1 */ { eax = (u32)(0xf0f0f0f1u); }
  /* 0041d834 mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041d836 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041d838 shr eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041d83b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041d83c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d840(CPU *c) {
  NATIVE_HOOK(0x41d840u) REGS; LOADALL;
L_0041d840:;
  /* 0041d840 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041d841 mov edi, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edi = (u32)(M32(m_)); }
  /* 0041d844 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041d846 call 0x41d7a0 */ esp -= 4; M32(esp) = 0x41d84bu; SAVEALL; F_0041d7a0(c); ABI_CHECK(0x41d7a0u, 0x41d846u); RETCHK(0x41d84bu, 0x41d846u); LOADALL;
  /* 0041d84b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d84d jbe 0x41d857 */ if ((CF_|ZF_)) goto L_0041d857;
  /* 0041d84f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041d851 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d852 jmp 0x41d7a0 */ SAVEALL; F_0041d7a0(c); return;
L_0041d857:;
  /* 0041d857 mov eax, edi */ { eax = (u32)(edi); }
  /* 0041d859 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d85a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d860(CPU *c) {
  NATIVE_HOOK(0x41d860u) REGS; LOADALL;
L_0041d860:;
  /* 0041d860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d863 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041d864 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0041d867 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041d868 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041d86a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d86c jne 0x41d875 */ if (!ZF_) goto L_0041d875;
  /* 0041d86e mov dword ptr [edi + 0x14], 1 */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(0x1u); }
L_0041d875:;
  /* 0041d875 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041d877 call 0x41d7a0 */ esp -= 4; M32(esp) = 0x41d87cu; SAVEALL; F_0041d7a0(c); ABI_CHECK(0x41d7a0u, 0x41d877u); RETCHK(0x41d87cu, 0x41d877u); LOADALL;
  /* 0041d87c cmp dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d87f jbe 0x41d884 */ if ((CF_|ZF_)) goto L_0041d884;
  /* 0041d881 mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
L_0041d884:;
  /* 0041d884 cmp dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d887 jne 0x41d890 */ if (!ZF_) goto L_0041d890;
  /* 0041d889 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041d88b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041d88c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041d88e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d88f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041d890:;
  /* 0041d890 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041d893 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d895 je 0x41d8a0 */ if (ZF_) goto L_0041d8a0;
  /* 0041d897 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d898 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41d89du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41d898u); RETCHK(0x41d89du, 0x41d898u); LOADALL;
  /* 0041d89d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041d8a0:;
  /* 0041d8a0 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0041d8a3 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0041d8a6 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0041d8a9 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0041d8ac dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041d8ad mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0041d8af shl ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0041d8b2 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0041d8b4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0041d8b6 imul eax, eax, 0x41 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
L_0041d8b9:;
  /* 0041d8b9 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041d8bc mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d8bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d8c1 je 0x41d915 */ if (ZF_) goto L_0041d915;
  /* 0041d8c3 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041d8c6 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041d8c8 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041d8cd imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041d8cf sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041d8d2 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041d8d4 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041d8d7 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041d8d9 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d8db jae 0x41d915 */ if (!CF_) goto L_0041d915;
  /* 0041d8dd mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041d8e0 add eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041d8e3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041d8e5 call 0x41fc10 */ esp -= 4; M32(esp) = 0x41d8eau; SAVEALL; F_0041fc10(c); ABI_CHECK(0x41fc10u, 0x41d8e5u); RETCHK(0x41d8eau, 0x41d8e5u); LOADALL;
  /* 0041d8ea mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041d8ed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041d8ef je 0x41d90c */ if (ZF_) goto L_0041d90c;
  /* 0041d8f1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041d8f4 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041d8f6 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041d8fb imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041d8fd sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041d900 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041d902 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041d905 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041d907 cmp eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d90a jae 0x41d915 */ if (!CF_) goto L_0041d915;
L_0041d90c:;
  /* 0041d90c mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0041d90f inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041d910 add eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041d913 jmp 0x41d8b9 */ goto L_0041d8b9;
L_0041d915:;
  /* 0041d915 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041d917 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041d918 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041d91a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041d91b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d920(CPU *c) {
  NATIVE_HOOK(0x41d920u) REGS; LOADALL;
L_0041d920:;
  /* 0041d920 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041d921 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d922 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041d923 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041d925 mov ebx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ebx = (u32)(M32(m_)); }
  /* 0041d928 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041d92a call 0x41d7a0 */ esp -= 4; M32(esp) = 0x41d92fu; SAVEALL; F_0041d7a0(c); ABI_CHECK(0x41d7a0u, 0x41d92au); RETCHK(0x41d92fu, 0x41d92au); LOADALL;
  /* 0041d92f cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d931 jb 0x41d943 */ if (CF_) goto L_0041d943;
  /* 0041d933 mov dword ptr [edi + 0x14], 1 */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 0041d93a call 0x41d860 */ esp -= 4; M32(esp) = 0x41d93fu; SAVEALL; F_0041d860(c); ABI_CHECK(0x41d860u, 0x41d93au); RETCHK(0x41d93fu, 0x41d93au); LOADALL;
  /* 0041d93f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d940 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d941 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041d942 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041d943:;
  /* 0041d943 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041d944 mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0041d947 call 0x41d860 */ esp -= 4; M32(esp) = 0x41d94cu; SAVEALL; F_0041d860(c); ABI_CHECK(0x41d860u, 0x41d947u); RETCHK(0x41d94cu, 0x41d947u); LOADALL;
  /* 0041d94c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d94d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d94e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041d94f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d950(CPU *c) {
  NATIVE_HOOK(0x41d950u) REGS; LOADALL;
L_0041d950:;
  /* 0041d950 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d951 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041d952 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041d954 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041d956 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0041d959 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041d95c ja 0x41d96e */ if (!(CF_|ZF_)) goto L_0041d96e;
  /* 0041d95e call 0x41d7a0 */ esp -= 4; M32(esp) = 0x41d963u; SAVEALL; F_0041d7a0(c); ABI_CHECK(0x41d7a0u, 0x41d95eu); RETCHK(0x41d963u, 0x41d95eu); LOADALL;
  /* 0041d963 mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0041d966 call 0x41d860 */ esp -= 4; M32(esp) = 0x41d96bu; SAVEALL; F_0041d860(c); ABI_CHECK(0x41d860u, 0x41d966u); RETCHK(0x41d96bu, 0x41d966u); LOADALL;
  /* 0041d96b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d96c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d96d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041d96e:;
  /* 0041d96e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041d96f mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0041d972 call 0x41d860 */ esp -= 4; M32(esp) = 0x41d977u; SAVEALL; F_0041d860(c); ABI_CHECK(0x41d860u, 0x41d972u); RETCHK(0x41d977u, 0x41d972u); LOADALL;
  /* 0041d977 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041d978 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041d979 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041d980(CPU *c) {
  NATIVE_HOOK(0x41d980u) REGS; LOADALL;
L_0041d980:;
  /* 0041d980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041d981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041d983 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041d989 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041d98c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041d98e push 0x61f9a8 */ { u32 v_ = 0x61f9a8u; esp -= 4; M32(esp) = v_; }
  /* 0041d993 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041d994 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041d99b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041d99c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041d99d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0041d99f mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0041d9a2 lea eax, [edx + 0x74] */ eax = (u32)((u32)(edx + 0x74u));
  /* 0041d9a5 mov dword ptr [edx], 0x644158 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x644158u); }
  /* 0041d9ab call 0x41d650 */ esp -= 4; M32(esp) = 0x41d9b0u; SAVEALL; F_0041d650(c); ABI_CHECK(0x41d650u, 0x41d9abu); RETCHK(0x41d9b0u, 0x41d9abu); LOADALL;
  /* 0041d9b0 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041d9b2 mov dword ptr [edx + 0x24], esi */ { const u32 m_ = (u32)(edx + 0x24u); M32(m_) = (u32)(esi); }
  /* 0041d9b5 mov dword ptr [edx + 0x28], esi */ { const u32 m_ = (u32)(edx + 0x28u); M32(m_) = (u32)(esi); }
  /* 0041d9b8 mov dword ptr [edx + 0x2c], esi */ { const u32 m_ = (u32)(edx + 0x2cu); M32(m_) = (u32)(esi); }
  /* 0041d9bb mov dword ptr [edx + 0x34], esi */ { const u32 m_ = (u32)(edx + 0x34u); M32(m_) = (u32)(esi); }
  /* 0041d9be mov dword ptr [edx + 0x48], esi */ { const u32 m_ = (u32)(edx + 0x48u); M32(m_) = (u32)(esi); }
  /* 0041d9c1 mov dword ptr [edx + 0x44], esi */ { const u32 m_ = (u32)(edx + 0x44u); M32(m_) = (u32)(esi); }
  /* 0041d9c4 call 0x41e470 */ esp -= 4; M32(esp) = 0x41d9c9u; SAVEALL; F_0041e470(c); ABI_CHECK(0x41e470u, 0x41d9c4u); RETCHK(0x41d9c9u, 0x41d9c4u); LOADALL;
  /* 0041d9c9 mov dword ptr [edx + 0x10], esi */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(esi); }
  /* 0041d9cc mov dword ptr [edx + 0x5c], esi */ { const u32 m_ = (u32)(edx + 0x5cu); M32(m_) = (u32)(esi); }
  /* 0041d9cf mov dword ptr [edx + 0x64], esi */ { const u32 m_ = (u32)(edx + 0x64u); M32(m_) = (u32)(esi); }
  /* 0041d9d2 mov dword ptr [edx + 0x68], esi */ { const u32 m_ = (u32)(edx + 0x68u); M32(m_) = (u32)(esi); }
  /* 0041d9d5 mov dword ptr [edx + 0x6c], esi */ { const u32 m_ = (u32)(edx + 0x6cu); M32(m_) = (u32)(esi); }
  /* 0041d9d8 mov dword ptr [edx + 0x14], esi */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(esi); }
  /* 0041d9db mov dword ptr [edx + 0x18], esi */ { const u32 m_ = (u32)(edx + 0x18u); M32(m_) = (u32)(esi); }
  /* 0041d9de mov dword ptr [edx + 0x1c], esi */ { const u32 m_ = (u32)(edx + 0x1cu); M32(m_) = (u32)(esi); }
  /* 0041d9e1 mov dword ptr [edx + 0x20], esi */ { const u32 m_ = (u32)(edx + 0x20u); M32(m_) = (u32)(esi); }
  /* 0041d9e4 mov dword ptr [edx + 0x70], esi */ { const u32 m_ = (u32)(edx + 0x70u); M32(m_) = (u32)(esi); }
  /* 0041d9e7 mov dword ptr [edx + 0xc], 1 */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(0x1u); }
  /* 0041d9ee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041d9f0 mov ecx, 0x11 */ { ecx = (u32)(0x11u); }
  /* 0041d9f5 lea edi, [edx + 0x8c] */ edi = (u32)((u32)(edx + 0x8cu));
  /* 0041d9fb rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0041d9fd mov dword ptr [edx + 0x114], eax */ { const u32 m_ = (u32)(edx + 0x114u); M32(m_) = (u32)(eax); }
  /* 0041da03 mov dword ptr [edx + 0x118], eax */ { const u32 m_ = (u32)(edx + 0x118u); M32(m_) = (u32)(eax); }
  /* 0041da09 mov dword ptr [edx + 0x11c], eax */ { const u32 m_ = (u32)(edx + 0x11cu); M32(m_) = (u32)(eax); }
  /* 0041da0f mov dword ptr [edx + 0x120], eax */ { const u32 m_ = (u32)(edx + 0x120u); M32(m_) = (u32)(eax); }
  /* 0041da15 mov dword ptr [edx + 0x124], eax */ { const u32 m_ = (u32)(edx + 0x124u); M32(m_) = (u32)(eax); }
  /* 0041da1b mov dword ptr [edx + 0x128], eax */ { const u32 m_ = (u32)(edx + 0x128u); M32(m_) = (u32)(eax); }
  /* 0041da21 mov dword ptr [edx + 0x12c], eax */ { const u32 m_ = (u32)(edx + 0x12cu); M32(m_) = (u32)(eax); }
  /* 0041da27 mov dword ptr [edx + 0x130], eax */ { const u32 m_ = (u32)(edx + 0x130u); M32(m_) = (u32)(eax); }
  /* 0041da2d mov dword ptr [edx + 0x134], eax */ { const u32 m_ = (u32)(edx + 0x134u); M32(m_) = (u32)(eax); }
  /* 0041da33 mov dword ptr [edx + 0x138], eax */ { const u32 m_ = (u32)(edx + 0x138u); M32(m_) = (u32)(eax); }
  /* 0041da39 mov dword ptr [edx + 0x13c], eax */ { const u32 m_ = (u32)(edx + 0x13cu); M32(m_) = (u32)(eax); }
  /* 0041da3f mov dword ptr [edx + 0x140], eax */ { const u32 m_ = (u32)(edx + 0x140u); M32(m_) = (u32)(eax); }
  /* 0041da45 mov dword ptr [edx + 0x144], eax */ { const u32 m_ = (u32)(edx + 0x144u); M32(m_) = (u32)(eax); }
  /* 0041da4b mov dword ptr [edx + 0x148], eax */ { const u32 m_ = (u32)(edx + 0x148u); M32(m_) = (u32)(eax); }
  /* 0041da51 mov dword ptr [edx + 0x14c], eax */ { const u32 m_ = (u32)(edx + 0x14cu); M32(m_) = (u32)(eax); }
  /* 0041da57 mov dword ptr [edx + 0x150], eax */ { const u32 m_ = (u32)(edx + 0x150u); M32(m_) = (u32)(eax); }
  /* 0041da5d mov dword ptr [edx + 0x154], eax */ { const u32 m_ = (u32)(edx + 0x154u); M32(m_) = (u32)(eax); }
  /* 0041da63 mov ecx, 0x11 */ { ecx = (u32)(0x11u); }
  /* 0041da68 lea edi, [edx + 0xd0] */ edi = (u32)((u32)(edx + 0xd0u));
  /* 0041da6e rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0041da70 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041da73 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041da74 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041da76 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041da7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041da7e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041da80 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041da81 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041da90(CPU *c) {
  NATIVE_HOOK(0x41da90u) REGS; LOADALL;
L_0041da90:;
  /* 0041da90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041da91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041da93 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041da94 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041da96 call 0x41dac0 */ esp -= 4; M32(esp) = 0x41da9bu; SAVEALL; F_0041dac0(c); ABI_CHECK(0x41dac0u, 0x41da96u); RETCHK(0x41da9bu, 0x41da96u); LOADALL;
  /* 0041da9b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041da9f je 0x41daaa */ if (ZF_) goto L_0041daaa;
  /* 0041daa1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041daa2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41daa7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41daa2u); RETCHK(0x41daa7u, 0x41daa2u); LOADALL;
  /* 0041daa7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041daaa:;
  /* 0041daaa mov eax, esi */ { eax = (u32)(esi); }
  /* 0041daac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041daad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041daae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041dac0(CPU *c) {
  NATIVE_HOOK(0x41dac0u) REGS; LOADALL;
L_0041dac0:;
  /* 0041dac0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041dac1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041dac3 lea ecx, [esi + 0x74] */ ecx = (u32)((u32)(esi + 0x74u));
  /* 0041dac6 mov dword ptr [esi], 0x644158 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x644158u); }
  /* 0041dacc call 0x41d6a0 */ esp -= 4; M32(esp) = 0x41dad1u; SAVEALL; F_0041d6a0(c); ABI_CHECK(0x41d6a0u, 0x41daccu); RETCHK(0x41dad1u, 0x41daccu); LOADALL;
  /* 0041dad1 mov dword ptr [esi], 0x644184 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x644184u); }
  /* 0041dad7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041dad8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041dae0(CPU *c) {
  NATIVE_HOOK(0x41dae0u) REGS; LOADALL;
L_0041dae0:;
  /* 0041dae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041dae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041dae3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041dae5 push 0x620b4f */ { u32 v_ = 0x620b4fu; esp -= 4; M32(esp) = v_; }
  /* 0041daea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041daf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041daf1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041daf8 sub esp, 0xd4 */ { u32 a_ = esp, b_ = 0xd4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041dafe mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041db03 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0041db06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041db09 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041db0a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0041db0c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041db0e mov dword ptr [ebx + 0x24], eax */ { const u32 m_ = (u32)(ebx + 0x24u); M32(m_) = (u32)(eax); }
  /* 0041db11 jne 0x41db1a */ if (!ZF_) goto L_0041db1a;
  /* 0041db13 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041db15 jmp 0x41e3bf */ goto L_0041e3bf;
L_0041db1a:;
  /* 0041db1a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041db1b push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 0041db1d push 0x643cfc */ { u32 v_ = 0x643cfcu; esp -= 4; M32(esp) = v_; }
  /* 0041db22 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041db25 mov dword ptr [ebp - 0x54], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0xfu); }
  /* 0041db2c mov dword ptr [ebp - 0x58], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(esi); }
  /* 0041db2f mov byte ptr [ebp - 0x68], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M8(m_) = (u8)(0x0u); }
  /* 0041db33 call 0x404420 */ esp -= 4; M32(esp) = 0x41db38u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41db33u); RETCHK(0x41db38u, 0x41db33u); LOADALL;
  /* 0041db38 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041db3b mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0041db3e mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0041db41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041db42 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41db47u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41db42u); RETCHK(0x41db47u, 0x41db42u); LOADALL;
  /* 0041db47 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0041db4a mov dword ptr [ebx + 0x28], eax */ { const u32 m_ = (u32)(ebx + 0x28u); M32(m_) = (u32)(eax); }
  /* 0041db4d mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041db50 cmp dword ptr [ebp - 0x54], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041db54 jb 0x41db62 */ if (CF_) goto L_0041db62;
  /* 0041db56 mov ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ecx = (u32)(M32(m_)); }
  /* 0041db59 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041db5a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41db5fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41db5au); RETCHK(0x41db5fu, 0x41db5au); LOADALL;
  /* 0041db5f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041db62:;
  /* 0041db62 cmp dword ptr [ebx + 0x28], esi */ { const u32 m_ = (u32)(ebx + 0x28u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041db65 jne 0x41db6e */ if (!ZF_) goto L_0041db6e;
L_0041db67:;
  /* 0041db67 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041db69 jmp 0x41e3be */ goto L_0041e3be;
L_0041db6e:;
  /* 0041db6e push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0041db70 push 0x6435d0 */ { u32 v_ = 0x6435d0u; esp -= 4; M32(esp) = v_; }
  /* 0041db75 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041db78 mov dword ptr [ebp - 0x54], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0xfu); }
  /* 0041db7f mov dword ptr [ebp - 0x58], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(esi); }
  /* 0041db82 mov byte ptr [ebp - 0x68], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M8(m_) = (u8)(0x0u); }
  /* 0041db86 call 0x404420 */ esp -= 4; M32(esp) = 0x41db8bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41db86u); RETCHK(0x41db8bu, 0x41db86u); LOADALL;
  /* 0041db8b lea edx, [ebp - 0x6c] */ edx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041db8e mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0041db95 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041db98 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041db99 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41db9eu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41db99u); RETCHK(0x41db9eu, 0x41db99u); LOADALL;
  /* 0041db9e mov dword ptr [ebx + 0x4c], eax */ { const u32 m_ = (u32)(ebx + 0x4cu); M32(m_) = (u32)(eax); }
  /* 0041dba1 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dba4 cmp dword ptr [ebp - 0x54], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041dba8 jb 0x41dbb6 */ if (CF_) goto L_0041dbb6;
  /* 0041dbaa mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 0041dbad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041dbae call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41dbb3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41dbaeu); RETCHK(0x41dbb3u, 0x41dbaeu); LOADALL;
  /* 0041dbb3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041dbb6:;
  /* 0041dbb6 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 0041dbb8 push 0x64391c */ { u32 v_ = 0x64391cu; esp -= 4; M32(esp) = v_; }
  /* 0041dbbd lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dbc0 mov dword ptr [ebp - 0x54], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0xfu); }
  /* 0041dbc7 mov dword ptr [ebp - 0x58], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(esi); }
  /* 0041dbca mov byte ptr [ebp - 0x68], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M8(m_) = (u8)(0x0u); }
  /* 0041dbce call 0x404420 */ esp -= 4; M32(esp) = 0x41dbd3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41dbceu); RETCHK(0x41dbd3u, 0x41dbceu); LOADALL;
  /* 0041dbd3 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dbd6 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0041dbdd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041dbde mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041dbe1 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41dbe6u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41dbe1u); RETCHK(0x41dbe6u, 0x41dbe1u); LOADALL;
  /* 0041dbe6 mov dword ptr [ebx + 0x50], eax */ { const u32 m_ = (u32)(ebx + 0x50u); M32(m_) = (u32)(eax); }
  /* 0041dbe9 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dbec cmp dword ptr [ebp - 0x54], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041dbf0 jb 0x41dbfe */ if (CF_) goto L_0041dbfe;
  /* 0041dbf2 mov edx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); edx = (u32)(M32(m_)); }
  /* 0041dbf5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041dbf6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41dbfbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41dbf6u); RETCHK(0x41dbfbu, 0x41dbf6u); LOADALL;
  /* 0041dbfb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041dbfe:;
  /* 0041dbfe push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0041dc00 push 0x6436fc */ { u32 v_ = 0x6436fcu; esp -= 4; M32(esp) = v_; }
  /* 0041dc05 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dc08 mov dword ptr [ebp - 0x54], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0xfu); }
  /* 0041dc0f mov dword ptr [ebp - 0x58], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(esi); }
  /* 0041dc12 mov byte ptr [ebp - 0x68], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M8(m_) = (u8)(0x0u); }
  /* 0041dc16 call 0x404420 */ esp -= 4; M32(esp) = 0x41dc1bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41dc16u); RETCHK(0x41dc1bu, 0x41dc16u); LOADALL;
  /* 0041dc1b lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dc1e mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0041dc25 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041dc28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041dc29 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41dc2eu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41dc29u); RETCHK(0x41dc2eu, 0x41dc29u); LOADALL;
  /* 0041dc2e mov dword ptr [ebx + 0x54], eax */ { const u32 m_ = (u32)(ebx + 0x54u); M32(m_) = (u32)(eax); }
  /* 0041dc31 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dc34 cmp dword ptr [ebp - 0x54], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041dc38 jb 0x41dc46 */ if (CF_) goto L_0041dc46;
  /* 0041dc3a mov ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ecx = (u32)(M32(m_)); }
  /* 0041dc3d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041dc3e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41dc43u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41dc3eu); RETCHK(0x41dc43u, 0x41dc3eu); LOADALL;
  /* 0041dc43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041dc46:;
  /* 0041dc46 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0041dc48 push 0x6436f0 */ { u32 v_ = 0x6436f0u; esp -= 4; M32(esp) = v_; }
  /* 0041dc4d lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dc50 mov dword ptr [ebp - 0x54], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0xfu); }
  /* 0041dc57 mov dword ptr [ebp - 0x58], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(esi); }
  /* 0041dc5a mov byte ptr [ebp - 0x68], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M8(m_) = (u8)(0x0u); }
  /* 0041dc5e call 0x404420 */ esp -= 4; M32(esp) = 0x41dc63u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41dc5eu); RETCHK(0x41dc63u, 0x41dc5eu); LOADALL;
  /* 0041dc63 lea edx, [ebp - 0x6c] */ edx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dc66 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 0041dc6d mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041dc70 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041dc71 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41dc76u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41dc71u); RETCHK(0x41dc76u, 0x41dc71u); LOADALL;
  /* 0041dc76 mov dword ptr [ebx + 0x58], eax */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(eax); }
  /* 0041dc79 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dc7c cmp dword ptr [ebp - 0x54], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041dc80 jb 0x41dc8e */ if (CF_) goto L_0041dc8e;
  /* 0041dc82 mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 0041dc85 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041dc86 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41dc8bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41dc86u); RETCHK(0x41dc8bu, 0x41dc86u); LOADALL;
  /* 0041dc8b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041dc8e:;
  /* 0041dc8e push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0041dc90 push 0x64370c */ { u32 v_ = 0x64370cu; esp -= 4; M32(esp) = v_; }
  /* 0041dc95 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dc98 mov dword ptr [ebp - 0x54], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0xfu); }
  /* 0041dc9f mov dword ptr [ebp - 0x58], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(esi); }
  /* 0041dca2 mov byte ptr [ebp - 0x68], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M8(m_) = (u8)(0x0u); }
  /* 0041dca6 call 0x404420 */ esp -= 4; M32(esp) = 0x41dcabu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41dca6u); RETCHK(0x41dcabu, 0x41dca6u); LOADALL;
  /* 0041dcab lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dcae mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 0041dcb5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041dcb6 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041dcb9 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41dcbeu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41dcb9u); RETCHK(0x41dcbeu, 0x41dcb9u); LOADALL;
  /* 0041dcbe mov dword ptr [ebx + 0x2c], eax */ { const u32 m_ = (u32)(ebx + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0041dcc1 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dcc4 cmp dword ptr [ebp - 0x54], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041dcc8 jb 0x41dcd6 */ if (CF_) goto L_0041dcd6;
  /* 0041dcca mov edx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); edx = (u32)(M32(m_)); }
  /* 0041dccd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041dcce call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41dcd3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41dcceu); RETCHK(0x41dcd3u, 0x41dcceu); LOADALL;
  /* 0041dcd3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041dcd6:;
  /* 0041dcd6 cmp dword ptr [ebx + 0x2c], esi */ { const u32 m_ = (u32)(ebx + 0x2cu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041dcd9 je 0x41db67 */ if (ZF_) goto L_0041db67;
  /* 0041dcdf push 0x64370c */ { u32 v_ = 0x64370cu; esp -= 4; M32(esp) = v_; }
  /* 0041dce4 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dce7 call 0x403060 */ esp -= 4; M32(esp) = 0x41dcecu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41dce7u); RETCHK(0x41dcecu, 0x41dce7u); LOADALL;
  /* 0041dcec mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 0041dcf3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041dcf4 mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041dcf7 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dcfa call 0x50c760 */ esp -= 4; M32(esp) = 0x41dcffu; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41dcfau); RETCHK(0x41dcffu, 0x41dcfau); LOADALL;
  /* 0041dcff mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dd02 mov eax, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M32(m_)); }
  /* 0041dd05 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0041dd0a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041dd0c jb 0x41dd1a */ if (CF_) goto L_0041dd1a;
  /* 0041dd0e mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 0041dd11 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041dd12 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41dd17u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41dd12u); RETCHK(0x41dd17u, 0x41dd12u); LOADALL;
  /* 0041dd17 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041dd1a:;
  /* 0041dd1a push 0x64393c */ { u32 v_ = 0x64393cu; esp -= 4; M32(esp) = v_; }
  /* 0041dd1f lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dd22 call 0x403060 */ esp -= 4; M32(esp) = 0x41dd27u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41dd22u); RETCHK(0x41dd27u, 0x41dd22u); LOADALL;
  /* 0041dd27 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dd2a mov dword ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7u); }
  /* 0041dd31 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041dd32 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041dd35 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41dd3au; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41dd35u); RETCHK(0x41dd3au, 0x41dd35u); LOADALL;
  /* 0041dd3a mov dword ptr [ebx + 0x30], eax */ { const u32 m_ = (u32)(ebx + 0x30u); M32(m_) = (u32)(eax); }
  /* 0041dd3d mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dd40 cmp dword ptr [ebp - 0x54], esi */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041dd43 jb 0x41dd51 */ if (CF_) goto L_0041dd51;
  /* 0041dd45 mov edx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); edx = (u32)(M32(m_)); }
  /* 0041dd48 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041dd49 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41dd4eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41dd49u); RETCHK(0x41dd4eu, 0x41dd49u); LOADALL;
  /* 0041dd4e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041dd51:;
  /* 0041dd51 mov eax, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); eax = (u32)(M32(m_)); }
  /* 0041dd54 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041dd56 je 0x41db67 */ if (ZF_) goto L_0041db67;
  /* 0041dd5c push 0x64393c */ { u32 v_ = 0x64393cu; esp -= 4; M32(esp) = v_; }
  /* 0041dd61 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dd64 call 0x403060 */ esp -= 4; M32(esp) = 0x41dd69u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41dd64u); RETCHK(0x41dd69u, 0x41dd64u); LOADALL;
  /* 0041dd69 mov dword ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x8u); }
  /* 0041dd70 mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041dd73 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041dd75 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dd78 call 0x50c760 */ esp -= 4; M32(esp) = 0x41dd7du; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41dd78u); RETCHK(0x41dd7du, 0x41dd78u); LOADALL;
  /* 0041dd7d lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dd80 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dd83 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41dd88u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41dd83u); RETCHK(0x41dd88u, 0x41dd83u); LOADALL;
  /* 0041dd88 push 0x6436b0 */ { u32 v_ = 0x6436b0u; esp -= 4; M32(esp) = v_; }
  /* 0041dd8d lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dd90 call 0x403060 */ esp -= 4; M32(esp) = 0x41dd95u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41dd90u); RETCHK(0x41dd95u, 0x41dd90u); LOADALL;
  /* 0041dd95 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dd98 mov dword ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x9u); }
  /* 0041dd9f mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041dda2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041dda3 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41dda8u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41dda3u); RETCHK(0x41dda8u, 0x41dda3u); LOADALL;
  /* 0041dda8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041ddab mov dword ptr [ebx + 0x44], eax */ { const u32 m_ = (u32)(ebx + 0x44u); M32(m_) = (u32)(eax); }
  /* 0041ddae mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041ddb1 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41ddb6u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41ddb1u); RETCHK(0x41ddb6u, 0x41ddb1u); LOADALL;
  /* 0041ddb6 mov eax, dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); eax = (u32)(M32(m_)); }
  /* 0041ddb9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ddbb je 0x41db67 */ if (ZF_) goto L_0041db67;
  /* 0041ddc1 push 0x6436b0 */ { u32 v_ = 0x6436b0u; esp -= 4; M32(esp) = v_; }
  /* 0041ddc6 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041ddc9 call 0x403060 */ esp -= 4; M32(esp) = 0x41ddceu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41ddc9u); RETCHK(0x41ddceu, 0x41ddc9u); LOADALL;
  /* 0041ddce mov dword ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xau); }
  /* 0041ddd5 mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041ddd8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ddda lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dddd call 0x50c760 */ esp -= 4; M32(esp) = 0x41dde2u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41ddddu); RETCHK(0x41dde2u, 0x41ddddu); LOADALL;
  /* 0041dde2 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dde5 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dde8 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41ddedu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41dde8u); RETCHK(0x41ddedu, 0x41dde8u); LOADALL;
  /* 0041dded push 0x6436bc */ { u32 v_ = 0x6436bcu; esp -= 4; M32(esp) = v_; }
  /* 0041ddf2 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041ddf5 call 0x403060 */ esp -= 4; M32(esp) = 0x41ddfau; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41ddf5u); RETCHK(0x41ddfau, 0x41ddf5u); LOADALL;
  /* 0041ddfa lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041ddfd mov dword ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xbu); }
  /* 0041de04 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041de05 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041de08 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41de0du; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41de08u); RETCHK(0x41de0du, 0x41de08u); LOADALL;
  /* 0041de0d lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041de10 mov dword ptr [ebx + 0x48], eax */ { const u32 m_ = (u32)(ebx + 0x48u); M32(m_) = (u32)(eax); }
  /* 0041de13 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041de16 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41de1bu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41de16u); RETCHK(0x41de1bu, 0x41de16u); LOADALL;
  /* 0041de1b mov eax, dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); eax = (u32)(M32(m_)); }
  /* 0041de1e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041de20 je 0x41db67 */ if (ZF_) goto L_0041db67;
  /* 0041de26 push 0x6436bc */ { u32 v_ = 0x6436bcu; esp -= 4; M32(esp) = v_; }
  /* 0041de2b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041de2e call 0x403060 */ esp -= 4; M32(esp) = 0x41de33u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41de2eu); RETCHK(0x41de33u, 0x41de2eu); LOADALL;
  /* 0041de33 mov dword ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xcu); }
  /* 0041de3a mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041de3d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041de3f lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041de42 call 0x50c760 */ esp -= 4; M32(esp) = 0x41de47u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41de42u); RETCHK(0x41de47u, 0x41de42u); LOADALL;
  /* 0041de47 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041de4a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041de4d call 0x43ee60 */ esp -= 4; M32(esp) = 0x41de52u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41de4du); RETCHK(0x41de52u, 0x41de4du); LOADALL;
  /* 0041de52 push 0x644264 */ { u32 v_ = 0x644264u; esp -= 4; M32(esp) = v_; }
  /* 0041de57 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041de5a call 0x403060 */ esp -= 4; M32(esp) = 0x41de5fu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41de5au); RETCHK(0x41de5fu, 0x41de5au); LOADALL;
  /* 0041de5f lea edx, [ebp - 0x6c] */ edx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041de62 mov dword ptr [ebp - 4], 0xd */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xdu); }
  /* 0041de69 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041de6c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041de6d call 0x5075d0 */ esp -= 4; M32(esp) = 0x41de72u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41de6du); RETCHK(0x41de72u, 0x41de6du); LOADALL;
  /* 0041de72 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041de75 mov dword ptr [ebx + 0x40], eax */ { const u32 m_ = (u32)(ebx + 0x40u); M32(m_) = (u32)(eax); }
  /* 0041de78 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041de7b call 0x43ee60 */ esp -= 4; M32(esp) = 0x41de80u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41de7bu); RETCHK(0x41de80u, 0x41de7bu); LOADALL;
  /* 0041de80 push 0x6436dc */ { u32 v_ = 0x6436dcu; esp -= 4; M32(esp) = v_; }
  /* 0041de85 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041de88 call 0x403060 */ esp -= 4; M32(esp) = 0x41de8du; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41de88u); RETCHK(0x41de8du, 0x41de88u); LOADALL;
  /* 0041de8d lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041de90 mov dword ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xeu); }
  /* 0041de97 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041de9a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041de9b call 0x5075d0 */ esp -= 4; M32(esp) = 0x41dea0u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41de9bu); RETCHK(0x41dea0u, 0x41de9bu); LOADALL;
  /* 0041dea0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dea3 mov dword ptr [ebx + 0x38], eax */ { const u32 m_ = (u32)(ebx + 0x38u); M32(m_) = (u32)(eax); }
  /* 0041dea6 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dea9 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41deaeu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41dea9u); RETCHK(0x41deaeu, 0x41dea9u); LOADALL;
  /* 0041deae push 0x6436dc */ { u32 v_ = 0x6436dcu; esp -= 4; M32(esp) = v_; }
  /* 0041deb3 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041deb6 call 0x403060 */ esp -= 4; M32(esp) = 0x41debbu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41deb6u); RETCHK(0x41debbu, 0x41deb6u); LOADALL;
  /* 0041debb mov dword ptr [ebp - 4], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xfu); }
  /* 0041dec2 mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041dec5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041dec7 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041deca call 0x50c760 */ esp -= 4; M32(esp) = 0x41decfu; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41decau); RETCHK(0x41decfu, 0x41decau); LOADALL;
  /* 0041decf lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041ded2 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041ded5 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41dedau; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41ded5u); RETCHK(0x41dedau, 0x41ded5u); LOADALL;
  /* 0041deda push 0x6436c8 */ { u32 v_ = 0x6436c8u; esp -= 4; M32(esp) = v_; }
  /* 0041dedf lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dee2 call 0x403060 */ esp -= 4; M32(esp) = 0x41dee7u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41dee2u); RETCHK(0x41dee7u, 0x41dee2u); LOADALL;
  /* 0041dee7 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041deea mov dword ptr [ebp - 4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x10u); }
  /* 0041def1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041def2 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041def5 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41defau; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41def5u); RETCHK(0x41defau, 0x41def5u); LOADALL;
  /* 0041defa lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041defd mov dword ptr [ebx + 0x3c], eax */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(eax); }
  /* 0041df00 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041df03 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41df08u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41df03u); RETCHK(0x41df08u, 0x41df03u); LOADALL;
  /* 0041df08 push 0x6436c8 */ { u32 v_ = 0x6436c8u; esp -= 4; M32(esp) = v_; }
  /* 0041df0d lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041df10 call 0x403060 */ esp -= 4; M32(esp) = 0x41df15u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41df10u); RETCHK(0x41df15u, 0x41df10u); LOADALL;
  /* 0041df15 mov dword ptr [ebp - 4], 0x11 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x11u); }
  /* 0041df1c mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041df1f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041df21 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041df24 call 0x50c760 */ esp -= 4; M32(esp) = 0x41df29u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41df24u); RETCHK(0x41df29u, 0x41df24u); LOADALL;
  /* 0041df29 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041df2c mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041df2f call 0x43ee60 */ esp -= 4; M32(esp) = 0x41df34u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41df2fu); RETCHK(0x41df34u, 0x41df2fu); LOADALL;
  /* 0041df34 push 0x644254 */ { u32 v_ = 0x644254u; esp -= 4; M32(esp) = v_; }
  /* 0041df39 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041df3c call 0x403060 */ esp -= 4; M32(esp) = 0x41df41u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41df3cu); RETCHK(0x41df41u, 0x41df3cu); LOADALL;
  /* 0041df41 mov dword ptr [ebp - 4], 0x12 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x12u); }
  /* 0041df48 lea edx, [ebp - 0x6c] */ edx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041df4b mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041df4e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041df4f call 0x5075d0 */ esp -= 4; M32(esp) = 0x41df54u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41df4fu); RETCHK(0x41df54u, 0x41df4fu); LOADALL;
  /* 0041df54 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041df57 mov dword ptr [ebx + 0x34], eax */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(eax); }
  /* 0041df5a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041df5d call 0x43ee60 */ esp -= 4; M32(esp) = 0x41df62u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41df5du); RETCHK(0x41df62u, 0x41df5du); LOADALL;
  /* 0041df62 mov eax, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (u32)(M32(m_)); }
  /* 0041df65 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041df67 je 0x41db67 */ if (ZF_) goto L_0041db67;
  /* 0041df6d push 0x644254 */ { u32 v_ = 0x644254u; esp -= 4; M32(esp) = v_; }
  /* 0041df72 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041df75 call 0x403060 */ esp -= 4; M32(esp) = 0x41df7au; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41df75u); RETCHK(0x41df7au, 0x41df75u); LOADALL;
  /* 0041df7a mov dword ptr [ebp - 4], 0x13 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x13u); }
  /* 0041df81 mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041df84 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041df86 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041df89 call 0x50c760 */ esp -= 4; M32(esp) = 0x41df8eu; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41df89u); RETCHK(0x41df8eu, 0x41df89u); LOADALL;
  /* 0041df8e lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041df91 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041df94 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41df99u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41df94u); RETCHK(0x41df99u, 0x41df94u); LOADALL;
  /* 0041df99 push 0x64424c */ { u32 v_ = 0x64424cu; esp -= 4; M32(esp) = v_; }
  /* 0041df9e lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dfa1 call 0x403060 */ esp -= 4; M32(esp) = 0x41dfa6u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41dfa1u); RETCHK(0x41dfa6u, 0x41dfa1u); LOADALL;
  /* 0041dfa6 mov dword ptr [ebp - 4], 0x14 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x14u); }
  /* 0041dfad mov esi, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); esi = (u32)(M32(m_)); }
  /* 0041dfb0 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dfb3 call 0x5224b0 */ esp -= 4; M32(esp) = 0x41dfb8u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x41dfb3u); RETCHK(0x41dfb8u, 0x41dfb3u); LOADALL;
  /* 0041dfb8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dfbb mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dfbe call 0x43ee60 */ esp -= 4; M32(esp) = 0x41dfc3u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41dfbeu); RETCHK(0x41dfc3u, 0x41dfbeu); LOADALL;
  /* 0041dfc3 push 0x643ce8 */ { u32 v_ = 0x643ce8u; esp -= 4; M32(esp) = v_; }
  /* 0041dfc8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dfcb call 0x403060 */ esp -= 4; M32(esp) = 0x41dfd0u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41dfcbu); RETCHK(0x41dfd0u, 0x41dfcbu); LOADALL;
  /* 0041dfd0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0041dfd3 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dfd6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041dfd7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041dfd9 mov dword ptr [ebp - 4], 0x15 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x15u); }
  /* 0041dfe0 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41dfe5u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41dfe0u); RETCHK(0x41dfe5u, 0x41dfe0u); LOADALL;
  /* 0041dfe5 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041dfe8 mov dword ptr [ebx + 0x5c], eax */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(eax); }
  /* 0041dfeb mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041dfee call 0x43ee60 */ esp -= 4; M32(esp) = 0x41dff3u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41dfeeu); RETCHK(0x41dff3u, 0x41dfeeu); LOADALL;
  /* 0041dff3 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041dff6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041dff8 je 0x41db67 */ if (ZF_) goto L_0041db67;
  /* 0041dffe mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041e000 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e002 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41e005u; SAVEALL; call_ind(c, t_); RETCHK(0x41e005u, 0x41e002u); LOADALL; }
  /* 0041e005 push 0x64368c */ { u32 v_ = 0x64368cu; esp -= 4; M32(esp) = v_; }
  /* 0041e00a lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e00d call 0x403060 */ esp -= 4; M32(esp) = 0x41e012u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e00du); RETCHK(0x41e012u, 0x41e00du); LOADALL;
  /* 0041e012 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e015 mov dword ptr [ebp - 4], 0x16 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x16u); }
  /* 0041e01c mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041e01f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e020 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41e025u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41e020u); RETCHK(0x41e025u, 0x41e020u); LOADALL;
  /* 0041e025 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e028 mov dword ptr [ebx + 0x64], eax */ { const u32 m_ = (u32)(ebx + 0x64u); M32(m_) = (u32)(eax); }
  /* 0041e02b mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041e02e call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e033u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e02eu); RETCHK(0x41e033u, 0x41e02eu); LOADALL;
  /* 0041e033 push 0x643680 */ { u32 v_ = 0x643680u; esp -= 4; M32(esp) = v_; }
  /* 0041e038 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e03b call 0x403060 */ esp -= 4; M32(esp) = 0x41e040u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e03bu); RETCHK(0x41e040u, 0x41e03bu); LOADALL;
  /* 0041e040 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e043 mov dword ptr [ebp - 4], 0x17 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x17u); }
  /* 0041e04a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e04b mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041e04e call 0x5075d0 */ esp -= 4; M32(esp) = 0x41e053u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41e04eu); RETCHK(0x41e053u, 0x41e04eu); LOADALL;
  /* 0041e053 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e056 mov dword ptr [ebx + 0x68], eax */ { const u32 m_ = (u32)(ebx + 0x68u); M32(m_) = (u32)(eax); }
  /* 0041e059 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041e05c call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e061u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e05cu); RETCHK(0x41e061u, 0x41e05cu); LOADALL;
  /* 0041e061 push 0x643670 */ { u32 v_ = 0x643670u; esp -= 4; M32(esp) = v_; }
  /* 0041e066 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e069 call 0x403060 */ esp -= 4; M32(esp) = 0x41e06eu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e069u); RETCHK(0x41e06eu, 0x41e069u); LOADALL;
  /* 0041e06e lea edx, [ebp - 0x6c] */ edx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e071 mov dword ptr [ebp - 4], 0x18 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x18u); }
  /* 0041e078 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041e07b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041e07c call 0x5075d0 */ esp -= 4; M32(esp) = 0x41e081u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41e07cu); RETCHK(0x41e081u, 0x41e07cu); LOADALL;
  /* 0041e081 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e084 mov dword ptr [ebx + 0x6c], eax */ { const u32 m_ = (u32)(ebx + 0x6cu); M32(m_) = (u32)(eax); }
  /* 0041e087 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041e08a call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e08fu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e08au); RETCHK(0x41e08fu, 0x41e08au); LOADALL;
  /* 0041e08f call 0x9c10c6 */ esp -= 4; M32(esp) = 0x41e094u; SAVEALL; F_009c10c6(c); ABI_CHECK(0x9c10c6u, 0x41e08fu); RETCHK(0x41e094u, 0x41e08fu); LOADALL;
  /* 0041e094 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041e096 jne 0x41e0a1 */ if (!ZF_) goto L_0041e0a1;
  /* 0041e098 mov al, byte ptr [0x7a68cf] */ { const u32 m_ = (u32)(0x7a68cfu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041e09d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041e09f je 0x41e0ab */ if (ZF_) goto L_0041e0ab;
L_0041e0a1:;
  /* 0041e0a1 mov ecx, dword ptr [ebx + 0x6c] */ { const u32 m_ = (u32)(ebx + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 0041e0a4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041e0a6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e0a8 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41e0abu; SAVEALL; call_ind(c, t_); RETCHK(0x41e0abu, 0x41e0a8u); LOADALL; }
L_0041e0ab:;
  /* 0041e0ab push 0x643cdc */ { u32 v_ = 0x643cdcu; esp -= 4; M32(esp) = v_; }
  /* 0041e0b0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e0b3 call 0x403060 */ esp -= 4; M32(esp) = 0x41e0b8u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e0b3u); RETCHK(0x41e0b8u, 0x41e0b3u); LOADALL;
  /* 0041e0b8 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e0bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e0bc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041e0be mov dword ptr [ebp - 4], 0x19 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x19u); }
  /* 0041e0c5 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41e0cau; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41e0c5u); RETCHK(0x41e0cau, 0x41e0c5u); LOADALL;
  /* 0041e0ca lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e0cd mov dword ptr [ebx + 0x60], eax */ { const u32 m_ = (u32)(ebx + 0x60u); M32(m_) = (u32)(eax); }
  /* 0041e0d0 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0041e0d3 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e0d8u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e0d3u); RETCHK(0x41e0d8u, 0x41e0d3u); LOADALL;
  /* 0041e0d8 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0041e0da call 0x5fe934 */ esp -= 4; M32(esp) = 0x41e0dfu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41e0dau); RETCHK(0x41e0dfu, 0x41e0dau); LOADALL;
  /* 0041e0df mov esi, eax */ { esi = (u32)(eax); }
  /* 0041e0e1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e0e4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041e0e6 je 0x41e0fe */ if (ZF_) goto L_0041e0fe;
  /* 0041e0e8 push 0x41d270 */ { u32 v_ = 0x41d270u; esp -= 4; M32(esp) = v_; }
  /* 0041e0ed push 0x41d240 */ { u32 v_ = 0x41d240u; esp -= 4; M32(esp) = v_; }
  /* 0041e0f2 mov eax, 0x6437d0 */ { eax = (u32)(0x6437d0u); }
  /* 0041e0f7 call 0x40dcc0 */ esp -= 4; M32(esp) = 0x41e0fcu; SAVEALL; F_0040dcc0(c); ABI_CHECK(0x40dcc0u, 0x41e0f7u); RETCHK(0x41e0fcu, 0x41e0f7u); LOADALL;
  /* 0041e0fc jmp 0x41e100 */ goto L_0041e100;
L_0041e0fe:;
  /* 0041e0fe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0041e100:;
  /* 0041e100 mov edi, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0041e103 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e104 call 0x5155b0 */ esp -= 4; M32(esp) = 0x41e109u; SAVEALL; F_005155b0(c); ABI_CHECK(0x5155b0u, 0x41e104u); RETCHK(0x41e109u, 0x41e104u); LOADALL;
  /* 0041e109 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0041e10b call 0x5fe934 */ esp -= 4; M32(esp) = 0x41e110u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41e10bu); RETCHK(0x41e110u, 0x41e10bu); LOADALL;
  /* 0041e110 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041e112 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e115 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041e117 je 0x41e12f */ if (ZF_) goto L_0041e12f;
  /* 0041e119 push 0x41d330 */ { u32 v_ = 0x41d330u; esp -= 4; M32(esp) = v_; }
  /* 0041e11e push 0x41d260 */ { u32 v_ = 0x41d260u; esp -= 4; M32(esp) = v_; }
  /* 0041e123 mov eax, 0x644234 */ { eax = (u32)(0x644234u); }
  /* 0041e128 call 0x40dcc0 */ esp -= 4; M32(esp) = 0x41e12du; SAVEALL; F_0040dcc0(c); ABI_CHECK(0x40dcc0u, 0x41e128u); RETCHK(0x41e12du, 0x41e128u); LOADALL;
  /* 0041e12d jmp 0x41e131 */ goto L_0041e131;
L_0041e12f:;
  /* 0041e12f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0041e131:;
  /* 0041e131 mov edi, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0041e134 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e135 call 0x5155b0 */ esp -= 4; M32(esp) = 0x41e13au; SAVEALL; F_005155b0(c); ABI_CHECK(0x5155b0u, 0x41e135u); RETCHK(0x41e13au, 0x41e135u); LOADALL;
  /* 0041e13a push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0041e13c call 0x5fe934 */ esp -= 4; M32(esp) = 0x41e141u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41e13cu); RETCHK(0x41e141u, 0x41e13cu); LOADALL;
  /* 0041e141 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041e143 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e146 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041e148 je 0x41e160 */ if (ZF_) goto L_0041e160;
  /* 0041e14a push 0x41d4d0 */ { u32 v_ = 0x41d4d0u; esp -= 4; M32(esp) = v_; }
  /* 0041e14f push 0x41d260 */ { u32 v_ = 0x41d260u; esp -= 4; M32(esp) = v_; }
  /* 0041e154 mov eax, 0x64421c */ { eax = (u32)(0x64421cu); }
  /* 0041e159 call 0x40dcc0 */ esp -= 4; M32(esp) = 0x41e15eu; SAVEALL; F_0040dcc0(c); ABI_CHECK(0x40dcc0u, 0x41e159u); RETCHK(0x41e15eu, 0x41e159u); LOADALL;
  /* 0041e15e jmp 0x41e162 */ goto L_0041e162;
L_0041e160:;
  /* 0041e160 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0041e162:;
  /* 0041e162 mov edi, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0041e165 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e166 call 0x5155b0 */ esp -= 4; M32(esp) = 0x41e16bu; SAVEALL; F_005155b0(c); ABI_CHECK(0x5155b0u, 0x41e166u); RETCHK(0x41e16bu, 0x41e166u); LOADALL;
  /* 0041e16b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0041e16d mov dword ptr [ebp - 0x2f], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); M32(m_) = (u32)(edx); }
  /* 0041e170 mov dword ptr [ebp - 0x2b], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd5u); M32(m_) = (u32)(edx); }
  /* 0041e173 mov dword ptr [ebp - 0x27], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd9u); M32(m_) = (u32)(edx); }
  /* 0041e176 mov dword ptr [ebp - 0x23], edx */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M32(m_) = (u32)(edx); }
  /* 0041e179 mov dword ptr [ebp - 0x1f], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M32(m_) = (u32)(edx); }
  /* 0041e17c mov dword ptr [ebp - 0x1b], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M32(m_) = (u32)(edx); }
  /* 0041e17f mov dword ptr [ebp - 0x17], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(edx); }
  /* 0041e182 mov word ptr [ebp - 0x13], dx */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0041e186 mov byte ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)(0x0u); }
  /* 0041e18a mov byte ptr [ebp - 0x11], dl */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0041e18d mov dword ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 0041e194 lea edi, [ebx + 0xd0] */ edi = (u32)((u32)(ebx + 0xd0u));
  /* 0041e19a mov dword ptr [ebp - 0x70], 0x11 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0x11u); }
L_0041e1a1:;
  /* 0041e1a1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041e1a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e1a5 push 0x644208 */ { u32 v_ = 0x644208u; esp -= 4; M32(esp) = v_; }
  /* 0041e1aa lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041e1ad push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0041e1af push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e1b0 call 0x5fe928 */ esp -= 4; M32(esp) = 0x41e1b5u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41e1b0u); RETCHK(0x41e1b5u, 0x41e1b0u); LOADALL;
  /* 0041e1b5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e1b8 lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041e1bb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041e1bc lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e1bf call 0x403060 */ esp -= 4; M32(esp) = 0x41e1c4u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e1bfu); RETCHK(0x41e1c4u, 0x41e1bfu); LOADALL;
  /* 0041e1c4 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e1c7 mov dword ptr [ebp - 4], 0x1a */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1au); }
  /* 0041e1ce mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041e1d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e1d2 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41e1d7u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41e1d2u); RETCHK(0x41e1d7u, 0x41e1d2u); LOADALL;
  /* 0041e1d7 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0041e1da mov dword ptr [edi - 0x44], eax */ { const u32 m_ = (u32)(edi + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 0041e1dd mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041e1e4 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e1e9u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e1e4u); RETCHK(0x41e1e9u, 0x41e1e4u); LOADALL;
  /* 0041e1e9 mov eax, dword ptr [edi - 0x44] */ { const u32 m_ = (u32)(edi + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0041e1ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041e1ee je 0x41e228 */ if (ZF_) goto L_0041e228;
  /* 0041e1f0 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041e1f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e1f4 lea ecx, [ebp - 0xc4] */ ecx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 0041e1fa call 0x403060 */ esp -= 4; M32(esp) = 0x41e1ffu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e1fau); RETCHK(0x41e1ffu, 0x41e1fau); LOADALL;
  /* 0041e1ff mov dword ptr [ebp - 4], 0x1b */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1bu); }
  /* 0041e206 mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041e209 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e20b lea eax, [ebp - 0xc4] */ eax = (u32)((u32)(ebp + 0xffffff3cu));
  /* 0041e211 call 0x50c760 */ esp -= 4; M32(esp) = 0x41e216u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41e211u); RETCHK(0x41e216u, 0x41e211u); LOADALL;
  /* 0041e216 lea ecx, [ebp - 0xc4] */ ecx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 0041e21c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041e223 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e228u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e223u); RETCHK(0x41e228u, 0x41e223u); LOADALL;
L_0041e228:;
  /* 0041e228 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041e22b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041e22c push 0x6441f8 */ { u32 v_ = 0x6441f8u; esp -= 4; M32(esp) = v_; }
  /* 0041e231 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041e234 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0041e236 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e237 call 0x5fe928 */ esp -= 4; M32(esp) = 0x41e23cu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41e237u); RETCHK(0x41e23cu, 0x41e237u); LOADALL;
  /* 0041e23c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e23f lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041e242 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e243 lea ecx, [ebp - 0xa8] */ ecx = (u32)((u32)(ebp + 0xffffff58u));
  /* 0041e249 call 0x403060 */ esp -= 4; M32(esp) = 0x41e24eu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e249u); RETCHK(0x41e24eu, 0x41e249u); LOADALL;
  /* 0041e24e lea edx, [ebp - 0xa8] */ edx = (u32)((u32)(ebp + 0xffffff58u));
  /* 0041e254 mov dword ptr [ebp - 4], 0x1c */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1cu); }
  /* 0041e25b mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041e25e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041e25f call 0x5075d0 */ esp -= 4; M32(esp) = 0x41e264u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41e25fu); RETCHK(0x41e264u, 0x41e25fu); LOADALL;
  /* 0041e264 lea ecx, [ebp - 0xa8] */ ecx = (u32)((u32)(ebp + 0xffffff58u));
  /* 0041e26a mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0041e26c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041e273 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e278u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e273u); RETCHK(0x41e278u, 0x41e273u); LOADALL;
  /* 0041e278 cmp dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e27b je 0x41e2b5 */ if (ZF_) goto L_0041e2b5;
  /* 0041e27d lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041e280 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e281 lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 0041e287 call 0x403060 */ esp -= 4; M32(esp) = 0x41e28cu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e287u); RETCHK(0x41e28cu, 0x41e287u); LOADALL;
  /* 0041e28c mov dword ptr [ebp - 4], 0x1d */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1du); }
  /* 0041e293 mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041e296 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e298 lea eax, [ebp - 0x8c] */ eax = (u32)((u32)(ebp + 0xffffff74u));
  /* 0041e29e call 0x50c760 */ esp -= 4; M32(esp) = 0x41e2a3u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41e29eu); RETCHK(0x41e2a3u, 0x41e29eu); LOADALL;
  /* 0041e2a3 lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 0041e2a9 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041e2b0 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e2b5u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e2b0u); RETCHK(0x41e2b5u, 0x41e2b0u); LOADALL;
L_0041e2b5:;
  /* 0041e2b5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041e2b8 mov eax, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); eax = (u32)(M32(m_)); }
  /* 0041e2bb add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0041e2be inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041e2bf dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041e2c0 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0041e2c3 mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 0041e2c6 jne 0x41e1a1 */ if (!ZF_) goto L_0041e1a1;
  /* 0041e2cc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041e2ce mov dword ptr [ebp - 0x4f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M32(m_) = (u32)(ecx); }
  /* 0041e2d1 mov dword ptr [ebp - 0x4b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb5u); M32(m_) = (u32)(ecx); }
  /* 0041e2d4 mov dword ptr [ebp - 0x47], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb9u); M32(m_) = (u32)(ecx); }
  /* 0041e2d7 mov dword ptr [ebp - 0x43], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbdu); M32(m_) = (u32)(ecx); }
  /* 0041e2da mov dword ptr [ebp - 0x3f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc1u); M32(m_) = (u32)(ecx); }
  /* 0041e2dd mov dword ptr [ebp - 0x3b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); M32(m_) = (u32)(ecx); }
  /* 0041e2e0 mov dword ptr [ebp - 0x37], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc9u); M32(m_) = (u32)(ecx); }
  /* 0041e2e3 mov word ptr [ebp - 0x33], cx */ { const u32 m_ = (u32)(ebp + 0xffffffcdu); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0041e2e7 mov byte ptr [ebp - 0x50], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)(0x0u); }
  /* 0041e2eb mov byte ptr [ebp - 0x31], cl */ { const u32 m_ = (u32)(ebp + 0xffffffcfu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0041e2ee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041e2f0 lea edi, [ebx + 0x114] */ edi = (u32)((u32)(ebx + 0x114u));
L_0041e2f6:;
  /* 0041e2f6 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0041e2f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e2fa push 0x6441e8 */ { u32 v_ = 0x6441e8u; esp -= 4; M32(esp) = v_; }
  /* 0041e2ff lea edx, [ebp - 0x50] */ edx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0041e302 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0041e304 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041e305 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0041e308 call 0x5fe928 */ esp -= 4; M32(esp) = 0x41e30du; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41e308u); RETCHK(0x41e30du, 0x41e308u); LOADALL;
  /* 0041e30d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e310 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0041e313 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e314 lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 0041e31a call 0x403060 */ esp -= 4; M32(esp) = 0x41e31fu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e31au); RETCHK(0x41e31fu, 0x41e31au); LOADALL;
  /* 0041e31f lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 0041e325 mov dword ptr [ebp - 4], 0x1e */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1eu); }
  /* 0041e32c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e32d mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041e330 call 0x5075d0 */ esp -= 4; M32(esp) = 0x41e335u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x41e330u); RETCHK(0x41e335u, 0x41e330u); LOADALL;
  /* 0041e335 lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 0041e33b mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0041e33d mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041e344 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e349u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e344u); RETCHK(0x41e349u, 0x41e344u); LOADALL;
  /* 0041e349 cmp dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e34c je 0x41e389 */ if (ZF_) goto L_0041e389;
  /* 0041e34e lea edx, [ebp - 0x50] */ edx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0041e351 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041e352 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 0041e358 call 0x403060 */ esp -= 4; M32(esp) = 0x41e35du; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41e358u); RETCHK(0x41e35du, 0x41e358u); LOADALL;
  /* 0041e35d mov dword ptr [ebp - 4], 0x1f */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1fu); }
  /* 0041e364 mov esi, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041e367 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e369 lea eax, [ebp - 0xe0] */ eax = (u32)((u32)(ebp + 0xffffff20u));
  /* 0041e36f call 0x50c760 */ esp -= 4; M32(esp) = 0x41e374u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41e36fu); RETCHK(0x41e374u, 0x41e36fu); LOADALL;
  /* 0041e374 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 0041e37a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041e381 call 0x43ee60 */ esp -= 4; M32(esp) = 0x41e386u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x41e381u); RETCHK(0x41e386u, 0x41e381u); LOADALL;
  /* 0041e386 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_0041e389:;
  /* 0041e389 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041e38b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0041e38e cmp eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e391 jl 0x41e2f6 */ if (LT_) goto L_0041e2f6;
  /* 0041e397 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041e39a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041e39c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e39e call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41e3a1u; SAVEALL; call_ind(c, t_); RETCHK(0x41e3a1u, 0x41e39eu); LOADALL; }
  /* 0041e3a1 call 0x41ce10 */ esp -= 4; M32(esp) = 0x41e3a6u; SAVEALL; F_0041ce10(c); ABI_CHECK(0x41ce10u, 0x41e3a1u); RETCHK(0x41e3a6u, 0x41e3a1u); LOADALL;
  /* 0041e3a6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041e3a8 call 0x41c480 */ esp -= 4; M32(esp) = 0x41e3adu; SAVEALL; F_0041c480(c); ABI_CHECK(0x41c480u, 0x41e3a8u); RETCHK(0x41e3adu, 0x41e3a8u); LOADALL;
  /* 0041e3ad call 0x41ce10 */ esp -= 4; M32(esp) = 0x41e3b2u; SAVEALL; F_0041ce10(c); ABI_CHECK(0x41ce10u, 0x41e3adu); RETCHK(0x41e3b2u, 0x41e3adu); LOADALL;
  /* 0041e3b2 mov ecx, 0x11 */ { ecx = (u32)(0x11u); }
  /* 0041e3b7 call 0x41c490 */ esp -= 4; M32(esp) = 0x41e3bcu; SAVEALL; F_0041c490(c); ABI_CHECK(0x41c490u, 0x41e3b7u); RETCHK(0x41e3bcu, 0x41e3b7u); LOADALL;
  /* 0041e3bc mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_0041e3be:;
  /* 0041e3be pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0041e3bf:;
  /* 0041e3bf mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e3c2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e3c9 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0041e3cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e3cd call 0x61af31 */ esp -= 4; M32(esp) = 0x41e3d2u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41e3cdu); RETCHK(0x41e3d2u, 0x41e3cdu); LOADALL;
  /* 0041e3d2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e3d4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e3d5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041e3e0(CPU *c) {
  NATIVE_HOOK(0x41e3e0u) REGS; LOADALL;
L_0041e3e0:;
  /* 0041e3e0 mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041e3e3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041e3e5 jmp dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0041e3f0(CPU *c) {
  NATIVE_HOOK(0x41e3f0u) REGS; LOADALL;
L_0041e3f0:;
  /* 0041e3f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041e3f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e3f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041e3f3 mov esi, edx */ { esi = (u32)(edx); }
  /* 0041e3f5 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0041e3f7 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041e3f9 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041e3fc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041e3fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041e3ff call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41e402u; SAVEALL; call_ind(c, t_); RETCHK(0x41e402u, 0x41e3ffu); LOADALL; }
  /* 0041e402 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041e404 je 0x41e42d */ if (ZF_) goto L_0041e42d;
  /* 0041e406 cmp edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e409 jne 0x41e416 */ if (!ZF_) goto L_0041e416;
  /* 0041e40b mov edi, esi */ { edi = (u32)(esi); }
  /* 0041e40d call 0x41f2e0 */ esp -= 4; M32(esp) = 0x41e412u; SAVEALL; F_0041f2e0(c); ABI_CHECK(0x41f2e0u, 0x41e40du); RETCHK(0x41e412u, 0x41e40du); LOADALL;
  /* 0041e412 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041e413 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e414 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e415 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041e416:;
  /* 0041e416 cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e419 jne 0x41e439 */ if (!ZF_) goto L_0041e439;
  /* 0041e41b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041e41d call 0x41f000 */ esp -= 4; M32(esp) = 0x41e422u; SAVEALL; F_0041f000(c); ABI_CHECK(0x41f000u, 0x41e41du); RETCHK(0x41e422u, 0x41e41du); LOADALL;
  /* 0041e422 mov ecx, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0041e425 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041e427 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041e428 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e429 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e42a jmp dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0041e42d:;
  /* 0041e42d mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0041e42f call 0x41f7c0 */ esp -= 4; M32(esp) = 0x41e434u; SAVEALL; F_0041f7c0(c); ABI_CHECK(0x41f7c0u, 0x41e42fu); RETCHK(0x41e434u, 0x41e42fu); LOADALL;
  /* 0041e434 call 0x41f2a0 */ esp -= 4; M32(esp) = 0x41e439u; SAVEALL; F_0041f2a0(c); ABI_CHECK(0x41f2a0u, 0x41e434u); RETCHK(0x41e439u, 0x41e434u); LOADALL;
L_0041e439:;
  /* 0041e439 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041e43a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e43b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e43c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041e440(CPU *c) {
  NATIVE_HOOK(0x41e440u) REGS; LOADALL;
L_0041e440:;
  /* 0041e440 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041e442 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041e444 call 0x41ead0 */ esp -= 4; M32(esp) = 0x41e449u; SAVEALL; F_0041ead0(c); ABI_CHECK(0x41ead0u, 0x41e444u); RETCHK(0x41e449u, 0x41e444u); LOADALL;
  /* 0041e449 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041e44b call 0x41ef80 */ esp -= 4; M32(esp) = 0x41e450u; SAVEALL; F_0041ef80(c); ABI_CHECK(0x41ef80u, 0x41e44bu); RETCHK(0x41e450u, 0x41e44bu); LOADALL;
  /* 0041e450 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041e453 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e454 call 0x41ce10 */ esp -= 4; M32(esp) = 0x41e459u; SAVEALL; F_0041ce10(c); ABI_CHECK(0x41ce10u, 0x41e454u); RETCHK(0x41e459u, 0x41e454u); LOADALL;
  /* 0041e459 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041e45c mov edx, eax */ { edx = (u32)(eax); }
  /* 0041e45e call 0x41c4a0 */ esp -= 4; M32(esp) = 0x41e463u; SAVEALL; F_0041c4a0(c); ABI_CHECK(0x41c4a0u, 0x41e45eu); RETCHK(0x41e463u, 0x41e45eu); LOADALL;
  /* 0041e463 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041e470(CPU *c) {
  NATIVE_HOOK(0x41e470u) REGS; LOADALL;
L_0041e470:;
  /* 0041e470 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0041e475 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0041e478 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0041e47b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041e480(CPU *c) {
  NATIVE_HOOK(0x41e480u) REGS; LOADALL;
L_0041e480:;
  /* 0041e480 mov ecx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0041e483 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041e485 jmp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0041e490(CPU *c) {
  NATIVE_HOOK(0x41e490u) REGS; LOADALL;
L_0041e490:;
  /* 0041e490 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041e491 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041e493 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041e496 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e497 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041e499 call 0x41e9e0 */ esp -= 4; M32(esp) = 0x41e49eu; SAVEALL; F_0041e9e0(c); ABI_CHECK(0x41e9e0u, 0x41e499u); RETCHK(0x41e49eu, 0x41e499u); LOADALL;
  /* 0041e49e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041e4a0 ja 0x41e4bb */ if (!(CF_|ZF_)) goto L_0041e4bb;
  /* 0041e4a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e4a3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041e4a5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0041e4a7 call 0x41e750 */ esp -= 4; M32(esp) = 0x41e4acu; SAVEALL; F_0041e750(c); ABI_CHECK(0x41e750u, 0x41e4a7u); RETCHK(0x41e4acu, 0x41e4a7u); LOADALL;
  /* 0041e4ac mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041e4af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e4b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e4b1 call 0x41e680 */ esp -= 4; M32(esp) = 0x41e4b6u; SAVEALL; F_0041e680(c); ABI_CHECK(0x41e680u, 0x41e4b1u); RETCHK(0x41e4b6u, 0x41e4b1u); LOADALL;
  /* 0041e4b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e4b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e4b8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0041e4bb:;
  /* 0041e4bb mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0041e4be cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e4c0 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0041e4c3 jbe 0x41e4d2 */ if ((CF_|ZF_)) goto L_0041e4d2;
  /* 0041e4c5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041e4c8 call 0x41e440 */ esp -= 4; M32(esp) = 0x41e4cdu; SAVEALL; F_0041e440(c); ABI_CHECK(0x41e440u, 0x41e4c8u); RETCHK(0x41e4cdu, 0x41e4c8u); LOADALL;
  /* 0041e4cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e4ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e4cf ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0041e4d2:;
  /* 0041e4d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e4d3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041e4d5 call 0x41e750 */ esp -= 4; M32(esp) = 0x41e4dau; SAVEALL; F_0041e750(c); ABI_CHECK(0x41e750u, 0x41e4d5u); RETCHK(0x41e4dau, 0x41e4d5u); LOADALL;
  /* 0041e4da mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041e4dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e4de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e4df call 0x41e680 */ esp -= 4; M32(esp) = 0x41e4e4u; SAVEALL; F_0041e680(c); ABI_CHECK(0x41e680u, 0x41e4dfu); RETCHK(0x41e4e4u, 0x41e4dfu); LOADALL;
  /* 0041e4e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e4e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e4e6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0041e4f0(CPU *c) {
  NATIVE_HOOK(0x41e4f0u) REGS; LOADALL;
L_0041e4f0:;
  /* 0041e4f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041e4f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041e4f3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041e4f9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041e4fb push 0x62829b */ { u32 v_ = 0x62829bu; esp -= 4; M32(esp) = v_; }
  /* 0041e500 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e501 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041e504 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e507 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041e50e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041e50f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e510 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041e511 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041e513 ja 0x41e659 */ if (!(CF_|ZF_)) goto L_0041e659;
  /* 0041e519 jmp dword ptr [eax*4 + 0x41e66c] */ { const u32 m_ = (u32)(eax * 4u + 0x41e66cu); u32 t_ = M32(m_); switch (t_) { case 0x41e520u: goto L_0041e520; case 0x41e604u: goto L_0041e604; case 0x41e619u: goto L_0041e619; case 0x41e62eu: goto L_0041e62e; default: SAVEALL; call_ind(c, t_); return; } }
L_0041e520:;
  /* 0041e520 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041e523 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041e526 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e529 jne 0x41e5ea */ if (!ZF_) goto L_0041e5ea;
  /* 0041e52f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041e531 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041e533 mov edx, esi */ { edx = (u32)(esi); }
  /* 0041e535 call 0x41e3f0 */ esp -= 4; M32(esp) = 0x41e53au; SAVEALL; F_0041e3f0(c); ABI_CHECK(0x41e3f0u, 0x41e535u); RETCHK(0x41e53au, 0x41e535u); LOADALL;
  /* 0041e53a mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 0041e53d mov ebx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 0041e540 cmp ebx, 0x3003 */ { u32 a_ = ebx, b_ = 0x3003u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e546 je 0x41e578 */ if (ZF_) goto L_0041e578;
  /* 0041e548 cmp ebx, 0x3002 */ { u32 a_ = ebx, b_ = 0x3002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e54e je 0x41e578 */ if (ZF_) goto L_0041e578;
  /* 0041e550 call 0x54be20 */ esp -= 4; M32(esp) = 0x41e555u; SAVEALL; F_0054be20(c); ABI_CHECK(0x54be20u, 0x41e550u); RETCHK(0x41e555u, 0x41e550u); LOADALL;
  /* 0041e555 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041e557 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041e559 je 0x41e578 */ if (ZF_) goto L_0041e578;
  /* 0041e55b mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0041e55e push 0x3003 */ { u32 v_ = 0x3003u; esp -= 4; M32(esp) = v_; }
  /* 0041e563 call 0x54be90 */ esp -= 4; M32(esp) = 0x41e568u; SAVEALL; F_0054be90(c); ABI_CHECK(0x54be90u, 0x41e563u); RETCHK(0x41e568u, 0x41e563u); LOADALL;
  /* 0041e568 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0041e56a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041e56c call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41e56fu; SAVEALL; call_ind(c, t_); RETCHK(0x41e56fu, 0x41e56cu); LOADALL; }
  /* 0041e56f mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 0041e572 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e573 call 0x54bf60 */ esp -= 4; M32(esp) = 0x41e578u; SAVEALL; F_0054bf60(c); ABI_CHECK(0x54bf60u, 0x41e573u); RETCHK(0x41e578u, 0x41e573u); LOADALL;
L_0041e578:;
  /* 0041e578 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0041e57b mov al, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041e57e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041e580 je 0x41e5d0 */ if (ZF_) goto L_0041e5d0;
  /* 0041e582 push 0x360 */ { u32 v_ = 0x360u; esp -= 4; M32(esp) = v_; }
  /* 0041e587 call 0x5fe934 */ esp -= 4; M32(esp) = 0x41e58cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41e587u); RETCHK(0x41e58cu, 0x41e587u); LOADALL;
  /* 0041e58c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e58f mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0041e592 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041e594 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0041e59b je 0x41e5a9 */ if (ZF_) goto L_0041e5a9;
  /* 0041e59d mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0041e59f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e5a0 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041e5a2 call 0x4679d0 */ esp -= 4; M32(esp) = 0x41e5a7u; SAVEALL; F_004679d0(c); ABI_CHECK(0x4679d0u, 0x41e5a2u); RETCHK(0x41e5a7u, 0x41e5a2u); LOADALL;
  /* 0041e5a7 jmp 0x41e5ab */ goto L_0041e5ab;
L_0041e5a9:;
  /* 0041e5a9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0041e5ab:;
  /* 0041e5ab push 0x6441d4 */ { u32 v_ = 0x6441d4u; esp -= 4; M32(esp) = v_; }
  /* 0041e5b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e5b1 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041e5b8 call 0x50a070 */ esp -= 4; M32(esp) = 0x41e5bdu; SAVEALL; F_0050a070(c); ABI_CHECK(0x50a070u, 0x41e5b8u); RETCHK(0x41e5bdu, 0x41e5b8u); LOADALL;
  /* 0041e5bd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e5c0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e5c7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041e5c8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e5c9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e5ca mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e5cc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e5cd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0041e5d0:;
  /* 0041e5d0 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0041e5d2 call 0x467cf0 */ esp -= 4; M32(esp) = 0x41e5d7u; SAVEALL; F_00467cf0(c); ABI_CHECK(0x467cf0u, 0x41e5d2u); RETCHK(0x41e5d7u, 0x41e5d2u); LOADALL;
  /* 0041e5d7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e5da mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e5e1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041e5e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e5e3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e5e4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e5e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e5e7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0041e5ea:;
  /* 0041e5ea cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e5ed jne 0x41e659 */ if (!ZF_) goto L_0041e659;
  /* 0041e5ef push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0041e5f4 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0041e5f9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e5fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e5fd push 0x1c4 */ { u32 v_ = 0x1c4u; esp -= 4; M32(esp) = v_; }
  /* 0041e602 jmp 0x41e641 */ goto L_0041e641;
L_0041e604:;
  /* 0041e604 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0041e609 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0041e60e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e610 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e612 push 0x1c5 */ { u32 v_ = 0x1c5u; esp -= 4; M32(esp) = v_; }
  /* 0041e617 jmp 0x41e641 */ goto L_0041e641;
L_0041e619:;
  /* 0041e619 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0041e61e push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0041e623 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e625 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e627 push 0x1c6 */ { u32 v_ = 0x1c6u; esp -= 4; M32(esp) = v_; }
  /* 0041e62c jmp 0x41e641 */ goto L_0041e641;
L_0041e62e:;
  /* 0041e62e push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0041e633 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0041e638 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e63a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e63c push 0x1c7 */ { u32 v_ = 0x1c7u; esp -= 4; M32(esp) = v_; }
L_0041e641:;
  /* 0041e641 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0041e646 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41e64cu; SAVEALL; call_ind(c, t_); RETCHK(0x41e64cu, 0x41e646u); LOADALL; }
  /* 0041e64c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e64d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041e64f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e651 call 0x50b090 */ esp -= 4; M32(esp) = 0x41e656u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x41e651u); RETCHK(0x41e656u, 0x41e651u); LOADALL;
  /* 0041e656 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041e659:;
  /* 0041e659 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e65c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041e65d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e65e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e665 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e666 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e668 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e669 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0041e680(CPU *c) {
  NATIVE_HOOK(0x41e680u) REGS; LOADALL;
L_0041e680:;
  /* 0041e680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041e681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041e683 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041e685 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0041e68a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041e690 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e691 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041e698 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e699 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041e69a mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041e69d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e69e mov esi, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0041e6a1 call 0x5156e0 */ esp -= 4; M32(esp) = 0x41e6a6u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x41e6a1u); RETCHK(0x41e6a6u, 0x41e6a1u); LOADALL;
  /* 0041e6a6 jmp 0x9c5700 */ goto L_009c5700;
L_0041e6ac:;
  /* 0041e6ac cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e6af je 0x41e72f */ if (ZF_) goto L_0041e72f;
  /* 0041e6b1 add ebx, 0x114 */ { u32 a_ = ebx, b_ = 0x114u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0041e6b7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041e6b8 jmp 0x41e6c0 */ goto L_0041e6c0;
L_0041e6c0:;
  /* 0041e6c0 push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 0041e6c5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x41e6cau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41e6c5u); RETCHK(0x41e6cau, 0x41e6c5u); LOADALL;
  /* 0041e6ca mov edi, eax */ { edi = (u32)(eax); }
  /* 0041e6cc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e6cf mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 0041e6d2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041e6d4 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e6d6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041e6d9 je 0x41e70b */ if (ZF_) goto L_0041e70b;
  /* 0041e6db mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 0041e6de mov eax, dword ptr [ebx - 0x44] */ { const u32 m_ = (u32)(ebx + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0041e6e1 cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041e6e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e6e5 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 0041e6e8 sete dl */ { edx = (edx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0041e6eb cmp cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041e6ee mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 0041e6f1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041e6f2 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0041e6f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e6f5 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0041e6f8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041e6f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e6fa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e6fb mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 0041e6fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e6ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041e700 mov edi, dword ptr [ebx - 0x88] */ { const u32 m_ = (u32)(ebx + 0xffffff78u); edi = (u32)(M32(m_)); }
  /* 0041e706 call 0x41cf80 */ esp -= 4; M32(esp) = 0x41e70bu; SAVEALL; F_0041cf80(c); ABI_CHECK(0x41cf80u, 0x41e706u); RETCHK(0x41e70bu, 0x41e706u); LOADALL;
L_0041e70b:;
  /* 0041e70b mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041e70e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041e715 mov edi, dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0041e718 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e719 call 0x515650 */ esp -= 4; M32(esp) = 0x41e71eu; SAVEALL; F_00515650(c); ABI_CHECK(0x515650u, 0x41e719u); RETCHK(0x41e71eu, 0x41e719u); LOADALL;
  /* 0041e71e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041e721 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041e724 add esi, 0x50 */ { u32 a_ = esi, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041e727 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0041e72a cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e72c jne 0x41e6c0 */ if (!ZF_) goto L_0041e6c0;
  /* 0041e72e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0041e72f:;
  /* 0041e72f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e732 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e733 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e734 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e73b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e73d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e73e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_009c5700:;
  /* 009c5700 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c5701 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 009c5704 mov dword ptr [0x9c1400], ebx */ { const u32 m_ = (u32)(0x9c1400u); M32(m_) = (u32)(ebx); }
  /* 009c570a sub esp, 0x70 */ { u32 a_ = esp, b_ = 0x70u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c570d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_009c570f:;
  /* 009c570f lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 009c5712 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c5713 push 0x9c1460 */ { u32 v_ = 0x9c1460u; esp -= 4; M32(esp) = v_; }
  /* 009c5718 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 009c571a lea edx, [esp + 0xc] */ edx = (u32)((u32)(esp + 0xcu));
  /* 009c571e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009c571f call 0x5fe928 */ esp -= 4; M32(esp) = 0x9c5724u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x9c571fu); RETCHK(0x9c5724u, 0x9c571fu); LOADALL;
  /* 009c5724 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c5727 mov eax, esp */ { eax = (u32)(esp); }
  /* 009c5729 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c572a lea ecx, [esp + 0x44] */ ecx = (u32)((u32)(esp + 0x44u));
  /* 009c572e call 0x403060 */ esp -= 4; M32(esp) = 0x9c5733u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9c572eu); RETCHK(0x9c5733u, 0x9c572eu); LOADALL;
  /* 009c5733 lea ecx, [esp + 0x40] */ ecx = (u32)((u32)(esp + 0x40u));
  /* 009c5737 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009c5738 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 009c573b call 0x5075d0 */ esp -= 4; M32(esp) = 0x9c5740u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9c573bu); RETCHK(0x9c5740u, 0x9c573bu); LOADALL;
  /* 009c5740 mov dword ptr [esi*4 + 0x9c1418], eax */ { const u32 m_ = (u32)(esi * 4u + 0x9c1418u); M32(m_) = (u32)(eax); }
  /* 009c5747 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c5749 je 0x9c5754 */ if (ZF_) goto L_009c5754;
  /* 009c574b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c574d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 009c574f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 009c5751 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c5754u; SAVEALL; call_ind(c, t_); RETCHK(0x9c5754u, 0x9c5751u); LOADALL; }
L_009c5754:;
  /* 009c5754 lea ecx, [esp + 0x40] */ ecx = (u32)((u32)(esp + 0x40u));
  /* 009c5758 call 0x43ee60 */ esp -= 4; M32(esp) = 0x9c575du; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9c5758u); RETCHK(0x9c575du, 0x9c5758u); LOADALL;
  /* 009c575d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c575e cmp esi, 0x11 */ { u32 a_ = esi, b_ = 0x11u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c5761 jl 0x9c570f */ if (LT_) goto L_009c570f;
  /* 009c5763 add esp, 0x70 */ { u32 a_ = esp, b_ = 0x70u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c5766 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c5767 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 009c576a mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 009c576d jmp 0x41e6ac */ goto L_0041e6ac;
}

void F_0041e750(CPU *c) {
  NATIVE_HOOK(0x41e750u) REGS; LOADALL;
L_0041e750:;
  /* 0041e750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041e751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041e753 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041e755 push 0x624388 */ { u32 v_ = 0x624388u; esp -= 4; M32(esp) = v_; }
  /* 0041e75a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041e760 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e761 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041e768 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e76b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041e770 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0041e773 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041e775 mov dword ptr [ebp - 0x2f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); M32(m_) = (u32)(eax); }
  /* 0041e778 mov dword ptr [ebp - 0x2b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd5u); M32(m_) = (u32)(eax); }
  /* 0041e77b mov dword ptr [ebp - 0x27], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd9u); M32(m_) = (u32)(eax); }
  /* 0041e77e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041e77f mov dword ptr [ebp - 0x23], eax */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M32(m_) = (u32)(eax); }
  /* 0041e782 mov dword ptr [ebp - 0x1f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M32(m_) = (u32)(eax); }
  /* 0041e785 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e786 mov dword ptr [ebp - 0x1b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M32(m_) = (u32)(eax); }
  /* 0041e789 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e78a mov dword ptr [ebp - 0x17], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(eax); }
  /* 0041e78d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041e78e mov word ptr [ebp - 0x13], ax */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0041e792 push 0x6441cc */ { u32 v_ = 0x6441ccu; esp -= 4; M32(esp) = v_; }
  /* 0041e797 mov byte ptr [ebp - 0x11], al */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041e79a lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041e79d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0041e79f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041e7a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e7a2 mov byte ptr [ebp - 0x30], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041e7a5 call 0x5fe928 */ esp -= 4; M32(esp) = 0x41e7aau; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41e7a5u); RETCHK(0x41e7aau, 0x41e7a5u); LOADALL;
  /* 0041e7aa lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041e7ad add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e7b0 mov dword ptr [ebp - 0x34], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0xfu); }
  /* 0041e7b7 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 0041e7ba mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041e7bd lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0041e7c0:;
  /* 0041e7c0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041e7c2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041e7c3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041e7c5 jne 0x41e7c0 */ if (!ZF_) goto L_0041e7c0;
  /* 0041e7c7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041e7c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e7ca lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041e7cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e7ce lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0041e7d1 call 0x404420 */ esp -= 4; M32(esp) = 0x41e7d6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41e7d1u); RETCHK(0x41e7d6u, 0x41e7d1u); LOADALL;
  /* 0041e7d6 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041e7d9 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041e7dc mov esi, dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); esi = (u32)(M32(m_)); }
  /* 0041e7df lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0041e7e2 call 0x5224b0 */ esp -= 4; M32(esp) = 0x41e7e7u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x41e7e2u); RETCHK(0x41e7e7u, 0x41e7e2u); LOADALL;
  /* 0041e7e7 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e7eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e7ec pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e7ed jb 0x41e7fb */ if (CF_) goto L_0041e7fb;
  /* 0041e7ef mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0041e7f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e7f3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41e7f8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41e7f3u); RETCHK(0x41e7f8u, 0x41e7f3u); LOADALL;
  /* 0041e7f8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041e7fb:;
  /* 0041e7fb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e7fe mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e805 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0041e808 call 0x61af31 */ esp -= 4; M32(esp) = 0x41e80du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41e808u); RETCHK(0x41e80du, 0x41e808u); LOADALL;
  /* 0041e80d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e80f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e810 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041e820(CPU *c) {
  NATIVE_HOOK(0x41e820u) REGS; LOADALL;
L_0041e820:;
  /* 0041e820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041e821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041e823 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041e825 push 0x626238 */ { u32 v_ = 0x626238u; esp -= 4; M32(esp) = v_; }
  /* 0041e82a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041e830 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e831 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041e838 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e83b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e83c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041e83e mov eax, esi */ { eax = (u32)(esi); }
  /* 0041e840 call 0x41f840 */ esp -= 4; M32(esp) = 0x41e845u; SAVEALL; F_0041f840(c); ABI_CHECK(0x41f840u, 0x41e840u); RETCHK(0x41e845u, 0x41e840u); LOADALL;
  /* 0041e845 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041e847 je 0x41e887 */ if (ZF_) goto L_0041e887;
  /* 0041e849 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041e84c cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e84f ja 0x41e86d */ if (!(CF_|ZF_)) goto L_0041e86d;
  /* 0041e851 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041e854 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041e857 call 0x41e440 */ esp -= 4; M32(esp) = 0x41e85cu; SAVEALL; F_0041e440(c); ABI_CHECK(0x41e440u, 0x41e857u); RETCHK(0x41e85cu, 0x41e857u); LOADALL;
  /* 0041e85c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041e85e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e85f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e862 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e869 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e86b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e86c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041e86d:;
  /* 0041e86d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041e86e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041e871 call 0x41e440 */ esp -= 4; M32(esp) = 0x41e876u; SAVEALL; F_0041e440(c); ABI_CHECK(0x41e440u, 0x41e871u); RETCHK(0x41e876u, 0x41e871u); LOADALL;
  /* 0041e876 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041e878 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e879 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e87c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e883 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e885 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e886 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041e887:;
  /* 0041e887 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041e888 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041e88a mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0041e88d mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041e890 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0041e893 lea ecx, [esi + 0x74] */ ecx = (u32)((u32)(esi + 0x74u));
  /* 0041e896 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0041e899 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041e89c call 0x41d950 */ esp -= 4; M32(esp) = 0x41e8a1u; SAVEALL; F_0041d950(c); ABI_CHECK(0x41d950u, 0x41e89cu); RETCHK(0x41e8a1u, 0x41e89cu); LOADALL;
  /* 0041e8a1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041e8a3 je 0x41e8da */ if (ZF_) goto L_0041e8da;
  /* 0041e8a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041e8a6 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0041e8a9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041e8aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e8ab call 0x41f9c0 */ esp -= 4; M32(esp) = 0x41e8b0u; SAVEALL; F_0041f9c0(c); ABI_CHECK(0x41f9c0u, 0x41e8abu); RETCHK(0x41e8b0u, 0x41e8abu); LOADALL;
  /* 0041e8b0 mov edi, esi */ { edi = (u32)(esi); }
  /* 0041e8b2 call 0x41fad0 */ esp -= 4; M32(esp) = 0x41e8b7u; SAVEALL; F_0041fad0(c); ABI_CHECK(0x41fad0u, 0x41e8b2u); RETCHK(0x41e8b7u, 0x41e8b2u); LOADALL;
  /* 0041e8b7 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0041e8ba cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e8bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041e8bd je 0x41e8c8 */ if (ZF_) goto L_0041e8c8;
  /* 0041e8bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e8c0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41e8c5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41e8c0u); RETCHK(0x41e8c5u, 0x41e8c0u); LOADALL;
  /* 0041e8c5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041e8c8:;
  /* 0041e8c8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e8c9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041e8cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e8cc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e8cf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e8d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e8d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e8d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041e8da:;
  /* 0041e8da mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0041e8dd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e8df je 0x41e8ea */ if (ZF_) goto L_0041e8ea;
  /* 0041e8e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e8e2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41e8e7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41e8e2u); RETCHK(0x41e8e7u, 0x41e8e2u); LOADALL;
  /* 0041e8e7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041e8ea:;
  /* 0041e8ea mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e8ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e8ee xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041e8f0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e8f1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e8f8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e8fa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e8fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041e900(CPU *c) {
  NATIVE_HOOK(0x41e900u) REGS; LOADALL;
L_0041e900:;
  /* 0041e900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041e901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041e903 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041e905 push 0x626238 */ { u32 v_ = 0x626238u; esp -= 4; M32(esp) = v_; }
  /* 0041e90a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041e910 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e911 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041e918 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e91b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e91c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0041e91e mov eax, esi */ { eax = (u32)(esi); }
  /* 0041e920 call 0x41f840 */ esp -= 4; M32(esp) = 0x41e925u; SAVEALL; F_0041f840(c); ABI_CHECK(0x41f840u, 0x41e920u); RETCHK(0x41e925u, 0x41e920u); LOADALL;
  /* 0041e925 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041e927 je 0x41e968 */ if (ZF_) goto L_0041e968;
  /* 0041e929 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041e92c cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e92f jb 0x41e94e */ if (CF_) goto L_0041e94e;
  /* 0041e931 mov dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x1u); }
  /* 0041e938 call 0x41e440 */ esp -= 4; M32(esp) = 0x41e93du; SAVEALL; F_0041e440(c); ABI_CHECK(0x41e440u, 0x41e938u); RETCHK(0x41e93du, 0x41e938u); LOADALL;
  /* 0041e93d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041e93f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e940 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e943 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e94a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e94c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e94d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041e94e:;
  /* 0041e94e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041e94f mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041e952 call 0x41e440 */ esp -= 4; M32(esp) = 0x41e957u; SAVEALL; F_0041e440(c); ABI_CHECK(0x41e440u, 0x41e952u); RETCHK(0x41e957u, 0x41e952u); LOADALL;
  /* 0041e957 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041e959 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e95a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e95d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e964 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e966 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e967 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041e968:;
  /* 0041e968 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041e969 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041e96b mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0041e96e mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041e971 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0041e974 lea ecx, [esi + 0x74] */ ecx = (u32)((u32)(esi + 0x74u));
  /* 0041e977 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0041e97a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041e97d call 0x41d920 */ esp -= 4; M32(esp) = 0x41e982u; SAVEALL; F_0041d920(c); ABI_CHECK(0x41d920u, 0x41e97du); RETCHK(0x41e982u, 0x41e97du); LOADALL;
  /* 0041e982 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041e984 je 0x41e9bb */ if (ZF_) goto L_0041e9bb;
  /* 0041e986 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041e987 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0041e98a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e98b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e98c call 0x41f9c0 */ esp -= 4; M32(esp) = 0x41e991u; SAVEALL; F_0041f9c0(c); ABI_CHECK(0x41f9c0u, 0x41e98cu); RETCHK(0x41e991u, 0x41e98cu); LOADALL;
  /* 0041e991 mov edi, esi */ { edi = (u32)(esi); }
  /* 0041e993 call 0x41fad0 */ esp -= 4; M32(esp) = 0x41e998u; SAVEALL; F_0041fad0(c); ABI_CHECK(0x41fad0u, 0x41e993u); RETCHK(0x41e998u, 0x41e993u); LOADALL;
  /* 0041e998 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0041e99b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e99d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041e99e je 0x41e9a9 */ if (ZF_) goto L_0041e9a9;
  /* 0041e9a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e9a1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41e9a6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41e9a1u); RETCHK(0x41e9a6u, 0x41e9a1u); LOADALL;
  /* 0041e9a6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041e9a9:;
  /* 0041e9a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e9aa mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041e9ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e9ad mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e9b0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e9b7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e9b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e9ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041e9bb:;
  /* 0041e9bb mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0041e9be cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041e9c0 je 0x41e9cb */ if (ZF_) goto L_0041e9cb;
  /* 0041e9c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041e9c3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41e9c8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41e9c3u); RETCHK(0x41e9c8u, 0x41e9c3u); LOADALL;
  /* 0041e9c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041e9cb:;
  /* 0041e9cb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041e9ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041e9cf xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041e9d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041e9d2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041e9d9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041e9db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041e9dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041e9e0(CPU *c) {
  NATIVE_HOOK(0x41e9e0u) REGS; LOADALL;
L_0041e9e0:;
  /* 0041e9e0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0041e9e2 mov ecx, 0x11 */ { ecx = (u32)(0x11u); }
  /* 0041e9e7 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x41e9e7u); eax = q_; edx = r_; }
  /* 0041e9e9 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041e9eb je 0x41e9ee */ if (ZF_) goto L_0041e9ee;
  /* 0041e9ed inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0041e9ee:;
  /* 0041e9ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041e9f0(CPU *c) {
  NATIVE_HOOK(0x41e9f0u) REGS; LOADALL;
L_0041e9f0:;
  /* 0041e9f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041e9f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041e9f3 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041e9f6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041e9f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041e9f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041e9f9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e9fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e9fd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041e9ff mov edi, eax */ { edi = (u32)(eax); }
  /* 0041ea01 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ea03 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041ea06 call 0x52cec0 */ esp -= 4; M32(esp) = 0x41ea0bu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x41ea06u); RETCHK(0x41ea0bu, 0x41ea06u); LOADALL;
  /* 0041ea0b mov eax, edi */ { eax = (u32)(edi); }
  /* 0041ea0d call 0x41f840 */ esp -= 4; M32(esp) = 0x41ea12u; SAVEALL; F_0041f840(c); ABI_CHECK(0x41f840u, 0x41ea0du); RETCHK(0x41ea12u, 0x41ea0du); LOADALL;
  /* 0041ea12 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ea14 je 0x41ea1e */ if (ZF_) goto L_0041ea1e;
  /* 0041ea16 mov esi, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0041ea19 mov ebx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ebx = (u32)(M32(m_)); }
  /* 0041ea1c jmp 0x41ea33 */ goto L_0041ea33;
L_0041ea1e:;
  /* 0041ea1e mov eax, edi */ { eax = (u32)(edi); }
  /* 0041ea20 call 0x41f830 */ esp -= 4; M32(esp) = 0x41ea25u; SAVEALL; F_0041f830(c); ABI_CHECK(0x41f830u, 0x41ea20u); RETCHK(0x41ea25u, 0x41ea20u); LOADALL;
  /* 0041ea25 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ea27 je 0x41eab3 */ if (ZF_) goto L_0041eab3;
  /* 0041ea2d mov esi, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); esi = (u32)(M32(m_)); }
  /* 0041ea30 mov ebx, dword ptr [edi + 0x60] */ { const u32 m_ = (u32)(edi + 0x60u); ebx = (u32)(M32(m_)); }
L_0041ea33:;
  /* 0041ea33 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041ea35 call 0x5159a0 */ esp -= 4; M32(esp) = 0x41ea3au; SAVEALL; F_005159a0(c); ABI_CHECK(0x5159a0u, 0x41ea35u); RETCHK(0x41ea3au, 0x41ea35u); LOADALL;
  /* 0041ea3a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ea3c jl 0x41eab3 */ if (LT_) goto L_0041eab3;
  /* 0041ea3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ea3f lea edi, [ebp - 0x20] */ edi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041ea42 call 0x5153e0 */ esp -= 4; M32(esp) = 0x41ea47u; SAVEALL; F_005153e0(c); ABI_CHECK(0x5153e0u, 0x41ea42u); RETCHK(0x41ea47u, 0x41ea42u); LOADALL;
  /* 0041ea47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ea48 mov esi, edi */ { esi = (u32)(edi); }
  /* 0041ea4a call 0x52cf90 */ esp -= 4; M32(esp) = 0x41ea4fu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x41ea4au); RETCHK(0x41ea4fu, 0x41ea4au); LOADALL;
  /* 0041ea4f mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0041ea51 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ea54 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041ea57 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041ea58 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041ea5a call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ea5du; SAVEALL; call_ind(c, t_); RETCHK(0x41ea5du, 0x41ea5au); LOADALL; }
  /* 0041ea5d fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0041ea60 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0041ea63 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0041ea69 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041ea6b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ea6e je 0x41ea78 */ if (ZF_) goto L_0041ea78;
  /* 0041ea70 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041ea72 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0041ea75 fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041ea78:;
  /* 0041ea78 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0041ea7b fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0041ea7e fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0041ea84 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041ea86 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ea89 je 0x41ea93 */ if (ZF_) goto L_0041ea93;
  /* 0041ea8b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041ea8d fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0041ea90 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0041ea93:;
  /* 0041ea93 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 0041ea96 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 0041ea99 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0041ea9c fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0041ea9e mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0041eaa1 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0041eaa4 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041eaa7 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0041eaaa fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0041eaac fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0041eaaf fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0041eab1 fstp st(0) */ ST(0) = ST(0); FPOP();
L_0041eab3:;
  /* 0041eab3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041eab6 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041eab9 call 0x52cea0 */ esp -= 4; M32(esp) = 0x41eabeu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x41eab9u); RETCHK(0x41eabeu, 0x41eab9u); LOADALL;
  /* 0041eabe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041eabf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041eac0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041eac1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041eac3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041eac4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041ead0(CPU *c) {
  NATIVE_HOOK(0x41ead0u) REGS; LOADALL;
L_0041ead0:;
  /* 0041ead0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ead1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ead3 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ead6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ead8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041ead9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041eadb je 0x41ebcb */ if (ZF_) goto L_0041ebcb;
  /* 0041eae1 mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0041eae4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041eae5 call 0x5159a0 */ esp -= 4; M32(esp) = 0x41eaeau; SAVEALL; F_005159a0(c); ABI_CHECK(0x5159a0u, 0x41eae5u); RETCHK(0x41eaeau, 0x41eae5u); LOADALL;
  /* 0041eaea mov esi, eax */ { esi = (u32)(eax); }
  /* 0041eaec test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041eaee jl 0x41ebb9 */ if (LT_) goto L_0041ebb9;
  /* 0041eaf4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041eaf5 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0041eaf8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041eaf9 mov eax, edi */ { eax = (u32)(edi); }
  /* 0041eafb call 0x41e9f0 */ esp -= 4; M32(esp) = 0x41eb00u; SAVEALL; F_0041e9f0(c); ABI_CHECK(0x41e9f0u, 0x41eafbu); RETCHK(0x41eb00u, 0x41eafbu); LOADALL;
  /* 0041eb00 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041eb03 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041eb05 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0041eb08 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041eb09 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41eb0cu; SAVEALL; call_ind(c, t_); RETCHK(0x41eb0cu, 0x41eb09u); LOADALL; }
  /* 0041eb0c mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041eb0f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041eb11 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041eb13 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41eb16u; SAVEALL; call_ind(c, t_); RETCHK(0x41eb16u, 0x41eb13u); LOADALL; }
  /* 0041eb16 mov edx, esi */ { edx = (u32)(esi); }
  /* 0041eb18 mov esi, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0041eb1b call 0x5156c0 */ esp -= 4; M32(esp) = 0x41eb20u; SAVEALL; F_005156c0(c); ABI_CHECK(0x5156c0u, 0x41eb1bu); RETCHK(0x41eb20u, 0x41eb1bu); LOADALL;
  /* 0041eb20 lea esi, [eax + 8] */ esi = (u32)((u32)(eax + 0x8u));
  /* 0041eb23 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041eb25 call 0x41ef90 */ esp -= 4; M32(esp) = 0x41eb2au; SAVEALL; F_0041ef90(c); ABI_CHECK(0x41ef90u, 0x41eb25u); RETCHK(0x41eb2au, 0x41eb25u); LOADALL;
  /* 0041eb2a mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0041eb2c test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041eb2e mov byte ptr [ebp - 1], bl */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041eb31 jne 0x41eb45 */ if (!ZF_) goto L_0041eb45;
  /* 0041eb33 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0041eb35 call 0x41efc0 */ esp -= 4; M32(esp) = 0x41eb3au; SAVEALL; F_0041efc0(c); ABI_CHECK(0x41efc0u, 0x41eb35u); RETCHK(0x41eb3au, 0x41eb35u); LOADALL;
  /* 0041eb3a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041eb3c mov bl, byte ptr [ebp - 1] */ { const u32 m_ = (u32)(ebp + 0xffffffffu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041eb3f mov byte ptr [ebp - 2], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)(0x1u); }
  /* 0041eb43 jne 0x41eb49 */ if (!ZF_) goto L_0041eb49;
L_0041eb45:;
  /* 0041eb45 mov byte ptr [ebp - 2], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)(0x0u); }
L_0041eb49:;
  /* 0041eb49 mov eax, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); eax = (u32)(M32(m_)); }
  /* 0041eb4c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041eb4e je 0x41eb66 */ if (ZF_) goto L_0041eb66;
  /* 0041eb50 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041eb52 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041eb54 je 0x41eb5f */ if (ZF_) goto L_0041eb5f;
  /* 0041eb56 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041eb58 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041eb5a call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41eb5du; SAVEALL; call_ind(c, t_); RETCHK(0x41eb5du, 0x41eb5au); LOADALL; }
  /* 0041eb5d jmp 0x41eb66 */ goto L_0041eb66;
L_0041eb5f:;
  /* 0041eb5f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041eb61 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041eb63 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41eb66u; SAVEALL; call_ind(c, t_); RETCHK(0x41eb66u, 0x41eb63u); LOADALL; }
L_0041eb66:;
  /* 0041eb66 mov eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); eax = (u32)(M32(m_)); }
  /* 0041eb69 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041eb6b je 0x41eb8e */ if (ZF_) goto L_0041eb8e;
  /* 0041eb6d test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041eb6f jne 0x41eb84 */ if (!ZF_) goto L_0041eb84;
  /* 0041eb71 mov al, byte ptr [ebp - 2] */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041eb74 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041eb76 jne 0x41eb84 */ if (!ZF_) goto L_0041eb84;
  /* 0041eb78 mov ecx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 0041eb7b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041eb7d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041eb7f call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41eb82u; SAVEALL; call_ind(c, t_); RETCHK(0x41eb82u, 0x41eb7fu); LOADALL; }
  /* 0041eb82 jmp 0x41eb8e */ goto L_0041eb8e;
L_0041eb84:;
  /* 0041eb84 mov ecx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 0041eb87 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041eb89 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041eb8b call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41eb8eu; SAVEALL; call_ind(c, t_); RETCHK(0x41eb8eu, 0x41eb8bu); LOADALL; }
L_0041eb8e:;
  /* 0041eb8e jmp 0x9c1109 */ goto L_009c1109;
L_0041eb93:;
  /* 0041eb93 je 0x41eba4 */ if (ZF_) goto L_0041eba4;
  /* 0041eb95 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041eb97 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041eb99 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041eb9b je 0x41ebab */ if (ZF_) goto L_0041ebab;
  /* 0041eb9d mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0041eb9f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041eba1 call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41eba4u; SAVEALL; call_ind(c, t_); RETCHK(0x41eba4u, 0x41eba1u); LOADALL; }
L_0041eba4:;
  /* 0041eba4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041eba5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041eba6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041eba7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041eba9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ebaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041ebab:;
  /* 0041ebab mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0041ebad push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041ebaf call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ebb2u; SAVEALL; call_ind(c, t_); RETCHK(0x41ebb2u, 0x41ebafu); LOADALL; }
  /* 0041ebb2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041ebb3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041ebb4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041ebb5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041ebb7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ebb8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041ebb9:;
  /* 0041ebb9 mov edi, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); edi = (u32)(M32(m_)); }
  /* 0041ebbc mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0041ebbe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ebc0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041ebc2 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ebc5u; SAVEALL; call_ind(c, t_); RETCHK(0x41ebc5u, 0x41ebc2u); LOADALL; }
  /* 0041ebc5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041ebc6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041ebc7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041ebc9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ebca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041ebcb:;
  /* 0041ebcb mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041ebce mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041ebd0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ebd2 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ebd5u; SAVEALL; call_ind(c, t_); RETCHK(0x41ebd5u, 0x41ebd2u); LOADALL; }
  /* 0041ebd5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041ebd6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041ebd8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ebd9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c1109:;
  /* 009c1109 mov ecx, dword ptr [0x9c1080] */ { const u32 m_ = (u32)(0x9c1080u); ecx = (u32)(M32(m_)); }
  /* 009c110f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1111 je 0x9c1139 */ if (ZF_) goto L_009c1139;
  /* 009c1113 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c1114 mov esi, esp */ { esi = (u32)(esp); }
  /* 009c1116 movzx eax, byte ptr [0x9c1084] */ { const u32 m_ = (u32)(0x9c1084u); eax = (u32)(M8(m_)); }
  /* 009c111d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c111e mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c1120 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1123u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1123u, 0x9c1120u); LOADALL; }
  /* 009c1123 mov ecx, dword ptr [0x9c1080] */ { const u32 m_ = (u32)(0x9c1080u); ecx = (u32)(M32(m_)); }
  /* 009c1129 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c112b test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009c112d sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 009c1130 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c1131 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009c1133 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1136u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1136u, 0x9c1133u); LOADALL; }
  /* 009c1136 mov esp, esi */ { esp = (u32)(esi); }
  /* 009c1138 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_009c1139:;
  /* 009c1139 mov eax, dword ptr [edi + 0x6c] */ { const u32 m_ = (u32)(edi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 009c113c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c113e jmp 0x41eb93 */ goto L_0041eb93;
}

void F_0041ebe0(CPU *c) {
  NATIVE_HOOK(0x41ebe0u) REGS; LOADALL;
L_0041ebe0:;
  /* 0041ebe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ebe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ebe3 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0041ebe6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041ebe9 mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 0041ebec mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041ebef mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0041ebf2 mov dword ptr [eax + 0x20], edx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(edx); }
  /* 0041ebf5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ebf6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0041ec00(CPU *c) {
  NATIVE_HOOK(0x41ec00u) REGS; LOADALL;
L_0041ec00:;
  /* 0041ec00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ec01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ec03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041ec05 push 0x61bb58 */ { u32 v_ = 0x61bb58u; esp -= 4; M32(esp) = v_; }
  /* 0041ec0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041ec10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ec11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041ec18 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ec1b mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0041ec1e mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0041ec21 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0041ec24 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0041ec27 mov dword ptr [ebp - 0x24], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x1u); }
  /* 0041ec2e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041ec30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ec31 call dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ec34u; SAVEALL; call_ind(c, t_); RETCHK(0x41ec34u, 0x41ec31u); LOADALL; }
  /* 0041ec34 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0041ec37 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ec39 je 0x41ec42 */ if (ZF_) goto L_0041ec42;
  /* 0041ec3b mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041ec3d call 0x506340 */ esp -= 4; M32(esp) = 0x41ec42u; SAVEALL; F_00506340(c); ABI_CHECK(0x506340u, 0x41ec3du); RETCHK(0x41ec42u, 0x41ec3du); LOADALL;
L_0041ec42:;
  /* 0041ec42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ec43 mov esi, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0041ec46 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041ec48 call 0x5159a0 */ esp -= 4; M32(esp) = 0x41ec4du; SAVEALL; F_005159a0(c); ABI_CHECK(0x5159a0u, 0x41ec48u); RETCHK(0x41ec4du, 0x41ec48u); LOADALL;
  /* 0041ec4d mov edx, eax */ { edx = (u32)(eax); }
  /* 0041ec4f call 0x5156c0 */ esp -= 4; M32(esp) = 0x41ec54u; SAVEALL; F_005156c0(c); ABI_CHECK(0x5156c0u, 0x41ec4fu); RETCHK(0x41ec54u, 0x41ec4fu); LOADALL;
  /* 0041ec54 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041ec56 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ec58 je 0x41ecbc */ if (ZF_) goto L_0041ecbc;
  /* 0041ec5a mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0041ec5d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ec5f je 0x41ec68 */ if (ZF_) goto L_0041ec68;
  /* 0041ec61 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041ec63 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041ec65 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ec68u; SAVEALL; call_ind(c, t_); RETCHK(0x41ec68u, 0x41ec65u); LOADALL; }
L_0041ec68:;
  /* 0041ec68 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0041ec6b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ec6d je 0x41ecbc */ if (ZF_) goto L_0041ecbc;
  /* 0041ec6f add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041ec72 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ec73 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0041ec76 call 0x403060 */ esp -= 4; M32(esp) = 0x41ec7bu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x41ec76u); RETCHK(0x41ec7bu, 0x41ec76u); LOADALL;
  /* 0041ec7b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0041ec82 mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0041ec85 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041ec87 lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0041ec8a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041ec8b call dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ec91u; SAVEALL; call_ind(c, t_); RETCHK(0x41ec91u, 0x41ec8bu); LOADALL; }
  /* 0041ec91 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041ec98 cmp dword ptr [ebp - 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ec9c jb 0x41ecaa */ if (CF_) goto L_0041ecaa;
  /* 0041ec9e mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 0041eca1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041eca2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41eca7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41eca2u); RETCHK(0x41eca7u, 0x41eca2u); LOADALL;
  /* 0041eca7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041ecaa:;
  /* 0041ecaa mov dword ptr [ebp - 0x28], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0xfu); }
  /* 0041ecb1 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 0041ecb8 mov byte ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)(0x0u); }
L_0041ecbc:;
  /* 0041ecbc xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041ecbe xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041ecc0 mov edx, edi */ { edx = (u32)(edi); }
  /* 0041ecc2 call 0x41e3f0 */ esp -= 4; M32(esp) = 0x41ecc7u; SAVEALL; F_0041e3f0(c); ABI_CHECK(0x41e3f0u, 0x41ecc2u); RETCHK(0x41ecc7u, 0x41ecc2u); LOADALL;
  /* 0041ecc7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041ecca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041eccb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041ecd2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041ecd4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ecd5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041ece0(CPU *c) {
  NATIVE_HOOK(0x41ece0u) REGS; LOADALL;
L_0041ece0:;
  /* 0041ece0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ece1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ece3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ece6 mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0041ece9 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0041ecec mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0041ecef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ecf0 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0041ecf3 mov dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x1u); }
  /* 0041ecfa mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041ecfc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ecfd call dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ed00u; SAVEALL; call_ind(c, t_); RETCHK(0x41ed00u, 0x41ecfdu); LOADALL; }
  /* 0041ed00 mov esi, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0041ed03 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041ed05 call 0x5159a0 */ esp -= 4; M32(esp) = 0x41ed0au; SAVEALL; F_005159a0(c); ABI_CHECK(0x5159a0u, 0x41ed05u); RETCHK(0x41ed0au, 0x41ed05u); LOADALL;
  /* 0041ed0a mov edx, eax */ { edx = (u32)(eax); }
  /* 0041ed0c call 0x5156c0 */ esp -= 4; M32(esp) = 0x41ed11u; SAVEALL; F_005156c0(c); ABI_CHECK(0x5156c0u, 0x41ed0cu); RETCHK(0x41ed11u, 0x41ed0cu); LOADALL;
  /* 0041ed11 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ed13 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041ed14 je 0x41ed2a */ if (ZF_) goto L_0041ed2a;
  /* 0041ed16 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ed19 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0041ed1e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ed1f call 0x404690 */ esp -= 4; M32(esp) = 0x41ed24u; SAVEALL; F_00404690(c); ABI_CHECK(0x404690u, 0x41ed1fu); RETCHK(0x41ed24u, 0x41ed1fu); LOADALL;
  /* 0041ed24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ed25 call 0x432c30 */ esp -= 4; M32(esp) = 0x41ed2au; SAVEALL; F_00432c30(c); ABI_CHECK(0x432c30u, 0x41ed25u); RETCHK(0x41ed2au, 0x41ed25u); LOADALL;
L_0041ed2a:;
  /* 0041ed2a mov ecx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 0041ed2d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041ed2f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ed31 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ed34u; SAVEALL; call_ind(c, t_); RETCHK(0x41ed34u, 0x41ed31u); LOADALL; }
  /* 0041ed34 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041ed36 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ed37 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041ed40(CPU *c) {
  NATIVE_HOOK(0x41ed40u) REGS; LOADALL;
L_0041ed40:;
  /* 0041ed40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041ed41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041ed43 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ed45 call 0x4019a0 */ esp -= 4; M32(esp) = 0x41ed4au; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x41ed45u); RETCHK(0x41ed4au, 0x41ed45u); LOADALL;
  /* 0041ed4a mov ecx, dword ptr [eax + 0xb18] */ { const u32 m_ = (u32)(eax + 0xb18u); ecx = (u32)(M32(m_)); }
  /* 0041ed50 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ed53 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ed56 je 0x41ed87 */ if (ZF_) goto L_0041ed87;
  /* 0041ed58 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0041ed5d push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0041ed62 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ed64 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ed66 push 0x268 */ { u32 v_ = 0x268u; esp -= 4; M32(esp) = v_; }
  /* 0041ed6b push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0041ed70 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ed76u; SAVEALL; call_ind(c, t_); RETCHK(0x41ed76u, 0x41ed70u); LOADALL; }
  /* 0041ed76 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ed77 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041ed79 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ed7b call 0x50b090 */ esp -= 4; M32(esp) = 0x41ed80u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x41ed7bu); RETCHK(0x41ed80u, 0x41ed7bu); LOADALL;
  /* 0041ed80 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ed83 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ed84 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0041ed87:;
  /* 0041ed87 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041ed8a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ed8b mov esi, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0041ed8e mov eax, esi */ { eax = (u32)(esi); }
  /* 0041ed90 call 0x5159a0 */ esp -= 4; M32(esp) = 0x41ed95u; SAVEALL; F_005159a0(c); ABI_CHECK(0x5159a0u, 0x41ed90u); RETCHK(0x41ed95u, 0x41ed90u); LOADALL;
  /* 0041ed95 mov edx, eax */ { edx = (u32)(eax); }
  /* 0041ed97 call 0x5156c0 */ esp -= 4; M32(esp) = 0x41ed9cu; SAVEALL; F_005156c0(c); ABI_CHECK(0x5156c0u, 0x41ed97u); RETCHK(0x41ed9cu, 0x41ed97u); LOADALL;
  /* 0041ed9c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ed9e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041ed9f je 0x41edb0 */ if (ZF_) goto L_0041edb0;
  /* 0041eda1 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041eda4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041eda5 call 0x41ce10 */ esp -= 4; M32(esp) = 0x41edaau; SAVEALL; F_0041ce10(c); ABI_CHECK(0x41ce10u, 0x41eda5u); RETCHK(0x41edaau, 0x41eda5u); LOADALL;
  /* 0041edaa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041edab call 0x41c7a0 */ esp -= 4; M32(esp) = 0x41edb0u; SAVEALL; F_0041c7a0(c); ABI_CHECK(0x41c7a0u, 0x41edabu); RETCHK(0x41edb0u, 0x41edabu); LOADALL;
L_0041edb0:;
  /* 0041edb0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041edb1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041edc0(CPU *c) {
  NATIVE_HOOK(0x41edc0u) REGS; LOADALL;
L_0041edc0:;
  /* 0041edc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041edc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041edc3 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041edc6 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0041edc9 fadd dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041edcc fst dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); MF32(m_) = (float)ST(0); }
  /* 0041edcf fcomp dword ptr [0x656ea0] */ { const u32 m_ = (u32)(0x656ea0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0041edd5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041edd7 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041edda jne 0x41edea */ if (!ZF_) goto L_0041edea;
  /* 0041eddc mov eax, esi */ { eax = (u32)(esi); }
  /* 0041edde mov dword ptr [esi + 0x70], 0 */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(0x0u); }
  /* 0041ede5 call 0x41ef60 */ esp -= 4; M32(esp) = 0x41edeau; SAVEALL; F_0041ef60(c); ABI_CHECK(0x41ef60u, 0x41ede5u); RETCHK(0x41edeau, 0x41ede5u); LOADALL;
L_0041edea:;
  /* 0041edea fld dword ptr [0x9b8a5c] */ { const u32 m_ = (u32)(0x9b8a5cu); FPUSH((double)MF32(m_)); }
  /* 0041edf0 fadd dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041edf3 fst dword ptr [0x9b8a5c] */ { const u32 m_ = (u32)(0x9b8a5cu); MF32(m_) = (float)ST(0); }
  /* 0041edf9 fcomp dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0041edff fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041ee01 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ee04 jne 0x41ee36 */ if (!ZF_) goto L_0041ee36;
  /* 0041ee06 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041ee08 mov dword ptr [0x9b8a5c], 0 */ { const u32 m_ = (u32)(0x9b8a5cu); M32(m_) = (u32)(0x0u); }
  /* 0041ee12 call 0x41f830 */ esp -= 4; M32(esp) = 0x41ee17u; SAVEALL; F_0041f830(c); ABI_CHECK(0x41f830u, 0x41ee12u); RETCHK(0x41ee17u, 0x41ee12u); LOADALL;
  /* 0041ee17 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ee19 je 0x41ee36 */ if (ZF_) goto L_0041ee36;
  /* 0041ee1b call 0x404690 */ esp -= 4; M32(esp) = 0x41ee20u; SAVEALL; F_00404690(c); ABI_CHECK(0x404690u, 0x41ee1bu); RETCHK(0x41ee20u, 0x41ee1bu); LOADALL;
  /* 0041ee20 mov cl, byte ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041ee23 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ee25 je 0x41ee36 */ if (ZF_) goto L_0041ee36;
  /* 0041ee27 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ee28 call 0x41f880 */ esp -= 4; M32(esp) = 0x41ee2du; SAVEALL; F_0041f880(c); ABI_CHECK(0x41f880u, 0x41ee28u); RETCHK(0x41ee2du, 0x41ee28u); LOADALL;
  /* 0041ee2d call 0x404690 */ esp -= 4; M32(esp) = 0x41ee32u; SAVEALL; F_00404690(c); ABI_CHECK(0x404690u, 0x41ee2du); RETCHK(0x41ee32u, 0x41ee2du); LOADALL;
  /* 0041ee32 mov byte ptr [eax + 0x58], 0 */ { const u32 m_ = (u32)(eax + 0x58u); M8(m_) = (u8)(0x0u); }
L_0041ee36:;
  /* 0041ee36 fld dword ptr [0x9b8a58] */ { const u32 m_ = (u32)(0x9b8a58u); FPUSH((double)MF32(m_)); }
  /* 0041ee3c fadd dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0041ee3f fst dword ptr [0x9b8a58] */ { const u32 m_ = (u32)(0x9b8a58u); MF32(m_) = (float)ST(0); }
  /* 0041ee45 fcomp qword ptr [0x656f98] */ { const u32 m_ = (u32)(0x656f98u); c->fsw = fcom_sw(c->fsw, ST(0), MF64(m_)); FPOP(); }
  /* 0041ee4b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041ee4d test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ee50 jne 0x41ef54 */ if (!ZF_) goto L_0041ef54;
  /* 0041ee56 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041ee58 mov dword ptr [0x9b8a58], 0 */ { const u32 m_ = (u32)(0x9b8a58u); M32(m_) = (u32)(0x0u); }
  /* 0041ee62 call 0x41f840 */ esp -= 4; M32(esp) = 0x41ee67u; SAVEALL; F_0041f840(c); ABI_CHECK(0x41f840u, 0x41ee62u); RETCHK(0x41ee67u, 0x41ee62u); LOADALL;
  /* 0041ee67 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ee69 je 0x41eee1 */ if (ZF_) goto L_0041eee1;
  /* 0041ee6b lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041ee6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ee6f mov eax, esi */ { eax = (u32)(esi); }
  /* 0041ee71 call 0x41e9f0 */ esp -= 4; M32(esp) = 0x41ee76u; SAVEALL; F_0041e9f0(c); ABI_CHECK(0x41e9f0u, 0x41ee71u); RETCHK(0x41ee76u, 0x41ee71u); LOADALL;
  /* 0041ee76 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041ee79 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041ee7b call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ee7eu; SAVEALL; call_ind(c, t_); RETCHK(0x41ee7eu, 0x41ee7bu); LOADALL; }
  /* 0041ee7e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ee80 je 0x41eeb9 */ if (ZF_) goto L_0041eeb9;
  /* 0041ee82 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ee84 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ee86 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ee88 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ee8a lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041ee8d call 0x52cec0 */ esp -= 4; M32(esp) = 0x41ee92u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x41ee8du); RETCHK(0x41ee92u, 0x41ee8du); LOADALL;
  /* 0041ee92 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041ee95 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041ee97 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041ee9a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041ee9b call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ee9eu; SAVEALL; call_ind(c, t_); RETCHK(0x41ee9eu, 0x41ee9bu); LOADALL; }
  /* 0041ee9e fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0041eea4 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0041eea7 fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0041eea9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041eeab test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041eeae jnp 0x41ef54 */ if (!PF_) goto L_0041ef54;
  /* 0041eeb4 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0041eeb7 jmp 0x41eebf */ goto L_0041eebf;
L_0041eeb9:;
  /* 0041eeb9 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
L_0041eebf:;
  /* 0041eebf fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0041eec2 fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0041eec4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041eec6 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041eec9 jnp 0x41ef54 */ if (!PF_) goto L_0041ef54;
  /* 0041eecf mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0041eed2 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041eed4 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041eed7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041eed8 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41eedbu; SAVEALL; call_ind(c, t_); RETCHK(0x41eedbu, 0x41eed8u); LOADALL; }
  /* 0041eedb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041eedd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041eede ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0041eee1:;
  /* 0041eee1 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041eee3 call 0x41f830 */ esp -= 4; M32(esp) = 0x41eee8u; SAVEALL; F_0041f830(c); ABI_CHECK(0x41f830u, 0x41eee3u); RETCHK(0x41eee8u, 0x41eee3u); LOADALL;
  /* 0041eee8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041eeea je 0x41ef54 */ if (ZF_) goto L_0041ef54;
  /* 0041eeec lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041eeef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041eef0 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041eef2 call 0x41e9f0 */ esp -= 4; M32(esp) = 0x41eef7u; SAVEALL; F_0041e9f0(c); ABI_CHECK(0x41e9f0u, 0x41eef2u); RETCHK(0x41eef7u, 0x41eef2u); LOADALL;
  /* 0041eef7 mov ecx, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); ecx = (u32)(M32(m_)); }
  /* 0041eefa mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041eefc call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41eeffu; SAVEALL; call_ind(c, t_); RETCHK(0x41eeffu, 0x41eefcu); LOADALL; }
  /* 0041eeff test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ef01 je 0x41ef36 */ if (ZF_) goto L_0041ef36;
  /* 0041ef03 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ef05 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ef07 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ef09 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ef0b lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041ef0e call 0x52cec0 */ esp -= 4; M32(esp) = 0x41ef13u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x41ef0eu); RETCHK(0x41ef13u, 0x41ef0eu); LOADALL;
  /* 0041ef13 mov ecx, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); ecx = (u32)(M32(m_)); }
  /* 0041ef16 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041ef18 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0041ef1b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041ef1c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ef1fu; SAVEALL; call_ind(c, t_); RETCHK(0x41ef1fu, 0x41ef1cu); LOADALL; }
  /* 0041ef1f fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0041ef25 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0041ef28 fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0041ef2a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041ef2c test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ef2f jnp 0x41ef54 */ if (!PF_) goto L_0041ef54;
  /* 0041ef31 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0041ef34 jmp 0x41ef3c */ goto L_0041ef3c;
L_0041ef36:;
  /* 0041ef36 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
L_0041ef3c:;
  /* 0041ef3c fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0041ef3f fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0041ef41 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0041ef43 test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ef46 jnp 0x41ef54 */ if (!PF_) goto L_0041ef54;
  /* 0041ef48 mov ecx, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); ecx = (u32)(M32(m_)); }
  /* 0041ef4b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041ef4d lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0041ef50 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041ef51 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41ef54u; SAVEALL; call_ind(c, t_); RETCHK(0x41ef54u, 0x41ef51u); LOADALL; }
L_0041ef54:;
  /* 0041ef54 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041ef56 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041ef57 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041ef60(CPU *c) {
  NATIVE_HOOK(0x41ef60u) REGS; LOADALL;
L_0041ef60:;
  /* 0041ef60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041ef61 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041ef63 call 0x41f840 */ esp -= 4; M32(esp) = 0x41ef68u; SAVEALL; F_0041f840(c); ABI_CHECK(0x41f840u, 0x41ef63u); RETCHK(0x41ef68u, 0x41ef63u); LOADALL;
  /* 0041ef68 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041ef6a je 0x41ef71 */ if (ZF_) goto L_0041ef71;
  /* 0041ef6c call 0x41e440 */ esp -= 4; M32(esp) = 0x41ef71u; SAVEALL; F_0041e440(c); ABI_CHECK(0x41e440u, 0x41ef6cu); RETCHK(0x41ef71u, 0x41ef6cu); LOADALL;
L_0041ef71:;
  /* 0041ef71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041ef72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041ef80(CPU *c) {
  NATIVE_HOOK(0x41ef80u) REGS; LOADALL;
L_0041ef80:;
  /* 0041ef80 mov dword ptr [eax + 0x70], 0 */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(0x0u); }
  /* 0041ef87 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041ef90(CPU *c) {
  NATIVE_HOOK(0x41ef90u) REGS; LOADALL;
L_0041ef90:;
  /* 0041ef90 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041ef91 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 0041ef93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041ef94 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041ef96 call 0x4019a0 */ esp -= 4; M32(esp) = 0x41ef9bu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x41ef96u); RETCHK(0x41ef9bu, 0x41ef96u); LOADALL;
  /* 0041ef9b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ef9e mov edi, eax */ { edi = (u32)(eax); }
  /* 0041efa0 call 0x40daa0 */ esp -= 4; M32(esp) = 0x41efa5u; SAVEALL; F_0040daa0(c); ABI_CHECK(0x40daa0u, 0x41efa0u); RETCHK(0x41efa5u, 0x41efa0u); LOADALL;
  /* 0041efa5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041efa6 call 0x61af76 */ esp -= 4; M32(esp) = 0x41efabu; SAVEALL; F_0061af76(c); ABI_CHECK(0x61af76u, 0x41efa6u); RETCHK(0x41efabu, 0x41efa6u); LOADALL;
  /* 0041efab add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041efae neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0041efb0 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0041efb2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041efb3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041efb4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041efc0(CPU *c) {
  NATIVE_HOOK(0x41efc0u) REGS; LOADALL;
L_0041efc0:;
  /* 0041efc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041efc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041efc2 call 0x404690 */ esp -= 4; M32(esp) = 0x41efc7u; SAVEALL; F_00404690(c); ABI_CHECK(0x404690u, 0x41efc2u); RETCHK(0x41efc7u, 0x41efc2u); LOADALL;
  /* 0041efc7 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041efc9 mov esi, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); esi = (u32)(M32(m_)); }
  /* 0041efcc mov eax, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0041efcf add edi, 0x34 */ { u32 a_ = edi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0041efd2 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041efd4 je 0x41eff6 */ if (ZF_) goto L_0041eff6;
L_0041efd6:;
  /* 0041efd6 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 0041efd8 lea eax, [esi + 2] */ eax = (u32)((u32)(esi + 0x2u));
  /* 0041efdb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041efdc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041efdd call 0x61af76 */ esp -= 4; M32(esp) = 0x41efe2u; SAVEALL; F_0061af76(c); ABI_CHECK(0x61af76u, 0x41efddu); RETCHK(0x41efe2u, 0x41efddu); LOADALL;
  /* 0041efe2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041efe5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041efe7 je 0x41effb */ if (ZF_) goto L_0041effb;
  /* 0041efe9 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041efec add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041eff2 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041eff4 jne 0x41efd6 */ if (!ZF_) goto L_0041efd6;
L_0041eff6:;
  /* 0041eff6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041eff7 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041eff9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041effa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041effb:;
  /* 0041effb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041effc mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0041effe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041efff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041f000(CPU *c) {
  NATIVE_HOOK(0x41f000u) REGS; LOADALL;
L_0041f000:;
  /* 0041f000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041f001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041f003 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041f005 push 0x626218 */ { u32 v_ = 0x626218u; esp -= 4; M32(esp) = v_; }
  /* 0041f00a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041f010 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f011 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041f018 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041f01b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f01c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041f01d mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041f01f mov eax, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); eax = (u32)(M32(m_)); }
  /* 0041f022 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041f024 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f026 je 0x41f036 */ if (ZF_) goto L_0041f036;
  /* 0041f028 push 0x6441b0 */ { u32 v_ = 0x6441b0u; esp -= 4; M32(esp) = v_; }
  /* 0041f02d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0041f02f call 0x50dc70 */ esp -= 4; M32(esp) = 0x41f034u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x41f02fu); RETCHK(0x41f034u, 0x41f02fu); LOADALL;
  /* 0041f034 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0041f036:;
  /* 0041f036 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041f037 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 0041f039 push 0x6436c8 */ { u32 v_ = 0x6436c8u; esp -= 4; M32(esp) = v_; }
  /* 0041f03e lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f041 mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 0041f048 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041f04b mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f04e call 0x404420 */ esp -= 4; M32(esp) = 0x41f053u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f04eu); RETCHK(0x41f053u, 0x41f04eu); LOADALL;
  /* 0041f053 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041f056 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f059 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f05a lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f05d call 0x50c760 */ esp -= 4; M32(esp) = 0x41f062u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f05du); RETCHK(0x41f062u, 0x41f05du); LOADALL;
  /* 0041f062 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f069 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f06d jb 0x41f07b */ if (CF_) goto L_0041f07b;
  /* 0041f06f mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0041f072 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f073 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f078u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f073u); RETCHK(0x41f078u, 0x41f073u); LOADALL;
  /* 0041f078 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f07b:;
  /* 0041f07b push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 0041f07d push 0x644264 */ { u32 v_ = 0x644264u; esp -= 4; M32(esp) = v_; }
  /* 0041f082 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f085 mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 0041f08c mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041f08f mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f092 call 0x404420 */ esp -= 4; M32(esp) = 0x41f097u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f092u); RETCHK(0x41f097u, 0x41f092u); LOADALL;
  /* 0041f097 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0041f09e mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f0a1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f0a2 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f0a5 call 0x50c760 */ esp -= 4; M32(esp) = 0x41f0aau; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f0a5u); RETCHK(0x41f0aau, 0x41f0a5u); LOADALL;
  /* 0041f0aa mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f0b1 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f0b5 jb 0x41f0c3 */ if (CF_) goto L_0041f0c3;
  /* 0041f0b7 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 0041f0ba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f0bb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f0c0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f0bbu); RETCHK(0x41f0c0u, 0x41f0bbu); LOADALL;
  /* 0041f0c0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f0c3:;
  /* 0041f0c3 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0041f0c5 push 0x6436dc */ { u32 v_ = 0x6436dcu; esp -= 4; M32(esp) = v_; }
  /* 0041f0ca lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f0cd mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 0041f0d4 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041f0d7 mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f0da call 0x404420 */ esp -= 4; M32(esp) = 0x41f0dfu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f0dau); RETCHK(0x41f0dfu, 0x41f0dau); LOADALL;
  /* 0041f0df mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0041f0e6 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f0e9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f0ea lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f0ed call 0x50c760 */ esp -= 4; M32(esp) = 0x41f0f2u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f0edu); RETCHK(0x41f0f2u, 0x41f0edu); LOADALL;
  /* 0041f0f2 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f0f9 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f0fd jb 0x41f10b */ if (CF_) goto L_0041f10b;
  /* 0041f0ff mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 0041f102 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041f103 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f108u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f103u); RETCHK(0x41f108u, 0x41f103u); LOADALL;
  /* 0041f108 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f10b:;
  /* 0041f10b push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0041f10d push 0x64393c */ { u32 v_ = 0x64393cu; esp -= 4; M32(esp) = v_; }
  /* 0041f112 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f115 mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 0041f11c mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041f11f mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f122 call 0x404420 */ esp -= 4; M32(esp) = 0x41f127u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f122u); RETCHK(0x41f127u, 0x41f122u); LOADALL;
  /* 0041f127 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0041f12e mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f131 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f132 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f135 call 0x50c760 */ esp -= 4; M32(esp) = 0x41f13au; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f135u); RETCHK(0x41f13au, 0x41f135u); LOADALL;
  /* 0041f13a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f141 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f145 jb 0x41f153 */ if (CF_) goto L_0041f153;
  /* 0041f147 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0041f14a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f14b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f150u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f14bu); RETCHK(0x41f150u, 0x41f14bu); LOADALL;
  /* 0041f150 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f153:;
  /* 0041f153 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0041f155 push 0x6436b0 */ { u32 v_ = 0x6436b0u; esp -= 4; M32(esp) = v_; }
  /* 0041f15a lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f15d mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 0041f164 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041f167 mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f16a call 0x404420 */ esp -= 4; M32(esp) = 0x41f16fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f16au); RETCHK(0x41f16fu, 0x41f16au); LOADALL;
  /* 0041f16f mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 0041f176 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f179 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f17a lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f17d call 0x50c760 */ esp -= 4; M32(esp) = 0x41f182u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f17du); RETCHK(0x41f182u, 0x41f17du); LOADALL;
  /* 0041f182 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f189 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f18d jb 0x41f19b */ if (CF_) goto L_0041f19b;
  /* 0041f18f mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 0041f192 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f193 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f198u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f193u); RETCHK(0x41f198u, 0x41f193u); LOADALL;
  /* 0041f198 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f19b:;
  /* 0041f19b push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0041f19d push 0x6436bc */ { u32 v_ = 0x6436bcu; esp -= 4; M32(esp) = v_; }
  /* 0041f1a2 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f1a5 mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 0041f1ac mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0041f1af mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f1b2 call 0x404420 */ esp -= 4; M32(esp) = 0x41f1b7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f1b2u); RETCHK(0x41f1b7u, 0x41f1b2u); LOADALL;
  /* 0041f1b7 mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 0041f1be mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f1c1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f1c2 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0041f1c5 call 0x50c760 */ esp -= 4; M32(esp) = 0x41f1cau; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f1c5u); RETCHK(0x41f1cau, 0x41f1c5u); LOADALL;
  /* 0041f1ca mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f1d1 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f1d5 jb 0x41f1e3 */ if (CF_) goto L_0041f1e3;
  /* 0041f1d7 mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 0041f1da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041f1db call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f1e0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f1dbu); RETCHK(0x41f1e0u, 0x41f1dbu); LOADALL;
  /* 0041f1e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f1e3:;
  /* 0041f1e3 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 0041f1e5 push 0x644254 */ { u32 v_ = 0x644254u; esp -= 4; M32(esp) = v_; }
  /* 0041f1ea lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0041f1ed mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0041f1f4 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041f1f7 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f1fa call 0x404420 */ esp -= 4; M32(esp) = 0x41f1ffu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f1fau); RETCHK(0x41f1ffu, 0x41f1fau); LOADALL;
  /* 0041f1ff mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 0041f206 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f209 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f20a lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0041f20d call 0x50c760 */ esp -= 4; M32(esp) = 0x41f212u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f20du); RETCHK(0x41f212u, 0x41f20du); LOADALL;
  /* 0041f212 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f219 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f21d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041f21e jb 0x41f22c */ if (CF_) goto L_0041f22c;
  /* 0041f220 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 0041f223 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f224 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f229u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f224u); RETCHK(0x41f229u, 0x41f224u); LOADALL;
  /* 0041f229 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f22c:;
  /* 0041f22c mov ecx, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0041f22f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f231 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041f233 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0041f23a mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041f23d mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f240 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f243u; SAVEALL; call_ind(c, t_); RETCHK(0x41f243u, 0x41f240u); LOADALL; }
  /* 0041f243 mov ecx, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0041f246 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f248 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f249 call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f24cu; SAVEALL; call_ind(c, t_); RETCHK(0x41f24cu, 0x41f249u); LOADALL; }
  /* 0041f24c mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0041f24e call 0x41f7c0 */ esp -= 4; M32(esp) = 0x41f253u; SAVEALL; F_0041f7c0(c); ABI_CHECK(0x41f7c0u, 0x41f24eu); RETCHK(0x41f253u, 0x41f24eu); LOADALL;
  /* 0041f253 mov ecx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0041f256 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f258 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041f25a call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f25du; SAVEALL; call_ind(c, t_); RETCHK(0x41f25du, 0x41f25au); LOADALL; }
  /* 0041f25d mov ecx, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 0041f260 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f262 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041f264 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f267u; SAVEALL; call_ind(c, t_); RETCHK(0x41f267u, 0x41f264u); LOADALL; }
  /* 0041f267 mov ecx, dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ecx = (u32)(M32(m_)); }
  /* 0041f26a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f26c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041f26e call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f271u; SAVEALL; call_ind(c, t_); RETCHK(0x41f271u, 0x41f26eu); LOADALL; }
  /* 0041f271 mov ecx, dword ptr [edi + 0x54] */ { const u32 m_ = (u32)(edi + 0x54u); ecx = (u32)(M32(m_)); }
  /* 0041f274 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f276 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f278 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f27bu; SAVEALL; call_ind(c, t_); RETCHK(0x41f27bu, 0x41f278u); LOADALL; }
  /* 0041f27b mov ecx, dword ptr [edi + 0x58] */ { const u32 m_ = (u32)(edi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 0041f27e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f280 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f282 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f285u; SAVEALL; call_ind(c, t_); RETCHK(0x41f285u, 0x41f282u); LOADALL; }
  /* 0041f285 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041f286 call 0x41f880 */ esp -= 4; M32(esp) = 0x41f28bu; SAVEALL; F_0041f880(c); ABI_CHECK(0x41f880u, 0x41f286u); RETCHK(0x41f28bu, 0x41f286u); LOADALL;
  /* 0041f28b call 0x41fad0 */ esp -= 4; M32(esp) = 0x41f290u; SAVEALL; F_0041fad0(c); ABI_CHECK(0x41fad0u, 0x41f28bu); RETCHK(0x41f290u, 0x41f28bu); LOADALL;
  /* 0041f290 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041f293 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041f294 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041f295 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041f29c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041f29e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041f29f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041f2a0(CPU *c) {
  NATIVE_HOOK(0x41f2a0u) REGS; LOADALL;
L_0041f2a0:;
  /* 0041f2a0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f2a2 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041f2a4 call 0x41fba0 */ esp -= 4; M32(esp) = 0x41f2a9u; SAVEALL; F_0041fba0(c); ABI_CHECK(0x41fba0u, 0x41f2a4u); RETCHK(0x41f2a9u, 0x41f2a4u); LOADALL;
  /* 0041f2a9 mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0041f2ac mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f2ae push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f2b0 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f2b3u; SAVEALL; call_ind(c, t_); RETCHK(0x41f2b3u, 0x41f2b0u); LOADALL; }
  /* 0041f2b3 mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 0041f2b6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f2b8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f2ba call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f2bdu; SAVEALL; call_ind(c, t_); RETCHK(0x41f2bdu, 0x41f2bau); LOADALL; }
  /* 0041f2bd mov ecx, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ecx = (u32)(M32(m_)); }
  /* 0041f2c0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f2c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f2c4 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f2c7u; SAVEALL; call_ind(c, t_); RETCHK(0x41f2c7u, 0x41f2c4u); LOADALL; }
  /* 0041f2c7 mov ecx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ecx = (u32)(M32(m_)); }
  /* 0041f2ca mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f2cc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041f2ce call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f2d1u; SAVEALL; call_ind(c, t_); RETCHK(0x41f2d1u, 0x41f2ceu); LOADALL; }
  /* 0041f2d1 mov ecx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 0041f2d4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f2d6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041f2d8 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f2dbu; SAVEALL; call_ind(c, t_); RETCHK(0x41f2dbu, 0x41f2d8u); LOADALL; }
  /* 0041f2db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041f2e0(CPU *c) {
  NATIVE_HOOK(0x41f2e0u) REGS; LOADALL;
L_0041f2e0:;
  /* 0041f2e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041f2e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041f2e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041f2e5 push 0x6261d6 */ { u32 v_ = 0x6261d6u; esp -= 4; M32(esp) = v_; }
  /* 0041f2ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041f2f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f2f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041f2f8 sub esp, 0xa4 */ { u32 a_ = esp, b_ = 0xa4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041f2fe mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041f303 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f304 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0041f307 mov eax, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); eax = (u32)(M32(m_)); }
  /* 0041f30a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041f30c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f30e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041f30f je 0x41f31f */ if (ZF_) goto L_0041f31f;
  /* 0041f311 push 0x644194 */ { u32 v_ = 0x644194u; esp -= 4; M32(esp) = v_; }
  /* 0041f316 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0041f318 call 0x50dc70 */ esp -= 4; M32(esp) = 0x41f31du; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x41f318u); RETCHK(0x41f31du, 0x41f318u); LOADALL;
  /* 0041f31d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0041f31f:;
  /* 0041f31f push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0041f321 push 0x6436dc */ { u32 v_ = 0x6436dcu; esp -= 4; M32(esp) = v_; }
  /* 0041f326 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f329 mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f330 mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f333 mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f336 call 0x404420 */ esp -= 4; M32(esp) = 0x41f33bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f336u); RETCHK(0x41f33bu, 0x41f336u); LOADALL;
  /* 0041f33b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041f33e mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f341 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f342 lea eax, [ebp - 0x70] */ eax = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f345 call 0x50c760 */ esp -= 4; M32(esp) = 0x41f34au; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f345u); RETCHK(0x41f34au, 0x41f345u); LOADALL;
  /* 0041f34a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f351 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f355 jb 0x41f363 */ if (CF_) goto L_0041f363;
  /* 0041f357 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0041f35a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f35b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f360u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f35bu); RETCHK(0x41f360u, 0x41f35bu); LOADALL;
  /* 0041f360 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f363:;
  /* 0041f363 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 0041f365 push 0x644264 */ { u32 v_ = 0x644264u; esp -= 4; M32(esp) = v_; }
  /* 0041f36a lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f36d mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f374 mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f377 mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f37a call 0x404420 */ esp -= 4; M32(esp) = 0x41f37fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f37au); RETCHK(0x41f37fu, 0x41f37au); LOADALL;
  /* 0041f37f mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0041f386 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f389 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f38a lea eax, [ebp - 0x70] */ eax = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f38d call 0x50c760 */ esp -= 4; M32(esp) = 0x41f392u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f38du); RETCHK(0x41f392u, 0x41f38du); LOADALL;
  /* 0041f392 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f399 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f39d jb 0x41f3ab */ if (CF_) goto L_0041f3ab;
  /* 0041f39f mov ecx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ecx = (u32)(M32(m_)); }
  /* 0041f3a2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f3a3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f3a8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f3a3u); RETCHK(0x41f3a8u, 0x41f3a3u); LOADALL;
  /* 0041f3a8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f3ab:;
  /* 0041f3ab push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 0041f3ad push 0x6436c8 */ { u32 v_ = 0x6436c8u; esp -= 4; M32(esp) = v_; }
  /* 0041f3b2 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f3b5 mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f3bc mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f3bf mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f3c2 call 0x404420 */ esp -= 4; M32(esp) = 0x41f3c7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f3c2u); RETCHK(0x41f3c7u, 0x41f3c2u); LOADALL;
  /* 0041f3c7 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0041f3ce mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f3d1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f3d2 lea eax, [ebp - 0x70] */ eax = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f3d5 call 0x50c760 */ esp -= 4; M32(esp) = 0x41f3dau; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f3d5u); RETCHK(0x41f3dau, 0x41f3d5u); LOADALL;
  /* 0041f3da mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f3e1 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f3e5 jb 0x41f3f3 */ if (CF_) goto L_0041f3f3;
  /* 0041f3e7 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0041f3ea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041f3eb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f3f0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f3ebu); RETCHK(0x41f3f0u, 0x41f3ebu); LOADALL;
  /* 0041f3f0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f3f3:;
  /* 0041f3f3 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0041f3f5 push 0x64370c */ { u32 v_ = 0x64370cu; esp -= 4; M32(esp) = v_; }
  /* 0041f3fa lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f3fd mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f404 mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f407 mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f40a call 0x404420 */ esp -= 4; M32(esp) = 0x41f40fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f40au); RETCHK(0x41f40fu, 0x41f40au); LOADALL;
  /* 0041f40f mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0041f416 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f419 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f41a lea eax, [ebp - 0x70] */ eax = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f41d call 0x50c760 */ esp -= 4; M32(esp) = 0x41f422u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f41du); RETCHK(0x41f422u, 0x41f41du); LOADALL;
  /* 0041f422 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f429 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f42d jb 0x41f43b */ if (CF_) goto L_0041f43b;
  /* 0041f42f mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0041f432 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f433 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f438u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f433u); RETCHK(0x41f438u, 0x41f433u); LOADALL;
  /* 0041f438 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f43b:;
  /* 0041f43b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041f43d mov dword ptr [ebp - 0x2f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); M32(m_) = (u32)(ecx); }
  /* 0041f440 mov dword ptr [ebp - 0x2b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd5u); M32(m_) = (u32)(ecx); }
  /* 0041f443 mov dword ptr [ebp - 0x27], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd9u); M32(m_) = (u32)(ecx); }
  /* 0041f446 mov dword ptr [ebp - 0x23], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M32(m_) = (u32)(ecx); }
  /* 0041f449 mov dword ptr [ebp - 0x1f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M32(m_) = (u32)(ecx); }
  /* 0041f44c mov dword ptr [ebp - 0x1b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M32(m_) = (u32)(ecx); }
  /* 0041f44f mov dword ptr [ebp - 0x17], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(ecx); }
  /* 0041f452 mov word ptr [ebp - 0x13], cx */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0041f456 lea edx, [edi + 0xd0] */ edx = (u32)((u32)(edi + 0xd0u));
  /* 0041f45c mov byte ptr [ebp - 0x30], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f45f mov byte ptr [ebp - 0x11], cl */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0041f462 mov dword ptr [ebp - 0x54], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x1u); }
  /* 0041f469 mov dword ptr [ebp - 0x78], edx */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(edx); }
  /* 0041f46c mov dword ptr [ebp - 0x74], 0x11 */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(0x11u); }
L_0041f473:;
  /* 0041f473 mov eax, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M32(m_)); }
  /* 0041f476 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f477 push 0x644208 */ { u32 v_ = 0x644208u; esp -= 4; M32(esp) = v_; }
  /* 0041f47c lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041f47f push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0041f481 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f482 call 0x5fe928 */ esp -= 4; M32(esp) = 0x41f487u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41f482u); RETCHK(0x41f487u, 0x41f482u); LOADALL;
  /* 0041f487 mov edx, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); edx = (u32)(M32(m_)); }
  /* 0041f48a mov eax, dword ptr [edx - 0x44] */ { const u32 m_ = (u32)(edx + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0041f48d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041f490 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f492 je 0x41f50b */ if (ZF_) goto L_0041f50b;
  /* 0041f494 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041f497 mov dword ptr [ebp - 0x7c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(0xfu); }
  /* 0041f49e mov dword ptr [ebp - 0x80], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ebx); }
  /* 0041f4a1 mov byte ptr [ebp - 0x90], bl */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f4a7 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0041f4aa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0041f4b0:;
  /* 0041f4b0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041f4b2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041f4b3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041f4b5 jne 0x41f4b0 */ if (!ZF_) goto L_0041f4b0;
  /* 0041f4b7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041f4b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f4ba lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041f4bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f4be lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0041f4c4 call 0x404420 */ esp -= 4; M32(esp) = 0x41f4c9u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f4c4u); RETCHK(0x41f4c9u, 0x41f4c4u); LOADALL;
  /* 0041f4c9 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 0041f4d0 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f4d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f4d4 lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0041f4da call 0x50c760 */ esp -= 4; M32(esp) = 0x41f4dfu; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f4dau); RETCHK(0x41f4dfu, 0x41f4dau); LOADALL;
  /* 0041f4df mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f4e6 cmp dword ptr [ebp - 0x7c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff84u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f4ea jb 0x41f4fb */ if (CF_) goto L_0041f4fb;
  /* 0041f4ec mov ecx, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); ecx = (u32)(M32(m_)); }
  /* 0041f4f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f4f3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f4f8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f4f3u); RETCHK(0x41f4f8u, 0x41f4f3u); LOADALL;
  /* 0041f4f8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f4fb:;
  /* 0041f4fb mov dword ptr [ebp - 0x7c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(0xfu); }
  /* 0041f502 mov dword ptr [ebp - 0x80], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ebx); }
  /* 0041f505 mov byte ptr [ebp - 0x90], bl */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M8(m_) = (u8)((ebx & 0xffu)); }
L_0041f50b:;
  /* 0041f50b mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 0041f50e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041f50f push 0x6441f8 */ { u32 v_ = 0x6441f8u; esp -= 4; M32(esp) = v_; }
  /* 0041f514 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041f517 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0041f519 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f51a call 0x5fe928 */ esp -= 4; M32(esp) = 0x41f51fu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41f51au); RETCHK(0x41f51fu, 0x41f51au); LOADALL;
  /* 0041f51f mov ecx, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); ecx = (u32)(M32(m_)); }
  /* 0041f522 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f524 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041f527 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f529 je 0x41f58f */ if (ZF_) goto L_0041f58f;
  /* 0041f52b lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041f52e mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f535 mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f538 mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f53b lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0041f53e mov edi, edi */ { edi = (u32)(edi); }
L_0041f540:;
  /* 0041f540 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041f542 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041f543 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041f545 jne 0x41f540 */ if (!ZF_) goto L_0041f540;
  /* 0041f547 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041f549 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f54a lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041f54d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041f54e lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f551 call 0x404420 */ esp -= 4; M32(esp) = 0x41f556u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f551u); RETCHK(0x41f556u, 0x41f551u); LOADALL;
  /* 0041f556 mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 0041f55d mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f560 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f561 lea eax, [ebp - 0x70] */ eax = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f564 call 0x50c760 */ esp -= 4; M32(esp) = 0x41f569u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f564u); RETCHK(0x41f569u, 0x41f564u); LOADALL;
  /* 0041f569 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f570 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f574 jb 0x41f582 */ if (CF_) goto L_0041f582;
  /* 0041f576 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0041f579 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f57a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f57fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f57au); RETCHK(0x41f57fu, 0x41f57au); LOADALL;
  /* 0041f57f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f582:;
  /* 0041f582 mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f589 mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f58c mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
L_0041f58f:;
  /* 0041f58f mov edx, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); edx = (u32)(M32(m_)); }
  /* 0041f592 mov ecx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ecx = (u32)(M32(m_)); }
  /* 0041f595 mov eax, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); eax = (u32)(M32(m_)); }
  /* 0041f598 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041f59b inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041f59c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041f59d mov dword ptr [ebp - 0x78], edx */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(edx); }
  /* 0041f5a0 mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
  /* 0041f5a3 mov dword ptr [ebp - 0x74], eax */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(eax); }
  /* 0041f5a6 jne 0x41f473 */ if (!ZF_) goto L_0041f473;
  /* 0041f5ac xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041f5ae mov dword ptr [ebp - 0x4f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M32(m_) = (u32)(ecx); }
  /* 0041f5b1 mov dword ptr [ebp - 0x4b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb5u); M32(m_) = (u32)(ecx); }
  /* 0041f5b4 mov dword ptr [ebp - 0x47], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb9u); M32(m_) = (u32)(ecx); }
  /* 0041f5b7 mov dword ptr [ebp - 0x43], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbdu); M32(m_) = (u32)(ecx); }
  /* 0041f5ba mov dword ptr [ebp - 0x3f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc1u); M32(m_) = (u32)(ecx); }
  /* 0041f5bd mov dword ptr [ebp - 0x3b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); M32(m_) = (u32)(ecx); }
  /* 0041f5c0 mov dword ptr [ebp - 0x37], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc9u); M32(m_) = (u32)(ecx); }
  /* 0041f5c3 mov word ptr [ebp - 0x33], cx */ { const u32 m_ = (u32)(ebp + 0xffffffcdu); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0041f5c7 lea edx, [edi + 0x114] */ edx = (u32)((u32)(edi + 0x114u));
  /* 0041f5cd mov byte ptr [ebp - 0x50], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f5d0 mov byte ptr [ebp - 0x31], cl */ { const u32 m_ = (u32)(ebp + 0xffffffcfu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0041f5d3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041f5d5 mov dword ptr [ebp - 0x54], edx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(edx); }
  /* 0041f5d8 jmp 0x41f5e0 */ goto L_0041f5e0;
L_0041f5e0:;
  /* 0041f5e0 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0041f5e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041f5e4 push 0x6441e8 */ { u32 v_ = 0x6441e8u; esp -= 4; M32(esp) = v_; }
  /* 0041f5e9 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0041f5ec push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0041f5ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f5ef mov dword ptr [ebp - 0x74], esi */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(esi); }
  /* 0041f5f2 call 0x5fe928 */ esp -= 4; M32(esp) = 0x41f5f7u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41f5f2u); RETCHK(0x41f5f7u, 0x41f5f2u); LOADALL;
  /* 0041f5f7 mov ecx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ecx = (u32)(M32(m_)); }
  /* 0041f5fa mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f5fc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041f5ff cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f601 je 0x41f668 */ if (ZF_) goto L_0041f668;
  /* 0041f603 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0041f606 mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f60d mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f610 mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f613 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0041f616:;
  /* 0041f616 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041f618 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041f619 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041f61b jne 0x41f616 */ if (!ZF_) goto L_0041f616;
  /* 0041f61d sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041f61f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f620 lea edx, [ebp - 0x50] */ edx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0041f623 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041f624 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f627 call 0x404420 */ esp -= 4; M32(esp) = 0x41f62cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f627u); RETCHK(0x41f62cu, 0x41f627u); LOADALL;
  /* 0041f62c mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 0041f633 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f636 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f637 lea eax, [ebp - 0x70] */ eax = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f63a call 0x50c760 */ esp -= 4; M32(esp) = 0x41f63fu; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f63au); RETCHK(0x41f63fu, 0x41f63au); LOADALL;
  /* 0041f63f mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f646 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f64a jb 0x41f658 */ if (CF_) goto L_0041f658;
  /* 0041f64c mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0041f64f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f650 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f655u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f650u); RETCHK(0x41f655u, 0x41f650u); LOADALL;
  /* 0041f655 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f658:;
  /* 0041f658 mov esi, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); esi = (u32)(M32(m_)); }
  /* 0041f65b mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f662 mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f665 mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
L_0041f668:;
  /* 0041f668 mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 0041f66b mov eax, esi */ { eax = (u32)(esi); }
  /* 0041f66d add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041f670 cmp eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f673 mov dword ptr [ebp - 0x54], edx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(edx); }
  /* 0041f676 jl 0x41f5e0 */ if (LT_) goto L_0041f5e0;
  /* 0041f67c push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0041f67e push 0x6436b0 */ { u32 v_ = 0x6436b0u; esp -= 4; M32(esp) = v_; }
  /* 0041f683 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f686 mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f68d mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f690 mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f693 call 0x404420 */ esp -= 4; M32(esp) = 0x41f698u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f693u); RETCHK(0x41f698u, 0x41f693u); LOADALL;
  /* 0041f698 mov dword ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7u); }
  /* 0041f69f mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f6a2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f6a3 lea eax, [ebp - 0x70] */ eax = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f6a6 call 0x50c760 */ esp -= 4; M32(esp) = 0x41f6abu; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f6a6u); RETCHK(0x41f6abu, 0x41f6a6u); LOADALL;
  /* 0041f6ab mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f6b2 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f6b6 jb 0x41f6c4 */ if (CF_) goto L_0041f6c4;
  /* 0041f6b8 mov ecx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ecx = (u32)(M32(m_)); }
  /* 0041f6bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f6bc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f6c1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f6bcu); RETCHK(0x41f6c1u, 0x41f6bcu); LOADALL;
  /* 0041f6c1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f6c4:;
  /* 0041f6c4 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0041f6c6 push 0x6436bc */ { u32 v_ = 0x6436bcu; esp -= 4; M32(esp) = v_; }
  /* 0041f6cb lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f6ce mov dword ptr [ebp - 0x58], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0xfu); }
  /* 0041f6d5 mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0041f6d8 mov byte ptr [ebp - 0x6c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f6db call 0x404420 */ esp -= 4; M32(esp) = 0x41f6e0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f6dbu); RETCHK(0x41f6e0u, 0x41f6dbu); LOADALL;
  /* 0041f6e0 mov dword ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x8u); }
  /* 0041f6e7 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f6ea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f6eb lea eax, [ebp - 0x70] */ eax = (u32)((u32)(ebp + 0xffffff90u));
  /* 0041f6ee call 0x50c760 */ esp -= 4; M32(esp) = 0x41f6f3u; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f6eeu); RETCHK(0x41f6f3u, 0x41f6eeu); LOADALL;
  /* 0041f6f3 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f6fa cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f6fe jb 0x41f70c */ if (CF_) goto L_0041f70c;
  /* 0041f700 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0041f703 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041f704 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f709u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f704u); RETCHK(0x41f709u, 0x41f704u); LOADALL;
  /* 0041f709 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f70c:;
  /* 0041f70c push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 0041f70e push 0x644254 */ { u32 v_ = 0x644254u; esp -= 4; M32(esp) = v_; }
  /* 0041f713 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0041f719 mov dword ptr [ebp - 0x98], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0xfu); }
  /* 0041f723 mov dword ptr [ebp - 0x9c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(ebx); }
  /* 0041f729 mov byte ptr [ebp - 0xac], bl */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f72f call 0x404420 */ esp -= 4; M32(esp) = 0x41f734u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41f72fu); RETCHK(0x41f734u, 0x41f72fu); LOADALL;
  /* 0041f734 mov dword ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x9u); }
  /* 0041f73b mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0041f73e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f73f lea eax, [ebp - 0xb0] */ eax = (u32)((u32)(ebp + 0xffffff50u));
  /* 0041f745 call 0x50c760 */ esp -= 4; M32(esp) = 0x41f74au; SAVEALL; F_0050c760(c); ABI_CHECK(0x50c760u, 0x41f745u); RETCHK(0x41f74au, 0x41f745u); LOADALL;
  /* 0041f74a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041f751 cmp dword ptr [ebp - 0x98], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f758 jb 0x41f769 */ if (CF_) goto L_0041f769;
  /* 0041f75a mov eax, dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); eax = (u32)(M32(m_)); }
  /* 0041f760 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f761 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f766u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f761u); RETCHK(0x41f766u, 0x41f761u); LOADALL;
  /* 0041f766 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f769:;
  /* 0041f769 mov ecx, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0041f76c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f76e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f76f mov dword ptr [ebp - 0x98], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0xfu); }
  /* 0041f779 mov dword ptr [ebp - 0x9c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(ebx); }
  /* 0041f77f mov byte ptr [ebp - 0xac], bl */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041f785 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f788u; SAVEALL; call_ind(c, t_); RETCHK(0x41f788u, 0x41f785u); LOADALL; }
  /* 0041f788 mov ecx, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0041f78b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f78d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041f78f call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f792u; SAVEALL; call_ind(c, t_); RETCHK(0x41f792u, 0x41f78fu); LOADALL; }
  /* 0041f792 mov esi, edi */ { esi = (u32)(edi); }
  /* 0041f794 call 0x41f2a0 */ esp -= 4; M32(esp) = 0x41f799u; SAVEALL; F_0041f2a0(c); ABI_CHECK(0x41f2a0u, 0x41f794u); RETCHK(0x41f799u, 0x41f794u); LOADALL;
  /* 0041f799 mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0041f79c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f79e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041f7a0 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f7a3u; SAVEALL; call_ind(c, t_); RETCHK(0x41f7a3u, 0x41f7a0u); LOADALL; }
  /* 0041f7a3 call 0x41e440 */ esp -= 4; M32(esp) = 0x41f7a8u; SAVEALL; F_0041e440(c); ABI_CHECK(0x41e440u, 0x41f7a3u); RETCHK(0x41f7a8u, 0x41f7a3u); LOADALL;
  /* 0041f7a8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041f7ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041f7ac mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041f7b3 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0041f7b6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041f7b7 call 0x61af31 */ esp -= 4; M32(esp) = 0x41f7bcu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41f7b7u); RETCHK(0x41f7bcu, 0x41f7b7u); LOADALL;
  /* 0041f7bc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041f7be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041f7bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041f7c0(CPU *c) {
  NATIVE_HOOK(0x41f7c0u) REGS; LOADALL;
L_0041f7c0:;
  /* 0041f7c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041f7c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041f7c2 lea esi, [ebx + 0xd0] */ esi = (u32)((u32)(ebx + 0xd0u));
  /* 0041f7c8 mov edi, 0x11 */ { edi = (u32)(0x11u); }
  /* 0041f7cd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0041f7d0:;
  /* 0041f7d0 mov eax, dword ptr [esi - 0x44] */ { const u32 m_ = (u32)(esi + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0041f7d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041f7d5 je 0x41f7e0 */ if (ZF_) goto L_0041f7e0;
  /* 0041f7d7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041f7d9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f7db push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f7dd call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f7e0u; SAVEALL; call_ind(c, t_); RETCHK(0x41f7e0u, 0x41f7ddu); LOADALL; }
L_0041f7e0:;
  /* 0041f7e0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0041f7e2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041f7e4 je 0x41f7ef */ if (ZF_) goto L_0041f7ef;
  /* 0041f7e6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041f7e8 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f7ea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f7ec call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f7efu; SAVEALL; call_ind(c, t_); RETCHK(0x41f7efu, 0x41f7ecu); LOADALL; }
L_0041f7ef:;
  /* 0041f7ef add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041f7f2 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041f7f3 jne 0x41f7d0 */ if (!ZF_) goto L_0041f7d0;
  /* 0041f7f5 lea esi, [ebx + 0x114] */ esi = (u32)((u32)(ebx + 0x114u));
  /* 0041f7fb mov edi, 0x11 */ { edi = (u32)(0x11u); }
L_0041f800:;
  /* 0041f800 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0041f802 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041f804 je 0x41f80f */ if (ZF_) goto L_0041f80f;
  /* 0041f806 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041f808 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0041f80a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f80c call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f80fu; SAVEALL; call_ind(c, t_); RETCHK(0x41f80fu, 0x41f80cu); LOADALL; }
L_0041f80f:;
  /* 0041f80f add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041f812 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0041f813 jne 0x41f800 */ if (!ZF_) goto L_0041f800;
  /* 0041f815 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0041f817 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041f819 call 0x41ead0 */ esp -= 4; M32(esp) = 0x41f81eu; SAVEALL; F_0041ead0(c); ABI_CHECK(0x41ead0u, 0x41f819u); RETCHK(0x41f81eu, 0x41f819u); LOADALL;
  /* 0041f81e mov ecx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0041f821 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f823 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f825 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41f828u; SAVEALL; call_ind(c, t_); RETCHK(0x41f828u, 0x41f825u); LOADALL; }
  /* 0041f828 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041f829 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041f82a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041f830(CPU *c) {
  NATIVE_HOOK(0x41f830u) REGS; LOADALL;
L_0041f830:;
  /* 0041f830 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0041f833 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f835 jmp dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0041f840(CPU *c) {
  NATIVE_HOOK(0x41f840u) REGS; LOADALL;
L_0041f840:;
  /* 0041f840 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0041f843 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041f845 jmp dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0041f850(CPU *c) {
  NATIVE_HOOK(0x41f850u) REGS; LOADALL;
L_0041f850:;
  /* 0041f850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041f851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041f853 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041f856 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041f859 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 0041f85b add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041f85e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f85f add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041f862 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f863 call 0x61af76 */ esp -= 4; M32(esp) = 0x41f868u; SAVEALL; F_0061af76(c); ABI_CHECK(0x61af76u, 0x41f863u); RETCHK(0x41f868u, 0x41f863u); LOADALL;
  /* 0041f868 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0041f86a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041f86d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041f86f setl dl */ { edx = (edx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 0041f872 mov al, dl */ { eax = (eax & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0041f874 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041f875 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041f880(CPU *c) {
  NATIVE_HOOK(0x41f880u) REGS; LOADALL;
L_0041f880:;
  /* 0041f880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041f881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041f883 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041f885 push 0x620a28 */ { u32 v_ = 0x620a28u; esp -= 4; M32(esp) = v_; }
  /* 0041f88a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041f890 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f891 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041f898 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041f89b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f89c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041f89d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041f89e call 0x404690 */ esp -= 4; M32(esp) = 0x41f8a3u; SAVEALL; F_00404690(c); ABI_CHECK(0x404690u, 0x41f89eu); RETCHK(0x41f8a3u, 0x41f89eu); LOADALL;
  /* 0041f8a3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041f8a5 mov edi, eax */ { edi = (u32)(eax); }
  /* 0041f8a7 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0041f8aa mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0041f8ad mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0041f8b0 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041f8b3 mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 0041f8b6 mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 0041f8b9 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0041f8bc mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0041f8c0 mov esi, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); esi = (u32)(M32(m_)); }
  /* 0041f8c3 cmp esi, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f8c6 je 0x41f8f1 */ if (ZF_) goto L_0041f8f1;
L_0041f8c8:;
  /* 0041f8c8 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041f8cb mov eax, esi */ { eax = (u32)(esi); }
  /* 0041f8cd je 0x41f8d9 */ if (ZF_) goto L_0041f8d9;
  /* 0041f8cf lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0041f8d2 call 0x41fca0 */ esp -= 4; M32(esp) = 0x41f8d7u; SAVEALL; F_0041fca0(c); ABI_CHECK(0x41fca0u, 0x41f8d2u); RETCHK(0x41f8d7u, 0x41f8d2u); LOADALL;
  /* 0041f8d7 jmp 0x41f8e4 */ goto L_0041f8e4;
L_0041f8d9:;
  /* 0041f8d9 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0041f8dc call 0x41fca0 */ esp -= 4; M32(esp) = 0x41f8e1u; SAVEALL; F_0041fca0(c); ABI_CHECK(0x41fca0u, 0x41f8dcu); RETCHK(0x41f8e1u, 0x41f8dcu); LOADALL;
  /* 0041f8e1 mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
L_0041f8e4:;
  /* 0041f8e4 mov eax, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0041f8e7 add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041f8ed cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041f8ef jne 0x41f8c8 */ if (!ZF_) goto L_0041f8c8;
L_0041f8f1:;
  /* 0041f8f1 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0041f8f4 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0041f8f7 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041f8f9 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041f8fe imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041f900 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0041f903 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041f906 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041f908 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041f90b push 0x41f850 */ { u32 v_ = 0x41f850u; esp -= 4; M32(esp) = v_; }
  /* 0041f910 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041f912 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0041f915 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f916 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f917 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041f918 call 0x420430 */ esp -= 4; M32(esp) = 0x41f91du; SAVEALL; F_00420430(c); ABI_CHECK(0x420430u, 0x41f918u); RETCHK(0x41f91du, 0x41f918u); LOADALL;
  /* 0041f91d mov esi, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); esi = (u32)(M32(m_)); }
  /* 0041f920 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041f922 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041f924 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041f929 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041f92b sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041f92e mov eax, edx */ { eax = (u32)(edx); }
  /* 0041f930 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041f933 push 0x41f850 */ { u32 v_ = 0x41f850u; esp -= 4; M32(esp) = v_; }
  /* 0041f938 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041f93a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f93b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041f93c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f93d call 0x420430 */ esp -= 4; M32(esp) = 0x41f942u; SAVEALL; F_00420430(c); ABI_CHECK(0x420430u, 0x41f93du); RETCHK(0x41f942u, 0x41f93du); LOADALL;
  /* 0041f942 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0041f945 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041f948 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0041f94b add edi, 0x74 */ { u32 a_ = edi, b_ = 0x74u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0041f94e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f94f lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0041f952 mov edx, edi */ { edx = (u32)(edi); }
  /* 0041f954 call 0x41d6d0 */ esp -= 4; M32(esp) = 0x41f959u; SAVEALL; F_0041d6d0(c); ABI_CHECK(0x41d6d0u, 0x41f954u); RETCHK(0x41f959u, 0x41f954u); LOADALL;
  /* 0041f959 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041f95b mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 0041f95e mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0041f961 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0041f964 lea esi, [ebp - 0x3c] */ esi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0041f967 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0041f96b call 0x41d860 */ esp -= 4; M32(esp) = 0x41f970u; SAVEALL; F_0041d860(c); ABI_CHECK(0x41d860u, 0x41f96bu); RETCHK(0x41f970u, 0x41f96bu); LOADALL;
  /* 0041f970 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041f973 mov edx, esi */ { edx = (u32)(esi); }
  /* 0041f975 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041f976 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f977 call 0x41f9c0 */ esp -= 4; M32(esp) = 0x41f97cu; SAVEALL; F_0041f9c0(c); ABI_CHECK(0x41f9c0u, 0x41f977u); RETCHK(0x41f97cu, 0x41f977u); LOADALL;
  /* 0041f97c mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 0041f97f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041f981 je 0x41f98c */ if (ZF_) goto L_0041f98c;
  /* 0041f983 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f984 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f989u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f984u); RETCHK(0x41f989u, 0x41f984u); LOADALL;
  /* 0041f989 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f98c:;
  /* 0041f98c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041f98e je 0x41f999 */ if (ZF_) goto L_0041f999;
  /* 0041f990 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f991 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f996u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f991u); RETCHK(0x41f996u, 0x41f991u); LOADALL;
  /* 0041f996 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f999:;
  /* 0041f999 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0041f99c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041f99e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041f99f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041f9a0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041f9a1 je 0x41f9ac */ if (ZF_) goto L_0041f9ac;
  /* 0041f9a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f9a4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41f9a9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41f9a4u); RETCHK(0x41f9a9u, 0x41f9a4u); LOADALL;
  /* 0041f9a9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041f9ac:;
  /* 0041f9ac mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041f9af mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041f9b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041f9b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041f9b9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041f9c0(CPU *c) {
  NATIVE_HOOK(0x41f9c0u) REGS; LOADALL;
L_0041f9c0:;
  /* 0041f9c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041f9c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041f9c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041f9c5 push 0x6208f6 */ { u32 v_ = 0x6208f6u; esp -= 4; M32(esp) = v_; }
  /* 0041f9ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041f9d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041f9d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041f9d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041f9d9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041f9da mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0041f9dd mov eax, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0041f9e0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041f9e2 je 0x41fab8 */ if (ZF_) goto L_0041fab8;
  /* 0041f9e8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041f9e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041f9ea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041f9ec mov eax, edi */ { eax = (u32)(edi); }
  /* 0041f9ee call 0x41fba0 */ esp -= 4; M32(esp) = 0x41f9f3u; SAVEALL; F_0041fba0(c); ABI_CHECK(0x41fba0u, 0x41f9eeu); RETCHK(0x41f9f3u, 0x41f9eeu); LOADALL;
  /* 0041f9f3 mov esi, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); esi = (u32)(M32(m_)); }
  /* 0041f9f6 call 0x5156e0 */ esp -= 4; M32(esp) = 0x41f9fbu; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x41f9f6u); RETCHK(0x41f9fbu, 0x41f9f6u); LOADALL;
  /* 0041f9fb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041f9fe mov ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0041fa01 cmp ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041fa04 je 0x41fab6 */ if (ZF_) goto L_0041fab6;
  /* 0041fa0a jmp 0x41fa10 */ goto L_0041fa10;
L_0041fa0c:;
  /* 0041fa0c mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0041fa0f nop */ ;
L_0041fa10:;
  /* 0041fa10 mov al, byte ptr [ebx + 0x40] */ { const u32 m_ = (u32)(ebx + 0x40u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041fa13 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041fa15 push 0x98 */ { u32 v_ = 0x98u; esp -= 4; M32(esp) = v_; }
  /* 0041fa1a je 0x41fa55 */ if (ZF_) goto L_0041fa55;
  /* 0041fa1c call 0x5fe934 */ esp -= 4; M32(esp) = 0x41fa21u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41fa1cu); RETCHK(0x41fa21u, 0x41fa1cu); LOADALL;
  /* 0041fa21 mov esi, eax */ { esi = (u32)(eax); }
  /* 0041fa23 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041fa26 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0041fa29 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041fa2b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041fa2d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0041fa30 je 0x41fa95 */ if (ZF_) goto L_0041fa95;
  /* 0041fa32 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041fa34 push 0x64343c */ { u32 v_ = 0x64343cu; esp -= 4; M32(esp) = v_; }
  /* 0041fa39 push 0x193 */ { u32 v_ = 0x193u; esp -= 4; M32(esp) = v_; }
  /* 0041fa3e push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0041fa43 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41fa49u; SAVEALL; call_ind(c, t_); RETCHK(0x41fa49u, 0x41fa43u); LOADALL; }
  /* 0041fa49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fa4a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041fa4c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041fa4e call 0x41ce70 */ esp -= 4; M32(esp) = 0x41fa53u; SAVEALL; F_0041ce70(c); ABI_CHECK(0x41ce70u, 0x41fa4eu); RETCHK(0x41fa53u, 0x41fa4eu); LOADALL;
  /* 0041fa53 jmp 0x41fa95 */ goto L_0041fa95;
L_0041fa55:;
  /* 0041fa55 call 0x5fe934 */ esp -= 4; M32(esp) = 0x41fa5au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41fa55u); RETCHK(0x41fa5au, 0x41fa55u); LOADALL;
  /* 0041fa5a mov esi, eax */ { esi = (u32)(eax); }
  /* 0041fa5c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041fa5f mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0041fa62 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fa64 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0041fa6b je 0x41fa93 */ if (ZF_) goto L_0041fa93;
  /* 0041fa6d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0041fa6f push 0x64343c */ { u32 v_ = 0x64343cu; esp -= 4; M32(esp) = v_; }
  /* 0041fa74 push 0x192 */ { u32 v_ = 0x192u; esp -= 4; M32(esp) = v_; }
  /* 0041fa79 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0041fa7e call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x41fa84u; SAVEALL; call_ind(c, t_); RETCHK(0x41fa84u, 0x41fa7eu); LOADALL; }
  /* 0041fa84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fa85 mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 0041fa8a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041fa8c call 0x41ce70 */ esp -= 4; M32(esp) = 0x41fa91u; SAVEALL; F_0041ce70(c); ABI_CHECK(0x41ce70u, 0x41fa8cu); RETCHK(0x41fa91u, 0x41fa8cu); LOADALL;
  /* 0041fa91 jmp 0x41fa95 */ goto L_0041fa95;
L_0041fa93:;
  /* 0041fa93 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0041fa95:;
  /* 0041fa95 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0041fa9c mov edi, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); edi = (u32)(M32(m_)); }
  /* 0041fa9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041faa0 call 0x515650 */ esp -= 4; M32(esp) = 0x41faa5u; SAVEALL; F_00515650(c); ABI_CHECK(0x515650u, 0x41faa0u); RETCHK(0x41faa5u, 0x41faa0u); LOADALL;
  /* 0041faa5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0041faa8 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041faab add ebx, 0x41 */ { u32 a_ = ebx, b_ = 0x41u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0041faae cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041fab0 jne 0x41fa0c */ if (!ZF_) goto L_0041fa0c;
L_0041fab6:;
  /* 0041fab6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041fab7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0041fab8:;
  /* 0041fab8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041fabb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041fabc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041fac3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041fac5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fac6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0041fad0(CPU *c) {
  NATIVE_HOOK(0x41fad0u) REGS; LOADALL;
L_0041fad0:;
  /* 0041fad0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041fad1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041fad3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041fad5 push 0x624388 */ { u32 v_ = 0x624388u; esp -= 4; M32(esp) = v_; }
  /* 0041fada mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041fae0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fae1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041fae8 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041faeb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041faf0 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0041faf3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041faf5 mov dword ptr [ebp - 0x2f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); M32(m_) = (u32)(eax); }
  /* 0041faf8 mov dword ptr [ebp - 0x2b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd5u); M32(m_) = (u32)(eax); }
  /* 0041fafb mov dword ptr [ebp - 0x27], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd9u); M32(m_) = (u32)(eax); }
  /* 0041fafe mov dword ptr [ebp - 0x23], eax */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M32(m_) = (u32)(eax); }
  /* 0041fb01 mov dword ptr [ebp - 0x1f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M32(m_) = (u32)(eax); }
  /* 0041fb04 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fb05 mov dword ptr [ebp - 0x1b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M32(m_) = (u32)(eax); }
  /* 0041fb08 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041fb09 mov dword ptr [ebp - 0x17], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(eax); }
  /* 0041fb0c mov word ptr [ebp - 0x13], ax */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0041fb10 lea esi, [edi + 0x74] */ esi = (u32)((u32)(edi + 0x74u));
  /* 0041fb13 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0041fb15 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041fb17 mov byte ptr [ebp - 0x30], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041fb1a mov byte ptr [ebp - 0x11], al */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0041fb1d call 0x41d7a0 */ esp -= 4; M32(esp) = 0x41fb22u; SAVEALL; F_0041d7a0(c); ABI_CHECK(0x41d7a0u, 0x41fb1du); RETCHK(0x41fb22u, 0x41fb1du); LOADALL;
  /* 0041fb22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fb23 call 0x41d840 */ esp -= 4; M32(esp) = 0x41fb28u; SAVEALL; F_0041d840(c); ABI_CHECK(0x41d840u, 0x41fb23u); RETCHK(0x41fb28u, 0x41fb23u); LOADALL;
  /* 0041fb28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fb29 push 0x6441cc */ { u32 v_ = 0x6441ccu; esp -= 4; M32(esp) = v_; }
  /* 0041fb2e lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041fb31 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0041fb33 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041fb34 call 0x5fe928 */ esp -= 4; M32(esp) = 0x41fb39u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x41fb34u); RETCHK(0x41fb39u, 0x41fb34u); LOADALL;
  /* 0041fb39 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041fb3c add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041fb3f mov dword ptr [ebp - 0x34], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0xfu); }
  /* 0041fb46 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 0041fb49 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0041fb4c lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0041fb4f nop */ ;
L_0041fb50:;
  /* 0041fb50 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0041fb52 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0041fb53 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0041fb55 jne 0x41fb50 */ if (!ZF_) goto L_0041fb50;
  /* 0041fb57 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041fb59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fb5a lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0041fb5d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041fb5e lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0041fb61 call 0x404420 */ esp -= 4; M32(esp) = 0x41fb66u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x41fb61u); RETCHK(0x41fb66u, 0x41fb61u); LOADALL;
  /* 0041fb66 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0041fb69 mov esi, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); esi = (u32)(M32(m_)); }
  /* 0041fb6c lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0041fb6f call 0x5224b0 */ esp -= 4; M32(esp) = 0x41fb74u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x41fb6fu); RETCHK(0x41fb74u, 0x41fb6fu); LOADALL;
  /* 0041fb74 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041fb78 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041fb79 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041fb7a jb 0x41fb88 */ if (CF_) goto L_0041fb88;
  /* 0041fb7c mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0041fb7f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fb80 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41fb85u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41fb80u); RETCHK(0x41fb85u, 0x41fb80u); LOADALL;
  /* 0041fb85 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041fb88:;
  /* 0041fb88 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0041fb8b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0041fb92 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0041fb95 call 0x61af31 */ esp -= 4; M32(esp) = 0x41fb9au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x41fb95u); RETCHK(0x41fb9au, 0x41fb95u); LOADALL;
  /* 0041fb9a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041fb9c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fb9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041fba0(CPU *c) {
  NATIVE_HOOK(0x41fba0u) REGS; LOADALL;
L_0041fba0:;
  /* 0041fba0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041fba1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041fba3 mov ecx, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); ecx = (u32)(M32(m_)); }
  /* 0041fba6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0041fba8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fba9 jmp dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0041fbb0(CPU *c) {
  NATIVE_HOOK(0x41fbb0u) REGS; LOADALL;
L_0041fbb0:;
  /* 0041fbb0 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041fbb2 call 0x41e3e0 */ esp -= 4; M32(esp) = 0x41fbb7u; SAVEALL; F_0041e3e0(c); ABI_CHECK(0x41e3e0u, 0x41fbb2u); RETCHK(0x41fbb7u, 0x41fbb2u); LOADALL;
  /* 0041fbb7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041fbb9 jne 0x41fbc1 */ if (!ZF_) goto L_0041fbc1;
  /* 0041fbbb mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 0041fbc0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041fbc1:;
  /* 0041fbc1 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041fbc3 call 0x41f840 */ esp -= 4; M32(esp) = 0x41fbc8u; SAVEALL; F_0041f840(c); ABI_CHECK(0x41f840u, 0x41fbc3u); RETCHK(0x41fbc8u, 0x41fbc3u); LOADALL;
  /* 0041fbc8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0041fbca je 0x41fbd2 */ if (ZF_) goto L_0041fbd2;
  /* 0041fbcc mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 0041fbd1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041fbd2:;
  /* 0041fbd2 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041fbd4 call 0x41f830 */ esp -= 4; M32(esp) = 0x41fbd9u; SAVEALL; F_0041f830(c); ABI_CHECK(0x41f830u, 0x41fbd4u); RETCHK(0x41fbd9u, 0x41fbd4u); LOADALL;
  /* 0041fbd9 neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 0041fbdb sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0041fbdd and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041fbe0 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041fbe3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041fbf0(CPU *c) {
  NATIVE_HOOK(0x41fbf0u) REGS; LOADALL;
L_0041fbf0:;
  /* 0041fbf0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041fbf3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fbf5 jne 0x41fbf8 */ if (!ZF_) goto L_0041fbf8;
  /* 0041fbf7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041fbf8:;
  /* 0041fbf8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041fbfb sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041fbfd mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fc02 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fc04 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fc07 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041fc09 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041fc0c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041fc0e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041fc10(CPU *c) {
  NATIVE_HOOK(0x41fc10u) REGS; LOADALL;
L_0041fc10:;
  /* 0041fc10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041fc11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041fc13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041fc14 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fc15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041fc16 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041fc17 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041fc19 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0041fc1c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fc1e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0041fc20 jne 0x41fc26 */ if (!ZF_) goto L_0041fc26;
  /* 0041fc22 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041fc24 jmp 0x41fc3c */ goto L_0041fc3c;
L_0041fc26:;
  /* 0041fc26 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041fc29 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041fc2b mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fc30 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fc32 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fc35 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0041fc37 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0041fc3a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0041fc3c:;
  /* 0041fc3c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fc3e je 0x41fc7d */ if (ZF_) goto L_0041fc7d;
  /* 0041fc40 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041fc43 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041fc45 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fc4a imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fc4c sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fc4f mov eax, edx */ { eax = (u32)(edx); }
  /* 0041fc51 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041fc54 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041fc56 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041fc58 jae 0x41fc7d */ if (!CF_) goto L_0041fc7d;
  /* 0041fc5a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0041fc5d mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0041fc60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fc61 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0041fc66 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041fc68 call 0x420570 */ esp -= 4; M32(esp) = 0x41fc6du; SAVEALL; F_00420570(c); ABI_CHECK(0x420570u, 0x41fc68u); RETCHK(0x41fc6du, 0x41fc68u); LOADALL;
  /* 0041fc6d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041fc70 add esi, 0x41 */ { u32 a_ = esi, b_ = 0x41u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041fc73 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0041fc76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041fc77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041fc78 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041fc79 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041fc7b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fc7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041fc7d:;
  /* 0041fc7d mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041fc80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fc81 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fc82 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0041fc85 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041fc86 call 0x41fd30 */ esp -= 4; M32(esp) = 0x41fc8bu; SAVEALL; F_0041fd30(c); ABI_CHECK(0x41fd30u, 0x41fc86u); RETCHK(0x41fc8bu, 0x41fc86u); LOADALL;
  /* 0041fc8b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041fc8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041fc8d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041fc8e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041fc90 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fc91 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041fca0(CPU *c) {
  NATIVE_HOOK(0x41fca0u) REGS; LOADALL;
L_0041fca0:;
  /* 0041fca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041fca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041fca3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041fca4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fca5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041fca6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041fca7 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0041fca9 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0041fcac test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fcae mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0041fcb0 jne 0x41fcb6 */ if (!ZF_) goto L_0041fcb6;
  /* 0041fcb2 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041fcb4 jmp 0x41fccc */ goto L_0041fccc;
L_0041fcb6:;
  /* 0041fcb6 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041fcb9 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041fcbb mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fcc0 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fcc2 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fcc5 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0041fcc7 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0041fcca add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0041fccc:;
  /* 0041fccc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fcce je 0x41fd10 */ if (ZF_) goto L_0041fd10;
  /* 0041fcd0 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041fcd3 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041fcd5 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fcda imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fcdc sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fcdf mov eax, edx */ { eax = (u32)(edx); }
  /* 0041fce1 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041fce4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041fce6 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041fce8 jae 0x41fd10 */ if (!CF_) goto L_0041fd10;
  /* 0041fcea mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0041fced mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0041fcf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fcf1 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0041fcf6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041fcf8 call 0x4205a0 */ esp -= 4; M32(esp) = 0x41fcfdu; SAVEALL; F_004205a0(c); ABI_CHECK(0x4205a0u, 0x41fcf8u); RETCHK(0x41fcfdu, 0x41fcf8u); LOADALL;
  /* 0041fcfd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041fd00 add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041fd06 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0041fd09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041fd0a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041fd0b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041fd0c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041fd0e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fd0f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041fd10:;
  /* 0041fd10 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041fd13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fd14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fd15 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0041fd18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041fd19 call 0x41fdb0 */ esp -= 4; M32(esp) = 0x41fd1eu; SAVEALL; F_0041fdb0(c); ABI_CHECK(0x41fdb0u, 0x41fd19u); RETCHK(0x41fd1eu, 0x41fd19u); LOADALL;
  /* 0041fd1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0041fd1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041fd20 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041fd21 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041fd23 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fd24 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041fd30(CPU *c) {
  NATIVE_HOOK(0x41fd30u) REGS; LOADALL;
L_0041fd30:;
  /* 0041fd30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041fd31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041fd33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fd34 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041fd37 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041fd38 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0041fd3b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fd3d je 0x41fd5a */ if (ZF_) goto L_0041fd5a;
  /* 0041fd3f mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041fd42 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041fd44 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fd49 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fd4b sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fd4e mov eax, edx */ { eax = (u32)(edx); }
  /* 0041fd50 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041fd53 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041fd55 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0041fd58 jne 0x41fd5e */ if (!ZF_) goto L_0041fd5e;
L_0041fd5a:;
  /* 0041fd5a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0041fd5c jmp 0x41fd73 */ goto L_0041fd73;
L_0041fd5e:;
  /* 0041fd5e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041fd60 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041fd62 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fd67 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fd69 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fd6c mov esi, edx */ { esi = (u32)(edx); }
  /* 0041fd6e shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0041fd71 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0041fd73:;
  /* 0041fd73 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0041fd76 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041fd78 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fd79 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041fd7a call 0x41fe50 */ esp -= 4; M32(esp) = 0x41fd7fu; SAVEALL; F_0041fe50(c); ABI_CHECK(0x41fe50u, 0x41fd7au); RETCHK(0x41fd7fu, 0x41fd7au); LOADALL;
  /* 0041fd7f imul esi, esi, 0x41 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fd82 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041fd85 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041fd88 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0041fd8a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041fd8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041fd8c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fd8d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041fd90(CPU *c) {
  NATIVE_HOOK(0x41fd90u) REGS; LOADALL;
L_0041fd90:;
  /* 0041fd90 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0041fd93 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fd95 jne 0x41fd98 */ if (!ZF_) goto L_0041fd98;
  /* 0041fd97 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0041fd98:;
  /* 0041fd98 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041fd9b sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041fd9d mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fda2 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fda4 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fda7 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041fda9 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041fdac add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041fdae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0041fdb0(CPU *c) {
  NATIVE_HOOK(0x41fdb0u) REGS; LOADALL;
L_0041fdb0:;
  /* 0041fdb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041fdb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041fdb3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fdb4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041fdb7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041fdb8 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0041fdbb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fdbd je 0x41fdda */ if (ZF_) goto L_0041fdda;
  /* 0041fdbf mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041fdc2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041fdc4 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fdc9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fdcb sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fdce mov eax, edx */ { eax = (u32)(edx); }
  /* 0041fdd0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041fdd3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041fdd5 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0041fdd8 jne 0x41fdde */ if (!ZF_) goto L_0041fdde;
L_0041fdda:;
  /* 0041fdda xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0041fddc jmp 0x41fdf3 */ goto L_0041fdf3;
L_0041fdde:;
  /* 0041fdde mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0041fde0 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041fde2 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fde7 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fde9 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fdec mov esi, edx */ { esi = (u32)(edx); }
  /* 0041fdee shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0041fdf1 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0041fdf3:;
  /* 0041fdf3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0041fdf6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0041fdf8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fdf9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041fdfa call 0x4200e0 */ esp -= 4; M32(esp) = 0x41fdffu; SAVEALL; F_004200e0(c); ABI_CHECK(0x4200e0u, 0x41fdfau); RETCHK(0x41fdffu, 0x41fdfau); LOADALL;
  /* 0041fdff imul esi, esi, 0x82 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fe05 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0041fe08 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0041fe0b mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0041fe0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0041fe0e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0041fe0f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fe10 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041fe20(CPU *c) {
  NATIVE_HOOK(0x41fe20u) REGS; LOADALL;
L_0041fe20:;
  /* 0041fe20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041fe21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041fe23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041fe24 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0041fe27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fe28 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041fe2a mov eax, edi */ { eax = (u32)(edi); }
  /* 0041fe2c call 0x4205a0 */ esp -= 4; M32(esp) = 0x41fe31u; SAVEALL; F_004205a0(c); ABI_CHECK(0x4205a0u, 0x41fe2cu); RETCHK(0x41fe31u, 0x41fe2cu); LOADALL;
  /* 0041fe31 mov eax, esi */ { eax = (u32)(esi); }
  /* 0041fe33 imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fe39 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041fe3c add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041fe3e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0041fe40 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0041fe41 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0041fe50(CPU *c) {
  NATIVE_HOOK(0x41fe50u) REGS; LOADALL;
L_0041fe50:;
  /* 0041fe50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0041fe51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0041fe53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0041fe55 push 0x61d2d0 */ { u32 v_ = 0x61d2d0u; esp -= 4; M32(esp) = v_; }
  /* 0041fe5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0041fe60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0041fe61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0041fe68 sub esp, 0x54 */ { u32 a_ = esp, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041fe6b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0041fe70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041fe71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0041fe72 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0041fe73 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0041fe78 mov esi, edx */ { esi = (u32)(edx); }
  /* 0041fe7a lea edi, [ebp - 0x58] */ edi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0041fe7d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0041fe7f movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = M8(esi); esi += st_; edi += st_; }
  /* 0041fe80 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0041fe83 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0041fe86 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fe88 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0041fe8b mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0041fe8e jne 0x41fe94 */ if (!ZF_) goto L_0041fe94;
  /* 0041fe90 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041fe92 jmp 0x41feaa */ goto L_0041feaa;
L_0041fe94:;
  /* 0041fe94 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041fe97 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041fe99 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fe9e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fea0 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fea3 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0041fea5 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0041fea8 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0041feaa:;
  /* 0041feaa mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0041fead test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041feaf je 0x4200b8 */ if (ZF_) goto L_004200b8;
  /* 0041feb5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041feb7 jne 0x41febd */ if (!ZF_) goto L_0041febd;
  /* 0041feb9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041febb jmp 0x41fed3 */ goto L_0041fed3;
L_0041febd:;
  /* 0041febd mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041fec0 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041fec2 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fec7 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fec9 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fecc mov eax, edx */ { eax = (u32)(edx); }
  /* 0041fece shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041fed1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0041fed3:;
  /* 0041fed3 mov edx, 0x3f03f03 */ { edx = (u32)(0x3f03f03u); }
  /* 0041fed8 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041feda cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041fedc jae 0x41fee3 */ if (!CF_) goto L_0041fee3;
  /* 0041fede call 0x49ac70 */ esp -= 4; M32(esp) = 0x41fee3u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x41fedeu); RETCHK(0x41fee3u, 0x41fedeu); LOADALL;
L_0041fee3:;
  /* 0041fee3 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041fee5 jne 0x41feeb */ if (!ZF_) goto L_0041feeb;
  /* 0041fee7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041fee9 jmp 0x41ff01 */ goto L_0041ff01;
L_0041feeb:;
  /* 0041feeb mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041feee sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041fef0 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041fef5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041fef7 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041fefa mov eax, edx */ { eax = (u32)(edx); }
  /* 0041fefc shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041feff add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0041ff01:;
  /* 0041ff01 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ff03 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ff05 jae 0x420007 */ if (!CF_) goto L_00420007;
  /* 0041ff0b mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0041ff0d shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041ff0f mov edx, 0x3f03f03 */ { edx = (u32)(0x3f03f03u); }
  /* 0041ff14 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ff16 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ff18 jae 0x41ff1e */ if (!CF_) goto L_0041ff1e;
  /* 0041ff1a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0041ff1c jmp 0x41ff20 */ goto L_0041ff20;
L_0041ff1e:;
  /* 0041ff1e add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0041ff20:;
  /* 0041ff20 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ff22 jne 0x41ff28 */ if (!ZF_) goto L_0041ff28;
  /* 0041ff24 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041ff26 jmp 0x41ff3e */ goto L_0041ff3e;
L_0041ff28:;
  /* 0041ff28 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0041ff2b sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0041ff2d mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041ff32 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ff34 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041ff37 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041ff39 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041ff3c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0041ff3e:;
  /* 0041ff3e add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ff40 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0041ff42 jae 0x41ff4f */ if (!CF_) goto L_0041ff4f;
  /* 0041ff44 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0041ff46 call 0x41fbf0 */ esp -= 4; M32(esp) = 0x41ff4bu; SAVEALL; F_0041fbf0(c); ABI_CHECK(0x41fbf0u, 0x41ff46u); RETCHK(0x41ff4bu, 0x41ff46u); LOADALL;
  /* 0041ff4b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0041ff4d add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0041ff4f:;
  /* 0041ff4f imul ecx, ecx, 0x41 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ff52 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041ff53 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0041ff56 call 0x5fe934 */ esp -= 4; M32(esp) = 0x41ff5bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x41ff56u); RETCHK(0x41ff5bu, 0x41ff56u); LOADALL;
  /* 0041ff5b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0041ff62 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0041ff65 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0041ff68 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0041ff6b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0041ff6c mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 0041ff6f call 0x420b30 */ esp -= 4; M32(esp) = 0x41ff74u; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x41ff6fu); RETCHK(0x41ff74u, 0x41ff6fu); LOADALL;
  /* 0041ff74 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041ff77 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ff7a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041ff7b lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0041ff7e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041ff80 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 0041ff83 call 0x420570 */ esp -= 4; M32(esp) = 0x41ff88u; SAVEALL; F_00420570(c); ABI_CHECK(0x420570u, 0x41ff83u); RETCHK(0x41ff88u, 0x41ff83u); LOADALL;
  /* 0041ff88 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041ff8b mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 0041ff8e mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0041ff91 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0041ff93 imul ecx, ecx, 0x41 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ff96 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ff99 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041ff9a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0041ff9d add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0041ff9f call 0x420b30 */ esp -= 4; M32(esp) = 0x41ffa4u; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x41ff9fu); RETCHK(0x41ffa4u, 0x41ff9fu); LOADALL;
  /* 0041ffa4 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0041ffa7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041ffaa test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ffac jne 0x41ffb2 */ if (!ZF_) goto L_0041ffb2;
  /* 0041ffae xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0041ffb0 jmp 0x41ffc8 */ goto L_0041ffc8;
L_0041ffb2:;
  /* 0041ffb2 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041ffb5 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041ffb7 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0041ffbc imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ffbe sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0041ffc1 mov eax, edx */ { eax = (u32)(edx); }
  /* 0041ffc3 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0041ffc6 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0041ffc8:;
  /* 0041ffc8 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0041ffca test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0041ffcc je 0x41ffd7 */ if (ZF_) goto L_0041ffd7;
  /* 0041ffce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0041ffcf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41ffd4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41ffcfu); RETCHK(0x41ffd4u, 0x41ffcfu); LOADALL;
  /* 0041ffd4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0041ffd7:;
  /* 0041ffd7 mov eax, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); eax = (u32)(M32(m_)); }
  /* 0041ffda imul edi, edi, 0x41 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0041ffdd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0041ffe0 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0041ffe2 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0041ffe4 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0041ffe7 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0041ffea mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0041ffed jmp 0x4200b8 */ goto L_004200b8;
L_00420007:;
  /* 00420007 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0042000a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0042000d mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0042000f sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420011 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420016 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420018 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042001b mov eax, edx */ { eax = (u32)(edx); }
  /* 0042001d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420020 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420022 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420024 jae 0x420081 */ if (!CF_) goto L_00420081;
  /* 00420026 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00420029 mov eax, edi */ { eax = (u32)(edi); }
  /* 0042002b imul eax, eax, 0x41 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042002e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420031 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420032 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420034 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00420036 call 0x420b30 */ esp -= 4; M32(esp) = 0x42003bu; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420036u); RETCHK(0x42003bu, 0x420036u); LOADALL;
  /* 0042003b mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00420042 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00420045 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420048 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042004d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042004f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420052 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420055 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420057 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042005a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042005c sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0042005e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420061 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420062 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00420065 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00420067 call 0x420570 */ esp -= 4; M32(esp) = 0x42006cu; SAVEALL; F_00420570(c); ABI_CHECK(0x420570u, 0x420067u); RETCHK(0x42006cu, 0x420067u); LOADALL;
  /* 0042006c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042006f mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420072 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420074 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420077 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0042007a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042007c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042007f jmp 0x4200b0 */ goto L_004200b0;
L_00420081:;
  /* 00420081 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420084 imul edi, edi, 0x41 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420087 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00420089 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042008b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042008c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0042008e mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00420091 call 0x420b30 */ esp -= 4; M32(esp) = 0x420096u; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420091u); RETCHK(0x420096u, 0x420091u); LOADALL;
  /* 00420096 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420099 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0042009c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0042009f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004200a1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004200a4 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 004200a6 call 0x4203c0 */ esp -= 4; M32(esp) = 0x4200abu; SAVEALL; F_004203c0(c); ABI_CHECK(0x4203c0u, 0x4200a6u); RETCHK(0x4200abu, 0x4200a6u); LOADALL;
  /* 004200ab lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 004200ae mov eax, esi */ { eax = (u32)(esi); }
L_004200b0:;
  /* 004200b0 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 004200b3 call 0x4203a0 */ esp -= 4; M32(esp) = 0x4200b8u; SAVEALL; F_004203a0(c); ABI_CHECK(0x4203a0u, 0x4200b3u); RETCHK(0x4200b8u, 0x4200b3u); LOADALL;
L_004200b8:;
  /* 004200b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004200bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004200c2 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004200c5 call 0x61af31 */ esp -= 4; M32(esp) = 0x4200cau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4200c5u); RETCHK(0x4200cau, 0x4200c5u); LOADALL;
  /* 004200ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004200cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004200cc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004200cd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004200cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004200d0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041fff2(CPU *c) {
  NATIVE_HOOK(0x41fff2u) REGS; LOADALL;
L_0041fff2:;
  /* 0041fff2 mov edx, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); edx = (u32)(M32(m_)); }
  /* 0041fff5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0041fff6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x41fffbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x41fff6u); RETCHK(0x41fffbu, 0x41fff6u); LOADALL;
  /* 0041fffb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0041fffe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00420000 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00420002 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00420007 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0042000a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0042000d mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0042000f sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420011 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420016 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420018 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042001b mov eax, edx */ { eax = (u32)(edx); }
  /* 0042001d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420020 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420022 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420024 jae 0x420081 */ if (!CF_) goto L_00420081;
  /* 00420026 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00420029 mov eax, edi */ { eax = (u32)(edi); }
  /* 0042002b imul eax, eax, 0x41 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042002e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420031 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420032 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420034 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00420036 call 0x420b30 */ esp -= 4; M32(esp) = 0x42003bu; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420036u); RETCHK(0x42003bu, 0x420036u); LOADALL;
  /* 0042003b mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00420042 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00420045 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420048 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042004d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042004f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420052 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420055 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420057 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042005a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042005c sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0042005e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420061 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420062 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00420065 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00420067 call 0x420570 */ esp -= 4; M32(esp) = 0x42006cu; SAVEALL; F_00420570(c); ABI_CHECK(0x420570u, 0x420067u); RETCHK(0x42006cu, 0x420067u); LOADALL;
  /* 0042006c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042006f mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420072 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420074 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420077 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0042007a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042007c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042007f jmp 0x4200b0 */ goto L_004200b0;
L_00420081:;
  /* 00420081 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420084 imul edi, edi, 0x41 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420087 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00420089 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042008b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042008c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0042008e mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00420091 call 0x420b30 */ esp -= 4; M32(esp) = 0x420096u; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420091u); RETCHK(0x420096u, 0x420091u); LOADALL;
  /* 00420096 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420099 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0042009c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0042009f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004200a1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004200a4 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 004200a6 call 0x4203c0 */ esp -= 4; M32(esp) = 0x4200abu; SAVEALL; F_004203c0(c); ABI_CHECK(0x4203c0u, 0x4200a6u); RETCHK(0x4200abu, 0x4200a6u); LOADALL;
  /* 004200ab lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 004200ae mov eax, esi */ { eax = (u32)(esi); }
L_004200b0:;
  /* 004200b0 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 004200b3 call 0x4203a0 */ esp -= 4; M32(esp) = 0x4200b8u; SAVEALL; F_004203a0(c); ABI_CHECK(0x4203a0u, 0x4200b3u); RETCHK(0x4200b8u, 0x4200b3u); LOADALL;
  /* 004200b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004200bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004200c2 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004200c5 call 0x61af31 */ esp -= 4; M32(esp) = 0x4200cau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4200c5u); RETCHK(0x4200cau, 0x4200c5u); LOADALL;
  /* 004200ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004200cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004200cc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004200cd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004200cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004200d0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0041fffe(CPU *c) {
  NATIVE_HOOK(0x41fffeu) REGS; LOADALL;
L_0041fffe:;
  /* 0041fffe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00420000 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00420002 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00420007 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0042000a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0042000d mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0042000f sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420011 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420016 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420018 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042001b mov eax, edx */ { eax = (u32)(edx); }
  /* 0042001d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420020 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420022 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420024 jae 0x420081 */ if (!CF_) goto L_00420081;
  /* 00420026 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00420029 mov eax, edi */ { eax = (u32)(edi); }
  /* 0042002b imul eax, eax, 0x41 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042002e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420031 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420032 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420034 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00420036 call 0x420b30 */ esp -= 4; M32(esp) = 0x42003bu; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420036u); RETCHK(0x42003bu, 0x420036u); LOADALL;
  /* 0042003b mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00420042 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00420045 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420048 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042004d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042004f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420052 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420055 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420057 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042005a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042005c sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0042005e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420061 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420062 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00420065 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00420067 call 0x420570 */ esp -= 4; M32(esp) = 0x42006cu; SAVEALL; F_00420570(c); ABI_CHECK(0x420570u, 0x420067u); RETCHK(0x42006cu, 0x420067u); LOADALL;
  /* 0042006c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042006f mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420072 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420074 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420077 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0042007a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042007c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042007f jmp 0x4200b0 */ goto L_004200b0;
L_00420081:;
  /* 00420081 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420084 imul edi, edi, 0x41 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420087 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00420089 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042008b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042008c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0042008e mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00420091 call 0x420b30 */ esp -= 4; M32(esp) = 0x420096u; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420091u); RETCHK(0x420096u, 0x420091u); LOADALL;
  /* 00420096 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420099 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0042009c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0042009f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004200a1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004200a4 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 004200a6 call 0x4203c0 */ esp -= 4; M32(esp) = 0x4200abu; SAVEALL; F_004203c0(c); ABI_CHECK(0x4203c0u, 0x4200a6u); RETCHK(0x4200abu, 0x4200a6u); LOADALL;
  /* 004200ab lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 004200ae mov eax, esi */ { eax = (u32)(esi); }
L_004200b0:;
  /* 004200b0 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 004200b3 call 0x4203a0 */ esp -= 4; M32(esp) = 0x4200b8u; SAVEALL; F_004203a0(c); ABI_CHECK(0x4203a0u, 0x4200b3u); RETCHK(0x4200b8u, 0x4200b3u); LOADALL;
  /* 004200b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004200bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004200c2 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004200c5 call 0x61af31 */ esp -= 4; M32(esp) = 0x4200cau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4200c5u); RETCHK(0x4200cau, 0x4200c5u); LOADALL;
  /* 004200ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004200cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004200cc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004200cd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004200cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004200d0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00420020(CPU *c) {
  NATIVE_HOOK(0x420020u) REGS; LOADALL;
L_00420020:;
  /* 00420020 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420022 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420024 jae 0x420081 */ if (!CF_) goto L_00420081;
  /* 00420026 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00420029 mov eax, edi */ { eax = (u32)(edi); }
  /* 0042002b imul eax, eax, 0x41 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042002e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420031 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420032 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420034 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00420036 call 0x420b30 */ esp -= 4; M32(esp) = 0x42003bu; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420036u); RETCHK(0x42003bu, 0x420036u); LOADALL;
  /* 0042003b mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00420042 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00420045 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420048 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042004d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042004f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420052 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420055 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420057 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042005a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042005c sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0042005e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420061 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420062 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00420065 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00420067 call 0x420570 */ esp -= 4; M32(esp) = 0x42006cu; SAVEALL; F_00420570(c); ABI_CHECK(0x420570u, 0x420067u); RETCHK(0x42006cu, 0x420067u); LOADALL;
  /* 0042006c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042006f mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420072 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420074 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420077 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0042007a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042007c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042007f jmp 0x4200b0 */ goto L_004200b0;
L_00420081:;
  /* 00420081 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420084 imul edi, edi, 0x41 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420087 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00420089 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042008b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042008c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0042008e mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00420091 call 0x420b30 */ esp -= 4; M32(esp) = 0x420096u; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420091u); RETCHK(0x420096u, 0x420091u); LOADALL;
  /* 00420096 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420099 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0042009c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0042009f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004200a1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004200a4 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 004200a6 call 0x4203c0 */ esp -= 4; M32(esp) = 0x4200abu; SAVEALL; F_004203c0(c); ABI_CHECK(0x4203c0u, 0x4200a6u); RETCHK(0x4200abu, 0x4200a6u); LOADALL;
  /* 004200ab lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 004200ae mov eax, esi */ { eax = (u32)(esi); }
L_004200b0:;
  /* 004200b0 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 004200b3 call 0x4203a0 */ esp -= 4; M32(esp) = 0x4200b8u; SAVEALL; F_004203a0(c); ABI_CHECK(0x4203a0u, 0x4200b3u); RETCHK(0x4200b8u, 0x4200b3u); LOADALL;
  /* 004200b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004200bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004200c2 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004200c5 call 0x61af31 */ esp -= 4; M32(esp) = 0x4200cau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4200c5u); RETCHK(0x4200cau, 0x4200c5u); LOADALL;
  /* 004200ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004200cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004200cc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004200cd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004200cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004200d0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0042002e(CPU *c) {
  NATIVE_HOOK(0x42002eu) REGS; LOADALL;
L_0042002e:;
  /* 0042002e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420031 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420032 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420034 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00420036 call 0x420b30 */ esp -= 4; M32(esp) = 0x42003bu; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420036u); RETCHK(0x42003bu, 0x420036u); LOADALL;
  /* 0042003b mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00420042 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00420045 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420048 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042004d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042004f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420052 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420055 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420057 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042005a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042005c sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0042005e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420061 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420062 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00420065 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00420067 call 0x420570 */ esp -= 4; M32(esp) = 0x42006cu; SAVEALL; F_00420570(c); ABI_CHECK(0x420570u, 0x420067u); RETCHK(0x42006cu, 0x420067u); LOADALL;
  /* 0042006c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042006f mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420072 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420074 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420077 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0042007a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042007c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042007f jmp 0x4200b0 */ goto L_004200b0;
L_004200b0:;
  /* 004200b0 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 004200b3 call 0x4203a0 */ esp -= 4; M32(esp) = 0x4200b8u; SAVEALL; F_004203a0(c); ABI_CHECK(0x4203a0u, 0x4200b3u); RETCHK(0x4200b8u, 0x4200b3u); LOADALL;
  /* 004200b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004200bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004200c2 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004200c5 call 0x61af31 */ esp -= 4; M32(esp) = 0x4200cau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4200c5u); RETCHK(0x4200cau, 0x4200c5u); LOADALL;
  /* 004200ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004200cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004200cc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004200cd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004200cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004200d0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00420041(CPU *c) {
  NATIVE_HOOK(0x420041u) REGS; LOADALL;
  goto L_00420041;
L_0042002b:;
  /* 0042002b imul eax, eax, 0x41 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x41u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042002e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420031 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420032 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420034 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00420036 call 0x420b30 */ esp -= 4; M32(esp) = 0x42003bu; SAVEALL; F_00420b30(c); ABI_CHECK(0x420b30u, 0x420036u); RETCHK(0x42003bu, 0x420036u); LOADALL;
  /* 0042003b mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  goto L_00420042;
L_00420041:;
  /* 00420041 add byte ptr [ebx + 0x4d2b084e], cl */ { const u32 m_ = (u32)(ebx + 0x4d2b084eu); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  goto L_00420047;
L_00420042:;
  /* 00420042 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
L_00420045:;
  /* 00420045 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  goto L_00420048;
L_00420047:;
  /* 00420047 or al, 0xb8 */ { u32 a_ = (eax & 0xffu), b_ = 0xb8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  goto L_00420049;
L_00420048:;
  /* 00420048 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  goto L_0042004d;
L_00420049:;
  /* 00420049 jg 0x42002b */ if (!(ZF_|LT_)) goto L_0042002b;
  /* 0042004b pop es */ TRAP(0x42004bu, "unimpl pop es");
  /* 0042004c jle 0x420045 */ if ((ZF_|LT_)) goto L_00420045;
  goto L_0042004e;
L_0042004d:;
  /* 0042004d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  goto L_0042004f;
L_0042004e:;
  /* 0042004e jmp 0xc14e4dde */ TRAP(0xc14e4ddeu, "bad jump target");
L_0042004f:;
  /* 0042004f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420052 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420055 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420057 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042005a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042005c sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0042005e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420061 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420062 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00420065 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00420067 call 0x420570 */ esp -= 4; M32(esp) = 0x42006cu; SAVEALL; F_00420570(c); ABI_CHECK(0x420570u, 0x420067u); RETCHK(0x42006cu, 0x420067u); LOADALL;
  /* 0042006c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042006f mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420072 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420074 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420077 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0042007a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042007c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042007f jmp 0x4200b0 */ goto L_004200b0;
L_004200b0:;
  /* 004200b0 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 004200b3 call 0x4203a0 */ esp -= 4; M32(esp) = 0x4200b8u; SAVEALL; F_004203a0(c); ABI_CHECK(0x4203a0u, 0x4200b3u); RETCHK(0x4200b8u, 0x4200b3u); LOADALL;
  /* 004200b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004200bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004200c2 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004200c5 call 0x61af31 */ esp -= 4; M32(esp) = 0x4200cau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4200c5u); RETCHK(0x4200cau, 0x4200c5u); LOADALL;
  /* 004200ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004200cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004200cc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004200cd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004200cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004200d0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00420042(CPU *c) {
  NATIVE_HOOK(0x420042u) REGS; LOADALL;
L_00420042:;
  /* 00420042 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00420045 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420048 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042004d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042004f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420052 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420055 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420057 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042005a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042005c sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0042005e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420061 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420062 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00420065 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00420067 call 0x420570 */ esp -= 4; M32(esp) = 0x42006cu; SAVEALL; F_00420570(c); ABI_CHECK(0x420570u, 0x420067u); RETCHK(0x42006cu, 0x420067u); LOADALL;
  /* 0042006c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042006f mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420072 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420074 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420077 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0042007a sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042007c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042007f jmp 0x4200b0 */ goto L_004200b0;
L_004200b0:;
  /* 004200b0 lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 004200b3 call 0x4203a0 */ esp -= 4; M32(esp) = 0x4200b8u; SAVEALL; F_004203a0(c); ABI_CHECK(0x4203a0u, 0x4200b3u); RETCHK(0x4200b8u, 0x4200b3u); LOADALL;
  /* 004200b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004200bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004200c2 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004200c5 call 0x61af31 */ esp -= 4; M32(esp) = 0x4200cau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4200c5u); RETCHK(0x4200cau, 0x4200c5u); LOADALL;
  /* 004200ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004200cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004200cc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004200cd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004200cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004200d0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004200e0(CPU *c) {
  NATIVE_HOOK(0x4200e0u) REGS; LOADALL;
L_004200e0:;
  /* 004200e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004200e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004200e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004200e5 push 0x61d2c0 */ { u32 v_ = 0x61d2c0u; esp -= 4; M32(esp) = v_; }
  /* 004200ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004200f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004200f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004200f8 sub esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004200fe mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00420103 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420104 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420105 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420106 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0042010b mov esi, edx */ { esi = (u32)(edx); }
  /* 0042010d lea edi, [ebp - 0x98] */ edi = (u32)((u32)(ebp + 0xffffff68u));
  /* 00420113 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420115 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420117 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0042011a mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0042011d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0042011f mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00420122 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00420125 jne 0x42012b */ if (!ZF_) goto L_0042012b;
  /* 00420127 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00420129 jmp 0x420141 */ goto L_00420141;
L_0042012b:;
  /* 0042012b mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0042012e sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420130 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420135 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420137 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042013a mov esi, edx */ { esi = (u32)(edx); }
  /* 0042013c shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0042013f add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00420141:;
  /* 00420141 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00420144 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420146 je 0x420384 */ if (ZF_) goto L_00420384;
  /* 0042014c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0042014e jne 0x420154 */ if (!ZF_) goto L_00420154;
  /* 00420150 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00420152 jmp 0x42016a */ goto L_0042016a;
L_00420154:;
  /* 00420154 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420157 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420159 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042015e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420160 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420163 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420165 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420168 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0042016a:;
  /* 0042016a mov edx, 0x1f81f81 */ { edx = (u32)(0x1f81f81u); }
  /* 0042016f sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420171 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420173 jae 0x42017a */ if (!CF_) goto L_0042017a;
  /* 00420175 call 0x49ac70 */ esp -= 4; M32(esp) = 0x42017au; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x420175u); RETCHK(0x42017au, 0x420175u); LOADALL;
L_0042017a:;
  /* 0042017a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0042017c jne 0x420182 */ if (!ZF_) goto L_00420182;
  /* 0042017e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00420180 jmp 0x420198 */ goto L_00420198;
L_00420182:;
  /* 00420182 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420185 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420187 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042018c imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042018e sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420191 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420193 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420196 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00420198:;
  /* 00420198 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042019a cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0042019c jae 0x4202b8 */ if (!CF_) goto L_004202b8;
  /* 004201a2 mov eax, esi */ { eax = (u32)(esi); }
  /* 004201a4 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004201a6 mov edx, 0x1f81f81 */ { edx = (u32)(0x1f81f81u); }
  /* 004201ab sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004201ad cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004201af jae 0x4201b5 */ if (!CF_) goto L_004201b5;
  /* 004201b1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004201b3 jmp 0x4201b7 */ goto L_004201b7;
L_004201b5:;
  /* 004201b5 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_004201b7:;
  /* 004201b7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004201b9 jne 0x4201bf */ if (!ZF_) goto L_004201bf;
  /* 004201bb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004201bd jmp 0x4201d5 */ goto L_004201d5;
L_004201bf:;
  /* 004201bf mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004201c2 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004201c4 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004201c9 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004201cb sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004201ce mov eax, edx */ { eax = (u32)(edx); }
  /* 004201d0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004201d3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_004201d5:;
  /* 004201d5 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004201d7 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004201d9 jae 0x4201e7 */ if (!CF_) goto L_004201e7;
  /* 004201db mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004201dd call 0x41fd90 */ esp -= 4; M32(esp) = 0x4201e2u; SAVEALL; F_0041fd90(c); ABI_CHECK(0x41fd90u, 0x4201ddu); RETCHK(0x4201e2u, 0x4201ddu); LOADALL;
  /* 004201e2 mov esi, eax */ { esi = (u32)(eax); }
  /* 004201e4 add esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_004201e7:;
  /* 004201e7 imul esi, esi, 0x82 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004201ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004201ee call 0x5fe934 */ esp -= 4; M32(esp) = 0x4201f3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4201eeu); RETCHK(0x4201f3u, 0x4201eeu); LOADALL;
  /* 004201f3 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004201f6 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004201fd mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00420200 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00420203 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420204 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0042020a call 0x420b60 */ esp -= 4; M32(esp) = 0x42020fu; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x42020au); RETCHK(0x42020fu, 0x42020au); LOADALL;
  /* 0042020f mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420212 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00420215 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420218 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420219 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0042021f mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 00420225 call 0x4205a0 */ esp -= 4; M32(esp) = 0x42022au; SAVEALL; F_004205a0(c); ABI_CHECK(0x4205a0u, 0x420225u); RETCHK(0x42022au, 0x420225u); LOADALL;
  /* 0042022a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0042022d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420230 imul ecx, ecx, 0x82 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420236 mov eax, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); eax = (u32)(M32(m_)); }
  /* 0042023c mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0042023f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420242 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420243 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00420246 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420248 call 0x420b60 */ esp -= 4; M32(esp) = 0x42024du; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x420248u); RETCHK(0x42024du, 0x420248u); LOADALL;
  /* 0042024d mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00420250 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420253 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420255 je 0x42026d */ if (ZF_) goto L_0042026d;
  /* 00420257 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0042025a sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0042025c mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420261 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420263 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420266 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420268 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042026b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0042026d:;
  /* 0042026d mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00420270 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00420272 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00420275 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420277 je 0x420282 */ if (ZF_) goto L_00420282;
  /* 00420279 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042027a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x42027fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x42027au); RETCHK(0x42027fu, 0x42027au); LOADALL;
  /* 0042027f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00420282:;
  /* 00420282 mov eax, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); eax = (u32)(M32(m_)); }
  /* 00420288 imul ebx, ebx, 0x82 */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042028e add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420290 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00420292 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 00420295 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00420298 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0042029b jmp 0x420384 */ goto L_00420384;
L_004202b8:;
  /* 004202b8 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004202bb mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004202be mov edx, ebx */ { edx = (u32)(ebx); }
  /* 004202c0 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004202c2 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004202c7 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004202c9 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004202cc mov eax, edx */ { eax = (u32)(edx); }
  /* 004202ce shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004202d1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004202d3 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004202d5 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004202d7 jae 0x42033f */ if (!CF_) goto L_0042033f;
  /* 004202d9 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004202dc imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004202e2 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 004202e8 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004202ea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004202eb mov edx, esi */ { edx = (u32)(esi); }
  /* 004202ed call 0x420b60 */ esp -= 4; M32(esp) = 0x4202f2u; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x4202edu); RETCHK(0x4202f2u, 0x4202edu); LOADALL;
  /* 004202f2 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 004202f9 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004202fc mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004202fe sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420300 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00420303 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420308 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042030a sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042030d mov eax, edx */ { eax = (u32)(edx); }
  /* 0042030f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420312 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420315 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420317 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420318 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0042031a lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 00420320 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00420322 call 0x41fe20 */ esp -= 4; M32(esp) = 0x420327u; SAVEALL; F_0041fe20(c); ABI_CHECK(0x41fe20u, 0x420322u); RETCHK(0x420327u, 0x420322u); LOADALL;
  /* 00420327 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042032a mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0042032d mov ecx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); ecx = (u32)(M32(m_)); }
  /* 00420333 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420335 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00420338 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042033b sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042033d jmp 0x420379 */ goto L_00420379;
L_0042033f:;
  /* 0042033f imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420345 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00420347 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420349 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0042034c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0042034f mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 00420355 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420356 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420358 call 0x420b60 */ esp -= 4; M32(esp) = 0x42035du; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x420358u); RETCHK(0x42035du, 0x420358u); LOADALL;
  /* 0042035d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420360 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420363 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420365 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420368 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0042036a call 0x420400 */ esp -= 4; M32(esp) = 0x42036fu; SAVEALL; F_00420400(c); ABI_CHECK(0x420400u, 0x42036au); RETCHK(0x42036fu, 0x42036au); LOADALL;
  /* 0042036f mov edx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edx = (u32)(M32(m_)); }
  /* 00420375 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420377 mov eax, esi */ { eax = (u32)(esi); }
L_00420379:;
  /* 00420379 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0042037f call 0x4203e0 */ esp -= 4; M32(esp) = 0x420384u; SAVEALL; F_004203e0(c); ABI_CHECK(0x4203e0u, 0x42037fu); RETCHK(0x420384u, 0x42037fu); LOADALL;
L_00420384:;
  /* 00420384 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00420387 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0042038e mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00420391 call 0x61af31 */ esp -= 4; M32(esp) = 0x420396u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x420391u); RETCHK(0x420396u, 0x420391u); LOADALL;
  /* 00420396 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420397 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420398 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420399 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0042039b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0042039c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004200e5(CPU *c) {
  NATIVE_HOOK(0x4200e5u) REGS; LOADALL;
L_004200e5:;
  /* 004200e5 push 0x61d2c0 */ { u32 v_ = 0x61d2c0u; esp -= 4; M32(esp) = v_; }
  /* 004200ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004200f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004200f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004200f8 sub esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004200fe mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00420103 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420104 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420105 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420106 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0042010b mov esi, edx */ { esi = (u32)(edx); }
  /* 0042010d lea edi, [ebp - 0x98] */ edi = (u32)((u32)(ebp + 0xffffff68u));
  /* 00420113 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420115 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420117 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0042011a mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0042011d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0042011f mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00420122 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00420125 jne 0x42012b */ if (!ZF_) goto L_0042012b;
  /* 00420127 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00420129 jmp 0x420141 */ goto L_00420141;
L_0042012b:;
  /* 0042012b mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0042012e sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420130 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420135 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420137 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042013a mov esi, edx */ { esi = (u32)(edx); }
  /* 0042013c shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0042013f add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00420141:;
  /* 00420141 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00420144 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420146 je 0x420384 */ if (ZF_) goto L_00420384;
  /* 0042014c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0042014e jne 0x420154 */ if (!ZF_) goto L_00420154;
  /* 00420150 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00420152 jmp 0x42016a */ goto L_0042016a;
L_00420154:;
  /* 00420154 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420157 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420159 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042015e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420160 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420163 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420165 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420168 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0042016a:;
  /* 0042016a mov edx, 0x1f81f81 */ { edx = (u32)(0x1f81f81u); }
  /* 0042016f sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420171 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420173 jae 0x42017a */ if (!CF_) goto L_0042017a;
  /* 00420175 call 0x49ac70 */ esp -= 4; M32(esp) = 0x42017au; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x420175u); RETCHK(0x42017au, 0x420175u); LOADALL;
L_0042017a:;
  /* 0042017a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0042017c jne 0x420182 */ if (!ZF_) goto L_00420182;
  /* 0042017e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00420180 jmp 0x420198 */ goto L_00420198;
L_00420182:;
  /* 00420182 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420185 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420187 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 0042018c imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042018e sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420191 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420193 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420196 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00420198:;
  /* 00420198 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042019a cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0042019c jae 0x4202b8 */ if (!CF_) goto L_004202b8;
  /* 004201a2 mov eax, esi */ { eax = (u32)(esi); }
  /* 004201a4 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004201a6 mov edx, 0x1f81f81 */ { edx = (u32)(0x1f81f81u); }
  /* 004201ab sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004201ad cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004201af jae 0x4201b5 */ if (!CF_) goto L_004201b5;
  /* 004201b1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004201b3 jmp 0x4201b7 */ goto L_004201b7;
L_004201b5:;
  /* 004201b5 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_004201b7:;
  /* 004201b7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004201b9 jne 0x4201bf */ if (!ZF_) goto L_004201bf;
  /* 004201bb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004201bd jmp 0x4201d5 */ goto L_004201d5;
L_004201bf:;
  /* 004201bf mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004201c2 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004201c4 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004201c9 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004201cb sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004201ce mov eax, edx */ { eax = (u32)(edx); }
  /* 004201d0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004201d3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_004201d5:;
  /* 004201d5 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004201d7 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004201d9 jae 0x4201e7 */ if (!CF_) goto L_004201e7;
  /* 004201db mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004201dd call 0x41fd90 */ esp -= 4; M32(esp) = 0x4201e2u; SAVEALL; F_0041fd90(c); ABI_CHECK(0x41fd90u, 0x4201ddu); RETCHK(0x4201e2u, 0x4201ddu); LOADALL;
  /* 004201e2 mov esi, eax */ { esi = (u32)(eax); }
  /* 004201e4 add esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_004201e7:;
  /* 004201e7 imul esi, esi, 0x82 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004201ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004201ee call 0x5fe934 */ esp -= 4; M32(esp) = 0x4201f3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4201eeu); RETCHK(0x4201f3u, 0x4201eeu); LOADALL;
  /* 004201f3 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004201f6 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004201fd mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00420200 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00420203 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420204 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0042020a call 0x420b60 */ esp -= 4; M32(esp) = 0x42020fu; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x42020au); RETCHK(0x42020fu, 0x42020au); LOADALL;
  /* 0042020f mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420212 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00420215 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420218 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420219 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0042021f mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 00420225 call 0x4205a0 */ esp -= 4; M32(esp) = 0x42022au; SAVEALL; F_004205a0(c); ABI_CHECK(0x4205a0u, 0x420225u); RETCHK(0x42022au, 0x420225u); LOADALL;
  /* 0042022a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0042022d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420230 imul ecx, ecx, 0x82 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420236 mov eax, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); eax = (u32)(M32(m_)); }
  /* 0042023c mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0042023f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420242 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420243 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00420246 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420248 call 0x420b60 */ esp -= 4; M32(esp) = 0x42024du; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x420248u); RETCHK(0x42024du, 0x420248u); LOADALL;
  /* 0042024d mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00420250 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420253 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420255 je 0x42026d */ if (ZF_) goto L_0042026d;
  /* 00420257 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0042025a sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0042025c mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420261 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420263 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420266 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420268 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042026b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0042026d:;
  /* 0042026d mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00420270 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00420272 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00420275 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420277 je 0x420282 */ if (ZF_) goto L_00420282;
  /* 00420279 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042027a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x42027fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x42027au); RETCHK(0x42027fu, 0x42027au); LOADALL;
  /* 0042027f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00420282:;
  /* 00420282 mov eax, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); eax = (u32)(M32(m_)); }
  /* 00420288 imul ebx, ebx, 0x82 */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042028e add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420290 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00420292 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 00420295 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00420298 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0042029b jmp 0x420384 */ goto L_00420384;
L_004202b8:;
  /* 004202b8 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004202bb mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004202be mov edx, ebx */ { edx = (u32)(ebx); }
  /* 004202c0 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004202c2 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004202c7 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004202c9 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004202cc mov eax, edx */ { eax = (u32)(edx); }
  /* 004202ce shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004202d1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004202d3 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004202d5 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004202d7 jae 0x42033f */ if (!CF_) goto L_0042033f;
  /* 004202d9 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004202dc imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004202e2 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 004202e8 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004202ea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004202eb mov edx, esi */ { edx = (u32)(esi); }
  /* 004202ed call 0x420b60 */ esp -= 4; M32(esp) = 0x4202f2u; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x4202edu); RETCHK(0x4202f2u, 0x4202edu); LOADALL;
  /* 004202f2 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 004202f9 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004202fc mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004202fe sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420300 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00420303 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420308 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042030a sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042030d mov eax, edx */ { eax = (u32)(edx); }
  /* 0042030f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420312 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420315 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420317 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420318 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0042031a lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 00420320 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00420322 call 0x41fe20 */ esp -= 4; M32(esp) = 0x420327u; SAVEALL; F_0041fe20(c); ABI_CHECK(0x41fe20u, 0x420322u); RETCHK(0x420327u, 0x420322u); LOADALL;
  /* 00420327 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042032a mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0042032d mov ecx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); ecx = (u32)(M32(m_)); }
  /* 00420333 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420335 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00420338 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042033b sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042033d jmp 0x420379 */ goto L_00420379;
L_0042033f:;
  /* 0042033f imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420345 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00420347 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420349 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0042034c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0042034f mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 00420355 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420356 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420358 call 0x420b60 */ esp -= 4; M32(esp) = 0x42035du; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x420358u); RETCHK(0x42035du, 0x420358u); LOADALL;
  /* 0042035d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420360 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420363 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420365 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420368 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0042036a call 0x420400 */ esp -= 4; M32(esp) = 0x42036fu; SAVEALL; F_00420400(c); ABI_CHECK(0x420400u, 0x42036au); RETCHK(0x42036fu, 0x42036au); LOADALL;
  /* 0042036f mov edx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edx = (u32)(M32(m_)); }
  /* 00420375 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420377 mov eax, esi */ { eax = (u32)(esi); }
L_00420379:;
  /* 00420379 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0042037f call 0x4203e0 */ esp -= 4; M32(esp) = 0x420384u; SAVEALL; F_004203e0(c); ABI_CHECK(0x4203e0u, 0x42037fu); RETCHK(0x420384u, 0x42037fu); LOADALL;
L_00420384:;
  /* 00420384 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00420387 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0042038e mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00420391 call 0x61af31 */ esp -= 4; M32(esp) = 0x420396u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x420391u); RETCHK(0x420396u, 0x420391u); LOADALL;
  /* 00420396 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420397 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420398 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420399 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0042039b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0042039c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004202a0(CPU *c) {
  NATIVE_HOOK(0x4202a0u) REGS; LOADALL;
L_004202a0:;
  /* 004202a0 mov eax, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); eax = (u32)(M32(m_)); }
  /* 004202a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004202a7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4202acu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4202a7u); RETCHK(0x4202acu, 0x4202a7u); LOADALL;
  /* 004202ac add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004202af push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004202b1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004202b3 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 004202b8 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004202bb mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004202be mov edx, ebx */ { edx = (u32)(ebx); }
  /* 004202c0 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004202c2 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004202c7 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004202c9 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004202cc mov eax, edx */ { eax = (u32)(edx); }
  /* 004202ce shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004202d1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004202d3 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004202d5 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004202d7 jae 0x42033f */ if (!CF_) goto L_0042033f;
  /* 004202d9 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004202dc imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004202e2 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 004202e8 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004202ea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004202eb mov edx, esi */ { edx = (u32)(esi); }
  /* 004202ed call 0x420b60 */ esp -= 4; M32(esp) = 0x4202f2u; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x4202edu); RETCHK(0x4202f2u, 0x4202edu); LOADALL;
  /* 004202f2 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 004202f9 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004202fc mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004202fe sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420300 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00420303 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420308 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042030a sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042030d mov eax, edx */ { eax = (u32)(edx); }
  /* 0042030f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420312 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420315 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420317 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420318 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0042031a lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 00420320 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00420322 call 0x41fe20 */ esp -= 4; M32(esp) = 0x420327u; SAVEALL; F_0041fe20(c); ABI_CHECK(0x41fe20u, 0x420322u); RETCHK(0x420327u, 0x420322u); LOADALL;
  /* 00420327 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042032a mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0042032d mov ecx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); ecx = (u32)(M32(m_)); }
  /* 00420333 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420335 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00420338 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042033b sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042033d jmp 0x420379 */ goto L_00420379;
L_0042033f:;
  /* 0042033f imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420345 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00420347 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420349 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0042034c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0042034f mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 00420355 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420356 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420358 call 0x420b60 */ esp -= 4; M32(esp) = 0x42035du; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x420358u); RETCHK(0x42035du, 0x420358u); LOADALL;
  /* 0042035d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420360 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420363 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420365 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420368 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0042036a call 0x420400 */ esp -= 4; M32(esp) = 0x42036fu; SAVEALL; F_00420400(c); ABI_CHECK(0x420400u, 0x42036au); RETCHK(0x42036fu, 0x42036au); LOADALL;
  /* 0042036f mov edx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edx = (u32)(M32(m_)); }
  /* 00420375 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420377 mov eax, esi */ { eax = (u32)(esi); }
L_00420379:;
  /* 00420379 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0042037f call 0x4203e0 */ esp -= 4; M32(esp) = 0x420384u; SAVEALL; F_004203e0(c); ABI_CHECK(0x4203e0u, 0x42037fu); RETCHK(0x420384u, 0x42037fu); LOADALL;
  /* 00420384 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00420387 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0042038e mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00420391 call 0x61af31 */ esp -= 4; M32(esp) = 0x420396u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x420391u); RETCHK(0x420396u, 0x420391u); LOADALL;
  /* 00420396 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420397 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420398 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420399 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0042039b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0042039c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004202af(CPU *c) {
  NATIVE_HOOK(0x4202afu) REGS; LOADALL;
L_004202af:;
  /* 004202af push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004202b1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004202b3 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 004202b8 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004202bb mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004202be mov edx, ebx */ { edx = (u32)(ebx); }
  /* 004202c0 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004202c2 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004202c7 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004202c9 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004202cc mov eax, edx */ { eax = (u32)(edx); }
  /* 004202ce shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004202d1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004202d3 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004202d5 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004202d7 jae 0x42033f */ if (!CF_) goto L_0042033f;
  /* 004202d9 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004202dc imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004202e2 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 004202e8 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004202ea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004202eb mov edx, esi */ { edx = (u32)(esi); }
  /* 004202ed call 0x420b60 */ esp -= 4; M32(esp) = 0x4202f2u; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x4202edu); RETCHK(0x4202f2u, 0x4202edu); LOADALL;
  /* 004202f2 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 004202f9 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004202fc mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004202fe sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420300 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00420303 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420308 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042030a sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042030d mov eax, edx */ { eax = (u32)(edx); }
  /* 0042030f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420312 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420315 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420317 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420318 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0042031a lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 00420320 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00420322 call 0x41fe20 */ esp -= 4; M32(esp) = 0x420327u; SAVEALL; F_0041fe20(c); ABI_CHECK(0x41fe20u, 0x420322u); RETCHK(0x420327u, 0x420322u); LOADALL;
  /* 00420327 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0042032a mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0042032d mov ecx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); ecx = (u32)(M32(m_)); }
  /* 00420333 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420335 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00420338 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042033b sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0042033d jmp 0x420379 */ goto L_00420379;
L_0042033f:;
  /* 0042033f imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420345 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00420347 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420349 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0042034c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0042034f mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 00420355 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420356 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420358 call 0x420b60 */ esp -= 4; M32(esp) = 0x42035du; SAVEALL; F_00420b60(c); ABI_CHECK(0x420b60u, 0x420358u); RETCHK(0x42035du, 0x420358u); LOADALL;
  /* 0042035d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420360 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420363 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420365 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420368 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0042036a call 0x420400 */ esp -= 4; M32(esp) = 0x42036fu; SAVEALL; F_00420400(c); ABI_CHECK(0x420400u, 0x42036au); RETCHK(0x42036fu, 0x42036au); LOADALL;
  /* 0042036f mov edx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edx = (u32)(M32(m_)); }
  /* 00420375 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420377 mov eax, esi */ { eax = (u32)(esi); }
L_00420379:;
  /* 00420379 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0042037f call 0x4203e0 */ esp -= 4; M32(esp) = 0x420384u; SAVEALL; F_004203e0(c); ABI_CHECK(0x4203e0u, 0x42037fu); RETCHK(0x420384u, 0x42037fu); LOADALL;
  /* 00420384 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00420387 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0042038e mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00420391 call 0x61af31 */ esp -= 4; M32(esp) = 0x420396u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x420391u); RETCHK(0x420396u, 0x420391u); LOADALL;
  /* 00420396 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420397 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420398 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420399 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0042039b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0042039c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004203a0(CPU *c) {
  NATIVE_HOOK(0x4203a0u) REGS; LOADALL;
L_004203a0:;
  /* 004203a0 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004203a2 je 0x4203bb */ if (ZF_) goto L_004203bb;
  /* 004203a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004203a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_004203a6:;
  /* 004203a6 mov edi, eax */ { edi = (u32)(eax); }
  /* 004203a8 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004203ad mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004203af rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004203b1 add eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004203b4 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004203b6 movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = M8(esi); esi += st_; edi += st_; }
  /* 004203b7 jne 0x4203a6 */ if (!ZF_) goto L_004203a6;
  /* 004203b9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004203ba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004203bb:;
  /* 004203bb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004203c0(CPU *c) {
  NATIVE_HOOK(0x4203c0u) REGS; LOADALL;
L_004203c0:;
  /* 004203c0 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004203c2 je 0x4203de */ if (ZF_) goto L_004203de;
  /* 004203c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004203c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_004203c6:;
  /* 004203c6 sub edx, 0x41 */ { u32 a_ = edx, b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004203c9 sub eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004203cc cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004203ce mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004203d3 mov esi, edx */ { esi = (u32)(edx); }
  /* 004203d5 mov edi, eax */ { edi = (u32)(eax); }
  /* 004203d7 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004203d9 movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = M8(esi); esi += st_; edi += st_; }
  /* 004203da jne 0x4203c6 */ if (!ZF_) goto L_004203c6;
  /* 004203dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004203dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004203de:;
  /* 004203de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004203e0(CPU *c) {
  NATIVE_HOOK(0x4203e0u) REGS; LOADALL;
L_004203e0:;
  /* 004203e0 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004203e2 je 0x4203fe */ if (ZF_) goto L_004203fe;
  /* 004203e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004203e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_004203e6:;
  /* 004203e6 mov edi, eax */ { edi = (u32)(eax); }
  /* 004203e8 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 004203ed mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004203ef rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004203f1 add eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004203f6 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004203f8 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 004203fa jne 0x4203e6 */ if (!ZF_) goto L_004203e6;
  /* 004203fc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004203fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004203fe:;
  /* 004203fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420400(CPU *c) {
  NATIVE_HOOK(0x420400u) REGS; LOADALL;
L_00420400:;
  /* 00420400 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420402 je 0x42042e */ if (ZF_) goto L_0042042e;
  /* 00420404 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420405 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420406 jmp 0x420410 */ goto L_00420410;
L_00420410:;
  /* 00420410 sub edx, 0x82 */ { u32 a_ = edx, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420416 sub eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042041b cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0042041d mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420422 mov esi, edx */ { esi = (u32)(edx); }
  /* 00420424 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420426 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420428 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 0042042a jne 0x420410 */ if (!ZF_) goto L_00420410;
  /* 0042042c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0042042d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0042042e:;
  /* 0042042e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420430(CPU *c) {
  NATIVE_HOOK(0x420430u) REGS; LOADALL;
L_00420430:;
  /* 00420430 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00420431 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00420433 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420436 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420437 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0042043a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0042043b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0042043c mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0042043f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00420441 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420443 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420448 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042044a sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042044d mov eax, edx */ { eax = (u32)(edx); }
  /* 0042044f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420452 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420454 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420457 jle 0x420509 */ if ((ZF_|LT_)) goto L_00420509;
  /* 0042045d mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
L_00420460:;
  /* 00420460 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420462 jle 0x420523 */ if ((ZF_|LT_)) goto L_00420523;
  /* 00420468 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0042046b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042046c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0042046d lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00420470 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420471 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420472 call 0x4205d0 */ esp -= 4; M32(esp) = 0x420477u; SAVEALL; F_004205d0(c); ABI_CHECK(0x4205d0u, 0x420472u); RETCHK(0x420477u, 0x420472u); LOADALL;
  /* 00420477 mov eax, esi */ { eax = (u32)(esi); }
  /* 00420479 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0042047a sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042047c sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042047e mov esi, eax */ { esi = (u32)(eax); }
  /* 00420480 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00420481 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420483 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00420486 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420488 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0042048a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0042048c sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0042048e mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420493 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420495 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00420498 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0042049b mov eax, edx */ { eax = (u32)(edx); }
  /* 0042049d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004204a0 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004204a2 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004204a5 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004204a7 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004204ac imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004204ae mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004204b1 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004204b4 mov eax, edx */ { eax = (u32)(edx); }
  /* 004204b6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004204b9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004204bb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004204be cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004204c0 jge 0x4204d6 */ if (!LT_) goto L_004204d6;
  /* 004204c2 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004204c5 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004204c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004204c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004204ca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004204cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004204cc call 0x420430 */ esp -= 4; M32(esp) = 0x4204d1u; SAVEALL; F_00420430(c); ABI_CHECK(0x420430u, 0x4204ccu); RETCHK(0x4204d1u, 0x4204ccu); LOADALL;
  /* 004204d1 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 004204d4 jmp 0x4204e8 */ goto L_004204e8;
L_004204d6:;
  /* 004204d6 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004204d9 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004204dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004204dd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004204de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004204df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004204e0 call 0x420430 */ esp -= 4; M32(esp) = 0x4204e5u; SAVEALL; F_00420430(c); ABI_CHECK(0x420430u, 0x4204e0u); RETCHK(0x4204e5u, 0x4204e0u); LOADALL;
  /* 004204e5 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
L_004204e8:;
  /* 004204e8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004204ea sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004204ec mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004204f1 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004204f3 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004204f6 mov eax, edx */ { eax = (u32)(edx); }
  /* 004204f8 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004204fb add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004204fd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420500 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420503 jg 0x420460 */ if (!(ZF_|LT_)) goto L_00420460;
L_00420509:;
  /* 00420509 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0042050c jle 0x42051c */ if ((ZF_|LT_)) goto L_0042051c;
  /* 0042050e mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00420511 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420512 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420513 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420514 call 0x420a80 */ esp -= 4; M32(esp) = 0x420519u; SAVEALL; F_00420a80(c); ABI_CHECK(0x420a80u, 0x420514u); RETCHK(0x420519u, 0x420514u); LOADALL;
  /* 00420519 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0042051c:;
  /* 0042051c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0042051d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0042051e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0042051f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00420521 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420522 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00420523:;
  /* 00420523 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420526 jle 0x420509 */ if ((ZF_|LT_)) goto L_00420509;
  /* 00420528 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0042052a sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0042052c mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420531 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420533 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420536 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420538 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0042053b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042053d cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420540 jle 0x420550 */ if ((ZF_|LT_)) goto L_00420550;
  /* 00420542 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00420545 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420546 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420547 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420548 call 0x420ca0 */ esp -= 4; M32(esp) = 0x42054du; SAVEALL; F_00420ca0(c); ABI_CHECK(0x420ca0u, 0x420548u); RETCHK(0x42054du, 0x420548u); LOADALL;
  /* 0042054d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00420550:;
  /* 00420550 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00420553 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420554 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420555 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420556 call 0x4209b0 */ esp -= 4; M32(esp) = 0x42055bu; SAVEALL; F_004209b0(c); ABI_CHECK(0x4209b0u, 0x420556u); RETCHK(0x42055bu, 0x420556u); LOADALL;
  /* 0042055b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0042055e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0042055f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420560 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420561 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00420563 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420564 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420570(CPU *c) {
  NATIVE_HOOK(0x420570u) REGS; LOADALL;
L_00420570:;
  /* 00420570 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420572 jbe 0x420590 */ if ((CF_|ZF_)) goto L_00420590;
  /* 00420574 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420575 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00420577 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00420578:;
  /* 00420578 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0042057a je 0x420588 */ if (ZF_) goto L_00420588;
  /* 0042057c mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00420581 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00420583 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420585 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420587 movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = M8(esi); esi += st_; edi += st_; }
L_00420588:;
  /* 00420588 add eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042058b dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0042058c jne 0x420578 */ if (!ZF_) goto L_00420578;
  /* 0042058e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0042058f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00420590:;
  /* 00420590 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004205a0(CPU *c) {
  NATIVE_HOOK(0x4205a0u) REGS; LOADALL;
L_004205a0:;
  /* 004205a0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004205a2 jbe 0x4205c3 */ if ((CF_|ZF_)) goto L_004205c3;
  /* 004205a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004205a5 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004205a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_004205a8:;
  /* 004205a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004205aa je 0x4205b9 */ if (ZF_) goto L_004205b9;
  /* 004205ac mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 004205b1 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004205b3 mov edi, eax */ { edi = (u32)(eax); }
  /* 004205b5 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004205b7 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
L_004205b9:;
  /* 004205b9 add eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004205be dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004205bf jne 0x4205a8 */ if (!ZF_) goto L_004205a8;
  /* 004205c1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004205c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004205c3:;
  /* 004205c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004205d0(CPU *c) {
  NATIVE_HOOK(0x4205d0u) REGS; LOADALL;
L_004205d0:;
  /* 004205d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004205d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004205d3 sub esp, 0x3b0 */ { u32 a_ = esp, b_ = 0x3b0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004205d9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004205de push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004205df push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004205e0 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004205e3 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004205e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004205e7 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 004205ea mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004205ec sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004205ee mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004205f3 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004205f5 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004205f8 mov eax, edx */ { eax = (u32)(edx); }
  /* 004205fa shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004205fd add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004205ff cdq */ edx = (u32)((s32)eax >> 31);
  /* 00420600 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420602 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00420604 sar ebx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00420606 imul ebx, ebx, 0x82 */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0042060c lea eax, [edi - 0x82] */ eax = (u32)((u32)(edi + 0xffffff7eu));
  /* 00420612 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 00420615 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420616 add ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00420618 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420619 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0042061a mov eax, edi */ { eax = (u32)(edi); }
  /* 0042061c call 0x420b90 */ esp -= 4; M32(esp) = 0x420621u; SAVEALL; F_00420b90(c); ABI_CHECK(0x420b90u, 0x42061cu); RETCHK(0x420621u, 0x42061cu); LOADALL;
  /* 00420621 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420624 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420626 lea eax, [ebx + 0x82] */ eax = (u32)((u32)(ebx + 0x82u));
  /* 0042062c mov dword ptr [ebp - 0x3a4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); M32(m_) = (u32)(eax); }
  /* 00420632 jae 0x420666 */ if (!CF_) goto L_00420666;
L_00420634:;
  /* 00420634 lea eax, [ebx - 0x82] */ eax = (u32)((u32)(ebx + 0xffffff7eu));
  /* 0042063a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0042063b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042063c mov dword ptr [ebp - 0x3ac], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc54u); M32(m_) = (u32)(eax); }
  /* 00420642 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x420644u; SAVEALL; call_ind(c, t_); RETCHK(0x420644u, 0x420642u); LOADALL; }
  /* 00420644 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420647 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420649 jne 0x420666 */ if (!ZF_) goto L_00420666;
  /* 0042064b mov ecx, dword ptr [ebp - 0x3ac] */ { const u32 m_ = (u32)(ebp + 0xfffffc54u); ecx = (u32)(M32(m_)); }
  /* 00420651 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420652 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420653 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x420655u; SAVEALL; call_ind(c, t_); RETCHK(0x420655u, 0x420653u); LOADALL; }
  /* 00420655 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420658 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0042065a jne 0x420666 */ if (!ZF_) goto L_00420666;
  /* 0042065c mov ebx, dword ptr [ebp - 0x3ac] */ { const u32 m_ = (u32)(ebp + 0xfffffc54u); ebx = (u32)(M32(m_)); }
  /* 00420662 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420664 jb 0x420634 */ if (CF_) goto L_00420634;
L_00420666:;
  /* 00420666 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00420669 cmp dword ptr [ebp - 0x3a4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0042066f jae 0x4206a8 */ if (!CF_) goto L_004206a8;
L_00420671:;
  /* 00420671 mov edx, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); edx = (u32)(M32(m_)); }
  /* 00420677 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420678 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420679 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x42067bu; SAVEALL; call_ind(c, t_); RETCHK(0x42067bu, 0x420679u); LOADALL; }
  /* 0042067b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0042067e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420680 jne 0x4206a8 */ if (!ZF_) goto L_004206a8;
  /* 00420682 mov eax, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); eax = (u32)(M32(m_)); }
  /* 00420688 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420689 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0042068a call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x42068cu; SAVEALL; call_ind(c, t_); RETCHK(0x42068cu, 0x42068au); LOADALL; }
  /* 0042068c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0042068f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420691 jne 0x4206a8 */ if (!ZF_) goto L_004206a8;
  /* 00420693 mov eax, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); eax = (u32)(M32(m_)); }
  /* 00420699 add eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042069e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004206a0 mov dword ptr [ebp - 0x3a4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); M32(m_) = (u32)(eax); }
  /* 004206a6 jb 0x420671 */ if (CF_) goto L_00420671;
L_004206a8:;
  /* 004206a8 mov esi, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); esi = (u32)(M32(m_)); }
  /* 004206ae mov dword ptr [ebp - 0x3a8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); M32(m_) = (u32)(esi); }
  /* 004206b4 mov dword ptr [ebp - 0x3b0], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffc50u); M32(m_) = (u32)(ebx); }
  /* 004206ba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_004206c0:;
  /* 004206c0 cmp esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004206c3 jae 0x42073b */ if (!CF_) goto L_0042073b;
L_004206c5:;
  /* 004206c5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004206c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004206c7 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x4206c9u; SAVEALL; call_ind(c, t_); RETCHK(0x4206c9u, 0x4206c7u); LOADALL; }
  /* 004206c9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004206cc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004206ce jne 0x420728 */ if (!ZF_) goto L_00420728;
  /* 004206d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004206d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004206d2 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x4206d4u; SAVEALL; call_ind(c, t_); RETCHK(0x4206d4u, 0x4206d2u); LOADALL; }
  /* 004206d4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004206d7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004206d9 jne 0x42073b */ if (!ZF_) goto L_0042073b;
  /* 004206db mov eax, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); eax = (u32)(M32(m_)); }
  /* 004206e1 mov edx, eax */ { edx = (u32)(eax); }
  /* 004206e3 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 004206e8 mov esi, edx */ { esi = (u32)(edx); }
  /* 004206ea lea edi, [ebp - 0x214] */ edi = (u32)((u32)(ebp + 0xfffffdecu));
  /* 004206f0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004206f2 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 004206f4 add eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004206f9 mov dword ptr [ebp - 0x3a4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); M32(m_) = (u32)(eax); }
  /* 004206ff mov eax, dword ptr [ebp - 0x3a8] */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); eax = (u32)(M32(m_)); }
  /* 00420705 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0042070a mov esi, eax */ { esi = (u32)(eax); }
  /* 0042070c mov edi, edx */ { edi = (u32)(edx); }
  /* 0042070e rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420710 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420712 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420717 lea esi, [ebp - 0x214] */ esi = (u32)((u32)(ebp + 0xfffffdecu));
  /* 0042071d mov edi, eax */ { edi = (u32)(eax); }
  /* 0042071f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420721 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420723 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 00420726 mov esi, eax */ { esi = (u32)(eax); }
L_00420728:;
  /* 00420728 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0042072b add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420731 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420733 mov dword ptr [ebp - 0x3a8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); M32(m_) = (u32)(esi); }
  /* 00420739 jb 0x4206c5 */ if (CF_) goto L_004206c5;
L_0042073b:;
  /* 0042073b mov eax, dword ptr [ebp - 0x3b0] */ { const u32 m_ = (u32)(ebp + 0xfffffc50u); eax = (u32)(M32(m_)); }
  /* 00420741 cmp dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420744 jae 0x4207e9 */ if (!CF_) goto L_004207e9;
  /* 0042074a add eax, 0xffffff7e */ { u32 a_ = eax, b_ = 0xffffff7eu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0042074f mov dword ptr [ebp - 0x3ac], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc54u); M32(m_) = (u32)(eax); }
L_00420755:;
  /* 00420755 mov ecx, dword ptr [ebp - 0x3ac] */ { const u32 m_ = (u32)(ebp + 0xfffffc54u); ecx = (u32)(M32(m_)); }
  /* 0042075b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0042075c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0042075d call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x42075fu; SAVEALL; call_ind(c, t_); RETCHK(0x42075fu, 0x42075du); LOADALL; }
  /* 0042075f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420762 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420764 jne 0x4207bb */ if (!ZF_) goto L_004207bb;
  /* 00420766 mov edx, dword ptr [ebp - 0x3ac] */ { const u32 m_ = (u32)(ebp + 0xfffffc54u); edx = (u32)(M32(m_)); }
  /* 0042076c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0042076d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0042076e call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x420770u; SAVEALL; call_ind(c, t_); RETCHK(0x420770u, 0x42076eu); LOADALL; }
  /* 00420770 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420773 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420775 jne 0x4207e9 */ if (!ZF_) goto L_004207e9;
  /* 00420777 mov eax, dword ptr [ebp - 0x3ac] */ { const u32 m_ = (u32)(ebp + 0xfffffc54u); eax = (u32)(M32(m_)); }
  /* 0042077d sub ebx, 0x82 */ { u32 a_ = ebx, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00420783 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420788 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0042078a lea edi, [ebp - 0x88] */ edi = (u32)((u32)(ebp + 0xffffff78u));
  /* 00420790 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420792 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420794 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420799 mov esi, eax */ { esi = (u32)(eax); }
  /* 0042079b mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0042079d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0042079f movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 004207a1 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 004207a6 lea esi, [ebp - 0x88] */ esi = (u32)((u32)(ebp + 0xffffff78u));
  /* 004207ac mov edi, eax */ { edi = (u32)(eax); }
  /* 004207ae rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004207b0 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 004207b2 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 004207b5 mov esi, dword ptr [ebp - 0x3a8] */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); esi = (u32)(M32(m_)); }
L_004207bb:;
  /* 004207bb mov eax, dword ptr [ebp - 0x3b0] */ { const u32 m_ = (u32)(ebp + 0xfffffc50u); eax = (u32)(M32(m_)); }
  /* 004207c1 mov edx, dword ptr [ebp - 0x3ac] */ { const u32 m_ = (u32)(ebp + 0xfffffc54u); edx = (u32)(M32(m_)); }
  /* 004207c7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004207ca sub eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004207cf sub edx, 0x82 */ { u32 a_ = edx, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004207d5 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004207d7 mov dword ptr [ebp - 0x3b0], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc50u); M32(m_) = (u32)(eax); }
  /* 004207dd mov dword ptr [ebp - 0x3ac], edx */ { const u32 m_ = (u32)(ebp + 0xfffffc54u); M32(m_) = (u32)(edx); }
  /* 004207e3 jb 0x420755 */ if (CF_) goto L_00420755;
L_004207e9:;
  /* 004207e9 mov eax, dword ptr [ebp - 0x3b0] */ { const u32 m_ = (u32)(ebp + 0xfffffc50u); eax = (u32)(M32(m_)); }
  /* 004207ef cmp eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004207f2 jne 0x4208a5 */ if (!ZF_) goto L_004208a5;
  /* 004207f8 cmp esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004207fb je 0x420993 */ if (ZF_) goto L_00420993;
  /* 00420801 mov eax, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); eax = (u32)(M32(m_)); }
  /* 00420807 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420809 je 0x420840 */ if (ZF_) goto L_00420840;
  /* 0042080b mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420810 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00420812 lea edi, [ebp - 0x10c] */ edi = (u32)((u32)(ebp + 0xfffffef4u));
  /* 00420818 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0042081a movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 0042081c mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420821 mov esi, eax */ { esi = (u32)(eax); }
  /* 00420823 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00420825 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420827 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420829 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0042082e lea esi, [ebp - 0x10c] */ esi = (u32)((u32)(ebp + 0xfffffef4u));
  /* 00420834 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420836 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420838 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 0042083a mov esi, dword ptr [ebp - 0x3a8] */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); esi = (u32)(M32(m_)); }
L_00420840:;
  /* 00420840 mov edi, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); edi = (u32)(M32(m_)); }
  /* 00420846 mov eax, esi */ { eax = (u32)(esi); }
  /* 00420848 add edi, 0x82 */ { u32 a_ = edi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0042084e add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420854 mov dword ptr [ebp - 0x3a4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); M32(m_) = (u32)(edi); }
  /* 0042085a mov dword ptr [ebp - 0x3a8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); M32(m_) = (u32)(esi); }
  /* 00420860 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00420862 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420867 mov esi, edx */ { esi = (u32)(edx); }
  /* 00420869 lea edi, [ebp - 0x190] */ edi = (u32)((u32)(ebp + 0xfffffe70u));
  /* 0042086f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420871 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420873 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420878 mov esi, eax */ { esi = (u32)(eax); }
  /* 0042087a mov edi, edx */ { edi = (u32)(edx); }
  /* 0042087c rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0042087e movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420880 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420885 lea esi, [ebp - 0x190] */ esi = (u32)((u32)(ebp + 0xfffffe70u));
  /* 0042088b mov edi, eax */ { edi = (u32)(eax); }
  /* 0042088d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0042088f movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420891 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 00420894 mov esi, dword ptr [ebp - 0x3a8] */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); esi = (u32)(M32(m_)); }
  /* 0042089a add ebx, 0x82 */ { u32 a_ = ebx, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004208a0 jmp 0x4206c0 */ goto L_004206c0;
L_004208a5:;
  /* 004208a5 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004208a8 sub eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004208ad cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004208af mov dword ptr [ebp - 0x3b0], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc50u); M32(m_) = (u32)(eax); }
  /* 004208b5 jne 0x420942 */ if (!ZF_) goto L_00420942;
  /* 004208bb sub ebx, 0x82 */ { u32 a_ = ebx, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004208c1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004208c3 je 0x4208f4 */ if (ZF_) goto L_004208f4;
  /* 004208c5 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 004208ca mov esi, eax */ { esi = (u32)(eax); }
  /* 004208cc lea edi, [ebp - 0x298] */ edi = (u32)((u32)(ebp + 0xfffffd68u));
  /* 004208d2 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004208d4 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 004208d6 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 004208db mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004208dd mov edi, eax */ { edi = (u32)(eax); }
  /* 004208df rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004208e1 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 004208e3 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 004208e8 lea esi, [ebp - 0x298] */ esi = (u32)((u32)(ebp + 0xfffffd68u));
  /* 004208ee mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004208f0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004208f2 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
L_004208f4:;
  /* 004208f4 mov eax, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); eax = (u32)(M32(m_)); }
  /* 004208fa mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 004208ff mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00420901 lea edi, [ebp - 0x3a0] */ edi = (u32)((u32)(ebp + 0xfffffc60u));
  /* 00420907 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420909 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 0042090b sub eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420910 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420915 mov esi, eax */ { esi = (u32)(eax); }
  /* 00420917 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00420919 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0042091b movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 0042091d mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420922 lea esi, [ebp - 0x3a0] */ esi = (u32)((u32)(ebp + 0xfffffc60u));
  /* 00420928 mov edi, eax */ { edi = (u32)(eax); }
  /* 0042092a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0042092c movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 0042092e mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 00420931 mov esi, dword ptr [ebp - 0x3a8] */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); esi = (u32)(M32(m_)); }
  /* 00420937 mov dword ptr [ebp - 0x3a4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); M32(m_) = (u32)(eax); }
  /* 0042093d jmp 0x4206c0 */ goto L_004206c0;
L_00420942:;
  /* 00420942 mov eax, dword ptr [ebp - 0x3b0] */ { const u32 m_ = (u32)(ebp + 0xfffffc50u); eax = (u32)(M32(m_)); }
  /* 00420948 mov edx, esi */ { edx = (u32)(esi); }
  /* 0042094a add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420950 mov dword ptr [ebp - 0x3a8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); M32(m_) = (u32)(esi); }
  /* 00420956 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0042095b mov esi, edx */ { esi = (u32)(edx); }
  /* 0042095d lea edi, [ebp - 0x31c] */ edi = (u32)((u32)(ebp + 0xfffffce4u));
  /* 00420963 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420965 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420967 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0042096c mov esi, eax */ { esi = (u32)(eax); }
  /* 0042096e mov edi, edx */ { edi = (u32)(edx); }
  /* 00420970 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420972 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420974 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420979 lea esi, [ebp - 0x31c] */ esi = (u32)((u32)(ebp + 0xfffffce4u));
  /* 0042097f mov edi, eax */ { edi = (u32)(eax); }
  /* 00420981 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420983 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420985 mov edi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edi = (u32)(M32(m_)); }
  /* 00420988 mov esi, dword ptr [ebp - 0x3a8] */ { const u32 m_ = (u32)(ebp + 0xfffffc58u); esi = (u32)(M32(m_)); }
  /* 0042098e jmp 0x4206c0 */ goto L_004206c0;
L_00420993:;
  /* 00420993 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420996 mov ecx, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); ecx = (u32)(M32(m_)); }
  /* 0042099c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0042099d mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004209a0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004209a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004209a4 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 004209a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004209a7 call 0x61af31 */ esp -= 4; M32(esp) = 0x4209acu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4209a7u); RETCHK(0x4209acu, 0x4209a7u); LOADALL;
  /* 004209ac mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004209ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004209af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004209b0(CPU *c) {
  NATIVE_HOOK(0x4209b0u) REGS; LOADALL;
L_004209b0:;
  /* 004209b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004209b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004209b3 sub esp, 0x84 */ { u32 a_ = esp, b_ = 0x84u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004209b9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004209bc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004209bd mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004209c0 sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004209c2 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 004209c7 imul ebx */ { s64 p_ = (s64)(s32)eax * (s32)ebx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004209c9 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004209cc mov eax, edx */ { eax = (u32)(edx); }
  /* 004209ce shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004209d1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004209d3 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004209d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004209d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004209d8 jle 0x420a6b */ if ((ZF_|LT_)) goto L_00420a6b;
L_004209de:;
  /* 004209de mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004209e1 lea eax, [eax + ebx - 0x82] */ eax = (u32)((u32)(eax + ebx + 0xffffff7eu));
  /* 004209e8 mov esi, eax */ { esi = (u32)(eax); }
  /* 004209ea mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 004209ef lea edi, [ebp - 0x82] */ edi = (u32)((u32)(ebp + 0xffffff7eu));
  /* 004209f5 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004209f7 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 004209f9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004209fc mov edi, eax */ { edi = (u32)(eax); }
  /* 004209fe mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420a03 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420a05 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00420a08 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420a09 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420a0b sub esp, 0x84 */ { u32 a_ = esp, b_ = 0x84u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420a11 mov edi, esp */ { edi = (u32)(esp); }
  /* 00420a13 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420a18 lea esi, [ebp - 0x82] */ esi = (u32)((u32)(ebp + 0xffffff7eu));
  /* 00420a1e rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420a20 lea ecx, [ebx - 0x82] */ ecx = (u32)((u32)(ebx + 0xffffff7eu));
  /* 00420a26 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420a2b imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420a2d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00420a30 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420a33 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420a35 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420a38 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420a3a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420a3b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00420a3d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420a3e movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420a40 call 0x420d80 */ esp -= 4; M32(esp) = 0x420a45u; SAVEALL; F_00420d80(c); ABI_CHECK(0x420d80u, 0x420a40u); RETCHK(0x420a45u, 0x420a40u); LOADALL;
  /* 00420a45 sub ebx, 0x82 */ { u32 a_ = ebx, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00420a4b mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420a50 imul ebx */ { s64 p_ = (s64)(s32)eax * (s32)ebx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420a52 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420a55 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420a57 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420a5a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420a5c add esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420a62 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420a65 jg 0x4209de */ if (!(ZF_|LT_)) goto L_004209de;
L_00420a6b:;
  /* 00420a6b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420a6c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420a6d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420a6e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00420a70 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420a71 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420a80(CPU *c) {
  NATIVE_HOOK(0x420a80u) REGS; LOADALL;
L_00420a80:;
  /* 00420a80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00420a81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00420a83 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420a86 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420a87 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00420a8a cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420a8c je 0x420b1f */ if (ZF_) goto L_00420b1f;
  /* 00420a92 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420a93 lea esi, [ebx + 0x82] */ esi = (u32)((u32)(ebx + 0x82u));
  /* 00420a99 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420a9b je 0x420b1e */ if (ZF_) goto L_00420b1e;
  /* 00420aa1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00420aa2:;
  /* 00420aa2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420aa3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420aa4 call dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x420aa7u; SAVEALL; call_ind(c, t_); RETCHK(0x420aa7u, 0x420aa4u); LOADALL; }
  /* 00420aa7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420aaa test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420aac je 0x420ac9 */ if (ZF_) goto L_00420ac9;
  /* 00420aae cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420ab0 lea eax, [esi + 0x82] */ eax = (u32)((u32)(esi + 0x82u));
  /* 00420ab6 je 0x420b10 */ if (ZF_) goto L_00420b10;
  /* 00420ab8 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420aba je 0x420b10 */ if (ZF_) goto L_00420b10;
  /* 00420abc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420abd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420abe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420abf call 0x420ef0 */ esp -= 4; M32(esp) = 0x420ac4u; SAVEALL; F_00420ef0(c); ABI_CHECK(0x420ef0u, 0x420abfu); RETCHK(0x420ac4u, 0x420abfu); LOADALL;
  /* 00420ac4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420ac7 jmp 0x420b10 */ goto L_00420b10;
L_00420ac9:;
  /* 00420ac9 lea edi, [esi - 0x82] */ edi = (u32)((u32)(esi + 0xffffff7eu));
  /* 00420acf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420ad0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420ad1 call dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x420ad4u; SAVEALL; call_ind(c, t_); RETCHK(0x420ad4u, 0x420ad1u); LOADALL; }
  /* 00420ad4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420ad7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420ad9 je 0x420b10 */ if (ZF_) goto L_00420b10;
  /* 00420adb jmp 0x420ae0 */ goto L_00420ae0;
L_00420ae0:;
  /* 00420ae0 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 00420ae2 sub edi, 0x82 */ { u32 a_ = edi, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00420ae8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420ae9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420aea call dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x420aedu; SAVEALL; call_ind(c, t_); RETCHK(0x420aedu, 0x420aeau); LOADALL; }
  /* 00420aed add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420af0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420af2 jne 0x420ae0 */ if (!ZF_) goto L_00420ae0;
  /* 00420af4 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420af6 je 0x420b0d */ if (ZF_) goto L_00420b0d;
  /* 00420af8 lea eax, [esi + 0x82] */ eax = (u32)((u32)(esi + 0x82u));
  /* 00420afe cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420b00 je 0x420b0d */ if (ZF_) goto L_00420b0d;
  /* 00420b02 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420b03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420b04 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420b05 call 0x420ef0 */ esp -= 4; M32(esp) = 0x420b0au; SAVEALL; F_00420ef0(c); ABI_CHECK(0x420ef0u, 0x420b05u); RETCHK(0x420b0au, 0x420b05u); LOADALL;
  /* 00420b0a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00420b0d:;
  /* 00420b0d mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_00420b10:;
  /* 00420b10 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420b13 add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420b19 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420b1b jne 0x420aa2 */ if (!ZF_) goto L_00420aa2;
  /* 00420b1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00420b1e:;
  /* 00420b1e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00420b1f:;
  /* 00420b1f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420b20 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420b21 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420b30(CPU *c) {
  NATIVE_HOOK(0x420b30u) REGS; LOADALL;
L_00420b30:;
  /* 00420b30 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420b32 je 0x420b52 */ if (ZF_) goto L_00420b52;
  /* 00420b34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420b35 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00420b36:;
  /* 00420b36 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420b38 je 0x420b46 */ if (ZF_) goto L_00420b46;
  /* 00420b3a mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00420b3f mov esi, edx */ { esi = (u32)(edx); }
  /* 00420b41 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420b43 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420b45 movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = M8(esi); esi += st_; edi += st_; }
L_00420b46:;
  /* 00420b46 add edx, 0x41 */ { u32 a_ = edx, b_ = 0x41u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420b49 add eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420b4c cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420b4e jne 0x420b36 */ if (!ZF_) goto L_00420b36;
  /* 00420b50 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420b51 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00420b52:;
  /* 00420b52 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420b60(CPU *c) {
  NATIVE_HOOK(0x420b60u) REGS; LOADALL;
L_00420b60:;
  /* 00420b60 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420b62 je 0x420b88 */ if (ZF_) goto L_00420b88;
  /* 00420b64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420b65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00420b66:;
  /* 00420b66 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420b68 je 0x420b77 */ if (ZF_) goto L_00420b77;
  /* 00420b6a mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420b6f mov esi, edx */ { esi = (u32)(edx); }
  /* 00420b71 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420b73 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420b75 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
L_00420b77:;
  /* 00420b77 add edx, 0x82 */ { u32 a_ = edx, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420b7d add eax, 0x82 */ { u32 a_ = eax, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420b82 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420b84 jne 0x420b66 */ if (!ZF_) goto L_00420b66;
  /* 00420b86 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420b87 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00420b88:;
  /* 00420b88 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420b90(CPU *c) {
  NATIVE_HOOK(0x420b90u) REGS; LOADALL;
L_00420b90:;
  /* 00420b90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00420b91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00420b93 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00420b96 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420b97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420b98 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00420b9b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00420b9d mov edx, esi */ { edx = (u32)(esi); }
  /* 00420b9f sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420ba1 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420ba6 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420ba8 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420bab mov eax, edx */ { eax = (u32)(edx); }
  /* 00420bad shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420bb0 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420bb2 cmp eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420bb5 jle 0x420c24 */ if ((ZF_|LT_)) goto L_00420c24;
  /* 00420bb7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00420bb8 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00420bb9 and edx, 7 */ { u32 a_ = edx, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00420bbc add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420bbe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420bbf sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420bc2 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420bc4 mov esi, eax */ { esi = (u32)(eax); }
  /* 00420bc6 imul edi, edi, 0x104 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420bcc imul esi, esi, 0x82 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420bd2 lea edx, [edi + ecx] */ edx = (u32)((u32)(edi + ecx));
  /* 00420bd5 lea eax, [esi + ecx] */ eax = (u32)((u32)(esi + ecx));
  /* 00420bd8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420bd9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420bda push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420bdb mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00420bde call 0x420d20 */ esp -= 4; M32(esp) = 0x420be3u; SAVEALL; F_00420d20(c); ABI_CHECK(0x420d20u, 0x420bdeu); RETCHK(0x420be3u, 0x420bdeu); LOADALL;
  /* 00420be3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420be6 lea edx, [esi + ecx] */ edx = (u32)((u32)(esi + ecx));
  /* 00420be9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420bea mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00420bec sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420bee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420bef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420bf0 call 0x420d20 */ esp -= 4; M32(esp) = 0x420bf5u; SAVEALL; F_00420d20(c); ABI_CHECK(0x420d20u, 0x420bf0u); RETCHK(0x420bf5u, 0x420bf0u); LOADALL;
  /* 00420bf5 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420bf8 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00420bfa sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420bfc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420bfd mov eax, edx */ { eax = (u32)(edx); }
  /* 00420bff sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420c01 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420c02 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420c03 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00420c06 call 0x420d20 */ esp -= 4; M32(esp) = 0x420c0bu; SAVEALL; F_00420d20(c); ABI_CHECK(0x420d20u, 0x420c06u); RETCHK(0x420c0bu, 0x420c06u); LOADALL;
  /* 00420c0b mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00420c0e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420c11 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420c14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420c15 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420c16 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420c17 call 0x420d20 */ esp -= 4; M32(esp) = 0x420c1cu; SAVEALL; F_00420d20(c); ABI_CHECK(0x420d20u, 0x420c17u); RETCHK(0x420c1cu, 0x420c17u); LOADALL;
  /* 00420c1c add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420c1f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420c20 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420c21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420c22 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420c23 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00420c24:;
  /* 00420c24 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420c27 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420c28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420c29 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420c2a call 0x420d20 */ esp -= 4; M32(esp) = 0x420c2fu; SAVEALL; F_00420d20(c); ABI_CHECK(0x420d20u, 0x420c2au); RETCHK(0x420c2fu, 0x420c2au); LOADALL;
  /* 00420c2f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420c32 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420c33 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420c34 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420c35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420c40(CPU *c) {
  NATIVE_HOOK(0x420c40u) REGS; LOADALL;
L_00420c40:;
  /* 00420c40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00420c41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00420c43 sub esp, 0x88 */ { u32 a_ = esp, b_ = 0x88u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420c49 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00420c4e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00420c51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420c52 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420c53 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00420c56 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420c59 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420c5e mov esi, eax */ { esi = (u32)(eax); }
  /* 00420c60 lea edi, [ebp - 0x88] */ edi = (u32)((u32)(ebp + 0xffffff78u));
  /* 00420c66 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420c68 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420c6a mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420c6f mov esi, edx */ { esi = (u32)(edx); }
  /* 00420c71 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420c73 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420c75 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420c77 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420c7c lea esi, [ebp - 0x88] */ esi = (u32)((u32)(ebp + 0xffffff78u));
  /* 00420c82 mov edi, edx */ { edi = (u32)(edx); }
  /* 00420c84 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420c86 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00420c89 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420c8b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420c8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420c8d call 0x61af31 */ esp -= 4; M32(esp) = 0x420c92u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x420c8du); RETCHK(0x420c92u, 0x420c8du); LOADALL;
  /* 00420c92 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00420c94 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420c95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420ca0(CPU *c) {
  NATIVE_HOOK(0x420ca0u) REGS; LOADALL;
L_00420ca0:;
  /* 00420ca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00420ca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00420ca3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420ca4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420ca7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420ca8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420ca9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420caa mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00420cad sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420caf mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420cb4 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420cb6 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420cb9 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420cbb shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420cbe add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420cc0 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00420cc3 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00420cc4 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420cc6 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00420cc8 sar ebx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00420cca test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420ccc jle 0x420d17 */ if ((ZF_|LT_)) goto L_00420d17;
  /* 00420cce mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00420cd0 imul esi, esi, 0x82 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420cd6 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420cd8 jmp 0x420ce0 */ goto L_00420ce0;
L_00420cda:;
  /* 00420cda mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00420cdd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00420ce0:;
  /* 00420ce0 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00420ce3 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00420ce6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420ce7 sub esp, 0x84 */ { u32 a_ = esp, b_ = 0x84u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420ced sub esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420cf3 mov edi, esp */ { edi = (u32)(esp); }
  /* 00420cf5 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 00420cf8 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420cfd rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420cff mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00420d02 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420d03 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00420d04 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420d05 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420d06 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420d08 call 0x420d80 */ esp -= 4; M32(esp) = 0x420d0du; SAVEALL; F_00420d80(c); ABI_CHECK(0x420d80u, 0x420d08u); RETCHK(0x420d0du, 0x420d08u); LOADALL;
  /* 00420d0d add esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420d13 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420d15 jg 0x420cda */ if (!(ZF_|LT_)) goto L_00420cda;
L_00420d17:;
  /* 00420d17 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420d18 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420d19 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420d1a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00420d1c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420d1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420d20(CPU *c) {
  NATIVE_HOOK(0x420d20u) REGS; LOADALL;
L_00420d20:;
  /* 00420d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00420d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00420d23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420d24 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00420d27 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420d28 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00420d2b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420d2c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420d2d call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x420d2fu; SAVEALL; call_ind(c, t_); RETCHK(0x420d2fu, 0x420d2du); LOADALL; }
  /* 00420d2f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420d32 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420d34 je 0x420d40 */ if (ZF_) goto L_00420d40;
  /* 00420d36 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420d37 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420d38 call 0x420c40 */ esp -= 4; M32(esp) = 0x420d3du; SAVEALL; F_00420c40(c); ABI_CHECK(0x420c40u, 0x420d38u); RETCHK(0x420d3du, 0x420d38u); LOADALL;
  /* 00420d3d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00420d40:;
  /* 00420d40 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00420d43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420d44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420d45 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x420d47u; SAVEALL; call_ind(c, t_); RETCHK(0x420d47u, 0x420d45u); LOADALL; }
  /* 00420d47 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420d4a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420d4c je 0x420d5b */ if (ZF_) goto L_00420d5b;
  /* 00420d4e mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00420d51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420d52 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420d53 call 0x420c40 */ esp -= 4; M32(esp) = 0x420d58u; SAVEALL; F_00420c40(c); ABI_CHECK(0x420c40u, 0x420d53u); RETCHK(0x420d58u, 0x420d53u); LOADALL;
  /* 00420d58 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00420d5b:;
  /* 00420d5b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420d5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420d5d call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x420d5fu; SAVEALL; call_ind(c, t_); RETCHK(0x420d5fu, 0x420d5du); LOADALL; }
  /* 00420d5f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420d62 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420d64 je 0x420d70 */ if (ZF_) goto L_00420d70;
  /* 00420d66 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420d67 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420d68 call 0x420c40 */ esp -= 4; M32(esp) = 0x420d6du; SAVEALL; F_00420c40(c); ABI_CHECK(0x420c40u, 0x420d68u); RETCHK(0x420d6du, 0x420d68u); LOADALL;
  /* 00420d6d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00420d70:;
  /* 00420d70 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420d71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420d72 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420d73 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420d80(CPU *c) {
  NATIVE_HOOK(0x420d80u) REGS; LOADALL;
L_00420d80:;
  /* 00420d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00420d81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00420d83 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420d84 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00420d87 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420d88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420d89 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420d8a mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00420d8d lea ebx, [edi + edi + 2] */ ebx = (u32)((u32)(edi + edi + 0x2u));
  /* 00420d91 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420d93 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00420d96 jge 0x420df6 */ if (!LT_) goto L_00420df6;
  /* 00420d98 jmp 0x420da0 */ goto L_00420da0;
L_00420da0:;
  /* 00420da0 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00420da3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420da5 imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420dab add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420dad lea ecx, [eax - 0x82] */ ecx = (u32)((u32)(eax + 0xffffff7eu));
  /* 00420db3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420db4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420db5 call dword ptr [ebp + 0x98] */ { const u32 m_ = (u32)(ebp + 0x98u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x420dbbu; SAVEALL; call_ind(c, t_); RETCHK(0x420dbbu, 0x420db5u); LOADALL; }
  /* 00420dbb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420dbe test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420dc0 je 0x420dc3 */ if (ZF_) goto L_00420dc3;
  /* 00420dc2 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_00420dc3:;
  /* 00420dc3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420dc6 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00420dc8 imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420dce imul esi, esi, 0x82 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420dd4 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420dd6 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420dd8 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420dda mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00420ddd mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420de2 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420de4 mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 00420de7 lea ebx, [ebx + ebx + 2] */ ebx = (u32)((u32)(ebx + ebx + 0x2u));
  /* 00420deb cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420ded movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420def jl 0x420da0 */ if (LT_) goto L_00420da0;
  /* 00420df1 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00420df4 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_00420df6:;
  /* 00420df6 jne 0x420e24 */ if (!ZF_) goto L_00420e24;
  /* 00420df8 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420dfb imul edi, edi, 0x82 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420e01 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00420e03 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420e06 imul ecx, ecx, 0x82 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420e0c lea esi, [ecx + eax - 0x82] */ esi = (u32)((u32)(ecx + eax + 0xffffff7eu));
  /* 00420e13 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00420e15 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420e1a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420e1c dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00420e1d movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420e1f mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 00420e22 jmp 0x420e27 */ goto L_00420e27;
L_00420e24:;
  /* 00420e24 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_00420e27:;
  /* 00420e27 mov ecx, dword ptr [ebp + 0x98] */ { const u32 m_ = (u32)(ebp + 0x98u); ecx = (u32)(M32(m_)); }
  /* 00420e2d mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00420e30 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00420e31 sub esp, 0x84 */ { u32 a_ = esp, b_ = 0x84u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420e37 mov edi, esp */ { edi = (u32)(esp); }
  /* 00420e39 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420e3e lea esi, [ebp + 0x14] */ esi = (u32)((u32)(ebp + 0x14u));
  /* 00420e41 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420e43 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420e44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00420e45 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420e48 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420e4a call 0x420e60 */ esp -= 4; M32(esp) = 0x420e4fu; SAVEALL; F_00420e60(c); ABI_CHECK(0x420e60u, 0x420e4au); RETCHK(0x420e4fu, 0x420e4au); LOADALL;
  /* 00420e4f add esp, 0x90 */ { u32 a_ = esp, b_ = 0x90u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420e55 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420e56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420e57 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420e58 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00420e5a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420e5b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420e60(CPU *c) {
  NATIVE_HOOK(0x420e60u) REGS; LOADALL;
L_00420e60:;
  /* 00420e60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00420e61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00420e63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420e64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420e65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420e66 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420e68 lea eax, [edi - 1] */ eax = (u32)((u32)(edi + 0xffffffffu));
  /* 00420e6b cdq */ edx = (u32)((s32)eax >> 31);
  /* 00420e6c sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420e6e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00420e70 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00420e73 sar ebx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00420e75 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420e77 jge 0x420ec5 */ if (!LT_) goto L_00420ec5;
  /* 00420e79 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00420e80:;
  /* 00420e80 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00420e83 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00420e85 imul eax, eax, 0x82 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420e8b lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 00420e8e lea esi, [eax + ecx] */ esi = (u32)((u32)(eax + ecx));
  /* 00420e91 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00420e92 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420e93 call dword ptr [ebp + 0x94] */ { const u32 m_ = (u32)(ebp + 0x94u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x420e99u; SAVEALL; call_ind(c, t_); RETCHK(0x420e99u, 0x420e93u); LOADALL; }
  /* 00420e99 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420e9c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00420e9e je 0x420ec5 */ if (ZF_) goto L_00420ec5;
  /* 00420ea0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420ea3 imul edi, edi, 0x82 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420ea9 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00420eab mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420eb0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420eb2 lea eax, [ebx - 1] */ eax = (u32)((u32)(ebx + 0xffffffffu));
  /* 00420eb5 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00420eb6 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420eb8 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420eba movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420ebc mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00420ebe mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00420ec0 cmp dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420ec3 jl 0x420e80 */ if (LT_) goto L_00420e80;
L_00420ec5:;
  /* 00420ec5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420ec8 imul edi, edi, 0x82 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420ece add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00420ed0 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420ed5 lea esi, [ebp + 0x10] */ esi = (u32)((u32)(ebp + 0x10u));
  /* 00420ed8 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420eda movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420edc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00420edd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00420ede pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00420edf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00420ee0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00420ef0(CPU *c) {
  NATIVE_HOOK(0x420ef0u) REGS; LOADALL;
L_00420ef0:;
  /* 00420ef0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00420ef1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00420ef3 sub esp, 0xa4 */ { u32 a_ = esp, b_ = 0xa4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00420ef9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00420efe mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00420f01 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00420f02 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00420f03 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00420f06 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420f08 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00420f0b mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420f10 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420f12 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420f15 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00420f17 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00420f1a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420f1c mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00420f1f sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420f21 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420f26 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420f28 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420f2b mov esi, edx */ { esi = (u32)(edx); }
  /* 00420f2d shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00420f30 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00420f32 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420f34 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00420f35 mov dword ptr [ebp - 0xa4], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(ecx); }
  /* 00420f3b mov edi, esi */ { edi = (u32)(esi); }
  /* 00420f3d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00420f3f je 0x420f4e */ if (ZF_) goto L_00420f4e;
L_00420f41:;
  /* 00420f41 mov eax, edi */ { eax = (u32)(edi); }
  /* 00420f43 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00420f44 idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x420f44u); eax = q_; edx = r_; }
  /* 00420f46 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00420f48 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420f4a mov ebx, edx */ { ebx = (u32)(edx); }
  /* 00420f4c jne 0x420f41 */ if (!ZF_) goto L_00420f41;
L_00420f4e:;
  /* 00420f4e cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420f50 jge 0x421063 */ if (!LT_) goto L_00421063;
  /* 00420f56 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00420f58 jle 0x421063 */ if ((ZF_|LT_)) goto L_00421063;
  /* 00420f5e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00420f61 mov edx, edi */ { edx = (u32)(edi); }
  /* 00420f63 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00420f65 imul edx, edx, 0x82 */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420f6b imul ebx, ebx, 0x82 */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420f71 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00420f73 mov dword ptr [ebp - 0x94], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(ebx); }
  /* 00420f79 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 00420f7c mov dword ptr [ebp - 0x90], edi */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(edi); }
  /* 00420f82 jmp 0x420f90 */ goto L_00420f90;
L_00420f84:;
  /* 00420f84 mov ebx, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); ebx = (u32)(M32(m_)); }
  /* 00420f8a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00420f90:;
  /* 00420f90 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420f95 mov esi, edx */ { esi = (u32)(edx); }
  /* 00420f97 lea edi, [ebp - 0x88] */ edi = (u32)((u32)(ebp + 0xffffff78u));
  /* 00420f9d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420f9f movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420fa1 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00420fa4 lea ecx, [edx + ebx] */ ecx = (u32)((u32)(edx + ebx));
  /* 00420fa7 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420fa9 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420fab jne 0x420fb2 */ if (!ZF_) goto L_00420fb2;
  /* 00420fad lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 00420fb0 jmp 0x420fbe */ goto L_00420fbe;
L_00420fb2:;
  /* 00420fb2 mov dword ptr [ebp - 0x98], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(ecx); }
  /* 00420fb8 lea ecx, [ebp - 0x98] */ ecx = (u32)((u32)(ebp + 0xffffff68u));
L_00420fbe:;
  /* 00420fbe mov ebx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (u32)(M32(m_)); }
  /* 00420fc0 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420fc2 je 0x421036 */ if (ZF_) goto L_00421036;
L_00420fc4:;
  /* 00420fc4 mov edi, eax */ { edi = (u32)(eax); }
  /* 00420fc6 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00420fcb mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00420fcd rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00420fcf mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00420fd2 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00420fd4 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00420fd9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00420fdb mov ecx, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); ecx = (u32)(M32(m_)); }
  /* 00420fe1 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00420fe4 mov eax, edx */ { eax = (u32)(edx); }
  /* 00420fe6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00420fe9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420feb cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00420fed movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00420fef mov dword ptr [ebp - 0x8c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(ebx); }
  /* 00420ff5 jge 0x42100d */ if (!LT_) goto L_0042100d;
  /* 00420ff7 mov eax, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); eax = (u32)(M32(m_)); }
  /* 00420ffd add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00420fff mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 00421005 lea eax, [ebp - 0xa0] */ eax = (u32)((u32)(ebp + 0xffffff60u));
  /* 0042100b jmp 0x421026 */ goto L_00421026;
L_0042100d:;
  /* 0042100d sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0042100f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00421012 imul ecx, ecx, 0x82 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x82u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00421018 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0042101a mov dword ptr [ebp - 0x9c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(ecx); }
  /* 00421020 lea eax, [ebp - 0x9c] */ eax = (u32)((u32)(ebp + 0xffffff64u));
L_00421026:;
  /* 00421026 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00421028 cmp ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0042102b mov eax, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); eax = (u32)(M32(m_)); }
  /* 00421031 jne 0x420fc4 */ if (!ZF_) goto L_00420fc4;
  /* 00421033 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
L_00421036:;
  /* 00421036 mov edi, eax */ { edi = (u32)(eax); }
  /* 00421038 mov eax, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); eax = (u32)(M32(m_)); }
  /* 0042103e mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00421043 lea esi, [ebp - 0x88] */ esi = (u32)((u32)(ebp + 0xffffff78u));
  /* 00421049 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0042104b sub edx, 0x82 */ { u32 a_ = edx, b_ = 0x82u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00421051 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00421052 movsw word ptr es:[edi], word ptr [esi] */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = M16(esi); esi += st_; edi += st_; }
  /* 00421054 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 00421057 mov dword ptr [ebp - 0x90], eax */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(eax); }
  /* 0042105d jne 0x420f84 */ if (!ZF_) goto L_00420f84;
L_00421063:;
  /* 00421063 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00421066 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00421067 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00421068 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00421069 call 0x61af31 */ esp -= 4; M32(esp) = 0x42106eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x421069u); RETCHK(0x42106eu, 0x421069u); LOADALL;
  /* 0042106e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00421070 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00421071 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00421080(CPU *c) {
  NATIVE_HOOK(0x421080u) REGS; LOADALL;
L_00421080:;
  /* 00421080 mov cl, byte ptr [0x9b91fc] */ { const u32 m_ = (u32)(0x9b91fcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00421086 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0042108b test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0042108d jne 0x4210b4 */ if (!ZF_) goto L_004210b4;
  /* 0042108f mov edx, dword ptr [0x9b91fc] */ { const u32 m_ = (u32)(0x9b91fcu); edx = (u32)(M32(m_)); }
  /* 00421095 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00421097 mov eax, 0x9b91f8 */ { eax = (u32)(0x9b91f8u); }
  /* 0042109c mov dword ptr [0x9b91fc], edx */ { const u32 m_ = (u32)(0x9b91fcu); M32(m_) = (u32)(edx); }
  /* 004210a2 call 0x5684a0 */ esp -= 4; M32(esp) = 0x4210a7u; SAVEALL; F_005684a0(c); ABI_CHECK(0x5684a0u, 0x4210a2u); RETCHK(0x4210a7u, 0x4210a2u); LOADALL;
  /* 004210a7 push 0x62c0d0 */ { u32 v_ = 0x62c0d0u; esp -= 4; M32(esp) = v_; }
  /* 004210ac call 0x5fe916 */ esp -= 4; M32(esp) = 0x4210b1u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x4210acu); RETCHK(0x4210b1u, 0x4210acu); LOADALL;
  /* 004210b1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004210b4:;
  /* 004210b4 mov eax, 0x9b91f8 */ { eax = (u32)(0x9b91f8u); }
  /* 004210b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004210c0(CPU *c) {
  NATIVE_HOOK(0x4210c0u) REGS; LOADALL;
L_004210c0:;
  /* 004210c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004210c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004210c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004210c5 push 0x61b5eb */ { u32 v_ = 0x61b5ebu; esp -= 4; M32(esp) = v_; }
  /* 004210ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004210d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004210d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004210d8 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004210de mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004210e3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004210e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004210e7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004210e9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004210eb mov byte ptr [ebp - 0x110], dl */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 004210f1 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 004210f6 lea edi, [ebp - 0x10f] */ edi = (u32)((u32)(ebp + 0xfffffef1u));
  /* 004210fc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004210fe stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00421100 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00421101 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00421107 call 0x5680c0 */ esp -= 4; M32(esp) = 0x42110cu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x421107u); RETCHK(0x42110cu, 0x421107u); LOADALL;
  /* 0042110c mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0042110f mov edx, 0x100 */ { edx = (u32)(0x100u); }
  /* 00421114 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0042111a call 0x568120 */ esp -= 4; M32(esp) = 0x42111fu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x42111au); RETCHK(0x42111fu, 0x42111au); LOADALL;
  /* 0042111f push 0x10000162 */ { u32 v_ = 0x10000162u; esp -= 4; M32(esp) = v_; }
  /* 00421124 call 0x5681f0 */ esp -= 4; M32(esp) = 0x421129u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x421124u); RETCHK(0x421129u, 0x421124u); LOADALL;
  /* 00421129 call 0x421590 */ esp -= 4; M32(esp) = 0x42112eu; SAVEALL; F_00421590(c); ABI_CHECK(0x421590u, 0x421129u); RETCHK(0x42112eu, 0x421129u); LOADALL;
  /* 0042112e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042112f lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00421135 call 0x5681f0 */ esp -= 4; M32(esp) = 0x42113au; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x421135u); RETCHK(0x42113au, 0x421135u); LOADALL;
  /* 0042113a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042113d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042113e lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00421144 call 0x5681f0 */ esp -= 4; M32(esp) = 0x421149u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x421144u); RETCHK(0x421149u, 0x421144u); LOADALL;
  /* 00421149 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0042114c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0042114d lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00421153 call 0x5681f0 */ esp -= 4; M32(esp) = 0x421158u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x421153u); RETCHK(0x421158u, 0x421153u); LOADALL;
  /* 00421158 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0042115e call 0x464860 */ esp -= 4; M32(esp) = 0x421163u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x42115eu); RETCHK(0x421163u, 0x42115eu); LOADALL;
  /* 00421163 mov edx, eax */ { edx = (u32)(eax); }
  /* 00421165 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0042116b call 0x4648e0 */ esp -= 4; M32(esp) = 0x421170u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x42116bu); RETCHK(0x421170u, 0x42116bu); LOADALL;
  /* 00421170 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00421176 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0042117b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0042117c call 0x565810 */ esp -= 4; M32(esp) = 0x421181u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x42117cu); RETCHK(0x421181u, 0x42117cu); LOADALL;
  /* 00421181 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00421184 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0042118b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0042118e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00421190 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00421191 call 0x61af31 */ esp -= 4; M32(esp) = 0x421196u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x421191u); RETCHK(0x421196u, 0x421191u); LOADALL;
  /* 00421196 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00421198 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00421199 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004211a0(CPU *c) {
  NATIVE_HOOK(0x4211a0u) REGS; LOADALL;
L_004211a0:;
  /* 004211a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004211a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004211a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004211a5 push 0x61b5eb */ { u32 v_ = 0x61b5ebu; esp -= 4; M32(esp) = v_; }
  /* 004211aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004211b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004211b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004211b8 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004211be mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004211c3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004211c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004211c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004211c9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004211cb mov byte ptr [ebp - 0x110], dl */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 004211d1 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 004211d6 lea edi, [ebp - 0x10f] */ edi = (u32)((u32)(ebp + 0xfffffef1u));
  /* 004211dc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004211de stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 004211e0 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 004211e1 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004211e7 call 0x5680c0 */ esp -= 4; M32(esp) = 0x4211ecu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x4211e7u); RETCHK(0x4211ecu, 0x4211e7u); LOADALL;
  /* 004211ec mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004211ef mov edx, 0x100 */ { edx = (u32)(0x100u); }
  /* 004211f4 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 004211fa call 0x568120 */ esp -= 4; M32(esp) = 0x4211ffu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x4211fau); RETCHK(0x4211ffu, 0x4211fau); LOADALL;
  /* 004211ff push 0x10000164 */ { u32 v_ = 0x10000164u; esp -= 4; M32(esp) = v_; }
  /* 00421204 call 0x5681f0 */ esp -= 4; M32(esp) = 0x421209u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x421204u); RETCHK(0x421209u, 0x421204u); LOADALL;
  /* 00421209 call 0x421590 */ esp -= 4; M32(esp) = 0x42120eu; SAVEALL; F_00421590(c); ABI_CHECK(0x421590u, 0x421209u); RETCHK(0x42120eu, 0x421209u); LOADALL;
  /* 0042120e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042120f lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00421215 call 0x5681f0 */ esp -= 4; M32(esp) = 0x42121au; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x421215u); RETCHK(0x42121au, 0x421215u); LOADALL;
  /* 0042121a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0042121d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042121e lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00421224 call 0x5681f0 */ esp -= 4; M32(esp) = 0x421229u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x421224u); RETCHK(0x421229u, 0x421224u); LOADALL;
  /* 00421229 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0042122f call 0x464860 */ esp -= 4; M32(esp) = 0x421234u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x42122fu); RETCHK(0x421234u, 0x42122fu); LOADALL;
  /* 00421234 mov edx, eax */ { edx = (u32)(eax); }
  /* 00421236 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0042123c call 0x4648e0 */ esp -= 4; M32(esp) = 0x421241u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x42123cu); RETCHK(0x421241u, 0x42123cu); LOADALL;
  /* 00421241 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00421247 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0042124c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0042124d call 0x565810 */ esp -= 4; M32(esp) = 0x421252u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x42124du); RETCHK(0x421252u, 0x42124du); LOADALL;
  /* 00421252 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00421255 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0042125c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0042125f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00421261 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00421262 call 0x61af31 */ esp -= 4; M32(esp) = 0x421267u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x421262u); RETCHK(0x421267u, 0x421262u); LOADALL;
  /* 00421267 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00421269 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0042126a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00421270(CPU *c) {
  NATIVE_HOOK(0x421270u) REGS; LOADALL;
L_00421270:;
  /* 00421270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00421271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00421273 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00421275 push 0x61b5eb */ { u32 v_ = 0x61b5ebu; esp -= 4; M32(esp) = v_; }
  /* 0042127a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00421280 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00421281 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00421288 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0042128e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00421293 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00421296 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00421297 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00421299 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0042129b mov byte ptr [ebp - 0x110], dl */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 004212a1 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 004212a6 lea edi, [ebp - 0x10f] */ edi = (u32)((u32)(ebp + 0xfffffef1u));
  /* 004212ac rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004212ae stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 004212b0 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 004212b1 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004212b7 call 0x5680c0 */ esp -= 4; M32(esp) = 0x4212bcu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x4212b7u); RETCHK(0x4212bcu, 0x4212b7u); LOADALL;
  /* 004212bc mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004212bf mov edx, 0x100 */ { edx = (u32)(0x100u); }
  /* 004212c4 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 004212ca call 0x568120 */ esp -= 4; M32(esp) = 0x4212cfu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x4212cau); RETCHK(0x4212cfu, 0x4212cau); LOADALL;
  /* 004212cf push 0x10000168 */ { u32 v_ = 0x10000168u; esp -= 4; M32(esp) = v_; }
  /* 004212d4 call 0x5681f0 */ esp -= 4; M32(esp) = 0x4212d9u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4212d4u); RETCHK(0x4212d9u, 0x4212d4u); LOADALL;
  /* 004212d9 call 0x421590 */ esp -= 4; M32(esp) = 0x4212deu; SAVEALL; F_00421590(c); ABI_CHECK(0x421590u, 0x4212d9u); RETCHK(0x4212deu, 0x4212d9u); LOADALL;
  /* 004212de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004212df lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004212e5 call 0x5681f0 */ esp -= 4; M32(esp) = 0x4212eau; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4212e5u); RETCHK(0x4212eau, 0x4212e5u); LOADALL;
  /* 004212ea lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004212f0 call 0x464860 */ esp -= 4; M32(esp) = 0x4212f5u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x4212f0u); RETCHK(0x4212f5u, 0x4212f0u); LOADALL;
  /* 004212f5 mov edx, eax */ { edx = (u32)(eax); }
  /* 004212f7 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004212fd call 0x4648e0 */ esp -= 4; M32(esp) = 0x421302u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x4212fdu); RETCHK(0x421302u, 0x4212fdu); LOADALL;
  /* 00421302 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00421308 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0042130d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0042130e call 0x565810 */ esp -= 4; M32(esp) = 0x421313u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x42130eu); RETCHK(0x421313u, 0x42130eu); LOADALL;
  /* 00421313 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00421316 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0042131d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00421320 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00421322 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00421323 call 0x61af31 */ esp -= 4; M32(esp) = 0x421328u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x421323u); RETCHK(0x421328u, 0x421323u); LOADALL;
  /* 00421328 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0042132a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0042132b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00421330(CPU *c) {
  NATIVE_HOOK(0x421330u) REGS; LOADALL;
L_00421330:;
  /* 00421330 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00421331 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00421333 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00421335 push 0x61b5eb */ { u32 v_ = 0x61b5ebu; esp -= 4; M32(esp) = v_; }
  /* 0042133a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00421340 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00421341 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00421348 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0042134e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00421353 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00421356 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00421357 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00421359 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0042135b mov byte ptr [ebp - 0x110], dl */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00421361 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 00421366 lea edi, [ebp - 0x10f] */ edi = (u32)((u32)(ebp + 0xfffffef1u));
  /* 0042136c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0042136e stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00421370 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00421371 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00421377 call 0x5680c0 */ esp -= 4; M32(esp) = 0x42137cu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x421377u); RETCHK(0x42137cu, 0x421377u); LOADALL;
  /* 0042137c mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0042137f mov edx, 0x100 */ { edx = (u32)(0x100u); }
  /* 00421384 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0042138a call 0x568120 */ esp -= 4; M32(esp) = 0x42138fu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x42138au); RETCHK(0x42138fu, 0x42138au); LOADALL;
  /* 0042138f push 0x10000166 */ { u32 v_ = 0x10000166u; esp -= 4; M32(esp) = v_; }
  /* 00421394 call 0x5681f0 */ esp -= 4; M32(esp) = 0x421399u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x421394u); RETCHK(0x421399u, 0x421394u); LOADALL;
  /* 00421399 call 0x421590 */ esp -= 4; M32(esp) = 0x42139eu; SAVEALL; F_00421590(c); ABI_CHECK(0x421590u, 0x421399u); RETCHK(0x42139eu, 0x421399u); LOADALL;
  /* 0042139e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042139f lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004213a5 call 0x5681f0 */ esp -= 4; M32(esp) = 0x4213aau; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4213a5u); RETCHK(0x4213aau, 0x4213a5u); LOADALL;
  /* 004213aa lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004213b0 call 0x464860 */ esp -= 4; M32(esp) = 0x4213b5u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x4213b0u); RETCHK(0x4213b5u, 0x4213b0u); LOADALL;
  /* 004213b5 mov edx, eax */ { edx = (u32)(eax); }
  /* 004213b7 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004213bd call 0x4648e0 */ esp -= 4; M32(esp) = 0x4213c2u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x4213bdu); RETCHK(0x4213c2u, 0x4213bdu); LOADALL;
  /* 004213c2 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 004213c8 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 004213cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004213ce call 0x565810 */ esp -= 4; M32(esp) = 0x4213d3u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x4213ceu); RETCHK(0x4213d3u, 0x4213ceu); LOADALL;
  /* 004213d3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004213d6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004213dd mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004213e0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004213e2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004213e3 call 0x61af31 */ esp -= 4; M32(esp) = 0x4213e8u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4213e3u); RETCHK(0x4213e8u, 0x4213e3u); LOADALL;
  /* 004213e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004213ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004213eb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004213f0(CPU *c) {
  NATIVE_HOOK(0x4213f0u) REGS; LOADALL;
L_004213f0:;
  /* 004213f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004213f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004213f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004213f5 push 0x61b318 */ { u32 v_ = 0x61b318u; esp -= 4; M32(esp) = v_; }
  /* 004213fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00421400 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00421401 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00421408 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0042140b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0042140e mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 00421415 mov dword ptr [ebp - 0x14], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xffffffffu); }
  /* 0042141c mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 00421423 call 0x5680c0 */ esp -= 4; M32(esp) = 0x421428u; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x421423u); RETCHK(0x421428u, 0x421423u); LOADALL;
  /* 00421428 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0042142f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00421432 call 0x568120 */ esp -= 4; M32(esp) = 0x421437u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x421432u); RETCHK(0x421437u, 0x421432u); LOADALL;
  /* 00421437 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 0042143a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042143b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0042143e call 0x568230 */ esp -= 4; M32(esp) = 0x421443u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x42143eu); RETCHK(0x421443u, 0x42143eu); LOADALL;
  /* 00421443 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 00421446 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00421447 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0042144a call 0x568230 */ esp -= 4; M32(esp) = 0x42144fu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x42144au); RETCHK(0x42144fu, 0x42144au); LOADALL;
  /* 0042144f lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00421452 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00421453 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00421456 call 0x568230 */ esp -= 4; M32(esp) = 0x42145bu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x421456u); RETCHK(0x42145bu, 0x421456u); LOADALL;
  /* 0042145b lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0042145e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042145f lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00421462 call 0x568230 */ esp -= 4; M32(esp) = 0x421467u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x421462u); RETCHK(0x421467u, 0x421462u); LOADALL;
  /* 00421467 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0042146a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0042146b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0042146e call 0x568230 */ esp -= 4; M32(esp) = 0x421473u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x42146eu); RETCHK(0x421473u, 0x42146eu); LOADALL;
  /* 00421473 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00421476 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00421478 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0042147a je 0x42148d */ if (ZF_) goto L_0042148d;
  /* 0042147c mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0042147f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00421481 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00421482 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00421485 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00421486 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00421489 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0042148a call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x42148du; SAVEALL; call_ind(c, t_); RETCHK(0x42148du, 0x42148au); LOADALL; }
L_0042148d:;
  /* 0042148d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00421490 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00421497 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00421499 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0042149a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004214a0(CPU *c) {
  NATIVE_HOOK(0x4214a0u) REGS; LOADALL;
L_004214a0:;
  /* 004214a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004214a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004214a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004214a5 push 0x61b318 */ { u32 v_ = 0x61b318u; esp -= 4; M32(esp) = v_; }
  /* 004214aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004214b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004214b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004214b8 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004214bb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004214bc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004214be push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004214bf lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004214c2 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 004214c5 call 0x5680c0 */ esp -= 4; M32(esp) = 0x4214cau; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x4214c5u); RETCHK(0x4214cau, 0x4214c5u); LOADALL;
  /* 004214ca mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004214cd mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004214d0 call 0x568120 */ esp -= 4; M32(esp) = 0x4214d5u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x4214d0u); RETCHK(0x4214d5u, 0x4214d0u); LOADALL;
  /* 004214d5 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 004214d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004214d9 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004214dc call 0x568230 */ esp -= 4; M32(esp) = 0x4214e1u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x4214dcu); RETCHK(0x4214e1u, 0x4214dcu); LOADALL;
  /* 004214e1 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 004214e4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004214e5 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004214e8 call 0x568230 */ esp -= 4; M32(esp) = 0x4214edu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x4214e8u); RETCHK(0x4214edu, 0x4214e8u); LOADALL;
  /* 004214ed lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004214f0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004214f1 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004214f4 call 0x568170 */ esp -= 4; M32(esp) = 0x4214f9u; SAVEALL; F_00568170(c); ABI_CHECK(0x568170u, 0x4214f4u); RETCHK(0x4214f9u, 0x4214f4u); LOADALL;
  /* 004214f9 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 004214fc cmp si, 0x800 */ { u32 a_ = (esi & 0xffffu), b_ = 0x800u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00421501 ja 0x421577 */ if (!(CF_|ZF_)) goto L_00421577;
  /* 00421503 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00421504 movzx edi, si */ { edi = (u32)((esi & 0xffffu)); }
  /* 00421507 lea eax, [edi*8] */ eax = (u32)((u32)(edi * 8u));
  /* 0042150e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042150f call 0x5fe9ce */ esp -= 4; M32(esp) = 0x421514u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x42150fu); RETCHK(0x421514u, 0x42150fu); LOADALL;
  /* 00421514 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00421517 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00421519 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0042151c je 0x421576 */ if (ZF_) goto L_00421576;
  /* 0042151e cmp si, bx */ { u32 a_ = (esi & 0xffffu), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00421521 jbe 0x42155a */ if ((CF_|ZF_)) goto L_0042155a;
  /* 00421523 mov esi, eax */ { esi = (u32)(eax); }
L_00421525:;
  /* 00421525 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 00421528 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00421529 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0042152c mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0042152f mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00421532 call 0x568230 */ esp -= 4; M32(esp) = 0x421537u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x421532u); RETCHK(0x421537u, 0x421532u); LOADALL;
  /* 00421537 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0042153a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0042153b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0042153e call 0x568230 */ esp -= 4; M32(esp) = 0x421543u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x42153eu); RETCHK(0x421543u, 0x42153eu); LOADALL;
  /* 00421543 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00421546 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00421549 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0042154b mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0042154e add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00421551 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00421552 jne 0x421525 */ if (!ZF_) goto L_00421525;
  /* 00421554 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00421557 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
L_0042155a:;
  /* 0042155a mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0042155d mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0042155f cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00421561 je 0x42156d */ if (ZF_) goto L_0042156d;
  /* 00421563 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00421565 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00421566 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00421567 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x42156au; SAVEALL; call_ind(c, t_); RETCHK(0x42156au, 0x421567u); LOADALL; }
  /* 0042156a mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
L_0042156d:;
  /* 0042156d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0042156e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x421573u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x42156eu); RETCHK(0x421573u, 0x42156eu); LOADALL;
  /* 00421573 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00421576:;
  /* 00421576 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00421577:;
  /* 00421577 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0042157a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0042157b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0042157c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00421583 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00421585 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00421586 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00421590(CPU *c) {
  NATIVE_HOOK(0x421590u) REGS; LOADALL;
L_00421590:;
  /* 00421590 mov eax, dword ptr [0x9b8a60] */ { const u32 m_ = (u32)(0x9b8a60u); eax = (u32)(M32(m_)); }
  /* 00421595 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00421596 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00421599 mov dword ptr [0x9b8a60], eax */ { const u32 m_ = (u32)(0x9b8a60u); M32(m_) = (u32)(eax); }
  /* 0042159e jne 0x4215aa */ if (!ZF_) goto L_004215aa;
  /* 004215a0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004215a5 mov dword ptr [0x9b8a60], eax */ { const u32 m_ = (u32)(0x9b8a60u); M32(m_) = (u32)(eax); }
L_004215aa:;
  /* 004215aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
